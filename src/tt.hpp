#pragma once

#include "position.hpp"
#include "util/mem.hpp"
#include <array>
#include <atomic>
#include <bit>
#include <type_traits>

namespace Clockwork {

enum Bound : u8 {
    None  = 0,
    Lower = 1,
    Upper = 2,
    Exact = 3,
};

struct TTEntry {
    u16  key16;
    Move move;
    i16  score;
    i16  eval;
    u8   depth;
    u8   info;

    [[nodiscard]] Bound bound() const {
        return static_cast<Bound>(info & 0b011);
    }
    [[nodiscard]] bool ttpv() const {
        return static_cast<bool>(info & 0b100);
    }
    [[nodiscard]] u8 age() const {
        return info >> 3;
    }
};

struct TTCluster {
    std::array<TTEntry, 3> entries;
    std::array<u8, 2>      padding;
};

struct TTClusterMemory {
    using T = std::conditional_t<std::atomic<u128>::is_always_lock_free, u128, u64>;
    constexpr static auto ELEMENTS = 32 / sizeof(T);

    alignas(32) std::array<std::atomic<T>, ELEMENTS> data;

    [[nodiscard]] auto load() const -> TTCluster {
        std::array<T, ELEMENTS> out;
#pragma GCC unroll ELEMENTS
        for (usize i = 0; i < ELEMENTS; ++i) {
            out[i] = this->data[i].load(std::memory_order_relaxed);
        }
        return std::bit_cast<TTCluster>(out);
    }

    auto store(TTCluster cluster) {
        auto mem = std::bit_cast<std::array<T, ELEMENTS>>(cluster);
#pragma GCC unroll ELEMENTS
        for (usize i = 0; i < ELEMENTS; ++i) {
            this->data[i].store(mem[i], std::memory_order_relaxed);
        }
    }
};

static_assert(sizeof(TTEntry) == 10 * sizeof(u8));
static_assert(sizeof(TTCluster) == 32 * sizeof(u8));
static_assert(sizeof(TTClusterMemory) == 32 * sizeof(u8));

struct TTData {
    Value eval;
    Move  move;
    Value score;
    Depth depth;
    u8    info;

    [[nodiscard]] Bound bound() const {
        return static_cast<Bound>(info & 0b011);
    }
    [[nodiscard]] bool ttpv() const {
        return static_cast<bool>(info & 0b100);
    }
    [[nodiscard]] u8 age() const {
        return info >> 3;
    }
};

class TT {
public:
    static constexpr size_t DEFAULT_SIZE_MB = 16;
    static constexpr size_t TT_ALIGNMENT    = 64;

    static constexpr u8 MAX_AGE  = 32;
    static constexpr u8 AGE_MASK = 0x1F;

    TT(size_t mb = DEFAULT_SIZE_MB);

    std::optional<TTData> probe(const Position& position, i32 ply) const;
    void                  store(const Position& position,
                                i32             ply,
                                Value           eval,
                                Move            move,
                                Value           score,
                                Depth           depth,
                                bool            ttpv,
                                Bound           bound);
    void                  resize(size_t mb, usize thread_count);
    void                  clear(usize thread_count);
    void                  increment_age();
    i32                   hashfull() const;
    TTClusterMemory*      addr_key(const u64 key) const;


private:
    unique_ptr_huge_page<TTClusterMemory[]> m_clusters;
    size_t                                  m_size;
    u8                                      m_age;
};

}  // namespace Clockwork
