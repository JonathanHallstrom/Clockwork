#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(161, 145);
inline const PParam KNIGHT_MAT = S(505, 262);
inline const PParam BISHOP_MAT = S(451, 227);
inline const PParam ROOK_MAT   = S(529, 362);
inline const PParam QUEEN_MAT  = S(1080, 481);
inline const PParam TEMPO_VAL  = S(54, 8);

inline const PParam BISHOP_PAIR_VAL   = S(81, 150);
inline const PParam ROOK_OPEN_VAL     = S(107, -24);
inline const PParam ROOK_SEMIOPEN_VAL = S(43, 14);

inline const PParam DOUBLED_PAWN_VAL = S(-25, -79);

inline const PParam POTENTIAL_CHECKER_VAL = S(-57, -7);
inline const PParam OUTPOST_KNIGHT_VAL    = S(44, 42);
inline const PParam OUTPOST_BISHOP_VAL    = S(53, 23);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(43, 4);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(51, -21);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(32, 32);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(59, -32);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(21, 10), S(58, 30), S(74, 64), S(172, 140), S(521, 179), S(811, 546),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(67, 34), S(60, 28), S(78, 57), S(177, 104), S(556, 1),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-82, -85), S(-79, -69), S(-49, 1), S(26, 69), S(120, 186), S(306, 246),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(42, -34), S(35, -3), S(27, 23), S(29, 61), S(86, 119), S(155, 195),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(7, -25), S(-2, 8), S(-5, -16), S(-1, -39), S(-11, -81), S(-256, -92),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(17, 101), S(-4, 80), S(-5, 29), S(-4, 5), S(5, 5), S(45, 3), S(10, -6),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-274, -15), S(-28, 20), S(-8, 45), S(36, 55), S(39, 72), S(47, 77), S(21, 76),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(33, -19), S(127, 81), S(182, 140), S(217, 165), S(262, 173), S(291, 198), S(327, 189), S(363, 189), S(410, 128),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-4, -101), S(71, 39), S(132, 75), S(159, 114), S(186, 139), S(203, 157), S(213, 170), S(231, 174), S(242, 183), S(265, 171), S(285, 163), S(342, 120), S(355, 115), S(420, 76),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(289, 125), S(209, 240), S(237, 247), S(255, 251), S(267, 259), S(273, 269), S(280, 275), S(289, 274), S(297, 279), S(307, 281), S(318, 280), S(328, 278), S(332, 276), S(350, 257), S(461, 161),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(543, 219), S(585, 268), S(620, 291), S(643, 350), S(656, 380), S(669, 403), S(674, 431), S(681, 437), S(684, 454), S(690, 461), S(694, 471), S(699, 472), S(708, 465), S(713, 464), S(716, 463), S(719, 459), S(722, 454), S(722, 452), S(730, 437), S(743, 425), S(755, 408), S(783, 372), S(800, 357), S(902, 262), S(934, 225), S(967, 196), S(947, 210), S(1079, 118),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(427, -78), S(133, -88), S(51, -31), S(37, -7), S(12, -5), S(-14, 4), S(-30, 22), S(-55, 35), S(-71, 12),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    S(245, 199), S(357, 152), S(452, 92),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    S(484, 319), S(299, 203), S(158, 61),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    S(348, 268), S(423, 279), S(429, 296), S(502, 341), S(623, 314),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    S(868, 628), S(601, 522), S(359, 402), S(183, 227), S(116, 12), S(7, -197),
};

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(-73, 38), S(31, -22), S(-223, -110), S(26, 40), S(-229, -130),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(-24, 19), S(-19, 17), S(-19, 14), S(-16, 9), S(-21, -10),
};

inline const PParam PAWN_THREAT_KNIGHT = S(209, 49);
inline const PParam PAWN_THREAT_BISHOP = S(173, 93);
inline const PParam PAWN_THREAT_ROOK   = S(142, 84);
inline const PParam PAWN_THREAT_QUEEN  = S(152, -20);

inline const PParam KNIGHT_THREAT_BISHOP = S(102, 67);
inline const PParam KNIGHT_THREAT_ROOK   = S(198, 7);
inline const PParam KNIGHT_THREAT_QUEEN  = S(114, 5);

inline const PParam BISHOP_THREAT_KNIGHT = S(105, 29);
inline const PParam BISHOP_THREAT_ROOK   = S(180, 50);
inline const PParam BISHOP_THREAT_QUEEN  = S(151, 54);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(4, -19), S(-2, -8), S(-4, -16), S(-10, -23), S(-16, -29), S(-22, -33), S(-26, -41), S(-31, -45), S(-38, -53),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(303, 261),    S(166, 335),    S(267, 292),    S(309, 200),    S(343, 152),    S(273, 209),    S(217, 251),    S(331, 190),    //
    S(117, 170),    S(162, 214),    S(172, 173),    S(159, 95),     S(146, 71),     S(120, 110),    S(110, 144),    S(69, 161),     //
    S(87, 145),     S(95, 159),     S(101, 131),    S(103, 85),     S(92, 73),      S(67, 101),     S(53, 129),     S(28, 148),     //
    S(67, 103),     S(90, 133),     S(83, 117),     S(81, 79),      S(64, 74),      S(51, 94),      S(20, 132),     S(1, 119),      //
    S(57, 83),      S(111, 96),     S(90, 138),     S(83, 101),     S(56, 95),      S(32, 100),     S(19, 112),     S(-6, 104),     //
    S(90, 83),      S(179, 85),     S(111, 118),    S(113, 115),    S(85, 109),     S(70, 93),      S(54, 119),     S(14, 116),     //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-260, -39),   S(-170, 170),   S(-340, 311),   S(134, 118),    S(58, 129),     S(-78, 112),    S(-298, 176),   S(-339, 70),    //
    S(141, 99),     S(176, 104),    S(270, 65),     S(265, 81),     S(254, 102),    S(183, 100),    S(150, 118),    S(122, 90),     //
    S(203, 80),     S(239, 93),     S(286, 127),    S(247, 142),    S(218, 154),    S(168, 163),    S(166, 109),    S(138, 102),    //
    S(254, 108),    S(239, 134),    S(256, 156),    S(221, 184),    S(238, 174),    S(210, 165),    S(205, 126),    S(202, 104),    //
    S(242, 100),    S(277, 93),     S(250, 136),    S(239, 161),    S(225, 160),    S(224, 150),    S(229, 97),     S(192, 98),     //
    S(181, 81),     S(213, 81),     S(192, 117),    S(217, 136),    S(214, 135),    S(162, 127),    S(165, 95),     S(134, 73),     //
    S(198, 67),     S(211, 65),     S(190, 79),     S(185, 101),    S(172, 105),    S(155, 67),     S(155, 68),     S(121, 14),     //
    S(135, 45),     S(175, 101),    S(195, 59),     S(214, 48),     S(192, 67),     S(151, 53),     S(142, 84),     S(89, 26),      //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-18, 163),    S(-47, 152),    S(-340, 225),   S(-170, 185),   S(-164, 198),   S(-232, 217),   S(-64, 198),    S(-11, 187),    //
    S(97, 98),      S(54, 155),     S(81, 117),     S(29, 160),     S(26, 162),     S(61, 147),     S(91, 127),     S(67, 124),     //
    S(151, 111),    S(193, 103),    S(187, 135),    S(153, 130),    S(124, 133),    S(124, 141),    S(152, 120),    S(124, 102),    //
    S(130, 96),     S(148, 122),    S(176, 123),    S(159, 162),    S(186, 149),    S(126, 137),    S(132, 114),    S(96, 105),     //
    S(151, 76),     S(162, 96),     S(161, 124),    S(176, 138),    S(166, 147),    S(132, 137),    S(104, 120),    S(107, 85),     //
    S(162, 79),     S(205, 77),     S(213, 98),     S(164, 135),    S(154, 119),    S(158, 119),    S(170, 95),     S(113, 96),     //
    S(147, 34),     S(231, 52),     S(192, 68),     S(161, 85),     S(138, 103),    S(152, 70),     S(150, 80),     S(149, 44),     //
    S(151, 41),     S(132, 90),     S(148, 103),    S(167, 63),     S(167, 57),     S(158, 113),    S(161, 71),     S(135, 63),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(416, 217),    S(452, 222),    S(416, 243),    S(426, 226),    S(416, 230),    S(376, 240),    S(382, 243),    S(375, 248),    //
    S(324, 264),    S(386, 251),    S(463, 228),    S(407, 250),    S(410, 251),    S(368, 257),    S(287, 290),    S(285, 287),    //
    S(294, 263),    S(418, 228),    S(448, 216),    S(424, 216),    S(389, 229),    S(346, 251),    S(339, 254),    S(267, 285),    //
    S(267, 251),    S(338, 250),    S(377, 235),    S(357, 232),    S(348, 241),    S(313, 258),    S(287, 264),    S(235, 272),    //
    S(229, 212),    S(292, 219),    S(276, 231),    S(268, 230),    S(258, 235),    S(247, 255),    S(216, 250),    S(189, 249),    //
    S(197, 186),    S(262, 182),    S(256, 200),    S(242, 198),    S(245, 193),    S(218, 225),    S(209, 208),    S(172, 218),    //
    S(115, 195),    S(226, 152),    S(241, 164),    S(247, 171),    S(235, 172),    S(225, 183),    S(208, 172),    S(178, 185),    //
    S(154, 193),    S(163, 215),    S(236, 176),    S(260, 156),    S(244, 173),    S(232, 190),    S(217, 185),    S(197, 205),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(502, 345),    S(576, 286),    S(555, 322),    S(487, 406),    S(490, 383),    S(498, 369),    S(504, 328),    S(424, 397),    //
    S(512, 382),    S(472, 471),    S(469, 483),    S(338, 550),    S(352, 532),    S(403, 499),    S(425, 424),    S(444, 399),    //
    S(451, 437),    S(546, 425),    S(478, 490),    S(441, 512),    S(401, 503),    S(418, 471),    S(473, 390),    S(453, 351),    //
    S(513, 346),    S(508, 421),    S(482, 454),    S(461, 495),    S(452, 497),    S(451, 438),    S(492, 357),    S(485, 320),    //
    S(502, 344),    S(506, 372),    S(489, 413),    S(463, 455),    S(463, 454),    S(463, 409),    S(474, 348),    S(490, 291),    //
    S(491, 252),    S(523, 297),    S(521, 360),    S(485, 350),    S(483, 340),    S(493, 356),    S(499, 298),    S(480, 277),    //
    S(462, 144),    S(506, 127),    S(514, 191),    S(521, 240),    S(502, 269),    S(507, 232),    S(480, 274),    S(482, 258),    //
    S(421, 182),    S(462, 4),      S(467, 44),     S(497, 121),    S(505, 190),    S(510, 134),    S(499, 158),    S(456, 216),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-393, -196),  S(15, 90),      S(185, -0),     S(-54, -25),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(143, -79),    S(276, 5),      S(200, 25),     S(146, -34),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(88, 27),      S(266, 37),     S(243, 28),     S(129, 0),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-130, 41),    S(153, 26),     S(82, 26),      S(32, 23),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-184, 24),    S(71, 9),       S(79, -6),      S(-30, 32),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-88, 16),     S(141, -15),    S(91, -6),      S(32, 14),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(11, -15),     S(117, -4),     S(67, -7),      S(-10, 14),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-112, -28),   S(-11, -4),     S(-88, -6),     S(-94, -41),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

inline const std::array<std::array<PParam, 7>, 4> KING_SHELTER = {{
  {{ S(-51, 28), S(9, -36), S(52, -40), S(29, -22), S(33, -24), S(52, -42), S(13, -42), }},
  {{ S(-55, 28), S(57, -25), S(67, -43), S(14, 1), S(17, -10), S(69, -51), S(54, -31), }},
  {{ S(-46, 25), S(51, -17), S(-9, -26), S(-5, -3), S(-3, -9), S(-10, -34), S(52, -20), }},
  {{ S(-45, 13), S(21, 25), S(10, 7), S(6, 14), S(14, 8), S(18, 0), S(23, 6), }},
}};
inline const std::array<PParam, 7> BLOCKED_SHELTER_STORM = {
    S(0, 0), S(0, 0), S(-13, -68), S(36, -18), S(19, -14), S(-8, -8), S(13, 18),
};
inline const std::array<std::array<PParam, 7>, 4> SHELTER_STORM = {{
  {{ S(-24, -7), S(5, -8), S(9, -10), S(7, 1), S(14, 7), S(4, -6), S(3, -7), }},
  {{ S(-32, 7), S(-13, -7), S(10, -8), S(-0, 22), S(7, 18), S(10, -8), S(-14, -10), }},
  {{ S(6, -9), S(25, -32), S(16, -10), S(6, 4), S(9, 9), S(18, -9), S(21, -33), }},
  {{ S(-3, 13), S(18, 7), S(36, 2), S(9, -6), S(6, -4), S(35, 5), S(24, 10), }},
}};
// Epoch duration: 1.67539s
// clang-format on
}  // namespace Clockwork
