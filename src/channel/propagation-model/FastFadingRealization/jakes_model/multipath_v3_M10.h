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

#ifndef MULTIPATH_V3_M10_H_
#define MULTIPATH_V3_M10_H_

static float multipath_M10_v_3[3000] = {
    9.28494,     9.27872,    9.26834,    9.25379,     9.23503,     9.21203,
    9.18475,     9.15312,    9.11709,    9.07659,     9.03153,     8.98182,
    8.92735,     8.868,      8.80364,    8.73412,     8.65927,     8.57891,
    8.49284,     8.40082,    8.3026,     8.1979,      8.0864,      7.96774,
    7.84152,     7.7073,     7.56458,    7.41277,     7.25122,     7.07918,
    6.89581,     6.70009,    6.49088,    6.26681,     6.02628,     5.76736,
    5.48773,     5.18454,    4.85428,    4.49249,     4.09345,     3.64962,
    3.15083,     2.58279,    1.92463,    1.14404,     0.187072,    -1.047,
    -2.78262,    -5.7241,    -20.8186,   -6.00346,    -2.92513,    -1.14518,
    0.110118,    1.07908,    1.86704,    2.52995,     3.10111,     3.60195,
    4.04707,     4.44688,    4.80904,    5.1394,      5.44245,     5.7218,
    5.98031,     6.22034,    6.44385,    6.65246,     6.84755,     7.0303,
    7.20171,     7.36266,    7.5139,     7.65609,     7.78983,     7.91562,
    8.03393,     8.14515,    8.24966,    8.34778,     8.4398,      8.52599,
    8.60657,     8.68178,    8.75179,    8.81679,     8.87693,     8.93236,
    8.98321,     9.0296,     9.07162,    9.10939,     9.14297,     9.17246,
    9.19792,     9.2194,     9.23697,    9.25066,     9.26052,     9.26658,
    9.26887,     9.2674,     9.26219,    9.25325,     9.24057,     9.22417,
    9.20402,     9.18011,    9.15243,    9.12094,     9.08561,     9.0464,
    9.00326,     8.95615,    8.90499,    8.84973,     8.79028,     8.72656,
    8.65847,     8.5859,     8.50874,    8.42687,     8.34012,     8.24836,
    8.1514,      8.04905,    7.94111,    7.82733,     7.70746,     7.58121,
    7.44825,     7.30825,    7.16078,    7.00542,     6.84165,     6.6689,
    6.48654,     6.29382,    6.0899,     5.87381,     5.64442,     5.40039,
    5.14017,     4.86189,    4.5633,     4.24167,     3.89361,     3.51486,
    3.09997,     2.64181,    2.13077,    1.55352,     0.8907,      0.11277,
    -0.828819,   -2.02243,   -3.65684,   -6.27354,    -13.6705,    -8.30645,
    -4.73819,    -2.82807,   -1.52329,   -0.535971,   0.25501,     0.912174,
    1.47205,     1.95782,    2.38515,    2.7651,      3.10577,     3.41328,
    3.69234,     3.94669,    4.1793,     4.39262,     4.58863,     4.76901,
    4.93516,     5.08828,    5.22937,    5.35932,     5.47887,     5.58868,
    5.68933,     5.78131,    5.86507,    5.94099,     6.00941,     6.07062,
    6.1249,      6.17247,    6.21352,    6.24825,     6.27679,     6.29928,
    6.31582,     6.32651,    6.33142,    6.3306,      6.32409,     6.31191,
    6.29407,     6.27057,    6.24137,    6.20643,     6.1657,      6.1191,
    6.06653,     6.0079,     5.94306,    5.87185,     5.79412,     5.70963,
    5.61818,     5.51948,    5.41325,    5.29913,     5.17674,     5.04564,
    4.90533,     4.75522,    4.59467,    4.42292,     4.23909,     4.04217,
    3.83096,     3.60407,    3.35983,    3.09625,     2.81089,     2.50079,
    2.16223,     1.79052,    1.37958,    0.921362,    0.40488,     -0.185381,
    -0.872387,   -1.69224,   -2.70657,   -4.03433,    -5.95643,    -9.48305,
    -15.5131,    -7.73849,   -5.11629,   -3.50109,    -2.33397,    -1.42207,
    -0.675594,   -0.0453697, 0.498485,   0.975486,    1.39909,     1.77895,
    2.12225,     2.43447,    2.71986,    2.98184,     3.22314,     3.446,
    3.65228,     3.84355,    4.02112,    4.18611,     4.33948,     4.48207,
    4.61461,     4.73771,    4.85193,    4.95777,     5.05564,     5.14593,
    5.22897,     5.30506,    5.37447,    5.43743,     5.49414,     5.54479,
    5.58955,     5.62855,    5.66192,    5.68977,     5.71218,     5.72923,
    5.74099,     5.7475,     5.74881,    5.74492,     5.73586,     5.72162,
    5.70218,     5.67753,    5.64762,    5.6124,      5.57181,     5.52575,
    5.47415,     5.41689,    5.35384,    5.28485,     5.20976,     5.12838,
    5.04049,     4.94586,    4.8442,     4.73522,     4.61856,     4.49385,
    4.36063,     4.2184,     4.0666,     3.90458,     3.73159,     3.54676,
    3.34911,     3.13746,    2.91046,    2.66647,     2.40355,     2.11936,
    1.81102,     1.47496,    1.10666,    0.700301,    0.248223,    -0.259976,
    -0.838897,   -1.50996,   -2.30645,   -3.2843,     -4.54879,    -6.3381,
    -9.42526,    -24.3369,   -9.17278,   -6.24145,    -4.51721,    -3.29512,
    -2.35062,    -1.58295,   -0.938137,  -0.383872,   0.100724,    0.529924,
    0.913917,    1.26023,    1.57458,    1.86141,     2.12424,     2.36591,
    2.58872,     2.7946,     2.98515,    3.16171,     3.32543,     3.4773,
    3.61816,     3.74875,    3.8697,     3.98159,     4.08488,     4.18003,
    4.2674,      4.34733,    4.42013,    4.48604,     4.5453,      4.59812,
    4.64467,     4.68511,    4.71956,    4.74815,     4.77097,     4.78811,
    4.79961,     4.80554,    4.80592,    4.80078,     4.79011,     4.77392,
    4.75216,     4.72481,    4.6918,     4.65308,     4.60854,     4.55809,
    4.50161,     4.43895,    4.36995,    4.29442,     4.21215,     4.12289,
    4.02637,     3.92228,    3.81026,    3.68991,     3.56078,     3.42235,
    3.27403,     3.11515,    2.94493,    2.76247,     2.56672,     2.35645,
    2.13024,     1.88635,    1.62272,    1.33685,     1.02564,     0.685251,
    0.310768,    -0.104171,  -0.568034,  -1.09243,    -1.69389,    -2.39708,
    -3.24128,    -4.29469,   -5.69253,   -7.76996,    -11.8977,    -14.2261,
    -8.54081,    -6.16723,   -4.64746,   -3.52996,    -2.64792,    -1.921,
    -1.30428,    -0.770098,  -0.30018,   0.118154,    0.494072,    0.834416,
    1.14443,     1.4282,     1.68902,    1.92951,     2.15186,     2.35786,
    2.54903,     2.72666,    2.89182,    3.04545,     3.18838,     3.32129,
    3.44481,     3.55948,    3.66576,    3.76408,     3.8548,      3.93826,
    4.01473,     4.08447,    4.14772,    4.20467,     4.2555,      4.30036,
    4.33938,     4.37269,    4.40038,    4.42254,     4.43923,     4.4505,
    4.4564,      4.45696,    4.45217,    4.44205,     4.42659,     4.40575,
    4.37949,     4.34776,    4.31049,    4.2676,      4.21899,     4.16454,
    4.10412,     4.03757,    3.96471,    3.88534,     3.79923,     3.70613,
    3.60575,     3.49776,    3.38178,    3.2574,      3.12414,     2.98146,
    2.82874,     2.66527,    2.49024,    2.3027,      2.10154,     1.88549,
    1.65302,     1.4023,     1.13115,    0.836886,    0.51621,     0.164969,
    -0.222143,   -0.652066,  -1.13411,   -1.68118,    -2.31191,    -3.05459,
    -3.95537,    -5.09724,   -6.65426,   -9.10671,    -15.2765,    -11.9847,
    -8.06811,    -6.04978,   -4.68374,   -3.65243,    -2.82577,    -2.1376,
    -1.54963,    -1.03772,   -0.585644,  -0.181988,   0.181593,    0.511375,
    0.812202,    1.08789,    1.34148,    1.57547,     1.79191,     1.99248,
    2.17864,     2.35158,    2.51236,    2.66187,     2.80087,     2.93005,
    3.04999,     3.1612,     3.26414,    3.35921,     3.44676,     3.52711,
    3.60053,     3.66727,    3.72753,    3.78152,     3.82939,     3.87129,
    3.90736,     3.93769,    3.96237,    3.98149,     3.9951,      4.00324,
    4.00595,     4.00325,    3.99513,    3.98158,     3.96259,     3.93812,
    3.90811,     3.87249,    3.83119,    3.7841,      3.73111,     3.67209,
    3.60687,     3.53528,    3.45712,    3.37216,     3.28013,     3.18075,
    3.07368,     2.95856,    2.83494,    2.70236,     2.56025,     2.40801,
    2.24489,     2.07008,    1.88261,    1.68136,     1.46502,     1.23203,
    0.980536,    0.708284,   0.412537,   0.0898989,   -0.263902,   -0.654343,
    -1.08861,    -1.57637,   -2.13111,   -2.77236,    -3.53006,    -4.45349,
    -5.63272,    -7.26129,   -9.90121,   -17.7634,    -11.6297,    -8.1266,
    -6.21906,    -4.90399,   -3.90167,   -3.09351,    -2.41803,    -1.83919,
    -1.33408,    -0.887193,  -0.487561,  -0.127144,   0.200132,    0.498964,
    0.77306,     1.0254,     1.25839,    1.47405,     1.67404,     1.85976,
    2.03241,     2.193,      2.34241,    2.4814,      2.61064,     2.7307,
    2.8421,      2.94527,    3.04061,    3.12847,     3.20915,     3.28294,
    3.35006,     3.41074,    3.46515,    3.51347,     3.55584,     3.59237,
    3.62318,     3.64835,    3.66796,    3.68206,     3.6907,      3.69391,
    3.6917,      3.68407,    3.67101,    3.6525,      3.6285,      3.59895,
    3.56378,     3.52291,    3.47623,    3.42364,     3.36499,     3.30012,
    3.22885,     3.15097,    3.06626,    2.97445,     2.87523,     2.76828,
    2.6532,      2.52958,    2.3969,     2.25462,     2.1021,      1.93859,
    1.76325,     1.5751,     1.373,      1.15558,     0.921262,    0.668123,
    0.393855,    0.0956278,  -0.230069,  -0.587668,   -0.982868,   -1.42317,
    -1.91873,    -2.48375,   -3.13901,   -3.91664,    -4.87025,    -6.09973,
    -7.82713,    -10.7451,   -24.5403,   -11.1275,    -8.02399,    -6.23734,
    -4.98014,    -4.01143,   -3.225,     -2.56453,    -1.99655,    -1.49952,
    -1.05878,    -0.663904,  -0.307185,  0.0172083,   0.313801,    0.586177,
    0.837218,    1.06928,    1.2843,     1.48391,     1.66948,     1.84217,
    2.00298,     2.15277,    2.29228,    2.42218,     2.54302,     2.6553,
    2.75947,     2.85592,    2.94499,    3.02698,     3.10216,     3.17078,
    3.23304,     3.28914,    3.33923,    3.38346,     3.42196,     3.45484,
    3.48218,     3.50406,    3.52055,    3.53169,     3.53752,     3.53805,
    3.5333,      3.52327,    3.50792,    3.48725,     3.46119,     3.42971,
    3.39271,     3.35012,    3.30184,    3.24774,     3.1877,      3.12154,
    3.0491,      2.97017,    2.88452,    2.79189,     2.69199,     2.58448,
    2.46901,     2.34514,    2.21241,    2.07025,     1.91807,     1.75514,
    1.58065,     1.39366,    1.19306,    0.977557,    0.745636,    0.495472,
    0.224872,    -0.0688378, -0.388962,  -0.739652,   -1.12621,    -1.55558,
    -2.03708,    -2.58359,   -3.21374,   -3.95583,    -4.85597,    -5.99712,
    -7.55317,    -10.0039,   -16.1636,   -12.8901,    -8.96961,    -6.95002,
    -5.58324,    -4.55138,   -3.72428,   -3.03573,    -2.44744,    -1.93525,
    -1.48294,    -1.07908,   -0.715334,  -0.385423,   -0.0845057,  0.191231,
    0.444841,    0.678806,   0.89517,    1.09563,     1.28163,     1.45437,
    1.61489,     1.76409,    1.90273,    2.03148,     2.15094,     2.2616,
    2.36393,     2.45831,    2.5451,     2.62461,     2.6971,      2.76282,
    2.82198,     2.87475,    2.92131,    2.96179,     2.99631,     3.02497,
    3.04784,     3.06501,    3.07651,    3.08238,     3.08264,     3.0773,
    3.06634,     3.04974,    3.02746,    2.99944,     2.96561,     2.92588,
    2.88013,     2.82826,    2.7701,     2.70548,     2.63422,     2.55608,
    2.47082,     2.37815,    2.27773,    2.16921,     2.05217,     1.92612,
    1.79052,     1.64475,    1.4881,     1.31974,     1.13873,     0.943935,
    0.734064,    0.507565,   0.262588,   -0.00309782, -0.292218,   -0.608149,
    -0.955137,   -1.33863,   -1.76575,   -2.24612,    -2.79309,    -3.42604,
    -4.1746,     -5.08747,   -6.25337,   -7.86214,    -10.4598,    -17.9307,
    -12.3761,    -8.79911,   -6.86599,   -5.53539,    -4.52128,    -3.70309,
    -3.01854,    -2.43121,   -1.91794,   -1.46311,    -1.05567,    -0.687526,
    -0.352557,   -0.0460357, 0.235767,   0.495847,    0.736643,    0.960168,
    1.1681,      1.36186,    1.54264,    1.71149,     1.86927,     2.01677,
    2.15466,     2.28352,    2.40388,    2.51619,     2.62085,     2.71823,
    2.80865,     2.89238,    2.96969,    3.04081,     3.10593,     3.16523,
    3.21888,     3.26702,    3.30977,    3.34724,     3.37953,     3.40672,
    3.42889,     3.44608,    3.45836,    3.46574,     3.46827,     3.46595,
    3.45879,     3.44678,    3.42991,    3.40815,     3.38147,     3.34982,
    3.31314,     3.27137,    3.22441,    3.17217,     3.11454,     3.05141,
    2.98262,     2.90802,    2.82743,    2.74065,     2.64746,     2.5476,
    2.44079,     2.32672,    2.20503,    2.07533,     1.93716,     1.79003,
    1.63334,     1.46645,    1.2886,     1.09893,     0.896438,    0.679951,
    0.448101,    0.199264,   -0.0685016, -0.357542,   -0.670728,   -1.01163,
    -1.38473,    -1.79584,   -2.25258,   -2.76528,    -3.34846,    -4.02335,
    -4.82292,    -5.80244,   -7.06568,   -8.84616,    -11.8932,    -31.6747,
    -11.8361,    -8.8681,    -7.13645,   -5.91455,    -4.97344,    -4.21088,
    -3.57228,    -3.02503,   -2.54807,   -2.12705,    -1.75172,    -1.41453,
    -1.10974,    -0.832904,  -0.58051,   -0.349727,   -0.138251,   0.0558171,
    0.234059,    0.397805,   0.548178,   0.686137,    0.812499,    0.927969,
    1.03315,     1.12857,    1.21468,    1.29186,     1.36044,     1.42072,
    1.47294,     1.51729,    1.55394,    1.58303,     1.60465,     1.61887,
    1.62574,     1.62526,    1.61743,    1.6022,      1.57949,     1.5492,
    1.51119,     1.4653,     1.41132,    1.349,       1.27805,     1.19812,
    1.10882,     1.00969,    0.900197,   0.77971,     0.647509,    0.502752,
    0.344451,    0.171446,   -0.0176383, -0.224442,   -0.450941,   -0.699533,
    -0.973176,   -1.27556,   -1.61136,   -1.98665,    -2.40946,    -2.89077,
    -3.4461,     -4.09842,   -4.88388,   -5.86422,    -7.15867,    -9.04905,
    -12.5512,    -18.457,    -10.7076,   -8.05653,    -6.40902,    -5.2086,
    -4.26297,    -3.48252,   -2.81816,   -2.24001,    -1.7286,     -1.27045,
    -0.8559,     -0.477768,  -0.130564,  0.189993,    0.487313,    0.764152,
    1.02277,     1.26505,    1.49256,    1.70663,     1.90842,     2.0989,
    2.27893,     2.44924,    2.6105,     2.76328,     2.90808,     3.04537,
    3.17554,     3.29897,    3.41597,    3.52685,     3.63187,     3.73128,
    3.82528,     3.91408,    3.99787,    4.0768,      4.15104,     4.22071,
    4.28595,     4.34687,    4.40358,    4.45617,     4.50474,     4.54935,
    4.5901,      4.62703,    4.66022,    4.68972,     4.71557,     4.73782,
    4.75652,     4.77168,    4.78334,    4.79153,     4.79627,     4.79757,
    4.79544,     4.7899,     4.78094,    4.76856,     4.75277,     4.73356,
    4.71091,     4.6848,     4.65522,    4.62214,     4.58554,     4.54538,
    4.50162,     4.45423,    4.40315,    4.34833,     4.28971,     4.22724,
    4.16083,     4.09042,    4.01591,    3.93722,     3.85425,     3.76689,
    3.67501,     3.57849,    3.4772,     3.37096,     3.25962,     3.143,
    3.02088,     2.89306,    2.75929,    2.6193,      2.4728,      2.31947,
    2.15895,     1.99083,    1.81467,    1.62998,     1.43619,     1.23266,
    1.01868,     0.793414,   0.555924,   0.305112,    0.0397053,   -0.241795,
    -0.541166,   -0.860534,  -1.20248,   -1.57018,    -1.96757,    -2.3997,
    -2.87309,    -3.3964,    -3.98158,   -4.6456,     -5.41393,    -6.32725,
    -7.45672,    -8.94496,   -11.153,    -15.6509,    -16.8126,    -11.7119,
    -9.48839,    -8.06826,   -7.03503,   -6.23105,    -5.57946,    -5.03701,
    -4.57691,    -4.18147,   -3.83839,   -3.53879,    -3.27606,    -3.04517,
    -2.84221,    -2.66409,   -2.50835,   -2.373,      -2.25643,    -2.15734,
    -2.07466,    -2.00754,   -1.9553,    -1.9174,     -1.89345,    -1.88318,
    -1.88643,    -1.90313,   -1.93336,   -1.97727,    -2.03515,    -2.10739,
    -2.19452,    -2.29723,   -2.41639,   -2.55305,    -2.70852,    -2.88441,
    -3.08272,    -3.30591,   -3.55705,   -3.84006,    -4.15996,    -4.52335,
    -4.93908,    -5.4194,    -5.98196,   -6.6534,     -7.47676,    -8.52837,
    -9.9645,     -12.1964,   -17.2457,   -16.2958,    -11.7661,    -9.56862,
    -8.09774,    -6.98809,   -6.09581,   -5.34928,    -4.70761,    -4.14524,
    -3.6451,     -3.19524,   -2.78696,   -2.41374,    -2.07054,    -1.75341,
    -1.45918,    -1.18528,   -0.929592,  -0.690347,   -0.46606,    -0.255467,
    -0.0574889,  0.128807,   0.304229,   0.469482,    0.625183,    0.771877,
    0.910042,    1.04011,    1.16245,    1.2774,      1.38526,     1.4863,
    1.58077,     1.66886,    1.75078,    1.82669,     1.89673,     1.96105,
    2.01976,     2.07296,    2.12073,    2.16315,     2.20028,     2.23216,
    2.25883,     2.28033,    2.29665,    2.3078,      2.31377,     2.31454,
    2.31007,     2.30033,    2.28524,    2.26475,     2.23877,     2.20719,
    2.1699,      2.12677,    2.07765,    2.02236,     1.96072,     1.8925,
    1.81745,     1.7353,     1.64574,    1.54841,     1.44292,     1.32881,
    1.20558,     1.07264,    0.929328,   0.774884,    0.608425,    0.428931,
    0.235207,    0.0258498,  -0.20081,   -0.446772,   -0.714459,   -1.00685,
    -1.32764,    -1.68154,   -2.07461,   -2.51489,    -3.01334,    -3.58545,
    -4.25411,    -5.05532,   -6.05047,   -7.35795,    -9.25679,    -12.7461,
    -18.9398,    -11.0259,   -8.3753,    -6.73851,    -5.55175,    -4.62106,
    -3.85625,    -3.20796,   -2.64623,   -2.15148,    -1.71024,    -1.31283,
    -0.952062,   -0.622448,  -0.319716,  -0.0404702,  0.218032,    0.458036,
    0.681401,    0.889686,   1.0842,     1.26608,     1.43627,     1.5956,
    1.74479,     1.88448,    2.01521,    2.13745,     2.25164,     2.35815,
    2.45731,     2.5494,     2.63469,    2.71341,     2.78575,     2.85189,
    2.91198,     2.96616,    3.01453,    3.05718,     3.09421,     3.12566,
    3.15159,     3.17202,    3.18698,    3.19645,     3.20044,     3.19891,
    3.19182,     3.17911,    3.16071,    3.13652,     3.10644,     3.07034,
    3.02806,     2.97943,    2.92426,    2.86233,     2.79336,     2.71708,
    2.63315,     2.5412,     2.44081,    2.33148,     2.21266,     2.08372,
    1.94394,     1.79248,    1.62835,    1.45042,     1.25735,     1.04754,
    0.819103,    0.569727,   0.296595,   -0.00379215, -0.335854,   -0.705273,
    -1.11953,    -1.58876,   -2.12713,   -2.75537,    -3.5055,     -4.43097,
    -5.6313,     -7.3274,    -10.2065,   -23.4859,    -10.5798,    -7.4349,
    -5.61514,    -4.32657,   -3.32697,   -2.50969,    -1.81824,    -1.21904,
    -0.690507,   -0.21793,   0.20916,    0.598483,    0.955894,    1.28594,
    1.59223,     1.87766,    2.1446,     2.39502,     2.63057,     2.85262,
    3.06238,     3.26085,    3.44892,    3.62736,     3.79685,     3.95798,
    4.11127,     4.2572,     4.39618,    4.52859,     4.65476,     4.775,
    4.88958,     4.99876,    5.10277,    5.2018,      5.29604,     5.38568,
    5.47087,     5.55175,    5.62846,    5.70112,     5.76984,     5.83472,
    5.89587,     5.95337,    6.0073,     6.05773,     6.10474,     6.14838,
    6.18871,     6.22579,    6.25966,    6.29037,     6.31795,     6.34243,
    6.36386,     6.38226,    6.39764,    6.41004,     6.41947,     6.42594,
    6.42946,     6.43004,    6.42768,    6.4224,      6.41417,     6.403,
    6.38888,     6.3718,     6.35175,    6.3287,      6.30263,     6.27352,
    6.24135,     6.20607,    6.16765,    6.12605,     6.08122,     6.03312,
    5.98169,     5.92687,    5.86859,    5.80679,     5.74138,     5.67228,
    5.59939,     5.52262,    5.44185,    5.35697,     5.26783,     5.17431,
    5.07624,     4.97346,    4.86577,    4.75297,     4.63484,     4.51113,
    4.38156,     4.24584,    4.10362,    3.95454,     3.79817,     3.63405,
    3.46166,     3.28039,    3.08957,    2.88843,     2.67609,     2.45151,
    2.2135,      1.96067,    1.69135,    1.40356,     1.0949,      0.762437,
    0.402508,    0.0104948,  -0.419562,  -0.895537,   -1.42814,    -2.03245,
    -2.73069,    -3.55759,   -4.57202,   -5.88621,    -7.7597,     -11.0795,
    -19.7394,    -10.0762,   -7.33128,   -5.68008,    -4.50069,    -3.58612,
    -2.84161,    -2.2158,    -1.67768,   -1.2071,     -0.790233,   -0.417153,
    -0.0805153,  0.225277,   0.504585,   0.760874,    0.99694,     1.21508,
    1.41718,     1.60486,    1.77944,    1.9421,      2.09381,     2.23544,
    2.36774,     2.49138,    2.60692,    2.71489,     2.81575,     2.9099,
    2.99772,     3.07954,    3.15565,    3.22634,     3.29185,     3.3524,
    3.40821,     3.45947,    3.50634,    3.54899,     3.58757,     3.62221,
    3.65305,     3.6802,     3.70377,    3.72387,     3.74059,     3.75402,
    3.76425,     3.77135,    3.7754,     3.77647,     3.77463,     3.76993,
    3.76244,     3.75221,    3.7393,     3.72376,     3.70564,     3.68498,
    3.66183,     3.63623,    3.60823,    3.57785,     3.54515,     3.51016,
    3.47292,     3.43346,    3.39182,    3.34803,     3.30213,     3.25416,
    3.20413,     3.1521,     3.09809,    3.04214,     2.98427,     2.92453,
    2.86295,     2.79956,    2.7344,     2.6675,      2.59891,     2.52865,
    2.45677,     2.3833,     2.30829,    2.23178,     2.15381,     2.07442,
    1.99365,     1.91156,    1.82819,    1.74358,     1.65779,     1.57088,
    1.48288,     1.39385,    1.30385,    1.21294,     1.12117,     1.02859,
    0.935271,    0.841265,   0.746634,   0.651436,    0.555731,    0.459579,
    0.363039,    0.266168,   0.169023,   0.07166,     -0.0258684,  -0.123511,
    -0.221221,   -0.318953,  -0.416667,  -0.514327,   -0.611902,   -0.709369,
    -0.806708,   -0.903908,  -1.00097,   -1.09789,    -1.19469,    -1.29139,
    -1.38804,    -1.48466,   -1.58134,   -1.67813,    -1.77514,    -1.87245,
    -1.9702,     -2.06851,   -2.16754,   -2.26748,    -2.36851,    -2.47085,
    -2.57475,    -2.68048,   -2.78833,   -2.89864,    -3.01177,    -3.12813,
    -3.24816,    -3.37236,   -3.50128,   -3.63552,    -3.77579,    -3.92285,
    -4.07757,    -4.24093,   -4.41409,   -4.59833,    -4.79518,    -5.00643,
    -5.23419,    -5.48101,   -5.75,      -6.04498,    -6.37082,    -6.73373,
    -7.14196,    -7.60672,   -8.14382,   -8.77667,    -9.54212,    -10.5033,
    -11.7825,    -13.6715,   -17.2467,   -22.2611,    -15.0239,    -12.3895,
    -10.7236,    -9.49366,   -8.51313,   -7.69442,    -6.98936,    -6.36865,
    -5.81307,    -5.30939,   -4.84809,   -4.42211,    -4.02604,    -3.65569,
    -3.3077,     -2.97939,   -2.66854,   -2.37331,    -2.09218,    -1.82385,
    -1.56721,    -1.32131,   -1.08532,   -0.858528,   -0.640308,   -0.430104,
    -0.227429,   -0.0318466, 0.15703,    0.339548,    0.51602,     0.686726,
    0.851921,    1.01183,    1.16668,    1.31664,     1.46189,     1.60259,
    1.73889,     1.87092,    1.9988,     2.12265,     2.24256,     2.35864,
    2.47097,     2.57963,    2.68469,    2.78622,     2.88429,     2.97896,
    3.07027,     3.15827,    3.243,      3.32452,     3.40285,     3.47802,
    3.55006,     3.61901,    3.68487,    3.74767,     3.80743,     3.86416,
    3.91786,     3.96855,    4.01623,    4.0609,      4.10256,     4.1412,
    4.17682,     4.2094,     4.23894,    4.26541,     4.2888,      4.30909,
    4.32623,     4.34022,    4.35101,    4.35856,     4.36283,     4.36378,
    4.36136,     4.35551,    4.34616,    4.33326,     4.31672,     4.29648,
    4.27243,     4.2445,     4.21258,    4.17655,     4.13629,     4.09168,
    4.04257,     3.98879,    3.93019,    3.86656,     3.79771,     3.7234,
    3.64338,     3.55739,    3.46511,    3.3662,      3.26028,     3.14694,
    3.02569,     2.89601,    2.75729,    2.60884,     2.44989,     2.27952,
    2.0967,      1.90022,    1.68863,    1.46027,     1.21309,     0.944644,
    0.651926,    0.331188,   -0.0223206, -0.414738,   -0.8542,     -1.3518,
    -1.92326,    -2.59183,   -3.39417,   -4.39307,    -5.71021,    -7.6354,
    -11.2331,    -16.4476,   -9.15885,   -6.56062,    -4.9381,     -3.75432,
    -2.82154,    -2.05179,   -1.3967,    -0.8268,     -0.32282,    0.128552,
    0.536892,    0.909316,   1.25126,    1.56696,     1.8598,      2.13251,
    2.38732,     2.62608,    2.85037,    3.06148,     3.26056,     3.44857,
    3.62634,     3.79461,    3.95401,    4.10511,     4.24842,     4.38435,
    4.51333,     4.63568,    4.75174,    4.86177,     4.96605,     5.06478,
    5.1582,      5.24647,    5.32977,    5.40825,     5.48205,     5.5513,
    5.61611,     5.67657,    5.73279,    5.78484,     5.83279,     5.8767,
    5.91664,     5.95266,    5.98478,    6.01305,     6.03749,     6.05813,
    6.07498,     6.08804,    6.09732,    6.10282,     6.10453,     6.10242,
    6.09648,     6.08667,    6.07296,    6.05531,     6.03367,     6.00798,
    5.97816,     5.94415,    5.90587,    5.86322,     5.81609,     5.76436,
    5.70792,     5.64662,    5.58029,    5.50877,     5.43187,     5.34936,
    5.26102,     5.16658,    5.06576,    4.95822,     4.84361,     4.72151,
    4.59148,     4.453,      4.30549,    4.14829,     3.98064,     3.80167,
    3.61038,     3.4056,     3.18596,    2.94983,     2.69526,     2.41992,
    2.12094,     1.79474,    1.43683,    1.04142,     0.600882,    0.104878,
    -0.461095,   -1.11829,   -1.89968,   -2.86058,    -4.10482,    -5.86622,
    -8.89548,    -28.1597,   -8.7847,    -5.79702,    -4.04334,    -2.79836,
    -1.83335,    -1.04617,   -0.382228,  0.191079,    0.694803,    1.14332,
    1.54689,     1.91309,    2.24767,    2.5551,      2.83893,     3.102,
    3.34665,     3.57481,    3.7881,     3.98788,     4.17531,     4.35139,
    4.51699,     4.67285,    4.81962,    4.9579,      5.08817,     5.2109,
    5.32648,     5.43527,    5.53759,    5.63373,     5.72393,     5.80844,
    5.88745,     5.96116,    6.02973,    6.09331,     6.15203,     6.20602,
    6.25539,     6.30023,    6.34062,    6.37664,     6.40836,     6.43583,
    6.4591,      6.4782,     6.49317,    6.50402,     6.51078,     6.51345,
    6.51203,     6.50651,    6.49687,    6.4831,      6.46516,     6.44301,
    6.4166,      6.38588,    6.35078,    6.31123,     6.26713,     6.21839,
    6.16491,     6.10655,    6.04319,    5.97467,     5.90081,     5.82144,
    5.73634,     5.64528,    5.54799,    5.4442,      5.33358,     5.21576,
    5.09034,     4.95686,    4.81482,    4.66361,     4.50259,     4.33098,
    4.14792,     3.95237,    3.74318,    3.51893,     3.278,       3.0184,
    2.73775,     2.43314,    2.10092,    1.73653,     1.33402,     0.885582,
    0.380597,    -0.195892,  -0.865894,  -1.66376,    -2.64754,    -3.92762,
    -5.7577,     -8.99277,   -18.6755,   -8.14544,    -5.33318,    -3.64266,
    -2.43169,    -1.48885,   -0.717858,  -0.0666902,  0.495992,    0.990523,
    1.43085,     1.82697,    2.18626,    2.51435,     2.81563,     3.09357,
    3.35097,     3.59014,    3.81297,    4.02106,     4.21575,     4.39819,
    4.56937,     4.73015,    4.88126,    5.02335,     5.15701,     5.28272,
    5.40094,     5.51208,    5.61647,    5.71444,     5.80628,     5.89224,
    5.97255,     6.04742,    6.11704,    6.18157,     6.24117,     6.29596,
    6.34609,     6.39165,    6.43275,    6.46947,     6.50188,     6.53007,
    6.55409,     6.57398,    6.5898,     6.60157,     6.60932,     6.61308,
    6.61286,     6.60866,    6.60049,    6.58833,     6.57218,     6.552,
    6.52778,     6.49946,    6.46702,    6.4304,      6.38954,     6.34436,
    6.29479,     6.24074,    6.18211,    6.11879,     6.05065,     5.97756,
    5.89935,     5.81587,    5.72692,    5.63229,     5.53175,     5.42504,
    5.31187,     5.19193,    5.06485,    4.93024,     4.78764,     4.63654,
    4.47637,     4.30647,    4.12609,    3.93438,     3.73033,     3.5128,
    3.28041,     3.03157,    2.76435,    2.47644,     2.165,       1.82651,
    1.45656,     1.04943,    0.597638,   0.0910497,   -0.484517,   -1.14978,
    -1.93676,    -2.89884,   -4.13542,   -5.867,      -8.77884,    -21.9251,
    -9.24361,    -6.13073,   -4.34623,   -3.09372,    -2.13052,    -1.34985,
    -0.695147,   -0.132827,  0.358704,   0.794149,    1.18397,     1.53588,
    1.85572,     2.14803,    2.4164,     2.6637,      2.89231,     3.10416,
    3.30089,     3.48386,    3.65425,    3.81306,     3.96114,     4.09926,
    4.22806,     4.34811,    4.45992,    4.56394,     4.66055,     4.75012,
    4.83294,     4.90929,    4.97942,    5.04355,     5.10188,     5.15457,
    5.20177,     5.24364,    5.28027,    5.31178,     5.33825,     5.35976,
    5.37637,     5.38813,    5.39508,    5.39725,     5.39464,     5.38728,
    5.37515,     5.35823,    5.33649,    5.30991,     5.27841,     5.24195,
    5.20045,     5.15381,    5.10193,    5.04469,     4.98195,     4.91356,
    4.83935,     4.7591,     4.67261,    4.57962,     4.47985,     4.37299,
    4.25867,     4.1365,     4.00603,    3.86673,     3.71802,     3.55924,
    3.38961,     3.20826,    3.01414,    2.80607,     2.58261,     2.34211,
    2.08253,     1.80143,    1.49581,    1.16194,     0.795051,    0.389012,
    -0.0643241,  -0.576077,  -1.16199,   -1.84541,    -2.66313,    -3.67823,
    -5.01316,    -6.96021,   -10.5994,   -15.6259,    -8.47739,    -5.90713,
    -4.3045,     -3.13829,   -2.22213,   -1.46853,    -0.829323,   -0.275157,
    0.21319,     0.648997,   1.04182,    1.39876,     1.72525,     2.02554,
    2.30298,     2.56033,    2.79981,    3.02328,     3.23231,     3.42823,
    3.61215,     3.78505,    3.94778,    4.10108,     4.24558,     4.38186,
    4.51043,     4.63172,    4.74615,    4.85407,     4.95579,     5.05163,
    5.14183,     5.22663,    5.30625,    5.38089,     5.45073,     5.51592,
    5.57662,     5.63296,    5.68506,    5.73305,     5.77701,     5.81706,
    5.85326,     5.88571,    5.91447,    5.9396,      5.96117,     5.97923,
    5.99382,     6.00498,    6.01276,    6.01718,     6.01827,     6.01605,
    6.01055,     6.00176,    5.98972,    5.97441,     5.95584,     5.93402,
    5.90892,     5.88055,    5.84889,    5.81391,     5.7756,      5.73392,
    5.68885,     5.64035,    5.58838,    5.53288,     5.47381,     5.41111,
    5.34472,     5.27455,    5.20054,    5.12259,     5.04062,     4.95453,
    4.86419,     4.76949,    4.6703,     4.56646,     4.45782,     4.3442,
    4.22542,     4.10125,    3.97147,    3.83582,     3.69402,     3.54576,
    3.39069,     3.22842,    3.05852,    2.88051,     2.69383,     2.49789,
    2.29196,     2.07525,    1.84685,    1.60567,     1.35049,     1.07983,
    0.791958,    0.484806,   0.155851,   -0.197998,   -0.5806,     -0.996852,
    -1.4531,     -1.95777,   -2.52242,   -3.16346,    -3.90535,    -4.78696,
    -5.87563,    -7.30438,   -9.40073,   -13.4802,    -16.2544,    -10.4176,
    -8.05487,    -6.56323,   -5.47921,   -4.633,      -3.94315,    -3.36425,
    -2.86838,    -2.43714,   -2.05779,   -1.7211,     -1.42023,    -1.14992,
    -0.906084,   -0.685453,  -0.485399,  -0.303768,   -0.138778,   0.0110565,
    0.14699,     0.270083,   0.381242,   0.481242,    0.570749,    0.650337,
    0.720501,    0.781669,   0.834206,   0.878428,    0.914603,    0.942956,
    0.963676,    0.976913,   0.982788,   0.98139,     0.972777,    0.956979,
    0.933998,    0.903808,   0.866352,   0.821546,    0.769275,    0.70939,
    0.641707,    0.566005,   0.482021,   0.389446,    0.287918,    0.177017,
    0.0562562,   -0.0749311, -0.217201,  -0.371318,   -0.538174,   -0.718815,
    -0.914473,   -1.12661,   -1.35699,   -1.60771,    -1.88137,    -2.18116,
    -2.51109,    -2.87629,   -3.28346,   -3.74155,    -4.26295,    -4.86544,
    -5.57588,    -6.43763,   -7.52771,   -9.00408,    -11.2842,    -16.4525,
    -15.3063,    -10.8698,   -8.71434,   -7.27656,    -6.1963,     -5.33118,
    -4.61017,    -3.99266,   -3.45323,   -2.97493,    -2.54587,    -2.15739,
    -1.80298,    -1.47765,   -1.17745,   -0.899239,   -0.640442,   -0.39895,
    -0.173,      0.0388935,  0.237993,   0.425382,    0.601996,    0.768649,
    0.926053,    1.07483,    1.21555,    1.34868,     1.47468,     1.59394,
    1.70681,     1.8136,     1.91461,    2.0101,      2.1003,      2.18543,
    2.26569,     2.34126,    2.4123,     2.47896,     2.54139,     2.59972,
    2.65405,     2.7045,     2.75116,    2.79413,     2.8335,      2.86933,
    2.9017,      2.93068,    2.95632,    2.97868,     2.9978,      3.01374,
    3.02653,     3.0362,     3.0428,     3.04634,     3.04685,     3.04435,
    3.03886,     3.0304,     3.01896,    3.00456,     2.9872,      2.96689,
    2.9436,      2.91735,    2.88811,    2.85587,     2.82062,     2.78234,
    2.74098,     2.69654,    2.64896,    2.59822,     2.54426,     2.48705,
    2.42652,     2.36263,    2.29529,    2.22444,     2.15,        2.07189,
    1.99001,     1.90425,    1.81451,    1.72065,     1.62256,     1.52007,
    1.41303,     1.30125,    1.18455,    1.06271,     0.935485,    0.802627,
    0.663841,    0.518808,   0.367171,   0.208532,    0.0424441,   -0.131594,
    -0.314149,   -0.505864,  -0.707473,  -0.919815,   -1.14386,    -1.38074,
    -1.63177,    -1.89851,   -2.18282,   -2.48692,    -2.81356,    -3.1661,
    -3.54878,    -3.96702,   -4.42794,   -4.94108,    -5.51972,    -6.18309,
    -6.96057,    -7.90033,   -9.08994,   -10.716,     -13.3105,    -20.4994,
    -15.4643,    -11.8504,   -9.92522,   -8.61119,    -7.61638,    -6.81843,
    -6.15431,    -5.58725,   -5.09391,   -4.65853,    -4.27,       -3.92018,
    -3.6029,     -3.31343,   -3.048,     -2.80361,    -2.57781,    -2.36858,
    -2.17423,    -1.99333,   -1.82467,   -1.66722,    -1.52008,    -1.38247,
    -1.25372,    -1.13323,   -1.02048,   -0.914994,   -0.816369,   -0.724235,
    -0.638264,   -0.558163,  -0.48367,   -0.414548,   -0.350585,   -0.291592,
    -0.237399,   -0.187851,  -0.142813,  -0.102163,   -0.0657917,  -0.0336038,
    -0.00551522, 0.018547,   0.0386453,  0.0548324,   0.0671511,   0.0756353,
    0.0803098,   0.0811908,  0.0782854,  0.0715926,   0.0611023,   0.0467958,
    0.0286453,   0.00661386, -0.019345,  -0.0492876,  -0.0832811,  -0.121403,
    -0.163744,   -0.210406,  -0.261505,  -0.317171,   -0.377553,   -0.442814,
    -0.513138,   -0.588732,  -0.669826,  -0.756675,   -0.849569,   -0.948829,
    -1.05482,    -1.16794,   -1.28865,   -1.41748,    -1.555,      -1.7019,
    -1.85895,    -2.02703,   -2.20717,   -2.40058,    -2.60867,    -2.83313,
    -3.07597,    -3.33962,   -3.6271,    -3.94213,    -4.28945,    -4.67519,
    -5.10747,    -5.59736,   -6.16055,   -6.82027,    -7.6131,     -8.60169,
    -9.90744,    -11.8191,   -15.3952,   -20.6798,    -13.3277,    -10.7115,
    -9.07374,    -7.8751,    -6.92732,   -6.1422,     -5.47129,    -4.88508,
    -4.36425,    -3.89548,   -3.46917,   -3.07821,    -2.71713,    -2.38169,
    -2.06851,    -1.77485,   -1.49846,   -1.23749,    -0.990356,   -0.755747,
    -0.532526,   -0.319718,  -0.116474,  0.0779413,   0.264178,    0.442807,
    0.614335,    0.779214,   0.937847,   1.0906,      1.23779,     1.37971,
    1.51664,     1.64881,    1.77645,    1.89975,     2.0189,      2.13407,
    2.2454,      2.35306,    2.45715,    2.55781,     2.65515,     2.74926,
    2.84025,     2.9282,     3.01318,    3.09529,     3.17458,     3.25112,
    3.32497,     3.39619,    3.46482,    3.53092,     3.59452,     3.65567,
    3.7144,      3.77076,    3.82476,    3.87644,     3.92582,     3.97292,
    4.01778,     4.0604,     4.1008,     4.139,       4.17501,     4.20884,
    4.2405,      4.26999,    4.29732,    4.3225,      4.34551,     4.36638,
    4.38508,     4.40162,    4.41599,    4.42818,     4.43818,     4.44599,
    4.45159,     4.45496,    4.45609,    4.45495,     4.45153,     4.44581,
    4.43775,     4.42734,    4.41453,    4.3993,      4.38162,     4.36144,
    4.33872,     4.31342,    4.2855,     4.25489,     4.22156,     4.18543,
    4.14644,     4.10454,    4.05964,    4.01167,     3.96054,     3.90617,
    3.84845,     3.78729,    3.72258,    3.65418,     3.58198,     3.50582,
    3.42557,     3.34104,    3.25206,    3.15843,     3.05994,     2.95635,
    2.8474,      2.73281,    2.61226,    2.4854,      2.35185,     2.21118,
    2.06289,     1.90646,    1.74125,    1.56658,     1.38166,     1.18556,
    0.977222,    0.755426,   0.51872,    0.265388,    -0.00662266, -0.2998,
    -0.617197,   -0.96262,   -1.34089,   -1.75827,    -2.22303,    -2.74652,
    -3.3448,     -4.04177,   -4.87524,   -5.91036,    -7.27466,    -9.27721,
    -13.1063,    -16.9352,   -10.4906,   -8.00686,    -6.44046,    -5.29536,
    -4.39367,    -3.65094,   -3.02041,   -2.47345,    -1.99122,    -1.56073,
    -1.17257,    -0.819747,  -0.496925,  -0.199922,   0.0745929,   0.329312,
    0.566444,    0.787826,   0.994997,   1.18926,     1.37173,     1.54337,
    1.70501,     1.85738,    2.0011,     2.13674,     2.26479,     2.3857,
    2.49985,     2.6076,     2.70926,    2.80511,     2.89542,     2.98041,
    3.06028,     3.13524,    3.20545,    3.27107,     3.33224,     3.38909,
    3.44173,     3.49029,    3.53484,    3.57549,     3.6123,      3.64536,
    3.67473,     3.70046,    3.72261,    3.74122,     3.75634,     3.76799,
    3.77622,     3.78103,    3.78246,    3.78052,     3.77521,     3.76656,
    3.75454,     3.73918,    3.72045,    3.69835,     3.67286,     3.64396,
    3.61163,     3.57584,    3.53656,    3.49374,     3.44734,     3.39731,
    3.3436,      3.28615,    3.22489,    3.15974,     3.09062,     3.01745,
    2.94013,     2.85855,    2.77259,    2.68213,     2.58703,     2.48713,
    2.38229,     2.2723,     2.15698,    2.0361,      1.90943,     1.77671,
    1.63764,     1.49191,    1.33915,    1.17897,     1.01093,     0.834533,
    0.649214,    0.454344,   0.249203,   0.0329701,   -0.195301,   -0.436702,
    -0.69251,    -0.964225,  -1.25363,   -1.56285,    -1.89448,    -2.25171,
    -2.63852,    -3.05996,   -3.52263,   -4.03528,    -4.60998,    -5.26395,
    -6.02304,    -6.92871,   -8.05377,   -9.54511,    -11.7792,    -16.4549,
    -16.9447,    -12.0722,   -9.87691,   -8.45805,    -7.41691,    -6.60053,
    -5.93383,    -5.37434,   -4.89567,   -4.48034,    -4.11617,    -3.79431,
    -3.50818,    -3.25273,   -3.02402,   -2.8189,     -2.63486,    -2.46984,
    -2.32212,    -2.19032,   -2.07324,   -1.96991,    -1.8795,     -1.80131,
    -1.73474,    -1.67933,   -1.63465,   -1.60039,    -1.57628,    -1.56212,
    -1.55776,    -1.56313,   -1.57817,   -1.60291,    -1.63742,    -1.68181,
    -1.73625,    -1.80099,   -1.87631,   -1.96258,    -2.06025,    -2.16984,
    -2.292,      -2.42747,   -2.57715,   -2.74209,    -2.92356,    -3.12306,
    -3.34243,    -3.58387,   -3.85012,   -4.14456,    -4.47148,    -4.8364,
    -5.24658,    -5.71182,   -6.24581,   -6.86849,    -7.61049,    -8.52251,
    -9.6978,     -11.339,    -14.0487,   -23.0418,    -15.2752,    -11.904,
    -10.0239,    -8.71434,   -7.70966,   -6.89574,    -6.21293,    -5.62611,
    -5.11284,    -4.65793,   -4.25061,   -3.88296,    -3.54901,    -3.24413};

#endif /* MULTIPATH_V3_M10_H_ */
