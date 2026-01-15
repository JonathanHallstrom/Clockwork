#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(164, 139);
inline const PParam KNIGHT_MAT = S(481, 258);
inline const PParam BISHOP_MAT = S(414, 226);
inline const PParam ROOK_MAT   = S(491, 360);
inline const PParam QUEEN_MAT  = S(1024, 477);
inline const PParam TEMPO_VAL  = S(48, 14);

inline const PParam BISHOP_PAIR_VAL   = S(69, 154);
inline const PParam ROOK_OPEN_VAL     = S(95, -17);
inline const PParam ROOK_SEMIOPEN_VAL = S(42, 13);

inline const PParam DOUBLED_PAWN_VAL = S(-35, -65);

inline const PParam POTENTIAL_CHECKER_VAL = S(-55, -4);
inline const PParam OUTPOST_KNIGHT_VAL    = S(41, 46);
inline const PParam OUTPOST_BISHOP_VAL    = S(46, 22);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(38, 7);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(53, -18);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(39, 26);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(59, -32);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(19, 11), S(41, 31), S(68, 63), S(191, 137), S(507, 155), S(755, 431),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(56, 39), S(52, 27), S(65, 51), S(182, 109), S(575, 7),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-86, -78), S(-83, -65), S(-42, -1), S(33, 72), S(123, 175), S(275, 245),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(37, -35), S(37, -6), S(28, 22), S(22, 56), S(79, 114), S(167, 165),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(8, -23), S(-2, 9), S(-8, -8), S(-4, -32), S(-18, -73), S(-230, -85),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(1, 101), S(-12, 80), S(-6, 27), S(-1, -1), S(6, 1), S(50, 0), S(33, -16),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-274, -12), S(-38, 22), S(-10, 43), S(34, 50), S(36, 71), S(48, 75), S(6, 79),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(39, 26), S(135, 107), S(190, 160), S(228, 174), S(271, 179), S(295, 201), S(329, 191), S(359, 196), S(405, 133),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(14, -81), S(106, 44), S(142, 84), S(167, 122), S(185, 146), S(201, 162), S(207, 178), S(227, 180), S(240, 188), S(267, 176), S(288, 168), S(341, 130), S(370, 115), S(428, 75),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(296, 139), S(218, 254), S(242, 257), S(255, 261), S(265, 270), S(268, 280), S(276, 285), S(285, 283), S(293, 287), S(302, 287), S(312, 288), S(320, 286), S(324, 286), S(341, 267), S(453, 168),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(500, 236), S(574, 290), S(615, 297), S(636, 365), S(651, 401), S(669, 408), S(671, 441), S(674, 449), S(674, 470), S(677, 478), S(677, 490), S(684, 487), S(693, 481), S(699, 478), S(702, 475), S(711, 466), S(711, 465), S(712, 460), S(723, 443), S(739, 428), S(746, 417), S(772, 382), S(763, 379), S(865, 290), S(905, 249), S(988, 191), S(882, 255), S(1220, 55),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(570, -100), S(182, -119), S(94, -58), S(69, -28), S(27, -13), S(-20, 5), S(-45, 26), S(-84, 47), S(-103, 32),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    S(212, 204), S(337, 142), S(448, 65),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    S(468, 320), S(288, 207), S(160, 61),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    S(319, 271), S(400, 274), S(412, 288), S(469, 335), S(589, 309),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    S(815, 637), S(560, 522), S(333, 394), S(165, 213), S(93, -2), S(-36, -201),
};

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(-98, 53), S(43, -38), S(-216, -110), S(23, 37), S(-222, -134),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(-26, 22), S(-21, 17), S(-20, 15), S(-15, 9), S(-19, -11),
};

inline const PParam PAWN_THREAT_KNIGHT = S(180, 43);
inline const PParam PAWN_THREAT_BISHOP = S(140, 75);
inline const PParam PAWN_THREAT_ROOK   = S(110, 78);
inline const PParam PAWN_THREAT_QUEEN  = S(132, -33);

