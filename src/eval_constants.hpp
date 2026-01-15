#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(172, 142);
inline const PParam KNIGHT_MAT = S(509, 269);
inline const PParam BISHOP_MAT = S(459, 236);
inline const PParam ROOK_MAT   = S(518, 370);
inline const PParam QUEEN_MAT  = S(1080, 499);
inline const PParam TEMPO_VAL  = S(55, 12);

inline const PParam BISHOP_PAIR_VAL   = S(83, 154);
inline const PParam ROOK_OPEN_VAL     = S(103, -20);
inline const PParam ROOK_SEMIOPEN_VAL = S(45, 13);

inline const PParam DOUBLED_PAWN_VAL = S(-45, -63);

inline const PParam POTENTIAL_CHECKER_VAL = S(-56, -5);
inline const PParam OUTPOST_KNIGHT_VAL    = S(39, 44);
inline const PParam OUTPOST_BISHOP_VAL    = S(48, 23);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(44, 4);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(53, -20);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(32, 30);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(59, -35);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(21, 10), S(58, 27), S(77, 62), S(185, 129), S(500, 162), S(767, 446),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(70, 31), S(60, 28), S(75, 56), S(173, 105), S(565, 2),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-86, -81), S(-84, -64), S(-47, 2), S(30, 67), S(115, 174), S(307, 246),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(46, -37), S(39, -5), S(27, 22), S(27, 60), S(85, 111), S(179, 167),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(6, -22), S(-4, 12), S(-10, -11), S(-6, -31), S(-17, -75), S(-243, -84),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(0, 102), S(-9, 78), S(-8, 27), S(-0, 1), S(10, 2), S(53, 1), S(25, -10),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-269, -16), S(-33, 20), S(-13, 43), S(32, 52), S(41, 70), S(49, 78), S(17, 81),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(42, 19), S(130, 106), S(187, 156), S(225, 174), S(267, 182), S(297, 204), S(333, 196), S(368, 194), S(415, 134),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-9, -76), S(77, 49), S(135, 81), S(161, 116), S(187, 140), S(203, 157), S(212, 170), S(229, 174), S(241, 183), S(262, 173), S(284, 164), S(338, 123), S(352, 117), S(414, 81),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(291, 145), S(217, 250), S(244, 255), S(259, 259), S(270, 268), S(276, 276), S(283, 282), S(292, 281), S(299, 286), S(309, 287), S(319, 287), S(327, 286), S(331, 284), S(348, 266), S(459, 170),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(561, 244), S(593, 310), S(625, 330), S(649, 378), S(661, 409), S(675, 428), S(679, 454), S(686, 458), S(689, 473), S(695, 479), S(698, 488), S(704, 487), S(713, 478), S(717, 478), S(719, 475), S(722, 471), S(725, 466), S(725, 463), S(732, 449), S(745, 436), S(757, 419), S(782, 384), S(794, 372), S(892, 279), S(926, 241), S(941, 221), S(908, 242), S(1031, 154),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(509, -116), S(228, -138), S(112, -70), S(78, -34), S(27, -19), S(-25, 2), S(-62, 30), S(-111, 56), S(-149, 45),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    S(234, 201), S(343, 148), S(433, 86),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    S(469, 324), S(290, 207), S(160, 61),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    S(351, 272), S(424, 280), S(425, 298), S(480, 348), S(580, 330),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    S(850, 644), S(591, 529), S(359, 403), S(189, 222), S(119, 4), S(-18, -189),
};

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(-101, 55), S(24, -24), S(-217, -110), S(13, 42), S(-227, -133),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(-26, 22), S(-21, 19), S(-21, 14), S(-15, 9), S(-21, -10),
};

inline const PParam PAWN_THREAT_KNIGHT = S(196, 36);
inline const PParam PAWN_THREAT_BISHOP = S(148, 73);
inline const PParam PAWN_THREAT_ROOK   = S(122, 71);
inline const PParam PAWN_THREAT_QUEEN  = S(138, -34);

