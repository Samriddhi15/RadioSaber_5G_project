/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2010,2011,2012,2013 TELEMATICS LAB, Politecnico di Bari
 *
 * This file is part of LTE-Sim
 *
 * LTE-Sim is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation;
 *
 * LTE-Sim is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LTE-Sim; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Giuseppe Piro <g.piro@poliba.it>
 */

#ifndef MULTIPATH_V0_M6_H_
#define MULTIPATH_V0_M6_H_

static float multipath_M6_v_0[3000] = {
    5.1223,     5.12229,    5.12228,    5.12225,     5.12223,    5.12219,
    5.12215,    5.1221,     5.12205,    5.12199,     5.12193,    5.12185,
    5.12178,    5.12169,    5.1216,     5.1215,      5.1214,     5.12129,
    5.12118,    5.12106,    5.12093,    5.12079,     5.12065,    5.12051,
    5.12035,    5.1202,     5.12003,    5.11986,     5.11968,    5.1195,
    5.11931,    5.11911,    5.11891,    5.1187,      5.11848,    5.11826,
    5.11803,    5.1178,     5.11756,    5.11731,     5.11706,    5.1168,
    5.11654,    5.11626,    5.11599,    5.1157,      5.11541,    5.11512,
    5.11481,    5.1145,     5.11419,    5.11387,     5.11354,    5.11321,
    5.11286,    5.11252,    5.11217,    5.11181,     5.11144,    5.11107,
    5.11069,    5.11031,    5.10992,    5.10952,     5.10912,    5.10871,
    5.10829,    5.10787,    5.10744,    5.10701,     5.10657,    5.10612,
    5.10567,    5.10521,    5.10474,    5.10427,     5.10379,    5.10331,
    5.10281,    5.10232,    5.10181,    5.1013,      5.10079,    5.10026,
    5.09974,    5.0992,     5.09866,    5.09811,     5.09756,    5.097,
    5.09643,    5.09586,    5.09528,    5.09469,     5.0941,     5.0935,
    5.0929,     5.09229,    5.09167,    5.09105,     5.09042,    5.08978,
    5.08914,    5.08849,    5.08783,    5.08717,     5.0865,     5.08583,
    5.08515,    5.08446,    5.08377,    5.08307,     5.08236,    5.08165,
    5.08093,    5.0802,     5.07947,    5.07874,     5.07799,    5.07724,
    5.07648,    5.07572,    5.07495,    5.07417,     5.07339,    5.0726,
    5.07181,    5.071,      5.0702,     5.06938,     5.06856,    5.06773,
    5.0669,     5.06606,    5.06521,    5.06436,     5.0635,     5.06263,
    5.06176,    5.06088,    5.06,       5.05911,     5.05821,    5.0573,
    5.05639,    5.05548,    5.05455,    5.05362,     5.05269,    5.05174,
    5.05079,    5.04984,    5.04887,    5.0479,      5.04693,    5.04595,
    5.04496,    5.04396,    5.04296,    5.04195,     5.04094,    5.03992,
    5.03889,    5.03786,    5.03682,    5.03577,     5.03472,    5.03366,
    5.03259,    5.03152,    5.03044,    5.02935,     5.02826,    5.02716,
    5.02605,    5.02494,    5.02382,    5.0227,      5.02157,    5.02043,
    5.01928,    5.01813,    5.01697,    5.01581,     5.01464,    5.01346,
    5.01228,    5.01108,    5.00989,    5.00868,     5.00747,    5.00625,
    5.00503,    5.0038,     5.00256,    5.00132,     5.00007,    4.99881,
    4.99755,    4.99628,    4.995,      4.99372,     4.99243,    4.99113,
    4.98983,    4.98852,    4.9872,     4.98587,     4.98454,    4.98321,
    4.98186,    4.98051,    4.97916,    4.97779,     4.97642,    4.97505,
    4.97366,    4.97227,    4.97087,    4.96947,     4.96806,    4.96664,
    4.96522,    4.96379,    4.96235,    4.9609,      4.95945,    4.95799,
    4.95653,    4.95506,    4.95358,    4.95209,     4.9506,     4.9491,
    4.9476,     4.94609,    4.94457,    4.94304,     4.94151,    4.93997,
    4.93842,    4.93687,    4.93531,    4.93374,     4.93217,    4.93059,
    4.929,      4.92741,    4.9258,     4.9242,      4.92258,    4.92096,
    4.91933,    4.91769,    4.91605,    4.9144,      4.91275,    4.91108,
    4.90941,    4.90773,    4.90605,    4.90436,     4.90266,    4.90096,
    4.89924,    4.89752,    4.8958,     4.89407,     4.89233,    4.89058,
    4.88882,    4.88706,    4.8853,     4.88352,     4.88174,    4.87995,
    4.87815,    4.87635,    4.87454,    4.87272,     4.8709,     4.86907,
    4.86723,    4.86538,    4.86353,    4.86167,     4.8598,     4.85793,
    4.85605,    4.85416,    4.85227,    4.85036,     4.84845,    4.84654,
    4.84461,    4.84268,    4.84074,    4.8388,      4.83685,    4.83489,
    4.83292,    4.83094,    4.82896,    4.82697,     4.82498,    4.82297,
    4.82096,    4.81895,    4.81692,    4.81489,     4.81285,    4.8108,
    4.80875,    4.80669,    4.80462,    4.80254,     4.80046,    4.79837,
    4.79627,    4.79417,    4.79205,    4.78993,     4.78781,    4.78567,
    4.78353,    4.78138,    4.77922,    4.77706,     4.77489,    4.77271,
    4.77052,    4.76833,    4.76613,    4.76392,     4.7617,     4.75948,
    4.75725,    4.75501,    4.75276,    4.75051,     4.74825,    4.74598,
    4.7437,     4.74142,    4.73913,    4.73683,     4.73452,    4.73221,
    4.72989,    4.72756,    4.72522,    4.72288,     4.72053,    4.71817,
    4.7158,     4.71342,    4.71104,    4.70865,     4.70625,    4.70385,
    4.70144,    4.69901,    4.69659,    4.69415,     4.69171,    4.68925,
    4.68679,    4.68433,    4.68185,    4.67937,     4.67688,    4.67438,
    4.67187,    4.66936,    4.66684,    4.66431,     4.66177,    4.65923,
    4.65667,    4.65411,    4.65154,    4.64897,     4.64638,    4.64379,
    4.64119,    4.63858,    4.63596,    4.63334,     4.63071,    4.62807,
    4.62542,    4.62276,    4.6201,     4.61743,     4.61475,    4.61206,
    4.60936,    4.60666,    4.60395,    4.60122,     4.5985,     4.59576,
    4.59301,    4.59026,    4.5875,     4.58473,     4.58195,    4.57917,
    4.57637,    4.57357,    4.57076,    4.56794,     4.56512,    4.56228,
    4.55944,    4.55659,    4.55373,    4.55086,     4.54799,    4.5451,
    4.54221,    4.53931,    4.5364,     4.53348,     4.53055,    4.52762,
    4.52468,    4.52173,    4.51877,    4.5158,      4.51282,    4.50984,
    4.50684,    4.50384,    4.50083,    4.49781,     4.49478,    4.49175,
    4.4887,     4.48565,    4.48259,    4.47952,     4.47644,    4.47335,
    4.47026,    4.46715,    4.46404,    4.46092,     4.45779,    4.45465,
    4.4515,     4.44834,    4.44518,    4.442,       4.43882,    4.43563,
    4.43243,    4.42922,    4.426,      4.42277,     4.41954,    4.41629,
    4.41304,    4.40978,    4.40651,    4.40323,     4.39994,    4.39664,
    4.39333,    4.39002,    4.38669,    4.38336,     4.38001,    4.37666,
    4.3733,     4.36993,    4.36655,    4.36316,     4.35977,    4.35636,
    4.35295,    4.34952,    4.34609,    4.34264,     4.33919,    4.33573,
    4.33226,    4.32878,    4.32529,    4.32179,     4.31828,    4.31477,
    4.31124,    4.30771,    4.30416,    4.30061,     4.29704,    4.29347,
    4.28989,    4.2863,     4.28269,    4.27908,     4.27546,    4.27183,
    4.26819,    4.26454,    4.26089,    4.25722,     4.25354,    4.24985,
    4.24616,    4.24245,    4.23873,    4.23501,     4.23127,    4.22753,
    4.22377,    4.22001,    4.21623,    4.21245,     4.20865,    4.20485,
    4.20104,    4.19721,    4.19338,    4.18954,     4.18568,    4.18182,
    4.17795,    4.17406,    4.17017,    4.16627,     4.16235,    4.15843,
    4.1545,     4.15055,    4.1466,     4.14264,     4.13866,    4.13468,
    4.13068,    4.12668,    4.12266,    4.11864,     4.1146,     4.11056,
    4.1065,     4.10244,    4.09836,    4.09427,     4.09018,    4.08607,
    4.08195,    4.07782,    4.07368,    4.06954,     4.06538,    4.0612,
    4.05702,    4.05283,    4.04863,    4.04442,     4.04019,    4.03596,
    4.03171,    4.02746,    4.02319,    4.01892,     4.01463,    4.01033,
    4.00602,    4.0017,     3.99737,    3.99303,     3.98867,    3.98431,
    3.97993,    3.97555,    3.97115,    3.96674,     3.96232,    3.95789,
    3.95345,    3.949,      3.94454,    3.94006,     3.93558,    3.93108,
    3.92657,    3.92205,    3.91752,    3.91298,     3.90842,    3.90386,
    3.89928,    3.89469,    3.89009,    3.88548,     3.88086,    3.87623,
    3.87158,    3.86692,    3.86226,    3.85758,     3.85288,    3.84818,
    3.84346,    3.83874,    3.834,      3.82925,     3.82448,    3.81971,
    3.81492,    3.81012,    3.80531,    3.80049,     3.79566,    3.79081,
    3.78595,    3.78108,    3.7762,     3.77131,     3.7664,     3.76148,
    3.75655,    3.7516,     3.74665,    3.74168,     3.7367,     3.73171,
    3.7267,     3.72168,    3.71665,    3.71161,     3.70656,    3.70149,
    3.69641,    3.69131,    3.68621,    3.68109,     3.67596,    3.67081,
    3.66566,    3.66049,    3.65531,    3.65011,     3.6449,     3.63968,
    3.63445,    3.6292,     3.62394,    3.61867,     3.61338,    3.60808,
    3.60277,    3.59744,    3.5921,     3.58675,     3.58138,    3.576,
    3.57061,    3.5652,     3.55979,    3.55435,     3.54891,    3.54345,
    3.53797,    3.53248,    3.52698,    3.52147,     3.51594,    3.5104,
    3.50484,    3.49927,    3.49369,    3.48809,     3.48248,    3.47685,
    3.47121,    3.46556,    3.45989,    3.45421,     3.44851,    3.4428,
    3.43707,    3.43133,    3.42558,    3.41981,     3.41403,    3.40823,
    3.40242,    3.39659,    3.39075,    3.3849,      3.37903,    3.37314,
    3.36724,    3.36133,    3.3554,     3.34945,     3.34349,    3.33752,
    3.33153,    3.32552,    3.3195,     3.31347,     3.30742,    3.30135,
    3.29527,    3.28918,    3.28306,    3.27694,     3.2708,     3.26464,
    3.25846,    3.25227,    3.24607,    3.23985,     3.23361,    3.22736,
    3.22109,    3.21481,    3.20851,    3.20219,     3.19586,    3.18951,
    3.18315,    3.17677,    3.17037,    3.16396,     3.15753,    3.15108,
    3.14462,    3.13814,    3.13164,    3.12513,     3.1186,     3.11206,
    3.10549,    3.09891,    3.09232,    3.0857,      3.07907,    3.07243,
    3.06576,    3.05908,    3.05238,    3.04567,     3.03893,    3.03218,
    3.02541,    3.01863,    3.01182,    3.005,       2.99816,    2.99131,
    2.98443,    2.97754,    2.97063,    2.9637,      2.95676,    2.94979,
    2.94281,    2.93581,    2.92879,    2.92175,     2.9147,     2.90763,
    2.90053,    2.89342,    2.88629,    2.87914,     2.87198,    2.86479,
    2.85758,    2.85036,    2.84312,    2.83585,     2.82857,    2.82127,
    2.81395,    2.80661,    2.79925,    2.79187,     2.78448,    2.77706,
    2.76962,    2.76216,    2.75469,    2.74719,     2.73967,    2.73213,
    2.72458,    2.717,      2.7094,     2.70178,     2.69414,    2.68648,
    2.6788,     2.6711,     2.66338,    2.65564,     2.64788,    2.64009,
    2.63229,    2.62446,    2.61661,    2.60874,     2.60085,    2.59294,
    2.585,      2.57705,    2.56907,    2.56107,     2.55305,    2.54501,
    2.53694,    2.52886,    2.52075,    2.51261,     2.50446,    2.49628,
    2.48808,    2.47986,    2.47162,    2.46335,     2.45506,    2.44674,
    2.43841,    2.43005,    2.42166,    2.41326,     2.40482,    2.39637,
    2.38789,    2.37939,    2.37086,    2.36232,     2.35374,    2.34514,
    2.33652,    2.32787,    2.3192,     2.31051,     2.30179,    2.29304,
    2.28427,    2.27547,    2.26665,    2.25781,     2.24894,    2.24004,
    2.23112,    2.22217,    2.2132,     2.2042,      2.19517,    2.18612,
    2.17704,    2.16794,    2.1588,     2.14965,     2.14046,    2.13125,
    2.12201,    2.11275,    2.10346,    2.09414,     2.08479,    2.07542,
    2.06601,    2.05658,    2.04712,    2.03764,     2.02812,    2.01858,
    2.00901,    1.99941,    1.98978,    1.98013,     1.97044,    1.96072,
    1.95098,    1.94121,    1.9314,     1.92157,     1.91171,    1.90181,
    1.89189,    1.88194,    1.87195,    1.86194,     1.8519,     1.84182,
    1.83171,    1.82158,    1.81141,    1.80121,     1.79098,    1.78071,
    1.77042,    1.76009,    1.74973,    1.73934,     1.72891,    1.71846,
    1.70797,    1.69744,    1.68689,    1.6763,      1.66567,    1.65502,
    1.64433,    1.6336,     1.62284,    1.61205,     1.60122,    1.59036,
    1.57946,    1.56853,    1.55756,    1.54656,     1.53552,    1.52445,
    1.51334,    1.50219,    1.491,      1.47978,     1.46853,    1.45723,
    1.4459,     1.43454,    1.42313,    1.41169,     1.4002,     1.38868,
    1.37712,    1.36553,    1.35389,    1.34222,     1.3305,     1.31875,
    1.30695,    1.29512,    1.28325,    1.27133,     1.25938,    1.24738,
    1.23535,    1.22327,    1.21115,    1.19899,     1.18678,    1.17454,
    1.16225,    1.14992,    1.13754,    1.12512,     1.11266,    1.10016,
    1.08761,    1.07501,    1.06238,    1.04969,     1.03696,    1.02419,
    1.01137,    0.998506,   0.985594,   0.972635,    0.95963,    0.946578,
    0.933478,   0.92033,    0.907135,   0.893891,    0.880598,   0.867257,
    0.853866,   0.840426,   0.826935,   0.813395,    0.799804,   0.786162,
    0.772469,   0.758724,   0.744928,   0.731079,    0.717178,   0.703224,
    0.689217,   0.675156,   0.661041,   0.646872,    0.632648,   0.618369,
    0.604034,   0.589644,   0.575198,   0.560695,    0.546135,   0.531518,
    0.516843,   0.502109,   0.487318,   0.472467,    0.457557,   0.442587,
    0.427557,   0.412466,   0.397314,   0.3821,      0.366825,   0.351487,
    0.336086,   0.320622,   0.305093,   0.289501,    0.273844,   0.258122,
    0.242334,   0.226479,   0.210558,   0.19457,     0.178514,   0.162389,
    0.146196,   0.129934,   0.113602,   0.0971992,   0.0807257,  0.0641807,
    0.0475636,  0.0308739,  0.0141111,  -0.00272556, -0.0196365, -0.0366225,
    -0.053684,  -0.0708216, -0.0880361, -0.105328,   -0.122698,  -0.140146,
    -0.157674,  -0.175282,  -0.192971,  -0.210741,   -0.228593,  -0.246527,
    -0.264546,  -0.282648,  -0.300835,  -0.319107,   -0.337466,  -0.355913,
    -0.374446,  -0.393069,  -0.411781,  -0.430583,   -0.449476,  -0.468461,
    -0.487538,  -0.506709,  -0.525974,  -0.545334,   -0.564791,  -0.584344,
    -0.603995,  -0.623745,  -0.643594,  -0.663544,   -0.683596,  -0.70375,
    -0.724007,  -0.744369,  -0.764836,  -0.78541,    -0.806091,  -0.826881,
    -0.847781,  -0.868791,  -0.889913,  -0.911148,   -0.932497,  -0.953961,
    -0.975541,  -0.997239,  -1.01906,   -1.04099,    -1.06305,   -1.08523,
    -1.10754,   -1.12996,   -1.15252,   -1.1752,     -1.19802,   -1.22096,
    -1.24403,   -1.26724,   -1.29059,   -1.31406,    -1.33768,   -1.36144,
    -1.38534,   -1.40938,   -1.43356,   -1.45789,    -1.48237,   -1.50699,
    -1.53177,   -1.5567,    -1.58178,   -1.60702,    -1.63242,   -1.65798,
    -1.6837,    -1.70958,   -1.73563,   -1.76185,    -1.78824,   -1.8148,
    -1.84153,   -1.86844,   -1.89553,   -1.9228,     -1.95025,   -1.97789,
    -2.00572,   -2.03374,   -2.06195,   -2.09035,    -2.11896,   -2.14776,
    -2.17677,   -2.20598,   -2.23541,   -2.26504,    -2.29489,   -2.32496,
    -2.35525,   -2.38577,   -2.41651,   -2.44748,    -2.47869,   -2.51013,
    -2.54182,   -2.57375,   -2.60593,   -2.63836,    -2.67105,   -2.70399,
    -2.73721,   -2.77068,   -2.80444,   -2.83846,    -2.87277,   -2.90737,
    -2.94225,   -2.97743,   -3.01291,   -3.0487,     -3.08479,   -3.1212,
    -3.15793,   -3.19499,   -3.23237,   -3.2701,     -3.30817,   -3.34659,
    -3.38537,   -3.4245,    -3.46401,   -3.50389,    -3.54416,   -3.58482,
    -3.62587,   -3.66734,   -3.70921,   -3.75151,    -3.79423,   -3.8374,
    -3.88101,   -3.92508,   -3.96961,   -4.01462,    -4.06012,   -4.10611,
    -4.15261,   -4.19963,   -4.24718,   -4.29527,    -4.34391,   -4.39312,
    -4.44291,   -4.4933,    -4.54429,   -4.5959,     -4.64814,   -4.70104,
    -4.75461,   -4.80887,   -4.86382,   -4.9195,     -4.97592,   -5.0331,
    -5.09106,   -5.14981,   -5.2094,    -5.26982,    -5.33112,   -5.39332,
    -5.45644,   -5.5205,    -5.58554,   -5.6516,     -5.71869,   -5.78685,
    -5.85612,   -5.92653,   -5.99812,   -6.07093,    -6.14501,   -6.22039,
    -6.29712,   -6.37526,   -6.45484,   -6.53594,    -6.6186,    -6.70289,
    -6.78886,   -6.8766,    -6.96617,   -7.05765,    -7.15113,   -7.24668,
    -7.34441,   -7.44442,   -7.54681,   -7.6517,     -7.75921,   -7.86948,
    -7.98265,   -8.09888,   -8.21834,   -8.3412,     -8.46768,   -8.59798,
    -8.73234,   -8.87102,   -9.01432,   -9.16255,    -9.31604,   -9.4752,
    -9.64046,   -9.8123,    -9.99125,   -10.1779,    -10.3731,   -10.5774,
    -10.7919,   -11.0176,   -11.2558,   -11.5078,    -11.7754,   -12.0606,
    -12.366,    -12.6945,   -13.05,     -13.4374,    -13.8628,   -14.3345,
    -14.8639,   -15.4671,   -16.1679,   -17.0042,    -18.0411,   -19.4063,
    -21.409,    -25.2388,   -29.0512,   -22.6104,    -20.1228,   -18.5509,
    -17.3989,   -16.4892,   -15.7373,   -15.0964,    -14.538,    -14.0432,
    -13.5989,   -13.1958,   -12.8269,   -12.4869,    -12.1715,   -11.8774,
    -11.6019,   -11.3428,   -11.0983,   -10.8667,    -10.6469,   -10.4376,
    -10.2378,   -10.0469,   -9.86393,   -9.68834,    -9.51955,   -9.35705,
    -9.20039,   -9.04915,   -8.90299,   -8.76155,    -8.62456,   -8.49173,
    -8.36283,   -8.23762,   -8.1159,    -7.99748,    -7.88219,   -7.76986,
    -7.66035,   -7.55351,   -7.44923,   -7.34737,    -7.24784,   -7.15052,
    -7.05531,   -6.96214,   -6.87091,   -6.78155,    -6.69397,   -6.60812,
    -6.52391,   -6.4413,    -6.36022,   -6.28061,    -6.20243,   -6.12561,
    -6.05013,   -5.97592,   -5.90295,   -5.83118,    -5.76056,   -5.69106,
    -5.62266,   -5.5553,    -5.48896,   -5.42362,    -5.35923,   -5.29578,
    -5.23324,   -5.17157,   -5.11076,   -5.05079,    -4.99162,   -4.93324,
    -4.87563,   -4.81877,   -4.76264,   -4.70722,    -4.65249,   -4.59843,
    -4.54504,   -4.49229,   -4.44016,   -4.38865,    -4.33774,   -4.28741,
    -4.23765,   -4.18845,   -4.1398,    -4.09169,    -4.04409,   -3.99701,
    -3.95043,   -3.90434,   -3.85872,   -3.81358,    -3.7689,    -3.72467,
    -3.68089,   -3.63753,   -3.5946,    -3.55209,    -3.50999,   -3.46829,
    -3.42698,   -3.38605,   -3.34551,   -3.30534,    -3.26553,   -3.22608,
    -3.18699,   -3.14824,   -3.10983,   -3.07175,    -3.03401,   -2.99658,
    -2.95948,   -2.92268,   -2.8862,    -2.85001,    -2.81412,   -2.77853,
    -2.74322,   -2.70819,   -2.67344,   -2.63897,    -2.60476,   -2.57082,
    -2.53715,   -2.50373,   -2.47056,   -2.43765,    -2.40498,   -2.37255,
    -2.34036,   -2.30841,   -2.27669,   -2.24519,    -2.21393,   -2.18288,
    -2.15206,   -2.12145,   -2.09105,   -2.06087,    -2.03089,   -2.00112,
    -1.97155,   -1.94217,   -1.913,     -1.88402,    -1.85523,   -1.82662,
    -1.79821,   -1.76998,   -1.74193,   -1.71406,    -1.68637,   -1.65885,
    -1.63151,   -1.60433,   -1.57733,   -1.55049,    -1.52382,   -1.49731,
    -1.47096,   -1.44476,   -1.41873,   -1.39285,    -1.36712,   -1.34155,
    -1.31612,   -1.29085,   -1.26571,   -1.24073,    -1.21588,   -1.19118,
    -1.16662,   -1.1422,    -1.11791,   -1.09376,    -1.06974,   -1.04585,
    -1.0221,    -0.998475,  -0.974978,  -0.951608,   -0.928363,  -0.905243,
    -0.882246,  -0.85937,   -0.836615,  -0.813978,   -0.79146,   -0.769058,
    -0.746772,  -0.724601,  -0.702543,  -0.680596,   -0.658761,  -0.637036,
    -0.61542,   -0.593911,  -0.572509,  -0.551213,   -0.530022,  -0.508935,
    -0.48795,   -0.467067,  -0.446285,  -0.425603,   -0.405019,  -0.384534,
    -0.364146,  -0.343854,  -0.323658,  -0.303556,   -0.283548,  -0.263632,
    -0.243809,  -0.224077,  -0.204435,  -0.184883,   -0.165419,  -0.146044,
    -0.126755,  -0.107554,  -0.0884378, -0.0694068,  -0.0504602, -0.0315971,
    -0.0128169, 0.00588112, 0.0244977,  0.0430334,   0.061489,   0.0798652,
    0.0981625,  0.116382,   0.134523,   0.152588,    0.170577,   0.188489,
    0.206327,   0.22409,    0.24178,    0.259396,    0.276939,   0.294411,
    0.31181,    0.329139,   0.346397,   0.363586,    0.380705,   0.397755,
    0.414737,   0.431651,   0.448497,   0.465277,    0.481991,   0.498639,
    0.515221,   0.531739,   0.548193,   0.564582,    0.580908,   0.597172,
    0.613372,   0.629511,   0.645588,   0.661604,    0.67756,    0.693455,
    0.70929,    0.725066,   0.740783,   0.756441,    0.772041,   0.787584,
    0.803069,   0.818497,   0.833868,   0.849184,    0.864443,   0.879647,
    0.894797,   0.909891,   0.924931,   0.939917,    0.95485,    0.969729,
    0.984556,   0.99933,    1.01405,    1.02872,     1.04334,    1.05791,
    1.07242,    1.08689,    1.10131,    1.11567,     1.12999,    1.14426,
    1.15847,    1.17264,    1.18677,    1.20084,     1.21487,    1.22884,
    1.24278,    1.25666,    1.2705,     1.28429,     1.29804,    1.31174,
    1.32539,    1.339,      1.35257,    1.36609,     1.37956,    1.393,
    1.40638,    1.41973,    1.43303,    1.44629,     1.45951,    1.47268,
    1.48581,    1.4989,     1.51195,    1.52495,     1.53792,    1.55084,
    1.56373,    1.57657,    1.58937,    1.60213,     1.61486,    1.62754,
    1.64018,    1.65279,    1.66535,    1.67788,     1.69037,    1.70281,
    1.71523,    1.7276,     1.73994,    1.75223,     1.7645,     1.77672,
    1.78891,    1.80106,    1.81317,    1.82525,     1.83729,    1.8493,
    1.86127,    1.8732,     1.8851,     1.89696,     1.90879,    1.92059,
    1.93235,    1.94407,    1.95576,    1.96742,     1.97905,    1.99063,
    2.00219,    2.01371,    2.0252,     2.03666,     2.04808,    2.05947,
    2.07083,    2.08216,    2.09345,    2.10471,     2.11594,    2.12714,
    2.13831,    2.14945,    2.16055,    2.17162,     2.18266,    2.19368,
    2.20466,    2.21561,    2.22653,    2.23742,     2.24828,    2.25911,
    2.26991,    2.28068,    2.29142,    2.30213,     2.31281,    2.32346,
    2.33409,    2.34468,    2.35525,    2.36579,     2.3763,     2.38678,
    2.39723,    2.40766,    2.41806,    2.42843,     2.43877,    2.44909,
    2.45937,    2.46963,    2.47987,    2.49007,     2.50025,    2.51041,
    2.52053,    2.53063,    2.54071,    2.55075,     2.56077,    2.57077,
    2.58074,    2.59068,    2.6006,     2.61049,     2.62036,    2.6302,
    2.64001,    2.6498,     2.65957,    2.66931,     2.67902,    2.68872,
    2.69838,    2.70802,    2.71764,    2.72723,     2.7368,     2.74635,
    2.75587,    2.76537,    2.77484,    2.78429,     2.79372,    2.80312,
    2.8125,     2.82185,    2.83119,    2.8405,      2.84978,    2.85905,
    2.86829,    2.87751,    2.8867,     2.89588,     2.90503,    2.91415,
    2.92326,    2.93234,    2.94141,    2.95045,     2.95946,    2.96846,
    2.97743,    2.98639,    2.99532,    3.00423,     3.01311,    3.02198,
    3.03083,    3.03965,    3.04845,    3.05724,     3.066,      3.07474,
    3.08346,    3.09216,    3.10084,    3.10949,     3.11813,    3.12675,
    3.13535,    3.14392,    3.15248,    3.16102,     3.16953,    3.17803,
    3.18651,    3.19496,    3.2034,     3.21182,     3.22022,    3.2286,
    3.23696,    3.2453,     3.25362,    3.26192,     3.2702,     3.27846,
    3.28671,    3.29494,    3.30314,    3.31133,     3.3195,     3.32765,
    3.33578,    3.3439,     3.35199,    3.36007,     3.36813,    3.37617,
    3.38419,    3.39219,    3.40018,    3.40815,     3.4161,     3.42403,
    3.43195,    3.43984,    3.44772,    3.45558,     3.46343,    3.47125,
    3.47906,    3.48685,    3.49463,    3.50239,     3.51013,    3.51785,
    3.52555,    3.53324,    3.54092,    3.54857,     3.55621,    3.56383,
    3.57143,    3.57902,    3.58659,    3.59415,     3.60169,    3.60921,
    3.61671,    3.6242,     3.63167,    3.63913,     3.64657,    3.65399,
    3.6614,     3.66879,    3.67617,    3.68353,     3.69087,    3.6982,
    3.70552,    3.71281,    3.72009,    3.72736,     3.73461,    3.74184,
    3.74906,    3.75627,    3.76345,    3.77063,     3.77778,    3.78493,
    3.79205,    3.79917,    3.80626,    3.81334,     3.82041,    3.82746,
    3.8345,     3.84152,    3.84853,    3.85552,     3.8625,     3.86946,
    3.87641,    3.88334,    3.89026,    3.89717,     3.90406,    3.91093,
    3.9178,     3.92464,    3.93148,    3.93829,     3.9451,     3.95189,
    3.95867,    3.96543,    3.97218,    3.97891,     3.98563,    3.99234,
    3.99903,    4.00571,    4.01237,    4.01902,     4.02566,    4.03228,
    4.03889,    4.04549,    4.05207,    4.05864,     4.0652,     4.07174,
    4.07827,    4.08478,    4.09129,    4.09778,     4.10425,    4.11071,
    4.11716,    4.1236,     4.13002,    4.13643,     4.14283,    4.14921,
    4.15558,    4.16194,    4.16829,    4.17462,     4.18094,    4.18725,
    4.19354,    4.19982,    4.20609,    4.21235,     4.21859,    4.22482,
    4.23104,    4.23725,    4.24344,    4.24962,     4.25579,    4.26194,
    4.26809,    4.27422,    4.28034,    4.28645,     4.29254,    4.29862,
    4.30469,    4.31075,    4.3168,     4.32283,     4.32886,    4.33487,
    4.34086,    4.34685,    4.35283,    4.35879,     4.36474,    4.37068,
    4.37661,    4.38252,    4.38842,    4.39432,     4.4002,     4.40607,
    4.41192,    4.41777,    4.4236,     4.42943,     4.43524,    4.44104,
    4.44683,    4.4526,     4.45837,    4.46412,     4.46987,    4.4756,
    4.48132,    4.48703,    4.49273,    4.49841,     4.50409,    4.50976,
    4.51541,    4.52105,    4.52668,    4.5323,      4.53791,    4.54351,
    4.5491,     4.55468,    4.56024,    4.5658,      4.57134,    4.57688,
    4.5824,     4.58791,    4.59341,    4.59891,     4.60439,    4.60986,
    4.61531,    4.62076,    4.6262,     4.63163,     4.63705,    4.64245,
    4.64785,    4.65323,    4.65861,    4.66397,     4.66933,    4.67467,
    4.68001,    4.68533,    4.69064,    4.69594,     4.70124,    4.70652,
    4.71179,    4.71705,    4.72231,    4.72755,     4.73278,    4.738,
    4.74321,    4.74842,    4.75361,    4.75879,     4.76396,    4.76912,
    4.77428,    4.77942,    4.78455,    4.78967,     4.79479,    4.79989,
    4.80498,    4.81007,    4.81514,    4.8202,      4.82526,    4.8303,
    4.83534,    4.84036,    4.84538,    4.85039,     4.85538,    4.86037,
    4.86535,    4.87032,    4.87528,    4.88022,     4.88516,    4.89009,
    4.89502,    4.89993,    4.90483,    4.90972,     4.91461,    4.91948,
    4.92435,    4.9292,     4.93405,    4.93889,     4.94372,    4.94853,
    4.95334,    4.95815,    4.96294,    4.96772,     4.97249,    4.97726,
    4.98201,    4.98676,    4.9915,     4.99623,     5.00094,    5.00566,
    5.01036,    5.01505,    5.01973,    5.02441,     5.02907,    5.03373,
    5.03838,    5.04302,    5.04765,    5.05227,     5.05689,    5.06149,
    5.06609,    5.07067,    5.07525,    5.07982,     5.08438,    5.08893,
    5.09348,    5.09801,    5.10254,    5.10706,     5.11157,    5.11607,
    5.12056,    5.12505,    5.12952,    5.13399,     5.13845,    5.1429,
    5.14734,    5.15177,    5.1562,     5.16061,     5.16502,    5.16942,
    5.17381,    5.1782,     5.18257,    5.18694,     5.1913,     5.19565,
    5.19999,    5.20432,    5.20865,    5.21297,     5.21728,    5.22158,
    5.22587,    5.23015,    5.23443,    5.2387,      5.24296,    5.24721,
    5.25146,    5.25569,    5.25992,    5.26414,     5.26836,    5.27256,
    5.27676,    5.28094,    5.28513,    5.2893,      5.29346,    5.29762,
    5.30177,    5.30591,    5.31004,    5.31417,     5.31829,    5.3224,
    5.3265,     5.33059,    5.33468,    5.33876,     5.34283,    5.34689,
    5.35095,    5.355,      5.35904,    5.36307,     5.36709,    5.37111,
    5.37512,    5.37912,    5.38312,    5.3871,      5.39108,    5.39506,
    5.39902,    5.40298,    5.40693,    5.41087,     5.4148,     5.41873,
    5.42265,    5.42656,    5.43046,    5.43436,     5.43825,    5.44213,
    5.44601,    5.44987,    5.45373,    5.45759,     5.46143,    5.46527,
    5.4691,     5.47292,    5.47674,    5.48055,     5.48435,    5.48814,
    5.49193,    5.49571,    5.49948,    5.50325,     5.507,      5.51075,
    5.5145,     5.51823,    5.52196,    5.52569,     5.5294,     5.53311,
    5.53681,    5.5405,     5.54419,    5.54787,     5.55154,    5.55521,
    5.55886,    5.56252,    5.56616,    5.5698,      5.57343,    5.57705,
    5.58067,    5.58428,    5.58788,    5.59147,     5.59506,    5.59864,
    5.60222,    5.60579,    5.60935,    5.6129,      5.61645,    5.61999,
    5.62352,    5.62705,    5.63057,    5.63408,     5.63759,    5.64108,
    5.64458,    5.64806,    5.65154,    5.65501,     5.65848,    5.66194,
    5.66539,    5.66883,    5.67227,    5.6757,      5.67913,    5.68255,
    5.68596,    5.68936,    5.69276,    5.69615,     5.69954,    5.70292,
    5.70629,    5.70966,    5.71301,    5.71637,     5.71971,    5.72305,
    5.72638,    5.72971,    5.73303,    5.73634,     5.73965,    5.74295,
    5.74624,    5.74953,    5.75281,    5.75608,     5.75935,    5.76261,
    5.76586,    5.76911,    5.77235,    5.77559,     5.77882,    5.78204,
    5.78526,    5.78847,    5.79167,    5.79487,     5.79806,    5.80124,
    5.80442,    5.80759,    5.81076,    5.81391,     5.81707,    5.82021,
    5.82335,    5.82649,    5.82961,    5.83274,     5.83585,    5.83896,
    5.84206,    5.84516,    5.84825,    5.85133,     5.85441,    5.85748,
    5.86055,    5.86361,    5.86666,    5.8697,      5.87275,    5.87578,
    5.87881,    5.88183,    5.88485,    5.88786,     5.89086,    5.89386,
    5.89685,    5.89984,    5.90281,    5.90579,     5.90876,    5.91172,
    5.91467,    5.91762,    5.92056,    5.9235,      5.92643,    5.92936,
    5.93228,    5.93519,    5.9381,     5.941,       5.94389,    5.94678,
    5.94967,    5.95254,    5.95542,    5.95828,     5.96114,    5.96399,
    5.96684,    5.96968,    5.97252,    5.97535,     5.97817,    5.98099,
    5.9838,     5.98661,    5.98941,    5.99221,     5.995,      5.99778,
    6.00056,    6.00333,    6.00609,    6.00885,     6.01161,    6.01436,
    6.0171,     6.01984,    6.02257,    6.02529,     6.02801,    6.03073,
    6.03343,    6.03614,    6.03883,    6.04152,     6.04421,    6.04689,
    6.04956,    6.05223,    6.05489,    6.05755,     6.0602,     6.06285,
    6.06549,    6.06812,    6.07075,    6.07337,     6.07599,    6.0786,
    6.08121,    6.08381,    6.0864,     6.08899,     6.09157,    6.09415,
    6.09672,    6.09929,    6.10185,    6.10441,     6.10696,    6.1095,
    6.11204,    6.11457,    6.1171,     6.11962,     6.12214,    6.12465,
    6.12716,    6.12966,    6.13215,    6.13464,     6.13712,    6.1396,
    6.14208,    6.14454,    6.14701,    6.14946,     6.15191,    6.15436,
    6.1568,     6.15923,    6.16166,    6.16409,     6.1665,     6.16892,
    6.17132,    6.17373,    6.17612,    6.17851,     6.1809,     6.18328,
    6.18566,    6.18803,    6.19039,    6.19275,     6.1951,     6.19745,
    6.19979,    6.20213,    6.20446,    6.20679,     6.20911,    6.21143,
    6.21374,    6.21605,    6.21835,    6.22064,     6.22293,    6.22522,
    6.2275,     6.22977,    6.23204,    6.2343,      6.23656,    6.23881,
    6.24106,    6.2433,     6.24554,    6.24777,     6.25,       6.25222,
    6.25444,    6.25665,    6.25885,    6.26105,     6.26325,    6.26544,
    6.26763,    6.26981,    6.27198,    6.27415,     6.27631,    6.27847,
    6.28063,    6.28278,    6.28492,    6.28706,     6.28919,    6.29132,
    6.29344,    6.29556,    6.29768,    6.29978,     6.30189,    6.30398,
    6.30608,    6.30816,    6.31025,    6.31232,     6.3144,     6.31646,
    6.31853,    6.32058,    6.32263,    6.32468,     6.32672,    6.32876,
    6.33079,    6.33282,    6.33484,    6.33686,     6.33887,    6.34088,
    6.34288,    6.34487,    6.34686,    6.34885,     6.35083,    6.35281,
    6.35478,    6.35675,    6.35871,    6.36067,     6.36262,    6.36456,
    6.36651,    6.36844,    6.37037,    6.3723,      6.37422,    6.37614,
    6.37805,    6.37996,    6.38186,    6.38376,     6.38565,    6.38754,
    6.38942,    6.3913,     6.39317,    6.39504,     6.3969,     6.39876,
    6.40061,    6.40246,    6.4043,     6.40614,     6.40797,    6.4098,
    6.41162,    6.41344,    6.41526,    6.41707,     6.41887,    6.42067,
    6.42246,    6.42425,    6.42604,    6.42782,     6.42959,    6.43136,
    6.43313,    6.43489,    6.43665,    6.4384,      6.44014,    6.44188,
    6.44362,    6.44535,    6.44708,    6.4488,      6.45052,    6.45223,
    6.45394,    6.45564,    6.45734,    6.45903,     6.46072,    6.46241,
    6.46409,    6.46576,    6.46743,    6.46909,     6.47075,    6.47241,
    6.47406,    6.47571,    6.47735,    6.47898,     6.48062,    6.48224,
    6.48387,    6.48548,    6.4871,     6.4887,      6.49031,    6.49191,
    6.4935,     6.49509,    6.49667,    6.49825,     6.49983,    6.5014,
    6.50297,    6.50453,    6.50608,    6.50764,     6.50918,    6.51073,
    6.51226,    6.5138,     6.51532,    6.51685,     6.51837,    6.51988,
    6.52139,    6.5229,     6.5244,     6.52589,     6.52739,    6.52887,
    6.53036,    6.53183,    6.53331,    6.53477,     6.53624,    6.5377,
    6.53915,    6.5406,     6.54205,    6.54349,     6.54492,    6.54635,
    6.54778,    6.5492,     6.55062,    6.55204,     6.55344,    6.55485,
    6.55625,    6.55764,    6.55903,    6.56042,     6.5618,     6.56318,
    6.56455,    6.56592,    6.56728,    6.56864,     6.56999,    6.57134,
    6.57268,    6.57402,    6.57536,    6.57669,     6.57802,    6.57934,
    6.58066,    6.58197,    6.58328,    6.58458,     6.58588,    6.58718,
    6.58847,    6.58976,    6.59104,    6.59231,     6.59359,    6.59485,
    6.59612,    6.59738,    6.59863,    6.59988,     6.60113,    6.60237,
    6.6036,     6.60484,    6.60606,    6.60729,     6.60851,    6.60972,
    6.61093,    6.61214,    6.61334,    6.61453,     6.61573,    6.61691,
    6.6181,     6.61928,    6.62045,    6.62162,     6.62278,    6.62395,
    6.6251,     6.62625,    6.6274,     6.62854,     6.62968,    6.63082,
    6.63195,    6.63307,    6.63419,    6.63531,     6.63642,    6.63753,
    6.63863,    6.63973,    6.64083,    6.64192,     6.643,      6.64409,
    6.64516,    6.64624,    6.6473,     6.64837,     6.64943,    6.65048,
    6.65153,    6.65258,    6.65362,    6.65466,     6.65569,    6.65672,
    6.65775,    6.65877,    6.65978,    6.66079,     6.6618,     6.6628,
    6.6638,     6.6648,     6.66578,    6.66677,     6.66775,    6.66873,
    6.6697,     6.67067,    6.67163,    6.67259,     6.67355,    6.6745,
    6.67544,    6.67638,    6.67732,    6.67825,     6.67918,    6.68011,
    6.68103,    6.68194,    6.68286,    6.68376,     6.68467,    6.68556,
    6.68646,    6.68735,    6.68823,    6.68912,     6.68999,    6.69087,
    6.69173,    6.6926,     6.69346,    6.69431,     6.69517,    6.69601,
    6.69686,    6.69769,    6.69853,    6.69936,     6.70018,    6.70101,
    6.70182,    6.70264,    6.70344,    6.70425,     6.70505,    6.70584,
    6.70663,    6.70742,    6.7082,     6.70898,     6.70976,    6.71053,
    6.71129,    6.71206,    6.71281,    6.71357,     6.71431,    6.71506,
    6.7158,     6.71653,    6.71727,    6.71799,     6.71872,    6.71944,
    6.72015,    6.72086,    6.72157,    6.72227,     6.72297,    6.72366,
    6.72435,    6.72504,    6.72572,    6.72639,     6.72707,    6.72773,
    6.7284,     6.72906,    6.72971,    6.73036,     6.73101,    6.73165,
    6.73229,    6.73293,    6.73356,    6.73418,     6.73481,    6.73542,
    6.73604,    6.73665,    6.73725,    6.73785,     6.73845,    6.73904,
    6.73963,    6.74021,    6.74079,    6.74137,     6.74194,    6.74251,
    6.74307,    6.74363,    6.74418,    6.74473,     6.74528,    6.74582,
    6.74636,    6.74689,    6.74742,    6.74795,     6.74847,    6.74898,
    6.7495,     6.75001,    6.75051,    6.75101,     6.75151,    6.752,
    6.75249,    6.75297,    6.75345,    6.75392,     6.75439,    6.75486,
    6.75532,    6.75578,    6.75624,    6.75669,     6.75713,    6.75757,
    6.75801,    6.75844,    6.75887,    6.7593,      6.75972,    6.76014,
    6.76055,    6.76096,    6.76136,    6.76176,     6.76216,    6.76255,
    6.76294,    6.76332,    6.7637,     6.76407,     6.76445,    6.76481,
    6.76517,    6.76553,    6.76589,    6.76624,     6.76658,    6.76693,
    6.76726,    6.7676,     6.76793,    6.76825,     6.76857,    6.76889,
    6.7692,     6.76951,    6.76982,    6.77012,     6.77041,    6.77071,
    6.77099,    6.77128,    6.77156,    6.77183,     6.77211,    6.77237,
    6.77264,    6.7729,     6.77315,    6.7734,      6.77365,    6.77389,
    6.77413,    6.77436,    6.7746,     6.77482,     6.77504,    6.77526,
    6.77548,    6.77568,    6.77589,    6.77609,     6.77629,    6.77648,
    6.77667,    6.77686,    6.77704,    6.77721,     6.77739,    6.77756,
    6.77772,    6.77788,    6.77804,    6.77819,     6.77834,    6.77848,
    6.77862,    6.77876,    6.77889,    6.77901,     6.77914,    6.77926,
    6.77937,    6.77948,    6.77959,    6.77969,     6.77979,    6.77988,
    6.77997,    6.78006,    6.78014,    6.78022,     6.7803,     6.78036,
    6.78043,    6.78049,    6.78055,    6.7806,      6.78065,    6.7807,
    6.78074,    6.78078,    6.78081,    6.78084,     6.78086,    6.78088,
    6.7809,     6.78091,    6.78092,    6.78092,     6.78092,    6.78092,
    6.78091,    6.7809,     6.78088,    6.78086,     6.78084,    6.78081,
    6.78078,    6.78074,    6.7807,     6.78065,     6.7806,     6.78055,
    6.78049,    6.78043,    6.78036,    6.78029,     6.78022,    6.78014,
    6.78006,    6.77997,    6.77988,    6.77979,     6.77969,    6.77959,
    6.77948,    6.77937,    6.77926,    6.77914,     6.77901,    6.77889,
    6.77876,    6.77862,    6.77848,    6.77834,     6.77819,    6.77804,
    6.77788,    6.77772,    6.77756,    6.77739,     6.77722,    6.77704,
    6.77686,    6.77668,    6.77649,    6.7763,      6.7761,     6.7759,
    6.77569,    6.77548,    6.77527,    6.77505,     6.77483,    6.77461,
    6.77438,    6.77414,    6.7739,     6.77366,     6.77342,    6.77317,
    6.77291,    6.77265,    6.77239,    6.77212,     6.77185,    6.77158,
    6.7713,     6.77102,    6.77073,    6.77044,     6.77014,    6.76984};

#endif /* MULTIPATH_V0_M6_H_ */