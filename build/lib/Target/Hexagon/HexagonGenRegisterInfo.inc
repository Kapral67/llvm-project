/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register Enum Values                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass HexagonMCRegisterClasses[];

namespace Hexagon {
enum {
  NoRegister,
  CS = 1,
  FRAMEKEY = 2,
  FRAMELIMIT = 3,
  GELR = 4,
  GOSP = 5,
  GP = 6,
  GPCYCLEHI = 7,
  GPCYCLELO = 8,
  GSR = 9,
  PC = 10,
  PKTCOUNT = 11,
  PKTCOUNTHI = 12,
  PKTCOUNTLO = 13,
  UGP = 14,
  UPCYCLE = 15,
  UPCYCLEHI = 16,
  UPCYCLELO = 17,
  USR = 18,
  USR_OVF = 19,
  UTIMER = 20,
  UTIMERHI = 21,
  UTIMERLO = 22,
  VTMP = 23,
  C5 = 24,
  C8 = 25,
  CS0 = 26,
  CS1 = 27,
  D0 = 28,
  D1 = 29,
  D2 = 30,
  D3 = 31,
  D4 = 32,
  D5 = 33,
  D6 = 34,
  D7 = 35,
  D8 = 36,
  D9 = 37,
  D10 = 38,
  D11 = 39,
  D12 = 40,
  D13 = 41,
  D14 = 42,
  D15 = 43,
  G3 = 44,
  G4 = 45,
  G5 = 46,
  G6 = 47,
  G7 = 48,
  G8 = 49,
  G9 = 50,
  G10 = 51,
  G11 = 52,
  G12 = 53,
  G13 = 54,
  G14 = 55,
  G15 = 56,
  G20 = 57,
  G21 = 58,
  G22 = 59,
  G23 = 60,
  G30 = 61,
  G31 = 62,
  GPMUCNT0 = 63,
  GPMUCNT1 = 64,
  GPMUCNT2 = 65,
  GPMUCNT3 = 66,
  GPMUCNT4 = 67,
  GPMUCNT5 = 68,
  GPMUCNT6 = 69,
  GPMUCNT7 = 70,
  LC0 = 71,
  LC1 = 72,
  M0 = 73,
  M1 = 74,
  P0 = 75,
  P1 = 76,
  P2 = 77,
  P3 = 78,
  Q0 = 79,
  Q1 = 80,
  Q2 = 81,
  Q3 = 82,
  R0 = 83,
  R1 = 84,
  R2 = 85,
  R3 = 86,
  R4 = 87,
  R5 = 88,
  R6 = 89,
  R7 = 90,
  R8 = 91,
  R9 = 92,
  R10 = 93,
  R11 = 94,
  R12 = 95,
  R13 = 96,
  R14 = 97,
  R15 = 98,
  R16 = 99,
  R17 = 100,
  R18 = 101,
  R19 = 102,
  R20 = 103,
  R21 = 104,
  R22 = 105,
  R23 = 106,
  R24 = 107,
  R25 = 108,
  R26 = 109,
  R27 = 110,
  R28 = 111,
  R29 = 112,
  R30 = 113,
  R31 = 114,
  SA0 = 115,
  SA1 = 116,
  V0 = 117,
  V1 = 118,
  V2 = 119,
  V3 = 120,
  V4 = 121,
  V5 = 122,
  V6 = 123,
  V7 = 124,
  V8 = 125,
  V9 = 126,
  V10 = 127,
  V11 = 128,
  V12 = 129,
  V13 = 130,
  V14 = 131,
  V15 = 132,
  V16 = 133,
  V17 = 134,
  V18 = 135,
  V19 = 136,
  V20 = 137,
  V21 = 138,
  V22 = 139,
  V23 = 140,
  V24 = 141,
  V25 = 142,
  V26 = 143,
  V27 = 144,
  V28 = 145,
  V29 = 146,
  V30 = 147,
  V31 = 148,
  VF0 = 149,
  VF1 = 150,
  VF2 = 151,
  VF3 = 152,
  VF4 = 153,
  VF5 = 154,
  VF6 = 155,
  VF7 = 156,
  VF8 = 157,
  VF9 = 158,
  VF10 = 159,
  VF11 = 160,
  VF12 = 161,
  VF13 = 162,
  VF14 = 163,
  VF15 = 164,
  VF16 = 165,
  VF17 = 166,
  VF18 = 167,
  VF19 = 168,
  VF20 = 169,
  VF21 = 170,
  VF22 = 171,
  VF23 = 172,
  VF24 = 173,
  VF25 = 174,
  VF26 = 175,
  VF27 = 176,
  VF28 = 177,
  VF29 = 178,
  VF30 = 179,
  VF31 = 180,
  VFR0 = 181,
  VFR1 = 182,
  VFR2 = 183,
  VFR3 = 184,
  VFR4 = 185,
  VFR5 = 186,
  VFR6 = 187,
  VFR7 = 188,
  VFR8 = 189,
  VFR9 = 190,
  VFR10 = 191,
  VFR11 = 192,
  VFR12 = 193,
  VFR13 = 194,
  VFR14 = 195,
  VFR15 = 196,
  VFR16 = 197,
  VFR17 = 198,
  VFR18 = 199,
  VFR19 = 200,
  VFR20 = 201,
  VFR21 = 202,
  VFR22 = 203,
  VFR23 = 204,
  VFR24 = 205,
  VFR25 = 206,
  VFR26 = 207,
  VFR27 = 208,
  VFR28 = 209,
  VFR29 = 210,
  VFR30 = 211,
  VFR31 = 212,
  VQ0 = 213,
  VQ1 = 214,
  VQ2 = 215,
  VQ3 = 216,
  VQ4 = 217,
  VQ5 = 218,
  VQ6 = 219,
  VQ7 = 220,
  W0 = 221,
  W1 = 222,
  W2 = 223,
  W3 = 224,
  W4 = 225,
  W5 = 226,
  W6 = 227,
  W7 = 228,
  W8 = 229,
  W9 = 230,
  W10 = 231,
  W11 = 232,
  W12 = 233,
  W13 = 234,
  W14 = 235,
  W15 = 236,
  WR0 = 237,
  WR1 = 238,
  WR2 = 239,
  WR3 = 240,
  WR4 = 241,
  WR5 = 242,
  WR6 = 243,
  WR7 = 244,
  WR8 = 245,
  WR9 = 246,
  WR10 = 247,
  WR11 = 248,
  WR12 = 249,
  WR13 = 250,
  WR14 = 251,
  WR15 = 252,
  C1_0 = 253,
  C3_2 = 254,
  C5_4 = 255,
  C7_6 = 256,
  C9_8 = 257,
  C11_10 = 258,
  C17_16 = 259,
  G1_0 = 260,
  G3_2 = 261,
  G5_4 = 262,
  G7_6 = 263,
  G9_8 = 264,
  G11_10 = 265,
  G13_12 = 266,
  G15_14 = 267,
  G17_16 = 268,
  G19_18 = 269,
  G21_20 = 270,
  G23_22 = 271,
  G25_24 = 272,
  G27_26 = 273,
  G29_28 = 274,
  G31_30 = 275,
  P3_0 = 276,
  NUM_TARGET_REGS // 277
};
} // end namespace Hexagon

// Register classes

namespace Hexagon {
enum {
  UsrBitsRegClassID = 0,
  GuestRegsRegClassID = 1,
  IntRegsRegClassID = 2,
  CtrRegsRegClassID = 3,
  GeneralSubRegsRegClassID = 4,
  V62RegsRegClassID = 5,
  IntRegsLow8RegClassID = 6,
  CtrRegs_and_V62RegsRegClassID = 7,
  PredRegsRegClassID = 8,
  V62Regs_with_isub_hiRegClassID = 9,
  ModRegsRegClassID = 10,
  CtrRegs_with_subreg_overflowRegClassID = 11,
  V65RegsRegClassID = 12,
  DoubleRegsRegClassID = 13,
  GuestRegs64RegClassID = 14,
  VectRegRevRegClassID = 15,
  CtrRegs64RegClassID = 16,
  GeneralDoubleLow8RegsRegClassID = 17,
  DoubleRegs_with_isub_hi_in_IntRegsLow8RegClassID = 18,
  CtrRegs64_and_V62RegsRegClassID = 19,
  CtrRegs64_with_isub_hi_in_ModRegsRegClassID = 20,
  HvxQRRegClassID = 21,
  HvxVRRegClassID = 22,
  HvxVR_and_V65RegsRegClassID = 23,
  HvxWRRegClassID = 24,
  HvxWR_and_VectRegRevRegClassID = 25,
  HvxVQRRegClassID = 26,

};
} // end namespace Hexagon


// Subregister indices

namespace Hexagon {
enum : uint16_t {
  NoSubRegister,
  isub_hi,	// 1
  isub_lo,	// 2
  subreg_overflow,	// 3
  vsub_fake,	// 4
  vsub_hi,	// 5
  vsub_lo,	// 6
  wsub_hi,	// 7
  wsub_lo,	// 8
  wsub_hi_then_vsub_fake,	// 9
  wsub_hi_then_vsub_hi,	// 10
  wsub_hi_then_vsub_lo,	// 11
  NUM_TARGET_SUBREGS
};
} // end namespace Hexagon

// Register pressure sets enum.
namespace Hexagon {
enum RegisterPressureSets {
  HvxVR_and_V65Regs = 0,
  ModRegs = 1,
  PredRegs = 2,
  HvxQR = 3,
  IntRegsLow8 = 4,
  GeneralSubRegs = 5,
  IntRegs = 6,
  HvxVR = 7,
};
} // end namespace Hexagon

} // end namespace llvm

#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* MC Register Information                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC

namespace llvm {

extern const MCPhysReg HexagonRegDiffLists[] = {
  /* 0 */ 0, 0,
  /* 2 */ 0, 1, 0,
  /* 5 */ 21, 64, 1, 1, 1, 0,
  /* 11 */ 85, 1, 1, 1, 0,
  /* 16 */ 7, 1, 0,
  /* 19 */ 11, 1, 0,
  /* 22 */ 14, 1, 0,
  /* 25 */ 64779, 1, 1, 1, 15, 1, 0,
  /* 32 */ 16, 1, 0,
  /* 35 */ 64779, 1, 1, 1, 17, 1, 0,
  /* 42 */ 18, 1, 0,
  /* 45 */ 64779, 1, 1, 1, 19, 1, 0,
  /* 52 */ 64779, 1, 1, 1, 21, 1, 0,
  /* 59 */ 64779, 1, 1, 1, 23, 1, 0,
  /* 66 */ 64779, 1, 1, 1, 25, 1, 0,
  /* 73 */ 64779, 1, 1, 1, 27, 1, 0,
  /* 80 */ 64779, 1, 1, 1, 29, 1, 0,
  /* 87 */ 55, 1, 0,
  /* 90 */ 56, 1, 0,
  /* 93 */ 57, 1, 0,
  /* 96 */ 58, 1, 0,
  /* 99 */ 59, 1, 0,
  /* 102 */ 60, 1, 0,
  /* 105 */ 61, 1, 0,
  /* 108 */ 62, 1, 0,
  /* 111 */ 63, 1, 0,
  /* 114 */ 64, 1, 0,
  /* 117 */ 65, 1, 0,
  /* 120 */ 66, 1, 0,
  /* 123 */ 67, 1, 0,
  /* 126 */ 68, 1, 0,
  /* 129 */ 69, 1, 0,
  /* 132 */ 70, 1, 0,
  /* 135 */ 71, 1, 0,
  /* 138 */ 83, 1, 0,
  /* 141 */ 65020, 1, 0,
  /* 144 */ 65063, 1, 0,
  /* 147 */ 65067, 1, 0,
  /* 150 */ 65077, 1, 0,
  /* 153 */ 65319, 1, 0,
  /* 156 */ 65320, 1, 0,
  /* 159 */ 65321, 1, 0,
  /* 162 */ 65322, 1, 0,
  /* 165 */ 65323, 1, 0,
  /* 168 */ 65324, 1, 0,
  /* 171 */ 65326, 1, 0,
  /* 174 */ 65327, 1, 0,
  /* 177 */ 65335, 1, 0,
  /* 180 */ 65336, 1, 0,
  /* 183 */ 65353, 1, 0,
  /* 186 */ 65502, 1, 0,
  /* 189 */ 65280, 5, 0,
  /* 192 */ 6, 7, 0,
  /* 195 */ 10, 7, 0,
  /* 198 */ 10, 0,
  /* 200 */ 65364, 12, 0,
  /* 203 */ 14, 0,
  /* 205 */ 15, 0,
  /* 207 */ 65189, 1, 16, 0,
  /* 211 */ 15, 65446, 1, 17, 73, 65447, 1, 16, 0,
  /* 220 */ 65189, 1, 17, 0,
  /* 224 */ 65446, 1, 17, 0,
  /* 228 */ 65189, 1, 18, 0,
  /* 232 */ 14, 65444, 1, 19, 73, 65445, 1, 18, 0,
  /* 241 */ 65189, 1, 19, 0,
  /* 245 */ 65444, 1, 19, 0,
  /* 249 */ 65189, 1, 20, 0,
  /* 253 */ 13, 65442, 1, 21, 73, 65443, 1, 20, 0,
  /* 262 */ 65189, 1, 21, 0,
  /* 266 */ 65442, 1, 21, 0,
  /* 270 */ 65189, 1, 22, 0,
  /* 274 */ 12, 65440, 1, 23, 73, 65441, 1, 22, 0,
  /* 283 */ 65189, 1, 23, 0,
  /* 287 */ 65440, 1, 23, 0,
  /* 291 */ 65189, 1, 24, 0,
  /* 295 */ 11, 65438, 1, 25, 73, 65439, 1, 24, 0,
  /* 304 */ 103, 65528, 24, 0,
  /* 308 */ 104, 65528, 24, 0,
  /* 312 */ 65189, 1, 25, 0,
  /* 316 */ 65438, 1, 25, 0,
  /* 320 */ 101, 65527, 25, 0,
  /* 324 */ 102, 65527, 25, 0,
  /* 328 */ 103, 65527, 25, 0,
  /* 332 */ 65189, 1, 26, 0,
  /* 336 */ 10, 65436, 1, 27, 73, 65437, 1, 26, 0,
  /* 345 */ 99, 65526, 26, 0,
  /* 349 */ 100, 65526, 26, 0,
  /* 353 */ 101, 65526, 26, 0,
  /* 357 */ 65189, 1, 27, 0,
  /* 361 */ 65436, 1, 27, 0,
  /* 365 */ 97, 65525, 27, 0,
  /* 369 */ 98, 65525, 27, 0,
  /* 373 */ 99, 65525, 27, 0,
  /* 377 */ 65189, 1, 28, 0,
  /* 381 */ 9, 65434, 1, 29, 73, 65435, 1, 28, 0,
  /* 390 */ 95, 65524, 28, 0,
  /* 394 */ 96, 65524, 28, 0,
  /* 398 */ 97, 65524, 28, 0,
  /* 402 */ 65189, 1, 29, 0,
  /* 406 */ 65434, 1, 29, 0,
  /* 410 */ 93, 65523, 29, 0,
  /* 414 */ 94, 65523, 29, 0,
  /* 418 */ 95, 65523, 29, 0,
  /* 422 */ 65189, 1, 30, 0,
  /* 426 */ 8, 65432, 1, 31, 73, 65433, 1, 30, 0,
  /* 435 */ 91, 65522, 30, 0,
  /* 439 */ 92, 65522, 30, 0,
  /* 443 */ 93, 65522, 30, 0,
  /* 447 */ 65189, 1, 31, 0,
  /* 451 */ 65432, 1, 31, 0,
  /* 455 */ 89, 65521, 31, 0,
  /* 459 */ 90, 65521, 31, 0,
  /* 463 */ 91, 65521, 31, 0,
  /* 467 */ 88, 65520, 32, 0,
  /* 471 */ 89, 65520, 32, 0,
  /* 475 */ 65280, 39, 0,
  /* 478 */ 65157, 1, 48, 0,
  /* 482 */ 65431, 1, 48, 0,
  /* 486 */ 65157, 1, 49, 0,
  /* 490 */ 65430, 1, 49, 0,
  /* 494 */ 65280, 49, 0,
  /* 497 */ 65157, 1, 50, 0,
  /* 501 */ 65429, 1, 50, 0,
  /* 505 */ 65157, 1, 51, 0,
  /* 509 */ 65428, 1, 51, 0,
  /* 513 */ 65157, 1, 52, 0,
  /* 517 */ 65427, 1, 52, 0,
  /* 521 */ 65157, 1, 53, 0,
  /* 525 */ 65426, 1, 53, 0,
  /* 529 */ 65157, 1, 54, 0,
  /* 533 */ 65425, 1, 54, 0,
  /* 537 */ 65157, 1, 55, 0,
  /* 541 */ 65424, 1, 55, 0,
  /* 545 */ 65157, 1, 56, 0,
  /* 549 */ 65423, 1, 56, 0,
  /* 553 */ 65157, 1, 57, 0,
  /* 557 */ 65422, 1, 57, 0,
  /* 561 */ 65157, 1, 58, 0,
  /* 565 */ 65421, 1, 58, 0,
  /* 569 */ 65157, 1, 59, 0,
  /* 573 */ 65420, 1, 59, 0,
  /* 577 */ 65157, 1, 60, 0,
  /* 581 */ 65419, 1, 60, 0,
  /* 585 */ 65157, 1, 61, 0,
  /* 589 */ 65418, 1, 61, 0,
  /* 593 */ 65157, 1, 62, 0,
  /* 597 */ 65417, 1, 62, 0,
  /* 601 */ 65157, 1, 63, 0,
  /* 605 */ 65416, 1, 63, 0,
  /* 609 */ 138, 0,
  /* 611 */ 182, 0,
  /* 613 */ 183, 0,
  /* 615 */ 199, 0,
  /* 617 */ 200, 0,
  /* 619 */ 201, 0,
  /* 621 */ 208, 0,
  /* 623 */ 209, 0,
  /* 625 */ 210, 0,
  /* 627 */ 211, 0,
  /* 629 */ 212, 0,
  /* 631 */ 213, 0,
  /* 633 */ 214, 0,
  /* 635 */ 215, 0,
  /* 637 */ 216, 0,
  /* 639 */ 217, 0,
  /* 641 */ 231, 0,
  /* 643 */ 232, 0,
  /* 645 */ 244, 0,
  /* 647 */ 247, 0,
  /* 649 */ 251, 0,
  /* 651 */ 252, 0,
  /* 653 */ 256, 0,
  /* 655 */ 257, 0,
  /* 657 */ 264, 0,
  /* 659 */ 265, 0,
  /* 661 */ 21, 65284, 0,
  /* 664 */ 65465, 0,
  /* 666 */ 65466, 0,
  /* 668 */ 65467, 0,
  /* 670 */ 65468, 0,
  /* 672 */ 65469, 0,
  /* 674 */ 65470, 0,
  /* 676 */ 65471, 0,
  /* 678 */ 65472, 0,
  /* 680 */ 65473, 0,
  /* 682 */ 65474, 0,
  /* 684 */ 65475, 0,
  /* 686 */ 65476, 0,
  /* 688 */ 65477, 0,
  /* 690 */ 65478, 0,
  /* 692 */ 65479, 0,
  /* 694 */ 65480, 0,
  /* 696 */ 65481, 0,
  /* 698 */ 65398, 65492, 0,
  /* 701 */ 65510, 0,
  /* 703 */ 65511, 0,
  /* 705 */ 65514, 0,
  /* 707 */ 65515, 0,
  /* 709 */ 72, 65520, 0,
  /* 712 */ 72, 65521, 0,
  /* 715 */ 65304, 65521, 0,
  /* 718 */ 72, 65522, 0,
  /* 721 */ 72, 65523, 0,
  /* 724 */ 72, 65524, 0,
  /* 727 */ 72, 65525, 0,
  /* 730 */ 72, 65526, 0,
  /* 733 */ 72, 65527, 0,
  /* 736 */ 72, 65528, 0,
  /* 739 */ 65292, 65528, 0,
  /* 742 */ 65533, 0,
  /* 744 */ 65534, 0,
  /* 746 */ 2, 65535, 0,
  /* 749 */ 65272, 65535, 0,
  /* 752 */ 65280, 65535, 0,
};

extern const LaneBitmask HexagonLaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x0000000000000000), LaneBitmask(0x0000000000000000), LaneBitmask(0x0000000000000000), LaneBitmask(0x0000000000000000), LaneBitmask::getAll(),
  /* 5 */ LaneBitmask(0x0000000000000004), LaneBitmask(0x0000000000000000), LaneBitmask::getAll(),
  /* 8 */ LaneBitmask(0x0000000000000002), LaneBitmask(0x0000000000000001), LaneBitmask::getAll(),
  /* 11 */ LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000002), LaneBitmask::getAll(),
  /* 14 */ LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000002), LaneBitmask(0x0000000000000002), LaneBitmask(0x0000000000000002), LaneBitmask(0x0000000000000002), LaneBitmask::getAll(),
  /* 20 */ LaneBitmask(0x0000000000000020), LaneBitmask(0x0000000000000010), LaneBitmask(0x0000000000000008), LaneBitmask::getAll(),
  /* 24 */ LaneBitmask(0x0000000000000020), LaneBitmask(0x0000000000000010), LaneBitmask(0x0000000000000100), LaneBitmask(0x0000000000000080), LaneBitmask(0x0000000000000008), LaneBitmask(0x0000000000000040), LaneBitmask::getAll(),
};

