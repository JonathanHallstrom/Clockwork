#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(158, 137);
inline const PParam KNIGHT_MAT = S(479, 258);
inline const PParam BISHOP_MAT = S(417, 230);
inline const PParam ROOK_MAT   = S(501, 363);
inline const PParam QUEEN_MAT  = S(1023, 477);
inline const PParam TEMPO_VAL  = S(47, 13);

inline const PParam BISHOP_PAIR_VAL   = S(66, 152);
inline const PParam ROOK_OPEN_VAL     = S(101, -23);
inline const PParam ROOK_SEMIOPEN_VAL = S(41, 14);

inline const PParam DOUBLED_PAWN_VAL = S(-27, -71);

inline const PParam POTENTIAL_CHECKER_VAL = S(-59, -5);
inline const PParam OUTPOST_KNIGHT_VAL    = S(48, 42);
inline const PParam OUTPOST_BISHOP_VAL    = S(54, 21);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(40, 6);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(53, -20);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(39, 30);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(62, -37);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(20, 12), S(43, 31), S(67, 64), S(186, 146), S(537, 173), S(854, 538),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(58, 40), S(54, 27), S(66, 54), S(186, 110), S(602, -9),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-83, -83), S(-82, -67), S(-44, 2), S(32, 76), S(117, 182), S(275, 249),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(35, -36), S(35, -5), S(29, 22), S(24, 61), S(85, 125), S(160, 191),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(8, -26), S(-1, 9), S(-7, -11), S(-3, -38), S(-14, -80), S(-244, -97),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-0, 105), S(-14, 84), S(-4, 28), S(-1, 1), S(7, 5), S(48, 5), S(30, -8),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-293, -5), S(-42, 25), S(-11, 47), S(36, 53), S(37, 73), S(49, 77), S(11, 79),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(34, -3), S(137, 94), S(195, 155), S(232, 174), S(277, 180), S(301, 206), S(335, 197), S(366, 202), S(413, 140),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(14, -102), S(100, 35), S(140, 80), S(167, 123), S(187, 149), S(204, 165), S(211, 181), S(232, 184), S(246, 191), S(273, 178), S(291, 171), S(347, 128), S(371, 118), S(434, 71),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(288, 124), S(209, 246), S(235, 255), S(248, 259), S(259, 268), S(263, 278), S(271, 283), S(281, 282), S(289, 286), S(299, 286), S(310, 287), S(318, 285), S(323, 285), S(341, 266), S(454, 165),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(473, 250), S(559, 273), S(600, 279), S(623, 353), S(639, 389), S(657, 400), S(660, 435), S(663, 444), S(664, 468), S(667, 477), S(667, 490), S(673, 489), S(683, 482), S(690, 481), S(692, 478), S(701, 468), S(703, 468), S(702, 463), S(715, 446), S(733, 428), S(740, 418), S(769, 380), S(765, 374), S(876, 278), S(925, 230), S(1001, 177), S(921, 229), S(1263, 32),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(603, -182), S(187, -146), S(97, -67), S(68, -32), S(26, -15), S(-22, 3), S(-51, 26), S(-93, 49), S(-115, 36),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    S(205, 204), S(341, 143), S(465, 64),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    S(461, 322), S(284, 208), S(160, 62),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    S(312, 275), S(404, 275), S(425, 287), S(496, 333), S(640, 295),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    S(828, 644), S(561, 528), S(320, 402), S(144, 219), S(80, -7), S(-14, -239),
};

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(-106, 55), S(52, -37), S(-213, -110), S(32, 37), S(-229, -136),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(-26, 22), S(-21, 17), S(-20, 15), S(-15, 9), S(-19, -12),
};

inline const PParam PAWN_THREAT_KNIGHT = S(199, 56);
inline const PParam PAWN_THREAT_BISHOP = S(168, 92);
inline const PParam PAWN_THREAT_ROOK   = S(136, 91);
inline const PParam PAWN_THREAT_QUEEN  = S(147, -23);

