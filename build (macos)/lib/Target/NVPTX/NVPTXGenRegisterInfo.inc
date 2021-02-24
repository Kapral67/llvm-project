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
extern const MCRegisterClass NVPTXMCRegisterClasses[];

namespace NVPTX {
enum {
  NoRegister,
  VRDepot = 1,
  VRFrame = 2,
  VRFrameLocal = 3,
  ENVREG0 = 4,
  ENVREG1 = 5,
  ENVREG2 = 6,
  ENVREG3 = 7,
  ENVREG4 = 8,
  ENVREG5 = 9,
  ENVREG6 = 10,
  ENVREG7 = 11,
  ENVREG8 = 12,
  ENVREG9 = 13,
  ENVREG10 = 14,
  ENVREG11 = 15,
  ENVREG12 = 16,
  ENVREG13 = 17,
  ENVREG14 = 18,
  ENVREG15 = 19,
  ENVREG16 = 20,
  ENVREG17 = 21,
  ENVREG18 = 22,
  ENVREG19 = 23,
  ENVREG20 = 24,
  ENVREG21 = 25,
  ENVREG22 = 26,
  ENVREG23 = 27,
  ENVREG24 = 28,
  ENVREG25 = 29,
  ENVREG26 = 30,
  ENVREG27 = 31,
  ENVREG28 = 32,
  ENVREG29 = 33,
  ENVREG30 = 34,
  ENVREG31 = 35,
  F0 = 36,
  F1 = 37,
  F2 = 38,
  F3 = 39,
  F4 = 40,
  FL0 = 41,
  FL1 = 42,
  FL2 = 43,
  FL3 = 44,
  FL4 = 45,
  H0 = 46,
  H1 = 47,
  H2 = 48,
  H3 = 49,
  H4 = 50,
  HH0 = 51,
  HH1 = 52,
  HH2 = 53,
  HH3 = 54,
  HH4 = 55,
  P0 = 56,
  P1 = 57,
  P2 = 58,
  P3 = 59,
  P4 = 60,
  R0 = 61,
  R1 = 62,
  R2 = 63,
  R3 = 64,
  R4 = 65,
  RL0 = 66,
  RL1 = 67,
  RL2 = 68,
  RL3 = 69,
  RL4 = 70,
  RS0 = 71,
  RS1 = 72,
  RS2 = 73,
  RS3 = 74,
  RS4 = 75,
  da0 = 76,
  da1 = 77,
  da2 = 78,
  da3 = 79,
  da4 = 80,
  fa0 = 81,
  fa1 = 82,
  fa2 = 83,
  fa3 = 84,
  fa4 = 85,
  ia0 = 86,
  ia1 = 87,
  ia2 = 88,
  ia3 = 89,
  ia4 = 90,
  la0 = 91,
  la1 = 92,
  la2 = 93,
  la3 = 94,
  la4 = 95,
  NUM_TARGET_REGS // 96
};
} // end namespace NVPTX

// Register classes

namespace NVPTX {
enum {
  Int1RegsRegClassID = 0,
  Float16RegsRegClassID = 1,
  Int16RegsRegClassID = 2,
  SpecialRegsRegClassID = 3,
  Float16x2RegsRegClassID = 4,
  Float32ArgRegsRegClassID = 5,
  Float32RegsRegClassID = 6,
  Int32ArgRegsRegClassID = 7,
  Int32RegsRegClassID = 8,
  Float64ArgRegsRegClassID = 9,
  Float64RegsRegClassID = 10,
  Int64ArgRegsRegClassID = 11,
  Int64RegsRegClassID = 12,

};
} // end namespace NVPTX

// Register pressure sets enum.
namespace NVPTX {
enum RegisterPressureSets {
  Int1Regs = 0,
  Float16Regs = 1,
  Int16Regs = 2,
  Float16x2Regs = 3,
  Float32ArgRegs = 4,
  Float32Regs = 5,
  Int32ArgRegs = 6,
  Int32Regs = 7,
  Float64ArgRegs = 8,
  Float64Regs = 9,
  Int64ArgRegs = 10,
  Int64Regs = 11,
  SpecialRegs = 12,
};
} // end namespace NVPTX

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

extern const MCPhysReg NVPTXRegDiffLists[] = {
  /* 0 */ 65535, 0,
};

extern const LaneBitmask NVPTXLaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x0000000000000000), LaneBitmask::getAll(),
};

extern const uint16_t NVPTXSubRegIdxLists[] = {
  /* 0 */ 0,
};