extern const uint16_t HexagonSubRegIdxLists[] = {
  /* 0 */ 2, 1, 0,
  /* 3 */ 3, 0,
  /* 5 */ 6, 5, 4, 0,
  /* 9 */ 8, 6, 5, 4, 7, 11, 10, 9, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits HexagonSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 32, 32 },	// isub_hi
  { 0, 32 },	// isub_lo
  { 0, 1 },	// subreg_overflow
  { 0, 512 },	// vsub_fake
  { 512, 512 },	// vsub_hi
  { 0, 512 },	// vsub_lo
  { 1024, 1024 },	// wsub_hi
  { 0, 1024 },	// wsub_lo
  { 1024, 512 },	// wsub_hi_then_vsub_fake
  { 1536, 512 },	// wsub_hi_then_vsub_hi
  { 1024, 512 },	// wsub_hi_then_vsub_lo
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char HexagonRegStrings[] = {
  /* 0 */ "D10\0"
  /* 4 */ "VF10\0"
  /* 9 */ "G10\0"
  /* 13 */ "VFR10\0"
  /* 19 */ "WR10\0"
  /* 24 */ "V10\0"
  /* 28 */ "W10\0"
  /* 32 */ "C11_10\0"
  /* 39 */ "G11_10\0"
  /* 46 */ "VF20\0"
  /* 51 */ "G20\0"
  /* 55 */ "VFR20\0"
  /* 61 */ "V20\0"
  /* 65 */ "G21_20\0"
  /* 72 */ "VF30\0"
  /* 77 */ "G30\0"
  /* 81 */ "VFR30\0"
  /* 87 */ "V30\0"
  /* 91 */ "G31_30\0"
  /* 98 */ "SA0\0"
  /* 102 */ "LC0\0"
  /* 106 */ "D0\0"
  /* 109 */ "VF0\0"
  /* 113 */ "M0\0"
  /* 116 */ "P0\0"
  /* 119 */ "VQ0\0"
  /* 123 */ "VFR0\0"
  /* 128 */ "WR0\0"
  /* 132 */ "CS0\0"
  /* 136 */ "GPMUCNT0\0"
  /* 145 */ "V0\0"
  /* 148 */ "W0\0"
  /* 151 */ "C1_0\0"
  /* 156 */ "G1_0\0"
  /* 161 */ "P3_0\0"
  /* 166 */ "D11\0"
  /* 170 */ "VF11\0"
  /* 175 */ "G11\0"
  /* 179 */ "VFR11\0"
  /* 185 */ "WR11\0"
  /* 190 */ "V11\0"
  /* 194 */ "W11\0"
  /* 198 */ "VF21\0"
  /* 203 */ "G21\0"
  /* 207 */ "VFR21\0"
  /* 213 */ "V21\0"
  /* 217 */ "VF31\0"
  /* 222 */ "G31\0"
  /* 226 */ "VFR31\0"
  /* 232 */ "V31\0"
  /* 236 */ "SA1\0"
  /* 240 */ "LC1\0"
  /* 244 */ "D1\0"
  /* 247 */ "VF1\0"
  /* 251 */ "M1\0"
  /* 254 */ "P1\0"
  /* 257 */ "VQ1\0"
  /* 261 */ "VFR1\0"
  /* 266 */ "WR1\0"
  /* 270 */ "CS1\0"
  /* 274 */ "GPMUCNT1\0"
  /* 283 */ "V1\0"
  /* 286 */ "W1\0"
  /* 289 */ "D12\0"
  /* 293 */ "VF12\0"
  /* 298 */ "G12\0"
  /* 302 */ "VFR12\0"
  /* 308 */ "WR12\0"
  /* 313 */ "V12\0"
  /* 317 */ "W12\0"
  /* 321 */ "G13_12\0"
  /* 328 */ "VF22\0"
  /* 333 */ "G22\0"
  /* 337 */ "VFR22\0"
  /* 343 */ "V22\0"
  /* 347 */ "G23_22\0"
  /* 354 */ "D2\0"
  /* 357 */ "VF2\0"
  /* 361 */ "P2\0"
  /* 364 */ "VQ2\0"
  /* 368 */ "VFR2\0"
  /* 373 */ "WR2\0"
  /* 377 */ "GPMUCNT2\0"
  /* 386 */ "V2\0"
  /* 389 */ "W2\0"
  /* 392 */ "C3_2\0"
  /* 397 */ "G3_2\0"
  /* 402 */ "D13\0"
  /* 406 */ "VF13\0"
  /* 411 */ "G13\0"
  /* 415 */ "VFR13\0"
  /* 421 */ "WR13\0"
  /* 426 */ "V13\0"
  /* 430 */ "W13\0"
  /* 434 */ "VF23\0"
  /* 439 */ "G23\0"
  /* 443 */ "VFR23\0"
  /* 449 */ "V23\0"
  /* 453 */ "D3\0"
  /* 456 */ "VF3\0"
  /* 460 */ "G3\0"
  /* 463 */ "P3\0"
  /* 466 */ "VQ3\0"
  /* 470 */ "VFR3\0"
  /* 475 */ "WR3\0"
  /* 479 */ "GPMUCNT3\0"
  /* 488 */ "V3\0"
  /* 491 */ "W3\0"
  /* 494 */ "D14\0"
  /* 498 */ "VF14\0"
  /* 503 */ "G14\0"
  /* 507 */ "VFR14\0"
  /* 513 */ "WR14\0"
  /* 518 */ "V14\0"
  /* 522 */ "W14\0"
  /* 526 */ "G15_14\0"
  /* 533 */ "VF24\0"
  /* 538 */ "VFR24\0"
  /* 544 */ "V24\0"
  /* 548 */ "G25_24\0"
  /* 555 */ "D4\0"
  /* 558 */ "VF4\0"
  /* 562 */ "G4\0"
  /* 565 */ "VQ4\0"
  /* 569 */ "VFR4\0"
  /* 574 */ "WR4\0"
  /* 578 */ "GPMUCNT4\0"
  /* 587 */ "V4\0"
  /* 590 */ "W4\0"
  /* 593 */ "C5_4\0"
  /* 598 */ "G5_4\0"
  /* 603 */ "D15\0"
  /* 607 */ "VF15\0"
  /* 612 */ "G15\0"
  /* 616 */ "VFR15\0"
  /* 622 */ "WR15\0"
  /* 627 */ "V15\0"
  /* 631 */ "W15\0"
  /* 635 */ "VF25\0"
  /* 640 */ "VFR25\0"
  /* 646 */ "V25\0"
  /* 650 */ "C5\0"
  /* 653 */ "D5\0"
  /* 656 */ "VF5\0"
  /* 660 */ "G5\0"
  /* 663 */ "VQ5\0"
  /* 667 */ "VFR5\0"
  /* 672 */ "WR5\0"
  /* 676 */ "GPMUCNT5\0"
  /* 685 */ "V5\0"
  /* 688 */ "W5\0"
  /* 691 */ "VF16\0"
  /* 696 */ "VFR16\0"
  /* 702 */ "V16\0"
  /* 706 */ "C17_16\0"
  /* 713 */ "G17_16\0"
  /* 720 */ "VF26\0"
  /* 725 */ "VFR26\0"
  /* 731 */ "V26\0"
  /* 735 */ "G27_26\0"
  /* 742 */ "D6\0"
  /* 745 */ "VF6\0"
  /* 749 */ "G6\0"
  /* 752 */ "VQ6\0"
  /* 756 */ "VFR6\0"
  /* 761 */ "WR6\0"
  /* 765 */ "GPMUCNT6\0"
  /* 774 */ "V6\0"
  /* 777 */ "W6\0"
  /* 780 */ "C7_6\0"
  /* 785 */ "G7_6\0"
  /* 790 */ "VF17\0"
  /* 795 */ "VFR17\0"
  /* 801 */ "V17\0"
  /* 805 */ "VF27\0"
  /* 810 */ "VFR27\0"
  /* 816 */ "V27\0"
  /* 820 */ "D7\0"
  /* 823 */ "VF7\0"
  /* 827 */ "G7\0"
  /* 830 */ "VQ7\0"
  /* 834 */ "VFR7\0"
  /* 839 */ "WR7\0"
  /* 843 */ "GPMUCNT7\0"
  /* 852 */ "V7\0"
  /* 855 */ "W7\0"
  /* 858 */ "VF18\0"
  /* 863 */ "VFR18\0"
  /* 869 */ "V18\0"
  /* 873 */ "G19_18\0"
  /* 880 */ "VF28\0"
  /* 885 */ "VFR28\0"
  /* 891 */ "V28\0"
  /* 895 */ "G29_28\0"
  /* 902 */ "C8\0"
  /* 905 */ "D8\0"
  /* 908 */ "VF8\0"
  /* 912 */ "G8\0"
  /* 915 */ "VFR8\0"
  /* 920 */ "WR8\0"
  /* 924 */ "V8\0"
  /* 927 */ "W8\0"
  /* 930 */ "C9_8\0"
  /* 935 */ "G9_8\0"
  /* 940 */ "VF19\0"
  /* 945 */ "VFR19\0"
  /* 951 */ "V19\0"
  /* 955 */ "VF29\0"
  /* 960 */ "VFR29\0"
  /* 966 */ "V29\0"
  /* 970 */ "D9\0"
  /* 973 */ "VF9\0"
  /* 977 */ "G9\0"
  /* 980 */ "VFR9\0"
  /* 985 */ "WR9\0"
  /* 989 */ "V9\0"
  /* 992 */ "W9\0"
  /* 995 */ "PC\0"
  /* 998 */ "UPCYCLE\0"
  /* 1006 */ "USR_OVF\0"
  /* 1014 */ "GPCYCLEHI\0"
  /* 1024 */ "UPCYCLEHI\0"
  /* 1034 */ "UTIMERHI\0"
  /* 1043 */ "PKTCOUNTHI\0"
  /* 1054 */ "GPCYCLELO\0"
  /* 1064 */ "UPCYCLELO\0"
  /* 1074 */ "UTIMERLO\0"
  /* 1083 */ "PKTCOUNTLO\0"
  /* 1094 */ "UGP\0"
  /* 1098 */ "VTMP\0"
  /* 1103 */ "GOSP\0"
  /* 1108 */ "UTIMER\0"
  /* 1115 */ "GELR\0"
  /* 1120 */ "GSR\0"
  /* 1124 */ "USR\0"
  /* 1128 */ "CS\0"
  /* 1131 */ "FRAMELIMIT\0"
  /* 1142 */ "PKTCOUNT\0"
  /* 1151 */ "FRAMEKEY\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterDesc HexagonRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 1128, 70, 1, 0, 32, 8 },
  { 1151, 1, 655, 2, 1, 3 },
  { 1131, 1, 653, 2, 1, 3 },
  { 1115, 1, 653, 2, 1, 3 },
  { 1103, 1, 653, 2, 1, 3 },
  { 1095, 1, 651, 2, 1, 3 },
  { 1014, 1, 659, 2, 1, 3 },
  { 1054, 1, 657, 2, 1, 3 },
  { 1120, 1, 649, 2, 1, 3 },
  { 995, 1, 647, 2, 1, 3 },
  { 1142, 746, 1, 0, 304, 8 },
  { 1043, 1, 747, 2, 3216, 3 },
  { 1083, 1, 744, 2, 11410, 3 },
  { 1094, 1, 645, 2, 11410, 3 },
  { 998, 746, 1, 0, 352, 8 },
  { 1024, 1, 747, 2, 3280, 3 },
  { 1064, 1, 744, 2, 3248, 3 },
  { 1124, 3, 1, 3, 512, 5 },
  { 1006, 1, 747, 2, 3344, 3 },
  { 1108, 746, 1, 0, 672, 8 },
  { 1034, 1, 747, 2, 3888, 3 },
  { 1074, 1, 744, 2, 11218, 3 },
  { 1098, 1, 1, 2, 11873, 3 },
  { 650, 1, 641, 2, 11873, 3 },
  { 902, 1, 643, 2, 3552, 3 },
  { 132, 1, 703, 2, 11217, 3 },
  { 270, 1, 701, 2, 11217, 3 },
  { 106, 87, 1, 0, 2978, 8 },
  { 244, 90, 1, 0, 2978, 8 },
  { 354, 93, 1, 0, 2978, 8 },
  { 453, 96, 1, 0, 2978, 8 },
  { 555, 99, 1, 0, 2978, 8 },
  { 653, 102, 1, 0, 2978, 8 },
  { 742, 105, 1, 0, 2978, 8 },
  { 820, 108, 1, 0, 2978, 8 },
  { 905, 111, 1, 0, 2978, 8 },
  { 970, 114, 1, 0, 2978, 8 },
  { 0, 117, 1, 0, 2978, 8 },
  { 166, 120, 1, 0, 2978, 8 },
  { 289, 123, 1, 0, 2978, 8 },
  { 402, 126, 1, 0, 2978, 8 },
  { 494, 129, 1, 0, 2978, 8 },
  { 603, 132, 1, 0, 2978, 8 },
  { 460, 1, 639, 2, 3169, 3 },
  { 562, 1, 639, 2, 3169, 3 },
  { 660, 1, 637, 2, 3169, 3 },
  { 749, 1, 637, 2, 3169, 3 },
  { 827, 1, 635, 2, 3169, 3 },
  { 912, 1, 635, 2, 3169, 3 },
  { 977, 1, 633, 2, 3169, 3 },
  { 9, 1, 633, 2, 3169, 3 },
  { 175, 1, 631, 2, 3169, 3 },
  { 298, 1, 631, 2, 3169, 3 },
  { 411, 1, 629, 2, 3169, 3 },
  { 503, 1, 629, 2, 3169, 3 },
  { 612, 1, 627, 2, 3169, 3 },
  { 51, 1, 631, 2, 3169, 3 },
  { 203, 1, 629, 2, 3169, 3 },
  { 333, 1, 629, 2, 3169, 3 },
  { 439, 1, 627, 2, 3169, 3 },
  { 77, 1, 633, 2, 3169, 3 },
  { 222, 1, 631, 2, 3169, 3 },
  { 136, 1, 625, 2, 3169, 3 },
  { 274, 1, 623, 2, 3169, 3 },
  { 377, 1, 623, 2, 3169, 3 },
  { 479, 1, 621, 2, 3169, 3 },
  { 578, 1, 619, 2, 3169, 3 },
  { 676, 1, 617, 2, 3169, 3 },
  { 765, 1, 617, 2, 3169, 3 },
  { 843, 1, 615, 2, 3169, 3 },
  { 102, 1, 611, 2, 3169, 3 },
  { 240, 1, 611, 2, 3169, 3 },
  { 113, 1, 613, 2, 3169, 3 },
  { 251, 1, 611, 2, 3169, 3 },
  { 116, 1, 1, 2, 3169, 3 },
  { 254, 1, 1, 2, 3169, 3 },
  { 361, 1, 1, 2, 3169, 3 },
  { 463, 1, 1, 2, 3169, 3 },
  { 120, 1, 1, 2, 3169, 3 },
  { 258, 1, 1, 2, 3169, 3 },
  { 365, 1, 1, 2, 3169, 3 },
  { 467, 1, 1, 2, 3169, 3 },
  { 125, 1, 696, 2, 10945, 3 },
  { 263, 1, 694, 2, 10945, 3 },
  { 370, 1, 694, 2, 10945, 3 },
  { 472, 1, 692, 2, 10945, 3 },
  { 571, 1, 692, 2, 10945, 3 },
  { 669, 1, 690, 2, 10945, 3 },
  { 758, 1, 690, 2, 10945, 3 },
  { 836, 1, 688, 2, 10945, 3 },
  { 917, 1, 688, 2, 10945, 3 },
  { 982, 1, 686, 2, 10945, 3 },
  { 15, 1, 686, 2, 10945, 3 },
  { 181, 1, 684, 2, 10945, 3 },
  { 304, 1, 684, 2, 10945, 3 },
  { 417, 1, 682, 2, 10945, 3 },
  { 509, 1, 682, 2, 10945, 3 },
  { 618, 1, 680, 2, 10945, 3 },
  { 698, 1, 680, 2, 10945, 3 },
  { 797, 1, 678, 2, 10945, 3 },
  { 865, 1, 678, 2, 10945, 3 },
  { 947, 1, 676, 2, 10945, 3 },
  { 57, 1, 676, 2, 10945, 3 },
  { 209, 1, 674, 2, 10945, 3 },
  { 339, 1, 674, 2, 10945, 3 },
  { 445, 1, 672, 2, 10945, 3 },
  { 540, 1, 672, 2, 10945, 3 },
  { 642, 1, 670, 2, 10945, 3 },
  { 727, 1, 670, 2, 10945, 3 },
  { 812, 1, 668, 2, 10945, 3 },
  { 887, 1, 668, 2, 10945, 3 },
  { 962, 1, 666, 2, 10945, 3 },
  { 83, 1, 666, 2, 10945, 3 },
  { 228, 1, 664, 2, 10945, 3 },
  { 98, 1, 609, 2, 11281, 3 },
  { 236, 1, 609, 2, 11281, 3 },
  { 145, 1, 308, 2, 11281, 3 },
  { 283, 1, 304, 2, 11281, 3 },
  { 386, 1, 328, 2, 11281, 3 },
  { 488, 1, 324, 2, 11281, 3 },
  { 587, 1, 324, 2, 11281, 3 },
  { 685, 1, 320, 2, 11281, 3 },
  { 774, 1, 353, 2, 11281, 3 },
  { 852, 1, 349, 2, 11281, 3 },
  { 924, 1, 349, 2, 11281, 3 },
  { 989, 1, 345, 2, 11281, 3 },
  { 24, 1, 373, 2, 11281, 3 },
  { 190, 1, 369, 2, 11281, 3 },
  { 313, 1, 369, 2, 11281, 3 },
  { 426, 1, 365, 2, 11281, 3 },
  { 518, 1, 398, 2, 11281, 3 },
  { 627, 1, 394, 2, 11281, 3 },
  { 702, 1, 394, 2, 11281, 3 },
  { 801, 1, 390, 2, 11281, 3 },
  { 869, 1, 418, 2, 11281, 3 },
  { 951, 1, 414, 2, 11281, 3 },
  { 61, 1, 414, 2, 11281, 3 },
  { 213, 1, 410, 2, 11281, 3 },
  { 343, 1, 443, 2, 11281, 3 },
  { 449, 1, 439, 2, 11281, 3 },
  { 544, 1, 439, 2, 11281, 3 },
  { 646, 1, 435, 2, 11281, 3 },
  { 731, 1, 463, 2, 11281, 3 },
  { 816, 1, 459, 2, 11281, 3 },
  { 891, 1, 459, 2, 11281, 3 },
  { 966, 1, 455, 2, 11281, 3 },
  { 87, 1, 471, 2, 11281, 3 },
  { 232, 1, 467, 2, 11281, 3 },
  { 109, 1, 736, 2, 11281, 3 },
  { 247, 1, 733, 2, 11281, 3 },
  { 357, 1, 733, 2, 11281, 3 },
  { 456, 1, 730, 2, 11281, 3 },
  { 558, 1, 730, 2, 11281, 3 },
  { 656, 1, 727, 2, 11281, 3 },
  { 745, 1, 727, 2, 11281, 3 },
  { 823, 1, 724, 2, 11281, 3 },
  { 908, 1, 724, 2, 11281, 3 },
  { 973, 1, 721, 2, 11281, 3 },
  { 4, 1, 721, 2, 11281, 3 },
  { 170, 1, 718, 2, 11281, 3 },
  { 293, 1, 718, 2, 11281, 3 },
  { 406, 1, 712, 2, 11281, 3 },
  { 498, 1, 712, 2, 11281, 3 },
  { 607, 1, 709, 2, 11281, 3 },
  { 691, 1, 1, 2, 11281, 3 },
  { 790, 1, 1, 2, 11281, 3 },
  { 858, 1, 1, 2, 11281, 3 },
  { 940, 1, 1, 2, 11281, 3 },
  { 46, 1, 1, 2, 11281, 3 },
  { 198, 1, 1, 2, 11281, 3 },
  { 328, 1, 1, 2, 11281, 3 },
  { 434, 1, 1, 2, 11281, 3 },
  { 533, 1, 1, 2, 11281, 3 },
  { 635, 1, 1, 2, 11281, 3 },
  { 720, 1, 1, 2, 11281, 3 },
  { 805, 1, 1, 2, 11281, 3 },
  { 880, 1, 1, 2, 11281, 3 },
  { 955, 1, 1, 2, 11281, 3 },
  { 72, 1, 1, 2, 11281, 3 },
  { 217, 1, 1, 2, 11281, 3 },
  { 123, 1, 547, 2, 11281, 3 },
  { 261, 1, 547, 2, 11281, 3 },
  { 368, 1, 547, 2, 11281, 3 },
  { 470, 1, 547, 2, 11281, 3 },
  { 569, 1, 547, 2, 11281, 3 },
  { 667, 1, 547, 2, 11281, 3 },
  { 756, 1, 547, 2, 11281, 3 },
  { 834, 1, 547, 2, 11281, 3 },
  { 915, 1, 547, 2, 11281, 3 },
  { 980, 1, 547, 2, 11281, 3 },
  { 13, 1, 547, 2, 11281, 3 },
  { 179, 1, 547, 2, 11281, 3 },
  { 302, 1, 547, 2, 11281, 3 },
  { 415, 1, 547, 2, 11281, 3 },
  { 507, 1, 547, 2, 11281, 3 },
  { 616, 1, 547, 2, 11281, 3 },
  { 696, 1, 1, 2, 11281, 3 },
  { 795, 1, 1, 2, 11281, 3 },
  { 863, 1, 1, 2, 11281, 3 },
  { 945, 1, 1, 2, 11281, 3 },
  { 55, 1, 1, 2, 11281, 3 },
  { 207, 1, 1, 2, 11281, 3 },
  { 337, 1, 1, 2, 11281, 3 },
  { 443, 1, 1, 2, 11281, 3 },
  { 538, 1, 1, 2, 11281, 3 },
  { 640, 1, 1, 2, 11281, 3 },
  { 725, 1, 1, 2, 11281, 3 },
  { 810, 1, 1, 2, 11281, 3 },
  { 885, 1, 1, 2, 11281, 3 },
  { 960, 1, 1, 2, 11281, 3 },
  { 81, 1, 1, 2, 11281, 3 },
  { 226, 1, 1, 2, 11281, 3 },
  { 119, 426, 1, 9, 1284, 24 },
  { 257, 381, 1, 9, 1172, 24 },
  { 364, 336, 1, 9, 1060, 24 },
  { 466, 295, 1, 9, 948, 24 },
  { 565, 274, 1, 9, 836, 24 },
  { 663, 253, 1, 9, 724, 24 },
  { 752, 232, 1, 9, 564, 24 },
  { 830, 211, 1, 9, 404, 24 },
  { 148, 451, 737, 5, 7154, 20 },
  { 286, 431, 734, 5, 6754, 20 },
  { 389, 406, 734, 5, 6434, 20 },
  { 491, 386, 731, 5, 6034, 20 },
  { 590, 361, 731, 5, 5714, 20 },
  { 688, 341, 728, 5, 5314, 20 },
  { 777, 316, 728, 5, 4994, 20 },
  { 855, 300, 725, 5, 4658, 20 },
  { 927, 287, 725, 5, 4530, 20 },
  { 992, 279, 722, 5, 4322, 20 },
  { 28, 266, 722, 5, 4194, 20 },
  { 194, 258, 719, 5, 3986, 20 },
  { 317, 245, 719, 5, 3858, 20 },
  { 430, 237, 713, 5, 3650, 20 },
  { 522, 224, 713, 5, 3522, 20 },
  { 631, 216, 710, 5, 3314, 20 },
  { 128, 605, 1, 5, 9618, 20 },
  { 266, 597, 1, 5, 9490, 20 },
  { 373, 589, 1, 5, 9362, 20 },
  { 475, 581, 1, 5, 9234, 20 },
  { 574, 573, 1, 5, 9106, 20 },
  { 672, 565, 1, 5, 8978, 20 },
  { 761, 557, 1, 5, 8850, 20 },
  { 839, 549, 1, 5, 8722, 20 },
  { 920, 541, 1, 5, 8594, 20 },
  { 985, 533, 1, 5, 8466, 20 },
  { 19, 525, 1, 5, 8338, 20 },
  { 185, 517, 1, 5, 8210, 20 },
  { 308, 509, 1, 5, 8082, 20 },
  { 421, 501, 1, 5, 7954, 20 },
  { 513, 490, 1, 5, 7778, 20 },
  { 622, 482, 1, 5, 7650, 20 },
  { 151, 698, 1, 0, 3201, 11 },
  { 392, 698, 1, 0, 3201, 11 },
  { 593, 661, 1, 0, 80, 14 },
  { 780, 183, 1, 0, 2208, 8 },
  { 930, 715, 1, 0, 3120, 11 },
  { 32, 739, 1, 0, 3072, 11 },
  { 706, 752, 1, 0, 2258, 11 },
  { 156, 189, 1, 0, 3025, 8 },
  { 397, 475, 1, 0, 7905, 8 },
  { 598, 153, 1, 0, 2354, 8 },
  { 785, 156, 1, 0, 2354, 8 },
  { 935, 159, 1, 0, 2354, 8 },
  { 39, 162, 1, 0, 2354, 8 },
  { 321, 165, 1, 0, 2354, 8 },
  { 526, 168, 1, 0, 2354, 8 },
  { 713, 177, 1, 0, 2402, 8 },
  { 873, 180, 1, 0, 2402, 8 },
  { 65, 165, 1, 0, 2306, 8 },
  { 347, 168, 1, 0, 2306, 8 },
  { 548, 749, 1, 0, 256, 11 },
  { 735, 171, 1, 0, 2306, 8 },
  { 895, 174, 1, 0, 2306, 8 },
  { 91, 162, 1, 0, 2160, 8 },
  { 161, 1, 707, 2, 176, 0 },
};

