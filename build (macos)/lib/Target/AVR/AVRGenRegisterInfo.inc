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
extern const MCRegisterClass AVRMCRegisterClasses[];

namespace AVR {
enum {
  NoRegister,
  SP = 1,
  SPH = 2,
  SPL = 3,
  SREG = 4,
  R0 = 5,
  R1 = 6,
  R2 = 7,
  R3 = 8,
  R4 = 9,
  R5 = 10,
  R6 = 11,
  R7 = 12,
  R8 = 13,
  R9 = 14,
  R10 = 15,
  R11 = 16,
  R12 = 17,
  R13 = 18,
  R14 = 19,
  R15 = 20,
  R16 = 21,
  R17 = 22,
  R18 = 23,
  R19 = 24,
  R20 = 25,
  R21 = 26,
  R22 = 27,
  R23 = 28,
  R24 = 29,
  R25 = 30,
  R26 = 31,
  R27 = 32,
  R28 = 33,
  R29 = 34,
  R30 = 35,
  R31 = 36,
  R1R0 = 37,
  R3R2 = 38,
  R5R4 = 39,
  R7R6 = 40,
  R9R8 = 41,
  R10R9 = 42,
  R11R10 = 43,
  R12R11 = 44,
  R13R12 = 45,
  R14R13 = 46,
  R15R14 = 47,
  R16R15 = 48,
  R17R16 = 49,
  R18R17 = 50,
  R19R18 = 51,
  R20R19 = 52,
  R21R20 = 53,
  R22R21 = 54,
  R23R22 = 55,
  R24R23 = 56,
  R25R24 = 57,
  R26R25 = 58,
  R27R26 = 59,
  R29R28 = 60,
  R31R30 = 61,
  NUM_TARGET_REGS // 62
};
} // end namespace AVR

// Register classes

namespace AVR {
enum {
  GPR8RegClassID = 0,
  GPR8loRegClassID = 1,
  LD8RegClassID = 2,
  LD8loRegClassID = 3,
  CCRRegClassID = 4,
  DREGSRegClassID = 5,
  DREGSMOVWRegClassID = 6,
  DREGS_WITHOUT_YZ_WORKAROUNDRegClassID = 7,
  DREGS_with_sub_hi_in_LD8RegClassID = 8,
  DREGS_with_sub_lo_in_LD8RegClassID = 9,
  DREGS_with_sub_lo_in_GPR8loRegClassID = 10,
  DREGS_with_sub_hi_in_GPR8loRegClassID = 11,
  DLDREGSRegClassID = 12,
  DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8loRegClassID = 13,
  DREGS_with_sub_hi_in_LD8loRegClassID = 14,
  DREGS_with_sub_lo_in_LD8loRegClassID = 15,
  DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClassID = 16,
  DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDRegClassID = 17,
  DLDREGS_with_sub_hi_in_LD8loRegClassID = 18,
  IWREGSRegClassID = 19,
  PTRREGSRegClassID = 20,
  DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSRegClassID = 21,
  PTRDISPREGSRegClassID = 22,
  DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGSRegClassID = 23,
  DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loRegClassID = 24,
  GPRSPRegClassID = 25,
  ZREGRegClassID = 26,

};
} // end namespace AVR


// Register alternate name indices

namespace AVR {
enum {
  NoRegAltName,	// 0
  ptr,	// 1
  NUM_TARGET_REG_ALT_NAMES = 2
};
} // end namespace AVR


// Subregister indices

namespace AVR {
enum : uint16_t {
  NoSubRegister,
  sub_hi,	// 1
  sub_lo,	// 2
  NUM_TARGET_SUBREGS
};
} // end namespace AVR

// Register pressure sets enum.
namespace AVR {
enum RegisterPressureSets {
  CCR = 0,
  DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo = 1,
  GPRSP = 2,
  DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGS = 3,
  IWREGS = 4,
  LD8lo = 5,
  DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUND = 6,
  LD8 = 7,
  GPR8lo = 8,
  GPR8lo_with_LD8lo = 9,
  DREGS_WITHOUT_YZ_WORKAROUND = 10,
  GPR8 = 11,
};
} // end namespace AVR

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

extern const MCPhysReg AVRRegDiffLists[] = {
  /* 0 */ 0, 1, 0,
  /* 3 */ 27, 1, 0,
  /* 6 */ 65447, 1, 0,
  /* 9 */ 65465, 1, 0,
  /* 12 */ 65504, 1, 0,
  /* 15 */ 65505, 1, 0,
  /* 18 */ 65506, 1, 0,
  /* 21 */ 65507, 1, 0,
  /* 24 */ 65508, 1, 0,
  /* 27 */ 65509, 1, 0,
  /* 30 */ 65510, 1, 0,
  /* 33 */ 25, 0,
  /* 35 */ 26, 0,
  /* 37 */ 27, 0,
  /* 39 */ 28, 0,
  /* 41 */ 29, 0,
  /* 43 */ 30, 0,
  /* 45 */ 31, 0,
  /* 47 */ 32, 0,
  /* 49 */ 65530, 0,
  /* 51 */ 65534, 0,
  /* 53 */ 2, 65535, 0,
};

extern const LaneBitmask AVRLaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x0000000000000000), LaneBitmask::getAll(),
  /* 2 */ LaneBitmask(0x0000000000000002), LaneBitmask(0x0000000000000001), LaneBitmask::getAll(),
};

extern const uint16_t AVRSubRegIdxLists[] = {
  /* 0 */ 2, 1, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits AVRSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 8, 8 },	// sub_hi
  { 0, 8 },	// sub_lo
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char AVRRegStrings[] = {
  /* 0 */ "R11R10\0"
  /* 7 */ "R21R20\0"
  /* 14 */ "R31R30\0"
  /* 21 */ "R1R0\0"
  /* 26 */ "R12R11\0"
  /* 33 */ "R22R21\0"
  /* 40 */ "R31\0"
  /* 44 */ "R1\0"
  /* 47 */ "R13R12\0"
  /* 54 */ "R23R22\0"
  /* 61 */ "R3R2\0"
  /* 66 */ "R14R13\0"
  /* 73 */ "R24R23\0"
  /* 80 */ "R3\0"
  /* 83 */ "R15R14\0"
  /* 90 */ "R25R24\0"
  /* 97 */ "R5R4\0"
  /* 102 */ "R16R15\0"
  /* 109 */ "R26R25\0"
  /* 116 */ "R5\0"
  /* 119 */ "R17R16\0"
  /* 126 */ "R27R26\0"
  /* 133 */ "R7R6\0"
  /* 138 */ "R18R17\0"
  /* 145 */ "R27\0"
  /* 149 */ "R7\0"
  /* 152 */ "R19R18\0"
  /* 159 */ "R29R28\0"
  /* 166 */ "R9R8\0"
  /* 171 */ "R20R19\0"
  /* 178 */ "R29\0"
  /* 182 */ "R10R9\0"
  /* 188 */ "SREG\0"
  /* 193 */ "SPH\0"
  /* 197 */ "SPL\0"
  /* 201 */ "SP\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterDesc AVRRegDesc[] = { // Descriptors
  { 6, 0, 0, 0, 0, 0 },
  { 201, 53, 2, 0, 0, 2 },
  { 193, 2, 54, 2, 16, 0 },
  { 197, 2, 51, 2, 786, 0 },
  { 188, 2, 2, 2, 817, 0 },
  { 23, 2, 47, 2, 817, 0 },
  { 44, 2, 45, 2, 817, 0 },
  { 63, 2, 45, 2, 817, 0 },
  { 80, 2, 43, 2, 817, 0 },
  { 99, 2, 43, 2, 817, 0 },
  { 116, 2, 41, 2, 817, 0 },
  { 135, 2, 41, 2, 817, 0 },
  { 149, 2, 39, 2, 817, 0 },
  { 168, 2, 39, 2, 817, 0 },
  { 185, 2, 3, 2, 817, 0 },
  { 3, 2, 3, 2, 817, 0 },
  { 29, 2, 3, 2, 817, 0 },
  { 50, 2, 3, 2, 817, 0 },
  { 69, 2, 3, 2, 817, 0 },
  { 86, 2, 3, 2, 817, 0 },
  { 105, 2, 3, 2, 817, 0 },
  { 122, 2, 3, 2, 817, 0 },
  { 141, 2, 3, 2, 817, 0 },
  { 155, 2, 3, 2, 817, 0 },
  { 174, 2, 3, 2, 817, 0 },
  { 10, 2, 3, 2, 817, 0 },
  { 36, 2, 3, 2, 817, 0 },
  { 57, 2, 3, 2, 817, 0 },
  { 76, 2, 3, 2, 817, 0 },
  { 93, 2, 3, 2, 817, 0 },
  { 112, 2, 3, 2, 817, 0 },
  { 129, 2, 3, 2, 817, 0 },
  { 145, 2, 37, 2, 817, 0 },
  { 162, 2, 37, 2, 817, 0 },
  { 178, 2, 35, 2, 817, 0 },
  { 17, 2, 35, 2, 817, 0 },
  { 40, 2, 33, 2, 817, 0 },
  { 21, 12, 2, 0, 146, 2 },
  { 61, 15, 2, 0, 146, 2 },
  { 97, 18, 2, 0, 146, 2 },
  { 133, 21, 2, 0, 146, 2 },
  { 166, 24, 2, 0, 289, 2 },
  { 182, 24, 2, 0, 289, 2 },
  { 0, 24, 2, 0, 289, 2 },
  { 26, 24, 2, 0, 289, 2 },
  { 47, 24, 2, 0, 289, 2 },
  { 66, 24, 2, 0, 289, 2 },
  { 83, 24, 2, 0, 289, 2 },
  { 102, 24, 2, 0, 289, 2 },
  { 119, 24, 2, 0, 289, 2 },
  { 138, 24, 2, 0, 289, 2 },
  { 152, 24, 2, 0, 289, 2 },
  { 171, 24, 2, 0, 289, 2 },
  { 7, 24, 2, 0, 289, 2 },
  { 33, 24, 2, 0, 289, 2 },
  { 54, 24, 2, 0, 289, 2 },
  { 73, 24, 2, 0, 289, 2 },
  { 90, 24, 2, 0, 289, 2 },
  { 109, 24, 2, 0, 289, 2 },
  { 126, 24, 2, 0, 289, 2 },
  { 159, 27, 2, 0, 98, 2 },
  { 14, 30, 2, 0, 98, 2 },
};