inline const PParam KNIGHT_THREAT_BISHOP = S(90, 54);
inline const PParam KNIGHT_THREAT_ROOK   = S(173, -3);
inline const PParam KNIGHT_THREAT_QUEEN  = S(101, -10);

inline const PParam BISHOP_THREAT_KNIGHT = S(100, 23);
inline const PParam BISHOP_THREAT_ROOK   = S(160, 37);
inline const PParam BISHOP_THREAT_QUEEN  = S(134, 45);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(5, -18), S(-1, -6), S(-4, -15), S(-9, -22), S(-15, -28), S(-21, -33), S(-25, -42), S(-30, -47), S(-37, -58),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(305, 241),    S(207, 313),    S(304, 282),    S(315, 218),    S(335, 166),    S(256, 223),    S(207, 256),    S(310, 201),    //
    S(162, 159),    S(214, 197),    S(205, 154),    S(173, 122),    S(153, 94),     S(116, 133),    S(105, 164),    S(63, 177),     //
    S(101, 131),    S(109, 149),    S(121, 109),    S(106, 103),    S(89, 92),      S(64, 102),     S(37, 138),     S(11, 154),     //
    S(88, 87),      S(104, 118),    S(112, 91),     S(94, 95),      S(68, 90),      S(46, 96),      S(3, 136),      S(-18, 123),    //
    S(84, 64),      S(149, 68),     S(106, 112),    S(80, 111),     S(49, 108),     S(21, 108),     S(-6, 123),     S(-28, 111),    //
    S(83, 73),      S(207, 77),     S(162, 114),    S(109, 133),    S(77, 123),     S(53, 111),     S(38, 133),     S(-9, 126),     //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-249, -67),   S(-180, 167),   S(-346, 334),   S(139, 117),    S(70, 126),     S(-72, 112),    S(-287, 169),   S(-328, 33),    //
    S(138, 93),     S(180, 105),    S(275, 66),     S(265, 89),     S(263, 105),    S(192, 103),    S(157, 115),    S(126, 84),     //
    S(196, 84),     S(244, 100),    S(287, 133),    S(252, 149),    S(221, 161),    S(176, 168),    S(184, 110),    S(142, 101),    //
    S(252, 109),    S(237, 135),    S(251, 165),    S(219, 191),    S(238, 180),    S(215, 172),    S(206, 129),    S(206, 102),    //
    S(240, 97),     S(275, 97),     S(250, 145),    S(240, 165),    S(225, 165),    S(224, 158),    S(229, 99),     S(196, 95),     //
    S(175, 73),     S(205, 86),     S(187, 124),    S(215, 142),    S(212, 144),    S(160, 132),    S(159, 98),     S(132, 73),     //
    S(190, 64),     S(195, 68),     S(187, 79),     S(183, 103),    S(168, 108),    S(150, 65),     S(153, 66),     S(117, 5),      //
    S(129, 38),     S(167, 94),     S(191, 59),     S(206, 49),     S(192, 67),     S(147, 47),     S(133, 80),     S(88, 10),      //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-26, 167),    S(-46, 156),    S(-332, 226),   S(-153, 183),   S(-146, 196),   S(-224, 220),   S(-64, 198),    S(-19, 187),    //
    S(91, 103),     S(66, 158),     S(92, 119),     S(42, 159),     S(32, 165),     S(72, 147),     S(103, 125),    S(74, 120),     //
    S(164, 109),    S(199, 108),    S(200, 136),    S(161, 131),    S(133, 131),    S(137, 142),    S(167, 120),    S(130, 103),    //
    S(132, 97),     S(155, 124),    S(183, 128),    S(166, 167),    S(193, 152),    S(140, 135),    S(139, 116),    S(105, 102),    //
    S(153, 76),     S(165, 100),    S(167, 124),    S(183, 143),    S(174, 152),    S(135, 143),    S(111, 120),    S(112, 88),     //
    S(165, 82),     S(199, 85),     S(216, 102),    S(166, 138),    S(159, 127),    S(162, 124),    S(172, 99),     S(120, 98),     //
    S(145, 38),     S(228, 53),     S(194, 68),     S(162, 88),     S(141, 103),    S(154, 75),     S(152, 82),     S(151, 40),     //
    S(149, 39),     S(133, 87),     S(143, 104),    S(162, 63),     S(164, 56),     S(153, 110),    S(156, 72),     S(131, 57),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(412, 224),    S(433, 231),    S(412, 248),    S(427, 229),    S(411, 230),    S(380, 242),    S(380, 246),    S(373, 253),    //
    S(313, 276),    S(366, 264),    S(460, 236),    S(398, 259),    S(406, 259),    S(372, 264),    S(282, 293),    S(284, 293),    //
    S(286, 269),    S(407, 236),    S(440, 224),    S(428, 219),    S(390, 231),    S(349, 253),    S(344, 253),    S(270, 285),    //
    S(259, 254),    S(334, 251),    S(371, 238),    S(357, 232),    S(350, 243),    S(319, 259),    S(292, 262),    S(239, 272),    //
    S(217, 216),    S(283, 222),    S(263, 238),    S(266, 228),    S(257, 237),    S(244, 258),    S(211, 254),    S(189, 249),    //
    S(189, 190),    S(251, 185),    S(246, 202),    S(239, 200),    S(242, 193),    S(212, 225),    S(208, 206),    S(169, 218),    //
    S(100, 204),    S(211, 157),    S(237, 164),    S(242, 172),    S(233, 174),    S(223, 182),    S(204, 169),    S(175, 182),    //
    S(143, 199),    S(159, 220),    S(236, 179),    S(265, 160),    S(247, 176),    S(231, 192),    S(219, 185),    S(201, 207),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(500, 371),    S(572, 308),    S(560, 348),    S(502, 425),    S(504, 399),    S(509, 383),    S(513, 347),    S(428, 412),    //
    S(511, 396),    S(472, 491),    S(476, 498),    S(345, 566),    S(360, 549),    S(412, 509),    S(432, 439),    S(457, 405),    //
    S(457, 443),    S(551, 440),    S(481, 510),    S(448, 530),    S(408, 523),    S(424, 487),    S(486, 401),    S(464, 359),    //
    S(518, 350),    S(513, 431),    S(482, 474),    S(465, 514),    S(452, 513),    S(458, 453),    S(502, 367),    S(498, 328),    //
    S(503, 348),    S(509, 382),    S(494, 423),    S(470, 470),    S(469, 468),    S(467, 425),    S(486, 362),    S(494, 304),    //
    S(493, 259),    S(524, 310),    S(526, 369),    S(493, 364),    S(490, 354),    S(499, 365),    S(506, 306),    S(489, 285),    //
    S(461, 162),    S(506, 136),    S(521, 202),    S(530, 247),    S(513, 275),    S(516, 241),    S(492, 281),    S(490, 265),    //
    S(424, 197),    S(467, 19),     S(469, 58),     S(503, 137),    S(515, 192),    S(516, 149),    S(503, 174),    S(463, 230),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-534, -118),  S(-105, 158),   S(117, 63),     S(-71, 23),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(44, -28),     S(260, 16),     S(204, 46),     S(184, -31),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(4, 65),       S(244, 41),     S(245, 37),     S(157, -3),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-218, 78),    S(147, 22),     S(81, 31),      S(68, 18),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-258, 54),    S(65, -3),      S(81, -4),      S(4, 28),       S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-146, 33),    S(138, -31),    S(93, -7),      S(66, 9),       S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-5, -18),     S(160, -44),    S(112, -20),    S(44, 13),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-175, -12),   S(-15, -15),    S(-108, 15),    S(-117, 0),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

// Epoch duration: 1.46553s
// clang-format on
}  // namespace Clockwork