inline const PParam KNIGHT_THREAT_BISHOP = S(94, 66);
inline const PParam KNIGHT_THREAT_ROOK   = S(187, 12);
inline const PParam KNIGHT_THREAT_QUEEN  = S(99, 17);

inline const PParam BISHOP_THREAT_KNIGHT = S(103, 29);
inline const PParam BISHOP_THREAT_ROOK   = S(184, 46);
inline const PParam BISHOP_THREAT_QUEEN  = S(152, 60);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(3, -21), S(-4, -7), S(-3, -16), S(-7, -24), S(-10, -33), S(-16, -37), S(-19, -46), S(-25, -52), S(-39, -64),
};

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(303, 237),    S(176, 306),    S(263, 284),    S(232, 233),    S(277, 173),    S(235, 227),    S(193, 260),    S(303, 204),    //
    S(114, 158),    S(161, 183),    S(148, 144),    S(94, 110),     S(73, 86),      S(68, 122),     S(73, 152),     S(30, 171),     //
    S(80, 124),     S(75, 139),     S(98, 110),     S(43, 90),      S(48, 79),      S(44, 99),      S(15, 127),     S(-0, 148),     //
    S(79, 81),      S(93, 112),     S(104, 93),     S(91, 114),     S(54, 111),     S(37, 95),      S(-1, 127),     S(-21, 118),    //
    S(87, 55),      S(167, 61),     S(118, 102),    S(151, 144),    S(89, 129),     S(21, 97),      S(4, 111),      S(-16, 104),    //
    S(85, 57),      S(210, 55),     S(169, 107),    S(164, 142),    S(88, 140),     S(47, 102),     S(33, 104),     S(-9, 112),     //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-305, -51),   S(-307, 200),   S(-360, 295),   S(86, 124),     S(34, 114),     S(-137, 127),   S(-329, 170),   S(-338, 11),    //
    S(87, 122),     S(138, 119),    S(228, 63),     S(214, 85),     S(210, 106),    S(149, 102),    S(134, 114),    S(97, 93),      //
    S(163, 104),    S(199, 107),    S(258, 125),    S(212, 140),    S(173, 158),    S(139, 164),    S(138, 111),    S(126, 95),     //
    S(226, 119),    S(203, 140),    S(228, 159),    S(175, 189),    S(208, 177),    S(195, 170),    S(186, 122),    S(182, 108),    //
    S(229, 102),    S(252, 101),    S(244, 140),    S(228, 162),    S(216, 166),    S(204, 157),    S(218, 102),    S(193, 92),     //
    S(194, 83),     S(209, 86),     S(176, 117),    S(206, 139),    S(213, 135),    S(160, 126),    S(166, 93),     S(144, 74),     //
    S(185, 71),     S(194, 71),     S(184, 91),     S(190, 100),    S(161, 114),    S(154, 59),     S(147, 77),     S(131, 11),     //
    S(131, 26),     S(207, 82),     S(194, 55),     S(209, 41),     S(188, 66),     S(143, 50),     S(152, 74),     S(92, -5),      //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-25, 159),    S(-94, 176),    S(-313, 209),   S(-159, 182),   S(-178, 207),   S(-226, 227),   S(-112, 216),   S(-30, 201),    //
    S(69, 111),     S(49, 164),     S(33, 127),     S(4, 169),      S(3, 165),      S(27, 152),     S(91, 141),     S(51, 143),     //
    S(140, 119),    S(162, 107),    S(172, 145),    S(111, 144),    S(78, 149),     S(103, 152),    S(125, 118),    S(111, 109),    //
    S(141, 92),     S(141, 123),    S(159, 129),    S(120, 174),    S(154, 166),    S(111, 139),    S(134, 110),    S(106, 112),    //
    S(127, 66),     S(170, 90),     S(143, 126),    S(174, 143),    S(154, 153),    S(104, 142),    S(111, 121),    S(74, 96),      //
    S(174, 88),     S(145, 84),     S(217, 109),    S(145, 137),    S(136, 123),    S(169, 130),    S(115, 102),    S(126, 110),    //
    S(93, 19),      S(245, 70),     S(174, 63),     S(187, 82),     S(159, 103),    S(115, 74),     S(160, 94),     S(107, 39),     //
    S(142, 45),     S(106, 79),     S(193, 101),    S(165, 59),     S(158, 63),     S(186, 118),    S(154, 48),     S(151, 58),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(390, 210),    S(395, 221),    S(373, 237),    S(391, 213),    S(377, 217),    S(340, 234),    S(343, 243),    S(334, 246),    //
    S(281, 271),    S(332, 258),    S(418, 234),    S(338, 253),    S(342, 254),    S(325, 254),    S(245, 292),    S(255, 282),    //
    S(266, 255),    S(372, 227),    S(419, 208),    S(361, 213),    S(336, 218),    S(303, 245),    S(310, 241),    S(229, 280),    //
    S(242, 241),    S(313, 239),    S(337, 232),    S(315, 215),    S(302, 235),    S(282, 252),    S(264, 254),    S(217, 258),    //
    S(202, 204),    S(259, 211),    S(241, 230),    S(242, 219),    S(225, 232),    S(212, 252),    S(194, 244),    S(165, 242),    //
    S(179, 177),    S(236, 178),    S(234, 194),    S(217, 187),    S(211, 188),    S(185, 220),    S(185, 207),    S(158, 211),    //
    S(95, 193),     S(191, 144),    S(216, 166),    S(217, 161),    S(198, 172),    S(194, 175),    S(180, 161),    S(157, 178),    //
    S(146, 185),    S(144, 206),    S(224, 170),    S(233, 150),    S(214, 170),    S(208, 188),    S(195, 181),    S(191, 196),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(428, 362),    S(484, 328),    S(479, 347),    S(418, 433),    S(433, 391),    S(439, 385),    S(473, 312),    S(361, 416),    //
    S(453, 377),    S(414, 466),    S(403, 504),    S(273, 543),    S(295, 529),    S(353, 489),    S(377, 419),    S(402, 388),    //
    S(385, 442),    S(473, 431),    S(397, 516),    S(348, 519),    S(321, 506),    S(354, 466),    S(420, 384),    S(392, 356),    //
    S(464, 331),    S(449, 421),    S(408, 464),    S(394, 506),    S(395, 487),    S(400, 428),    S(444, 349),    S(446, 311),    //
    S(448, 340),    S(450, 376),    S(432, 410),    S(424, 440),    S(433, 436),    S(415, 408),    S(437, 336),    S(462, 259),    //
    S(423, 259),    S(454, 317),    S(464, 365),    S(436, 345),    S(441, 325),    S(445, 356),    S(459, 290),    S(431, 284),    //
    S(389, 177),    S(442, 139),    S(473, 183),    S(479, 228),    S(468, 256),    S(473, 225),    S(440, 268),    S(447, 242),    //
    S(376, 150),    S(394, 9),      S(426, 32),     S(469, 108),    S(496, 163),    S(484, 137),    S(462, 165),    S(430, 191),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-572, -150),  S(-95, 175),    S(146, 70),     S(6, -9),       S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(22, -5),      S(197, 36),     S(169, 65),     S(184, -20),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-26, 76),     S(185, 62),     S(220, 48),     S(170, -1),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-232, 80),    S(105, 35),     S(62, 39),      S(45, 31),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-285, 62),    S(39, 10),      S(86, 4),       S(-15, 42),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-133, 30),    S(128, -29),    S(84, -1),      S(56, 19),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-13, -27),    S(143, -40),    S(100, -16),    S(28, 22),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-169, -21),   S(-19, -25),    S(-96, 3),      S(-92, -12),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

// Epoch duration: 1.34946s
// clang-format on
}  // namespace Clockwork
