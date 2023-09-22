#ifndef CALIBRATION_TABLE_H
#define CALIBRATION_TABLE_H

#define TABLE_SIZE 50

#define SAMPLE_COUNT 16
#define SAMPLE(x) int((x)*(SAMPLE_COUNT))

const int calibrationTable[][2] = {
  { SAMPLE(1), 938 },
  { SAMPLE(31), 314 },
  { SAMPLE(41), 290 },
  { SAMPLE(51), 272 },
  { SAMPLE(61), 258 },
  { SAMPLE(71), 247 },
  { SAMPLE(81), 237 },
  { SAMPLE(91), 229 },
  { SAMPLE(101), 221 },
  { SAMPLE(111), 215 },
  { SAMPLE(121), 209 },
  { SAMPLE(131), 204 },
  { SAMPLE(141), 199 },
  { SAMPLE(151), 195 },
  { SAMPLE(161), 190 },
  { SAMPLE(171), 187 },
  { SAMPLE(181), 183 },
  { SAMPLE(191), 179 },
  { SAMPLE(201), 176 },
  { SAMPLE(221), 170 },
  { SAMPLE(241), 165 },
  { SAMPLE(261), 160 },
  { SAMPLE(281), 155 },
  { SAMPLE(301), 150 },
  { SAMPLE(331), 144 },
  { SAMPLE(361), 139 },
  { SAMPLE(391), 133 },
  { SAMPLE(421), 128 },
  { SAMPLE(451), 123 },
  { SAMPLE(491), 117 },
  { SAMPLE(531), 111 },
  { SAMPLE(571), 105 },
  { SAMPLE(611), 100 },
  { SAMPLE(641),  95 },
  { SAMPLE(681),  90 },
  { SAMPLE(711),  85 },
  { SAMPLE(751),  79 },
  { SAMPLE(791),  72 },
  { SAMPLE(811),  69 },
  { SAMPLE(831),  65 },
  { SAMPLE(871),  57 },
  { SAMPLE(881),  55 },
  { SAMPLE(901),  51 },
  { SAMPLE(921),  45 },
  { SAMPLE(941),  39 },
  { SAMPLE(971),  28 },
  { SAMPLE(981),  23 },
  { SAMPLE(991),  17 },
  { SAMPLE(1001),   9 },
  { SAMPLE(1021), -27 }
};

#endif //CALIBRATION_TABLE_H