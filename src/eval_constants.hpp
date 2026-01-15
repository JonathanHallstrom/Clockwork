#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(166, 139);
inline const PParam KNIGHT_MAT = S(506, 262);
inline const PParam BISHOP_MAT = S(456, 233);
inline const PParam ROOK_MAT   = S(519, 366);
inline const PParam QUEEN_MAT  = S(1080, 485);
inline const PParam TEMPO_VAL  = S(55, 7);

inline const PParam BISHOP_PAIR_VAL   = S(77, 153);
inline const PParam ROOK_OPEN_VAL     = S(109, -26);
inline const PParam ROOK_SEMIOPEN_VAL = S(44, 14);

inline const PParam DOUBLED_PAWN_VAL = S(-36, -70);

inline const PParam POTENTIAL_CHECKER_VAL = S(-60, -6);
inline const PParam OUTPOST_KNIGHT_VAL    = S(47, 41);
inline const PParam OUTPOST_BISHOP_VAL    = S(55, 22);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(45, 2);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(53, -22);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(34, 32);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(62, -39);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(22, 10), S(59, 28), S(74, 65), S(180, 138), S(527, 175), S(835, 591),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(71, 31), S(61, 28), S(76, 58), S(173, 107), S(570, -3),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-84, -85), S(-83, -65), S(-49, 6), S(29, 71), S(110, 178), S(306, 245),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(44, -36), S(37, -3), S(27, 23), S(28, 64), S(88, 121), S(170, 192),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(5, -25), S(-4, 12), S(-8, -14), S(-5, -37), S(-14, -81), S(-255, -95),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-0, 106), S(-9, 81), S(-6, 28), S(-0, 3), S(11, 4), S(52, 3), S(23, -8),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-281, -11), S(-35, 22), S(-14, 47), S(34, 54), S(43, 71), S(50, 79), S(20, 80),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(30, -23), S(126, 86), S(182, 144), S(219, 169), S(263, 178), S(293, 204), S(328, 196), S(364, 196), S(411, 135),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-12, -107), S(66, 37), S(126, 74), S(153, 113), S(180, 139), S(197, 157), S(208, 170), S(225, 174), S(237, 183), S(258, 171), S(279, 163), S(335, 118), S(347, 116), S(414, 73),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(285, 124), S(210, 239), S(238, 249), S(253, 252), S(265, 262), S(271, 271), S(278, 277), S(288, 277), S(295, 282), S(305, 283), S(316, 282), S(325, 281), S(330, 280), S(347, 260), S(461, 161),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(536, 210), S(578, 275), S(613, 287), S(637, 347), S(650, 380), S(664, 404), S(669, 431), S(676, 436), S(679, 453), S(685, 460), S(688, 471), S(694, 471), S(703, 464), S(707, 465), S(710, 463), S(712, 460), S(715, 455), S(715, 453), S(723, 439), S(736, 425), S(747, 409), S(773, 374), S(790, 357), S(889, 264), S(920, 225), S(935, 209), S(926, 217), S(1030, 140),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(537, -174), S(234, -166), S(114, -76), S(77, -36), S(26, -19), S(-27, 2), S(-69, 33), S(-120, 60), S(-158, 49),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    S(230, 201), S(349, 149), S(453, 83),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    S(465, 320), S(286, 204), S(159, 60),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    S(342, 269), S(423, 276), S(428, 296), S(493, 347), S(602, 322),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    S(855, 631), S(590, 522), S(351, 400), S(176, 226), S(113, 4), S(-0, -200),
};

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(-109, 58), S(35, -26), S(-216, -109), S(18, 45), S(-228, -130),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(-27, 22), S(-20, 18), S(-20, 15), S(-15, 9), S(-21, -10),
};

inline const PParam PAWN_THREAT_KNIGHT = S(216, 46);
inline const PParam PAWN_THREAT_BISHOP = S(183, 92);
inline const PParam PAWN_THREAT_ROOK   = S(154, 86);
inline const PParam PAWN_THREAT_QUEEN  = S(158, -23);

inline const PParam KNIGHT_THREAT_BISHOP = S(106, 66);
inline const PParam KNIGHT_THREAT_ROOK   = S(209, 8);
inline const PParam KNIGHT_THREAT_QUEEN  = S(118, 12);

inline const PParam BISHOP_THREAT_KNIGHT = S(107, 29);
inline const PParam BISHOP_THREAT_ROOK   = S(189, 51);
inline const PParam BISHOP_THREAT_QUEEN  = S(158, 57);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(3, -19), S(-3, -7), S(-4, -16), S(-9, -23), S(-15, -29), S(-21, -33), S(-25, -42), S(-30, -46), S(-38, -53),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(306, 238),    S(208, 311),    S(303, 280),    S(298, 225),    S(336, 170),    S(255, 225),    S(205, 258),    S(312, 197),    //
    S(158, 154),    S(206, 192),    S(193, 151),    S(162, 119),    S(145, 89),     S(109, 129),    S(100, 162),    S(60, 171),     //
    S(99, 126),     S(104, 141),    S(112, 106),    S(98, 100),     S(83, 89),      S(56, 98),      S(29, 133),     S(12, 145),     //
    S(85, 83),      S(103, 113),    S(107, 88),     S(90, 92),      S(61, 86),      S(45, 95),      S(-3, 129),     S(-21, 120),    //
    S(87, 63),      S(146, 66),     S(98, 107),     S(80, 110),     S(48, 104),     S(19, 106),     S(-7, 118),     S(-22, 108),    //
    S(85, 70),      S(208, 74),     S(159, 115),    S(111, 132),    S(80, 121),     S(55, 111),     S(35, 126),     S(-5, 121),     //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-256, -51),   S(-190, 175),   S(-357, 322),   S(118, 122),    S(44, 132),     S(-82, 113),    S(-309, 180),   S(-329, 57),    //
    S(132, 103),    S(169, 105),    S(256, 64),     S(247, 90),     S(240, 105),    S(173, 103),    S(141, 115),    S(119, 94),     //
    S(188, 85),     S(222, 100),    S(267, 128),    S(231, 147),    S(203, 154),    S(154, 167),    S(159, 110),    S(132, 104),    //
    S(248, 113),    S(236, 133),    S(239, 155),    S(214, 183),    S(227, 177),    S(205, 165),    S(202, 125),    S(201, 101),    //
    S(239, 100),    S(273, 93),     S(248, 136),    S(231, 159),    S(224, 161),    S(221, 149),    S(230, 98),     S(193, 100),    //
    S(183, 82),     S(209, 81),     S(190, 116),    S(215, 136),    S(213, 137),    S(164, 125),    S(164, 92),     S(137, 73),     //
    S(193, 73),     S(203, 70),     S(192, 79),     S(186, 100),    S(171, 104),    S(156, 65),     S(157, 70),     S(121, 9),      //
    S(137, 47),     S(174, 106),    S(196, 62),     S(210, 53),     S(196, 71),     S(154, 53),     S(140, 89),     S(92, 27),      //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-12, 162),    S(-50, 158),    S(-334, 223),   S(-177, 185),   S(-166, 197),   S(-228, 222),   S(-67, 197),    S(-5, 188),     //
    S(93, 106),     S(50, 158),     S(83, 117),     S(28, 157),     S(24, 166),     S(63, 146),     S(95, 126),     S(79, 126),     //
    S(162, 107),    S(196, 104),    S(186, 134),    S(150, 134),    S(126, 134),    S(125, 141),    S(160, 118),    S(133, 102),    //
    S(132, 100),    S(150, 119),    S(177, 126),    S(160, 165),    S(187, 150),    S(131, 134),    S(136, 113),    S(106, 100),    //
    S(152, 74),     S(162, 99),     S(165, 123),    S(181, 139),    S(170, 147),    S(138, 140),    S(106, 118),    S(112, 87),     //
    S(165, 82),     S(202, 81),     S(220, 99),     S(169, 132),    S(158, 122),    S(165, 119),    S(177, 96),     S(119, 96),     //
    S(150, 38),     S(233, 50),     S(198, 66),     S(166, 88),     S(145, 101),    S(158, 72),     S(155, 78),     S(149, 42),     //
    S(159, 46),     S(144, 88),     S(153, 107),    S(173, 61),     S(175, 58),     S(163, 111),    S(163, 71),     S(142, 62),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(397, 224),    S(432, 226),    S(399, 244),    S(410, 228),    S(399, 231),    S(366, 237),    S(368, 244),    S(365, 250),    //
    S(303, 270),    S(362, 257),    S(447, 231),    S(384, 254),    S(394, 252),    S(358, 257),    S(276, 288),    S(275, 287),    //
    S(280, 265),    S(405, 229),    S(432, 219),    S(418, 215),    S(381, 226),    S(340, 247),    S(338, 250),    S(268, 281),    //
    S(259, 249),    S(335, 248),    S(368, 232),    S(351, 229),    S(343, 239),    S(310, 251),    S(289, 259),    S(237, 265),    //
    S(220, 212),    S(285, 219),    S(264, 234),    S(262, 224),    S(255, 232),    S(244, 253),    S(215, 247),    S(194, 246),    //
    S(189, 188),    S(249, 182),    S(251, 200),    S(238, 195),    S(240, 189),    S(214, 223),    S(209, 203),    S(172, 214),    //
    S(107, 198),    S(214, 154),    S(237, 166),    S(241, 168),    S(233, 167),    S(222, 178),    S(205, 166),    S(181, 182),    //
    S(142, 194),    S(161, 213),    S(231, 171),    S(257, 153),    S(240, 170),    S(228, 184),    S(214, 179),    S(196, 199),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(501, 356),    S(574, 291),    S(551, 341),    S(488, 421),    S(488, 390),    S(494, 378),    S(507, 334),    S(429, 394),    //
    S(508, 392),    S(468, 478),    S(468, 493),    S(332, 559),    S(349, 536),    S(408, 500),    S(427, 422),    S(445, 403),    //
    S(456, 441),    S(550, 430),    S(477, 502),    S(438, 518),    S(402, 509),    S(417, 475),    S(482, 391),    S(458, 357),    //
    S(520, 341),    S(513, 416),    S(482, 458),    S(465, 494),    S(452, 500),    S(455, 437),    S(496, 354),    S(496, 320),    //
    S(506, 339),    S(509, 371),    S(492, 411),    S(465, 453),    S(466, 454),    S(466, 411),    S(480, 345),    S(495, 294),    //
    S(495, 257),    S(522, 296),    S(526, 359),    S(489, 350),    S(486, 341),    S(495, 355),    S(500, 298),    S(485, 278),    //
    S(465, 151),    S(510, 122),    S(518, 195),    S(526, 237),    S(509, 265),    S(510, 232),    S(484, 272),    S(485, 257),    //
    S(432, 183),    S(470, 1),      S(470, 46),     S(502, 123),    S(510, 192),    S(513, 138),    S(503, 162),    S(462, 215),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-568, -100),  S(-107, 145),   S(91, 60),      S(-110, 17),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(18, -26),     S(235, 14),     S(205, 38),     S(186, -35),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-19, 71),     S(252, 35),     S(253, 34),     S(182, -10),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-220, 82),    S(158, 18),     S(98, 26),      S(78, 18),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-257, 57),    S(74, -5),      S(99, -3),      S(26, 27),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-142, 36),    S(153, -32),    S(112, -9),     S(84, 8),       S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-8, -18),     S(162, -44),    S(121, -21),    S(53, 12),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-186, -5),    S(-22, -13),    S(-111, 17),    S(-113, 5),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

// Epoch duration: 1.83582s
// clang-format on
}  // namespace Clockwork