extern const MCRegisterInfo::SubRegCoveredBits NVPTXSubRegIdxRanges[] = {
  { 65535, 65535 },
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char NVPTXRegStrings[] = {
  /* 0 */ "ENVREG10\0"
  /* 9 */ "ENVREG20\0"
  /* 18 */ "ENVREG30\0"
  /* 27 */ "F0\0"
  /* 30 */ "ENVREG0\0"
  /* 38 */ "HH0\0"
  /* 42 */ "FL0\0"
  /* 46 */ "RL0\0"
  /* 50 */ "P0\0"
  /* 53 */ "R0\0"
  /* 56 */ "RS0\0"
  /* 60 */ "da0\0"
  /* 64 */ "fa0\0"
  /* 68 */ "ia0\0"
  /* 72 */ "la0\0"
  /* 76 */ "ENVREG11\0"
  /* 85 */ "ENVREG21\0"
  /* 94 */ "ENVREG31\0"
  /* 103 */ "F1\0"
  /* 106 */ "ENVREG1\0"
  /* 114 */ "HH1\0"
  /* 118 */ "FL1\0"
  /* 122 */ "RL1\0"
  /* 126 */ "P1\0"
  /* 129 */ "R1\0"
  /* 132 */ "RS1\0"
  /* 136 */ "da1\0"
  /* 140 */ "fa1\0"
  /* 144 */ "ia1\0"
  /* 148 */ "la1\0"
  /* 152 */ "ENVREG12\0"
  /* 161 */ "ENVREG22\0"
  /* 170 */ "F2\0"
  /* 173 */ "ENVREG2\0"
  /* 181 */ "HH2\0"
  /* 185 */ "FL2\0"
  /* 189 */ "RL2\0"
  /* 193 */ "P2\0"
  /* 196 */ "R2\0"
  /* 199 */ "RS2\0"
  /* 203 */ "da2\0"
  /* 207 */ "fa2\0"
  /* 211 */ "ia2\0"
  /* 215 */ "la2\0"
  /* 219 */ "ENVREG13\0"
  /* 228 */ "ENVREG23\0"
  /* 237 */ "F3\0"
  /* 240 */ "ENVREG3\0"
  /* 248 */ "HH3\0"
  /* 252 */ "FL3\0"
  /* 256 */ "RL3\0"
  /* 260 */ "P3\0"
  /* 263 */ "R3\0"
  /* 266 */ "RS3\0"
  /* 270 */ "da3\0"
  /* 274 */ "fa3\0"
  /* 278 */ "ia3\0"
  /* 282 */ "la3\0"
  /* 286 */ "ENVREG14\0"
  /* 295 */ "ENVREG24\0"
  /* 304 */ "F4\0"
  /* 307 */ "ENVREG4\0"
  /* 315 */ "HH4\0"
  /* 319 */ "FL4\0"
  /* 323 */ "RL4\0"
  /* 327 */ "P4\0"
  /* 330 */ "R4\0"
  /* 333 */ "RS4\0"
  /* 337 */ "da4\0"
  /* 341 */ "fa4\0"
  /* 345 */ "ia4\0"
  /* 349 */ "la4\0"
  /* 353 */ "ENVREG15\0"
  /* 362 */ "ENVREG25\0"
  /* 371 */ "ENVREG5\0"
  /* 379 */ "ENVREG16\0"
  /* 388 */ "ENVREG26\0"
  /* 397 */ "ENVREG6\0"
  /* 405 */ "ENVREG17\0"
  /* 414 */ "ENVREG27\0"
  /* 423 */ "ENVREG7\0"
  /* 431 */ "ENVREG18\0"
  /* 440 */ "ENVREG28\0"
  /* 449 */ "ENVREG8\0"
  /* 457 */ "ENVREG19\0"
  /* 466 */ "ENVREG29\0"
  /* 475 */ "ENVREG9\0"
  /* 483 */ "VRFrame\0"
  /* 491 */ "VRFrameLocal\0"
  /* 504 */ "VRDepot\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterDesc NVPTXRegDesc[] = { // Descriptors
  { 8, 0, 0, 0, 0, 0 },
  { 504, 1, 1, 0, 1, 0 },
  { 483, 1, 1, 0, 1, 0 },
  { 491, 1, 1, 0, 1, 0 },
  { 30, 1, 1, 0, 1, 0 },
  { 106, 1, 1, 0, 1, 0 },
  { 173, 1, 1, 0, 1, 0 },
  { 240, 1, 1, 0, 1, 0 },
  { 307, 1, 1, 0, 1, 0 },
  { 371, 1, 1, 0, 1, 0 },
  { 397, 1, 1, 0, 1, 0 },
  { 423, 1, 1, 0, 1, 0 },
  { 449, 1, 1, 0, 1, 0 },
  { 475, 1, 1, 0, 1, 0 },
  { 0, 1, 1, 0, 1, 0 },
  { 76, 1, 1, 0, 1, 0 },
  { 152, 1, 1, 0, 1, 0 },
  { 219, 1, 1, 0, 1, 0 },
  { 286, 1, 1, 0, 1, 0 },
  { 353, 1, 1, 0, 1, 0 },
  { 379, 1, 1, 0, 1, 0 },
  { 405, 1, 1, 0, 1, 0 },
  { 431, 1, 1, 0, 1, 0 },
  { 457, 1, 1, 0, 1, 0 },
  { 9, 1, 1, 0, 1, 0 },
  { 85, 1, 1, 0, 1, 0 },
  { 161, 1, 1, 0, 1, 0 },
  { 228, 1, 1, 0, 1, 0 },
  { 295, 1, 1, 0, 1, 0 },
  { 362, 1, 1, 0, 1, 0 },
  { 388, 1, 1, 0, 1, 0 },
  { 414, 1, 1, 0, 1, 0 },
  { 440, 1, 1, 0, 1, 0 },
  { 466, 1, 1, 0, 1, 0 },
  { 18, 1, 1, 0, 1, 0 },
  { 94, 1, 1, 0, 1, 0 },
  { 27, 1, 1, 0, 1, 0 },
  { 103, 1, 1, 0, 1, 0 },
  { 170, 1, 1, 0, 1, 0 },
  { 237, 1, 1, 0, 1, 0 },
  { 304, 1, 1, 0, 1, 0 },
  { 42, 1, 1, 0, 1, 0 },
  { 118, 1, 1, 0, 1, 0 },
  { 185, 1, 1, 0, 1, 0 },
  { 252, 1, 1, 0, 1, 0 },
  { 319, 1, 1, 0, 1, 0 },
  { 39, 1, 1, 0, 1, 0 },
  { 115, 1, 1, 0, 1, 0 },
  { 182, 1, 1, 0, 1, 0 },
  { 249, 1, 1, 0, 1, 0 },
  { 316, 1, 1, 0, 1, 0 },
  { 38, 1, 1, 0, 1, 0 },
  { 114, 1, 1, 0, 1, 0 },
  { 181, 1, 1, 0, 1, 0 },
  { 248, 1, 1, 0, 1, 0 },
  { 315, 1, 1, 0, 1, 0 },
  { 50, 1, 1, 0, 1, 0 },
  { 126, 1, 1, 0, 1, 0 },
  { 193, 1, 1, 0, 1, 0 },
  { 260, 1, 1, 0, 1, 0 },
  { 327, 1, 1, 0, 1, 0 },
  { 53, 1, 1, 0, 1, 0 },
  { 129, 1, 1, 0, 1, 0 },
  { 196, 1, 1, 0, 1, 0 },
  { 263, 1, 1, 0, 1, 0 },
  { 330, 1, 1, 0, 1, 0 },
  { 46, 1, 1, 0, 1, 0 },
  { 122, 1, 1, 0, 1, 0 },
  { 189, 1, 1, 0, 1, 0 },
  { 256, 1, 1, 0, 1, 0 },
  { 323, 1, 1, 0, 1, 0 },
  { 56, 1, 1, 0, 1, 0 },
  { 132, 1, 1, 0, 1, 0 },
  { 199, 1, 1, 0, 1, 0 },
  { 266, 1, 1, 0, 1, 0 },
  { 333, 1, 1, 0, 1, 0 },
  { 60, 1, 1, 0, 1, 0 },
  { 136, 1, 1, 0, 1, 0 },
  { 203, 1, 1, 0, 1, 0 },
  { 270, 1, 1, 0, 1, 0 },
  { 337, 1, 1, 0, 1, 0 },
  { 64, 1, 1, 0, 1, 0 },
  { 140, 1, 1, 0, 1, 0 },
  { 207, 1, 1, 0, 1, 0 },
  { 274, 1, 1, 0, 1, 0 },
  { 341, 1, 1, 0, 1, 0 },
  { 68, 1, 1, 0, 1, 0 },
  { 144, 1, 1, 0, 1, 0 },
  { 211, 1, 1, 0, 1, 0 },
  { 278, 1, 1, 0, 1, 0 },
  { 345, 1, 1, 0, 1, 0 },
  { 72, 1, 1, 0, 1, 0 },
  { 148, 1, 1, 0, 1, 0 },
  { 215, 1, 1, 0, 1, 0 },
  { 282, 1, 1, 0, 1, 0 },
  { 349, 1, 1, 0, 1, 0 },
};

extern const MCPhysReg NVPTXRegUnitRoots[][2] = {
  { NVPTX::VRDepot },
  { NVPTX::VRFrame },
  { NVPTX::VRFrameLocal },
  { NVPTX::ENVREG0 },
  { NVPTX::ENVREG1 },
  { NVPTX::ENVREG2 },
  { NVPTX::ENVREG3 },
  { NVPTX::ENVREG4 },
  { NVPTX::ENVREG5 },
  { NVPTX::ENVREG6 },
  { NVPTX::ENVREG7 },
  { NVPTX::ENVREG8 },
  { NVPTX::ENVREG9 },
  { NVPTX::ENVREG10 },
  { NVPTX::ENVREG11 },
  { NVPTX::ENVREG12 },
  { NVPTX::ENVREG13 },
  { NVPTX::ENVREG14 },
  { NVPTX::ENVREG15 },
  { NVPTX::ENVREG16 },
  { NVPTX::ENVREG17 },
  { NVPTX::ENVREG18 },
  { NVPTX::ENVREG19 },
  { NVPTX::ENVREG20 },
  { NVPTX::ENVREG21 },
  { NVPTX::ENVREG22 },
  { NVPTX::ENVREG23 },
  { NVPTX::ENVREG24 },
  { NVPTX::ENVREG25 },
  { NVPTX::ENVREG26 },
  { NVPTX::ENVREG27 },
  { NVPTX::ENVREG28 },
  { NVPTX::ENVREG29 },
  { NVPTX::ENVREG30 },
  { NVPTX::ENVREG31 },
  { NVPTX::F0 },
  { NVPTX::F1 },
  { NVPTX::F2 },
  { NVPTX::F3 },
  { NVPTX::F4 },
  { NVPTX::FL0 },
  { NVPTX::FL1 },
  { NVPTX::FL2 },
  { NVPTX::FL3 },
  { NVPTX::FL4 },
  { NVPTX::H0 },
  { NVPTX::H1 },
  { NVPTX::H2 },
  { NVPTX::H3 },
  { NVPTX::H4 },
  { NVPTX::HH0 },
  { NVPTX::HH1 },
  { NVPTX::HH2 },
  { NVPTX::HH3 },
  { NVPTX::HH4 },
  { NVPTX::P0 },
  { NVPTX::P1 },
  { NVPTX::P2 },
  { NVPTX::P3 },
  { NVPTX::P4 },
  { NVPTX::R0 },
  { NVPTX::R1 },
  { NVPTX::R2 },
  { NVPTX::R3 },
  { NVPTX::R4 },
  { NVPTX::RL0 },
  { NVPTX::RL1 },
  { NVPTX::RL2 },
  { NVPTX::RL3 },
  { NVPTX::RL4 },
  { NVPTX::RS0 },
  { NVPTX::RS1 },
  { NVPTX::RS2 },
  { NVPTX::RS3 },
  { NVPTX::RS4 },
  { NVPTX::da0 },
  { NVPTX::da1 },
  { NVPTX::da2 },
  { NVPTX::da3 },
  { NVPTX::da4 },
  { NVPTX::fa0 },
  { NVPTX::fa1 },
  { NVPTX::fa2 },
  { NVPTX::fa3 },
  { NVPTX::fa4 },
  { NVPTX::ia0 },
  { NVPTX::ia1 },
  { NVPTX::ia2 },
  { NVPTX::ia3 },
  { NVPTX::ia4 },
  { NVPTX::la0 },
  { NVPTX::la1 },
  { NVPTX::la2 },
  { NVPTX::la3 },
  { NVPTX::la4 },
};

namespace {     // Register classes...
  // Int1Regs Register Class...
  const MCPhysReg Int1Regs[] = {
    NVPTX::P0, NVPTX::P1, NVPTX::P2, NVPTX::P3, NVPTX::P4, 
  };

  // Int1Regs Bit set.
  const uint8_t Int1RegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 
  };

  // Float16Regs Register Class...
  const MCPhysReg Float16Regs[] = {
    NVPTX::H0, NVPTX::H1, NVPTX::H2, NVPTX::H3, NVPTX::H4, 
  };

  // Float16Regs Bit set.
  const uint8_t Float16RegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 
  };

  // Int16Regs Register Class...
  const MCPhysReg Int16Regs[] = {
    NVPTX::RS0, NVPTX::RS1, NVPTX::RS2, NVPTX::RS3, NVPTX::RS4, 
  };

  // Int16Regs Bit set.
  const uint8_t Int16RegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 
  };

  // SpecialRegs Register Class...
  const MCPhysReg SpecialRegs[] = {
    NVPTX::VRFrame, NVPTX::VRFrameLocal, NVPTX::VRDepot, NVPTX::ENVREG0, NVPTX::ENVREG1, NVPTX::ENVREG2, NVPTX::ENVREG3, NVPTX::ENVREG4, NVPTX::ENVREG5, NVPTX::ENVREG6, NVPTX::ENVREG7, NVPTX::ENVREG8, NVPTX::ENVREG9, NVPTX::ENVREG10, NVPTX::ENVREG11, NVPTX::ENVREG12, NVPTX::ENVREG13, NVPTX::ENVREG14, NVPTX::ENVREG15, NVPTX::ENVREG16, NVPTX::ENVREG17, NVPTX::ENVREG18, NVPTX::ENVREG19, NVPTX::ENVREG20, NVPTX::ENVREG21, NVPTX::ENVREG22, NVPTX::ENVREG23, NVPTX::ENVREG24, NVPTX::ENVREG25, NVPTX::ENVREG26, NVPTX::ENVREG27, NVPTX::ENVREG28, NVPTX::ENVREG29, NVPTX::ENVREG30, NVPTX::ENVREG31, 
  };

  // SpecialRegs Bit set.
  const uint8_t SpecialRegsBits[] = {
    0xfe, 0xff, 0xff, 0xff, 0x0f, 
  };

  // Float16x2Regs Register Class...
  const MCPhysReg Float16x2Regs[] = {
    NVPTX::HH0, NVPTX::HH1, NVPTX::HH2, NVPTX::HH3, NVPTX::HH4, 
  };

  // Float16x2Regs Bit set.
  const uint8_t Float16x2RegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 
  };

  // Float32ArgRegs Register Class...
  const MCPhysReg Float32ArgRegs[] = {
    NVPTX::fa0, NVPTX::fa1, NVPTX::fa2, NVPTX::fa3, NVPTX::fa4, 
  };

  // Float32ArgRegs Bit set.
  const uint8_t Float32ArgRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 
  };

  // Float32Regs Register Class...
  const MCPhysReg Float32Regs[] = {
    NVPTX::F0, NVPTX::F1, NVPTX::F2, NVPTX::F3, NVPTX::F4, 
  };

  // Float32Regs Bit set.
  const uint8_t Float32RegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 
  };

  // Int32ArgRegs Register Class...
  const MCPhysReg Int32ArgRegs[] = {
    NVPTX::ia0, NVPTX::ia1, NVPTX::ia2, NVPTX::ia3, NVPTX::ia4, 
  };

  // Int32ArgRegs Bit set.
  const uint8_t Int32ArgRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 
  };

  // Int32Regs Register Class...
  const MCPhysReg Int32Regs[] = {
    NVPTX::R0, NVPTX::R1, NVPTX::R2, NVPTX::R3, NVPTX::R4, 
  };

  // Int32Regs Bit set.
  const uint8_t Int32RegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x03, 
  };

  // Float64ArgRegs Register Class...
  const MCPhysReg Float64ArgRegs[] = {
    NVPTX::da0, NVPTX::da1, NVPTX::da2, NVPTX::da3, NVPTX::da4, 
  };

  // Float64ArgRegs Bit set.
  const uint8_t Float64ArgRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 
  };

  // Float64Regs Register Class...
  const MCPhysReg Float64Regs[] = {
    NVPTX::FL0, NVPTX::FL1, NVPTX::FL2, NVPTX::FL3, NVPTX::FL4, 
  };

  // Float64Regs Bit set.
  const uint8_t Float64RegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 
  };

  // Int64ArgRegs Register Class...
  const MCPhysReg Int64ArgRegs[] = {
    NVPTX::la0, NVPTX::la1, NVPTX::la2, NVPTX::la3, NVPTX::la4, 
  };

  // Int64ArgRegs Bit set.
  const uint8_t Int64ArgRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 
  };

  // Int64Regs Register Class...
  const MCPhysReg Int64Regs[] = {
    NVPTX::RL0, NVPTX::RL1, NVPTX::RL2, NVPTX::RL3, NVPTX::RL4, 
  };

  // Int64Regs Bit set.
  const uint8_t Int64RegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 
  };

} // end anonymous namespace


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char NVPTXRegClassStrings[] = {
  /* 0 */ "Int1Regs\0"
  /* 9 */ "Float32Regs\0"
  /* 21 */ "Int32Regs\0"
  /* 31 */ "Float16x2Regs\0"
  /* 45 */ "Float64Regs\0"
  /* 57 */ "Int64Regs\0"
  /* 67 */ "Float16Regs\0"
  /* 79 */ "Int16Regs\0"
  /* 89 */ "Float32ArgRegs\0"
  /* 104 */ "Int32ArgRegs\0"
  /* 117 */ "Float64ArgRegs\0"
  /* 132 */ "Int64ArgRegs\0"
  /* 145 */ "SpecialRegs\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterClass NVPTXMCRegisterClasses[] = {
  { Int1Regs, Int1RegsBits, 0, 5, sizeof(Int1RegsBits), NVPTX::Int1RegsRegClassID, 1, true },
  { Float16Regs, Float16RegsBits, 67, 5, sizeof(Float16RegsBits), NVPTX::Float16RegsRegClassID, 1, true },
  { Int16Regs, Int16RegsBits, 79, 5, sizeof(Int16RegsBits), NVPTX::Int16RegsRegClassID, 1, true },
  { SpecialRegs, SpecialRegsBits, 145, 35, sizeof(SpecialRegsBits), NVPTX::SpecialRegsRegClassID, 1, true },
  { Float16x2Regs, Float16x2RegsBits, 31, 5, sizeof(Float16x2RegsBits), NVPTX::Float16x2RegsRegClassID, 1, true },
  { Float32ArgRegs, Float32ArgRegsBits, 89, 5, sizeof(Float32ArgRegsBits), NVPTX::Float32ArgRegsRegClassID, 1, true },
  { Float32Regs, Float32RegsBits, 9, 5, sizeof(Float32RegsBits), NVPTX::Float32RegsRegClassID, 1, true },
  { Int32ArgRegs, Int32ArgRegsBits, 104, 5, sizeof(Int32ArgRegsBits), NVPTX::Int32ArgRegsRegClassID, 1, true },
  { Int32Regs, Int32RegsBits, 21, 5, sizeof(Int32RegsBits), NVPTX::Int32RegsRegClassID, 1, true },
  { Float64ArgRegs, Float64ArgRegsBits, 117, 5, sizeof(Float64ArgRegsBits), NVPTX::Float64ArgRegsRegClassID, 1, true },
  { Float64Regs, Float64RegsBits, 45, 5, sizeof(Float64RegsBits), NVPTX::Float64RegsRegClassID, 1, true },
  { Int64ArgRegs, Int64ArgRegsBits, 132, 5, sizeof(Int64ArgRegsBits), NVPTX::Int64ArgRegsRegClassID, 1, true },
  { Int64Regs, Int64RegsBits, 57, 5, sizeof(Int64RegsBits), NVPTX::Int64RegsRegClassID, 1, true },
};

