#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(165, 143);
inline const PParam KNIGHT_MAT = S(501, 270);
inline const PParam BISHOP_MAT = S(459, 242);
inline const PParam ROOK_MAT   = S(513, 376);
inline const PParam QUEEN_MAT  = S(1065, 500);
inline const PParam TEMPO_VAL  = S(50, 10);

inline const PParam BISHOP_PAIR_VAL   = S(81, 151);
inline const PParam ROOK_OPEN_VAL     = S(106, -24);
inline const PParam ROOK_SEMIOPEN_VAL = S(44, 14);

inline const PParam DOUBLED_PAWN_VAL = S(-38, -70);

inline const PParam POTENTIAL_CHECKER_VAL = S(-57, -8);
inline const PParam OUTPOST_KNIGHT_VAL    = S(44, 42);
inline const PParam OUTPOST_BISHOP_VAL    = S(52, 23);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(42, 5);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(51, -20);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(30, 34);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(60, -35);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(22, 11), S(59, 29), S(75, 66), S(180, 139), S(522, 179), S(806, 560),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(71, 32), S(62, 28), S(76, 59), S(173, 108), S(557, -1),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-81, -85), S(-80, -66), S(-47, 5), S(29, 72), S(110, 180), S(301, 252),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(44, -37), S(37, -3), S(27, 24), S(26, 64), S(85, 122), S(160, 195),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(6, -24), S(-4, 13), S(-7, -13), S(-3, -37), S(-11, -82), S(-250, -97),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(1, 105), S(-9, 81), S(-6, 28), S(-0, 3), S(11, 4), S(52, 3), S(20, -6),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-280, -12), S(-36, 22), S(-14, 47), S(33, 54), S(41, 72), S(50, 79), S(21, 80),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(38, -8), S(131, 90), S(186, 150), S(223, 173), S(265, 183), S(294, 208), S(330, 201), S(365, 202), S(411, 142),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-7, -96), S(71, 40), S(131, 79), S(157, 118), S(183, 144), S(199, 162), S(210, 175), S(227, 180), S(238, 189), S(260, 178), S(281, 169), S(337, 126), S(349, 122), S(417, 80),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(291, 132), S(210, 245), S(237, 254), S(251, 260), S(262, 269), S(268, 278), S(275, 284), S(284, 284), S(292, 289), S(302, 291), S(312, 290), S(321, 289), S(325, 288), S(343, 269), S(448, 177),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(553, 248), S(591, 271), S(616, 312), S(635, 370), S(649, 394), S(661, 418), S(666, 443), S(672, 450), S(675, 466), S(680, 473), S(683, 484), S(689, 485), S(697, 478), S(701, 479), S(704, 477), S(706, 474), S(709, 469), S(710, 467), S(717, 452), S(730, 439), S(741, 423), S(770, 385), S(787, 371), S(891, 274), S(929, 231), S(955, 207), S(923, 229), S(1031, 149),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(529, -157), S(229, -157), S(114, -74), S(78, -35), S(27, -19), S(-24, 1), S(-64, 33), S(-114, 59), S(-151, 48),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    S(227, 206), S(344, 155), S(443, 92),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    S(455, 325), S(280, 207), S(155, 62),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    S(343, 277), S(421, 285), S(426, 302), S(487, 354), S(600, 328),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    S(846, 654), S(583, 537), S(347, 410), S(175, 226), S(107, 5), S(-1, -213),
};

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(-104, 57), S(33, -24), S(-211, -112), S(17, 44), S(-228, -136),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(-25, 22), S(-20, 18), S(-20, 15), S(-15, 9), S(-21, -10),
};

inline const PParam PAWN_THREAT_KNIGHT = S(200, 59);
inline const PParam PAWN_THREAT_BISHOP = S(158, 105);
inline const PParam PAWN_THREAT_ROOK   = S(130, 94);
inline const PParam PAWN_THREAT_QUEEN  = S(143, -11);

inline const PParam KNIGHT_THREAT_BISHOP = S(98, 70);
inline const PParam KNIGHT_THREAT_ROOK   = S(186, 15);
inline const PParam KNIGHT_THREAT_QUEEN  = S(102, 19);

inline const PParam BISHOP_THREAT_KNIGHT = S(102, 32);
inline const PParam BISHOP_THREAT_ROOK   = S(166, 59);
inline const PParam BISHOP_THREAT_QUEEN  = S(136, 70);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(4, -19), S(-2, -8), S(-4, -17), S(-9, -24), S(-15, -30), S(-21, -34), S(-25, -42), S(-30, -46), S(-37, -58),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(303, 245),    S(201, 319),    S(305, 285),    S(301, 226),    S(330, 172),    S(252, 231),    S(207, 264),    S(307, 207),    //
    S(157, 160),    S(206, 201),    S(195, 156),    S(161, 122),    S(145, 93),     S(113, 134),    S(101, 166),    S(56, 176),     //
    S(99, 131),     S(103, 147),    S(117, 111),    S(103, 102),    S(85, 90),      S(62, 104),     S(35, 136),     S(11, 153),     //
    S(87, 86),      S(105, 116),    S(108, 92),     S(88, 95),      S(63, 89),      S(44, 95),      S(2, 135),      S(-17, 122),    //
    S(87, 65),      S(151, 71),     S(97, 108),     S(79, 113),     S(45, 108),     S(19, 107),     S(-3, 123),     S(-25, 110),    //
    S(86, 71),      S(211, 80),     S(160, 117),    S(111, 133),    S(76, 124),     S(53, 109),     S(37, 130),     S(-5, 122),     //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-246, -53),   S(-168, 171),   S(-363, 342),   S(129, 123),    S(59, 133),     S(-83, 119),    S(-285, 174),   S(-328, 58),    //
    S(137, 102),    S(171, 109),    S(265, 70),     S(254, 91),     S(250, 109),    S(182, 103),    S(151, 120),    S(125, 91),     //
    S(192, 88),     S(225, 107),    S(279, 133),    S(239, 151),    S(213, 158),    S(168, 167),    S(169, 110),    S(134, 107),    //
    S(248, 114),    S(231, 141),    S(246, 163),    S(215, 191),    S(229, 182),    S(209, 169),    S(203, 131),    S(203, 106),    //
    S(239, 103),    S(269, 98),     S(244, 141),    S(233, 165),    S(223, 164),    S(222, 154),    S(230, 100),    S(195, 98),     //
    S(180, 83),     S(208, 84),     S(188, 121),    S(215, 138),    S(210, 140),    S(161, 129),    S(164, 96),     S(135, 73),     //
    S(196, 72),     S(199, 73),     S(190, 80),     S(184, 101),    S(169, 108),    S(155, 67),     S(152, 70),     S(123, 12),     //
    S(137, 45),     S(176, 100),    S(193, 63),     S(209, 52),     S(190, 71),     S(153, 52),     S(140, 86),     S(93, 20),      //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-14, 166),    S(-44, 156),    S(-335, 227),   S(-162, 188),   S(-158, 201),   S(-230, 225),   S(-56, 201),    S(-5, 188),     //
    S(91, 104),     S(54, 161),     S(83, 122),     S(38, 161),     S(31, 166),     S(68, 149),     S(98, 129),     S(76, 127),     //
    S(159, 111),    S(189, 111),    S(189, 141),    S(155, 137),    S(132, 134),    S(130, 143),    S(160, 123),    S(129, 105),    //
    S(129, 100),    S(148, 126),    S(173, 130),    S(162, 167),    S(187, 153),    S(135, 139),    S(138, 116),    S(108, 103),    //
    S(151, 79),     S(161, 100),    S(161, 129),    S(176, 143),    S(169, 152),    S(135, 141),    S(114, 120),    S(114, 86),     //
    S(160, 85),     S(203, 83),     S(212, 103),    S(166, 139),    S(154, 125),    S(161, 122),    S(173, 99),     S(118, 99),     //
    S(146, 40),     S(229, 57),     S(195, 72),     S(162, 88),     S(140, 106),    S(154, 73),     S(154, 82),     S(155, 44),     //
    S(153, 46),     S(137, 93),     S(148, 106),    S(168, 66),     S(168, 61),     S(159, 116),    S(165, 73),     S(139, 64),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(398, 227),    S(432, 233),    S(401, 253),    S(413, 235),    S(406, 236),    S(372, 243),    S(376, 247),    S(369, 252),    //
    S(304, 275),    S(364, 264),    S(443, 241),    S(390, 261),    S(396, 260),    S(360, 263),    S(281, 295),    S(280, 292),    //
    S(283, 270),    S(401, 238),    S(433, 226),    S(417, 224),    S(385, 233),    S(343, 255),    S(341, 256),    S(269, 287),    //
    S(260, 256),    S(327, 257),    S(363, 244),    S(355, 235),    S(344, 246),    S(313, 261),    S(288, 266),    S(241, 272),    //
    S(222, 215),    S(282, 225),    S(262, 240),    S(267, 232),    S(256, 239),    S(245, 259),    S(218, 253),    S(192, 250),    //
    S(190, 191),    S(253, 187),    S(247, 206),    S(239, 201),    S(242, 196),    S(216, 228),    S(211, 209),    S(176, 218),    //
    S(106, 199),    S(214, 160),    S(235, 168),    S(245, 174),    S(233, 174),    S(225, 184),    S(211, 171),    S(182, 183),    //
    S(146, 197),    S(160, 218),    S(234, 178),    S(261, 157),    S(245, 173),    S(234, 190),    S(220, 184),    S(201, 203),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(495, 362),    S(566, 306),    S(553, 338),    S(484, 423),    S(491, 397),    S(497, 385),    S(503, 341),    S(429, 403),    //
    S(501, 399),    S(463, 489),    S(463, 501),    S(335, 564),    S(351, 544),    S(405, 509),    S(429, 431),    S(448, 408),    //
    S(448, 450),    S(540, 439),    S(477, 503),    S(436, 529),    S(402, 515),    S(422, 480),    S(480, 397),    S(457, 361),    //
    S(510, 354),    S(505, 431),    S(477, 467),    S(462, 506),    S(451, 509),    S(456, 448),    S(498, 366),    S(493, 328),    //
    S(501, 351),    S(503, 384),    S(489, 421),    S(466, 462),    S(466, 464),    S(467, 417),    S(481, 359),    S(496, 303),    //
    S(489, 261),    S(520, 306),    S(520, 371),    S(487, 360),    S(485, 350),    S(497, 365),    S(505, 306),    S(486, 288),    //
    S(458, 161),    S(503, 133),    S(516, 198),    S(524, 249),    S(506, 278),    S(512, 240),    S(486, 283),    S(489, 265),    //
    S(423, 196),    S(466, 10),     S(468, 54),     S(500, 132),    S(509, 199),    S(514, 144),    S(502, 170),    S(463, 223),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-549, -127),  S(-111, 147),   S(82, 62),      S(-110, 23),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(26, -28),     S(211, 32),     S(180, 49),     S(156, -25),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-17, 74),     S(226, 46),     S(236, 40),     S(151, 4),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-231, 83),    S(135, 26),     S(82, 34),      S(66, 23),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-267, 58),    S(62, 0),       S(84, 0),       S(6, 31),       S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-142, 33),    S(143, -32),    S(100, -7),     S(70, 13),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-1, -22),     S(163, -46),    S(118, -22),    S(46, 11),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-170, -15),   S(-17, -19),    S(-105, 12),    S(-110, -2),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

// Epoch duration: 1.40732s
// clang-format on
}  // namespace Clockwork
