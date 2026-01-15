#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(168, 140);
inline const PParam KNIGHT_MAT = S(508, 267);
inline const PParam BISHOP_MAT = S(463, 233);
inline const PParam ROOK_MAT   = S(523, 367);
inline const PParam QUEEN_MAT  = S(1080, 486);
inline const PParam TEMPO_VAL  = S(53, 8);

inline const PParam BISHOP_PAIR_VAL   = S(81, 151);
inline const PParam ROOK_OPEN_VAL     = S(107, -24);
inline const PParam ROOK_SEMIOPEN_VAL = S(44, 13);

inline const PParam DOUBLED_PAWN_VAL = S(-38, -69);

inline const PParam POTENTIAL_CHECKER_VAL = S(-59, -6);
inline const PParam OUTPOST_KNIGHT_VAL    = S(45, 42);
inline const PParam OUTPOST_BISHOP_VAL    = S(54, 22);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(44, 3);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(53, -21);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(33, 32);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(61, -37);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(22, 11), S(60, 28), S(75, 64), S(182, 136), S(525, 174), S(826, 546),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(72, 31), S(62, 28), S(76, 58), S(175, 106), S(559, 2),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-83, -83), S(-82, -64), S(-48, 6), S(29, 71), S(110, 177), S(306, 245),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(44, -37), S(37, -3), S(27, 24), S(27, 64), S(89, 117), S(165, 187),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(5, -24), S(-4, 13), S(-8, -13), S(-4, -36), S(-11, -81), S(-253, -93),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(0, 105), S(-9, 81), S(-6, 28), S(-0, 2), S(11, 4), S(52, 3), S(19, -6),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-280, -12), S(-36, 23), S(-13, 46), S(35, 53), S(43, 71), S(51, 78), S(21, 80),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(35, -13), S(130, 87), S(187, 145), S(224, 168), S(268, 177), S(297, 202), S(333, 194), S(369, 194), S(415, 134),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-11, -100), S(66, 37), S(128, 74), S(155, 113), S(181, 139), S(198, 157), S(208, 170), S(226, 174), S(237, 183), S(259, 172), S(280, 164), S(336, 120), S(348, 117), S(417, 75),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(288, 127), S(211, 240), S(239, 249), S(254, 253), S(265, 262), S(271, 271), S(279, 277), S(288, 277), S(296, 282), S(306, 283), S(316, 283), S(325, 281), S(329, 280), S(347, 261), S(457, 165),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(538, 237), S(583, 270), S(616, 299), S(638, 355), S(652, 385), S(665, 408), S(670, 434), S(677, 440), S(680, 456), S(686, 463), S(689, 474), S(695, 475), S(704, 467), S(708, 467), S(710, 465), S(713, 461), S(716, 457), S(716, 455), S(723, 441), S(736, 428), S(747, 411), S(774, 376), S(791, 361), S(893, 267), S(928, 228), S(959, 200), S(938, 216), S(1073, 121),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(536, -153), S(231, -160), S(114, -74), S(78, -36), S(26, -19), S(-26, 2), S(-67, 33), S(-117, 60), S(-155, 49),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    S(230, 198), S(346, 147), S(445, 85),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    S(467, 319), S(287, 203), S(158, 59),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    S(349, 270), S(427, 278), S(432, 295), S(494, 346), S(606, 321),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    S(856, 631), S(592, 522), S(355, 399), S(182, 222), S(113, 8), S(-0, -197),
};

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(-106, 58), S(32, -23), S(-216, -109), S(17, 43), S(-228, -130),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(-26, 22), S(-21, 18), S(-20, 15), S(-15, 9), S(-21, -10),
};

inline const PParam PAWN_THREAT_KNIGHT = S(211, 49);
inline const PParam PAWN_THREAT_BISHOP = S(173, 93);
inline const PParam PAWN_THREAT_ROOK   = S(142, 85);
inline const PParam PAWN_THREAT_QUEEN  = S(152, -22);

inline const PParam KNIGHT_THREAT_BISHOP = S(102, 67);
inline const PParam KNIGHT_THREAT_ROOK   = S(198, 7);
inline const PParam KNIGHT_THREAT_QUEEN  = S(113, 6);

inline const PParam BISHOP_THREAT_KNIGHT = S(105, 30);
inline const PParam BISHOP_THREAT_ROOK   = S(180, 50);
inline const PParam BISHOP_THREAT_QUEEN  = S(150, 55);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(4, -19), S(-2, -8), S(-4, -16), S(-9, -23), S(-15, -29), S(-21, -33), S(-25, -41), S(-30, -45), S(-37, -55),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(308, 237),    S(204, 312),    S(310, 277),    S(301, 223),    S(332, 169),    S(255, 225),    S(207, 260),    S(311, 201),    //
    S(160, 155),    S(210, 196),    S(197, 153),    S(163, 120),    S(146, 92),     S(115, 131),    S(101, 163),    S(58, 172),     //
    S(100, 128),    S(103, 145),    S(117, 109),    S(102, 100),    S(85, 89),      S(60, 104),     S(33, 135),     S(12, 150),     //
    S(87, 83),      S(105, 115),    S(108, 90),     S(88, 93),      S(63, 88),      S(43, 94),      S(0, 134),      S(-17, 120),    //
    S(87, 63),      S(150, 70),     S(96, 107),     S(79, 111),     S(45, 106),     S(18, 106),     S(-5, 122),     S(-25, 108),    //
    S(85, 70),      S(211, 77),     S(159, 115),    S(110, 131),    S(76, 122),     S(52, 108),     S(36, 129),     S(-5, 121),     //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-257, -44),   S(-178, 172),   S(-348, 315),   S(129, 119),    S(56, 130),     S(-81, 113),    S(-299, 176),   S(-333, 60),    //
    S(135, 100),    S(173, 104),    S(264, 67),     S(254, 85),     S(248, 105),    S(180, 100),    S(150, 117),    S(123, 89),     //
    S(193, 84),     S(226, 99),     S(277, 130),    S(239, 147),    S(211, 155),    S(164, 165),    S(167, 107),    S(132, 104),    //
    S(250, 109),    S(233, 135),    S(246, 158),    S(216, 186),    S(231, 176),    S(208, 166),    S(204, 126),    S(203, 102),    //
    S(240, 99),     S(271, 92),     S(246, 136),    S(235, 161),    S(223, 160),    S(223, 149),    S(230, 95),     S(193, 97),     //
    S(181, 79),     S(209, 80),     S(190, 117),    S(216, 134),    S(212, 135),    S(163, 125),    S(165, 93),     S(134, 71),     //
    S(196, 70),     S(201, 68),     S(190, 77),     S(185, 98),     S(170, 104),    S(154, 64),     S(154, 67),     S(123, 10),     //
    S(136, 44),     S(173, 101),    S(194, 60),     S(210, 49),     S(192, 66),     S(151, 50),     S(139, 85),     S(91, 20),      //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-17, 163),    S(-47, 154),    S(-334, 224),   S(-165, 184),   S(-159, 197),   S(-231, 219),   S(-60, 198),    S(-11, 188),    //
    S(89, 103),     S(52, 157),     S(80, 119),     S(35, 158),     S(27, 164),     S(65, 146),     S(95, 127),     S(73, 125),     //
    S(158, 109),    S(190, 105),    S(188, 136),    S(153, 133),    S(128, 132),    S(126, 142),    S(160, 119),    S(128, 102),    //
    S(129, 97),     S(149, 122),    S(174, 126),    S(160, 164),    S(186, 150),    S(133, 136),    S(135, 114),    S(104, 102),    //
    S(149, 76),     S(160, 97),     S(163, 124),    S(176, 139),    S(168, 149),    S(134, 138),    S(110, 119),    S(111, 85),     //
    S(161, 81),     S(202, 81),     S(213, 99),     S(166, 135),    S(155, 121),    S(161, 118),    S(173, 96),     S(117, 97),     //
    S(146, 38),     S(229, 54),     S(195, 69),     S(162, 86),     S(141, 102),    S(154, 71),     S(153, 80),     S(152, 43),     //
    S(152, 44),     S(137, 92),     S(147, 105),    S(167, 64),     S(168, 58),     S(160, 113),    S(162, 71),     S(138, 62),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(397, 221),    S(432, 226),    S(402, 245),    S(412, 228),    S(404, 230),    S(369, 238),    S(374, 241),    S(367, 246),    //
    S(303, 269),    S(364, 257),    S(445, 232),    S(391, 252),    S(397, 252),    S(361, 256),    S(280, 288),    S(279, 286),    //
    S(283, 264),    S(403, 230),    S(435, 218),    S(420, 215),    S(386, 225),    S(343, 249),    S(342, 248),    S(268, 280),    //
    S(261, 249),    S(330, 248),    S(365, 236),    S(356, 228),    S(345, 239),    S(313, 254),    S(289, 259),    S(241, 266),    //
    S(220, 211),    S(283, 217),    S(263, 232),    S(266, 226),    S(256, 233),    S(245, 252),    S(217, 247),    S(191, 244),    //
    S(188, 186),    S(252, 182),    S(248, 200),    S(238, 195),    S(242, 191),    S(216, 222),    S(210, 204),    S(173, 213),    //
    S(103, 197),    S(213, 156),    S(235, 163),    S(245, 168),    S(234, 168),    S(224, 178),    S(208, 167),    S(179, 180),    //
    S(145, 193),    S(160, 213),    S(234, 172),    S(261, 152),    S(244, 169),    S(233, 185),    S(219, 179),    S(199, 200),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(495, 354),    S(566, 298),    S(552, 332),    S(486, 413),    S(491, 389),    S(497, 377),    S(504, 334),    S(425, 401),    //
    S(504, 389),    S(463, 482),    S(464, 492),    S(333, 558),    S(349, 540),    S(405, 503),    S(428, 427),    S(448, 402),    //
    S(451, 439),    S(542, 429),    S(477, 496),    S(437, 522),    S(401, 509),    S(420, 476),    S(480, 390),    S(458, 354),    //
    S(514, 345),    S(509, 421),    S(479, 459),    S(463, 498),    S(453, 501),    S(456, 442),    S(499, 359),    S(495, 320),    //
    S(503, 344),    S(507, 373),    S(491, 414),    S(467, 455),    S(467, 456),    S(467, 410),    S(482, 350),    S(496, 295),    //
    S(492, 252),    S(523, 297),    S(523, 361),    S(489, 351),    S(487, 341),    S(498, 358),    S(505, 300),    S(487, 280),    //
    S(462, 151),    S(505, 125),    S(517, 191),    S(527, 239),    S(509, 268),    S(513, 233),    S(487, 275),    S(489, 259),    //
    S(425, 190),    S(468, 6),      S(470, 45),     S(502, 123),    S(512, 189),    S(515, 137),    S(504, 161),    S(462, 218),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-573, -104),  S(-122, 155),   S(82, 63),      S(-106, 18),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(11, -17),     S(226, 22),     S(185, 42),     S(167, -31),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-23, 75),     S(232, 41),     S(241, 35),     S(158, -1),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-228, 83),    S(137, 23),     S(87, 30),      S(66, 20),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-266, 59),    S(65, -2),      S(90, -3),      S(13, 27),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-144, 36),    S(146, -33),    S(105, -8),     S(75, 11),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-3, -19),     S(164, -44),    S(119, -21),    S(47, 11),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-176, -7),    S(-18, -16),    S(-106, 15),    S(-112, 2),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

// Epoch duration: 1.22022s
// clang-format on
}  // namespace Clockwork