extern const MCPhysReg HexagonRegUnitRoots[][2] = {
  { Hexagon::CS0 },
  { Hexagon::CS1 },
  { Hexagon::FRAMEKEY },
  { Hexagon::FRAMELIMIT },
  { Hexagon::GELR },
  { Hexagon::GOSP },
  { Hexagon::GP },
  { Hexagon::GPCYCLEHI },
  { Hexagon::GPCYCLELO },
  { Hexagon::GSR },
  { Hexagon::PC },
  { Hexagon::PKTCOUNTLO },
  { Hexagon::PKTCOUNTHI },
  { Hexagon::UGP },
  { Hexagon::UPCYCLELO },
  { Hexagon::UPCYCLEHI },
  { Hexagon::USR_OVF },
  { Hexagon::USR, Hexagon::C8 },
  { Hexagon::UTIMERLO },
  { Hexagon::UTIMERHI },
  { Hexagon::VTMP },
  { Hexagon::C5 },
  { Hexagon::R0 },
  { Hexagon::R1 },
  { Hexagon::R2 },
  { Hexagon::R3 },
  { Hexagon::R4 },
  { Hexagon::R5 },
  { Hexagon::R6 },
  { Hexagon::R7 },
  { Hexagon::R8 },
  { Hexagon::R9 },
  { Hexagon::R10 },
  { Hexagon::R11 },
  { Hexagon::R12 },
  { Hexagon::R13 },
  { Hexagon::R14 },
  { Hexagon::R15 },
  { Hexagon::R16 },
  { Hexagon::R17 },
  { Hexagon::R18 },
  { Hexagon::R19 },
  { Hexagon::R20 },
  { Hexagon::R21 },
  { Hexagon::R22 },
  { Hexagon::R23 },
  { Hexagon::R24 },
  { Hexagon::R25 },
  { Hexagon::R26 },
  { Hexagon::R27 },
  { Hexagon::R28 },
  { Hexagon::R29 },
  { Hexagon::R30 },
  { Hexagon::R31 },
  { Hexagon::G3 },
  { Hexagon::G4 },
  { Hexagon::G5 },
  { Hexagon::G6 },
  { Hexagon::G7 },
  { Hexagon::G8 },
  { Hexagon::G9 },
  { Hexagon::G10 },
  { Hexagon::G11 },
  { Hexagon::G12 },
  { Hexagon::G13 },
  { Hexagon::G14 },
  { Hexagon::G15 },
  { Hexagon::G20 },
  { Hexagon::G21 },
  { Hexagon::G22 },
  { Hexagon::G23 },
  { Hexagon::G30 },
  { Hexagon::G31 },
  { Hexagon::GPMUCNT0 },
  { Hexagon::GPMUCNT1 },
  { Hexagon::GPMUCNT2 },
  { Hexagon::GPMUCNT3 },
  { Hexagon::GPMUCNT4 },
  { Hexagon::GPMUCNT5 },
  { Hexagon::GPMUCNT6 },
  { Hexagon::GPMUCNT7 },
  { Hexagon::LC0 },
  { Hexagon::LC1 },
  { Hexagon::M0 },
  { Hexagon::M1 },
  { Hexagon::P0, Hexagon::P3_0 },
  { Hexagon::P1, Hexagon::P3_0 },
  { Hexagon::P2, Hexagon::P3_0 },
  { Hexagon::P3, Hexagon::P3_0 },
  { Hexagon::Q0 },
  { Hexagon::Q1 },
  { Hexagon::Q2 },
  { Hexagon::Q3 },
  { Hexagon::SA0 },
  { Hexagon::SA1 },
  { Hexagon::V0 },
  { Hexagon::V1 },
  { Hexagon::V2 },
  { Hexagon::V3 },
  { Hexagon::V4 },
  { Hexagon::V5 },
  { Hexagon::V6 },
  { Hexagon::V7 },
  { Hexagon::V8 },
  { Hexagon::V9 },
  { Hexagon::V10 },
  { Hexagon::V11 },
  { Hexagon::V12 },
  { Hexagon::V13 },
  { Hexagon::V14 },
  { Hexagon::V15 },
  { Hexagon::V16 },
  { Hexagon::V17 },
  { Hexagon::V18 },
  { Hexagon::V19 },
  { Hexagon::V20 },
  { Hexagon::V21 },
  { Hexagon::V22 },
  { Hexagon::V23 },
  { Hexagon::V24 },
  { Hexagon::V25 },
  { Hexagon::V26 },
  { Hexagon::V27 },
  { Hexagon::V28 },
  { Hexagon::V29 },
  { Hexagon::V30 },
  { Hexagon::V31 },
  { Hexagon::VF0 },
  { Hexagon::VF1 },
  { Hexagon::VF2 },
  { Hexagon::VF3 },
  { Hexagon::VF4 },
  { Hexagon::VF5 },
  { Hexagon::VF6 },
  { Hexagon::VF7 },
  { Hexagon::VF8 },
  { Hexagon::VF9 },
  { Hexagon::VF10 },
  { Hexagon::VF11 },
  { Hexagon::VF12 },
  { Hexagon::VF13 },
  { Hexagon::VF14 },
  { Hexagon::VF15 },
  { Hexagon::VF16 },
  { Hexagon::VF17 },
  { Hexagon::VF18 },
  { Hexagon::VF19 },
  { Hexagon::VF20 },
  { Hexagon::VF21 },
  { Hexagon::VF22 },
  { Hexagon::VF23 },
  { Hexagon::VF24 },
  { Hexagon::VF25 },
  { Hexagon::VF26 },
  { Hexagon::VF27 },
  { Hexagon::VF28 },
  { Hexagon::VF29 },
  { Hexagon::VF30 },
  { Hexagon::VF31 },
  { Hexagon::VFR0 },
  { Hexagon::VFR1 },
  { Hexagon::VFR2 },
  { Hexagon::VFR3 },
  { Hexagon::VFR4 },
  { Hexagon::VFR5 },
  { Hexagon::VFR6 },
  { Hexagon::VFR7 },
  { Hexagon::VFR8 },
  { Hexagon::VFR9 },
  { Hexagon::VFR10 },
  { Hexagon::VFR11 },
  { Hexagon::VFR12 },
  { Hexagon::VFR13 },
  { Hexagon::VFR14 },
  { Hexagon::VFR15 },
  { Hexagon::VFR16 },
  { Hexagon::VFR17 },
  { Hexagon::VFR18 },
  { Hexagon::VFR19 },
  { Hexagon::VFR20 },
  { Hexagon::VFR21 },
  { Hexagon::VFR22 },
  { Hexagon::VFR23 },
  { Hexagon::VFR24 },
  { Hexagon::VFR25 },
  { Hexagon::VFR26 },
  { Hexagon::VFR27 },
  { Hexagon::VFR28 },
  { Hexagon::VFR29 },
  { Hexagon::VFR30 },
  { Hexagon::VFR31 },
};

namespace {     // Register classes...
  // UsrBits Register Class...
  const MCPhysReg UsrBits[] = {
    Hexagon::USR_OVF, 
  };

  // UsrBits Bit set.
  const uint8_t UsrBitsBits[] = {
    0x00, 0x00, 0x08, 
  };

  // GuestRegs Register Class...
  const MCPhysReg GuestRegs[] = {
    Hexagon::GELR, Hexagon::GSR, Hexagon::GOSP, Hexagon::G3, Hexagon::G4, Hexagon::G5, Hexagon::G6, Hexagon::G7, Hexagon::G8, Hexagon::G9, Hexagon::G10, Hexagon::G11, Hexagon::G12, Hexagon::G13, Hexagon::G14, Hexagon::G15, Hexagon::GPMUCNT4, Hexagon::GPMUCNT5, Hexagon::GPMUCNT6, Hexagon::GPMUCNT7, Hexagon::G20, Hexagon::G21, Hexagon::G22, Hexagon::G23, Hexagon::GPCYCLELO, Hexagon::GPCYCLEHI, Hexagon::GPMUCNT0, Hexagon::GPMUCNT1, Hexagon::GPMUCNT2, Hexagon::GPMUCNT3, Hexagon::G30, Hexagon::G31, 
  };

  // GuestRegs Bit set.
  const uint8_t GuestRegsBits[] = {
    0xb0, 0x03, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x7f, 
  };

  // IntRegs Register Class...
  const MCPhysReg IntRegs[] = {
    Hexagon::R0, Hexagon::R1, Hexagon::R2, Hexagon::R3, Hexagon::R4, Hexagon::R5, Hexagon::R6, Hexagon::R7, Hexagon::R8, Hexagon::R9, Hexagon::R12, Hexagon::R13, Hexagon::R14, Hexagon::R15, Hexagon::R16, Hexagon::R17, Hexagon::R18, Hexagon::R19, Hexagon::R20, Hexagon::R21, Hexagon::R22, Hexagon::R23, Hexagon::R24, Hexagon::R25, Hexagon::R26, Hexagon::R27, Hexagon::R28, Hexagon::R10, Hexagon::R11, Hexagon::R29, Hexagon::R30, Hexagon::R31, 
  };

  // IntRegs Bit set.
  const uint8_t IntRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // CtrRegs Register Class...
  const MCPhysReg CtrRegs[] = {
    Hexagon::LC0, Hexagon::SA0, Hexagon::LC1, Hexagon::SA1, Hexagon::P3_0, Hexagon::C5, Hexagon::C8, Hexagon::PC, Hexagon::UGP, Hexagon::GP, Hexagon::CS0, Hexagon::CS1, Hexagon::UPCYCLELO, Hexagon::UPCYCLEHI, Hexagon::FRAMELIMIT, Hexagon::FRAMEKEY, Hexagon::PKTCOUNTLO, Hexagon::PKTCOUNTHI, Hexagon::UTIMERLO, Hexagon::UTIMERHI, Hexagon::M0, Hexagon::M1, Hexagon::USR, 
  };

  // CtrRegs Bit set.
  const uint8_t CtrRegsBits[] = {
    0x4c, 0x74, 0x67, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
  };

  // GeneralSubRegs Register Class...
  const MCPhysReg GeneralSubRegs[] = {
    Hexagon::R23, Hexagon::R22, Hexagon::R21, Hexagon::R20, Hexagon::R19, Hexagon::R18, Hexagon::R17, Hexagon::R16, Hexagon::R7, Hexagon::R6, Hexagon::R5, Hexagon::R4, Hexagon::R3, Hexagon::R2, Hexagon::R1, Hexagon::R0, 
  };

