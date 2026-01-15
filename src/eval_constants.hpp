#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(143, 124);
inline const PParam KNIGHT_MAT = S(426, 226);
inline const PParam BISHOP_MAT = S(369, 197);
inline const PParam ROOK_MAT   = S(442, 316);
inline const PParam QUEEN_MAT  = S(914, 407);
inline const PParam TEMPO_VAL  = S(46, 12);

inline const PParam BISHOP_PAIR_VAL   = S(61, 131);
inline const PParam ROOK_OPEN_VAL     = S(81, -14);
inline const PParam ROOK_SEMIOPEN_VAL = S(37, 14);

inline const PParam DOUBLED_PAWN_VAL = S(-31, -58);

inline const PParam POTENTIAL_CHECKER_VAL = S(-48, -3);
inline const PParam OUTPOST_KNIGHT_VAL    = S(35, 41);
inline const PParam OUTPOST_BISHOP_VAL    = S(43, 22);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(35, 4);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(47, -17);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(35, 24);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(55, -33);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(18, 8), S(35, 26), S(60, 53), S(170, 122), S(435, 148), S(644, 428),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(50, 34), S(46, 22), S(56, 44), S(156, 102), S(477, 21),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-71, -74), S(-72, -60), S(-37, 0), S(22, 67), S(107, 158), S(238, 219),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(30, -31), S(31, -4), S(24, 20), S(17, 53), S(67, 105), S(138, 158),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(7, -19), S(-0, 9), S(-3, -8), S(1, -31), S(-13, -69), S(-197, -85),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-4, 91), S(-14, 72), S(-4, 24), S(1, -3), S(7, -0), S(43, -1), S(28, -14),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-240, -13), S(-36, 21), S(-8, 39), S(30, 45), S(30, 64), S(42, 67), S(5, 73),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(44, 11), S(124, 91), S(170, 139), S(203, 152), S(240, 155), S(260, 175), S(290, 165), S(315, 168), S(359, 107),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(20, -69), S(99, 37), S(128, 77), S(150, 110), S(165, 133), S(179, 147), S(184, 160), S(203, 160), S(213, 169), S(237, 157), S(253, 150), S(308, 108), S(325, 101), S(393, 51),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(265, 106), S(192, 218), S(212, 225), S(222, 229), S(231, 237), S(234, 245), S(241, 249), S(248, 248), S(256, 251), S(264, 252), S(272, 253), S(279, 251), S(285, 249), S(299, 232), S(408, 138),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(443, 163), S(507, 247), S(543, 256), S(563, 312), S(576, 346), S(593, 352), S(594, 382), S(597, 392), S(597, 410), S(599, 419), S(600, 428), S(605, 426), S(613, 422), S(619, 418), S(621, 417), S(629, 407), S(629, 406), S(631, 402), S(646, 383), S(653, 372), S(663, 362), S(693, 325), S(696, 315), S(779, 238), S(812, 205), S(902, 144), S(776, 202), S(1315, -74),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(505, -94), S(162, -111), S(81, -47), S(58, -23), S(22, -11), S(-18, 4), S(-41, 23), S(-77, 43), S(-90, 29),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    S(181, 172), S(288, 123), S(385, 57),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    S(407, 277), S(250, 181), S(138, 53),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    S(273, 241), S(351, 241), S(368, 248), S(430, 281), S(533, 256),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    S(722, 559), S(493, 454), S(289, 339), S(137, 177), S(66, -15), S(-49, -194),
};

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(-89, 48), S(38, -33), S(-187, -96), S(27, 28), S(-199, -123),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(-22, 19), S(-19, 14), S(-17, 12), S(-13, 7), S(-17, -11),
};

inline const PParam PAWN_THREAT_KNIGHT = S(159, 31);
inline const PParam PAWN_THREAT_BISHOP = S(124, 61);
inline const PParam PAWN_THREAT_ROOK   = S(101, 68);
inline const PParam PAWN_THREAT_QUEEN  = S(112, -22);

inline const PParam KNIGHT_THREAT_BISHOP = S(70, 47);
inline const PParam KNIGHT_THREAT_ROOK   = S(142, 1);
inline const PParam KNIGHT_THREAT_QUEEN  = S(77, -1);

inline const PParam BISHOP_THREAT_KNIGHT = S(84, 21);
inline const PParam BISHOP_THREAT_ROOK   = S(139, 35);
inline const PParam BISHOP_THREAT_QUEEN  = S(122, 39);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(2, -17), S(-3, -4), S(-3, -11), S(-6, -19), S(-9, -26), S(-13, -31), S(-16, -38), S(-20, -44), S(-35, -49),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(271, 198),    S(164, 271),    S(231, 258),    S(203, 205),    S(225, 160),    S(200, 200),    S(166, 229),    S(264, 176),    //
    S(96, 140),     S(134, 164),    S(124, 134),    S(70, 105),     S(50, 87),      S(56, 111),     S(59, 134),     S(23, 156),     //
    S(70, 111),     S(67, 121),     S(85, 97),      S(33, 80),      S(44, 72),      S(40, 89),      S(11, 114),     S(-3, 132),     //
    S(67, 73),      S(86, 101),     S(90, 85),      S(83, 103),     S(48, 102),     S(30, 86),      S(-3, 115),     S(-25, 106),    //
    S(72, 46),      S(151, 55),     S(108, 89),     S(143, 134),    S(84, 121),     S(20, 85),      S(1, 100),      S(-17, 93),     //
    S(71, 49),      S(187, 48),     S(151, 94),     S(149, 133),    S(78, 129),     S(40, 92),      S(22, 95),      S(-17, 101),    //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-246, -76),   S(-252, 180),   S(-250, 177),   S(105, 102),    S(56, 99),      S(-96, 94),     S(-278, 149),   S(-300, 3),     //
    S(78, 106),     S(126, 106),    S(215, 53),     S(215, 65),     S(201, 87),     S(142, 96),     S(122, 97),     S(94, 73),      //
    S(155, 92),     S(201, 74),     S(240, 116),    S(208, 120),    S(166, 145),    S(139, 142),    S(138, 97),     S(116, 85),     //
    S(203, 100),    S(186, 122),    S(211, 144),    S(163, 166),    S(195, 158),    S(179, 152),    S(167, 108),    S(170, 88),     //
    S(203, 86),     S(225, 87),     S(219, 129),    S(204, 150),    S(192, 152),    S(179, 146),    S(191, 92),     S(168, 82),     //
    S(171, 71),     S(181, 84),     S(154, 112),    S(184, 130),    S(187, 126),    S(137, 119),    S(143, 87),     S(121, 64),     //
    S(153, 57),     S(164, 66),     S(160, 89),     S(167, 95),     S(142, 107),    S(129, 58),     S(119, 69),     S(99, 14),      //
    S(102, 13),     S(175, 74),     S(166, 49),     S(175, 35),     S(158, 58),     S(118, 37),     S(123, 66),     S(73, -10),     //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-32, 146),    S(-84, 150),    S(-279, 189),   S(-133, 148),   S(-127, 167),   S(-181, 187),   S(-100, 183),   S(-21, 176),    //
    S(66, 97),      S(54, 140),     S(41, 104),     S(10, 140),     S(11, 138),     S(26, 135),     S(91, 116),     S(50, 120),     //
    S(119, 101),    S(149, 91),     S(156, 119),    S(101, 120),    S(75, 130),     S(99, 132),     S(112, 99),     S(97, 94),      //
    S(131, 79),     S(126, 107),    S(146, 117),    S(103, 156),    S(142, 147),    S(108, 117),    S(121, 95),     S(98, 93),      //
    S(103, 62),     S(157, 81),     S(124, 114),    S(157, 128),    S(135, 140),    S(88, 127),     S(108, 103),    S(58, 86),      //
    S(157, 84),     S(119, 75),     S(192, 102),    S(124, 124),    S(118, 115),    S(147, 120),    S(92, 92),      S(113, 101),    //
    S(76, 12),      S(217, 64),     S(150, 58),     S(163, 73),     S(138, 91),     S(97, 64),      S(141, 86),     S(87, 32),      //
    S(117, 36),     S(81, 66),      S(166, 92),     S(138, 50),     S(127, 55),     S(155, 106),    S(129, 42),     S(127, 46),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(337, 184),    S(336, 194),    S(322, 209),    S(341, 186),    S(324, 189),    S(300, 201),    S(300, 210),    S(286, 217),    //
    S(252, 234),    S(297, 221),    S(373, 205),    S(304, 215),    S(309, 213),    S(289, 216),    S(217, 251),    S(225, 241),    //
    S(236, 218),    S(324, 198),    S(359, 179),    S(309, 180),    S(290, 186),    S(262, 207),    S(270, 206),    S(194, 245),    //
    S(217, 208),    S(274, 205),    S(291, 197),    S(268, 184),    S(264, 196),    S(236, 218),    S(227, 218),    S(187, 222),    //
    S(177, 178),    S(215, 187),    S(207, 196),    S(205, 188),    S(196, 199),    S(180, 217),    S(171, 206),    S(138, 211),    //
    S(153, 154),    S(199, 157),    S(194, 167),    S(180, 159),    S(178, 160),    S(153, 193),    S(154, 178),    S(129, 181),    //
    S(74, 170),     S(167, 125),    S(183, 141),    S(186, 140),    S(167, 146),    S(159, 150),    S(151, 135),    S(130, 152),    //
    S(125, 165),    S(125, 183),    S(192, 151),    S(201, 130),    S(182, 148),    S(177, 164),    S(167, 156),    S(166, 174),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(373, 316),    S(432, 290),    S(429, 303),    S(375, 376),    S(387, 340),    S(402, 321),    S(409, 271),    S(330, 344),    //
    S(392, 336),    S(363, 399),    S(358, 430),    S(250, 467),    S(256, 469),    S(305, 430),    S(330, 373),    S(360, 326),    //
    S(345, 372),    S(412, 379),    S(344, 458),    S(308, 456),    S(293, 434),    S(314, 405),    S(369, 341),    S(345, 304),    //
    S(407, 281),    S(394, 363),    S(361, 408),    S(340, 444),    S(345, 424),    S(356, 369),    S(392, 299),    S(393, 265),    //
    S(392, 292),    S(394, 323),    S(383, 343),    S(373, 379),    S(380, 376),    S(367, 351),    S(385, 289),    S(408, 230),    //
    S(373, 220),    S(401, 266),    S(411, 309),    S(386, 294),    S(390, 275),    S(395, 299),    S(408, 247),    S(379, 243),    //
    S(332, 155),    S(389, 126),    S(419, 155),    S(424, 195),    S(416, 214),    S(423, 185),    S(391, 227),    S(394, 208),    //
    S(329, 133),    S(354, -4),     S(375, 21),     S(417, 83),     S(442, 135),    S(424, 118),    S(411, 131),    S(379, 165),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-456, -94),   S(-82, 150),    S(111, 85),     S(21, 0),       S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(24, 7),       S(216, 20),     S(182, 49),     S(199, -31),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-22, 67),     S(175, 50),     S(200, 39),     S(178, -7),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-190, 65),    S(104, 28),     S(66, 29),      S(39, 23),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-234, 43),    S(47, 0),       S(78, -4),      S(-4, 30),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-118, 20),    S(110, -27),    S(71, -5),      S(49, 11),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-13, -25),    S(118, -35),    S(78, -13),     S(19, 18),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-143, -19),   S(-12, -20),    S(-85, 6),      S(-81, -8),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

// Epoch duration: 1.82207s
// clang-format on
}  // namespace Clockwork