extern const uint16_t NVPTXRegEncodingTable[] = {
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
};
static inline void InitNVPTXMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(NVPTXRegDesc, 96, RA, PC, NVPTXMCRegisterClasses, 13, NVPTXRegUnitRoots, 95, NVPTXRegDiffLists, NVPTXLaneMaskLists, NVPTXRegStrings, NVPTXRegClassStrings, NVPTXSubRegIdxLists, 1,
NVPTXSubRegIdxRanges, NVPTXRegEncodingTable);

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

class NVPTXFrameLowering;

struct NVPTXGenRegisterInfo : public TargetRegisterInfo {
  explicit NVPTXGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
      unsigned PC = 0, unsigned HwMode = 0);
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
  static const NVPTXFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace NVPTX { // Register classes
  extern const TargetRegisterClass Int1RegsRegClass;
  extern const TargetRegisterClass Float16RegsRegClass;
  extern const TargetRegisterClass Int16RegsRegClass;
  extern const TargetRegisterClass SpecialRegsRegClass;
  extern const TargetRegisterClass Float16x2RegsRegClass;
  extern const TargetRegisterClass Float32ArgRegsRegClass;
  extern const TargetRegisterClass Float32RegsRegClass;
  extern const TargetRegisterClass Int32ArgRegsRegClass;
  extern const TargetRegisterClass Int32RegsRegClass;
  extern const TargetRegisterClass Float64ArgRegsRegClass;
  extern const TargetRegisterClass Float64RegsRegClass;
  extern const TargetRegisterClass Int64ArgRegsRegClass;
  extern const TargetRegisterClass Int64RegsRegClass;
} // end namespace NVPTX

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

extern const MCRegisterClass NVPTXMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i1, MVT::Other,
  /* 2 */ MVT::i16, MVT::Other,
  /* 4 */ MVT::i32, MVT::Other,
  /* 6 */ MVT::i64, MVT::Other,
  /* 8 */ MVT::f16, MVT::Other,
  /* 10 */ MVT::f32, MVT::Other,
  /* 12 */ MVT::f64, MVT::Other,
  /* 14 */ MVT::v2f16, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 1, 1, 8, VTLists+0 },    // Int1Regs
  { 16, 16, 16, VTLists+8 },    // Float16Regs
  { 16, 16, 16, VTLists+2 },    // Int16Regs
  { 32, 32, 32, VTLists+4 },    // SpecialRegs
  { 32, 32, 32, VTLists+14 },    // Float16x2Regs
  { 32, 32, 32, VTLists+10 },    // Float32ArgRegs
  { 32, 32, 32, VTLists+10 },    // Float32Regs
  { 32, 32, 32, VTLists+4 },    // Int32ArgRegs
  { 32, 32, 32, VTLists+4 },    // Int32Regs
  { 64, 64, 64, VTLists+12 },    // Float64ArgRegs
  { 64, 64, 64, VTLists+12 },    // Float64Regs
  { 64, 64, 64, VTLists+6 },    // Int64ArgRegs
  { 64, 64, 64, VTLists+6 },    // Int64Regs
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t Int1RegsSubClassMask[] = {
  0x00000001, 
};