inline const PParam KNIGHT_THREAT_BISHOP = S(81, 53);
inline const PParam KNIGHT_THREAT_ROOK   = S(158, 1);
inline const PParam KNIGHT_THREAT_QUEEN  = S(84, 7);

inline const PParam BISHOP_THREAT_KNIGHT = S(96, 23);
inline const PParam BISHOP_THREAT_ROOK   = S(157, 34);
inline const PParam BISHOP_THREAT_QUEEN  = S(132, 54);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(5, -19), S(-3, -6), S(-3, -14), S(-6, -23), S(-10, -31), S(-16, -36), S(-19, -46), S(-25, -53), S(-39, -66),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(297, 236),    S(186, 302),    S(261, 284),    S(243, 228),    S(278, 171),    S(234, 221),    S(196, 251),    S(297, 202),    //
    S(116, 156),    S(162, 188),    S(152, 146),    S(97, 116),     S(75, 93),      S(64, 127),     S(70, 154),     S(28, 174),     //
    S(79, 126),     S(77, 142),     S(100, 110),    S(44, 93),      S(47, 83),      S(45, 101),     S(16, 129),     S(-7, 152),     //
    S(77, 83),      S(93, 117),     S(107, 95),     S(94, 116),     S(58, 112),     S(36, 97),      S(-1, 130),     S(-25, 120),    //
    S(83, 55),      S(168, 63),     S(126, 105),    S(150, 143),    S(92, 132),     S(25, 100),     S(1, 113),      S(-20, 106),    //
    S(82, 59),      S(208, 56),     S(173, 104),    S(162, 141),    S(88, 141),     S(45, 104),     S(33, 109),     S(-16, 116),    //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-288, -75),   S(-291, 192),   S(-340, 284),   S(105, 119),    S(64, 104),     S(-112, 119),   S(-305, 160),   S(-332, -8),    //
    S(89, 111),     S(148, 111),    S(245, 59),     S(230, 79),     S(230, 98),     S(165, 98),     S(146, 107),    S(99, 82),      //
    S(173, 101),    S(223, 99),     S(272, 124),    S(231, 132),    S(188, 157),    S(155, 162),    S(154, 106),    S(132, 90),     //
    S(230, 110),    S(207, 135),    S(238, 160),    S(177, 187),    S(215, 172),    S(199, 169),    S(189, 120),    S(183, 104),    //
    S(228, 95),     S(256, 99),     S(244, 143),    S(231, 163),    S(216, 166),    S(203, 162),    S(216, 98),     S(192, 86),     //
    S(188, 75),     S(203, 88),     S(172, 120),    S(206, 143),    S(208, 139),    S(153, 128),    S(159, 96),     S(138, 74),     //
    S(174, 65),     S(186, 71),     S(180, 91),     S(186, 103),    S(157, 115),    S(149, 57),     S(141, 69),     S(116, 7),      //
    S(118, 18),     S(196, 76),     S(188, 51),     S(201, 38),     S(182, 61),     S(134, 46),     S(139, 69),     S(87, -18),     //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-35, 159),    S(-85, 172),    S(-307, 209),   S(-144, 177),   S(-164, 202),   S(-213, 223),   S(-106, 213),   S(-33, 195),    //
    S(71, 109),     S(63, 163),     S(47, 125),     S(14, 164),     S(18, 163),     S(33, 152),     S(105, 135),    S(49, 136),     //
    S(145, 116),    S(171, 110),    S(184, 142),    S(125, 140),    S(83, 142),     S(116, 151),    S(131, 119),    S(113, 108),    //
    S(145, 91),     S(146, 122),    S(172, 129),    S(126, 174),    S(165, 166),    S(121, 134),    S(141, 113),    S(104, 110),    //
    S(130, 67),     S(179, 95),     S(144, 127),    S(180, 143),    S(162, 155),    S(108, 145),    S(116, 124),    S(75, 98),      //
    S(181, 91),     S(139, 88),     S(217, 111),    S(144, 141),    S(138, 128),    S(168, 131),    S(114, 106),    S(127, 110),    //
    S(89, 22),      S(244, 72),     S(171, 65),     S(184, 83),     S(155, 103),    S(115, 79),     S(159, 96),     S(108, 37),     //
    S(135, 42),     S(96, 78),      S(187, 102),    S(158, 58),     S(150, 60),     S(175, 118),    S(151, 49),     S(140, 53),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(402, 206),    S(392, 219),    S(375, 236),    S(400, 209),    S(382, 211),    S(347, 234),    S(347, 241),    S(336, 244),    //
    S(289, 270),    S(338, 255),    S(426, 233),    S(345, 253),    S(349, 252),    S(332, 253),    S(246, 289),    S(259, 281),    //
    S(268, 254),    S(374, 225),    S(421, 206),    S(365, 209),    S(334, 215),    S(307, 241),    S(310, 236),    S(231, 278),    //
    S(242, 240),    S(311, 236),    S(338, 227),    S(314, 213),    S(303, 232),    S(284, 249),    S(263, 250),    S(213, 256),    //
    S(202, 205),    S(256, 212),    S(238, 227),    S(242, 217),    S(225, 229),    S(211, 249),    S(189, 244),    S(162, 240),    //
    S(178, 179),    S(233, 177),    S(226, 192),    S(216, 186),    S(209, 185),    S(181, 218),    S(176, 204),    S(151, 212),    //
    S(90, 195),     S(192, 146),    S(213, 160),    S(215, 159),    S(194, 170),    S(188, 173),    S(175, 160),    S(153, 179),    //
    S(143, 188),    S(140, 208),    S(224, 171),    S(235, 151),    S(214, 170),    S(203, 188),    S(194, 182),    S(188, 199),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(428, 372),    S(482, 334),    S(485, 352),    S(434, 434),    S(445, 392),    S(448, 383),    S(470, 320),    S(358, 425),    //
    S(456, 379),    S(420, 465),    S(413, 496),    S(283, 543),    S(309, 527),    S(360, 486),    S(379, 425),    S(412, 384),    //
    S(391, 440),    S(482, 435),    S(401, 515),    S(360, 521),    S(328, 511),    S(363, 467),    S(426, 387),    S(400, 354),    //
    S(464, 332),    S(450, 422),    S(415, 469),    S(394, 507),    S(400, 485),    S(403, 432),    S(450, 348),    S(448, 310),    //
    S(448, 339),    S(454, 378),    S(437, 406),    S(432, 440),    S(436, 434),    S(416, 408),    S(443, 337),    S(463, 265),    //
    S(425, 264),    S(456, 322),    S(467, 363),    S(441, 346),    S(446, 328),    S(449, 350),    S(464, 289),    S(435, 282),    //
    S(385, 180),    S(445, 150),    S(479, 181),    S(483, 230),    S(473, 256),    S(480, 221),    S(447, 266),    S(451, 239),    //
    S(375, 161),    S(396, 19),     S(425, 39),     S(471, 114),    S(499, 158),    S(483, 142),    S(460, 170),    S(433, 197),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-542, -145),  S(-86, 184),    S(191, 69),     S(61, -17),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(53, -8),      S(243, 23),     S(188, 62),     S(219, -28),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(2, 64),       S(204, 56),     S(228, 46),     S(173, -6),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-206, 68),    S(119, 31),     S(70, 34),      S(54, 24),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-269, 54),    S(47, 5),       S(85, 0),       S(-13, 38),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-133, 27),    S(120, -25),    S(73, -1),      S(48, 17),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-11, -24),    S(138, -37),    S(90, -12),     S(22, 24),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-161, -23),   S(-14, -23),    S(-97, 7),      S(-96, -11),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

// Epoch duration: 1.24954s
// clang-format on
}  // namespace Clockwork