  // GeneralSubRegs Bit set.
  const uint8_t GeneralSubRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 0xf8, 0x07, 
  };

  // V62Regs Register Class...
  const MCPhysReg V62Regs[] = {
    Hexagon::FRAMELIMIT, Hexagon::FRAMEKEY, Hexagon::C17_16, Hexagon::PKTCOUNTLO, Hexagon::PKTCOUNTHI, Hexagon::PKTCOUNT, Hexagon::UTIMERLO, Hexagon::UTIMERHI, Hexagon::UTIMER, 
  };

  // V62Regs Bit set.
  const uint8_t V62RegsBits[] = {
    0x0c, 0x38, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // IntRegsLow8 Register Class...
  const MCPhysReg IntRegsLow8[] = {
    Hexagon::R7, Hexagon::R6, Hexagon::R5, Hexagon::R4, Hexagon::R3, Hexagon::R2, Hexagon::R1, Hexagon::R0, 
  };

  // IntRegsLow8 Bit set.
  const uint8_t IntRegsLow8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 
  };

  // CtrRegs_and_V62Regs Register Class...
  const MCPhysReg CtrRegs_and_V62Regs[] = {
    Hexagon::FRAMELIMIT, Hexagon::FRAMEKEY, Hexagon::PKTCOUNTLO, Hexagon::PKTCOUNTHI, Hexagon::UTIMERLO, Hexagon::UTIMERHI, 
  };

  // CtrRegs_and_V62Regs Bit set.
  const uint8_t CtrRegs_and_V62RegsBits[] = {
    0x0c, 0x30, 0x60, 
  };

  // PredRegs Register Class...
  const MCPhysReg PredRegs[] = {
    Hexagon::P0, Hexagon::P1, Hexagon::P2, Hexagon::P3, 
  };

  // PredRegs Bit set.
  const uint8_t PredRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 
  };

  // V62Regs_with_isub_hi Register Class...
  const MCPhysReg V62Regs_with_isub_hi[] = {
    Hexagon::C17_16, Hexagon::PKTCOUNT, Hexagon::UTIMER, 
  };

  // V62Regs_with_isub_hi Bit set.
  const uint8_t V62Regs_with_isub_hiBits[] = {
    0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // ModRegs Register Class...
  const MCPhysReg ModRegs[] = {
    Hexagon::M0, Hexagon::M1, 
  };

  // ModRegs Bit set.
  const uint8_t ModRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  };

  // CtrRegs_with_subreg_overflow Register Class...
  const MCPhysReg CtrRegs_with_subreg_overflow[] = {
    Hexagon::USR, 
  };

  // CtrRegs_with_subreg_overflow Bit set.
  const uint8_t CtrRegs_with_subreg_overflowBits[] = {
    0x00, 0x00, 0x04, 
  };

  // V65Regs Register Class...
  const MCPhysReg V65Regs[] = {
    Hexagon::VTMP, 
  };

  // V65Regs Bit set.
  const uint8_t V65RegsBits[] = {
    0x00, 0x00, 0x80, 
  };

  // DoubleRegs Register Class...
  const MCPhysReg DoubleRegs[] = {
    Hexagon::D0, Hexagon::D1, Hexagon::D2, Hexagon::D3, Hexagon::D4, Hexagon::D6, Hexagon::D7, Hexagon::D8, Hexagon::D9, Hexagon::D10, Hexagon::D11, Hexagon::D12, Hexagon::D13, Hexagon::D5, Hexagon::D14, Hexagon::D15, 
  };

  // DoubleRegs Bit set.
  const uint8_t DoubleRegsBits[] = {
    0x00, 0x00, 0x00, 0xf0, 0xff, 0x0f, 
  };

  // GuestRegs64 Register Class...
  const MCPhysReg GuestRegs64[] = {
    Hexagon::G1_0, Hexagon::G3_2, Hexagon::G5_4, Hexagon::G7_6, Hexagon::G9_8, Hexagon::G11_10, Hexagon::G13_12, Hexagon::G15_14, Hexagon::G17_16, Hexagon::G19_18, Hexagon::G21_20, Hexagon::G23_22, Hexagon::G25_24, Hexagon::G27_26, Hexagon::G29_28, Hexagon::G31_30, 
  };

  // GuestRegs64 Bit set.
  const uint8_t GuestRegs64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x0f, 
  };

  // VectRegRev Register Class...
  const MCPhysReg VectRegRev[] = {
    Hexagon::WR0, Hexagon::WR1, Hexagon::WR2, Hexagon::WR3, Hexagon::WR4, Hexagon::WR5, Hexagon::WR6, Hexagon::WR7, Hexagon::WR8, Hexagon::WR9, Hexagon::WR10, Hexagon::WR11, Hexagon::WR12, Hexagon::WR13, Hexagon::WR14, Hexagon::WR15, 
  };

  // VectRegRev Bit set.
  const uint8_t VectRegRevBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x1f, 
  };

  // CtrRegs64 Register Class...
  const MCPhysReg CtrRegs64[] = {
    Hexagon::C1_0, Hexagon::C3_2, Hexagon::C5_4, Hexagon::C7_6, Hexagon::C9_8, Hexagon::C11_10, Hexagon::CS, Hexagon::UPCYCLE, Hexagon::C17_16, Hexagon::PKTCOUNT, Hexagon::UTIMER, 
  };

  // CtrRegs64 Bit set.
  const uint8_t CtrRegs64Bits[] = {
    0x02, 0x88, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x0f, 
  };

  // GeneralDoubleLow8Regs Register Class...
  const MCPhysReg GeneralDoubleLow8Regs[] = {
    Hexagon::D11, Hexagon::D10, Hexagon::D9, Hexagon::D8, Hexagon::D3, Hexagon::D2, Hexagon::D1, Hexagon::D0, 
  };

  // GeneralDoubleLow8Regs Bit set.
  const uint8_t GeneralDoubleLow8RegsBits[] = {
    0x00, 0x00, 0x00, 0xf0, 0xf0, 
  };

  // DoubleRegs_with_isub_hi_in_IntRegsLow8 Register Class...
  const MCPhysReg DoubleRegs_with_isub_hi_in_IntRegsLow8[] = {
    Hexagon::D3, Hexagon::D2, Hexagon::D1, Hexagon::D0, 
  };

  // DoubleRegs_with_isub_hi_in_IntRegsLow8 Bit set.
  const uint8_t DoubleRegs_with_isub_hi_in_IntRegsLow8Bits[] = {
    0x00, 0x00, 0x00, 0xf0, 
  };

  // CtrRegs64_and_V62Regs Register Class...
  const MCPhysReg CtrRegs64_and_V62Regs[] = {
    Hexagon::C17_16, Hexagon::PKTCOUNT, Hexagon::UTIMER, 
  };

  // CtrRegs64_and_V62Regs Bit set.
  const uint8_t CtrRegs64_and_V62RegsBits[] = {
    0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // CtrRegs64_with_isub_hi_in_ModRegs Register Class...
  const MCPhysReg CtrRegs64_with_isub_hi_in_ModRegs[] = {
    Hexagon::C7_6, 
  };

  // CtrRegs64_with_isub_hi_in_ModRegs Bit set.
  const uint8_t CtrRegs64_with_isub_hi_in_ModRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  };

  // HvxQR Register Class...
  const MCPhysReg HvxQR[] = {
    Hexagon::Q0, Hexagon::Q1, Hexagon::Q2, Hexagon::Q3, 
  };

  // HvxQR Bit set.
  const uint8_t HvxQRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 
  };

  // HvxVR Register Class...
  const MCPhysReg HvxVR[] = {
    Hexagon::V0, Hexagon::V1, Hexagon::V2, Hexagon::V3, Hexagon::V4, Hexagon::V5, Hexagon::V6, Hexagon::V7, Hexagon::V8, Hexagon::V9, Hexagon::V10, Hexagon::V11, Hexagon::V12, Hexagon::V13, Hexagon::V14, Hexagon::V15, Hexagon::V16, Hexagon::V17, Hexagon::V18, Hexagon::V19, Hexagon::V20, Hexagon::V21, Hexagon::V22, Hexagon::V23, Hexagon::V24, Hexagon::V25, Hexagon::V26, Hexagon::V27, Hexagon::V28, Hexagon::V29, Hexagon::V30, Hexagon::V31, Hexagon::VTMP, 
  };

  // HvxVR Bit set.
  const uint8_t HvxVRBits[] = {
    0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // HvxVR_and_V65Regs Register Class...
  const MCPhysReg HvxVR_and_V65Regs[] = {
    Hexagon::VTMP, 
  };

  // HvxVR_and_V65Regs Bit set.
  const uint8_t HvxVR_and_V65RegsBits[] = {
    0x00, 0x00, 0x80, 
  };

  // HvxWR Register Class...
  const MCPhysReg HvxWR[] = {
    Hexagon::W0, Hexagon::W1, Hexagon::W2, Hexagon::W3, Hexagon::W4, Hexagon::W5, Hexagon::W6, Hexagon::W7, Hexagon::W8, Hexagon::W9, Hexagon::W10, Hexagon::W11, Hexagon::W12, Hexagon::W13, Hexagon::W14, Hexagon::W15, Hexagon::WR0, Hexagon::WR1, Hexagon::WR2, Hexagon::WR3, Hexagon::WR4, Hexagon::WR5, Hexagon::WR6, Hexagon::WR7, Hexagon::WR8, Hexagon::WR9, Hexagon::WR10, Hexagon::WR11, Hexagon::WR12, Hexagon::WR13, Hexagon::WR14, Hexagon::WR15, 
  };

  // HvxWR Bit set.
  const uint8_t HvxWRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // HvxWR_and_VectRegRev Register Class...
  const MCPhysReg HvxWR_and_VectRegRev[] = {
    Hexagon::WR0, Hexagon::WR1, Hexagon::WR2, Hexagon::WR3, Hexagon::WR4, Hexagon::WR5, Hexagon::WR6, Hexagon::WR7, Hexagon::WR8, Hexagon::WR9, Hexagon::WR10, Hexagon::WR11, Hexagon::WR12, Hexagon::WR13, Hexagon::WR14, Hexagon::WR15, 
  };

  // HvxWR_and_VectRegRev Bit set.
  const uint8_t HvxWR_and_VectRegRevBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x1f, 
  };

  // HvxVQR Register Class...
  const MCPhysReg HvxVQR[] = {
    Hexagon::VQ0, Hexagon::VQ1, Hexagon::VQ2, Hexagon::VQ3, Hexagon::VQ4, Hexagon::VQ5, Hexagon::VQ6, Hexagon::VQ7, 
  };

  // HvxVQR Bit set.
  const uint8_t HvxVQRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 
  };

} // end anonymous namespace


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char HexagonRegClassStrings[] = {
  /* 0 */ "CtrRegs64\0"
  /* 10 */ "GuestRegs64\0"
  /* 22 */ "DoubleRegs_with_isub_hi_in_IntRegsLow8\0"
  /* 61 */ "HvxVQR\0"
  /* 68 */ "HvxQR\0"
  /* 74 */ "HvxVR\0"
  /* 80 */ "HvxWR\0"
  /* 86 */ "V62Regs_with_isub_hi\0"
  /* 107 */ "CtrRegs64_and_V62Regs\0"
  /* 129 */ "CtrRegs_and_V62Regs\0"
  /* 149 */ "HvxVR_and_V65Regs\0"
  /* 167 */ "GeneralDoubleLow8Regs\0"
  /* 189 */ "GeneralSubRegs\0"
  /* 204 */ "PredRegs\0"
  /* 213 */ "CtrRegs64_with_isub_hi_in_ModRegs\0"
  /* 247 */ "DoubleRegs\0"
  /* 258 */ "CtrRegs\0"
  /* 266 */ "IntRegs\0"
  /* 274 */ "GuestRegs\0"
  /* 284 */ "UsrBits\0"
  /* 292 */ "HvxWR_and_VectRegRev\0"
  /* 313 */ "CtrRegs_with_subreg_overflow\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterClass HexagonMCRegisterClasses[] = {
  { UsrBits, UsrBitsBits, 284, 1, sizeof(UsrBitsBits), Hexagon::UsrBitsRegClassID, 1, false },
  { GuestRegs, GuestRegsBits, 274, 32, sizeof(GuestRegsBits), Hexagon::GuestRegsRegClassID, 1, false },
  { IntRegs, IntRegsBits, 266, 32, sizeof(IntRegsBits), Hexagon::IntRegsRegClassID, 1, true },
  { CtrRegs, CtrRegsBits, 258, 23, sizeof(CtrRegsBits), Hexagon::CtrRegsRegClassID, 1, false },
  { GeneralSubRegs, GeneralSubRegsBits, 189, 16, sizeof(GeneralSubRegsBits), Hexagon::GeneralSubRegsRegClassID, 1, true },
  { V62Regs, V62RegsBits, 121, 9, sizeof(V62RegsBits), Hexagon::V62RegsRegClassID, 1, false },
  { IntRegsLow8, IntRegsLow8Bits, 49, 8, sizeof(IntRegsLow8Bits), Hexagon::IntRegsLow8RegClassID, 1, true },
  { CtrRegs_and_V62Regs, CtrRegs_and_V62RegsBits, 129, 6, sizeof(CtrRegs_and_V62RegsBits), Hexagon::CtrRegs_and_V62RegsRegClassID, 1, false },
  { PredRegs, PredRegsBits, 204, 4, sizeof(PredRegsBits), Hexagon::PredRegsRegClassID, 1, true },
  { V62Regs_with_isub_hi, V62Regs_with_isub_hiBits, 86, 3, sizeof(V62Regs_with_isub_hiBits), Hexagon::V62Regs_with_isub_hiRegClassID, 1, false },
  { ModRegs, ModRegsBits, 239, 2, sizeof(ModRegsBits), Hexagon::ModRegsRegClassID, 1, true },
  { CtrRegs_with_subreg_overflow, CtrRegs_with_subreg_overflowBits, 313, 1, sizeof(CtrRegs_with_subreg_overflowBits), Hexagon::CtrRegs_with_subreg_overflowRegClassID, 1, false },
  { V65Regs, V65RegsBits, 159, 1, sizeof(V65RegsBits), Hexagon::V65RegsRegClassID, 1, false },
  { DoubleRegs, DoubleRegsBits, 247, 16, sizeof(DoubleRegsBits), Hexagon::DoubleRegsRegClassID, 1, true },
  { GuestRegs64, GuestRegs64Bits, 10, 16, sizeof(GuestRegs64Bits), Hexagon::GuestRegs64RegClassID, 1, false },
  { VectRegRev, VectRegRevBits, 302, 16, sizeof(VectRegRevBits), Hexagon::VectRegRevRegClassID, 1, true },
  { CtrRegs64, CtrRegs64Bits, 0, 11, sizeof(CtrRegs64Bits), Hexagon::CtrRegs64RegClassID, 1, false },
  { GeneralDoubleLow8Regs, GeneralDoubleLow8RegsBits, 167, 8, sizeof(GeneralDoubleLow8RegsBits), Hexagon::GeneralDoubleLow8RegsRegClassID, 1, true },
  { DoubleRegs_with_isub_hi_in_IntRegsLow8, DoubleRegs_with_isub_hi_in_IntRegsLow8Bits, 22, 4, sizeof(DoubleRegs_with_isub_hi_in_IntRegsLow8Bits), Hexagon::DoubleRegs_with_isub_hi_in_IntRegsLow8RegClassID, 1, true },
  { CtrRegs64_and_V62Regs, CtrRegs64_and_V62RegsBits, 107, 3, sizeof(CtrRegs64_and_V62RegsBits), Hexagon::CtrRegs64_and_V62RegsRegClassID, 1, false },
  { CtrRegs64_with_isub_hi_in_ModRegs, CtrRegs64_with_isub_hi_in_ModRegsBits, 213, 1, sizeof(CtrRegs64_with_isub_hi_in_ModRegsBits), Hexagon::CtrRegs64_with_isub_hi_in_ModRegsRegClassID, 1, false },
  { HvxQR, HvxQRBits, 68, 4, sizeof(HvxQRBits), Hexagon::HvxQRRegClassID, 1, true },
  { HvxVR, HvxVRBits, 74, 33, sizeof(HvxVRBits), Hexagon::HvxVRRegClassID, 1, true },
  { HvxVR_and_V65Regs, HvxVR_and_V65RegsBits, 149, 1, sizeof(HvxVR_and_V65RegsBits), Hexagon::HvxVR_and_V65RegsRegClassID, 1, true },
  { HvxWR, HvxWRBits, 80, 32, sizeof(HvxWRBits), Hexagon::HvxWRRegClassID, 1, true },
  { HvxWR_and_VectRegRev, HvxWR_and_VectRegRevBits, 292, 16, sizeof(HvxWR_and_VectRegRevBits), Hexagon::HvxWR_and_VectRegRevRegClassID, 1, true },
  { HvxVQR, HvxVQRBits, 61, 8, sizeof(HvxVQRBits), Hexagon::HvxVQRRegClassID, 1, true },
};