static const uint32_t Float16RegsSubClassMask[] = {
  0x00000002, 
};

static const uint32_t Int16RegsSubClassMask[] = {
  0x00000004, 
};

static const uint32_t SpecialRegsSubClassMask[] = {
  0x00000008, 
};

static const uint32_t Float16x2RegsSubClassMask[] = {
  0x00000010, 
};

static const uint32_t Float32ArgRegsSubClassMask[] = {
  0x00000020, 
};

static const uint32_t Float32RegsSubClassMask[] = {
  0x00000040, 
};

static const uint32_t Int32ArgRegsSubClassMask[] = {
  0x00000080, 
};

static const uint32_t Int32RegsSubClassMask[] = {
  0x00000100, 
};

static const uint32_t Float64ArgRegsSubClassMask[] = {
  0x00000200, 
};

static const uint32_t Float64RegsSubClassMask[] = {
  0x00000400, 
};

static const uint32_t Int64ArgRegsSubClassMask[] = {
  0x00000800, 
};

static const uint32_t Int64RegsSubClassMask[] = {
  0x00001000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 0,
};


namespace NVPTX {   // Register class instances
  extern const TargetRegisterClass Int1RegsRegClass = {
    &NVPTXMCRegisterClasses[Int1RegsRegClassID],
    Int1RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass Float16RegsRegClass = {
    &NVPTXMCRegisterClasses[Float16RegsRegClassID],
    Float16RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass Int16RegsRegClass = {
    &NVPTXMCRegisterClasses[Int16RegsRegClassID],
    Int16RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass SpecialRegsRegClass = {
    &NVPTXMCRegisterClasses[SpecialRegsRegClassID],
    SpecialRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass Float16x2RegsRegClass = {
    &NVPTXMCRegisterClasses[Float16x2RegsRegClassID],
    Float16x2RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass Float32ArgRegsRegClass = {
    &NVPTXMCRegisterClasses[Float32ArgRegsRegClassID],
    Float32ArgRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass Float32RegsRegClass = {
    &NVPTXMCRegisterClasses[Float32RegsRegClassID],
    Float32RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass Int32ArgRegsRegClass = {
    &NVPTXMCRegisterClasses[Int32ArgRegsRegClassID],
    Int32ArgRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass Int32RegsRegClass = {
    &NVPTXMCRegisterClasses[Int32RegsRegClassID],
    Int32RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass Float64ArgRegsRegClass = {
    &NVPTXMCRegisterClasses[Float64ArgRegsRegClassID],
    Float64ArgRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass Float64RegsRegClass = {
    &NVPTXMCRegisterClasses[Float64RegsRegClassID],
    Float64RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass Int64ArgRegsRegClass = {
    &NVPTXMCRegisterClasses[Int64ArgRegsRegClassID],
    Int64ArgRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass Int64RegsRegClass = {
    &NVPTXMCRegisterClasses[Int64RegsRegClassID],
    Int64RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

} // end namespace NVPTX

namespace {
  const TargetRegisterClass *const RegisterClasses[] = {
    &NVPTX::Int1RegsRegClass,
    &NVPTX::Float16RegsRegClass,
    &NVPTX::Int16RegsRegClass,
    &NVPTX::SpecialRegsRegClass,
    &NVPTX::Float16x2RegsRegClass,
    &NVPTX::Float32ArgRegsRegClass,
    &NVPTX::Float32RegsRegClass,
    &NVPTX::Int32ArgRegsRegClass,
    &NVPTX::Int32RegsRegClass,
    &NVPTX::Float64ArgRegsRegClass,
    &NVPTX::Float64RegsRegClass,
    &NVPTX::Int64ArgRegsRegClass,
    &NVPTX::Int64RegsRegClass,
  };
} // end anonymous namespace

static const uint8_t CostPerUseTable[] = { 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };


static const bool InAllocatableClassTable[] = { 
false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, };


static const TargetRegisterInfoDesc NVPTXRegInfoDesc = { // Extra Descriptors
CostPerUseTable, 1, InAllocatableClassTable};

/// Get the weight in units of pressure for this register class.
const RegClassWeight &NVPTXGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 5},  	// Int1Regs
    {1, 5},  	// Float16Regs
    {1, 5},  	// Int16Regs
    {1, 35},  	// SpecialRegs
    {1, 5},  	// Float16x2Regs
    {1, 5},  	// Float32ArgRegs
    {1, 5},  	// Float32Regs
    {1, 5},  	// Int32ArgRegs
    {1, 5},  	// Int32Regs
    {1, 5},  	// Float64ArgRegs
    {1, 5},  	// Float64Regs
    {1, 5},  	// Int64ArgRegs
    {1, 5},  	// Int64Regs
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned NVPTXGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 95 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned NVPTXGenRegisterInfo::getNumRegPressureSets() const {
  return 13;
}

// Get the name of this register unit pressure set.
const char *NVPTXGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "Int1Regs",
    "Float16Regs",
    "Int16Regs",
    "Float16x2Regs",
    "Float32ArgRegs",
    "Float32Regs",
    "Int32ArgRegs",
    "Int32Regs",
    "Float64ArgRegs",
    "Float64Regs",
    "Int64ArgRegs",
    "Int64Regs",
    "SpecialRegs",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned NVPTXGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    5,  	// 0: Int1Regs
    5,  	// 1: Float16Regs
    5,  	// 2: Int16Regs
    5,  	// 3: Float16x2Regs
    5,  	// 4: Float32ArgRegs
    5,  	// 5: Float32Regs
    5,  	// 6: Int32ArgRegs
    5,  	// 7: Int32Regs
    5,  	// 8: Float64ArgRegs
    5,  	// 9: Float64Regs
    5,  	// 10: Int64ArgRegs
    5,  	// 11: Int64Regs
    35,  	// 12: SpecialRegs
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 0, -1,
  /* 2 */ 1, -1,
  /* 4 */ 2, -1,
  /* 6 */ 3, -1,
  /* 8 */ 4, -1,
  /* 10 */ 5, -1,
  /* 12 */ 6, -1,
  /* 14 */ 7, -1,
  /* 16 */ 8, -1,
  /* 18 */ 9, -1,
  /* 20 */ 10, -1,
  /* 22 */ 11, -1,
  /* 24 */ 12, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int *NVPTXGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    0,2,4,24,6,8,10,12,14,16,18,20,22,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int *NVPTXGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 95 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,10,10,10,10,10,18,18,18,18,18,2,2,2,2,2,6,6,6,6,6,0,0,0,0,0,14,14,14,14,14,22,22,22,22,22,4,4,4,4,4,16,16,16,16,16,8,8,8,8,8,12,12,12,12,12,20,20,20,20,20,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc NVPTXRegDesc[];
extern const MCPhysReg NVPTXRegDiffLists[];
extern const LaneBitmask NVPTXLaneMaskLists[];
extern const char NVPTXRegStrings[];
extern const char NVPTXRegClassStrings[];
extern const MCPhysReg NVPTXRegUnitRoots[][2];
extern const uint16_t NVPTXSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits NVPTXSubRegIdxRanges[];
extern const uint16_t NVPTXRegEncodingTable[];
NVPTXGenRegisterInfo::
NVPTXGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(&NVPTXRegInfoDesc, RegisterClasses, RegisterClasses+13,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFFFFFFFFFF), RegClassInfos, HwMode) {
  InitMCRegisterInfo(NVPTXRegDesc, 96, RA, PC,
                     NVPTXMCRegisterClasses, 13,
                     NVPTXRegUnitRoots,
                     95,
                     NVPTXRegDiffLists,
                     NVPTXLaneMaskLists,
                     NVPTXRegStrings,
                     NVPTXRegClassStrings,
                     NVPTXSubRegIdxLists,
                     1,
                     NVPTXSubRegIdxRanges,
                     NVPTXRegEncodingTable);

}



ArrayRef<const uint32_t *> NVPTXGenRegisterInfo::getRegMasks() const {
  return None;
}

ArrayRef<const char *> NVPTXGenRegisterInfo::getRegMaskNames() const {
  return None;
}

const NVPTXFrameLowering *
NVPTXGenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const NVPTXFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC

