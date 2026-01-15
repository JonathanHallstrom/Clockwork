#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(73, 42);
inline const PParam KNIGHT_MAT = S(250, 48);
inline const PParam BISHOP_MAT = S(262, 34);
inline const PParam ROOK_MAT   = S(270, 86);
inline const PParam QUEEN_MAT  = S(380, -396);
inline const PParam TEMPO_VAL  = S(30, -1);

inline const PParam BISHOP_PAIR_VAL   = S(39, 60);
inline const PParam ROOK_OPEN_VAL     = S(53, -18);
inline const PParam ROOK_SEMIOPEN_VAL = S(24, -6);

inline const PParam DOUBLED_PAWN_VAL = S(-14, -25);

inline const PParam POTENTIAL_CHECKER_VAL = S(-31, 8);
inline const PParam OUTPOST_KNIGHT_VAL    = S(22, 15);
inline const PParam OUTPOST_BISHOP_VAL    = S(24, 6);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(19, 6);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(24, -11);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(12, 16);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(32, -33);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(13, -2), S(30, 7), S(32, 19), S(82, 29), S(177, -14), S(163, -35),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(35, 4), S(28, 6), S(32, 19), S(68, 25), S(141, -12),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-38, -20), S(-35, -14), S(-18, 10), S(21, 21), S(58, 41), S(131, 61),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(16, -12), S(12, 1), S(8, 6), S(9, 12), S(15, 18), S(14, 2),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(6, -6), S(-4, 10), S(-6, -5), S(0, -15), S(-6, -28), S(-73, -32),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-4, 28), S(-2, 17), S(-4, 6), S(-2, 1), S(5, 3), S(20, 1), S(4, -4),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-126, -5), S(-37, 19), S(-15, 16), S(14, 10), S(26, 10), S(31, 12), S(15, 16),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-5, -36), S(35, 10), S(60, 23), S(75, 31), S(95, 33), S(108, 44), S(124, 37), S(139, 37), S(160, -2),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-12, -69), S(18, -14), S(47, -6), S(58, 11), S(71, 22), S(78, 31), S(83, 36), S(91, 34), S(96, 36), S(106, 26), S(114, 21), S(128, 2), S(129, 5), S(137, -11),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(106, -39), S(71, 42), S(83, 47), S(91, 47), S(96, 52), S(99, 56), S(103, 58), S(107, 57), S(110, 60), S(115, 59), S(120, 58), S(124, 57), S(129, 51), S(136, 42), S(146, 21),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(111, -75), S(156, -114), S(175, -85), S(189, -60), S(196, -47), S(204, -40), S(208, -30), S(213, -34), S(214, -25), S(218, -26), S(221, -25), S(224, -25), S(231, -36), S(235, -39), S(240, -50), S(249, -68), S(256, -82), S(264, -96), S(284, -128), S(300, -145), S(309, -166), S(294, -179), S(337, -207), S(275, -188), S(324, -228), S(202, -184), S(248, -215), S(124, -177),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(250, -112), S(109, -68), S(50, -27), S(34, -12), S(9, -6), S(-14, 4), S(-38, 20), S(-57, 26), S(-70, 19),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    S(85, 24), S(123, 26), S(156, 14),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    S(139, 55), S(85, 40), S(50, 11),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    S(150, 51), S(186, 63), S(182, 83), S(205, 103), S(211, 109),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    S(632, 796), S(278, 327), S(-59, -167), S(-373, -676), S(-649, -1201), S(-935, -1724),
};

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(-50, 23), S(7, 2), S(-68, -18), S(11, 18), S(-328, -504),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(-10, 5), S(-6, 1), S(-6, 3), S(-4, 1), S(-11, -1),
};

inline const PParam PAWN_THREAT_KNIGHT = S(107, 5);
inline const PParam PAWN_THREAT_BISHOP = S(99, 26);
inline const PParam PAWN_THREAT_ROOK   = S(87, 32);
inline const PParam PAWN_THREAT_QUEEN  = S(80, -21);

inline const PParam KNIGHT_THREAT_BISHOP = S(55, 13);
inline const PParam KNIGHT_THREAT_ROOK   = S(109, -15);
inline const PParam KNIGHT_THREAT_QUEEN  = S(76, -47);

inline const PParam BISHOP_THREAT_KNIGHT = S(51, 3);
inline const PParam BISHOP_THREAT_ROOK   = S(101, 3);
inline const PParam BISHOP_THREAT_QUEEN  = S(97, -26);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(2, -10), S(-4, 3), S(-4, 0), S(-6, -2), S(-9, -3), S(-11, -4), S(-12, -7), S(-15, -9), S(-18, -12),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(144, 44),     S(94, 78),      S(126, 71),     S(139, 50),     S(130, 52),     S(93, 72),      S(74, 80),      S(131, 50),     //
    S(79, 46),      S(98, 61),      S(95, 48),      S(87, 43),      S(73, 41),      S(56, 53),      S(47, 64),      S(31, 67),      //
    S(45, 37),      S(45, 43),      S(49, 26),      S(53, 35),      S(42, 30),      S(27, 28),      S(14, 45),      S(8, 53),       //
    S(36, 21),      S(39, 29),      S(41, 14),      S(35, 4),       S(24, 11),      S(16, 26),      S(-3, 47),      S(-9, 41),      //
    S(32, 17),      S(49, 9),       S(29, 23),      S(18, -5),      S(9, 2),        S(-0, 34),      S(-10, 39),     S(-15, 38),     //
    S(28, 27),      S(74, 28),      S(52, 31),      S(30, 22),      S(24, 23),      S(16, 37),      S(6, 57),       S(-8, 55),      //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-114, 35),    S(-93, 47),     S(8, -75),      S(-0, 42),      S(-34, 54),     S(-40, 29),     S(-150, 78),    S(-142, 64),    //
    S(49, 16),      S(52, 25),      S(87, 13),      S(83, 11),      S(98, -2),      S(60, 29),      S(39, 39),      S(31, 37),      //
    S(67, 19),      S(93, 6),       S(89, 33),      S(84, 34),      S(70, 47),      S(42, 60),      S(51, 32),      S(36, 43),      //
    S(95, 20),      S(99, 17),      S(89, 39),      S(90, 44),      S(90, 46),      S(76, 50),      S(75, 31),      S(71, 27),      //
    S(91, 12),      S(106, 6),      S(95, 25),      S(90, 35),      S(82, 40),      S(83, 41),      S(85, 16),      S(61, 22),      //
    S(63, 6),       S(75, 6),       S(71, 26),      S(79, 27),      S(79, 32),      S(57, 33),      S(56, 15),      S(40, 10),      //
    S(72, 1),       S(77, -5),      S(68, 3),       S(66, 14),      S(61, 19),      S(52, 2),       S(50, 5),       S(38, -19),     //
    S(45, 15),      S(54, 28),      S(71, -7),      S(82, -16),     S(73, -1),      S(51, -8),      S(42, 19),      S(23, 4),       //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-15, 49),     S(-59, 40),     S(-161, 58),    S(-115, 44),    S(-88, 40),     S(-116, 37),    S(-32, 22),     S(-4, 37),      //
    S(27, 21),      S(5, 35),       S(27, 21),      S(2, 31),       S(2, 27),       S(28, 26),      S(28, 21),      S(22, 17),      //
    S(56, 22),      S(85, 3),       S(64, 25),      S(59, 24),      S(45, 29),      S(37, 33),      S(65, 19),      S(47, 15),      //
    S(46, 11),      S(56, 19),      S(70, 17),      S(63, 38),      S(71, 31),      S(47, 29),      S(44, 23),      S(27, 23),      //
    S(58, 8),       S(52, 14),      S(62, 21),      S(64, 24),      S(59, 32),      S(47, 31),      S(26, 23),      S(40, 16),      //
    S(54, -4),      S(82, 11),      S(81, 1),       S(62, 25),      S(58, 25),      S(53, 18),      S(71, 16),      S(32, 10),      //
    S(60, 2),       S(84, -18),     S(76, -4),      S(56, 0),       S(46, 7),       S(60, 5),       S(51, -2),      S(55, -5),      //
    S(54, -7),      S(51, 18),      S(45, 8),       S(62, -10),     S(66, -16),     S(54, 10),      S(56, 6),       S(44, -2),      //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(137, 47),     S(144, 46),     S(131, 52),     S(147, 42),     S(142, 47),     S(129, 47),     S(136, 46),     S(140, 53),     //
    S(121, 62),     S(132, 59),     S(168, 43),     S(159, 46),     S(160, 52),     S(145, 54),     S(111, 68),     S(108, 70),     //
    S(106, 68),     S(150, 55),     S(167, 44),     S(175, 48),     S(157, 57),     S(130, 63),     S(131, 62),     S(107, 73),     //
    S(96, 66),      S(130, 59),     S(145, 49),     S(145, 51),     S(142, 59),     S(126, 62),     S(116, 63),     S(91, 71),      //
    S(80, 42),      S(114, 43),     S(105, 46),     S(107, 42),     S(100, 51),     S(97, 60),      S(81, 61),      S(73, 58),      //
    S(69, 28),      S(101, 18),     S(103, 24),     S(102, 21),     S(101, 23),     S(89, 40),      S(82, 36),      S(67, 36),      //
    S(31, 42),      S(83, 11),      S(96, 13),      S(104, 12),     S(98, 14),      S(88, 25),      S(80, 20),      S(69, 25),      //
    S(49, 47),      S(58, 52),      S(92, 26),      S(105, 24),     S(97, 30),      S(92, 35),      S(86, 33),      S(75, 47),      //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(233, -197),   S(274, -226),   S(255, -174),   S(208, -85),    S(181, -55),    S(188, -66),    S(198, -100),   S(174, -98),    //
    S(180, -30),    S(175, -33),    S(177, -22),    S(121, 27),     S(106, 48),     S(131, 32),     S(124, 27),     S(147, -17),    //
    S(161, -20),    S(186, -12),    S(163, 23),     S(137, 58),     S(105, 77),     S(116, 55),     S(151, 8),      S(142, -8),     //
    S(176, -35),    S(174, -6),     S(146, 37),     S(128, 87),     S(119, 98),     S(129, 51),     S(157, 0),      S(163, -30),    //
    S(165, -25),    S(158, 7),      S(152, 21),     S(124, 78),     S(122, 83),     S(130, 49),     S(140, 14),     S(151, -30),    //
    S(156, -43),    S(170, -31),    S(167, 7),      S(147, 13),     S(141, 22),     S(147, 23),     S(154, -18),    S(151, -35),    //
    S(144, -77),    S(160, -86),    S(159, -57),    S(164, -36),    S(157, -30),    S(156, -40),    S(145, -25),    S(150, -47),    //
    S(128, -45),    S(144, -104),   S(144, -122),   S(151, -78),    S(156, -60),    S(155, -74),    S(153, -66),    S(136, -51),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-57, -2),     S(-23, 35),     S(19, 35),      S(48, 28),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(4, 11),       S(55, -19),     S(59, 10),      S(118, 8),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-34, 40),     S(21, 17),      S(37, 25),      S(83, 22),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-98, 44),     S(35, 17),      S(9, 30),       S(33, 24),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-104, 26),    S(32, 3),       S(55, 3),       S(30, 13),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-61, 9),      S(64, -18),     S(51, -5),      S(48, -1),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-10, -10),    S(70, -25),     S(53, -17),     S(27, -4),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-94, 10),     S(-14, -6),     S(-50, 0),      S(-52, -6),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

// Epoch duration: 1.26743s
// clang-format on
}  // namespace Clockwork