extern const MCPhysReg AVRRegUnitRoots[][2] = {
  { AVR::SPL },
  { AVR::SPH },
  { AVR::SREG },
  { AVR::R0 },
  { AVR::R1 },
  { AVR::R2 },
  { AVR::R3 },
  { AVR::R4 },
  { AVR::R5 },
  { AVR::R6 },
  { AVR::R7 },
  { AVR::R8 },
  { AVR::R9 },
  { AVR::R10 },
  { AVR::R11 },
  { AVR::R12 },
  { AVR::R13 },
  { AVR::R14 },
  { AVR::R15 },
  { AVR::R16 },
  { AVR::R17 },
  { AVR::R18 },
  { AVR::R19 },
  { AVR::R20 },
  { AVR::R21 },
  { AVR::R22 },
  { AVR::R23 },
  { AVR::R24 },
  { AVR::R25 },
  { AVR::R26 },
  { AVR::R27 },
  { AVR::R28 },
  { AVR::R29 },
  { AVR::R30 },
  { AVR::R31 },
};

namespace {     // Register classes...
  // GPR8 Register Class...
  const MCPhysReg GPR8[] = {
    AVR::R24, AVR::R25, AVR::R18, AVR::R19, AVR::R20, AVR::R21, AVR::R22, AVR::R23, AVR::R30, AVR::R31, AVR::R26, AVR::R27, AVR::R28, AVR::R29, AVR::R17, AVR::R16, AVR::R15, AVR::R14, AVR::R13, AVR::R12, AVR::R11, AVR::R10, AVR::R9, AVR::R8, AVR::R7, AVR::R6, AVR::R5, AVR::R4, AVR::R3, AVR::R2, AVR::R0, AVR::R1, 
  };

  // GPR8 Bit set.
  const uint8_t GPR8Bits[] = {
    0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // GPR8lo Register Class...
  const MCPhysReg GPR8lo[] = {
    AVR::R15, AVR::R14, AVR::R13, AVR::R12, AVR::R11, AVR::R10, AVR::R9, AVR::R8, AVR::R7, AVR::R6, AVR::R5, AVR::R4, AVR::R3, AVR::R2, AVR::R0, AVR::R1, 
  };

  // GPR8lo Bit set.
  const uint8_t GPR8loBits[] = {
    0xe0, 0xff, 0x1f, 
  };

  // LD8 Register Class...
  const MCPhysReg LD8[] = {
    AVR::R24, AVR::R25, AVR::R18, AVR::R19, AVR::R20, AVR::R21, AVR::R22, AVR::R23, AVR::R30, AVR::R31, AVR::R26, AVR::R27, AVR::R28, AVR::R29, AVR::R17, AVR::R16, 
  };

  // LD8 Bit set.
  const uint8_t LD8Bits[] = {
    0x00, 0x00, 0xe0, 0xff, 0x1f, 
  };

  // LD8lo Register Class...
  const MCPhysReg LD8lo[] = {
    AVR::R23, AVR::R22, AVR::R21, AVR::R20, AVR::R19, AVR::R18, AVR::R17, AVR::R16, 
  };

  // LD8lo Bit set.
  const uint8_t LD8loBits[] = {
    0x00, 0x00, 0xe0, 0x1f, 
  };

  // CCR Register Class...
  const MCPhysReg CCR[] = {
    AVR::SREG, 
  };

  // CCR Bit set.
  const uint8_t CCRBits[] = {
    0x10, 
  };

  // DREGS Register Class...
  const MCPhysReg DREGS[] = {
    AVR::R25R24, AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R31R30, AVR::R27R26, AVR::R29R28, AVR::R17R16, AVR::R15R14, AVR::R13R12, AVR::R11R10, AVR::R9R8, AVR::R7R6, AVR::R5R4, AVR::R3R2, AVR::R1R0, AVR::R26R25, AVR::R24R23, AVR::R22R21, AVR::R20R19, AVR::R18R17, AVR::R16R15, AVR::R14R13, AVR::R12R11, AVR::R10R9, 
  };

  // DREGS Bit set.
  const uint8_t DREGSBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x3f, 
  };

  // DREGSMOVW Register Class...
  const MCPhysReg DREGSMOVW[] = {
    AVR::R25R24, AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R31R30, AVR::R27R26, AVR::R29R28, AVR::R17R16, AVR::R15R14, AVR::R13R12, AVR::R11R10, AVR::R9R8, AVR::R7R6, AVR::R5R4, AVR::R3R2, AVR::R1R0, 
  };

  // DREGSMOVW Bit set.
  const uint8_t DREGSMOVWBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xab, 0xaa, 0x3a, 
  };

  // DREGS_WITHOUT_YZ_WORKAROUND Register Class...
  const MCPhysReg DREGS_WITHOUT_YZ_WORKAROUND[] = {
    AVR::R25R24, AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R27R26, AVR::R17R16, AVR::R15R14, AVR::R13R12, AVR::R11R10, AVR::R9R8, AVR::R7R6, AVR::R5R4, AVR::R3R2, AVR::R1R0, 
  };

  // DREGS_WITHOUT_YZ_WORKAROUND Bit set.
  const uint8_t DREGS_WITHOUT_YZ_WORKAROUNDBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xab, 0xaa, 0x0a, 
  };

  // DREGS_with_sub_hi_in_LD8 Register Class...
  const MCPhysReg DREGS_with_sub_hi_in_LD8[] = {
    AVR::R25R24, AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R31R30, AVR::R27R26, AVR::R29R28, AVR::R17R16, AVR::R26R25, AVR::R24R23, AVR::R22R21, AVR::R20R19, AVR::R18R17, AVR::R16R15, 
  };

  // DREGS_with_sub_hi_in_LD8 Bit set.
  const uint8_t DREGS_with_sub_hi_in_LD8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x3f, 
  };

  // DREGS_with_sub_lo_in_LD8 Register Class...
  const MCPhysReg DREGS_with_sub_lo_in_LD8[] = {
    AVR::R25R24, AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R31R30, AVR::R27R26, AVR::R29R28, AVR::R17R16, AVR::R26R25, AVR::R24R23, AVR::R22R21, AVR::R20R19, AVR::R18R17, 
  };

  // DREGS_with_sub_lo_in_LD8 Bit set.
  const uint8_t DREGS_with_sub_lo_in_LD8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x3f, 
  };

  // DREGS_with_sub_lo_in_GPR8lo Register Class...
  const MCPhysReg DREGS_with_sub_lo_in_GPR8lo[] = {
    AVR::R15R14, AVR::R13R12, AVR::R11R10, AVR::R9R8, AVR::R7R6, AVR::R5R4, AVR::R3R2, AVR::R1R0, AVR::R16R15, AVR::R14R13, AVR::R12R11, AVR::R10R9, 
  };

  // DREGS_with_sub_lo_in_GPR8lo Bit set.
  const uint8_t DREGS_with_sub_lo_in_GPR8loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x01, 
  };

  // DREGS_with_sub_hi_in_GPR8lo Register Class...
  const MCPhysReg DREGS_with_sub_hi_in_GPR8lo[] = {
    AVR::R15R14, AVR::R13R12, AVR::R11R10, AVR::R9R8, AVR::R7R6, AVR::R5R4, AVR::R3R2, AVR::R1R0, AVR::R14R13, AVR::R12R11, AVR::R10R9, 
  };

  // DREGS_with_sub_hi_in_GPR8lo Bit set.
  const uint8_t DREGS_with_sub_hi_in_GPR8loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 
  };

  // DLDREGS Register Class...
  const MCPhysReg DLDREGS[] = {
    AVR::R25R24, AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R31R30, AVR::R27R26, AVR::R29R28, AVR::R17R16, 
  };

  // DLDREGS Bit set.
  const uint8_t DLDREGSBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x3a, 
  };

  // DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8lo Register Class...
  const MCPhysReg DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8lo[] = {
    AVR::R15R14, AVR::R13R12, AVR::R11R10, AVR::R9R8, AVR::R7R6, AVR::R5R4, AVR::R3R2, AVR::R1R0, 
  };

  // DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8lo Bit set.
  const uint8_t DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xab, 
  };

  // DREGS_with_sub_hi_in_LD8lo Register Class...
  const MCPhysReg DREGS_with_sub_hi_in_LD8lo[] = {
    AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R17R16, AVR::R22R21, AVR::R20R19, AVR::R18R17, AVR::R16R15, 
  };

  // DREGS_with_sub_hi_in_LD8lo Bit set.
  const uint8_t DREGS_with_sub_hi_in_LD8loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // DREGS_with_sub_lo_in_LD8lo Register Class...
  const MCPhysReg DREGS_with_sub_lo_in_LD8lo[] = {
    AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R17R16, AVR::R24R23, AVR::R22R21, AVR::R20R19, AVR::R18R17, 
  };

  // DREGS_with_sub_lo_in_LD8lo Bit set.
  const uint8_t DREGS_with_sub_lo_in_LD8loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01, 
  };

  // DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8 Register Class...
  const MCPhysReg DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8[] = {
    AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R17R16, AVR::R22R21, AVR::R20R19, AVR::R18R17, 
  };

  // DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8 Bit set.
  const uint8_t DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 
  };

  // DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUND Register Class...
  const MCPhysReg DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUND[] = {
    AVR::R25R24, AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R27R26, AVR::R17R16, 
  };

  // DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUND Bit set.
  const uint8_t DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x0a, 
  };

  // DLDREGS_with_sub_hi_in_LD8lo Register Class...
  const MCPhysReg DLDREGS_with_sub_hi_in_LD8lo[] = {
    AVR::R19R18, AVR::R21R20, AVR::R23R22, AVR::R17R16, 
  };

  // DLDREGS_with_sub_hi_in_LD8lo Bit set.
  const uint8_t DLDREGS_with_sub_hi_in_LD8loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 
  };

  // IWREGS Register Class...
  const MCPhysReg IWREGS[] = {
    AVR::R25R24, AVR::R31R30, AVR::R27R26, AVR::R29R28, 
  };

  // IWREGS Bit set.
  const uint8_t IWREGSBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 
  };

  // PTRREGS Register Class...
  const MCPhysReg PTRREGS[] = {
    AVR::R27R26, AVR::R29R28, AVR::R31R30, 
  };

  // PTRREGS Bit set.
  const uint8_t PTRREGSBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 
  };

  // DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGS Register Class...
  const MCPhysReg DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGS[] = {
    AVR::R25R24, AVR::R27R26, 
  };

  // DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGS Bit set.
  const uint8_t DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 
  };

  // PTRDISPREGS Register Class...
  const MCPhysReg PTRDISPREGS[] = {
    AVR::R31R30, AVR::R29R28, 
  };

  // PTRDISPREGS Bit set.
  const uint8_t PTRDISPREGSBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  };

  // DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGS Register Class...
  const MCPhysReg DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGS[] = {
    AVR::R27R26, 
  };

  // DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGS Bit set.
  const uint8_t DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGSBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo Register Class...
  const MCPhysReg DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo[] = {
    AVR::R16R15, 
  };

  // DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo Bit set.
  const uint8_t DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  };

  // GPRSP Register Class...
  const MCPhysReg GPRSP[] = {
    AVR::SP, 
  };

  // GPRSP Bit set.
  const uint8_t GPRSPBits[] = {
    0x02, 
  };

  // ZREG Register Class...
  const MCPhysReg ZREG[] = {
    AVR::R31R30, 
  };

  // ZREG Bit set.
  const uint8_t ZREGBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
  };

} // end anonymous namespace


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char AVRRegClassStrings[] = {
  /* 0 */ "DREGS_with_sub_hi_in_LD8\0"
  /* 25 */ "DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8\0"
  /* 81 */ "GPR8\0"
  /* 86 */ "DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUND\0"
  /* 126 */ "ZREG\0"
  /* 131 */ "GPRSP\0"
  /* 137 */ "CCR\0"
  /* 141 */ "DLDREGS\0"
  /* 149 */ "PTRDISPREGS\0"
  /* 161 */ "DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGS\0"
  /* 201 */ "DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGS\0"
  /* 240 */ "DREGSMOVW\0"
  /* 250 */ "DLDREGS_with_sub_hi_in_LD8lo\0"
  /* 279 */ "DREGS_with_sub_lo_in_LD8lo\0"
  /* 306 */ "DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8lo\0"
  /* 348 */ "DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterClass AVRMCRegisterClasses[] = {
  { GPR8, GPR8Bits, 81, 32, sizeof(GPR8Bits), AVR::GPR8RegClassID, 1, true },
  { GPR8lo, GPR8loBits, 341, 16, sizeof(GPR8loBits), AVR::GPR8loRegClassID, 1, true },
  { LD8, LD8Bits, 21, 16, sizeof(LD8Bits), AVR::LD8RegClassID, 1, true },
  { LD8lo, LD8loBits, 273, 8, sizeof(LD8loBits), AVR::LD8loRegClassID, 1, true },
  { CCR, CCRBits, 137, 1, sizeof(CCRBits), AVR::CCRRegClassID, -1, true },
  { DREGS, DREGSBits, 143, 25, sizeof(DREGSBits), AVR::DREGSRegClassID, 1, true },
  { DREGSMOVW, DREGSMOVWBits, 240, 16, sizeof(DREGSMOVWBits), AVR::DREGSMOVWRegClassID, 1, true },
  { DREGS_WITHOUT_YZ_WORKAROUND, DREGS_WITHOUT_YZ_WORKAROUNDBits, 98, 14, sizeof(DREGS_WITHOUT_YZ_WORKAROUNDBits), AVR::DREGS_WITHOUT_YZ_WORKAROUNDRegClassID, 1, true },
  { DREGS_with_sub_hi_in_LD8, DREGS_with_sub_hi_in_LD8Bits, 0, 14, sizeof(DREGS_with_sub_hi_in_LD8Bits), AVR::DREGS_with_sub_hi_in_LD8RegClassID, 1, true },
  { DREGS_with_sub_lo_in_LD8, DREGS_with_sub_lo_in_LD8Bits, 56, 13, sizeof(DREGS_with_sub_lo_in_LD8Bits), AVR::DREGS_with_sub_lo_in_LD8RegClassID, 1, true },
  { DREGS_with_sub_lo_in_GPR8lo, DREGS_with_sub_lo_in_GPR8loBits, 377, 12, sizeof(DREGS_with_sub_lo_in_GPR8loBits), AVR::DREGS_with_sub_lo_in_GPR8loRegClassID, 1, true },
  { DREGS_with_sub_hi_in_GPR8lo, DREGS_with_sub_hi_in_GPR8loBits, 320, 11, sizeof(DREGS_with_sub_hi_in_GPR8loBits), AVR::DREGS_with_sub_hi_in_GPR8loRegClassID, 1, true },
  { DLDREGS, DLDREGSBits, 141, 8, sizeof(DLDREGSBits), AVR::DLDREGSRegClassID, 1, true },
  { DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8lo, DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8loBits, 306, 8, sizeof(DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8loBits), AVR::DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8loRegClassID, 1, true },
  { DREGS_with_sub_hi_in_LD8lo, DREGS_with_sub_hi_in_LD8loBits, 252, 8, sizeof(DREGS_with_sub_hi_in_LD8loBits), AVR::DREGS_with_sub_hi_in_LD8loRegClassID, 1, true },
  { DREGS_with_sub_lo_in_LD8lo, DREGS_with_sub_lo_in_LD8loBits, 279, 8, sizeof(DREGS_with_sub_lo_in_LD8loBits), AVR::DREGS_with_sub_lo_in_LD8loRegClassID, 1, true },
  { DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8, DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8Bits, 25, 7, sizeof(DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8Bits), AVR::DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClassID, 1, true },
  { DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUND, DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDBits, 86, 6, sizeof(DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDBits), AVR::DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDRegClassID, 1, true },
  { DLDREGS_with_sub_hi_in_LD8lo, DLDREGS_with_sub_hi_in_LD8loBits, 250, 4, sizeof(DLDREGS_with_sub_hi_in_LD8loBits), AVR::DLDREGS_with_sub_hi_in_LD8loRegClassID, 1, true },
  { IWREGS, IWREGSBits, 233, 4, sizeof(IWREGSBits), AVR::IWREGSRegClassID, 1, true },
  { PTRREGS, PTRREGSBits, 193, 3, sizeof(PTRREGSBits), AVR::PTRREGSRegClassID, 1, true },
  { DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGS, DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSBits, 201, 2, sizeof(DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSBits), AVR::DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSRegClassID, 1, true },
  { PTRDISPREGS, PTRDISPREGSBits, 149, 2, sizeof(PTRDISPREGSBits), AVR::PTRDISPREGSRegClassID, 1, true },
  { DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGS, DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGSBits, 161, 1, sizeof(DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGSBits), AVR::DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGSRegClassID, 1, true },
  { DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo, DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loBits, 348, 1, sizeof(DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loBits), AVR::DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loRegClassID, 1, true },
  { GPRSP, GPRSPBits, 131, 1, sizeof(GPRSPBits), AVR::GPRSPRegClassID, 1, true },
  { ZREG, ZREGBits, 126, 1, sizeof(ZREGBits), AVR::ZREGRegClassID, 1, true },
};

// AVR Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair AVRDwarfFlavour0Dwarf2L[] = {
  { 0U, AVR::R1R0 },
  { 1U, AVR::R1 },
  { 2U, AVR::R3R2 },
  { 3U, AVR::R3 },
  { 4U, AVR::R5R4 },
  { 5U, AVR::R5 },
  { 6U, AVR::R7R6 },
  { 7U, AVR::R7 },
  { 8U, AVR::R9R8 },
  { 9U, AVR::R10R9 },
  { 10U, AVR::R11R10 },
  { 11U, AVR::R12R11 },
  { 12U, AVR::R13R12 },
  { 13U, AVR::R14R13 },
  { 14U, AVR::R15R14 },
  { 15U, AVR::R16R15 },
  { 16U, AVR::R17R16 },
  { 17U, AVR::R18R17 },
  { 18U, AVR::R19R18 },
  { 19U, AVR::R20R19 },
  { 20U, AVR::R21R20 },
  { 21U, AVR::R22R21 },
  { 22U, AVR::R23R22 },
  { 23U, AVR::R24R23 },
  { 24U, AVR::R25R24 },
  { 25U, AVR::R26R25 },
  { 26U, AVR::R27R26 },
  { 27U, AVR::R27 },
  { 28U, AVR::R29R28 },
  { 29U, AVR::R29 },
  { 30U, AVR::R31R30 },
  { 31U, AVR::R31 },
  { 32U, AVR::SPL },
  { 33U, AVR::SPH },
  { 88U, AVR::SREG },
};
extern const unsigned AVRDwarfFlavour0Dwarf2LSize = array_lengthof(AVRDwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair AVREHFlavour0Dwarf2L[] = {
  { 0U, AVR::R1R0 },
  { 1U, AVR::R1 },
  { 2U, AVR::R3R2 },
  { 3U, AVR::R3 },
  { 4U, AVR::R5R4 },
  { 5U, AVR::R5 },
  { 6U, AVR::R7R6 },
  { 7U, AVR::R7 },
  { 8U, AVR::R9R8 },
  { 9U, AVR::R10R9 },
  { 10U, AVR::R11R10 },
  { 11U, AVR::R12R11 },
  { 12U, AVR::R13R12 },
  { 13U, AVR::R14R13 },
  { 14U, AVR::R15R14 },
  { 15U, AVR::R16R15 },
  { 16U, AVR::R17R16 },
  { 17U, AVR::R18R17 },
  { 18U, AVR::R19R18 },
  { 19U, AVR::R20R19 },
  { 20U, AVR::R21R20 },
  { 21U, AVR::R22R21 },
  { 22U, AVR::R23R22 },
  { 23U, AVR::R24R23 },
  { 24U, AVR::R25R24 },
  { 25U, AVR::R26R25 },
  { 26U, AVR::R27R26 },
  { 27U, AVR::R27 },
  { 28U, AVR::R29R28 },
  { 29U, AVR::R29 },
  { 30U, AVR::R31R30 },
  { 31U, AVR::R31 },
  { 32U, AVR::SPL },
  { 33U, AVR::SPH },
  { 88U, AVR::SREG },
};
extern const unsigned AVREHFlavour0Dwarf2LSize = array_lengthof(AVREHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair AVRDwarfFlavour0L2Dwarf[] = {
  { AVR::SP, 32U },
  { AVR::SPH, 33U },
  { AVR::SPL, 32U },
  { AVR::SREG, 88U },
  { AVR::R0, 0U },
  { AVR::R1, 1U },
  { AVR::R2, 2U },
  { AVR::R3, 3U },
  { AVR::R4, 4U },
  { AVR::R5, 5U },
  { AVR::R6, 6U },
  { AVR::R7, 7U },
  { AVR::R8, 8U },
  { AVR::R9, 9U },
  { AVR::R10, 10U },
  { AVR::R11, 11U },
  { AVR::R12, 12U },
  { AVR::R13, 13U },
  { AVR::R14, 14U },
  { AVR::R15, 15U },
  { AVR::R16, 16U },
  { AVR::R17, 17U },
  { AVR::R18, 18U },
  { AVR::R19, 19U },
  { AVR::R20, 20U },
  { AVR::R21, 21U },
  { AVR::R22, 22U },
  { AVR::R23, 23U },
  { AVR::R24, 24U },
  { AVR::R25, 25U },
  { AVR::R26, 26U },
  { AVR::R27, 27U },
  { AVR::R28, 28U },
  { AVR::R29, 29U },
  { AVR::R30, 30U },
  { AVR::R31, 31U },
  { AVR::R1R0, 0U },
  { AVR::R3R2, 2U },
  { AVR::R5R4, 4U },
  { AVR::R7R6, 6U },
  { AVR::R9R8, 8U },
  { AVR::R10R9, 9U },
  { AVR::R11R10, 10U },
  { AVR::R12R11, 11U },
  { AVR::R13R12, 12U },
  { AVR::R14R13, 13U },
  { AVR::R15R14, 14U },
  { AVR::R16R15, 15U },
  { AVR::R17R16, 16U },
  { AVR::R18R17, 17U },
  { AVR::R19R18, 18U },
  { AVR::R20R19, 19U },
  { AVR::R21R20, 20U },
  { AVR::R22R21, 21U },
  { AVR::R23R22, 22U },
  { AVR::R24R23, 23U },
  { AVR::R25R24, 24U },
  { AVR::R26R25, 25U },
  { AVR::R27R26, 26U },
  { AVR::R29R28, 28U },
  { AVR::R31R30, 30U },
};
extern const unsigned AVRDwarfFlavour0L2DwarfSize = array_lengthof(AVRDwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair AVREHFlavour0L2Dwarf[] = {
  { AVR::SP, 32U },
  { AVR::SPH, 33U },
  { AVR::SPL, 32U },
  { AVR::SREG, 88U },
  { AVR::R0, 0U },
  { AVR::R1, 1U },
  { AVR::R2, 2U },
  { AVR::R3, 3U },
  { AVR::R4, 4U },
  { AVR::R5, 5U },
  { AVR::R6, 6U },
  { AVR::R7, 7U },
  { AVR::R8, 8U },
  { AVR::R9, 9U },
  { AVR::R10, 10U },
  { AVR::R11, 11U },
  { AVR::R12, 12U },
  { AVR::R13, 13U },
  { AVR::R14, 14U },
  { AVR::R15, 15U },
  { AVR::R16, 16U },
  { AVR::R17, 17U },
  { AVR::R18, 18U },
  { AVR::R19, 19U },
  { AVR::R20, 20U },
  { AVR::R21, 21U },
  { AVR::R22, 22U },
  { AVR::R23, 23U },
  { AVR::R24, 24U },
  { AVR::R25, 25U },
  { AVR::R26, 26U },
  { AVR::R27, 27U },
  { AVR::R28, 28U },
  { AVR::R29, 29U },
  { AVR::R30, 30U },
  { AVR::R31, 31U },
  { AVR::R1R0, 0U },
  { AVR::R3R2, 2U },
  { AVR::R5R4, 4U },
  { AVR::R7R6, 6U },
  { AVR::R9R8, 8U },
  { AVR::R10R9, 9U },
  { AVR::R11R10, 10U },
  { AVR::R12R11, 11U },
  { AVR::R13R12, 12U },
  { AVR::R14R13, 13U },
  { AVR::R15R14, 14U },
  { AVR::R16R15, 15U },
  { AVR::R17R16, 16U },
  { AVR::R18R17, 17U },
  { AVR::R19R18, 18U },
  { AVR::R20R19, 19U },
  { AVR::R21R20, 20U },
  { AVR::R22R21, 21U },
  { AVR::R23R22, 22U },
  { AVR::R24R23, 23U },
  { AVR::R25R24, 24U },
  { AVR::R26R25, 25U },
  { AVR::R27R26, 26U },
  { AVR::R29R28, 28U },
  { AVR::R31R30, 30U },
};
extern const unsigned AVREHFlavour0L2DwarfSize = array_lengthof(AVREHFlavour0L2Dwarf);

extern const uint16_t AVRRegEncodingTable[] = {
  0,
  32,
  33,
  32,
  14,
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
  4,
  6,
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
  28,
  30,
};
static inline void InitAVRMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(AVRRegDesc, 62, RA, PC, AVRMCRegisterClasses, 27, AVRRegUnitRoots, 35, AVRRegDiffLists, AVRLaneMaskLists, AVRRegStrings, AVRRegClassStrings, AVRSubRegIdxLists, 3,
AVRSubRegIdxRanges, AVRRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(AVRDwarfFlavour0Dwarf2L, AVRDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(AVREHFlavour0Dwarf2L, AVREHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(AVRDwarfFlavour0L2Dwarf, AVRDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(AVREHFlavour0L2Dwarf, AVREHFlavour0L2DwarfSize, true);
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

class AVRFrameLowering;

struct AVRGenRegisterInfo : public TargetRegisterInfo {
  explicit AVRGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
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
  static const AVRFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace AVR { // Register classes
  extern const TargetRegisterClass GPR8RegClass;
  extern const TargetRegisterClass GPR8loRegClass;
  extern const TargetRegisterClass LD8RegClass;
  extern const TargetRegisterClass LD8loRegClass;
  extern const TargetRegisterClass CCRRegClass;
  extern const TargetRegisterClass DREGSRegClass;
  extern const TargetRegisterClass DREGSMOVWRegClass;
  extern const TargetRegisterClass DREGS_WITHOUT_YZ_WORKAROUNDRegClass;
  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8RegClass;
  extern const TargetRegisterClass DREGS_with_sub_lo_in_LD8RegClass;
  extern const TargetRegisterClass DREGS_with_sub_lo_in_GPR8loRegClass;
  extern const TargetRegisterClass DREGS_with_sub_hi_in_GPR8loRegClass;
  extern const TargetRegisterClass DLDREGSRegClass;
  extern const TargetRegisterClass DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8loRegClass;
  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8loRegClass;
  extern const TargetRegisterClass DREGS_with_sub_lo_in_LD8loRegClass;
  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClass;
  extern const TargetRegisterClass DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDRegClass;
  extern const TargetRegisterClass DLDREGS_with_sub_hi_in_LD8loRegClass;
  extern const TargetRegisterClass IWREGSRegClass;
  extern const TargetRegisterClass PTRREGSRegClass;
  extern const TargetRegisterClass DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSRegClass;
  extern const TargetRegisterClass PTRDISPREGSRegClass;
  extern const TargetRegisterClass DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGSRegClass;
  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loRegClass;
  extern const TargetRegisterClass GPRSPRegClass;
  extern const TargetRegisterClass ZREGRegClass;
} // end namespace AVR

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

extern const MCRegisterClass AVRMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i8, MVT::Other,
  /* 2 */ MVT::i16, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_hi", "sub_lo", "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x0000000000000001), // sub_hi
  LaneBitmask(0x0000000000000002), // sub_lo
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 8, 8, 8, VTLists+0 },    // GPR8
  { 8, 8, 8, VTLists+0 },    // GPR8lo
  { 8, 8, 8, VTLists+0 },    // LD8
  { 8, 8, 8, VTLists+0 },    // LD8lo
  { 8, 8, 8, VTLists+0 },    // CCR
  { 16, 16, 8, VTLists+2 },    // DREGS
  { 16, 16, 8, VTLists+2 },    // DREGSMOVW
  { 16, 16, 8, VTLists+2 },    // DREGS_WITHOUT_YZ_WORKAROUND
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_hi_in_LD8
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_lo_in_LD8
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_lo_in_GPR8lo
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_hi_in_GPR8lo
  { 16, 16, 8, VTLists+2 },    // DLDREGS
  { 16, 16, 8, VTLists+2 },    // DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8lo
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_hi_in_LD8lo
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_lo_in_LD8lo
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8
  { 16, 16, 8, VTLists+2 },    // DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUND
  { 16, 16, 8, VTLists+2 },    // DLDREGS_with_sub_hi_in_LD8lo
  { 16, 16, 8, VTLists+2 },    // IWREGS
  { 16, 16, 8, VTLists+2 },    // PTRREGS
  { 16, 16, 8, VTLists+2 },    // DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGS
  { 16, 16, 8, VTLists+2 },    // PTRDISPREGS
  { 16, 16, 8, VTLists+2 },    // DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGS
  { 16, 16, 8, VTLists+2 },    // DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo
  { 16, 16, 8, VTLists+2 },    // GPRSP
  { 16, 16, 8, VTLists+2 },    // ZREG
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t GPR8SubClassMask[] = {
  0x0000000f, 
  0x05ffffe0, // sub_hi
  0x05ffffe0, // sub_lo
};

static const uint32_t GPR8loSubClassMask[] = {
  0x00000002, 
  0x00002800, // sub_hi
  0x01002c00, // sub_lo
};

static const uint32_t LD8SubClassMask[] = {
  0x0000000c, 
  0x05ffd300, // sub_hi
  0x04ff9200, // sub_lo
};

static const uint32_t LD8loSubClassMask[] = {
  0x00000008, 
  0x01054000, // sub_hi
  0x00058000, // sub_lo
};

static const uint32_t CCRSubClassMask[] = {
  0x00000010, 
};

static const uint32_t DREGSSubClassMask[] = {
  0x05ffffe0, 
};

static const uint32_t DREGSMOVWSubClassMask[] = {
  0x04fe30c0, 
};

static const uint32_t DREGS_WITHOUT_YZ_WORKAROUNDSubClassMask[] = {
  0x00a62080, 
};

static const uint32_t DREGS_with_sub_hi_in_LD8SubClassMask[] = {
  0x05ffd300, 
};

static const uint32_t DREGS_with_sub_lo_in_LD8SubClassMask[] = {
  0x04ff9200, 
};

static const uint32_t DREGS_with_sub_lo_in_GPR8loSubClassMask[] = {
  0x01002c00, 
};

static const uint32_t DREGS_with_sub_hi_in_GPR8loSubClassMask[] = {
  0x00002800, 
};

static const uint32_t DLDREGSSubClassMask[] = {
  0x04fe1000, 
};

static const uint32_t DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8loSubClassMask[] = {
  0x00002000, 
};

static const uint32_t DREGS_with_sub_hi_in_LD8loSubClassMask[] = {
  0x01054000, 
};

static const uint32_t DREGS_with_sub_lo_in_LD8loSubClassMask[] = {
  0x00058000, 
};

static const uint32_t DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8SubClassMask[] = {
  0x00050000, 
};

static const uint32_t DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDSubClassMask[] = {
  0x00a60000, 
};

static const uint32_t DLDREGS_with_sub_hi_in_LD8loSubClassMask[] = {
  0x00040000, 
};

static const uint32_t IWREGSSubClassMask[] = {
  0x04f80000, 
};

static const uint32_t PTRREGSSubClassMask[] = {
  0x04d00000, 
};

static const uint32_t DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSSubClassMask[] = {
  0x00a00000, 
};

static const uint32_t PTRDISPREGSSubClassMask[] = {
  0x04400000, 
};

static const uint32_t DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGSSubClassMask[] = {
  0x00800000, 
};

static const uint32_t DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loSubClassMask[] = {
  0x01000000, 
};

static const uint32_t GPRSPSubClassMask[] = {
  0x02000000, 
};

static const uint32_t ZREGSubClassMask[] = {
  0x04000000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 2, 0,
};

static const TargetRegisterClass *const GPR8loSuperclasses[] = {
  &AVR::GPR8RegClass,
  nullptr
};

static const TargetRegisterClass *const LD8Superclasses[] = {
  &AVR::GPR8RegClass,
  nullptr
};

static const TargetRegisterClass *const LD8loSuperclasses[] = {
  &AVR::GPR8RegClass,
  &AVR::LD8RegClass,
  nullptr
};

static const TargetRegisterClass *const DREGSMOVWSuperclasses[] = {
  &AVR::DREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_WITHOUT_YZ_WORKAROUNDSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_hi_in_LD8Superclasses[] = {
  &AVR::DREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_lo_in_LD8Superclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_lo_in_GPR8loSuperclasses[] = {
  &AVR::DREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_hi_in_GPR8loSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGS_with_sub_lo_in_GPR8loRegClass,
  nullptr
};

static const TargetRegisterClass *const DLDREGSSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  nullptr
};

static const TargetRegisterClass *const DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8loSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_WITHOUT_YZ_WORKAROUNDRegClass,
  &AVR::DREGS_with_sub_lo_in_GPR8loRegClass,
  &AVR::DREGS_with_sub_hi_in_GPR8loRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_hi_in_LD8loSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_lo_in_LD8loSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8Superclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DREGS_with_sub_hi_in_LD8loRegClass,
  &AVR::DREGS_with_sub_lo_in_LD8loRegClass,
  nullptr
};

static const TargetRegisterClass *const DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_WITHOUT_YZ_WORKAROUNDRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const DLDREGS_with_sub_hi_in_LD8loSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_WITHOUT_YZ_WORKAROUNDRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGSRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8loRegClass,
  &AVR::DREGS_with_sub_lo_in_LD8loRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDRegClass,
  nullptr
};

static const TargetRegisterClass *const IWREGSSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const PTRREGSSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGSRegClass,
  &AVR::IWREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_WITHOUT_YZ_WORKAROUNDRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGSRegClass,
  &AVR::DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDRegClass,
  &AVR::IWREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const PTRDISPREGSSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGSRegClass,
  &AVR::IWREGSRegClass,
  &AVR::PTRREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGSSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_WITHOUT_YZ_WORKAROUNDRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGSRegClass,
  &AVR::DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDRegClass,
  &AVR::IWREGSRegClass,
  &AVR::PTRREGSRegClass,
  &AVR::DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSRegClass,
  nullptr
};

static const TargetRegisterClass *const DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_GPR8loRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8loRegClass,
  nullptr
};

static const TargetRegisterClass *const ZREGSuperclasses[] = {
  &AVR::DREGSRegClass,
  &AVR::DREGSMOVWRegClass,
  &AVR::DREGS_with_sub_hi_in_LD8RegClass,
  &AVR::DREGS_with_sub_lo_in_LD8RegClass,
  &AVR::DLDREGSRegClass,
  &AVR::IWREGSRegClass,
  &AVR::PTRREGSRegClass,
  &AVR::PTRDISPREGSRegClass,
  nullptr
};


namespace AVR {   // Register class instances
  extern const TargetRegisterClass GPR8RegClass = {
    &AVRMCRegisterClasses[GPR8RegClassID],
    GPR8SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GPR8loRegClass = {
    &AVRMCRegisterClasses[GPR8loRegClassID],
    GPR8loSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GPR8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass LD8RegClass = {
    &AVRMCRegisterClasses[LD8RegClassID],
    LD8SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    LD8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass LD8loRegClass = {
    &AVRMCRegisterClasses[LD8loRegClassID],
    LD8loSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    LD8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CCRRegClass = {
    &AVRMCRegisterClasses[CCRRegClassID],
    CCRSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DREGSRegClass = {
    &AVRMCRegisterClasses[DREGSRegClassID],
    DREGSSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DREGSMOVWRegClass = {
    &AVRMCRegisterClasses[DREGSMOVWRegClassID],
    DREGSMOVWSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGSMOVWSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_WITHOUT_YZ_WORKAROUNDRegClass = {
    &AVRMCRegisterClasses[DREGS_WITHOUT_YZ_WORKAROUNDRegClassID],
    DREGS_WITHOUT_YZ_WORKAROUNDSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_WITHOUT_YZ_WORKAROUNDSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8RegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_hi_in_LD8RegClassID],
    DREGS_with_sub_hi_in_LD8SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_hi_in_LD8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_lo_in_LD8RegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_lo_in_LD8RegClassID],
    DREGS_with_sub_lo_in_LD8SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_lo_in_LD8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_lo_in_GPR8loRegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_lo_in_GPR8loRegClassID],
    DREGS_with_sub_lo_in_GPR8loSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_lo_in_GPR8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_hi_in_GPR8loRegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_hi_in_GPR8loRegClassID],
    DREGS_with_sub_hi_in_GPR8loSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_hi_in_GPR8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DLDREGSRegClass = {
    &AVRMCRegisterClasses[DLDREGSRegClassID],
    DLDREGSSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DLDREGSSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8loRegClass = {
    &AVRMCRegisterClasses[DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8loRegClassID],
    DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8loSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8loRegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_hi_in_LD8loRegClassID],
    DREGS_with_sub_hi_in_LD8loSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_hi_in_LD8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_lo_in_LD8loRegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_lo_in_LD8loRegClassID],
    DREGS_with_sub_lo_in_LD8loSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_lo_in_LD8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClassID],
    DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDRegClass = {
    &AVRMCRegisterClasses[DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDRegClassID],
    DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DLDREGS_with_sub_hi_in_LD8loRegClass = {
    &AVRMCRegisterClasses[DLDREGS_with_sub_hi_in_LD8loRegClassID],
    DLDREGS_with_sub_hi_in_LD8loSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DLDREGS_with_sub_hi_in_LD8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass IWREGSRegClass = {
    &AVRMCRegisterClasses[IWREGSRegClassID],
    IWREGSSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    IWREGSSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass PTRREGSRegClass = {
    &AVRMCRegisterClasses[PTRREGSRegClassID],
    PTRREGSSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    PTRREGSSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSRegClass = {
    &AVRMCRegisterClasses[DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSRegClassID],
    DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass PTRDISPREGSRegClass = {
    &AVRMCRegisterClasses[PTRDISPREGSRegClassID],
    PTRDISPREGSSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    PTRDISPREGSSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGSRegClass = {
    &AVRMCRegisterClasses[DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGSRegClassID],
    DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGSSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGSSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loRegClass = {
    &AVRMCRegisterClasses[DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loRegClassID],
    DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GPRSPRegClass = {
    &AVRMCRegisterClasses[GPRSPRegClassID],
    GPRSPSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass ZREGRegClass = {
    &AVRMCRegisterClasses[ZREGRegClassID],
    ZREGSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    ZREGSuperclasses,
    nullptr
  };

} // end namespace AVR

namespace {
  const TargetRegisterClass *const RegisterClasses[] = {
    &AVR::GPR8RegClass,
    &AVR::GPR8loRegClass,
    &AVR::LD8RegClass,
    &AVR::LD8loRegClass,
    &AVR::CCRRegClass,
    &AVR::DREGSRegClass,
    &AVR::DREGSMOVWRegClass,
    &AVR::DREGS_WITHOUT_YZ_WORKAROUNDRegClass,
    &AVR::DREGS_with_sub_hi_in_LD8RegClass,
    &AVR::DREGS_with_sub_lo_in_LD8RegClass,
    &AVR::DREGS_with_sub_lo_in_GPR8loRegClass,
    &AVR::DREGS_with_sub_hi_in_GPR8loRegClass,
    &AVR::DLDREGSRegClass,
    &AVR::DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8loRegClass,
    &AVR::DREGS_with_sub_hi_in_LD8loRegClass,
    &AVR::DREGS_with_sub_lo_in_LD8loRegClass,
    &AVR::DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8RegClass,
    &AVR::DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUNDRegClass,
    &AVR::DLDREGS_with_sub_hi_in_LD8loRegClass,
    &AVR::IWREGSRegClass,
    &AVR::PTRREGSRegClass,
    &AVR::DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGSRegClass,
    &AVR::PTRDISPREGSRegClass,
    &AVR::DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGSRegClass,
    &AVR::DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8loRegClass,
    &AVR::GPRSPRegClass,
    &AVR::ZREGRegClass,
  };
} // end anonymous namespace

static const uint8_t CostPerUseTable[] = { 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };


static const bool InAllocatableClassTable[] = { 
false, true, false, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, };


static const TargetRegisterInfoDesc AVRRegInfoDesc = { // Extra Descriptors
CostPerUseTable, 1, InAllocatableClassTable};

unsigned AVRGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][2] = {
    { 0, 0, },
  };

  --IdxA; assert(IdxA < 2);
  --IdxB; assert(IdxB < 2);
  return Rows[0][IdxB];
}

  struct MaskRolOp {
    LaneBitmask Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp LaneMaskComposeSequences[] = {
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  0 }, { LaneBitmask::getNone(), 0 },   // Sequence 0
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  1 }, { LaneBitmask::getNone(), 0 }  // Sequence 2
  };
  static const MaskRolOp *const CompositeSequences[] = {
    &LaneMaskComposeSequences[0], // to sub_hi
    &LaneMaskComposeSequences[2] // to sub_lo
  };

LaneBitmask AVRGenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
  --IdxA; assert(IdxA < 2 && "Subregister index out of bounds");
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

LaneBitmask AVRGenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
  LaneMask &= getSubRegIndexLaneMask(IdxA);
  --IdxA; assert(IdxA < 2 && "Subregister index out of bounds");
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

const TargetRegisterClass *AVRGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[27][2] = {
    {	// GPR8
      0,	// sub_hi
      0,	// sub_lo
    },
    {	// GPR8lo
      0,	// sub_hi
      0,	// sub_lo
    },
    {	// LD8
      0,	// sub_hi
      0,	// sub_lo
    },
    {	// LD8lo
      0,	// sub_hi
      0,	// sub_lo
    },
    {	// CCR
      0,	// sub_hi
      0,	// sub_lo
    },
    {	// DREGS
      6,	// sub_hi -> DREGS
      6,	// sub_lo -> DREGS
    },
    {	// DREGSMOVW
      7,	// sub_hi -> DREGSMOVW
      7,	// sub_lo -> DREGSMOVW
    },
    {	// DREGS_WITHOUT_YZ_WORKAROUND
      8,	// sub_hi -> DREGS_WITHOUT_YZ_WORKAROUND
      8,	// sub_lo -> DREGS_WITHOUT_YZ_WORKAROUND
    },
    {	// DREGS_with_sub_hi_in_LD8
      9,	// sub_hi -> DREGS_with_sub_hi_in_LD8
      9,	// sub_lo -> DREGS_with_sub_hi_in_LD8
    },
    {	// DREGS_with_sub_lo_in_LD8
      10,	// sub_hi -> DREGS_with_sub_lo_in_LD8
      10,	// sub_lo -> DREGS_with_sub_lo_in_LD8
    },
    {	// DREGS_with_sub_lo_in_GPR8lo
      11,	// sub_hi -> DREGS_with_sub_lo_in_GPR8lo
      11,	// sub_lo -> DREGS_with_sub_lo_in_GPR8lo
    },
    {	// DREGS_with_sub_hi_in_GPR8lo
      12,	// sub_hi -> DREGS_with_sub_hi_in_GPR8lo
      12,	// sub_lo -> DREGS_with_sub_hi_in_GPR8lo
    },
    {	// DLDREGS
      13,	// sub_hi -> DLDREGS
      13,	// sub_lo -> DLDREGS
    },
    {	// DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8lo
      14,	// sub_hi -> DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8lo
      14,	// sub_lo -> DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8lo
    },
    {	// DREGS_with_sub_hi_in_LD8lo
      15,	// sub_hi -> DREGS_with_sub_hi_in_LD8lo
      15,	// sub_lo -> DREGS_with_sub_hi_in_LD8lo
    },
    {	// DREGS_with_sub_lo_in_LD8lo
      16,	// sub_hi -> DREGS_with_sub_lo_in_LD8lo
      16,	// sub_lo -> DREGS_with_sub_lo_in_LD8lo
    },
    {	// DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8
      17,	// sub_hi -> DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8
      17,	// sub_lo -> DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8
    },
    {	// DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUND
      18,	// sub_hi -> DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUND
      18,	// sub_lo -> DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUND
    },
    {	// DLDREGS_with_sub_hi_in_LD8lo
      19,	// sub_hi -> DLDREGS_with_sub_hi_in_LD8lo
      19,	// sub_lo -> DLDREGS_with_sub_hi_in_LD8lo
    },
    {	// IWREGS
      20,	// sub_hi -> IWREGS
      20,	// sub_lo -> IWREGS
    },
    {	// PTRREGS
      21,	// sub_hi -> PTRREGS
      21,	// sub_lo -> PTRREGS
    },
    {	// DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGS
      22,	// sub_hi -> DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGS
      22,	// sub_lo -> DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGS
    },
    {	// PTRDISPREGS
      23,	// sub_hi -> PTRDISPREGS
      23,	// sub_lo -> PTRDISPREGS
    },
    {	// DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGS
      24,	// sub_hi -> DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGS
      24,	// sub_lo -> DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGS
    },
    {	// DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo
      25,	// sub_hi -> DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo
      25,	// sub_lo -> DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo
    },
    {	// GPRSP
      26,	// sub_hi -> GPRSP
      26,	// sub_lo -> GPRSP
    },
    {	// ZREG
      27,	// sub_hi -> ZREG
      27,	// sub_lo -> ZREG
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 2 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &AVRGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 32},  	// GPR8
    {1, 16},  	// GPR8lo
    {1, 16},  	// LD8
    {1, 8},  	// LD8lo
    {1, 1},  	// CCR
    {2, 32},  	// DREGS
    {2, 32},  	// DREGSMOVW
    {2, 28},  	// DREGS_WITHOUT_YZ_WORKAROUND
    {2, 17},  	// DREGS_with_sub_hi_in_LD8
    {2, 16},  	// DREGS_with_sub_lo_in_LD8
    {2, 17},  	// DREGS_with_sub_lo_in_GPR8lo
    {2, 16},  	// DREGS_with_sub_hi_in_GPR8lo
    {2, 16},  	// DLDREGS
    {2, 16},  	// DREGSMOVW_and_DREGS_with_sub_hi_in_GPR8lo
    {2, 9},  	// DREGS_with_sub_hi_in_LD8lo
    {2, 9},  	// DREGS_with_sub_lo_in_LD8lo
    {2, 8},  	// DREGS_with_sub_hi_in_LD8lo_and_DREGS_with_sub_lo_in_LD8
    {2, 12},  	// DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUND
    {2, 8},  	// DLDREGS_with_sub_hi_in_LD8lo
    {2, 8},  	// IWREGS
    {2, 6},  	// PTRREGS
    {2, 4},  	// DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGS
    {2, 4},  	// PTRDISPREGS
    {2, 2},  	// DREGS_WITHOUT_YZ_WORKAROUND_and_PTRREGS
    {2, 2},  	// DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo
    {2, 2},  	// GPRSP
    {2, 2},  	// ZREG
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned AVRGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 35 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned AVRGenRegisterInfo::getNumRegPressureSets() const {
  return 12;
}

// Get the name of this register unit pressure set.
const char *AVRGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "CCR",
    "DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo",
    "GPRSP",
    "DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGS",
    "IWREGS",
    "LD8lo",
    "DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUND",
    "LD8",
    "GPR8lo",
    "GPR8lo_with_LD8lo",
    "DREGS_WITHOUT_YZ_WORKAROUND",
    "GPR8",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned AVRGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    1,  	// 0: CCR
    2,  	// 1: DREGS_with_sub_hi_in_LD8_and_DREGS_with_sub_lo_in_GPR8lo
    2,  	// 2: GPRSP
    4,  	// 3: DREGS_WITHOUT_YZ_WORKAROUND_and_IWREGS
    8,  	// 4: IWREGS
    10,  	// 5: LD8lo
    13,  	// 6: DLDREGS_and_DREGS_WITHOUT_YZ_WORKAROUND
    17,  	// 7: LD8
    17,  	// 8: GPR8lo
    25,  	// 9: GPR8lo_with_LD8lo
    28,  	// 10: DREGS_WITHOUT_YZ_WORKAROUND
    32,  	// 11: GPR8
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 0, -1,
  /* 2 */ 2, -1,
  /* 4 */ 4, 7, 11, -1,
  /* 8 */ 3, 4, 6, 7, 10, 11, -1,
  /* 15 */ 3, 4, 5, 6, 7, 9, 10, 11, -1,
  /* 24 */ 1, 5, 6, 7, 8, 9, 10, 11, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int *AVRGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    6,28,5,17,0,6,6,12,5,5,28,28,5,28,17,17,17,10,17,4,4,8,4,8,24,2,4,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int *AVRGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 35 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    2,2,0,28,28,28,28,28,28,28,28,28,28,28,28,28,28,28,24,24,17,17,17,17,17,17,17,15,8,8,8,4,4,4,4,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc AVRRegDesc[];
extern const MCPhysReg AVRRegDiffLists[];
extern const LaneBitmask AVRLaneMaskLists[];
extern const char AVRRegStrings[];
extern const char AVRRegClassStrings[];
extern const MCPhysReg AVRRegUnitRoots[][2];
extern const uint16_t AVRSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits AVRSubRegIdxRanges[];
extern const uint16_t AVRRegEncodingTable[];
// AVR Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair AVRDwarfFlavour0Dwarf2L[];
extern const unsigned AVRDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair AVREHFlavour0Dwarf2L[];
extern const unsigned AVREHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair AVRDwarfFlavour0L2Dwarf[];
extern const unsigned AVRDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair AVREHFlavour0L2Dwarf[];
extern const unsigned AVREHFlavour0L2DwarfSize;

AVRGenRegisterInfo::
AVRGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(&AVRRegInfoDesc, RegisterClasses, RegisterClasses+27,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFFFFFFFFFF), RegClassInfos, HwMode) {
  InitMCRegisterInfo(AVRRegDesc, 62, RA, PC,
                     AVRMCRegisterClasses, 27,
                     AVRRegUnitRoots,
                     35,
                     AVRRegDiffLists,
                     AVRLaneMaskLists,
                     AVRRegStrings,
                     AVRRegClassStrings,
                     AVRSubRegIdxLists,
                     3,
                     AVRSubRegIdxRanges,
                     AVRRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(AVRDwarfFlavour0Dwarf2L, AVRDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(AVREHFlavour0Dwarf2L, AVREHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(AVRDwarfFlavour0L2Dwarf, AVRDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(AVREHFlavour0L2Dwarf, AVREHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_Interrupts_SaveList[] = { AVR::R31, AVR::R30, AVR::R29, AVR::R28, AVR::R27, AVR::R26, AVR::R25, AVR::R24, AVR::R23, AVR::R22, AVR::R21, AVR::R20, AVR::R19, AVR::R18, AVR::R17, AVR::R16, AVR::R15, AVR::R14, AVR::R13, AVR::R12, AVR::R11, AVR::R10, AVR::R9, AVR::R8, AVR::R7, AVR::R6, AVR::R5, AVR::R4, AVR::R3, AVR::R2, AVR::R1, AVR::R0, 0 };
static const uint32_t CSR_Interrupts_RegMask[] = { 0xffffffe0, 0x3fffffff, };
static const MCPhysReg CSR_Normal_SaveList[] = { AVR::R29, AVR::R28, AVR::R17, AVR::R16, AVR::R15, AVR::R14, AVR::R13, AVR::R12, AVR::R11, AVR::R10, AVR::R9, AVR::R8, AVR::R7, AVR::R6, AVR::R5, AVR::R4, AVR::R3, AVR::R2, 0 };
static const uint32_t CSR_Normal_RegMask[] = { 0x007fff80, 0x1003ffc6, };


ArrayRef<const uint32_t *> AVRGenRegisterInfo::getRegMasks() const {
  static const uint32_t *const Masks[] = {
    CSR_Interrupts_RegMask,
    CSR_Normal_RegMask,
  };
  return makeArrayRef(Masks);
}

ArrayRef<const char *> AVRGenRegisterInfo::getRegMaskNames() const {
  static const char *const Names[] = {
    "CSR_Interrupts",
    "CSR_Normal",
  };
  return makeArrayRef(Names);
}

const AVRFrameLowering *
AVRGenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const AVRFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC

