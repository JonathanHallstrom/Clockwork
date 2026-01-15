#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(164, 145);
inline const PParam KNIGHT_MAT = S(496, 275);
inline const PParam BISHOP_MAT = S(455, 244);
inline const PParam ROOK_MAT   = S(507, 380);
inline const PParam QUEEN_MAT  = S(1050, 505);
inline const PParam TEMPO_VAL  = S(49, 11);

inline const PParam BISHOP_PAIR_VAL   = S(81, 151);
inline const PParam ROOK_OPEN_VAL     = S(106, -24);
inline const PParam ROOK_SEMIOPEN_VAL = S(43, 14);

inline const PParam DOUBLED_PAWN_VAL = S(-38, -70);

inline const PParam POTENTIAL_CHECKER_VAL = S(-56, -9);
inline const PParam OUTPOST_KNIGHT_VAL    = S(44, 42);
inline const PParam OUTPOST_BISHOP_VAL    = S(51, 24);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(42, 5);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(51, -20);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(29, 34);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(59, -35);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(21, 12), S(59, 30), S(74, 67), S(178, 141), S(520, 182), S(801, 564),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(71, 33), S(62, 29), S(75, 60), S(172, 109), S(556, -3),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-81, -87), S(-80, -67), S(-47, 5), S(29, 72), S(110, 181), S(299, 256),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(44, -37), S(37, -3), S(27, 24), S(26, 65), S(83, 124), S(157, 199),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(6, -24), S(-4, 13), S(-7, -14), S(-2, -37), S(-10, -83), S(-249, -98),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(1, 105), S(-9, 82), S(-7, 29), S(-1, 3), S(11, 4), S(52, 3), S(19, -6),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-279, -12), S(-35, 22), S(-14, 48), S(33, 55), S(41, 72), S(49, 80), S(21, 80),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(41, -5), S(132, 92), S(187, 152), S(223, 175), S(265, 186), S(294, 211), S(329, 204), S(365, 205), S(411, 145),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-7, -94), S(72, 41), S(131, 81), S(157, 121), S(182, 147), S(198, 165), S(209, 178), S(226, 182), S(237, 192), S(259, 180), S(280, 172), S(335, 128), S(348, 124), S(416, 83),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(295, 134), S(212, 247), S(239, 256), S(253, 263), S(264, 272), S(269, 281), S(276, 287), S(285, 288), S(293, 293), S(303, 294), S(313, 294), S(321, 293), S(326, 292), S(343, 272), S(447, 182),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(565, 256), S(601, 273), S(621, 320), S(639, 378), S(653, 400), S(664, 425), S(669, 449), S(675, 456), S(678, 472), S(683, 479), S(686, 490), S(691, 491), S(699, 485), S(704, 486), S(706, 484), S(708, 481), S(711, 477), S(712, 474), S(719, 459), S(733, 446), S(744, 429), S(774, 391), S(790, 378), S(895, 278), S(935, 234), S(959, 210), S(917, 239), S(1014, 164),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(526, -160), S(227, -156), S(113, -73), S(77, -35), S(26, -19), S(-25, 1), S(-65, 32), S(-114, 58), S(-151, 47),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    S(225, 206), S(341, 155), S(441, 92),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    S(452, 332), S(278, 211), S(155, 64),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    S(340, 281), S(417, 289), S(423, 306), S(484, 358), S(597, 333),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    S(839, 664), S(578, 544), S(343, 415), S(173, 229), S(107, 5), S(3, -219),
};

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(-103, 56), S(34, -25), S(-209, -114), S(16, 44), S(-226, -138),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(-25, 22), S(-20, 18), S(-21, 15), S(-15, 9), S(-20, -10),
};

inline const PParam PAWN_THREAT_KNIGHT = S(194, 64);
inline const PParam PAWN_THREAT_BISHOP = S(151, 111);
inline const PParam PAWN_THREAT_ROOK   = S(124, 98);
inline const PParam PAWN_THREAT_QUEEN  = S(139, -5);

inline const PParam KNIGHT_THREAT_BISHOP = S(95, 72);
inline const PParam KNIGHT_THREAT_ROOK   = S(180, 18);
inline const PParam KNIGHT_THREAT_QUEEN  = S(96, 26);

inline const PParam BISHOP_THREAT_KNIGHT = S(100, 34);
inline const PParam BISHOP_THREAT_ROOK   = S(160, 63);
inline const PParam BISHOP_THREAT_QUEEN  = S(130, 77);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(4, -19), S(-2, -8), S(-4, -17), S(-9, -24), S(-15, -30), S(-21, -35), S(-25, -42), S(-30, -47), S(-36, -59),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(299, 250),    S(198, 323),    S(301, 289),    S(300, 228),    S(327, 173),    S(248, 235),    S(205, 266),    S(303, 211),    //
    S(155, 163),    S(203, 204),    S(193, 158),    S(160, 123),    S(144, 93),     S(110, 136),    S(99, 167),     S(54, 178),     //
    S(97, 132),     S(102, 148),    S(116, 111),    S(102, 102),    S(84, 91),      S(62, 104),     S(34, 137),     S(9, 154),      //
    S(85, 87),      S(105, 117),    S(107, 93),     S(87, 96),      S(62, 90),      S(43, 96),      S(2, 135),      S(-18, 123),    //
    S(86, 65),      S(150, 71),     S(96, 109),     S(78, 114),     S(44, 108),     S(18, 107),     S(-4, 123),     S(-26, 111),    //
    S(85, 72),      S(210, 81),     S(160, 118),    S(110, 134),    S(75, 125),     S(52, 110),     S(37, 131),     S(-6, 123),     //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-239, -56),   S(-161, 170),   S(-368, 355),   S(130, 126),    S(62, 135),     S(-82, 122),    S(-277, 174),   S(-324, 58),    //
    S(139, 104),    S(171, 112),    S(268, 71),     S(255, 94),     S(252, 112),    S(185, 104),    S(153, 122),    S(127, 92),     //
    S(194, 91),     S(226, 111),    S(281, 135),    S(241, 154),    S(215, 160),    S(171, 168),    S(172, 111),    S(136, 109),    //
    S(248, 118),    S(232, 144),    S(248, 165),    S(216, 194),    S(230, 185),    S(211, 171),    S(204, 133),    S(204, 108),    //
    S(240, 106),    S(269, 101),    S(244, 144),    S(234, 168),    S(224, 167),    S(223, 156),    S(231, 102),    S(197, 99),     //
    S(181, 85),     S(209, 86),     S(189, 123),    S(216, 140),    S(211, 142),    S(162, 131),    S(165, 98),     S(137, 74),     //
    S(198, 73),     S(199, 75),     S(191, 82),     S(185, 103),    S(169, 111),    S(156, 69),     S(153, 72),     S(125, 13),     //
    S(138, 46),     S(178, 100),    S(194, 64),     S(210, 54),     S(191, 73),     S(155, 53),     S(142, 87),     S(95, 20),      //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-12, 166),    S(-42, 156),    S(-335, 228),   S(-159, 189),   S(-157, 203),   S(-229, 226),   S(-54, 202),    S(-2, 187),     //
    S(92, 104),     S(55, 162),     S(85, 122),     S(40, 161),     S(34, 167),     S(71, 149),     S(100, 129),    S(78, 126),     //
    S(161, 111),    S(189, 112),    S(190, 142),    S(156, 137),    S(135, 134),    S(133, 142),    S(161, 124),    S(129, 106),    //
    S(129, 100),    S(148, 128),    S(173, 132),    S(163, 168),    S(188, 154),    S(137, 139),    S(140, 116),    S(110, 102),    //
    S(152, 79),     S(161, 100),    S(161, 130),    S(177, 144),    S(170, 153),    S(136, 142),    S(117, 119),    S(117, 85),     //
    S(160, 86),     S(204, 83),     S(212, 105),    S(167, 140),    S(154, 126),    S(161, 124),    S(174, 99),     S(119, 99),     //
    S(146, 41),     S(229, 58),     S(196, 72),     S(163, 89),     S(141, 107),    S(155, 74),     S(155, 82),     S(157, 43),     //
    S(153, 46),     S(138, 93),     S(150, 105),    S(169, 66),     S(169, 61),     S(160, 116),    S(166, 73),     S(140, 64),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(394, 229),    S(428, 236),    S(397, 256),    S(409, 238),    S(403, 238),    S(369, 245),    S(373, 249),    S(366, 254),    //
    S(300, 278),    S(360, 268),    S(438, 245),    S(386, 265),    S(391, 264),    S(356, 267),    S(277, 298),    S(276, 295),    //
    S(279, 273),    S(396, 242),    S(428, 230),    S(412, 228),    S(381, 236),    S(339, 258),    S(337, 259),    S(265, 290),    //
    S(255, 259),    S(322, 261),    S(358, 247),    S(351, 238),    S(339, 249),    S(309, 263),    S(284, 269),    S(238, 275),    //
    S(219, 217),    S(277, 228),    S(258, 243),    S(263, 234),    S(252, 242),    S(241, 262),    S(214, 256),    S(189, 253),    //
    S(187, 193),    S(250, 189),    S(243, 209),    S(235, 204),    S(238, 199),    S(212, 231),    S(207, 212),    S(173, 219),    //
    S(104, 200),    S(210, 162),    S(231, 171),    S(242, 176),    S(230, 177),    S(221, 187),    S(208, 173),    S(179, 185),    //
    S(143, 198),    S(156, 221),    S(230, 180),    S(257, 160),    S(242, 176),    S(230, 192),    S(217, 186),    S(197, 205),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(495, 366),    S(565, 310),    S(553, 341),    S(483, 428),    S(490, 400),    S(496, 389),    S(501, 344),    S(430, 404),    //
    S(499, 403),    S(462, 492),    S(462, 505),    S(335, 567),    S(352, 547),    S(405, 512),    S(429, 433),    S(448, 411),    //
    S(446, 455),    S(539, 443),    S(477, 506),    S(435, 533),    S(402, 518),    S(422, 482),    S(479, 401),    S(457, 365),    //
    S(508, 359),    S(503, 436),    S(475, 472),    S(461, 510),    S(450, 513),    S(456, 450),    S(497, 369),    S(492, 331),    //
    S(500, 355),    S(500, 390),    S(488, 425),    S(465, 465),    S(465, 468),    S(466, 420),    S(479, 364),    S(495, 306),    //
    S(487, 266),    S(519, 310),    S(518, 376),    S(485, 364),    S(483, 355),    S(496, 368),    S(505, 309),    S(485, 291),    //
    S(455, 167),    S(501, 137),    S(514, 202),    S(522, 254),    S(503, 282),    S(510, 244),    S(484, 286),    S(488, 268),    //
    S(421, 199),    S(464, 12),     S(466, 58),     S(498, 136),    S(507, 205),    S(513, 148),    S(500, 173),    S(463, 225),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-539, -137),  S(-104, 144),   S(84, 62),      S(-111, 26),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(34, -32),     S(204, 37),     S(179, 53),     S(151, -21),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-14, 74),     S(223, 49),     S(233, 43),     S(148, 8),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-232, 84),    S(135, 28),     S(79, 36),      S(66, 25),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-267, 59),    S(61, 2),       S(81, 2),       S(4, 34),       S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-141, 32),    S(142, -31),    S(99, -5),      S(68, 14),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-0, -23),     S(163, -46),    S(117, -21),    S(45, 11),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-167, -18),   S(-16, -20),    S(-104, 11),    S(-110, -3),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

// Epoch duration: 1.47678s
// clang-format on
}  // namespace Clockwork