// Hexagon Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0Dwarf2L[] = {
  { 0U, Hexagon::R0 },
  { 1U, Hexagon::R1 },
  { 2U, Hexagon::R2 },
  { 3U, Hexagon::R3 },
  { 4U, Hexagon::R4 },
  { 5U, Hexagon::R5 },
  { 6U, Hexagon::R6 },
  { 7U, Hexagon::R7 },
  { 8U, Hexagon::R8 },
  { 9U, Hexagon::R9 },
  { 10U, Hexagon::R10 },
  { 11U, Hexagon::R11 },
  { 12U, Hexagon::R12 },
  { 13U, Hexagon::R13 },
  { 14U, Hexagon::R14 },
  { 15U, Hexagon::R15 },
  { 16U, Hexagon::R16 },
  { 17U, Hexagon::R17 },
  { 18U, Hexagon::R18 },
  { 19U, Hexagon::R19 },
  { 20U, Hexagon::R20 },
  { 21U, Hexagon::R21 },
  { 22U, Hexagon::R22 },
  { 23U, Hexagon::R23 },
  { 24U, Hexagon::R24 },
  { 25U, Hexagon::R25 },
  { 26U, Hexagon::R26 },
  { 27U, Hexagon::R27 },
  { 28U, Hexagon::R28 },
  { 29U, Hexagon::R29 },
  { 30U, Hexagon::R30 },
  { 31U, Hexagon::R31 },
  { 32U, Hexagon::D0 },
  { 34U, Hexagon::D1 },
  { 36U, Hexagon::D2 },
  { 38U, Hexagon::D3 },
  { 40U, Hexagon::D4 },
  { 42U, Hexagon::D5 },
  { 44U, Hexagon::D6 },
  { 46U, Hexagon::D7 },
  { 48U, Hexagon::D8 },
  { 50U, Hexagon::D9 },
  { 52U, Hexagon::D10 },
  { 54U, Hexagon::D11 },
  { 56U, Hexagon::D12 },
  { 58U, Hexagon::D13 },
  { 60U, Hexagon::D14 },
  { 62U, Hexagon::D15 },
  { 63U, Hexagon::P0 },
  { 64U, Hexagon::P1 },
  { 65U, Hexagon::P2 },
  { 66U, Hexagon::P3 },
  { 67U, Hexagon::C1_0 },
  { 68U, Hexagon::LC0 },
  { 69U, Hexagon::C3_2 },
  { 70U, Hexagon::LC1 },
  { 71U, Hexagon::P3_0 },
  { 72U, Hexagon::C7_6 },
  { 73U, Hexagon::M0 },
  { 74U, Hexagon::C9_8 },
  { 75U, Hexagon::C8 },
  { 76U, Hexagon::C11_10 },
  { 77U, Hexagon::UGP },
  { 78U, Hexagon::GP },
  { 79U, Hexagon::CS0 },
  { 80U, Hexagon::CS1 },
  { 81U, Hexagon::UPCYCLELO },
  { 82U, Hexagon::UPCYCLEHI },
  { 83U, Hexagon::C17_16 },
  { 84U, Hexagon::FRAMEKEY },
  { 85U, Hexagon::PKTCOUNTLO },
  { 86U, Hexagon::PKTCOUNTHI },
  { 97U, Hexagon::UTIMERLO },
  { 98U, Hexagon::UTIMERHI },
  { 99U, Hexagon::W0 },
  { 100U, Hexagon::V1 },
  { 101U, Hexagon::W1 },
  { 102U, Hexagon::V3 },
  { 103U, Hexagon::W2 },
  { 104U, Hexagon::V5 },
  { 105U, Hexagon::W3 },
  { 106U, Hexagon::V7 },
  { 107U, Hexagon::W4 },
  { 108U, Hexagon::V9 },
  { 109U, Hexagon::W5 },
  { 110U, Hexagon::V11 },
  { 111U, Hexagon::W6 },
  { 112U, Hexagon::V13 },
  { 113U, Hexagon::W7 },
  { 114U, Hexagon::V15 },
  { 115U, Hexagon::W8 },
  { 116U, Hexagon::V17 },
  { 117U, Hexagon::W9 },
  { 118U, Hexagon::V19 },
  { 119U, Hexagon::W10 },
  { 120U, Hexagon::V21 },
  { 121U, Hexagon::W11 },
  { 122U, Hexagon::V23 },
  { 123U, Hexagon::W12 },
  { 124U, Hexagon::V25 },
  { 125U, Hexagon::W13 },
  { 126U, Hexagon::V27 },
  { 127U, Hexagon::W14 },
  { 128U, Hexagon::V29 },
  { 129U, Hexagon::W15 },
  { 130U, Hexagon::V31 },
  { 131U, Hexagon::Q0 },
  { 132U, Hexagon::Q1 },
  { 133U, Hexagon::Q2 },
  { 134U, Hexagon::Q3 },
  { 161U, Hexagon::WR0 },
  { 162U, Hexagon::WR1 },
  { 163U, Hexagon::WR2 },
  { 164U, Hexagon::WR3 },
  { 165U, Hexagon::WR4 },
  { 166U, Hexagon::WR5 },
  { 167U, Hexagon::WR6 },
  { 168U, Hexagon::WR7 },
  { 169U, Hexagon::WR8 },
  { 170U, Hexagon::WR9 },
  { 171U, Hexagon::WR10 },
  { 172U, Hexagon::WR11 },
  { 173U, Hexagon::WR12 },
  { 174U, Hexagon::WR13 },
  { 175U, Hexagon::WR14 },
  { 176U, Hexagon::WR15 },
  { 220U, Hexagon::G1_0 },
  { 221U, Hexagon::GSR },
  { 222U, Hexagon::G3_2 },
  { 223U, Hexagon::G3 },
  { 224U, Hexagon::G5_4 },
  { 225U, Hexagon::G5 },
  { 226U, Hexagon::G7_6 },
  { 227U, Hexagon::G7 },
  { 228U, Hexagon::G9_8 },
  { 229U, Hexagon::G9 },
  { 230U, Hexagon::G11_10 },
  { 231U, Hexagon::G11 },
  { 232U, Hexagon::G13_12 },
  { 233U, Hexagon::G13 },
  { 234U, Hexagon::G15_14 },
  { 235U, Hexagon::G15 },
  { 236U, Hexagon::G17_16 },
  { 237U, Hexagon::GPMUCNT5 },
  { 238U, Hexagon::G19_18 },
  { 239U, Hexagon::GPMUCNT7 },
  { 240U, Hexagon::G21_20 },
  { 241U, Hexagon::G21 },
  { 242U, Hexagon::G23_22 },
  { 243U, Hexagon::G23 },
  { 244U, Hexagon::G25_24 },
  { 245U, Hexagon::GPCYCLEHI },
  { 246U, Hexagon::G27_26 },
  { 247U, Hexagon::GPMUCNT1 },
  { 248U, Hexagon::G29_28 },
  { 249U, Hexagon::GPMUCNT3 },
  { 250U, Hexagon::G31_30 },
  { 251U, Hexagon::G31 },
  { 252U, Hexagon::VQ0 },
  { 253U, Hexagon::VQ1 },
  { 254U, Hexagon::VQ2 },
  { 255U, Hexagon::VQ3 },
  { 256U, Hexagon::VQ4 },
  { 257U, Hexagon::VQ5 },
  { 258U, Hexagon::VQ6 },
  { 259U, Hexagon::VQ7 },
  { 999999U, Hexagon::VF0 },
  { 1000000U, Hexagon::VF1 },
  { 1000001U, Hexagon::VF2 },
  { 1000002U, Hexagon::VF3 },
  { 1000003U, Hexagon::VF4 },
  { 1000004U, Hexagon::VF5 },
  { 1000005U, Hexagon::VF6 },
  { 1000006U, Hexagon::VF7 },
  { 1000007U, Hexagon::VF8 },
  { 1000008U, Hexagon::VF9 },
  { 1000009U, Hexagon::VF10 },
  { 1000010U, Hexagon::VF11 },
  { 1000011U, Hexagon::VF12 },
  { 1000012U, Hexagon::VF13 },
  { 1000013U, Hexagon::VF14 },
  { 1000014U, Hexagon::VF15 },
  { 1000015U, Hexagon::VF16 },
  { 1000016U, Hexagon::VF17 },
  { 1000017U, Hexagon::VF18 },
  { 1000018U, Hexagon::VF19 },
  { 1000019U, Hexagon::VF20 },
  { 1000020U, Hexagon::VF21 },
  { 1000021U, Hexagon::VF22 },
  { 1000022U, Hexagon::VF23 },
  { 1000023U, Hexagon::VF24 },
  { 1000024U, Hexagon::VF25 },
  { 1000025U, Hexagon::VF26 },
  { 1000026U, Hexagon::VF27 },
  { 1000027U, Hexagon::VF28 },
  { 1000028U, Hexagon::VF29 },
  { 1000029U, Hexagon::VF30 },
  { 1000030U, Hexagon::VF31 },
  { 9999999U, Hexagon::VFR0 },
  { 10000000U, Hexagon::VFR1 },
  { 10000001U, Hexagon::VFR2 },
  { 10000002U, Hexagon::VFR3 },
  { 10000003U, Hexagon::VFR4 },
  { 10000004U, Hexagon::VFR5 },
  { 10000005U, Hexagon::VFR6 },
  { 10000006U, Hexagon::VFR7 },
  { 10000007U, Hexagon::VFR8 },
  { 10000008U, Hexagon::VFR9 },
  { 10000009U, Hexagon::VFR10 },
  { 10000010U, Hexagon::VFR11 },
  { 10000011U, Hexagon::VFR12 },
  { 10000012U, Hexagon::VFR13 },
  { 10000013U, Hexagon::VFR14 },
  { 10000014U, Hexagon::VFR15 },
  { 10000015U, Hexagon::VFR16 },
  { 10000016U, Hexagon::VFR17 },
  { 10000017U, Hexagon::VFR18 },
  { 10000018U, Hexagon::VFR19 },
  { 10000019U, Hexagon::VFR20 },
  { 10000020U, Hexagon::VFR21 },
  { 10000021U, Hexagon::VFR22 },
  { 10000022U, Hexagon::VFR23 },
  { 10000023U, Hexagon::VFR24 },
  { 10000024U, Hexagon::VFR25 },
  { 10000025U, Hexagon::VFR26 },
  { 10000026U, Hexagon::VFR27 },
  { 10000027U, Hexagon::VFR28 },
  { 10000028U, Hexagon::VFR29 },
  { 10000029U, Hexagon::VFR30 },
  { 10000030U, Hexagon::VFR31 },
};
extern const unsigned HexagonDwarfFlavour0Dwarf2LSize = array_lengthof(HexagonDwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0Dwarf2L[] = {
  { 0U, Hexagon::R0 },
  { 1U, Hexagon::R1 },
  { 2U, Hexagon::R2 },
  { 3U, Hexagon::R3 },
  { 4U, Hexagon::R4 },
  { 5U, Hexagon::R5 },
  { 6U, Hexagon::R6 },
  { 7U, Hexagon::R7 },
  { 8U, Hexagon::R8 },
  { 9U, Hexagon::R9 },
  { 10U, Hexagon::R10 },
  { 11U, Hexagon::R11 },
  { 12U, Hexagon::R12 },
  { 13U, Hexagon::R13 },
  { 14U, Hexagon::R14 },
  { 15U, Hexagon::R15 },
  { 16U, Hexagon::R16 },
  { 17U, Hexagon::R17 },
  { 18U, Hexagon::R18 },
  { 19U, Hexagon::R19 },
  { 20U, Hexagon::R20 },
  { 21U, Hexagon::R21 },
  { 22U, Hexagon::R22 },
  { 23U, Hexagon::R23 },
  { 24U, Hexagon::R24 },
  { 25U, Hexagon::R25 },
  { 26U, Hexagon::R26 },
  { 27U, Hexagon::R27 },
  { 28U, Hexagon::R28 },
  { 29U, Hexagon::R29 },
  { 30U, Hexagon::R30 },
  { 31U, Hexagon::R31 },
  { 32U, Hexagon::D0 },
  { 34U, Hexagon::D1 },
  { 36U, Hexagon::D2 },
  { 38U, Hexagon::D3 },
  { 40U, Hexagon::D4 },
  { 42U, Hexagon::D5 },
  { 44U, Hexagon::D6 },
  { 46U, Hexagon::D7 },
  { 48U, Hexagon::D8 },
  { 50U, Hexagon::D9 },
  { 52U, Hexagon::D10 },
  { 54U, Hexagon::D11 },
  { 56U, Hexagon::D12 },
  { 58U, Hexagon::D13 },
  { 60U, Hexagon::D14 },
  { 62U, Hexagon::D15 },
  { 63U, Hexagon::P0 },
  { 64U, Hexagon::P1 },
  { 65U, Hexagon::P2 },
  { 66U, Hexagon::P3 },
  { 67U, Hexagon::C1_0 },
  { 68U, Hexagon::LC0 },
  { 69U, Hexagon::C3_2 },
  { 70U, Hexagon::LC1 },
  { 71U, Hexagon::P3_0 },
  { 72U, Hexagon::C7_6 },
  { 73U, Hexagon::M0 },
  { 74U, Hexagon::C9_8 },
  { 75U, Hexagon::C8 },
  { 76U, Hexagon::C11_10 },
  { 77U, Hexagon::UGP },
  { 78U, Hexagon::GP },
  { 79U, Hexagon::CS0 },
  { 80U, Hexagon::CS1 },
  { 81U, Hexagon::UPCYCLELO },
  { 82U, Hexagon::UPCYCLEHI },
  { 83U, Hexagon::C17_16 },
  { 84U, Hexagon::FRAMEKEY },
  { 85U, Hexagon::PKTCOUNTLO },
  { 86U, Hexagon::PKTCOUNTHI },
  { 97U, Hexagon::UTIMERLO },
  { 98U, Hexagon::UTIMERHI },
  { 99U, Hexagon::W0 },
  { 100U, Hexagon::V1 },
  { 101U, Hexagon::W1 },
  { 102U, Hexagon::V3 },
  { 103U, Hexagon::W2 },
  { 104U, Hexagon::V5 },
  { 105U, Hexagon::W3 },
  { 106U, Hexagon::V7 },
  { 107U, Hexagon::W4 },
  { 108U, Hexagon::V9 },
  { 109U, Hexagon::W5 },
  { 110U, Hexagon::V11 },
  { 111U, Hexagon::W6 },
  { 112U, Hexagon::V13 },
  { 113U, Hexagon::W7 },
  { 114U, Hexagon::V15 },
  { 115U, Hexagon::W8 },
  { 116U, Hexagon::V17 },
  { 117U, Hexagon::W9 },
  { 118U, Hexagon::V19 },
  { 119U, Hexagon::W10 },
  { 120U, Hexagon::V21 },
  { 121U, Hexagon::W11 },
  { 122U, Hexagon::V23 },
  { 123U, Hexagon::W12 },
  { 124U, Hexagon::V25 },
  { 125U, Hexagon::W13 },
  { 126U, Hexagon::V27 },
  { 127U, Hexagon::W14 },
  { 128U, Hexagon::V29 },
  { 129U, Hexagon::W15 },
  { 130U, Hexagon::V31 },
  { 131U, Hexagon::Q0 },
  { 132U, Hexagon::Q1 },
  { 133U, Hexagon::Q2 },
  { 134U, Hexagon::Q3 },
  { 161U, Hexagon::WR0 },
  { 162U, Hexagon::WR1 },
  { 163U, Hexagon::WR2 },
  { 164U, Hexagon::WR3 },
  { 165U, Hexagon::WR4 },
  { 166U, Hexagon::WR5 },
  { 167U, Hexagon::WR6 },
  { 168U, Hexagon::WR7 },
  { 169U, Hexagon::WR8 },
  { 170U, Hexagon::WR9 },
  { 171U, Hexagon::WR10 },
  { 172U, Hexagon::WR11 },
  { 173U, Hexagon::WR12 },
  { 174U, Hexagon::WR13 },
  { 175U, Hexagon::WR14 },
  { 176U, Hexagon::WR15 },
  { 220U, Hexagon::G1_0 },
  { 221U, Hexagon::GSR },
  { 222U, Hexagon::G3_2 },
  { 223U, Hexagon::G3 },
  { 224U, Hexagon::G5_4 },
  { 225U, Hexagon::G5 },
  { 226U, Hexagon::G7_6 },
  { 227U, Hexagon::G7 },
  { 228U, Hexagon::G9_8 },
  { 229U, Hexagon::G9 },
  { 230U, Hexagon::G11_10 },
  { 231U, Hexagon::G11 },
  { 232U, Hexagon::G13_12 },
  { 233U, Hexagon::G13 },
  { 234U, Hexagon::G15_14 },
  { 235U, Hexagon::G15 },
  { 236U, Hexagon::G17_16 },
  { 237U, Hexagon::GPMUCNT5 },
  { 238U, Hexagon::G19_18 },
  { 239U, Hexagon::GPMUCNT7 },
  { 240U, Hexagon::G21_20 },
  { 241U, Hexagon::G21 },
  { 242U, Hexagon::G23_22 },
  { 243U, Hexagon::G23 },
  { 244U, Hexagon::G25_24 },
  { 245U, Hexagon::GPCYCLEHI },
  { 246U, Hexagon::G27_26 },
  { 247U, Hexagon::GPMUCNT1 },
  { 248U, Hexagon::G29_28 },
  { 249U, Hexagon::GPMUCNT3 },
  { 250U, Hexagon::G31_30 },
  { 251U, Hexagon::G31 },
  { 252U, Hexagon::VQ0 },
  { 253U, Hexagon::VQ1 },
  { 254U, Hexagon::VQ2 },
  { 255U, Hexagon::VQ3 },
  { 256U, Hexagon::VQ4 },
  { 257U, Hexagon::VQ5 },
  { 258U, Hexagon::VQ6 },
  { 259U, Hexagon::VQ7 },
  { 999999U, Hexagon::VF0 },
  { 1000000U, Hexagon::VF1 },
  { 1000001U, Hexagon::VF2 },
  { 1000002U, Hexagon::VF3 },
  { 1000003U, Hexagon::VF4 },
  { 1000004U, Hexagon::VF5 },
  { 1000005U, Hexagon::VF6 },
  { 1000006U, Hexagon::VF7 },
  { 1000007U, Hexagon::VF8 },
  { 1000008U, Hexagon::VF9 },
  { 1000009U, Hexagon::VF10 },
  { 1000010U, Hexagon::VF11 },
  { 1000011U, Hexagon::VF12 },
  { 1000012U, Hexagon::VF13 },
  { 1000013U, Hexagon::VF14 },
  { 1000014U, Hexagon::VF15 },
  { 1000015U, Hexagon::VF16 },
  { 1000016U, Hexagon::VF17 },
  { 1000017U, Hexagon::VF18 },
  { 1000018U, Hexagon::VF19 },
  { 1000019U, Hexagon::VF20 },
  { 1000020U, Hexagon::VF21 },
  { 1000021U, Hexagon::VF22 },
  { 1000022U, Hexagon::VF23 },
  { 1000023U, Hexagon::VF24 },
  { 1000024U, Hexagon::VF25 },
  { 1000025U, Hexagon::VF26 },
  { 1000026U, Hexagon::VF27 },
  { 1000027U, Hexagon::VF28 },
  { 1000028U, Hexagon::VF29 },
  { 1000029U, Hexagon::VF30 },
  { 1000030U, Hexagon::VF31 },
  { 9999999U, Hexagon::VFR0 },
  { 10000000U, Hexagon::VFR1 },
  { 10000001U, Hexagon::VFR2 },
  { 10000002U, Hexagon::VFR3 },
  { 10000003U, Hexagon::VFR4 },
  { 10000004U, Hexagon::VFR5 },
  { 10000005U, Hexagon::VFR6 },
  { 10000006U, Hexagon::VFR7 },
  { 10000007U, Hexagon::VFR8 },
  { 10000008U, Hexagon::VFR9 },
  { 10000009U, Hexagon::VFR10 },
  { 10000010U, Hexagon::VFR11 },
  { 10000011U, Hexagon::VFR12 },
  { 10000012U, Hexagon::VFR13 },
  { 10000013U, Hexagon::VFR14 },
  { 10000014U, Hexagon::VFR15 },
  { 10000015U, Hexagon::VFR16 },
  { 10000016U, Hexagon::VFR17 },
  { 10000017U, Hexagon::VFR18 },
  { 10000018U, Hexagon::VFR19 },
  { 10000019U, Hexagon::VFR20 },
  { 10000020U, Hexagon::VFR21 },
  { 10000021U, Hexagon::VFR22 },
  { 10000022U, Hexagon::VFR23 },
  { 10000023U, Hexagon::VFR24 },
  { 10000024U, Hexagon::VFR25 },
  { 10000025U, Hexagon::VFR26 },
  { 10000026U, Hexagon::VFR27 },
  { 10000027U, Hexagon::VFR28 },
  { 10000028U, Hexagon::VFR29 },
  { 10000029U, Hexagon::VFR30 },
  { 10000030U, Hexagon::VFR31 },
};
extern const unsigned HexagonEHFlavour0Dwarf2LSize = array_lengthof(HexagonEHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0L2Dwarf[] = {
  { Hexagon::CS, 78U },
  { Hexagon::FRAMEKEY, 84U },
  { Hexagon::FRAMELIMIT, 83U },
  { Hexagon::GELR, 220U },
  { Hexagon::GOSP, 222U },
  { Hexagon::GP, 78U },
  { Hexagon::GPCYCLEHI, 245U },
  { Hexagon::GPCYCLELO, 244U },
  { Hexagon::GSR, 221U },
  { Hexagon::PC, 76U },
  { Hexagon::PKTCOUNT, 85U },
  { Hexagon::PKTCOUNTHI, 86U },
  { Hexagon::PKTCOUNTLO, 85U },
  { Hexagon::UGP, 77U },
  { Hexagon::UPCYCLE, 80U },
  { Hexagon::UPCYCLEHI, 82U },
  { Hexagon::UPCYCLELO, 81U },
  { Hexagon::USR, 75U },
  { Hexagon::UTIMER, 97U },
  { Hexagon::UTIMERHI, 98U },
  { Hexagon::UTIMERLO, 97U },
  { Hexagon::VTMP, 131U },
  { Hexagon::C5, 72U },
  { Hexagon::C8, 75U },
  { Hexagon::CS0, 79U },
  { Hexagon::CS1, 80U },
  { Hexagon::D0, 32U },
  { Hexagon::D1, 34U },
  { Hexagon::D2, 36U },
  { Hexagon::D3, 38U },
  { Hexagon::D4, 40U },
  { Hexagon::D5, 42U },
  { Hexagon::D6, 44U },
  { Hexagon::D7, 46U },
  { Hexagon::D8, 48U },
  { Hexagon::D9, 50U },
  { Hexagon::D10, 52U },
  { Hexagon::D11, 54U },
  { Hexagon::D12, 56U },
  { Hexagon::D13, 58U },
  { Hexagon::D14, 60U },
  { Hexagon::D15, 62U },
  { Hexagon::G3, 223U },
  { Hexagon::G4, 224U },
  { Hexagon::G5, 225U },
  { Hexagon::G6, 226U },
  { Hexagon::G7, 227U },
  { Hexagon::G8, 228U },
  { Hexagon::G9, 229U },
  { Hexagon::G10, 230U },
  { Hexagon::G11, 231U },
  { Hexagon::G12, 232U },
  { Hexagon::G13, 233U },
  { Hexagon::G14, 234U },
  { Hexagon::G15, 235U },
  { Hexagon::G20, 240U },
  { Hexagon::G21, 241U },
  { Hexagon::G22, 242U },
  { Hexagon::G23, 243U },
  { Hexagon::G30, 250U },
  { Hexagon::G31, 251U },
  { Hexagon::GPMUCNT0, 246U },
  { Hexagon::GPMUCNT1, 247U },
  { Hexagon::GPMUCNT2, 248U },
  { Hexagon::GPMUCNT3, 249U },
  { Hexagon::GPMUCNT4, 236U },
  { Hexagon::GPMUCNT5, 237U },
  { Hexagon::GPMUCNT6, 238U },
  { Hexagon::GPMUCNT7, 239U },
  { Hexagon::LC0, 68U },
  { Hexagon::LC1, 70U },
  { Hexagon::M0, 73U },
  { Hexagon::M1, 74U },
  { Hexagon::P0, 63U },
  { Hexagon::P1, 64U },
  { Hexagon::P2, 65U },
  { Hexagon::P3, 66U },
  { Hexagon::Q0, 131U },
  { Hexagon::Q1, 132U },
  { Hexagon::Q2, 133U },
  { Hexagon::Q3, 134U },
  { Hexagon::R0, 0U },
  { Hexagon::R1, 1U },
  { Hexagon::R2, 2U },
  { Hexagon::R3, 3U },
  { Hexagon::R4, 4U },
  { Hexagon::R5, 5U },
  { Hexagon::R6, 6U },
  { Hexagon::R7, 7U },
  { Hexagon::R8, 8U },
  { Hexagon::R9, 9U },
  { Hexagon::R10, 10U },
  { Hexagon::R11, 11U },
  { Hexagon::R12, 12U },
  { Hexagon::R13, 13U },
  { Hexagon::R14, 14U },
  { Hexagon::R15, 15U },
  { Hexagon::R16, 16U },
  { Hexagon::R17, 17U },
  { Hexagon::R18, 18U },
  { Hexagon::R19, 19U },
  { Hexagon::R20, 20U },
  { Hexagon::R21, 21U },
  { Hexagon::R22, 22U },
  { Hexagon::R23, 23U },
  { Hexagon::R24, 24U },
  { Hexagon::R25, 25U },
  { Hexagon::R26, 26U },
  { Hexagon::R27, 27U },
  { Hexagon::R28, 28U },
  { Hexagon::R29, 29U },
  { Hexagon::R30, 30U },
  { Hexagon::R31, 31U },
  { Hexagon::SA0, 67U },
  { Hexagon::SA1, 69U },
  { Hexagon::V0, 99U },
  { Hexagon::V1, 100U },
  { Hexagon::V2, 101U },
  { Hexagon::V3, 102U },
  { Hexagon::V4, 103U },
  { Hexagon::V5, 104U },
  { Hexagon::V6, 105U },
  { Hexagon::V7, 106U },
  { Hexagon::V8, 107U },
  { Hexagon::V9, 108U },
  { Hexagon::V10, 109U },
  { Hexagon::V11, 110U },
  { Hexagon::V12, 111U },
  { Hexagon::V13, 112U },
  { Hexagon::V14, 113U },
  { Hexagon::V15, 114U },
  { Hexagon::V16, 115U },
  { Hexagon::V17, 116U },
  { Hexagon::V18, 117U },
  { Hexagon::V19, 118U },
  { Hexagon::V20, 119U },
  { Hexagon::V21, 120U },
  { Hexagon::V22, 121U },
  { Hexagon::V23, 122U },
  { Hexagon::V24, 123U },
  { Hexagon::V25, 124U },
  { Hexagon::V26, 125U },
  { Hexagon::V27, 126U },
  { Hexagon::V28, 127U },
  { Hexagon::V29, 128U },
  { Hexagon::V30, 129U },
  { Hexagon::V31, 130U },
  { Hexagon::VF0, 999999U },
  { Hexagon::VF1, 1000000U },
  { Hexagon::VF2, 1000001U },
  { Hexagon::VF3, 1000002U },
  { Hexagon::VF4, 1000003U },
  { Hexagon::VF5, 1000004U },
  { Hexagon::VF6, 1000005U },
  { Hexagon::VF7, 1000006U },
  { Hexagon::VF8, 1000007U },
  { Hexagon::VF9, 1000008U },
  { Hexagon::VF10, 1000009U },
  { Hexagon::VF11, 1000010U },
  { Hexagon::VF12, 1000011U },
  { Hexagon::VF13, 1000012U },
  { Hexagon::VF14, 1000013U },
  { Hexagon::VF15, 1000014U },
  { Hexagon::VF16, 1000015U },
  { Hexagon::VF17, 1000016U },
  { Hexagon::VF18, 1000017U },
  { Hexagon::VF19, 1000018U },
  { Hexagon::VF20, 1000019U },
  { Hexagon::VF21, 1000020U },
  { Hexagon::VF22, 1000021U },
  { Hexagon::VF23, 1000022U },
  { Hexagon::VF24, 1000023U },
  { Hexagon::VF25, 1000024U },
  { Hexagon::VF26, 1000025U },
  { Hexagon::VF27, 1000026U },
  { Hexagon::VF28, 1000027U },
  { Hexagon::VF29, 1000028U },
  { Hexagon::VF30, 1000029U },
  { Hexagon::VF31, 1000030U },
  { Hexagon::VFR0, 9999999U },
  { Hexagon::VFR1, 10000000U },
  { Hexagon::VFR2, 10000001U },
  { Hexagon::VFR3, 10000002U },
  { Hexagon::VFR4, 10000003U },
  { Hexagon::VFR5, 10000004U },
  { Hexagon::VFR6, 10000005U },
  { Hexagon::VFR7, 10000006U },
  { Hexagon::VFR8, 10000007U },
  { Hexagon::VFR9, 10000008U },
  { Hexagon::VFR10, 10000009U },
  { Hexagon::VFR11, 10000010U },
  { Hexagon::VFR12, 10000011U },
  { Hexagon::VFR13, 10000012U },
  { Hexagon::VFR14, 10000013U },
  { Hexagon::VFR15, 10000014U },
  { Hexagon::VFR16, 10000015U },
  { Hexagon::VFR17, 10000016U },
  { Hexagon::VFR18, 10000017U },
  { Hexagon::VFR19, 10000018U },
  { Hexagon::VFR20, 10000019U },
  { Hexagon::VFR21, 10000020U },
  { Hexagon::VFR22, 10000021U },
  { Hexagon::VFR23, 10000022U },
  { Hexagon::VFR24, 10000023U },
  { Hexagon::VFR25, 10000024U },
  { Hexagon::VFR26, 10000025U },
  { Hexagon::VFR27, 10000026U },
  { Hexagon::VFR28, 10000027U },
  { Hexagon::VFR29, 10000028U },
  { Hexagon::VFR30, 10000029U },
  { Hexagon::VFR31, 10000030U },
  { Hexagon::VQ0, 252U },
  { Hexagon::VQ1, 253U },
  { Hexagon::VQ2, 254U },
  { Hexagon::VQ3, 255U },
  { Hexagon::VQ4, 256U },
  { Hexagon::VQ5, 257U },
  { Hexagon::VQ6, 258U },
  { Hexagon::VQ7, 259U },
  { Hexagon::W0, 99U },
  { Hexagon::W1, 101U },
  { Hexagon::W2, 103U },
  { Hexagon::W3, 105U },
  { Hexagon::W4, 107U },
  { Hexagon::W5, 109U },
  { Hexagon::W6, 111U },
  { Hexagon::W7, 113U },
  { Hexagon::W8, 115U },
  { Hexagon::W9, 117U },
  { Hexagon::W10, 119U },
  { Hexagon::W11, 121U },
  { Hexagon::W12, 123U },
  { Hexagon::W13, 125U },
  { Hexagon::W14, 127U },
  { Hexagon::W15, 129U },
  { Hexagon::WR0, 161U },
  { Hexagon::WR1, 162U },
  { Hexagon::WR2, 163U },
  { Hexagon::WR3, 164U },
  { Hexagon::WR4, 165U },
  { Hexagon::WR5, 166U },
  { Hexagon::WR6, 167U },
  { Hexagon::WR7, 168U },
  { Hexagon::WR8, 169U },
  { Hexagon::WR9, 170U },
  { Hexagon::WR10, 171U },
  { Hexagon::WR11, 172U },
  { Hexagon::WR12, 173U },
  { Hexagon::WR13, 174U },
  { Hexagon::WR14, 175U },
  { Hexagon::WR15, 176U },
  { Hexagon::C1_0, 67U },
  { Hexagon::C3_2, 69U },
  { Hexagon::C5_4, 71U },
  { Hexagon::C7_6, 72U },
  { Hexagon::C9_8, 74U },
  { Hexagon::C11_10, 76U },
  { Hexagon::C17_16, 83U },
  { Hexagon::G1_0, 220U },
  { Hexagon::G3_2, 222U },
  { Hexagon::G5_4, 224U },
  { Hexagon::G7_6, 226U },
  { Hexagon::G9_8, 228U },
  { Hexagon::G11_10, 230U },
  { Hexagon::G13_12, 232U },
  { Hexagon::G15_14, 234U },
  { Hexagon::G17_16, 236U },
  { Hexagon::G19_18, 238U },
  { Hexagon::G21_20, 240U },
  { Hexagon::G23_22, 242U },
  { Hexagon::G25_24, 244U },
  { Hexagon::G27_26, 246U },
  { Hexagon::G29_28, 248U },
  { Hexagon::G31_30, 250U },
  { Hexagon::P3_0, 71U },
};
extern const unsigned HexagonDwarfFlavour0L2DwarfSize = array_lengthof(HexagonDwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0L2Dwarf[] = {
  { Hexagon::CS, 78U },
  { Hexagon::FRAMEKEY, 84U },
  { Hexagon::FRAMELIMIT, 83U },
  { Hexagon::GELR, 220U },
  { Hexagon::GOSP, 222U },
  { Hexagon::GP, 78U },
  { Hexagon::GPCYCLEHI, 245U },
  { Hexagon::GPCYCLELO, 244U },
  { Hexagon::GSR, 221U },
  { Hexagon::PC, 76U },
  { Hexagon::PKTCOUNT, 85U },
  { Hexagon::PKTCOUNTHI, 86U },
  { Hexagon::PKTCOUNTLO, 85U },
  { Hexagon::UGP, 77U },
  { Hexagon::UPCYCLE, 80U },
  { Hexagon::UPCYCLEHI, 82U },
  { Hexagon::UPCYCLELO, 81U },
  { Hexagon::USR, 75U },
  { Hexagon::UTIMER, 97U },
  { Hexagon::UTIMERHI, 98U },
  { Hexagon::UTIMERLO, 97U },
  { Hexagon::VTMP, 131U },
  { Hexagon::C5, 72U },
  { Hexagon::C8, 75U },
  { Hexagon::CS0, 79U },
  { Hexagon::CS1, 80U },
  { Hexagon::D0, 32U },
  { Hexagon::D1, 34U },
  { Hexagon::D2, 36U },
  { Hexagon::D3, 38U },
  { Hexagon::D4, 40U },
  { Hexagon::D5, 42U },
  { Hexagon::D6, 44U },
  { Hexagon::D7, 46U },
  { Hexagon::D8, 48U },
  { Hexagon::D9, 50U },
  { Hexagon::D10, 52U },
  { Hexagon::D11, 54U },
  { Hexagon::D12, 56U },
  { Hexagon::D13, 58U },
  { Hexagon::D14, 60U },
  { Hexagon::D15, 62U },
  { Hexagon::G3, 223U },
  { Hexagon::G4, 224U },
  { Hexagon::G5, 225U },
  { Hexagon::G6, 226U },
  { Hexagon::G7, 227U },
  { Hexagon::G8, 228U },
  { Hexagon::G9, 229U },
  { Hexagon::G10, 230U },
  { Hexagon::G11, 231U },
  { Hexagon::G12, 232U },
  { Hexagon::G13, 233U },
  { Hexagon::G14, 234U },
  { Hexagon::G15, 235U },
  { Hexagon::G20, 240U },
  { Hexagon::G21, 241U },
  { Hexagon::G22, 242U },
  { Hexagon::G23, 243U },
  { Hexagon::G30, 250U },
  { Hexagon::G31, 251U },
  { Hexagon::GPMUCNT0, 246U },
  { Hexagon::GPMUCNT1, 247U },
  { Hexagon::GPMUCNT2, 248U },
  { Hexagon::GPMUCNT3, 249U },
  { Hexagon::GPMUCNT4, 236U },
  { Hexagon::GPMUCNT5, 237U },
  { Hexagon::GPMUCNT6, 238U },
  { Hexagon::GPMUCNT7, 239U },
  { Hexagon::LC0, 68U },
  { Hexagon::LC1, 70U },
  { Hexagon::M0, 73U },
  { Hexagon::M1, 74U },
  { Hexagon::P0, 63U },
  { Hexagon::P1, 64U },
  { Hexagon::P2, 65U },
  { Hexagon::P3, 66U },
  { Hexagon::Q0, 131U },
  { Hexagon::Q1, 132U },
  { Hexagon::Q2, 133U },
  { Hexagon::Q3, 134U },
  { Hexagon::R0, 0U },
  { Hexagon::R1, 1U },
  { Hexagon::R2, 2U },
  { Hexagon::R3, 3U },
  { Hexagon::R4, 4U },
  { Hexagon::R5, 5U },
  { Hexagon::R6, 6U },
  { Hexagon::R7, 7U },
  { Hexagon::R8, 8U },
  { Hexagon::R9, 9U },
  { Hexagon::R10, 10U },
  { Hexagon::R11, 11U },
  { Hexagon::R12, 12U },
  { Hexagon::R13, 13U },
  { Hexagon::R14, 14U },
  { Hexagon::R15, 15U },
  { Hexagon::R16, 16U },
  { Hexagon::R17, 17U },
  { Hexagon::R18, 18U },
  { Hexagon::R19, 19U },
  { Hexagon::R20, 20U },
  { Hexagon::R21, 21U },
  { Hexagon::R22, 22U },
  { Hexagon::R23, 23U },
  { Hexagon::R24, 24U },
  { Hexagon::R25, 25U },
  { Hexagon::R26, 26U },
  { Hexagon::R27, 27U },
  { Hexagon::R28, 28U },
  { Hexagon::R29, 29U },
  { Hexagon::R30, 30U },
  { Hexagon::R31, 31U },
  { Hexagon::SA0, 67U },
  { Hexagon::SA1, 69U },
  { Hexagon::V0, 99U },
  { Hexagon::V1, 100U },
  { Hexagon::V2, 101U },
  { Hexagon::V3, 102U },
  { Hexagon::V4, 103U },
  { Hexagon::V5, 104U },
  { Hexagon::V6, 105U },
  { Hexagon::V7, 106U },
  { Hexagon::V8, 107U },
  { Hexagon::V9, 108U },
  { Hexagon::V10, 109U },
  { Hexagon::V11, 110U },
  { Hexagon::V12, 111U },
  { Hexagon::V13, 112U },
  { Hexagon::V14, 113U },
  { Hexagon::V15, 114U },
  { Hexagon::V16, 115U },
  { Hexagon::V17, 116U },
  { Hexagon::V18, 117U },
  { Hexagon::V19, 118U },
  { Hexagon::V20, 119U },
  { Hexagon::V21, 120U },
  { Hexagon::V22, 121U },
  { Hexagon::V23, 122U },
  { Hexagon::V24, 123U },
  { Hexagon::V25, 124U },
  { Hexagon::V26, 125U },
  { Hexagon::V27, 126U },
  { Hexagon::V28, 127U },
  { Hexagon::V29, 128U },
  { Hexagon::V30, 129U },
  { Hexagon::V31, 130U },
  { Hexagon::VF0, 999999U },
  { Hexagon::VF1, 1000000U },
  { Hexagon::VF2, 1000001U },
  { Hexagon::VF3, 1000002U },
  { Hexagon::VF4, 1000003U },
  { Hexagon::VF5, 1000004U },
  { Hexagon::VF6, 1000005U },
  { Hexagon::VF7, 1000006U },
  { Hexagon::VF8, 1000007U },
  { Hexagon::VF9, 1000008U },
  { Hexagon::VF10, 1000009U },
  { Hexagon::VF11, 1000010U },
  { Hexagon::VF12, 1000011U },
  { Hexagon::VF13, 1000012U },
  { Hexagon::VF14, 1000013U },
  { Hexagon::VF15, 1000014U },
  { Hexagon::VF16, 1000015U },
  { Hexagon::VF17, 1000016U },
  { Hexagon::VF18, 1000017U },
  { Hexagon::VF19, 1000018U },
  { Hexagon::VF20, 1000019U },
  { Hexagon::VF21, 1000020U },
  { Hexagon::VF22, 1000021U },
  { Hexagon::VF23, 1000022U },
  { Hexagon::VF24, 1000023U },
  { Hexagon::VF25, 1000024U },
  { Hexagon::VF26, 1000025U },
  { Hexagon::VF27, 1000026U },
  { Hexagon::VF28, 1000027U },
  { Hexagon::VF29, 1000028U },
  { Hexagon::VF30, 1000029U },
  { Hexagon::VF31, 1000030U },
  { Hexagon::VFR0, 9999999U },
  { Hexagon::VFR1, 10000000U },
  { Hexagon::VFR2, 10000001U },
  { Hexagon::VFR3, 10000002U },
  { Hexagon::VFR4, 10000003U },
  { Hexagon::VFR5, 10000004U },
  { Hexagon::VFR6, 10000005U },
  { Hexagon::VFR7, 10000006U },
  { Hexagon::VFR8, 10000007U },
  { Hexagon::VFR9, 10000008U },
  { Hexagon::VFR10, 10000009U },
  { Hexagon::VFR11, 10000010U },
  { Hexagon::VFR12, 10000011U },
  { Hexagon::VFR13, 10000012U },
  { Hexagon::VFR14, 10000013U },
  { Hexagon::VFR15, 10000014U },
  { Hexagon::VFR16, 10000015U },
  { Hexagon::VFR17, 10000016U },
  { Hexagon::VFR18, 10000017U },
  { Hexagon::VFR19, 10000018U },
  { Hexagon::VFR20, 10000019U },
  { Hexagon::VFR21, 10000020U },
  { Hexagon::VFR22, 10000021U },
  { Hexagon::VFR23, 10000022U },
  { Hexagon::VFR24, 10000023U },
  { Hexagon::VFR25, 10000024U },
  { Hexagon::VFR26, 10000025U },
  { Hexagon::VFR27, 10000026U },
  { Hexagon::VFR28, 10000027U },
  { Hexagon::VFR29, 10000028U },
  { Hexagon::VFR30, 10000029U },
  { Hexagon::VFR31, 10000030U },
  { Hexagon::VQ0, 252U },
  { Hexagon::VQ1, 253U },
  { Hexagon::VQ2, 254U },
  { Hexagon::VQ3, 255U },
  { Hexagon::VQ4, 256U },
  { Hexagon::VQ5, 257U },
  { Hexagon::VQ6, 258U },
  { Hexagon::VQ7, 259U },
  { Hexagon::W0, 99U },
  { Hexagon::W1, 101U },
  { Hexagon::W2, 103U },
  { Hexagon::W3, 105U },
  { Hexagon::W4, 107U },
  { Hexagon::W5, 109U },
  { Hexagon::W6, 111U },
  { Hexagon::W7, 113U },
  { Hexagon::W8, 115U },
  { Hexagon::W9, 117U },
  { Hexagon::W10, 119U },
  { Hexagon::W11, 121U },
  { Hexagon::W12, 123U },
  { Hexagon::W13, 125U },
  { Hexagon::W14, 127U },
  { Hexagon::W15, 129U },
  { Hexagon::WR0, 161U },
  { Hexagon::WR1, 162U },
  { Hexagon::WR2, 163U },
  { Hexagon::WR3, 164U },
  { Hexagon::WR4, 165U },
  { Hexagon::WR5, 166U },
  { Hexagon::WR6, 167U },
  { Hexagon::WR7, 168U },
  { Hexagon::WR8, 169U },
  { Hexagon::WR9, 170U },
  { Hexagon::WR10, 171U },
  { Hexagon::WR11, 172U },
  { Hexagon::WR12, 173U },
  { Hexagon::WR13, 174U },
  { Hexagon::WR14, 175U },
  { Hexagon::WR15, 176U },
  { Hexagon::C1_0, 67U },
  { Hexagon::C3_2, 69U },
  { Hexagon::C5_4, 71U },
  { Hexagon::C7_6, 72U },
  { Hexagon::C9_8, 74U },
  { Hexagon::C11_10, 76U },
  { Hexagon::C17_16, 83U },
  { Hexagon::G1_0, 220U },
  { Hexagon::G3_2, 222U },
  { Hexagon::G5_4, 224U },
  { Hexagon::G7_6, 226U },
  { Hexagon::G9_8, 228U },
  { Hexagon::G11_10, 230U },
  { Hexagon::G13_12, 232U },
  { Hexagon::G15_14, 234U },
  { Hexagon::G17_16, 236U },
  { Hexagon::G19_18, 238U },
  { Hexagon::G21_20, 240U },
  { Hexagon::G23_22, 242U },
  { Hexagon::G25_24, 244U },
  { Hexagon::G27_26, 246U },
  { Hexagon::G29_28, 248U },
  { Hexagon::G31_30, 250U },
  { Hexagon::P3_0, 71U },
};
extern const unsigned HexagonEHFlavour0L2DwarfSize = array_lengthof(HexagonEHFlavour0L2Dwarf);

extern const uint16_t HexagonRegEncodingTable[] = {
  0,
  12,
  17,
  16,
  0,
  2,
  11,
  25,
  24,
  1,
  9,
  18,
  19,
  18,
  10,
  14,
  15,
  14,
  8,
  0,
  30,
  31,
  30,
  0,
  5,
  8,
  12,
  13,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
  28,
  30,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  20,
  21,
  22,
  23,
  30,
  31,
  26,
  27,
  28,
  29,
  16,
  17,
  18,
  19,
  1,
  3,
  6,
  7,
  0,
  1,
  2,
  3,
  0,
  1,
  2,
  3,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  2,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  4,
  8,
  12,
  16,
  20,
  24,
  28,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
  28,
  30,
  1,
  3,
  5,
  7,
  9,
  11,
  13,
  15,
  17,
  19,
  21,
  23,
  25,
  27,
  29,
  31,
  0,
  2,
  4,
  6,
  8,
  10,
  16,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
  28,
  30,
  4,
};
static inline void InitHexagonMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(HexagonRegDesc, 277, RA, PC, HexagonMCRegisterClasses, 27, HexagonRegUnitRoots, 191, HexagonRegDiffLists, HexagonLaneMaskLists, HexagonRegStrings, HexagonRegClassStrings, HexagonSubRegIdxLists, 12,
HexagonSubRegIdxRanges, HexagonRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(HexagonDwarfFlavour0Dwarf2L, HexagonDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(HexagonEHFlavour0Dwarf2L, HexagonEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(HexagonDwarfFlavour0L2Dwarf, HexagonDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(HexagonEHFlavour0L2Dwarf, HexagonEHFlavour0L2DwarfSize, true);
    break;
  }
}

} // end namespace llvm

#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Information Header Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER

#include "llvm/CodeGen/TargetRegisterInfo.h"

namespace llvm {

class HexagonFrameLowering;

struct HexagonGenRegisterInfo : public TargetRegisterInfo {
  explicit HexagonGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
      unsigned PC = 0, unsigned HwMode = 0);
  unsigned composeSubRegIndicesImpl(unsigned, unsigned) const override;
  LaneBitmask composeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  LaneBitmask reverseComposeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass *, unsigned) const override;
  const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const override;
  unsigned getRegUnitWeight(unsigned RegUnit) const override;
  unsigned getNumRegPressureSets() const override;
  const char *getRegPressureSetName(unsigned Idx) const override;
  unsigned getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const override;
  const int *getRegClassPressureSets(const TargetRegisterClass *RC) const override;
  const int *getRegUnitPressureSets(unsigned RegUnit) const override;
  ArrayRef<const char *> getRegMaskNames() const override;
  ArrayRef<const uint32_t *> getRegMasks() const override;
  /// Devirtualized TargetFrameLowering.
  static const HexagonFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace Hexagon { // Register classes
  extern const TargetRegisterClass UsrBitsRegClass;
  extern const TargetRegisterClass GuestRegsRegClass;
  extern const TargetRegisterClass IntRegsRegClass;
  extern const TargetRegisterClass CtrRegsRegClass;
  extern const TargetRegisterClass GeneralSubRegsRegClass;
  extern const TargetRegisterClass V62RegsRegClass;
  extern const TargetRegisterClass IntRegsLow8RegClass;
  extern const TargetRegisterClass CtrRegs_and_V62RegsRegClass;
  extern const TargetRegisterClass PredRegsRegClass;
  extern const TargetRegisterClass V62Regs_with_isub_hiRegClass;
  extern const TargetRegisterClass ModRegsRegClass;
  extern const TargetRegisterClass CtrRegs_with_subreg_overflowRegClass;
  extern const TargetRegisterClass V65RegsRegClass;
  extern const TargetRegisterClass DoubleRegsRegClass;
  extern const TargetRegisterClass GuestRegs64RegClass;
  extern const TargetRegisterClass VectRegRevRegClass;
  extern const TargetRegisterClass CtrRegs64RegClass;
  extern const TargetRegisterClass GeneralDoubleLow8RegsRegClass;
  extern const TargetRegisterClass DoubleRegs_with_isub_hi_in_IntRegsLow8RegClass;
  extern const TargetRegisterClass CtrRegs64_and_V62RegsRegClass;
  extern const TargetRegisterClass CtrRegs64_with_isub_hi_in_ModRegsRegClass;
  extern const TargetRegisterClass HvxQRRegClass;
  extern const TargetRegisterClass HvxVRRegClass;
  extern const TargetRegisterClass HvxVR_and_V65RegsRegClass;
  extern const TargetRegisterClass HvxWRRegClass;
  extern const TargetRegisterClass HvxWR_and_VectRegRevRegClass;
  extern const TargetRegisterClass HvxVQRRegClass;
} // end namespace Hexagon

} // end namespace llvm

#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register and Register Classes Information                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC

namespace llvm {

extern const MCRegisterClass HexagonMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i1, MVT::Other,
  /* 2 */ MVT::i1, MVT::v2i1, MVT::v4i1, MVT::v8i1, MVT::v4i8, MVT::v2i16, MVT::i32, MVT::Other,
  /* 10 */ MVT::i64, MVT::Other,
  /* 12 */ MVT::v64i1, MVT::v64i1, MVT::v32i1, MVT::v16i1, MVT::Other,
  /* 17 */ MVT::v128i1, MVT::v128i1, MVT::v64i1, MVT::v32i1, MVT::Other,
  /* 22 */ MVT::i32, MVT::f32, MVT::v4i8, MVT::v2i16, MVT::Other,
  /* 27 */ MVT::i64, MVT::f64, MVT::v8i8, MVT::v4i16, MVT::v2i32, MVT::Other,
  /* 33 */ MVT::v64i8, MVT::v32i16, MVT::v16i32, MVT::Other,
  /* 37 */ MVT::v128i8, MVT::v64i16, MVT::v32i32, MVT::Other,
  /* 41 */ MVT::v256i8, MVT::v128i16, MVT::v64i32, MVT::Other,
  /* 45 */ MVT::Untyped, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "isub_hi", "isub_lo", "subreg_overflow", "vsub_fake", "vsub_hi", "vsub_lo", "wsub_hi", "wsub_lo", "wsub_hi_then_vsub_fake", "wsub_hi_then_vsub_hi", "wsub_hi_then_vsub_lo", "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x0000000000000001), // isub_hi
  LaneBitmask(0x0000000000000002), // isub_lo
  LaneBitmask(0x0000000000000004), // subreg_overflow
  LaneBitmask(0x0000000000000008), // vsub_fake
  LaneBitmask(0x0000000000000010), // vsub_hi
  LaneBitmask(0x0000000000000020), // vsub_lo
  LaneBitmask(0x00000000000001C0), // wsub_hi
  LaneBitmask(0x0000000000000038), // wsub_lo
  LaneBitmask(0x0000000000000040), // wsub_hi_then_vsub_fake
  LaneBitmask(0x0000000000000080), // wsub_hi_then_vsub_hi
  LaneBitmask(0x0000000000000100), // wsub_hi_then_vsub_lo
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 1, 1, 0, VTLists+0 },    // UsrBits
  { 32, 32, 32, VTLists+8 },    // GuestRegs
  { 32, 32, 32, VTLists+22 },    // IntRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs
  { 32, 32, 32, VTLists+8 },    // GeneralSubRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs
  { 32, 32, 32, VTLists+8 },    // IntRegsLow8
  { 32, 32, 32, VTLists+8 },    // CtrRegs_and_V62Regs
  { 32, 32, 32, VTLists+2 },    // PredRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs_with_isub_hi
  { 32, 32, 32, VTLists+8 },    // ModRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs_with_subreg_overflow
  { 32, 32, 32, VTLists+8 },    // V65Regs
  { 64, 64, 64, VTLists+27 },    // DoubleRegs
  { 64, 64, 64, VTLists+10 },    // GuestRegs64
  { 64, 64, 64, VTLists+10 },    // VectRegRev
  { 64, 64, 64, VTLists+10 },    // CtrRegs64
  { 64, 64, 64, VTLists+10 },    // GeneralDoubleLow8Regs
  { 64, 64, 64, VTLists+10 },    // DoubleRegs_with_isub_hi_in_IntRegsLow8
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_and_V62Regs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_with_isub_hi_in_ModRegs
  { 64, 512, 512, VTLists+12 },    // HvxQR
  { 512, 512, 512, VTLists+33 },    // HvxVR
  { 512, 512, 512, VTLists+33 },    // HvxVR_and_V65Regs
  { 1024, 1024, 1024, VTLists+37 },    // HvxWR
  { 1024, 1024, 1024, VTLists+37 },    // HvxWR_and_VectRegRev
  { 2048, 2048, 2048, VTLists+45 },    // HvxVQR
  // Mode = 1 (Hvx128)
  { 1, 1, 0, VTLists+0 },    // UsrBits
  { 32, 32, 32, VTLists+8 },    // GuestRegs
  { 32, 32, 32, VTLists+22 },    // IntRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs
  { 32, 32, 32, VTLists+8 },    // GeneralSubRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs
  { 32, 32, 32, VTLists+8 },    // IntRegsLow8
  { 32, 32, 32, VTLists+8 },    // CtrRegs_and_V62Regs
  { 32, 32, 32, VTLists+2 },    // PredRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs_with_isub_hi
  { 32, 32, 32, VTLists+8 },    // ModRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs_with_subreg_overflow
  { 32, 32, 32, VTLists+8 },    // V65Regs
  { 64, 64, 64, VTLists+27 },    // DoubleRegs
  { 64, 64, 64, VTLists+10 },    // GuestRegs64
  { 64, 64, 64, VTLists+10 },    // VectRegRev
  { 64, 64, 64, VTLists+10 },    // CtrRegs64
  { 64, 64, 64, VTLists+10 },    // GeneralDoubleLow8Regs
  { 64, 64, 64, VTLists+10 },    // DoubleRegs_with_isub_hi_in_IntRegsLow8
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_and_V62Regs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_with_isub_hi_in_ModRegs
  { 128, 1024, 1024, VTLists+17 },    // HvxQR
  { 1024, 1024, 1024, VTLists+37 },    // HvxVR
  { 1024, 1024, 1024, VTLists+37 },    // HvxVR_and_V65Regs
  { 2048, 2048, 2048, VTLists+41 },    // HvxWR
  { 2048, 2048, 2048, VTLists+41 },    // HvxWR_and_VectRegRev
  { 4096, 4096, 4096, VTLists+45 },    // HvxVQR
  // Mode = 2 (Hvx64)
  { 1, 1, 0, VTLists+0 },    // UsrBits
  { 32, 32, 32, VTLists+8 },    // GuestRegs
  { 32, 32, 32, VTLists+22 },    // IntRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs
  { 32, 32, 32, VTLists+8 },    // GeneralSubRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs
  { 32, 32, 32, VTLists+8 },    // IntRegsLow8
  { 32, 32, 32, VTLists+8 },    // CtrRegs_and_V62Regs
  { 32, 32, 32, VTLists+2 },    // PredRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs_with_isub_hi
  { 32, 32, 32, VTLists+8 },    // ModRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs_with_subreg_overflow
  { 32, 32, 32, VTLists+8 },    // V65Regs
  { 64, 64, 64, VTLists+27 },    // DoubleRegs
  { 64, 64, 64, VTLists+10 },    // GuestRegs64
  { 64, 64, 64, VTLists+10 },    // VectRegRev
  { 64, 64, 64, VTLists+10 },    // CtrRegs64
  { 64, 64, 64, VTLists+10 },    // GeneralDoubleLow8Regs
  { 64, 64, 64, VTLists+10 },    // DoubleRegs_with_isub_hi_in_IntRegsLow8
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_and_V62Regs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_with_isub_hi_in_ModRegs
  { 64, 512, 512, VTLists+12 },    // HvxQR
  { 512, 512, 512, VTLists+33 },    // HvxVR
  { 512, 512, 512, VTLists+33 },    // HvxVR_and_V65Regs
  { 1024, 1024, 1024, VTLists+37 },    // HvxWR
  { 1024, 1024, 1024, VTLists+37 },    // HvxWR_and_VectRegRev
  { 2048, 2048, 2048, VTLists+45 },    // HvxVQR
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t UsrBitsSubClassMask[] = {
  0x00000001, 
  0x00000800, // subreg_overflow
};

static const uint32_t GuestRegsSubClassMask[] = {
  0x00000002, 
  0x00004000, // isub_hi
  0x00004000, // isub_lo
};

static const uint32_t IntRegsSubClassMask[] = {
  0x00000054, 
  0x00062000, // isub_hi
  0x00062000, // isub_lo
};

static const uint32_t CtrRegsSubClassMask[] = {
  0x00000c88, 
  0x00190200, // isub_hi
  0x00190200, // isub_lo
};

static const uint32_t GeneralSubRegsSubClassMask[] = {
  0x00000050, 
  0x00060000, // isub_hi
  0x00060000, // isub_lo
};

static const uint32_t V62RegsSubClassMask[] = {
  0x000802a0, 
  0x00080200, // isub_hi
  0x00080200, // isub_lo
};

static const uint32_t IntRegsLow8SubClassMask[] = {
  0x00000040, 
  0x00040000, // isub_hi
  0x00040000, // isub_lo
};

static const uint32_t CtrRegs_and_V62RegsSubClassMask[] = {
  0x00000080, 
  0x00080200, // isub_hi
  0x00080200, // isub_lo
};

static const uint32_t PredRegsSubClassMask[] = {
  0x00000100, 
};

static const uint32_t V62Regs_with_isub_hiSubClassMask[] = {
  0x00080200, 
};

static const uint32_t ModRegsSubClassMask[] = {
  0x00000400, 
  0x00100000, // isub_hi
  0x00100000, // isub_lo
};

static const uint32_t CtrRegs_with_subreg_overflowSubClassMask[] = {
  0x00000800, 
};

static const uint32_t V65RegsSubClassMask[] = {
  0x00801000, 
};

static const uint32_t DoubleRegsSubClassMask[] = {
  0x00062000, 
};

static const uint32_t GuestRegs64SubClassMask[] = {
  0x00004000, 
};

static const uint32_t VectRegRevSubClassMask[] = {
  0x02008000, 
};

static const uint32_t CtrRegs64SubClassMask[] = {
  0x00190000, 
};

static const uint32_t GeneralDoubleLow8RegsSubClassMask[] = {
  0x00060000, 
};

static const uint32_t DoubleRegs_with_isub_hi_in_IntRegsLow8SubClassMask[] = {
  0x00040000, 
};

static const uint32_t CtrRegs64_and_V62RegsSubClassMask[] = {
  0x00080000, 
};

static const uint32_t CtrRegs64_with_isub_hi_in_ModRegsSubClassMask[] = {
  0x00100000, 
};

static const uint32_t HvxQRSubClassMask[] = {
  0x00200000, 
};

static const uint32_t HvxVRSubClassMask[] = {
  0x00c00000, 
  0x07008000, // vsub_hi
  0x07008000, // vsub_lo
  0x04000000, // wsub_hi_then_vsub_hi
  0x04000000, // wsub_hi_then_vsub_lo
};

static const uint32_t HvxVR_and_V65RegsSubClassMask[] = {
  0x00800000, 
};

static const uint32_t HvxWRSubClassMask[] = {
  0x03000000, 
  0x04000000, // wsub_hi
  0x04000000, // wsub_lo
};

static const uint32_t HvxWR_and_VectRegRevSubClassMask[] = {
  0x02000000, 
};

static const uint32_t HvxVQRSubClassMask[] = {
  0x04000000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 2, 0,
  /* 3 */ 3, 0,
  /* 5 */ 7, 8, 0,
  /* 8 */ 5, 6, 10, 11, 0,
};

static const TargetRegisterClass *const GeneralSubRegsSuperclasses[] = {
  &Hexagon::IntRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const IntRegsLow8Superclasses[] = {
  &Hexagon::IntRegsRegClass,
  &Hexagon::GeneralSubRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const CtrRegs_and_V62RegsSuperclasses[] = {
  &Hexagon::CtrRegsRegClass,
  &Hexagon::V62RegsRegClass,
  nullptr
};

static const TargetRegisterClass *const V62Regs_with_isub_hiSuperclasses[] = {
  &Hexagon::V62RegsRegClass,
  nullptr
};

static const TargetRegisterClass *const ModRegsSuperclasses[] = {
  &Hexagon::CtrRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const CtrRegs_with_subreg_overflowSuperclasses[] = {
  &Hexagon::CtrRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const GeneralDoubleLow8RegsSuperclasses[] = {
  &Hexagon::DoubleRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const DoubleRegs_with_isub_hi_in_IntRegsLow8Superclasses[] = {
  &Hexagon::DoubleRegsRegClass,
  &Hexagon::GeneralDoubleLow8RegsRegClass,
  nullptr
};

static const TargetRegisterClass *const CtrRegs64_and_V62RegsSuperclasses[] = {
  &Hexagon::V62RegsRegClass,
  &Hexagon::V62Regs_with_isub_hiRegClass,
  &Hexagon::CtrRegs64RegClass,
  nullptr
};

static const TargetRegisterClass *const CtrRegs64_with_isub_hi_in_ModRegsSuperclasses[] = {
  &Hexagon::CtrRegs64RegClass,
  nullptr
};

static const TargetRegisterClass *const HvxVR_and_V65RegsSuperclasses[] = {
  &Hexagon::V65RegsRegClass,
  &Hexagon::HvxVRRegClass,
  nullptr
};

static const TargetRegisterClass *const HvxWR_and_VectRegRevSuperclasses[] = {
  &Hexagon::VectRegRevRegClass,
  &Hexagon::HvxWRRegClass,
  nullptr
};


namespace Hexagon {   // Register class instances
  extern const TargetRegisterClass UsrBitsRegClass = {
    &HexagonMCRegisterClasses[UsrBitsRegClassID],
    UsrBitsSubClassMask,
    SuperRegIdxSeqs + 3,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GuestRegsRegClass = {
    &HexagonMCRegisterClasses[GuestRegsRegClassID],
    GuestRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass IntRegsRegClass = {
    &HexagonMCRegisterClasses[IntRegsRegClassID],
    IntRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegsRegClass = {
    &HexagonMCRegisterClasses[CtrRegsRegClassID],
    CtrRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000004),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GeneralSubRegsRegClass = {
    &HexagonMCRegisterClasses[GeneralSubRegsRegClassID],
    GeneralSubRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GeneralSubRegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass V62RegsRegClass = {
    &HexagonMCRegisterClasses[V62RegsRegClassID],
    V62RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass IntRegsLow8RegClass = {
    &HexagonMCRegisterClasses[IntRegsLow8RegClassID],
    IntRegsLow8SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    IntRegsLow8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs_and_V62RegsRegClass = {
    &HexagonMCRegisterClasses[CtrRegs_and_V62RegsRegClassID],
    CtrRegs_and_V62RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    CtrRegs_and_V62RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass PredRegsRegClass = {
    &HexagonMCRegisterClasses[PredRegsRegClassID],
    PredRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass V62Regs_with_isub_hiRegClass = {
    &HexagonMCRegisterClasses[V62Regs_with_isub_hiRegClassID],
    V62Regs_with_isub_hiSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    V62Regs_with_isub_hiSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ModRegsRegClass = {
    &HexagonMCRegisterClasses[ModRegsRegClassID],
    ModRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    ModRegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs_with_subreg_overflowRegClass = {
    &HexagonMCRegisterClasses[CtrRegs_with_subreg_overflowRegClassID],
    CtrRegs_with_subreg_overflowSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000004),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    CtrRegs_with_subreg_overflowSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass V65RegsRegClass = {
    &HexagonMCRegisterClasses[V65RegsRegClassID],
    V65RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DoubleRegsRegClass = {
    &HexagonMCRegisterClasses[DoubleRegsRegClassID],
    DoubleRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GuestRegs64RegClass = {
    &HexagonMCRegisterClasses[GuestRegs64RegClassID],
    GuestRegs64SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VectRegRevRegClass = {
    &HexagonMCRegisterClasses[VectRegRevRegClassID],
    VectRegRevSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000030),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs64RegClass = {
    &HexagonMCRegisterClasses[CtrRegs64RegClassID],
    CtrRegs64SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GeneralDoubleLow8RegsRegClass = {
    &HexagonMCRegisterClasses[GeneralDoubleLow8RegsRegClassID],
    GeneralDoubleLow8RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GeneralDoubleLow8RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DoubleRegs_with_isub_hi_in_IntRegsLow8RegClass = {
    &HexagonMCRegisterClasses[DoubleRegs_with_isub_hi_in_IntRegsLow8RegClassID],
    DoubleRegs_with_isub_hi_in_IntRegsLow8SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DoubleRegs_with_isub_hi_in_IntRegsLow8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs64_and_V62RegsRegClass = {
    &HexagonMCRegisterClasses[CtrRegs64_and_V62RegsRegClassID],
    CtrRegs64_and_V62RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    CtrRegs64_and_V62RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs64_with_isub_hi_in_ModRegsRegClass = {
    &HexagonMCRegisterClasses[CtrRegs64_with_isub_hi_in_ModRegsRegClassID],
    CtrRegs64_with_isub_hi_in_ModRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    CtrRegs64_with_isub_hi_in_ModRegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass HvxQRRegClass = {
    &HexagonMCRegisterClasses[HvxQRRegClassID],
    HvxQRSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass HvxVRRegClass = {
    &HexagonMCRegisterClasses[HvxVRRegClassID],
    HvxVRSubClassMask,
    SuperRegIdxSeqs + 8,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass HvxVR_and_V65RegsRegClass = {
    &HexagonMCRegisterClasses[HvxVR_and_V65RegsRegClassID],
    HvxVR_and_V65RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    HvxVR_and_V65RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass HvxWRRegClass = {
    &HexagonMCRegisterClasses[HvxWRRegClassID],
    HvxWRSubClassMask,
    SuperRegIdxSeqs + 5,
    LaneBitmask(0x0000000000000030),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass HvxWR_and_VectRegRevRegClass = {
    &HexagonMCRegisterClasses[HvxWR_and_VectRegRevRegClassID],
    HvxWR_and_VectRegRevSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000030),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    HvxWR_and_VectRegRevSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass HvxVQRRegClass = {
    &HexagonMCRegisterClasses[HvxVQRRegClassID],
    HvxVQRSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000000000001F8),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

} // end namespace Hexagon

namespace {
  const TargetRegisterClass *const RegisterClasses[] = {
    &Hexagon::UsrBitsRegClass,
    &Hexagon::GuestRegsRegClass,
    &Hexagon::IntRegsRegClass,
    &Hexagon::CtrRegsRegClass,
    &Hexagon::GeneralSubRegsRegClass,
    &Hexagon::V62RegsRegClass,
    &Hexagon::IntRegsLow8RegClass,
    &Hexagon::CtrRegs_and_V62RegsRegClass,
    &Hexagon::PredRegsRegClass,
    &Hexagon::V62Regs_with_isub_hiRegClass,
    &Hexagon::ModRegsRegClass,
    &Hexagon::CtrRegs_with_subreg_overflowRegClass,
    &Hexagon::V65RegsRegClass,
    &Hexagon::DoubleRegsRegClass,
    &Hexagon::GuestRegs64RegClass,
    &Hexagon::VectRegRevRegClass,
    &Hexagon::CtrRegs64RegClass,
    &Hexagon::GeneralDoubleLow8RegsRegClass,
    &Hexagon::DoubleRegs_with_isub_hi_in_IntRegsLow8RegClass,
    &Hexagon::CtrRegs64_and_V62RegsRegClass,
    &Hexagon::CtrRegs64_with_isub_hi_in_ModRegsRegClass,
    &Hexagon::HvxQRRegClass,
    &Hexagon::HvxVRRegClass,
    &Hexagon::HvxVR_and_V65RegsRegClass,
    &Hexagon::HvxWRRegClass,
    &Hexagon::HvxWR_and_VectRegRevRegClass,
    &Hexagon::HvxVQRRegClass,
  };
} // end anonymous namespace

static const uint8_t CostPerUseTable[] = { 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };


static const bool InAllocatableClassTable[] = { 
false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, false, false, false, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, };


static const TargetRegisterInfoDesc HexagonRegInfoDesc = { // Extra Descriptors
CostPerUseTable, 1, InAllocatableClassTable};

unsigned HexagonGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t RowMap[11] = {
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 
  };
  static const uint8_t Rows[2][11] = {
    { 0, 0, 0, Hexagon::wsub_hi_then_vsub_fake, Hexagon::wsub_hi_then_vsub_hi, Hexagon::wsub_hi_then_vsub_lo, 0, 0, 0, 0, 0, },
    { 0, 0, 0, Hexagon::vsub_fake, Hexagon::vsub_hi, Hexagon::vsub_lo, 0, 0, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 11);
  --IdxB; assert(IdxB < 11);
  return Rows[RowMap[IdxA]][IdxB];
}

  struct MaskRolOp {
    LaneBitmask Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp LaneMaskComposeSequences[] = {
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  0 }, { LaneBitmask::getNone(), 0 },   // Sequence 0
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  1 }, { LaneBitmask::getNone(), 0 },   // Sequence 2
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  2 }, { LaneBitmask::getNone(), 0 },   // Sequence 4
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  3 }, { LaneBitmask::getNone(), 0 },   // Sequence 6
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  4 }, { LaneBitmask::getNone(), 0 },   // Sequence 8
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  5 }, { LaneBitmask::getNone(), 0 },   // Sequence 10
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  6 }, { LaneBitmask::getNone(), 0 },   // Sequence 12
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  7 }, { LaneBitmask::getNone(), 0 },   // Sequence 14
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  8 }, { LaneBitmask::getNone(), 0 }  // Sequence 16
  };
  static const MaskRolOp *const CompositeSequences[] = {
    &LaneMaskComposeSequences[0], // to isub_hi
    &LaneMaskComposeSequences[2], // to isub_lo
    &LaneMaskComposeSequences[4], // to subreg_overflow
    &LaneMaskComposeSequences[6], // to vsub_fake
    &LaneMaskComposeSequences[8], // to vsub_hi
    &LaneMaskComposeSequences[10], // to vsub_lo
    &LaneMaskComposeSequences[6], // to wsub_hi
    &LaneMaskComposeSequences[0], // to wsub_lo
    &LaneMaskComposeSequences[12], // to wsub_hi_then_vsub_fake
    &LaneMaskComposeSequences[14], // to wsub_hi_then_vsub_hi
    &LaneMaskComposeSequences[16] // to wsub_hi_then_vsub_lo
  };

LaneBitmask HexagonGenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
  --IdxA; assert(IdxA < 11 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops = CompositeSequences[IdxA]; Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger() & Ops->Mask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M << S) | (M >> (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

LaneBitmask HexagonGenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
  LaneMask &= getSubRegIndexLaneMask(IdxA);
  --IdxA; assert(IdxA < 11 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops = CompositeSequences[IdxA]; Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M >> S) | (M << (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

const TargetRegisterClass *HexagonGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[27][11] = {
    {	// UsrBits
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// GuestRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// IntRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// CtrRegs
      0,	// isub_hi
      0,	// isub_lo
      12,	// subreg_overflow -> CtrRegs_with_subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// GeneralSubRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// V62Regs
      10,	// isub_hi -> V62Regs_with_isub_hi
      10,	// isub_lo -> V62Regs_with_isub_hi
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// IntRegsLow8
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// CtrRegs_and_V62Regs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// PredRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// V62Regs_with_isub_hi
      10,	// isub_hi -> V62Regs_with_isub_hi
      10,	// isub_lo -> V62Regs_with_isub_hi
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// ModRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// CtrRegs_with_subreg_overflow
      0,	// isub_hi
      0,	// isub_lo
      12,	// subreg_overflow -> CtrRegs_with_subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// V65Regs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// DoubleRegs
      14,	// isub_hi -> DoubleRegs
      14,	// isub_lo -> DoubleRegs
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// GuestRegs64
      15,	// isub_hi -> GuestRegs64
      15,	// isub_lo -> GuestRegs64
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// VectRegRev
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      16,	// vsub_hi -> VectRegRev
      16,	// vsub_lo -> VectRegRev
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// CtrRegs64
      17,	// isub_hi -> CtrRegs64
      17,	// isub_lo -> CtrRegs64
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// GeneralDoubleLow8Regs
      18,	// isub_hi -> GeneralDoubleLow8Regs
      18,	// isub_lo -> GeneralDoubleLow8Regs
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// DoubleRegs_with_isub_hi_in_IntRegsLow8
      19,	// isub_hi -> DoubleRegs_with_isub_hi_in_IntRegsLow8
      19,	// isub_lo -> DoubleRegs_with_isub_hi_in_IntRegsLow8
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// CtrRegs64_and_V62Regs
      20,	// isub_hi -> CtrRegs64_and_V62Regs
      20,	// isub_lo -> CtrRegs64_and_V62Regs
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// CtrRegs64_with_isub_hi_in_ModRegs
      21,	// isub_hi -> CtrRegs64_with_isub_hi_in_ModRegs
      21,	// isub_lo -> CtrRegs64_with_isub_hi_in_ModRegs
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// HvxQR
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// HvxVR
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// HvxVR_and_V65Regs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      0,	// vsub_hi
      0,	// vsub_lo
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// HvxWR
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      25,	// vsub_hi -> HvxWR
      25,	// vsub_lo -> HvxWR
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// HvxWR_and_VectRegRev
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      26,	// vsub_hi -> HvxWR_and_VectRegRev
      26,	// vsub_lo -> HvxWR_and_VectRegRev
      0,	// wsub_hi
      0,	// wsub_lo
      0,	// wsub_hi_then_vsub_fake
      0,	// wsub_hi_then_vsub_hi
      0,	// wsub_hi_then_vsub_lo
    },
    {	// HvxVQR
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_fake
      27,	// vsub_hi -> HvxVQR
      27,	// vsub_lo -> HvxVQR
      27,	// wsub_hi -> HvxVQR
      27,	// wsub_lo -> HvxVQR
      0,	// wsub_hi_then_vsub_fake
      27,	// wsub_hi_then_vsub_hi -> HvxVQR
      27,	// wsub_hi_then_vsub_lo -> HvxVQR
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 11 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &HexagonGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {0, 0},  	// UsrBits
    {0, 0},  	// GuestRegs
    {1, 32},  	// IntRegs
    {0, 6},  	// CtrRegs
    {1, 16},  	// GeneralSubRegs
    {0, 0},  	// V62Regs
    {1, 8},  	// IntRegsLow8
    {0, 0},  	// CtrRegs_and_V62Regs
    {1, 4},  	// PredRegs
    {0, 0},  	// V62Regs_with_isub_hi
    {1, 2},  	// ModRegs
    {0, 0},  	// CtrRegs_with_subreg_overflow
    {1, 1},  	// V65Regs
    {2, 32},  	// DoubleRegs
    {0, 0},  	// GuestRegs64
    {2, 32},  	// VectRegRev
    {0, 6},  	// CtrRegs64
    {2, 16},  	// GeneralDoubleLow8Regs
    {2, 8},  	// DoubleRegs_with_isub_hi_in_IntRegsLow8
    {0, 0},  	// CtrRegs64_and_V62Regs
    {2, 2},  	// CtrRegs64_with_isub_hi_in_ModRegs
    {1, 4},  	// HvxQR
    {1, 33},  	// HvxVR
    {1, 1},  	// HvxVR_and_V65Regs
    {2, 32},  	// HvxWR
    {2, 32},  	// HvxWR_and_VectRegRev
    {4, 32},  	// HvxVQR
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned HexagonGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 191 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned HexagonGenRegisterInfo::getNumRegPressureSets() const {
  return 8;
}

// Get the name of this register unit pressure set.
const char *HexagonGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "HvxVR_and_V65Regs",
    "ModRegs",
    "PredRegs",
    "HvxQR",
    "IntRegsLow8",
    "GeneralSubRegs",
    "IntRegs",
    "HvxVR",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned HexagonGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    1,  	// 0: HvxVR_and_V65Regs
    2,  	// 1: ModRegs
    4,  	// 2: PredRegs
    4,  	// 3: HvxQR
    8,  	// 4: IntRegsLow8
    16,  	// 5: GeneralSubRegs
    32,  	// 6: IntRegs
    33,  	// 7: HvxVR
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 1, -1,
  /* 2 */ 2, -1,
  /* 4 */ 3, -1,
  /* 6 */ 4, 5, 6, -1,
  /* 10 */ 0, 7, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int *HexagonGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    1,1,8,1,7,1,6,1,2,1,0,1,1,8,1,11,1,7,6,1,1,4,11,10,11,11,11,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int *HexagonGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 191 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,10,1,6,6,6,6,6,6,6,6,8,8,8,8,8,8,8,8,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,2,2,2,2,4,4,4,4,1,1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc HexagonRegDesc[];
extern const MCPhysReg HexagonRegDiffLists[];
extern const LaneBitmask HexagonLaneMaskLists[];
extern const char HexagonRegStrings[];
extern const char HexagonRegClassStrings[];
extern const MCPhysReg HexagonRegUnitRoots[][2];
extern const uint16_t HexagonSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits HexagonSubRegIdxRanges[];
extern const uint16_t HexagonRegEncodingTable[];
// Hexagon Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0Dwarf2L[];
extern const unsigned HexagonDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0Dwarf2L[];
extern const unsigned HexagonEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0L2Dwarf[];
extern const unsigned HexagonDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0L2Dwarf[];
extern const unsigned HexagonEHFlavour0L2DwarfSize;

HexagonGenRegisterInfo::
HexagonGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(&HexagonRegInfoDesc, RegisterClasses, RegisterClasses+27,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFFFFFFFFFB), RegClassInfos, HwMode) {
  InitMCRegisterInfo(HexagonRegDesc, 277, RA, PC,
                     HexagonMCRegisterClasses, 27,
                     HexagonRegUnitRoots,
                     191,
                     HexagonRegDiffLists,
                     HexagonLaneMaskLists,
                     HexagonRegStrings,
                     HexagonRegClassStrings,
                     HexagonSubRegIdxLists,
                     12,
                     HexagonSubRegIdxRanges,
                     HexagonRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(HexagonDwarfFlavour0Dwarf2L, HexagonDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(HexagonEHFlavour0Dwarf2L, HexagonEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(HexagonDwarfFlavour0L2Dwarf, HexagonDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(HexagonEHFlavour0L2Dwarf, HexagonEHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg HexagonCSR_SaveList[] = { Hexagon::R16, Hexagon::R17, Hexagon::R18, Hexagon::R19, Hexagon::R20, Hexagon::R21, Hexagon::R22, Hexagon::R23, Hexagon::R24, Hexagon::R25, Hexagon::R26, Hexagon::R27, 0 };
static const uint32_t HexagonCSR_RegMask[] = { 0x00000000, 0x000003f0, 0x00000000, 0x00007ff8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };


ArrayRef<const uint32_t *> HexagonGenRegisterInfo::getRegMasks() const {
  static const uint32_t *const Masks[] = {
    HexagonCSR_RegMask,
  };
  return makeArrayRef(Masks);
}

ArrayRef<const char *> HexagonGenRegisterInfo::getRegMaskNames() const {
  static const char *const Names[] = {
    "HexagonCSR",
  };
  return makeArrayRef(Names);
}

const HexagonFrameLowering *
HexagonGenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const HexagonFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC

