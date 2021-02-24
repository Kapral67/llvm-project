/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace Mips {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    INLINEASM_BR	= 2,
    CFI_INSTRUCTION	= 3,
    EH_LABEL	= 4,
    GC_LABEL	= 5,
    ANNOTATION_LABEL	= 6,
    KILL	= 7,
    EXTRACT_SUBREG	= 8,
    INSERT_SUBREG	= 9,
    IMPLICIT_DEF	= 10,
    SUBREG_TO_REG	= 11,
    COPY_TO_REGCLASS	= 12,
    DBG_VALUE	= 13,
    DBG_INSTR_REF	= 14,
    DBG_LABEL	= 15,
    REG_SEQUENCE	= 16,
    COPY	= 17,
    BUNDLE	= 18,
    LIFETIME_START	= 19,
    LIFETIME_END	= 20,
    PSEUDO_PROBE	= 21,
    STACKMAP	= 22,
    FENTRY_CALL	= 23,
    PATCHPOINT	= 24,
    LOAD_STACK_GUARD	= 25,
    PREALLOCATED_SETUP	= 26,
    PREALLOCATED_ARG	= 27,
    STATEPOINT	= 28,
    LOCAL_ESCAPE	= 29,
    FAULTING_OP	= 30,
    PATCHABLE_OP	= 31,
    PATCHABLE_FUNCTION_ENTER	= 32,
    PATCHABLE_RET	= 33,
    PATCHABLE_FUNCTION_EXIT	= 34,
    PATCHABLE_TAIL_CALL	= 35,
    PATCHABLE_EVENT_CALL	= 36,
    PATCHABLE_TYPED_EVENT_CALL	= 37,
    ICALL_BRANCH_FUNNEL	= 38,
    G_ASSERT_ZEXT	= 39,
    G_ADD	= 40,
    G_SUB	= 41,
    G_MUL	= 42,
    G_SDIV	= 43,
    G_UDIV	= 44,
    G_SREM	= 45,
    G_UREM	= 46,
    G_AND	= 47,
    G_OR	= 48,
    G_XOR	= 49,
    G_IMPLICIT_DEF	= 50,
    G_PHI	= 51,
    G_FRAME_INDEX	= 52,
    G_GLOBAL_VALUE	= 53,
    G_EXTRACT	= 54,
    G_UNMERGE_VALUES	= 55,
    G_INSERT	= 56,
    G_MERGE_VALUES	= 57,
    G_BUILD_VECTOR	= 58,
    G_BUILD_VECTOR_TRUNC	= 59,
    G_CONCAT_VECTORS	= 60,
    G_PTRTOINT	= 61,
    G_INTTOPTR	= 62,
    G_BITCAST	= 63,
    G_FREEZE	= 64,
    G_INTRINSIC_TRUNC	= 65,
    G_INTRINSIC_ROUND	= 66,
    G_INTRINSIC_LRINT	= 67,
    G_INTRINSIC_ROUNDEVEN	= 68,
    G_READCYCLECOUNTER	= 69,
    G_LOAD	= 70,
    G_SEXTLOAD	= 71,
    G_ZEXTLOAD	= 72,
    G_INDEXED_LOAD	= 73,
    G_INDEXED_SEXTLOAD	= 74,
    G_INDEXED_ZEXTLOAD	= 75,
    G_STORE	= 76,
    G_INDEXED_STORE	= 77,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 78,
    G_ATOMIC_CMPXCHG	= 79,
    G_ATOMICRMW_XCHG	= 80,
    G_ATOMICRMW_ADD	= 81,
    G_ATOMICRMW_SUB	= 82,
    G_ATOMICRMW_AND	= 83,
    G_ATOMICRMW_NAND	= 84,
    G_ATOMICRMW_OR	= 85,
    G_ATOMICRMW_XOR	= 86,
    G_ATOMICRMW_MAX	= 87,
    G_ATOMICRMW_MIN	= 88,
    G_ATOMICRMW_UMAX	= 89,
    G_ATOMICRMW_UMIN	= 90,
    G_ATOMICRMW_FADD	= 91,
    G_ATOMICRMW_FSUB	= 92,
    G_FENCE	= 93,
    G_BRCOND	= 94,
    G_BRINDIRECT	= 95,
    G_INTRINSIC	= 96,
    G_INTRINSIC_W_SIDE_EFFECTS	= 97,
    G_ANYEXT	= 98,
    G_TRUNC	= 99,
    G_CONSTANT	= 100,
    G_FCONSTANT	= 101,
    G_VASTART	= 102,
    G_VAARG	= 103,
    G_SEXT	= 104,
    G_SEXT_INREG	= 105,
    G_ZEXT	= 106,
    G_SHL	= 107,
    G_LSHR	= 108,
    G_ASHR	= 109,
    G_FSHL	= 110,
    G_FSHR	= 111,
    G_ICMP	= 112,
    G_FCMP	= 113,
    G_SELECT	= 114,
    G_UADDO	= 115,
    G_UADDE	= 116,
    G_USUBO	= 117,
    G_USUBE	= 118,
    G_SADDO	= 119,
    G_SADDE	= 120,
    G_SSUBO	= 121,
    G_SSUBE	= 122,
    G_UMULO	= 123,
    G_SMULO	= 124,
    G_UMULH	= 125,
    G_SMULH	= 126,
    G_UADDSAT	= 127,
    G_SADDSAT	= 128,
    G_USUBSAT	= 129,
    G_SSUBSAT	= 130,
    G_USHLSAT	= 131,
    G_SSHLSAT	= 132,
    G_SMULFIX	= 133,
    G_UMULFIX	= 134,
    G_SMULFIXSAT	= 135,
    G_UMULFIXSAT	= 136,
    G_SDIVFIX	= 137,
    G_UDIVFIX	= 138,
    G_SDIVFIXSAT	= 139,
    G_UDIVFIXSAT	= 140,
    G_FADD	= 141,
    G_FSUB	= 142,
    G_FMUL	= 143,
    G_FMA	= 144,
    G_FMAD	= 145,
    G_FDIV	= 146,
    G_FREM	= 147,
    G_FPOW	= 148,
    G_FPOWI	= 149,
    G_FEXP	= 150,
    G_FEXP2	= 151,
    G_FLOG	= 152,
    G_FLOG2	= 153,
    G_FLOG10	= 154,
    G_FNEG	= 155,
    G_FPEXT	= 156,
    G_FPTRUNC	= 157,
    G_FPTOSI	= 158,
    G_FPTOUI	= 159,
    G_SITOFP	= 160,
    G_UITOFP	= 161,
    G_FABS	= 162,
    G_FCOPYSIGN	= 163,
    G_FCANONICALIZE	= 164,
    G_FMINNUM	= 165,
    G_FMAXNUM	= 166,
    G_FMINNUM_IEEE	= 167,
    G_FMAXNUM_IEEE	= 168,
    G_FMINIMUM	= 169,
    G_FMAXIMUM	= 170,
    G_PTR_ADD	= 171,
    G_PTRMASK	= 172,
    G_SMIN	= 173,
    G_SMAX	= 174,
    G_UMIN	= 175,
    G_UMAX	= 176,
    G_ABS	= 177,
    G_BR	= 178,
    G_BRJT	= 179,
    G_INSERT_VECTOR_ELT	= 180,
    G_EXTRACT_VECTOR_ELT	= 181,
    G_SHUFFLE_VECTOR	= 182,
    G_CTTZ	= 183,
    G_CTTZ_ZERO_UNDEF	= 184,
    G_CTLZ	= 185,
    G_CTLZ_ZERO_UNDEF	= 186,
    G_CTPOP	= 187,
    G_BSWAP	= 188,
    G_BITREVERSE	= 189,
    G_FCEIL	= 190,
    G_FCOS	= 191,
    G_FSIN	= 192,
    G_FSQRT	= 193,
    G_FFLOOR	= 194,
    G_FRINT	= 195,
    G_FNEARBYINT	= 196,
    G_ADDRSPACE_CAST	= 197,
    G_BLOCK_ADDR	= 198,
    G_JUMP_TABLE	= 199,
    G_DYN_STACKALLOC	= 200,
    G_STRICT_FADD	= 201,
    G_STRICT_FSUB	= 202,
    G_STRICT_FMUL	= 203,
    G_STRICT_FDIV	= 204,
    G_STRICT_FREM	= 205,
    G_STRICT_FMA	= 206,
    G_STRICT_FSQRT	= 207,
    G_READ_REGISTER	= 208,
    G_WRITE_REGISTER	= 209,
    G_MEMCPY	= 210,
    G_MEMMOVE	= 211,
    G_MEMSET	= 212,
    G_VECREDUCE_SEQ_FADD	= 213,
    G_VECREDUCE_SEQ_FMUL	= 214,
    G_VECREDUCE_FADD	= 215,
    G_VECREDUCE_FMUL	= 216,
    G_VECREDUCE_FMAX	= 217,
    G_VECREDUCE_FMIN	= 218,
    G_VECREDUCE_ADD	= 219,
    G_VECREDUCE_MUL	= 220,
    G_VECREDUCE_AND	= 221,
    G_VECREDUCE_OR	= 222,
    G_VECREDUCE_XOR	= 223,
    G_VECREDUCE_SMAX	= 224,
    G_VECREDUCE_SMIN	= 225,
    G_VECREDUCE_UMAX	= 226,
    G_VECREDUCE_UMIN	= 227,
    ABSMacro	= 228,
    ADJCALLSTACKDOWN	= 229,
    ADJCALLSTACKUP	= 230,
    AND_V_D_PSEUDO	= 231,
    AND_V_H_PSEUDO	= 232,
    AND_V_W_PSEUDO	= 233,
    ATOMIC_CMP_SWAP_I16	= 234,
    ATOMIC_CMP_SWAP_I16_POSTRA	= 235,
    ATOMIC_CMP_SWAP_I32	= 236,
    ATOMIC_CMP_SWAP_I32_POSTRA	= 237,
    ATOMIC_CMP_SWAP_I64	= 238,
    ATOMIC_CMP_SWAP_I64_POSTRA	= 239,
    ATOMIC_CMP_SWAP_I8	= 240,
    ATOMIC_CMP_SWAP_I8_POSTRA	= 241,
    ATOMIC_LOAD_ADD_I16	= 242,
    ATOMIC_LOAD_ADD_I16_POSTRA	= 243,
    ATOMIC_LOAD_ADD_I32	= 244,
    ATOMIC_LOAD_ADD_I32_POSTRA	= 245,
    ATOMIC_LOAD_ADD_I64	= 246,
    ATOMIC_LOAD_ADD_I64_POSTRA	= 247,
    ATOMIC_LOAD_ADD_I8	= 248,
    ATOMIC_LOAD_ADD_I8_POSTRA	= 249,
    ATOMIC_LOAD_AND_I16	= 250,
    ATOMIC_LOAD_AND_I16_POSTRA	= 251,
    ATOMIC_LOAD_AND_I32	= 252,
    ATOMIC_LOAD_AND_I32_POSTRA	= 253,
    ATOMIC_LOAD_AND_I64	= 254,
    ATOMIC_LOAD_AND_I64_POSTRA	= 255,
    ATOMIC_LOAD_AND_I8	= 256,
    ATOMIC_LOAD_AND_I8_POSTRA	= 257,
    ATOMIC_LOAD_MAX_I16	= 258,
    ATOMIC_LOAD_MAX_I16_POSTRA	= 259,
    ATOMIC_LOAD_MAX_I32	= 260,
    ATOMIC_LOAD_MAX_I32_POSTRA	= 261,
    ATOMIC_LOAD_MAX_I64	= 262,
    ATOMIC_LOAD_MAX_I64_POSTRA	= 263,
    ATOMIC_LOAD_MAX_I8	= 264,
    ATOMIC_LOAD_MAX_I8_POSTRA	= 265,
    ATOMIC_LOAD_MIN_I16	= 266,
    ATOMIC_LOAD_MIN_I16_POSTRA	= 267,
    ATOMIC_LOAD_MIN_I32	= 268,
    ATOMIC_LOAD_MIN_I32_POSTRA	= 269,
    ATOMIC_LOAD_MIN_I64	= 270,
    ATOMIC_LOAD_MIN_I64_POSTRA	= 271,
    ATOMIC_LOAD_MIN_I8	= 272,
    ATOMIC_LOAD_MIN_I8_POSTRA	= 273,
    ATOMIC_LOAD_NAND_I16	= 274,
    ATOMIC_LOAD_NAND_I16_POSTRA	= 275,
    ATOMIC_LOAD_NAND_I32	= 276,
    ATOMIC_LOAD_NAND_I32_POSTRA	= 277,
    ATOMIC_LOAD_NAND_I64	= 278,
    ATOMIC_LOAD_NAND_I64_POSTRA	= 279,
    ATOMIC_LOAD_NAND_I8	= 280,
    ATOMIC_LOAD_NAND_I8_POSTRA	= 281,
    ATOMIC_LOAD_OR_I16	= 282,
    ATOMIC_LOAD_OR_I16_POSTRA	= 283,
    ATOMIC_LOAD_OR_I32	= 284,
    ATOMIC_LOAD_OR_I32_POSTRA	= 285,
    ATOMIC_LOAD_OR_I64	= 286,
    ATOMIC_LOAD_OR_I64_POSTRA	= 287,
    ATOMIC_LOAD_OR_I8	= 288,
    ATOMIC_LOAD_OR_I8_POSTRA	= 289,
    ATOMIC_LOAD_SUB_I16	= 290,
    ATOMIC_LOAD_SUB_I16_POSTRA	= 291,
    ATOMIC_LOAD_SUB_I32	= 292,
    ATOMIC_LOAD_SUB_I32_POSTRA	= 293,
    ATOMIC_LOAD_SUB_I64	= 294,
    ATOMIC_LOAD_SUB_I64_POSTRA	= 295,
    ATOMIC_LOAD_SUB_I8	= 296,
    ATOMIC_LOAD_SUB_I8_POSTRA	= 297,
    ATOMIC_LOAD_UMAX_I16	= 298,
    ATOMIC_LOAD_UMAX_I16_POSTRA	= 299,
    ATOMIC_LOAD_UMAX_I32	= 300,
    ATOMIC_LOAD_UMAX_I32_POSTRA	= 301,
    ATOMIC_LOAD_UMAX_I64	= 302,
    ATOMIC_LOAD_UMAX_I64_POSTRA	= 303,
    ATOMIC_LOAD_UMAX_I8	= 304,
    ATOMIC_LOAD_UMAX_I8_POSTRA	= 305,
    ATOMIC_LOAD_UMIN_I16	= 306,
    ATOMIC_LOAD_UMIN_I16_POSTRA	= 307,
    ATOMIC_LOAD_UMIN_I32	= 308,
    ATOMIC_LOAD_UMIN_I32_POSTRA	= 309,
    ATOMIC_LOAD_UMIN_I64	= 310,
    ATOMIC_LOAD_UMIN_I64_POSTRA	= 311,
    ATOMIC_LOAD_UMIN_I8	= 312,
    ATOMIC_LOAD_UMIN_I8_POSTRA	= 313,
    ATOMIC_LOAD_XOR_I16	= 314,
    ATOMIC_LOAD_XOR_I16_POSTRA	= 315,
    ATOMIC_LOAD_XOR_I32	= 316,
    ATOMIC_LOAD_XOR_I32_POSTRA	= 317,
    ATOMIC_LOAD_XOR_I64	= 318,
    ATOMIC_LOAD_XOR_I64_POSTRA	= 319,
    ATOMIC_LOAD_XOR_I8	= 320,
    ATOMIC_LOAD_XOR_I8_POSTRA	= 321,
    ATOMIC_SWAP_I16	= 322,
    ATOMIC_SWAP_I16_POSTRA	= 323,
    ATOMIC_SWAP_I32	= 324,
    ATOMIC_SWAP_I32_POSTRA	= 325,
    ATOMIC_SWAP_I64	= 326,
    ATOMIC_SWAP_I64_POSTRA	= 327,
    ATOMIC_SWAP_I8	= 328,
    ATOMIC_SWAP_I8_POSTRA	= 329,
    B	= 330,
    BAL_BR	= 331,
    BAL_BR_MM	= 332,
    BEQLImmMacro	= 333,
    BGE	= 334,
    BGEImmMacro	= 335,
    BGEL	= 336,
    BGELImmMacro	= 337,
    BGEU	= 338,
    BGEUImmMacro	= 339,
    BGEUL	= 340,
    BGEULImmMacro	= 341,
    BGT	= 342,
    BGTImmMacro	= 343,
    BGTL	= 344,
    BGTLImmMacro	= 345,
    BGTU	= 346,
    BGTUImmMacro	= 347,
    BGTUL	= 348,
    BGTULImmMacro	= 349,
    BLE	= 350,
    BLEImmMacro	= 351,
    BLEL	= 352,
    BLELImmMacro	= 353,
    BLEU	= 354,
    BLEUImmMacro	= 355,
    BLEUL	= 356,
    BLEULImmMacro	= 357,
    BLT	= 358,
    BLTImmMacro	= 359,
    BLTL	= 360,
    BLTLImmMacro	= 361,
    BLTU	= 362,
    BLTUImmMacro	= 363,
    BLTUL	= 364,
    BLTULImmMacro	= 365,
    BNELImmMacro	= 366,
    BPOSGE32_PSEUDO	= 367,
    BSEL_D_PSEUDO	= 368,
    BSEL_FD_PSEUDO	= 369,
    BSEL_FW_PSEUDO	= 370,
    BSEL_H_PSEUDO	= 371,
    BSEL_W_PSEUDO	= 372,
    B_MM	= 373,
    B_MMR6_Pseudo	= 374,
    B_MM_Pseudo	= 375,
    BeqImm	= 376,
    BneImm	= 377,
    BteqzT8CmpX16	= 378,
    BteqzT8CmpiX16	= 379,
    BteqzT8SltX16	= 380,
    BteqzT8SltiX16	= 381,
    BteqzT8SltiuX16	= 382,
    BteqzT8SltuX16	= 383,
    BtnezT8CmpX16	= 384,
    BtnezT8CmpiX16	= 385,
    BtnezT8SltX16	= 386,
    BtnezT8SltiX16	= 387,
    BtnezT8SltiuX16	= 388,
    BtnezT8SltuX16	= 389,
    BuildPairF64	= 390,
    BuildPairF64_64	= 391,
    CFTC1	= 392,
    CONSTPOOL_ENTRY	= 393,
    COPY_FD_PSEUDO	= 394,
    COPY_FW_PSEUDO	= 395,
    CTTC1	= 396,
    Constant32	= 397,
    DMULImmMacro	= 398,
    DMULMacro	= 399,
    DMULOMacro	= 400,
    DMULOUMacro	= 401,
    DROL	= 402,
    DROLImm	= 403,
    DROR	= 404,
    DRORImm	= 405,
    DSDivIMacro	= 406,
    DSDivMacro	= 407,
    DSRemIMacro	= 408,
    DSRemMacro	= 409,
    DUDivIMacro	= 410,
    DUDivMacro	= 411,
    DURemIMacro	= 412,
    DURemMacro	= 413,
    ERet	= 414,
    ExtractElementF64	= 415,
    ExtractElementF64_64	= 416,
    FABS_D	= 417,
    FABS_W	= 418,
    FEXP2_D_1_PSEUDO	= 419,
    FEXP2_W_1_PSEUDO	= 420,
    FILL_FD_PSEUDO	= 421,
    FILL_FW_PSEUDO	= 422,
    GotPrologue16	= 423,
    INSERT_B_VIDX64_PSEUDO	= 424,
    INSERT_B_VIDX_PSEUDO	= 425,
    INSERT_D_VIDX64_PSEUDO	= 426,
    INSERT_D_VIDX_PSEUDO	= 427,
    INSERT_FD_PSEUDO	= 428,
    INSERT_FD_VIDX64_PSEUDO	= 429,
    INSERT_FD_VIDX_PSEUDO	= 430,
    INSERT_FW_PSEUDO	= 431,
    INSERT_FW_VIDX64_PSEUDO	= 432,
    INSERT_FW_VIDX_PSEUDO	= 433,
    INSERT_H_VIDX64_PSEUDO	= 434,
    INSERT_H_VIDX_PSEUDO	= 435,
    INSERT_W_VIDX64_PSEUDO	= 436,
    INSERT_W_VIDX_PSEUDO	= 437,
    JALR64Pseudo	= 438,
    JALRHB64Pseudo	= 439,
    JALRHBPseudo	= 440,
    JALRPseudo	= 441,
    JAL_MMR6	= 442,
    JalOneReg	= 443,
    JalTwoReg	= 444,
    LDMacro	= 445,
    LDR_D	= 446,
    LDR_W	= 447,
    LD_F16	= 448,
    LOAD_ACC128	= 449,
    LOAD_ACC64	= 450,
    LOAD_ACC64DSP	= 451,
    LOAD_CCOND_DSP	= 452,
    LONG_BRANCH_ADDiu	= 453,
    LONG_BRANCH_ADDiu2Op	= 454,
    LONG_BRANCH_DADDiu	= 455,
    LONG_BRANCH_DADDiu2Op	= 456,
    LONG_BRANCH_LUi	= 457,
    LONG_BRANCH_LUi2Op	= 458,
    LONG_BRANCH_LUi2Op_64	= 459,
    LWM_MM	= 460,
    LoadAddrImm32	= 461,
    LoadAddrImm64	= 462,
    LoadAddrReg32	= 463,
    LoadAddrReg64	= 464,
    LoadImm32	= 465,
    LoadImm64	= 466,
    LoadImmDoubleFGR	= 467,
    LoadImmDoubleFGR_32	= 468,
    LoadImmDoubleGPR	= 469,
    LoadImmSingleFGR	= 470,
    LoadImmSingleGPR	= 471,
    LwConstant32	= 472,
    MFTACX	= 473,
    MFTC0	= 474,
    MFTC1	= 475,
    MFTDSP	= 476,
    MFTGPR	= 477,
    MFTHC1	= 478,
    MFTHI	= 479,
    MFTLO	= 480,
    MIPSeh_return32	= 481,
    MIPSeh_return64	= 482,
    MSA_FP_EXTEND_D_PSEUDO	= 483,
    MSA_FP_EXTEND_W_PSEUDO	= 484,
    MSA_FP_ROUND_D_PSEUDO	= 485,
    MSA_FP_ROUND_W_PSEUDO	= 486,
    MTTACX	= 487,
    MTTC0	= 488,
    MTTC1	= 489,
    MTTDSP	= 490,
    MTTGPR	= 491,
    MTTHC1	= 492,
    MTTHI	= 493,
    MTTLO	= 494,
    MULImmMacro	= 495,
    MULOMacro	= 496,
    MULOUMacro	= 497,
    MultRxRy16	= 498,
    MultRxRyRz16	= 499,
    MultuRxRy16	= 500,
    MultuRxRyRz16	= 501,
    NOP	= 502,
    NORImm	= 503,
    NORImm64	= 504,
    NOR_V_D_PSEUDO	= 505,
    NOR_V_H_PSEUDO	= 506,
    NOR_V_W_PSEUDO	= 507,
    OR_V_D_PSEUDO	= 508,
    OR_V_H_PSEUDO	= 509,
    OR_V_W_PSEUDO	= 510,
    PseudoCMPU_EQ_QB	= 511,
    PseudoCMPU_LE_QB	= 512,
    PseudoCMPU_LT_QB	= 513,
    PseudoCMP_EQ_PH	= 514,
    PseudoCMP_LE_PH	= 515,
    PseudoCMP_LT_PH	= 516,
    PseudoCVT_D32_W	= 517,
    PseudoCVT_D64_L	= 518,
    PseudoCVT_D64_W	= 519,
    PseudoCVT_S_L	= 520,
    PseudoCVT_S_W	= 521,
    PseudoDMULT	= 522,
    PseudoDMULTu	= 523,
    PseudoDSDIV	= 524,
    PseudoDUDIV	= 525,
    PseudoD_SELECT_I	= 526,
    PseudoD_SELECT_I64	= 527,
    PseudoIndirectBranch	= 528,
    PseudoIndirectBranch64	= 529,
    PseudoIndirectBranch64R6	= 530,
    PseudoIndirectBranchR6	= 531,
    PseudoIndirectBranch_MM	= 532,
    PseudoIndirectBranch_MMR6	= 533,
    PseudoIndirectHazardBranch	= 534,
    PseudoIndirectHazardBranch64	= 535,
    PseudoIndrectHazardBranch64R6	= 536,
    PseudoIndrectHazardBranchR6	= 537,
    PseudoMADD	= 538,
    PseudoMADDU	= 539,
    PseudoMADDU_MM	= 540,
    PseudoMADD_MM	= 541,
    PseudoMFHI	= 542,
    PseudoMFHI64	= 543,
    PseudoMFHI_MM	= 544,
    PseudoMFLO	= 545,
    PseudoMFLO64	= 546,
    PseudoMFLO_MM	= 547,
    PseudoMSUB	= 548,
    PseudoMSUBU	= 549,
    PseudoMSUBU_MM	= 550,
    PseudoMSUB_MM	= 551,
    PseudoMTLOHI	= 552,
    PseudoMTLOHI64	= 553,
    PseudoMTLOHI_DSP	= 554,
    PseudoMTLOHI_MM	= 555,
    PseudoMULT	= 556,
    PseudoMULT_MM	= 557,
    PseudoMULTu	= 558,
    PseudoMULTu_MM	= 559,
    PseudoPICK_PH	= 560,
    PseudoPICK_QB	= 561,
    PseudoReturn	= 562,
    PseudoReturn64	= 563,
    PseudoSDIV	= 564,
    PseudoSELECTFP_F_D32	= 565,
    PseudoSELECTFP_F_D64	= 566,
    PseudoSELECTFP_F_I	= 567,
    PseudoSELECTFP_F_I64	= 568,
    PseudoSELECTFP_F_S	= 569,
    PseudoSELECTFP_T_D32	= 570,
    PseudoSELECTFP_T_D64	= 571,
    PseudoSELECTFP_T_I	= 572,
    PseudoSELECTFP_T_I64	= 573,
    PseudoSELECTFP_T_S	= 574,
    PseudoSELECT_D32	= 575,
    PseudoSELECT_D64	= 576,
    PseudoSELECT_I	= 577,
    PseudoSELECT_I64	= 578,
    PseudoSELECT_S	= 579,
    PseudoTRUNC_W_D	= 580,
    PseudoTRUNC_W_D32	= 581,
    PseudoTRUNC_W_S	= 582,
    PseudoUDIV	= 583,
    ROL	= 584,
    ROLImm	= 585,
    ROR	= 586,
    RORImm	= 587,
    RetRA	= 588,
    RetRA16	= 589,
    SDC1_M1	= 590,
    SDIV_MM_Pseudo	= 591,
    SDMacro	= 592,
    SDivIMacro	= 593,
    SDivMacro	= 594,
    SEQIMacro	= 595,
    SEQMacro	= 596,
    SGE	= 597,
    SGEImm	= 598,
    SGEImm64	= 599,
    SGEU	= 600,
    SGEUImm	= 601,
    SGEUImm64	= 602,
    SGTImm	= 603,
    SGTImm64	= 604,
    SGTUImm	= 605,
    SGTUImm64	= 606,
    SLE	= 607,
    SLEImm	= 608,
    SLEImm64	= 609,
    SLEU	= 610,
    SLEUImm	= 611,
    SLEUImm64	= 612,
    SLTImm64	= 613,
    SLTUImm64	= 614,
    SNEIMacro	= 615,
    SNEMacro	= 616,
    SNZ_B_PSEUDO	= 617,
    SNZ_D_PSEUDO	= 618,
    SNZ_H_PSEUDO	= 619,
    SNZ_V_PSEUDO	= 620,
    SNZ_W_PSEUDO	= 621,
    SRemIMacro	= 622,
    SRemMacro	= 623,
    STORE_ACC128	= 624,
    STORE_ACC64	= 625,
    STORE_ACC64DSP	= 626,
    STORE_CCOND_DSP	= 627,
    STR_D	= 628,
    STR_W	= 629,
    ST_F16	= 630,
    SWM_MM	= 631,
    SZ_B_PSEUDO	= 632,
    SZ_D_PSEUDO	= 633,
    SZ_H_PSEUDO	= 634,
    SZ_V_PSEUDO	= 635,
    SZ_W_PSEUDO	= 636,
    SaaAddr	= 637,
    SaadAddr	= 638,
    SelBeqZ	= 639,
    SelBneZ	= 640,
    SelTBteqZCmp	= 641,
    SelTBteqZCmpi	= 642,
    SelTBteqZSlt	= 643,
    SelTBteqZSlti	= 644,
    SelTBteqZSltiu	= 645,
    SelTBteqZSltu	= 646,
    SelTBtneZCmp	= 647,
    SelTBtneZCmpi	= 648,
    SelTBtneZSlt	= 649,
    SelTBtneZSlti	= 650,
    SelTBtneZSltiu	= 651,
    SelTBtneZSltu	= 652,
    SltCCRxRy16	= 653,
    SltiCCRxImmX16	= 654,
    SltiuCCRxImmX16	= 655,
    SltuCCRxRy16	= 656,
    SltuRxRyRz16	= 657,
    TAILCALL	= 658,
    TAILCALL64R6REG	= 659,
    TAILCALLHB64R6REG	= 660,
    TAILCALLHBR6REG	= 661,
    TAILCALLR6REG	= 662,
    TAILCALLREG	= 663,
    TAILCALLREG64	= 664,
    TAILCALLREGHB	= 665,
    TAILCALLREGHB64	= 666,
    TAILCALLREG_MM	= 667,
    TAILCALLREG_MMR6	= 668,
    TAILCALL_MM	= 669,
    TAILCALL_MMR6	= 670,
    TRAP	= 671,
    TRAP_MM	= 672,
    UDIV_MM_Pseudo	= 673,
    UDivIMacro	= 674,
    UDivMacro	= 675,
    URemIMacro	= 676,
    URemMacro	= 677,
    Ulh	= 678,
    Ulhu	= 679,
    Ulw	= 680,
    Ush	= 681,
    Usw	= 682,
    XOR_V_D_PSEUDO	= 683,
    XOR_V_H_PSEUDO	= 684,
    XOR_V_W_PSEUDO	= 685,
    ABSQ_S_PH	= 686,
    ABSQ_S_PH_MM	= 687,
    ABSQ_S_QB	= 688,
    ABSQ_S_QB_MMR2	= 689,
    ABSQ_S_W	= 690,
    ABSQ_S_W_MM	= 691,
    ADD	= 692,
    ADDIUPC	= 693,
    ADDIUPC_MM	= 694,
    ADDIUPC_MMR6	= 695,
    ADDIUR1SP_MM	= 696,
    ADDIUR2_MM	= 697,
    ADDIUS5_MM	= 698,
    ADDIUSP_MM	= 699,
    ADDIU_MMR6	= 700,
    ADDQH_PH	= 701,
    ADDQH_PH_MMR2	= 702,
    ADDQH_R_PH	= 703,
    ADDQH_R_PH_MMR2	= 704,
    ADDQH_R_W	= 705,
    ADDQH_R_W_MMR2	= 706,
    ADDQH_W	= 707,
    ADDQH_W_MMR2	= 708,
    ADDQ_PH	= 709,
    ADDQ_PH_MM	= 710,
    ADDQ_S_PH	= 711,
    ADDQ_S_PH_MM	= 712,
    ADDQ_S_W	= 713,
    ADDQ_S_W_MM	= 714,
    ADDR_PS64	= 715,
    ADDSC	= 716,
    ADDSC_MM	= 717,
    ADDS_A_B	= 718,
    ADDS_A_D	= 719,
    ADDS_A_H	= 720,
    ADDS_A_W	= 721,
    ADDS_S_B	= 722,
    ADDS_S_D	= 723,
    ADDS_S_H	= 724,
    ADDS_S_W	= 725,
    ADDS_U_B	= 726,
    ADDS_U_D	= 727,
    ADDS_U_H	= 728,
    ADDS_U_W	= 729,
    ADDU16_MM	= 730,
    ADDU16_MMR6	= 731,
    ADDUH_QB	= 732,
    ADDUH_QB_MMR2	= 733,
    ADDUH_R_QB	= 734,
    ADDUH_R_QB_MMR2	= 735,
    ADDU_MMR6	= 736,
    ADDU_PH	= 737,
    ADDU_PH_MMR2	= 738,
    ADDU_QB	= 739,
    ADDU_QB_MM	= 740,
    ADDU_S_PH	= 741,
    ADDU_S_PH_MMR2	= 742,
    ADDU_S_QB	= 743,
    ADDU_S_QB_MM	= 744,
    ADDVI_B	= 745,
    ADDVI_D	= 746,
    ADDVI_H	= 747,
    ADDVI_W	= 748,
    ADDV_B	= 749,
    ADDV_D	= 750,
    ADDV_H	= 751,
    ADDV_W	= 752,
    ADDWC	= 753,
    ADDWC_MM	= 754,
    ADD_A_B	= 755,
    ADD_A_D	= 756,
    ADD_A_H	= 757,
    ADD_A_W	= 758,
    ADD_MM	= 759,
    ADD_MMR6	= 760,
    ADDi	= 761,
    ADDi_MM	= 762,
    ADDiu	= 763,
    ADDiu_MM	= 764,
    ADDu	= 765,
    ADDu_MM	= 766,
    ALIGN	= 767,
    ALIGN_MMR6	= 768,
    ALUIPC	= 769,
    ALUIPC_MMR6	= 770,
    AND	= 771,
    AND16_MM	= 772,
    AND16_MMR6	= 773,
    AND64	= 774,
    ANDI16_MM	= 775,
    ANDI16_MMR6	= 776,
    ANDI_B	= 777,
    ANDI_MMR6	= 778,
    AND_MM	= 779,
    AND_MMR6	= 780,
    AND_V	= 781,
    ANDi	= 782,
    ANDi64	= 783,
    ANDi_MM	= 784,
    APPEND	= 785,
    APPEND_MMR2	= 786,
    ASUB_S_B	= 787,
    ASUB_S_D	= 788,
    ASUB_S_H	= 789,
    ASUB_S_W	= 790,
    ASUB_U_B	= 791,
    ASUB_U_D	= 792,
    ASUB_U_H	= 793,
    ASUB_U_W	= 794,
    AUI	= 795,
    AUIPC	= 796,
    AUIPC_MMR6	= 797,
    AUI_MMR6	= 798,
    AVER_S_B	= 799,
    AVER_S_D	= 800,
    AVER_S_H	= 801,
    AVER_S_W	= 802,
    AVER_U_B	= 803,
    AVER_U_D	= 804,
    AVER_U_H	= 805,
    AVER_U_W	= 806,
    AVE_S_B	= 807,
    AVE_S_D	= 808,
    AVE_S_H	= 809,
    AVE_S_W	= 810,
    AVE_U_B	= 811,
    AVE_U_D	= 812,
    AVE_U_H	= 813,
    AVE_U_W	= 814,
    AddiuRxImmX16	= 815,
    AddiuRxPcImmX16	= 816,
    AddiuRxRxImm16	= 817,
    AddiuRxRxImmX16	= 818,
    AddiuRxRyOffMemX16	= 819,
    AddiuSpImm16	= 820,
    AddiuSpImmX16	= 821,
    AdduRxRyRz16	= 822,
    AndRxRxRy16	= 823,
    B16_MM	= 824,
    BADDu	= 825,
    BAL	= 826,
    BALC	= 827,
    BALC_MMR6	= 828,
    BALIGN	= 829,
    BALIGN_MMR2	= 830,
    BBIT0	= 831,
    BBIT032	= 832,
    BBIT1	= 833,
    BBIT132	= 834,
    BC	= 835,
    BC16_MMR6	= 836,
    BC1EQZ	= 837,
    BC1EQZC_MMR6	= 838,
    BC1F	= 839,
    BC1FL	= 840,
    BC1F_MM	= 841,
    BC1NEZ	= 842,
    BC1NEZC_MMR6	= 843,
    BC1T	= 844,
    BC1TL	= 845,
    BC1T_MM	= 846,
    BC2EQZ	= 847,
    BC2EQZC_MMR6	= 848,
    BC2NEZ	= 849,
    BC2NEZC_MMR6	= 850,
    BCLRI_B	= 851,
    BCLRI_D	= 852,
    BCLRI_H	= 853,
    BCLRI_W	= 854,
    BCLR_B	= 855,
    BCLR_D	= 856,
    BCLR_H	= 857,
    BCLR_W	= 858,
    BC_MMR6	= 859,
    BEQ	= 860,
    BEQ64	= 861,
    BEQC	= 862,
    BEQC64	= 863,
    BEQC_MMR6	= 864,
    BEQL	= 865,
    BEQZ16_MM	= 866,
    BEQZALC	= 867,
    BEQZALC_MMR6	= 868,
    BEQZC	= 869,
    BEQZC16_MMR6	= 870,
    BEQZC64	= 871,
    BEQZC_MM	= 872,
    BEQZC_MMR6	= 873,
    BEQ_MM	= 874,
    BGEC	= 875,
    BGEC64	= 876,
    BGEC_MMR6	= 877,
    BGEUC	= 878,
    BGEUC64	= 879,
    BGEUC_MMR6	= 880,
    BGEZ	= 881,
    BGEZ64	= 882,
    BGEZAL	= 883,
    BGEZALC	= 884,
    BGEZALC_MMR6	= 885,
    BGEZALL	= 886,
    BGEZALS_MM	= 887,
    BGEZAL_MM	= 888,
    BGEZC	= 889,
    BGEZC64	= 890,
    BGEZC_MMR6	= 891,
    BGEZL	= 892,
    BGEZ_MM	= 893,
    BGTZ	= 894,
    BGTZ64	= 895,
    BGTZALC	= 896,
    BGTZALC_MMR6	= 897,
    BGTZC	= 898,
    BGTZC64	= 899,
    BGTZC_MMR6	= 900,
    BGTZL	= 901,
    BGTZ_MM	= 902,
    BINSLI_B	= 903,
    BINSLI_D	= 904,
    BINSLI_H	= 905,
    BINSLI_W	= 906,
    BINSL_B	= 907,
    BINSL_D	= 908,
    BINSL_H	= 909,
    BINSL_W	= 910,
    BINSRI_B	= 911,
    BINSRI_D	= 912,
    BINSRI_H	= 913,
    BINSRI_W	= 914,
    BINSR_B	= 915,
    BINSR_D	= 916,
    BINSR_H	= 917,
    BINSR_W	= 918,
    BITREV	= 919,
    BITREV_MM	= 920,
    BITSWAP	= 921,
    BITSWAP_MMR6	= 922,
    BLEZ	= 923,
    BLEZ64	= 924,
    BLEZALC	= 925,
    BLEZALC_MMR6	= 926,
    BLEZC	= 927,
    BLEZC64	= 928,
    BLEZC_MMR6	= 929,
    BLEZL	= 930,
    BLEZ_MM	= 931,
    BLTC	= 932,
    BLTC64	= 933,
    BLTC_MMR6	= 934,
    BLTUC	= 935,
    BLTUC64	= 936,
    BLTUC_MMR6	= 937,
    BLTZ	= 938,
    BLTZ64	= 939,
    BLTZAL	= 940,
    BLTZALC	= 941,
    BLTZALC_MMR6	= 942,
    BLTZALL	= 943,
    BLTZALS_MM	= 944,
    BLTZAL_MM	= 945,
    BLTZC	= 946,
    BLTZC64	= 947,
    BLTZC_MMR6	= 948,
    BLTZL	= 949,
    BLTZ_MM	= 950,
    BMNZI_B	= 951,
    BMNZ_V	= 952,
    BMZI_B	= 953,
    BMZ_V	= 954,
    BNE	= 955,
    BNE64	= 956,
    BNEC	= 957,
    BNEC64	= 958,
    BNEC_MMR6	= 959,
    BNEGI_B	= 960,
    BNEGI_D	= 961,
    BNEGI_H	= 962,
    BNEGI_W	= 963,
    BNEG_B	= 964,
    BNEG_D	= 965,
    BNEG_H	= 966,
    BNEG_W	= 967,
    BNEL	= 968,
    BNEZ16_MM	= 969,
    BNEZALC	= 970,
    BNEZALC_MMR6	= 971,
    BNEZC	= 972,
    BNEZC16_MMR6	= 973,
    BNEZC64	= 974,
    BNEZC_MM	= 975,
    BNEZC_MMR6	= 976,
    BNE_MM	= 977,
    BNVC	= 978,
    BNVC_MMR6	= 979,
    BNZ_B	= 980,
    BNZ_D	= 981,
    BNZ_H	= 982,
    BNZ_V	= 983,
    BNZ_W	= 984,
    BOVC	= 985,
    BOVC_MMR6	= 986,
    BPOSGE32	= 987,
    BPOSGE32C_MMR3	= 988,
    BPOSGE32_MM	= 989,
    BREAK	= 990,
    BREAK16_MM	= 991,
    BREAK16_MMR6	= 992,
    BREAK_MM	= 993,
    BREAK_MMR6	= 994,
    BSELI_B	= 995,
    BSEL_V	= 996,
    BSETI_B	= 997,
    BSETI_D	= 998,
    BSETI_H	= 999,
    BSETI_W	= 1000,
    BSET_B	= 1001,
    BSET_D	= 1002,
    BSET_H	= 1003,
    BSET_W	= 1004,
    BZ_B	= 1005,
    BZ_D	= 1006,
    BZ_H	= 1007,
    BZ_V	= 1008,
    BZ_W	= 1009,
    BeqzRxImm16	= 1010,
    BeqzRxImmX16	= 1011,
    Bimm16	= 1012,
    BimmX16	= 1013,
    BnezRxImm16	= 1014,
    BnezRxImmX16	= 1015,
    Break16	= 1016,
    Bteqz16	= 1017,
    BteqzX16	= 1018,
    Btnez16	= 1019,
    BtnezX16	= 1020,
    CACHE	= 1021,
    CACHEE	= 1022,
    CACHEE_MM	= 1023,
    CACHE_MM	= 1024,
    CACHE_MMR6	= 1025,
    CACHE_R6	= 1026,
    CEIL_L_D64	= 1027,
    CEIL_L_D_MMR6	= 1028,
    CEIL_L_S	= 1029,
    CEIL_L_S_MMR6	= 1030,
    CEIL_W_D32	= 1031,
    CEIL_W_D64	= 1032,
    CEIL_W_D_MMR6	= 1033,
    CEIL_W_MM	= 1034,
    CEIL_W_S	= 1035,
    CEIL_W_S_MM	= 1036,
    CEIL_W_S_MMR6	= 1037,
    CEQI_B	= 1038,
    CEQI_D	= 1039,
    CEQI_H	= 1040,
    CEQI_W	= 1041,
    CEQ_B	= 1042,
    CEQ_D	= 1043,
    CEQ_H	= 1044,
    CEQ_W	= 1045,
    CFC1	= 1046,
    CFC1_MM	= 1047,
    CFC2_MM	= 1048,
    CFCMSA	= 1049,
    CINS	= 1050,
    CINS32	= 1051,
    CINS64_32	= 1052,
    CINS_i32	= 1053,
    CLASS_D	= 1054,
    CLASS_D_MMR6	= 1055,
    CLASS_S	= 1056,
    CLASS_S_MMR6	= 1057,
    CLEI_S_B	= 1058,
    CLEI_S_D	= 1059,
    CLEI_S_H	= 1060,
    CLEI_S_W	= 1061,
    CLEI_U_B	= 1062,
    CLEI_U_D	= 1063,
    CLEI_U_H	= 1064,
    CLEI_U_W	= 1065,
    CLE_S_B	= 1066,
    CLE_S_D	= 1067,
    CLE_S_H	= 1068,
    CLE_S_W	= 1069,
    CLE_U_B	= 1070,
    CLE_U_D	= 1071,
    CLE_U_H	= 1072,
    CLE_U_W	= 1073,
    CLO	= 1074,
    CLO_MM	= 1075,
    CLO_MMR6	= 1076,
    CLO_R6	= 1077,
    CLTI_S_B	= 1078,
    CLTI_S_D	= 1079,
    CLTI_S_H	= 1080,
    CLTI_S_W	= 1081,
    CLTI_U_B	= 1082,
    CLTI_U_D	= 1083,
    CLTI_U_H	= 1084,
    CLTI_U_W	= 1085,
    CLT_S_B	= 1086,
    CLT_S_D	= 1087,
    CLT_S_H	= 1088,
    CLT_S_W	= 1089,
    CLT_U_B	= 1090,
    CLT_U_D	= 1091,
    CLT_U_H	= 1092,
    CLT_U_W	= 1093,
    CLZ	= 1094,
    CLZ_MM	= 1095,
    CLZ_MMR6	= 1096,
    CLZ_R6	= 1097,
    CMPGDU_EQ_QB	= 1098,
    CMPGDU_EQ_QB_MMR2	= 1099,
    CMPGDU_LE_QB	= 1100,
    CMPGDU_LE_QB_MMR2	= 1101,
    CMPGDU_LT_QB	= 1102,
    CMPGDU_LT_QB_MMR2	= 1103,
    CMPGU_EQ_QB	= 1104,
    CMPGU_EQ_QB_MM	= 1105,
    CMPGU_LE_QB	= 1106,
    CMPGU_LE_QB_MM	= 1107,
    CMPGU_LT_QB	= 1108,
    CMPGU_LT_QB_MM	= 1109,
    CMPU_EQ_QB	= 1110,
    CMPU_EQ_QB_MM	= 1111,
    CMPU_LE_QB	= 1112,
    CMPU_LE_QB_MM	= 1113,
    CMPU_LT_QB	= 1114,
    CMPU_LT_QB_MM	= 1115,
    CMP_AF_D_MMR6	= 1116,
    CMP_AF_S_MMR6	= 1117,
    CMP_EQ_D	= 1118,
    CMP_EQ_D_MMR6	= 1119,
    CMP_EQ_PH	= 1120,
    CMP_EQ_PH_MM	= 1121,
    CMP_EQ_S	= 1122,
    CMP_EQ_S_MMR6	= 1123,
    CMP_F_D	= 1124,
    CMP_F_S	= 1125,
    CMP_LE_D	= 1126,
    CMP_LE_D_MMR6	= 1127,
    CMP_LE_PH	= 1128,
    CMP_LE_PH_MM	= 1129,
    CMP_LE_S	= 1130,
    CMP_LE_S_MMR6	= 1131,
    CMP_LT_D	= 1132,
    CMP_LT_D_MMR6	= 1133,
    CMP_LT_PH	= 1134,
    CMP_LT_PH_MM	= 1135,
    CMP_LT_S	= 1136,
    CMP_LT_S_MMR6	= 1137,
    CMP_SAF_D	= 1138,
    CMP_SAF_D_MMR6	= 1139,
    CMP_SAF_S	= 1140,
    CMP_SAF_S_MMR6	= 1141,
    CMP_SEQ_D	= 1142,
    CMP_SEQ_D_MMR6	= 1143,
    CMP_SEQ_S	= 1144,
    CMP_SEQ_S_MMR6	= 1145,
    CMP_SLE_D	= 1146,
    CMP_SLE_D_MMR6	= 1147,
    CMP_SLE_S	= 1148,
    CMP_SLE_S_MMR6	= 1149,
    CMP_SLT_D	= 1150,
    CMP_SLT_D_MMR6	= 1151,
    CMP_SLT_S	= 1152,
    CMP_SLT_S_MMR6	= 1153,
    CMP_SUEQ_D	= 1154,
    CMP_SUEQ_D_MMR6	= 1155,
    CMP_SUEQ_S	= 1156,
    CMP_SUEQ_S_MMR6	= 1157,
    CMP_SULE_D	= 1158,
    CMP_SULE_D_MMR6	= 1159,
    CMP_SULE_S	= 1160,
    CMP_SULE_S_MMR6	= 1161,
    CMP_SULT_D	= 1162,
    CMP_SULT_D_MMR6	= 1163,
    CMP_SULT_S	= 1164,
    CMP_SULT_S_MMR6	= 1165,
    CMP_SUN_D	= 1166,
    CMP_SUN_D_MMR6	= 1167,
    CMP_SUN_S	= 1168,
    CMP_SUN_S_MMR6	= 1169,
    CMP_UEQ_D	= 1170,
    CMP_UEQ_D_MMR6	= 1171,
    CMP_UEQ_S	= 1172,
    CMP_UEQ_S_MMR6	= 1173,
    CMP_ULE_D	= 1174,
    CMP_ULE_D_MMR6	= 1175,
    CMP_ULE_S	= 1176,
    CMP_ULE_S_MMR6	= 1177,
    CMP_ULT_D	= 1178,
    CMP_ULT_D_MMR6	= 1179,
    CMP_ULT_S	= 1180,
    CMP_ULT_S_MMR6	= 1181,
    CMP_UN_D	= 1182,
    CMP_UN_D_MMR6	= 1183,
    CMP_UN_S	= 1184,
    CMP_UN_S_MMR6	= 1185,
    COPY_S_B	= 1186,
    COPY_S_D	= 1187,
    COPY_S_H	= 1188,
    COPY_S_W	= 1189,
    COPY_U_B	= 1190,
    COPY_U_H	= 1191,
    COPY_U_W	= 1192,
    CRC32B	= 1193,
    CRC32CB	= 1194,
    CRC32CD	= 1195,
    CRC32CH	= 1196,
    CRC32CW	= 1197,
    CRC32D	= 1198,
    CRC32H	= 1199,
    CRC32W	= 1200,
    CTC1	= 1201,
    CTC1_MM	= 1202,
    CTC2_MM	= 1203,
    CTCMSA	= 1204,
    CVT_D32_S	= 1205,
    CVT_D32_S_MM	= 1206,
    CVT_D32_W	= 1207,
    CVT_D32_W_MM	= 1208,
    CVT_D64_L	= 1209,
    CVT_D64_S	= 1210,
    CVT_D64_S_MM	= 1211,
    CVT_D64_W	= 1212,
    CVT_D64_W_MM	= 1213,
    CVT_D_L_MMR6	= 1214,
    CVT_L_D64	= 1215,
    CVT_L_D64_MM	= 1216,
    CVT_L_D_MMR6	= 1217,
    CVT_L_S	= 1218,
    CVT_L_S_MM	= 1219,
    CVT_L_S_MMR6	= 1220,
    CVT_PS_PW64	= 1221,
    CVT_PS_S64	= 1222,
    CVT_PW_PS64	= 1223,
    CVT_S_D32	= 1224,
    CVT_S_D32_MM	= 1225,
    CVT_S_D64	= 1226,
    CVT_S_D64_MM	= 1227,
    CVT_S_L	= 1228,
    CVT_S_L_MMR6	= 1229,
    CVT_S_PL64	= 1230,
    CVT_S_PU64	= 1231,
    CVT_S_W	= 1232,
    CVT_S_W_MM	= 1233,
    CVT_S_W_MMR6	= 1234,
    CVT_W_D32	= 1235,
    CVT_W_D32_MM	= 1236,
    CVT_W_D64	= 1237,
    CVT_W_D64_MM	= 1238,
    CVT_W_S	= 1239,
    CVT_W_S_MM	= 1240,
    CVT_W_S_MMR6	= 1241,
    C_EQ_D32	= 1242,
    C_EQ_D32_MM	= 1243,
    C_EQ_D64	= 1244,
    C_EQ_D64_MM	= 1245,
    C_EQ_S	= 1246,
    C_EQ_S_MM	= 1247,
    C_F_D32	= 1248,
    C_F_D32_MM	= 1249,
    C_F_D64	= 1250,
    C_F_D64_MM	= 1251,
    C_F_S	= 1252,
    C_F_S_MM	= 1253,
    C_LE_D32	= 1254,
    C_LE_D32_MM	= 1255,
    C_LE_D64	= 1256,
    C_LE_D64_MM	= 1257,
    C_LE_S	= 1258,
    C_LE_S_MM	= 1259,
    C_LT_D32	= 1260,
    C_LT_D32_MM	= 1261,
    C_LT_D64	= 1262,
    C_LT_D64_MM	= 1263,
    C_LT_S	= 1264,
    C_LT_S_MM	= 1265,
    C_NGE_D32	= 1266,
    C_NGE_D32_MM	= 1267,
    C_NGE_D64	= 1268,
    C_NGE_D64_MM	= 1269,
    C_NGE_S	= 1270,
    C_NGE_S_MM	= 1271,
    C_NGLE_D32	= 1272,
    C_NGLE_D32_MM	= 1273,
    C_NGLE_D64	= 1274,
    C_NGLE_D64_MM	= 1275,
    C_NGLE_S	= 1276,
    C_NGLE_S_MM	= 1277,
    C_NGL_D32	= 1278,
    C_NGL_D32_MM	= 1279,
    C_NGL_D64	= 1280,
    C_NGL_D64_MM	= 1281,
    C_NGL_S	= 1282,
    C_NGL_S_MM	= 1283,
    C_NGT_D32	= 1284,
    C_NGT_D32_MM	= 1285,
    C_NGT_D64	= 1286,
    C_NGT_D64_MM	= 1287,
    C_NGT_S	= 1288,
    C_NGT_S_MM	= 1289,
    C_OLE_D32	= 1290,
    C_OLE_D32_MM	= 1291,
    C_OLE_D64	= 1292,
    C_OLE_D64_MM	= 1293,
    C_OLE_S	= 1294,
    C_OLE_S_MM	= 1295,
    C_OLT_D32	= 1296,
    C_OLT_D32_MM	= 1297,
    C_OLT_D64	= 1298,
    C_OLT_D64_MM	= 1299,
    C_OLT_S	= 1300,
    C_OLT_S_MM	= 1301,
    C_SEQ_D32	= 1302,
    C_SEQ_D32_MM	= 1303,
    C_SEQ_D64	= 1304,
    C_SEQ_D64_MM	= 1305,
    C_SEQ_S	= 1306,
    C_SEQ_S_MM	= 1307,
    C_SF_D32	= 1308,
    C_SF_D32_MM	= 1309,
    C_SF_D64	= 1310,
    C_SF_D64_MM	= 1311,
    C_SF_S	= 1312,
    C_SF_S_MM	= 1313,
    C_UEQ_D32	= 1314,
    C_UEQ_D32_MM	= 1315,
    C_UEQ_D64	= 1316,
    C_UEQ_D64_MM	= 1317,
    C_UEQ_S	= 1318,
    C_UEQ_S_MM	= 1319,
    C_ULE_D32	= 1320,
    C_ULE_D32_MM	= 1321,
    C_ULE_D64	= 1322,
    C_ULE_D64_MM	= 1323,
    C_ULE_S	= 1324,
    C_ULE_S_MM	= 1325,
    C_ULT_D32	= 1326,
    C_ULT_D32_MM	= 1327,
    C_ULT_D64	= 1328,
    C_ULT_D64_MM	= 1329,
    C_ULT_S	= 1330,
    C_ULT_S_MM	= 1331,
    C_UN_D32	= 1332,
    C_UN_D32_MM	= 1333,
    C_UN_D64	= 1334,
    C_UN_D64_MM	= 1335,
    C_UN_S	= 1336,
    C_UN_S_MM	= 1337,
    CmpRxRy16	= 1338,
    CmpiRxImm16	= 1339,
    CmpiRxImmX16	= 1340,
    DADD	= 1341,
    DADDi	= 1342,
    DADDiu	= 1343,
    DADDu	= 1344,
    DAHI	= 1345,
    DALIGN	= 1346,
    DATI	= 1347,
    DAUI	= 1348,
    DBITSWAP	= 1349,
    DCLO	= 1350,
    DCLO_R6	= 1351,
    DCLZ	= 1352,
    DCLZ_R6	= 1353,
    DDIV	= 1354,
    DDIVU	= 1355,
    DERET	= 1356,
    DERET_MM	= 1357,
    DERET_MMR6	= 1358,
    DEXT	= 1359,
    DEXT64_32	= 1360,
    DEXTM	= 1361,
    DEXTU	= 1362,
    DI	= 1363,
    DINS	= 1364,
    DINSM	= 1365,
    DINSU	= 1366,
    DIV	= 1367,
    DIVU	= 1368,
    DIVU_MMR6	= 1369,
    DIV_MMR6	= 1370,
    DIV_S_B	= 1371,
    DIV_S_D	= 1372,
    DIV_S_H	= 1373,
    DIV_S_W	= 1374,
    DIV_U_B	= 1375,
    DIV_U_D	= 1376,
    DIV_U_H	= 1377,
    DIV_U_W	= 1378,
    DI_MM	= 1379,
    DI_MMR6	= 1380,
    DLSA	= 1381,
    DLSA_R6	= 1382,
    DMFC0	= 1383,
    DMFC1	= 1384,
    DMFC2	= 1385,
    DMFC2_OCTEON	= 1386,
    DMFGC0	= 1387,
    DMOD	= 1388,
    DMODU	= 1389,
    DMT	= 1390,
    DMTC0	= 1391,
    DMTC1	= 1392,
    DMTC2	= 1393,
    DMTC2_OCTEON	= 1394,
    DMTGC0	= 1395,
    DMUH	= 1396,
    DMUHU	= 1397,
    DMUL	= 1398,
    DMULT	= 1399,
    DMULTu	= 1400,
    DMULU	= 1401,
    DMUL_R6	= 1402,
    DOTP_S_D	= 1403,
    DOTP_S_H	= 1404,
    DOTP_S_W	= 1405,
    DOTP_U_D	= 1406,
    DOTP_U_H	= 1407,
    DOTP_U_W	= 1408,
    DPADD_S_D	= 1409,
    DPADD_S_H	= 1410,
    DPADD_S_W	= 1411,
    DPADD_U_D	= 1412,
    DPADD_U_H	= 1413,
    DPADD_U_W	= 1414,
    DPAQX_SA_W_PH	= 1415,
    DPAQX_SA_W_PH_MMR2	= 1416,
    DPAQX_S_W_PH	= 1417,
    DPAQX_S_W_PH_MMR2	= 1418,
    DPAQ_SA_L_W	= 1419,
    DPAQ_SA_L_W_MM	= 1420,
    DPAQ_S_W_PH	= 1421,
    DPAQ_S_W_PH_MM	= 1422,
    DPAU_H_QBL	= 1423,
    DPAU_H_QBL_MM	= 1424,
    DPAU_H_QBR	= 1425,
    DPAU_H_QBR_MM	= 1426,
    DPAX_W_PH	= 1427,
    DPAX_W_PH_MMR2	= 1428,
    DPA_W_PH	= 1429,
    DPA_W_PH_MMR2	= 1430,
    DPOP	= 1431,
    DPSQX_SA_W_PH	= 1432,
    DPSQX_SA_W_PH_MMR2	= 1433,
    DPSQX_S_W_PH	= 1434,
    DPSQX_S_W_PH_MMR2	= 1435,
    DPSQ_SA_L_W	= 1436,
    DPSQ_SA_L_W_MM	= 1437,
    DPSQ_S_W_PH	= 1438,
    DPSQ_S_W_PH_MM	= 1439,
    DPSUB_S_D	= 1440,
    DPSUB_S_H	= 1441,
    DPSUB_S_W	= 1442,
    DPSUB_U_D	= 1443,
    DPSUB_U_H	= 1444,
    DPSUB_U_W	= 1445,
    DPSU_H_QBL	= 1446,
    DPSU_H_QBL_MM	= 1447,
    DPSU_H_QBR	= 1448,
    DPSU_H_QBR_MM	= 1449,
    DPSX_W_PH	= 1450,
    DPSX_W_PH_MMR2	= 1451,
    DPS_W_PH	= 1452,
    DPS_W_PH_MMR2	= 1453,
    DROTR	= 1454,
    DROTR32	= 1455,
    DROTRV	= 1456,
    DSBH	= 1457,
    DSDIV	= 1458,
    DSHD	= 1459,
    DSLL	= 1460,
    DSLL32	= 1461,
    DSLL64_32	= 1462,
    DSLLV	= 1463,
    DSRA	= 1464,
    DSRA32	= 1465,
    DSRAV	= 1466,
    DSRL	= 1467,
    DSRL32	= 1468,
    DSRLV	= 1469,
    DSUB	= 1470,
    DSUBu	= 1471,
    DUDIV	= 1472,
    DVP	= 1473,
    DVPE	= 1474,
    DVP_MMR6	= 1475,
    DivRxRy16	= 1476,
    DivuRxRy16	= 1477,
    EHB	= 1478,
    EHB_MM	= 1479,
    EHB_MMR6	= 1480,
    EI	= 1481,
    EI_MM	= 1482,
    EI_MMR6	= 1483,
    EMT	= 1484,
    ERET	= 1485,
    ERETNC	= 1486,
    ERETNC_MMR6	= 1487,
    ERET_MM	= 1488,
    ERET_MMR6	= 1489,
    EVP	= 1490,
    EVPE	= 1491,
    EVP_MMR6	= 1492,
    EXT	= 1493,
    EXTP	= 1494,
    EXTPDP	= 1495,
    EXTPDPV	= 1496,
    EXTPDPV_MM	= 1497,
    EXTPDP_MM	= 1498,
    EXTPV	= 1499,
    EXTPV_MM	= 1500,
    EXTP_MM	= 1501,
    EXTRV_RS_W	= 1502,
    EXTRV_RS_W_MM	= 1503,
    EXTRV_R_W	= 1504,
    EXTRV_R_W_MM	= 1505,
    EXTRV_S_H	= 1506,
    EXTRV_S_H_MM	= 1507,
    EXTRV_W	= 1508,
    EXTRV_W_MM	= 1509,
    EXTR_RS_W	= 1510,
    EXTR_RS_W_MM	= 1511,
    EXTR_R_W	= 1512,
    EXTR_R_W_MM	= 1513,
    EXTR_S_H	= 1514,
    EXTR_S_H_MM	= 1515,
    EXTR_W	= 1516,
    EXTR_W_MM	= 1517,
    EXTS	= 1518,
    EXTS32	= 1519,
    EXT_MM	= 1520,
    EXT_MMR6	= 1521,
    FABS_D32	= 1522,
    FABS_D32_MM	= 1523,
    FABS_D64	= 1524,
    FABS_D64_MM	= 1525,
    FABS_S	= 1526,
    FABS_S_MM	= 1527,
    FADD_D	= 1528,
    FADD_D32	= 1529,
    FADD_D32_MM	= 1530,
    FADD_D64	= 1531,
    FADD_D64_MM	= 1532,
    FADD_PS64	= 1533,
    FADD_S	= 1534,
    FADD_S_MM	= 1535,
    FADD_S_MMR6	= 1536,
    FADD_W	= 1537,
    FCAF_D	= 1538,
    FCAF_W	= 1539,
    FCEQ_D	= 1540,
    FCEQ_W	= 1541,
    FCLASS_D	= 1542,
    FCLASS_W	= 1543,
    FCLE_D	= 1544,
    FCLE_W	= 1545,
    FCLT_D	= 1546,
    FCLT_W	= 1547,
    FCMP_D32	= 1548,
    FCMP_D32_MM	= 1549,
    FCMP_D64	= 1550,
    FCMP_S32	= 1551,
    FCMP_S32_MM	= 1552,
    FCNE_D	= 1553,
    FCNE_W	= 1554,
    FCOR_D	= 1555,
    FCOR_W	= 1556,
    FCUEQ_D	= 1557,
    FCUEQ_W	= 1558,
    FCULE_D	= 1559,
    FCULE_W	= 1560,
    FCULT_D	= 1561,
    FCULT_W	= 1562,
    FCUNE_D	= 1563,
    FCUNE_W	= 1564,
    FCUN_D	= 1565,
    FCUN_W	= 1566,
    FDIV_D	= 1567,
    FDIV_D32	= 1568,
    FDIV_D32_MM	= 1569,
    FDIV_D64	= 1570,
    FDIV_D64_MM	= 1571,
    FDIV_S	= 1572,
    FDIV_S_MM	= 1573,
    FDIV_S_MMR6	= 1574,
    FDIV_W	= 1575,
    FEXDO_H	= 1576,
    FEXDO_W	= 1577,
    FEXP2_D	= 1578,
    FEXP2_W	= 1579,
    FEXUPL_D	= 1580,
    FEXUPL_W	= 1581,
    FEXUPR_D	= 1582,
    FEXUPR_W	= 1583,
    FFINT_S_D	= 1584,
    FFINT_S_W	= 1585,
    FFINT_U_D	= 1586,
    FFINT_U_W	= 1587,
    FFQL_D	= 1588,
    FFQL_W	= 1589,
    FFQR_D	= 1590,
    FFQR_W	= 1591,
    FILL_B	= 1592,
    FILL_D	= 1593,
    FILL_H	= 1594,
    FILL_W	= 1595,
    FLOG2_D	= 1596,
    FLOG2_W	= 1597,
    FLOOR_L_D64	= 1598,
    FLOOR_L_D_MMR6	= 1599,
    FLOOR_L_S	= 1600,
    FLOOR_L_S_MMR6	= 1601,
    FLOOR_W_D32	= 1602,
    FLOOR_W_D64	= 1603,
    FLOOR_W_D_MMR6	= 1604,
    FLOOR_W_MM	= 1605,
    FLOOR_W_S	= 1606,
    FLOOR_W_S_MM	= 1607,
    FLOOR_W_S_MMR6	= 1608,
    FMADD_D	= 1609,
    FMADD_W	= 1610,
    FMAX_A_D	= 1611,
    FMAX_A_W	= 1612,
    FMAX_D	= 1613,
    FMAX_W	= 1614,
    FMIN_A_D	= 1615,
    FMIN_A_W	= 1616,
    FMIN_D	= 1617,
    FMIN_W	= 1618,
    FMOV_D32	= 1619,
    FMOV_D32_MM	= 1620,
    FMOV_D64	= 1621,
    FMOV_D64_MM	= 1622,
    FMOV_D_MMR6	= 1623,
    FMOV_S	= 1624,
    FMOV_S_MM	= 1625,
    FMOV_S_MMR6	= 1626,
    FMSUB_D	= 1627,
    FMSUB_W	= 1628,
    FMUL_D	= 1629,
    FMUL_D32	= 1630,
    FMUL_D32_MM	= 1631,
    FMUL_D64	= 1632,
    FMUL_D64_MM	= 1633,
    FMUL_PS64	= 1634,
    FMUL_S	= 1635,
    FMUL_S_MM	= 1636,
    FMUL_S_MMR6	= 1637,
    FMUL_W	= 1638,
    FNEG_D32	= 1639,
    FNEG_D32_MM	= 1640,
    FNEG_D64	= 1641,
    FNEG_D64_MM	= 1642,
    FNEG_S	= 1643,
    FNEG_S_MM	= 1644,
    FNEG_S_MMR6	= 1645,
    FORK	= 1646,
    FRCP_D	= 1647,
    FRCP_W	= 1648,
    FRINT_D	= 1649,
    FRINT_W	= 1650,
    FRSQRT_D	= 1651,
    FRSQRT_W	= 1652,
    FSAF_D	= 1653,
    FSAF_W	= 1654,
    FSEQ_D	= 1655,
    FSEQ_W	= 1656,
    FSLE_D	= 1657,
    FSLE_W	= 1658,
    FSLT_D	= 1659,
    FSLT_W	= 1660,
    FSNE_D	= 1661,
    FSNE_W	= 1662,
    FSOR_D	= 1663,
    FSOR_W	= 1664,
    FSQRT_D	= 1665,
    FSQRT_D32	= 1666,
    FSQRT_D32_MM	= 1667,
    FSQRT_D64	= 1668,
    FSQRT_D64_MM	= 1669,
    FSQRT_S	= 1670,
    FSQRT_S_MM	= 1671,
    FSQRT_W	= 1672,
    FSUB_D	= 1673,
    FSUB_D32	= 1674,
    FSUB_D32_MM	= 1675,
    FSUB_D64	= 1676,
    FSUB_D64_MM	= 1677,
    FSUB_PS64	= 1678,
    FSUB_S	= 1679,
    FSUB_S_MM	= 1680,
    FSUB_S_MMR6	= 1681,
    FSUB_W	= 1682,
    FSUEQ_D	= 1683,
    FSUEQ_W	= 1684,
    FSULE_D	= 1685,
    FSULE_W	= 1686,
    FSULT_D	= 1687,
    FSULT_W	= 1688,
    FSUNE_D	= 1689,
    FSUNE_W	= 1690,
    FSUN_D	= 1691,
    FSUN_W	= 1692,
    FTINT_S_D	= 1693,
    FTINT_S_W	= 1694,
    FTINT_U_D	= 1695,
    FTINT_U_W	= 1696,
    FTQ_H	= 1697,
    FTQ_W	= 1698,
    FTRUNC_S_D	= 1699,
    FTRUNC_S_W	= 1700,
    FTRUNC_U_D	= 1701,
    FTRUNC_U_W	= 1702,
    GINVI	= 1703,
    GINVI_MMR6	= 1704,
    GINVT	= 1705,
    GINVT_MMR6	= 1706,
    HADD_S_D	= 1707,
    HADD_S_H	= 1708,
    HADD_S_W	= 1709,
    HADD_U_D	= 1710,
    HADD_U_H	= 1711,
    HADD_U_W	= 1712,
    HSUB_S_D	= 1713,
    HSUB_S_H	= 1714,
    HSUB_S_W	= 1715,
    HSUB_U_D	= 1716,
    HSUB_U_H	= 1717,
    HSUB_U_W	= 1718,
    HYPCALL	= 1719,
    HYPCALL_MM	= 1720,
    ILVEV_B	= 1721,
    ILVEV_D	= 1722,
    ILVEV_H	= 1723,
    ILVEV_W	= 1724,
    ILVL_B	= 1725,
    ILVL_D	= 1726,
    ILVL_H	= 1727,
    ILVL_W	= 1728,
    ILVOD_B	= 1729,
    ILVOD_D	= 1730,
    ILVOD_H	= 1731,
    ILVOD_W	= 1732,
    ILVR_B	= 1733,
    ILVR_D	= 1734,
    ILVR_H	= 1735,
    ILVR_W	= 1736,
    INS	= 1737,
    INSERT_B	= 1738,
    INSERT_D	= 1739,
    INSERT_H	= 1740,
    INSERT_W	= 1741,
    INSV	= 1742,
    INSVE_B	= 1743,
    INSVE_D	= 1744,
    INSVE_H	= 1745,
    INSVE_W	= 1746,
    INSV_MM	= 1747,
    INS_MM	= 1748,
    INS_MMR6	= 1749,
    J	= 1750,
    JAL	= 1751,
    JALR	= 1752,
    JALR16_MM	= 1753,
    JALR64	= 1754,
    JALRC16_MMR6	= 1755,
    JALRC_HB_MMR6	= 1756,
    JALRC_MMR6	= 1757,
    JALRS16_MM	= 1758,
    JALRS_MM	= 1759,
    JALR_HB	= 1760,
    JALR_HB64	= 1761,
    JALR_MM	= 1762,
    JALS_MM	= 1763,
    JALX	= 1764,
    JALX_MM	= 1765,
    JAL_MM	= 1766,
    JIALC	= 1767,
    JIALC64	= 1768,
    JIALC_MMR6	= 1769,
    JIC	= 1770,
    JIC64	= 1771,
    JIC_MMR6	= 1772,
    JR	= 1773,
    JR16_MM	= 1774,
    JR64	= 1775,
    JRADDIUSP	= 1776,
    JRC16_MM	= 1777,
    JRC16_MMR6	= 1778,
    JRCADDIUSP_MMR6	= 1779,
    JR_HB	= 1780,
    JR_HB64	= 1781,
    JR_HB64_R6	= 1782,
    JR_HB_R6	= 1783,
    JR_MM	= 1784,
    J_MM	= 1785,
    Jal16	= 1786,
    JalB16	= 1787,
    JrRa16	= 1788,
    JrcRa16	= 1789,
    JrcRx16	= 1790,
    JumpLinkReg16	= 1791,
    LB	= 1792,
    LB64	= 1793,
    LBE	= 1794,
    LBE_MM	= 1795,
    LBU16_MM	= 1796,
    LBUX	= 1797,
    LBUX_MM	= 1798,
    LBU_MMR6	= 1799,
    LB_MM	= 1800,
    LB_MMR6	= 1801,
    LBu	= 1802,
    LBu64	= 1803,
    LBuE	= 1804,
    LBuE_MM	= 1805,
    LBu_MM	= 1806,
    LD	= 1807,
    LDC1	= 1808,
    LDC164	= 1809,
    LDC1_D64_MMR6	= 1810,
    LDC1_MM	= 1811,
    LDC2	= 1812,
    LDC2_MMR6	= 1813,
    LDC2_R6	= 1814,
    LDC3	= 1815,
    LDI_B	= 1816,
    LDI_D	= 1817,
    LDI_H	= 1818,
    LDI_W	= 1819,
    LDL	= 1820,
    LDPC	= 1821,
    LDR	= 1822,
    LDXC1	= 1823,
    LDXC164	= 1824,
    LD_B	= 1825,
    LD_D	= 1826,
    LD_H	= 1827,
    LD_W	= 1828,
    LEA_ADDiu	= 1829,
    LEA_ADDiu64	= 1830,
    LEA_ADDiu_MM	= 1831,
    LH	= 1832,
    LH64	= 1833,
    LHE	= 1834,
    LHE_MM	= 1835,
    LHU16_MM	= 1836,
    LHX	= 1837,
    LHX_MM	= 1838,
    LH_MM	= 1839,
    LHu	= 1840,
    LHu64	= 1841,
    LHuE	= 1842,
    LHuE_MM	= 1843,
    LHu_MM	= 1844,
    LI16_MM	= 1845,
    LI16_MMR6	= 1846,
    LL	= 1847,
    LL64	= 1848,
    LL64_R6	= 1849,
    LLD	= 1850,
    LLD_R6	= 1851,
    LLE	= 1852,
    LLE_MM	= 1853,
    LL_MM	= 1854,
    LL_MMR6	= 1855,
    LL_R6	= 1856,
    LSA	= 1857,
    LSA_MMR6	= 1858,
    LSA_R6	= 1859,
    LUI_MMR6	= 1860,
    LUXC1	= 1861,
    LUXC164	= 1862,
    LUXC1_MM	= 1863,
    LUi	= 1864,
    LUi64	= 1865,
    LUi_MM	= 1866,
    LW	= 1867,
    LW16_MM	= 1868,
    LW64	= 1869,
    LWC1	= 1870,
    LWC1_MM	= 1871,
    LWC2	= 1872,
    LWC2_MMR6	= 1873,
    LWC2_R6	= 1874,
    LWC3	= 1875,
    LWDSP	= 1876,
    LWDSP_MM	= 1877,
    LWE	= 1878,
    LWE_MM	= 1879,
    LWGP_MM	= 1880,
    LWL	= 1881,
    LWL64	= 1882,
    LWLE	= 1883,
    LWLE_MM	= 1884,
    LWL_MM	= 1885,
    LWM16_MM	= 1886,
    LWM16_MMR6	= 1887,
    LWM32_MM	= 1888,
    LWPC	= 1889,
    LWPC_MMR6	= 1890,
    LWP_MM	= 1891,
    LWR	= 1892,
    LWR64	= 1893,
    LWRE	= 1894,
    LWRE_MM	= 1895,
    LWR_MM	= 1896,
    LWSP_MM	= 1897,
    LWUPC	= 1898,
    LWU_MM	= 1899,
    LWX	= 1900,
    LWXC1	= 1901,
    LWXC1_MM	= 1902,
    LWXS_MM	= 1903,
    LWX_MM	= 1904,
    LW_MM	= 1905,
    LW_MMR6	= 1906,
    LWu	= 1907,
    LbRxRyOffMemX16	= 1908,
    LbuRxRyOffMemX16	= 1909,
    LhRxRyOffMemX16	= 1910,
    LhuRxRyOffMemX16	= 1911,
    LiRxImm16	= 1912,
    LiRxImmAlignX16	= 1913,
    LiRxImmX16	= 1914,
    LwRxPcTcp16	= 1915,
    LwRxPcTcpX16	= 1916,
    LwRxRyOffMemX16	= 1917,
    LwRxSpImmX16	= 1918,
    MADD	= 1919,
    MADDF_D	= 1920,
    MADDF_D_MMR6	= 1921,
    MADDF_S	= 1922,
    MADDF_S_MMR6	= 1923,
    MADDR_Q_H	= 1924,
    MADDR_Q_W	= 1925,
    MADDU	= 1926,
    MADDU_DSP	= 1927,
    MADDU_DSP_MM	= 1928,
    MADDU_MM	= 1929,
    MADDV_B	= 1930,
    MADDV_D	= 1931,
    MADDV_H	= 1932,
    MADDV_W	= 1933,
    MADD_D32	= 1934,
    MADD_D32_MM	= 1935,
    MADD_D64	= 1936,
    MADD_DSP	= 1937,
    MADD_DSP_MM	= 1938,
    MADD_MM	= 1939,
    MADD_Q_H	= 1940,
    MADD_Q_W	= 1941,
    MADD_S	= 1942,
    MADD_S_MM	= 1943,
    MAQ_SA_W_PHL	= 1944,
    MAQ_SA_W_PHL_MM	= 1945,
    MAQ_SA_W_PHR	= 1946,
    MAQ_SA_W_PHR_MM	= 1947,
    MAQ_S_W_PHL	= 1948,
    MAQ_S_W_PHL_MM	= 1949,
    MAQ_S_W_PHR	= 1950,
    MAQ_S_W_PHR_MM	= 1951,
    MAXA_D	= 1952,
    MAXA_D_MMR6	= 1953,
    MAXA_S	= 1954,
    MAXA_S_MMR6	= 1955,
    MAXI_S_B	= 1956,
    MAXI_S_D	= 1957,
    MAXI_S_H	= 1958,
    MAXI_S_W	= 1959,
    MAXI_U_B	= 1960,
    MAXI_U_D	= 1961,
    MAXI_U_H	= 1962,
    MAXI_U_W	= 1963,
    MAX_A_B	= 1964,
    MAX_A_D	= 1965,
    MAX_A_H	= 1966,
    MAX_A_W	= 1967,
    MAX_D	= 1968,
    MAX_D_MMR6	= 1969,
    MAX_S	= 1970,
    MAX_S_B	= 1971,
    MAX_S_D	= 1972,
    MAX_S_H	= 1973,
    MAX_S_MMR6	= 1974,
    MAX_S_W	= 1975,
    MAX_U_B	= 1976,
    MAX_U_D	= 1977,
    MAX_U_H	= 1978,
    MAX_U_W	= 1979,
    MFC0	= 1980,
    MFC0_MMR6	= 1981,
    MFC1	= 1982,
    MFC1_D64	= 1983,
    MFC1_MM	= 1984,
    MFC1_MMR6	= 1985,
    MFC2	= 1986,
    MFC2_MMR6	= 1987,
    MFGC0	= 1988,
    MFGC0_MM	= 1989,
    MFHC0_MMR6	= 1990,
    MFHC1_D32	= 1991,
    MFHC1_D32_MM	= 1992,
    MFHC1_D64	= 1993,
    MFHC1_D64_MM	= 1994,
    MFHC2_MMR6	= 1995,
    MFHGC0	= 1996,
    MFHGC0_MM	= 1997,
    MFHI	= 1998,
    MFHI16_MM	= 1999,
    MFHI64	= 2000,
    MFHI_DSP	= 2001,
    MFHI_DSP_MM	= 2002,
    MFHI_MM	= 2003,
    MFLO	= 2004,
    MFLO16_MM	= 2005,
    MFLO64	= 2006,
    MFLO_DSP	= 2007,
    MFLO_DSP_MM	= 2008,
    MFLO_MM	= 2009,
    MFTR	= 2010,
    MINA_D	= 2011,
    MINA_D_MMR6	= 2012,
    MINA_S	= 2013,
    MINA_S_MMR6	= 2014,
    MINI_S_B	= 2015,
    MINI_S_D	= 2016,
    MINI_S_H	= 2017,
    MINI_S_W	= 2018,
    MINI_U_B	= 2019,
    MINI_U_D	= 2020,
    MINI_U_H	= 2021,
    MINI_U_W	= 2022,
    MIN_A_B	= 2023,
    MIN_A_D	= 2024,
    MIN_A_H	= 2025,
    MIN_A_W	= 2026,
    MIN_D	= 2027,
    MIN_D_MMR6	= 2028,
    MIN_S	= 2029,
    MIN_S_B	= 2030,
    MIN_S_D	= 2031,
    MIN_S_H	= 2032,
    MIN_S_MMR6	= 2033,
    MIN_S_W	= 2034,
    MIN_U_B	= 2035,
    MIN_U_D	= 2036,
    MIN_U_H	= 2037,
    MIN_U_W	= 2038,
    MOD	= 2039,
    MODSUB	= 2040,
    MODSUB_MM	= 2041,
    MODU	= 2042,
    MODU_MMR6	= 2043,
    MOD_MMR6	= 2044,
    MOD_S_B	= 2045,
    MOD_S_D	= 2046,
    MOD_S_H	= 2047,
    MOD_S_W	= 2048,
    MOD_U_B	= 2049,
    MOD_U_D	= 2050,
    MOD_U_H	= 2051,
    MOD_U_W	= 2052,
    MOVE16_MM	= 2053,
    MOVE16_MMR6	= 2054,
    MOVEP_MM	= 2055,
    MOVEP_MMR6	= 2056,
    MOVE_V	= 2057,
    MOVF_D32	= 2058,
    MOVF_D32_MM	= 2059,
    MOVF_D64	= 2060,
    MOVF_I	= 2061,
    MOVF_I64	= 2062,
    MOVF_I_MM	= 2063,
    MOVF_S	= 2064,
    MOVF_S_MM	= 2065,
    MOVN_I64_D64	= 2066,
    MOVN_I64_I	= 2067,
    MOVN_I64_I64	= 2068,
    MOVN_I64_S	= 2069,
    MOVN_I_D32	= 2070,
    MOVN_I_D32_MM	= 2071,
    MOVN_I_D64	= 2072,
    MOVN_I_I	= 2073,
    MOVN_I_I64	= 2074,
    MOVN_I_MM	= 2075,
    MOVN_I_S	= 2076,
    MOVN_I_S_MM	= 2077,
    MOVT_D32	= 2078,
    MOVT_D32_MM	= 2079,
    MOVT_D64	= 2080,
    MOVT_I	= 2081,
    MOVT_I64	= 2082,
    MOVT_I_MM	= 2083,
    MOVT_S	= 2084,
    MOVT_S_MM	= 2085,
    MOVZ_I64_D64	= 2086,
    MOVZ_I64_I	= 2087,
    MOVZ_I64_I64	= 2088,
    MOVZ_I64_S	= 2089,
    MOVZ_I_D32	= 2090,
    MOVZ_I_D32_MM	= 2091,
    MOVZ_I_D64	= 2092,
    MOVZ_I_I	= 2093,
    MOVZ_I_I64	= 2094,
    MOVZ_I_MM	= 2095,
    MOVZ_I_S	= 2096,
    MOVZ_I_S_MM	= 2097,
    MSUB	= 2098,
    MSUBF_D	= 2099,
    MSUBF_D_MMR6	= 2100,
    MSUBF_S	= 2101,
    MSUBF_S_MMR6	= 2102,
    MSUBR_Q_H	= 2103,
    MSUBR_Q_W	= 2104,
    MSUBU	= 2105,
    MSUBU_DSP	= 2106,
    MSUBU_DSP_MM	= 2107,
    MSUBU_MM	= 2108,
    MSUBV_B	= 2109,
    MSUBV_D	= 2110,
    MSUBV_H	= 2111,
    MSUBV_W	= 2112,
    MSUB_D32	= 2113,
    MSUB_D32_MM	= 2114,
    MSUB_D64	= 2115,
    MSUB_DSP	= 2116,
    MSUB_DSP_MM	= 2117,
    MSUB_MM	= 2118,
    MSUB_Q_H	= 2119,
    MSUB_Q_W	= 2120,
    MSUB_S	= 2121,
    MSUB_S_MM	= 2122,
    MTC0	= 2123,
    MTC0_MMR6	= 2124,
    MTC1	= 2125,
    MTC1_D64	= 2126,
    MTC1_D64_MM	= 2127,
    MTC1_MM	= 2128,
    MTC1_MMR6	= 2129,
    MTC2	= 2130,
    MTC2_MMR6	= 2131,
    MTGC0	= 2132,
    MTGC0_MM	= 2133,
    MTHC0_MMR6	= 2134,
    MTHC1_D32	= 2135,
    MTHC1_D32_MM	= 2136,
    MTHC1_D64	= 2137,
    MTHC1_D64_MM	= 2138,
    MTHC2_MMR6	= 2139,
    MTHGC0	= 2140,
    MTHGC0_MM	= 2141,
    MTHI	= 2142,
    MTHI64	= 2143,
    MTHI_DSP	= 2144,
    MTHI_DSP_MM	= 2145,
    MTHI_MM	= 2146,
    MTHLIP	= 2147,
    MTHLIP_MM	= 2148,
    MTLO	= 2149,
    MTLO64	= 2150,
    MTLO_DSP	= 2151,
    MTLO_DSP_MM	= 2152,
    MTLO_MM	= 2153,
    MTM0	= 2154,
    MTM1	= 2155,
    MTM2	= 2156,
    MTP0	= 2157,
    MTP1	= 2158,
    MTP2	= 2159,
    MTTR	= 2160,
    MUH	= 2161,
    MUHU	= 2162,
    MUHU_MMR6	= 2163,
    MUH_MMR6	= 2164,
    MUL	= 2165,
    MULEQ_S_W_PHL	= 2166,
    MULEQ_S_W_PHL_MM	= 2167,
    MULEQ_S_W_PHR	= 2168,
    MULEQ_S_W_PHR_MM	= 2169,
    MULEU_S_PH_QBL	= 2170,
    MULEU_S_PH_QBL_MM	= 2171,
    MULEU_S_PH_QBR	= 2172,
    MULEU_S_PH_QBR_MM	= 2173,
    MULQ_RS_PH	= 2174,
    MULQ_RS_PH_MM	= 2175,
    MULQ_RS_W	= 2176,
    MULQ_RS_W_MMR2	= 2177,
    MULQ_S_PH	= 2178,
    MULQ_S_PH_MMR2	= 2179,
    MULQ_S_W	= 2180,
    MULQ_S_W_MMR2	= 2181,
    MULR_PS64	= 2182,
    MULR_Q_H	= 2183,
    MULR_Q_W	= 2184,
    MULSAQ_S_W_PH	= 2185,
    MULSAQ_S_W_PH_MM	= 2186,
    MULSA_W_PH	= 2187,
    MULSA_W_PH_MMR2	= 2188,
    MULT	= 2189,
    MULTU_DSP	= 2190,
    MULTU_DSP_MM	= 2191,
    MULT_DSP	= 2192,
    MULT_DSP_MM	= 2193,
    MULT_MM	= 2194,
    MULTu	= 2195,
    MULTu_MM	= 2196,
    MULU	= 2197,
    MULU_MMR6	= 2198,
    MULV_B	= 2199,
    MULV_D	= 2200,
    MULV_H	= 2201,
    MULV_W	= 2202,
    MUL_MM	= 2203,
    MUL_MMR6	= 2204,
    MUL_PH	= 2205,
    MUL_PH_MMR2	= 2206,
    MUL_Q_H	= 2207,
    MUL_Q_W	= 2208,
    MUL_R6	= 2209,
    MUL_S_PH	= 2210,
    MUL_S_PH_MMR2	= 2211,
    Mfhi16	= 2212,
    Mflo16	= 2213,
    Move32R16	= 2214,
    MoveR3216	= 2215,
    NLOC_B	= 2216,
    NLOC_D	= 2217,
    NLOC_H	= 2218,
    NLOC_W	= 2219,
    NLZC_B	= 2220,
    NLZC_D	= 2221,
    NLZC_H	= 2222,
    NLZC_W	= 2223,
    NMADD_D32	= 2224,
    NMADD_D32_MM	= 2225,
    NMADD_D64	= 2226,
    NMADD_S	= 2227,
    NMADD_S_MM	= 2228,
    NMSUB_D32	= 2229,
    NMSUB_D32_MM	= 2230,
    NMSUB_D64	= 2231,
    NMSUB_S	= 2232,
    NMSUB_S_MM	= 2233,
    NOR	= 2234,
    NOR64	= 2235,
    NORI_B	= 2236,
    NOR_MM	= 2237,
    NOR_MMR6	= 2238,
    NOR_V	= 2239,
    NOT16_MM	= 2240,
    NOT16_MMR6	= 2241,
    NegRxRy16	= 2242,
    NotRxRy16	= 2243,
    OR	= 2244,
    OR16_MM	= 2245,
    OR16_MMR6	= 2246,
    OR64	= 2247,
    ORI_B	= 2248,
    ORI_MMR6	= 2249,
    OR_MM	= 2250,
    OR_MMR6	= 2251,
    OR_V	= 2252,
    ORi	= 2253,
    ORi64	= 2254,
    ORi_MM	= 2255,
    OrRxRxRy16	= 2256,
    PACKRL_PH	= 2257,
    PACKRL_PH_MM	= 2258,
    PAUSE	= 2259,
    PAUSE_MM	= 2260,
    PAUSE_MMR6	= 2261,
    PCKEV_B	= 2262,
    PCKEV_D	= 2263,
    PCKEV_H	= 2264,
    PCKEV_W	= 2265,
    PCKOD_B	= 2266,
    PCKOD_D	= 2267,
    PCKOD_H	= 2268,
    PCKOD_W	= 2269,
    PCNT_B	= 2270,
    PCNT_D	= 2271,
    PCNT_H	= 2272,
    PCNT_W	= 2273,
    PICK_PH	= 2274,
    PICK_PH_MM	= 2275,
    PICK_QB	= 2276,
    PICK_QB_MM	= 2277,
    PLL_PS64	= 2278,
    PLU_PS64	= 2279,
    POP	= 2280,
    PRECEQU_PH_QBL	= 2281,
    PRECEQU_PH_QBLA	= 2282,
    PRECEQU_PH_QBLA_MM	= 2283,
    PRECEQU_PH_QBL_MM	= 2284,
    PRECEQU_PH_QBR	= 2285,
    PRECEQU_PH_QBRA	= 2286,
    PRECEQU_PH_QBRA_MM	= 2287,
    PRECEQU_PH_QBR_MM	= 2288,
    PRECEQ_W_PHL	= 2289,
    PRECEQ_W_PHL_MM	= 2290,
    PRECEQ_W_PHR	= 2291,
    PRECEQ_W_PHR_MM	= 2292,
    PRECEU_PH_QBL	= 2293,
    PRECEU_PH_QBLA	= 2294,
    PRECEU_PH_QBLA_MM	= 2295,
    PRECEU_PH_QBL_MM	= 2296,
    PRECEU_PH_QBR	= 2297,
    PRECEU_PH_QBRA	= 2298,
    PRECEU_PH_QBRA_MM	= 2299,
    PRECEU_PH_QBR_MM	= 2300,
    PRECRQU_S_QB_PH	= 2301,
    PRECRQU_S_QB_PH_MM	= 2302,
    PRECRQ_PH_W	= 2303,
    PRECRQ_PH_W_MM	= 2304,
    PRECRQ_QB_PH	= 2305,
    PRECRQ_QB_PH_MM	= 2306,
    PRECRQ_RS_PH_W	= 2307,
    PRECRQ_RS_PH_W_MM	= 2308,
    PRECR_QB_PH	= 2309,
    PRECR_QB_PH_MMR2	= 2310,
    PRECR_SRA_PH_W	= 2311,
    PRECR_SRA_PH_W_MMR2	= 2312,
    PRECR_SRA_R_PH_W	= 2313,
    PRECR_SRA_R_PH_W_MMR2	= 2314,
    PREF	= 2315,
    PREFE	= 2316,
    PREFE_MM	= 2317,
    PREFX_MM	= 2318,
    PREF_MM	= 2319,
    PREF_MMR6	= 2320,
    PREF_R6	= 2321,
    PREPEND	= 2322,
    PREPEND_MMR2	= 2323,
    PUL_PS64	= 2324,
    PUU_PS64	= 2325,
    RADDU_W_QB	= 2326,
    RADDU_W_QB_MM	= 2327,
    RDDSP	= 2328,
    RDDSP_MM	= 2329,
    RDHWR	= 2330,
    RDHWR64	= 2331,
    RDHWR_MM	= 2332,
    RDHWR_MMR6	= 2333,
    RDPGPR_MMR6	= 2334,
    RECIP_D32	= 2335,
    RECIP_D32_MM	= 2336,
    RECIP_D64	= 2337,
    RECIP_D64_MM	= 2338,
    RECIP_S	= 2339,
    RECIP_S_MM	= 2340,
    REPLV_PH	= 2341,
    REPLV_PH_MM	= 2342,
    REPLV_QB	= 2343,
    REPLV_QB_MM	= 2344,
    REPL_PH	= 2345,
    REPL_PH_MM	= 2346,
    REPL_QB	= 2347,
    REPL_QB_MM	= 2348,
    RINT_D	= 2349,
    RINT_D_MMR6	= 2350,
    RINT_S	= 2351,
    RINT_S_MMR6	= 2352,
    ROTR	= 2353,
    ROTRV	= 2354,
    ROTRV_MM	= 2355,
    ROTR_MM	= 2356,
    ROUND_L_D64	= 2357,
    ROUND_L_D_MMR6	= 2358,
    ROUND_L_S	= 2359,
    ROUND_L_S_MMR6	= 2360,
    ROUND_W_D32	= 2361,
    ROUND_W_D64	= 2362,
    ROUND_W_D_MMR6	= 2363,
    ROUND_W_MM	= 2364,
    ROUND_W_S	= 2365,
    ROUND_W_S_MM	= 2366,
    ROUND_W_S_MMR6	= 2367,
    RSQRT_D32	= 2368,
    RSQRT_D32_MM	= 2369,
    RSQRT_D64	= 2370,
    RSQRT_D64_MM	= 2371,
    RSQRT_S	= 2372,
    RSQRT_S_MM	= 2373,
    Restore16	= 2374,
    RestoreX16	= 2375,
    SAA	= 2376,
    SAAD	= 2377,
    SAT_S_B	= 2378,
    SAT_S_D	= 2379,
    SAT_S_H	= 2380,
    SAT_S_W	= 2381,
    SAT_U_B	= 2382,
    SAT_U_D	= 2383,
    SAT_U_H	= 2384,
    SAT_U_W	= 2385,
    SB	= 2386,
    SB16_MM	= 2387,
    SB16_MMR6	= 2388,
    SB64	= 2389,
    SBE	= 2390,
    SBE_MM	= 2391,
    SB_MM	= 2392,
    SB_MMR6	= 2393,
    SC	= 2394,
    SC64	= 2395,
    SC64_R6	= 2396,
    SCD	= 2397,
    SCD_R6	= 2398,
    SCE	= 2399,
    SCE_MM	= 2400,
    SC_MM	= 2401,
    SC_MMR6	= 2402,
    SC_R6	= 2403,
    SD	= 2404,
    SDBBP	= 2405,
    SDBBP16_MM	= 2406,
    SDBBP16_MMR6	= 2407,
    SDBBP_MM	= 2408,
    SDBBP_MMR6	= 2409,
    SDBBP_R6	= 2410,
    SDC1	= 2411,
    SDC164	= 2412,
    SDC1_D64_MMR6	= 2413,
    SDC1_MM	= 2414,
    SDC2	= 2415,
    SDC2_MMR6	= 2416,
    SDC2_R6	= 2417,
    SDC3	= 2418,
    SDIV	= 2419,
    SDIV_MM	= 2420,
    SDL	= 2421,
    SDR	= 2422,
    SDXC1	= 2423,
    SDXC164	= 2424,
    SEB	= 2425,
    SEB64	= 2426,
    SEB_MM	= 2427,
    SEH	= 2428,
    SEH64	= 2429,
    SEH_MM	= 2430,
    SELEQZ	= 2431,
    SELEQZ64	= 2432,
    SELEQZ_D	= 2433,
    SELEQZ_D_MMR6	= 2434,
    SELEQZ_MMR6	= 2435,
    SELEQZ_S	= 2436,
    SELEQZ_S_MMR6	= 2437,
    SELNEZ	= 2438,
    SELNEZ64	= 2439,
    SELNEZ_D	= 2440,
    SELNEZ_D_MMR6	= 2441,
    SELNEZ_MMR6	= 2442,
    SELNEZ_S	= 2443,
    SELNEZ_S_MMR6	= 2444,
    SEL_D	= 2445,
    SEL_D_MMR6	= 2446,
    SEL_S	= 2447,
    SEL_S_MMR6	= 2448,
    SEQ	= 2449,
    SEQi	= 2450,
    SH	= 2451,
    SH16_MM	= 2452,
    SH16_MMR6	= 2453,
    SH64	= 2454,
    SHE	= 2455,
    SHE_MM	= 2456,
    SHF_B	= 2457,
    SHF_H	= 2458,
    SHF_W	= 2459,
    SHILO	= 2460,
    SHILOV	= 2461,
    SHILOV_MM	= 2462,
    SHILO_MM	= 2463,
    SHLLV_PH	= 2464,
    SHLLV_PH_MM	= 2465,
    SHLLV_QB	= 2466,
    SHLLV_QB_MM	= 2467,
    SHLLV_S_PH	= 2468,
    SHLLV_S_PH_MM	= 2469,
    SHLLV_S_W	= 2470,
    SHLLV_S_W_MM	= 2471,
    SHLL_PH	= 2472,
    SHLL_PH_MM	= 2473,
    SHLL_QB	= 2474,
    SHLL_QB_MM	= 2475,
    SHLL_S_PH	= 2476,
    SHLL_S_PH_MM	= 2477,
    SHLL_S_W	= 2478,
    SHLL_S_W_MM	= 2479,
    SHRAV_PH	= 2480,
    SHRAV_PH_MM	= 2481,
    SHRAV_QB	= 2482,
    SHRAV_QB_MMR2	= 2483,
    SHRAV_R_PH	= 2484,
    SHRAV_R_PH_MM	= 2485,
    SHRAV_R_QB	= 2486,
    SHRAV_R_QB_MMR2	= 2487,
    SHRAV_R_W	= 2488,
    SHRAV_R_W_MM	= 2489,
    SHRA_PH	= 2490,
    SHRA_PH_MM	= 2491,
    SHRA_QB	= 2492,
    SHRA_QB_MMR2	= 2493,
    SHRA_R_PH	= 2494,
    SHRA_R_PH_MM	= 2495,
    SHRA_R_QB	= 2496,
    SHRA_R_QB_MMR2	= 2497,
    SHRA_R_W	= 2498,
    SHRA_R_W_MM	= 2499,
    SHRLV_PH	= 2500,
    SHRLV_PH_MMR2	= 2501,
    SHRLV_QB	= 2502,
    SHRLV_QB_MM	= 2503,
    SHRL_PH	= 2504,
    SHRL_PH_MMR2	= 2505,
    SHRL_QB	= 2506,
    SHRL_QB_MM	= 2507,
    SH_MM	= 2508,
    SH_MMR6	= 2509,
    SIGRIE	= 2510,
    SIGRIE_MMR6	= 2511,
    SLDI_B	= 2512,
    SLDI_D	= 2513,
    SLDI_H	= 2514,
    SLDI_W	= 2515,
    SLD_B	= 2516,
    SLD_D	= 2517,
    SLD_H	= 2518,
    SLD_W	= 2519,
    SLL	= 2520,
    SLL16_MM	= 2521,
    SLL16_MMR6	= 2522,
    SLL64_32	= 2523,
    SLL64_64	= 2524,
    SLLI_B	= 2525,
    SLLI_D	= 2526,
    SLLI_H	= 2527,
    SLLI_W	= 2528,
    SLLV	= 2529,
    SLLV_MM	= 2530,
    SLL_B	= 2531,
    SLL_D	= 2532,
    SLL_H	= 2533,
    SLL_MM	= 2534,
    SLL_MMR6	= 2535,
    SLL_W	= 2536,
    SLT	= 2537,
    SLT64	= 2538,
    SLT_MM	= 2539,
    SLTi	= 2540,
    SLTi64	= 2541,
    SLTi_MM	= 2542,
    SLTiu	= 2543,
    SLTiu64	= 2544,
    SLTiu_MM	= 2545,
    SLTu	= 2546,
    SLTu64	= 2547,
    SLTu_MM	= 2548,
    SNE	= 2549,
    SNEi	= 2550,
    SPLATI_B	= 2551,
    SPLATI_D	= 2552,
    SPLATI_H	= 2553,
    SPLATI_W	= 2554,
    SPLAT_B	= 2555,
    SPLAT_D	= 2556,
    SPLAT_H	= 2557,
    SPLAT_W	= 2558,
    SRA	= 2559,
    SRAI_B	= 2560,
    SRAI_D	= 2561,
    SRAI_H	= 2562,
    SRAI_W	= 2563,
    SRARI_B	= 2564,
    SRARI_D	= 2565,
    SRARI_H	= 2566,
    SRARI_W	= 2567,
    SRAR_B	= 2568,
    SRAR_D	= 2569,
    SRAR_H	= 2570,
    SRAR_W	= 2571,
    SRAV	= 2572,
    SRAV_MM	= 2573,
    SRA_B	= 2574,
    SRA_D	= 2575,
    SRA_H	= 2576,
    SRA_MM	= 2577,
    SRA_W	= 2578,
    SRL	= 2579,
    SRL16_MM	= 2580,
    SRL16_MMR6	= 2581,
    SRLI_B	= 2582,
    SRLI_D	= 2583,
    SRLI_H	= 2584,
    SRLI_W	= 2585,
    SRLRI_B	= 2586,
    SRLRI_D	= 2587,
    SRLRI_H	= 2588,
    SRLRI_W	= 2589,
    SRLR_B	= 2590,
    SRLR_D	= 2591,
    SRLR_H	= 2592,
    SRLR_W	= 2593,
    SRLV	= 2594,
    SRLV_MM	= 2595,
    SRL_B	= 2596,
    SRL_D	= 2597,
    SRL_H	= 2598,
    SRL_MM	= 2599,
    SRL_W	= 2600,
    SSNOP	= 2601,
    SSNOP_MM	= 2602,
    SSNOP_MMR6	= 2603,
    ST_B	= 2604,
    ST_D	= 2605,
    ST_H	= 2606,
    ST_W	= 2607,
    SUB	= 2608,
    SUBQH_PH	= 2609,
    SUBQH_PH_MMR2	= 2610,
    SUBQH_R_PH	= 2611,
    SUBQH_R_PH_MMR2	= 2612,
    SUBQH_R_W	= 2613,
    SUBQH_R_W_MMR2	= 2614,
    SUBQH_W	= 2615,
    SUBQH_W_MMR2	= 2616,
    SUBQ_PH	= 2617,
    SUBQ_PH_MM	= 2618,
    SUBQ_S_PH	= 2619,
    SUBQ_S_PH_MM	= 2620,
    SUBQ_S_W	= 2621,
    SUBQ_S_W_MM	= 2622,
    SUBSUS_U_B	= 2623,
    SUBSUS_U_D	= 2624,
    SUBSUS_U_H	= 2625,
    SUBSUS_U_W	= 2626,
    SUBSUU_S_B	= 2627,
    SUBSUU_S_D	= 2628,
    SUBSUU_S_H	= 2629,
    SUBSUU_S_W	= 2630,
    SUBS_S_B	= 2631,
    SUBS_S_D	= 2632,
    SUBS_S_H	= 2633,
    SUBS_S_W	= 2634,
    SUBS_U_B	= 2635,
    SUBS_U_D	= 2636,
    SUBS_U_H	= 2637,
    SUBS_U_W	= 2638,
    SUBU16_MM	= 2639,
    SUBU16_MMR6	= 2640,
    SUBUH_QB	= 2641,
    SUBUH_QB_MMR2	= 2642,
    SUBUH_R_QB	= 2643,
    SUBUH_R_QB_MMR2	= 2644,
    SUBU_MMR6	= 2645,
    SUBU_PH	= 2646,
    SUBU_PH_MMR2	= 2647,
    SUBU_QB	= 2648,
    SUBU_QB_MM	= 2649,
    SUBU_S_PH	= 2650,
    SUBU_S_PH_MMR2	= 2651,
    SUBU_S_QB	= 2652,
    SUBU_S_QB_MM	= 2653,
    SUBVI_B	= 2654,
    SUBVI_D	= 2655,
    SUBVI_H	= 2656,
    SUBVI_W	= 2657,
    SUBV_B	= 2658,
    SUBV_D	= 2659,
    SUBV_H	= 2660,
    SUBV_W	= 2661,
    SUB_MM	= 2662,
    SUB_MMR6	= 2663,
    SUBu	= 2664,
    SUBu_MM	= 2665,
    SUXC1	= 2666,
    SUXC164	= 2667,
    SUXC1_MM	= 2668,
    SW	= 2669,
    SW16_MM	= 2670,
    SW16_MMR6	= 2671,
    SW64	= 2672,
    SWC1	= 2673,
    SWC1_MM	= 2674,
    SWC2	= 2675,
    SWC2_MMR6	= 2676,
    SWC2_R6	= 2677,
    SWC3	= 2678,
    SWDSP	= 2679,
    SWDSP_MM	= 2680,
    SWE	= 2681,
    SWE_MM	= 2682,
    SWL	= 2683,
    SWL64	= 2684,
    SWLE	= 2685,
    SWLE_MM	= 2686,
    SWL_MM	= 2687,
    SWM16_MM	= 2688,
    SWM16_MMR6	= 2689,
    SWM32_MM	= 2690,
    SWP_MM	= 2691,
    SWR	= 2692,
    SWR64	= 2693,
    SWRE	= 2694,
    SWRE_MM	= 2695,
    SWR_MM	= 2696,
    SWSP_MM	= 2697,
    SWSP_MMR6	= 2698,
    SWXC1	= 2699,
    SWXC1_MM	= 2700,
    SW_MM	= 2701,
    SW_MMR6	= 2702,
    SYNC	= 2703,
    SYNCI	= 2704,
    SYNCI_MM	= 2705,
    SYNCI_MMR6	= 2706,
    SYNC_MM	= 2707,
    SYNC_MMR6	= 2708,
    SYSCALL	= 2709,
    SYSCALL_MM	= 2710,
    Save16	= 2711,
    SaveX16	= 2712,
    SbRxRyOffMemX16	= 2713,
    SebRx16	= 2714,
    SehRx16	= 2715,
    ShRxRyOffMemX16	= 2716,
    SllX16	= 2717,
    SllvRxRy16	= 2718,
    SltRxRy16	= 2719,
    SltiRxImm16	= 2720,
    SltiRxImmX16	= 2721,
    SltiuRxImm16	= 2722,
    SltiuRxImmX16	= 2723,
    SltuRxRy16	= 2724,
    SraX16	= 2725,
    SravRxRy16	= 2726,
    SrlX16	= 2727,
    SrlvRxRy16	= 2728,
    SubuRxRyRz16	= 2729,
    SwRxRyOffMemX16	= 2730,
    SwRxSpImmX16	= 2731,
    TEQ	= 2732,
    TEQI	= 2733,
    TEQI_MM	= 2734,
    TEQ_MM	= 2735,
    TGE	= 2736,
    TGEI	= 2737,
    TGEIU	= 2738,
    TGEIU_MM	= 2739,
    TGEI_MM	= 2740,
    TGEU	= 2741,
    TGEU_MM	= 2742,
    TGE_MM	= 2743,
    TLBGINV	= 2744,
    TLBGINVF	= 2745,
    TLBGINVF_MM	= 2746,
    TLBGINV_MM	= 2747,
    TLBGP	= 2748,
    TLBGP_MM	= 2749,
    TLBGR	= 2750,
    TLBGR_MM	= 2751,
    TLBGWI	= 2752,
    TLBGWI_MM	= 2753,
    TLBGWR	= 2754,
    TLBGWR_MM	= 2755,
    TLBINV	= 2756,
    TLBINVF	= 2757,
    TLBINVF_MMR6	= 2758,
    TLBINV_MMR6	= 2759,
    TLBP	= 2760,
    TLBP_MM	= 2761,
    TLBR	= 2762,
    TLBR_MM	= 2763,
    TLBWI	= 2764,
    TLBWI_MM	= 2765,
    TLBWR	= 2766,
    TLBWR_MM	= 2767,
    TLT	= 2768,
    TLTI	= 2769,
    TLTIU_MM	= 2770,
    TLTI_MM	= 2771,
    TLTU	= 2772,
    TLTU_MM	= 2773,
    TLT_MM	= 2774,
    TNE	= 2775,
    TNEI	= 2776,
    TNEI_MM	= 2777,
    TNE_MM	= 2778,
    TRUNC_L_D64	= 2779,
    TRUNC_L_D_MMR6	= 2780,
    TRUNC_L_S	= 2781,
    TRUNC_L_S_MMR6	= 2782,
    TRUNC_W_D32	= 2783,
    TRUNC_W_D64	= 2784,
    TRUNC_W_D_MMR6	= 2785,
    TRUNC_W_MM	= 2786,
    TRUNC_W_S	= 2787,
    TRUNC_W_S_MM	= 2788,
    TRUNC_W_S_MMR6	= 2789,
    TTLTIU	= 2790,
    UDIV	= 2791,
    UDIV_MM	= 2792,
    V3MULU	= 2793,
    VMM0	= 2794,
    VMULU	= 2795,
    VSHF_B	= 2796,
    VSHF_D	= 2797,
    VSHF_H	= 2798,
    VSHF_W	= 2799,
    WAIT	= 2800,
    WAIT_MM	= 2801,
    WAIT_MMR6	= 2802,
    WRDSP	= 2803,
    WRDSP_MM	= 2804,
    WRPGPR_MMR6	= 2805,
    WSBH	= 2806,
    WSBH_MM	= 2807,
    WSBH_MMR6	= 2808,
    XOR	= 2809,
    XOR16_MM	= 2810,
    XOR16_MMR6	= 2811,
    XOR64	= 2812,
    XORI_B	= 2813,
    XORI_MMR6	= 2814,
    XOR_MM	= 2815,
    XOR_MMR6	= 2816,
    XOR_V	= 2817,
    XORi	= 2818,
    XORi64	= 2819,
    XORi_MM	= 2820,
    XorRxRxRy16	= 2821,
    YIELD	= 2822,
    INSTRUCTION_LIST_END = 2823
  };

} // end namespace Mips
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace Mips {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIPseudo	= 1,
    II_B	= 2,
    II_BCCZAL	= 3,
    II_MTC1	= 4,
    II_MFC1	= 5,
    II_JALR	= 6,
    II_JAL	= 7,
    II_CVT	= 8,
    II_DMULT	= 9,
    II_DMULTU	= 10,
    II_DDIV	= 11,
    II_DDIVU	= 12,
    II_IndirectBranchPseudo	= 13,
    II_MADD	= 14,
    II_MADDU	= 15,
    II_MFHI_MFLO	= 16,
    II_MSUB	= 17,
    II_MSUBU	= 18,
    II_MTHI_MTLO	= 19,
    II_MULT	= 20,
    II_MULTU	= 21,
    II_ReturnPseudo	= 22,
    II_DIV	= 23,
    II_DIVU	= 24,
    II_J	= 25,
    II_JR	= 26,
    II_TRAP	= 27,
    II_ADD	= 28,
    II_ADDIUPC	= 29,
    II_ADDIU	= 30,
    II_ADDR_PS	= 31,
    II_ADDU	= 32,
    II_ADDI	= 33,
    II_ALIGN	= 34,
    II_ALUIPC	= 35,
    II_AND	= 36,
    II_ANDI	= 37,
    II_AUI	= 38,
    II_AUIPC	= 39,
    IIM16Alu	= 40,
    II_BADDU	= 41,
    II_BC	= 42,
    II_BALC	= 43,
    II_BBIT	= 44,
    II_BC1CCZ	= 45,
    II_BC1F	= 46,
    II_BC1FL	= 47,
    II_BC1T	= 48,
    II_BC1TL	= 49,
    II_BC2CCZ	= 50,
    II_BCC	= 51,
    II_BCCC	= 52,
    II_BCCZ	= 53,
    II_BCCZC	= 54,
    II_BCCZALS	= 55,
    II_BITSWAP	= 56,
    II_BREAK	= 57,
    II_CACHE	= 58,
    II_CACHEE	= 59,
    II_CEIL	= 60,
    II_CFC1	= 61,
    II_CFC2	= 62,
    II_INS	= 63,
    II_CLASS_D	= 64,
    II_CLASS_S	= 65,
    II_CLO	= 66,
    II_CLZ	= 67,
    II_CMP_CC_D	= 68,
    II_CMP_CC_S	= 69,
    II_CRC32B	= 70,
    II_CRC32CB	= 71,
    II_CRC32CD	= 72,
    II_CRC32CH	= 73,
    II_CRC32CW	= 74,
    II_CRC32D	= 75,
    II_CRC32H	= 76,
    II_CRC32W	= 77,
    II_CTC1	= 78,
    II_CTC2	= 79,
    II_C_CC_D	= 80,
    II_C_CC_S	= 81,
    II_DADD	= 82,
    II_DADDI	= 83,
    II_DADDIU	= 84,
    II_DADDU	= 85,
    II_DAHI	= 86,
    II_DALIGN	= 87,
    II_DATI	= 88,
    II_DAUI	= 89,
    II_DBITSWAP	= 90,
    II_DCLO	= 91,
    II_DCLZ	= 92,
    II_DERET	= 93,
    II_EXT	= 94,
    II_DI	= 95,
    II_DLSA	= 96,
    II_DMFC0	= 97,
    II_DMFC1	= 98,
    II_DMFC2	= 99,
    II_DMFGC0	= 100,
    II_DMOD	= 101,
    II_DMODU	= 102,
    II_DMT	= 103,
    II_DMTC0	= 104,
    II_DMTC1	= 105,
    II_DMTC2	= 106,
    II_DMTGC0	= 107,
    II_DMUH	= 108,
    II_DMUHU	= 109,
    II_DMUL	= 110,
    II_POP	= 111,
    II_DROTR	= 112,
    II_DROTR32	= 113,
    II_DROTRV	= 114,
    II_DSBH	= 115,
    II_DSHD	= 116,
    II_DSLL	= 117,
    II_DSLL32	= 118,
    II_DSLLV	= 119,
    II_DSRA	= 120,
    II_DSRA32	= 121,
    II_DSRAV	= 122,
    II_DSRL	= 123,
    II_DSRL32	= 124,
    II_DSRLV	= 125,
    II_DSUB	= 126,
    II_DSUBU	= 127,
    II_DVP	= 128,
    II_DVPE	= 129,
    II_EHB	= 130,
    II_EI	= 131,
    II_EMT	= 132,
    II_ERET	= 133,
    II_ERETNC	= 134,
    II_EVP	= 135,
    II_EVPE	= 136,
    II_ABS	= 137,
    II_SQRT_D	= 138,
    II_ADD_D	= 139,
    II_ADD_PS	= 140,
    II_ADD_S	= 141,
    II_DIV_D	= 142,
    II_DIV_S	= 143,
    II_FLOOR	= 144,
    II_MOV_D	= 145,
    II_MOV_S	= 146,
    II_MUL_D	= 147,
    II_MUL_PS	= 148,
    II_MUL_S	= 149,
    II_NEG	= 150,
    II_FORK	= 151,
    II_SQRT_S	= 152,
    II_SUB_D	= 153,
    II_SUB_PS	= 154,
    II_SUB_S	= 155,
    II_GINVI	= 156,
    II_GINVT	= 157,
    II_HYPCALL	= 158,
    II_JALR_HB	= 159,
    II_JALRC	= 160,
    II_JALRS	= 161,
    II_JALS	= 162,
    II_JIALC	= 163,
    II_JIC	= 164,
    II_JRADDIUSP	= 165,
    II_JRC	= 166,
    II_JR_HB	= 167,
    II_LB	= 168,
    II_LBE	= 169,
    II_LBU	= 170,
    II_LBUE	= 171,
    II_LD	= 172,
    II_LDC1	= 173,
    II_LDC2	= 174,
    II_LDC3	= 175,
    II_LDL	= 176,
    II_LDPC	= 177,
    II_LDR	= 178,
    II_LDXC1	= 179,
    II_LH	= 180,
    II_LHE	= 181,
    II_LHU	= 182,
    II_LHUE	= 183,
    II_LI	= 184,
    II_LL	= 185,
    II_LLD	= 186,
    II_LLE	= 187,
    II_LSA	= 188,
    II_LUI	= 189,
    II_LUXC1	= 190,
    II_LW	= 191,
    II_LWC1	= 192,
    II_LWC2	= 193,
    II_LWC3	= 194,
    II_LWE	= 195,
    II_LWL	= 196,
    II_LWLE	= 197,
    II_LWM	= 198,
    II_LWPC	= 199,
    II_LWP	= 200,
    II_LWR	= 201,
    II_LWRE	= 202,
    II_LWUPC	= 203,
    II_LWU	= 204,
    II_LWXC1	= 205,
    II_LWXS	= 206,
    II_MADDF_D	= 207,
    II_MADDF_S	= 208,
    II_MADD_D	= 209,
    II_MADD_S	= 210,
    II_MAX_D	= 211,
    II_MAXA_D	= 212,
    II_MAX_S	= 213,
    II_MAXA_S	= 214,
    II_MFC0	= 215,
    II_MFC2	= 216,
    II_MFGC0	= 217,
    II_MFHC0	= 218,
    II_MFHC1	= 219,
    II_MFHGC0	= 220,
    II_MFTR	= 221,
    II_MIN_S	= 222,
    II_MINA_D	= 223,
    II_MIN_D	= 224,
    II_MINA_S	= 225,
    II_MOD	= 226,
    II_MODU	= 227,
    II_MOVE	= 228,
    II_MOVF_D	= 229,
    II_MOVF	= 230,
    II_MOVF_S	= 231,
    II_MOVN_D	= 232,
    II_MOVN	= 233,
    II_MOVN_S	= 234,
    II_MOVT_D	= 235,
    II_MOVT	= 236,
    II_MOVT_S	= 237,
    II_MOVZ_D	= 238,
    II_MOVZ	= 239,
    II_MOVZ_S	= 240,
    II_MSUBF_D	= 241,
    II_MSUBF_S	= 242,
    II_MSUB_D	= 243,
    II_MSUB_S	= 244,
    II_MTC0	= 245,
    II_MTC2	= 246,
    II_MTGC0	= 247,
    II_MTHC0	= 248,
    II_MTHC1	= 249,
    II_MTHGC0	= 250,
    II_MTTR	= 251,
    II_MUH	= 252,
    II_MUHU	= 253,
    II_MUL	= 254,
    II_MULR_PS	= 255,
    II_MULU	= 256,
    II_NMADD_D	= 257,
    II_NMADD_S	= 258,
    II_NMSUB_D	= 259,
    II_NMSUB_S	= 260,
    II_NOR	= 261,
    II_NOT	= 262,
    II_OR	= 263,
    II_ORI	= 264,
    II_PAUSE	= 265,
    II_PREF	= 266,
    II_PREFE	= 267,
    II_RDHWR	= 268,
    II_RDPGPR	= 269,
    II_RECIP_D	= 270,
    II_RECIP_S	= 271,
    II_RINT_D	= 272,
    II_RINT_S	= 273,
    II_ROTR	= 274,
    II_ROTRV	= 275,
    II_ROUND	= 276,
    II_RSQRT_D	= 277,
    II_RSQRT_S	= 278,
    II_RESTORE	= 279,
    II_SB	= 280,
    II_SBE	= 281,
    II_SC	= 282,
    II_SCD	= 283,
    II_SCE	= 284,
    II_SD	= 285,
    II_SDBBP	= 286,
    II_SDC1	= 287,
    II_SDC2	= 288,
    II_SDC3	= 289,
    II_SDL	= 290,
    II_SDR	= 291,
    II_SDXC1	= 292,
    II_SEB	= 293,
    II_SEH	= 294,
    II_SELCCZ	= 295,
    II_SELCCZ_D	= 296,
    II_SELCCZ_S	= 297,
    II_SEL_D	= 298,
    II_SEL_S	= 299,
    II_SEQ_SNE	= 300,
    II_SEQI_SNEI	= 301,
    II_SH	= 302,
    II_SHE	= 303,
    II_SIGRIE	= 304,
    II_SLL	= 305,
    II_SLLV	= 306,
    II_SLT_SLTU	= 307,
    II_SLTI_SLTIU	= 308,
    II_SRA	= 309,
    II_SRAV	= 310,
    II_SRL	= 311,
    II_SRLV	= 312,
    II_SSNOP	= 313,
    II_SUB	= 314,
    II_SUBU	= 315,
    II_SUXC1	= 316,
    II_SW	= 317,
    II_SWC1	= 318,
    II_SWC2	= 319,
    II_SWC3	= 320,
    II_SWE	= 321,
    II_SWL	= 322,
    II_SWLE	= 323,
    II_SWM	= 324,
    II_SWP	= 325,
    II_SWR	= 326,
    II_SWRE	= 327,
    II_SWXC1	= 328,
    II_SYNC	= 329,
    II_SYNCI	= 330,
    II_SYSCALL	= 331,
    II_SAVE	= 332,
    II_TEQ	= 333,
    II_TEQI	= 334,
    II_TGE	= 335,
    II_TGEI	= 336,
    II_TGEIU	= 337,
    II_TGEU	= 338,
    II_TLBGINV	= 339,
    II_TLBGINVF	= 340,
    II_TLBGP	= 341,
    II_TLBGR	= 342,
    II_TLBGWI	= 343,
    II_TLBGWR	= 344,
    II_TLBINV	= 345,
    II_TLBINVF	= 346,
    II_TLBP	= 347,
    II_TLBR	= 348,
    II_TLBWI	= 349,
    II_TLBWR	= 350,
    II_TLT	= 351,
    II_TLTI	= 352,
    II_TTLTIU	= 353,
    II_TLTU	= 354,
    II_TNE	= 355,
    II_TNEI	= 356,
    II_TRUNC	= 357,
    II_WAIT	= 358,
    II_WRPGPR	= 359,
    II_WSBH	= 360,
    II_XOR	= 361,
    II_XORI	= 362,
    II_YIELD	= 363,
    AND	= 364,
    LUi	= 365,
    NOR	= 366,
    OR	= 367,
    SLTi_SLTiu	= 368,
    SUB	= 369,
    SUBu	= 370,
    XOR	= 371,
    SSNOP	= 372,
    NOP	= 373,
    B	= 374,
    BAL	= 375,
    BAL_BR_BGEZAL_BGEZALL_BLTZAL_BLTZALL	= 376,
    BEQ_BEQL_BNE_BNEL	= 377,
    BGEZ_BGEZL_BGTZ_BGTZL_BLEZ_BLEZL_BLTZ_BLTZL	= 378,
    BREAK	= 379,
    DERET	= 380,
    ERET	= 381,
    ERet_RetRA	= 382,
    ERETNC	= 383,
    J_TAILCALL	= 384,
    JR_TAILCALLREG_TAILCALLREGHB	= 385,
    JR_HB	= 386,
    PseudoIndirectBranch_PseudoIndirectHazardBranch	= 387,
    PseudoReturn	= 388,
    SDBBP	= 389,
    SYSCALL	= 390,
    TEQ	= 391,
    TEQI	= 392,
    TGE	= 393,
    TGEI	= 394,
    TGEIU	= 395,
    TGEU	= 396,
    TLT	= 397,
    TLTI	= 398,
    TLTU	= 399,
    TNE	= 400,
    TNEI	= 401,
    TRAP	= 402,
    TTLTIU	= 403,
    WAIT	= 404,
    PAUSE	= 405,
    JAL	= 406,
    JALR_JALRHBPseudo_JALRPseudo	= 407,
    JALR_HB	= 408,
    JALX	= 409,
    TLBINV	= 410,
    TLBINVF	= 411,
    TLBP	= 412,
    TLBR	= 413,
    TLBWI	= 414,
    TLBWR	= 415,
    MFC0	= 416,
    MTC0	= 417,
    MFC2	= 418,
    MTC2	= 419,
    HYPCALL	= 420,
    MFGC0	= 421,
    MFHGC0	= 422,
    MTGC0	= 423,
    MTHGC0	= 424,
    TLBGINV	= 425,
    TLBGINVF	= 426,
    TLBGP	= 427,
    TLBGR	= 428,
    TLBGWI	= 429,
    TLBGWR	= 430,
    LB	= 431,
    LBu	= 432,
    LH	= 433,
    LHu	= 434,
    LW	= 435,
    LL	= 436,
    LWC2	= 437,
    LWC3	= 438,
    LDC2	= 439,
    LDC3	= 440,
    LBE	= 441,
    LBuE	= 442,
    LHE	= 443,
    LHuE	= 444,
    LWE	= 445,
    LLE	= 446,
    LWPC	= 447,
    LWL	= 448,
    LWR	= 449,
    LWLE	= 450,
    LWRE	= 451,
    SB	= 452,
    SH	= 453,
    SW	= 454,
    SWC2	= 455,
    SWC3	= 456,
    SDC2	= 457,
    SDC3	= 458,
    SC	= 459,
    SBE	= 460,
    SHE	= 461,
    SWE	= 462,
    SCE	= 463,
    SWL	= 464,
    SWR	= 465,
    SWLE	= 466,
    SWRE	= 467,
    PREF	= 468,
    PREFE	= 469,
    CACHE	= 470,
    CACHEE	= 471,
    SYNC	= 472,
    SYNCI	= 473,
    CLO	= 474,
    CLZ	= 475,
    DI	= 476,
    EI	= 477,
    MFHI_MFLO_PseudoMFHI_PseudoMFLO	= 478,
    EHB	= 479,
    RDHWR	= 480,
    WSBH	= 481,
    MOVN_I_I	= 482,
    MOVZ_I_I	= 483,
    DIV_PseudoSDIV_SDIV	= 484,
    DIVU_PseudoUDIV_UDIV	= 485,
    MUL	= 486,
    MULT_PseudoMULT	= 487,
    MULTu_PseudoMULTu	= 488,
    MADD_PseudoMADD	= 489,
    MADDU_PseudoMADDU	= 490,
    MSUB_PseudoMSUB	= 491,
    MSUBU_PseudoMSUBU	= 492,
    MTHI_MTLO_PseudoMTLOHI	= 493,
    EXT	= 494,
    INS	= 495,
    ADD	= 496,
    ADDi	= 497,
    ADDiu	= 498,
    ANDi	= 499,
    ORi	= 500,
    ROTR	= 501,
    SEB	= 502,
    SEH	= 503,
    SLT_SLTu	= 504,
    SLL	= 505,
    SRA	= 506,
    SRL	= 507,
    XORi	= 508,
    ADDu	= 509,
    SLLV	= 510,
    SRAV	= 511,
    SRLV	= 512,
    LSA	= 513,
    COPY	= 514,
    VSHF_B_VSHF_D_VSHF_H_VSHF_W	= 515,
    BINSLI_B_BINSLI_D_BINSLI_H_BINSLI_W_BINSL_B_BINSL_D_BINSL_H_BINSL_W	= 516,
    BINSRI_B_BINSRI_D_BINSRI_H_BINSRI_W_BINSR_B_BINSR_D_BINSR_H_BINSR_W	= 517,
    INSERT_B_INSERT_D_INSERT_H_INSERT_W	= 518,
    SLDI_B_SLDI_D_SLDI_H_SLDI_W_SLD_B_SLD_D_SLD_H_SLD_W	= 519,
    BSETI_B_BSETI_D_BSETI_H_BSETI_W_BSET_B_BSET_D_BSET_H_BSET_W	= 520,
    BCLRI_B_BCLRI_D_BCLRI_H_BCLRI_W_BCLR_B_BCLR_D_BCLR_H_BCLR_W	= 521,
    BNEGI_B_BNEGI_D_BNEGI_H_BNEGI_W_BNEG_B_BNEG_D_BNEG_H_BNEG_W	= 522,
    BSELI_B_BSEL_V	= 523,
    BMNZI_B_BMNZ_V_BMZI_B_BMZ_V	= 524,
    BSEL_D_PSEUDO_BSEL_FD_PSEUDO_BSEL_FW_PSEUDO_BSEL_H_PSEUDO_BSEL_W_PSEUDO	= 525,
    PCNT_B_PCNT_D_PCNT_H_PCNT_W	= 526,
    SAT_S_B_SAT_S_D_SAT_S_H_SAT_S_W_SAT_U_B_SAT_U_D_SAT_U_H_SAT_U_W	= 527,
    BNZ_B_BNZ_D_BNZ_H_BNZ_V_BNZ_W_BZ_B_BZ_D_BZ_H_BZ_V_BZ_W	= 528,
    CFCMSA_CTCMSA	= 529,
    FABS_S_FABS_D32_FABS_D64	= 530,
    MOVF_D32_MOVF_D64	= 531,
    MOVF_S	= 532,
    MOVT_D32_MOVT_D64	= 533,
    MOVT_S	= 534,
    FMOV_D32_FMOV_D64	= 535,
    FMOV_S	= 536,
    FNEG_S_FNEG_D32_FNEG_D64	= 537,
    ADD_A_B_ADD_A_D_ADD_A_H_ADD_A_W	= 538,
    ADDS_A_B_ADDS_A_D_ADDS_A_H_ADDS_A_W_ADDS_S_B_ADDS_S_D_ADDS_S_H_ADDS_S_W_ADDS_U_B_ADDS_U_D_ADDS_U_H_ADDS_U_W	= 539,
    ADDVI_B_ADDVI_D_ADDVI_H_ADDVI_W_ADDV_B_ADDV_D_ADDV_H_ADDV_W	= 540,
    ASUB_S_B_ASUB_S_D_ASUB_S_H_ASUB_S_W_ASUB_U_B_ASUB_U_D_ASUB_U_H_ASUB_U_W	= 541,
    AVER_S_B_AVER_S_D_AVER_S_H_AVER_S_W_AVER_U_B_AVER_U_D_AVER_U_H_AVER_U_W_AVE_S_B_AVE_S_D_AVE_S_H_AVE_S_W_AVE_U_B_AVE_U_D_AVE_U_H_AVE_U_W	= 542,
    SHF_B_SHF_H_SHF_W	= 543,
    FILL_B_FILL_D_FILL_H_FILL_W	= 544,
    SPLATI_B_SPLATI_D_SPLATI_H_SPLATI_W_SPLAT_B_SPLAT_D_SPLAT_H_SPLAT_W	= 545,
    MOVE_V	= 546,
    LDI_B_LDI_D_LDI_H_LDI_W	= 547,
    AND_V_NOR_V_OR_V_XOR_V	= 548,
    ANDI_B_NORI_B_ORI_B_XORI_B	= 549,
    AND_V_D_PSEUDO_AND_V_H_PSEUDO_AND_V_W_PSEUDO_NOR_V_D_PSEUDO_NOR_V_H_PSEUDO_NOR_V_W_PSEUDO_OR_V_D_PSEUDO_OR_V_H_PSEUDO_OR_V_W_PSEUDO_XOR_V_D_PSEUDO_XOR_V_H_PSEUDO_XOR_V_W_PSEUDO	= 550,
    FILL_FD_PSEUDO_FILL_FW_PSEUDO	= 551,
    INSERT_FD_PSEUDO_INSERT_FW_PSEUDO	= 552,
    FEXP2_D_FEXP2_W	= 553,
    CLTI_S_B_CLTI_S_D_CLTI_S_H_CLTI_S_W_CLTI_U_B_CLTI_U_D_CLTI_U_H_CLTI_U_W_CLT_S_B_CLT_S_D_CLT_S_H_CLT_S_W_CLT_U_B_CLT_U_D_CLT_U_H_CLT_U_W	= 554,
    CLEI_S_B_CLEI_S_D_CLEI_S_H_CLEI_S_W_CLEI_U_B_CLEI_U_D_CLEI_U_H_CLEI_U_W_CLE_S_B_CLE_S_D_CLE_S_H_CLE_S_W_CLE_U_B_CLE_U_D_CLE_U_H_CLE_U_W	= 555,
    CEQI_B_CEQI_D_CEQI_H_CEQI_W_CEQ_B_CEQ_D_CEQ_H_CEQ_W	= 556,
    CMP_UN_D	= 557,
    CMP_UN_S	= 558,
    CMP_UEQ_D	= 559,
    CMP_UEQ_S	= 560,
    CMP_EQ_D	= 561,
    CMP_EQ_S	= 562,
    CMP_LT_D	= 563,
    CMP_LT_S	= 564,
    CMP_ULT_D	= 565,
    CMP_ULT_S	= 566,
    CMP_LE_D	= 567,
    CMP_LE_S	= 568,
    CMP_ULE_D	= 569,
    CMP_ULE_S	= 570,
    FSAF_D_FSAF_W_FSEQ_D_FSEQ_W_FSLE_D_FSLE_W_FSLT_D_FSLT_W_FSNE_D_FSNE_W_FSOR_D_FSOR_W	= 571,
    FSUEQ_D_FSUEQ_W	= 572,
    FSULE_D_FSULE_W	= 573,
    FSULT_D_FSULT_W	= 574,
    FSUNE_D_FSUNE_W	= 575,
    FSUN_D_FSUN_W	= 576,
    FCAF_D_FCAF_W	= 577,
    FCEQ_D_FCEQ_W	= 578,
    FCLE_D_FCLE_W	= 579,
    FCLT_D_FCLT_W	= 580,
    FCNE_D_FCNE_W	= 581,
    FCOR_D_FCOR_W	= 582,
    FCUEQ_D_FCUEQ_W	= 583,
    FCULE_D_FCULE_W	= 584,
    FCULT_D_FCULT_W	= 585,
    FCUNE_D_FCUNE_W	= 586,
    FCUN_D_FCUN_W	= 587,
    FABS_D_FABS_W	= 588,
    FFINT_S_D_FFINT_S_W_FFINT_U_D_FFINT_U_W	= 589,
    FFQL_D_FFQL_W	= 590,
    FFQR_D_FFQR_W	= 591,
    FTINT_S_D_FTINT_S_W_FTINT_U_D_FTINT_U_W	= 592,
    FRINT_D_FRINT_W	= 593,
    FTQ_H_FTQ_W	= 594,
    FTRUNC_S_D_FTRUNC_S_W_FTRUNC_U_D_FTRUNC_U_W	= 595,
    FEXDO_H_FEXDO_W	= 596,
    FEXUPL_D_FEXUPL_W	= 597,
    FEXUPR_D_FEXUPR_W	= 598,
    FCLASS_D_FCLASS_W	= 599,
    FMAX_A_D_FMAX_A_W	= 600,
    FMAX_D_FMAX_W	= 601,
    FMIN_A_D_FMIN_A_W	= 602,
    FMIN_D_FMIN_W	= 603,
    FLOG2_D_FLOG2_W	= 604,
    ILVL_B_ILVL_D_ILVL_H_ILVL_W_ILVR_B_ILVR_D_ILVR_H_ILVR_W	= 605,
    ILVEV_B_ILVEV_D_ILVEV_H_ILVEV_W_ILVOD_B_ILVOD_D_ILVOD_H_ILVOD_W	= 606,
    INSVE_B_INSVE_D_INSVE_H_INSVE_W	= 607,
    SUBS_S_B_SUBS_S_D_SUBS_S_H_SUBS_S_W_SUBS_U_B_SUBS_U_D_SUBS_U_H_SUBS_U_W	= 608,
    SUBSUS_U_B_SUBSUS_U_D_SUBSUS_U_H_SUBSUS_U_W	= 609,
    SUBSUU_S_B_SUBSUU_S_D_SUBSUU_S_H_SUBSUU_S_W	= 610,
    SUBVI_B_SUBVI_D_SUBVI_H_SUBVI_W	= 611,
    SUBV_B_SUBV_D_SUBV_H_SUBV_W	= 612,
    MOD_S_B_MOD_S_D_MOD_S_H_MOD_S_W_MOD_U_B_MOD_U_D_MOD_U_H_MOD_U_W	= 613,
    DIV_S_B_DIV_S_D_DIV_S_H_DIV_S_W_DIV_U_B_DIV_U_D_DIV_U_H_DIV_U_W	= 614,
    HADD_S_D_HADD_S_H_HADD_S_W_HADD_U_D_HADD_U_H_HADD_U_W	= 615,
    HSUB_S_D_HSUB_S_H_HSUB_S_W_HSUB_U_D_HSUB_U_H_HSUB_U_W	= 616,
    MAX_S_B_MAX_S_D_MAX_S_H_MAX_S_W_MIN_S_B_MIN_S_D_MIN_S_H_MIN_S_W	= 617,
    MAX_U_B_MAX_U_D_MAX_U_H_MAX_U_W_MIN_U_B_MIN_U_D_MIN_U_H_MIN_U_W	= 618,
    MAX_A_B_MAX_A_D_MAX_A_H_MAX_A_W_MIN_A_B_MIN_A_D_MIN_A_H_MIN_A_W	= 619,
    MAXI_S_B_MAXI_S_D_MAXI_S_H_MAXI_S_W_MAXI_U_B_MAXI_U_D_MAXI_U_H_MAXI_U_W_MINI_S_B_MINI_S_D_MINI_S_H_MINI_S_W_MINI_U_B_MINI_U_D_MINI_U_H_MINI_U_W	= 620,
    SRAI_B_SRAI_D_SRAI_H_SRAI_W_SRA_B_SRA_D_SRA_H_SRA_W	= 621,
    SRLI_B_SRLI_D_SRLI_H_SRLI_W_SRL_B_SRL_D_SRL_H_SRL_W	= 622,
    SRARI_B_SRARI_D_SRARI_H_SRARI_W_SRAR_B_SRAR_D_SRAR_H_SRAR_W	= 623,
    SRLRI_B_SRLRI_D_SRLRI_H_SRLRI_W_SRLR_B_SRLR_D_SRLR_H_SRLR_W	= 624,
    SLLI_B_SLLI_D_SLLI_H_SLLI_W_SLL_B_SLL_D_SLL_H_SLL_W	= 625,
    PCKEV_B_PCKEV_D_PCKEV_H_PCKEV_W_PCKOD_B_PCKOD_D_PCKOD_H_PCKOD_W	= 626,
    NLOC_B_NLOC_D_NLOC_H_NLOC_W_NLZC_B_NLZC_D_NLZC_H_NLZC_W	= 627,
    FADD_D32_FADD_D64	= 628,
    FADD_PS64	= 629,
    FADD_S	= 630,
    FMUL_D32_FMUL_D64	= 631,
    FMUL_PS64	= 632,
    FMUL_S	= 633,
    FSUB_D32_FSUB_D64	= 634,
    FSUB_PS64	= 635,
    FSUB_S	= 636,
    TRUNC_L_D64_TRUNC_L_S_TRUNC_W_D32_TRUNC_W_D64_TRUNC_W_S	= 637,
    CVT_D32_S_CVT_D32_W_CVT_D64_L_CVT_D64_S_CVT_D64_W_CVT_L_D64_CVT_L_S_CVT_S_D32_CVT_S_D64_CVT_S_L_CVT_S_W_CVT_W_D32_CVT_W_D64_CVT_W_S	= 638,
    CVT_PS_S64_CVT_S_PL64_CVT_S_PU64	= 639,
    C_EQ_D32_C_EQ_D64_C_F_D32_C_F_D64_C_LE_D32_C_LE_D64_C_LT_D32_C_LT_D64_C_NGE_D32_C_NGE_D64_C_NGLE_D32_C_NGLE_D64_C_NGL_D32_C_NGL_D64_C_NGT_D32_C_NGT_D64_C_OLE_D32_C_OLE_D64_C_OLT_D32_C_OLT_D64_C_SEQ_D32_C_SEQ_D64_C_SF_D32_C_SF_D64_C_UEQ_D32_C_UEQ_D64_C_ULE_D32_C_ULE_D64_C_ULT_D32_C_ULT_D64_C_UN_D32_C_UN_D64	= 640,
    C_EQ_S_C_F_S_C_LE_S_C_LT_S_C_NGE_S_C_NGLE_S_C_NGL_S_C_NGT_S_C_OLE_S_C_OLT_S_C_SEQ_S_C_SF_S_C_UEQ_S_C_ULE_S_C_ULT_S_C_UN_S	= 641,
    FCMP_D32_FCMP_D64	= 642,
    FCMP_S32	= 643,
    PseudoCVT_D32_W_PseudoCVT_D64_L_PseudoCVT_D64_W_PseudoCVT_S_L_PseudoCVT_S_W	= 644,
    PLL_PS64_PLU_PS64_PUL_PS64_PUU_PS64	= 645,
    FDIV_S	= 646,
    FDIV_D32_FDIV_D64	= 647,
    FSQRT_S	= 648,
    FSQRT_D32_FSQRT_D64	= 649,
    FRCP_D_FRCP_W	= 650,
    FRSQRT_D_FRSQRT_W	= 651,
    RECIP_D32_RECIP_D64	= 652,
    RSQRT_D32_RSQRT_D64	= 653,
    RECIP_S	= 654,
    RSQRT_S	= 655,
    FMADD_D_FMADD_W	= 656,
    FMSUB_D_FMSUB_W	= 657,
    FDIV_W	= 658,
    FDIV_D	= 659,
    FSQRT_W	= 660,
    FSQRT_D	= 661,
    FMUL_D_FMUL_W	= 662,
    FADD_D_FADD_W	= 663,
    FSUB_D_FSUB_W	= 664,
    DPADD_S_D_DPADD_S_H_DPADD_S_W_DPADD_U_D_DPADD_U_H_DPADD_U_W	= 665,
    DPSUB_S_D_DPSUB_S_H_DPSUB_S_W_DPSUB_U_D_DPSUB_U_H_DPSUB_U_W	= 666,
    DOTP_S_D_DOTP_S_H_DOTP_S_W_DOTP_U_D_DOTP_U_H_DOTP_U_W	= 667,
    MSUBV_B_MSUBV_D_MSUBV_H_MSUBV_W	= 668,
    MADDV_B_MADDV_D_MADDV_H_MADDV_W	= 669,
    MULV_B_MULV_D_MULV_H_MULV_W	= 670,
    MADDR_Q_H_MADDR_Q_W	= 671,
    MADD_Q_H_MADD_Q_W	= 672,
    MSUBR_Q_H_MSUBR_Q_W	= 673,
    MSUB_Q_H_MSUB_Q_W	= 674,
    MULR_Q_H_MULR_Q_W	= 675,
    MUL_Q_H_MUL_Q_W	= 676,
    MADD_D32_MADD_D64	= 677,
    MADD_S	= 678,
    MSUB_D32_MSUB_D64	= 679,
    MSUB_S	= 680,
    NMADD_D32_NMADD_D64	= 681,
    NMADD_S	= 682,
    NMSUB_D32_NMSUB_D64	= 683,
    NMSUB_S	= 684,
    CTC1	= 685,
    MTC1_MTC1_D64_BuildPairF64_BuildPairF64_64	= 686,
    MTHC1_D32_MTHC1_D64	= 687,
    COPY_U_B_COPY_U_H_COPY_U_W	= 688,
    COPY_S_B_COPY_S_D_COPY_S_H_COPY_S_W	= 689,
    BC1F	= 690,
    BC1FL	= 691,
    BC1T	= 692,
    BC1TL	= 693,
    CFC1	= 694,
    MFC1_MFC1_D64_ExtractElementF64_ExtractElementF64_64	= 695,
    MFHC1_D32_MFHC1_D64	= 696,
    MOVF_I	= 697,
    MOVT_I	= 698,
    SDC1_SDC164	= 699,
    SDXC1_SDXC164	= 700,
    SWC1	= 701,
    SWXC1	= 702,
    SUXC1_SUXC164	= 703,
    ST_B_ST_D_ST_H_ST_W	= 704,
    ST_F16	= 705,
    MOVN_I_D32_MOVN_I_D64	= 706,
    MOVN_I_S	= 707,
    MOVZ_I_D32_MOVZ_I_D64	= 708,
    MOVZ_I_S	= 709,
    LDC1_LDC164	= 710,
    LDXC1_LDXC164	= 711,
    LWC1	= 712,
    LWXC1	= 713,
    LUXC1_LUXC164	= 714,
    LD_B_LD_D_LD_H_LD_W	= 715,
    LD_F16	= 716,
    CEIL_L_D64_CEIL_L_S_CEIL_W_D32_CEIL_W_D64_CEIL_W_S	= 717,
    FLOOR_L_D64_FLOOR_L_S_FLOOR_W_D32_FLOOR_W_D64_FLOOR_W_S	= 718,
    ROUND_L_D64_ROUND_L_S_ROUND_W_D32_ROUND_W_D64_ROUND_W_S	= 719,
    ROTRV	= 720,
    ATOMIC_SWAP_I16_POSTRA_ATOMIC_SWAP_I32_POSTRA_ATOMIC_SWAP_I64_POSTRA_ATOMIC_SWAP_I8_POSTRA	= 721,
    ATOMIC_CMP_SWAP_I16_POSTRA_ATOMIC_CMP_SWAP_I32_POSTRA_ATOMIC_CMP_SWAP_I64_POSTRA_ATOMIC_CMP_SWAP_I8_POSTRA	= 722,
    ATOMIC_LOAD_ADD_I16_POSTRA_ATOMIC_LOAD_ADD_I32_POSTRA_ATOMIC_LOAD_ADD_I64_POSTRA_ATOMIC_LOAD_ADD_I8_POSTRA_ATOMIC_LOAD_AND_I16_POSTRA_ATOMIC_LOAD_AND_I32_POSTRA_ATOMIC_LOAD_AND_I64_POSTRA_ATOMIC_LOAD_AND_I8_POSTRA_ATOMIC_LOAD_MAX_I16_POSTRA_ATOMIC_LOAD_MAX_I32_POSTRA_ATOMIC_LOAD_MAX_I64_POSTRA_ATOMIC_LOAD_MAX_I8_POSTRA_ATOMIC_LOAD_MIN_I16_POSTRA_ATOMIC_LOAD_MIN_I32_POSTRA_ATOMIC_LOAD_MIN_I64_POSTRA_ATOMIC_LOAD_MIN_I8_POSTRA_ATOMIC_LOAD_NAND_I16_POSTRA_ATOMIC_LOAD_NAND_I32_POSTRA_ATOMIC_LOAD_NAND_I64_POSTRA_ATOMIC_LOAD_NAND_I8_POSTRA_ATOMIC_LOAD_OR_I16_POSTRA_ATOMIC_LOAD_OR_I32_POSTRA_ATOMIC_LOAD_OR_I64_POSTRA_ATOMIC_LOAD_OR_I8_POSTRA_ATOMIC_LOAD_SUB_I16_POSTRA_ATOMIC_LOAD_SUB_I32_POSTRA_ATOMIC_LOAD_SUB_I64_POSTRA_ATOMIC_LOAD_SUB_I8_POSTRA_ATOMIC_LOAD_UMAX_I16_POSTRA_ATOMIC_LOAD_UMAX_I32_POSTRA_ATOMIC_LOAD_UMAX_I64_POSTRA_ATOMIC_LOAD_UMAX_I8_POSTRA_ATOMIC_LOAD_UMIN_I16_POSTRA_ATOMIC_LOAD_UMIN_I32_POSTRA_ATOMIC_LOAD_UMIN_I64_POSTRA_ATOMIC_LOAD_UMIN_I8_POSTRA_ATOMIC_LOAD_XOR_I16_POSTRA_ATOMIC_LOAD_XOR_I32_POSTRA_ATOMIC_LOAD_XOR_I64_POSTRA_ATOMIC_LOAD_XOR_I8_POSTRA	= 723,
    LEA_ADDiu	= 724,
    ADDIUPC	= 725,
    ALIGN	= 726,
    ALUIPC	= 727,
    AUI	= 728,
    AUIPC	= 729,
    BITSWAP	= 730,
    CLO_R6	= 731,
    CLZ_R6	= 732,
    LSA_R6	= 733,
    SELEQZ_SELNEZ	= 734,
    AddiuRxImmX16_AddiuRxRxImm16_AddiuRxRxImmX16_AddiuRxRyOffMemX16_AddiuRxPcImmX16_AddiuSpImm16_AddiuSpImmX16_AdduRxRyRz16_AndRxRxRy16_CmpRxRy16_CmpiRxImm16_CmpiRxImmX16_LiRxImm16_LiRxImmX16_LiRxImmAlignX16_Move32R16_MoveR3216_Mfhi16_Mflo16_NegRxRy16_NotRxRy16_OrRxRxRy16_SebRx16_SehRx16_SllX16_SllvRxRy16_SltiRxImm16_SltiRxImmX16_SltiuRxImm16_SltiuRxImmX16_SltRxRy16_SltuRxRy16_SravRxRy16_SraX16_SrlvRxRy16_SrlX16_SubuRxRyRz16_XorRxRxRy16	= 735,
    SltiCCRxImmX16_SltiuCCRxImmX16_SltCCRxRy16_SltuRxRyRz16_SltuCCRxRy16	= 736,
    Constant32_LwConstant32_GotPrologue16_CONSTPOOL_ENTRY	= 737,
    ADDIUPC_MM_ADDIUR1SP_MM_ADDIUR2_MM_ADDIUS5_MM_ADDIUSP_MM_ADDiu_MM_LEA_ADDiu_MM	= 738,
    ADDU16_MM_ADDu_MM	= 739,
    ADD_MM	= 740,
    ADDi_MM	= 741,
    AND16_MM_ANDI16_MM_AND_MM	= 742,
    ANDi_MM	= 743,
    CLO_MM	= 744,
    CLZ_MM	= 745,
    EXT_MM	= 746,
    INS_MM	= 747,
    LI16_MM	= 748,
    LUi_MM	= 749,
    MOVE16_MM	= 750,
    MOVEP_MM	= 751,
    NOR_MM	= 752,
    NOT16_MM	= 753,
    OR16_MM_OR_MM	= 754,
    ORi_MM	= 755,
    ROTRV_MM	= 756,
    ROTR_MM	= 757,
    SEB_MM	= 758,
    SEH_MM	= 759,
    SLL16_MM_SLL_MM	= 760,
    SLLV_MM	= 761,
    SLT_MM_SLTu_MM	= 762,
    SLTi_MM_SLTiu_MM	= 763,
    SRAV_MM	= 764,
    SRA_MM	= 765,
    SRL16_MM_SRL_MM	= 766,
    SRLV_MM	= 767,
    SSNOP_MM	= 768,
    SUBU16_MM_SUBu_MM	= 769,
    SUB_MM	= 770,
    WSBH_MM	= 771,
    XOR16_MM_XOR_MM	= 772,
    XORi_MM	= 773,
    ADDIUPC_MMR6	= 774,
    ADDIU_MMR6	= 775,
    ADDU16_MMR6_ADDU_MMR6	= 776,
    ADD_MMR6	= 777,
    ALIGN_MMR6	= 778,
    ALUIPC_MMR6	= 779,
    AND16_MMR6_ANDI16_MMR6_AND_MMR6	= 780,
    ANDI_MMR6	= 781,
    AUIPC_MMR6	= 782,
    AUI_MMR6	= 783,
    BITSWAP_MMR6	= 784,
    CLO_MMR6	= 785,
    CLZ_MMR6	= 786,
    EXT_MMR6	= 787,
    INS_MMR6	= 788,
    LI16_MMR6	= 789,
    LSA_MMR6	= 790,
    LUI_MMR6	= 791,
    MOVE16_MMR6	= 792,
    NOR_MMR6	= 793,
    NOT16_MMR6	= 794,
    OR16_MMR6_OR_MMR6	= 795,
    ORI_MMR6	= 796,
    SELEQZ_MMR6_SELNEZ_MMR6	= 797,
    SLL16_MMR6_SLL_MMR6	= 798,
    SRL16_MMR6	= 799,
    SSNOP_MMR6	= 800,
    SUBU16_MMR6_SUBU_MMR6	= 801,
    SUB_MMR6	= 802,
    WSBH_MMR6	= 803,
    XOR16_MMR6_XOR_MMR6	= 804,
    XORI_MMR6	= 805,
    AND64_ANDi64	= 806,
    DEXT64_32	= 807,
    DSLL64_32	= 808,
    ORi64	= 809,
    SEB64	= 810,
    SEH64	= 811,
    SLL64_32_SLL64_64	= 812,
    SLT64_SLTu64	= 813,
    SLTi64_SLTiu64	= 814,
    XOR64_XORi64	= 815,
    DADD	= 816,
    DADDi	= 817,
    DADDiu	= 818,
    DADDu	= 819,
    DCLO	= 820,
    DCLZ	= 821,
    DEXT_DEXTM_DEXTU	= 822,
    DINS_DINSM_DINSU	= 823,
    DROTR	= 824,
    DROTR32	= 825,
    DROTRV	= 826,
    DSBH	= 827,
    DSHD	= 828,
    DSLL	= 829,
    DSLL32	= 830,
    DSLLV	= 831,
    DSRA	= 832,
    DSRA32	= 833,
    DSRAV	= 834,
    DSRL	= 835,
    DSRL32	= 836,
    DSRLV	= 837,
    DSUB	= 838,
    DSUBu	= 839,
    LEA_ADDiu64	= 840,
    LUi64	= 841,
    NOR64	= 842,
    OR64	= 843,
    DALIGN	= 844,
    DAHI	= 845,
    DATI	= 846,
    DAUI	= 847,
    DCLO_R6	= 848,
    DCLZ_R6	= 849,
    DBITSWAP	= 850,
    DLSA_DLSA_R6	= 851,
    SELEQZ64_SELNEZ64	= 852,
    MADD	= 853,
    MADDU	= 854,
    MSUB	= 855,
    MSUBU	= 856,
    PseudoMADD_MM	= 857,
    PseudoMADDU_MM	= 858,
    PseudoMSUB_MM	= 859,
    PseudoMSUBU_MM	= 860,
    PseudoMULT_MM	= 861,
    PseudoMULTu_MM	= 862,
    PseudoMULT	= 863,
    PseudoMULTu	= 864,
    PseudoSDIV_SDIV	= 865,
    PseudoUDIV_UDIV	= 866,
    PseudoMFHI_MM_PseudoMFLO_MM	= 867,
    PseudoMTLOHI_MM	= 868,
    MUH	= 869,
    MUHU	= 870,
    MULU	= 871,
    MUL_R6	= 872,
    MOD	= 873,
    MODU	= 874,
    MultRxRy16_MultuRxRy16_MultRxRyRz16_MultuRxRyRz16	= 875,
    DivRxRy16	= 876,
    DivuRxRy16	= 877,
    MULT_MM	= 878,
    MULTu_MM	= 879,
    MADD_MM	= 880,
    MADDU_MM	= 881,
    MSUB_MM	= 882,
    MSUBU_MM	= 883,
    MUL_MM	= 884,
    SDIV_MM_SDIV_MM_Pseudo	= 885,
    UDIV_MM_UDIV_MM_Pseudo	= 886,
    MFHI16_MM_MFLO16_MM_MFHI_MM_MFLO_MM	= 887,
    MOVF_I_MM	= 888,
    MOVT_I_MM	= 889,
    MTHI_MM_MTLO_MM	= 890,
    RDHWR_MM	= 891,
    MUHU_MMR6	= 892,
    MUH_MMR6	= 893,
    MULU_MMR6	= 894,
    MUL_MMR6	= 895,
    MODU_MMR6	= 896,
    MOD_MMR6	= 897,
    DIVU_MMR6	= 898,
    DIV_MMR6	= 899,
    RDHWR_MMR6	= 900,
    DMULU	= 901,
    DMULT_PseudoDMULT	= 902,
    DMULTu_PseudoDMULTu	= 903,
    DSDIV_PseudoDSDIV	= 904,
    DUDIV_PseudoDUDIV	= 905,
    MFHI64_MFLO64_PseudoMFHI64_PseudoMFLO64	= 906,
    PseudoMTLOHI64	= 907,
    MTHI64_MTLO64	= 908,
    RDHWR64	= 909,
    MOVN_I_I64_MOVN_I64_I_MOVN_I64_I64	= 910,
    MOVZ_I_I64_MOVZ_I64_I_MOVZ_I64_I64	= 911,
    DMUH	= 912,
    DMUHU	= 913,
    DMUL_R6	= 914,
    DDIV	= 915,
    DMOD	= 916,
    DDIVU	= 917,
    DMODU	= 918,
    BAL_BR_BLTZAL	= 919,
    BEQ_BNE	= 920,
    BGTZ_BGEZ_BLEZ_BLTZ	= 921,
    J	= 922,
    JR	= 923,
    ERet	= 924,
    BGEZAL	= 925,
    BALC	= 926,
    BEQZALC_BGEZALC_BGTZALC_BLEZALC_BLTZALC_BNEZALC	= 927,
    JIALC	= 928,
    BC	= 929,
    BC2EQZ_BC2NEZ	= 930,
    BEQC_BGEC_BGEUC_BLTC_BLTUC_BNEC_BNVC_BOVC	= 931,
    BEQZC_BGEZC_BGTZC_BLEZC_BLTZC_BNEZC	= 932,
    JIC	= 933,
    JR_HB_R6	= 934,
    SIGRIE	= 935,
    PseudoIndirectBranchR6_PseudoIndrectHazardBranchR6	= 936,
    TAILCALLR6REG_TAILCALLHBR6REG	= 937,
    SDBBP_R6	= 938,
    Bimm16_BimmX16_BeqzRxImm16_BeqzRxImmX16_BnezRxImm16_BnezRxImmX16_Bteqz16_BteqzX16_Btnez16_BtnezX16_JrRa16_JrcRa16_JrcRx16	= 939,
    BteqzT8CmpX16_BteqzT8CmpiX16_BteqzT8SltX16_BteqzT8SltuX16_BteqzT8SltiX16_BteqzT8SltiuX16_BtnezT8CmpX16_BtnezT8CmpiX16_BtnezT8SltX16_BtnezT8SltuX16_BtnezT8SltiX16_BtnezT8SltiuX16_RetRA16	= 940,
    Jal16_JalB16	= 941,
    JumpLinkReg16	= 942,
    Break16	= 943,
    SelBeqZ_SelTBteqZCmp_SelTBteqZCmpi_SelTBteqZSlt_SelTBteqZSlti_SelTBteqZSltu_SelTBteqZSltiu_SelBneZ_SelTBtneZCmp_SelTBtneZCmpi_SelTBtneZSlt_SelTBtneZSlti_SelTBtneZSltu_SelTBtneZSltiu	= 944,
    B16_MM_B_MM	= 945,
    BAL_BR_MM	= 946,
    BC1F_MM	= 947,
    BC1T_MM	= 948,
    BEQZ16_MM_BGEZ_MM_BGTZ_MM_BLEZ_MM_BLTZ_MM_BNEZ16_MM	= 949,
    BEQZC_MM_BNEZC_MM	= 950,
    BEQ_MM_BNE_MM	= 951,
    DERET_MM	= 952,
    ERET_MM	= 953,
    JR16_MM_JR_MM	= 954,
    J_MM	= 955,
    B_MM_Pseudo	= 956,
    BGEZALS_MM_BLTZALS_MM	= 957,
    BGEZAL_MM_BLTZAL_MM	= 958,
    JALR16_MM_JALR_MM	= 959,
    JALRS16_MM_JALRS_MM	= 960,
    JALS_MM	= 961,
    JALX_MM_JAL_MM	= 962,
    TAILCALLREG_MM	= 963,
    TAILCALL_MM	= 964,
    PseudoIndirectBranch_MM	= 965,
    BREAK16_MM_BREAK_MM	= 966,
    SDBBP16_MM_SDBBP_MM	= 967,
    SYSCALL_MM	= 968,
    TEQI_MM	= 969,
    TEQ_MM	= 970,
    TGEIU_MM	= 971,
    TGEI_MM	= 972,
    TGEU_MM	= 973,
    TGE_MM	= 974,
    TLTIU_MM	= 975,
    TLTI_MM	= 976,
    TLTU_MM	= 977,
    TLT_MM	= 978,
    TNEI_MM	= 979,
    TNE_MM	= 980,
    TRAP_MM	= 981,
    BC16_MMR6_BC_MMR6	= 982,
    BC1EQZC_MMR6_BC1NEZC_MMR6	= 983,
    BC2EQZC_MMR6_BC2NEZC_MMR6	= 984,
    BEQC_MMR6_BGEC_MMR6_BGEUC_MMR6_BLTC_MMR6_BLTUC_MMR6_BNEC_MMR6_BNVC_MMR6_BOVC_MMR6	= 985,
    BEQZC16_MMR6_BNEZC16_MMR6	= 986,
    BEQZC_MMR6_BGEZC_MMR6_BGTZC_MMR6_BLEZC_MMR6_BLTZC_MMR6_BNEZC_MMR6	= 987,
    DERET_MMR6	= 988,
    ERETNC_MMR6	= 989,
    JAL_MMR6	= 990,
    ERET_MMR6	= 991,
    JIC_MMR6	= 992,
    JRADDIUSP_JRCADDIUSP_MMR6	= 993,
    JRC16_MM	= 994,
    JRC16_MMR6	= 995,
    SIGRIE_MMR6	= 996,
    B_MMR6_Pseudo	= 997,
    PseudoIndirectBranch_MMR6	= 998,
    BALC_MMR6	= 999,
    BEQZALC_MMR6_BGEZALC_MMR6_BGTZALC_MMR6_BLEZALC_MMR6_BLTZALC_MMR6_BNEZALC_MMR6	= 1000,
    JALRC16_MMR6	= 1001,
    JALRC_HB_MMR6	= 1002,
    JALRC_MMR6	= 1003,
    JIALC_MMR6	= 1004,
    TAILCALLREG_MMR6	= 1005,
    TAILCALL_MMR6	= 1006,
    BREAK16_MMR6_BREAK_MMR6	= 1007,
    SDBBP_MMR6_SDBBP16_MMR6	= 1008,
    BEQ64_BNE64	= 1009,
    BGEZ64_BGTZ64_BLEZ64_BLTZ64	= 1010,
    JR64	= 1011,
    JALR64_JALR64Pseudo_JALRHB64Pseudo	= 1012,
    JALR_HB64	= 1013,
    JR_HB64	= 1014,
    TAILCALLREG64_TAILCALLREGHB64	= 1015,
    PseudoReturn64	= 1016,
    BEQC64_BGEC64_BGEUC64_BLTC64_BLTUC64_BNEC64	= 1017,
    BEQZC64_BGEZC64_BGTZC64_BLEZC64_BLTZC64_BNEZC64	= 1018,
    JIC64	= 1019,
    PseudoIndirectBranch64_PseudoIndirectHazardBranch64	= 1020,
    JIALC64	= 1021,
    JR_HB64_R6	= 1022,
    TAILCALL64R6REG_TAILCALLHB64R6REG	= 1023,
    PseudoIndirectBranch64R6_PseudoIndrectHazardBranch64R6	= 1024,
    EVP	= 1025,
    DVP	= 1026,
    TLBP_MM	= 1027,
    TLBR_MM	= 1028,
    TLBWI_MM	= 1029,
    TLBWR_MM	= 1030,
    DI_MM	= 1031,
    EI_MM	= 1032,
    EHB_MM	= 1033,
    PAUSE_MM	= 1034,
    WAIT_MM	= 1035,
    RDPGPR_MMR6	= 1036,
    WRPGPR_MMR6	= 1037,
    TLBINV_MMR6	= 1038,
    TLBINVF_MMR6	= 1039,
    MFHC0_MMR6	= 1040,
    MFC0_MMR6	= 1041,
    MFHC2_MMR6_MFC2_MMR6	= 1042,
    MTHC0_MMR6	= 1043,
    MTC0_MMR6	= 1044,
    MTHC2_MMR6_MTC2_MMR6	= 1045,
    EVP_MMR6	= 1046,
    DVP_MMR6	= 1047,
    DI_MMR6	= 1048,
    EI_MMR6	= 1049,
    EHB_MMR6	= 1050,
    PAUSE_MMR6	= 1051,
    WAIT_MMR6	= 1052,
    DMFC0	= 1053,
    DMTC0	= 1054,
    DMFC2	= 1055,
    DMTC2	= 1056,
    CFC2_MM	= 1057,
    CTC2_MM	= 1058,
    DMT	= 1059,
    DVPE	= 1060,
    EMT	= 1061,
    EVPE	= 1062,
    MFTR	= 1063,
    MTTR	= 1064,
    YIELD	= 1065,
    FORK	= 1066,
    DMFGC0	= 1067,
    DMTGC0	= 1068,
    HYPCALL_MM	= 1069,
    TLBGINVF_MM	= 1070,
    TLBGINV_MM	= 1071,
    TLBGP_MM	= 1072,
    TLBGR_MM	= 1073,
    TLBGWI_MM	= 1074,
    TLBGWR_MM	= 1075,
    MFGC0_MM	= 1076,
    MFHGC0_MM	= 1077,
    MTGC0_MM	= 1078,
    MTHGC0_MM	= 1079,
    SC_MMR6	= 1080,
    LDC2_R6	= 1081,
    LL_R6	= 1082,
    LWC2_R6	= 1083,
    SWC2_R6	= 1084,
    SDC2_R6	= 1085,
    SC_R6	= 1086,
    PREF_R6	= 1087,
    CACHE_R6	= 1088,
    GINVI	= 1089,
    GINVT	= 1090,
    LBE_MM	= 1091,
    LBuE_MM	= 1092,
    LHE_MM	= 1093,
    LHuE_MM	= 1094,
    LWE_MM	= 1095,
    LWLE_MM	= 1096,
    LWRE_MM	= 1097,
    LLE_MM	= 1098,
    SBE_MM	= 1099,
    SB_MM	= 1100,
    SHE_MM	= 1101,
    SWE_MM	= 1102,
    SWLE_MM	= 1103,
    SWRE_MM	= 1104,
    SCE_MM	= 1105,
    PREFE_MM	= 1106,
    CACHEE_MM	= 1107,
    Restore16_RestoreX16	= 1108,
    LbRxRyOffMemX16	= 1109,
    LbuRxRyOffMemX16	= 1110,
    LhRxRyOffMemX16	= 1111,
    LhuRxRyOffMemX16	= 1112,
    LwRxRyOffMemX16_LwRxSpImmX16_LwRxPcTcp16_LwRxPcTcpX16	= 1113,
    Save16_SaveX16	= 1114,
    SbRxRyOffMemX16	= 1115,
    ShRxRyOffMemX16	= 1116,
    SwRxRyOffMemX16_SwRxSpImmX16	= 1117,
    LBU16_MM_LBu_MM	= 1118,
    LB_MM	= 1119,
    LHU16_MM_LHu_MM	= 1120,
    LH_MM	= 1121,
    LL_MM	= 1122,
    LW16_MM_LWGP_MM_LWSP_MM_LW_MM	= 1123,
    LWL_MM	= 1124,
    LWM16_MM_LWM32_MM	= 1125,
    LWP_MM	= 1126,
    LWR_MM	= 1127,
    LWU_MM	= 1128,
    LWXS_MM	= 1129,
    SB16_MM	= 1130,
    SC_MM	= 1131,
    SH16_MM_SH_MM	= 1132,
    SW16_MM_SWSP_MM_SW_MM	= 1133,
    SWL_MM	= 1134,
    SWM16_MM_SWM32_MM	= 1135,
    SWM_MM	= 1136,
    SWP_MM	= 1137,
    SWR_MM	= 1138,
    PREF_MM_PREFX_MM	= 1139,
    CACHE_MM	= 1140,
    SYNC_MM	= 1141,
    SYNCI_MM	= 1142,
    GINVI_MMR6	= 1143,
    GINVT_MMR6	= 1144,
    LBU_MMR6	= 1145,
    LB_MMR6	= 1146,
    LDC2_MMR6	= 1147,
    LL_MMR6	= 1148,
    LWM16_MMR6	= 1149,
    LWC2_MMR6	= 1150,
    LWPC_MMR6	= 1151,
    LW_MMR6	= 1152,
    SB16_MMR6_SB_MMR6	= 1153,
    SDC2_MMR6	= 1154,
    SH16_MMR6_SH_MMR6	= 1155,
    SW16_MMR6_SWSP_MMR6_SW_MMR6	= 1156,
    SWC2_MMR6	= 1157,
    SWM16_MMR6	= 1158,
    SYNC_MMR6	= 1159,
    SYNCI_MMR6	= 1160,
    PREF_MMR6	= 1161,
    CACHE_MMR6	= 1162,
    LD	= 1163,
    LL64_LLD	= 1164,
    LWu	= 1165,
    LB64	= 1166,
    LBu64	= 1167,
    LH64	= 1168,
    LHu64	= 1169,
    LW64	= 1170,
    LWL64	= 1171,
    LWR64	= 1172,
    LDL	= 1173,
    LDR	= 1174,
    SD	= 1175,
    SC64_SCD	= 1176,
    SB64	= 1177,
    SH64	= 1178,
    SW64	= 1179,
    SWL64	= 1180,
    SWR64	= 1181,
    SDL	= 1182,
    SDR	= 1183,
    LWUPC	= 1184,
    LDPC	= 1185,
    LLD_R6	= 1186,
    LL64_R6	= 1187,
    SC64_R6	= 1188,
    SCD_R6	= 1189,
    CRC32B	= 1190,
    CRC32H	= 1191,
    CRC32W	= 1192,
    CRC32CB	= 1193,
    CRC32CH	= 1194,
    CRC32CW	= 1195,
    CRC32D	= 1196,
    CRC32CD	= 1197,
    BADDu	= 1198,
    BBIT0_BBIT032_BBIT1_BBIT132	= 1199,
    CINS_CINS32_CINS64_32_CINS_i32	= 1200,
    DMFC2_OCTEON	= 1201,
    DMTC2_OCTEON	= 1202,
    DPOP_POP	= 1203,
    EXTS_EXTS32	= 1204,
    MTM0_MTM1_MTM2_MTP0_MTP1_MTP2	= 1205,
    SEQ_SNE	= 1206,
    SEQi_SNEi	= 1207,
    V3MULU_VMM0_VMULU	= 1208,
    DMUL	= 1209,
    SAA_SAAD	= 1210,
    ADDR_PS64	= 1211,
    CVT_PS_PW64_CVT_PW_PS64	= 1212,
    MULR_PS64	= 1213,
    PseudoTRUNC_W_D_PseudoTRUNC_W_D32_PseudoTRUNC_W_S	= 1214,
    MOVT_I64	= 1215,
    MOVF_I64	= 1216,
    MOVZ_I64_S	= 1217,
    MOVN_I64_D64	= 1218,
    MOVN_I64_S	= 1219,
    MOVZ_I64_D64	= 1220,
    SELEQZ_S_SELNEZ_S	= 1221,
    SELEQZ_D_SELNEZ_D	= 1222,
    MAX_S_MAXA_S	= 1223,
    MAX_D_MAXA_D	= 1224,
    MIN_S_MINA_D	= 1225,
    MIN_D_MINA_S	= 1226,
    CLASS_S	= 1227,
    CLASS_D	= 1228,
    RINT_S	= 1229,
    RINT_D	= 1230,
    BC1EQZ_BC1NEZ	= 1231,
    SEL_D	= 1232,
    SEL_S	= 1233,
    MADDF_S	= 1234,
    MSUBF_S	= 1235,
    MADDF_D	= 1236,
    MSUBF_D	= 1237,
    MOVF_D32_MM	= 1238,
    MOVF_S_MM	= 1239,
    MOVN_I_D32_MM	= 1240,
    MOVN_I_S_MM	= 1241,
    MOVT_D32_MM	= 1242,
    MOVT_S_MM	= 1243,
    MOVZ_I_D32_MM	= 1244,
    MOVZ_I_S_MM	= 1245,
    CVT_D32_S_MM_CVT_D32_W_MM_CVT_D64_S_MM_CVT_D64_W_MM_CVT_L_D64_MM_CVT_L_S_MM_CVT_S_D32_MM_CVT_S_D64_MM_CVT_S_W_MM_CVT_W_D32_MM_CVT_W_D64_MM_CVT_W_S_MM	= 1246,
    CEIL_W_MM_CEIL_W_S_MM	= 1247,
    FLOOR_W_MM_FLOOR_W_S_MM	= 1248,
    NMADD_S_MM	= 1249,
    NMADD_D32_MM	= 1250,
    NMSUB_S_MM	= 1251,
    NMSUB_D32_MM	= 1252,
    MADD_S_MM	= 1253,
    MADD_D32_MM	= 1254,
    ROUND_W_MM_ROUND_W_S_MM	= 1255,
    TRUNC_W_MM_TRUNC_W_S_MM	= 1256,
    C_F_D32_MM_C_F_D64_MM	= 1257,
    C_F_S_MM	= 1258,
    C_EQ_D32_MM_C_EQ_D64_MM_C_LE_D32_MM_C_LE_D64_MM_C_LT_D32_MM_C_LT_D64_MM_C_SF_D32_MM_C_SF_D64_MM_C_UN_D32_MM_C_UN_D64_MM	= 1259,
    C_EQ_S_MM_C_LE_S_MM_C_LT_S_MM_C_SF_S_MM_C_UN_S_MM	= 1260,
    C_NGE_D32_MM_C_NGE_D64_MM_C_NGL_D32_MM_C_NGL_D64_MM_C_NGT_D32_MM_C_NGT_D64_MM_C_OLE_D32_MM_C_OLE_D64_MM_C_OLT_D32_MM_C_OLT_D64_MM_C_SEQ_D32_MM_C_SEQ_D64_MM_C_UEQ_D32_MM_C_UEQ_D64_MM_C_ULE_D32_MM_C_ULE_D64_MM_C_ULT_D32_MM_C_ULT_D64_MM	= 1261,
    C_NGE_S_MM_C_NGL_S_MM_C_NGT_S_MM_C_OLE_S_MM_C_OLT_S_MM_C_SEQ_S_MM_C_UEQ_S_MM_C_ULE_S_MM_C_ULT_S_MM	= 1262,
    C_NGLE_D32_MM_C_NGLE_D64_MM	= 1263,
    C_NGLE_S_MM	= 1264,
    FCMP_S32_MM	= 1265,
    FCMP_D32_MM	= 1266,
    MFC1_MM	= 1267,
    MFHC1_D32_MM_MFHC1_D64_MM	= 1268,
    MTC1_MM_MTC1_D64_MM	= 1269,
    MTHC1_D32_MM_MTHC1_D64_MM	= 1270,
    FABS_D32_MM_FABS_D64_MM	= 1271,
    FABS_S_MM	= 1272,
    FNEG_D32_MM_FNEG_D64_MM_FNEG_S_MM	= 1273,
    FADD_D32_MM_FADD_D64_MM	= 1274,
    FADD_S_MM	= 1275,
    FMOV_D32_MM_FMOV_D64_MM	= 1276,
    FMOV_S_MM	= 1277,
    FMUL_D32_MM_FMUL_D64_MM	= 1278,
    FMUL_S_MM	= 1279,
    FSUB_D32_MM_FSUB_D64_MM	= 1280,
    FSUB_S_MM	= 1281,
    MSUB_S_MM	= 1282,
    MSUB_D32_MM	= 1283,
    FDIV_S_MM	= 1284,
    FDIV_D32_MM_FDIV_D64_MM	= 1285,
    FSQRT_S_MM	= 1286,
    FSQRT_D32_MM_FSQRT_D64_MM	= 1287,
    RECIP_S_MM_RSQRT_S_MM	= 1288,
    RECIP_D32_MM_RECIP_D64_MM_RSQRT_D32_MM_RSQRT_D64_MM	= 1289,
    SDC1_MM	= 1290,
    SWC1_MM	= 1291,
    SUXC1_MM	= 1292,
    SWXC1_MM	= 1293,
    CFC1_MM	= 1294,
    CTC1_MM	= 1295,
    LDC1_MM	= 1296,
    LUXC1_MM	= 1297,
    LWC1_MM	= 1298,
    LWXC1_MM	= 1299,
    FNEG_S_MMR6	= 1300,
    CMP_AF_D_MMR6_CMP_EQ_D_MMR6_CMP_LE_D_MMR6_CMP_LT_D_MMR6_CMP_UN_D_MMR6	= 1301,
    CMP_AF_S_MMR6_CMP_EQ_S_MMR6_CMP_LE_S_MMR6_CMP_LT_S_MMR6_CMP_UN_S_MMR6	= 1302,
    CMP_SAF_D_MMR6_CMP_SEQ_D_MMR6_CMP_SLE_D_MMR6_CMP_SLT_D_MMR6_CMP_SUN_D_MMR6_CMP_UEQ_D_MMR6_CMP_ULE_D_MMR6_CMP_ULT_D_MMR6	= 1303,
    CMP_SAF_S_MMR6_CMP_SEQ_S_MMR6_CMP_SLE_S_MMR6_CMP_SLT_S_MMR6_CMP_SUN_S_MMR6_CMP_UEQ_S_MMR6_CMP_ULE_S_MMR6_CMP_ULT_S_MMR6	= 1304,
    CMP_SUEQ_D_MMR6_CMP_SULE_D_MMR6_CMP_SULT_D_MMR6	= 1305,
    CMP_SUEQ_S_MMR6_CMP_SULE_S_MMR6_CMP_SULT_S_MMR6	= 1306,
    CVT_D_L_MMR6_CVT_L_D_MMR6_CVT_L_S_MMR6_CVT_S_L_MMR6_CVT_S_W_MMR6_CVT_W_S_MMR6	= 1307,
    TRUNC_L_D_MMR6_TRUNC_L_S_MMR6_TRUNC_W_D_MMR6_TRUNC_W_S_MMR6	= 1308,
    ROUND_L_D_MMR6_ROUND_L_S_MMR6_ROUND_W_D_MMR6_ROUND_W_S_MMR6	= 1309,
    FLOOR_L_D_MMR6_FLOOR_L_S_MMR6_FLOOR_W_D_MMR6_FLOOR_W_S_MMR6	= 1310,
    CEIL_L_D_MMR6_CEIL_L_S_MMR6_CEIL_W_D_MMR6_CEIL_W_S_MMR6	= 1311,
    MFC1_MMR6	= 1312,
    MTC1_MMR6	= 1313,
    CLASS_S_MMR6_CLASS_D_MMR6	= 1314,
    FADD_S_MMR6	= 1315,
    MAX_D_MMR6	= 1316,
    MAX_S_MMR6	= 1317,
    MIN_D_MMR6	= 1318,
    MIN_S_MMR6	= 1319,
    MAXA_D_MMR6	= 1320,
    MAXA_S_MMR6	= 1321,
    MINA_D_MMR6	= 1322,
    MINA_S_MMR6	= 1323,
    SELEQZ_D_MMR6_SELNEZ_D_MMR6	= 1324,
    SELEQZ_S_MMR6_SELNEZ_S_MMR6	= 1325,
    SEL_D_MMR6	= 1326,
    SEL_S_MMR6	= 1327,
    RINT_S_MMR6_RINT_D_MMR6	= 1328,
    MADDF_D_MMR6	= 1329,
    MADDF_S_MMR6	= 1330,
    MSUBF_D_MMR6	= 1331,
    MSUBF_S_MMR6	= 1332,
    FMOV_S_MMR6	= 1333,
    FMUL_S_MMR6	= 1334,
    FSUB_S_MMR6	= 1335,
    FMOV_D_MMR6	= 1336,
    FDIV_S_MMR6	= 1337,
    SDC1_D64_MMR6	= 1338,
    LDC1_D64_MMR6	= 1339,
    DMFC1	= 1340,
    DMTC1	= 1341,
    SWDSP	= 1342,
    LWDSP	= 1343,
    PseudoMTLOHI_DSP	= 1344,
    EXTRV_RS_W	= 1345,
    EXTRV_R_W	= 1346,
    EXTRV_S_H	= 1347,
    EXTRV_W	= 1348,
    EXTR_RS_W	= 1349,
    EXTR_R_W	= 1350,
    EXTR_S_H	= 1351,
    EXTR_W	= 1352,
    INSV	= 1353,
    MTHLIP	= 1354,
    MTHI_DSP	= 1355,
    MTLO_DSP	= 1356,
    ABSQ_S_PH	= 1357,
    ABSQ_S_W	= 1358,
    ADDQ_PH	= 1359,
    ADDQ_S_PH	= 1360,
    ADDQ_S_W	= 1361,
    ADDSC	= 1362,
    ADDU_QB	= 1363,
    ADDU_S_QB	= 1364,
    ADDWC	= 1365,
    BITREV	= 1366,
    BPOSGE32	= 1367,
    CMPGU_EQ_QB	= 1368,
    CMPGU_LE_QB	= 1369,
    CMPGU_LT_QB	= 1370,
    CMPU_EQ_QB	= 1371,
    CMPU_LE_QB	= 1372,
    CMPU_LT_QB	= 1373,
    CMP_EQ_PH	= 1374,
    CMP_LE_PH	= 1375,
    CMP_LT_PH	= 1376,
    DPAQ_SA_L_W	= 1377,
    DPAQ_S_W_PH	= 1378,
    DPAU_H_QBL	= 1379,
    DPAU_H_QBR	= 1380,
    DPSQ_SA_L_W	= 1381,
    DPSQ_S_W_PH	= 1382,
    DPSU_H_QBL	= 1383,
    DPSU_H_QBR	= 1384,
    EXTPDPV	= 1385,
    EXTPDP	= 1386,
    EXTPV	= 1387,
    EXTP	= 1388,
    LBUX	= 1389,
    LHX	= 1390,
    LWX	= 1391,
    MADDU_DSP	= 1392,
    MADD_DSP	= 1393,
    MAQ_SA_W_PHL	= 1394,
    MAQ_SA_W_PHR	= 1395,
    MAQ_S_W_PHL	= 1396,
    MAQ_S_W_PHR	= 1397,
    MFHI_DSP	= 1398,
    MFLO_DSP	= 1399,
    MODSUB	= 1400,
    MSUBU_DSP	= 1401,
    MSUB_DSP	= 1402,
    MULEQ_S_W_PHL	= 1403,
    MULEQ_S_W_PHR	= 1404,
    MULEU_S_PH_QBL	= 1405,
    MULEU_S_PH_QBR	= 1406,
    MULQ_RS_PH	= 1407,
    MULSAQ_S_W_PH	= 1408,
    MULTU_DSP	= 1409,
    MULT_DSP	= 1410,
    PACKRL_PH	= 1411,
    PICK_PH	= 1412,
    PICK_QB	= 1413,
    PRECEQU_PH_QBLA	= 1414,
    PRECEQU_PH_QBL	= 1415,
    PRECEQU_PH_QBRA	= 1416,
    PRECEQU_PH_QBR	= 1417,
    PRECEQ_W_PHL	= 1418,
    PRECEQ_W_PHR	= 1419,
    PRECEU_PH_QBLA	= 1420,
    PRECEU_PH_QBL	= 1421,
    PRECEU_PH_QBRA	= 1422,
    PRECEU_PH_QBR	= 1423,
    PRECRQU_S_QB_PH	= 1424,
    PRECRQ_PH_W	= 1425,
    PRECRQ_QB_PH	= 1426,
    PRECRQ_RS_PH_W	= 1427,
    RADDU_W_QB	= 1428,
    RDDSP	= 1429,
    REPLV_PH	= 1430,
    REPLV_QB	= 1431,
    REPL_PH	= 1432,
    REPL_QB	= 1433,
    SHILOV	= 1434,
    SHILO	= 1435,
    SHLLV_PH	= 1436,
    SHLLV_QB	= 1437,
    SHLLV_S_PH	= 1438,
    SHLLV_S_W	= 1439,
    SHLL_PH	= 1440,
    SHLL_QB	= 1441,
    SHLL_S_PH	= 1442,
    SHLL_S_W	= 1443,
    SHRAV_PH	= 1444,
    SHRAV_R_PH	= 1445,
    SHRAV_R_W	= 1446,
    SHRA_PH	= 1447,
    SHRA_R_PH	= 1448,
    SHRA_R_W	= 1449,
    SHRLV_QB	= 1450,
    SHRL_QB	= 1451,
    SUBQ_PH	= 1452,
    SUBQ_S_PH	= 1453,
    SUBQ_S_W	= 1454,
    SUBU_QB	= 1455,
    SUBU_S_QB	= 1456,
    WRDSP	= 1457,
    PseudoCMPU_EQ_QB_PseudoCMPU_LE_QB_PseudoCMPU_LT_QB_PseudoCMP_EQ_PH_PseudoCMP_LE_PH_PseudoCMP_LT_PH	= 1458,
    PseudoPICK_PH_PseudoPICK_QB	= 1459,
    ABSQ_S_QB	= 1460,
    ADDQH_PH	= 1461,
    ADDQH_R_PH	= 1462,
    ADDQH_R_W	= 1463,
    ADDQH_W	= 1464,
    ADDUH_QB	= 1465,
    ADDUH_R_QB	= 1466,
    ADDU_PH	= 1467,
    ADDU_S_PH	= 1468,
    APPEND	= 1469,
    BALIGN	= 1470,
    CMPGDU_EQ_QB	= 1471,
    CMPGDU_LE_QB	= 1472,
    CMPGDU_LT_QB	= 1473,
    DPA_W_PH	= 1474,
    DPAQX_SA_W_PH	= 1475,
    DPAQX_S_W_PH	= 1476,
    DPAX_W_PH	= 1477,
    DPS_W_PH	= 1478,
    DPSQX_S_W_PH	= 1479,
    DPSQX_SA_W_PH	= 1480,
    DPSX_W_PH	= 1481,
    MUL_PH	= 1482,
    MUL_S_PH	= 1483,
    MULQ_RS_W	= 1484,
    MULQ_S_PH	= 1485,
    MULQ_S_W	= 1486,
    MULSA_W_PH	= 1487,
    PRECR_QB_PH	= 1488,
    PRECR_SRA_PH_W	= 1489,
    PRECR_SRA_R_PH_W	= 1490,
    PREPEND	= 1491,
    SHRA_QB	= 1492,
    SHRA_R_QB	= 1493,
    SHRAV_QB	= 1494,
    SHRAV_R_QB	= 1495,
    SHRL_PH	= 1496,
    SHRLV_PH	= 1497,
    SUBQH_PH	= 1498,
    SUBQH_R_PH	= 1499,
    SUBQH_W	= 1500,
    SUBQH_R_W	= 1501,
    SUBU_PH	= 1502,
    SUBU_S_PH	= 1503,
    SUBUH_QB	= 1504,
    SUBUH_R_QB	= 1505,
    LWDSP_MM	= 1506,
    SWDSP_MM	= 1507,
    ABSQ_S_PH_MM	= 1508,
    ABSQ_S_W_MM	= 1509,
    ADDQ_PH_MM	= 1510,
    ADDQ_S_PH_MM	= 1511,
    ADDQ_S_W_MM	= 1512,
    ADDSC_MM	= 1513,
    ADDU_QB_MM	= 1514,
    ADDU_S_QB_MM	= 1515,
    ADDWC_MM	= 1516,
    BITREV_MM	= 1517,
    BPOSGE32_MM	= 1518,
    CMPGU_EQ_QB_MM	= 1519,
    CMPGU_LE_QB_MM	= 1520,
    CMPGU_LT_QB_MM	= 1521,
    CMPU_EQ_QB_MM	= 1522,
    CMPU_LE_QB_MM	= 1523,
    CMPU_LT_QB_MM	= 1524,
    CMP_EQ_PH_MM	= 1525,
    CMP_LE_PH_MM	= 1526,
    CMP_LT_PH_MM	= 1527,
    DPAQ_SA_L_W_MM	= 1528,
    DPAQ_S_W_PH_MM	= 1529,
    DPAU_H_QBL_MM	= 1530,
    DPAU_H_QBR_MM	= 1531,
    DPSQ_SA_L_W_MM	= 1532,
    DPSQ_S_W_PH_MM	= 1533,
    DPSU_H_QBL_MM	= 1534,
    DPSU_H_QBR_MM	= 1535,
    EXTPDPV_MM	= 1536,
    EXTPDP_MM	= 1537,
    EXTPV_MM	= 1538,
    EXTP_MM	= 1539,
    EXTRV_RS_W_MM	= 1540,
    EXTRV_R_W_MM	= 1541,
    EXTRV_S_H_MM	= 1542,
    EXTRV_W_MM	= 1543,
    EXTR_RS_W_MM	= 1544,
    EXTR_R_W_MM	= 1545,
    EXTR_S_H_MM	= 1546,
    EXTR_W_MM	= 1547,
    INSV_MM	= 1548,
    LBUX_MM	= 1549,
    LHX_MM	= 1550,
    LWX_MM	= 1551,
    MADDU_DSP_MM	= 1552,
    MADD_DSP_MM	= 1553,
    MAQ_SA_W_PHL_MM	= 1554,
    MAQ_SA_W_PHR_MM	= 1555,
    MAQ_S_W_PHL_MM	= 1556,
    MAQ_S_W_PHR_MM	= 1557,
    MFHI_DSP_MM	= 1558,
    MFLO_DSP_MM	= 1559,
    MODSUB_MM	= 1560,
    MOVEP_MMR6	= 1561,
    MOVN_I_MM	= 1562,
    MOVZ_I_MM	= 1563,
    MSUBU_DSP_MM	= 1564,
    MSUB_DSP_MM	= 1565,
    MTHI_DSP_MM	= 1566,
    MTHLIP_MM	= 1567,
    MTLO_DSP_MM	= 1568,
    MULEQ_S_W_PHL_MM	= 1569,
    MULEQ_S_W_PHR_MM	= 1570,
    MULEU_S_PH_QBL_MM	= 1571,
    MULEU_S_PH_QBR_MM	= 1572,
    MULQ_RS_PH_MM	= 1573,
    MULSAQ_S_W_PH_MM	= 1574,
    MULTU_DSP_MM	= 1575,
    MULT_DSP_MM	= 1576,
    PACKRL_PH_MM	= 1577,
    PICK_PH_MM	= 1578,
    PICK_QB_MM	= 1579,
    PRECEQU_PH_QBLA_MM	= 1580,
    PRECEQU_PH_QBL_MM	= 1581,
    PRECEQU_PH_QBRA_MM	= 1582,
    PRECEQU_PH_QBR_MM	= 1583,
    PRECEQ_W_PHL_MM	= 1584,
    PRECEQ_W_PHR_MM	= 1585,
    PRECEU_PH_QBLA_MM	= 1586,
    PRECEU_PH_QBL_MM	= 1587,
    PRECEU_PH_QBRA_MM	= 1588,
    PRECEU_PH_QBR_MM	= 1589,
    PRECRQU_S_QB_PH_MM	= 1590,
    PRECRQ_PH_W_MM	= 1591,
    PRECRQ_QB_PH_MM	= 1592,
    PRECRQ_RS_PH_W_MM	= 1593,
    RADDU_W_QB_MM	= 1594,
    RDDSP_MM	= 1595,
    REPLV_PH_MM	= 1596,
    REPLV_QB_MM	= 1597,
    REPL_PH_MM	= 1598,
    REPL_QB_MM	= 1599,
    SHILOV_MM	= 1600,
    SHILO_MM	= 1601,
    SHLLV_PH_MM	= 1602,
    SHLLV_QB_MM	= 1603,
    SHLLV_S_PH_MM	= 1604,
    SHLLV_S_W_MM	= 1605,
    SHLL_PH_MM	= 1606,
    SHLL_QB_MM	= 1607,
    SHLL_S_PH_MM	= 1608,
    SHLL_S_W_MM	= 1609,
    SHRAV_PH_MM	= 1610,
    SHRAV_R_PH_MM	= 1611,
    SHRAV_R_W_MM	= 1612,
    SHRA_PH_MM	= 1613,
    SHRA_R_PH_MM	= 1614,
    SHRA_R_W_MM	= 1615,
    SHRLV_QB_MM	= 1616,
    SHRL_QB_MM	= 1617,
    SUBQ_PH_MM	= 1618,
    SUBQ_S_PH_MM	= 1619,
    SUBQ_S_W_MM	= 1620,
    SUBU_QB_MM	= 1621,
    SUBU_S_QB_MM	= 1622,
    WRDSP_MM	= 1623,
    ABSQ_S_QB_MMR2	= 1624,
    ADDQH_PH_MMR2	= 1625,
    ADDQH_R_PH_MMR2	= 1626,
    ADDQH_R_W_MMR2	= 1627,
    ADDQH_W_MMR2	= 1628,
    ADDUH_QB_MMR2	= 1629,
    ADDUH_R_QB_MMR2	= 1630,
    ADDU_PH_MMR2	= 1631,
    ADDU_S_PH_MMR2	= 1632,
    APPEND_MMR2	= 1633,
    BALIGN_MMR2	= 1634,
    CMPGDU_EQ_QB_MMR2	= 1635,
    CMPGDU_LE_QB_MMR2	= 1636,
    CMPGDU_LT_QB_MMR2	= 1637,
    DPA_W_PH_MMR2	= 1638,
    DPAQX_SA_W_PH_MMR2	= 1639,
    DPAQX_S_W_PH_MMR2	= 1640,
    DPAX_W_PH_MMR2	= 1641,
    DPS_W_PH_MMR2	= 1642,
    DPSQX_S_W_PH_MMR2	= 1643,
    DPSQX_SA_W_PH_MMR2	= 1644,
    DPSX_W_PH_MMR2	= 1645,
    MUL_PH_MMR2	= 1646,
    MUL_S_PH_MMR2	= 1647,
    MULQ_RS_W_MMR2	= 1648,
    MULQ_S_PH_MMR2	= 1649,
    MULQ_S_W_MMR2	= 1650,
    MULSA_W_PH_MMR2	= 1651,
    PRECR_QB_PH_MMR2	= 1652,
    PRECR_SRA_PH_W_MMR2	= 1653,
    PRECR_SRA_R_PH_W_MMR2	= 1654,
    PREPEND_MMR2	= 1655,
    SHRA_QB_MMR2	= 1656,
    SHRA_R_QB_MMR2	= 1657,
    SHRAV_QB_MMR2	= 1658,
    SHRAV_R_QB_MMR2	= 1659,
    SHRL_PH_MMR2	= 1660,
    SHRLV_PH_MMR2	= 1661,
    SUBQH_PH_MMR2	= 1662,
    SUBQH_R_PH_MMR2	= 1663,
    SUBQH_W_MMR2	= 1664,
    SUBQH_R_W_MMR2	= 1665,
    SUBU_PH_MMR2	= 1666,
    SUBU_S_PH_MMR2	= 1667,
    SUBUH_QB_MMR2	= 1668,
    SUBUH_R_QB_MMR2	= 1669,
    BPOSGE32C_MMR3	= 1670,
    CMP_F_D	= 1671,
    CMP_F_S	= 1672,
    CMP_SAF_D	= 1673,
    CMP_SAF_S	= 1674,
    CMP_SEQ_D	= 1675,
    CMP_SEQ_S	= 1676,
    CMP_SLE_D	= 1677,
    CMP_SLE_S	= 1678,
    CMP_SLT_D	= 1679,
    CMP_SLT_S	= 1680,
    CMP_SUEQ_D	= 1681,
    CMP_SUEQ_S	= 1682,
    CMP_SULE_D	= 1683,
    CMP_SULE_S	= 1684,
    CMP_SULT_D	= 1685,
    CMP_SULT_S	= 1686,
    CMP_SUN_D	= 1687,
    CMP_SUN_S	= 1688,
    SCHED_LIST_END = 1689
  };
} // end namespace Sched
} // end namespace Mips
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { Mips::SP, 0 };
static const MCPhysReg ImplicitList2[] = { Mips::AT, 0 };
static const MCPhysReg ImplicitList3[] = { Mips::RA, 0 };
static const MCPhysReg ImplicitList4[] = { Mips::DSPPos, 0 };
static const MCPhysReg ImplicitList5[] = { Mips::V0, Mips::V1, 0 };
static const MCPhysReg ImplicitList6[] = { Mips::HI0, Mips::LO0, 0 };
static const MCPhysReg ImplicitList7[] = { Mips::T8, 0 };
static const MCPhysReg ImplicitList8[] = { Mips::DSPOutFlag20, 0 };
static const MCPhysReg ImplicitList9[] = { Mips::DSPCarry, 0 };
static const MCPhysReg ImplicitList10[] = { Mips::DSPCCond, 0 };
static const MCPhysReg ImplicitList11[] = { Mips::HI0, Mips::LO0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const MCPhysReg ImplicitList12[] = { Mips::HI0_64, Mips::LO0_64, 0 };
static const MCPhysReg ImplicitList13[] = { Mips::DSPOutFlag16_19, 0 };
static const MCPhysReg ImplicitList14[] = { Mips::DSPEFI, 0 };
static const MCPhysReg ImplicitList15[] = { Mips::DSPPos, Mips::DSPEFI, 0 };
static const MCPhysReg ImplicitList16[] = { Mips::DSPOutFlag23, 0 };
static const MCPhysReg ImplicitList17[] = { Mips::FCC0, 0 };
static const MCPhysReg ImplicitList18[] = { Mips::DSPPos, Mips::DSPSCount, 0 };
static const MCPhysReg ImplicitList19[] = { Mips::AC0, 0 };
static const MCPhysReg ImplicitList20[] = { Mips::AC0_64, 0 };
static const MCPhysReg ImplicitList21[] = { Mips::HI0, 0 };
static const MCPhysReg ImplicitList22[] = { Mips::HI0_64, 0 };
static const MCPhysReg ImplicitList23[] = { Mips::LO0, 0 };
static const MCPhysReg ImplicitList24[] = { Mips::LO0_64, 0 };
static const MCPhysReg ImplicitList25[] = { Mips::MPL0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const MCPhysReg ImplicitList26[] = { Mips::MPL1, Mips::P0, Mips::P1, Mips::P2, 0 };
static const MCPhysReg ImplicitList27[] = { Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };
static const MCPhysReg ImplicitList28[] = { Mips::P0, 0 };
static const MCPhysReg ImplicitList29[] = { Mips::P1, 0 };
static const MCPhysReg ImplicitList30[] = { Mips::P2, 0 };
static const MCPhysReg ImplicitList31[] = { Mips::DSPOutFlag21, 0 };
static const MCPhysReg ImplicitList32[] = { Mips::DSPOutFlag22, 0 };
static const MCPhysReg ImplicitList33[] = { Mips::P0, Mips::P1, Mips::P2, 0 };
static const MCPhysReg ImplicitList34[] = { Mips::MPL1, Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { Mips::MSA128F16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128F16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128F16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::MSA128F16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::MSA128F16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo138[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { Mips::GPR32NONZERORegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo168[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo170[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo171[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo173[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo174[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo176[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo177[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo178[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo180[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo181[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo182[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo183[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo185[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo186[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo192[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo195[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo196[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo197[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo198[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo199[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo200[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo201[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo202[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo203[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo204[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo205[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo206[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo207[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo208[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo209[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo210[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo211[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo212[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo213[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo214[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo215[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo216[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo217[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo218[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo219[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo220[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo221[] = { { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo222[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo223[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo224[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo225[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo226[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo227[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo228[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo229[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo230[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo231[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo232[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo233[] = { { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo234[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo235[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo236[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo237[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo238[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo239[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo240[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo241[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo242[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo243[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo244[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo245[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo246[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo247[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo248[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo249[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo250[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo251[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo252[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo253[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo254[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo255[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo256[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo257[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo258[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo259[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo260[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo261[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo262[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo263[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo264[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo265[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo266[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo267[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo268[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo269[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo270[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo271[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo272[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo273[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo274[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo275[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo276[] = { { Mips::COP3RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo277[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo278[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo279[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo280[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo281[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo282[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo283[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo284[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo285[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo286[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo287[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo288[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MipsII::OPERAND_MEM_SIMM9, 0 }, { -1, 0, MipsII::OPERAND_MEM_SIMM9, 0 }, };
static const MCOperandInfo OperandInfo289[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MipsII::OPERAND_MEM_SIMM9, 0 }, { -1, 0, MipsII::OPERAND_MEM_SIMM9, 0 }, };
static const MCOperandInfo OperandInfo290[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo291[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo292[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 3, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo293[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo294[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 2, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo295[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo296[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 2, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo297[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo298[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo299[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo300[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo301[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo302[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo303[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo304[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo305[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo306[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo307[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo308[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo309[] = { { Mips::GPRMM16MovePPairFirstRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16MovePPairSecondRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo310[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo311[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo312[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo313[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo314[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo315[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo316[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo317[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo318[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo319[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo320[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo321[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo322[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo323[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo324[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo325[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo326[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo327[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo328[] = { { Mips::HI32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo329[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo330[] = { { Mips::LO32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo331[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo332[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo333[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo334[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo335[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo336[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo337[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo338[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo339[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo340[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo341[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo342[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo343[] = { { Mips::GPRMM16ZeroRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo344[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo345[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MipsII::OPERAND_MEM_SIMM9, 0 }, { -1, 0, MipsII::OPERAND_MEM_SIMM9, 0 }, };
static const MCOperandInfo OperandInfo346[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo347[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MipsII::OPERAND_MEM_SIMM9, 0 }, { -1, 0, MipsII::OPERAND_MEM_SIMM9, 0 }, };
static const MCOperandInfo OperandInfo348[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo349[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo350[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo351[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo352[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo353[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo354[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo355[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo356[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo357[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo358[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo359[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo360[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo361[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo362[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo363[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };

extern const MCInstrDesc MipsInsts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #1 = INLINEASM
  { 2,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #2 = INLINEASM_BR
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #3 = CFI_INSTRUCTION
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #4 = EH_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #5 = GC_LABEL
  { 6,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #6 = ANNOTATION_LABEL
  { 7,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #7 = KILL
  { 8,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #8 = EXTRACT_SUBREG
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5 },  // Inst #9 = INSERT_SUBREG
  { 10,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #10 = IMPLICIT_DEF
  { 11,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6 },  // Inst #11 = SUBREG_TO_REG
  { 12,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #12 = COPY_TO_REGCLASS
  { 13,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #13 = DBG_VALUE
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #14 = DBG_INSTR_REF
  { 15,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #15 = DBG_LABEL
  { 16,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #16 = REG_SEQUENCE
  { 17,	2,	1,	0,	514,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #17 = COPY
  { 18,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #18 = BUNDLE
  { 19,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #19 = LIFETIME_START
  { 20,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #20 = LIFETIME_END
  { 21,	4,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8 },  // Inst #21 = PSEUDO_PROBE
  { 22,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #22 = STACKMAP
  { 23,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #23 = FENTRY_CALL
  { 24,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #24 = PATCHPOINT
  { 25,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo11 },  // Inst #25 = LOAD_STACK_GUARD
  { 26,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #26 = PREALLOCATED_SETUP
  { 27,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12 },  // Inst #27 = PREALLOCATED_ARG
  { 28,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #28 = STATEPOINT
  { 29,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13 },  // Inst #29 = LOCAL_ESCAPE
  { 30,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #30 = FAULTING_OP
  { 31,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #31 = PATCHABLE_OP
  { 32,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #32 = PATCHABLE_FUNCTION_ENTER
  { 33,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #33 = PATCHABLE_RET
  { 34,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #34 = PATCHABLE_FUNCTION_EXIT
  { 35,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #35 = PATCHABLE_TAIL_CALL
  { 36,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14 },  // Inst #36 = PATCHABLE_EVENT_CALL
  { 37,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #37 = PATCHABLE_TYPED_EVENT_CALL
  { 38,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #38 = ICALL_BRANCH_FUNNEL
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #39 = G_ASSERT_ZEXT
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #40 = G_ADD
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #41 = G_SUB
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #42 = G_MUL
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #43 = G_SDIV
  { 44,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #44 = G_UDIV
  { 45,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #45 = G_SREM
  { 46,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #46 = G_UREM
  { 47,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #47 = G_AND
  { 48,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #48 = G_OR
  { 49,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #49 = G_XOR
  { 50,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #50 = G_IMPLICIT_DEF
  { 51,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #51 = G_PHI
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #52 = G_FRAME_INDEX
  { 53,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #53 = G_GLOBAL_VALUE
  { 54,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #54 = G_EXTRACT
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #55 = G_UNMERGE_VALUES
  { 56,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #56 = G_INSERT
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #57 = G_MERGE_VALUES
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #58 = G_BUILD_VECTOR
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #59 = G_BUILD_VECTOR_TRUNC
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #60 = G_CONCAT_VECTORS
  { 61,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #61 = G_PTRTOINT
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #62 = G_INTTOPTR
  { 63,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #63 = G_BITCAST
  { 64,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #64 = G_FREEZE
  { 65,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #65 = G_INTRINSIC_TRUNC
  { 66,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #66 = G_INTRINSIC_ROUND
  { 67,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #67 = G_INTRINSIC_LRINT
  { 68,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #68 = G_INTRINSIC_ROUNDEVEN
  { 69,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #69 = G_READCYCLECOUNTER
  { 70,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #70 = G_LOAD
  { 71,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #71 = G_SEXTLOAD
  { 72,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #72 = G_ZEXTLOAD
  { 73,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo24 },  // Inst #73 = G_INDEXED_LOAD
  { 74,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo24 },  // Inst #74 = G_INDEXED_SEXTLOAD
  { 75,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo24 },  // Inst #75 = G_INDEXED_ZEXTLOAD
  { 76,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #76 = G_STORE
  { 77,	5,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #77 = G_INDEXED_STORE
  { 78,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #78 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 79,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #79 = G_ATOMIC_CMPXCHG
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #80 = G_ATOMICRMW_XCHG
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #81 = G_ATOMICRMW_ADD
  { 82,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #82 = G_ATOMICRMW_SUB
  { 83,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #83 = G_ATOMICRMW_AND
  { 84,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #84 = G_ATOMICRMW_NAND
  { 85,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #85 = G_ATOMICRMW_OR
  { 86,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #86 = G_ATOMICRMW_XOR
  { 87,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #87 = G_ATOMICRMW_MAX
  { 88,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #88 = G_ATOMICRMW_MIN
  { 89,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #89 = G_ATOMICRMW_UMAX
  { 90,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #90 = G_ATOMICRMW_UMIN
  { 91,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #91 = G_ATOMICRMW_FADD
  { 92,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #92 = G_ATOMICRMW_FSUB
  { 93,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #93 = G_FENCE
  { 94,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #94 = G_BRCOND
  { 95,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #95 = G_BRINDIRECT
  { 96,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #96 = G_INTRINSIC
  { 97,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #97 = G_INTRINSIC_W_SIDE_EFFECTS
  { 98,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #98 = G_ANYEXT
  { 99,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #99 = G_TRUNC
  { 100,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #100 = G_CONSTANT
  { 101,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #101 = G_FCONSTANT
  { 102,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #102 = G_VASTART
  { 103,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #103 = G_VAARG
  { 104,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #104 = G_SEXT
  { 105,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #105 = G_SEXT_INREG
  { 106,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #106 = G_ZEXT
  { 107,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #107 = G_SHL
  { 108,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #108 = G_LSHR
  { 109,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #109 = G_ASHR
  { 110,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #110 = G_FSHL
  { 111,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #111 = G_FSHR
  { 112,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #112 = G_ICMP
  { 113,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #113 = G_FCMP
  { 114,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #114 = G_SELECT
  { 115,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #115 = G_UADDO
  { 116,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #116 = G_UADDE
  { 117,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #117 = G_USUBO
  { 118,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #118 = G_USUBE
  { 119,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #119 = G_SADDO
  { 120,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #120 = G_SADDE
  { 121,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #121 = G_SSUBO
  { 122,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #122 = G_SSUBE
  { 123,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #123 = G_UMULO
  { 124,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #124 = G_SMULO
  { 125,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #125 = G_UMULH
  { 126,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #126 = G_SMULH
  { 127,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #127 = G_UADDSAT
  { 128,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #128 = G_SADDSAT
  { 129,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #129 = G_USUBSAT
  { 130,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #130 = G_SSUBSAT
  { 131,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #131 = G_USHLSAT
  { 132,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #132 = G_SSHLSAT
  { 133,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #133 = G_SMULFIX
  { 134,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #134 = G_UMULFIX
  { 135,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #135 = G_SMULFIXSAT
  { 136,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #136 = G_UMULFIXSAT
  { 137,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #137 = G_SDIVFIX
  { 138,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #138 = G_UDIVFIX
  { 139,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #139 = G_SDIVFIXSAT
  { 140,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #140 = G_UDIVFIXSAT
  { 141,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #141 = G_FADD
  { 142,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #142 = G_FSUB
  { 143,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #143 = G_FMUL
  { 144,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #144 = G_FMA
  { 145,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #145 = G_FMAD
  { 146,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #146 = G_FDIV
  { 147,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #147 = G_FREM
  { 148,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #148 = G_FPOW
  { 149,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #149 = G_FPOWI
  { 150,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #150 = G_FEXP
  { 151,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #151 = G_FEXP2
  { 152,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #152 = G_FLOG
  { 153,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #153 = G_FLOG2
  { 154,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #154 = G_FLOG10
  { 155,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #155 = G_FNEG
  { 156,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #156 = G_FPEXT
  { 157,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #157 = G_FPTRUNC
  { 158,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #158 = G_FPTOSI
  { 159,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #159 = G_FPTOUI
  { 160,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #160 = G_SITOFP
  { 161,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #161 = G_UITOFP
  { 162,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #162 = G_FABS
  { 163,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #163 = G_FCOPYSIGN
  { 164,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #164 = G_FCANONICALIZE
  { 165,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #165 = G_FMINNUM
  { 166,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #166 = G_FMAXNUM
  { 167,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #167 = G_FMINNUM_IEEE
  { 168,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #168 = G_FMAXNUM_IEEE
  { 169,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #169 = G_FMINIMUM
  { 170,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #170 = G_FMAXIMUM
  { 171,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #171 = G_PTR_ADD
  { 172,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #172 = G_PTRMASK
  { 173,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #173 = G_SMIN
  { 174,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #174 = G_SMAX
  { 175,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #175 = G_UMIN
  { 176,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #176 = G_UMAX
  { 177,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #177 = G_ABS
  { 178,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #178 = G_BR
  { 179,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo36 },  // Inst #179 = G_BRJT
  { 180,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #180 = G_INSERT_VECTOR_ELT
  { 181,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo38 },  // Inst #181 = G_EXTRACT_VECTOR_ELT
  { 182,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo39 },  // Inst #182 = G_SHUFFLE_VECTOR
  { 183,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #183 = G_CTTZ
  { 184,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #184 = G_CTTZ_ZERO_UNDEF
  { 185,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #185 = G_CTLZ
  { 186,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #186 = G_CTLZ_ZERO_UNDEF
  { 187,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #187 = G_CTPOP
  { 188,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #188 = G_BSWAP
  { 189,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #189 = G_BITREVERSE
  { 190,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #190 = G_FCEIL
  { 191,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #191 = G_FCOS
  { 192,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #192 = G_FSIN
  { 193,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #193 = G_FSQRT
  { 194,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #194 = G_FFLOOR
  { 195,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #195 = G_FRINT
  { 196,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #196 = G_FNEARBYINT
  { 197,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #197 = G_ADDRSPACE_CAST
  { 198,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #198 = G_BLOCK_ADDR
  { 199,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #199 = G_JUMP_TABLE
  { 200,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40 },  // Inst #200 = G_DYN_STACKALLOC
  { 201,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #201 = G_STRICT_FADD
  { 202,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #202 = G_STRICT_FSUB
  { 203,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #203 = G_STRICT_FMUL
  { 204,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #204 = G_STRICT_FDIV
  { 205,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #205 = G_STRICT_FREM
  { 206,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #206 = G_STRICT_FMA
  { 207,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #207 = G_STRICT_FSQRT
  { 208,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #208 = G_READ_REGISTER
  { 209,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo41 },  // Inst #209 = G_WRITE_REGISTER
  { 210,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #210 = G_MEMCPY
  { 211,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #211 = G_MEMMOVE
  { 212,	4,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #212 = G_MEMSET
  { 213,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo38 },  // Inst #213 = G_VECREDUCE_SEQ_FADD
  { 214,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo38 },  // Inst #214 = G_VECREDUCE_SEQ_FMUL
  { 215,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #215 = G_VECREDUCE_FADD
  { 216,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #216 = G_VECREDUCE_FMUL
  { 217,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #217 = G_VECREDUCE_FMAX
  { 218,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #218 = G_VECREDUCE_FMIN
  { 219,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #219 = G_VECREDUCE_ADD
  { 220,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #220 = G_VECREDUCE_MUL
  { 221,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #221 = G_VECREDUCE_AND
  { 222,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #222 = G_VECREDUCE_OR
  { 223,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #223 = G_VECREDUCE_XOR
  { 224,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #224 = G_VECREDUCE_SMAX
  { 225,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #225 = G_VECREDUCE_SMIN
  { 226,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #226 = G_VECREDUCE_UMAX
  { 227,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #227 = G_VECREDUCE_UMIN
  { 228,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #228 = ABSMacro
  { 229,	2,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #229 = ADJCALLSTACKDOWN
  { 230,	2,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #230 = ADJCALLSTACKUP
  { 231,	3,	1,	4,	550,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #231 = AND_V_D_PSEUDO
  { 232,	3,	1,	4,	550,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #232 = AND_V_H_PSEUDO
  { 233,	3,	1,	4,	550,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #233 = AND_V_W_PSEUDO
  { 234,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #234 = ATOMIC_CMP_SWAP_I16
  { 235,	7,	1,	4,	722,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #235 = ATOMIC_CMP_SWAP_I16_POSTRA
  { 236,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #236 = ATOMIC_CMP_SWAP_I32
  { 237,	4,	1,	4,	722,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #237 = ATOMIC_CMP_SWAP_I32_POSTRA
  { 238,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #238 = ATOMIC_CMP_SWAP_I64
  { 239,	4,	1,	4,	722,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #239 = ATOMIC_CMP_SWAP_I64_POSTRA
  { 240,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #240 = ATOMIC_CMP_SWAP_I8
  { 241,	7,	1,	4,	722,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #241 = ATOMIC_CMP_SWAP_I8_POSTRA
  { 242,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #242 = ATOMIC_LOAD_ADD_I16
  { 243,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #243 = ATOMIC_LOAD_ADD_I16_POSTRA
  { 244,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #244 = ATOMIC_LOAD_ADD_I32
  { 245,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #245 = ATOMIC_LOAD_ADD_I32_POSTRA
  { 246,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #246 = ATOMIC_LOAD_ADD_I64
  { 247,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #247 = ATOMIC_LOAD_ADD_I64_POSTRA
  { 248,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #248 = ATOMIC_LOAD_ADD_I8
  { 249,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #249 = ATOMIC_LOAD_ADD_I8_POSTRA
  { 250,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #250 = ATOMIC_LOAD_AND_I16
  { 251,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #251 = ATOMIC_LOAD_AND_I16_POSTRA
  { 252,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #252 = ATOMIC_LOAD_AND_I32
  { 253,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #253 = ATOMIC_LOAD_AND_I32_POSTRA
  { 254,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #254 = ATOMIC_LOAD_AND_I64
  { 255,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #255 = ATOMIC_LOAD_AND_I64_POSTRA
  { 256,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #256 = ATOMIC_LOAD_AND_I8
  { 257,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #257 = ATOMIC_LOAD_AND_I8_POSTRA
  { 258,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #258 = ATOMIC_LOAD_MAX_I16
  { 259,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #259 = ATOMIC_LOAD_MAX_I16_POSTRA
  { 260,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #260 = ATOMIC_LOAD_MAX_I32
  { 261,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #261 = ATOMIC_LOAD_MAX_I32_POSTRA
  { 262,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #262 = ATOMIC_LOAD_MAX_I64
  { 263,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #263 = ATOMIC_LOAD_MAX_I64_POSTRA
  { 264,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #264 = ATOMIC_LOAD_MAX_I8
  { 265,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #265 = ATOMIC_LOAD_MAX_I8_POSTRA
  { 266,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #266 = ATOMIC_LOAD_MIN_I16
  { 267,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #267 = ATOMIC_LOAD_MIN_I16_POSTRA
  { 268,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #268 = ATOMIC_LOAD_MIN_I32
  { 269,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #269 = ATOMIC_LOAD_MIN_I32_POSTRA
  { 270,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #270 = ATOMIC_LOAD_MIN_I64
  { 271,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #271 = ATOMIC_LOAD_MIN_I64_POSTRA
  { 272,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #272 = ATOMIC_LOAD_MIN_I8
  { 273,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #273 = ATOMIC_LOAD_MIN_I8_POSTRA
  { 274,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #274 = ATOMIC_LOAD_NAND_I16
  { 275,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #275 = ATOMIC_LOAD_NAND_I16_POSTRA
  { 276,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #276 = ATOMIC_LOAD_NAND_I32
  { 277,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #277 = ATOMIC_LOAD_NAND_I32_POSTRA
  { 278,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #278 = ATOMIC_LOAD_NAND_I64
  { 279,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #279 = ATOMIC_LOAD_NAND_I64_POSTRA
  { 280,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #280 = ATOMIC_LOAD_NAND_I8
  { 281,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #281 = ATOMIC_LOAD_NAND_I8_POSTRA
  { 282,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #282 = ATOMIC_LOAD_OR_I16
  { 283,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #283 = ATOMIC_LOAD_OR_I16_POSTRA
  { 284,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #284 = ATOMIC_LOAD_OR_I32
  { 285,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #285 = ATOMIC_LOAD_OR_I32_POSTRA
  { 286,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #286 = ATOMIC_LOAD_OR_I64
  { 287,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #287 = ATOMIC_LOAD_OR_I64_POSTRA
  { 288,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #288 = ATOMIC_LOAD_OR_I8
  { 289,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #289 = ATOMIC_LOAD_OR_I8_POSTRA
  { 290,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #290 = ATOMIC_LOAD_SUB_I16
  { 291,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #291 = ATOMIC_LOAD_SUB_I16_POSTRA
  { 292,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #292 = ATOMIC_LOAD_SUB_I32
  { 293,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #293 = ATOMIC_LOAD_SUB_I32_POSTRA
  { 294,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #294 = ATOMIC_LOAD_SUB_I64
  { 295,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #295 = ATOMIC_LOAD_SUB_I64_POSTRA
  { 296,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #296 = ATOMIC_LOAD_SUB_I8
  { 297,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #297 = ATOMIC_LOAD_SUB_I8_POSTRA
  { 298,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #298 = ATOMIC_LOAD_UMAX_I16
  { 299,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #299 = ATOMIC_LOAD_UMAX_I16_POSTRA
  { 300,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #300 = ATOMIC_LOAD_UMAX_I32
  { 301,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #301 = ATOMIC_LOAD_UMAX_I32_POSTRA
  { 302,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #302 = ATOMIC_LOAD_UMAX_I64
  { 303,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #303 = ATOMIC_LOAD_UMAX_I64_POSTRA
  { 304,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #304 = ATOMIC_LOAD_UMAX_I8
  { 305,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #305 = ATOMIC_LOAD_UMAX_I8_POSTRA
  { 306,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #306 = ATOMIC_LOAD_UMIN_I16
  { 307,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #307 = ATOMIC_LOAD_UMIN_I16_POSTRA
  { 308,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #308 = ATOMIC_LOAD_UMIN_I32
  { 309,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #309 = ATOMIC_LOAD_UMIN_I32_POSTRA
  { 310,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #310 = ATOMIC_LOAD_UMIN_I64
  { 311,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #311 = ATOMIC_LOAD_UMIN_I64_POSTRA
  { 312,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #312 = ATOMIC_LOAD_UMIN_I8
  { 313,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #313 = ATOMIC_LOAD_UMIN_I8_POSTRA
  { 314,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #314 = ATOMIC_LOAD_XOR_I16
  { 315,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #315 = ATOMIC_LOAD_XOR_I16_POSTRA
  { 316,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #316 = ATOMIC_LOAD_XOR_I32
  { 317,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #317 = ATOMIC_LOAD_XOR_I32_POSTRA
  { 318,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #318 = ATOMIC_LOAD_XOR_I64
  { 319,	3,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #319 = ATOMIC_LOAD_XOR_I64_POSTRA
  { 320,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #320 = ATOMIC_LOAD_XOR_I8
  { 321,	6,	1,	4,	723,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #321 = ATOMIC_LOAD_XOR_I8_POSTRA
  { 322,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #322 = ATOMIC_SWAP_I16
  { 323,	6,	1,	4,	721,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #323 = ATOMIC_SWAP_I16_POSTRA
  { 324,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #324 = ATOMIC_SWAP_I32
  { 325,	3,	1,	4,	721,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #325 = ATOMIC_SWAP_I32_POSTRA
  { 326,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #326 = ATOMIC_SWAP_I64
  { 327,	3,	1,	4,	721,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #327 = ATOMIC_SWAP_I64_POSTRA
  { 328,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #328 = ATOMIC_SWAP_I8
  { 329,	6,	1,	4,	721,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #329 = ATOMIC_SWAP_I8_POSTRA
  { 330,	1,	0,	4,	374,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, ImplicitList2, OperandInfo53 },  // Inst #330 = B
  { 331,	1,	0,	4,	919,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, ImplicitList3, OperandInfo53 },  // Inst #331 = BAL_BR
  { 332,	1,	0,	4,	946,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, ImplicitList3, OperandInfo53 },  // Inst #332 = BAL_BR_MM
  { 333,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #333 = BEQLImmMacro
  { 334,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #334 = BGE
  { 335,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #335 = BGEImmMacro
  { 336,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #336 = BGEL
  { 337,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #337 = BGELImmMacro
  { 338,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #338 = BGEU
  { 339,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #339 = BGEUImmMacro
  { 340,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #340 = BGEUL
  { 341,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #341 = BGEULImmMacro
  { 342,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #342 = BGT
  { 343,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #343 = BGTImmMacro
  { 344,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #344 = BGTL
  { 345,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #345 = BGTLImmMacro
  { 346,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #346 = BGTU
  { 347,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #347 = BGTUImmMacro
  { 348,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #348 = BGTUL
  { 349,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #349 = BGTULImmMacro
  { 350,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #350 = BLE
  { 351,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #351 = BLEImmMacro
  { 352,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #352 = BLEL
  { 353,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #353 = BLELImmMacro
  { 354,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #354 = BLEU
  { 355,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #355 = BLEUImmMacro
  { 356,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #356 = BLEUL
  { 357,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #357 = BLEULImmMacro
  { 358,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #358 = BLT
  { 359,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #359 = BLTImmMacro
  { 360,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #360 = BLTL
  { 361,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #361 = BLTLImmMacro
  { 362,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #362 = BLTU
  { 363,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #363 = BLTUImmMacro
  { 364,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo55 },  // Inst #364 = BLTUL
  { 365,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #365 = BLTULImmMacro
  { 366,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #366 = BNELImmMacro
  { 367,	1,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo56 },  // Inst #367 = BPOSGE32_PSEUDO
  { 368,	4,	1,	4,	525,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #368 = BSEL_D_PSEUDO
  { 369,	4,	1,	4,	525,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #369 = BSEL_FD_PSEUDO
  { 370,	4,	1,	4,	525,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #370 = BSEL_FW_PSEUDO
  { 371,	4,	1,	4,	525,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #371 = BSEL_H_PSEUDO
  { 372,	4,	1,	4,	525,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #372 = BSEL_W_PSEUDO
  { 373,	1,	0,	4,	945,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, ImplicitList2, OperandInfo53 },  // Inst #373 = B_MM
  { 374,	1,	0,	4,	997,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #374 = B_MMR6_Pseudo
  { 375,	1,	0,	4,	956,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #375 = B_MM_Pseudo
  { 376,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #376 = BeqImm
  { 377,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo54 },  // Inst #377 = BneImm
  { 378,	3,	0,	2,	940,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #378 = BteqzT8CmpX16
  { 379,	3,	0,	2,	940,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo61 },  // Inst #379 = BteqzT8CmpiX16
  { 380,	3,	0,	2,	940,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #380 = BteqzT8SltX16
  { 381,	3,	0,	2,	940,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo61 },  // Inst #381 = BteqzT8SltiX16
  { 382,	3,	0,	2,	940,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61 },  // Inst #382 = BteqzT8SltiuX16
  { 383,	3,	0,	2,	940,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #383 = BteqzT8SltuX16
  { 384,	3,	0,	2,	940,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #384 = BtnezT8CmpX16
  { 385,	3,	0,	2,	940,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo61 },  // Inst #385 = BtnezT8CmpiX16
  { 386,	3,	0,	2,	940,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #386 = BtnezT8SltX16
  { 387,	3,	0,	2,	940,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo61 },  // Inst #387 = BtnezT8SltiX16
  { 388,	3,	0,	2,	940,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61 },  // Inst #388 = BtnezT8SltiuX16
  { 389,	3,	0,	2,	940,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60 },  // Inst #389 = BtnezT8SltuX16
  { 390,	3,	1,	4,	686,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #390 = BuildPairF64
  { 391,	3,	1,	4,	686,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #391 = BuildPairF64_64
  { 392,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #392 = CFTC1
  { 393,	3,	0,	2,	737,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #393 = CONSTPOOL_ENTRY
  { 394,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #394 = COPY_FD_PSEUDO
  { 395,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #395 = COPY_FW_PSEUDO
  { 396,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #396 = CTTC1
  { 397,	1,	0,	2,	737,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #397 = Constant32
  { 398,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #398 = DMULImmMacro
  { 399,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #399 = DMULMacro
  { 400,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #400 = DMULOMacro
  { 401,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #401 = DMULOUMacro
  { 402,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #402 = DROL
  { 403,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #403 = DROLImm
  { 404,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #404 = DROR
  { 405,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #405 = DRORImm
  { 406,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #406 = DSDivIMacro
  { 407,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #407 = DSDivMacro
  { 408,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #408 = DSRemIMacro
  { 409,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #409 = DSRemMacro
  { 410,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #410 = DUDivIMacro
  { 411,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #411 = DUDivMacro
  { 412,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #412 = DURemIMacro
  { 413,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #413 = DURemMacro
  { 414,	0,	0,	4,	924,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, nullptr },  // Inst #414 = ERet
  { 415,	3,	1,	4,	695,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo72 },  // Inst #415 = ExtractElementF64
  { 416,	3,	1,	4,	695,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #416 = ExtractElementF64_64
  { 417,	2,	1,	4,	588,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo74 },  // Inst #417 = FABS_D
  { 418,	2,	1,	4,	588,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo75 },  // Inst #418 = FABS_W
  { 419,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo74 },  // Inst #419 = FEXP2_D_1_PSEUDO
  { 420,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo75 },  // Inst #420 = FEXP2_W_1_PSEUDO
  { 421,	2,	1,	4,	551,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #421 = FILL_FD_PSEUDO
  { 422,	2,	1,	4,	551,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo77 },  // Inst #422 = FILL_FW_PSEUDO
  { 423,	4,	2,	2,	737,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo78 },  // Inst #423 = GotPrologue16
  { 424,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #424 = INSERT_B_VIDX64_PSEUDO
  { 425,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #425 = INSERT_B_VIDX_PSEUDO
  { 426,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo81 },  // Inst #426 = INSERT_D_VIDX64_PSEUDO
  { 427,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo82 },  // Inst #427 = INSERT_D_VIDX_PSEUDO
  { 428,	4,	1,	4,	552,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #428 = INSERT_FD_PSEUDO
  { 429,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #429 = INSERT_FD_VIDX64_PSEUDO
  { 430,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #430 = INSERT_FD_VIDX_PSEUDO
  { 431,	4,	1,	4,	552,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo86 },  // Inst #431 = INSERT_FW_PSEUDO
  { 432,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo87 },  // Inst #432 = INSERT_FW_VIDX64_PSEUDO
  { 433,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo88 },  // Inst #433 = INSERT_FW_VIDX_PSEUDO
  { 434,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo89 },  // Inst #434 = INSERT_H_VIDX64_PSEUDO
  { 435,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo90 },  // Inst #435 = INSERT_H_VIDX_PSEUDO
  { 436,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo91 },  // Inst #436 = INSERT_W_VIDX64_PSEUDO
  { 437,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo92 },  // Inst #437 = INSERT_W_VIDX_PSEUDO
  { 438,	1,	0,	4,	1012,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::HasPostISelHook), 0x10ULL, nullptr, ImplicitList3, OperandInfo93 },  // Inst #438 = JALR64Pseudo
  { 439,	1,	0,	4,	1012,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::HasPostISelHook), 0x10ULL, nullptr, ImplicitList3, OperandInfo93 },  // Inst #439 = JALRHB64Pseudo
  { 440,	1,	0,	4,	407,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::HasPostISelHook), 0x10ULL, nullptr, ImplicitList3, OperandInfo56 },  // Inst #440 = JALRHBPseudo
  { 441,	1,	0,	4,	407,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::HasPostISelHook), 0x10ULL, nullptr, ImplicitList3, OperandInfo56 },  // Inst #441 = JALRPseudo
  { 442,	1,	0,	4,	990,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call), 0x10ULL, nullptr, ImplicitList3, OperandInfo2 },  // Inst #442 = JAL_MMR6
  { 443,	1,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #443 = JalOneReg
  { 444,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #444 = JalTwoReg
  { 445,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo94 },  // Inst #445 = LDMacro
  { 446,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo95 },  // Inst #446 = LDR_D
  { 447,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo96 },  // Inst #447 = LDR_W
  { 448,	3,	1,	4,	716,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo97 },  // Inst #448 = LD_F16
  { 449,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo98 },  // Inst #449 = LOAD_ACC128
  { 450,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo99 },  // Inst #450 = LOAD_ACC64
  { 451,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo100 },  // Inst #451 = LOAD_ACC64DSP
  { 452,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo101 },  // Inst #452 = LOAD_CCOND_DSP
  { 453,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo102 },  // Inst #453 = LONG_BRANCH_ADDiu
  { 454,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #454 = LONG_BRANCH_ADDiu2Op
  { 455,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo103 },  // Inst #455 = LONG_BRANCH_DADDiu
  { 456,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104 },  // Inst #456 = LONG_BRANCH_DADDiu2Op
  { 457,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105 },  // Inst #457 = LONG_BRANCH_LUi
  { 458,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo106 },  // Inst #458 = LONG_BRANCH_LUi2Op
  { 459,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo107 },  // Inst #459 = LONG_BRANCH_LUi2Op_64
  { 460,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #460 = LWM_MM
  { 461,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo109 },  // Inst #461 = LoadAddrImm32
  { 462,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110 },  // Inst #462 = LoadAddrImm64
  { 463,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo94 },  // Inst #463 = LoadAddrReg32
  { 464,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo111 },  // Inst #464 = LoadAddrReg64
  { 465,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo112 },  // Inst #465 = LoadImm32
  { 466,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110 },  // Inst #466 = LoadImm64
  { 467,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo113 },  // Inst #467 = LoadImmDoubleFGR
  { 468,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo114 },  // Inst #468 = LoadImmDoubleFGR_32
  { 469,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo112 },  // Inst #469 = LoadImmDoubleGPR
  { 470,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo115 },  // Inst #470 = LoadImmSingleFGR
  { 471,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo112 },  // Inst #471 = LoadImmSingleGPR
  { 472,	3,	1,	2,	737,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo116 },  // Inst #472 = LwConstant32
  { 473,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo117 },  // Inst #473 = MFTACX
  { 474,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo118 },  // Inst #474 = MFTC0
  { 475,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo119 },  // Inst #475 = MFTC1
  { 476,	1,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #476 = MFTDSP
  { 477,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #477 = MFTGPR
  { 478,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo119 },  // Inst #478 = MFTHC1
  { 479,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo117 },  // Inst #479 = MFTHI
  { 480,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo117 },  // Inst #480 = MFTLO
  { 481,	2,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x10ULL, ImplicitList5, nullptr, OperandInfo43 },  // Inst #481 = MIPSeh_return32
  { 482,	2,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x10ULL, ImplicitList5, nullptr, OperandInfo120 },  // Inst #482 = MIPSeh_return64
  { 483,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo121 },  // Inst #483 = MSA_FP_EXTEND_D_PSEUDO
  { 484,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo122 },  // Inst #484 = MSA_FP_EXTEND_W_PSEUDO
  { 485,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo123 },  // Inst #485 = MSA_FP_ROUND_D_PSEUDO
  { 486,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo124 },  // Inst #486 = MSA_FP_ROUND_W_PSEUDO
  { 487,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo125 },  // Inst #487 = MTTACX
  { 488,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo126 },  // Inst #488 = MTTC0
  { 489,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo127 },  // Inst #489 = MTTC1
  { 490,	1,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #490 = MTTDSP
  { 491,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #491 = MTTGPR
  { 492,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo127 },  // Inst #492 = MTTHC1
  { 493,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo125 },  // Inst #493 = MTTHI
  { 494,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo125 },  // Inst #494 = MTTLO
  { 495,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #495 = MULImmMacro
  { 496,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #496 = MULOMacro
  { 497,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #497 = MULOUMacro
  { 498,	2,	0,	2,	875,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList6, OperandInfo128 },  // Inst #498 = MultRxRy16
  { 499,	3,	1,	2,	875,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList6, OperandInfo129 },  // Inst #499 = MultRxRyRz16
  { 500,	2,	0,	2,	875,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList6, OperandInfo128 },  // Inst #500 = MultuRxRy16
  { 501,	3,	1,	2,	875,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList6, OperandInfo129 },  // Inst #501 = MultuRxRyRz16
  { 502,	0,	0,	4,	373,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #502 = NOP
  { 503,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #503 = NORImm
  { 504,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #504 = NORImm64
  { 505,	3,	1,	4,	550,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #505 = NOR_V_D_PSEUDO
  { 506,	3,	1,	4,	550,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #506 = NOR_V_H_PSEUDO
  { 507,	3,	1,	4,	550,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #507 = NOR_V_W_PSEUDO
  { 508,	3,	1,	4,	550,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #508 = OR_V_D_PSEUDO
  { 509,	3,	1,	4,	550,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #509 = OR_V_H_PSEUDO
  { 510,	3,	1,	4,	550,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #510 = OR_V_W_PSEUDO
  { 511,	3,	1,	4,	1458,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo130 },  // Inst #511 = PseudoCMPU_EQ_QB
  { 512,	3,	1,	4,	1458,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo130 },  // Inst #512 = PseudoCMPU_LE_QB
  { 513,	3,	1,	4,	1458,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo130 },  // Inst #513 = PseudoCMPU_LT_QB
  { 514,	3,	1,	4,	1458,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo130 },  // Inst #514 = PseudoCMP_EQ_PH
  { 515,	3,	1,	4,	1458,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo130 },  // Inst #515 = PseudoCMP_LE_PH
  { 516,	3,	1,	4,	1458,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo130 },  // Inst #516 = PseudoCMP_LT_PH
  { 517,	2,	1,	4,	644,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo131 },  // Inst #517 = PseudoCVT_D32_W
  { 518,	2,	1,	4,	644,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo132 },  // Inst #518 = PseudoCVT_D64_L
  { 519,	2,	1,	4,	644,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo133 },  // Inst #519 = PseudoCVT_D64_W
  { 520,	2,	1,	4,	644,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo132 },  // Inst #520 = PseudoCVT_S_L
  { 521,	2,	1,	4,	644,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo127 },  // Inst #521 = PseudoCVT_S_W
  { 522,	3,	1,	4,	902,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo134 },  // Inst #522 = PseudoDMULT
  { 523,	3,	1,	4,	903,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo134 },  // Inst #523 = PseudoDMULTu
  { 524,	3,	1,	4,	904,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo134 },  // Inst #524 = PseudoDSDIV
  { 525,	3,	1,	4,	905,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo134 },  // Inst #525 = PseudoDUDIV
  { 526,	7,	2,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo135 },  // Inst #526 = PseudoD_SELECT_I
  { 527,	7,	2,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo136 },  // Inst #527 = PseudoD_SELECT_I64
  { 528,	1,	0,	4,	387,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo56 },  // Inst #528 = PseudoIndirectBranch
  { 529,	1,	0,	4,	1020,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo93 },  // Inst #529 = PseudoIndirectBranch64
  { 530,	1,	0,	4,	1024,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo93 },  // Inst #530 = PseudoIndirectBranch64R6
  { 531,	1,	0,	4,	936,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo56 },  // Inst #531 = PseudoIndirectBranchR6
  { 532,	1,	0,	4,	965,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo56 },  // Inst #532 = PseudoIndirectBranch_MM
  { 533,	1,	0,	4,	998,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo56 },  // Inst #533 = PseudoIndirectBranch_MMR6
  { 534,	1,	0,	4,	387,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo56 },  // Inst #534 = PseudoIndirectHazardBranch
  { 535,	1,	0,	4,	1020,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo93 },  // Inst #535 = PseudoIndirectHazardBranch64
  { 536,	1,	0,	4,	1024,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo93 },  // Inst #536 = PseudoIndrectHazardBranch64R6
  { 537,	1,	0,	4,	936,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo56 },  // Inst #537 = PseudoIndrectHazardBranchR6
  { 538,	4,	1,	4,	489,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo137 },  // Inst #538 = PseudoMADD
  { 539,	4,	1,	4,	490,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo137 },  // Inst #539 = PseudoMADDU
  { 540,	4,	1,	4,	858,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo137 },  // Inst #540 = PseudoMADDU_MM
  { 541,	4,	1,	4,	857,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo137 },  // Inst #541 = PseudoMADD_MM
  { 542,	2,	1,	4,	478,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo138 },  // Inst #542 = PseudoMFHI
  { 543,	2,	1,	4,	906,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo139 },  // Inst #543 = PseudoMFHI64
  { 544,	2,	1,	4,	867,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo138 },  // Inst #544 = PseudoMFHI_MM
  { 545,	2,	1,	4,	478,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo138 },  // Inst #545 = PseudoMFLO
  { 546,	2,	1,	4,	906,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo139 },  // Inst #546 = PseudoMFLO64
  { 547,	2,	1,	4,	867,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo138 },  // Inst #547 = PseudoMFLO_MM
  { 548,	4,	1,	4,	491,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo137 },  // Inst #548 = PseudoMSUB
  { 549,	4,	1,	4,	492,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo137 },  // Inst #549 = PseudoMSUBU
  { 550,	4,	1,	4,	860,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo137 },  // Inst #550 = PseudoMSUBU_MM
  { 551,	4,	1,	4,	859,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo137 },  // Inst #551 = PseudoMSUB_MM
  { 552,	3,	1,	4,	493,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo140 },  // Inst #552 = PseudoMTLOHI
  { 553,	3,	1,	4,	907,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo134 },  // Inst #553 = PseudoMTLOHI64
  { 554,	3,	1,	4,	1344,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo141 },  // Inst #554 = PseudoMTLOHI_DSP
  { 555,	3,	1,	4,	868,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo140 },  // Inst #555 = PseudoMTLOHI_MM
  { 556,	3,	1,	4,	863,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo140 },  // Inst #556 = PseudoMULT
  { 557,	3,	1,	4,	861,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo140 },  // Inst #557 = PseudoMULT_MM
  { 558,	3,	1,	4,	864,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo140 },  // Inst #558 = PseudoMULTu
  { 559,	3,	1,	4,	862,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo140 },  // Inst #559 = PseudoMULTu_MM
  { 560,	4,	1,	4,	1459,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo142 },  // Inst #560 = PseudoPICK_PH
  { 561,	4,	1,	4,	1459,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo142 },  // Inst #561 = PseudoPICK_QB
  { 562,	1,	0,	4,	388,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, nullptr, OperandInfo56 },  // Inst #562 = PseudoReturn
  { 563,	1,	0,	4,	1016,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, nullptr, OperandInfo93 },  // Inst #563 = PseudoReturn64
  { 564,	3,	1,	4,	865,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo140 },  // Inst #564 = PseudoSDIV
  { 565,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo143 },  // Inst #565 = PseudoSELECTFP_F_D32
  { 566,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo144 },  // Inst #566 = PseudoSELECTFP_F_D64
  { 567,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo145 },  // Inst #567 = PseudoSELECTFP_F_I
  { 568,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo146 },  // Inst #568 = PseudoSELECTFP_F_I64
  { 569,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo147 },  // Inst #569 = PseudoSELECTFP_F_S
  { 570,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo143 },  // Inst #570 = PseudoSELECTFP_T_D32
  { 571,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo144 },  // Inst #571 = PseudoSELECTFP_T_D64
  { 572,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo145 },  // Inst #572 = PseudoSELECTFP_T_I
  { 573,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo146 },  // Inst #573 = PseudoSELECTFP_T_I64
  { 574,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo147 },  // Inst #574 = PseudoSELECTFP_T_S
  { 575,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo148 },  // Inst #575 = PseudoSELECT_D32
  { 576,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo149 },  // Inst #576 = PseudoSELECT_D64
  { 577,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo150 },  // Inst #577 = PseudoSELECT_I
  { 578,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo151 },  // Inst #578 = PseudoSELECT_I64
  { 579,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo152 },  // Inst #579 = PseudoSELECT_S
  { 580,	3,	1,	4,	1214,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo153 },  // Inst #580 = PseudoTRUNC_W_D
  { 581,	3,	1,	4,	1214,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo154 },  // Inst #581 = PseudoTRUNC_W_D32
  { 582,	3,	1,	4,	1214,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo155 },  // Inst #582 = PseudoTRUNC_W_S
  { 583,	3,	1,	4,	866,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo140 },  // Inst #583 = PseudoUDIV
  { 584,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #584 = ROL
  { 585,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #585 = ROLImm
  { 586,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #586 = ROR
  { 587,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #587 = RORImm
  { 588,	0,	0,	4,	382,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, nullptr },  // Inst #588 = RetRA
  { 589,	0,	0,	2,	940,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #589 = RetRA16
  { 590,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo156 },  // Inst #590 = SDC1_M1
  { 591,	3,	1,	4,	885,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo140 },  // Inst #591 = SDIV_MM_Pseudo
  { 592,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo94 },  // Inst #592 = SDMacro
  { 593,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #593 = SDivIMacro
  { 594,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo157 },  // Inst #594 = SDivMacro
  { 595,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #595 = SEQIMacro
  { 596,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #596 = SEQMacro
  { 597,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #597 = SGE
  { 598,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #598 = SGEImm
  { 599,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #599 = SGEImm64
  { 600,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #600 = SGEU
  { 601,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #601 = SGEUImm
  { 602,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #602 = SGEUImm64
  { 603,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #603 = SGTImm
  { 604,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #604 = SGTImm64
  { 605,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #605 = SGTUImm
  { 606,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #606 = SGTUImm64
  { 607,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #607 = SLE
  { 608,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #608 = SLEImm
  { 609,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #609 = SLEImm64
  { 610,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #610 = SLEU
  { 611,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #611 = SLEUImm
  { 612,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #612 = SLEUImm64
  { 613,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #613 = SLTImm64
  { 614,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #614 = SLTUImm64
  { 615,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #615 = SNEIMacro
  { 616,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #616 = SNEMacro
  { 617,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo158 },  // Inst #617 = SNZ_B_PSEUDO
  { 618,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo159 },  // Inst #618 = SNZ_D_PSEUDO
  { 619,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo160 },  // Inst #619 = SNZ_H_PSEUDO
  { 620,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo158 },  // Inst #620 = SNZ_V_PSEUDO
  { 621,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo161 },  // Inst #621 = SNZ_W_PSEUDO
  { 622,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #622 = SRemIMacro
  { 623,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #623 = SRemMacro
  { 624,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo98 },  // Inst #624 = STORE_ACC128
  { 625,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo99 },  // Inst #625 = STORE_ACC64
  { 626,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo100 },  // Inst #626 = STORE_ACC64DSP
  { 627,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo101 },  // Inst #627 = STORE_CCOND_DSP
  { 628,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo95 },  // Inst #628 = STR_D
  { 629,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo96 },  // Inst #629 = STR_W
  { 630,	3,	0,	4,	705,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo97 },  // Inst #630 = ST_F16
  { 631,	3,	0,	4,	1136,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #631 = SWM_MM
  { 632,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo158 },  // Inst #632 = SZ_B_PSEUDO
  { 633,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo159 },  // Inst #633 = SZ_D_PSEUDO
  { 634,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo160 },  // Inst #634 = SZ_H_PSEUDO
  { 635,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo158 },  // Inst #635 = SZ_V_PSEUDO
  { 636,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo161 },  // Inst #636 = SZ_W_PSEUDO
  { 637,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo111 },  // Inst #637 = SaaAddr
  { 638,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo111 },  // Inst #638 = SaadAddr
  { 639,	4,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo162 },  // Inst #639 = SelBeqZ
  { 640,	4,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo162 },  // Inst #640 = SelBneZ
  { 641,	5,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo163 },  // Inst #641 = SelTBteqZCmp
  { 642,	5,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo164 },  // Inst #642 = SelTBteqZCmpi
  { 643,	5,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo163 },  // Inst #643 = SelTBteqZSlt
  { 644,	5,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo164 },  // Inst #644 = SelTBteqZSlti
  { 645,	5,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo164 },  // Inst #645 = SelTBteqZSltiu
  { 646,	5,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo163 },  // Inst #646 = SelTBteqZSltu
  { 647,	5,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo163 },  // Inst #647 = SelTBtneZCmp
  { 648,	5,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo164 },  // Inst #648 = SelTBtneZCmpi
  { 649,	5,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo163 },  // Inst #649 = SelTBtneZSlt
  { 650,	5,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo164 },  // Inst #650 = SelTBtneZSlti
  { 651,	5,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo164 },  // Inst #651 = SelTBtneZSltiu
  { 652,	5,	1,	2,	944,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo163 },  // Inst #652 = SelTBtneZSltu
  { 653,	3,	1,	2,	736,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo129 },  // Inst #653 = SltCCRxRy16
  { 654,	3,	1,	2,	736,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo165 },  // Inst #654 = SltiCCRxImmX16
  { 655,	3,	1,	2,	736,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo165 },  // Inst #655 = SltiuCCRxImmX16
  { 656,	3,	1,	2,	736,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo129 },  // Inst #656 = SltuCCRxRy16
  { 657,	3,	1,	2,	736,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo129 },  // Inst #657 = SltuRxRyRz16
  { 658,	1,	0,	4,	384,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList2, OperandInfo2 },  // Inst #658 = TAILCALL
  { 659,	1,	0,	4,	1023,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::HasPostISelHook)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList2, OperandInfo93 },  // Inst #659 = TAILCALL64R6REG
  { 660,	1,	0,	4,	1023,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::HasPostISelHook)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList2, OperandInfo93 },  // Inst #660 = TAILCALLHB64R6REG
  { 661,	1,	0,	4,	937,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::HasPostISelHook)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList2, OperandInfo56 },  // Inst #661 = TAILCALLHBR6REG
  { 662,	1,	0,	4,	937,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::HasPostISelHook)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList2, OperandInfo56 },  // Inst #662 = TAILCALLR6REG
  { 663,	1,	0,	4,	385,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::HasPostISelHook)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList2, OperandInfo56 },  // Inst #663 = TAILCALLREG
  { 664,	1,	0,	4,	1015,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::HasPostISelHook)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList2, OperandInfo93 },  // Inst #664 = TAILCALLREG64
  { 665,	1,	0,	4,	385,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::HasPostISelHook)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList2, OperandInfo56 },  // Inst #665 = TAILCALLREGHB
  { 666,	1,	0,	4,	1015,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::HasPostISelHook)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList2, OperandInfo93 },  // Inst #666 = TAILCALLREGHB64
  { 667,	1,	0,	4,	963,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::HasPostISelHook)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList2, OperandInfo56 },  // Inst #667 = TAILCALLREG_MM
  { 668,	1,	0,	4,	1005,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::HasPostISelHook)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList2, OperandInfo56 },  // Inst #668 = TAILCALLREG_MMR6
  { 669,	1,	0,	4,	964,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList2, OperandInfo2 },  // Inst #669 = TAILCALL_MM
  { 670,	1,	0,	4,	1006,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList2, OperandInfo2 },  // Inst #670 = TAILCALL_MMR6
  { 671,	0,	0,	4,	402,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Trap)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #671 = TRAP
  { 672,	0,	0,	4,	981,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Trap)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #672 = TRAP_MM
  { 673,	3,	1,	4,	886,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo140 },  // Inst #673 = UDIV_MM_Pseudo
  { 674,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #674 = UDivIMacro
  { 675,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #675 = UDivMacro
  { 676,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #676 = URemIMacro
  { 677,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #677 = URemMacro
  { 678,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo94 },  // Inst #678 = Ulh
  { 679,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo94 },  // Inst #679 = Ulhu
  { 680,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo94 },  // Inst #680 = Ulw
  { 681,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo94 },  // Inst #681 = Ush
  { 682,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo94 },  // Inst #682 = Usw
  { 683,	3,	1,	4,	550,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #683 = XOR_V_D_PSEUDO
  { 684,	3,	1,	4,	550,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo45 },  // Inst #684 = XOR_V_H_PSEUDO
  { 685,	3,	1,	4,	550,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #685 = XOR_V_W_PSEUDO
  { 686,	2,	1,	4,	1357,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo166 },  // Inst #686 = ABSQ_S_PH
  { 687,	2,	1,	4,	1508,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo166 },  // Inst #687 = ABSQ_S_PH_MM
  { 688,	2,	1,	4,	1460,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo166 },  // Inst #688 = ABSQ_S_QB
  { 689,	2,	1,	4,	1624,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo166 },  // Inst #689 = ABSQ_S_QB_MMR2
  { 690,	2,	1,	4,	1358,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo43 },  // Inst #690 = ABSQ_S_W
  { 691,	2,	1,	4,	1509,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo43 },  // Inst #691 = ABSQ_S_W_MM
  { 692,	3,	1,	4,	496,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #692 = ADD
  { 693,	2,	1,	4,	725,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #693 = ADDIUPC
  { 694,	2,	1,	4,	738,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo167 },  // Inst #694 = ADDIUPC_MM
  { 695,	2,	1,	4,	774,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #695 = ADDIUPC_MMR6
  { 696,	2,	1,	2,	738,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo167 },  // Inst #696 = ADDIUR1SP_MM
  { 697,	3,	1,	2,	738,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo168 },  // Inst #697 = ADDIUR2_MM
  { 698,	3,	1,	2,	738,	0, 0x0ULL, nullptr, nullptr, OperandInfo169 },  // Inst #698 = ADDIUS5_MM
  { 699,	1,	0,	2,	738,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #699 = ADDIUSP_MM
  { 700,	3,	1,	4,	775,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #700 = ADDIU_MMR6
  { 701,	3,	1,	4,	1461,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #701 = ADDQH_PH
  { 702,	3,	1,	4,	1625,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #702 = ADDQH_PH_MMR2
  { 703,	3,	1,	4,	1462,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #703 = ADDQH_R_PH
  { 704,	3,	1,	4,	1626,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #704 = ADDQH_R_PH_MMR2
  { 705,	3,	1,	4,	1463,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #705 = ADDQH_R_W
  { 706,	3,	1,	4,	1627,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #706 = ADDQH_R_W_MMR2
  { 707,	3,	1,	4,	1464,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #707 = ADDQH_W
  { 708,	3,	1,	4,	1628,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #708 = ADDQH_W_MMR2
  { 709,	3,	1,	4,	1359,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #709 = ADDQ_PH
  { 710,	3,	1,	4,	1510,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #710 = ADDQ_PH_MM
  { 711,	3,	1,	4,	1360,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #711 = ADDQ_S_PH
  { 712,	3,	1,	4,	1511,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #712 = ADDQ_S_PH_MM
  { 713,	3,	1,	4,	1361,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo70 },  // Inst #713 = ADDQ_S_W
  { 714,	3,	1,	4,	1512,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo70 },  // Inst #714 = ADDQ_S_W_MM
  { 715,	3,	1,	4,	1211,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #715 = ADDR_PS64
  { 716,	3,	1,	4,	1362,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList9, OperandInfo70 },  // Inst #716 = ADDSC
  { 717,	3,	1,	4,	1513,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList9, OperandInfo70 },  // Inst #717 = ADDSC_MM
  { 718,	3,	1,	4,	539,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #718 = ADDS_A_B
  { 719,	3,	1,	4,	539,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #719 = ADDS_A_D
  { 720,	3,	1,	4,	539,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #720 = ADDS_A_H
  { 721,	3,	1,	4,	539,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #721 = ADDS_A_W
  { 722,	3,	1,	4,	539,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #722 = ADDS_S_B
  { 723,	3,	1,	4,	539,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #723 = ADDS_S_D
  { 724,	3,	1,	4,	539,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #724 = ADDS_S_H
  { 725,	3,	1,	4,	539,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #725 = ADDS_S_W
  { 726,	3,	1,	4,	539,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #726 = ADDS_U_B
  { 727,	3,	1,	4,	539,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #727 = ADDS_U_D
  { 728,	3,	1,	4,	539,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #728 = ADDS_U_H
  { 729,	3,	1,	4,	539,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #729 = ADDS_U_W
  { 730,	3,	1,	2,	739,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo173 },  // Inst #730 = ADDU16_MM
  { 731,	3,	1,	2,	776,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo173 },  // Inst #731 = ADDU16_MMR6
  { 732,	3,	1,	4,	1465,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #732 = ADDUH_QB
  { 733,	3,	1,	4,	1629,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #733 = ADDUH_QB_MMR2
  { 734,	3,	1,	4,	1466,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #734 = ADDUH_R_QB
  { 735,	3,	1,	4,	1630,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #735 = ADDUH_R_QB_MMR2
  { 736,	3,	1,	4,	776,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #736 = ADDU_MMR6
  { 737,	3,	1,	4,	1467,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #737 = ADDU_PH
  { 738,	3,	1,	4,	1631,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #738 = ADDU_PH_MMR2
  { 739,	3,	1,	4,	1363,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #739 = ADDU_QB
  { 740,	3,	1,	4,	1514,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #740 = ADDU_QB_MM
  { 741,	3,	1,	4,	1468,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #741 = ADDU_S_PH
  { 742,	3,	1,	4,	1632,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #742 = ADDU_S_PH_MMR2
  { 743,	3,	1,	4,	1364,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #743 = ADDU_S_QB
  { 744,	3,	1,	4,	1515,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #744 = ADDU_S_QB_MM
  { 745,	3,	1,	4,	540,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #745 = ADDVI_B
  { 746,	3,	1,	4,	540,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #746 = ADDVI_D
  { 747,	3,	1,	4,	540,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #747 = ADDVI_H
  { 748,	3,	1,	4,	540,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #748 = ADDVI_W
  { 749,	3,	1,	4,	540,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #749 = ADDV_B
  { 750,	3,	1,	4,	540,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #750 = ADDV_D
  { 751,	3,	1,	4,	540,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #751 = ADDV_H
  { 752,	3,	1,	4,	540,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #752 = ADDV_W
  { 753,	3,	1,	4,	1365,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList9, ImplicitList8, OperandInfo70 },  // Inst #753 = ADDWC
  { 754,	3,	1,	4,	1516,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList9, ImplicitList8, OperandInfo70 },  // Inst #754 = ADDWC_MM
  { 755,	3,	1,	4,	538,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #755 = ADD_A_B
  { 756,	3,	1,	4,	538,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #756 = ADD_A_D
  { 757,	3,	1,	4,	538,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #757 = ADD_A_H
  { 758,	3,	1,	4,	538,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #758 = ADD_A_W
  { 759,	3,	1,	4,	740,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #759 = ADD_MM
  { 760,	3,	1,	4,	777,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #760 = ADD_MMR6
  { 761,	3,	1,	4,	497,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #761 = ADDi
  { 762,	3,	1,	4,	741,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #762 = ADDi_MM
  { 763,	3,	1,	4,	498,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #763 = ADDiu
  { 764,	3,	1,	4,	738,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #764 = ADDiu_MM
  { 765,	3,	1,	4,	509,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #765 = ADDu
  { 766,	3,	1,	4,	739,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #766 = ADDu_MM
  { 767,	4,	1,	4,	726,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo178 },  // Inst #767 = ALIGN
  { 768,	4,	1,	4,	778,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo178 },  // Inst #768 = ALIGN_MMR6
  { 769,	2,	1,	4,	727,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #769 = ALUIPC
  { 770,	2,	1,	4,	779,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #770 = ALUIPC_MMR6
  { 771,	3,	1,	4,	364,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #771 = AND
  { 772,	3,	1,	2,	742,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo179 },  // Inst #772 = AND16_MM
  { 773,	3,	1,	2,	780,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo179 },  // Inst #773 = AND16_MMR6
  { 774,	3,	1,	4,	806,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo69 },  // Inst #774 = AND64
  { 775,	3,	1,	2,	742,	0, 0x0ULL, nullptr, nullptr, OperandInfo168 },  // Inst #775 = ANDI16_MM
  { 776,	3,	1,	2,	780,	0, 0x0ULL, nullptr, nullptr, OperandInfo168 },  // Inst #776 = ANDI16_MMR6
  { 777,	3,	1,	4,	549,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #777 = ANDI_B
  { 778,	3,	1,	4,	781,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #778 = ANDI_MMR6
  { 779,	3,	1,	4,	742,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #779 = AND_MM
  { 780,	3,	1,	4,	780,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #780 = AND_MMR6
  { 781,	3,	1,	4,	548,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #781 = AND_V
  { 782,	3,	1,	4,	499,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #782 = ANDi
  { 783,	3,	1,	4,	806,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo68 },  // Inst #783 = ANDi64
  { 784,	3,	1,	4,	743,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #784 = ANDi_MM
  { 785,	4,	1,	4,	1469,	0, 0x6ULL, nullptr, nullptr, OperandInfo180 },  // Inst #785 = APPEND
  { 786,	4,	1,	4,	1633,	0, 0x6ULL, nullptr, nullptr, OperandInfo180 },  // Inst #786 = APPEND_MMR2
  { 787,	3,	1,	4,	541,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #787 = ASUB_S_B
  { 788,	3,	1,	4,	541,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #788 = ASUB_S_D
  { 789,	3,	1,	4,	541,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #789 = ASUB_S_H
  { 790,	3,	1,	4,	541,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #790 = ASUB_S_W
  { 791,	3,	1,	4,	541,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #791 = ASUB_U_B
  { 792,	3,	1,	4,	541,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #792 = ASUB_U_D
  { 793,	3,	1,	4,	541,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #793 = ASUB_U_H
  { 794,	3,	1,	4,	541,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #794 = ASUB_U_W
  { 795,	3,	1,	4,	728,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo71 },  // Inst #795 = AUI
  { 796,	2,	1,	4,	729,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #796 = AUIPC
  { 797,	2,	1,	4,	782,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #797 = AUIPC_MMR6
  { 798,	3,	1,	4,	783,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo71 },  // Inst #798 = AUI_MMR6
  { 799,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #799 = AVER_S_B
  { 800,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #800 = AVER_S_D
  { 801,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #801 = AVER_S_H
  { 802,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #802 = AVER_S_W
  { 803,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #803 = AVER_U_B
  { 804,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #804 = AVER_U_D
  { 805,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #805 = AVER_U_H
  { 806,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #806 = AVER_U_W
  { 807,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #807 = AVE_S_B
  { 808,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #808 = AVE_S_D
  { 809,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #809 = AVE_S_H
  { 810,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #810 = AVE_S_W
  { 811,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #811 = AVE_U_B
  { 812,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #812 = AVE_U_D
  { 813,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #813 = AVE_U_H
  { 814,	3,	1,	4,	542,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #814 = AVE_U_W
  { 815,	2,	1,	4,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo181 },  // Inst #815 = AddiuRxImmX16
  { 816,	2,	1,	4,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo181 },  // Inst #816 = AddiuRxPcImmX16
  { 817,	3,	1,	2,	735,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo182 },  // Inst #817 = AddiuRxRxImm16
  { 818,	3,	1,	4,	735,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo182 },  // Inst #818 = AddiuRxRxImmX16
  { 819,	3,	1,	4,	735,	0, 0x0ULL, nullptr, nullptr, OperandInfo183 },  // Inst #819 = AddiuRxRyOffMemX16
  { 820,	1,	0,	2,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #820 = AddiuSpImm16
  { 821,	1,	0,	4,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #821 = AddiuSpImmX16
  { 822,	3,	1,	2,	735,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo129 },  // Inst #822 = AdduRxRyRz16
  { 823,	3,	1,	2,	735,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo184 },  // Inst #823 = AndRxRxRy16
  { 824,	1,	0,	2,	945,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList2, OperandInfo53 },  // Inst #824 = B16_MM
  { 825,	3,	1,	4,	1198,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo69 },  // Inst #825 = BADDu
  { 826,	1,	0,	4,	375,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList3, OperandInfo53 },  // Inst #826 = BAL
  { 827,	1,	0,	4,	926,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList3, OperandInfo53 },  // Inst #827 = BALC
  { 828,	1,	0,	4,	999,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList3, OperandInfo53 },  // Inst #828 = BALC_MMR6
  { 829,	4,	1,	4,	1470,	0, 0x6ULL, nullptr, nullptr, OperandInfo180 },  // Inst #829 = BALIGN
  { 830,	4,	1,	4,	1634,	0, 0x6ULL, nullptr, nullptr, OperandInfo180 },  // Inst #830 = BALIGN_MMR2
  { 831,	3,	0,	4,	1199,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList2, OperandInfo185 },  // Inst #831 = BBIT0
  { 832,	3,	0,	4,	1199,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList2, OperandInfo185 },  // Inst #832 = BBIT032
  { 833,	3,	0,	4,	1199,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList2, OperandInfo185 },  // Inst #833 = BBIT1
  { 834,	3,	0,	4,	1199,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList2, OperandInfo185 },  // Inst #834 = BBIT132
  { 835,	1,	0,	4,	929,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo53 },  // Inst #835 = BC
  { 836,	1,	0,	2,	982,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList2, OperandInfo53 },  // Inst #836 = BC16_MMR6
  { 837,	2,	0,	4,	1231,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo186 },  // Inst #837 = BC1EQZ
  { 838,	2,	0,	4,	983,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList2, OperandInfo186 },  // Inst #838 = BC1EQZC_MMR6
  { 839,	2,	0,	4,	690,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x45ULL, nullptr, ImplicitList2, OperandInfo187 },  // Inst #839 = BC1F
  { 840,	2,	0,	4,	691,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x45ULL, nullptr, ImplicitList2, OperandInfo187 },  // Inst #840 = BC1FL
  { 841,	2,	0,	4,	947,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x45ULL, nullptr, ImplicitList2, OperandInfo187 },  // Inst #841 = BC1F_MM
  { 842,	2,	0,	4,	1231,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo186 },  // Inst #842 = BC1NEZ
  { 843,	2,	0,	4,	983,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList2, OperandInfo186 },  // Inst #843 = BC1NEZC_MMR6
  { 844,	2,	0,	4,	692,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x45ULL, nullptr, ImplicitList2, OperandInfo187 },  // Inst #844 = BC1T
  { 845,	2,	0,	4,	693,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x45ULL, nullptr, ImplicitList2, OperandInfo187 },  // Inst #845 = BC1TL
  { 846,	2,	0,	4,	948,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x45ULL, nullptr, ImplicitList2, OperandInfo187 },  // Inst #846 = BC1T_MM
  { 847,	2,	0,	4,	930,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo188 },  // Inst #847 = BC2EQZ
  { 848,	2,	0,	4,	984,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo188 },  // Inst #848 = BC2EQZC_MMR6
  { 849,	2,	0,	4,	930,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo188 },  // Inst #849 = BC2NEZ
  { 850,	2,	0,	4,	984,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo188 },  // Inst #850 = BC2NEZC_MMR6
  { 851,	3,	1,	4,	521,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #851 = BCLRI_B
  { 852,	3,	1,	4,	521,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #852 = BCLRI_D
  { 853,	3,	1,	4,	521,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #853 = BCLRI_H
  { 854,	3,	1,	4,	521,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #854 = BCLRI_W
  { 855,	3,	1,	4,	521,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #855 = BCLR_B
  { 856,	3,	1,	4,	521,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #856 = BCLR_D
  { 857,	3,	1,	4,	521,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #857 = BCLR_H
  { 858,	3,	1,	4,	521,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #858 = BCLR_W
  { 859,	1,	0,	4,	982,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x16ULL, nullptr, nullptr, OperandInfo53 },  // Inst #859 = BC_MMR6
  { 860,	3,	0,	4,	920,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #860 = BEQ
  { 861,	3,	0,	4,	1009,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo104 },  // Inst #861 = BEQ64
  { 862,	3,	0,	4,	931,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #862 = BEQC
  { 863,	3,	0,	4,	1017,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo104 },  // Inst #863 = BEQC64
  { 864,	3,	0,	4,	985,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #864 = BEQC_MMR6
  { 865,	3,	0,	4,	377,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #865 = BEQL
  { 866,	2,	0,	2,	949,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList2, OperandInfo189 },  // Inst #866 = BEQZ16_MM
  { 867,	2,	0,	4,	927,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #867 = BEQZALC
  { 868,	2,	0,	4,	1000,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #868 = BEQZALC_MMR6
  { 869,	2,	0,	4,	932,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #869 = BEQZC
  { 870,	2,	0,	2,	986,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList2, OperandInfo189 },  // Inst #870 = BEQZC16_MMR6
  { 871,	2,	0,	4,	1018,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo107 },  // Inst #871 = BEQZC64
  { 872,	2,	0,	4,	950,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #872 = BEQZC_MM
  { 873,	2,	0,	4,	987,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x36ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #873 = BEQZC_MMR6
  { 874,	3,	0,	4,	951,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #874 = BEQ_MM
  { 875,	3,	0,	4,	931,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #875 = BGEC
  { 876,	3,	0,	4,	1017,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo104 },  // Inst #876 = BGEC64
  { 877,	3,	0,	4,	985,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #877 = BGEC_MMR6
  { 878,	3,	0,	4,	931,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #878 = BGEUC
  { 879,	3,	0,	4,	1017,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo104 },  // Inst #879 = BGEUC64
  { 880,	3,	0,	4,	985,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #880 = BGEUC_MMR6
  { 881,	2,	0,	4,	921,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #881 = BGEZ
  { 882,	2,	0,	4,	1010,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo107 },  // Inst #882 = BGEZ64
  { 883,	2,	0,	4,	925,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #883 = BGEZAL
  { 884,	2,	0,	4,	927,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #884 = BGEZALC
  { 885,	2,	0,	4,	1000,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #885 = BGEZALC_MMR6
  { 886,	2,	0,	4,	376,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #886 = BGEZALL
  { 887,	2,	0,	4,	957,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #887 = BGEZALS_MM
  { 888,	2,	0,	4,	958,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #888 = BGEZAL_MM
  { 889,	2,	0,	4,	932,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #889 = BGEZC
  { 890,	2,	0,	4,	1018,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo107 },  // Inst #890 = BGEZC64
  { 891,	2,	0,	4,	987,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #891 = BGEZC_MMR6
  { 892,	2,	0,	4,	378,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #892 = BGEZL
  { 893,	2,	0,	4,	949,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #893 = BGEZ_MM
  { 894,	2,	0,	4,	921,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #894 = BGTZ
  { 895,	2,	0,	4,	1010,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo107 },  // Inst #895 = BGTZ64
  { 896,	2,	0,	4,	927,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #896 = BGTZALC
  { 897,	2,	0,	4,	1000,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #897 = BGTZALC_MMR6
  { 898,	2,	0,	4,	932,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #898 = BGTZC
  { 899,	2,	0,	4,	1018,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo107 },  // Inst #899 = BGTZC64
  { 900,	2,	0,	4,	987,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #900 = BGTZC_MMR6
  { 901,	2,	0,	4,	378,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #901 = BGTZL
  { 902,	2,	0,	4,	949,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #902 = BGTZ_MM
  { 903,	4,	1,	4,	516,	0, 0x6ULL, nullptr, nullptr, OperandInfo190 },  // Inst #903 = BINSLI_B
  { 904,	4,	1,	4,	516,	0, 0x6ULL, nullptr, nullptr, OperandInfo191 },  // Inst #904 = BINSLI_D
  { 905,	4,	1,	4,	516,	0, 0x6ULL, nullptr, nullptr, OperandInfo192 },  // Inst #905 = BINSLI_H
  { 906,	4,	1,	4,	516,	0, 0x6ULL, nullptr, nullptr, OperandInfo193 },  // Inst #906 = BINSLI_W
  { 907,	4,	1,	4,	516,	0, 0x6ULL, nullptr, nullptr, OperandInfo194 },  // Inst #907 = BINSL_B
  { 908,	4,	1,	4,	516,	0, 0x6ULL, nullptr, nullptr, OperandInfo57 },  // Inst #908 = BINSL_D
  { 909,	4,	1,	4,	516,	0, 0x6ULL, nullptr, nullptr, OperandInfo59 },  // Inst #909 = BINSL_H
  { 910,	4,	1,	4,	516,	0, 0x6ULL, nullptr, nullptr, OperandInfo58 },  // Inst #910 = BINSL_W
  { 911,	4,	1,	4,	517,	0, 0x6ULL, nullptr, nullptr, OperandInfo190 },  // Inst #911 = BINSRI_B
  { 912,	4,	1,	4,	517,	0, 0x6ULL, nullptr, nullptr, OperandInfo191 },  // Inst #912 = BINSRI_D
  { 913,	4,	1,	4,	517,	0, 0x6ULL, nullptr, nullptr, OperandInfo192 },  // Inst #913 = BINSRI_H
  { 914,	4,	1,	4,	517,	0, 0x6ULL, nullptr, nullptr, OperandInfo193 },  // Inst #914 = BINSRI_W
  { 915,	4,	1,	4,	517,	0, 0x6ULL, nullptr, nullptr, OperandInfo194 },  // Inst #915 = BINSR_B
  { 916,	4,	1,	4,	517,	0, 0x6ULL, nullptr, nullptr, OperandInfo57 },  // Inst #916 = BINSR_D
  { 917,	4,	1,	4,	517,	0, 0x6ULL, nullptr, nullptr, OperandInfo59 },  // Inst #917 = BINSR_H
  { 918,	4,	1,	4,	517,	0, 0x6ULL, nullptr, nullptr, OperandInfo58 },  // Inst #918 = BINSR_W
  { 919,	2,	1,	4,	1366,	0, 0x6ULL, nullptr, nullptr, OperandInfo43 },  // Inst #919 = BITREV
  { 920,	2,	1,	4,	1517,	0, 0x6ULL, nullptr, nullptr, OperandInfo43 },  // Inst #920 = BITREV_MM
  { 921,	2,	1,	4,	730,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo43 },  // Inst #921 = BITSWAP
  { 922,	2,	1,	4,	784,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo43 },  // Inst #922 = BITSWAP_MMR6
  { 923,	2,	0,	4,	921,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #923 = BLEZ
  { 924,	2,	0,	4,	1010,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo107 },  // Inst #924 = BLEZ64
  { 925,	2,	0,	4,	927,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #925 = BLEZALC
  { 926,	2,	0,	4,	1000,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #926 = BLEZALC_MMR6
  { 927,	2,	0,	4,	932,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #927 = BLEZC
  { 928,	2,	0,	4,	1018,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo107 },  // Inst #928 = BLEZC64
  { 929,	2,	0,	4,	987,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #929 = BLEZC_MMR6
  { 930,	2,	0,	4,	378,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #930 = BLEZL
  { 931,	2,	0,	4,	949,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #931 = BLEZ_MM
  { 932,	3,	0,	4,	931,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #932 = BLTC
  { 933,	3,	0,	4,	1017,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo104 },  // Inst #933 = BLTC64
  { 934,	3,	0,	4,	985,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #934 = BLTC_MMR6
  { 935,	3,	0,	4,	931,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #935 = BLTUC
  { 936,	3,	0,	4,	1017,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo104 },  // Inst #936 = BLTUC64
  { 937,	3,	0,	4,	985,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #937 = BLTUC_MMR6
  { 938,	2,	0,	4,	921,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #938 = BLTZ
  { 939,	2,	0,	4,	1010,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo107 },  // Inst #939 = BLTZ64
  { 940,	2,	0,	4,	919,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #940 = BLTZAL
  { 941,	2,	0,	4,	927,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #941 = BLTZALC
  { 942,	2,	0,	4,	1000,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #942 = BLTZALC_MMR6
  { 943,	2,	0,	4,	376,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #943 = BLTZALL
  { 944,	2,	0,	4,	957,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #944 = BLTZALS_MM
  { 945,	2,	0,	4,	958,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #945 = BLTZAL_MM
  { 946,	2,	0,	4,	932,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #946 = BLTZC
  { 947,	2,	0,	4,	1018,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo107 },  // Inst #947 = BLTZC64
  { 948,	2,	0,	4,	987,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #948 = BLTZC_MMR6
  { 949,	2,	0,	4,	378,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #949 = BLTZL
  { 950,	2,	0,	4,	949,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #950 = BLTZ_MM
  { 951,	4,	1,	4,	524,	0, 0x6ULL, nullptr, nullptr, OperandInfo190 },  // Inst #951 = BMNZI_B
  { 952,	4,	1,	4,	524,	0, 0x6ULL, nullptr, nullptr, OperandInfo194 },  // Inst #952 = BMNZ_V
  { 953,	4,	1,	4,	524,	0, 0x6ULL, nullptr, nullptr, OperandInfo190 },  // Inst #953 = BMZI_B
  { 954,	4,	1,	4,	524,	0, 0x6ULL, nullptr, nullptr, OperandInfo194 },  // Inst #954 = BMZ_V
  { 955,	3,	0,	4,	920,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #955 = BNE
  { 956,	3,	0,	4,	1009,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo104 },  // Inst #956 = BNE64
  { 957,	3,	0,	4,	931,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #957 = BNEC
  { 958,	3,	0,	4,	1017,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo104 },  // Inst #958 = BNEC64
  { 959,	3,	0,	4,	985,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #959 = BNEC_MMR6
  { 960,	3,	1,	4,	522,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #960 = BNEGI_B
  { 961,	3,	1,	4,	522,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #961 = BNEGI_D
  { 962,	3,	1,	4,	522,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #962 = BNEGI_H
  { 963,	3,	1,	4,	522,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #963 = BNEGI_W
  { 964,	3,	1,	4,	522,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #964 = BNEG_B
  { 965,	3,	1,	4,	522,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #965 = BNEG_D
  { 966,	3,	1,	4,	522,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #966 = BNEG_H
  { 967,	3,	1,	4,	522,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #967 = BNEG_W
  { 968,	3,	0,	4,	377,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #968 = BNEL
  { 969,	2,	0,	2,	949,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList2, OperandInfo189 },  // Inst #969 = BNEZ16_MM
  { 970,	2,	0,	4,	927,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #970 = BNEZALC
  { 971,	2,	0,	4,	1000,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList3, OperandInfo106 },  // Inst #971 = BNEZALC_MMR6
  { 972,	2,	0,	4,	932,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #972 = BNEZC
  { 973,	2,	0,	2,	986,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList2, OperandInfo189 },  // Inst #973 = BNEZC16_MMR6
  { 974,	2,	0,	4,	1018,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo107 },  // Inst #974 = BNEZC64
  { 975,	2,	0,	4,	950,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #975 = BNEZC_MM
  { 976,	2,	0,	4,	987,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x36ULL, nullptr, ImplicitList2, OperandInfo106 },  // Inst #976 = BNEZC_MMR6
  { 977,	3,	0,	4,	951,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #977 = BNE_MM
  { 978,	3,	0,	4,	931,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #978 = BNVC
  { 979,	3,	0,	4,	985,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #979 = BNVC_MMR6
  { 980,	2,	0,	4,	528,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo195 },  // Inst #980 = BNZ_B
  { 981,	2,	0,	4,	528,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo196 },  // Inst #981 = BNZ_D
  { 982,	2,	0,	4,	528,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo197 },  // Inst #982 = BNZ_H
  { 983,	2,	0,	4,	528,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo195 },  // Inst #983 = BNZ_V
  { 984,	2,	0,	4,	528,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo198 },  // Inst #984 = BNZ_W
  { 985,	3,	0,	4,	931,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #985 = BOVC
  { 986,	3,	0,	4,	985,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo55 },  // Inst #986 = BOVC_MMR6
  { 987,	1,	0,	4,	1367,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo53 },  // Inst #987 = BPOSGE32
  { 988,	1,	0,	4,	1670,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo53 },  // Inst #988 = BPOSGE32C_MMR3
  { 989,	1,	0,	4,	1518,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo53 },  // Inst #989 = BPOSGE32_MM
  { 990,	2,	0,	4,	379,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo7 },  // Inst #990 = BREAK
  { 991,	1,	0,	2,	966,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #991 = BREAK16_MM
  { 992,	1,	0,	2,	1007,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #992 = BREAK16_MMR6
  { 993,	2,	0,	4,	966,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo7 },  // Inst #993 = BREAK_MM
  { 994,	2,	0,	4,	1007,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo7 },  // Inst #994 = BREAK_MMR6
  { 995,	4,	1,	4,	523,	0, 0x6ULL, nullptr, nullptr, OperandInfo190 },  // Inst #995 = BSELI_B
  { 996,	4,	1,	4,	523,	0, 0x6ULL, nullptr, nullptr, OperandInfo194 },  // Inst #996 = BSEL_V
  { 997,	3,	1,	4,	520,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #997 = BSETI_B
  { 998,	3,	1,	4,	520,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #998 = BSETI_D
  { 999,	3,	1,	4,	520,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #999 = BSETI_H
  { 1000,	3,	1,	4,	520,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #1000 = BSETI_W
  { 1001,	3,	1,	4,	520,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1001 = BSET_B
  { 1002,	3,	1,	4,	520,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1002 = BSET_D
  { 1003,	3,	1,	4,	520,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1003 = BSET_H
  { 1004,	3,	1,	4,	520,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1004 = BSET_W
  { 1005,	2,	0,	4,	528,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo195 },  // Inst #1005 = BZ_B
  { 1006,	2,	0,	4,	528,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo196 },  // Inst #1006 = BZ_D
  { 1007,	2,	0,	4,	528,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo197 },  // Inst #1007 = BZ_H
  { 1008,	2,	0,	4,	528,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo195 },  // Inst #1008 = BZ_V
  { 1009,	2,	0,	4,	528,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo198 },  // Inst #1009 = BZ_W
  { 1010,	2,	0,	2,	939,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo199 },  // Inst #1010 = BeqzRxImm16
  { 1011,	2,	0,	4,	939,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo199 },  // Inst #1011 = BeqzRxImmX16
  { 1012,	1,	0,	2,	939,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #1012 = Bimm16
  { 1013,	1,	0,	4,	939,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #1013 = BimmX16
  { 1014,	2,	0,	2,	939,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo199 },  // Inst #1014 = BnezRxImm16
  { 1015,	2,	0,	4,	939,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo199 },  // Inst #1015 = BnezRxImmX16
  { 1016,	0,	0,	2,	943,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #1016 = Break16
  { 1017,	1,	0,	2,	939,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo2 },  // Inst #1017 = Bteqz16
  { 1018,	1,	0,	4,	939,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo2 },  // Inst #1018 = BteqzX16
  { 1019,	1,	0,	2,	939,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo2 },  // Inst #1019 = Btnez16
  { 1020,	1,	0,	4,	939,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo2 },  // Inst #1020 = BtnezX16
  { 1021,	3,	0,	4,	470,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo200 },  // Inst #1021 = CACHE
  { 1022,	3,	0,	4,	471,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo200 },  // Inst #1022 = CACHEE
  { 1023,	3,	0,	4,	1107,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo200 },  // Inst #1023 = CACHEE_MM
  { 1024,	3,	0,	4,	1140,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo200 },  // Inst #1024 = CACHE_MM
  { 1025,	3,	0,	4,	1162,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo200 },  // Inst #1025 = CACHE_MMR6
  { 1026,	3,	0,	4,	1088,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo200 },  // Inst #1026 = CACHE_R6
  { 1027,	2,	1,	4,	717,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1027 = CEIL_L_D64
  { 1028,	2,	1,	4,	1311,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1028 = CEIL_L_D_MMR6
  { 1029,	2,	1,	4,	717,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #1029 = CEIL_L_S
  { 1030,	2,	1,	4,	1311,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #1030 = CEIL_L_S_MMR6
  { 1031,	2,	1,	4,	717,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #1031 = CEIL_W_D32
  { 1032,	2,	1,	4,	717,	0, 0x4ULL, nullptr, nullptr, OperandInfo204 },  // Inst #1032 = CEIL_W_D64
  { 1033,	2,	1,	4,	1311,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #1033 = CEIL_W_D_MMR6
  { 1034,	2,	1,	4,	1247,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #1034 = CEIL_W_MM
  { 1035,	2,	1,	4,	717,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1035 = CEIL_W_S
  { 1036,	2,	1,	4,	1247,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1036 = CEIL_W_S_MM
  { 1037,	2,	1,	4,	1311,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1037 = CEIL_W_S_MMR6
  { 1038,	3,	1,	4,	556,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #1038 = CEQI_B
  { 1039,	3,	1,	4,	556,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #1039 = CEQI_D
  { 1040,	3,	1,	4,	556,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #1040 = CEQI_H
  { 1041,	3,	1,	4,	556,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #1041 = CEQI_W
  { 1042,	3,	1,	4,	556,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1042 = CEQ_B
  { 1043,	3,	1,	4,	556,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1043 = CEQ_D
  { 1044,	3,	1,	4,	556,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1044 = CEQ_H
  { 1045,	3,	1,	4,	556,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1045 = CEQ_W
  { 1046,	2,	1,	4,	694,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206 },  // Inst #1046 = CFC1
  { 1047,	2,	1,	4,	1294,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206 },  // Inst #1047 = CFC1_MM
  { 1048,	2,	1,	4,	1057,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo207 },  // Inst #1048 = CFC2_MM
  { 1049,	2,	1,	4,	529,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo208 },  // Inst #1049 = CFCMSA
  { 1050,	4,	1,	4,	1200,	0, 0x1ULL, nullptr, nullptr, OperandInfo209 },  // Inst #1050 = CINS
  { 1051,	4,	1,	4,	1200,	0, 0x1ULL, nullptr, nullptr, OperandInfo209 },  // Inst #1051 = CINS32
  { 1052,	4,	1,	4,	1200,	0, 0x1ULL, nullptr, nullptr, OperandInfo210 },  // Inst #1052 = CINS64_32
  { 1053,	4,	1,	4,	1200,	0, 0x1ULL, nullptr, nullptr, OperandInfo211 },  // Inst #1053 = CINS_i32
  { 1054,	2,	1,	4,	1228,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1054 = CLASS_D
  { 1055,	2,	1,	4,	1314,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1055 = CLASS_D_MMR6
  { 1056,	2,	1,	4,	1227,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1056 = CLASS_S
  { 1057,	2,	1,	4,	1314,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1057 = CLASS_S_MMR6
  { 1058,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #1058 = CLEI_S_B
  { 1059,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #1059 = CLEI_S_D
  { 1060,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #1060 = CLEI_S_H
  { 1061,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #1061 = CLEI_S_W
  { 1062,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #1062 = CLEI_U_B
  { 1063,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #1063 = CLEI_U_D
  { 1064,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #1064 = CLEI_U_H
  { 1065,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #1065 = CLEI_U_W
  { 1066,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1066 = CLE_S_B
  { 1067,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1067 = CLE_S_D
  { 1068,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1068 = CLE_S_H
  { 1069,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1069 = CLE_S_W
  { 1070,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1070 = CLE_U_B
  { 1071,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1071 = CLE_U_D
  { 1072,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1072 = CLE_U_H
  { 1073,	3,	1,	4,	555,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1073 = CLE_U_W
  { 1074,	2,	1,	4,	474,	0, 0x1ULL, nullptr, nullptr, OperandInfo43 },  // Inst #1074 = CLO
  { 1075,	2,	1,	4,	744,	0, 0x1ULL, nullptr, nullptr, OperandInfo43 },  // Inst #1075 = CLO_MM
  { 1076,	2,	1,	4,	785,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo43 },  // Inst #1076 = CLO_MMR6
  { 1077,	2,	1,	4,	731,	0, 0x6ULL, nullptr, nullptr, OperandInfo43 },  // Inst #1077 = CLO_R6
  { 1078,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #1078 = CLTI_S_B
  { 1079,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #1079 = CLTI_S_D
  { 1080,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #1080 = CLTI_S_H
  { 1081,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #1081 = CLTI_S_W
  { 1082,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #1082 = CLTI_U_B
  { 1083,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #1083 = CLTI_U_D
  { 1084,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #1084 = CLTI_U_H
  { 1085,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #1085 = CLTI_U_W
  { 1086,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1086 = CLT_S_B
  { 1087,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1087 = CLT_S_D
  { 1088,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1088 = CLT_S_H
  { 1089,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1089 = CLT_S_W
  { 1090,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1090 = CLT_U_B
  { 1091,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1091 = CLT_U_D
  { 1092,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1092 = CLT_U_H
  { 1093,	3,	1,	4,	554,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1093 = CLT_U_W
  { 1094,	2,	1,	4,	475,	0, 0x1ULL, nullptr, nullptr, OperandInfo43 },  // Inst #1094 = CLZ
  { 1095,	2,	1,	4,	745,	0, 0x1ULL, nullptr, nullptr, OperandInfo43 },  // Inst #1095 = CLZ_MM
  { 1096,	2,	1,	4,	786,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo43 },  // Inst #1096 = CLZ_MMR6
  { 1097,	2,	1,	4,	732,	0, 0x6ULL, nullptr, nullptr, OperandInfo43 },  // Inst #1097 = CLZ_R6
  { 1098,	3,	1,	4,	1471,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo212 },  // Inst #1098 = CMPGDU_EQ_QB
  { 1099,	3,	1,	4,	1635,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo212 },  // Inst #1099 = CMPGDU_EQ_QB_MMR2
  { 1100,	3,	1,	4,	1472,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo212 },  // Inst #1100 = CMPGDU_LE_QB
  { 1101,	3,	1,	4,	1636,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo212 },  // Inst #1101 = CMPGDU_LE_QB_MMR2
  { 1102,	3,	1,	4,	1473,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo212 },  // Inst #1102 = CMPGDU_LT_QB
  { 1103,	3,	1,	4,	1637,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo212 },  // Inst #1103 = CMPGDU_LT_QB_MMR2
  { 1104,	3,	1,	4,	1368,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo212 },  // Inst #1104 = CMPGU_EQ_QB
  { 1105,	3,	1,	4,	1519,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo212 },  // Inst #1105 = CMPGU_EQ_QB_MM
  { 1106,	3,	1,	4,	1369,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo212 },  // Inst #1106 = CMPGU_LE_QB
  { 1107,	3,	1,	4,	1520,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo212 },  // Inst #1107 = CMPGU_LE_QB_MM
  { 1108,	3,	1,	4,	1370,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo212 },  // Inst #1108 = CMPGU_LT_QB
  { 1109,	3,	1,	4,	1521,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo212 },  // Inst #1109 = CMPGU_LT_QB_MM
  { 1110,	2,	0,	4,	1371,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo166 },  // Inst #1110 = CMPU_EQ_QB
  { 1111,	2,	0,	4,	1522,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo166 },  // Inst #1111 = CMPU_EQ_QB_MM
  { 1112,	2,	0,	4,	1372,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo166 },  // Inst #1112 = CMPU_LE_QB
  { 1113,	2,	0,	4,	1523,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo166 },  // Inst #1113 = CMPU_LE_QB_MM
  { 1114,	2,	0,	4,	1373,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo166 },  // Inst #1114 = CMPU_LT_QB
  { 1115,	2,	0,	4,	1524,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo166 },  // Inst #1115 = CMPU_LT_QB_MM
  { 1116,	3,	1,	4,	1301,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1116 = CMP_AF_D_MMR6
  { 1117,	3,	1,	4,	1302,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1117 = CMP_AF_S_MMR6
  { 1118,	3,	1,	4,	561,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1118 = CMP_EQ_D
  { 1119,	3,	1,	4,	1301,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1119 = CMP_EQ_D_MMR6
  { 1120,	2,	0,	4,	1374,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo166 },  // Inst #1120 = CMP_EQ_PH
  { 1121,	2,	0,	4,	1525,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo166 },  // Inst #1121 = CMP_EQ_PH_MM
  { 1122,	3,	1,	4,	562,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1122 = CMP_EQ_S
  { 1123,	3,	1,	4,	1302,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1123 = CMP_EQ_S_MMR6
  { 1124,	3,	1,	4,	1671,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1124 = CMP_F_D
  { 1125,	3,	1,	4,	1672,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1125 = CMP_F_S
  { 1126,	3,	1,	4,	567,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1126 = CMP_LE_D
  { 1127,	3,	1,	4,	1301,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1127 = CMP_LE_D_MMR6
  { 1128,	2,	0,	4,	1375,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo166 },  // Inst #1128 = CMP_LE_PH
  { 1129,	2,	0,	4,	1526,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo166 },  // Inst #1129 = CMP_LE_PH_MM
  { 1130,	3,	1,	4,	568,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1130 = CMP_LE_S
  { 1131,	3,	1,	4,	1302,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1131 = CMP_LE_S_MMR6
  { 1132,	3,	1,	4,	563,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1132 = CMP_LT_D
  { 1133,	3,	1,	4,	1301,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1133 = CMP_LT_D_MMR6
  { 1134,	2,	0,	4,	1376,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo166 },  // Inst #1134 = CMP_LT_PH
  { 1135,	2,	0,	4,	1527,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList10, OperandInfo166 },  // Inst #1135 = CMP_LT_PH_MM
  { 1136,	3,	1,	4,	564,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1136 = CMP_LT_S
  { 1137,	3,	1,	4,	1302,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1137 = CMP_LT_S_MMR6
  { 1138,	3,	1,	4,	1673,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1138 = CMP_SAF_D
  { 1139,	3,	1,	4,	1303,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1139 = CMP_SAF_D_MMR6
  { 1140,	3,	1,	4,	1674,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1140 = CMP_SAF_S
  { 1141,	3,	1,	4,	1304,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1141 = CMP_SAF_S_MMR6
  { 1142,	3,	1,	4,	1675,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1142 = CMP_SEQ_D
  { 1143,	3,	1,	4,	1303,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1143 = CMP_SEQ_D_MMR6
  { 1144,	3,	1,	4,	1676,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1144 = CMP_SEQ_S
  { 1145,	3,	1,	4,	1304,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1145 = CMP_SEQ_S_MMR6
  { 1146,	3,	1,	4,	1677,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1146 = CMP_SLE_D
  { 1147,	3,	1,	4,	1303,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1147 = CMP_SLE_D_MMR6
  { 1148,	3,	1,	4,	1678,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1148 = CMP_SLE_S
  { 1149,	3,	1,	4,	1304,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1149 = CMP_SLE_S_MMR6
  { 1150,	3,	1,	4,	1679,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1150 = CMP_SLT_D
  { 1151,	3,	1,	4,	1303,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1151 = CMP_SLT_D_MMR6
  { 1152,	3,	1,	4,	1680,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1152 = CMP_SLT_S
  { 1153,	3,	1,	4,	1304,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1153 = CMP_SLT_S_MMR6
  { 1154,	3,	1,	4,	1681,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1154 = CMP_SUEQ_D
  { 1155,	3,	1,	4,	1305,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1155 = CMP_SUEQ_D_MMR6
  { 1156,	3,	1,	4,	1682,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1156 = CMP_SUEQ_S
  { 1157,	3,	1,	4,	1306,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1157 = CMP_SUEQ_S_MMR6
  { 1158,	3,	1,	4,	1683,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1158 = CMP_SULE_D
  { 1159,	3,	1,	4,	1305,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1159 = CMP_SULE_D_MMR6
  { 1160,	3,	1,	4,	1684,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1160 = CMP_SULE_S
  { 1161,	3,	1,	4,	1306,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1161 = CMP_SULE_S_MMR6
  { 1162,	3,	1,	4,	1685,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1162 = CMP_SULT_D
  { 1163,	3,	1,	4,	1305,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1163 = CMP_SULT_D_MMR6
  { 1164,	3,	1,	4,	1686,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1164 = CMP_SULT_S
  { 1165,	3,	1,	4,	1306,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1165 = CMP_SULT_S_MMR6
  { 1166,	3,	1,	4,	1687,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1166 = CMP_SUN_D
  { 1167,	3,	1,	4,	1303,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1167 = CMP_SUN_D_MMR6
  { 1168,	3,	1,	4,	1688,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1168 = CMP_SUN_S
  { 1169,	3,	1,	4,	1304,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1169 = CMP_SUN_S_MMR6
  { 1170,	3,	1,	4,	559,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1170 = CMP_UEQ_D
  { 1171,	3,	1,	4,	1303,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1171 = CMP_UEQ_D_MMR6
  { 1172,	3,	1,	4,	560,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1172 = CMP_UEQ_S
  { 1173,	3,	1,	4,	1304,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1173 = CMP_UEQ_S_MMR6
  { 1174,	3,	1,	4,	569,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1174 = CMP_ULE_D
  { 1175,	3,	1,	4,	1303,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1175 = CMP_ULE_D_MMR6
  { 1176,	3,	1,	4,	570,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1176 = CMP_ULE_S
  { 1177,	3,	1,	4,	1304,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1177 = CMP_ULE_S_MMR6
  { 1178,	3,	1,	4,	565,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1178 = CMP_ULT_D
  { 1179,	3,	1,	4,	1303,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1179 = CMP_ULT_D_MMR6
  { 1180,	3,	1,	4,	566,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1180 = CMP_ULT_S
  { 1181,	3,	1,	4,	1304,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1181 = CMP_ULT_S_MMR6
  { 1182,	3,	1,	4,	557,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1182 = CMP_UN_D
  { 1183,	3,	1,	4,	1301,	0, 0x16ULL, nullptr, nullptr, OperandInfo213 },  // Inst #1183 = CMP_UN_D_MMR6
  { 1184,	3,	1,	4,	558,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1184 = CMP_UN_S
  { 1185,	3,	1,	4,	1302,	0, 0x16ULL, nullptr, nullptr, OperandInfo214 },  // Inst #1185 = CMP_UN_S_MMR6
  { 1186,	3,	1,	4,	689,	0, 0x6ULL, nullptr, nullptr, OperandInfo215 },  // Inst #1186 = COPY_S_B
  { 1187,	3,	1,	4,	689,	0, 0x6ULL, nullptr, nullptr, OperandInfo216 },  // Inst #1187 = COPY_S_D
  { 1188,	3,	1,	4,	689,	0, 0x6ULL, nullptr, nullptr, OperandInfo217 },  // Inst #1188 = COPY_S_H
  { 1189,	3,	1,	4,	689,	0, 0x6ULL, nullptr, nullptr, OperandInfo218 },  // Inst #1189 = COPY_S_W
  { 1190,	3,	1,	4,	688,	0, 0x6ULL, nullptr, nullptr, OperandInfo215 },  // Inst #1190 = COPY_U_B
  { 1191,	3,	1,	4,	688,	0, 0x6ULL, nullptr, nullptr, OperandInfo217 },  // Inst #1191 = COPY_U_H
  { 1192,	3,	1,	4,	688,	0, 0x6ULL, nullptr, nullptr, OperandInfo218 },  // Inst #1192 = COPY_U_W
  { 1193,	3,	1,	4,	1190,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #1193 = CRC32B
  { 1194,	3,	1,	4,	1193,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #1194 = CRC32CB
  { 1195,	3,	1,	4,	1197,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #1195 = CRC32CD
  { 1196,	3,	1,	4,	1194,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #1196 = CRC32CH
  { 1197,	3,	1,	4,	1195,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #1197 = CRC32CW
  { 1198,	3,	1,	4,	1196,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #1198 = CRC32D
  { 1199,	3,	1,	4,	1191,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #1199 = CRC32H
  { 1200,	3,	1,	4,	1192,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #1200 = CRC32W
  { 1201,	2,	1,	4,	685,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo219 },  // Inst #1201 = CTC1
  { 1202,	2,	1,	4,	1295,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo219 },  // Inst #1202 = CTC1_MM
  { 1203,	2,	1,	4,	1058,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo220 },  // Inst #1203 = CTC2_MM
  { 1204,	2,	0,	4,	529,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo221 },  // Inst #1204 = CTCMSA
  { 1205,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo222 },  // Inst #1205 = CVT_D32_S
  { 1206,	2,	1,	4,	1246,	0, 0x4ULL, nullptr, nullptr, OperandInfo222 },  // Inst #1206 = CVT_D32_S_MM
  { 1207,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo222 },  // Inst #1207 = CVT_D32_W
  { 1208,	2,	1,	4,	1246,	0, 0x4ULL, nullptr, nullptr, OperandInfo222 },  // Inst #1208 = CVT_D32_W_MM
  { 1209,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1209 = CVT_D64_L
  { 1210,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #1210 = CVT_D64_S
  { 1211,	2,	1,	4,	1246,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #1211 = CVT_D64_S_MM
  { 1212,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #1212 = CVT_D64_W
  { 1213,	2,	1,	4,	1246,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #1213 = CVT_D64_W_MM
  { 1214,	2,	1,	4,	1307,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1214 = CVT_D_L_MMR6
  { 1215,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1215 = CVT_L_D64
  { 1216,	2,	1,	4,	1246,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1216 = CVT_L_D64_MM
  { 1217,	2,	1,	4,	1307,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1217 = CVT_L_D_MMR6
  { 1218,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #1218 = CVT_L_S
  { 1219,	2,	1,	4,	1246,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #1219 = CVT_L_S_MM
  { 1220,	2,	1,	4,	1307,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #1220 = CVT_L_S_MMR6
  { 1221,	2,	1,	4,	1212,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1221 = CVT_PS_PW64
  { 1222,	3,	1,	4,	639,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo223 },  // Inst #1222 = CVT_PS_S64
  { 1223,	2,	1,	4,	1212,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1223 = CVT_PW_PS64
  { 1224,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #1224 = CVT_S_D32
  { 1225,	2,	1,	4,	1246,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #1225 = CVT_S_D32_MM
  { 1226,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo204 },  // Inst #1226 = CVT_S_D64
  { 1227,	2,	1,	4,	1246,	0, 0x4ULL, nullptr, nullptr, OperandInfo204 },  // Inst #1227 = CVT_S_D64_MM
  { 1228,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo204 },  // Inst #1228 = CVT_S_L
  { 1229,	2,	1,	4,	1307,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #1229 = CVT_S_L_MMR6
  { 1230,	2,	1,	4,	639,	0, 0x4ULL, nullptr, nullptr, OperandInfo204 },  // Inst #1230 = CVT_S_PL64
  { 1231,	2,	1,	4,	639,	0, 0x4ULL, nullptr, nullptr, OperandInfo204 },  // Inst #1231 = CVT_S_PU64
  { 1232,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1232 = CVT_S_W
  { 1233,	2,	1,	4,	1246,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1233 = CVT_S_W_MM
  { 1234,	2,	1,	4,	1307,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1234 = CVT_S_W_MMR6
  { 1235,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #1235 = CVT_W_D32
  { 1236,	2,	1,	4,	1246,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #1236 = CVT_W_D32_MM
  { 1237,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo204 },  // Inst #1237 = CVT_W_D64
  { 1238,	2,	1,	4,	1246,	0, 0x4ULL, nullptr, nullptr, OperandInfo204 },  // Inst #1238 = CVT_W_D64_MM
  { 1239,	2,	1,	4,	638,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1239 = CVT_W_S
  { 1240,	2,	1,	4,	1246,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1240 = CVT_W_S_MM
  { 1241,	2,	1,	4,	1307,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1241 = CVT_W_S_MMR6
  { 1242,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1242 = C_EQ_D32
  { 1243,	3,	1,	4,	1259,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1243 = C_EQ_D32_MM
  { 1244,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1244 = C_EQ_D64
  { 1245,	3,	1,	4,	1259,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1245 = C_EQ_D64_MM
  { 1246,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1246 = C_EQ_S
  { 1247,	3,	1,	4,	1260,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1247 = C_EQ_S_MM
  { 1248,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1248 = C_F_D32
  { 1249,	3,	1,	4,	1257,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1249 = C_F_D32_MM
  { 1250,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1250 = C_F_D64
  { 1251,	3,	1,	4,	1257,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1251 = C_F_D64_MM
  { 1252,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1252 = C_F_S
  { 1253,	3,	1,	4,	1258,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1253 = C_F_S_MM
  { 1254,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1254 = C_LE_D32
  { 1255,	3,	1,	4,	1259,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1255 = C_LE_D32_MM
  { 1256,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1256 = C_LE_D64
  { 1257,	3,	1,	4,	1259,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1257 = C_LE_D64_MM
  { 1258,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1258 = C_LE_S
  { 1259,	3,	1,	4,	1260,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1259 = C_LE_S_MM
  { 1260,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1260 = C_LT_D32
  { 1261,	3,	1,	4,	1259,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1261 = C_LT_D32_MM
  { 1262,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1262 = C_LT_D64
  { 1263,	3,	1,	4,	1259,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1263 = C_LT_D64_MM
  { 1264,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1264 = C_LT_S
  { 1265,	3,	1,	4,	1260,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1265 = C_LT_S_MM
  { 1266,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1266 = C_NGE_D32
  { 1267,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1267 = C_NGE_D32_MM
  { 1268,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1268 = C_NGE_D64
  { 1269,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1269 = C_NGE_D64_MM
  { 1270,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1270 = C_NGE_S
  { 1271,	3,	1,	4,	1262,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1271 = C_NGE_S_MM
  { 1272,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1272 = C_NGLE_D32
  { 1273,	3,	1,	4,	1263,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1273 = C_NGLE_D32_MM
  { 1274,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1274 = C_NGLE_D64
  { 1275,	3,	1,	4,	1263,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1275 = C_NGLE_D64_MM
  { 1276,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1276 = C_NGLE_S
  { 1277,	3,	1,	4,	1264,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1277 = C_NGLE_S_MM
  { 1278,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1278 = C_NGL_D32
  { 1279,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1279 = C_NGL_D32_MM
  { 1280,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1280 = C_NGL_D64
  { 1281,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1281 = C_NGL_D64_MM
  { 1282,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1282 = C_NGL_S
  { 1283,	3,	1,	4,	1262,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1283 = C_NGL_S_MM
  { 1284,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1284 = C_NGT_D32
  { 1285,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1285 = C_NGT_D32_MM
  { 1286,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1286 = C_NGT_D64
  { 1287,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1287 = C_NGT_D64_MM
  { 1288,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1288 = C_NGT_S
  { 1289,	3,	1,	4,	1262,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1289 = C_NGT_S_MM
  { 1290,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1290 = C_OLE_D32
  { 1291,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1291 = C_OLE_D32_MM
  { 1292,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1292 = C_OLE_D64
  { 1293,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1293 = C_OLE_D64_MM
  { 1294,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1294 = C_OLE_S
  { 1295,	3,	1,	4,	1262,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1295 = C_OLE_S_MM
  { 1296,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1296 = C_OLT_D32
  { 1297,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1297 = C_OLT_D32_MM
  { 1298,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1298 = C_OLT_D64
  { 1299,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1299 = C_OLT_D64_MM
  { 1300,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1300 = C_OLT_S
  { 1301,	3,	1,	4,	1262,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1301 = C_OLT_S_MM
  { 1302,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1302 = C_SEQ_D32
  { 1303,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1303 = C_SEQ_D32_MM
  { 1304,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1304 = C_SEQ_D64
  { 1305,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1305 = C_SEQ_D64_MM
  { 1306,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1306 = C_SEQ_S
  { 1307,	3,	1,	4,	1262,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1307 = C_SEQ_S_MM
  { 1308,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1308 = C_SF_D32
  { 1309,	3,	1,	4,	1259,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1309 = C_SF_D32_MM
  { 1310,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1310 = C_SF_D64
  { 1311,	3,	1,	4,	1259,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1311 = C_SF_D64_MM
  { 1312,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1312 = C_SF_S
  { 1313,	3,	1,	4,	1260,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1313 = C_SF_S_MM
  { 1314,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1314 = C_UEQ_D32
  { 1315,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1315 = C_UEQ_D32_MM
  { 1316,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1316 = C_UEQ_D64
  { 1317,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1317 = C_UEQ_D64_MM
  { 1318,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1318 = C_UEQ_S
  { 1319,	3,	1,	4,	1262,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1319 = C_UEQ_S_MM
  { 1320,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1320 = C_ULE_D32
  { 1321,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1321 = C_ULE_D32_MM
  { 1322,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1322 = C_ULE_D64
  { 1323,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1323 = C_ULE_D64_MM
  { 1324,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1324 = C_ULE_S
  { 1325,	3,	1,	4,	1262,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1325 = C_ULE_S_MM
  { 1326,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1326 = C_ULT_D32
  { 1327,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1327 = C_ULT_D32_MM
  { 1328,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1328 = C_ULT_D64
  { 1329,	3,	1,	4,	1261,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1329 = C_ULT_D64_MM
  { 1330,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1330 = C_ULT_S
  { 1331,	3,	1,	4,	1262,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1331 = C_ULT_S_MM
  { 1332,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1332 = C_UN_D32
  { 1333,	3,	1,	4,	1259,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo224 },  // Inst #1333 = C_UN_D32_MM
  { 1334,	3,	1,	4,	640,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1334 = C_UN_D64
  { 1335,	3,	1,	4,	1259,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo225 },  // Inst #1335 = C_UN_D64_MM
  { 1336,	3,	1,	4,	641,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1336 = C_UN_S
  { 1337,	3,	1,	4,	1260,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44ULL, nullptr, nullptr, OperandInfo226 },  // Inst #1337 = C_UN_S_MM
  { 1338,	2,	0,	2,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo128 },  // Inst #1338 = CmpRxRy16
  { 1339,	2,	0,	2,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo181 },  // Inst #1339 = CmpiRxImm16
  { 1340,	2,	0,	4,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo181 },  // Inst #1340 = CmpiRxImmX16
  { 1341,	3,	1,	4,	816,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo69 },  // Inst #1341 = DADD
  { 1342,	3,	1,	4,	817,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo68 },  // Inst #1342 = DADDi
  { 1343,	3,	1,	4,	818,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo68 },  // Inst #1343 = DADDiu
  { 1344,	3,	1,	4,	819,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo69 },  // Inst #1344 = DADDu
  { 1345,	3,	1,	4,	845,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo227 },  // Inst #1345 = DAHI
  { 1346,	4,	1,	4,	844,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo228 },  // Inst #1346 = DALIGN
  { 1347,	3,	1,	4,	846,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo227 },  // Inst #1347 = DATI
  { 1348,	3,	1,	4,	847,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo68 },  // Inst #1348 = DAUI
  { 1349,	2,	1,	4,	850,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo120 },  // Inst #1349 = DBITSWAP
  { 1350,	2,	1,	4,	820,	0, 0x1ULL, nullptr, nullptr, OperandInfo120 },  // Inst #1350 = DCLO
  { 1351,	2,	1,	4,	848,	0, 0x6ULL, nullptr, nullptr, OperandInfo120 },  // Inst #1351 = DCLO_R6
  { 1352,	2,	1,	4,	821,	0, 0x1ULL, nullptr, nullptr, OperandInfo120 },  // Inst #1352 = DCLZ
  { 1353,	2,	1,	4,	849,	0, 0x6ULL, nullptr, nullptr, OperandInfo120 },  // Inst #1353 = DCLZ_R6
  { 1354,	3,	1,	4,	915,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo69 },  // Inst #1354 = DDIV
  { 1355,	3,	1,	4,	917,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo69 },  // Inst #1355 = DDIVU
  { 1356,	0,	0,	4,	380,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr },  // Inst #1356 = DERET
  { 1357,	0,	0,	4,	952,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr },  // Inst #1357 = DERET_MM
  { 1358,	0,	0,	4,	988,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr },  // Inst #1358 = DERET_MMR6
  { 1359,	4,	1,	4,	822,	0, 0x1ULL, nullptr, nullptr, OperandInfo209 },  // Inst #1359 = DEXT
  { 1360,	4,	1,	4,	807,	0, 0x1ULL, nullptr, nullptr, OperandInfo210 },  // Inst #1360 = DEXT64_32
  { 1361,	4,	1,	4,	822,	0, 0x1ULL, nullptr, nullptr, OperandInfo209 },  // Inst #1361 = DEXTM
  { 1362,	4,	1,	4,	822,	0, 0x1ULL, nullptr, nullptr, OperandInfo209 },  // Inst #1362 = DEXTU
  { 1363,	1,	1,	4,	476,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1363 = DI
  { 1364,	5,	1,	4,	823,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo229 },  // Inst #1364 = DINS
  { 1365,	5,	1,	4,	823,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo229 },  // Inst #1365 = DINSM
  { 1366,	5,	1,	4,	823,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo229 },  // Inst #1366 = DINSU
  { 1367,	3,	1,	4,	484,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #1367 = DIV
  { 1368,	3,	1,	4,	485,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #1368 = DIVU
  { 1369,	3,	1,	4,	898,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #1369 = DIVU_MMR6
  { 1370,	3,	1,	4,	899,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #1370 = DIV_MMR6
  { 1371,	3,	1,	4,	614,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1371 = DIV_S_B
  { 1372,	3,	1,	4,	614,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1372 = DIV_S_D
  { 1373,	3,	1,	4,	614,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1373 = DIV_S_H
  { 1374,	3,	1,	4,	614,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1374 = DIV_S_W
  { 1375,	3,	1,	4,	614,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1375 = DIV_U_B
  { 1376,	3,	1,	4,	614,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1376 = DIV_U_D
  { 1377,	3,	1,	4,	614,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1377 = DIV_U_H
  { 1378,	3,	1,	4,	614,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1378 = DIV_U_W
  { 1379,	1,	1,	4,	1031,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1379 = DI_MM
  { 1380,	1,	1,	4,	1048,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1380 = DI_MMR6
  { 1381,	4,	1,	4,	851,	0, 0x6ULL, nullptr, nullptr, OperandInfo228 },  // Inst #1381 = DLSA
  { 1382,	4,	1,	4,	851,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo228 },  // Inst #1382 = DLSA_R6
  { 1383,	3,	1,	4,	1053,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo230 },  // Inst #1383 = DMFC0
  { 1384,	2,	1,	4,	1340,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo231 },  // Inst #1384 = DMFC1
  { 1385,	3,	1,	4,	1055,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo232 },  // Inst #1385 = DMFC2
  { 1386,	2,	2,	4,	1201,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo110 },  // Inst #1386 = DMFC2_OCTEON
  { 1387,	3,	1,	4,	1067,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo230 },  // Inst #1387 = DMFGC0
  { 1388,	3,	1,	4,	916,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo69 },  // Inst #1388 = DMOD
  { 1389,	3,	1,	4,	918,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo69 },  // Inst #1389 = DMODU
  { 1390,	1,	1,	4,	1059,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1390 = DMT
  { 1391,	3,	1,	4,	1054,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo233 },  // Inst #1391 = DMTC0
  { 1392,	2,	1,	4,	1341,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo132 },  // Inst #1392 = DMTC1
  { 1393,	3,	1,	4,	1056,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo234 },  // Inst #1393 = DMTC2
  { 1394,	2,	2,	4,	1202,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo110 },  // Inst #1394 = DMTC2_OCTEON
  { 1395,	3,	1,	4,	1068,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo233 },  // Inst #1395 = DMTGC0
  { 1396,	3,	1,	4,	912,	0, 0x6ULL, nullptr, nullptr, OperandInfo69 },  // Inst #1396 = DMUH
  { 1397,	3,	1,	4,	913,	0, 0x6ULL, nullptr, nullptr, OperandInfo69 },  // Inst #1397 = DMUHU
  { 1398,	3,	1,	4,	1209,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList11, OperandInfo69 },  // Inst #1398 = DMUL
  { 1399,	2,	0,	4,	902,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo120 },  // Inst #1399 = DMULT
  { 1400,	2,	0,	4,	903,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo120 },  // Inst #1400 = DMULTu
  { 1401,	3,	1,	4,	901,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69 },  // Inst #1401 = DMULU
  { 1402,	3,	1,	4,	914,	0, 0x6ULL, nullptr, nullptr, OperandInfo69 },  // Inst #1402 = DMUL_R6
  { 1403,	3,	1,	4,	667,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo235 },  // Inst #1403 = DOTP_S_D
  { 1404,	3,	1,	4,	667,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo236 },  // Inst #1404 = DOTP_S_H
  { 1405,	3,	1,	4,	667,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo237 },  // Inst #1405 = DOTP_S_W
  { 1406,	3,	1,	4,	667,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo235 },  // Inst #1406 = DOTP_U_D
  { 1407,	3,	1,	4,	667,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo236 },  // Inst #1407 = DOTP_U_H
  { 1408,	3,	1,	4,	667,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo237 },  // Inst #1408 = DOTP_U_W
  { 1409,	4,	1,	4,	665,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo238 },  // Inst #1409 = DPADD_S_D
  { 1410,	4,	1,	4,	665,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo239 },  // Inst #1410 = DPADD_S_H
  { 1411,	4,	1,	4,	665,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo240 },  // Inst #1411 = DPADD_S_W
  { 1412,	4,	1,	4,	665,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo238 },  // Inst #1412 = DPADD_U_D
  { 1413,	4,	1,	4,	665,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo239 },  // Inst #1413 = DPADD_U_H
  { 1414,	4,	1,	4,	665,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo240 },  // Inst #1414 = DPADD_U_W
  { 1415,	4,	1,	4,	1475,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1415 = DPAQX_SA_W_PH
  { 1416,	4,	1,	4,	1639,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1416 = DPAQX_SA_W_PH_MMR2
  { 1417,	4,	1,	4,	1476,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1417 = DPAQX_S_W_PH
  { 1418,	4,	1,	4,	1640,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1418 = DPAQX_S_W_PH_MMR2
  { 1419,	4,	1,	4,	1377,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1419 = DPAQ_SA_L_W
  { 1420,	4,	1,	4,	1528,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1420 = DPAQ_SA_L_W_MM
  { 1421,	4,	1,	4,	1378,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1421 = DPAQ_S_W_PH
  { 1422,	4,	1,	4,	1529,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1422 = DPAQ_S_W_PH_MM
  { 1423,	4,	1,	4,	1379,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1423 = DPAU_H_QBL
  { 1424,	4,	1,	4,	1530,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1424 = DPAU_H_QBL_MM
  { 1425,	4,	1,	4,	1380,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1425 = DPAU_H_QBR
  { 1426,	4,	1,	4,	1531,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1426 = DPAU_H_QBR_MM
  { 1427,	4,	1,	4,	1477,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1427 = DPAX_W_PH
  { 1428,	4,	1,	4,	1641,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1428 = DPAX_W_PH_MMR2
  { 1429,	4,	1,	4,	1474,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1429 = DPA_W_PH
  { 1430,	4,	1,	4,	1638,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1430 = DPA_W_PH_MMR2
  { 1431,	2,	1,	4,	1203,	0, 0x1ULL, nullptr, nullptr, OperandInfo120 },  // Inst #1431 = DPOP
  { 1432,	4,	1,	4,	1480,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1432 = DPSQX_SA_W_PH
  { 1433,	4,	1,	4,	1644,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1433 = DPSQX_SA_W_PH_MMR2
  { 1434,	4,	1,	4,	1479,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1434 = DPSQX_S_W_PH
  { 1435,	4,	1,	4,	1643,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1435 = DPSQX_S_W_PH_MMR2
  { 1436,	4,	1,	4,	1381,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1436 = DPSQ_SA_L_W
  { 1437,	4,	1,	4,	1532,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1437 = DPSQ_SA_L_W_MM
  { 1438,	4,	1,	4,	1382,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1438 = DPSQ_S_W_PH
  { 1439,	4,	1,	4,	1533,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1439 = DPSQ_S_W_PH_MM
  { 1440,	4,	1,	4,	666,	0, 0x6ULL, nullptr, nullptr, OperandInfo238 },  // Inst #1440 = DPSUB_S_D
  { 1441,	4,	1,	4,	666,	0, 0x6ULL, nullptr, nullptr, OperandInfo239 },  // Inst #1441 = DPSUB_S_H
  { 1442,	4,	1,	4,	666,	0, 0x6ULL, nullptr, nullptr, OperandInfo240 },  // Inst #1442 = DPSUB_S_W
  { 1443,	4,	1,	4,	666,	0, 0x6ULL, nullptr, nullptr, OperandInfo238 },  // Inst #1443 = DPSUB_U_D
  { 1444,	4,	1,	4,	666,	0, 0x6ULL, nullptr, nullptr, OperandInfo239 },  // Inst #1444 = DPSUB_U_H
  { 1445,	4,	1,	4,	666,	0, 0x6ULL, nullptr, nullptr, OperandInfo240 },  // Inst #1445 = DPSUB_U_W
  { 1446,	4,	1,	4,	1383,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1446 = DPSU_H_QBL
  { 1447,	4,	1,	4,	1534,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1447 = DPSU_H_QBL_MM
  { 1448,	4,	1,	4,	1384,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1448 = DPSU_H_QBR
  { 1449,	4,	1,	4,	1535,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1449 = DPSU_H_QBR_MM
  { 1450,	4,	1,	4,	1481,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1450 = DPSX_W_PH
  { 1451,	4,	1,	4,	1645,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1451 = DPSX_W_PH_MMR2
  { 1452,	4,	1,	4,	1478,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1452 = DPS_W_PH
  { 1453,	4,	1,	4,	1642,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1453 = DPS_W_PH_MMR2
  { 1454,	3,	1,	4,	824,	0, 0x1ULL, nullptr, nullptr, OperandInfo68 },  // Inst #1454 = DROTR
  { 1455,	3,	1,	4,	825,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo68 },  // Inst #1455 = DROTR32
  { 1456,	3,	1,	4,	826,	0, 0x1ULL, nullptr, nullptr, OperandInfo242 },  // Inst #1456 = DROTRV
  { 1457,	2,	1,	4,	827,	0, 0x1ULL, nullptr, nullptr, OperandInfo120 },  // Inst #1457 = DSBH
  { 1458,	2,	0,	4,	904,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo120 },  // Inst #1458 = DSDIV
  { 1459,	2,	1,	4,	828,	0, 0x1ULL, nullptr, nullptr, OperandInfo120 },  // Inst #1459 = DSHD
  { 1460,	3,	1,	4,	829,	0, 0x1ULL, nullptr, nullptr, OperandInfo68 },  // Inst #1460 = DSLL
  { 1461,	3,	1,	4,	830,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo68 },  // Inst #1461 = DSLL32
  { 1462,	2,	1,	4,	808,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo243 },  // Inst #1462 = DSLL64_32
  { 1463,	3,	1,	4,	831,	0, 0x1ULL, nullptr, nullptr, OperandInfo242 },  // Inst #1463 = DSLLV
  { 1464,	3,	1,	4,	832,	0, 0x1ULL, nullptr, nullptr, OperandInfo68 },  // Inst #1464 = DSRA
  { 1465,	3,	1,	4,	833,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo68 },  // Inst #1465 = DSRA32
  { 1466,	3,	1,	4,	834,	0, 0x1ULL, nullptr, nullptr, OperandInfo242 },  // Inst #1466 = DSRAV
  { 1467,	3,	1,	4,	835,	0, 0x1ULL, nullptr, nullptr, OperandInfo68 },  // Inst #1467 = DSRL
  { 1468,	3,	1,	4,	836,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo68 },  // Inst #1468 = DSRL32
  { 1469,	3,	1,	4,	837,	0, 0x1ULL, nullptr, nullptr, OperandInfo242 },  // Inst #1469 = DSRLV
  { 1470,	3,	1,	4,	838,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo69 },  // Inst #1470 = DSUB
  { 1471,	3,	1,	4,	839,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo69 },  // Inst #1471 = DSUBu
  { 1472,	2,	0,	4,	905,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo120 },  // Inst #1472 = DUDIV
  { 1473,	1,	1,	4,	1026,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1473 = DVP
  { 1474,	1,	1,	4,	1060,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1474 = DVPE
  { 1475,	1,	1,	4,	1047,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1475 = DVP_MMR6
  { 1476,	2,	0,	2,	876,	0, 0x0ULL, nullptr, ImplicitList6, OperandInfo128 },  // Inst #1476 = DivRxRy16
  { 1477,	2,	0,	2,	877,	0, 0x0ULL, nullptr, ImplicitList6, OperandInfo128 },  // Inst #1477 = DivuRxRy16
  { 1478,	0,	0,	4,	479,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #1478 = EHB
  { 1479,	0,	0,	4,	1033,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #1479 = EHB_MM
  { 1480,	0,	0,	4,	1050,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #1480 = EHB_MMR6
  { 1481,	1,	1,	4,	477,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1481 = EI
  { 1482,	1,	1,	4,	1032,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1482 = EI_MM
  { 1483,	1,	1,	4,	1049,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1483 = EI_MMR6
  { 1484,	1,	1,	4,	1061,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1484 = EMT
  { 1485,	0,	0,	4,	381,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr },  // Inst #1485 = ERET
  { 1486,	0,	0,	4,	383,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr },  // Inst #1486 = ERETNC
  { 1487,	0,	0,	4,	989,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr },  // Inst #1487 = ERETNC_MMR6
  { 1488,	0,	0,	4,	953,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr },  // Inst #1488 = ERET_MM
  { 1489,	0,	0,	4,	991,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr },  // Inst #1489 = ERET_MMR6
  { 1490,	1,	1,	4,	1025,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1490 = EVP
  { 1491,	1,	1,	4,	1062,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1491 = EVPE
  { 1492,	1,	1,	4,	1046,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1492 = EVP_MMR6
  { 1493,	4,	1,	4,	494,	0, 0x1ULL, nullptr, nullptr, OperandInfo211 },  // Inst #1493 = EXT
  { 1494,	3,	1,	4,	1388,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList4, ImplicitList14, OperandInfo244 },  // Inst #1494 = EXTP
  { 1495,	3,	1,	4,	1386,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList4, ImplicitList15, OperandInfo244 },  // Inst #1495 = EXTPDP
  { 1496,	3,	1,	4,	1385,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList4, ImplicitList15, OperandInfo245 },  // Inst #1496 = EXTPDPV
  { 1497,	3,	1,	4,	1536,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList4, ImplicitList15, OperandInfo245 },  // Inst #1497 = EXTPDPV_MM
  { 1498,	3,	1,	4,	1537,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList4, ImplicitList15, OperandInfo244 },  // Inst #1498 = EXTPDP_MM
  { 1499,	3,	1,	4,	1387,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList4, ImplicitList14, OperandInfo245 },  // Inst #1499 = EXTPV
  { 1500,	3,	1,	4,	1538,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList4, ImplicitList14, OperandInfo245 },  // Inst #1500 = EXTPV_MM
  { 1501,	3,	1,	4,	1539,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList4, ImplicitList14, OperandInfo244 },  // Inst #1501 = EXTP_MM
  { 1502,	3,	1,	4,	1345,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo245 },  // Inst #1502 = EXTRV_RS_W
  { 1503,	3,	1,	4,	1540,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo245 },  // Inst #1503 = EXTRV_RS_W_MM
  { 1504,	3,	1,	4,	1346,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo245 },  // Inst #1504 = EXTRV_R_W
  { 1505,	3,	1,	4,	1541,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo245 },  // Inst #1505 = EXTRV_R_W_MM
  { 1506,	3,	1,	4,	1347,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo245 },  // Inst #1506 = EXTRV_S_H
  { 1507,	3,	1,	4,	1542,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo245 },  // Inst #1507 = EXTRV_S_H_MM
  { 1508,	3,	1,	4,	1348,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo245 },  // Inst #1508 = EXTRV_W
  { 1509,	3,	1,	4,	1543,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo245 },  // Inst #1509 = EXTRV_W_MM
  { 1510,	3,	1,	4,	1349,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo244 },  // Inst #1510 = EXTR_RS_W
  { 1511,	3,	1,	4,	1544,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo244 },  // Inst #1511 = EXTR_RS_W_MM
  { 1512,	3,	1,	4,	1350,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo244 },  // Inst #1512 = EXTR_R_W
  { 1513,	3,	1,	4,	1545,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo244 },  // Inst #1513 = EXTR_R_W_MM
  { 1514,	3,	1,	4,	1351,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo244 },  // Inst #1514 = EXTR_S_H
  { 1515,	3,	1,	4,	1546,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo244 },  // Inst #1515 = EXTR_S_H_MM
  { 1516,	3,	1,	4,	1352,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo244 },  // Inst #1516 = EXTR_W
  { 1517,	3,	1,	4,	1547,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList16, OperandInfo244 },  // Inst #1517 = EXTR_W_MM
  { 1518,	4,	1,	4,	1204,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo209 },  // Inst #1518 = EXTS
  { 1519,	4,	1,	4,	1204,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo209 },  // Inst #1519 = EXTS32
  { 1520,	4,	1,	4,	746,	0, 0x1ULL, nullptr, nullptr, OperandInfo211 },  // Inst #1520 = EXT_MM
  { 1521,	4,	1,	4,	787,	0, 0x1ULL, nullptr, nullptr, OperandInfo211 },  // Inst #1521 = EXT_MMR6
  { 1522,	2,	1,	4,	530,	0, 0x4ULL, nullptr, nullptr, OperandInfo246 },  // Inst #1522 = FABS_D32
  { 1523,	2,	1,	4,	1271,	0, 0x4ULL, nullptr, nullptr, OperandInfo246 },  // Inst #1523 = FABS_D32_MM
  { 1524,	2,	1,	4,	530,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1524 = FABS_D64
  { 1525,	2,	1,	4,	1271,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1525 = FABS_D64_MM
  { 1526,	2,	1,	4,	530,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1526 = FABS_S
  { 1527,	2,	1,	4,	1272,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1527 = FABS_S_MM
  { 1528,	3,	1,	4,	663,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1528 = FADD_D
  { 1529,	3,	1,	4,	628,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo247 },  // Inst #1529 = FADD_D32
  { 1530,	3,	1,	4,	1274,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo247 },  // Inst #1530 = FADD_D32_MM
  { 1531,	3,	1,	4,	628,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1531 = FADD_D64
  { 1532,	3,	1,	4,	1274,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1532 = FADD_D64_MM
  { 1533,	3,	1,	4,	629,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1533 = FADD_PS64
  { 1534,	3,	1,	4,	630,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1534 = FADD_S
  { 1535,	3,	1,	4,	1275,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1535 = FADD_S_MM
  { 1536,	3,	1,	4,	1315,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1536 = FADD_S_MMR6
  { 1537,	3,	1,	4,	663,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1537 = FADD_W
  { 1538,	3,	1,	4,	577,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1538 = FCAF_D
  { 1539,	3,	1,	4,	577,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1539 = FCAF_W
  { 1540,	3,	1,	4,	578,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1540 = FCEQ_D
  { 1541,	3,	1,	4,	578,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1541 = FCEQ_W
  { 1542,	2,	1,	4,	599,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #1542 = FCLASS_D
  { 1543,	2,	1,	4,	599,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #1543 = FCLASS_W
  { 1544,	3,	1,	4,	579,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1544 = FCLE_D
  { 1545,	3,	1,	4,	579,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1545 = FCLE_W
  { 1546,	3,	1,	4,	580,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1546 = FCLT_D
  { 1547,	3,	1,	4,	580,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1547 = FCLT_W
  { 1548,	3,	0,	4,	642,	0, 0x44ULL, nullptr, ImplicitList17, OperandInfo249 },  // Inst #1548 = FCMP_D32
  { 1549,	3,	0,	4,	1266,	0, 0x44ULL, nullptr, ImplicitList17, OperandInfo249 },  // Inst #1549 = FCMP_D32_MM
  { 1550,	3,	0,	4,	642,	0, 0x44ULL, nullptr, ImplicitList17, OperandInfo250 },  // Inst #1550 = FCMP_D64
  { 1551,	3,	0,	4,	643,	0, 0x44ULL, nullptr, ImplicitList17, OperandInfo251 },  // Inst #1551 = FCMP_S32
  { 1552,	3,	0,	4,	1265,	0, 0x44ULL, nullptr, ImplicitList17, OperandInfo251 },  // Inst #1552 = FCMP_S32_MM
  { 1553,	3,	1,	4,	581,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1553 = FCNE_D
  { 1554,	3,	1,	4,	581,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1554 = FCNE_W
  { 1555,	3,	1,	4,	582,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1555 = FCOR_D
  { 1556,	3,	1,	4,	582,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1556 = FCOR_W
  { 1557,	3,	1,	4,	583,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1557 = FCUEQ_D
  { 1558,	3,	1,	4,	583,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1558 = FCUEQ_W
  { 1559,	3,	1,	4,	584,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1559 = FCULE_D
  { 1560,	3,	1,	4,	584,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1560 = FCULE_W
  { 1561,	3,	1,	4,	585,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1561 = FCULT_D
  { 1562,	3,	1,	4,	585,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1562 = FCULT_W
  { 1563,	3,	1,	4,	586,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1563 = FCUNE_D
  { 1564,	3,	1,	4,	586,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1564 = FCUNE_W
  { 1565,	3,	1,	4,	587,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1565 = FCUN_D
  { 1566,	3,	1,	4,	587,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1566 = FCUN_W
  { 1567,	3,	1,	4,	659,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1567 = FDIV_D
  { 1568,	3,	1,	4,	647,	0, 0x4ULL, nullptr, nullptr, OperandInfo247 },  // Inst #1568 = FDIV_D32
  { 1569,	3,	1,	4,	1285,	0, 0x4ULL, nullptr, nullptr, OperandInfo247 },  // Inst #1569 = FDIV_D32_MM
  { 1570,	3,	1,	4,	647,	0, 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1570 = FDIV_D64
  { 1571,	3,	1,	4,	1285,	0, 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1571 = FDIV_D64_MM
  { 1572,	3,	1,	4,	646,	0, 0x4ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1572 = FDIV_S
  { 1573,	3,	1,	4,	1284,	0, 0x4ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1573 = FDIV_S_MM
  { 1574,	3,	1,	4,	1337,	0, 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1574 = FDIV_S_MMR6
  { 1575,	3,	1,	4,	658,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1575 = FDIV_W
  { 1576,	3,	1,	4,	596,	0, 0x6ULL, nullptr, nullptr, OperandInfo252 },  // Inst #1576 = FEXDO_H
  { 1577,	3,	1,	4,	596,	0, 0x6ULL, nullptr, nullptr, OperandInfo253 },  // Inst #1577 = FEXDO_W
  { 1578,	3,	1,	4,	553,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1578 = FEXP2_D
  { 1579,	3,	1,	4,	553,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1579 = FEXP2_W
  { 1580,	2,	1,	4,	597,	0, 0x6ULL, nullptr, nullptr, OperandInfo254 },  // Inst #1580 = FEXUPL_D
  { 1581,	2,	1,	4,	597,	0, 0x6ULL, nullptr, nullptr, OperandInfo255 },  // Inst #1581 = FEXUPL_W
  { 1582,	2,	1,	4,	598,	0, 0x6ULL, nullptr, nullptr, OperandInfo254 },  // Inst #1582 = FEXUPR_D
  { 1583,	2,	1,	4,	598,	0, 0x6ULL, nullptr, nullptr, OperandInfo255 },  // Inst #1583 = FEXUPR_W
  { 1584,	2,	1,	4,	589,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #1584 = FFINT_S_D
  { 1585,	2,	1,	4,	589,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #1585 = FFINT_S_W
  { 1586,	2,	1,	4,	589,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #1586 = FFINT_U_D
  { 1587,	2,	1,	4,	589,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #1587 = FFINT_U_W
  { 1588,	2,	1,	4,	590,	0, 0x6ULL, nullptr, nullptr, OperandInfo254 },  // Inst #1588 = FFQL_D
  { 1589,	2,	1,	4,	590,	0, 0x6ULL, nullptr, nullptr, OperandInfo255 },  // Inst #1589 = FFQL_W
  { 1590,	2,	1,	4,	591,	0, 0x6ULL, nullptr, nullptr, OperandInfo254 },  // Inst #1590 = FFQR_D
  { 1591,	2,	1,	4,	591,	0, 0x6ULL, nullptr, nullptr, OperandInfo255 },  // Inst #1591 = FFQR_W
  { 1592,	2,	1,	4,	544,	0, 0x6ULL, nullptr, nullptr, OperandInfo256 },  // Inst #1592 = FILL_B
  { 1593,	2,	1,	4,	544,	0, 0x6ULL, nullptr, nullptr, OperandInfo257 },  // Inst #1593 = FILL_D
  { 1594,	2,	1,	4,	544,	0, 0x6ULL, nullptr, nullptr, OperandInfo258 },  // Inst #1594 = FILL_H
  { 1595,	2,	1,	4,	544,	0, 0x6ULL, nullptr, nullptr, OperandInfo259 },  // Inst #1595 = FILL_W
  { 1596,	2,	1,	4,	604,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #1596 = FLOG2_D
  { 1597,	2,	1,	4,	604,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #1597 = FLOG2_W
  { 1598,	2,	1,	4,	718,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1598 = FLOOR_L_D64
  { 1599,	2,	1,	4,	1310,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1599 = FLOOR_L_D_MMR6
  { 1600,	2,	1,	4,	718,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #1600 = FLOOR_L_S
  { 1601,	2,	1,	4,	1310,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #1601 = FLOOR_L_S_MMR6
  { 1602,	2,	1,	4,	718,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #1602 = FLOOR_W_D32
  { 1603,	2,	1,	4,	718,	0, 0x4ULL, nullptr, nullptr, OperandInfo204 },  // Inst #1603 = FLOOR_W_D64
  { 1604,	2,	1,	4,	1310,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #1604 = FLOOR_W_D_MMR6
  { 1605,	2,	1,	4,	1248,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #1605 = FLOOR_W_MM
  { 1606,	2,	1,	4,	718,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1606 = FLOOR_W_S
  { 1607,	2,	1,	4,	1248,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1607 = FLOOR_W_S_MM
  { 1608,	2,	1,	4,	1310,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1608 = FLOOR_W_S_MMR6
  { 1609,	4,	1,	4,	656,	0, 0x6ULL, nullptr, nullptr, OperandInfo57 },  // Inst #1609 = FMADD_D
  { 1610,	4,	1,	4,	656,	0, 0x6ULL, nullptr, nullptr, OperandInfo58 },  // Inst #1610 = FMADD_W
  { 1611,	3,	1,	4,	600,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1611 = FMAX_A_D
  { 1612,	3,	1,	4,	600,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1612 = FMAX_A_W
  { 1613,	3,	1,	4,	601,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1613 = FMAX_D
  { 1614,	3,	1,	4,	601,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1614 = FMAX_W
  { 1615,	3,	1,	4,	602,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1615 = FMIN_A_D
  { 1616,	3,	1,	4,	602,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1616 = FMIN_A_W
  { 1617,	3,	1,	4,	603,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1617 = FMIN_D
  { 1618,	3,	1,	4,	603,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1618 = FMIN_W
  { 1619,	2,	1,	4,	535,	0|(1ULL<<MCID::MoveReg), 0x4ULL, nullptr, nullptr, OperandInfo246 },  // Inst #1619 = FMOV_D32
  { 1620,	2,	1,	4,	1276,	0, 0x4ULL, nullptr, nullptr, OperandInfo246 },  // Inst #1620 = FMOV_D32_MM
  { 1621,	2,	1,	4,	535,	0|(1ULL<<MCID::MoveReg), 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1621 = FMOV_D64
  { 1622,	2,	1,	4,	1276,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1622 = FMOV_D64_MM
  { 1623,	2,	1,	4,	1336,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1623 = FMOV_D_MMR6
  { 1624,	2,	1,	4,	536,	0|(1ULL<<MCID::MoveReg), 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1624 = FMOV_S
  { 1625,	2,	1,	4,	1277,	0|(1ULL<<MCID::MoveReg), 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1625 = FMOV_S_MM
  { 1626,	2,	1,	4,	1333,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1626 = FMOV_S_MMR6
  { 1627,	4,	1,	4,	657,	0, 0x6ULL, nullptr, nullptr, OperandInfo57 },  // Inst #1627 = FMSUB_D
  { 1628,	4,	1,	4,	657,	0, 0x6ULL, nullptr, nullptr, OperandInfo58 },  // Inst #1628 = FMSUB_W
  { 1629,	3,	1,	4,	662,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1629 = FMUL_D
  { 1630,	3,	1,	4,	631,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo247 },  // Inst #1630 = FMUL_D32
  { 1631,	3,	1,	4,	1278,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo247 },  // Inst #1631 = FMUL_D32_MM
  { 1632,	3,	1,	4,	631,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1632 = FMUL_D64
  { 1633,	3,	1,	4,	1278,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1633 = FMUL_D64_MM
  { 1634,	3,	1,	4,	632,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1634 = FMUL_PS64
  { 1635,	3,	1,	4,	633,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1635 = FMUL_S
  { 1636,	3,	1,	4,	1279,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1636 = FMUL_S_MM
  { 1637,	3,	1,	4,	1334,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1637 = FMUL_S_MMR6
  { 1638,	3,	1,	4,	662,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1638 = FMUL_W
  { 1639,	2,	1,	4,	537,	0, 0x4ULL, nullptr, nullptr, OperandInfo246 },  // Inst #1639 = FNEG_D32
  { 1640,	2,	1,	4,	1273,	0, 0x4ULL, nullptr, nullptr, OperandInfo246 },  // Inst #1640 = FNEG_D32_MM
  { 1641,	2,	1,	4,	537,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1641 = FNEG_D64
  { 1642,	2,	1,	4,	1273,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1642 = FNEG_D64_MM
  { 1643,	2,	1,	4,	537,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1643 = FNEG_S
  { 1644,	2,	1,	4,	1273,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1644 = FNEG_S_MM
  { 1645,	2,	1,	4,	1300,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1645 = FNEG_S_MMR6
  { 1646,	3,	2,	4,	1066,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #1646 = FORK
  { 1647,	2,	1,	4,	650,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #1647 = FRCP_D
  { 1648,	2,	1,	4,	650,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #1648 = FRCP_W
  { 1649,	2,	1,	4,	593,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #1649 = FRINT_D
  { 1650,	2,	1,	4,	593,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #1650 = FRINT_W
  { 1651,	2,	1,	4,	651,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #1651 = FRSQRT_D
  { 1652,	2,	1,	4,	651,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #1652 = FRSQRT_W
  { 1653,	3,	1,	4,	571,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1653 = FSAF_D
  { 1654,	3,	1,	4,	571,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1654 = FSAF_W
  { 1655,	3,	1,	4,	571,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1655 = FSEQ_D
  { 1656,	3,	1,	4,	571,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1656 = FSEQ_W
  { 1657,	3,	1,	4,	571,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1657 = FSLE_D
  { 1658,	3,	1,	4,	571,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1658 = FSLE_W
  { 1659,	3,	1,	4,	571,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1659 = FSLT_D
  { 1660,	3,	1,	4,	571,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1660 = FSLT_W
  { 1661,	3,	1,	4,	571,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1661 = FSNE_D
  { 1662,	3,	1,	4,	571,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1662 = FSNE_W
  { 1663,	3,	1,	4,	571,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1663 = FSOR_D
  { 1664,	3,	1,	4,	571,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1664 = FSOR_W
  { 1665,	2,	1,	4,	661,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #1665 = FSQRT_D
  { 1666,	2,	1,	4,	649,	0, 0x4ULL, nullptr, nullptr, OperandInfo246 },  // Inst #1666 = FSQRT_D32
  { 1667,	2,	1,	4,	1287,	0, 0x4ULL, nullptr, nullptr, OperandInfo246 },  // Inst #1667 = FSQRT_D32_MM
  { 1668,	2,	1,	4,	649,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1668 = FSQRT_D64
  { 1669,	2,	1,	4,	1287,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #1669 = FSQRT_D64_MM
  { 1670,	2,	1,	4,	648,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1670 = FSQRT_S
  { 1671,	2,	1,	4,	1286,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #1671 = FSQRT_S_MM
  { 1672,	2,	1,	4,	660,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #1672 = FSQRT_W
  { 1673,	3,	1,	4,	664,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1673 = FSUB_D
  { 1674,	3,	1,	4,	634,	0, 0x4ULL, nullptr, nullptr, OperandInfo247 },  // Inst #1674 = FSUB_D32
  { 1675,	3,	1,	4,	1280,	0, 0x4ULL, nullptr, nullptr, OperandInfo247 },  // Inst #1675 = FSUB_D32_MM
  { 1676,	3,	1,	4,	634,	0, 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1676 = FSUB_D64
  { 1677,	3,	1,	4,	1280,	0, 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1677 = FSUB_D64_MM
  { 1678,	3,	1,	4,	635,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1678 = FSUB_PS64
  { 1679,	3,	1,	4,	636,	0, 0x4ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1679 = FSUB_S
  { 1680,	3,	1,	4,	1281,	0, 0x4ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1680 = FSUB_S_MM
  { 1681,	3,	1,	4,	1335,	0, 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1681 = FSUB_S_MMR6
  { 1682,	3,	1,	4,	664,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1682 = FSUB_W
  { 1683,	3,	1,	4,	572,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1683 = FSUEQ_D
  { 1684,	3,	1,	4,	572,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1684 = FSUEQ_W
  { 1685,	3,	1,	4,	573,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1685 = FSULE_D
  { 1686,	3,	1,	4,	573,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1686 = FSULE_W
  { 1687,	3,	1,	4,	574,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1687 = FSULT_D
  { 1688,	3,	1,	4,	574,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1688 = FSULT_W
  { 1689,	3,	1,	4,	575,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1689 = FSUNE_D
  { 1690,	3,	1,	4,	575,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1690 = FSUNE_W
  { 1691,	3,	1,	4,	576,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1691 = FSUN_D
  { 1692,	3,	1,	4,	576,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1692 = FSUN_W
  { 1693,	2,	1,	4,	592,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #1693 = FTINT_S_D
  { 1694,	2,	1,	4,	592,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #1694 = FTINT_S_W
  { 1695,	2,	1,	4,	592,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #1695 = FTINT_U_D
  { 1696,	2,	1,	4,	592,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #1696 = FTINT_U_W
  { 1697,	3,	1,	4,	594,	0, 0x6ULL, nullptr, nullptr, OperandInfo252 },  // Inst #1697 = FTQ_H
  { 1698,	3,	1,	4,	594,	0, 0x6ULL, nullptr, nullptr, OperandInfo253 },  // Inst #1698 = FTQ_W
  { 1699,	2,	1,	4,	595,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #1699 = FTRUNC_S_D
  { 1700,	2,	1,	4,	595,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #1700 = FTRUNC_S_W
  { 1701,	2,	1,	4,	595,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #1701 = FTRUNC_U_D
  { 1702,	2,	1,	4,	595,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #1702 = FTRUNC_U_W
  { 1703,	1,	0,	4,	1089,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1703 = GINVI
  { 1704,	1,	0,	4,	1143,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1704 = GINVI_MMR6
  { 1705,	2,	0,	4,	1090,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #1705 = GINVT
  { 1706,	2,	0,	4,	1144,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #1706 = GINVT_MMR6
  { 1707,	3,	1,	4,	615,	0, 0x6ULL, nullptr, nullptr, OperandInfo235 },  // Inst #1707 = HADD_S_D
  { 1708,	3,	1,	4,	615,	0, 0x6ULL, nullptr, nullptr, OperandInfo236 },  // Inst #1708 = HADD_S_H
  { 1709,	3,	1,	4,	615,	0, 0x6ULL, nullptr, nullptr, OperandInfo237 },  // Inst #1709 = HADD_S_W
  { 1710,	3,	1,	4,	615,	0, 0x6ULL, nullptr, nullptr, OperandInfo235 },  // Inst #1710 = HADD_U_D
  { 1711,	3,	1,	4,	615,	0, 0x6ULL, nullptr, nullptr, OperandInfo236 },  // Inst #1711 = HADD_U_H
  { 1712,	3,	1,	4,	615,	0, 0x6ULL, nullptr, nullptr, OperandInfo237 },  // Inst #1712 = HADD_U_W
  { 1713,	3,	1,	4,	616,	0, 0x6ULL, nullptr, nullptr, OperandInfo235 },  // Inst #1713 = HSUB_S_D
  { 1714,	3,	1,	4,	616,	0, 0x6ULL, nullptr, nullptr, OperandInfo236 },  // Inst #1714 = HSUB_S_H
  { 1715,	3,	1,	4,	616,	0, 0x6ULL, nullptr, nullptr, OperandInfo237 },  // Inst #1715 = HSUB_S_W
  { 1716,	3,	1,	4,	616,	0, 0x6ULL, nullptr, nullptr, OperandInfo235 },  // Inst #1716 = HSUB_U_D
  { 1717,	3,	1,	4,	616,	0, 0x6ULL, nullptr, nullptr, OperandInfo236 },  // Inst #1717 = HSUB_U_H
  { 1718,	3,	1,	4,	616,	0, 0x6ULL, nullptr, nullptr, OperandInfo237 },  // Inst #1718 = HSUB_U_W
  { 1719,	1,	0,	4,	420,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2 },  // Inst #1719 = HYPCALL
  { 1720,	1,	0,	4,	1069,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2 },  // Inst #1720 = HYPCALL_MM
  { 1721,	3,	1,	4,	606,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1721 = ILVEV_B
  { 1722,	3,	1,	4,	606,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1722 = ILVEV_D
  { 1723,	3,	1,	4,	606,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1723 = ILVEV_H
  { 1724,	3,	1,	4,	606,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1724 = ILVEV_W
  { 1725,	3,	1,	4,	605,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1725 = ILVL_B
  { 1726,	3,	1,	4,	605,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1726 = ILVL_D
  { 1727,	3,	1,	4,	605,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1727 = ILVL_H
  { 1728,	3,	1,	4,	605,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1728 = ILVL_W
  { 1729,	3,	1,	4,	606,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1729 = ILVOD_B
  { 1730,	3,	1,	4,	606,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1730 = ILVOD_D
  { 1731,	3,	1,	4,	606,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1731 = ILVOD_H
  { 1732,	3,	1,	4,	606,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1732 = ILVOD_W
  { 1733,	3,	1,	4,	605,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1733 = ILVR_B
  { 1734,	3,	1,	4,	605,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1734 = ILVR_D
  { 1735,	3,	1,	4,	605,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1735 = ILVR_H
  { 1736,	3,	1,	4,	605,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1736 = ILVR_W
  { 1737,	5,	1,	4,	495,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo260 },  // Inst #1737 = INS
  { 1738,	4,	1,	4,	518,	0, 0x6ULL, nullptr, nullptr, OperandInfo261 },  // Inst #1738 = INSERT_B
  { 1739,	4,	1,	4,	518,	0, 0x6ULL, nullptr, nullptr, OperandInfo262 },  // Inst #1739 = INSERT_D
  { 1740,	4,	1,	4,	518,	0, 0x6ULL, nullptr, nullptr, OperandInfo263 },  // Inst #1740 = INSERT_H
  { 1741,	4,	1,	4,	518,	0, 0x6ULL, nullptr, nullptr, OperandInfo264 },  // Inst #1741 = INSERT_W
  { 1742,	3,	1,	4,	1353,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList18, nullptr, OperandInfo265 },  // Inst #1742 = INSV
  { 1743,	5,	1,	4,	607,	0, 0x6ULL, nullptr, nullptr, OperandInfo266 },  // Inst #1743 = INSVE_B
  { 1744,	5,	1,	4,	607,	0, 0x6ULL, nullptr, nullptr, OperandInfo267 },  // Inst #1744 = INSVE_D
  { 1745,	5,	1,	4,	607,	0, 0x6ULL, nullptr, nullptr, OperandInfo268 },  // Inst #1745 = INSVE_H
  { 1746,	5,	1,	4,	607,	0, 0x6ULL, nullptr, nullptr, OperandInfo269 },  // Inst #1746 = INSVE_W
  { 1747,	3,	1,	4,	1548,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList18, nullptr, OperandInfo265 },  // Inst #1747 = INSV_MM
  { 1748,	5,	1,	4,	747,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo260 },  // Inst #1748 = INS_MM
  { 1749,	5,	1,	4,	788,	0, 0x1ULL, nullptr, nullptr, OperandInfo260 },  // Inst #1749 = INS_MMR6
  { 1750,	1,	0,	4,	922,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x13ULL, nullptr, ImplicitList2, OperandInfo2 },  // Inst #1750 = J
  { 1751,	1,	0,	4,	406,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x13ULL, nullptr, ImplicitList3, OperandInfo2 },  // Inst #1751 = JAL
  { 1752,	2,	1,	4,	407,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::HasPostISelHook)|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, ImplicitList3, OperandInfo43 },  // Inst #1752 = JALR
  { 1753,	1,	0,	2,	959,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::HasPostISelHook), 0x0ULL, nullptr, ImplicitList3, OperandInfo56 },  // Inst #1753 = JALR16_MM
  { 1754,	2,	1,	4,	1012,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::HasPostISelHook)|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, ImplicitList3, OperandInfo120 },  // Inst #1754 = JALR64
  { 1755,	1,	0,	2,	1001,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::HasPostISelHook), 0x0ULL, nullptr, ImplicitList3, OperandInfo56 },  // Inst #1755 = JALRC16_MMR6
  { 1756,	2,	1,	4,	1002,	0|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo43 },  // Inst #1756 = JALRC_HB_MMR6
  { 1757,	2,	1,	4,	1003,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList3, OperandInfo43 },  // Inst #1757 = JALRC_MMR6
  { 1758,	1,	0,	2,	960,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, OperandInfo56 },  // Inst #1758 = JALRS16_MM
  { 1759,	2,	1,	4,	960,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList3, OperandInfo43 },  // Inst #1759 = JALRS_MM
  { 1760,	2,	1,	4,	408,	0|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x13ULL, nullptr, nullptr, OperandInfo43 },  // Inst #1760 = JALR_HB
  { 1761,	2,	1,	4,	1013,	0|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x13ULL, nullptr, nullptr, OperandInfo120 },  // Inst #1761 = JALR_HB64
  { 1762,	2,	1,	4,	959,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::HasPostISelHook)|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, ImplicitList3, OperandInfo43 },  // Inst #1762 = JALR_MM
  { 1763,	1,	0,	4,	961,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList3, OperandInfo2 },  // Inst #1763 = JALS_MM
  { 1764,	1,	0,	4,	409,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x13ULL, nullptr, ImplicitList3, OperandInfo2 },  // Inst #1764 = JALX
  { 1765,	1,	0,	4,	962,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x13ULL, nullptr, ImplicitList3, OperandInfo2 },  // Inst #1765 = JALX_MM
  { 1766,	1,	0,	4,	962,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x13ULL, nullptr, ImplicitList3, OperandInfo2 },  // Inst #1766 = JAL_MM
  { 1767,	2,	0,	4,	928,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList3, OperandInfo112 },  // Inst #1767 = JIALC
  { 1768,	2,	0,	4,	1021,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList3, OperandInfo110 },  // Inst #1768 = JIALC64
  { 1769,	2,	0,	4,	1004,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList3, OperandInfo112 },  // Inst #1769 = JIALC_MMR6
  { 1770,	2,	0,	4,	933,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo112 },  // Inst #1770 = JIC
  { 1771,	2,	0,	4,	1019,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList2, OperandInfo110 },  // Inst #1771 = JIC64
  { 1772,	2,	0,	4,	992,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo112 },  // Inst #1772 = JIC_MMR6
  { 1773,	1,	0,	4,	923,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1773 = JR
  { 1774,	1,	0,	2,	954,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1774 = JR16_MM
  { 1775,	1,	0,	4,	1011,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, nullptr, OperandInfo93 },  // Inst #1775 = JR64
  { 1776,	1,	0,	2,	993,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #1776 = JRADDIUSP
  { 1777,	1,	0,	2,	994,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1777 = JRC16_MM
  { 1778,	1,	0,	2,	995,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1778 = JRC16_MMR6
  { 1779,	1,	0,	2,	993,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #1779 = JRCADDIUSP_MMR6
  { 1780,	1,	0,	4,	386,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x13ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1780 = JR_HB
  { 1781,	1,	0,	4,	1014,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x13ULL, nullptr, nullptr, OperandInfo93 },  // Inst #1781 = JR_HB64
  { 1782,	1,	0,	4,	1022,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo93 },  // Inst #1782 = JR_HB64_R6
  { 1783,	1,	0,	4,	934,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1783 = JR_HB_R6
  { 1784,	1,	0,	4,	954,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, nullptr, OperandInfo56 },  // Inst #1784 = JR_MM
  { 1785,	1,	0,	4,	955,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x13ULL, nullptr, ImplicitList2, OperandInfo2 },  // Inst #1785 = J_MM
  { 1786,	1,	0,	6,	941,	0|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList3, OperandInfo2 },  // Inst #1786 = Jal16
  { 1787,	1,	0,	6,	941,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList3, OperandInfo2 },  // Inst #1787 = JalB16
  { 1788,	0,	0,	2,	939,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #1788 = JrRa16
  { 1789,	0,	0,	2,	939,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #1789 = JrcRa16
  { 1790,	1,	0,	2,	939,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo270 },  // Inst #1790 = JrcRx16
  { 1791,	1,	0,	2,	942,	0|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList3, OperandInfo270 },  // Inst #1791 = JumpLinkReg16
  { 1792,	3,	1,	4,	431,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1792 = LB
  { 1793,	3,	1,	4,	1166,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #1793 = LB64
  { 1794,	3,	1,	4,	441,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1794 = LBE
  { 1795,	3,	1,	4,	1091,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1795 = LBE_MM
  { 1796,	3,	1,	2,	1118,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo271 },  // Inst #1796 = LBU16_MM
  { 1797,	3,	1,	4,	1389,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo272 },  // Inst #1797 = LBUX
  { 1798,	3,	1,	4,	1549,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo272 },  // Inst #1798 = LBUX_MM
  { 1799,	3,	1,	4,	1145,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1799 = LBU_MMR6
  { 1800,	3,	1,	4,	1119,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1800 = LB_MM
  { 1801,	3,	1,	4,	1146,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1801 = LB_MMR6
  { 1802,	3,	1,	4,	432,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1802 = LBu
  { 1803,	3,	1,	4,	1167,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #1803 = LBu64
  { 1804,	3,	1,	4,	442,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1804 = LBuE
  { 1805,	3,	1,	4,	1092,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1805 = LBuE_MM
  { 1806,	3,	1,	4,	1118,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1806 = LBu_MM
  { 1807,	3,	1,	4,	1163,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #1807 = LD
  { 1808,	3,	1,	4,	710,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo156 },  // Inst #1808 = LDC1
  { 1809,	3,	1,	4,	710,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo273 },  // Inst #1809 = LDC164
  { 1810,	3,	1,	4,	1339,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo273 },  // Inst #1810 = LDC1_D64_MMR6
  { 1811,	3,	1,	4,	1296,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo156 },  // Inst #1811 = LDC1_MM
  { 1812,	3,	1,	4,	439,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo274 },  // Inst #1812 = LDC2
  { 1813,	3,	1,	4,	1147,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo275 },  // Inst #1813 = LDC2_MMR6
  { 1814,	3,	1,	4,	1081,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo274 },  // Inst #1814 = LDC2_R6
  { 1815,	3,	1,	4,	440,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo276 },  // Inst #1815 = LDC3
  { 1816,	2,	1,	4,	547,	0|(1ULL<<MCID::Rematerializable), 0x6ULL, nullptr, nullptr, OperandInfo277 },  // Inst #1816 = LDI_B
  { 1817,	2,	1,	4,	547,	0|(1ULL<<MCID::Rematerializable), 0x6ULL, nullptr, nullptr, OperandInfo278 },  // Inst #1817 = LDI_D
  { 1818,	2,	1,	4,	547,	0|(1ULL<<MCID::Rematerializable), 0x6ULL, nullptr, nullptr, OperandInfo279 },  // Inst #1818 = LDI_H
  { 1819,	2,	1,	4,	547,	0|(1ULL<<MCID::Rematerializable), 0x6ULL, nullptr, nullptr, OperandInfo280 },  // Inst #1819 = LDI_W
  { 1820,	4,	1,	4,	1173,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo281 },  // Inst #1820 = LDL
  { 1821,	2,	1,	4,	1185,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo110 },  // Inst #1821 = LDPC
  { 1822,	4,	1,	4,	1174,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo281 },  // Inst #1822 = LDR
  { 1823,	3,	1,	4,	711,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo282 },  // Inst #1823 = LDXC1
  { 1824,	3,	1,	4,	711,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo283 },  // Inst #1824 = LDXC164
  { 1825,	3,	1,	4,	715,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo284 },  // Inst #1825 = LD_B
  { 1826,	3,	1,	4,	715,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo285 },  // Inst #1826 = LD_D
  { 1827,	3,	1,	4,	715,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo286 },  // Inst #1827 = LD_H
  { 1828,	3,	1,	4,	715,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo287 },  // Inst #1828 = LD_W
  { 1829,	3,	1,	4,	724,	0, 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1829 = LEA_ADDiu
  { 1830,	3,	1,	4,	840,	0, 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #1830 = LEA_ADDiu64
  { 1831,	3,	1,	4,	738,	0, 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1831 = LEA_ADDiu_MM
  { 1832,	3,	1,	4,	433,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1832 = LH
  { 1833,	3,	1,	4,	1168,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #1833 = LH64
  { 1834,	3,	1,	4,	443,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1834 = LHE
  { 1835,	3,	1,	4,	1093,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1835 = LHE_MM
  { 1836,	3,	1,	2,	1120,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo271 },  // Inst #1836 = LHU16_MM
  { 1837,	3,	1,	4,	1390,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo272 },  // Inst #1837 = LHX
  { 1838,	3,	1,	4,	1550,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo272 },  // Inst #1838 = LHX_MM
  { 1839,	3,	1,	4,	1121,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1839 = LH_MM
  { 1840,	3,	1,	4,	434,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1840 = LHu
  { 1841,	3,	1,	4,	1169,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #1841 = LHu64
  { 1842,	3,	1,	4,	444,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1842 = LHuE
  { 1843,	3,	1,	4,	1094,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1843 = LHuE_MM
  { 1844,	3,	1,	4,	1120,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1844 = LHu_MM
  { 1845,	2,	1,	2,	748,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo167 },  // Inst #1845 = LI16_MM
  { 1846,	2,	1,	2,	789,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo167 },  // Inst #1846 = LI16_MMR6
  { 1847,	3,	1,	4,	436,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1847 = LL
  { 1848,	3,	1,	4,	1164,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1848 = LL64
  { 1849,	3,	1,	4,	1187,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo288 },  // Inst #1849 = LL64_R6
  { 1850,	3,	1,	4,	1164,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #1850 = LLD
  { 1851,	3,	1,	4,	1186,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo289 },  // Inst #1851 = LLD_R6
  { 1852,	3,	1,	4,	446,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1852 = LLE
  { 1853,	3,	1,	4,	1098,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1853 = LLE_MM
  { 1854,	3,	1,	4,	1122,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1854 = LL_MM
  { 1855,	3,	1,	4,	1148,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1855 = LL_MMR6
  { 1856,	3,	1,	4,	1082,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo288 },  // Inst #1856 = LL_R6
  { 1857,	4,	1,	4,	513,	0, 0x6ULL, nullptr, nullptr, OperandInfo178 },  // Inst #1857 = LSA
  { 1858,	4,	1,	4,	790,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo178 },  // Inst #1858 = LSA_MMR6
  { 1859,	4,	1,	4,	733,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo178 },  // Inst #1859 = LSA_R6
  { 1860,	2,	1,	4,	791,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo112 },  // Inst #1860 = LUI_MMR6
  { 1861,	3,	1,	4,	714,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo282 },  // Inst #1861 = LUXC1
  { 1862,	3,	1,	4,	714,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo283 },  // Inst #1862 = LUXC164
  { 1863,	3,	1,	4,	1297,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo283 },  // Inst #1863 = LUXC1_MM
  { 1864,	2,	1,	4,	365,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo112 },  // Inst #1864 = LUi
  { 1865,	2,	1,	4,	841,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo110 },  // Inst #1865 = LUi64
  { 1866,	2,	1,	4,	749,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo112 },  // Inst #1866 = LUi_MM
  { 1867,	3,	1,	4,	435,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1867 = LW
  { 1868,	3,	1,	2,	1123,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo271 },  // Inst #1868 = LW16_MM
  { 1869,	3,	1,	4,	1170,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #1869 = LW64
  { 1870,	3,	1,	4,	712,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo290 },  // Inst #1870 = LWC1
  { 1871,	3,	1,	4,	1298,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo290 },  // Inst #1871 = LWC1_MM
  { 1872,	3,	1,	4,	437,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo274 },  // Inst #1872 = LWC2
  { 1873,	3,	1,	4,	1150,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo275 },  // Inst #1873 = LWC2_MMR6
  { 1874,	3,	1,	4,	1083,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo274 },  // Inst #1874 = LWC2_R6
  { 1875,	3,	1,	4,	438,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo276 },  // Inst #1875 = LWC3
  { 1876,	3,	1,	4,	1343,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo291 },  // Inst #1876 = LWDSP
  { 1877,	3,	1,	4,	1506,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo291 },  // Inst #1877 = LWDSP_MM
  { 1878,	3,	1,	4,	445,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1878 = LWE
  { 1879,	3,	1,	4,	1095,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1879 = LWE_MM
  { 1880,	3,	1,	2,	1123,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo292 },  // Inst #1880 = LWGP_MM
  { 1881,	4,	1,	4,	448,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo293 },  // Inst #1881 = LWL
  { 1882,	4,	1,	4,	1171,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo281 },  // Inst #1882 = LWL64
  { 1883,	4,	1,	4,	450,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo293 },  // Inst #1883 = LWLE
  { 1884,	4,	1,	4,	1096,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo293 },  // Inst #1884 = LWLE_MM
  { 1885,	4,	1,	4,	1124,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo293 },  // Inst #1885 = LWL_MM
  { 1886,	3,	1,	2,	1125,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo294 },  // Inst #1886 = LWM16_MM
  { 1887,	3,	1,	2,	1149,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo294 },  // Inst #1887 = LWM16_MMR6
  { 1888,	3,	1,	4,	1125,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo108 },  // Inst #1888 = LWM32_MM
  { 1889,	2,	1,	4,	447,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #1889 = LWPC
  { 1890,	2,	1,	4,	1151,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #1890 = LWPC_MMR6
  { 1891,	4,	2,	4,	1126,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo295 },  // Inst #1891 = LWP_MM
  { 1892,	4,	1,	4,	449,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo293 },  // Inst #1892 = LWR
  { 1893,	4,	1,	4,	1172,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo281 },  // Inst #1893 = LWR64
  { 1894,	4,	1,	4,	451,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo293 },  // Inst #1894 = LWRE
  { 1895,	4,	1,	4,	1097,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo293 },  // Inst #1895 = LWRE_MM
  { 1896,	4,	1,	4,	1127,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo293 },  // Inst #1896 = LWR_MM
  { 1897,	3,	1,	2,	1123,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo296 },  // Inst #1897 = LWSP_MM
  { 1898,	2,	1,	4,	1184,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #1898 = LWUPC
  { 1899,	3,	1,	4,	1128,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1899 = LWU_MM
  { 1900,	3,	1,	4,	1391,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo272 },  // Inst #1900 = LWX
  { 1901,	3,	1,	4,	713,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo297 },  // Inst #1901 = LWXC1
  { 1902,	3,	1,	4,	1299,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo297 },  // Inst #1902 = LWXC1_MM
  { 1903,	3,	1,	4,	1129,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo272 },  // Inst #1903 = LWXS_MM
  { 1904,	3,	1,	4,	1551,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo272 },  // Inst #1904 = LWX_MM
  { 1905,	3,	1,	4,	1123,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1905 = LW_MM
  { 1906,	3,	1,	4,	1152,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #1906 = LW_MMR6
  { 1907,	3,	1,	4,	1165,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #1907 = LWu
  { 1908,	3,	1,	4,	1109,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo298 },  // Inst #1908 = LbRxRyOffMemX16
  { 1909,	3,	1,	4,	1110,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo298 },  // Inst #1909 = LbuRxRyOffMemX16
  { 1910,	3,	1,	4,	1111,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo298 },  // Inst #1910 = LhRxRyOffMemX16
  { 1911,	3,	1,	4,	1112,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo298 },  // Inst #1911 = LhuRxRyOffMemX16
  { 1912,	2,	1,	2,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo181 },  // Inst #1912 = LiRxImm16
  { 1913,	2,	1,	4,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo181 },  // Inst #1913 = LiRxImmAlignX16
  { 1914,	2,	1,	4,	735,	0, 0x0ULL, nullptr, nullptr, OperandInfo181 },  // Inst #1914 = LiRxImmX16
  { 1915,	3,	1,	2,	1113,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo299 },  // Inst #1915 = LwRxPcTcp16
  { 1916,	3,	1,	4,	1113,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo299 },  // Inst #1916 = LwRxPcTcpX16
  { 1917,	3,	1,	4,	1113,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo298 },  // Inst #1917 = LwRxRyOffMemX16
  { 1918,	3,	1,	4,	1113,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo183 },  // Inst #1918 = LwRxSpImmX16
  { 1919,	2,	0,	4,	853,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList6, ImplicitList6, OperandInfo43 },  // Inst #1919 = MADD
  { 1920,	4,	1,	4,	1236,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo300 },  // Inst #1920 = MADDF_D
  { 1921,	4,	1,	4,	1329,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo300 },  // Inst #1921 = MADDF_D_MMR6
  { 1922,	4,	1,	4,	1234,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo301 },  // Inst #1922 = MADDF_S
  { 1923,	4,	1,	4,	1330,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo301 },  // Inst #1923 = MADDF_S_MMR6
  { 1924,	4,	1,	4,	671,	0, 0x6ULL, nullptr, nullptr, OperandInfo59 },  // Inst #1924 = MADDR_Q_H
  { 1925,	4,	1,	4,	671,	0, 0x6ULL, nullptr, nullptr, OperandInfo58 },  // Inst #1925 = MADDR_Q_W
  { 1926,	2,	0,	4,	854,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList6, ImplicitList6, OperandInfo43 },  // Inst #1926 = MADDU
  { 1927,	4,	1,	4,	1392,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1927 = MADDU_DSP
  { 1928,	4,	1,	4,	1552,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1928 = MADDU_DSP_MM
  { 1929,	2,	0,	4,	881,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList6, ImplicitList6, OperandInfo43 },  // Inst #1929 = MADDU_MM
  { 1930,	4,	1,	4,	669,	0, 0x6ULL, nullptr, nullptr, OperandInfo194 },  // Inst #1930 = MADDV_B
  { 1931,	4,	1,	4,	669,	0, 0x6ULL, nullptr, nullptr, OperandInfo57 },  // Inst #1931 = MADDV_D
  { 1932,	4,	1,	4,	669,	0, 0x6ULL, nullptr, nullptr, OperandInfo59 },  // Inst #1932 = MADDV_H
  { 1933,	4,	1,	4,	669,	0, 0x6ULL, nullptr, nullptr, OperandInfo58 },  // Inst #1933 = MADDV_W
  { 1934,	4,	1,	4,	677,	0, 0x4ULL, nullptr, nullptr, OperandInfo302 },  // Inst #1934 = MADD_D32
  { 1935,	4,	1,	4,	1254,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo302 },  // Inst #1935 = MADD_D32_MM
  { 1936,	4,	1,	4,	677,	0, 0x4ULL, nullptr, nullptr, OperandInfo303 },  // Inst #1936 = MADD_D64
  { 1937,	4,	1,	4,	1393,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1937 = MADD_DSP
  { 1938,	4,	1,	4,	1553,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #1938 = MADD_DSP_MM
  { 1939,	2,	0,	4,	880,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList6, ImplicitList6, OperandInfo43 },  // Inst #1939 = MADD_MM
  { 1940,	4,	1,	4,	672,	0, 0x6ULL, nullptr, nullptr, OperandInfo59 },  // Inst #1940 = MADD_Q_H
  { 1941,	4,	1,	4,	672,	0, 0x6ULL, nullptr, nullptr, OperandInfo58 },  // Inst #1941 = MADD_Q_W
  { 1942,	4,	1,	4,	678,	0, 0x4ULL, nullptr, nullptr, OperandInfo304 },  // Inst #1942 = MADD_S
  { 1943,	4,	1,	4,	1253,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo304 },  // Inst #1943 = MADD_S_MM
  { 1944,	4,	1,	4,	1394,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1944 = MAQ_SA_W_PHL
  { 1945,	4,	1,	4,	1554,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1945 = MAQ_SA_W_PHL_MM
  { 1946,	4,	1,	4,	1395,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1946 = MAQ_SA_W_PHR
  { 1947,	4,	1,	4,	1555,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1947 = MAQ_SA_W_PHR_MM
  { 1948,	4,	1,	4,	1396,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1948 = MAQ_S_W_PHL
  { 1949,	4,	1,	4,	1556,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1949 = MAQ_S_W_PHL_MM
  { 1950,	4,	1,	4,	1397,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1950 = MAQ_S_W_PHR
  { 1951,	4,	1,	4,	1557,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #1951 = MAQ_S_W_PHR_MM
  { 1952,	3,	1,	4,	1224,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1952 = MAXA_D
  { 1953,	3,	1,	4,	1320,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1953 = MAXA_D_MMR6
  { 1954,	3,	1,	4,	1223,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1954 = MAXA_S
  { 1955,	3,	1,	4,	1321,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1955 = MAXA_S_MMR6
  { 1956,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #1956 = MAXI_S_B
  { 1957,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #1957 = MAXI_S_D
  { 1958,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #1958 = MAXI_S_H
  { 1959,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #1959 = MAXI_S_W
  { 1960,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #1960 = MAXI_U_B
  { 1961,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #1961 = MAXI_U_D
  { 1962,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #1962 = MAXI_U_H
  { 1963,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #1963 = MAXI_U_W
  { 1964,	3,	1,	4,	619,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1964 = MAX_A_B
  { 1965,	3,	1,	4,	619,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1965 = MAX_A_D
  { 1966,	3,	1,	4,	619,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1966 = MAX_A_H
  { 1967,	3,	1,	4,	619,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1967 = MAX_A_W
  { 1968,	3,	1,	4,	1224,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1968 = MAX_D
  { 1969,	3,	1,	4,	1316,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo171 },  // Inst #1969 = MAX_D_MMR6
  { 1970,	3,	1,	4,	1223,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1970 = MAX_S
  { 1971,	3,	1,	4,	617,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1971 = MAX_S_B
  { 1972,	3,	1,	4,	617,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1972 = MAX_S_D
  { 1973,	3,	1,	4,	617,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1973 = MAX_S_H
  { 1974,	3,	1,	4,	1317,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #1974 = MAX_S_MMR6
  { 1975,	3,	1,	4,	617,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1975 = MAX_S_W
  { 1976,	3,	1,	4,	618,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #1976 = MAX_U_B
  { 1977,	3,	1,	4,	618,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #1977 = MAX_U_D
  { 1978,	3,	1,	4,	618,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #1978 = MAX_U_H
  { 1979,	3,	1,	4,	618,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #1979 = MAX_U_W
  { 1980,	3,	1,	4,	416,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo118 },  // Inst #1980 = MFC0
  { 1981,	3,	1,	4,	1041,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo118 },  // Inst #1981 = MFC0_MMR6
  { 1982,	2,	1,	4,	695,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo119 },  // Inst #1982 = MFC1
  { 1983,	2,	1,	4,	695,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo305 },  // Inst #1983 = MFC1_D64
  { 1984,	2,	1,	4,	1267,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo119 },  // Inst #1984 = MFC1_MM
  { 1985,	2,	1,	4,	1312,	0|(1ULL<<MCID::Bitcast), 0x6ULL, nullptr, nullptr, OperandInfo119 },  // Inst #1985 = MFC1_MMR6
  { 1986,	3,	1,	4,	418,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo306 },  // Inst #1986 = MFC2
  { 1987,	2,	1,	4,	1042,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo207 },  // Inst #1987 = MFC2_MMR6
  { 1988,	3,	1,	4,	421,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo118 },  // Inst #1988 = MFGC0
  { 1989,	3,	1,	4,	1076,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo118 },  // Inst #1989 = MFGC0_MM
  { 1990,	3,	1,	4,	1040,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo118 },  // Inst #1990 = MFHC0_MMR6
  { 1991,	2,	1,	4,	696,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo307 },  // Inst #1991 = MFHC1_D32
  { 1992,	2,	1,	4,	1268,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo307 },  // Inst #1992 = MFHC1_D32_MM
  { 1993,	2,	1,	4,	696,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo305 },  // Inst #1993 = MFHC1_D64
  { 1994,	2,	1,	4,	1268,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo305 },  // Inst #1994 = MFHC1_D64_MM
  { 1995,	2,	1,	4,	1042,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo207 },  // Inst #1995 = MFHC2_MMR6
  { 1996,	3,	1,	4,	422,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo118 },  // Inst #1996 = MFHGC0
  { 1997,	3,	1,	4,	1077,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo118 },  // Inst #1997 = MFHGC0_MM
  { 1998,	1,	1,	4,	478,	0|(1ULL<<MCID::MoveReg), 0x1ULL, ImplicitList19, nullptr, OperandInfo56 },  // Inst #1998 = MFHI
  { 1999,	1,	1,	2,	887,	0|(1ULL<<MCID::MoveReg), 0x0ULL, ImplicitList19, nullptr, OperandInfo56 },  // Inst #1999 = MFHI16_MM
  { 2000,	1,	1,	4,	906,	0|(1ULL<<MCID::MoveReg), 0x1ULL, ImplicitList20, nullptr, OperandInfo93 },  // Inst #2000 = MFHI64
  { 2001,	2,	1,	4,	1398,	0|(1ULL<<MCID::MoveReg), 0x6ULL, nullptr, nullptr, OperandInfo117 },  // Inst #2001 = MFHI_DSP
  { 2002,	2,	1,	4,	1558,	0, 0x6ULL, nullptr, nullptr, OperandInfo117 },  // Inst #2002 = MFHI_DSP_MM
  { 2003,	1,	1,	4,	887,	0|(1ULL<<MCID::MoveReg), 0x1ULL, ImplicitList19, nullptr, OperandInfo56 },  // Inst #2003 = MFHI_MM
  { 2004,	1,	1,	4,	478,	0|(1ULL<<MCID::MoveReg), 0x1ULL, ImplicitList19, nullptr, OperandInfo56 },  // Inst #2004 = MFLO
  { 2005,	1,	1,	2,	887,	0|(1ULL<<MCID::MoveReg), 0x0ULL, ImplicitList19, nullptr, OperandInfo56 },  // Inst #2005 = MFLO16_MM
  { 2006,	1,	1,	4,	906,	0|(1ULL<<MCID::MoveReg), 0x1ULL, ImplicitList20, nullptr, OperandInfo93 },  // Inst #2006 = MFLO64
  { 2007,	2,	1,	4,	1399,	0|(1ULL<<MCID::MoveReg), 0x6ULL, nullptr, nullptr, OperandInfo117 },  // Inst #2007 = MFLO_DSP
  { 2008,	2,	1,	4,	1559,	0, 0x6ULL, nullptr, nullptr, OperandInfo117 },  // Inst #2008 = MFLO_DSP_MM
  { 2009,	1,	1,	4,	887,	0|(1ULL<<MCID::MoveReg), 0x1ULL, ImplicitList19, nullptr, OperandInfo56 },  // Inst #2009 = MFLO_MM
  { 2010,	5,	1,	4,	1063,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo308 },  // Inst #2010 = MFTR
  { 2011,	3,	1,	4,	1225,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo171 },  // Inst #2011 = MINA_D
  { 2012,	3,	1,	4,	1322,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo171 },  // Inst #2012 = MINA_D_MMR6
  { 2013,	3,	1,	4,	1226,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #2013 = MINA_S
  { 2014,	3,	1,	4,	1323,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #2014 = MINA_S_MMR6
  { 2015,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2015 = MINI_S_B
  { 2016,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #2016 = MINI_S_D
  { 2017,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #2017 = MINI_S_H
  { 2018,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #2018 = MINI_S_W
  { 2019,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2019 = MINI_U_B
  { 2020,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #2020 = MINI_U_D
  { 2021,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #2021 = MINI_U_H
  { 2022,	3,	1,	4,	620,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #2022 = MINI_U_W
  { 2023,	3,	1,	4,	619,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2023 = MIN_A_B
  { 2024,	3,	1,	4,	619,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2024 = MIN_A_D
  { 2025,	3,	1,	4,	619,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2025 = MIN_A_H
  { 2026,	3,	1,	4,	619,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2026 = MIN_A_W
  { 2027,	3,	1,	4,	1226,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo171 },  // Inst #2027 = MIN_D
  { 2028,	3,	1,	4,	1318,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo171 },  // Inst #2028 = MIN_D_MMR6
  { 2029,	3,	1,	4,	1225,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #2029 = MIN_S
  { 2030,	3,	1,	4,	617,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2030 = MIN_S_B
  { 2031,	3,	1,	4,	617,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2031 = MIN_S_D
  { 2032,	3,	1,	4,	617,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2032 = MIN_S_H
  { 2033,	3,	1,	4,	1319,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #2033 = MIN_S_MMR6
  { 2034,	3,	1,	4,	617,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2034 = MIN_S_W
  { 2035,	3,	1,	4,	618,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2035 = MIN_U_B
  { 2036,	3,	1,	4,	618,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2036 = MIN_U_D
  { 2037,	3,	1,	4,	618,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2037 = MIN_U_H
  { 2038,	3,	1,	4,	618,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2038 = MIN_U_W
  { 2039,	3,	1,	4,	873,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2039 = MOD
  { 2040,	3,	1,	4,	1400,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2040 = MODSUB
  { 2041,	3,	1,	4,	1560,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2041 = MODSUB_MM
  { 2042,	3,	1,	4,	874,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2042 = MODU
  { 2043,	3,	1,	4,	896,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2043 = MODU_MMR6
  { 2044,	3,	1,	4,	897,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2044 = MOD_MMR6
  { 2045,	3,	1,	4,	613,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2045 = MOD_S_B
  { 2046,	3,	1,	4,	613,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2046 = MOD_S_D
  { 2047,	3,	1,	4,	613,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2047 = MOD_S_H
  { 2048,	3,	1,	4,	613,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2048 = MOD_S_W
  { 2049,	3,	1,	4,	613,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2049 = MOD_U_B
  { 2050,	3,	1,	4,	613,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2050 = MOD_U_D
  { 2051,	3,	1,	4,	613,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2051 = MOD_U_H
  { 2052,	3,	1,	4,	613,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2052 = MOD_U_W
  { 2053,	2,	1,	2,	750,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #2053 = MOVE16_MM
  { 2054,	2,	1,	2,	792,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #2054 = MOVE16_MMR6
  { 2055,	4,	2,	2,	751,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo309 },  // Inst #2055 = MOVEP_MM
  { 2056,	4,	2,	2,	1561,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo309 },  // Inst #2056 = MOVEP_MMR6
  { 2057,	2,	1,	4,	546,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo310 },  // Inst #2057 = MOVE_V
  { 2058,	4,	1,	4,	531,	0, 0x4ULL, nullptr, nullptr, OperandInfo311 },  // Inst #2058 = MOVF_D32
  { 2059,	4,	1,	4,	1238,	0, 0x4ULL, nullptr, nullptr, OperandInfo311 },  // Inst #2059 = MOVF_D32_MM
  { 2060,	4,	1,	4,	531,	0, 0x4ULL, nullptr, nullptr, OperandInfo312 },  // Inst #2060 = MOVF_D64
  { 2061,	4,	1,	4,	697,	0, 0x4ULL, nullptr, nullptr, OperandInfo313 },  // Inst #2061 = MOVF_I
  { 2062,	4,	1,	4,	1216,	0, 0x4ULL, nullptr, nullptr, OperandInfo314 },  // Inst #2062 = MOVF_I64
  { 2063,	4,	1,	4,	888,	0, 0x4ULL, nullptr, nullptr, OperandInfo313 },  // Inst #2063 = MOVF_I_MM
  { 2064,	4,	1,	4,	532,	0, 0x4ULL, nullptr, nullptr, OperandInfo315 },  // Inst #2064 = MOVF_S
  { 2065,	4,	1,	4,	1239,	0, 0x4ULL, nullptr, nullptr, OperandInfo315 },  // Inst #2065 = MOVF_S_MM
  { 2066,	4,	1,	4,	1218,	0, 0x4ULL, nullptr, nullptr, OperandInfo316 },  // Inst #2066 = MOVN_I64_D64
  { 2067,	4,	1,	4,	910,	0, 0x4ULL, nullptr, nullptr, OperandInfo317 },  // Inst #2067 = MOVN_I64_I
  { 2068,	4,	1,	4,	910,	0, 0x4ULL, nullptr, nullptr, OperandInfo318 },  // Inst #2068 = MOVN_I64_I64
  { 2069,	4,	1,	4,	1219,	0, 0x4ULL, nullptr, nullptr, OperandInfo319 },  // Inst #2069 = MOVN_I64_S
  { 2070,	4,	1,	4,	706,	0, 0x4ULL, nullptr, nullptr, OperandInfo320 },  // Inst #2070 = MOVN_I_D32
  { 2071,	4,	1,	4,	1240,	0, 0x4ULL, nullptr, nullptr, OperandInfo320 },  // Inst #2071 = MOVN_I_D32_MM
  { 2072,	4,	1,	4,	706,	0, 0x4ULL, nullptr, nullptr, OperandInfo321 },  // Inst #2072 = MOVN_I_D64
  { 2073,	4,	1,	4,	482,	0, 0x4ULL, nullptr, nullptr, OperandInfo322 },  // Inst #2073 = MOVN_I_I
  { 2074,	4,	1,	4,	910,	0, 0x4ULL, nullptr, nullptr, OperandInfo323 },  // Inst #2074 = MOVN_I_I64
  { 2075,	4,	1,	4,	1562,	0, 0x4ULL, nullptr, nullptr, OperandInfo322 },  // Inst #2075 = MOVN_I_MM
  { 2076,	4,	1,	4,	707,	0, 0x4ULL, nullptr, nullptr, OperandInfo324 },  // Inst #2076 = MOVN_I_S
  { 2077,	4,	1,	4,	1241,	0, 0x4ULL, nullptr, nullptr, OperandInfo324 },  // Inst #2077 = MOVN_I_S_MM
  { 2078,	4,	1,	4,	533,	0, 0x4ULL, nullptr, nullptr, OperandInfo311 },  // Inst #2078 = MOVT_D32
  { 2079,	4,	1,	4,	1242,	0, 0x4ULL, nullptr, nullptr, OperandInfo311 },  // Inst #2079 = MOVT_D32_MM
  { 2080,	4,	1,	4,	533,	0, 0x4ULL, nullptr, nullptr, OperandInfo312 },  // Inst #2080 = MOVT_D64
  { 2081,	4,	1,	4,	698,	0, 0x4ULL, nullptr, nullptr, OperandInfo313 },  // Inst #2081 = MOVT_I
  { 2082,	4,	1,	4,	1215,	0, 0x4ULL, nullptr, nullptr, OperandInfo314 },  // Inst #2082 = MOVT_I64
  { 2083,	4,	1,	4,	889,	0, 0x4ULL, nullptr, nullptr, OperandInfo313 },  // Inst #2083 = MOVT_I_MM
  { 2084,	4,	1,	4,	534,	0, 0x4ULL, nullptr, nullptr, OperandInfo315 },  // Inst #2084 = MOVT_S
  { 2085,	4,	1,	4,	1243,	0, 0x4ULL, nullptr, nullptr, OperandInfo315 },  // Inst #2085 = MOVT_S_MM
  { 2086,	4,	1,	4,	1220,	0, 0x4ULL, nullptr, nullptr, OperandInfo316 },  // Inst #2086 = MOVZ_I64_D64
  { 2087,	4,	1,	4,	911,	0, 0x4ULL, nullptr, nullptr, OperandInfo317 },  // Inst #2087 = MOVZ_I64_I
  { 2088,	4,	1,	4,	911,	0, 0x4ULL, nullptr, nullptr, OperandInfo318 },  // Inst #2088 = MOVZ_I64_I64
  { 2089,	4,	1,	4,	1217,	0, 0x4ULL, nullptr, nullptr, OperandInfo319 },  // Inst #2089 = MOVZ_I64_S
  { 2090,	4,	1,	4,	708,	0, 0x4ULL, nullptr, nullptr, OperandInfo320 },  // Inst #2090 = MOVZ_I_D32
  { 2091,	4,	1,	4,	1244,	0, 0x4ULL, nullptr, nullptr, OperandInfo320 },  // Inst #2091 = MOVZ_I_D32_MM
  { 2092,	4,	1,	4,	708,	0, 0x4ULL, nullptr, nullptr, OperandInfo321 },  // Inst #2092 = MOVZ_I_D64
  { 2093,	4,	1,	4,	483,	0, 0x4ULL, nullptr, nullptr, OperandInfo322 },  // Inst #2093 = MOVZ_I_I
  { 2094,	4,	1,	4,	911,	0, 0x4ULL, nullptr, nullptr, OperandInfo323 },  // Inst #2094 = MOVZ_I_I64
  { 2095,	4,	1,	4,	1563,	0, 0x4ULL, nullptr, nullptr, OperandInfo322 },  // Inst #2095 = MOVZ_I_MM
  { 2096,	4,	1,	4,	709,	0, 0x4ULL, nullptr, nullptr, OperandInfo324 },  // Inst #2096 = MOVZ_I_S
  { 2097,	4,	1,	4,	1245,	0, 0x4ULL, nullptr, nullptr, OperandInfo324 },  // Inst #2097 = MOVZ_I_S_MM
  { 2098,	2,	0,	4,	855,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList6, ImplicitList6, OperandInfo43 },  // Inst #2098 = MSUB
  { 2099,	4,	1,	4,	1237,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo300 },  // Inst #2099 = MSUBF_D
  { 2100,	4,	1,	4,	1331,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo300 },  // Inst #2100 = MSUBF_D_MMR6
  { 2101,	4,	1,	4,	1235,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo301 },  // Inst #2101 = MSUBF_S
  { 2102,	4,	1,	4,	1332,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo301 },  // Inst #2102 = MSUBF_S_MMR6
  { 2103,	4,	1,	4,	673,	0, 0x6ULL, nullptr, nullptr, OperandInfo59 },  // Inst #2103 = MSUBR_Q_H
  { 2104,	4,	1,	4,	673,	0, 0x6ULL, nullptr, nullptr, OperandInfo58 },  // Inst #2104 = MSUBR_Q_W
  { 2105,	2,	0,	4,	856,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList6, ImplicitList6, OperandInfo43 },  // Inst #2105 = MSUBU
  { 2106,	4,	1,	4,	1401,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #2106 = MSUBU_DSP
  { 2107,	4,	1,	4,	1564,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #2107 = MSUBU_DSP_MM
  { 2108,	2,	0,	4,	883,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList6, ImplicitList6, OperandInfo43 },  // Inst #2108 = MSUBU_MM
  { 2109,	4,	1,	4,	668,	0, 0x6ULL, nullptr, nullptr, OperandInfo194 },  // Inst #2109 = MSUBV_B
  { 2110,	4,	1,	4,	668,	0, 0x6ULL, nullptr, nullptr, OperandInfo57 },  // Inst #2110 = MSUBV_D
  { 2111,	4,	1,	4,	668,	0, 0x6ULL, nullptr, nullptr, OperandInfo59 },  // Inst #2111 = MSUBV_H
  { 2112,	4,	1,	4,	668,	0, 0x6ULL, nullptr, nullptr, OperandInfo58 },  // Inst #2112 = MSUBV_W
  { 2113,	4,	1,	4,	679,	0, 0x4ULL, nullptr, nullptr, OperandInfo302 },  // Inst #2113 = MSUB_D32
  { 2114,	4,	1,	4,	1283,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo302 },  // Inst #2114 = MSUB_D32_MM
  { 2115,	4,	1,	4,	679,	0, 0x4ULL, nullptr, nullptr, OperandInfo303 },  // Inst #2115 = MSUB_D64
  { 2116,	4,	1,	4,	1402,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #2116 = MSUB_DSP
  { 2117,	4,	1,	4,	1565,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #2117 = MSUB_DSP_MM
  { 2118,	2,	0,	4,	882,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList6, ImplicitList6, OperandInfo43 },  // Inst #2118 = MSUB_MM
  { 2119,	4,	1,	4,	674,	0, 0x6ULL, nullptr, nullptr, OperandInfo59 },  // Inst #2119 = MSUB_Q_H
  { 2120,	4,	1,	4,	674,	0, 0x6ULL, nullptr, nullptr, OperandInfo58 },  // Inst #2120 = MSUB_Q_W
  { 2121,	4,	1,	4,	680,	0, 0x4ULL, nullptr, nullptr, OperandInfo304 },  // Inst #2121 = MSUB_S
  { 2122,	4,	1,	4,	1282,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo304 },  // Inst #2122 = MSUB_S_MM
  { 2123,	3,	1,	4,	417,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126 },  // Inst #2123 = MTC0
  { 2124,	3,	1,	4,	1044,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126 },  // Inst #2124 = MTC0_MMR6
  { 2125,	2,	1,	4,	686,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo127 },  // Inst #2125 = MTC1
  { 2126,	2,	1,	4,	686,	0|(1ULL<<MCID::MoveReg), 0x4ULL, nullptr, nullptr, OperandInfo133 },  // Inst #2126 = MTC1_D64
  { 2127,	2,	1,	4,	1269,	0|(1ULL<<MCID::MoveReg), 0x4ULL, nullptr, nullptr, OperandInfo133 },  // Inst #2127 = MTC1_D64_MM
  { 2128,	2,	1,	4,	1269,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo127 },  // Inst #2128 = MTC1_MM
  { 2129,	2,	1,	4,	1313,	0|(1ULL<<MCID::Bitcast), 0x6ULL, nullptr, nullptr, OperandInfo127 },  // Inst #2129 = MTC1_MMR6
  { 2130,	3,	1,	4,	419,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo325 },  // Inst #2130 = MTC2
  { 2131,	2,	1,	4,	1045,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo220 },  // Inst #2131 = MTC2_MMR6
  { 2132,	3,	1,	4,	423,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126 },  // Inst #2132 = MTGC0
  { 2133,	3,	1,	4,	1078,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo126 },  // Inst #2133 = MTGC0_MM
  { 2134,	3,	1,	4,	1043,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126 },  // Inst #2134 = MTHC0_MMR6
  { 2135,	3,	1,	4,	687,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo326 },  // Inst #2135 = MTHC1_D32
  { 2136,	3,	1,	4,	1270,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo326 },  // Inst #2136 = MTHC1_D32_MM
  { 2137,	3,	1,	4,	687,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo327 },  // Inst #2137 = MTHC1_D64
  { 2138,	3,	1,	4,	1270,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo327 },  // Inst #2138 = MTHC1_D64_MM
  { 2139,	2,	1,	4,	1045,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo220 },  // Inst #2139 = MTHC2_MMR6
  { 2140,	3,	1,	4,	424,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126 },  // Inst #2140 = MTHGC0
  { 2141,	3,	1,	4,	1079,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo126 },  // Inst #2141 = MTHGC0_MM
  { 2142,	1,	0,	4,	493,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, ImplicitList21, OperandInfo56 },  // Inst #2142 = MTHI
  { 2143,	1,	0,	4,	908,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, ImplicitList22, OperandInfo93 },  // Inst #2143 = MTHI64
  { 2144,	2,	1,	4,	1355,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo328 },  // Inst #2144 = MTHI_DSP
  { 2145,	2,	1,	4,	1566,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo328 },  // Inst #2145 = MTHI_DSP_MM
  { 2146,	1,	0,	4,	890,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, ImplicitList21, OperandInfo56 },  // Inst #2146 = MTHI_MM
  { 2147,	3,	1,	4,	1354,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo329 },  // Inst #2147 = MTHLIP
  { 2148,	3,	1,	4,	1567,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo329 },  // Inst #2148 = MTHLIP_MM
  { 2149,	1,	0,	4,	493,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, ImplicitList23, OperandInfo56 },  // Inst #2149 = MTLO
  { 2150,	1,	0,	4,	908,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, ImplicitList24, OperandInfo93 },  // Inst #2150 = MTLO64
  { 2151,	2,	1,	4,	1356,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo330 },  // Inst #2151 = MTLO_DSP
  { 2152,	2,	1,	4,	1568,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo330 },  // Inst #2152 = MTLO_DSP_MM
  { 2153,	1,	0,	4,	890,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, ImplicitList23, OperandInfo56 },  // Inst #2153 = MTLO_MM
  { 2154,	1,	0,	4,	1205,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, ImplicitList25, OperandInfo93 },  // Inst #2154 = MTM0
  { 2155,	1,	0,	4,	1205,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, ImplicitList26, OperandInfo93 },  // Inst #2155 = MTM1
  { 2156,	1,	0,	4,	1205,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, ImplicitList27, OperandInfo93 },  // Inst #2156 = MTM2
  { 2157,	1,	0,	4,	1205,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, ImplicitList28, OperandInfo93 },  // Inst #2157 = MTP0
  { 2158,	1,	0,	4,	1205,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, ImplicitList29, OperandInfo93 },  // Inst #2158 = MTP1
  { 2159,	1,	0,	4,	1205,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, ImplicitList30, OperandInfo93 },  // Inst #2159 = MTP2
  { 2160,	5,	1,	4,	1064,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo308 },  // Inst #2160 = MTTR
  { 2161,	3,	1,	4,	869,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2161 = MUH
  { 2162,	3,	1,	4,	870,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2162 = MUHU
  { 2163,	3,	1,	4,	892,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2163 = MUHU_MMR6
  { 2164,	3,	1,	4,	893,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2164 = MUH_MMR6
  { 2165,	3,	1,	4,	486,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList6, OperandInfo70 },  // Inst #2165 = MUL
  { 2166,	3,	1,	4,	1403,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo212 },  // Inst #2166 = MULEQ_S_W_PHL
  { 2167,	3,	1,	4,	1569,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo212 },  // Inst #2167 = MULEQ_S_W_PHL_MM
  { 2168,	3,	1,	4,	1404,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo212 },  // Inst #2168 = MULEQ_S_W_PHR
  { 2169,	3,	1,	4,	1570,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo212 },  // Inst #2169 = MULEQ_S_W_PHR_MM
  { 2170,	3,	1,	4,	1405,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo170 },  // Inst #2170 = MULEU_S_PH_QBL
  { 2171,	3,	1,	4,	1571,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo170 },  // Inst #2171 = MULEU_S_PH_QBL_MM
  { 2172,	3,	1,	4,	1406,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo170 },  // Inst #2172 = MULEU_S_PH_QBR
  { 2173,	3,	1,	4,	1572,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo170 },  // Inst #2173 = MULEU_S_PH_QBR_MM
  { 2174,	3,	1,	4,	1407,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo170 },  // Inst #2174 = MULQ_RS_PH
  { 2175,	3,	1,	4,	1573,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo170 },  // Inst #2175 = MULQ_RS_PH_MM
  { 2176,	3,	1,	4,	1484,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo70 },  // Inst #2176 = MULQ_RS_W
  { 2177,	3,	1,	4,	1648,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo70 },  // Inst #2177 = MULQ_RS_W_MMR2
  { 2178,	3,	1,	4,	1485,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo170 },  // Inst #2178 = MULQ_S_PH
  { 2179,	3,	1,	4,	1649,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo170 },  // Inst #2179 = MULQ_S_PH_MMR2
  { 2180,	3,	1,	4,	1486,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo70 },  // Inst #2180 = MULQ_S_W
  { 2181,	3,	1,	4,	1650,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo70 },  // Inst #2181 = MULQ_S_W_MMR2
  { 2182,	3,	1,	4,	1213,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #2182 = MULR_PS64
  { 2183,	3,	1,	4,	675,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2183 = MULR_Q_H
  { 2184,	3,	1,	4,	675,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2184 = MULR_Q_W
  { 2185,	4,	1,	4,	1408,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #2185 = MULSAQ_S_W_PH
  { 2186,	4,	1,	4,	1574,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList13, OperandInfo241 },  // Inst #2186 = MULSAQ_S_W_PH_MM
  { 2187,	4,	1,	4,	1487,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #2187 = MULSA_W_PH
  { 2188,	4,	1,	4,	1651,	0, 0x6ULL, nullptr, nullptr, OperandInfo241 },  // Inst #2188 = MULSA_W_PH_MMR2
  { 2189,	2,	0,	4,	487,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList6, OperandInfo43 },  // Inst #2189 = MULT
  { 2190,	3,	1,	4,	1409,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo141 },  // Inst #2190 = MULTU_DSP
  { 2191,	3,	1,	4,	1575,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo141 },  // Inst #2191 = MULTU_DSP_MM
  { 2192,	3,	1,	4,	1410,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo141 },  // Inst #2192 = MULT_DSP
  { 2193,	3,	1,	4,	1576,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo141 },  // Inst #2193 = MULT_DSP_MM
  { 2194,	2,	0,	4,	878,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList6, OperandInfo43 },  // Inst #2194 = MULT_MM
  { 2195,	2,	0,	4,	488,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList6, OperandInfo43 },  // Inst #2195 = MULTu
  { 2196,	2,	0,	4,	879,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList6, OperandInfo43 },  // Inst #2196 = MULTu_MM
  { 2197,	3,	1,	4,	871,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2197 = MULU
  { 2198,	3,	1,	4,	894,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2198 = MULU_MMR6
  { 2199,	3,	1,	4,	670,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2199 = MULV_B
  { 2200,	3,	1,	4,	670,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2200 = MULV_D
  { 2201,	3,	1,	4,	670,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2201 = MULV_H
  { 2202,	3,	1,	4,	670,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2202 = MULV_W
  { 2203,	3,	1,	4,	884,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList6, OperandInfo70 },  // Inst #2203 = MUL_MM
  { 2204,	3,	1,	4,	895,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2204 = MUL_MMR6
  { 2205,	3,	1,	4,	1482,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo170 },  // Inst #2205 = MUL_PH
  { 2206,	3,	1,	4,	1646,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo170 },  // Inst #2206 = MUL_PH_MMR2
  { 2207,	3,	1,	4,	676,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2207 = MUL_Q_H
  { 2208,	3,	1,	4,	676,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2208 = MUL_Q_W
  { 2209,	3,	1,	4,	872,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2209 = MUL_R6
  { 2210,	3,	1,	4,	1483,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo170 },  // Inst #2210 = MUL_S_PH
  { 2211,	3,	1,	4,	1647,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo170 },  // Inst #2211 = MUL_S_PH_MMR2
  { 2212,	1,	1,	2,	735,	0|(1ULL<<MCID::MoveReg), 0x0ULL, ImplicitList21, nullptr, OperandInfo270 },  // Inst #2212 = Mfhi16
  { 2213,	1,	1,	2,	735,	0, 0x0ULL, ImplicitList23, nullptr, OperandInfo270 },  // Inst #2213 = Mflo16
  { 2214,	2,	1,	2,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo331 },  // Inst #2214 = Move32R16
  { 2215,	2,	1,	2,	735,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo332 },  // Inst #2215 = MoveR3216
  { 2216,	2,	1,	4,	627,	0, 0x6ULL, nullptr, nullptr, OperandInfo310 },  // Inst #2216 = NLOC_B
  { 2217,	2,	1,	4,	627,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #2217 = NLOC_D
  { 2218,	2,	1,	4,	627,	0, 0x6ULL, nullptr, nullptr, OperandInfo333 },  // Inst #2218 = NLOC_H
  { 2219,	2,	1,	4,	627,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #2219 = NLOC_W
  { 2220,	2,	1,	4,	627,	0, 0x6ULL, nullptr, nullptr, OperandInfo310 },  // Inst #2220 = NLZC_B
  { 2221,	2,	1,	4,	627,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #2221 = NLZC_D
  { 2222,	2,	1,	4,	627,	0, 0x6ULL, nullptr, nullptr, OperandInfo333 },  // Inst #2222 = NLZC_H
  { 2223,	2,	1,	4,	627,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #2223 = NLZC_W
  { 2224,	4,	1,	4,	681,	0, 0x4ULL, nullptr, nullptr, OperandInfo302 },  // Inst #2224 = NMADD_D32
  { 2225,	4,	1,	4,	1250,	0, 0x4ULL, nullptr, nullptr, OperandInfo302 },  // Inst #2225 = NMADD_D32_MM
  { 2226,	4,	1,	4,	681,	0, 0x4ULL, nullptr, nullptr, OperandInfo303 },  // Inst #2226 = NMADD_D64
  { 2227,	4,	1,	4,	682,	0, 0x4ULL, nullptr, nullptr, OperandInfo304 },  // Inst #2227 = NMADD_S
  { 2228,	4,	1,	4,	1249,	0, 0x4ULL, nullptr, nullptr, OperandInfo304 },  // Inst #2228 = NMADD_S_MM
  { 2229,	4,	1,	4,	683,	0, 0x4ULL, nullptr, nullptr, OperandInfo302 },  // Inst #2229 = NMSUB_D32
  { 2230,	4,	1,	4,	1252,	0, 0x4ULL, nullptr, nullptr, OperandInfo302 },  // Inst #2230 = NMSUB_D32_MM
  { 2231,	4,	1,	4,	683,	0, 0x4ULL, nullptr, nullptr, OperandInfo303 },  // Inst #2231 = NMSUB_D64
  { 2232,	4,	1,	4,	684,	0, 0x4ULL, nullptr, nullptr, OperandInfo304 },  // Inst #2232 = NMSUB_S
  { 2233,	4,	1,	4,	1251,	0, 0x4ULL, nullptr, nullptr, OperandInfo304 },  // Inst #2233 = NMSUB_S_MM
  { 2234,	3,	1,	4,	366,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2234 = NOR
  { 2235,	3,	1,	4,	842,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo69 },  // Inst #2235 = NOR64
  { 2236,	3,	1,	4,	549,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2236 = NORI_B
  { 2237,	3,	1,	4,	752,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2237 = NOR_MM
  { 2238,	3,	1,	4,	793,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2238 = NOR_MMR6
  { 2239,	3,	1,	4,	548,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2239 = NOR_V
  { 2240,	2,	1,	2,	753,	0, 0x0ULL, nullptr, nullptr, OperandInfo334 },  // Inst #2240 = NOT16_MM
  { 2241,	2,	1,	2,	794,	0, 0x0ULL, nullptr, nullptr, OperandInfo334 },  // Inst #2241 = NOT16_MMR6
  { 2242,	2,	1,	2,	735,	0, 0x0ULL, nullptr, nullptr, OperandInfo128 },  // Inst #2242 = NegRxRy16
  { 2243,	2,	1,	2,	735,	0, 0x0ULL, nullptr, nullptr, OperandInfo128 },  // Inst #2243 = NotRxRy16
  { 2244,	3,	1,	4,	367,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2244 = OR
  { 2245,	3,	1,	2,	754,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo179 },  // Inst #2245 = OR16_MM
  { 2246,	3,	1,	2,	795,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo179 },  // Inst #2246 = OR16_MMR6
  { 2247,	3,	1,	4,	843,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo69 },  // Inst #2247 = OR64
  { 2248,	3,	1,	4,	549,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2248 = ORI_B
  { 2249,	3,	1,	4,	796,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2249 = ORI_MMR6
  { 2250,	3,	1,	4,	754,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2250 = OR_MM
  { 2251,	3,	1,	4,	795,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2251 = OR_MMR6
  { 2252,	3,	1,	4,	548,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2252 = OR_V
  { 2253,	3,	1,	4,	500,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2253 = ORi
  { 2254,	3,	1,	4,	809,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo68 },  // Inst #2254 = ORi64
  { 2255,	3,	1,	4,	755,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2255 = ORi_MM
  { 2256,	3,	1,	2,	735,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo184 },  // Inst #2256 = OrRxRxRy16
  { 2257,	3,	1,	4,	1411,	0, 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2257 = PACKRL_PH
  { 2258,	3,	1,	4,	1577,	0, 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2258 = PACKRL_PH_MM
  { 2259,	0,	0,	4,	405,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr },  // Inst #2259 = PAUSE
  { 2260,	0,	0,	4,	1034,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2260 = PAUSE_MM
  { 2261,	0,	0,	4,	1051,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2261 = PAUSE_MMR6
  { 2262,	3,	1,	4,	626,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2262 = PCKEV_B
  { 2263,	3,	1,	4,	626,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2263 = PCKEV_D
  { 2264,	3,	1,	4,	626,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2264 = PCKEV_H
  { 2265,	3,	1,	4,	626,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2265 = PCKEV_W
  { 2266,	3,	1,	4,	626,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2266 = PCKOD_B
  { 2267,	3,	1,	4,	626,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2267 = PCKOD_D
  { 2268,	3,	1,	4,	626,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2268 = PCKOD_H
  { 2269,	3,	1,	4,	626,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2269 = PCKOD_W
  { 2270,	2,	1,	4,	526,	0, 0x6ULL, nullptr, nullptr, OperandInfo310 },  // Inst #2270 = PCNT_B
  { 2271,	2,	1,	4,	526,	0, 0x6ULL, nullptr, nullptr, OperandInfo74 },  // Inst #2271 = PCNT_D
  { 2272,	2,	1,	4,	526,	0, 0x6ULL, nullptr, nullptr, OperandInfo333 },  // Inst #2272 = PCNT_H
  { 2273,	2,	1,	4,	526,	0, 0x6ULL, nullptr, nullptr, OperandInfo75 },  // Inst #2273 = PCNT_W
  { 2274,	3,	1,	4,	1412,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList10, nullptr, OperandInfo170 },  // Inst #2274 = PICK_PH
  { 2275,	3,	1,	4,	1578,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList10, nullptr, OperandInfo170 },  // Inst #2275 = PICK_PH_MM
  { 2276,	3,	1,	4,	1413,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList10, nullptr, OperandInfo170 },  // Inst #2276 = PICK_QB
  { 2277,	3,	1,	4,	1579,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList10, nullptr, OperandInfo170 },  // Inst #2277 = PICK_QB_MM
  { 2278,	3,	1,	4,	645,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #2278 = PLL_PS64
  { 2279,	3,	1,	4,	645,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #2279 = PLU_PS64
  { 2280,	2,	1,	4,	1203,	0, 0x1ULL, nullptr, nullptr, OperandInfo43 },  // Inst #2280 = POP
  { 2281,	2,	1,	4,	1415,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2281 = PRECEQU_PH_QBL
  { 2282,	2,	1,	4,	1414,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2282 = PRECEQU_PH_QBLA
  { 2283,	2,	1,	4,	1580,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2283 = PRECEQU_PH_QBLA_MM
  { 2284,	2,	1,	4,	1581,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2284 = PRECEQU_PH_QBL_MM
  { 2285,	2,	1,	4,	1417,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2285 = PRECEQU_PH_QBR
  { 2286,	2,	1,	4,	1416,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2286 = PRECEQU_PH_QBRA
  { 2287,	2,	1,	4,	1582,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2287 = PRECEQU_PH_QBRA_MM
  { 2288,	2,	1,	4,	1583,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2288 = PRECEQU_PH_QBR_MM
  { 2289,	2,	1,	4,	1418,	0, 0x6ULL, nullptr, nullptr, OperandInfo335 },  // Inst #2289 = PRECEQ_W_PHL
  { 2290,	2,	1,	4,	1584,	0, 0x6ULL, nullptr, nullptr, OperandInfo335 },  // Inst #2290 = PRECEQ_W_PHL_MM
  { 2291,	2,	1,	4,	1419,	0, 0x6ULL, nullptr, nullptr, OperandInfo335 },  // Inst #2291 = PRECEQ_W_PHR
  { 2292,	2,	1,	4,	1585,	0, 0x6ULL, nullptr, nullptr, OperandInfo335 },  // Inst #2292 = PRECEQ_W_PHR_MM
  { 2293,	2,	1,	4,	1421,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2293 = PRECEU_PH_QBL
  { 2294,	2,	1,	4,	1420,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2294 = PRECEU_PH_QBLA
  { 2295,	2,	1,	4,	1586,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2295 = PRECEU_PH_QBLA_MM
  { 2296,	2,	1,	4,	1587,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2296 = PRECEU_PH_QBL_MM
  { 2297,	2,	1,	4,	1423,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2297 = PRECEU_PH_QBR
  { 2298,	2,	1,	4,	1422,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2298 = PRECEU_PH_QBRA
  { 2299,	2,	1,	4,	1588,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2299 = PRECEU_PH_QBRA_MM
  { 2300,	2,	1,	4,	1589,	0, 0x6ULL, nullptr, nullptr, OperandInfo166 },  // Inst #2300 = PRECEU_PH_QBR_MM
  { 2301,	3,	1,	4,	1424,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo170 },  // Inst #2301 = PRECRQU_S_QB_PH
  { 2302,	3,	1,	4,	1590,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo170 },  // Inst #2302 = PRECRQU_S_QB_PH_MM
  { 2303,	3,	1,	4,	1425,	0, 0x6ULL, nullptr, nullptr, OperandInfo336 },  // Inst #2303 = PRECRQ_PH_W
  { 2304,	3,	1,	4,	1591,	0, 0x6ULL, nullptr, nullptr, OperandInfo336 },  // Inst #2304 = PRECRQ_PH_W_MM
  { 2305,	3,	1,	4,	1426,	0, 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2305 = PRECRQ_QB_PH
  { 2306,	3,	1,	4,	1592,	0, 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2306 = PRECRQ_QB_PH_MM
  { 2307,	3,	1,	4,	1427,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo336 },  // Inst #2307 = PRECRQ_RS_PH_W
  { 2308,	3,	1,	4,	1593,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo336 },  // Inst #2308 = PRECRQ_RS_PH_W_MM
  { 2309,	3,	1,	4,	1488,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2309 = PRECR_QB_PH
  { 2310,	3,	1,	4,	1652,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2310 = PRECR_QB_PH_MMR2
  { 2311,	4,	1,	4,	1489,	0, 0x6ULL, nullptr, nullptr, OperandInfo337 },  // Inst #2311 = PRECR_SRA_PH_W
  { 2312,	4,	1,	4,	1653,	0, 0x6ULL, nullptr, nullptr, OperandInfo337 },  // Inst #2312 = PRECR_SRA_PH_W_MMR2
  { 2313,	4,	1,	4,	1490,	0, 0x6ULL, nullptr, nullptr, OperandInfo337 },  // Inst #2313 = PRECR_SRA_R_PH_W
  { 2314,	4,	1,	4,	1654,	0, 0x6ULL, nullptr, nullptr, OperandInfo337 },  // Inst #2314 = PRECR_SRA_R_PH_W_MMR2
  { 2315,	3,	0,	4,	468,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo200 },  // Inst #2315 = PREF
  { 2316,	3,	0,	4,	469,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo200 },  // Inst #2316 = PREFE
  { 2317,	3,	0,	4,	1106,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo200 },  // Inst #2317 = PREFE_MM
  { 2318,	3,	0,	4,	1139,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo338 },  // Inst #2318 = PREFX_MM
  { 2319,	3,	0,	4,	1139,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo200 },  // Inst #2319 = PREF_MM
  { 2320,	3,	0,	4,	1161,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo200 },  // Inst #2320 = PREF_MMR6
  { 2321,	3,	0,	4,	1087,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo200 },  // Inst #2321 = PREF_R6
  { 2322,	4,	1,	4,	1491,	0, 0x6ULL, nullptr, nullptr, OperandInfo180 },  // Inst #2322 = PREPEND
  { 2323,	4,	1,	4,	1655,	0, 0x6ULL, nullptr, nullptr, OperandInfo180 },  // Inst #2323 = PREPEND_MMR2
  { 2324,	3,	1,	4,	645,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #2324 = PUL_PS64
  { 2325,	3,	1,	4,	645,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo171 },  // Inst #2325 = PUU_PS64
  { 2326,	2,	1,	4,	1428,	0, 0x6ULL, nullptr, nullptr, OperandInfo335 },  // Inst #2326 = RADDU_W_QB
  { 2327,	2,	1,	4,	1594,	0, 0x6ULL, nullptr, nullptr, OperandInfo335 },  // Inst #2327 = RADDU_W_QB_MM
  { 2328,	2,	1,	4,	1429,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2328 = RDDSP
  { 2329,	2,	1,	4,	1595,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2329 = RDDSP_MM
  { 2330,	3,	1,	4,	480,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo339 },  // Inst #2330 = RDHWR
  { 2331,	3,	1,	4,	909,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo340 },  // Inst #2331 = RDHWR64
  { 2332,	3,	1,	4,	891,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo339 },  // Inst #2332 = RDHWR_MM
  { 2333,	3,	1,	4,	900,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo339 },  // Inst #2333 = RDHWR_MMR6
  { 2334,	2,	1,	4,	1036,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo43 },  // Inst #2334 = RDPGPR_MMR6
  { 2335,	2,	1,	4,	652,	0, 0x4ULL, nullptr, nullptr, OperandInfo246 },  // Inst #2335 = RECIP_D32
  { 2336,	2,	1,	4,	1289,	0, 0x4ULL, nullptr, nullptr, OperandInfo246 },  // Inst #2336 = RECIP_D32_MM
  { 2337,	2,	1,	4,	652,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #2337 = RECIP_D64
  { 2338,	2,	1,	4,	1289,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #2338 = RECIP_D64_MM
  { 2339,	2,	1,	4,	654,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #2339 = RECIP_S
  { 2340,	2,	1,	4,	1288,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #2340 = RECIP_S_MM
  { 2341,	2,	1,	4,	1430,	0, 0x6ULL, nullptr, nullptr, OperandInfo341 },  // Inst #2341 = REPLV_PH
  { 2342,	2,	1,	4,	1596,	0, 0x6ULL, nullptr, nullptr, OperandInfo341 },  // Inst #2342 = REPLV_PH_MM
  { 2343,	2,	1,	4,	1431,	0, 0x6ULL, nullptr, nullptr, OperandInfo341 },  // Inst #2343 = REPLV_QB
  { 2344,	2,	1,	4,	1597,	0, 0x6ULL, nullptr, nullptr, OperandInfo341 },  // Inst #2344 = REPLV_QB_MM
  { 2345,	2,	1,	4,	1432,	0, 0x6ULL, nullptr, nullptr, OperandInfo342 },  // Inst #2345 = REPL_PH
  { 2346,	2,	1,	4,	1598,	0, 0x6ULL, nullptr, nullptr, OperandInfo342 },  // Inst #2346 = REPL_PH_MM
  { 2347,	2,	1,	4,	1433,	0, 0x6ULL, nullptr, nullptr, OperandInfo342 },  // Inst #2347 = REPL_QB
  { 2348,	2,	1,	4,	1599,	0, 0x6ULL, nullptr, nullptr, OperandInfo342 },  // Inst #2348 = REPL_QB_MM
  { 2349,	2,	1,	4,	1230,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo201 },  // Inst #2349 = RINT_D
  { 2350,	2,	1,	4,	1328,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo201 },  // Inst #2350 = RINT_D_MMR6
  { 2351,	2,	1,	4,	1229,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo205 },  // Inst #2351 = RINT_S
  { 2352,	2,	1,	4,	1328,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo205 },  // Inst #2352 = RINT_S_MMR6
  { 2353,	3,	1,	4,	501,	0, 0x1ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2353 = ROTR
  { 2354,	3,	1,	4,	720,	0, 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2354 = ROTRV
  { 2355,	3,	1,	4,	756,	0, 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2355 = ROTRV_MM
  { 2356,	3,	1,	4,	757,	0, 0x1ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2356 = ROTR_MM
  { 2357,	2,	1,	4,	719,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #2357 = ROUND_L_D64
  { 2358,	2,	1,	4,	1309,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #2358 = ROUND_L_D_MMR6
  { 2359,	2,	1,	4,	719,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #2359 = ROUND_L_S
  { 2360,	2,	1,	4,	1309,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #2360 = ROUND_L_S_MMR6
  { 2361,	2,	1,	4,	719,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #2361 = ROUND_W_D32
  { 2362,	2,	1,	4,	719,	0, 0x4ULL, nullptr, nullptr, OperandInfo204 },  // Inst #2362 = ROUND_W_D64
  { 2363,	2,	1,	4,	1309,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #2363 = ROUND_W_D_MMR6
  { 2364,	2,	1,	4,	1255,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #2364 = ROUND_W_MM
  { 2365,	2,	1,	4,	719,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #2365 = ROUND_W_S
  { 2366,	2,	1,	4,	1255,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #2366 = ROUND_W_S_MM
  { 2367,	2,	1,	4,	1309,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #2367 = ROUND_W_S_MMR6
  { 2368,	2,	1,	4,	653,	0, 0x4ULL, nullptr, nullptr, OperandInfo246 },  // Inst #2368 = RSQRT_D32
  { 2369,	2,	1,	4,	1289,	0, 0x4ULL, nullptr, nullptr, OperandInfo246 },  // Inst #2369 = RSQRT_D32_MM
  { 2370,	2,	1,	4,	653,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #2370 = RSQRT_D64
  { 2371,	2,	1,	4,	1289,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #2371 = RSQRT_D64_MM
  { 2372,	2,	1,	4,	655,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #2372 = RSQRT_S
  { 2373,	2,	1,	4,	1288,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #2373 = RSQRT_S_MM
  { 2374,	0,	0,	2,	1108,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, nullptr },  // Inst #2374 = Restore16
  { 2375,	0,	0,	2,	1108,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, nullptr },  // Inst #2375 = RestoreX16
  { 2376,	2,	0,	4,	1210,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo120 },  // Inst #2376 = SAA
  { 2377,	2,	0,	4,	1210,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo120 },  // Inst #2377 = SAAD
  { 2378,	3,	1,	4,	527,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2378 = SAT_S_B
  { 2379,	3,	1,	4,	527,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #2379 = SAT_S_D
  { 2380,	3,	1,	4,	527,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #2380 = SAT_S_H
  { 2381,	3,	1,	4,	527,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #2381 = SAT_S_W
  { 2382,	3,	1,	4,	527,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2382 = SAT_U_B
  { 2383,	3,	1,	4,	527,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #2383 = SAT_U_D
  { 2384,	3,	1,	4,	527,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #2384 = SAT_U_H
  { 2385,	3,	1,	4,	527,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #2385 = SAT_U_W
  { 2386,	3,	0,	4,	452,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2386 = SB
  { 2387,	3,	0,	2,	1130,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo343 },  // Inst #2387 = SB16_MM
  { 2388,	3,	0,	2,	1153,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo343 },  // Inst #2388 = SB16_MMR6
  { 2389,	3,	0,	4,	1177,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #2389 = SB64
  { 2390,	3,	0,	4,	460,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2390 = SBE
  { 2391,	3,	0,	4,	1099,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2391 = SBE_MM
  { 2392,	3,	0,	4,	1100,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2392 = SB_MM
  { 2393,	3,	0,	4,	1153,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2393 = SB_MMR6
  { 2394,	4,	1,	4,	459,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo344 },  // Inst #2394 = SC
  { 2395,	4,	1,	4,	1176,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo344 },  // Inst #2395 = SC64
  { 2396,	4,	1,	4,	1188,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo345 },  // Inst #2396 = SC64_R6
  { 2397,	4,	1,	4,	1176,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo346 },  // Inst #2397 = SCD
  { 2398,	4,	1,	4,	1189,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo347 },  // Inst #2398 = SCD_R6
  { 2399,	4,	1,	4,	463,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo344 },  // Inst #2399 = SCE
  { 2400,	4,	1,	4,	1105,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo344 },  // Inst #2400 = SCE_MM
  { 2401,	4,	1,	4,	1131,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo344 },  // Inst #2401 = SC_MM
  { 2402,	4,	1,	4,	1080,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo344 },  // Inst #2402 = SC_MMR6
  { 2403,	4,	1,	4,	1086,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo345 },  // Inst #2403 = SC_R6
  { 2404,	3,	0,	4,	1175,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #2404 = SD
  { 2405,	1,	0,	4,	389,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2405 = SDBBP
  { 2406,	1,	0,	2,	967,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2406 = SDBBP16_MM
  { 2407,	1,	0,	2,	1008,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2407 = SDBBP16_MMR6
  { 2408,	1,	0,	4,	967,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2408 = SDBBP_MM
  { 2409,	1,	0,	4,	1008,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2409 = SDBBP_MMR6
  { 2410,	1,	0,	4,	938,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2410 = SDBBP_R6
  { 2411,	3,	0,	4,	699,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo156 },  // Inst #2411 = SDC1
  { 2412,	3,	0,	4,	699,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo273 },  // Inst #2412 = SDC164
  { 2413,	3,	0,	4,	1338,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo273 },  // Inst #2413 = SDC1_D64_MMR6
  { 2414,	3,	0,	4,	1290,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo156 },  // Inst #2414 = SDC1_MM
  { 2415,	3,	0,	4,	457,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo274 },  // Inst #2415 = SDC2
  { 2416,	3,	0,	4,	1154,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo275 },  // Inst #2416 = SDC2_MMR6
  { 2417,	3,	0,	4,	1085,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo274 },  // Inst #2417 = SDC2_R6
  { 2418,	3,	0,	4,	458,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo276 },  // Inst #2418 = SDC3
  { 2419,	2,	0,	4,	865,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList6, OperandInfo43 },  // Inst #2419 = SDIV
  { 2420,	2,	0,	4,	885,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList6, OperandInfo43 },  // Inst #2420 = SDIV_MM
  { 2421,	3,	0,	4,	1182,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #2421 = SDL
  { 2422,	3,	0,	4,	1183,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #2422 = SDR
  { 2423,	3,	0,	4,	700,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo282 },  // Inst #2423 = SDXC1
  { 2424,	3,	0,	4,	700,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo283 },  // Inst #2424 = SDXC164
  { 2425,	2,	1,	4,	502,	0, 0x1ULL, nullptr, nullptr, OperandInfo43 },  // Inst #2425 = SEB
  { 2426,	2,	1,	4,	810,	0, 0x1ULL, nullptr, nullptr, OperandInfo120 },  // Inst #2426 = SEB64
  { 2427,	2,	1,	4,	758,	0, 0x1ULL, nullptr, nullptr, OperandInfo43 },  // Inst #2427 = SEB_MM
  { 2428,	2,	1,	4,	503,	0, 0x1ULL, nullptr, nullptr, OperandInfo43 },  // Inst #2428 = SEH
  { 2429,	2,	1,	4,	811,	0, 0x1ULL, nullptr, nullptr, OperandInfo120 },  // Inst #2429 = SEH64
  { 2430,	2,	1,	4,	759,	0, 0x1ULL, nullptr, nullptr, OperandInfo43 },  // Inst #2430 = SEH_MM
  { 2431,	3,	1,	4,	734,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2431 = SELEQZ
  { 2432,	3,	1,	4,	852,	0, 0x6ULL, nullptr, nullptr, OperandInfo69 },  // Inst #2432 = SELEQZ64
  { 2433,	3,	1,	4,	1222,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo171 },  // Inst #2433 = SELEQZ_D
  { 2434,	3,	1,	4,	1324,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo171 },  // Inst #2434 = SELEQZ_D_MMR6
  { 2435,	3,	1,	4,	797,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2435 = SELEQZ_MMR6
  { 2436,	3,	1,	4,	1221,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #2436 = SELEQZ_S
  { 2437,	3,	1,	4,	1325,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #2437 = SELEQZ_S_MMR6
  { 2438,	3,	1,	4,	734,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2438 = SELNEZ
  { 2439,	3,	1,	4,	852,	0, 0x6ULL, nullptr, nullptr, OperandInfo69 },  // Inst #2439 = SELNEZ64
  { 2440,	3,	1,	4,	1222,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo171 },  // Inst #2440 = SELNEZ_D
  { 2441,	3,	1,	4,	1324,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo171 },  // Inst #2441 = SELNEZ_D_MMR6
  { 2442,	3,	1,	4,	797,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2442 = SELNEZ_MMR6
  { 2443,	3,	1,	4,	1221,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #2443 = SELNEZ_S
  { 2444,	3,	1,	4,	1325,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo248 },  // Inst #2444 = SELNEZ_S_MMR6
  { 2445,	4,	1,	4,	1232,	0, 0x6ULL, nullptr, nullptr, OperandInfo300 },  // Inst #2445 = SEL_D
  { 2446,	4,	1,	4,	1326,	0, 0x6ULL, nullptr, nullptr, OperandInfo300 },  // Inst #2446 = SEL_D_MMR6
  { 2447,	4,	1,	4,	1233,	0, 0x6ULL, nullptr, nullptr, OperandInfo348 },  // Inst #2447 = SEL_S
  { 2448,	4,	1,	4,	1327,	0, 0x6ULL, nullptr, nullptr, OperandInfo348 },  // Inst #2448 = SEL_S_MMR6
  { 2449,	3,	1,	4,	1206,	0, 0x1ULL, nullptr, nullptr, OperandInfo69 },  // Inst #2449 = SEQ
  { 2450,	3,	1,	4,	1207,	0, 0x2ULL, nullptr, nullptr, OperandInfo68 },  // Inst #2450 = SEQi
  { 2451,	3,	0,	4,	453,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2451 = SH
  { 2452,	3,	0,	2,	1132,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo343 },  // Inst #2452 = SH16_MM
  { 2453,	3,	0,	2,	1155,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo343 },  // Inst #2453 = SH16_MMR6
  { 2454,	3,	0,	4,	1178,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #2454 = SH64
  { 2455,	3,	0,	4,	461,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2455 = SHE
  { 2456,	3,	0,	4,	1101,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2456 = SHE_MM
  { 2457,	3,	1,	4,	543,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2457 = SHF_B
  { 2458,	3,	1,	4,	543,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #2458 = SHF_H
  { 2459,	3,	1,	4,	543,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #2459 = SHF_W
  { 2460,	3,	1,	4,	1435,	0, 0x6ULL, nullptr, nullptr, OperandInfo349 },  // Inst #2460 = SHILO
  { 2461,	3,	1,	4,	1434,	0, 0x6ULL, nullptr, nullptr, OperandInfo329 },  // Inst #2461 = SHILOV
  { 2462,	3,	1,	4,	1600,	0, 0x6ULL, nullptr, nullptr, OperandInfo329 },  // Inst #2462 = SHILOV_MM
  { 2463,	3,	1,	4,	1601,	0, 0x6ULL, nullptr, nullptr, OperandInfo349 },  // Inst #2463 = SHILO_MM
  { 2464,	3,	1,	4,	1436,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo350 },  // Inst #2464 = SHLLV_PH
  { 2465,	3,	1,	4,	1602,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo350 },  // Inst #2465 = SHLLV_PH_MM
  { 2466,	3,	1,	4,	1437,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo350 },  // Inst #2466 = SHLLV_QB
  { 2467,	3,	1,	4,	1603,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo350 },  // Inst #2467 = SHLLV_QB_MM
  { 2468,	3,	1,	4,	1438,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo350 },  // Inst #2468 = SHLLV_S_PH
  { 2469,	3,	1,	4,	1604,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo350 },  // Inst #2469 = SHLLV_S_PH_MM
  { 2470,	3,	1,	4,	1439,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo70 },  // Inst #2470 = SHLLV_S_W
  { 2471,	3,	1,	4,	1605,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo70 },  // Inst #2471 = SHLLV_S_W_MM
  { 2472,	3,	1,	4,	1440,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo351 },  // Inst #2472 = SHLL_PH
  { 2473,	3,	1,	4,	1606,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo351 },  // Inst #2473 = SHLL_PH_MM
  { 2474,	3,	1,	4,	1441,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo351 },  // Inst #2474 = SHLL_QB
  { 2475,	3,	1,	4,	1607,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo351 },  // Inst #2475 = SHLL_QB_MM
  { 2476,	3,	1,	4,	1442,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo351 },  // Inst #2476 = SHLL_S_PH
  { 2477,	3,	1,	4,	1608,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo351 },  // Inst #2477 = SHLL_S_PH_MM
  { 2478,	3,	1,	4,	1443,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo71 },  // Inst #2478 = SHLL_S_W
  { 2479,	3,	1,	4,	1609,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo71 },  // Inst #2479 = SHLL_S_W_MM
  { 2480,	3,	1,	4,	1444,	0, 0x6ULL, nullptr, nullptr, OperandInfo350 },  // Inst #2480 = SHRAV_PH
  { 2481,	3,	1,	4,	1610,	0, 0x6ULL, nullptr, nullptr, OperandInfo350 },  // Inst #2481 = SHRAV_PH_MM
  { 2482,	3,	1,	4,	1494,	0, 0x6ULL, nullptr, nullptr, OperandInfo350 },  // Inst #2482 = SHRAV_QB
  { 2483,	3,	1,	4,	1658,	0, 0x6ULL, nullptr, nullptr, OperandInfo350 },  // Inst #2483 = SHRAV_QB_MMR2
  { 2484,	3,	1,	4,	1445,	0, 0x6ULL, nullptr, nullptr, OperandInfo350 },  // Inst #2484 = SHRAV_R_PH
  { 2485,	3,	1,	4,	1611,	0, 0x6ULL, nullptr, nullptr, OperandInfo350 },  // Inst #2485 = SHRAV_R_PH_MM
  { 2486,	3,	1,	4,	1495,	0, 0x6ULL, nullptr, nullptr, OperandInfo350 },  // Inst #2486 = SHRAV_R_QB
  { 2487,	3,	1,	4,	1659,	0, 0x6ULL, nullptr, nullptr, OperandInfo350 },  // Inst #2487 = SHRAV_R_QB_MMR2
  { 2488,	3,	1,	4,	1446,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2488 = SHRAV_R_W
  { 2489,	3,	1,	4,	1612,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2489 = SHRAV_R_W_MM
  { 2490,	3,	1,	4,	1447,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo351 },  // Inst #2490 = SHRA_PH
  { 2491,	3,	1,	4,	1613,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo351 },  // Inst #2491 = SHRA_PH_MM
  { 2492,	3,	1,	4,	1492,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo351 },  // Inst #2492 = SHRA_QB
  { 2493,	3,	1,	4,	1656,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo351 },  // Inst #2493 = SHRA_QB_MMR2
  { 2494,	3,	1,	4,	1448,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo351 },  // Inst #2494 = SHRA_R_PH
  { 2495,	3,	1,	4,	1614,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo351 },  // Inst #2495 = SHRA_R_PH_MM
  { 2496,	3,	1,	4,	1493,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo351 },  // Inst #2496 = SHRA_R_QB
  { 2497,	3,	1,	4,	1657,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo351 },  // Inst #2497 = SHRA_R_QB_MMR2
  { 2498,	3,	1,	4,	1449,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2498 = SHRA_R_W
  { 2499,	3,	1,	4,	1615,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2499 = SHRA_R_W_MM
  { 2500,	3,	1,	4,	1497,	0, 0x6ULL, nullptr, nullptr, OperandInfo350 },  // Inst #2500 = SHRLV_PH
  { 2501,	3,	1,	4,	1661,	0, 0x6ULL, nullptr, nullptr, OperandInfo350 },  // Inst #2501 = SHRLV_PH_MMR2
  { 2502,	3,	1,	4,	1450,	0, 0x6ULL, nullptr, nullptr, OperandInfo350 },  // Inst #2502 = SHRLV_QB
  { 2503,	3,	1,	4,	1616,	0, 0x6ULL, nullptr, nullptr, OperandInfo350 },  // Inst #2503 = SHRLV_QB_MM
  { 2504,	3,	1,	4,	1496,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo351 },  // Inst #2504 = SHRL_PH
  { 2505,	3,	1,	4,	1660,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo351 },  // Inst #2505 = SHRL_PH_MMR2
  { 2506,	3,	1,	4,	1451,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo351 },  // Inst #2506 = SHRL_QB
  { 2507,	3,	1,	4,	1617,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo351 },  // Inst #2507 = SHRL_QB_MM
  { 2508,	3,	0,	4,	1132,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2508 = SH_MM
  { 2509,	3,	0,	4,	1155,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2509 = SH_MMR6
  { 2510,	1,	0,	4,	935,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2510 = SIGRIE
  { 2511,	1,	0,	4,	996,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2511 = SIGRIE_MMR6
  { 2512,	4,	1,	4,	519,	0, 0x6ULL, nullptr, nullptr, OperandInfo190 },  // Inst #2512 = SLDI_B
  { 2513,	4,	1,	4,	519,	0, 0x6ULL, nullptr, nullptr, OperandInfo191 },  // Inst #2513 = SLDI_D
  { 2514,	4,	1,	4,	519,	0, 0x6ULL, nullptr, nullptr, OperandInfo192 },  // Inst #2514 = SLDI_H
  { 2515,	4,	1,	4,	519,	0, 0x6ULL, nullptr, nullptr, OperandInfo193 },  // Inst #2515 = SLDI_W
  { 2516,	4,	1,	4,	519,	0, 0x6ULL, nullptr, nullptr, OperandInfo352 },  // Inst #2516 = SLD_B
  { 2517,	4,	1,	4,	519,	0, 0x6ULL, nullptr, nullptr, OperandInfo353 },  // Inst #2517 = SLD_D
  { 2518,	4,	1,	4,	519,	0, 0x6ULL, nullptr, nullptr, OperandInfo354 },  // Inst #2518 = SLD_H
  { 2519,	4,	1,	4,	519,	0, 0x6ULL, nullptr, nullptr, OperandInfo355 },  // Inst #2519 = SLD_W
  { 2520,	3,	1,	4,	505,	0, 0x1ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2520 = SLL
  { 2521,	3,	1,	2,	760,	0, 0x0ULL, nullptr, nullptr, OperandInfo168 },  // Inst #2521 = SLL16_MM
  { 2522,	3,	1,	2,	798,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo168 },  // Inst #2522 = SLL16_MMR6
  { 2523,	2,	1,	4,	812,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, nullptr, OperandInfo243 },  // Inst #2523 = SLL64_32
  { 2524,	2,	1,	4,	812,	0|(1ULL<<MCID::MoveReg), 0x1ULL, nullptr, nullptr, OperandInfo120 },  // Inst #2524 = SLL64_64
  { 2525,	3,	1,	4,	625,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2525 = SLLI_B
  { 2526,	3,	1,	4,	625,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #2526 = SLLI_D
  { 2527,	3,	1,	4,	625,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #2527 = SLLI_H
  { 2528,	3,	1,	4,	625,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #2528 = SLLI_W
  { 2529,	3,	1,	4,	510,	0, 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2529 = SLLV
  { 2530,	3,	1,	4,	761,	0, 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2530 = SLLV_MM
  { 2531,	3,	1,	4,	625,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2531 = SLL_B
  { 2532,	3,	1,	4,	625,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2532 = SLL_D
  { 2533,	3,	1,	4,	625,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2533 = SLL_H
  { 2534,	3,	1,	4,	760,	0, 0x1ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2534 = SLL_MM
  { 2535,	3,	1,	4,	798,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2535 = SLL_MMR6
  { 2536,	3,	1,	4,	625,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2536 = SLL_W
  { 2537,	3,	1,	4,	504,	0, 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2537 = SLT
  { 2538,	3,	1,	4,	813,	0, 0x1ULL, nullptr, nullptr, OperandInfo356 },  // Inst #2538 = SLT64
  { 2539,	3,	1,	4,	762,	0, 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2539 = SLT_MM
  { 2540,	3,	1,	4,	368,	0, 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2540 = SLTi
  { 2541,	3,	1,	4,	814,	0, 0x2ULL, nullptr, nullptr, OperandInfo357 },  // Inst #2541 = SLTi64
  { 2542,	3,	1,	4,	763,	0, 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2542 = SLTi_MM
  { 2543,	3,	1,	4,	368,	0, 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2543 = SLTiu
  { 2544,	3,	1,	4,	814,	0, 0x2ULL, nullptr, nullptr, OperandInfo357 },  // Inst #2544 = SLTiu64
  { 2545,	3,	1,	4,	763,	0, 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2545 = SLTiu_MM
  { 2546,	3,	1,	4,	504,	0, 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2546 = SLTu
  { 2547,	3,	1,	4,	813,	0, 0x1ULL, nullptr, nullptr, OperandInfo356 },  // Inst #2547 = SLTu64
  { 2548,	3,	1,	4,	762,	0, 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2548 = SLTu_MM
  { 2549,	3,	1,	4,	1206,	0, 0x1ULL, nullptr, nullptr, OperandInfo69 },  // Inst #2549 = SNE
  { 2550,	3,	1,	4,	1207,	0, 0x2ULL, nullptr, nullptr, OperandInfo68 },  // Inst #2550 = SNEi
  { 2551,	3,	1,	4,	545,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2551 = SPLATI_B
  { 2552,	3,	1,	4,	545,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #2552 = SPLATI_D
  { 2553,	3,	1,	4,	545,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #2553 = SPLATI_H
  { 2554,	3,	1,	4,	545,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #2554 = SPLATI_W
  { 2555,	3,	1,	4,	545,	0, 0x6ULL, nullptr, nullptr, OperandInfo358 },  // Inst #2555 = SPLAT_B
  { 2556,	3,	1,	4,	545,	0, 0x6ULL, nullptr, nullptr, OperandInfo359 },  // Inst #2556 = SPLAT_D
  { 2557,	3,	1,	4,	545,	0, 0x6ULL, nullptr, nullptr, OperandInfo360 },  // Inst #2557 = SPLAT_H
  { 2558,	3,	1,	4,	545,	0, 0x6ULL, nullptr, nullptr, OperandInfo361 },  // Inst #2558 = SPLAT_W
  { 2559,	3,	1,	4,	506,	0, 0x1ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2559 = SRA
  { 2560,	3,	1,	4,	621,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2560 = SRAI_B
  { 2561,	3,	1,	4,	621,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #2561 = SRAI_D
  { 2562,	3,	1,	4,	621,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #2562 = SRAI_H
  { 2563,	3,	1,	4,	621,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #2563 = SRAI_W
  { 2564,	3,	1,	4,	623,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2564 = SRARI_B
  { 2565,	3,	1,	4,	623,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #2565 = SRARI_D
  { 2566,	3,	1,	4,	623,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #2566 = SRARI_H
  { 2567,	3,	1,	4,	623,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #2567 = SRARI_W
  { 2568,	3,	1,	4,	623,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2568 = SRAR_B
  { 2569,	3,	1,	4,	623,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2569 = SRAR_D
  { 2570,	3,	1,	4,	623,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2570 = SRAR_H
  { 2571,	3,	1,	4,	623,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2571 = SRAR_W
  { 2572,	3,	1,	4,	511,	0, 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2572 = SRAV
  { 2573,	3,	1,	4,	764,	0, 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2573 = SRAV_MM
  { 2574,	3,	1,	4,	621,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2574 = SRA_B
  { 2575,	3,	1,	4,	621,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2575 = SRA_D
  { 2576,	3,	1,	4,	621,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2576 = SRA_H
  { 2577,	3,	1,	4,	765,	0, 0x1ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2577 = SRA_MM
  { 2578,	3,	1,	4,	621,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2578 = SRA_W
  { 2579,	3,	1,	4,	507,	0, 0x1ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2579 = SRL
  { 2580,	3,	1,	2,	766,	0, 0x0ULL, nullptr, nullptr, OperandInfo168 },  // Inst #2580 = SRL16_MM
  { 2581,	3,	1,	2,	799,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo168 },  // Inst #2581 = SRL16_MMR6
  { 2582,	3,	1,	4,	622,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2582 = SRLI_B
  { 2583,	3,	1,	4,	622,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #2583 = SRLI_D
  { 2584,	3,	1,	4,	622,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #2584 = SRLI_H
  { 2585,	3,	1,	4,	622,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #2585 = SRLI_W
  { 2586,	3,	1,	4,	624,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2586 = SRLRI_B
  { 2587,	3,	1,	4,	624,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #2587 = SRLRI_D
  { 2588,	3,	1,	4,	624,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #2588 = SRLRI_H
  { 2589,	3,	1,	4,	624,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #2589 = SRLRI_W
  { 2590,	3,	1,	4,	624,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2590 = SRLR_B
  { 2591,	3,	1,	4,	624,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2591 = SRLR_D
  { 2592,	3,	1,	4,	624,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2592 = SRLR_H
  { 2593,	3,	1,	4,	624,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2593 = SRLR_W
  { 2594,	3,	1,	4,	512,	0, 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2594 = SRLV
  { 2595,	3,	1,	4,	767,	0, 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2595 = SRLV_MM
  { 2596,	3,	1,	4,	622,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2596 = SRL_B
  { 2597,	3,	1,	4,	622,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2597 = SRL_D
  { 2598,	3,	1,	4,	622,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2598 = SRL_H
  { 2599,	3,	1,	4,	766,	0, 0x1ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2599 = SRL_MM
  { 2600,	3,	1,	4,	622,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2600 = SRL_W
  { 2601,	0,	0,	4,	372,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2601 = SSNOP
  { 2602,	0,	0,	4,	768,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2602 = SSNOP_MM
  { 2603,	0,	0,	4,	800,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2603 = SSNOP_MMR6
  { 2604,	3,	0,	4,	704,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo284 },  // Inst #2604 = ST_B
  { 2605,	3,	0,	4,	704,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo285 },  // Inst #2605 = ST_D
  { 2606,	3,	0,	4,	704,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo286 },  // Inst #2606 = ST_H
  { 2607,	3,	0,	4,	704,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo287 },  // Inst #2607 = ST_W
  { 2608,	3,	1,	4,	369,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2608 = SUB
  { 2609,	3,	1,	4,	1498,	0, 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2609 = SUBQH_PH
  { 2610,	3,	1,	4,	1662,	0, 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2610 = SUBQH_PH_MMR2
  { 2611,	3,	1,	4,	1499,	0, 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2611 = SUBQH_R_PH
  { 2612,	3,	1,	4,	1663,	0, 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2612 = SUBQH_R_PH_MMR2
  { 2613,	3,	1,	4,	1501,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2613 = SUBQH_R_W
  { 2614,	3,	1,	4,	1665,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2614 = SUBQH_R_W_MMR2
  { 2615,	3,	1,	4,	1500,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2615 = SUBQH_W
  { 2616,	3,	1,	4,	1664,	0, 0x6ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2616 = SUBQH_W_MMR2
  { 2617,	3,	1,	4,	1452,	0, 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #2617 = SUBQ_PH
  { 2618,	3,	1,	4,	1618,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #2618 = SUBQ_PH_MM
  { 2619,	3,	1,	4,	1453,	0, 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #2619 = SUBQ_S_PH
  { 2620,	3,	1,	4,	1619,	0, 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #2620 = SUBQ_S_PH_MM
  { 2621,	3,	1,	4,	1454,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo70 },  // Inst #2621 = SUBQ_S_W
  { 2622,	3,	1,	4,	1620,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo70 },  // Inst #2622 = SUBQ_S_W_MM
  { 2623,	3,	1,	4,	609,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2623 = SUBSUS_U_B
  { 2624,	3,	1,	4,	609,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2624 = SUBSUS_U_D
  { 2625,	3,	1,	4,	609,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2625 = SUBSUS_U_H
  { 2626,	3,	1,	4,	609,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2626 = SUBSUS_U_W
  { 2627,	3,	1,	4,	610,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2627 = SUBSUU_S_B
  { 2628,	3,	1,	4,	610,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2628 = SUBSUU_S_D
  { 2629,	3,	1,	4,	610,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2629 = SUBSUU_S_H
  { 2630,	3,	1,	4,	610,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2630 = SUBSUU_S_W
  { 2631,	3,	1,	4,	608,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2631 = SUBS_S_B
  { 2632,	3,	1,	4,	608,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2632 = SUBS_S_D
  { 2633,	3,	1,	4,	608,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2633 = SUBS_S_H
  { 2634,	3,	1,	4,	608,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2634 = SUBS_S_W
  { 2635,	3,	1,	4,	608,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2635 = SUBS_U_B
  { 2636,	3,	1,	4,	608,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2636 = SUBS_U_D
  { 2637,	3,	1,	4,	608,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2637 = SUBS_U_H
  { 2638,	3,	1,	4,	608,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2638 = SUBS_U_W
  { 2639,	3,	1,	2,	769,	0, 0x0ULL, nullptr, nullptr, OperandInfo173 },  // Inst #2639 = SUBU16_MM
  { 2640,	3,	1,	2,	801,	0, 0x0ULL, nullptr, nullptr, OperandInfo173 },  // Inst #2640 = SUBU16_MMR6
  { 2641,	3,	1,	4,	1504,	0, 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2641 = SUBUH_QB
  { 2642,	3,	1,	4,	1668,	0, 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2642 = SUBUH_QB_MMR2
  { 2643,	3,	1,	4,	1505,	0, 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2643 = SUBUH_R_QB
  { 2644,	3,	1,	4,	1669,	0, 0x6ULL, nullptr, nullptr, OperandInfo170 },  // Inst #2644 = SUBUH_R_QB_MMR2
  { 2645,	3,	1,	4,	801,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2645 = SUBU_MMR6
  { 2646,	3,	1,	4,	1502,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #2646 = SUBU_PH
  { 2647,	3,	1,	4,	1666,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #2647 = SUBU_PH_MMR2
  { 2648,	3,	1,	4,	1455,	0, 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #2648 = SUBU_QB
  { 2649,	3,	1,	4,	1621,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #2649 = SUBU_QB_MM
  { 2650,	3,	1,	4,	1503,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #2650 = SUBU_S_PH
  { 2651,	3,	1,	4,	1667,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #2651 = SUBU_S_PH_MMR2
  { 2652,	3,	1,	4,	1456,	0, 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #2652 = SUBU_S_QB
  { 2653,	3,	1,	4,	1622,	0, 0x6ULL, nullptr, ImplicitList8, OperandInfo170 },  // Inst #2653 = SUBU_S_QB_MM
  { 2654,	3,	1,	4,	611,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2654 = SUBVI_B
  { 2655,	3,	1,	4,	611,	0, 0x6ULL, nullptr, nullptr, OperandInfo175 },  // Inst #2655 = SUBVI_D
  { 2656,	3,	1,	4,	611,	0, 0x6ULL, nullptr, nullptr, OperandInfo176 },  // Inst #2656 = SUBVI_H
  { 2657,	3,	1,	4,	611,	0, 0x6ULL, nullptr, nullptr, OperandInfo177 },  // Inst #2657 = SUBVI_W
  { 2658,	3,	1,	4,	612,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2658 = SUBV_B
  { 2659,	3,	1,	4,	612,	0, 0x6ULL, nullptr, nullptr, OperandInfo44 },  // Inst #2659 = SUBV_D
  { 2660,	3,	1,	4,	612,	0, 0x6ULL, nullptr, nullptr, OperandInfo45 },  // Inst #2660 = SUBV_H
  { 2661,	3,	1,	4,	612,	0, 0x6ULL, nullptr, nullptr, OperandInfo46 },  // Inst #2661 = SUBV_W
  { 2662,	3,	1,	4,	770,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2662 = SUB_MM
  { 2663,	3,	1,	4,	802,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2663 = SUB_MMR6
  { 2664,	3,	1,	4,	370,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2664 = SUBu
  { 2665,	3,	1,	4,	769,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2665 = SUBu_MM
  { 2666,	3,	0,	4,	703,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo282 },  // Inst #2666 = SUXC1
  { 2667,	3,	0,	4,	703,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo283 },  // Inst #2667 = SUXC164
  { 2668,	3,	0,	4,	1292,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo283 },  // Inst #2668 = SUXC1_MM
  { 2669,	3,	0,	4,	454,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2669 = SW
  { 2670,	3,	0,	2,	1133,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo343 },  // Inst #2670 = SW16_MM
  { 2671,	3,	0,	2,	1156,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo343 },  // Inst #2671 = SW16_MMR6
  { 2672,	3,	0,	4,	1179,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #2672 = SW64
  { 2673,	3,	0,	4,	701,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo290 },  // Inst #2673 = SWC1
  { 2674,	3,	0,	4,	1291,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo290 },  // Inst #2674 = SWC1_MM
  { 2675,	3,	0,	4,	455,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo274 },  // Inst #2675 = SWC2
  { 2676,	3,	0,	4,	1157,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo275 },  // Inst #2676 = SWC2_MMR6
  { 2677,	3,	0,	4,	1084,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo274 },  // Inst #2677 = SWC2_R6
  { 2678,	3,	0,	4,	456,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo276 },  // Inst #2678 = SWC3
  { 2679,	3,	0,	4,	1342,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo291 },  // Inst #2679 = SWDSP
  { 2680,	3,	0,	4,	1507,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo291 },  // Inst #2680 = SWDSP_MM
  { 2681,	3,	0,	4,	462,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2681 = SWE
  { 2682,	3,	0,	4,	1102,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2682 = SWE_MM
  { 2683,	3,	0,	4,	464,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2683 = SWL
  { 2684,	3,	0,	4,	1180,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #2684 = SWL64
  { 2685,	3,	0,	4,	466,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2685 = SWLE
  { 2686,	3,	0,	4,	1103,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2686 = SWLE_MM
  { 2687,	3,	0,	4,	1134,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2687 = SWL_MM
  { 2688,	3,	0,	2,	1135,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo294 },  // Inst #2688 = SWM16_MM
  { 2689,	3,	0,	2,	1158,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo294 },  // Inst #2689 = SWM16_MMR6
  { 2690,	3,	0,	4,	1135,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo108 },  // Inst #2690 = SWM32_MM
  { 2691,	4,	0,	4,	1137,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo295 },  // Inst #2691 = SWP_MM
  { 2692,	3,	0,	4,	465,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2692 = SWR
  { 2693,	3,	0,	4,	1181,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo111 },  // Inst #2693 = SWR64
  { 2694,	3,	0,	4,	467,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2694 = SWRE
  { 2695,	3,	0,	4,	1104,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2695 = SWRE_MM
  { 2696,	3,	0,	4,	1138,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2696 = SWR_MM
  { 2697,	3,	0,	2,	1133,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo296 },  // Inst #2697 = SWSP_MM
  { 2698,	3,	0,	2,	1156,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo296 },  // Inst #2698 = SWSP_MMR6
  { 2699,	3,	0,	4,	702,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo297 },  // Inst #2699 = SWXC1
  { 2700,	3,	0,	4,	1293,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo297 },  // Inst #2700 = SWXC1_MM
  { 2701,	3,	0,	4,	1133,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2701 = SW_MM
  { 2702,	3,	0,	4,	1156,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo94 },  // Inst #2702 = SW_MMR6
  { 2703,	1,	0,	4,	472,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2703 = SYNC
  { 2704,	2,	0,	4,	473,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo362 },  // Inst #2704 = SYNCI
  { 2705,	2,	0,	4,	1142,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo362 },  // Inst #2705 = SYNCI_MM
  { 2706,	2,	0,	4,	1160,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo362 },  // Inst #2706 = SYNCI_MMR6
  { 2707,	1,	0,	4,	1141,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2707 = SYNC_MM
  { 2708,	1,	0,	4,	1159,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2708 = SYNC_MMR6
  { 2709,	1,	0,	4,	390,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2709 = SYSCALL
  { 2710,	1,	0,	4,	968,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2710 = SYSCALL_MM
  { 2711,	0,	0,	2,	1114,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, nullptr },  // Inst #2711 = Save16
  { 2712,	0,	0,	2,	1114,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, nullptr },  // Inst #2712 = SaveX16
  { 2713,	3,	0,	4,	1115,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo298 },  // Inst #2713 = SbRxRyOffMemX16
  { 2714,	2,	1,	2,	735,	0, 0x0ULL, nullptr, nullptr, OperandInfo363 },  // Inst #2714 = SebRx16
  { 2715,	2,	1,	2,	735,	0, 0x0ULL, nullptr, nullptr, OperandInfo363 },  // Inst #2715 = SehRx16
  { 2716,	3,	0,	4,	1116,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo298 },  // Inst #2716 = ShRxRyOffMemX16
  { 2717,	3,	1,	4,	735,	0, 0x0ULL, nullptr, nullptr, OperandInfo165 },  // Inst #2717 = SllX16
  { 2718,	3,	1,	2,	735,	0, 0x0ULL, nullptr, nullptr, OperandInfo184 },  // Inst #2718 = SllvRxRy16
  { 2719,	2,	0,	2,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo128 },  // Inst #2719 = SltRxRy16
  { 2720,	2,	0,	2,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo181 },  // Inst #2720 = SltiRxImm16
  { 2721,	2,	0,	4,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo181 },  // Inst #2721 = SltiRxImmX16
  { 2722,	2,	0,	2,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo181 },  // Inst #2722 = SltiuRxImm16
  { 2723,	2,	0,	4,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo181 },  // Inst #2723 = SltiuRxImmX16
  { 2724,	2,	0,	2,	735,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo128 },  // Inst #2724 = SltuRxRy16
  { 2725,	3,	1,	4,	735,	0, 0x0ULL, nullptr, nullptr, OperandInfo165 },  // Inst #2725 = SraX16
  { 2726,	3,	1,	2,	735,	0, 0x0ULL, nullptr, nullptr, OperandInfo184 },  // Inst #2726 = SravRxRy16
  { 2727,	3,	1,	4,	735,	0, 0x0ULL, nullptr, nullptr, OperandInfo165 },  // Inst #2727 = SrlX16
  { 2728,	3,	1,	2,	735,	0, 0x0ULL, nullptr, nullptr, OperandInfo184 },  // Inst #2728 = SrlvRxRy16
  { 2729,	3,	1,	2,	735,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo129 },  // Inst #2729 = SubuRxRyRz16
  { 2730,	3,	0,	4,	1117,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo298 },  // Inst #2730 = SwRxRyOffMemX16
  { 2731,	3,	0,	4,	1117,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo183 },  // Inst #2731 = SwRxSpImmX16
  { 2732,	3,	0,	4,	391,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2732 = TEQ
  { 2733,	2,	0,	4,	392,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2733 = TEQI
  { 2734,	2,	0,	4,	969,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2734 = TEQI_MM
  { 2735,	3,	0,	4,	970,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2735 = TEQ_MM
  { 2736,	3,	0,	4,	393,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2736 = TGE
  { 2737,	2,	0,	4,	394,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2737 = TGEI
  { 2738,	2,	0,	4,	395,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2738 = TGEIU
  { 2739,	2,	0,	4,	971,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2739 = TGEIU_MM
  { 2740,	2,	0,	4,	972,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2740 = TGEI_MM
  { 2741,	3,	0,	4,	396,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2741 = TGEU
  { 2742,	3,	0,	4,	973,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2742 = TGEU_MM
  { 2743,	3,	0,	4,	974,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2743 = TGE_MM
  { 2744,	0,	0,	4,	425,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2744 = TLBGINV
  { 2745,	0,	0,	4,	426,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2745 = TLBGINVF
  { 2746,	0,	0,	4,	1070,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2746 = TLBGINVF_MM
  { 2747,	0,	0,	4,	1071,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2747 = TLBGINV_MM
  { 2748,	0,	0,	4,	427,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2748 = TLBGP
  { 2749,	0,	0,	4,	1072,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2749 = TLBGP_MM
  { 2750,	0,	0,	4,	428,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2750 = TLBGR
  { 2751,	0,	0,	4,	1073,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2751 = TLBGR_MM
  { 2752,	0,	0,	4,	429,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2752 = TLBGWI
  { 2753,	0,	0,	4,	1074,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2753 = TLBGWI_MM
  { 2754,	0,	0,	4,	430,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2754 = TLBGWR
  { 2755,	0,	0,	4,	1075,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2755 = TLBGWR_MM
  { 2756,	0,	0,	4,	410,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2756 = TLBINV
  { 2757,	0,	0,	4,	411,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2757 = TLBINVF
  { 2758,	0,	0,	4,	1039,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2758 = TLBINVF_MMR6
  { 2759,	0,	0,	4,	1038,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2759 = TLBINV_MMR6
  { 2760,	0,	0,	4,	412,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2760 = TLBP
  { 2761,	0,	0,	4,	1027,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2761 = TLBP_MM
  { 2762,	0,	0,	4,	413,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2762 = TLBR
  { 2763,	0,	0,	4,	1028,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2763 = TLBR_MM
  { 2764,	0,	0,	4,	414,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2764 = TLBWI
  { 2765,	0,	0,	4,	1029,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2765 = TLBWI_MM
  { 2766,	0,	0,	4,	415,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2766 = TLBWR
  { 2767,	0,	0,	4,	1030,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr },  // Inst #2767 = TLBWR_MM
  { 2768,	3,	0,	4,	397,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2768 = TLT
  { 2769,	2,	0,	4,	398,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2769 = TLTI
  { 2770,	2,	0,	4,	975,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2770 = TLTIU_MM
  { 2771,	2,	0,	4,	976,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2771 = TLTI_MM
  { 2772,	3,	0,	4,	399,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2772 = TLTU
  { 2773,	3,	0,	4,	977,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2773 = TLTU_MM
  { 2774,	3,	0,	4,	978,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2774 = TLT_MM
  { 2775,	3,	0,	4,	400,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2775 = TNE
  { 2776,	2,	0,	4,	401,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2776 = TNEI
  { 2777,	2,	0,	4,	979,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2777 = TNEI_MM
  { 2778,	3,	0,	4,	980,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2778 = TNE_MM
  { 2779,	2,	1,	4,	637,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #2779 = TRUNC_L_D64
  { 2780,	2,	1,	4,	1308,	0, 0x4ULL, nullptr, nullptr, OperandInfo201 },  // Inst #2780 = TRUNC_L_D_MMR6
  { 2781,	2,	1,	4,	637,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #2781 = TRUNC_L_S
  { 2782,	2,	1,	4,	1308,	0, 0x4ULL, nullptr, nullptr, OperandInfo202 },  // Inst #2782 = TRUNC_L_S_MMR6
  { 2783,	2,	1,	4,	637,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #2783 = TRUNC_W_D32
  { 2784,	2,	1,	4,	637,	0, 0x4ULL, nullptr, nullptr, OperandInfo204 },  // Inst #2784 = TRUNC_W_D64
  { 2785,	2,	1,	4,	1308,	0, 0x4ULL, nullptr, nullptr, OperandInfo204 },  // Inst #2785 = TRUNC_W_D_MMR6
  { 2786,	2,	1,	4,	1256,	0, 0x4ULL, nullptr, nullptr, OperandInfo203 },  // Inst #2786 = TRUNC_W_MM
  { 2787,	2,	1,	4,	637,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #2787 = TRUNC_W_S
  { 2788,	2,	1,	4,	1256,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #2788 = TRUNC_W_S_MM
  { 2789,	2,	1,	4,	1308,	0, 0x4ULL, nullptr, nullptr, OperandInfo205 },  // Inst #2789 = TRUNC_W_S_MMR6
  { 2790,	2,	0,	4,	403,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2790 = TTLTIU
  { 2791,	2,	0,	4,	866,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList6, OperandInfo43 },  // Inst #2791 = UDIV
  { 2792,	2,	0,	4,	886,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList6, OperandInfo43 },  // Inst #2792 = UDIV_MM
  { 2793,	3,	1,	4,	1208,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList33, OperandInfo69 },  // Inst #2793 = V3MULU
  { 2794,	3,	1,	4,	1208,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList25, OperandInfo69 },  // Inst #2794 = VMM0
  { 2795,	3,	1,	4,	1208,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList34, OperandInfo69 },  // Inst #2795 = VMULU
  { 2796,	4,	1,	4,	515,	0, 0x6ULL, nullptr, nullptr, OperandInfo194 },  // Inst #2796 = VSHF_B
  { 2797,	4,	1,	4,	515,	0, 0x6ULL, nullptr, nullptr, OperandInfo57 },  // Inst #2797 = VSHF_D
  { 2798,	4,	1,	4,	515,	0, 0x6ULL, nullptr, nullptr, OperandInfo59 },  // Inst #2798 = VSHF_H
  { 2799,	4,	1,	4,	515,	0, 0x6ULL, nullptr, nullptr, OperandInfo58 },  // Inst #2799 = VSHF_W
  { 2800,	0,	0,	4,	404,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr },  // Inst #2800 = WAIT
  { 2801,	1,	0,	4,	1035,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2801 = WAIT_MM
  { 2802,	1,	0,	4,	1052,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2 },  // Inst #2802 = WAIT_MMR6
  { 2803,	2,	0,	4,	1457,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2803 = WRDSP
  { 2804,	2,	0,	4,	1623,	0|(1ULL<<MCID::MoveReg)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo112 },  // Inst #2804 = WRDSP_MM
  { 2805,	2,	1,	4,	1037,	0, 0x6ULL, nullptr, nullptr, OperandInfo43 },  // Inst #2805 = WRPGPR_MMR6
  { 2806,	2,	1,	4,	481,	0, 0x1ULL, nullptr, nullptr, OperandInfo43 },  // Inst #2806 = WSBH
  { 2807,	2,	1,	4,	771,	0, 0x1ULL, nullptr, nullptr, OperandInfo43 },  // Inst #2807 = WSBH_MM
  { 2808,	2,	1,	4,	803,	0, 0x6ULL, nullptr, nullptr, OperandInfo43 },  // Inst #2808 = WSBH_MMR6
  { 2809,	3,	1,	4,	371,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2809 = XOR
  { 2810,	3,	1,	2,	772,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo179 },  // Inst #2810 = XOR16_MM
  { 2811,	3,	1,	2,	804,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo179 },  // Inst #2811 = XOR16_MMR6
  { 2812,	3,	1,	4,	815,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo69 },  // Inst #2812 = XOR64
  { 2813,	3,	1,	4,	549,	0, 0x6ULL, nullptr, nullptr, OperandInfo174 },  // Inst #2813 = XORI_B
  { 2814,	3,	1,	4,	805,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2814 = XORI_MMR6
  { 2815,	3,	1,	4,	772,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2815 = XOR_MM
  { 2816,	3,	1,	4,	804,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo70 },  // Inst #2816 = XOR_MMR6
  { 2817,	3,	1,	4,	548,	0, 0x6ULL, nullptr, nullptr, OperandInfo172 },  // Inst #2817 = XOR_V
  { 2818,	3,	1,	4,	508,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2818 = XORi
  { 2819,	3,	1,	4,	815,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo68 },  // Inst #2819 = XORi64
  { 2820,	3,	1,	4,	773,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo71 },  // Inst #2820 = XORi_MM
  { 2821,	3,	1,	2,	735,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo184 },  // Inst #2821 = XorRxRxRy16
  { 2822,	2,	1,	4,	1065,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo43 },  // Inst #2822 = YIELD
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char MipsInstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "DMFC0\0"
  /* 15 */ "DMFGC0\0"
  /* 22 */ "MFHGC0\0"
  /* 29 */ "MTHGC0\0"
  /* 36 */ "DMTGC0\0"
  /* 43 */ "MFTC0\0"
  /* 49 */ "DMTC0\0"
  /* 55 */ "MTTC0\0"
  /* 61 */ "VMM0\0"
  /* 66 */ "MTM0\0"
  /* 71 */ "MTP0\0"
  /* 76 */ "BBIT0\0"
  /* 82 */ "LDC1\0"
  /* 87 */ "SDC1\0"
  /* 92 */ "CFC1\0"
  /* 97 */ "DMFC1\0"
  /* 103 */ "MFTHC1\0"
  /* 110 */ "MTTHC1\0"
  /* 117 */ "CTC1\0"
  /* 122 */ "CFTC1\0"
  /* 128 */ "MFTC1\0"
  /* 134 */ "DMTC1\0"
  /* 140 */ "CTTC1\0"
  /* 146 */ "MTTC1\0"
  /* 152 */ "LWC1\0"
  /* 157 */ "SWC1\0"
  /* 162 */ "LDXC1\0"
  /* 168 */ "SDXC1\0"
  /* 174 */ "LUXC1\0"
  /* 180 */ "SUXC1\0"
  /* 186 */ "LWXC1\0"
  /* 192 */ "SWXC1\0"
  /* 198 */ "MTM1\0"
  /* 203 */ "SDC1_M1\0"
  /* 211 */ "MTP1\0"
  /* 216 */ "BBIT1\0"
  /* 222 */ "BBIT032\0"
  /* 230 */ "BBIT132\0"
  /* 238 */ "DSRA32\0"
  /* 245 */ "MFHC1_D32\0"
  /* 255 */ "MTHC1_D32\0"
  /* 265 */ "FSUB_D32\0"
  /* 274 */ "NMSUB_D32\0"
  /* 284 */ "FADD_D32\0"
  /* 293 */ "NMADD_D32\0"
  /* 303 */ "C_NGE_D32\0"
  /* 313 */ "C_NGLE_D32\0"
  /* 324 */ "C_OLE_D32\0"
  /* 334 */ "C_ULE_D32\0"
  /* 344 */ "C_LE_D32\0"
  /* 353 */ "C_SF_D32\0"
  /* 362 */ "MOVF_D32\0"
  /* 371 */ "C_F_D32\0"
  /* 379 */ "PseudoSELECTFP_F_D32\0"
  /* 400 */ "FNEG_D32\0"
  /* 409 */ "MOVN_I_D32\0"
  /* 420 */ "MOVZ_I_D32\0"
  /* 431 */ "C_NGL_D32\0"
  /* 441 */ "FMUL_D32\0"
  /* 450 */ "C_UN_D32\0"
  /* 459 */ "RECIP_D32\0"
  /* 469 */ "FCMP_D32\0"
  /* 478 */ "C_SEQ_D32\0"
  /* 488 */ "C_UEQ_D32\0"
  /* 498 */ "C_EQ_D32\0"
  /* 507 */ "FABS_D32\0"
  /* 516 */ "CVT_S_D32\0"
  /* 526 */ "PseudoSELECT_D32\0"
  /* 543 */ "C_NGT_D32\0"
  /* 553 */ "C_OLT_D32\0"
  /* 563 */ "C_ULT_D32\0"
  /* 573 */ "C_LT_D32\0"
  /* 582 */ "FSQRT_D32\0"
  /* 592 */ "RSQRT_D32\0"
  /* 602 */ "MOVT_D32\0"
  /* 611 */ "PseudoSELECTFP_T_D32\0"
  /* 632 */ "FDIV_D32\0"
  /* 641 */ "FMOV_D32\0"
  /* 650 */ "PseudoTRUNC_W_D32\0"
  /* 668 */ "ROUND_W_D32\0"
  /* 680 */ "CEIL_W_D32\0"
  /* 691 */ "FLOOR_W_D32\0"
  /* 703 */ "CVT_W_D32\0"
  /* 713 */ "BPOSGE32\0"
  /* 722 */ "ATOMIC_LOAD_SUB_I32\0"
  /* 742 */ "ATOMIC_LOAD_ADD_I32\0"
  /* 762 */ "ATOMIC_LOAD_NAND_I32\0"
  /* 783 */ "ATOMIC_LOAD_AND_I32\0"
  /* 803 */ "ATOMIC_LOAD_UMIN_I32\0"
  /* 824 */ "ATOMIC_LOAD_MIN_I32\0"
  /* 844 */ "ATOMIC_SWAP_I32\0"
  /* 860 */ "ATOMIC_CMP_SWAP_I32\0"
  /* 880 */ "ATOMIC_LOAD_XOR_I32\0"
  /* 900 */ "ATOMIC_LOAD_OR_I32\0"
  /* 919 */ "ATOMIC_LOAD_UMAX_I32\0"
  /* 940 */ "ATOMIC_LOAD_MAX_I32\0"
  /* 960 */ "DSLL32\0"
  /* 967 */ "DSRL32\0"
  /* 974 */ "DROTR32\0"
  /* 982 */ "CINS32\0"
  /* 989 */ "EXTS32\0"
  /* 996 */ "FCMP_S32\0"
  /* 1005 */ "DSLL64_32\0"
  /* 1015 */ "CINS64_32\0"
  /* 1025 */ "DEXT64_32\0"
  /* 1035 */ "LoadImmDoubleFGR_32\0"
  /* 1055 */ "LoadAddrReg32\0"
  /* 1069 */ "CINS_i32\0"
  /* 1078 */ "LoadImm32\0"
  /* 1088 */ "LoadAddrImm32\0"
  /* 1102 */ "MIPSeh_return32\0"
  /* 1118 */ "LwConstant32\0"
  /* 1131 */ "LDC2\0"
  /* 1136 */ "SDC2\0"
  /* 1141 */ "DMFC2\0"
  /* 1147 */ "DMTC2\0"
  /* 1153 */ "LWC2\0"
  /* 1158 */ "SWC2\0"
  /* 1163 */ "G_FLOG2\0"
  /* 1171 */ "MTM2\0"
  /* 1176 */ "MTP2\0"
  /* 1181 */ "G_FEXP2\0"
  /* 1189 */ "SHRA_QB_MMR2\0"
  /* 1202 */ "CMPGDU_LE_QB_MMR2\0"
  /* 1220 */ "SUBUH_QB_MMR2\0"
  /* 1234 */ "ADDUH_QB_MMR2\0"
  /* 1248 */ "CMPGDU_EQ_QB_MMR2\0"
  /* 1266 */ "SHRA_R_QB_MMR2\0"
  /* 1281 */ "SUBUH_R_QB_MMR2\0"
  /* 1297 */ "ADDUH_R_QB_MMR2\0"
  /* 1313 */ "SHRAV_R_QB_MMR2\0"
  /* 1329 */ "ABSQ_S_QB_MMR2\0"
  /* 1344 */ "CMPGDU_LT_QB_MMR2\0"
  /* 1362 */ "SHRAV_QB_MMR2\0"
  /* 1376 */ "PREPEND_MMR2\0"
  /* 1389 */ "APPEND_MMR2\0"
  /* 1401 */ "PRECR_QB_PH_MMR2\0"
  /* 1418 */ "SUBQH_PH_MMR2\0"
  /* 1432 */ "ADDQH_PH_MMR2\0"
  /* 1446 */ "SHRL_PH_MMR2\0"
  /* 1459 */ "MUL_PH_MMR2\0"
  /* 1471 */ "SUBQH_R_PH_MMR2\0"
  /* 1487 */ "ADDQH_R_PH_MMR2\0"
  /* 1503 */ "MUL_S_PH_MMR2\0"
  /* 1517 */ "MULQ_S_PH_MMR2\0"
  /* 1532 */ "SUBU_S_PH_MMR2\0"
  /* 1547 */ "ADDU_S_PH_MMR2\0"
  /* 1562 */ "SUBU_PH_MMR2\0"
  /* 1575 */ "ADDU_PH_MMR2\0"
  /* 1588 */ "SHRLV_PH_MMR2\0"
  /* 1602 */ "DPA_W_PH_MMR2\0"
  /* 1616 */ "MULSA_W_PH_MMR2\0"
  /* 1632 */ "DPAQX_SA_W_PH_MMR2\0"
  /* 1651 */ "DPSQX_SA_W_PH_MMR2\0"
  /* 1670 */ "DPS_W_PH_MMR2\0"
  /* 1684 */ "DPAQX_S_W_PH_MMR2\0"
  /* 1702 */ "DPSQX_S_W_PH_MMR2\0"
  /* 1720 */ "DPAX_W_PH_MMR2\0"
  /* 1735 */ "DPSX_W_PH_MMR2\0"
  /* 1750 */ "BALIGN_MMR2\0"
  /* 1762 */ "PRECR_SRA_PH_W_MMR2\0"
  /* 1782 */ "PRECR_SRA_R_PH_W_MMR2\0"
  /* 1804 */ "SUBQH_W_MMR2\0"
  /* 1817 */ "ADDQH_W_MMR2\0"
  /* 1830 */ "SUBQH_R_W_MMR2\0"
  /* 1845 */ "ADDQH_R_W_MMR2\0"
  /* 1860 */ "MULQ_RS_W_MMR2\0"
  /* 1875 */ "MULQ_S_W_MMR2\0"
  /* 1889 */ "LDC3\0"
  /* 1894 */ "SDC3\0"
  /* 1899 */ "LWC3\0"
  /* 1904 */ "SWC3\0"
  /* 1909 */ "BPOSGE32C_MMR3\0"
  /* 1924 */ "LDC164\0"
  /* 1931 */ "SDC164\0"
  /* 1938 */ "LDXC164\0"
  /* 1946 */ "SDXC164\0"
  /* 1954 */ "LUXC164\0"
  /* 1962 */ "SUXC164\0"
  /* 1970 */ "SEB64\0"
  /* 1976 */ "TAILCALLREGHB64\0"
  /* 1992 */ "JR_HB64\0"
  /* 2000 */ "JALR_HB64\0"
  /* 2010 */ "LB64\0"
  /* 2015 */ "SB64\0"
  /* 2020 */ "LOAD_ACC64\0"
  /* 2031 */ "STORE_ACC64\0"
  /* 2043 */ "BGEC64\0"
  /* 2050 */ "BNEC64\0"
  /* 2057 */ "JIC64\0"
  /* 2063 */ "JIALC64\0"
  /* 2071 */ "BEQC64\0"
  /* 2078 */ "SC64\0"
  /* 2083 */ "BLTC64\0"
  /* 2090 */ "BGEUC64\0"
  /* 2098 */ "BLTUC64\0"
  /* 2106 */ "BGEZC64\0"
  /* 2114 */ "BLEZC64\0"
  /* 2122 */ "BNEZC64\0"
  /* 2130 */ "BEQZC64\0"
  /* 2138 */ "BGTZC64\0"
  /* 2146 */ "BLTZC64\0"
  /* 2154 */ "AND64\0"
  /* 2160 */ "MFC1_D64\0"
  /* 2169 */ "MFHC1_D64\0"
  /* 2179 */ "MTHC1_D64\0"
  /* 2189 */ "MTC1_D64\0"
  /* 2198 */ "MOVN_I64_D64\0"
  /* 2211 */ "MOVZ_I64_D64\0"
  /* 2224 */ "FSUB_D64\0"
  /* 2233 */ "NMSUB_D64\0"
  /* 2243 */ "FADD_D64\0"
  /* 2252 */ "NMADD_D64\0"
  /* 2262 */ "C_NGE_D64\0"
  /* 2272 */ "C_NGLE_D64\0"
  /* 2283 */ "C_OLE_D64\0"
  /* 2293 */ "C_ULE_D64\0"
  /* 2303 */ "C_LE_D64\0"
  /* 2312 */ "C_SF_D64\0"
  /* 2321 */ "MOVF_D64\0"
  /* 2330 */ "C_F_D64\0"
  /* 2338 */ "PseudoSELECTFP_F_D64\0"
  /* 2359 */ "FNEG_D64\0"
  /* 2368 */ "MOVN_I_D64\0"
  /* 2379 */ "MOVZ_I_D64\0"
  /* 2390 */ "C_NGL_D64\0"
  /* 2400 */ "FMUL_D64\0"
  /* 2409 */ "TRUNC_L_D64\0"
  /* 2421 */ "ROUND_L_D64\0"
  /* 2433 */ "CEIL_L_D64\0"
  /* 2444 */ "FLOOR_L_D64\0"
  /* 2456 */ "CVT_L_D64\0"
  /* 2466 */ "C_UN_D64\0"
  /* 2475 */ "RECIP_D64\0"
  /* 2485 */ "FCMP_D64\0"
  /* 2494 */ "C_SEQ_D64\0"
  /* 2504 */ "C_UEQ_D64\0"
  /* 2514 */ "C_EQ_D64\0"
  /* 2523 */ "FABS_D64\0"
  /* 2532 */ "CVT_S_D64\0"
  /* 2542 */ "PseudoSELECT_D64\0"
  /* 2559 */ "C_NGT_D64\0"
  /* 2569 */ "C_OLT_D64\0"
  /* 2579 */ "C_ULT_D64\0"
  /* 2589 */ "C_LT_D64\0"
  /* 2598 */ "FSQRT_D64\0"
  /* 2608 */ "RSQRT_D64\0"
  /* 2618 */ "MOVT_D64\0"
  /* 2627 */ "PseudoSELECTFP_T_D64\0"
  /* 2648 */ "FDIV_D64\0"
  /* 2657 */ "FMOV_D64\0"
  /* 2666 */ "TRUNC_W_D64\0"
  /* 2678 */ "ROUND_W_D64\0"
  /* 2690 */ "CEIL_W_D64\0"
  /* 2701 */ "FLOOR_W_D64\0"
  /* 2713 */ "CVT_W_D64\0"
  /* 2723 */ "BNE64\0"
  /* 2729 */ "BuildPairF64\0"
  /* 2742 */ "ExtractElementF64\0"
  /* 2760 */ "TAILCALLREG64\0"
  /* 2774 */ "SEH64\0"
  /* 2780 */ "LH64\0"
  /* 2785 */ "SH64\0"
  /* 2790 */ "PseudoMFHI64\0"
  /* 2803 */ "PseudoMTLOHI64\0"
  /* 2818 */ "MTHI64\0"
  /* 2825 */ "MOVN_I64_I64\0"
  /* 2838 */ "MOVZ_I64_I64\0"
  /* 2851 */ "ATOMIC_LOAD_SUB_I64\0"
  /* 2871 */ "ATOMIC_LOAD_ADD_I64\0"
  /* 2891 */ "ATOMIC_LOAD_NAND_I64\0"
  /* 2912 */ "ATOMIC_LOAD_AND_I64\0"
  /* 2932 */ "MOVF_I64\0"
  /* 2941 */ "PseudoSELECTFP_F_I64\0"
  /* 2962 */ "MOVN_I_I64\0"
  /* 2973 */ "MOVZ_I_I64\0"
  /* 2984 */ "ATOMIC_LOAD_UMIN_I64\0"
  /* 3005 */ "ATOMIC_LOAD_MIN_I64\0"
  /* 3025 */ "ATOMIC_SWAP_I64\0"
  /* 3041 */ "ATOMIC_CMP_SWAP_I64\0"
  /* 3061 */ "ATOMIC_LOAD_XOR_I64\0"
  /* 3081 */ "ATOMIC_LOAD_OR_I64\0"
  /* 3100 */ "PseudoD_SELECT_I64\0"
  /* 3119 */ "PseudoSELECT_I64\0"
  /* 3136 */ "MOVT_I64\0"
  /* 3145 */ "PseudoSELECTFP_T_I64\0"
  /* 3166 */ "ATOMIC_LOAD_UMAX_I64\0"
  /* 3187 */ "ATOMIC_LOAD_MAX_I64\0"
  /* 3207 */ "LL64\0"
  /* 3212 */ "CVT_S_PL64\0"
  /* 3223 */ "LWL64\0"
  /* 3229 */ "SWL64\0"
  /* 3235 */ "PseudoMFLO64\0"
  /* 3248 */ "MTLO64\0"
  /* 3255 */ "BEQ64\0"
  /* 3261 */ "JR64\0"
  /* 3266 */ "JALR64\0"
  /* 3273 */ "NOR64\0"
  /* 3279 */ "XOR64\0"
  /* 3285 */ "RDHWR64\0"
  /* 3293 */ "LWR64\0"
  /* 3299 */ "SWR64\0"
  /* 3305 */ "FSUB_PS64\0"
  /* 3315 */ "FADD_PS64\0"
  /* 3325 */ "PLL_PS64\0"
  /* 3334 */ "FMUL_PS64\0"
  /* 3344 */ "PUL_PS64\0"
  /* 3353 */ "ADDR_PS64\0"
  /* 3363 */ "MULR_PS64\0"
  /* 3373 */ "PLU_PS64\0"
  /* 3382 */ "PUU_PS64\0"
  /* 3391 */ "CVT_PW_PS64\0"
  /* 3403 */ "CVT_PS_S64\0"
  /* 3414 */ "SLT64\0"
  /* 3420 */ "CVT_S_PU64\0"
  /* 3431 */ "LW64\0"
  /* 3436 */ "CVT_PS_PW64\0"
  /* 3448 */ "SW64\0"
  /* 3453 */ "BGEZ64\0"
  /* 3460 */ "BLEZ64\0"
  /* 3467 */ "SELNEZ64\0"
  /* 3476 */ "SELEQZ64\0"
  /* 3485 */ "BGTZ64\0"
  /* 3492 */ "BLTZ64\0"
  /* 3499 */ "BuildPairF64_64\0"
  /* 3515 */ "ExtractElementF64_64\0"
  /* 3536 */ "SLL64_64\0"
  /* 3545 */ "LONG_BRANCH_LUi2Op_64\0"
  /* 3567 */ "LoadAddrReg64\0"
  /* 3581 */ "PseudoIndirectHazardBranch64\0"
  /* 3610 */ "PseudoIndirectBranch64\0"
  /* 3633 */ "ANDi64\0"
  /* 3640 */ "XORi64\0"
  /* 3647 */ "SLTi64\0"
  /* 3654 */ "LUi64\0"
  /* 3660 */ "SGEImm64\0"
  /* 3669 */ "SLEImm64\0"
  /* 3678 */ "NORImm64\0"
  /* 3687 */ "SGTImm64\0"
  /* 3696 */ "SLTImm64\0"
  /* 3705 */ "SGEUImm64\0"
  /* 3715 */ "SLEUImm64\0"
  /* 3725 */ "SGTUImm64\0"
  /* 3735 */ "SLTUImm64\0"
  /* 3745 */ "LoadImm64\0"
  /* 3755 */ "LoadAddrImm64\0"
  /* 3769 */ "PseudoReturn64\0"
  /* 3784 */ "MIPSeh_return64\0"
  /* 3800 */ "LBu64\0"
  /* 3806 */ "LHu64\0"
  /* 3812 */ "SLTu64\0"
  /* 3819 */ "LEA_ADDiu64\0"
  /* 3831 */ "SLTiu64\0"
  /* 3839 */ "MoveR3216\0"
  /* 3849 */ "RetRA16\0"
  /* 3857 */ "JalB16\0"
  /* 3864 */ "LD_F16\0"
  /* 3871 */ "ST_F16\0"
  /* 3878 */ "ATOMIC_LOAD_SUB_I16\0"
  /* 3898 */ "ATOMIC_LOAD_ADD_I16\0"
  /* 3918 */ "ATOMIC_LOAD_NAND_I16\0"
  /* 3939 */ "ATOMIC_LOAD_AND_I16\0"
  /* 3959 */ "ATOMIC_LOAD_UMIN_I16\0"
  /* 3980 */ "ATOMIC_LOAD_MIN_I16\0"
  /* 4000 */ "ATOMIC_SWAP_I16\0"
  /* 4016 */ "ATOMIC_CMP_SWAP_I16\0"
  /* 4036 */ "ATOMIC_LOAD_XOR_I16\0"
  /* 4056 */ "ATOMIC_LOAD_OR_I16\0"
  /* 4075 */ "ATOMIC_LOAD_UMAX_I16\0"
  /* 4096 */ "ATOMIC_LOAD_MAX_I16\0"
  /* 4116 */ "Move32R16\0"
  /* 4126 */ "SraX16\0"
  /* 4133 */ "RestoreX16\0"
  /* 4144 */ "SaveX16\0"
  /* 4152 */ "BtnezT8CmpiX16\0"
  /* 4167 */ "BteqzT8CmpiX16\0"
  /* 4182 */ "BtnezT8SltiX16\0"
  /* 4197 */ "BteqzT8SltiX16\0"
  /* 4212 */ "SllX16\0"
  /* 4219 */ "SrlX16\0"
  /* 4226 */ "LbRxRyOffMemX16\0"
  /* 4242 */ "SbRxRyOffMemX16\0"
  /* 4258 */ "LhRxRyOffMemX16\0"
  /* 4274 */ "ShRxRyOffMemX16\0"
  /* 4290 */ "LbuRxRyOffMemX16\0"
  /* 4307 */ "LhuRxRyOffMemX16\0"
  /* 4324 */ "AddiuRxRyOffMemX16\0"
  /* 4343 */ "LwRxRyOffMemX16\0"
  /* 4359 */ "SwRxRyOffMemX16\0"
  /* 4375 */ "AddiuRxPcImmX16\0"
  /* 4391 */ "AddiuSpImmX16\0"
  /* 4405 */ "LwRxSpImmX16\0"
  /* 4418 */ "SwRxSpImmX16\0"
  /* 4431 */ "SltiCCRxImmX16\0"
  /* 4446 */ "SltiuCCRxImmX16\0"
  /* 4462 */ "LiRxImmX16\0"
  /* 4473 */ "CmpiRxImmX16\0"
  /* 4486 */ "SltiRxImmX16\0"
  /* 4499 */ "AddiuRxImmX16\0"
  /* 4513 */ "SltiuRxImmX16\0"
  /* 4527 */ "AddiuRxRxImmX16\0"
  /* 4543 */ "BnezRxImmX16\0"
  /* 4556 */ "BeqzRxImmX16\0"
  /* 4569 */ "BimmX16\0"
  /* 4577 */ "LiRxImmAlignX16\0"
  /* 4593 */ "LwRxPcTcpX16\0"
  /* 4606 */ "BtnezT8CmpX16\0"
  /* 4620 */ "BteqzT8CmpX16\0"
  /* 4634 */ "BtnezT8SltX16\0"
  /* 4648 */ "BteqzT8SltX16\0"
  /* 4662 */ "BtnezT8SltiuX16\0"
  /* 4678 */ "BteqzT8SltiuX16\0"
  /* 4694 */ "BtnezT8SltuX16\0"
  /* 4709 */ "BteqzT8SltuX16\0"
  /* 4724 */ "BtnezX16\0"
  /* 4733 */ "BteqzX16\0"
  /* 4742 */ "JrcRa16\0"
  /* 4750 */ "JrRa16\0"
  /* 4757 */ "Restore16\0"
  /* 4767 */ "GotPrologue16\0"
  /* 4781 */ "Save16\0"
  /* 4788 */ "JumpLinkReg16\0"
  /* 4802 */ "Mfhi16\0"
  /* 4809 */ "Break16\0"
  /* 4817 */ "Jal16\0"
  /* 4823 */ "AddiuSpImm16\0"
  /* 4836 */ "LiRxImm16\0"
  /* 4846 */ "CmpiRxImm16\0"
  /* 4858 */ "SltiRxImm16\0"
  /* 4870 */ "SltiuRxImm16\0"
  /* 4883 */ "AddiuRxRxImm16\0"
  /* 4898 */ "BnezRxImm16\0"
  /* 4910 */ "BeqzRxImm16\0"
  /* 4922 */ "Bimm16\0"
  /* 4929 */ "Mflo16\0"
  /* 4936 */ "LwRxPcTcp16\0"
  /* 4948 */ "SebRx16\0"
  /* 4956 */ "JrcRx16\0"
  /* 4964 */ "SehRx16\0"
  /* 4972 */ "SltCCRxRy16\0"
  /* 4984 */ "SltuCCRxRy16\0"
  /* 4997 */ "NegRxRy16\0"
  /* 5007 */ "CmpRxRy16\0"
  /* 5017 */ "SltRxRy16\0"
  /* 5027 */ "MultRxRy16\0"
  /* 5038 */ "NotRxRy16\0"
  /* 5048 */ "SltuRxRy16\0"
  /* 5059 */ "MultuRxRy16\0"
  /* 5071 */ "DivuRxRy16\0"
  /* 5082 */ "SravRxRy16\0"
  /* 5093 */ "DivRxRy16\0"
  /* 5103 */ "SllvRxRy16\0"
  /* 5114 */ "SrlvRxRy16\0"
  /* 5125 */ "AndRxRxRy16\0"
  /* 5137 */ "OrRxRxRy16\0"
  /* 5148 */ "XorRxRxRy16\0"
  /* 5160 */ "MultRxRyRz16\0"
  /* 5173 */ "SubuRxRyRz16\0"
  /* 5186 */ "AdduRxRyRz16\0"
  /* 5199 */ "SltuRxRyRz16\0"
  /* 5212 */ "MultuRxRyRz16\0"
  /* 5226 */ "Btnez16\0"
  /* 5234 */ "Bteqz16\0"
  /* 5242 */ "PseudoIndrectHazardBranch64R6\0"
  /* 5272 */ "PseudoIndirectBranch64R6\0"
  /* 5297 */ "MFC0_MMR6\0"
  /* 5307 */ "MFHC0_MMR6\0"
  /* 5318 */ "MTHC0_MMR6\0"
  /* 5329 */ "MTC0_MMR6\0"
  /* 5339 */ "MFC1_MMR6\0"
  /* 5349 */ "MTC1_MMR6\0"
  /* 5359 */ "LDC2_MMR6\0"
  /* 5369 */ "SDC2_MMR6\0"
  /* 5379 */ "MFC2_MMR6\0"
  /* 5389 */ "MFHC2_MMR6\0"
  /* 5400 */ "MTHC2_MMR6\0"
  /* 5411 */ "MTC2_MMR6\0"
  /* 5421 */ "LWC2_MMR6\0"
  /* 5431 */ "SWC2_MMR6\0"
  /* 5441 */ "LDC1_D64_MMR6\0"
  /* 5455 */ "SDC1_D64_MMR6\0"
  /* 5469 */ "SB16_MMR6\0"
  /* 5479 */ "BC16_MMR6\0"
  /* 5489 */ "JRC16_MMR6\0"
  /* 5500 */ "JALRC16_MMR6\0"
  /* 5513 */ "BNEZC16_MMR6\0"
  /* 5526 */ "BEQZC16_MMR6\0"
  /* 5539 */ "AND16_MMR6\0"
  /* 5550 */ "MOVE16_MMR6\0"
  /* 5562 */ "SH16_MMR6\0"
  /* 5572 */ "ANDI16_MMR6\0"
  /* 5584 */ "LI16_MMR6\0"
  /* 5594 */ "BREAK16_MMR6\0"
  /* 5607 */ "SLL16_MMR6\0"
  /* 5618 */ "SRL16_MMR6\0"
  /* 5629 */ "LWM16_MMR6\0"
  /* 5640 */ "SWM16_MMR6\0"
  /* 5651 */ "SDBBP16_MMR6\0"
  /* 5664 */ "XOR16_MMR6\0"
  /* 5675 */ "NOT16_MMR6\0"
  /* 5686 */ "SUBU16_MMR6\0"
  /* 5698 */ "ADDU16_MMR6\0"
  /* 5710 */ "SW16_MMR6\0"
  /* 5720 */ "LSA_MMR6\0"
  /* 5729 */ "EHB_MMR6\0"
  /* 5738 */ "JALRC_HB_MMR6\0"
  /* 5752 */ "LB_MMR6\0"
  /* 5760 */ "SB_MMR6\0"
  /* 5768 */ "SUB_MMR6\0"
  /* 5777 */ "BC_MMR6\0"
  /* 5785 */ "BGEC_MMR6\0"
  /* 5795 */ "BNEC_MMR6\0"
  /* 5805 */ "JIC_MMR6\0"
  /* 5814 */ "BALC_MMR6\0"
  /* 5824 */ "JIALC_MMR6\0"
  /* 5835 */ "BGEZALC_MMR6\0"
  /* 5848 */ "BLEZALC_MMR6\0"
  /* 5861 */ "BNEZALC_MMR6\0"
  /* 5874 */ "BEQZALC_MMR6\0"
  /* 5887 */ "BGTZALC_MMR6\0"
  /* 5900 */ "BLTZALC_MMR6\0"
  /* 5913 */ "ERETNC_MMR6\0"
  /* 5925 */ "SYNC_MMR6\0"
  /* 5935 */ "AUIPC_MMR6\0"
  /* 5946 */ "ALUIPC_MMR6\0"
  /* 5958 */ "ADDIUPC_MMR6\0"
  /* 5971 */ "LWPC_MMR6\0"
  /* 5981 */ "BEQC_MMR6\0"
  /* 5991 */ "JALRC_MMR6\0"
  /* 6002 */ "SC_MMR6\0"
  /* 6010 */ "BLTC_MMR6\0"
  /* 6020 */ "BGEUC_MMR6\0"
  /* 6031 */ "BLTUC_MMR6\0"
  /* 6042 */ "BNVC_MMR6\0"
  /* 6052 */ "BOVC_MMR6\0"
  /* 6062 */ "BGEZC_MMR6\0"
  /* 6073 */ "BLEZC_MMR6\0"
  /* 6084 */ "BC1NEZC_MMR6\0"
  /* 6097 */ "BC2NEZC_MMR6\0"
  /* 6110 */ "BNEZC_MMR6\0"
  /* 6121 */ "BC1EQZC_MMR6\0"
  /* 6134 */ "BC2EQZC_MMR6\0"
  /* 6147 */ "BEQZC_MMR6\0"
  /* 6158 */ "BGTZC_MMR6\0"
  /* 6169 */ "BLTZC_MMR6\0"
  /* 6180 */ "ADD_MMR6\0"
  /* 6189 */ "AND_MMR6\0"
  /* 6198 */ "MOD_MMR6\0"
  /* 6207 */ "MINA_D_MMR6\0"
  /* 6219 */ "MAXA_D_MMR6\0"
  /* 6231 */ "CMP_SLE_D_MMR6\0"
  /* 6246 */ "CMP_SULE_D_MMR6\0"
  /* 6262 */ "CMP_ULE_D_MMR6\0"
  /* 6277 */ "CMP_LE_D_MMR6\0"
  /* 6291 */ "CMP_SAF_D_MMR6\0"
  /* 6306 */ "CMP_AF_D_MMR6\0"
  /* 6320 */ "MSUBF_D_MMR6\0"
  /* 6333 */ "MADDF_D_MMR6\0"
  /* 6346 */ "SEL_D_MMR6\0"
  /* 6357 */ "TRUNC_L_D_MMR6\0"
  /* 6372 */ "ROUND_L_D_MMR6\0"
  /* 6387 */ "CEIL_L_D_MMR6\0"
  /* 6401 */ "FLOOR_L_D_MMR6\0"
  /* 6416 */ "CVT_L_D_MMR6\0"
  /* 6429 */ "MIN_D_MMR6\0"
  /* 6440 */ "CMP_SUN_D_MMR6\0"
  /* 6455 */ "CMP_UN_D_MMR6\0"
  /* 6469 */ "CMP_SEQ_D_MMR6\0"
  /* 6484 */ "CMP_SUEQ_D_MMR6\0"
  /* 6500 */ "CMP_UEQ_D_MMR6\0"
  /* 6515 */ "CMP_EQ_D_MMR6\0"
  /* 6529 */ "CLASS_D_MMR6\0"
  /* 6542 */ "CMP_SLT_D_MMR6\0"
  /* 6557 */ "CMP_SULT_D_MMR6\0"
  /* 6573 */ "CMP_ULT_D_MMR6\0"
  /* 6588 */ "CMP_LT_D_MMR6\0"
  /* 6602 */ "RINT_D_MMR6\0"
  /* 6614 */ "FMOV_D_MMR6\0"
  /* 6626 */ "TRUNC_W_D_MMR6\0"
  /* 6641 */ "ROUND_W_D_MMR6\0"
  /* 6656 */ "CEIL_W_D_MMR6\0"
  /* 6670 */ "FLOOR_W_D_MMR6\0"
  /* 6685 */ "MAX_D_MMR6\0"
  /* 6696 */ "SELNEZ_D_MMR6\0"
  /* 6710 */ "SELEQZ_D_MMR6\0"
  /* 6724 */ "CACHE_MMR6\0"
  /* 6735 */ "SIGRIE_MMR6\0"
  /* 6747 */ "PAUSE_MMR6\0"
  /* 6758 */ "PREF_MMR6\0"
  /* 6768 */ "TLBINVF_MMR6\0"
  /* 6781 */ "TAILCALLREG_MMR6\0"
  /* 6798 */ "WSBH_MMR6\0"
  /* 6808 */ "SH_MMR6\0"
  /* 6816 */ "MUH_MMR6\0"
  /* 6825 */ "SYNCI_MMR6\0"
  /* 6836 */ "ANDI_MMR6\0"
  /* 6846 */ "EI_MMR6\0"
  /* 6854 */ "XORI_MMR6\0"
  /* 6864 */ "AUI_MMR6\0"
  /* 6873 */ "LUI_MMR6\0"
  /* 6882 */ "GINVI_MMR6\0"
  /* 6893 */ "BREAK_MMR6\0"
  /* 6904 */ "JAL_MMR6\0"
  /* 6913 */ "TAILCALL_MMR6\0"
  /* 6927 */ "SLL_MMR6\0"
  /* 6936 */ "MUL_MMR6\0"
  /* 6945 */ "CVT_D_L_MMR6\0"
  /* 6958 */ "CVT_S_L_MMR6\0"
  /* 6971 */ "ALIGN_MMR6\0"
  /* 6982 */ "CLO_MMR6\0"
  /* 6991 */ "BITSWAP_MMR6\0"
  /* 7004 */ "SDBBP_MMR6\0"
  /* 7015 */ "MOVEP_MMR6\0"
  /* 7026 */ "SSNOP_MMR6\0"
  /* 7037 */ "JRCADDIUSP_MMR6\0"
  /* 7053 */ "SWSP_MMR6\0"
  /* 7063 */ "DVP_MMR6\0"
  /* 7072 */ "EVP_MMR6\0"
  /* 7081 */ "NOR_MMR6\0"
  /* 7090 */ "XOR_MMR6\0"
  /* 7099 */ "RDPGPR_MMR6\0"
  /* 7111 */ "WRPGPR_MMR6\0"
  /* 7123 */ "RDHWR_MMR6\0"
  /* 7134 */ "INS_MMR6\0"
  /* 7143 */ "MINA_S_MMR6\0"
  /* 7155 */ "MAXA_S_MMR6\0"
  /* 7167 */ "FSUB_S_MMR6\0"
  /* 7179 */ "FADD_S_MMR6\0"
  /* 7191 */ "CMP_SLE_S_MMR6\0"
  /* 7206 */ "CMP_SULE_S_MMR6\0"
  /* 7222 */ "CMP_ULE_S_MMR6\0"
  /* 7237 */ "CMP_LE_S_MMR6\0"
  /* 7251 */ "CMP_SAF_S_MMR6\0"
  /* 7266 */ "CMP_AF_S_MMR6\0"
  /* 7280 */ "MSUBF_S_MMR6\0"
  /* 7293 */ "MADDF_S_MMR6\0"
  /* 7306 */ "FNEG_S_MMR6\0"
  /* 7318 */ "SEL_S_MMR6\0"
  /* 7329 */ "FMUL_S_MMR6\0"
  /* 7341 */ "TRUNC_L_S_MMR6\0"
  /* 7356 */ "ROUND_L_S_MMR6\0"
  /* 7371 */ "CEIL_L_S_MMR6\0"
  /* 7385 */ "FLOOR_L_S_MMR6\0"
  /* 7400 */ "CVT_L_S_MMR6\0"
  /* 7413 */ "MIN_S_MMR6\0"
  /* 7424 */ "CMP_SUN_S_MMR6\0"
  /* 7439 */ "CMP_UN_S_MMR6\0"
  /* 7453 */ "CMP_SEQ_S_MMR6\0"
  /* 7468 */ "CMP_SUEQ_S_MMR6\0"
  /* 7484 */ "CMP_UEQ_S_MMR6\0"
  /* 7499 */ "CMP_EQ_S_MMR6\0"
  /* 7513 */ "CLASS_S_MMR6\0"
  /* 7526 */ "CMP_SLT_S_MMR6\0"
  /* 7541 */ "CMP_SULT_S_MMR6\0"
  /* 7557 */ "CMP_ULT_S_MMR6\0"
  /* 7572 */ "CMP_LT_S_MMR6\0"
  /* 7586 */ "RINT_S_MMR6\0"
  /* 7598 */ "FDIV_S_MMR6\0"
  /* 7610 */ "FMOV_S_MMR6\0"
  /* 7622 */ "TRUNC_W_S_MMR6\0"
  /* 7637 */ "ROUND_W_S_MMR6\0"
  /* 7652 */ "CEIL_W_S_MMR6\0"
  /* 7666 */ "FLOOR_W_S_MMR6\0"
  /* 7681 */ "CVT_W_S_MMR6\0"
  /* 7694 */ "MAX_S_MMR6\0"
  /* 7705 */ "SELNEZ_S_MMR6\0"
  /* 7719 */ "SELEQZ_S_MMR6\0"
  /* 7733 */ "DERET_MMR6\0"
  /* 7744 */ "WAIT_MMR6\0"
  /* 7754 */ "GINVT_MMR6\0"
  /* 7765 */ "EXT_MMR6\0"
  /* 7774 */ "LBU_MMR6\0"
  /* 7783 */ "SUBU_MMR6\0"
  /* 7793 */ "ADDU_MMR6\0"
  /* 7803 */ "MODU_MMR6\0"
  /* 7813 */ "MUHU_MMR6\0"
  /* 7823 */ "ADDIU_MMR6\0"
  /* 7834 */ "MULU_MMR6\0"
  /* 7844 */ "DIVU_MMR6\0"
  /* 7854 */ "DIV_MMR6\0"
  /* 7863 */ "TLBINV_MMR6\0"
  /* 7875 */ "LW_MMR6\0"
  /* 7883 */ "SW_MMR6\0"
  /* 7891 */ "CVT_S_W_MMR6\0"
  /* 7904 */ "SELNEZ_MMR6\0"
  /* 7916 */ "CLZ_MMR6\0"
  /* 7925 */ "SELEQZ_MMR6\0"
  /* 7937 */ "PseudoIndirectBranch_MMR6\0"
  /* 7963 */ "LDC2_R6\0"
  /* 7971 */ "SDC2_R6\0"
  /* 7979 */ "LWC2_R6\0"
  /* 7987 */ "SWC2_R6\0"
  /* 7995 */ "JR_HB64_R6\0"
  /* 8006 */ "SC64_R6\0"
  /* 8014 */ "LL64_R6\0"
  /* 8022 */ "DLSA_R6\0"
  /* 8030 */ "JR_HB_R6\0"
  /* 8039 */ "SC_R6\0"
  /* 8045 */ "SCD_R6\0"
  /* 8052 */ "LLD_R6\0"
  /* 8059 */ "CACHE_R6\0"
  /* 8068 */ "PREF_R6\0"
  /* 8076 */ "LL_R6\0"
  /* 8082 */ "DMUL_R6\0"
  /* 8090 */ "DCLO_R6\0"
  /* 8098 */ "SDBBP_R6\0"
  /* 8107 */ "DCLZ_R6\0"
  /* 8115 */ "PseudoIndrectHazardBranchR6\0"
  /* 8143 */ "PseudoIndirectBranchR6\0"
  /* 8166 */ "LOAD_ACC128\0"
  /* 8178 */ "STORE_ACC128\0"
  /* 8191 */ "ATOMIC_LOAD_SUB_I8\0"
  /* 8210 */ "ATOMIC_LOAD_ADD_I8\0"
  /* 8229 */ "ATOMIC_LOAD_NAND_I8\0"
  /* 8249 */ "ATOMIC_LOAD_AND_I8\0"
  /* 8268 */ "ATOMIC_LOAD_UMIN_I8\0"
  /* 8288 */ "ATOMIC_LOAD_MIN_I8\0"
  /* 8307 */ "ATOMIC_SWAP_I8\0"
  /* 8322 */ "ATOMIC_CMP_SWAP_I8\0"
  /* 8341 */ "ATOMIC_LOAD_XOR_I8\0"
  /* 8360 */ "ATOMIC_LOAD_OR_I8\0"
  /* 8378 */ "ATOMIC_LOAD_UMAX_I8\0"
  /* 8398 */ "ATOMIC_LOAD_MAX_I8\0"
  /* 8417 */ "SAA\0"
  /* 8421 */ "PRECEU_PH_QBLA\0"
  /* 8436 */ "PRECEQU_PH_QBLA\0"
  /* 8452 */ "G_FMA\0"
  /* 8458 */ "G_STRICT_FMA\0"
  /* 8471 */ "PRECEU_PH_QBRA\0"
  /* 8486 */ "PRECEQU_PH_QBRA\0"
  /* 8502 */ "DSRA\0"
  /* 8507 */ "ATOMIC_LOAD_SUB_I32_POSTRA\0"
  /* 8534 */ "ATOMIC_LOAD_ADD_I32_POSTRA\0"
  /* 8561 */ "ATOMIC_LOAD_NAND_I32_POSTRA\0"
  /* 8589 */ "ATOMIC_LOAD_AND_I32_POSTRA\0"
  /* 8616 */ "ATOMIC_LOAD_UMIN_I32_POSTRA\0"
  /* 8644 */ "ATOMIC_LOAD_MIN_I32_POSTRA\0"
  /* 8671 */ "ATOMIC_SWAP_I32_POSTRA\0"
  /* 8694 */ "ATOMIC_CMP_SWAP_I32_POSTRA\0"
  /* 8721 */ "ATOMIC_LOAD_XOR_I32_POSTRA\0"
  /* 8748 */ "ATOMIC_LOAD_OR_I32_POSTRA\0"
  /* 8774 */ "ATOMIC_LOAD_UMAX_I32_POSTRA\0"
  /* 8802 */ "ATOMIC_LOAD_MAX_I32_POSTRA\0"
  /* 8829 */ "ATOMIC_LOAD_SUB_I64_POSTRA\0"
  /* 8856 */ "ATOMIC_LOAD_ADD_I64_POSTRA\0"
  /* 8883 */ "ATOMIC_LOAD_NAND_I64_POSTRA\0"
  /* 8911 */ "ATOMIC_LOAD_AND_I64_POSTRA\0"
  /* 8938 */ "ATOMIC_LOAD_UMIN_I64_POSTRA\0"
  /* 8966 */ "ATOMIC_LOAD_MIN_I64_POSTRA\0"
  /* 8993 */ "ATOMIC_SWAP_I64_POSTRA\0"
  /* 9016 */ "ATOMIC_CMP_SWAP_I64_POSTRA\0"
  /* 9043 */ "ATOMIC_LOAD_XOR_I64_POSTRA\0"
  /* 9070 */ "ATOMIC_LOAD_OR_I64_POSTRA\0"
  /* 9096 */ "ATOMIC_LOAD_UMAX_I64_POSTRA\0"
  /* 9124 */ "ATOMIC_LOAD_MAX_I64_POSTRA\0"
  /* 9151 */ "ATOMIC_LOAD_SUB_I16_POSTRA\0"
  /* 9178 */ "ATOMIC_LOAD_ADD_I16_POSTRA\0"
  /* 9205 */ "ATOMIC_LOAD_NAND_I16_POSTRA\0"
  /* 9233 */ "ATOMIC_LOAD_AND_I16_POSTRA\0"
  /* 9260 */ "ATOMIC_LOAD_UMIN_I16_POSTRA\0"
  /* 9288 */ "ATOMIC_LOAD_MIN_I16_POSTRA\0"
  /* 9315 */ "ATOMIC_SWAP_I16_POSTRA\0"
  /* 9338 */ "ATOMIC_CMP_SWAP_I16_POSTRA\0"
  /* 9365 */ "ATOMIC_LOAD_XOR_I16_POSTRA\0"
  /* 9392 */ "ATOMIC_LOAD_OR_I16_POSTRA\0"
  /* 9418 */ "ATOMIC_LOAD_UMAX_I16_POSTRA\0"
  /* 9446 */ "ATOMIC_LOAD_MAX_I16_POSTRA\0"
  /* 9473 */ "ATOMIC_LOAD_SUB_I8_POSTRA\0"
  /* 9499 */ "ATOMIC_LOAD_ADD_I8_POSTRA\0"
  /* 9525 */ "ATOMIC_LOAD_NAND_I8_POSTRA\0"
  /* 9552 */ "ATOMIC_LOAD_AND_I8_POSTRA\0"
  /* 9578 */ "ATOMIC_LOAD_UMIN_I8_POSTRA\0"
  /* 9605 */ "ATOMIC_LOAD_MIN_I8_POSTRA\0"
  /* 9631 */ "ATOMIC_SWAP_I8_POSTRA\0"
  /* 9653 */ "ATOMIC_CMP_SWAP_I8_POSTRA\0"
  /* 9679 */ "ATOMIC_LOAD_XOR_I8_POSTRA\0"
  /* 9705 */ "ATOMIC_LOAD_OR_I8_POSTRA\0"
  /* 9730 */ "ATOMIC_LOAD_UMAX_I8_POSTRA\0"
  /* 9757 */ "ATOMIC_LOAD_MAX_I8_POSTRA\0"
  /* 9783 */ "RetRA\0"
  /* 9789 */ "DLSA\0"
  /* 9794 */ "CFCMSA\0"
  /* 9801 */ "CTCMSA\0"
  /* 9808 */ "CRC32B\0"
  /* 9815 */ "CRC32CB\0"
  /* 9823 */ "SEB\0"
  /* 9827 */ "EHB\0"
  /* 9831 */ "TAILCALLREGHB\0"
  /* 9845 */ "JR_HB\0"
  /* 9851 */ "JALR_HB\0"
  /* 9859 */ "LB\0"
  /* 9862 */ "SHRA_QB\0"
  /* 9870 */ "CMPGDU_LE_QB\0"
  /* 9883 */ "CMPGU_LE_QB\0"
  /* 9895 */ "PseudoCMPU_LE_QB\0"
  /* 9912 */ "SUBUH_QB\0"
  /* 9921 */ "ADDUH_QB\0"
  /* 9930 */ "PseudoPICK_QB\0"
  /* 9944 */ "SHLL_QB\0"
  /* 9952 */ "REPL_QB\0"
  /* 9960 */ "SHRL_QB\0"
  /* 9968 */ "CMPGDU_EQ_QB\0"
  /* 9981 */ "CMPGU_EQ_QB\0"
  /* 9993 */ "PseudoCMPU_EQ_QB\0"
  /* 10010 */ "SHRA_R_QB\0"
  /* 10020 */ "SUBUH_R_QB\0"
  /* 10031 */ "ADDUH_R_QB\0"
  /* 10042 */ "SHRAV_R_QB\0"
  /* 10053 */ "ABSQ_S_QB\0"
  /* 10063 */ "SUBU_S_QB\0"
  /* 10073 */ "ADDU_S_QB\0"
  /* 10083 */ "CMPGDU_LT_QB\0"
  /* 10096 */ "CMPGU_LT_QB\0"
  /* 10108 */ "PseudoCMPU_LT_QB\0"
  /* 10125 */ "SUBU_QB\0"
  /* 10133 */ "ADDU_QB\0"
  /* 10141 */ "SHRAV_QB\0"
  /* 10150 */ "SHLLV_QB\0"
  /* 10159 */ "REPLV_QB\0"
  /* 10168 */ "SHRLV_QB\0"
  /* 10177 */ "RADDU_W_QB\0"
  /* 10188 */ "SB\0"
  /* 10191 */ "MODSUB\0"
  /* 10198 */ "G_FSUB\0"
  /* 10205 */ "G_STRICT_FSUB\0"
  /* 10219 */ "G_ATOMICRMW_FSUB\0"
  /* 10236 */ "PseudoMSUB\0"
  /* 10247 */ "G_SUB\0"
  /* 10253 */ "G_ATOMICRMW_SUB\0"
  /* 10269 */ "SRA_B\0"
  /* 10275 */ "ADD_A_B\0"
  /* 10283 */ "MIN_A_B\0"
  /* 10291 */ "ADDS_A_B\0"
  /* 10300 */ "MAX_A_B\0"
  /* 10308 */ "NLOC_B\0"
  /* 10315 */ "NLZC_B\0"
  /* 10322 */ "SLD_B\0"
  /* 10328 */ "PCKOD_B\0"
  /* 10336 */ "ILVOD_B\0"
  /* 10344 */ "INSVE_B\0"
  /* 10352 */ "VSHF_B\0"
  /* 10359 */ "BNEG_B\0"
  /* 10366 */ "SRAI_B\0"
  /* 10373 */ "SLDI_B\0"
  /* 10380 */ "ANDI_B\0"
  /* 10387 */ "BNEGI_B\0"
  /* 10395 */ "BSELI_B\0"
  /* 10403 */ "SLLI_B\0"
  /* 10410 */ "SRLI_B\0"
  /* 10417 */ "BINSLI_B\0"
  /* 10426 */ "CEQI_B\0"
  /* 10433 */ "SRARI_B\0"
  /* 10441 */ "BCLRI_B\0"
  /* 10449 */ "SRLRI_B\0"
  /* 10457 */ "NORI_B\0"
  /* 10464 */ "XORI_B\0"
  /* 10471 */ "BINSRI_B\0"
  /* 10480 */ "SPLATI_B\0"
  /* 10489 */ "BSETI_B\0"
  /* 10497 */ "SUBVI_B\0"
  /* 10505 */ "ADDVI_B\0"
  /* 10513 */ "BMZI_B\0"
  /* 10520 */ "BMNZI_B\0"
  /* 10528 */ "FILL_B\0"
  /* 10535 */ "SLL_B\0"
  /* 10541 */ "SRL_B\0"
  /* 10547 */ "BINSL_B\0"
  /* 10555 */ "ILVL_B\0"
  /* 10562 */ "CEQ_B\0"
  /* 10568 */ "SRAR_B\0"
  /* 10575 */ "BCLR_B\0"
  /* 10582 */ "SRLR_B\0"
  /* 10589 */ "BINSR_B\0"
  /* 10597 */ "ILVR_B\0"
  /* 10604 */ "ASUB_S_B\0"
  /* 10613 */ "MOD_S_B\0"
  /* 10621 */ "CLE_S_B\0"
  /* 10629 */ "AVE_S_B\0"
  /* 10637 */ "CLEI_S_B\0"
  /* 10646 */ "MINI_S_B\0"
  /* 10655 */ "CLTI_S_B\0"
  /* 10664 */ "MAXI_S_B\0"
  /* 10673 */ "MIN_S_B\0"
  /* 10681 */ "AVER_S_B\0"
  /* 10690 */ "SUBS_S_B\0"
  /* 10699 */ "ADDS_S_B\0"
  /* 10708 */ "SAT_S_B\0"
  /* 10716 */ "CLT_S_B\0"
  /* 10724 */ "SUBSUU_S_B\0"
  /* 10735 */ "DIV_S_B\0"
  /* 10743 */ "MAX_S_B\0"
  /* 10751 */ "COPY_S_B\0"
  /* 10760 */ "SPLAT_B\0"
  /* 10768 */ "BSET_B\0"
  /* 10775 */ "PCNT_B\0"
  /* 10782 */ "INSERT_B\0"
  /* 10791 */ "ST_B\0"
  /* 10796 */ "ASUB_U_B\0"
  /* 10805 */ "MOD_U_B\0"
  /* 10813 */ "CLE_U_B\0"
  /* 10821 */ "AVE_U_B\0"
  /* 10829 */ "CLEI_U_B\0"
  /* 10838 */ "MINI_U_B\0"
  /* 10847 */ "CLTI_U_B\0"
  /* 10856 */ "MAXI_U_B\0"
  /* 10865 */ "MIN_U_B\0"
  /* 10873 */ "AVER_U_B\0"
  /* 10882 */ "SUBS_U_B\0"
  /* 10891 */ "ADDS_U_B\0"
  /* 10900 */ "SUBSUS_U_B\0"
  /* 10911 */ "SAT_U_B\0"
  /* 10919 */ "CLT_U_B\0"
  /* 10927 */ "DIV_U_B\0"
  /* 10935 */ "MAX_U_B\0"
  /* 10943 */ "COPY_U_B\0"
  /* 10952 */ "MSUBV_B\0"
  /* 10960 */ "MADDV_B\0"
  /* 10968 */ "PCKEV_B\0"
  /* 10976 */ "ILVEV_B\0"
  /* 10984 */ "MULV_B\0"
  /* 10991 */ "BZ_B\0"
  /* 10996 */ "BNZ_B\0"
  /* 11002 */ "BC\0"
  /* 11005 */ "BGEC\0"
  /* 11010 */ "BNEC\0"
  /* 11015 */ "JIC\0"
  /* 11019 */ "G_INTRINSIC\0"
  /* 11031 */ "BALC\0"
  /* 11036 */ "JIALC\0"
  /* 11042 */ "BGEZALC\0"
  /* 11050 */ "BLEZALC\0"
  /* 11058 */ "BNEZALC\0"
  /* 11066 */ "BEQZALC\0"
  /* 11074 */ "BGTZALC\0"
  /* 11082 */ "BLTZALC\0"
  /* 11090 */ "ERETNC\0"
  /* 11097 */ "G_FPTRUNC\0"
  /* 11107 */ "G_INTRINSIC_TRUNC\0"
  /* 11125 */ "G_TRUNC\0"
  /* 11133 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 11154 */ "SYNC\0"
  /* 11159 */ "G_DYN_STACKALLOC\0"
  /* 11176 */ "LDPC\0"
  /* 11181 */ "AUIPC\0"
  /* 11187 */ "ALUIPC\0"
  /* 11194 */ "ADDIUPC\0"
  /* 11202 */ "LWUPC\0"
  /* 11208 */ "LWPC\0"
  /* 11213 */ "BEQC\0"
  /* 11218 */ "ADDSC\0"
  /* 11224 */ "BLTC\0"
  /* 11229 */ "BGEUC\0"
  /* 11235 */ "BLTUC\0"
  /* 11241 */ "BNVC\0"
  /* 11246 */ "BOVC\0"
  /* 11251 */ "ADDWC\0"
  /* 11257 */ "BGEZC\0"
  /* 11263 */ "BLEZC\0"
  /* 11269 */ "BNEZC\0"
  /* 11275 */ "BEQZC\0"
  /* 11281 */ "BGTZC\0"
  /* 11287 */ "BLTZC\0"
  /* 11293 */ "CRC32D\0"
  /* 11300 */ "SAAD\0"
  /* 11305 */ "G_FMAD\0"
  /* 11312 */ "G_INDEXED_SEXTLOAD\0"
  /* 11331 */ "G_SEXTLOAD\0"
  /* 11342 */ "G_INDEXED_ZEXTLOAD\0"
  /* 11361 */ "G_ZEXTLOAD\0"
  /* 11372 */ "G_INDEXED_LOAD\0"
  /* 11387 */ "G_LOAD\0"
  /* 11394 */ "CRC32CD\0"
  /* 11402 */ "SCD\0"
  /* 11406 */ "DADD\0"
  /* 11411 */ "G_VECREDUCE_FADD\0"
  /* 11428 */ "G_FADD\0"
  /* 11435 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 11456 */ "G_STRICT_FADD\0"
  /* 11470 */ "G_ATOMICRMW_FADD\0"
  /* 11487 */ "PseudoMADD\0"
  /* 11498 */ "G_VECREDUCE_ADD\0"
  /* 11514 */ "G_ADD\0"
  /* 11520 */ "G_PTR_ADD\0"
  /* 11530 */ "G_ATOMICRMW_ADD\0"
  /* 11546 */ "DSHD\0"
  /* 11551 */ "YIELD\0"
  /* 11557 */ "LLD\0"
  /* 11561 */ "G_ATOMICRMW_NAND\0"
  /* 11578 */ "G_VECREDUCE_AND\0"
  /* 11594 */ "G_AND\0"
  /* 11600 */ "G_ATOMICRMW_AND\0"
  /* 11616 */ "PREPEND\0"
  /* 11624 */ "APPEND\0"
  /* 11631 */ "LIFETIME_END\0"
  /* 11644 */ "G_BRCOND\0"
  /* 11653 */ "G_INTRINSIC_ROUND\0"
  /* 11671 */ "DMOD\0"
  /* 11676 */ "LOAD_STACK_GUARD\0"
  /* 11693 */ "SD\0"
  /* 11696 */ "FLOG2_D\0"
  /* 11704 */ "FEXP2_D\0"
  /* 11712 */ "MINA_D\0"
  /* 11719 */ "SRA_D\0"
  /* 11725 */ "MAXA_D\0"
  /* 11732 */ "ADD_A_D\0"
  /* 11740 */ "FMIN_A_D\0"
  /* 11749 */ "ADDS_A_D\0"
  /* 11758 */ "FMAX_A_D\0"
  /* 11767 */ "FSUB_D\0"
  /* 11774 */ "FMSUB_D\0"
  /* 11782 */ "NLOC_D\0"
  /* 11789 */ "NLZC_D\0"
  /* 11796 */ "FADD_D\0"
  /* 11803 */ "FMADD_D\0"
  /* 11811 */ "SLD_D\0"
  /* 11817 */ "PCKOD_D\0"
  /* 11825 */ "ILVOD_D\0"
  /* 11833 */ "FCLE_D\0"
  /* 11840 */ "FSLE_D\0"
  /* 11847 */ "CMP_SLE_D\0"
  /* 11857 */ "FCULE_D\0"
  /* 11865 */ "FSULE_D\0"
  /* 11873 */ "CMP_SULE_D\0"
  /* 11884 */ "CMP_ULE_D\0"
  /* 11894 */ "CMP_LE_D\0"
  /* 11903 */ "FCNE_D\0"
  /* 11910 */ "FSNE_D\0"
  /* 11917 */ "FCUNE_D\0"
  /* 11925 */ "FSUNE_D\0"
  /* 11933 */ "INSVE_D\0"
  /* 11941 */ "FCAF_D\0"
  /* 11948 */ "FSAF_D\0"
  /* 11955 */ "CMP_SAF_D\0"
  /* 11965 */ "MSUBF_D\0"
  /* 11973 */ "MADDF_D\0"
  /* 11981 */ "VSHF_D\0"
  /* 11988 */ "CMP_F_D\0"
  /* 11996 */ "BNEG_D\0"
  /* 12003 */ "SRAI_D\0"
  /* 12010 */ "SLDI_D\0"
  /* 12017 */ "BNEGI_D\0"
  /* 12025 */ "SLLI_D\0"
  /* 12032 */ "SRLI_D\0"
  /* 12039 */ "BINSLI_D\0"
  /* 12048 */ "CEQI_D\0"
  /* 12055 */ "SRARI_D\0"
  /* 12063 */ "BCLRI_D\0"
  /* 12071 */ "SRLRI_D\0"
  /* 12079 */ "BINSRI_D\0"
  /* 12088 */ "SPLATI_D\0"
  /* 12097 */ "BSETI_D\0"
  /* 12105 */ "SUBVI_D\0"
  /* 12113 */ "ADDVI_D\0"
  /* 12121 */ "SEL_D\0"
  /* 12127 */ "FILL_D\0"
  /* 12134 */ "SLL_D\0"
  /* 12140 */ "FEXUPL_D\0"
  /* 12149 */ "FFQL_D\0"
  /* 12156 */ "SRL_D\0"
  /* 12162 */ "BINSL_D\0"
  /* 12170 */ "FMUL_D\0"
  /* 12177 */ "ILVL_D\0"
  /* 12184 */ "FMIN_D\0"
  /* 12191 */ "FCUN_D\0"
  /* 12198 */ "FSUN_D\0"
  /* 12205 */ "CMP_SUN_D\0"
  /* 12215 */ "CMP_UN_D\0"
  /* 12224 */ "FRCP_D\0"
  /* 12231 */ "FCEQ_D\0"
  /* 12238 */ "FSEQ_D\0"
  /* 12245 */ "CMP_SEQ_D\0"
  /* 12255 */ "FCUEQ_D\0"
  /* 12263 */ "FSUEQ_D\0"
  /* 12271 */ "CMP_SUEQ_D\0"
  /* 12282 */ "CMP_UEQ_D\0"
  /* 12292 */ "CMP_EQ_D\0"
  /* 12301 */ "SRAR_D\0"
  /* 12308 */ "LDR_D\0"
  /* 12314 */ "BCLR_D\0"
  /* 12321 */ "SRLR_D\0"
  /* 12328 */ "FCOR_D\0"
  /* 12335 */ "FSOR_D\0"
  /* 12342 */ "FEXUPR_D\0"
  /* 12351 */ "FFQR_D\0"
  /* 12358 */ "BINSR_D\0"
  /* 12366 */ "STR_D\0"
  /* 12372 */ "ILVR_D\0"
  /* 12379 */ "FABS_D\0"
  /* 12386 */ "FCLASS_D\0"
  /* 12395 */ "ASUB_S_D\0"
  /* 12404 */ "HSUB_S_D\0"
  /* 12413 */ "DPSUB_S_D\0"
  /* 12423 */ "FTRUNC_S_D\0"
  /* 12434 */ "HADD_S_D\0"
  /* 12443 */ "DPADD_S_D\0"
  /* 12453 */ "MOD_S_D\0"
  /* 12461 */ "CLE_S_D\0"
  /* 12469 */ "AVE_S_D\0"
  /* 12477 */ "CLEI_S_D\0"
  /* 12486 */ "MINI_S_D\0"
  /* 12495 */ "CLTI_S_D\0"
  /* 12504 */ "MAXI_S_D\0"
  /* 12513 */ "MIN_S_D\0"
  /* 12521 */ "DOTP_S_D\0"
  /* 12530 */ "AVER_S_D\0"
  /* 12539 */ "SUBS_S_D\0"
  /* 12548 */ "ADDS_S_D\0"
  /* 12557 */ "SAT_S_D\0"
  /* 12565 */ "CLT_S_D\0"
  /* 12573 */ "FFINT_S_D\0"
  /* 12583 */ "FTINT_S_D\0"
  /* 12593 */ "SUBSUU_S_D\0"
  /* 12604 */ "DIV_S_D\0"
  /* 12612 */ "MAX_S_D\0"
  /* 12620 */ "COPY_S_D\0"
  /* 12629 */ "SPLAT_D\0"
  /* 12637 */ "BSET_D\0"
  /* 12644 */ "FCLT_D\0"
  /* 12651 */ "FSLT_D\0"
  /* 12658 */ "CMP_SLT_D\0"
  /* 12668 */ "FCULT_D\0"
  /* 12676 */ "FSULT_D\0"
  /* 12684 */ "CMP_SULT_D\0"
  /* 12695 */ "CMP_ULT_D\0"
  /* 12705 */ "CMP_LT_D\0"
  /* 12714 */ "PCNT_D\0"
  /* 12721 */ "FRINT_D\0"
  /* 12729 */ "INSERT_D\0"
  /* 12738 */ "FSQRT_D\0"
  /* 12746 */ "FRSQRT_D\0"
  /* 12755 */ "ST_D\0"
  /* 12760 */ "ASUB_U_D\0"
  /* 12769 */ "HSUB_U_D\0"
  /* 12778 */ "DPSUB_U_D\0"
  /* 12788 */ "FTRUNC_U_D\0"
  /* 12799 */ "HADD_U_D\0"
  /* 12808 */ "DPADD_U_D\0"
  /* 12818 */ "MOD_U_D\0"
  /* 12826 */ "CLE_U_D\0"
  /* 12834 */ "AVE_U_D\0"
  /* 12842 */ "CLEI_U_D\0"
  /* 12851 */ "MINI_U_D\0"
  /* 12860 */ "CLTI_U_D\0"
  /* 12869 */ "MAXI_U_D\0"
  /* 12878 */ "MIN_U_D\0"
  /* 12886 */ "DOTP_U_D\0"
  /* 12895 */ "AVER_U_D\0"
  /* 12904 */ "SUBS_U_D\0"
  /* 12913 */ "ADDS_U_D\0"
  /* 12922 */ "SUBSUS_U_D\0"
  /* 12933 */ "SAT_U_D\0"
  /* 12941 */ "CLT_U_D\0"
  /* 12949 */ "FFINT_U_D\0"
  /* 12959 */ "FTINT_U_D\0"
  /* 12969 */ "DIV_U_D\0"
  /* 12977 */ "MAX_U_D\0"
  /* 12985 */ "MSUBV_D\0"
  /* 12993 */ "MADDV_D\0"
  /* 13001 */ "PCKEV_D\0"
  /* 13009 */ "ILVEV_D\0"
  /* 13017 */ "FDIV_D\0"
  /* 13024 */ "MULV_D\0"
  /* 13031 */ "PseudoTRUNC_W_D\0"
  /* 13047 */ "FMAX_D\0"
  /* 13054 */ "BZ_D\0"
  /* 13059 */ "SELNEZ_D\0"
  /* 13068 */ "BNZ_D\0"
  /* 13074 */ "SELEQZ_D\0"
  /* 13083 */ "LBE\0"
  /* 13087 */ "PSEUDO_PROBE\0"
  /* 13100 */ "SBE\0"
  /* 13104 */ "G_SSUBE\0"
  /* 13112 */ "G_USUBE\0"
  /* 13120 */ "G_FENCE\0"
  /* 13128 */ "REG_SEQUENCE\0"
  /* 13141 */ "SCE\0"
  /* 13145 */ "G_SADDE\0"
  /* 13153 */ "G_UADDE\0"
  /* 13161 */ "G_FMINNUM_IEEE\0"
  /* 13176 */ "G_FMAXNUM_IEEE\0"
  /* 13191 */ "CACHEE\0"
  /* 13198 */ "PREFE\0"
  /* 13204 */ "BGE\0"
  /* 13208 */ "SGE\0"
  /* 13212 */ "TGE\0"
  /* 13216 */ "CACHE\0"
  /* 13222 */ "LHE\0"
  /* 13226 */ "SHE\0"
  /* 13230 */ "SIGRIE\0"
  /* 13237 */ "G_JUMP_TABLE\0"
  /* 13250 */ "BUNDLE\0"
  /* 13257 */ "LLE\0"
  /* 13261 */ "SLE\0"
  /* 13265 */ "LWLE\0"
  /* 13270 */ "SWLE\0"
  /* 13275 */ "BNE\0"
  /* 13279 */ "SNE\0"
  /* 13283 */ "TNE\0"
  /* 13287 */ "LOCAL_ESCAPE\0"
  /* 13300 */ "DVPE\0"
  /* 13305 */ "EVPE\0"
  /* 13310 */ "G_INDEXED_STORE\0"
  /* 13326 */ "G_STORE\0"
  /* 13334 */ "LWRE\0"
  /* 13339 */ "SWRE\0"
  /* 13344 */ "G_BITREVERSE\0"
  /* 13357 */ "PAUSE\0"
  /* 13363 */ "DBG_VALUE\0"
  /* 13373 */ "G_GLOBAL_VALUE\0"
  /* 13388 */ "G_MEMMOVE\0"
  /* 13398 */ "LWE\0"
  /* 13402 */ "SWE\0"
  /* 13406 */ "G_FREEZE\0"
  /* 13415 */ "G_FCANONICALIZE\0"
  /* 13431 */ "LBuE\0"
  /* 13436 */ "LHuE\0"
  /* 13441 */ "BC1F\0"
  /* 13446 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 13464 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 13482 */ "G_IMPLICIT_DEF\0"
  /* 13497 */ "PREF\0"
  /* 13502 */ "DBG_INSTR_REF\0"
  /* 13516 */ "TLBINVF\0"
  /* 13524 */ "TLBGINVF\0"
  /* 13533 */ "G_FNEG\0"
  /* 13540 */ "TAILCALLHB64R6REG\0"
  /* 13558 */ "TAILCALL64R6REG\0"
  /* 13574 */ "TAILCALLHBR6REG\0"
  /* 13590 */ "TAILCALLR6REG\0"
  /* 13604 */ "EXTRACT_SUBREG\0"
  /* 13619 */ "INSERT_SUBREG\0"
  /* 13633 */ "TAILCALLREG\0"
  /* 13645 */ "G_SEXT_INREG\0"
  /* 13658 */ "SUBREG_TO_REG\0"
  /* 13672 */ "G_ATOMIC_CMPXCHG\0"
  /* 13689 */ "G_ATOMICRMW_XCHG\0"
  /* 13706 */ "G_FLOG\0"
  /* 13713 */ "G_VAARG\0"
  /* 13721 */ "PREALLOCATED_ARG\0"
  /* 13738 */ "CRC32H\0"
  /* 13745 */ "DSBH\0"
  /* 13750 */ "WSBH\0"
  /* 13755 */ "CRC32CH\0"
  /* 13763 */ "SEH\0"
  /* 13767 */ "G_SMULH\0"
  /* 13775 */ "G_UMULH\0"
  /* 13783 */ "SHRA_PH\0"
  /* 13791 */ "PRECRQ_QB_PH\0"
  /* 13804 */ "PRECR_QB_PH\0"
  /* 13816 */ "PRECRQU_S_QB_PH\0"
  /* 13832 */ "PseudoCMP_LE_PH\0"
  /* 13848 */ "SUBQH_PH\0"
  /* 13857 */ "ADDQH_PH\0"
  /* 13866 */ "PseudoPICK_PH\0"
  /* 13880 */ "SHLL_PH\0"
  /* 13888 */ "REPL_PH\0"
  /* 13896 */ "SHRL_PH\0"
  /* 13904 */ "PACKRL_PH\0"
  /* 13914 */ "MUL_PH\0"
  /* 13921 */ "SUBQ_PH\0"
  /* 13929 */ "ADDQ_PH\0"
  /* 13937 */ "PseudoCMP_EQ_PH\0"
  /* 13953 */ "SHRA_R_PH\0"
  /* 13963 */ "SUBQH_R_PH\0"
  /* 13974 */ "ADDQH_R_PH\0"
  /* 13985 */ "SHRAV_R_PH\0"
  /* 13996 */ "MULQ_RS_PH\0"
  /* 14007 */ "SHLL_S_PH\0"
  /* 14017 */ "MUL_S_PH\0"
  /* 14026 */ "SUBQ_S_PH\0"
  /* 14036 */ "ADDQ_S_PH\0"
  /* 14046 */ "MULQ_S_PH\0"
  /* 14056 */ "ABSQ_S_PH\0"
  /* 14066 */ "SUBU_S_PH\0"
  /* 14076 */ "ADDU_S_PH\0"
  /* 14086 */ "SHLLV_S_PH\0"
  /* 14097 */ "PseudoCMP_LT_PH\0"
  /* 14113 */ "SUBU_PH\0"
  /* 14121 */ "ADDU_PH\0"
  /* 14129 */ "SHRAV_PH\0"
  /* 14138 */ "SHLLV_PH\0"
  /* 14147 */ "REPLV_PH\0"
  /* 14156 */ "SHRLV_PH\0"
  /* 14165 */ "DPA_W_PH\0"
  /* 14174 */ "MULSA_W_PH\0"
  /* 14185 */ "DPAQX_SA_W_PH\0"
  /* 14199 */ "DPSQX_SA_W_PH\0"
  /* 14213 */ "DPS_W_PH\0"
  /* 14222 */ "DPAQ_S_W_PH\0"
  /* 14234 */ "MULSAQ_S_W_PH\0"
  /* 14248 */ "DPSQ_S_W_PH\0"
  /* 14260 */ "DPAQX_S_W_PH\0"
  /* 14273 */ "DPSQX_S_W_PH\0"
  /* 14286 */ "DPAX_W_PH\0"
  /* 14296 */ "DPSX_W_PH\0"
  /* 14306 */ "SH\0"
  /* 14309 */ "DMUH\0"
  /* 14314 */ "SRA_H\0"
  /* 14320 */ "ADD_A_H\0"
  /* 14328 */ "MIN_A_H\0"
  /* 14336 */ "ADDS_A_H\0"
  /* 14345 */ "MAX_A_H\0"
  /* 14353 */ "NLOC_H\0"
  /* 14360 */ "NLZC_H\0"
  /* 14367 */ "SLD_H\0"
  /* 14373 */ "PCKOD_H\0"
  /* 14381 */ "ILVOD_H\0"
  /* 14389 */ "INSVE_H\0"
  /* 14397 */ "VSHF_H\0"
  /* 14404 */ "BNEG_H\0"
  /* 14411 */ "SRAI_H\0"
  /* 14418 */ "SLDI_H\0"
  /* 14425 */ "BNEGI_H\0"
  /* 14433 */ "SLLI_H\0"
  /* 14440 */ "SRLI_H\0"
  /* 14447 */ "BINSLI_H\0"
  /* 14456 */ "CEQI_H\0"
  /* 14463 */ "SRARI_H\0"
  /* 14471 */ "BCLRI_H\0"
  /* 14479 */ "SRLRI_H\0"
  /* 14487 */ "BINSRI_H\0"
  /* 14496 */ "SPLATI_H\0"
  /* 14505 */ "BSETI_H\0"
  /* 14513 */ "SUBVI_H\0"
  /* 14521 */ "ADDVI_H\0"
  /* 14529 */ "FILL_H\0"
  /* 14536 */ "SLL_H\0"
  /* 14542 */ "SRL_H\0"
  /* 14548 */ "BINSL_H\0"
  /* 14556 */ "ILVL_H\0"
  /* 14563 */ "FEXDO_H\0"
  /* 14571 */ "CEQ_H\0"
  /* 14577 */ "FTQ_H\0"
  /* 14583 */ "MSUB_Q_H\0"
  /* 14592 */ "MADD_Q_H\0"
  /* 14601 */ "MUL_Q_H\0"
  /* 14609 */ "MSUBR_Q_H\0"
  /* 14619 */ "MADDR_Q_H\0"
  /* 14629 */ "MULR_Q_H\0"
  /* 14638 */ "SRAR_H\0"
  /* 14645 */ "BCLR_H\0"
  /* 14652 */ "SRLR_H\0"
  /* 14659 */ "BINSR_H\0"
  /* 14667 */ "ILVR_H\0"
  /* 14674 */ "ASUB_S_H\0"
  /* 14683 */ "HSUB_S_H\0"
  /* 14692 */ "DPSUB_S_H\0"
  /* 14702 */ "HADD_S_H\0"
  /* 14711 */ "DPADD_S_H\0"
  /* 14721 */ "MOD_S_H\0"
  /* 14729 */ "CLE_S_H\0"
  /* 14737 */ "AVE_S_H\0"
  /* 14745 */ "CLEI_S_H\0"
  /* 14754 */ "MINI_S_H\0"
  /* 14763 */ "CLTI_S_H\0"
  /* 14772 */ "MAXI_S_H\0"
  /* 14781 */ "MIN_S_H\0"
  /* 14789 */ "DOTP_S_H\0"
  /* 14798 */ "AVER_S_H\0"
  /* 14807 */ "EXTR_S_H\0"
  /* 14816 */ "SUBS_S_H\0"
  /* 14825 */ "ADDS_S_H\0"
  /* 14834 */ "SAT_S_H\0"
  /* 14842 */ "CLT_S_H\0"
  /* 14850 */ "SUBSUU_S_H\0"
  /* 14861 */ "DIV_S_H\0"
  /* 14869 */ "EXTRV_S_H\0"
  /* 14879 */ "MAX_S_H\0"
  /* 14887 */ "COPY_S_H\0"
  /* 14896 */ "SPLAT_H\0"
  /* 14904 */ "BSET_H\0"
  /* 14911 */ "PCNT_H\0"
  /* 14918 */ "INSERT_H\0"
  /* 14927 */ "ST_H\0"
  /* 14932 */ "ASUB_U_H\0"
  /* 14941 */ "HSUB_U_H\0"
  /* 14950 */ "DPSUB_U_H\0"
  /* 14960 */ "HADD_U_H\0"
  /* 14969 */ "DPADD_U_H\0"
  /* 14979 */ "MOD_U_H\0"
  /* 14987 */ "CLE_U_H\0"
  /* 14995 */ "AVE_U_H\0"
  /* 15003 */ "CLEI_U_H\0"
  /* 15012 */ "MINI_U_H\0"
  /* 15021 */ "CLTI_U_H\0"
  /* 15030 */ "MAXI_U_H\0"
  /* 15039 */ "MIN_U_H\0"
  /* 15047 */ "DOTP_U_H\0"
  /* 15056 */ "AVER_U_H\0"
  /* 15065 */ "SUBS_U_H\0"
  /* 15074 */ "ADDS_U_H\0"
  /* 15083 */ "SUBSUS_U_H\0"
  /* 15094 */ "SAT_U_H\0"
  /* 15102 */ "CLT_U_H\0"
  /* 15110 */ "DIV_U_H\0"
  /* 15118 */ "MAX_U_H\0"
  /* 15126 */ "COPY_U_H\0"
  /* 15135 */ "MSUBV_H\0"
  /* 15143 */ "MADDV_H\0"
  /* 15151 */ "PCKEV_H\0"
  /* 15159 */ "ILVEV_H\0"
  /* 15167 */ "MULV_H\0"
  /* 15174 */ "BZ_H\0"
  /* 15179 */ "BNZ_H\0"
  /* 15185 */ "SYNCI\0"
  /* 15191 */ "DI\0"
  /* 15194 */ "TGEI\0"
  /* 15199 */ "TNEI\0"
  /* 15204 */ "DAHI\0"
  /* 15209 */ "PseudoMFHI\0"
  /* 15220 */ "PseudoMTLOHI\0"
  /* 15233 */ "G_PHI\0"
  /* 15239 */ "MFTHI\0"
  /* 15245 */ "MTHI\0"
  /* 15250 */ "MTTHI\0"
  /* 15256 */ "TEQI\0"
  /* 15261 */ "G_FPTOSI\0"
  /* 15270 */ "DATI\0"
  /* 15275 */ "TLTI\0"
  /* 15280 */ "DAUI\0"
  /* 15285 */ "G_FPTOUI\0"
  /* 15294 */ "GINVI\0"
  /* 15300 */ "TLBWI\0"
  /* 15306 */ "TLBGWI\0"
  /* 15313 */ "G_FPOWI\0"
  /* 15321 */ "MOVN_I64_I\0"
  /* 15332 */ "MOVZ_I64_I\0"
  /* 15343 */ "MOVF_I\0"
  /* 15350 */ "PseudoSELECTFP_F_I\0"
  /* 15369 */ "MOVN_I_I\0"
  /* 15378 */ "MOVZ_I_I\0"
  /* 15387 */ "PseudoD_SELECT_I\0"
  /* 15404 */ "PseudoSELECT_I\0"
  /* 15419 */ "MOVT_I\0"
  /* 15426 */ "PseudoSELECTFP_T_I\0"
  /* 15445 */ "J\0"
  /* 15447 */ "BREAK\0"
  /* 15453 */ "FORK\0"
  /* 15458 */ "G_PTRMASK\0"
  /* 15468 */ "BAL\0"
  /* 15472 */ "JAL\0"
  /* 15476 */ "BGEZAL\0"
  /* 15483 */ "BLTZAL\0"
  /* 15490 */ "MULEU_S_PH_QBL\0"
  /* 15505 */ "PRECEU_PH_QBL\0"
  /* 15519 */ "PRECEQU_PH_QBL\0"
  /* 15534 */ "DPAU_H_QBL\0"
  /* 15545 */ "DPSU_H_QBL\0"
  /* 15556 */ "LDL\0"
  /* 15560 */ "SDL\0"
  /* 15564 */ "GC_LABEL\0"
  /* 15573 */ "DBG_LABEL\0"
  /* 15583 */ "EH_LABEL\0"
  /* 15592 */ "ANNOTATION_LABEL\0"
  /* 15609 */ "BGEL\0"
  /* 15614 */ "BLEL\0"
  /* 15619 */ "BNEL\0"
  /* 15624 */ "ICALL_BRANCH_FUNNEL\0"
  /* 15644 */ "BC1FL\0"
  /* 15650 */ "MAQ_SA_W_PHL\0"
  /* 15663 */ "PRECEQ_W_PHL\0"
  /* 15676 */ "MAQ_S_W_PHL\0"
  /* 15688 */ "MULEQ_S_W_PHL\0"
  /* 15702 */ "G_FSHL\0"
  /* 15709 */ "G_SHL\0"
  /* 15715 */ "G_FCEIL\0"
  /* 15723 */ "TAILCALL\0"
  /* 15732 */ "HYPCALL\0"
  /* 15740 */ "SYSCALL\0"
  /* 15748 */ "PATCHABLE_TAIL_CALL\0"
  /* 15768 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 15795 */ "PATCHABLE_EVENT_CALL\0"
  /* 15816 */ "FENTRY_CALL\0"
  /* 15828 */ "BGEZALL\0"
  /* 15836 */ "BLTZALL\0"
  /* 15844 */ "KILL\0"
  /* 15849 */ "DSLL\0"
  /* 15854 */ "DROL\0"
  /* 15859 */ "BEQL\0"
  /* 15864 */ "DSRL\0"
  /* 15869 */ "BC1TL\0"
  /* 15875 */ "BGTL\0"
  /* 15880 */ "BLTL\0"
  /* 15885 */ "BGEUL\0"
  /* 15891 */ "BLEUL\0"
  /* 15897 */ "DMUL\0"
  /* 15902 */ "G_VECREDUCE_FMUL\0"
  /* 15919 */ "G_FMUL\0"
  /* 15926 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 15947 */ "G_STRICT_FMUL\0"
  /* 15961 */ "G_VECREDUCE_MUL\0"
  /* 15977 */ "G_MUL\0"
  /* 15983 */ "BGTUL\0"
  /* 15989 */ "BLTUL\0"
  /* 15995 */ "LWL\0"
  /* 15999 */ "SWL\0"
  /* 16003 */ "BGEZL\0"
  /* 16009 */ "BLEZL\0"
  /* 16015 */ "BGTZL\0"
  /* 16021 */ "BLTZL\0"
  /* 16027 */ "PseudoCVT_D64_L\0"
  /* 16043 */ "PseudoCVT_S_L\0"
  /* 16057 */ "G_FREM\0"
  /* 16064 */ "G_STRICT_FREM\0"
  /* 16078 */ "G_SREM\0"
  /* 16085 */ "G_UREM\0"
  /* 16092 */ "MFGC0_MM\0"
  /* 16101 */ "MFHGC0_MM\0"
  /* 16111 */ "MTHGC0_MM\0"
  /* 16121 */ "MTGC0_MM\0"
  /* 16130 */ "LDC1_MM\0"
  /* 16138 */ "SDC1_MM\0"
  /* 16146 */ "CFC1_MM\0"
  /* 16154 */ "MFC1_MM\0"
  /* 16162 */ "CTC1_MM\0"
  /* 16170 */ "MTC1_MM\0"
  /* 16178 */ "LWC1_MM\0"
  /* 16186 */ "SWC1_MM\0"
  /* 16194 */ "LUXC1_MM\0"
  /* 16203 */ "SUXC1_MM\0"
  /* 16212 */ "LWXC1_MM\0"
  /* 16221 */ "SWXC1_MM\0"
  /* 16230 */ "MFHC1_D32_MM\0"
  /* 16243 */ "MTHC1_D32_MM\0"
  /* 16256 */ "FSUB_D32_MM\0"
  /* 16268 */ "NMSUB_D32_MM\0"
  /* 16281 */ "FADD_D32_MM\0"
  /* 16293 */ "NMADD_D32_MM\0"
  /* 16306 */ "C_NGE_D32_MM\0"
  /* 16319 */ "C_NGLE_D32_MM\0"
  /* 16333 */ "C_OLE_D32_MM\0"
  /* 16346 */ "C_ULE_D32_MM\0"
  /* 16359 */ "C_LE_D32_MM\0"
  /* 16371 */ "C_SF_D32_MM\0"
  /* 16383 */ "MOVF_D32_MM\0"
  /* 16395 */ "C_F_D32_MM\0"
  /* 16406 */ "FNEG_D32_MM\0"
  /* 16418 */ "MOVN_I_D32_MM\0"
  /* 16432 */ "MOVZ_I_D32_MM\0"
  /* 16446 */ "C_NGL_D32_MM\0"
  /* 16459 */ "FMUL_D32_MM\0"
  /* 16471 */ "C_UN_D32_MM\0"
  /* 16483 */ "RECIP_D32_MM\0"
  /* 16496 */ "FCMP_D32_MM\0"
  /* 16508 */ "C_SEQ_D32_MM\0"
  /* 16521 */ "C_UEQ_D32_MM\0"
  /* 16534 */ "C_EQ_D32_MM\0"
  /* 16546 */ "FABS_D32_MM\0"
  /* 16558 */ "CVT_S_D32_MM\0"
  /* 16571 */ "C_NGT_D32_MM\0"
  /* 16584 */ "C_OLT_D32_MM\0"
  /* 16597 */ "C_ULT_D32_MM\0"
  /* 16610 */ "C_LT_D32_MM\0"
  /* 16622 */ "FSQRT_D32_MM\0"
  /* 16635 */ "RSQRT_D32_MM\0"
  /* 16648 */ "MOVT_D32_MM\0"
  /* 16660 */ "FDIV_D32_MM\0"
  /* 16672 */ "FMOV_D32_MM\0"
  /* 16684 */ "CVT_W_D32_MM\0"
  /* 16697 */ "BPOSGE32_MM\0"
  /* 16709 */ "LWM32_MM\0"
  /* 16718 */ "SWM32_MM\0"
  /* 16727 */ "FCMP_S32_MM\0"
  /* 16739 */ "CFC2_MM\0"
  /* 16747 */ "CTC2_MM\0"
  /* 16755 */ "ADDIUR2_MM\0"
  /* 16766 */ "MFHC1_D64_MM\0"
  /* 16779 */ "MTHC1_D64_MM\0"
  /* 16792 */ "MTC1_D64_MM\0"
  /* 16804 */ "FSUB_D64_MM\0"
  /* 16816 */ "FADD_D64_MM\0"
  /* 16828 */ "C_NGE_D64_MM\0"
  /* 16841 */ "C_NGLE_D64_MM\0"
  /* 16855 */ "C_OLE_D64_MM\0"
  /* 16868 */ "C_ULE_D64_MM\0"
  /* 16881 */ "C_LE_D64_MM\0"
  /* 16893 */ "C_SF_D64_MM\0"
  /* 16905 */ "C_F_D64_MM\0"
  /* 16916 */ "FNEG_D64_MM\0"
  /* 16928 */ "C_NGL_D64_MM\0"
  /* 16941 */ "FMUL_D64_MM\0"
  /* 16953 */ "CVT_L_D64_MM\0"
  /* 16966 */ "C_UN_D64_MM\0"
  /* 16978 */ "RECIP_D64_MM\0"
  /* 16991 */ "C_SEQ_D64_MM\0"
  /* 17004 */ "C_UEQ_D64_MM\0"
  /* 17017 */ "C_EQ_D64_MM\0"
  /* 17029 */ "FABS_D64_MM\0"
  /* 17041 */ "CVT_S_D64_MM\0"
  /* 17054 */ "C_NGT_D64_MM\0"
  /* 17067 */ "C_OLT_D64_MM\0"
  /* 17080 */ "C_ULT_D64_MM\0"
  /* 17093 */ "C_LT_D64_MM\0"
  /* 17105 */ "FSQRT_D64_MM\0"
  /* 17118 */ "RSQRT_D64_MM\0"
  /* 17131 */ "FDIV_D64_MM\0"
  /* 17143 */ "FMOV_D64_MM\0"
  /* 17155 */ "CVT_W_D64_MM\0"
  /* 17168 */ "ADDIUS5_MM\0"
  /* 17179 */ "SB16_MM\0"
  /* 17187 */ "JRC16_MM\0"
  /* 17196 */ "AND16_MM\0"
  /* 17205 */ "MOVE16_MM\0"
  /* 17215 */ "SH16_MM\0"
  /* 17223 */ "ANDI16_MM\0"
  /* 17233 */ "MFHI16_MM\0"
  /* 17243 */ "LI16_MM\0"
  /* 17251 */ "BREAK16_MM\0"
  /* 17262 */ "SLL16_MM\0"
  /* 17271 */ "SRL16_MM\0"
  /* 17280 */ "LWM16_MM\0"
  /* 17289 */ "SWM16_MM\0"
  /* 17298 */ "MFLO16_MM\0"
  /* 17308 */ "SDBBP16_MM\0"
  /* 17319 */ "JR16_MM\0"
  /* 17327 */ "JALR16_MM\0"
  /* 17337 */ "XOR16_MM\0"
  /* 17346 */ "JALRS16_MM\0"
  /* 17357 */ "NOT16_MM\0"
  /* 17366 */ "LBU16_MM\0"
  /* 17375 */ "SUBU16_MM\0"
  /* 17385 */ "ADDU16_MM\0"
  /* 17395 */ "LHU16_MM\0"
  /* 17404 */ "LW16_MM\0"
  /* 17412 */ "SW16_MM\0"
  /* 17420 */ "BNEZ16_MM\0"
  /* 17430 */ "BEQZ16_MM\0"
  /* 17440 */ "PRECEU_PH_QBLA_MM\0"
  /* 17458 */ "PRECEQU_PH_QBLA_MM\0"
  /* 17477 */ "PRECEU_PH_QBRA_MM\0"
  /* 17495 */ "PRECEQU_PH_QBRA_MM\0"
  /* 17514 */ "SRA_MM\0"
  /* 17521 */ "SEB_MM\0"
  /* 17528 */ "EHB_MM\0"
  /* 17535 */ "LB_MM\0"
  /* 17541 */ "CMPGU_LE_QB_MM\0"
  /* 17556 */ "CMPU_LE_QB_MM\0"
  /* 17570 */ "PICK_QB_MM\0"
  /* 17581 */ "SHLL_QB_MM\0"
  /* 17592 */ "REPL_QB_MM\0"
  /* 17603 */ "SHRL_QB_MM\0"
  /* 17614 */ "CMPGU_EQ_QB_MM\0"
  /* 17629 */ "CMPU_EQ_QB_MM\0"
  /* 17643 */ "SUBU_S_QB_MM\0"
  /* 17656 */ "ADDU_S_QB_MM\0"
  /* 17669 */ "CMPGU_LT_QB_MM\0"
  /* 17684 */ "CMPU_LT_QB_MM\0"
  /* 17698 */ "SUBU_QB_MM\0"
  /* 17709 */ "ADDU_QB_MM\0"
  /* 17720 */ "SHLLV_QB_MM\0"
  /* 17732 */ "REPLV_QB_MM\0"
  /* 17744 */ "SHRLV_QB_MM\0"
  /* 17756 */ "RADDU_W_QB_MM\0"
  /* 17770 */ "SB_MM\0"
  /* 17776 */ "MODSUB_MM\0"
  /* 17786 */ "PseudoMSUB_MM\0"
  /* 17800 */ "SYNC_MM\0"
  /* 17808 */ "ADDIUPC_MM\0"
  /* 17819 */ "ADDSC_MM\0"
  /* 17828 */ "ADDWC_MM\0"
  /* 17837 */ "BNEZC_MM\0"
  /* 17846 */ "BEQZC_MM\0"
  /* 17855 */ "PseudoMADD_MM\0"
  /* 17869 */ "AND_MM\0"
  /* 17876 */ "LBE_MM\0"
  /* 17883 */ "SBE_MM\0"
  /* 17890 */ "SCE_MM\0"
  /* 17897 */ "CACHEE_MM\0"
  /* 17907 */ "PREFE_MM\0"
  /* 17916 */ "TGE_MM\0"
  /* 17923 */ "CACHE_MM\0"
  /* 17932 */ "LHE_MM\0"
  /* 17939 */ "SHE_MM\0"
  /* 17946 */ "LLE_MM\0"
  /* 17953 */ "LWLE_MM\0"
  /* 17961 */ "SWLE_MM\0"
  /* 17969 */ "BNE_MM\0"
  /* 17976 */ "TNE_MM\0"
  /* 17983 */ "LWRE_MM\0"
  /* 17991 */ "SWRE_MM\0"
  /* 17999 */ "PAUSE_MM\0"
  /* 18008 */ "LWE_MM\0"
  /* 18015 */ "SWE_MM\0"
  /* 18022 */ "LBuE_MM\0"
  /* 18030 */ "LHuE_MM\0"
  /* 18038 */ "BC1F_MM\0"
  /* 18046 */ "PREF_MM\0"
  /* 18054 */ "TLBGINVF_MM\0"
  /* 18066 */ "TAILCALLREG_MM\0"
  /* 18081 */ "WSBH_MM\0"
  /* 18089 */ "SEH_MM\0"
  /* 18096 */ "LH_MM\0"
  /* 18102 */ "SHRA_PH_MM\0"
  /* 18113 */ "PRECRQ_QB_PH_MM\0"
  /* 18129 */ "PRECRQU_S_QB_PH_MM\0"
  /* 18148 */ "CMP_LE_PH_MM\0"
  /* 18161 */ "PICK_PH_MM\0"
  /* 18172 */ "SHLL_PH_MM\0"
  /* 18183 */ "REPL_PH_MM\0"
  /* 18194 */ "PACKRL_PH_MM\0"
  /* 18207 */ "SUBQ_PH_MM\0"
  /* 18218 */ "ADDQ_PH_MM\0"
  /* 18229 */ "CMP_EQ_PH_MM\0"
  /* 18242 */ "SHRA_R_PH_MM\0"
  /* 18255 */ "SHRAV_R_PH_MM\0"
  /* 18269 */ "MULQ_RS_PH_MM\0"
  /* 18283 */ "SHLL_S_PH_MM\0"
  /* 18296 */ "SUBQ_S_PH_MM\0"
  /* 18309 */ "ADDQ_S_PH_MM\0"
  /* 18322 */ "ABSQ_S_PH_MM\0"
  /* 18335 */ "SHLLV_S_PH_MM\0"
  /* 18349 */ "CMP_LT_PH_MM\0"
  /* 18362 */ "SHRAV_PH_MM\0"
  /* 18374 */ "SHLLV_PH_MM\0"
  /* 18386 */ "REPLV_PH_MM\0"
  /* 18398 */ "DPAQ_S_W_PH_MM\0"
  /* 18413 */ "MULSAQ_S_W_PH_MM\0"
  /* 18430 */ "DPSQ_S_W_PH_MM\0"
  /* 18445 */ "SH_MM\0"
  /* 18451 */ "EXTR_S_H_MM\0"
  /* 18463 */ "EXTRV_S_H_MM\0"
  /* 18476 */ "SYNCI_MM\0"
  /* 18485 */ "DI_MM\0"
  /* 18491 */ "TGEI_MM\0"
  /* 18499 */ "TNEI_MM\0"
  /* 18507 */ "PseudoMFHI_MM\0"
  /* 18521 */ "PseudoMTLOHI_MM\0"
  /* 18537 */ "MTHI_MM\0"
  /* 18545 */ "TEQI_MM\0"
  /* 18553 */ "TLTI_MM\0"
  /* 18561 */ "TLBWI_MM\0"
  /* 18570 */ "TLBGWI_MM\0"
  /* 18580 */ "MOVF_I_MM\0"
  /* 18590 */ "MOVN_I_MM\0"
  /* 18600 */ "MOVT_I_MM\0"
  /* 18610 */ "MOVZ_I_MM\0"
  /* 18620 */ "J_MM\0"
  /* 18625 */ "BREAK_MM\0"
  /* 18634 */ "JAL_MM\0"
  /* 18641 */ "BGEZAL_MM\0"
  /* 18651 */ "BLTZAL_MM\0"
  /* 18661 */ "MULEU_S_PH_QBL_MM\0"
  /* 18679 */ "PRECEU_PH_QBL_MM\0"
  /* 18696 */ "PRECEQU_PH_QBL_MM\0"
  /* 18714 */ "DPAU_H_QBL_MM\0"
  /* 18728 */ "DPSU_H_QBL_MM\0"
  /* 18742 */ "MAQ_SA_W_PHL_MM\0"
  /* 18758 */ "PRECEQ_W_PHL_MM\0"
  /* 18774 */ "MAQ_S_W_PHL_MM\0"
  /* 18789 */ "MULEQ_S_W_PHL_MM\0"
  /* 18806 */ "TAILCALL_MM\0"
  /* 18818 */ "HYPCALL_MM\0"
  /* 18829 */ "SYSCALL_MM\0"
  /* 18840 */ "SLL_MM\0"
  /* 18847 */ "SRL_MM\0"
  /* 18854 */ "MUL_MM\0"
  /* 18861 */ "LWL_MM\0"
  /* 18868 */ "SWL_MM\0"
  /* 18875 */ "LWM_MM\0"
  /* 18882 */ "SWM_MM\0"
  /* 18889 */ "CLO_MM\0"
  /* 18896 */ "PseudoMFLO_MM\0"
  /* 18910 */ "SHILO_MM\0"
  /* 18919 */ "MTLO_MM\0"
  /* 18927 */ "TRAP_MM\0"
  /* 18935 */ "SDBBP_MM\0"
  /* 18944 */ "TLBP_MM\0"
  /* 18952 */ "EXTPDP_MM\0"
  /* 18962 */ "MOVEP_MM\0"
  /* 18971 */ "TLBGP_MM\0"
  /* 18980 */ "LWGP_MM\0"
  /* 18988 */ "MTHLIP_MM\0"
  /* 18998 */ "SSNOP_MM\0"
  /* 19007 */ "ADDIUR1SP_MM\0"
  /* 19020 */ "RDDSP_MM\0"
  /* 19029 */ "WRDSP_MM\0"
  /* 19038 */ "LWDSP_MM\0"
  /* 19047 */ "SWDSP_MM\0"
  /* 19056 */ "MSUB_DSP_MM\0"
  /* 19068 */ "MADD_DSP_MM\0"
  /* 19080 */ "MFHI_DSP_MM\0"
  /* 19092 */ "MTHI_DSP_MM\0"
  /* 19104 */ "MFLO_DSP_MM\0"
  /* 19116 */ "MTLO_DSP_MM\0"
  /* 19128 */ "MULT_DSP_MM\0"
  /* 19140 */ "MSUBU_DSP_MM\0"
  /* 19153 */ "MADDU_DSP_MM\0"
  /* 19166 */ "MULTU_DSP_MM\0"
  /* 19179 */ "ADDIUSP_MM\0"
  /* 19190 */ "LWSP_MM\0"
  /* 19198 */ "SWSP_MM\0"
  /* 19206 */ "EXTP_MM\0"
  /* 19214 */ "LWP_MM\0"
  /* 19221 */ "SWP_MM\0"
  /* 19228 */ "BEQ_MM\0"
  /* 19235 */ "TEQ_MM\0"
  /* 19242 */ "TLBR_MM\0"
  /* 19250 */ "MULEU_S_PH_QBR_MM\0"
  /* 19268 */ "PRECEU_PH_QBR_MM\0"
  /* 19285 */ "PRECEQU_PH_QBR_MM\0"
  /* 19303 */ "DPAU_H_QBR_MM\0"
  /* 19317 */ "DPSU_H_QBR_MM\0"
  /* 19331 */ "BAL_BR_MM\0"
  /* 19341 */ "TLBGR_MM\0"
  /* 19350 */ "MAQ_SA_W_PHR_MM\0"
  /* 19366 */ "PRECEQ_W_PHR_MM\0"
  /* 19382 */ "MAQ_S_W_PHR_MM\0"
  /* 19397 */ "MULEQ_S_W_PHR_MM\0"
  /* 19414 */ "JR_MM\0"
  /* 19420 */ "JALR_MM\0"
  /* 19428 */ "NOR_MM\0"
  /* 19435 */ "XOR_MM\0"
  /* 19442 */ "ROTR_MM\0"
  /* 19450 */ "TLBWR_MM\0"
  /* 19459 */ "TLBGWR_MM\0"
  /* 19469 */ "RDHWR_MM\0"
  /* 19478 */ "LWR_MM\0"
  /* 19485 */ "SWR_MM\0"
  /* 19492 */ "JALS_MM\0"
  /* 19500 */ "BGEZALS_MM\0"
  /* 19511 */ "BLTZALS_MM\0"
  /* 19522 */ "INS_MM\0"
  /* 19529 */ "JALRS_MM\0"
  /* 19538 */ "LWXS_MM\0"
  /* 19546 */ "CVT_D32_S_MM\0"
  /* 19559 */ "CVT_D64_S_MM\0"
  /* 19572 */ "FSUB_S_MM\0"
  /* 19582 */ "NMSUB_S_MM\0"
  /* 19593 */ "FADD_S_MM\0"
  /* 19603 */ "NMADD_S_MM\0"
  /* 19614 */ "C_NGE_S_MM\0"
  /* 19625 */ "C_NGLE_S_MM\0"
  /* 19637 */ "C_OLE_S_MM\0"
  /* 19648 */ "C_ULE_S_MM\0"
  /* 19659 */ "C_LE_S_MM\0"
  /* 19669 */ "C_SF_S_MM\0"
  /* 19679 */ "MOVF_S_MM\0"
  /* 19689 */ "C_F_S_MM\0"
  /* 19698 */ "FNEG_S_MM\0"
  /* 19708 */ "MOVN_I_S_MM\0"
  /* 19720 */ "MOVZ_I_S_MM\0"
  /* 19732 */ "C_NGL_S_MM\0"
  /* 19743 */ "FMUL_S_MM\0"
  /* 19753 */ "CVT_L_S_MM\0"
  /* 19764 */ "C_UN_S_MM\0"
  /* 19774 */ "RECIP_S_MM\0"
  /* 19785 */ "C_SEQ_S_MM\0"
  /* 19796 */ "C_UEQ_S_MM\0"
  /* 19807 */ "C_EQ_S_MM\0"
  /* 19817 */ "FABS_S_MM\0"
  /* 19827 */ "C_NGT_S_MM\0"
  /* 19838 */ "C_OLT_S_MM\0"
  /* 19849 */ "C_ULT_S_MM\0"
  /* 19860 */ "C_LT_S_MM\0"
  /* 19870 */ "FSQRT_S_MM\0"
  /* 19881 */ "RSQRT_S_MM\0"
  /* 19892 */ "MOVT_S_MM\0"
  /* 19902 */ "FDIV_S_MM\0"
  /* 19912 */ "FMOV_S_MM\0"
  /* 19922 */ "TRUNC_W_S_MM\0"
  /* 19935 */ "ROUND_W_S_MM\0"
  /* 19948 */ "CEIL_W_S_MM\0"
  /* 19960 */ "FLOOR_W_S_MM\0"
  /* 19973 */ "CVT_W_S_MM\0"
  /* 19984 */ "BC1T_MM\0"
  /* 19992 */ "DERET_MM\0"
  /* 20001 */ "WAIT_MM\0"
  /* 20009 */ "SLT_MM\0"
  /* 20016 */ "TLT_MM\0"
  /* 20023 */ "PseudoMULT_MM\0"
  /* 20037 */ "EXT_MM\0"
  /* 20044 */ "PseudoMSUBU_MM\0"
  /* 20059 */ "PseudoMADDU_MM\0"
  /* 20074 */ "TGEU_MM\0"
  /* 20082 */ "TGEIU_MM\0"
  /* 20091 */ "TLTIU_MM\0"
  /* 20100 */ "TLTU_MM\0"
  /* 20108 */ "LWU_MM\0"
  /* 20115 */ "SRAV_MM\0"
  /* 20123 */ "BITREV_MM\0"
  /* 20133 */ "SDIV_MM\0"
  /* 20141 */ "UDIV_MM\0"
  /* 20149 */ "SLLV_MM\0"
  /* 20157 */ "SRLV_MM\0"
  /* 20165 */ "TLBGINV_MM\0"
  /* 20176 */ "SHILOV_MM\0"
  /* 20186 */ "EXTPDPV_MM\0"
  /* 20197 */ "EXTPV_MM\0"
  /* 20206 */ "ROTRV_MM\0"
  /* 20215 */ "INSV_MM\0"
  /* 20223 */ "LW_MM\0"
  /* 20229 */ "SW_MM\0"
  /* 20235 */ "CVT_D32_W_MM\0"
  /* 20248 */ "CVT_D64_W_MM\0"
  /* 20261 */ "TRUNC_W_MM\0"
  /* 20272 */ "ROUND_W_MM\0"
  /* 20283 */ "PRECRQ_PH_W_MM\0"
  /* 20298 */ "PRECRQ_RS_PH_W_MM\0"
  /* 20316 */ "CEIL_W_MM\0"
  /* 20326 */ "DPAQ_SA_L_W_MM\0"
  /* 20341 */ "DPSQ_SA_L_W_MM\0"
  /* 20356 */ "FLOOR_W_MM\0"
  /* 20367 */ "EXTR_W_MM\0"
  /* 20377 */ "SHRA_R_W_MM\0"
  /* 20389 */ "EXTR_R_W_MM\0"
  /* 20401 */ "SHRAV_R_W_MM\0"
  /* 20414 */ "EXTRV_R_W_MM\0"
  /* 20427 */ "EXTR_RS_W_MM\0"
  /* 20440 */ "EXTRV_RS_W_MM\0"
  /* 20454 */ "SHLL_S_W_MM\0"
  /* 20466 */ "SUBQ_S_W_MM\0"
  /* 20478 */ "ADDQ_S_W_MM\0"
  /* 20490 */ "ABSQ_S_W_MM\0"
  /* 20502 */ "CVT_S_W_MM\0"
  /* 20513 */ "SHLLV_S_W_MM\0"
  /* 20526 */ "EXTRV_W_MM\0"
  /* 20537 */ "PREFX_MM\0"
  /* 20546 */ "LHX_MM\0"
  /* 20553 */ "JALX_MM\0"
  /* 20561 */ "LBUX_MM\0"
  /* 20569 */ "LWX_MM\0"
  /* 20576 */ "BGEZ_MM\0"
  /* 20584 */ "BLEZ_MM\0"
  /* 20592 */ "CLZ_MM\0"
  /* 20599 */ "BGTZ_MM\0"
  /* 20607 */ "BLTZ_MM\0"
  /* 20615 */ "PseudoIndirectBranch_MM\0"
  /* 20639 */ "ADDi_MM\0"
  /* 20647 */ "ANDi_MM\0"
  /* 20655 */ "XORi_MM\0"
  /* 20663 */ "SLTi_MM\0"
  /* 20671 */ "LUi_MM\0"
  /* 20678 */ "LBu_MM\0"
  /* 20685 */ "SUBu_MM\0"
  /* 20693 */ "ADDu_MM\0"
  /* 20701 */ "LHu_MM\0"
  /* 20708 */ "SLTu_MM\0"
  /* 20716 */ "PseudoMULTu_MM\0"
  /* 20731 */ "LEA_ADDiu_MM\0"
  /* 20744 */ "SLTiu_MM\0"
  /* 20753 */ "INLINEASM\0"
  /* 20763 */ "DINSM\0"
  /* 20769 */ "DEXTM\0"
  /* 20775 */ "G_FMINIMUM\0"
  /* 20786 */ "G_FMAXIMUM\0"
  /* 20797 */ "G_FMINNUM\0"
  /* 20807 */ "G_FMAXNUM\0"
  /* 20817 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 20839 */ "BALIGN\0"
  /* 20846 */ "DALIGN\0"
  /* 20853 */ "G_FCOPYSIGN\0"
  /* 20865 */ "G_VECREDUCE_FMIN\0"
  /* 20882 */ "G_VECREDUCE_SMIN\0"
  /* 20899 */ "G_SMIN\0"
  /* 20906 */ "G_VECREDUCE_UMIN\0"
  /* 20923 */ "G_UMIN\0"
  /* 20930 */ "G_ATOMICRMW_UMIN\0"
  /* 20947 */ "G_ATOMICRMW_MIN\0"
  /* 20963 */ "G_FSIN\0"
  /* 20970 */ "DMFC2_OCTEON\0"
  /* 20983 */ "DMTC2_OCTEON\0"
  /* 20996 */ "CFI_INSTRUCTION\0"
  /* 21012 */ "ADJCALLSTACKDOWN\0"
  /* 21029 */ "G_SSUBO\0"
  /* 21037 */ "G_USUBO\0"
  /* 21045 */ "G_SADDO\0"
  /* 21053 */ "G_UADDO\0"
  /* 21061 */ "FEXP2_D_1_PSEUDO\0"
  /* 21078 */ "FEXP2_W_1_PSEUDO\0"
  /* 21095 */ "BPOSGE32_PSEUDO\0"
  /* 21111 */ "INSERT_B_VIDX64_PSEUDO\0"
  /* 21134 */ "INSERT_FD_VIDX64_PSEUDO\0"
  /* 21158 */ "INSERT_D_VIDX64_PSEUDO\0"
  /* 21181 */ "INSERT_H_VIDX64_PSEUDO\0"
  /* 21204 */ "INSERT_FW_VIDX64_PSEUDO\0"
  /* 21228 */ "INSERT_W_VIDX64_PSEUDO\0"
  /* 21251 */ "SNZ_B_PSEUDO\0"
  /* 21264 */ "SZ_B_PSEUDO\0"
  /* 21276 */ "BSEL_FD_PSEUDO\0"
  /* 21291 */ "FILL_FD_PSEUDO\0"
  /* 21306 */ "INSERT_FD_PSEUDO\0"
  /* 21323 */ "COPY_FD_PSEUDO\0"
  /* 21338 */ "MSA_FP_EXTEND_D_PSEUDO\0"
  /* 21361 */ "MSA_FP_ROUND_D_PSEUDO\0"
  /* 21383 */ "BSEL_D_PSEUDO\0"
  /* 21397 */ "AND_V_D_PSEUDO\0"
  /* 21412 */ "NOR_V_D_PSEUDO\0"
  /* 21427 */ "XOR_V_D_PSEUDO\0"
  /* 21442 */ "SNZ_D_PSEUDO\0"
  /* 21455 */ "SZ_D_PSEUDO\0"
  /* 21467 */ "BSEL_H_PSEUDO\0"
  /* 21481 */ "AND_V_H_PSEUDO\0"
  /* 21496 */ "NOR_V_H_PSEUDO\0"
  /* 21511 */ "XOR_V_H_PSEUDO\0"
  /* 21526 */ "SNZ_H_PSEUDO\0"
  /* 21539 */ "SZ_H_PSEUDO\0"
  /* 21551 */ "SNZ_V_PSEUDO\0"
  /* 21564 */ "SZ_V_PSEUDO\0"
  /* 21576 */ "BSEL_FW_PSEUDO\0"
  /* 21591 */ "FILL_FW_PSEUDO\0"
  /* 21606 */ "INSERT_FW_PSEUDO\0"
  /* 21623 */ "COPY_FW_PSEUDO\0"
  /* 21638 */ "MSA_FP_EXTEND_W_PSEUDO\0"
  /* 21661 */ "MSA_FP_ROUND_W_PSEUDO\0"
  /* 21683 */ "BSEL_W_PSEUDO\0"
  /* 21697 */ "AND_V_W_PSEUDO\0"
  /* 21712 */ "NOR_V_W_PSEUDO\0"
  /* 21727 */ "XOR_V_W_PSEUDO\0"
  /* 21742 */ "SNZ_W_PSEUDO\0"
  /* 21755 */ "SZ_W_PSEUDO\0"
  /* 21767 */ "INSERT_B_VIDX_PSEUDO\0"
  /* 21788 */ "INSERT_FD_VIDX_PSEUDO\0"
  /* 21810 */ "INSERT_D_VIDX_PSEUDO\0"
  /* 21831 */ "INSERT_H_VIDX_PSEUDO\0"
  /* 21852 */ "INSERT_FW_VIDX_PSEUDO\0"
  /* 21874 */ "INSERT_W_VIDX_PSEUDO\0"
  /* 21895 */ "DCLO\0"
  /* 21900 */ "PseudoMFLO\0"
  /* 21911 */ "SHILO\0"
  /* 21917 */ "MFTLO\0"
  /* 21923 */ "MTLO\0"
  /* 21928 */ "MTTLO\0"
  /* 21934 */ "G_SMULO\0"
  /* 21942 */ "G_UMULO\0"
  /* 21950 */ "STACKMAP\0"
  /* 21959 */ "TRAP\0"
  /* 21964 */ "G_BSWAP\0"
  /* 21972 */ "DBITSWAP\0"
  /* 21981 */ "SDBBP\0"
  /* 21987 */ "TLBP\0"
  /* 21992 */ "EXTPDP\0"
  /* 21999 */ "G_SITOFP\0"
  /* 22008 */ "G_UITOFP\0"
  /* 22017 */ "TLBGP\0"
  /* 22023 */ "MTHLIP\0"
  /* 22030 */ "G_FCMP\0"
  /* 22037 */ "G_ICMP\0"
  /* 22044 */ "SSNOP\0"
  /* 22050 */ "DPOP\0"
  /* 22055 */ "G_CTPOP\0"
  /* 22063 */ "PATCHABLE_OP\0"
  /* 22076 */ "FAULTING_OP\0"
  /* 22088 */ "LOAD_ACC64DSP\0"
  /* 22102 */ "STORE_ACC64DSP\0"
  /* 22117 */ "RDDSP\0"
  /* 22123 */ "WRDSP\0"
  /* 22129 */ "MFTDSP\0"
  /* 22136 */ "MTTDSP\0"
  /* 22143 */ "LWDSP\0"
  /* 22149 */ "SWDSP\0"
  /* 22155 */ "MSUB_DSP\0"
  /* 22164 */ "MADD_DSP\0"
  /* 22173 */ "LOAD_CCOND_DSP\0"
  /* 22188 */ "STORE_CCOND_DSP\0"
  /* 22204 */ "MFHI_DSP\0"
  /* 22213 */ "PseudoMTLOHI_DSP\0"
  /* 22230 */ "MTHI_DSP\0"
  /* 22239 */ "MFLO_DSP\0"
  /* 22248 */ "MTLO_DSP\0"
  /* 22257 */ "MULT_DSP\0"
  /* 22266 */ "MSUBU_DSP\0"
  /* 22276 */ "MADDU_DSP\0"
  /* 22286 */ "MULTU_DSP\0"
  /* 22296 */ "JRADDIUSP\0"
  /* 22306 */ "EXTP\0"
  /* 22311 */ "ADJCALLSTACKUP\0"
  /* 22326 */ "PREALLOCATED_SETUP\0"
  /* 22345 */ "DVP\0"
  /* 22349 */ "EVP\0"
  /* 22353 */ "G_FEXP\0"
  /* 22360 */ "BEQ\0"
  /* 22364 */ "SEQ\0"
  /* 22368 */ "TEQ\0"
  /* 22372 */ "TLBR\0"
  /* 22377 */ "MULEU_S_PH_QBR\0"
  /* 22392 */ "PRECEU_PH_QBR\0"
  /* 22406 */ "PRECEQU_PH_QBR\0"
  /* 22421 */ "DPAU_H_QBR\0"
  /* 22432 */ "DPSU_H_QBR\0"
  /* 22443 */ "G_BR\0"
  /* 22448 */ "BAL_BR\0"
  /* 22455 */ "INLINEASM_BR\0"
  /* 22468 */ "G_BLOCK_ADDR\0"
  /* 22481 */ "LDR\0"
  /* 22485 */ "SDR\0"
  /* 22489 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 22514 */ "G_READCYCLECOUNTER\0"
  /* 22533 */ "G_READ_REGISTER\0"
  /* 22549 */ "G_WRITE_REGISTER\0"
  /* 22566 */ "TLBGR\0"
  /* 22572 */ "LoadImmDoubleFGR\0"
  /* 22589 */ "LoadImmSingleFGR\0"
  /* 22606 */ "MAQ_SA_W_PHR\0"
  /* 22619 */ "PRECEQ_W_PHR\0"
  /* 22632 */ "MAQ_S_W_PHR\0"
  /* 22644 */ "MULEQ_S_W_PHR\0"
  /* 22658 */ "G_ASHR\0"
  /* 22665 */ "G_FSHR\0"
  /* 22672 */ "G_LSHR\0"
  /* 22679 */ "JR\0"
  /* 22682 */ "JALR\0"
  /* 22687 */ "NOR\0"
  /* 22691 */ "G_FFLOOR\0"
  /* 22700 */ "DROR\0"
  /* 22705 */ "G_BUILD_VECTOR\0"
  /* 22720 */ "G_SHUFFLE_VECTOR\0"
  /* 22737 */ "G_VECREDUCE_XOR\0"
  /* 22753 */ "G_XOR\0"
  /* 22759 */ "G_ATOMICRMW_XOR\0"
  /* 22775 */ "G_VECREDUCE_OR\0"
  /* 22790 */ "G_OR\0"
  /* 22795 */ "G_ATOMICRMW_OR\0"
  /* 22810 */ "MFTGPR\0"
  /* 22817 */ "MTTGPR\0"
  /* 22824 */ "LoadImmDoubleGPR\0"
  /* 22841 */ "LoadImmSingleGPR\0"
  /* 22858 */ "MFTR\0"
  /* 22863 */ "DROTR\0"
  /* 22869 */ "G_INTTOPTR\0"
  /* 22880 */ "MTTR\0"
  /* 22885 */ "TLBWR\0"
  /* 22891 */ "TLBGWR\0"
  /* 22898 */ "RDHWR\0"
  /* 22904 */ "LWR\0"
  /* 22908 */ "SWR\0"
  /* 22912 */ "G_FABS\0"
  /* 22919 */ "G_ABS\0"
  /* 22925 */ "G_UNMERGE_VALUES\0"
  /* 22942 */ "G_MERGE_VALUES\0"
  /* 22957 */ "CINS\0"
  /* 22962 */ "DINS\0"
  /* 22967 */ "G_FCOS\0"
  /* 22974 */ "G_CONCAT_VECTORS\0"
  /* 22991 */ "COPY_TO_REGCLASS\0"
  /* 23008 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 23038 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 23065 */ "EXTS\0"
  /* 23070 */ "CVT_D32_S\0"
  /* 23080 */ "CVT_D64_S\0"
  /* 23090 */ "MOVN_I64_S\0"
  /* 23101 */ "MOVZ_I64_S\0"
  /* 23112 */ "MINA_S\0"
  /* 23119 */ "MAXA_S\0"
  /* 23126 */ "FSUB_S\0"
  /* 23133 */ "NMSUB_S\0"
  /* 23141 */ "FADD_S\0"
  /* 23148 */ "NMADD_S\0"
  /* 23156 */ "C_NGE_S\0"
  /* 23164 */ "C_NGLE_S\0"
  /* 23173 */ "C_OLE_S\0"
  /* 23181 */ "CMP_SLE_S\0"
  /* 23191 */ "CMP_SULE_S\0"
  /* 23202 */ "C_ULE_S\0"
  /* 23210 */ "CMP_ULE_S\0"
  /* 23220 */ "C_LE_S\0"
  /* 23227 */ "CMP_LE_S\0"
  /* 23236 */ "CMP_SAF_S\0"
  /* 23246 */ "MSUBF_S\0"
  /* 23254 */ "MADDF_S\0"
  /* 23262 */ "C_SF_S\0"
  /* 23269 */ "MOVF_S\0"
  /* 23276 */ "C_F_S\0"
  /* 23282 */ "PseudoSELECTFP_F_S\0"
  /* 23301 */ "CMP_F_S\0"
  /* 23309 */ "FNEG_S\0"
  /* 23316 */ "MOVN_I_S\0"
  /* 23325 */ "MOVZ_I_S\0"
  /* 23334 */ "SEL_S\0"
  /* 23340 */ "C_NGL_S\0"
  /* 23348 */ "FMUL_S\0"
  /* 23355 */ "TRUNC_L_S\0"
  /* 23365 */ "ROUND_L_S\0"
  /* 23375 */ "CEIL_L_S\0"
  /* 23384 */ "FLOOR_L_S\0"
  /* 23394 */ "CVT_L_S\0"
  /* 23402 */ "MIN_S\0"
  /* 23408 */ "CMP_SUN_S\0"
  /* 23418 */ "C_UN_S\0"
  /* 23425 */ "CMP_UN_S\0"
  /* 23434 */ "RECIP_S\0"
  /* 23442 */ "C_SEQ_S\0"
  /* 23450 */ "CMP_SEQ_S\0"
  /* 23460 */ "CMP_SUEQ_S\0"
  /* 23471 */ "C_UEQ_S\0"
  /* 23479 */ "CMP_UEQ_S\0"
  /* 23489 */ "C_EQ_S\0"
  /* 23496 */ "CMP_EQ_S\0"
  /* 23505 */ "FABS_S\0"
  /* 23512 */ "CLASS_S\0"
  /* 23520 */ "PseudoSELECT_S\0"
  /* 23535 */ "C_NGT_S\0"
  /* 23543 */ "C_OLT_S\0"
  /* 23551 */ "CMP_SLT_S\0"
  /* 23561 */ "CMP_SULT_S\0"
  /* 23572 */ "C_ULT_S\0"
  /* 23580 */ "CMP_ULT_S\0"
  /* 23590 */ "C_LT_S\0"
  /* 23597 */ "CMP_LT_S\0"
  /* 23606 */ "RINT_S\0"
  /* 23613 */ "FSQRT_S\0"
  /* 23621 */ "RSQRT_S\0"
  /* 23629 */ "MOVT_S\0"
  /* 23636 */ "PseudoSELECTFP_T_S\0"
  /* 23655 */ "FDIV_S\0"
  /* 23662 */ "FMOV_S\0"
  /* 23669 */ "PseudoTRUNC_W_S\0"
  /* 23685 */ "ROUND_W_S\0"
  /* 23695 */ "CEIL_W_S\0"
  /* 23704 */ "FLOOR_W_S\0"
  /* 23714 */ "CVT_W_S\0"
  /* 23722 */ "MAX_S\0"
  /* 23728 */ "SELNEZ_S\0"
  /* 23737 */ "SELEQZ_S\0"
  /* 23746 */ "BC1T\0"
  /* 23751 */ "G_SSUBSAT\0"
  /* 23761 */ "G_USUBSAT\0"
  /* 23771 */ "G_SADDSAT\0"
  /* 23781 */ "G_UADDSAT\0"
  /* 23791 */ "G_SSHLSAT\0"
  /* 23801 */ "G_USHLSAT\0"
  /* 23811 */ "G_SMULFIXSAT\0"
  /* 23824 */ "G_UMULFIXSAT\0"
  /* 23837 */ "G_SDIVFIXSAT\0"
  /* 23850 */ "G_UDIVFIXSAT\0"
  /* 23863 */ "G_EXTRACT\0"
  /* 23873 */ "G_SELECT\0"
  /* 23882 */ "G_BRINDIRECT\0"
  /* 23895 */ "DERET\0"
  /* 23901 */ "PATCHABLE_RET\0"
  /* 23915 */ "G_MEMSET\0"
  /* 23924 */ "BGT\0"
  /* 23928 */ "WAIT\0"
  /* 23933 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 23957 */ "G_BRJT\0"
  /* 23964 */ "BLT\0"
  /* 23968 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 23989 */ "G_INSERT_VECTOR_ELT\0"
  /* 24009 */ "SLT\0"
  /* 24013 */ "TLT\0"
  /* 24017 */ "PseudoDMULT\0"
  /* 24029 */ "PseudoMULT\0"
  /* 24040 */ "DMT\0"
  /* 24044 */ "EMT\0"
  /* 24048 */ "G_FCONSTANT\0"
  /* 24060 */ "G_CONSTANT\0"
  /* 24071 */ "STATEPOINT\0"
  /* 24082 */ "PATCHPOINT\0"
  /* 24093 */ "G_PTRTOINT\0"
  /* 24104 */ "G_FRINT\0"
  /* 24112 */ "G_INTRINSIC_LRINT\0"
  /* 24130 */ "G_FNEARBYINT\0"
  /* 24143 */ "G_VASTART\0"
  /* 24153 */ "LIFETIME_START\0"
  /* 24168 */ "G_INSERT\0"
  /* 24177 */ "G_FSQRT\0"
  /* 24185 */ "G_STRICT_FSQRT\0"
  /* 24200 */ "G_BITCAST\0"
  /* 24210 */ "G_ADDRSPACE_CAST\0"
  /* 24227 */ "GINVT\0"
  /* 24233 */ "DEXT\0"
  /* 24238 */ "G_FPEXT\0"
  /* 24246 */ "G_SEXT\0"
  /* 24253 */ "G_ANYEXT\0"
  /* 24262 */ "G_ZEXT\0"
  /* 24269 */ "G_ASSERT_ZEXT\0"
  /* 24283 */ "PseudoMSUBU\0"
  /* 24295 */ "PseudoMADDU\0"
  /* 24307 */ "DMODU\0"
  /* 24313 */ "BGEU\0"
  /* 24318 */ "SGEU\0"
  /* 24323 */ "TGEU\0"
  /* 24328 */ "BLEU\0"
  /* 24333 */ "SLEU\0"
  /* 24338 */ "DMUHU\0"
  /* 24344 */ "TGEIU\0"
  /* 24350 */ "TTLTIU\0"
  /* 24357 */ "V3MULU\0"
  /* 24364 */ "DMULU\0"
  /* 24370 */ "VMULU\0"
  /* 24376 */ "DINSU\0"
  /* 24382 */ "BGTU\0"
  /* 24387 */ "BLTU\0"
  /* 24392 */ "TLTU\0"
  /* 24397 */ "DEXTU\0"
  /* 24403 */ "DDIVU\0"
  /* 24409 */ "DSRAV\0"
  /* 24415 */ "BITREV\0"
  /* 24422 */ "DDIV\0"
  /* 24427 */ "G_FDIV\0"
  /* 24434 */ "G_STRICT_FDIV\0"
  /* 24448 */ "PseudoDSDIV\0"
  /* 24460 */ "G_SDIV\0"
  /* 24467 */ "PseudoSDIV\0"
  /* 24478 */ "PseudoDUDIV\0"
  /* 24490 */ "G_UDIV\0"
  /* 24497 */ "PseudoUDIV\0"
  /* 24508 */ "DSLLV\0"
  /* 24514 */ "DSRLV\0"
  /* 24520 */ "TLBINV\0"
  /* 24527 */ "TLBGINV\0"
  /* 24535 */ "SHILOV\0"
  /* 24542 */ "EXTPDPV\0"
  /* 24550 */ "EXTPV\0"
  /* 24556 */ "DROTRV\0"
  /* 24563 */ "INSV\0"
  /* 24568 */ "AND_V\0"
  /* 24574 */ "MOVE_V\0"
  /* 24581 */ "BSEL_V\0"
  /* 24588 */ "NOR_V\0"
  /* 24594 */ "XOR_V\0"
  /* 24600 */ "BZ_V\0"
  /* 24605 */ "BMZ_V\0"
  /* 24611 */ "BNZ_V\0"
  /* 24617 */ "BMNZ_V\0"
  /* 24624 */ "CRC32W\0"
  /* 24631 */ "CRC32CW\0"
  /* 24639 */ "LW\0"
  /* 24642 */ "G_FPOW\0"
  /* 24649 */ "SW\0"
  /* 24652 */ "PseudoCVT_D32_W\0"
  /* 24668 */ "FLOG2_W\0"
  /* 24676 */ "FEXP2_W\0"
  /* 24684 */ "PseudoCVT_D64_W\0"
  /* 24700 */ "SRA_W\0"
  /* 24706 */ "ADD_A_W\0"
  /* 24714 */ "FMIN_A_W\0"
  /* 24723 */ "ADDS_A_W\0"
  /* 24732 */ "FMAX_A_W\0"
  /* 24741 */ "FSUB_W\0"
  /* 24748 */ "FMSUB_W\0"
  /* 24756 */ "NLOC_W\0"
  /* 24763 */ "NLZC_W\0"
  /* 24770 */ "FADD_W\0"
  /* 24777 */ "FMADD_W\0"
  /* 24785 */ "SLD_W\0"
  /* 24791 */ "PCKOD_W\0"
  /* 24799 */ "ILVOD_W\0"
  /* 24807 */ "FCLE_W\0"
  /* 24814 */ "FSLE_W\0"
  /* 24821 */ "FCULE_W\0"
  /* 24829 */ "FSULE_W\0"
  /* 24837 */ "FCNE_W\0"
  /* 24844 */ "FSNE_W\0"
  /* 24851 */ "FCUNE_W\0"
  /* 24859 */ "FSUNE_W\0"
  /* 24867 */ "INSVE_W\0"
  /* 24875 */ "FCAF_W\0"
  /* 24882 */ "FSAF_W\0"
  /* 24889 */ "VSHF_W\0"
  /* 24896 */ "BNEG_W\0"
  /* 24903 */ "PRECR_SRA_PH_W\0"
  /* 24918 */ "PRECRQ_PH_W\0"
  /* 24930 */ "PRECR_SRA_R_PH_W\0"
  /* 24947 */ "PRECRQ_RS_PH_W\0"
  /* 24962 */ "SUBQH_W\0"
  /* 24970 */ "ADDQH_W\0"
  /* 24978 */ "SRAI_W\0"
  /* 24985 */ "SLDI_W\0"
  /* 24992 */ "BNEGI_W\0"
  /* 25000 */ "SLLI_W\0"
  /* 25007 */ "SRLI_W\0"
  /* 25014 */ "BINSLI_W\0"
  /* 25023 */ "CEQI_W\0"
  /* 25030 */ "SRARI_W\0"
  /* 25038 */ "BCLRI_W\0"
  /* 25046 */ "SRLRI_W\0"
  /* 25054 */ "BINSRI_W\0"
  /* 25063 */ "SPLATI_W\0"
  /* 25072 */ "BSETI_W\0"
  /* 25080 */ "SUBVI_W\0"
  /* 25088 */ "ADDVI_W\0"
  /* 25096 */ "FILL_W\0"
  /* 25103 */ "SLL_W\0"
  /* 25109 */ "FEXUPL_W\0"
  /* 25118 */ "FFQL_W\0"
  /* 25125 */ "SRL_W\0"
  /* 25131 */ "BINSL_W\0"
  /* 25139 */ "FMUL_W\0"
  /* 25146 */ "ILVL_W\0"
  /* 25153 */ "DPAQ_SA_L_W\0"
  /* 25165 */ "DPSQ_SA_L_W\0"
  /* 25177 */ "FMIN_W\0"
  /* 25184 */ "FCUN_W\0"
  /* 25191 */ "FSUN_W\0"
  /* 25198 */ "FEXDO_W\0"
  /* 25206 */ "FRCP_W\0"
  /* 25213 */ "FCEQ_W\0"
  /* 25220 */ "FSEQ_W\0"
  /* 25227 */ "FCUEQ_W\0"
  /* 25235 */ "FSUEQ_W\0"
  /* 25243 */ "FTQ_W\0"
  /* 25249 */ "MSUB_Q_W\0"
  /* 25258 */ "MADD_Q_W\0"
  /* 25267 */ "MUL_Q_W\0"
  /* 25275 */ "MSUBR_Q_W\0"
  /* 25285 */ "MADDR_Q_W\0"
  /* 25295 */ "MULR_Q_W\0"
  /* 25304 */ "SRAR_W\0"
  /* 25311 */ "LDR_W\0"
  /* 25317 */ "BCLR_W\0"
  /* 25324 */ "SRLR_W\0"
  /* 25331 */ "FCOR_W\0"
  /* 25338 */ "FSOR_W\0"
  /* 25345 */ "FEXUPR_W\0"
  /* 25354 */ "FFQR_W\0"
  /* 25361 */ "BINSR_W\0"
  /* 25369 */ "STR_W\0"
  /* 25375 */ "EXTR_W\0"
  /* 25382 */ "ILVR_W\0"
  /* 25389 */ "SHRA_R_W\0"
  /* 25398 */ "SUBQH_R_W\0"
  /* 25408 */ "ADDQH_R_W\0"
  /* 25418 */ "EXTR_R_W\0"
  /* 25427 */ "SHRAV_R_W\0"
  /* 25437 */ "EXTRV_R_W\0"
  /* 25447 */ "FABS_W\0"
  /* 25454 */ "MULQ_RS_W\0"
  /* 25464 */ "EXTR_RS_W\0"
  /* 25474 */ "EXTRV_RS_W\0"
  /* 25485 */ "FCLASS_W\0"
  /* 25494 */ "ASUB_S_W\0"
  /* 25503 */ "HSUB_S_W\0"
  /* 25512 */ "DPSUB_S_W\0"
  /* 25522 */ "FTRUNC_S_W\0"
  /* 25533 */ "HADD_S_W\0"
  /* 25542 */ "DPADD_S_W\0"
  /* 25552 */ "MOD_S_W\0"
  /* 25560 */ "CLE_S_W\0"
  /* 25568 */ "AVE_S_W\0"
  /* 25576 */ "CLEI_S_W\0"
  /* 25585 */ "MINI_S_W\0"
  /* 25594 */ "CLTI_S_W\0"
  /* 25603 */ "MAXI_S_W\0"
  /* 25612 */ "SHLL_S_W\0"
  /* 25621 */ "MIN_S_W\0"
  /* 25629 */ "DOTP_S_W\0"
  /* 25638 */ "SUBQ_S_W\0"
  /* 25647 */ "ADDQ_S_W\0"
  /* 25656 */ "MULQ_S_W\0"
  /* 25665 */ "ABSQ_S_W\0"
  /* 25674 */ "AVER_S_W\0"
  /* 25683 */ "SUBS_S_W\0"
  /* 25692 */ "ADDS_S_W\0"
  /* 25701 */ "SAT_S_W\0"
  /* 25709 */ "CLT_S_W\0"
  /* 25717 */ "FFINT_S_W\0"
  /* 25727 */ "FTINT_S_W\0"
  /* 25737 */ "PseudoCVT_S_W\0"
  /* 25751 */ "SUBSUU_S_W\0"
  /* 25762 */ "DIV_S_W\0"
  /* 25770 */ "SHLLV_S_W\0"
  /* 25780 */ "MAX_S_W\0"
  /* 25788 */ "COPY_S_W\0"
  /* 25797 */ "SPLAT_W\0"
  /* 25805 */ "BSET_W\0"
  /* 25812 */ "FCLT_W\0"
  /* 25819 */ "FSLT_W\0"
  /* 25826 */ "FCULT_W\0"
  /* 25834 */ "FSULT_W\0"
  /* 25842 */ "PCNT_W\0"
  /* 25849 */ "FRINT_W\0"
  /* 25857 */ "INSERT_W\0"
  /* 25866 */ "FSQRT_W\0"
  /* 25874 */ "FRSQRT_W\0"
  /* 25883 */ "ST_W\0"
  /* 25888 */ "ASUB_U_W\0"
  /* 25897 */ "HSUB_U_W\0"
  /* 25906 */ "DPSUB_U_W\0"
  /* 25916 */ "FTRUNC_U_W\0"
  /* 25927 */ "HADD_U_W\0"
  /* 25936 */ "DPADD_U_W\0"
  /* 25946 */ "MOD_U_W\0"
  /* 25954 */ "CLE_U_W\0"
  /* 25962 */ "AVE_U_W\0"
  /* 25970 */ "CLEI_U_W\0"
  /* 25979 */ "MINI_U_W\0"
  /* 25988 */ "CLTI_U_W\0"
  /* 25997 */ "MAXI_U_W\0"
  /* 26006 */ "MIN_U_W\0"
  /* 26014 */ "DOTP_U_W\0"
  /* 26023 */ "AVER_U_W\0"
  /* 26032 */ "SUBS_U_W\0"
  /* 26041 */ "ADDS_U_W\0"
  /* 26050 */ "SUBSUS_U_W\0"
  /* 26061 */ "SAT_U_W\0"
  /* 26069 */ "CLT_U_W\0"
  /* 26077 */ "FFINT_U_W\0"
  /* 26087 */ "FTINT_U_W\0"
  /* 26097 */ "DIV_U_W\0"
  /* 26105 */ "MAX_U_W\0"
  /* 26113 */ "COPY_U_W\0"
  /* 26122 */ "MSUBV_W\0"
  /* 26130 */ "MADDV_W\0"
  /* 26138 */ "PCKEV_W\0"
  /* 26146 */ "ILVEV_W\0"
  /* 26154 */ "FDIV_W\0"
  /* 26161 */ "MULV_W\0"
  /* 26168 */ "EXTRV_W\0"
  /* 26176 */ "FMAX_W\0"
  /* 26183 */ "BZ_W\0"
  /* 26188 */ "BNZ_W\0"
  /* 26194 */ "G_VECREDUCE_FMAX\0"
  /* 26211 */ "G_VECREDUCE_SMAX\0"
  /* 26228 */ "G_SMAX\0"
  /* 26235 */ "G_VECREDUCE_UMAX\0"
  /* 26252 */ "G_UMAX\0"
  /* 26259 */ "G_ATOMICRMW_UMAX\0"
  /* 26276 */ "G_ATOMICRMW_MAX\0"
  /* 26292 */ "MFTACX\0"
  /* 26299 */ "MTTACX\0"
  /* 26306 */ "G_FRAME_INDEX\0"
  /* 26320 */ "LHX\0"
  /* 26324 */ "G_SMULFIX\0"
  /* 26334 */ "G_UMULFIX\0"
  /* 26344 */ "G_SDIVFIX\0"
  /* 26354 */ "G_UDIVFIX\0"
  /* 26364 */ "JALX\0"
  /* 26369 */ "LBUX\0"
  /* 26374 */ "LWX\0"
  /* 26378 */ "G_MEMCPY\0"
  /* 26387 */ "COPY\0"
  /* 26392 */ "CONSTPOOL_ENTRY\0"
  /* 26408 */ "BGEZ\0"
  /* 26413 */ "BLEZ\0"
  /* 26418 */ "BC1NEZ\0"
  /* 26425 */ "BC2NEZ\0"
  /* 26432 */ "SELNEZ\0"
  /* 26439 */ "DCLZ\0"
  /* 26444 */ "G_CTLZ\0"
  /* 26451 */ "BC1EQZ\0"
  /* 26458 */ "BC2EQZ\0"
  /* 26465 */ "SELEQZ\0"
  /* 26472 */ "BGTZ\0"
  /* 26477 */ "BLTZ\0"
  /* 26482 */ "G_CTTZ\0"
  /* 26489 */ "SelBneZ\0"
  /* 26497 */ "SelBeqZ\0"
  /* 26505 */ "JalOneReg\0"
  /* 26515 */ "JalTwoReg\0"
  /* 26525 */ "PseudoIndirectHazardBranch\0"
  /* 26552 */ "PseudoIndirectBranch\0"
  /* 26573 */ "Ulh\0"
  /* 26577 */ "Ush\0"
  /* 26581 */ "DADDi\0"
  /* 26587 */ "ANDi\0"
  /* 26592 */ "SNEi\0"
  /* 26597 */ "SEQi\0"
  /* 26602 */ "XORi\0"
  /* 26607 */ "SLTi\0"
  /* 26612 */ "LONG_BRANCH_LUi\0"
  /* 26628 */ "SelTBtneZCmpi\0"
  /* 26642 */ "SelTBteqZCmpi\0"
  /* 26656 */ "SelTBtneZSlti\0"
  /* 26670 */ "SelTBteqZSlti\0"
  /* 26684 */ "SGEImm\0"
  /* 26691 */ "SLEImm\0"
  /* 26698 */ "DROLImm\0"
  /* 26706 */ "NORImm\0"
  /* 26713 */ "DRORImm\0"
  /* 26721 */ "SGTImm\0"
  /* 26728 */ "SGEUImm\0"
  /* 26736 */ "SLEUImm\0"
  /* 26744 */ "SGTUImm\0"
  /* 26752 */ "BneImm\0"
  /* 26759 */ "BeqImm\0"
  /* 26766 */ "PseudoReturn\0"
  /* 26779 */ "JALRHB64Pseudo\0"
  /* 26794 */ "JALR64Pseudo\0"
  /* 26807 */ "JALRHBPseudo\0"
  /* 26820 */ "JALRPseudo\0"
  /* 26831 */ "B_MMR6_Pseudo\0"
  /* 26845 */ "B_MM_Pseudo\0"
  /* 26857 */ "SDIV_MM_Pseudo\0"
  /* 26872 */ "UDIV_MM_Pseudo\0"
  /* 26887 */ "LDMacro\0"
  /* 26895 */ "SDMacro\0"
  /* 26903 */ "SNEMacro\0"
  /* 26912 */ "SNEIMacro\0"
  /* 26922 */ "SEQIMacro\0"
  /* 26932 */ "DSRemIMacro\0"
  /* 26944 */ "DURemIMacro\0"
  /* 26956 */ "DSDivIMacro\0"
  /* 26968 */ "DUDivIMacro\0"
  /* 26980 */ "DMULMacro\0"
  /* 26990 */ "DMULOMacro\0"
  /* 27001 */ "SEQMacro\0"
  /* 27010 */ "ABSMacro\0"
  /* 27019 */ "DMULOUMacro\0"
  /* 27031 */ "DSRemMacro\0"
  /* 27042 */ "DURemMacro\0"
  /* 27053 */ "BGEImmMacro\0"
  /* 27065 */ "BLEImmMacro\0"
  /* 27077 */ "BGELImmMacro\0"
  /* 27090 */ "BLELImmMacro\0"
  /* 27103 */ "BNELImmMacro\0"
  /* 27116 */ "BEQLImmMacro\0"
  /* 27129 */ "BGTLImmMacro\0"
  /* 27142 */ "BLTLImmMacro\0"
  /* 27155 */ "BGEULImmMacro\0"
  /* 27169 */ "BLEULImmMacro\0"
  /* 27183 */ "DMULImmMacro\0"
  /* 27196 */ "BGTULImmMacro\0"
  /* 27210 */ "BLTULImmMacro\0"
  /* 27224 */ "BGTImmMacro\0"
  /* 27236 */ "BLTImmMacro\0"
  /* 27248 */ "BGEUImmMacro\0"
  /* 27261 */ "BLEUImmMacro\0"
  /* 27274 */ "BGTUImmMacro\0"
  /* 27287 */ "BLTUImmMacro\0"
  /* 27300 */ "DSDivMacro\0"
  /* 27311 */ "DUDivMacro\0"
  /* 27322 */ "LONG_BRANCH_LUi2Op\0"
  /* 27341 */ "LONG_BRANCH_DADDiu2Op\0"
  /* 27363 */ "LONG_BRANCH_ADDiu2Op\0"
  /* 27384 */ "SelTBtneZCmp\0"
  /* 27397 */ "SelTBteqZCmp\0"
  /* 27410 */ "SaaAddr\0"
  /* 27418 */ "SaadAddr\0"
  /* 27427 */ "ERet\0"
  /* 27432 */ "SelTBtneZSlt\0"
  /* 27445 */ "SelTBteqZSlt\0"
  /* 27458 */ "LBu\0"
  /* 27462 */ "DSUBu\0"
  /* 27468 */ "BADDu\0"
  /* 27474 */ "DADDu\0"
  /* 27480 */ "LHu\0"
  /* 27484 */ "SLTu\0"
  /* 27489 */ "PseudoDMULTu\0"
  /* 27502 */ "PseudoMULTu\0"
  /* 27514 */ "LWu\0"
  /* 27518 */ "Ulhu\0"
  /* 27523 */ "LONG_BRANCH_DADDiu\0"
  /* 27542 */ "LEA_ADDiu\0"
  /* 27552 */ "LONG_BRANCH_ADDiu\0"
  /* 27570 */ "SLTiu\0"
  /* 27576 */ "SelTBtneZSltiu\0"
  /* 27591 */ "SelTBteqZSltiu\0"
  /* 27606 */ "SelTBtneZSltu\0"
  /* 27620 */ "SelTBteqZSltu\0"
  /* 27634 */ "Ulw\0"
  /* 27638 */ "Usw\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned MipsInstrNameIndices[] = {
    15235U, 20753U, 22455U, 20996U, 15583U, 15564U, 15592U, 15844U, 
    13604U, 13619U, 13484U, 13658U, 22991U, 13363U, 13502U, 15573U, 
    13128U, 26387U, 13250U, 24153U, 11631U, 13087U, 21950U, 15816U, 
    24082U, 11676U, 22326U, 13721U, 24071U, 13287U, 22076U, 22063U, 
    22489U, 23901U, 23933U, 15748U, 15795U, 15768U, 15624U, 24269U, 
    11514U, 10247U, 15977U, 24460U, 24490U, 16078U, 16085U, 11594U, 
    22790U, 22753U, 13482U, 15233U, 26306U, 13373U, 23863U, 22925U, 
    24168U, 22942U, 22705U, 11133U, 22974U, 24093U, 22869U, 24200U, 
    13406U, 11107U, 11653U, 24112U, 20817U, 22514U, 11387U, 11331U, 
    11361U, 11372U, 11312U, 11342U, 13326U, 13310U, 23008U, 13672U, 
    13689U, 11530U, 10253U, 11600U, 11561U, 22795U, 22759U, 26276U, 
    20947U, 26259U, 20930U, 11470U, 10219U, 13120U, 11644U, 23882U, 
    11019U, 23038U, 24253U, 11125U, 24060U, 24048U, 24143U, 13713U, 
    24246U, 13645U, 24262U, 15709U, 22672U, 22658U, 15702U, 22665U, 
    22037U, 22030U, 23873U, 21053U, 13153U, 21037U, 13112U, 21045U, 
    13145U, 21029U, 13104U, 21942U, 21934U, 13775U, 13767U, 23781U, 
    23771U, 23761U, 23751U, 23801U, 23791U, 26324U, 26334U, 23811U, 
    23824U, 26344U, 26354U, 23837U, 23850U, 11428U, 10198U, 15919U, 
    8452U, 11305U, 24427U, 16057U, 24642U, 15313U, 22353U, 1181U, 
    13706U, 1163U, 0U, 13533U, 24238U, 11097U, 15261U, 15285U, 
    21999U, 22008U, 22912U, 20853U, 13415U, 20797U, 20807U, 13161U, 
    13176U, 20775U, 20786U, 11520U, 15458U, 20899U, 26228U, 20923U, 
    26252U, 22919U, 22443U, 23957U, 23989U, 23968U, 22720U, 26482U, 
    13464U, 26444U, 13446U, 22055U, 21964U, 13344U, 15715U, 22967U, 
    20963U, 24177U, 22691U, 24104U, 24130U, 24210U, 22468U, 13237U, 
    11159U, 11456U, 10205U, 15947U, 24434U, 16064U, 8458U, 24185U, 
    22533U, 22549U, 26378U, 13388U, 23915U, 11435U, 15926U, 11411U, 
    15902U, 26194U, 20865U, 11498U, 15961U, 11578U, 22775U, 22737U, 
    26211U, 20882U, 26235U, 20906U, 27010U, 21012U, 22311U, 21397U, 
    21481U, 21697U, 4016U, 9338U, 860U, 8694U, 3041U, 9016U, 
    8322U, 9653U, 3898U, 9178U, 742U, 8534U, 2871U, 8856U, 
    8210U, 9499U, 3939U, 9233U, 783U, 8589U, 2912U, 8911U, 
    8249U, 9552U, 4096U, 9446U, 940U, 8802U, 3187U, 9124U, 
    8398U, 9757U, 3980U, 9288U, 824U, 8644U, 3005U, 8966U, 
    8288U, 9605U, 3918U, 9205U, 762U, 8561U, 2891U, 8883U, 
    8229U, 9525U, 4056U, 9392U, 900U, 8748U, 3081U, 9070U, 
    8360U, 9705U, 3878U, 9151U, 722U, 8507U, 2851U, 8829U, 
    8191U, 9473U, 4075U, 9418U, 919U, 8774U, 3166U, 9096U, 
    8378U, 9730U, 3959U, 9260U, 803U, 8616U, 2984U, 8938U, 
    8268U, 9578U, 4036U, 9365U, 880U, 8721U, 3061U, 9043U, 
    8341U, 9679U, 4000U, 9315U, 844U, 8671U, 3025U, 8993U, 
    8307U, 9631U, 9813U, 22448U, 19331U, 27116U, 13204U, 27053U, 
    15609U, 27077U, 24313U, 27248U, 15885U, 27155U, 23924U, 27224U, 
    15875U, 27129U, 24382U, 27274U, 15983U, 27196U, 13246U, 27065U, 
    15614U, 27090U, 24328U, 27261U, 15891U, 27169U, 23964U, 27236U, 
    15880U, 27142U, 24387U, 27287U, 15989U, 27210U, 27103U, 21095U, 
    21383U, 21276U, 21576U, 21467U, 21683U, 17523U, 26831U, 26845U, 
    26759U, 26752U, 4620U, 4167U, 4648U, 4197U, 4678U, 4709U, 
    4606U, 4152U, 4634U, 4182U, 4662U, 4694U, 2729U, 3499U, 
    122U, 26392U, 21323U, 21623U, 140U, 1120U, 27183U, 26980U, 
    26990U, 27019U, 15854U, 26698U, 22700U, 26713U, 26956U, 27300U, 
    26932U, 27031U, 26968U, 27311U, 26944U, 27042U, 27427U, 2742U, 
    3515U, 12379U, 25447U, 21061U, 21078U, 21291U, 21591U, 4767U, 
    21111U, 21767U, 21158U, 21810U, 21306U, 21134U, 21788U, 21606U, 
    21204U, 21852U, 21181U, 21831U, 21228U, 21874U, 26794U, 26779U, 
    26807U, 26820U, 6904U, 26505U, 26515U, 26887U, 12308U, 25311U, 
    3864U, 8166U, 2020U, 22088U, 22173U, 27552U, 27363U, 27523U, 
    27341U, 26612U, 27322U, 3545U, 18875U, 1088U, 3755U, 1055U, 
    3567U, 1078U, 3745U, 22572U, 1035U, 22824U, 22589U, 22841U, 
    1118U, 26292U, 43U, 128U, 22129U, 22810U, 103U, 15239U, 
    21917U, 1102U, 3784U, 21338U, 21638U, 21361U, 21661U, 26299U, 
    55U, 146U, 22136U, 22817U, 110U, 15250U, 21928U, 27184U, 
    26991U, 27020U, 5027U, 5160U, 5059U, 5212U, 22046U, 26706U, 
    3678U, 21412U, 21496U, 21712U, 21413U, 21497U, 21713U, 9993U, 
    9895U, 10108U, 13937U, 13832U, 14097U, 24652U, 16027U, 24684U, 
    16043U, 25737U, 24017U, 27489U, 24448U, 24478U, 15387U, 3100U, 
    26552U, 3610U, 5272U, 8143U, 20615U, 7937U, 26525U, 3581U, 
    5242U, 8115U, 11487U, 24295U, 20059U, 17855U, 15209U, 2790U, 
    18507U, 21900U, 3235U, 18896U, 10236U, 24283U, 20044U, 17786U, 
    15220U, 2803U, 22213U, 18521U, 24029U, 20023U, 27502U, 20716U, 
    13866U, 9930U, 26766U, 3769U, 24467U, 379U, 2338U, 15350U, 
    2941U, 23282U, 611U, 2627U, 15426U, 3145U, 23636U, 526U, 
    2542U, 15404U, 3119U, 23520U, 13031U, 650U, 23669U, 24497U, 
    15855U, 26699U, 22701U, 26714U, 9783U, 3849U, 203U, 26857U, 
    26895U, 26957U, 27301U, 26922U, 27001U, 13208U, 26684U, 3660U, 
    24318U, 26728U, 3705U, 26721U, 3687U, 26744U, 3725U, 13261U, 
    26691U, 3669U, 24333U, 26736U, 3715U, 3696U, 3735U, 26912U, 
    26903U, 21251U, 21442U, 21526U, 21551U, 21742U, 26933U, 27032U, 
    8178U, 2031U, 22102U, 22188U, 12366U, 25369U, 3871U, 18882U, 
    21264U, 21455U, 21539U, 21564U, 21755U, 27410U, 27418U, 26497U, 
    26489U, 27397U, 26642U, 27445U, 26670U, 27591U, 27620U, 27384U, 
    26628U, 27432U, 26656U, 27576U, 27606U, 4972U, 4431U, 4446U, 
    4984U, 5199U, 15723U, 13558U, 13540U, 13574U, 13590U, 13633U, 
    2760U, 9831U, 1976U, 18066U, 6781U, 18806U, 6913U, 21959U, 
    18927U, 26872U, 26969U, 27312U, 26945U, 27043U, 26573U, 27518U, 
    27634U, 26577U, 27638U, 21427U, 21511U, 21727U, 14056U, 18322U, 
    10053U, 1329U, 25665U, 20490U, 11407U, 11194U, 17808U, 5958U, 
    19007U, 16755U, 17168U, 19179U, 7823U, 13857U, 1432U, 13974U, 
    1487U, 25408U, 1845U, 24970U, 1817U, 13929U, 18218U, 14036U, 
    18309U, 25647U, 20478U, 3353U, 11218U, 17819U, 10291U, 11749U, 
    14336U, 24723U, 10699U, 12548U, 14825U, 25692U, 10891U, 12913U, 
    15074U, 26041U, 17385U, 5698U, 9921U, 1234U, 10031U, 1297U, 
    7793U, 14121U, 1575U, 10133U, 17709U, 14076U, 1547U, 10073U, 
    17656U, 10505U, 12113U, 14521U, 25088U, 10961U, 12994U, 15144U, 
    26131U, 11251U, 17828U, 10275U, 11732U, 14320U, 24706U, 17862U, 
    6180U, 26582U, 20639U, 27536U, 20735U, 27469U, 20693U, 20840U, 
    6971U, 11187U, 5946U, 11574U, 17196U, 5539U, 2154U, 17223U, 
    5572U, 10380U, 6836U, 17869U, 6189U, 24568U, 26587U, 3633U, 
    20647U, 11624U, 1389U, 10604U, 12395U, 14674U, 25494U, 10796U, 
    12760U, 14932U, 25888U, 15281U, 11181U, 5935U, 6864U, 10681U, 
    12530U, 14798U, 25674U, 10873U, 12895U, 15056U, 26023U, 10629U, 
    12469U, 14737U, 25568U, 10821U, 12834U, 14995U, 25962U, 4499U, 
    4375U, 4883U, 4527U, 4324U, 4823U, 4391U, 5186U, 5125U, 
    17180U, 27468U, 15468U, 11031U, 5814U, 20839U, 1750U, 76U, 
    222U, 216U, 230U, 11002U, 5479U, 26451U, 6121U, 13441U, 
    15644U, 18038U, 26418U, 6084U, 23746U, 15869U, 19984U, 26458U, 
    6134U, 26425U, 6097U, 10441U, 12063U, 14471U, 25038U, 10575U, 
    12314U, 14645U, 25317U, 5777U, 22360U, 3255U, 11213U, 2071U, 
    5981U, 15859U, 17430U, 11066U, 5874U, 11275U, 5526U, 2130U, 
    17846U, 6147U, 19228U, 11005U, 2043U, 5785U, 11229U, 2090U, 
    6020U, 26408U, 3453U, 15476U, 11042U, 5835U, 15828U, 19500U, 
    18641U, 11257U, 2106U, 6062U, 16003U, 20576U, 26472U, 3485U, 
    11074U, 5887U, 11281U, 2138U, 6158U, 16015U, 20599U, 10417U, 
    12039U, 14447U, 25014U, 10547U, 12162U, 14548U, 25131U, 10471U, 
    12079U, 14487U, 25054U, 10589U, 12358U, 14659U, 25361U, 24415U, 
    20123U, 21973U, 6991U, 26413U, 3460U, 11050U, 5848U, 11263U, 
    2114U, 6073U, 16009U, 20584U, 11224U, 2083U, 6010U, 11235U, 
    2098U, 6031U, 26477U, 3492U, 15483U, 11082U, 5900U, 15836U, 
    19511U, 18651U, 11287U, 2146U, 6169U, 16021U, 20607U, 10520U, 
    24617U, 10513U, 24605U, 13275U, 2723U, 11010U, 2050U, 5795U, 
    10387U, 12017U, 14425U, 24992U, 10359U, 11996U, 14404U, 24896U, 
    15619U, 17420U, 11058U, 5861U, 11269U, 5513U, 2122U, 17837U, 
    6110U, 17969U, 11241U, 6042U, 10996U, 13068U, 15179U, 24611U, 
    26188U, 11246U, 6052U, 713U, 1909U, 16697U, 15447U, 17251U, 
    5594U, 18625U, 6893U, 10395U, 24581U, 10489U, 12097U, 14505U, 
    25072U, 10768U, 12637U, 14904U, 25805U, 10991U, 13054U, 15174U, 
    24600U, 26183U, 4910U, 4556U, 4922U, 4569U, 4898U, 4543U, 
    4809U, 5234U, 4733U, 5226U, 4724U, 13216U, 13191U, 17897U, 
    17923U, 6724U, 8059U, 2433U, 6387U, 23375U, 7371U, 680U, 
    2690U, 6656U, 20316U, 23695U, 19948U, 7652U, 10426U, 12048U, 
    14456U, 25023U, 10562U, 12232U, 14571U, 25214U, 92U, 16146U, 
    16739U, 9794U, 22957U, 982U, 1015U, 1069U, 12387U, 6529U, 
    23512U, 7513U, 10637U, 12477U, 14745U, 25576U, 10829U, 12842U, 
    15003U, 25970U, 10621U, 12461U, 14729U, 25560U, 10813U, 12826U, 
    14987U, 25954U, 21896U, 18889U, 6982U, 8091U, 10655U, 12495U, 
    14763U, 25594U, 10847U, 12860U, 15021U, 25988U, 10716U, 12565U, 
    14842U, 25709U, 10919U, 12941U, 15102U, 26069U, 26440U, 20592U, 
    7916U, 8108U, 9968U, 1248U, 9870U, 1202U, 10083U, 1344U, 
    9981U, 17614U, 9883U, 17541U, 10096U, 17669U, 9999U, 17629U, 
    9901U, 17556U, 10114U, 17684U, 6306U, 7266U, 12292U, 6515U, 
    13943U, 18229U, 23496U, 7499U, 11988U, 23301U, 11894U, 6277U, 
    13838U, 18148U, 23227U, 7237U, 12705U, 6588U, 14103U, 18349U, 
    23597U, 7572U, 11955U, 6291U, 23236U, 7251U, 12245U, 6469U, 
    23450U, 7453U, 11847U, 6231U, 23181U, 7191U, 12658U, 6542U, 
    23551U, 7526U, 12271U, 6484U, 23460U, 7468U, 11873U, 6246U, 
    23191U, 7206U, 12684U, 6557U, 23561U, 7541U, 12205U, 6440U, 
    23408U, 7424U, 12282U, 6500U, 23479U, 7484U, 11884U, 6262U, 
    23210U, 7222U, 12695U, 6573U, 23580U, 7557U, 12215U, 6455U, 
    23425U, 7439U, 10751U, 12620U, 14887U, 25788U, 10943U, 15126U, 
    26113U, 9808U, 9815U, 11394U, 13755U, 24631U, 11293U, 13738U, 
    24624U, 117U, 16162U, 16747U, 9801U, 23070U, 19546U, 24658U, 
    20235U, 16033U, 23080U, 19559U, 24690U, 20248U, 6945U, 2456U, 
    16953U, 6416U, 23394U, 19753U, 7400U, 3436U, 3403U, 3391U, 
    516U, 16558U, 2532U, 17041U, 16049U, 6958U, 3212U, 3420U, 
    25743U, 20502U, 7891U, 703U, 16684U, 2713U, 17155U, 23714U, 
    19973U, 7681U, 498U, 16534U, 2514U, 17017U, 23489U, 19807U, 
    371U, 16395U, 2330U, 16905U, 23276U, 19689U, 344U, 16359U, 
    2303U, 16881U, 23220U, 19659U, 573U, 16610U, 2589U, 17093U, 
    23590U, 19860U, 303U, 16306U, 2262U, 16828U, 23156U, 19614U, 
    313U, 16319U, 2272U, 16841U, 23164U, 19625U, 431U, 16446U, 
    2390U, 16928U, 23340U, 19732U, 543U, 16571U, 2559U, 17054U, 
    23535U, 19827U, 324U, 16333U, 2283U, 16855U, 23173U, 19637U, 
    553U, 16584U, 2569U, 17067U, 23543U, 19838U, 478U, 16508U, 
    2494U, 16991U, 23442U, 19785U, 353U, 16371U, 2312U, 16893U, 
    23262U, 19669U, 488U, 16521U, 2504U, 17004U, 23471U, 19796U, 
    334U, 16346U, 2293U, 16868U, 23202U, 19648U, 563U, 16597U, 
    2579U, 17080U, 23572U, 19849U, 450U, 16471U, 2466U, 16966U, 
    23418U, 19764U, 5007U, 4846U, 4473U, 11406U, 26581U, 27535U, 
    27474U, 15204U, 20846U, 15270U, 15280U, 21972U, 21895U, 8090U, 
    26439U, 8107U, 24422U, 24403U, 23895U, 19992U, 7733U, 24233U, 
    1025U, 20769U, 24397U, 15191U, 22962U, 20763U, 24376U, 24423U, 
    24404U, 7844U, 7854U, 10735U, 12604U, 14861U, 25762U, 10927U, 
    12969U, 15110U, 26097U, 18485U, 6838U, 9789U, 8022U, 9U, 
    97U, 1141U, 20970U, 15U, 11671U, 24307U, 24040U, 49U, 
    134U, 1147U, 20983U, 36U, 14309U, 24338U, 15897U, 24023U, 
    27495U, 24364U, 8082U, 12521U, 14789U, 25629U, 12886U, 15047U, 
    26014U, 12443U, 14711U, 25542U, 12808U, 14969U, 25936U, 14185U, 
    1632U, 14260U, 1684U, 25153U, 20326U, 14222U, 18398U, 15534U, 
    18714U, 22421U, 19303U, 14286U, 1720U, 14165U, 1602U, 22050U, 
    14199U, 1651U, 14273U, 1702U, 25165U, 20341U, 14248U, 18430U, 
    12413U, 14692U, 25512U, 12778U, 14950U, 25906U, 15545U, 18728U, 
    22432U, 19317U, 14296U, 1735U, 14213U, 1670U, 22863U, 974U, 
    24556U, 13745U, 24454U, 11546U, 15849U, 960U, 1005U, 24508U, 
    8502U, 238U, 24409U, 15864U, 967U, 24514U, 10193U, 27462U, 
    24484U, 22345U, 13300U, 7063U, 5093U, 5071U, 9827U, 17528U, 
    5729U, 15196U, 18493U, 6846U, 24044U, 23896U, 11090U, 5913U, 
    19993U, 7734U, 22349U, 13305U, 7072U, 24234U, 22306U, 21992U, 
    24542U, 20186U, 18952U, 24550U, 20197U, 19206U, 25474U, 20440U, 
    25437U, 20414U, 14869U, 18463U, 26168U, 20526U, 25464U, 20427U, 
    25418U, 20389U, 14807U, 18451U, 25375U, 20367U, 23065U, 989U, 
    20037U, 7765U, 507U, 16546U, 2523U, 17029U, 23505U, 19817U, 
    11796U, 284U, 16281U, 2243U, 16816U, 3315U, 23141U, 19593U, 
    7179U, 24770U, 11941U, 24875U, 12231U, 25213U, 12386U, 25485U, 
    11833U, 24807U, 12644U, 25812U, 469U, 16496U, 2485U, 996U, 
    16727U, 11903U, 24837U, 12328U, 25331U, 12255U, 25227U, 11857U, 
    24821U, 12668U, 25826U, 11917U, 24851U, 12191U, 25184U, 13017U, 
    632U, 16660U, 2648U, 17131U, 23655U, 19902U, 7598U, 26154U, 
    14563U, 25198U, 11704U, 24676U, 12140U, 25109U, 12342U, 25345U, 
    12573U, 25717U, 12949U, 26077U, 12149U, 25118U, 12351U, 25354U, 
    10528U, 12127U, 14529U, 25096U, 11696U, 24668U, 2444U, 6401U, 
    23384U, 7385U, 691U, 2701U, 6670U, 20356U, 23704U, 19960U, 
    7666U, 11803U, 24777U, 11758U, 24732U, 13047U, 26176U, 11740U, 
    24714U, 12184U, 25177U, 641U, 16672U, 2657U, 17143U, 6614U, 
    23662U, 19912U, 7610U, 11774U, 24748U, 12170U, 441U, 16459U, 
    2400U, 16941U, 3334U, 23348U, 19743U, 7329U, 25139U, 400U, 
    16406U, 2359U, 16916U, 23309U, 19698U, 7306U, 15453U, 12224U, 
    25206U, 12721U, 25849U, 12746U, 25874U, 11948U, 24882U, 12238U, 
    25220U, 11840U, 24814U, 12651U, 25819U, 11910U, 24844U, 12335U, 
    25338U, 12738U, 582U, 16622U, 2598U, 17105U, 23613U, 19870U, 
    25866U, 11767U, 265U, 16256U, 2224U, 16804U, 3305U, 23126U, 
    19572U, 7167U, 24741U, 12263U, 25235U, 11865U, 24829U, 12676U, 
    25834U, 11925U, 24859U, 12198U, 25191U, 12583U, 25727U, 12959U, 
    26087U, 14577U, 25243U, 12423U, 25522U, 12788U, 25916U, 15294U, 
    6882U, 24227U, 7754U, 12434U, 14702U, 25533U, 12799U, 14960U, 
    25927U, 12404U, 14683U, 25503U, 12769U, 14941U, 25897U, 15732U, 
    18818U, 10976U, 13009U, 15159U, 26146U, 10555U, 12177U, 14556U, 
    25146U, 10336U, 11825U, 14381U, 24799U, 10597U, 12372U, 14667U, 
    25382U, 22958U, 10782U, 12729U, 14918U, 25857U, 24563U, 10344U, 
    11933U, 14389U, 24867U, 20215U, 19522U, 7134U, 15445U, 15472U, 
    22682U, 17327U, 3266U, 5500U, 5738U, 5991U, 17346U, 19529U, 
    9851U, 2000U, 19420U, 19492U, 26364U, 20553U, 18634U, 11036U, 
    2063U, 5824U, 11015U, 2057U, 5805U, 22679U, 17319U, 3261U, 
    22296U, 17187U, 5489U, 7037U, 9845U, 1992U, 7995U, 8030U, 
    19414U, 18620U, 4817U, 3857U, 4750U, 4742U, 4956U, 4788U, 
    9859U, 2010U, 13083U, 17876U, 17366U, 26369U, 20561U, 7774U, 
    17535U, 5752U, 27458U, 3800U, 13431U, 18022U, 20678U, 11554U, 
    82U, 1924U, 5441U, 16130U, 1131U, 5359U, 7963U, 1889U, 
    10374U, 12011U, 14419U, 24986U, 15556U, 11176U, 22481U, 162U, 
    1938U, 10323U, 11812U, 14368U, 24786U, 27542U, 3819U, 20731U, 
    13772U, 2780U, 13222U, 17932U, 17395U, 26320U, 20546U, 18096U, 
    27480U, 3806U, 13436U, 18030U, 20701U, 17243U, 5584U, 15729U, 
    3207U, 8014U, 11557U, 8052U, 13257U, 17946U, 18812U, 6919U, 
    8076U, 9790U, 5720U, 8023U, 6873U, 174U, 1954U, 16194U, 
    26624U, 3654U, 20671U, 24639U, 17404U, 3431U, 152U, 16178U, 
    1153U, 5421U, 7979U, 1899U, 22143U, 19038U, 13398U, 18008U, 
    18980U, 15995U, 3223U, 13265U, 17953U, 18861U, 17280U, 5629U, 
    16709U, 11208U, 5971U, 19214U, 22904U, 3293U, 13334U, 17983U, 
    19478U, 19190U, 11202U, 20108U, 26374U, 186U, 16212U, 19538U, 
    20569U, 20223U, 7875U, 27514U, 4226U, 4290U, 4258U, 4307U, 
    4836U, 4577U, 4462U, 4936U, 4593U, 4343U, 4405U, 11493U, 
    11973U, 6333U, 23254U, 7293U, 14619U, 25285U, 24301U, 22276U, 
    19153U, 20065U, 10960U, 12993U, 15143U, 26130U, 294U, 16294U, 
    2253U, 22164U, 19068U, 17861U, 14592U, 25258U, 23149U, 19604U, 
    15650U, 18742U, 22606U, 19350U, 15676U, 18774U, 22632U, 19382U, 
    11725U, 6219U, 23119U, 7155U, 10664U, 12504U, 14772U, 25603U, 
    10856U, 12869U, 15030U, 25997U, 10300U, 11759U, 14345U, 24733U, 
    13048U, 6685U, 23722U, 10743U, 12612U, 14879U, 7694U, 25780U, 
    10935U, 12977U, 15118U, 26105U, 10U, 5297U, 98U, 2160U, 
    16154U, 5339U, 1142U, 5379U, 16U, 16092U, 5307U, 245U, 
    16230U, 2169U, 16766U, 5389U, 22U, 16101U, 15215U, 17233U, 
    2796U, 22204U, 19080U, 18513U, 21906U, 17298U, 3241U, 22239U, 
    19104U, 18902U, 22858U, 11712U, 6207U, 23112U, 7143U, 10646U, 
    12486U, 14754U, 25585U, 10838U, 12851U, 15012U, 25979U, 10283U, 
    11741U, 14328U, 24715U, 12185U, 6429U, 23402U, 10673U, 12513U, 
    14781U, 7413U, 25621U, 10865U, 12878U, 15039U, 26006U, 11672U, 
    10191U, 17776U, 24308U, 7803U, 6198U, 10613U, 12453U, 14721U, 
    25552U, 10805U, 12818U, 14979U, 25946U, 17205U, 5550U, 18962U, 
    7015U, 24574U, 362U, 16383U, 2321U, 15343U, 2932U, 18580U, 
    23269U, 19679U, 2198U, 15321U, 2825U, 23090U, 409U, 16418U, 
    2368U, 15369U, 2962U, 18590U, 23316U, 19708U, 602U, 16648U, 
    2618U, 15419U, 3136U, 18600U, 23629U, 19892U, 2211U, 15332U, 
    2838U, 23101U, 420U, 16432U, 2379U, 15378U, 2973U, 18610U, 
    23325U, 19720U, 10242U, 11965U, 6320U, 23246U, 7280U, 14609U, 
    25275U, 24289U, 22266U, 19140U, 20050U, 10952U, 12985U, 15135U, 
    26122U, 275U, 16269U, 2234U, 22155U, 19056U, 17792U, 14583U, 
    25249U, 23134U, 19583U, 50U, 5329U, 135U, 2189U, 16792U, 
    16170U, 5349U, 1148U, 5411U, 37U, 16121U, 5318U, 255U, 
    16243U, 2179U, 16779U, 5400U, 29U, 16111U, 15245U, 2818U, 
    22230U, 19092U, 18537U, 22023U, 18988U, 21923U, 3248U, 22248U, 
    19116U, 18919U, 66U, 198U, 1171U, 71U, 211U, 1176U, 
    22880U, 14310U, 24339U, 7813U, 6816U, 15898U, 15688U, 18789U, 
    22644U, 19397U, 15490U, 18661U, 22377U, 19250U, 13996U, 18269U, 
    25454U, 1860U, 14046U, 1517U, 25656U, 1875U, 3363U, 14629U, 
    25295U, 14234U, 18413U, 14174U, 1616U, 24024U, 22286U, 19166U, 
    22257U, 19128U, 20029U, 27496U, 20722U, 24359U, 7834U, 10984U, 
    13024U, 15167U, 26161U, 18854U, 6936U, 13914U, 1459U, 14601U, 
    25267U, 8083U, 14017U, 1503U, 4802U, 4929U, 4116U, 3839U, 
    10308U, 11782U, 14353U, 24756U, 10315U, 11789U, 14360U, 24763U, 
    293U, 16293U, 2252U, 23148U, 19603U, 274U, 16268U, 2233U, 
    23133U, 19582U, 22687U, 3273U, 10457U, 19428U, 7081U, 24588U, 
    17357U, 5675U, 4997U, 5038U, 22688U, 17338U, 5665U, 3274U, 
    10458U, 6855U, 19429U, 7082U, 24589U, 26603U, 3641U, 20656U, 
    5137U, 13904U, 18194U, 13357U, 17999U, 6747U, 10968U, 13001U, 
    15151U, 26138U, 10328U, 11817U, 14373U, 24791U, 10775U, 12714U, 
    14911U, 25842U, 13872U, 18161U, 9936U, 17570U, 3325U, 3373U, 
    22051U, 15519U, 8436U, 17458U, 18696U, 22406U, 8486U, 17495U, 
    19285U, 15663U, 18758U, 22619U, 19366U, 15505U, 8421U, 17440U, 
    18679U, 22392U, 8471U, 17477U, 19268U, 13816U, 18129U, 24918U, 
    20283U, 13791U, 18113U, 24947U, 20298U, 13804U, 1401U, 24903U, 
    1762U, 24930U, 1782U, 13497U, 13198U, 17907U, 20537U, 18046U, 
    6758U, 8068U, 11616U, 1376U, 3344U, 3382U, 10177U, 17756U, 
    22117U, 19020U, 22898U, 3285U, 19469U, 7123U, 7099U, 459U, 
    16483U, 2475U, 16978U, 23434U, 19774U, 14147U, 18386U, 10159U, 
    17732U, 13888U, 18183U, 9952U, 17592U, 12722U, 6602U, 23606U, 
    7586U, 22864U, 24557U, 20206U, 19442U, 2421U, 6372U, 23365U, 
    7356U, 668U, 2678U, 6641U, 20272U, 23685U, 19935U, 7637U, 
    592U, 16635U, 2608U, 17118U, 23621U, 19881U, 4757U, 4133U, 
    8417U, 11300U, 10708U, 12557U, 14834U, 25701U, 10911U, 12933U, 
    15094U, 26061U, 10188U, 17179U, 5469U, 2015U, 13100U, 17883U, 
    17770U, 5760U, 11221U, 2078U, 8006U, 11402U, 8045U, 13141U, 
    17890U, 17822U, 6002U, 8039U, 11693U, 21981U, 17308U, 5651U, 
    18935U, 7004U, 8098U, 87U, 1931U, 5455U, 16138U, 1136U, 
    5369U, 7971U, 1894U, 24455U, 20133U, 15560U, 22485U, 168U, 
    1946U, 9823U, 1970U, 17521U, 13763U, 2774U, 18089U, 26465U, 
    3476U, 13074U, 6710U, 7925U, 23737U, 7719U, 26432U, 3467U, 
    13059U, 6696U, 7904U, 23728U, 7705U, 12121U, 6346U, 23334U, 
    7318U, 22364U, 26597U, 14306U, 17215U, 5562U, 2785U, 13226U, 
    17939U, 10353U, 14398U, 24890U, 21911U, 24535U, 20176U, 18910U, 
    14138U, 18374U, 10150U, 17720U, 14086U, 18335U, 25770U, 20513U, 
    13880U, 18172U, 9944U, 17581U, 14007U, 18283U, 25612U, 20454U, 
    14129U, 18362U, 10141U, 1362U, 13985U, 18255U, 10042U, 1313U, 
    25427U, 20401U, 13783U, 18102U, 9862U, 1189U, 13953U, 18242U, 
    10010U, 1266U, 25389U, 20377U, 14156U, 1588U, 10168U, 17744U, 
    13896U, 1446U, 9960U, 17603U, 18445U, 6808U, 13230U, 6735U, 
    10373U, 12010U, 14418U, 24985U, 10322U, 11811U, 14367U, 24785U, 
    15850U, 17262U, 5607U, 1006U, 3536U, 10403U, 12025U, 14433U, 
    25000U, 24509U, 20149U, 10535U, 12134U, 14536U, 18840U, 6927U, 
    25103U, 24009U, 3414U, 20009U, 26607U, 3647U, 20663U, 27570U, 
    3831U, 20744U, 27484U, 3812U, 20708U, 13279U, 26592U, 10480U, 
    12088U, 14496U, 25063U, 10760U, 12629U, 14896U, 25797U, 8503U, 
    10366U, 12003U, 14411U, 24978U, 10433U, 12055U, 14463U, 25030U, 
    10568U, 12301U, 14638U, 25304U, 24410U, 20115U, 10269U, 11719U, 
    14314U, 17514U, 24700U, 15865U, 17271U, 5618U, 10410U, 12032U, 
    14440U, 25007U, 10449U, 12071U, 14479U, 25046U, 10582U, 12321U, 
    14652U, 25324U, 24515U, 20157U, 10541U, 12156U, 14542U, 18847U, 
    25125U, 22044U, 18998U, 7026U, 10791U, 12755U, 14927U, 25883U, 
    10194U, 13848U, 1418U, 13963U, 1471U, 25398U, 1830U, 24962U, 
    1804U, 13921U, 18207U, 14026U, 18296U, 25638U, 20466U, 10900U, 
    12922U, 15083U, 26050U, 10724U, 12593U, 14850U, 25751U, 10690U, 
    12539U, 14816U, 25683U, 10882U, 12904U, 15065U, 26032U, 17375U, 
    5686U, 9912U, 1220U, 10020U, 1281U, 7783U, 14113U, 1562U, 
    10125U, 17698U, 14066U, 1532U, 10063U, 17643U, 10497U, 12105U, 
    14513U, 25080U, 10953U, 12986U, 15136U, 26123U, 17779U, 5768U, 
    27463U, 20685U, 180U, 1962U, 16203U, 24649U, 17412U, 5710U, 
    3448U, 157U, 16186U, 1158U, 5431U, 7987U, 1904U, 22149U, 
    19047U, 13402U, 18015U, 15999U, 3229U, 13270U, 17961U, 18868U, 
    17289U, 5640U, 16718U, 19221U, 22908U, 3299U, 13339U, 17991U, 
    19485U, 19198U, 7053U, 192U, 16221U, 20229U, 7883U, 11154U, 
    15185U, 18476U, 6825U, 17800U, 5925U, 15740U, 18829U, 4781U, 
    4144U, 4242U, 4948U, 4964U, 4274U, 4212U, 5103U, 5017U, 
    4858U, 4486U, 4870U, 4513U, 5048U, 4126U, 5082U, 4219U, 
    5114U, 5173U, 4359U, 4418U, 22368U, 15256U, 18545U, 19235U, 
    13212U, 15194U, 24344U, 20082U, 18491U, 24323U, 20074U, 17916U, 
    24527U, 13524U, 18054U, 20165U, 22017U, 18971U, 22566U, 19341U, 
    15306U, 18570U, 22891U, 19459U, 24520U, 13516U, 6768U, 7863U, 
    21987U, 18944U, 22372U, 19242U, 15300U, 18561U, 22885U, 19450U, 
    24013U, 15275U, 20091U, 18553U, 24392U, 20100U, 20016U, 13283U, 
    15199U, 18499U, 17976U, 2409U, 6357U, 23355U, 7341U, 656U, 
    2666U, 6626U, 20261U, 23675U, 19922U, 7622U, 24350U, 24485U, 
    20141U, 24357U, 61U, 24370U, 10352U, 11981U, 14397U, 24889U, 
    23928U, 20001U, 7744U, 22123U, 19029U, 7111U, 13750U, 18081U, 
    6798U, 22749U, 17337U, 5664U, 3279U, 10464U, 6854U, 19435U, 
    7090U, 24594U, 26602U, 3640U, 20655U, 5148U, 11551U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, nullptr, nullptr, 2823);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfo {
  explicit MipsGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~MipsGenInstrInfo() override = default;

};
} // end namespace llvm
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_HELPER_DECLS
#undef GET_INSTRINFO_HELPER_DECLS


#endif // GET_INSTRINFO_HELPER_DECLS

#ifdef GET_INSTRINFO_HELPERS
#undef GET_INSTRINFO_HELPERS

#endif // GET_INSTRINFO_HELPERS

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, nullptr, nullptr, 2823);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace Mips {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace Mips
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace Mips {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace Mips
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace Mips {
namespace OpTypes {
enum OperandType {
  InvertedImOperand = 0,
  InvertedImOperand64 = 1,
  PtrRC = 2,
  brtarget = 3,
  brtarget10_mm = 4,
  brtarget1SImm16 = 5,
  brtarget21 = 6,
  brtarget21_mm = 7,
  brtarget26 = 8,
  brtarget26_mm = 9,
  brtarget7_mm = 10,
  brtarget_lsl2_mm = 11,
  brtarget_mm = 12,
  brtargetr6 = 13,
  calloffset16 = 14,
  calltarget = 15,
  calltarget_mm = 16,
  condcode = 17,
  cpinst_operand = 18,
  f32imm = 19,
  f64imm = 20,
  i16imm = 21,
  i1imm = 22,
  i32imm = 23,
  i64imm = 24,
  i8imm = 25,
  imm64 = 26,
  jmpoffset16 = 27,
  jmptarget = 28,
  jmptarget_mm = 29,
  li16_imm = 30,
  mem = 31,
  mem16 = 32,
  mem16_ea = 33,
  mem16sp = 34,
  mem_ea = 35,
  mem_mm_11 = 36,
  mem_mm_12 = 37,
  mem_mm_16 = 38,
  mem_mm_4 = 39,
  mem_mm_4_lsl1 = 40,
  mem_mm_4_lsl2 = 41,
  mem_mm_4sp = 42,
  mem_mm_9 = 43,
  mem_mm_gp_simm7_lsl2 = 44,
  mem_mm_sp_imm5_lsl2 = 45,
  mem_msa = 46,
  mem_simm10 = 47,
  mem_simm10_lsl1 = 48,
  mem_simm10_lsl2 = 49,
  mem_simm10_lsl3 = 50,
  mem_simm11 = 51,
  mem_simm12 = 52,
  mem_simm16 = 53,
  mem_simm9 = 54,
  mem_simm9_exp = 55,
  mem_simmptr = 56,
  pcrel16 = 57,
  ptype0 = 58,
  ptype1 = 59,
  ptype2 = 60,
  ptype3 = 61,
  ptype4 = 62,
  ptype5 = 63,
  reglist = 64,
  reglist16 = 65,
  simm10 = 66,
  simm10_64 = 67,
  simm10_lsl1 = 68,
  simm10_lsl2 = 69,
  simm10_lsl3 = 70,
  simm11 = 71,
  simm12 = 72,
  simm16 = 73,
  simm16_64 = 74,
  simm16_relaxed = 75,
  simm18_lsl3 = 76,
  simm19_lsl2 = 77,
  simm23_lsl2 = 78,
  simm32 = 79,
  simm32_relaxed = 80,
  simm3_lsa2 = 81,
  simm4 = 82,
  simm5 = 83,
  simm6 = 84,
  simm7_lsl2 = 85,
  simm9 = 86,
  simm9_addiusp = 87,
  size_ins = 88,
  type0 = 89,
  type1 = 90,
  type2 = 91,
  type3 = 92,
  type4 = 93,
  type5 = 94,
  uimm1 = 95,
  uimm10 = 96,
  uimm16 = 97,
  uimm16_64 = 98,
  uimm16_64_relaxed = 99,
  uimm16_altrelaxed = 100,
  uimm16_relaxed = 101,
  uimm1_ptr = 102,
  uimm2 = 103,
  uimm20 = 104,
  uimm26 = 105,
  uimm2_plus1 = 106,
  uimm2_ptr = 107,
  uimm3 = 108,
  uimm32_coerced = 109,
  uimm3_ptr = 110,
  uimm3_shift = 111,
  uimm4 = 112,
  uimm4_andi = 113,
  uimm4_ptr = 114,
  uimm5 = 115,
  uimm5_64 = 116,
  uimm5_64_report_uimm6 = 117,
  uimm5_inssize_plus1 = 118,
  uimm5_lsl2 = 119,
  uimm5_plus1 = 120,
  uimm5_plus1_report_uimm6 = 121,
  uimm5_plus32 = 122,
  uimm5_plus32_normalize = 123,
  uimm5_plus32_normalize_64 = 124,
  uimm5_plus33 = 125,
  uimm5_report_uimm6 = 126,
  uimm6 = 127,
  uimm6_lsl2 = 128,
  uimm7 = 129,
  uimm8 = 130,
  uimm_range_2_64 = 131,
  uimmz = 132,
  untyped_imm_0 = 133,
  vsplat_simm10 = 134,
  vsplat_simm5 = 135,
  vsplat_uimm1 = 136,
  vsplat_uimm2 = 137,
  vsplat_uimm3 = 138,
  vsplat_uimm4 = 139,
  vsplat_uimm5 = 140,
  vsplat_uimm6 = 141,
  vsplat_uimm8 = 142,
  ACC64DSPOpnd = 143,
  AFGR64Opnd = 144,
  CCROpnd = 145,
  COP0Opnd = 146,
  COP2Opnd = 147,
  COP3Opnd = 148,
  DSPROpnd = 149,
  FCCRegsOpnd = 150,
  FGR32Opnd = 151,
  FGR64Opnd = 152,
  FGRCCOpnd = 153,
  GPR32NonZeroOpnd = 154,
  GPR32Opnd = 155,
  GPR32ZeroOpnd = 156,
  GPR64Opnd = 157,
  GPRMM16Opnd = 158,
  GPRMM16OpndMoveP = 159,
  GPRMM16OpndMovePPairFirst = 160,
  GPRMM16OpndMovePPairSecond = 161,
  GPRMM16OpndZero = 162,
  HI32DSPOpnd = 163,
  HWRegsOpnd = 164,
  LO32DSPOpnd = 165,
  MSA128BOpnd = 166,
  MSA128CROpnd = 167,
  MSA128DOpnd = 168,
  MSA128F16Opnd = 169,
  MSA128HOpnd = 170,
  MSA128WOpnd = 171,
  StrictlyAFGR64Opnd = 172,
  StrictlyFGR32Opnd = 173,
  StrictlyFGR64Opnd = 174,
  ACC128 = 175,
  ACC64 = 176,
  ACC64DSP = 177,
  AFGR64 = 178,
  CCR = 179,
  COP0 = 180,
  COP2 = 181,
  COP3 = 182,
  CPU16Regs = 183,
  CPU16RegsPlusSP = 184,
  CPURAReg = 185,
  CPUSPReg = 186,
  DSPCC = 187,
  DSPR = 188,
  FCC = 189,
  FGR32 = 190,
  FGR64 = 191,
  FGRCC = 192,
  GP32 = 193,
  GP64 = 194,
  GPR32 = 195,
  GPR32NONZERO = 196,
  GPR32ZERO = 197,
  GPR64 = 198,
  GPRMM16 = 199,
  GPRMM16MoveP = 200,
  GPRMM16MovePPairFirst = 201,
  GPRMM16MovePPairSecond = 202,
  GPRMM16Zero = 203,
  HI32 = 204,
  HI32DSP = 205,
  HI64 = 206,
  HWRegs = 207,
  LO32 = 208,
  LO32DSP = 209,
  LO64 = 210,
  MSA128B = 211,
  MSA128D = 212,
  MSA128F16 = 213,
  MSA128H = 214,
  MSA128W = 215,
  MSA128WEvens = 216,
  MSACtrl = 217,
  OCTEON_MPL = 218,
  OCTEON_P = 219,
  SP32 = 220,
  SP64 = 221,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace Mips
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace Mips {
LLVM_READONLY
static int getOperandType(uint16_t Opcode, uint16_t OpIdx) {
  const uint16_t Offsets[] = {
    0,
    1,
    1,
    1,
    2,
    3,
    4,
    5,
    5,
    8,
    12,
    13,
    17,
    20,
    20,
    20,
    21,
    23,
    25,
    25,
    26,
    27,
    31,
    33,
    33,
    39,
    40,
    41,
    44,
    44,
    46,
    47,
    47,
    47,
    47,
    47,
    47,
    49,
    52,
    52,
    55,
    58,
    61,
    64,
    67,
    70,
    73,
    76,
    79,
    82,
    85,
    86,
    87,
    89,
    91,
    94,
    96,
    100,
    102,
    104,
    106,
    108,
    110,
    112,
    114,
    116,
    118,
    120,
    122,
    124,
    125,
    127,
    129,
    131,
    136,
    141,
    146,
    148,
    153,
    158,
    162,
    165,
    168,
    171,
    174,
    177,
    180,
    183,
    186,
    189,
    192,
    195,
    198,
    201,
    203,
    205,
    206,
    207,
    208,
    210,
    212,
    214,
    216,
    217,
    220,
    222,
    225,
    227,
    230,
    233,
    236,
    240,
    244,
    248,
    252,
    256,
    260,
    265,
    269,
    274,
    278,
    283,
    287,
    292,
    296,
    300,
    303,
    306,
    309,
    312,
    315,
    318,
    321,
    324,
    328,
    332,
    336,
    340,
    344,
    348,
    352,
    356,
    359,
    362,
    365,
    369,
    373,
    376,
    379,
    382,
    385,
    387,
    389,
    391,
    393,
    395,
    397,
    399,
    401,
    403,
    405,
    407,
    409,
    411,
    414,
    416,
    419,
    422,
    425,
    428,
    431,
    434,
    437,
    440,
    443,
    446,
    449,
    452,
    454,
    455,
    458,
    462,
    465,
    469,
    471,
    473,
    475,
    477,
    479,
    481,
    483,
    485,
    487,
    489,
    491,
    493,
    495,
    497,
    499,
    501,
    503,
    506,
    509,
    512,
    515,
    518,
    521,
    525,
    527,
    529,
    531,
    535,
    539,
    543,
    546,
    549,
    551,
    553,
    555,
    557,
    559,
    561,
    563,
    565,
    567,
    569,
    571,
    573,
    575,
    577,
    579,
    581,
    584,
    587,
    590,
    594,
    601,
    605,
    609,
    613,
    617,
    621,
    628,
    631,
    637,
    640,
    643,
    646,
    649,
    652,
    658,
    661,
    667,
    670,
    673,
    676,
    679,
    682,
    688,
    691,
    697,
    700,
    703,
    706,
    709,
    712,
    718,
    721,
    727,
    730,
    733,
    736,
    739,
    742,
    748,
    751,
    757,
    760,
    763,
    766,
    769,
    772,
    778,
    781,
    787,
    790,
    793,
    796,
    799,
    802,
    808,
    811,
    817,
    820,
    823,
    826,
    829,
    832,
    838,
    841,
    847,
    850,
    853,
    856,
    859,
    862,
    868,
    871,
    877,
    880,
    883,
    886,
    889,
    892,
    898,
    901,
    907,
    910,
    913,
    916,
    919,
    922,
    928,
    931,
    937,
    940,
    943,
    946,
    949,
    952,
    958,
    959,
    960,
    961,
    964,
    967,
    970,
    973,
    976,
    979,
    982,
    985,
    988,
    991,
    994,
    997,
    1000,
    1003,
    1006,
    1009,
    1012,
    1015,
    1018,
    1021,
    1024,
    1027,
    1030,
    1033,
    1036,
    1039,
    1042,
    1045,
    1048,
    1051,
    1054,
    1057,
    1060,
    1063,
    1064,
    1068,
    1072,
    1076,
    1080,
    1084,
    1085,
    1086,
    1087,
    1090,
    1093,
    1096,
    1099,
    1102,
    1105,
    1108,
    1111,
    1114,
    1117,
    1120,
    1123,
    1126,
    1129,
    1132,
    1135,
    1137,
    1140,
    1143,
    1146,
    1148,
    1149,
    1152,
    1155,
    1158,
    1161,
    1164,
    1167,
    1170,
    1173,
    1176,
    1179,
    1182,
    1185,
    1188,
    1191,
    1194,
    1197,
    1197,
    1200,
    1203,
    1205,
    1207,
    1209,
    1211,
    1213,
    1215,
    1219,
    1223,
    1227,
    1231,
    1235,
    1239,
    1243,
    1247,
    1251,
    1255,
    1259,
    1263,
    1267,
    1271,
    1275,
    1276,
    1277,
    1278,
    1279,
    1280,
    1281,
    1283,
    1286,
    1289,
    1292,
    1295,
    1298,
    1301,
    1304,
    1307,
    1311,
    1314,
    1318,
    1321,
    1324,
    1326,
    1328,
    1331,
    1333,
    1335,
    1338,
    1341,
    1343,
    1345,
    1347,
    1349,
    1351,
    1353,
    1355,
    1358,
    1360,
    1363,
    1365,
    1366,
    1369,
    1371,
    1373,
    1375,
    1377,
    1379,
    1381,
    1383,
    1385,
    1387,
    1389,
    1392,
    1394,
    1395,
    1397,
    1399,
    1401,
    1403,
    1406,
    1409,
    1412,
    1414,
    1417,
    1419,
    1422,
    1422,
    1425,
    1428,
    1431,
    1434,
    1437,
    1440,
    1443,
    1446,
    1449,
    1452,
    1455,
    1458,
    1461,
    1464,
    1466,
    1468,
    1470,
    1472,
    1474,
    1477,
    1480,
    1483,
    1486,
    1493,
    1500,
    1501,
    1502,
    1503,
    1504,
    1505,
    1506,
    1507,
    1508,
    1509,
    1510,
    1514,
    1518,
    1522,
    1526,
    1528,
    1530,
    1532,
    1534,
    1536,
    1538,
    1542,
    1546,
    1550,
    1554,
    1557,
    1560,
    1563,
    1566,
    1569,
    1572,
    1575,
    1578,
    1582,
    1586,
    1587,
    1588,
    1591,
    1595,
    1599,
    1603,
    1607,
    1611,
    1615,
    1619,
    1623,
    1627,
    1631,
    1635,
    1639,
    1643,
    1647,
    1651,
    1654,
    1657,
    1660,
    1663,
    1666,
    1669,
    1672,
    1675,
    1675,
    1675,
    1678,
    1681,
    1684,
    1687,
    1690,
    1693,
    1696,
    1699,
    1702,
    1705,
    1708,
    1711,
    1714,
    1717,
    1720,
    1723,
    1726,
    1729,
    1732,
    1735,
    1738,
    1741,
    1744,
    1747,
    1750,
    1753,
    1756,
    1758,
    1760,
    1762,
    1764,
    1766,
    1769,
    1772,
    1775,
    1778,
    1781,
    1784,
    1787,
    1790,
    1793,
    1796,
    1798,
    1800,
    1802,
    1804,
    1806,
    1809,
    1812,
    1816,
    1820,
    1825,
    1830,
    1835,
    1840,
    1845,
    1850,
    1855,
    1860,
    1865,
    1870,
    1875,
    1880,
    1883,
    1886,
    1889,
    1892,
    1895,
    1896,
    1897,
    1898,
    1899,
    1900,
    1901,
    1902,
    1903,
    1904,
    1905,
    1906,
    1907,
    1908,
    1908,
    1908,
    1911,
    1914,
    1917,
    1920,
    1923,
    1926,
    1929,
    1932,
    1935,
    1938,
    1941,
    1944,
    1947,
    1949,
    1951,
    1953,
    1955,
    1957,
    1959,
    1962,
    1964,
    1966,
    1968,
    1970,
    1973,
    1976,
    1977,
    1980,
    1983,
    1986,
    1989,
    1992,
    1995,
    1998,
    2001,
    2004,
    2007,
    2010,
    2013,
    2016,
    2019,
    2022,
    2025,
    2028,
    2031,
    2034,
    2037,
    2040,
    2043,
    2046,
    2049,
    2052,
    2055,
    2058,
    2061,
    2064,
    2067,
    2070,
    2073,
    2076,
    2079,
    2082,
    2085,
    2088,
    2091,
    2094,
    2097,
    2100,
    2103,
    2106,
    2109,
    2112,
    2115,
    2118,
    2121,
    2124,
    2127,
    2130,
    2133,
    2136,
    2139,
    2142,
    2145,
    2148,
    2151,
    2154,
    2157,
    2160,
    2163,
    2166,
    2169,
    2172,
    2175,
    2178,
    2182,
    2186,
    2188,
    2190,
    2193,
    2196,
    2199,
    2202,
    2205,
    2208,
    2211,
    2214,
    2217,
    2220,
    2223,
    2226,
    2229,
    2232,
    2236,
    2240,
    2243,
    2246,
    2249,
    2252,
    2255,
    2258,
    2261,
    2264,
    2267,
    2269,
    2271,
    2274,
    2277,
    2280,
    2283,
    2286,
    2289,
    2292,
    2295,
    2298,
    2301,
    2304,
    2307,
    2310,
    2313,
    2316,
    2319,
    2322,
    2324,
    2326,
    2329,
    2332,
    2335,
    2336,
    2337,
    2340,
    2343,
    2344,
    2347,
    2348,
    2349,
    2350,
    2354,
    2358,
    2361,
    2364,
    2367,
    2370,
    2371,
    2372,
    2374,
    2376,
    2378,
    2380,
    2382,
    2384,
    2386,
    2388,
    2390,
    2392,
    2394,
    2396,
    2398,
    2400,
    2403,
    2406,
    2409,
    2412,
    2415,
    2418,
    2421,
    2424,
    2425,
    2428,
    2431,
    2434,
    2437,
    2440,
    2443,
    2445,
    2447,
    2449,
    2451,
    2453,
    2455,
    2457,
    2459,
    2462,
    2465,
    2468,
    2471,
    2474,
    2477,
    2480,
    2482,
    2484,
    2486,
    2488,
    2490,
    2492,
    2494,
    2496,
    2498,
    2500,
    2502,
    2504,
    2506,
    2508,
    2510,
    2512,
    2514,
    2516,
    2518,
    2520,
    2522,
    2524,
    2528,
    2532,
    2536,
    2540,
    2544,
    2548,
    2552,
    2556,
    2560,
    2564,
    2568,
    2572,
    2576,
    2580,
    2584,
    2588,
    2590,
    2592,
    2594,
    2596,
    2598,
    2600,
    2602,
    2604,
    2606,
    2608,
    2610,
    2612,
    2614,
    2617,
    2620,
    2623,
    2626,
    2629,
    2632,
    2634,
    2636,
    2638,
    2640,
    2642,
    2644,
    2646,
    2648,
    2650,
    2652,
    2654,
    2656,
    2658,
    2662,
    2666,
    2670,
    2674,
    2677,
    2680,
    2683,
    2686,
    2689,
    2692,
    2695,
    2698,
    2701,
    2704,
    2707,
    2710,
    2713,
    2716,
    2718,
    2720,
    2722,
    2724,
    2726,
    2728,
    2730,
    2732,
    2735,
    2738,
    2741,
    2743,
    2745,
    2747,
    2749,
    2751,
    2754,
    2757,
    2758,
    2759,
    2760,
    2762,
    2763,
    2764,
    2766,
    2768,
    2772,
    2776,
    2779,
    2782,
    2785,
    2788,
    2791,
    2794,
    2797,
    2800,
    2802,
    2804,
    2806,
    2808,
    2810,
    2812,
    2814,
    2815,
    2816,
    2818,
    2820,
    2820,
    2821,
    2822,
    2823,
    2824,
    2827,
    2830,
    2833,
    2836,
    2839,
    2842,
    2844,
    2846,
    2848,
    2850,
    2852,
    2854,
    2856,
    2858,
    2860,
    2862,
    2864,
    2867,
    2870,
    2873,
    2876,
    2879,
    2882,
    2885,
    2888,
    2890,
    2892,
    2894,
    2896,
    2900,
    2904,
    2908,
    2912,
    2914,
    2916,
    2918,
    2920,
    2923,
    2926,
    2929,
    2932,
    2935,
    2938,
    2941,
    2944,
    2947,
    2950,
    2953,
    2956,
    2959,
    2962,
    2965,
    2968,
    2970,
    2972,
    2974,
    2976,
    2979,
    2982,
    2985,
    2988,
    2991,
    2994,
    2997,
    3000,
    3003,
    3006,
    3009,
    3012,
    3015,
    3018,
    3021,
    3024,
    3026,
    3028,
    3030,
    3032,
    3035,
    3038,
    3041,
    3044,
    3047,
    3050,
    3053,
    3056,
    3059,
    3062,
    3065,
    3068,
    3070,
    3072,
    3074,
    3076,
    3078,
    3080,
    3083,
    3086,
    3089,
    3092,
    3094,
    3096,
    3099,
    3102,
    3105,
    3108,
    3111,
    3114,
    3116,
    3118,
    3121,
    3124,
    3127,
    3130,
    3132,
    3134,
    3137,
    3140,
    3143,
    3146,
    3149,
    3152,
    3155,
    3158,
    3161,
    3164,
    3167,
    3170,
    3173,
    3176,
    3179,
    3182,
    3185,
    3188,
    3191,
    3194,
    3197,
    3200,
    3203,
    3206,
    3209,
    3212,
    3215,
    3218,
    3221,
    3224,
    3227,
    3230,
    3233,
    3236,
    3239,
    3242,
    3245,
    3248,
    3251,
    3254,
    3257,
    3260,
    3263,
    3266,
    3269,
    3272,
    3275,
    3278,
    3281,
    3284,
    3287,
    3290,
    3293,
    3296,
    3299,
    3302,
    3305,
    3308,
    3311,
    3314,
    3317,
    3320,
    3323,
    3326,
    3329,
    3331,
    3333,
    3335,
    3337,
    3339,
    3341,
    3343,
    3345,
    3347,
    3349,
    3351,
    3353,
    3355,
    3357,
    3359,
    3361,
    3363,
    3365,
    3367,
    3369,
    3371,
    3374,
    3376,
    3378,
    3380,
    3382,
    3384,
    3386,
    3388,
    3390,
    3392,
    3394,
    3396,
    3398,
    3400,
    3402,
    3404,
    3406,
    3408,
    3410,
    3412,
    3415,
    3418,
    3421,
    3424,
    3427,
    3430,
    3433,
    3436,
    3439,
    3442,
    3445,
    3448,
    3451,
    3454,
    3457,
    3460,
    3463,
    3466,
    3469,
    3472,
    3475,
    3478,
    3481,
    3484,
    3487,
    3490,
    3493,
    3496,
    3499,
    3502,
    3505,
    3508,
    3511,
    3514,
    3517,
    3520,
    3523,
    3526,
    3529,
    3532,
    3535,
    3538,
    3541,
    3544,
    3547,
    3550,
    3553,
    3556,
    3559,
    3562,
    3565,
    3568,
    3571,
    3574,
    3577,
    3580,
    3583,
    3586,
    3589,
    3592,
    3595,
    3598,
    3601,
    3604,
    3607,
    3610,
    3613,
    3616,
    3619,
    3622,
    3625,
    3628,
    3631,
    3634,
    3637,
    3640,
    3643,
    3646,
    3649,
    3652,
    3655,
    3658,
    3661,
    3664,
    3667,
    3670,
    3673,
    3676,
    3679,
    3682,
    3685,
    3688,
    3691,
    3694,
    3697,
    3700,
    3702,
    3704,
    3706,
    3709,
    3712,
    3715,
    3718,
    3721,
    3725,
    3728,
    3731,
    3733,
    3735,
    3737,
    3739,
    3741,
    3744,
    3747,
    3747,
    3747,
    3747,
    3751,
    3755,
    3759,
    3763,
    3764,
    3769,
    3774,
    3779,
    3782,
    3785,
    3788,
    3791,
    3794,
    3797,
    3800,
    3803,
    3806,
    3809,
    3812,
    3815,
    3816,
    3817,
    3821,
    3825,
    3828,
    3830,
    3833,
    3835,
    3838,
    3841,
    3844,
    3845,
    3848,
    3850,
    3853,
    3855,
    3858,
    3861,
    3864,
    3867,
    3869,
    3871,
    3874,
    3877,
    3880,
    3883,
    3886,
    3889,
    3892,
    3895,
    3899,
    3903,
    3907,
    3911,
    3915,
    3919,
    3923,
    3927,
    3931,
    3935,
    3939,
    3943,
    3947,
    3951,
    3955,
    3959,
    3963,
    3967,
    3971,
    3975,
    3979,
    3983,
    3985,
    3989,
    3993,
    3997,
    4001,
    4005,
    4009,
    4013,
    4017,
    4021,
    4025,
    4029,
    4033,
    4037,
    4041,
    4045,
    4049,
    4053,
    4057,
    4061,
    4065,
    4069,
    4073,
    4076,
    4079,
    4082,
    4084,
    4086,
    4088,
    4091,
    4094,
    4096,
    4099,
    4102,
    4105,
    4108,
    4111,
    4114,
    4117,
    4120,
    4123,
    4125,
    4126,
    4127,
    4128,
    4130,
    4132,
    4132,
    4132,
    4132,
    4133,
    4134,
    4135,
    4136,
    4136,
    4136,
    4136,
    4136,
    4136,
    4137,
    4138,
    4139,
    4143,
    4146,
    4149,
    4152,
    4155,
    4158,
    4161,
    4164,
    4167,
    4170,
    4173,
    4176,
    4179,
    4182,
    4185,
    4188,
    4191,
    4194,
    4197,
    4200,
    4203,
    4206,
    4209,
    4212,
    4215,
    4219,
    4223,
    4227,
    4231,
    4233,
    4235,
    4237,
    4239,
    4241,
    4243,
    4246,
    4249,
    4252,
    4255,
    4258,
    4261,
    4264,
    4267,
    4270,
    4273,
    4276,
    4279,
    4282,
    4285,
    4287,
    4289,
    4292,
    4295,
    4298,
    4301,
    4304,
    4307,
    4310,
    4313,
    4316,
    4319,
    4322,
    4325,
    4328,
    4331,
    4334,
    4337,
    4340,
    4343,
    4346,
    4349,
    4352,
    4355,
    4358,
    4361,
    4364,
    4367,
    4370,
    4373,
    4376,
    4379,
    4382,
    4385,
    4388,
    4391,
    4394,
    4397,
    4399,
    4401,
    4403,
    4405,
    4407,
    4409,
    4411,
    4413,
    4415,
    4417,
    4419,
    4421,
    4423,
    4425,
    4427,
    4429,
    4431,
    4433,
    4435,
    4437,
    4439,
    4441,
    4443,
    4445,
    4447,
    4449,
    4451,
    4453,
    4455,
    4459,
    4463,
    4466,
    4469,
    4472,
    4475,
    4478,
    4481,
    4484,
    4487,
    4489,
    4491,
    4493,
    4495,
    4497,
    4499,
    4501,
    4503,
    4507,
    4511,
    4514,
    4517,
    4520,
    4523,
    4526,
    4529,
    4532,
    4535,
    4538,
    4541,
    4543,
    4545,
    4547,
    4549,
    4551,
    4553,
    4555,
    4558,
    4560,
    4562,
    4564,
    4566,
    4568,
    4570,
    4573,
    4576,
    4579,
    4582,
    4585,
    4588,
    4591,
    4594,
    4597,
    4600,
    4603,
    4606,
    4608,
    4610,
    4612,
    4614,
    4616,
    4618,
    4620,
    4622,
    4625,
    4628,
    4631,
    4634,
    4637,
    4640,
    4643,
    4646,
    4649,
    4652,
    4655,
    4658,
    4661,
    4664,
    4667,
    4670,
    4673,
    4676,
    4679,
    4682,
    4684,
    4686,
    4688,
    4690,
    4693,
    4696,
    4698,
    4700,
    4702,
    4704,
    4705,
    4706,
    4708,
    4710,
    4713,
    4716,
    4719,
    4722,
    4725,
    4728,
    4731,
    4734,
    4737,
    4740,
    4743,
    4746,
    4747,
    4748,
    4751,
    4754,
    4757,
    4760,
    4763,
    4766,
    4769,
    4772,
    4775,
    4778,
    4781,
    4784,
    4787,
    4790,
    4793,
    4796,
    4801,
    4805,
    4809,
    4813,
    4817,
    4820,
    4825,
    4830,
    4835,
    4840,
    4843,
    4848,
    4853,
    4854,
    4855,
    4857,
    4858,
    4860,
    4861,
    4863,
    4865,
    4866,
    4868,
    4870,
    4872,
    4874,
    4875,
    4876,
    4877,
    4878,
    4880,
    4882,
    4884,
    4886,
    4888,
    4890,
    4891,
    4892,
    4893,
    4894,
    4895,
    4896,
    4897,
    4898,
    4899,
    4900,
    4901,
    4902,
    4903,
    4904,
    4905,
    4905,
    4905,
    4906,
    4907,
    4910,
    4913,
    4916,
    4919,
    4922,
    4925,
    4928,
    4931,
    4934,
    4937,
    4940,
    4943,
    4946,
    4949,
    4952,
    4955,
    4958,
    4961,
    4964,
    4967,
    4970,
    4973,
    4976,
    4979,
    4981,
    4983,
    4985,
    4987,
    4991,
    4993,
    4997,
    5000,
    5003,
    5006,
    5009,
    5012,
    5015,
    5018,
    5021,
    5024,
    5027,
    5030,
    5033,
    5036,
    5039,
    5042,
    5045,
    5048,
    5051,
    5054,
    5057,
    5060,
    5063,
    5065,
    5067,
    5070,
    5073,
    5076,
    5079,
    5082,
    5085,
    5088,
    5091,
    5094,
    5097,
    5101,
    5105,
    5109,
    5111,
    5114,
    5117,
    5120,
    5122,
    5124,
    5126,
    5129,
    5132,
    5135,
    5138,
    5141,
    5144,
    5147,
    5150,
    5153,
    5156,
    5159,
    5162,
    5165,
    5168,
    5172,
    5176,
    5180,
    5184,
    5188,
    5191,
    5194,
    5197,
    5199,
    5201,
    5205,
    5209,
    5213,
    5217,
    5221,
    5225,
    5228,
    5230,
    5233,
    5236,
    5239,
    5242,
    5245,
    5248,
    5251,
    5254,
    5257,
    5260,
    5263,
    5266,
    5269,
    5271,
    5273,
    5275,
    5278,
    5281,
    5284,
    5287,
    5289,
    5293,
    5297,
    5301,
    5305,
    5309,
    5313,
    5315,
    5319,
    5323,
    5325,
    5329,
    5333,
    5337,
    5341,
    5345,
    5349,
    5353,
    5357,
    5361,
    5363,
    5367,
    5371,
    5375,
    5379,
    5383,
    5387,
    5391,
    5395,
    5399,
    5403,
    5407,
    5411,
    5414,
    5417,
    5420,
    5423,
    5426,
    5429,
    5432,
    5435,
    5438,
    5441,
    5444,
    5447,
    5450,
    5453,
    5456,
    5459,
    5462,
    5465,
    5468,
    5471,
    5474,
    5477,
    5480,
    5483,
    5486,
    5489,
    5492,
    5495,
    5498,
    5501,
    5503,
    5505,
    5507,
    5509,
    5512,
    5514,
    5517,
    5520,
    5523,
    5525,
    5527,
    5529,
    5531,
    5533,
    5536,
    5539,
    5540,
    5541,
    5542,
    5544,
    5546,
    5547,
    5548,
    5549,
    5550,
    5552,
    5554,
    5555,
    5560,
    5563,
    5566,
    5569,
    5572,
    5575,
    5578,
    5581,
    5584,
    5587,
    5590,
    5593,
    5596,
    5599,
    5602,
    5605,
    5608,
    5611,
    5614,
    5617,
    5620,
    5623,
    5626,
    5629,
    5632,
    5635,
    5638,
    5641,
    5644,
    5647,
    5650,
    5653,
    5656,
    5659,
    5662,
    5665,
    5668,
    5671,
    5674,
    5677,
    5680,
    5683,
    5686,
    5688,
    5690,
    5694,
    5698,
    5700,
    5704,
    5708,
    5712,
    5716,
    5720,
    5724,
    5728,
    5732,
    5736,
    5740,
    5744,
    5748,
    5752,
    5756,
    5760,
    5764,
    5768,
    5772,
    5776,
    5780,
    5784,
    5788,
    5792,
    5796,
    5800,
    5804,
    5808,
    5812,
    5816,
    5820,
    5824,
    5828,
    5832,
    5836,
    5840,
    5844,
    5848,
    5852,
    5856,
    5860,
    5862,
    5866,
    5870,
    5874,
    5878,
    5882,
    5886,
    5888,
    5892,
    5896,
    5898,
    5902,
    5906,
    5910,
    5914,
    5918,
    5922,
    5926,
    5930,
    5934,
    5936,
    5940,
    5944,
    5948,
    5952,
    5955,
    5958,
    5960,
    5962,
    5964,
    5966,
    5968,
    5971,
    5973,
    5976,
    5979,
    5982,
    5985,
    5988,
    5991,
    5994,
    5996,
    5999,
    6002,
    6003,
    6004,
    6006,
    6008,
    6009,
    6012,
    6015,
    6016,
    6017,
    6019,
    6021,
    6022,
    6023,
    6024,
    6025,
    6026,
    6027,
    6028,
    6033,
    6036,
    6039,
    6042,
    6045,
    6048,
    6051,
    6054,
    6057,
    6060,
    6063,
    6066,
    6069,
    6072,
    6075,
    6078,
    6081,
    6084,
    6087,
    6090,
    6093,
    6096,
    6099,
    6102,
    6105,
    6109,
    6113,
    6117,
    6121,
    6123,
    6126,
    6129,
    6132,
    6135,
    6137,
    6139,
    6141,
    6144,
    6147,
    6150,
    6153,
    6156,
    6159,
    6162,
    6165,
    6168,
    6171,
    6174,
    6177,
    6180,
    6183,
    6186,
    6187,
    6188,
    6190,
    6192,
    6194,
    6196,
    6198,
    6200,
    6202,
    6204,
    6206,
    6208,
    6212,
    6216,
    6220,
    6224,
    6228,
    6232,
    6236,
    6240,
    6244,
    6248,
    6251,
    6254,
    6257,
    6260,
    6263,
    6266,
    6268,
    6270,
    6272,
    6274,
    6277,
    6280,
    6283,
    6286,
    6289,
    6292,
    6295,
    6298,
    6301,
    6304,
    6307,
    6310,
    6313,
    6316,
    6319,
    6319,
    6319,
    6319,
    6322,
    6325,
    6328,
    6331,
    6334,
    6337,
    6340,
    6343,
    6345,
    6347,
    6349,
    6351,
    6354,
    6357,
    6360,
    6363,
    6366,
    6369,
    6371,
    6373,
    6375,
    6377,
    6379,
    6381,
    6383,
    6385,
    6387,
    6389,
    6391,
    6393,
    6395,
    6397,
    6399,
    6401,
    6403,
    6405,
    6407,
    6409,
    6411,
    6414,
    6417,
    6420,
    6423,
    6426,
    6429,
    6432,
    6435,
    6438,
    6441,
    6445,
    6449,
    6453,
    6457,
    6460,
    6463,
    6466,
    6469,
    6472,
    6475,
    6478,
    6482,
    6486,
    6489,
    6492,
    6494,
    6496,
    6498,
    6500,
    6503,
    6506,
    6509,
    6512,
    6514,
    6516,
    6518,
    6520,
    6522,
    6524,
    6526,
    6528,
    6530,
    6532,
    6534,
    6536,
    6538,
    6540,
    6542,
    6544,
    6546,
    6548,
    6550,
    6553,
    6556,
    6559,
    6562,
    6564,
    6566,
    6568,
    6570,
    6572,
    6574,
    6576,
    6578,
    6580,
    6582,
    6584,
    6586,
    6588,
    6590,
    6592,
    6594,
    6596,
    6596,
    6596,
    6598,
    6600,
    6603,
    6606,
    6609,
    6612,
    6615,
    6618,
    6621,
    6624,
    6627,
    6630,
    6633,
    6636,
    6639,
    6642,
    6645,
    6648,
    6652,
    6656,
    6660,
    6664,
    6668,
    6672,
    6676,
    6680,
    6684,
    6688,
    6691,
    6692,
    6693,
    6694,
    6695,
    6696,
    6697,
    6700,
    6703,
    6706,
    6709,
    6712,
    6715,
    6718,
    6721,
    6723,
    6725,
    6728,
    6731,
    6734,
    6737,
    6739,
    6741,
    6743,
    6745,
    6747,
    6749,
    6752,
    6755,
    6758,
    6761,
    6764,
    6767,
    6770,
    6773,
    6776,
    6779,
    6782,
    6785,
    6788,
    6791,
    6795,
    6799,
    6803,
    6807,
    6810,
    6813,
    6816,
    6819,
    6822,
    6825,
    6828,
    6831,
    6834,
    6837,
    6840,
    6843,
    6846,
    6849,
    6852,
    6855,
    6858,
    6861,
    6864,
    6867,
    6870,
    6873,
    6876,
    6879,
    6882,
    6885,
    6888,
    6891,
    6894,
    6897,
    6900,
    6903,
    6906,
    6909,
    6912,
    6915,
    6918,
    6921,
    6924,
    6927,
    6930,
    6933,
    6936,
    6939,
    6942,
    6945,
    6948,
    6951,
    6954,
    6957,
    6960,
    6963,
    6966,
    6969,
    6972,
    6975,
    6978,
    6981,
    6984,
    6987,
    6990,
    6991,
    6992,
    6996,
    7000,
    7004,
    7008,
    7012,
    7016,
    7020,
    7024,
    7027,
    7030,
    7033,
    7035,
    7037,
    7040,
    7043,
    7046,
    7049,
    7052,
    7055,
    7058,
    7061,
    7064,
    7067,
    7070,
    7073,
    7076,
    7079,
    7082,
    7085,
    7088,
    7091,
    7094,
    7097,
    7100,
    7103,
    7106,
    7109,
    7112,
    7115,
    7118,
    7121,
    7124,
    7127,
    7130,
    7133,
    7136,
    7139,
    7142,
    7145,
    7148,
    7151,
    7154,
    7157,
    7160,
    7163,
    7166,
    7169,
    7172,
    7175,
    7178,
    7181,
    7184,
    7187,
    7190,
    7193,
    7196,
    7199,
    7202,
    7205,
    7208,
    7211,
    7214,
    7217,
    7220,
    7223,
    7226,
    7229,
    7232,
    7235,
    7238,
    7241,
    7244,
    7247,
    7250,
    7253,
    7256,
    7259,
    7262,
    7265,
    7265,
    7265,
    7265,
    7268,
    7271,
    7274,
    7277,
    7280,
    7283,
    7286,
    7289,
    7292,
    7295,
    7298,
    7301,
    7304,
    7307,
    7310,
    7313,
    7316,
    7319,
    7322,
    7325,
    7328,
    7331,
    7334,
    7337,
    7340,
    7343,
    7346,
    7349,
    7352,
    7355,
    7358,
    7361,
    7364,
    7367,
    7370,
    7373,
    7376,
    7379,
    7382,
    7385,
    7388,
    7391,
    7394,
    7397,
    7400,
    7403,
    7406,
    7409,
    7412,
    7415,
    7418,
    7421,
    7424,
    7427,
    7430,
    7433,
    7436,
    7439,
    7442,
    7445,
    7448,
    7451,
    7454,
    7457,
    7460,
    7463,
    7466,
    7469,
    7472,
    7475,
    7478,
    7481,
    7484,
    7487,
    7490,
    7493,
    7496,
    7499,
    7502,
    7505,
    7508,
    7511,
    7514,
    7517,
    7520,
    7523,
    7526,
    7530,
    7533,
    7536,
    7539,
    7542,
    7545,
    7548,
    7551,
    7554,
    7557,
    7560,
    7563,
    7564,
    7566,
    7568,
    7570,
    7571,
    7572,
    7573,
    7574,
    7574,
    7574,
    7577,
    7579,
    7581,
    7584,
    7587,
    7590,
    7592,
    7594,
    7596,
    7598,
    7600,
    7602,
    7605,
    7608,
    7611,
    7614,
    7617,
    7620,
    7623,
    7626,
    7628,
    7630,
    7633,
    7636,
    7638,
    7640,
    7642,
    7644,
    7647,
    7650,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7653,
    7656,
    7658,
    7660,
    7662,
    7665,
    7668,
    7671,
    7674,
    7676,
    7678,
    7681,
    7683,
    7685,
    7687,
    7689,
    7691,
    7693,
    7695,
    7697,
    7699,
    7701,
    7703,
    7705,
    7707,
    7709,
    7712,
    7715,
    7718,
    7722,
    7726,
    7730,
    7734,
    7734,
    7735,
    7736,
    7738,
    7740,
    7742,
    7744,
    7746,
    7748,
    7751,
    7754,
    7757,
    7760,
    7763,
    7766,
    7769,
    7772,
    7775,
    7778,
    7781,
    7784,
    7787,
  };
  const int16_t OpcodeOperandTypes[] = {
    -1, 
    /**/
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    /**/
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, OpTypes::i32imm, 
    /**/
    /**/
    -1, 
    -1, -1, 
    -1, -1, 
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i64imm, OpTypes::i64imm, OpTypes::i8imm, OpTypes::i32imm, 
    OpTypes::i64imm, OpTypes::i32imm, 
    /**/
    -1, OpTypes::i64imm, OpTypes::i32imm, -1, OpTypes::i32imm, OpTypes::i32imm, 
    -1, 
    OpTypes::i32imm, 
    -1, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    -1, OpTypes::i32imm, 
    -1, 
    /**/
    /**/
    /**/
    /**/
    /**/
    -1, -1, 
    -1, -1, -1, 
    /**/
    OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, OpTypes::type1, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::ptype0, OpTypes::ptype2, -1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    -1, 
    -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::ptype0, OpTypes::ptype0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    -1, 
    OpTypes::ptype0, -1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::i32imm, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, -1, 
    -1, OpTypes::type0, 
    OpTypes::ptype0, OpTypes::ptype1, OpTypes::type2, OpTypes::untyped_imm_0, 
    OpTypes::ptype0, OpTypes::ptype1, OpTypes::type2, OpTypes::untyped_imm_0, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::type2, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR64, -1, OpTypes::GPR64, OpTypes::GPR64, 
    OpTypes::GPR64, -1, OpTypes::GPR64, OpTypes::GPR64, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR64, -1, OpTypes::GPR64, 
    OpTypes::GPR32, -1, OpTypes::GPR32, 
    OpTypes::GPR32, -1, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::brtarget, 
    OpTypes::brtarget, 
    OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::brtarget, 
    OpTypes::brtarget_mm, 
    OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::imm64, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::simm16, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::simm16, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::simm16, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::simm16, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::simm16, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::simm16, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::brtarget, 
    OpTypes::AFGR64Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::FGRCCOpnd, 
    OpTypes::cpinst_operand, OpTypes::cpinst_operand, OpTypes::i32imm, 
    OpTypes::FGR64, OpTypes::MSA128D, OpTypes::uimm1_ptr, 
    OpTypes::FGR32, OpTypes::MSA128W, OpTypes::uimm2_ptr, 
    OpTypes::FGRCCOpnd, OpTypes::GPR32Opnd, 
    OpTypes::simm32, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::simm32_relaxed, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::imm64, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::simm32_relaxed, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::imm64, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::simm32_relaxed, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    /**/
    OpTypes::GPR32Opnd, OpTypes::AFGR64Opnd, OpTypes::i32imm, 
    OpTypes::GPR32Opnd, OpTypes::FGR64Opnd, OpTypes::i32imm, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128D, OpTypes::MSA128D, 
    OpTypes::MSA128W, OpTypes::MSA128W, 
    OpTypes::MSA128D, OpTypes::FGR64, 
    OpTypes::MSA128W, OpTypes::FGR32, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, OpTypes::simm16, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::GPR32Opnd, OpTypes::GPR64Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::uimm1, OpTypes::FGR64Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::GPR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::GPR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::uimm2, OpTypes::FGR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::GPR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::GPR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::calltarget, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::MSA128DOpnd, -1, OpTypes::GPR32, 
    OpTypes::MSA128WOpnd, -1, OpTypes::GPR32, 
    OpTypes::MSA128F16, -1, OpTypes::simm10, 
    OpTypes::ACC128, -1, OpTypes::simm16, 
    OpTypes::ACC64, -1, OpTypes::simm16, 
    OpTypes::ACC64DSPOpnd, -1, OpTypes::simm16, 
    OpTypes::DSPCC, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::brtarget, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::reglist, -1, OpTypes::simm12, 
    OpTypes::GPR32Opnd, OpTypes::i32imm, 
    OpTypes::GPR64Opnd, OpTypes::imm64, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::uimm32_coerced, 
    OpTypes::GPR64Opnd, OpTypes::imm64, 
    OpTypes::StrictlyFGR64Opnd, OpTypes::imm64, 
    OpTypes::StrictlyAFGR64Opnd, OpTypes::imm64, 
    OpTypes::GPR32Opnd, OpTypes::imm64, 
    OpTypes::StrictlyFGR32Opnd, OpTypes::imm64, 
    OpTypes::GPR32Opnd, OpTypes::imm64, 
    OpTypes::CPU16Regs, OpTypes::simm32, OpTypes::simm32, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR32Opnd, OpTypes::COP0Opnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::GPR64, OpTypes::GPR64, 
    OpTypes::FGR64Opnd, OpTypes::MSA128F16, 
    OpTypes::FGR32Opnd, OpTypes::MSA128F16, 
    OpTypes::MSA128F16, OpTypes::FGR64Opnd, 
    OpTypes::MSA128F16, OpTypes::FGR32Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::COP0Opnd, OpTypes::GPR32Opnd, OpTypes::uimm3, 
    OpTypes::FGR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm32_relaxed, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    /**/
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm32_relaxed, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::imm64, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::DSPCC, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPCC, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPCC, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPCC, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPCC, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPCC, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::AFGR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC128, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::ACC128, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::ACC128, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::ACC128, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64, 
    OpTypes::GPR32, OpTypes::ACC64, 
    OpTypes::GPR64, OpTypes::ACC128, 
    OpTypes::GPR32, OpTypes::ACC64, 
    OpTypes::GPR32, OpTypes::ACC64, 
    OpTypes::GPR64, OpTypes::ACC128, 
    OpTypes::GPR32, OpTypes::ACC64, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64, 
    OpTypes::ACC64, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::ACC128, OpTypes::GPR64, OpTypes::GPR64, 
    OpTypes::ACC64DSP, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::ACC64, OpTypes::GPR32, OpTypes::GPR32, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPCC, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPCC, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::FCCRegsOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::FCCRegsOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::GPR32Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::GPR32Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::GPR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm16, 
    /**/
    /**/
    OpTypes::AFGR64Opnd, -1, OpTypes::simm16, 
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm32, 
    OpTypes::GPR32NonZeroOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm32_relaxed, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm32, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::imm64, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm32_coerced, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::imm64, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm32, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::imm64, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm32_coerced, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::imm64, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm32, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::imm64, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm32_coerced, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::imm64, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::imm64, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::imm64, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm32_relaxed, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32, OpTypes::MSA128B, 
    OpTypes::GPR32, OpTypes::MSA128D, 
    OpTypes::GPR32, OpTypes::MSA128H, 
    OpTypes::GPR32, OpTypes::MSA128B, 
    OpTypes::GPR32, OpTypes::MSA128W, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm32_relaxed, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC128, -1, OpTypes::simm16, 
    OpTypes::ACC64, -1, OpTypes::simm16, 
    OpTypes::ACC64DSPOpnd, -1, OpTypes::simm16, 
    OpTypes::DSPCC, -1, OpTypes::simm16, 
    OpTypes::MSA128DOpnd, -1, OpTypes::GPR32, 
    OpTypes::MSA128WOpnd, -1, OpTypes::GPR32, 
    OpTypes::MSA128F16, -1, OpTypes::simm10, 
    OpTypes::reglist, -1, OpTypes::simm12, 
    OpTypes::GPR32, OpTypes::MSA128B, 
    OpTypes::GPR32, OpTypes::MSA128D, 
    OpTypes::GPR32, OpTypes::MSA128H, 
    OpTypes::GPR32, OpTypes::MSA128B, 
    OpTypes::GPR32, OpTypes::MSA128W, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::calltarget, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::calltarget, 
    OpTypes::calltarget, 
    /**/
    /**/
    OpTypes::ACC64, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm32, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm32_relaxed, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::simm19_lsl2, 
    OpTypes::GPRMM16Opnd, OpTypes::simm23_lsl2, 
    OpTypes::GPR32Opnd, OpTypes::simm19_lsl2, 
    OpTypes::GPRMM16Opnd, OpTypes::uimm6_lsl2, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::simm3_lsa2, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm4, 
    OpTypes::simm9_addiusp, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm16_relaxed, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm16_relaxed, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm2, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm2, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::uimm4_andi, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::uimm4_andi, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm8, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm16, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm16_64, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm16, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm16, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16RegsPlusSP, OpTypes::simm16, 
    OpTypes::simm16, 
    OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::brtarget10_mm, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::brtarget, 
    OpTypes::brtarget26, 
    OpTypes::brtarget26_mm, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm2, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm2, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::uimm5_64_report_uimm6, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::uimm5_64, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::uimm5_64_report_uimm6, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::uimm5_64, OpTypes::brtarget, 
    OpTypes::brtarget26, 
    OpTypes::brtarget10_mm, 
    OpTypes::FGR64Opnd, OpTypes::brtarget, 
    OpTypes::FGR64Opnd, OpTypes::brtarget_mm, 
    OpTypes::FCCRegsOpnd, OpTypes::brtarget, 
    OpTypes::FCCRegsOpnd, OpTypes::brtarget, 
    OpTypes::FCCRegsOpnd, OpTypes::brtarget_mm, 
    OpTypes::FGR64Opnd, OpTypes::brtarget, 
    OpTypes::FGR64Opnd, OpTypes::brtarget_mm, 
    OpTypes::FCCRegsOpnd, OpTypes::brtarget, 
    OpTypes::FCCRegsOpnd, OpTypes::brtarget, 
    OpTypes::FCCRegsOpnd, OpTypes::brtarget_mm, 
    OpTypes::COP2Opnd, OpTypes::brtarget, 
    OpTypes::COP2Opnd, OpTypes::brtarget_mm, 
    OpTypes::COP2Opnd, OpTypes::brtarget, 
    OpTypes::COP2Opnd, OpTypes::brtarget_mm, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm3, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm6, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm4, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::brtarget26_mm, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget_lsl2_mm, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPRMM16Opnd, OpTypes::brtarget7_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget21, 
    OpTypes::GPRMM16Opnd, OpTypes::brtarget7_mm, 
    OpTypes::GPR64Opnd, OpTypes::brtarget21, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget21_mm, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget_lsl2_mm, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget_lsl2_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_lsl2_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_lsl2_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm3, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm6, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm4, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm3, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm6, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm4, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_lsl2_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget_lsl2_mm, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget_lsl2_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_lsl2_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm8, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm8, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget_lsl2_mm, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm3, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm6, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm4, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPRMM16Opnd, OpTypes::brtarget7_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget21, 
    OpTypes::GPRMM16Opnd, OpTypes::brtarget7_mm, 
    OpTypes::GPR64Opnd, OpTypes::brtarget21, 
    OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::brtarget21_mm, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtargetr6, 
    OpTypes::MSA128BOpnd, OpTypes::brtarget, 
    OpTypes::MSA128DOpnd, OpTypes::brtarget, 
    OpTypes::MSA128HOpnd, OpTypes::brtarget, 
    OpTypes::MSA128BOpnd, OpTypes::brtarget, 
    OpTypes::MSA128WOpnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::brtargetr6, 
    OpTypes::brtarget, 
    OpTypes::brtarget1SImm16, 
    OpTypes::brtarget_mm, 
    OpTypes::uimm10, OpTypes::uimm10, 
    OpTypes::uimm4, 
    OpTypes::uimm4, 
    OpTypes::uimm10, OpTypes::uimm10, 
    OpTypes::uimm10, OpTypes::uimm10, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm8, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm3, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm6, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm4, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::brtarget, 
    OpTypes::MSA128DOpnd, OpTypes::brtarget, 
    OpTypes::MSA128HOpnd, OpTypes::brtarget, 
    OpTypes::MSA128BOpnd, OpTypes::brtarget, 
    OpTypes::MSA128WOpnd, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::brtarget, 
    OpTypes::brtarget, 
    OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::brtarget, 
    OpTypes::CPU16Regs, OpTypes::brtarget, 
    /**/
    OpTypes::simm16, 
    OpTypes::simm16, 
    OpTypes::simm16, 
    OpTypes::simm16, 
    -1, OpTypes::simm16, OpTypes::uimm5, 
    -1, OpTypes::simm9, OpTypes::uimm5, 
    -1, OpTypes::simm9, OpTypes::uimm5, 
    -1, OpTypes::simm12, OpTypes::uimm5, 
    -1, OpTypes::simm12, OpTypes::uimm5, 
    -1, OpTypes::simm9, OpTypes::uimm5, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::CCROpnd, 
    OpTypes::GPR32Opnd, OpTypes::CCROpnd, 
    OpTypes::GPR32Opnd, OpTypes::COP2Opnd, 
    OpTypes::GPR32Opnd, OpTypes::MSA128CROpnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm5, OpTypes::uimm5, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm5, OpTypes::uimm5, 
    OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::uimm5, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::MSA128BOpnd, OpTypes::uimm4_ptr, 
    OpTypes::GPR64Opnd, OpTypes::MSA128DOpnd, OpTypes::uimm1_ptr, 
    OpTypes::GPR32Opnd, OpTypes::MSA128HOpnd, OpTypes::uimm3_ptr, 
    OpTypes::GPR32Opnd, OpTypes::MSA128WOpnd, OpTypes::uimm2_ptr, 
    OpTypes::GPR32Opnd, OpTypes::MSA128BOpnd, OpTypes::uimm4_ptr, 
    OpTypes::GPR32Opnd, OpTypes::MSA128HOpnd, OpTypes::uimm3_ptr, 
    OpTypes::GPR32Opnd, OpTypes::MSA128WOpnd, OpTypes::uimm2_ptr, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::CCROpnd, OpTypes::GPR32Opnd, 
    OpTypes::CCROpnd, OpTypes::GPR32Opnd, 
    OpTypes::COP2Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128CROpnd, OpTypes::GPR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::simm16_64, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::simm16_64, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm16_altrelaxed, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm3, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm16_altrelaxed, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm16, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    /**/
    /**/
    /**/
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm5_report_uimm6, OpTypes::uimm5_plus1_report_uimm6, 
    OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5_report_uimm6, OpTypes::uimm5_plus1, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm5, OpTypes::uimm5_plus33, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm5_plus32, OpTypes::uimm5_plus1, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm6, OpTypes::uimm5_inssize_plus1, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm5, OpTypes::uimm_range_2_64, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm5_plus32, OpTypes::uimm5_inssize_plus1, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm2_plus1, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm2_plus1, 
    OpTypes::GPR64Opnd, OpTypes::COP0Opnd, OpTypes::uimm3, 
    OpTypes::GPR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::COP2Opnd, OpTypes::uimm3, 
    OpTypes::GPR64Opnd, OpTypes::uimm16, 
    OpTypes::GPR64Opnd, OpTypes::COP0Opnd, OpTypes::uimm3, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::COP0Opnd, OpTypes::GPR64Opnd, OpTypes::uimm3, 
    OpTypes::FGR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::COP2Opnd, OpTypes::GPR64Opnd, OpTypes::uimm3, 
    OpTypes::GPR64Opnd, OpTypes::uimm16, 
    OpTypes::COP0Opnd, OpTypes::GPR64Opnd, OpTypes::uimm3, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm6, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm5, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm6, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm5, 
    OpTypes::GPR64, OpTypes::GPR32, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm6, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm5, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm6, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm5, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    /**/
    /**/
    /**/
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    /**/
    /**/
    /**/
    /**/
    /**/
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::uimm5_plus1, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, OpTypes::uimm5, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm5, OpTypes::uimm5, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm5, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::uimm5_plus1, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::uimm5_plus1, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::AFGR64, OpTypes::AFGR64, OpTypes::condcode, 
    OpTypes::AFGR64, OpTypes::AFGR64, OpTypes::condcode, 
    OpTypes::FGR64, OpTypes::FGR64, OpTypes::condcode, 
    OpTypes::FGR32, OpTypes::FGR32, OpTypes::condcode, 
    OpTypes::FGR32, OpTypes::FGR32, OpTypes::condcode, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::GPR64Opnd, 
    OpTypes::MSA128HOpnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::uimm2, 
    OpTypes::GPR32Opnd, OpTypes::uimm2, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::uimm10, 
    OpTypes::uimm10, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::uimm5_inssize_plus1, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::GPR32Opnd, OpTypes::uimm4, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::GPR64Opnd, OpTypes::uimm1, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::GPR32Opnd, OpTypes::uimm3, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::GPR32Opnd, OpTypes::uimm2, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::uimm4, OpTypes::MSA128BOpnd, OpTypes::uimmz, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::uimm1, OpTypes::MSA128DOpnd, OpTypes::uimmz, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::uimm3, OpTypes::MSA128HOpnd, OpTypes::uimmz, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::uimm2, OpTypes::MSA128WOpnd, OpTypes::uimmz, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::uimm5_inssize_plus1, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::uimm5_inssize_plus1, OpTypes::GPR32Opnd, 
    OpTypes::jmptarget, 
    OpTypes::calltarget, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::calltarget_mm, 
    OpTypes::calltarget, 
    OpTypes::calltarget, 
    OpTypes::calltarget_mm, 
    OpTypes::GPR32Opnd, OpTypes::calloffset16, 
    OpTypes::GPR64Opnd, OpTypes::calloffset16, 
    OpTypes::GPR32Opnd, OpTypes::calloffset16, 
    OpTypes::GPR32Opnd, OpTypes::jmpoffset16, 
    OpTypes::GPR64Opnd, OpTypes::jmpoffset16, 
    OpTypes::GPR32Opnd, OpTypes::jmpoffset16, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::uimm5_lsl2, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::uimm5_lsl2, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::jmptarget_mm, 
    OpTypes::uimm26, 
    OpTypes::uimm26, 
    /**/
    /**/
    OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPRMM16Opnd, -1, OpTypes::simm4, 
    OpTypes::GPR32Opnd, -1, -1, 
    OpTypes::GPR32Opnd, -1, -1, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::AFGR64Opnd, -1, OpTypes::simm16, 
    OpTypes::FGR64Opnd, -1, OpTypes::simm16, 
    OpTypes::FGR64Opnd, -1, OpTypes::simm16, 
    OpTypes::AFGR64Opnd, -1, OpTypes::simm16, 
    OpTypes::COP2Opnd, -1, OpTypes::simm16, 
    OpTypes::COP2Opnd, OpTypes::GPR32, OpTypes::simm11, 
    OpTypes::COP2Opnd, -1, OpTypes::simm11, 
    OpTypes::COP3Opnd, -1, OpTypes::simm16, 
    OpTypes::MSA128BOpnd, OpTypes::vsplat_simm10, 
    OpTypes::MSA128DOpnd, OpTypes::vsplat_simm10, 
    OpTypes::MSA128HOpnd, OpTypes::vsplat_simm10, 
    OpTypes::MSA128WOpnd, OpTypes::vsplat_simm10, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::simm18_lsl3, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, OpTypes::GPR64Opnd, 
    OpTypes::AFGR64Opnd, -1, -1, 
    OpTypes::FGR64Opnd, -1, -1, 
    OpTypes::MSA128BOpnd, -1, OpTypes::simm10, 
    OpTypes::MSA128DOpnd, -1, OpTypes::simm10_lsl3, 
    OpTypes::MSA128HOpnd, -1, OpTypes::simm10_lsl1, 
    OpTypes::MSA128WOpnd, -1, OpTypes::simm10_lsl2, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPRMM16Opnd, -1, OpTypes::simm4, 
    OpTypes::GPR32Opnd, -1, -1, 
    OpTypes::GPR32Opnd, -1, -1, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPRMM16Opnd, OpTypes::li16_imm, 
    OpTypes::GPRMM16Opnd, OpTypes::li16_imm, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm12, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm2_plus1, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm2_plus1, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm2_plus1, 
    OpTypes::GPR32Opnd, OpTypes::uimm16, 
    OpTypes::AFGR64Opnd, -1, -1, 
    OpTypes::FGR64Opnd, -1, -1, 
    OpTypes::FGR64Opnd, -1, -1, 
    OpTypes::GPR32Opnd, OpTypes::uimm16_relaxed, 
    OpTypes::GPR64Opnd, OpTypes::uimm16_64_relaxed, 
    OpTypes::GPR32Opnd, OpTypes::uimm16_relaxed, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPRMM16Opnd, -1, OpTypes::simm4, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::FGR32Opnd, -1, OpTypes::simm16, 
    OpTypes::FGR32Opnd, -1, OpTypes::simm16, 
    OpTypes::COP2Opnd, -1, OpTypes::simm16, 
    OpTypes::COP2Opnd, OpTypes::GPR32, OpTypes::simm11, 
    OpTypes::COP2Opnd, -1, OpTypes::simm11, 
    OpTypes::COP3Opnd, -1, OpTypes::simm16, 
    OpTypes::DSPROpnd, -1, OpTypes::simm16, 
    OpTypes::DSPROpnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPRMM16Opnd, -1, OpTypes::simm7_lsl2, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm12, OpTypes::GPR32Opnd, 
    OpTypes::reglist16, -1, OpTypes::uimm8, 
    OpTypes::reglist16, -1, OpTypes::uimm8, 
    OpTypes::reglist, -1, OpTypes::simm12, 
    OpTypes::GPR32Opnd, OpTypes::simm19_lsl2, 
    OpTypes::GPR32Opnd, OpTypes::simm19_lsl2, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, -1, OpTypes::simm12, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm12, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm5, 
    OpTypes::GPR32Opnd, OpTypes::simm19_lsl2, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm12, 
    OpTypes::GPR32Opnd, -1, -1, 
    OpTypes::FGR32Opnd, -1, -1, 
    OpTypes::FGR32Opnd, -1, -1, 
    OpTypes::GPR32Opnd, -1, -1, 
    OpTypes::GPR32Opnd, -1, -1, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::pcrel16, OpTypes::i32imm, 
    OpTypes::CPU16Regs, OpTypes::pcrel16, OpTypes::i32imm, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16RegsPlusSP, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::COP0Opnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, OpTypes::COP0Opnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::COP2Opnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, OpTypes::COP2Opnd, 
    OpTypes::GPR32Opnd, OpTypes::COP0Opnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, OpTypes::COP0Opnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, OpTypes::COP0Opnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::COP2Opnd, 
    OpTypes::GPR32Opnd, OpTypes::COP0Opnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, OpTypes::COP0Opnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm1, OpTypes::uimm3, OpTypes::uimm1, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_simm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPRMM16OpndMovePPairFirst, OpTypes::GPRMM16OpndMovePPairSecond, OpTypes::GPRMM16OpndMoveP, OpTypes::GPRMM16OpndMoveP, 
    OpTypes::GPRMM16OpndMovePPairFirst, OpTypes::GPRMM16OpndMovePPairSecond, OpTypes::GPRMM16OpndMoveP, OpTypes::GPRMM16OpndMoveP, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::FCCRegsOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::FCCRegsOpnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::GPR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::GPR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::GPR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::GPR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::GPR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::GPR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::GPR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::FCCRegsOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::FCCRegsOpnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::FCCRegsOpnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FCCRegsOpnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::GPR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::GPR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::GPR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::GPR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::GPR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR32Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::GPR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::GPR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::COP0Opnd, OpTypes::GPR32Opnd, OpTypes::uimm3, 
    OpTypes::COP0Opnd, OpTypes::GPR32Opnd, OpTypes::uimm3, 
    OpTypes::FGR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::COP2Opnd, OpTypes::GPR32Opnd, OpTypes::uimm3, 
    OpTypes::COP2Opnd, OpTypes::GPR32Opnd, 
    OpTypes::COP0Opnd, OpTypes::GPR32Opnd, OpTypes::uimm3, 
    OpTypes::COP0Opnd, OpTypes::GPR32Opnd, OpTypes::uimm3, 
    OpTypes::COP0Opnd, OpTypes::GPR32Opnd, OpTypes::uimm3, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::GPR32Opnd, 
    OpTypes::COP2Opnd, OpTypes::GPR32Opnd, 
    OpTypes::COP0Opnd, OpTypes::GPR32Opnd, OpTypes::uimm3, 
    OpTypes::COP0Opnd, OpTypes::GPR32Opnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::HI32DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::HI32DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::LO32DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::LO32DSPOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm1, OpTypes::uimm3, OpTypes::uimm1, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, 
    OpTypes::GPR32, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::GPR32, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm8, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm8, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm16, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm16_64, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    /**/
    /**/
    /**/
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::GPR32Opnd, 
    -1, OpTypes::simm16, OpTypes::uimm5, 
    -1, OpTypes::simm9, OpTypes::uimm5, 
    -1, OpTypes::simm9, OpTypes::uimm5, 
    -1, -1, OpTypes::uimm5, 
    -1, OpTypes::simm12, OpTypes::uimm5, 
    -1, OpTypes::simm12, OpTypes::uimm5, 
    -1, OpTypes::simm9, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, OpTypes::GPR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::uimm10, 
    OpTypes::GPR32Opnd, OpTypes::uimm7, 
    OpTypes::GPR32Opnd, OpTypes::HWRegsOpnd, OpTypes::uimm8, 
    OpTypes::GPR64Opnd, OpTypes::HWRegsOpnd, OpTypes::uimm8, 
    OpTypes::GPR32Opnd, OpTypes::HWRegsOpnd, OpTypes::uimm8, 
    OpTypes::GPR32Opnd, OpTypes::HWRegsOpnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::simm10, 
    OpTypes::DSPROpnd, OpTypes::simm10, 
    OpTypes::DSPROpnd, OpTypes::uimm8, 
    OpTypes::DSPROpnd, OpTypes::uimm8, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::AFGR64Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    /**/
    /**/
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::uimm3, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::uimm6, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::uimm4, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::uimm3, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::uimm6, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::uimm4, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPRMM16OpndZero, -1, OpTypes::simm4, 
    OpTypes::GPRMM16OpndZero, -1, OpTypes::simm4, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, -1, OpTypes::simm12, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::uimm20, 
    OpTypes::uimm4, 
    OpTypes::uimm4, 
    OpTypes::uimm10, 
    OpTypes::uimm20, 
    OpTypes::uimm20, 
    OpTypes::AFGR64Opnd, -1, OpTypes::simm16, 
    OpTypes::FGR64Opnd, -1, OpTypes::simm16, 
    OpTypes::FGR64Opnd, -1, OpTypes::simm16, 
    OpTypes::AFGR64Opnd, -1, OpTypes::simm16, 
    OpTypes::COP2Opnd, -1, OpTypes::simm16, 
    OpTypes::COP2Opnd, OpTypes::GPR32, OpTypes::simm11, 
    OpTypes::COP2Opnd, -1, OpTypes::simm11, 
    OpTypes::COP3Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::AFGR64Opnd, -1, -1, 
    OpTypes::FGR64Opnd, -1, -1, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGRCCOpnd, OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::simm10_64, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPRMM16OpndZero, -1, OpTypes::simm4, 
    OpTypes::GPRMM16OpndZero, -1, OpTypes::simm4, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::uimm8, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::uimm8, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::uimm8, 
    OpTypes::ACC64DSPOpnd, OpTypes::simm6, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::GPR32Opnd, OpTypes::ACC64DSPOpnd, 
    OpTypes::ACC64DSPOpnd, OpTypes::simm6, OpTypes::ACC64DSPOpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm4, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm4, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm3, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm3, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm4, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm4, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm4, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm4, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm3, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm3, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm4, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm4, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm3, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm4, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm4, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm3, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::uimm3, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::uimm16, 
    OpTypes::uimm16, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::uimm4, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::uimm1, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::uimm3, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::uimm2, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::uimm3_shift, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::uimm3_shift, 
    OpTypes::GPR64, OpTypes::GPR32, 
    OpTypes::GPR64, OpTypes::GPR64, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm3, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm6, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm4, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR64Opnd, OpTypes::simm16_64, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR64Opnd, OpTypes::simm16_64, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::simm10_64, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm4, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm1, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm3, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm2, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm3, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm6, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm4, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::uimm3, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::uimm6, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::uimm4, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::uimm3_shift, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::uimm3_shift, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm3, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm6, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm4, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::uimm3, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::uimm6, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::uimm4, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    /**/
    /**/
    /**/
    OpTypes::MSA128BOpnd, -1, OpTypes::simm10, 
    OpTypes::MSA128DOpnd, -1, OpTypes::simm10_lsl3, 
    OpTypes::MSA128HOpnd, -1, OpTypes::simm10_lsl1, 
    OpTypes::MSA128WOpnd, -1, OpTypes::simm10_lsl2, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::DSPROpnd, OpTypes::DSPROpnd, OpTypes::DSPROpnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::vsplat_uimm5, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::AFGR64Opnd, -1, -1, 
    OpTypes::FGR64Opnd, -1, -1, 
    OpTypes::FGR64Opnd, -1, -1, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPRMM16OpndZero, -1, OpTypes::simm4, 
    OpTypes::GPRMM16OpndZero, -1, OpTypes::simm4, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::FGR32Opnd, -1, OpTypes::simm16, 
    OpTypes::FGR32Opnd, -1, OpTypes::simm16, 
    OpTypes::COP2Opnd, -1, OpTypes::simm16, 
    OpTypes::COP2Opnd, OpTypes::GPR32, OpTypes::simm11, 
    OpTypes::COP2Opnd, -1, OpTypes::simm11, 
    OpTypes::COP3Opnd, -1, OpTypes::simm16, 
    OpTypes::DSPROpnd, -1, OpTypes::simm16, 
    OpTypes::DSPROpnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm12, 
    OpTypes::reglist16, -1, OpTypes::uimm8, 
    OpTypes::reglist16, -1, OpTypes::uimm8, 
    OpTypes::reglist, -1, OpTypes::simm12, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, -1, OpTypes::simm12, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR64Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm9, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm12, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm5, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm5, 
    OpTypes::FGR32Opnd, -1, -1, 
    OpTypes::FGR32Opnd, -1, -1, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::GPR32Opnd, -1, OpTypes::simm16, 
    OpTypes::uimm5, 
    -1, OpTypes::simm16, 
    -1, OpTypes::simm16, 
    -1, OpTypes::simm16, 
    OpTypes::uimm5, 
    OpTypes::uimm5, 
    OpTypes::uimm20, 
    OpTypes::uimm10, 
    /**/
    /**/
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::uimm5, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::uimm5, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::uimm5, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::simm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16RegsPlusSP, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm10, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm4, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm10, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm10, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm4, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm4, 
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm10, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm10, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm4, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm4, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm10, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm4, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR64Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::AFGR64Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::FGR32Opnd, OpTypes::FGR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::simm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, OpTypes::MSA128DOpnd, 
    OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, OpTypes::MSA128HOpnd, 
    OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, OpTypes::MSA128WOpnd, 
    /**/
    OpTypes::uimm10, 
    OpTypes::uimm10, 
    OpTypes::GPR32Opnd, OpTypes::uimm10, 
    OpTypes::GPR32Opnd, OpTypes::uimm7, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, 
    OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, OpTypes::GPRMM16Opnd, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::vsplat_uimm8, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm16, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
    OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, OpTypes::MSA128BOpnd, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm16, 
    OpTypes::GPR64Opnd, OpTypes::GPR64Opnd, OpTypes::uimm16_64, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, OpTypes::uimm16, 
    OpTypes::CPU16Regs, OpTypes::CPU16Regs, OpTypes::CPU16Regs, 
    OpTypes::GPR32Opnd, OpTypes::GPR32Opnd, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace Mips
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Mips {

enum Arch {
	Arch_dsp,
	Arch_mmdsp,
	Arch_mipsr6,
	Arch_micromipsr6,
	Arch_se,
	Arch_micromips
};

// Dsp2MicroMips
LLVM_READONLY
int Dsp2MicroMips(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Dsp2MicroMipsTable[][3] = {
  { Mips::ABSQ_S_PH, Mips::ABSQ_S_PH, Mips::ABSQ_S_PH_MM },
  { Mips::ABSQ_S_QB, Mips::ABSQ_S_QB, Mips::ABSQ_S_QB_MMR2 },
  { Mips::ABSQ_S_W, Mips::ABSQ_S_W, Mips::ABSQ_S_W_MM },
  { Mips::ADDQH_PH, Mips::ADDQH_PH, Mips::ADDQH_PH_MMR2 },
  { Mips::ADDQH_R_PH, Mips::ADDQH_R_PH, Mips::ADDQH_R_PH_MMR2 },
  { Mips::ADDQH_R_W, Mips::ADDQH_R_W, Mips::ADDQH_R_W_MMR2 },
  { Mips::ADDQH_W, Mips::ADDQH_W, Mips::ADDQH_W_MMR2 },
  { Mips::ADDQ_PH, Mips::ADDQ_PH, Mips::ADDQ_PH_MM },
  { Mips::ADDQ_S_PH, Mips::ADDQ_S_PH, Mips::ADDQ_S_PH_MM },
  { Mips::ADDQ_S_W, Mips::ADDQ_S_W, Mips::ADDQ_S_W_MM },
  { Mips::ADDSC, Mips::ADDSC, Mips::ADDSC_MM },
  { Mips::ADDUH_QB, Mips::ADDUH_QB, Mips::ADDUH_QB_MMR2 },
  { Mips::ADDUH_R_QB, Mips::ADDUH_R_QB, Mips::ADDUH_R_QB_MMR2 },
  { Mips::ADDU_PH, Mips::ADDU_PH, Mips::ADDU_PH_MMR2 },
  { Mips::ADDU_QB, Mips::ADDU_QB, Mips::ADDU_QB_MM },
  { Mips::ADDU_S_PH, Mips::ADDU_S_PH, Mips::ADDU_S_PH_MMR2 },
  { Mips::ADDU_S_QB, Mips::ADDU_S_QB, Mips::ADDU_S_QB_MM },
  { Mips::ADDWC, Mips::ADDWC, Mips::ADDWC_MM },
  { Mips::APPEND, Mips::APPEND, Mips::APPEND_MMR2 },
  { Mips::BALIGN, Mips::BALIGN, Mips::BALIGN_MMR2 },
  { Mips::BITREV, Mips::BITREV, Mips::BITREV_MM },
  { Mips::BPOSGE32, Mips::BPOSGE32, Mips::BPOSGE32_MM },
  { Mips::CMPGDU_EQ_QB, Mips::CMPGDU_EQ_QB, Mips::CMPGDU_EQ_QB_MMR2 },
  { Mips::CMPGDU_LE_QB, Mips::CMPGDU_LE_QB, Mips::CMPGDU_LE_QB_MMR2 },
  { Mips::CMPGDU_LT_QB, Mips::CMPGDU_LT_QB, Mips::CMPGDU_LT_QB_MMR2 },
  { Mips::CMPGU_EQ_QB, Mips::CMPGU_EQ_QB, Mips::CMPGU_EQ_QB_MM },
  { Mips::CMPGU_LE_QB, Mips::CMPGU_LE_QB, Mips::CMPGU_LE_QB_MM },
  { Mips::CMPGU_LT_QB, Mips::CMPGU_LT_QB, Mips::CMPGU_LT_QB_MM },
  { Mips::CMPU_EQ_QB, Mips::CMPU_EQ_QB, Mips::CMPU_EQ_QB_MM },
  { Mips::CMPU_LE_QB, Mips::CMPU_LE_QB, Mips::CMPU_LE_QB_MM },
  { Mips::CMPU_LT_QB, Mips::CMPU_LT_QB, Mips::CMPU_LT_QB_MM },
  { Mips::CMP_EQ_PH, Mips::CMP_EQ_PH, Mips::CMP_EQ_PH_MM },
  { Mips::CMP_LE_PH, Mips::CMP_LE_PH, Mips::CMP_LE_PH_MM },
  { Mips::CMP_LT_PH, Mips::CMP_LT_PH, Mips::CMP_LT_PH_MM },
  { Mips::DPAQX_SA_W_PH, Mips::DPAQX_SA_W_PH, Mips::DPAQX_SA_W_PH_MMR2 },
  { Mips::DPAQX_S_W_PH, Mips::DPAQX_S_W_PH, Mips::DPAQX_S_W_PH_MMR2 },
  { Mips::DPAQ_SA_L_W, Mips::DPAQ_SA_L_W, Mips::DPAQ_SA_L_W_MM },
  { Mips::DPAQ_S_W_PH, Mips::DPAQ_S_W_PH, Mips::DPAQ_S_W_PH_MM },
  { Mips::DPAU_H_QBL, Mips::DPAU_H_QBL, Mips::DPAU_H_QBL_MM },
  { Mips::DPAU_H_QBR, Mips::DPAU_H_QBR, Mips::DPAU_H_QBR_MM },
  { Mips::DPAX_W_PH, Mips::DPAX_W_PH, Mips::DPAX_W_PH_MMR2 },
  { Mips::DPA_W_PH, Mips::DPA_W_PH, Mips::DPA_W_PH_MMR2 },
  { Mips::DPSQX_SA_W_PH, Mips::DPSQX_SA_W_PH, Mips::DPSQX_SA_W_PH_MMR2 },
  { Mips::DPSQX_S_W_PH, Mips::DPSQX_S_W_PH, Mips::DPSQX_S_W_PH_MMR2 },
  { Mips::DPSQ_SA_L_W, Mips::DPSQ_SA_L_W, Mips::DPSQ_SA_L_W_MM },
  { Mips::DPSQ_S_W_PH, Mips::DPSQ_S_W_PH, Mips::DPSQ_S_W_PH_MM },
  { Mips::DPSU_H_QBL, Mips::DPSU_H_QBL, Mips::DPSU_H_QBL_MM },
  { Mips::DPSU_H_QBR, Mips::DPSU_H_QBR, Mips::DPSU_H_QBR_MM },
  { Mips::DPSX_W_PH, Mips::DPSX_W_PH, Mips::DPSX_W_PH_MMR2 },
  { Mips::DPS_W_PH, Mips::DPS_W_PH, Mips::DPS_W_PH_MMR2 },
  { Mips::EXTP, Mips::EXTP, Mips::EXTP_MM },
  { Mips::EXTPDP, Mips::EXTPDP, Mips::EXTPDP_MM },
  { Mips::EXTPDPV, Mips::EXTPDPV, Mips::EXTPDPV_MM },
  { Mips::EXTPV, Mips::EXTPV, Mips::EXTPV_MM },
  { Mips::EXTRV_RS_W, Mips::EXTRV_RS_W, Mips::EXTRV_RS_W_MM },
  { Mips::EXTRV_R_W, Mips::EXTRV_R_W, Mips::EXTRV_R_W_MM },
  { Mips::EXTRV_S_H, Mips::EXTRV_S_H, Mips::EXTRV_S_H_MM },
  { Mips::EXTRV_W, Mips::EXTRV_W, Mips::EXTRV_W_MM },
  { Mips::EXTR_RS_W, Mips::EXTR_RS_W, Mips::EXTR_RS_W_MM },
  { Mips::EXTR_R_W, Mips::EXTR_R_W, Mips::EXTR_R_W_MM },
  { Mips::EXTR_S_H, Mips::EXTR_S_H, Mips::EXTR_S_H_MM },
  { Mips::EXTR_W, Mips::EXTR_W, Mips::EXTR_W_MM },
  { Mips::INSV, Mips::INSV, Mips::INSV_MM },
  { Mips::LBUX, Mips::LBUX, Mips::LBUX_MM },
  { Mips::LHX, Mips::LHX, Mips::LHX_MM },
  { Mips::LWDSP, Mips::LWDSP, Mips::LWDSP_MM },
  { Mips::LWX, Mips::LWX, Mips::LWX_MM },
  { Mips::MADDU_DSP, Mips::MADDU_DSP, Mips::MADDU_DSP_MM },
  { Mips::MADD_DSP, Mips::MADD_DSP, Mips::MADD_DSP_MM },
  { Mips::MAQ_SA_W_PHL, Mips::MAQ_SA_W_PHL, Mips::MAQ_SA_W_PHL_MM },
  { Mips::MAQ_SA_W_PHR, Mips::MAQ_SA_W_PHR, Mips::MAQ_SA_W_PHR_MM },
  { Mips::MAQ_S_W_PHL, Mips::MAQ_S_W_PHL, Mips::MAQ_S_W_PHL_MM },
  { Mips::MAQ_S_W_PHR, Mips::MAQ_S_W_PHR, Mips::MAQ_S_W_PHR_MM },
  { Mips::MFHI_DSP, Mips::MFHI_DSP, Mips::MFHI_DSP_MM },
  { Mips::MFLO_DSP, Mips::MFLO_DSP, Mips::MFLO_DSP_MM },
  { Mips::MODSUB, Mips::MODSUB, Mips::MODSUB_MM },
  { Mips::MSUBU_DSP, Mips::MSUBU_DSP, Mips::MSUBU_DSP_MM },
  { Mips::MSUB_DSP, Mips::MSUB_DSP, Mips::MSUB_DSP_MM },
  { Mips::MTHI_DSP, Mips::MTHI_DSP, Mips::MTHI_DSP_MM },
  { Mips::MTHLIP, Mips::MTHLIP, Mips::MTHLIP_MM },
  { Mips::MTLO_DSP, Mips::MTLO_DSP, Mips::MTLO_DSP_MM },
  { Mips::MULEQ_S_W_PHL, Mips::MULEQ_S_W_PHL, Mips::MULEQ_S_W_PHL_MM },
  { Mips::MULEQ_S_W_PHR, Mips::MULEQ_S_W_PHR, Mips::MULEQ_S_W_PHR_MM },
  { Mips::MULEU_S_PH_QBL, Mips::MULEU_S_PH_QBL, Mips::MULEU_S_PH_QBL_MM },
  { Mips::MULEU_S_PH_QBR, Mips::MULEU_S_PH_QBR, Mips::MULEU_S_PH_QBR_MM },
  { Mips::MULQ_RS_PH, Mips::MULQ_RS_PH, Mips::MULQ_RS_PH_MM },
  { Mips::MULQ_RS_W, Mips::MULQ_RS_W, Mips::MULQ_RS_W_MMR2 },
  { Mips::MULQ_S_PH, Mips::MULQ_S_PH, Mips::MULQ_S_PH_MMR2 },
  { Mips::MULQ_S_W, Mips::MULQ_S_W, Mips::MULQ_S_W_MMR2 },
  { Mips::MULSAQ_S_W_PH, Mips::MULSAQ_S_W_PH, Mips::MULSAQ_S_W_PH_MM },
  { Mips::MULSA_W_PH, Mips::MULSA_W_PH, Mips::MULSA_W_PH_MMR2 },
  { Mips::MULTU_DSP, Mips::MULTU_DSP, Mips::MULTU_DSP_MM },
  { Mips::MULT_DSP, Mips::MULT_DSP, Mips::MULT_DSP_MM },
  { Mips::MUL_PH, Mips::MUL_PH, Mips::MUL_PH_MMR2 },
  { Mips::MUL_S_PH, Mips::MUL_S_PH, Mips::MUL_S_PH_MMR2 },
  { Mips::PACKRL_PH, Mips::PACKRL_PH, Mips::PACKRL_PH_MM },
  { Mips::PICK_PH, Mips::PICK_PH, Mips::PICK_PH_MM },
  { Mips::PICK_QB, Mips::PICK_QB, Mips::PICK_QB_MM },
  { Mips::PRECEQU_PH_QBL, Mips::PRECEQU_PH_QBL, Mips::PRECEQU_PH_QBL_MM },
  { Mips::PRECEQU_PH_QBLA, Mips::PRECEQU_PH_QBLA, Mips::PRECEQU_PH_QBLA_MM },
  { Mips::PRECEQU_PH_QBR, Mips::PRECEQU_PH_QBR, Mips::PRECEQU_PH_QBR_MM },
  { Mips::PRECEQU_PH_QBRA, Mips::PRECEQU_PH_QBRA, Mips::PRECEQU_PH_QBRA_MM },
  { Mips::PRECEQ_W_PHL, Mips::PRECEQ_W_PHL, Mips::PRECEQ_W_PHL_MM },
  { Mips::PRECEQ_W_PHR, Mips::PRECEQ_W_PHR, Mips::PRECEQ_W_PHR_MM },
  { Mips::PRECEU_PH_QBL, Mips::PRECEU_PH_QBL, Mips::PRECEU_PH_QBL_MM },
  { Mips::PRECEU_PH_QBLA, Mips::PRECEU_PH_QBLA, Mips::PRECEU_PH_QBLA_MM },
  { Mips::PRECEU_PH_QBR, Mips::PRECEU_PH_QBR, Mips::PRECEU_PH_QBR_MM },
  { Mips::PRECEU_PH_QBRA, Mips::PRECEU_PH_QBRA, Mips::PRECEU_PH_QBRA_MM },
  { Mips::PRECRQU_S_QB_PH, Mips::PRECRQU_S_QB_PH, Mips::PRECRQU_S_QB_PH_MM },
  { Mips::PRECRQ_PH_W, Mips::PRECRQ_PH_W, Mips::PRECRQ_PH_W_MM },
  { Mips::PRECRQ_QB_PH, Mips::PRECRQ_QB_PH, Mips::PRECRQ_QB_PH_MM },
  { Mips::PRECRQ_RS_PH_W, Mips::PRECRQ_RS_PH_W, Mips::PRECRQ_RS_PH_W_MM },
  { Mips::PRECR_QB_PH, Mips::PRECR_QB_PH, Mips::PRECR_QB_PH_MMR2 },
  { Mips::PRECR_SRA_PH_W, Mips::PRECR_SRA_PH_W, Mips::PRECR_SRA_PH_W_MMR2 },
  { Mips::PRECR_SRA_R_PH_W, Mips::PRECR_SRA_R_PH_W, Mips::PRECR_SRA_R_PH_W_MMR2 },
  { Mips::PREPEND, Mips::PREPEND, Mips::PREPEND_MMR2 },
  { Mips::RADDU_W_QB, Mips::RADDU_W_QB, Mips::RADDU_W_QB_MM },
  { Mips::RDDSP, Mips::RDDSP, Mips::RDDSP_MM },
  { Mips::REPLV_PH, Mips::REPLV_PH, Mips::REPLV_PH_MM },
  { Mips::REPLV_QB, Mips::REPLV_QB, Mips::REPLV_QB_MM },
  { Mips::REPL_PH, Mips::REPL_PH, Mips::REPL_PH_MM },
  { Mips::REPL_QB, Mips::REPL_QB, Mips::REPL_QB_MM },
  { Mips::SHILO, Mips::SHILO, Mips::SHILO_MM },
  { Mips::SHILOV, Mips::SHILOV, Mips::SHILOV_MM },
  { Mips::SHLLV_PH, Mips::SHLLV_PH, Mips::SHLLV_PH_MM },
  { Mips::SHLLV_QB, Mips::SHLLV_QB, Mips::SHLLV_QB_MM },
  { Mips::SHLLV_S_PH, Mips::SHLLV_S_PH, Mips::SHLLV_S_PH_MM },
  { Mips::SHLLV_S_W, Mips::SHLLV_S_W, Mips::SHLLV_S_W_MM },
  { Mips::SHLL_PH, Mips::SHLL_PH, Mips::SHLL_PH_MM },
  { Mips::SHLL_QB, Mips::SHLL_QB, Mips::SHLL_QB_MM },
  { Mips::SHLL_S_PH, Mips::SHLL_S_PH, Mips::SHLL_S_PH_MM },
  { Mips::SHLL_S_W, Mips::SHLL_S_W, Mips::SHLL_S_W_MM },
  { Mips::SHRAV_PH, Mips::SHRAV_PH, Mips::SHRAV_PH_MM },
  { Mips::SHRAV_QB, Mips::SHRAV_QB, Mips::SHRAV_QB_MMR2 },
  { Mips::SHRAV_R_PH, Mips::SHRAV_R_PH, Mips::SHRAV_R_PH_MM },
  { Mips::SHRAV_R_QB, Mips::SHRAV_R_QB, Mips::SHRAV_R_QB_MMR2 },
  { Mips::SHRAV_R_W, Mips::SHRAV_R_W, Mips::SHRAV_R_W_MM },
  { Mips::SHRA_PH, Mips::SHRA_PH, Mips::SHRA_PH_MM },
  { Mips::SHRA_QB, Mips::SHRA_QB, Mips::SHRA_QB_MMR2 },
  { Mips::SHRA_R_PH, Mips::SHRA_R_PH, Mips::SHRA_R_PH_MM },
  { Mips::SHRA_R_QB, Mips::SHRA_R_QB, Mips::SHRA_R_QB_MMR2 },
  { Mips::SHRA_R_W, Mips::SHRA_R_W, Mips::SHRA_R_W_MM },
  { Mips::SHRLV_PH, Mips::SHRLV_PH, Mips::SHRLV_PH_MMR2 },
  { Mips::SHRLV_QB, Mips::SHRLV_QB, Mips::SHRLV_QB_MM },
  { Mips::SHRL_PH, Mips::SHRL_PH, Mips::SHRL_PH_MMR2 },
  { Mips::SHRL_QB, Mips::SHRL_QB, Mips::SHRL_QB_MM },
  { Mips::SUBQH_PH, Mips::SUBQH_PH, Mips::SUBQH_PH_MMR2 },
  { Mips::SUBQH_R_PH, Mips::SUBQH_R_PH, Mips::SUBQH_R_PH_MMR2 },
  { Mips::SUBQH_R_W, Mips::SUBQH_R_W, Mips::SUBQH_R_W_MMR2 },
  { Mips::SUBQH_W, Mips::SUBQH_W, Mips::SUBQH_W_MMR2 },
  { Mips::SUBQ_PH, Mips::SUBQ_PH, Mips::SUBQ_PH_MM },
  { Mips::SUBQ_S_PH, Mips::SUBQ_S_PH, Mips::SUBQ_S_PH_MM },
  { Mips::SUBQ_S_W, Mips::SUBQ_S_W, Mips::SUBQ_S_W_MM },
  { Mips::SUBUH_QB, Mips::SUBUH_QB, Mips::SUBUH_QB_MMR2 },
  { Mips::SUBUH_R_QB, Mips::SUBUH_R_QB, Mips::SUBUH_R_QB_MMR2 },
  { Mips::SUBU_PH, Mips::SUBU_PH, Mips::SUBU_PH_MMR2 },
  { Mips::SUBU_QB, Mips::SUBU_QB, Mips::SUBU_QB_MM },
  { Mips::SUBU_S_PH, Mips::SUBU_S_PH, Mips::SUBU_S_PH_MMR2 },
  { Mips::SUBU_S_QB, Mips::SUBU_S_QB, Mips::SUBU_S_QB_MM },
  { Mips::SWDSP, Mips::SWDSP, Mips::SWDSP_MM },
}; // End of Dsp2MicroMipsTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 160;
  while (start < end) {
    mid = start + (end - start) / 2;
    if (Opcode == Dsp2MicroMipsTable[mid][0]) {
      break;
    }
    if (Opcode < Dsp2MicroMipsTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_dsp)
    return Dsp2MicroMipsTable[mid][1];
  if (inArch == Arch_mmdsp)
    return Dsp2MicroMipsTable[mid][2];
  return -1;}

// MipsR62MicroMipsR6
LLVM_READONLY
int MipsR62MicroMipsR6(uint16_t Opcode, enum Arch inArch) {
static const uint16_t MipsR62MicroMipsR6Table[][3] = {
  { Mips::ADDIUPC, Mips::ADDIUPC, Mips::ADDIUPC_MMR6 },
  { Mips::ALIGN, Mips::ALIGN, Mips::ALIGN_MMR6 },
  { Mips::ALUIPC, Mips::ALUIPC, Mips::ALUIPC_MMR6 },
  { Mips::AUI, Mips::AUI, Mips::AUI_MMR6 },
  { Mips::AUIPC, Mips::AUIPC, Mips::AUIPC_MMR6 },
  { Mips::BALC, Mips::BALC, Mips::BALC_MMR6 },
  { Mips::BC, Mips::BC, Mips::BC_MMR6 },
  { Mips::BEQC, Mips::BEQC, Mips::BEQC_MMR6 },
  { Mips::BEQZALC, Mips::BEQZALC, Mips::BEQZALC_MMR6 },
  { Mips::BEQZC, Mips::BEQZC, Mips::BEQZC_MMR6 },
  { Mips::BGEC, Mips::BGEC, Mips::BGEC_MMR6 },
  { Mips::BGEUC, Mips::BGEUC, Mips::BGEUC_MMR6 },
  { Mips::BGEZALC, Mips::BGEZALC, Mips::BGEZALC_MMR6 },
  { Mips::BGEZC, Mips::BGEZC, Mips::BGEZC_MMR6 },
  { Mips::BGTZALC, Mips::BGTZALC, Mips::BGTZALC_MMR6 },
  { Mips::BGTZC, Mips::BGTZC, Mips::BGTZC_MMR6 },
  { Mips::BITSWAP, Mips::BITSWAP, Mips::BITSWAP_MMR6 },
  { Mips::BLEZALC, Mips::BLEZALC, Mips::BLEZALC_MMR6 },
  { Mips::BLEZC, Mips::BLEZC, Mips::BLEZC_MMR6 },
  { Mips::BLTC, Mips::BLTC, Mips::BLTC_MMR6 },
  { Mips::BLTUC, Mips::BLTUC, Mips::BLTUC_MMR6 },
  { Mips::BLTZALC, Mips::BLTZALC, Mips::BLTZALC_MMR6 },
  { Mips::BLTZC, Mips::BLTZC, Mips::BLTZC_MMR6 },
  { Mips::BNEC, Mips::BNEC, Mips::BNEC_MMR6 },
  { Mips::BNEZALC, Mips::BNEZALC, Mips::BNEZALC_MMR6 },
  { Mips::BNEZC, Mips::BNEZC, Mips::BNEZC_MMR6 },
  { Mips::BNVC, Mips::BNVC, Mips::BNVC_MMR6 },
  { Mips::BOVC, Mips::BOVC, Mips::BOVC_MMR6 },
  { Mips::CACHE_R6, Mips::CACHE_R6, Mips::CACHE_MMR6 },
  { Mips::CLO_R6, Mips::CLO_R6, Mips::CLO_MMR6 },
  { Mips::CLZ_R6, Mips::CLZ_R6, Mips::CLZ_MMR6 },
  { Mips::CMP_EQ_D, Mips::CMP_EQ_D, Mips::CMP_EQ_D_MMR6 },
  { Mips::CMP_EQ_S, Mips::CMP_EQ_S, Mips::CMP_EQ_S_MMR6 },
  { Mips::CMP_F_D, Mips::CMP_F_D, Mips::CMP_AF_D_MMR6 },
  { Mips::CMP_F_S, Mips::CMP_F_S, Mips::CMP_AF_S_MMR6 },
  { Mips::CMP_LE_D, Mips::CMP_LE_D, Mips::CMP_LE_D_MMR6 },
  { Mips::CMP_LE_S, Mips::CMP_LE_S, Mips::CMP_LE_S_MMR6 },
  { Mips::CMP_LT_D, Mips::CMP_LT_D, Mips::CMP_LT_D_MMR6 },
  { Mips::CMP_LT_S, Mips::CMP_LT_S, Mips::CMP_LT_S_MMR6 },
  { Mips::CMP_SAF_D, Mips::CMP_SAF_D, Mips::CMP_SAF_D_MMR6 },
  { Mips::CMP_SAF_S, Mips::CMP_SAF_S, Mips::CMP_SAF_S_MMR6 },
  { Mips::CMP_SEQ_D, Mips::CMP_SEQ_D, Mips::CMP_SEQ_D_MMR6 },
  { Mips::CMP_SEQ_S, Mips::CMP_SEQ_S, Mips::CMP_SEQ_S_MMR6 },
  { Mips::CMP_SLE_D, Mips::CMP_SLE_D, Mips::CMP_SLE_D_MMR6 },
  { Mips::CMP_SLE_S, Mips::CMP_SLE_S, Mips::CMP_SLE_S_MMR6 },
  { Mips::CMP_SLT_D, Mips::CMP_SLT_D, Mips::CMP_SLT_D_MMR6 },
  { Mips::CMP_SLT_S, Mips::CMP_SLT_S, Mips::CMP_SLT_S_MMR6 },
  { Mips::CMP_SUEQ_D, Mips::CMP_SUEQ_D, Mips::CMP_SUEQ_D_MMR6 },
  { Mips::CMP_SUEQ_S, Mips::CMP_SUEQ_S, Mips::CMP_SUEQ_S_MMR6 },
  { Mips::CMP_SULE_D, Mips::CMP_SULE_D, Mips::CMP_SULE_D_MMR6 },
  { Mips::CMP_SULE_S, Mips::CMP_SULE_S, Mips::CMP_SULE_S_MMR6 },
  { Mips::CMP_SULT_D, Mips::CMP_SULT_D, Mips::CMP_SULT_D_MMR6 },
  { Mips::CMP_SULT_S, Mips::CMP_SULT_S, Mips::CMP_SULT_S_MMR6 },
  { Mips::CMP_SUN_D, Mips::CMP_SUN_D, Mips::CMP_SUN_D_MMR6 },
  { Mips::CMP_SUN_S, Mips::CMP_SUN_S, Mips::CMP_SUN_S_MMR6 },
  { Mips::CMP_UEQ_D, Mips::CMP_UEQ_D, Mips::CMP_UEQ_D_MMR6 },
  { Mips::CMP_UEQ_S, Mips::CMP_UEQ_S, Mips::CMP_UEQ_S_MMR6 },
  { Mips::CMP_ULE_D, Mips::CMP_ULE_D, Mips::CMP_ULE_D_MMR6 },
  { Mips::CMP_ULE_S, Mips::CMP_ULE_S, Mips::CMP_ULE_S_MMR6 },
  { Mips::CMP_ULT_D, Mips::CMP_ULT_D, Mips::CMP_ULT_D_MMR6 },
  { Mips::CMP_ULT_S, Mips::CMP_ULT_S, Mips::CMP_ULT_S_MMR6 },
  { Mips::CMP_UN_D, Mips::CMP_UN_D, Mips::CMP_UN_D_MMR6 },
  { Mips::CMP_UN_S, Mips::CMP_UN_S, Mips::CMP_UN_S_MMR6 },
  { Mips::CRC32B, Mips::CRC32B, (uint16_t)-1U },
  { Mips::CRC32CB, Mips::CRC32CB, (uint16_t)-1U },
  { Mips::CRC32CD, Mips::CRC32CD, (uint16_t)-1U },
  { Mips::CRC32CH, Mips::CRC32CH, (uint16_t)-1U },
  { Mips::CRC32CW, Mips::CRC32CW, (uint16_t)-1U },
  { Mips::CRC32D, Mips::CRC32D, (uint16_t)-1U },
  { Mips::CRC32H, Mips::CRC32H, (uint16_t)-1U },
  { Mips::CRC32W, Mips::CRC32W, (uint16_t)-1U },
  { Mips::DIV, Mips::DIV, Mips::DIV_MMR6 },
  { Mips::DIVU, Mips::DIVU, Mips::DIVU_MMR6 },
  { Mips::DVP, Mips::DVP, Mips::DVP_MMR6 },
  { Mips::EVP, Mips::EVP, Mips::EVP_MMR6 },
  { Mips::GINVI, Mips::GINVI, Mips::GINVI_MMR6 },
  { Mips::GINVT, Mips::GINVT, Mips::GINVT_MMR6 },
  { Mips::JIALC, Mips::JIALC, Mips::JIALC_MMR6 },
  { Mips::JIC, Mips::JIC, Mips::JIC_MMR6 },
  { Mips::LSA_R6, Mips::LSA_R6, Mips::LSA_MMR6 },
  { Mips::LWPC, Mips::LWPC, Mips::LWPC_MMR6 },
  { Mips::MOD, Mips::MOD, Mips::MOD_MMR6 },
  { Mips::MODU, Mips::MODU, Mips::MODU_MMR6 },
  { Mips::MUH, Mips::MUH, Mips::MUH_MMR6 },
  { Mips::MUHU, Mips::MUHU, Mips::MUHU_MMR6 },
  { Mips::MULU, Mips::MULU, Mips::MULU_MMR6 },
  { Mips::MUL_R6, Mips::MUL_R6, Mips::MUL_MMR6 },
  { Mips::PREF_R6, Mips::PREF_R6, Mips::PREF_MMR6 },
  { Mips::SELEQZ, Mips::SELEQZ, Mips::SELEQZ_MMR6 },
  { Mips::SELEQZ_D, Mips::SELEQZ_D, Mips::SELEQZ_D_MMR6 },
  { Mips::SELEQZ_S, Mips::SELEQZ_S, Mips::SELEQZ_S_MMR6 },
  { Mips::SELNEZ, Mips::SELNEZ, Mips::SELNEZ_MMR6 },
  { Mips::SELNEZ_D, Mips::SELNEZ_D, Mips::SELNEZ_D_MMR6 },
  { Mips::SELNEZ_S, Mips::SELNEZ_S, Mips::SELNEZ_S_MMR6 },
  { Mips::SEL_D, Mips::SEL_D, Mips::SEL_D_MMR6 },
  { Mips::SEL_S, Mips::SEL_S, Mips::SEL_S_MMR6 },
}; // End of MipsR62MicroMipsR6Table

  unsigned mid;
  unsigned start = 0;
  unsigned end = 96;
  while (start < end) {
    mid = start + (end - start) / 2;
    if (Opcode == MipsR62MicroMipsR6Table[mid][0]) {
      break;
    }
    if (Opcode < MipsR62MicroMipsR6Table[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_mipsr6)
    return MipsR62MicroMipsR6Table[mid][1];
  if (inArch == Arch_micromipsr6)
    return MipsR62MicroMipsR6Table[mid][2];
  return -1;}

// Std2MicroMips
LLVM_READONLY
int Std2MicroMips(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsTable[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MM },
  { Mips::ADDi, Mips::ADDi, Mips::ADDi_MM },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDiu_MM },
  { Mips::ADDu, Mips::ADDu, Mips::ADDu_MM },
  { Mips::AND, Mips::AND, Mips::AND_MM },
  { Mips::ANDi, Mips::ANDi, Mips::ANDi_MM },
  { Mips::BC1F, Mips::BC1F, Mips::BC1F_MM },
  { Mips::BC1FL, Mips::BC1FL, (uint16_t)-1U },
  { Mips::BC1T, Mips::BC1T, Mips::BC1T_MM },
  { Mips::BC1TL, Mips::BC1TL, (uint16_t)-1U },
  { Mips::BEQ, Mips::BEQ, Mips::BEQ_MM },
  { Mips::BEQL, Mips::BEQL, (uint16_t)-1U },
  { Mips::BGEZ, Mips::BGEZ, Mips::BGEZ_MM },
  { Mips::BGEZAL, Mips::BGEZAL, Mips::BGEZAL_MM },
  { Mips::BGEZALL, Mips::BGEZALL, (uint16_t)-1U },
  { Mips::BGEZL, Mips::BGEZL, (uint16_t)-1U },
  { Mips::BGTZ, Mips::BGTZ, Mips::BGTZ_MM },
  { Mips::BGTZL, Mips::BGTZL, (uint16_t)-1U },
  { Mips::BLEZ, Mips::BLEZ, Mips::BLEZ_MM },
  { Mips::BLEZL, Mips::BLEZL, (uint16_t)-1U },
  { Mips::BLTZ, Mips::BLTZ, Mips::BLTZ_MM },
  { Mips::BLTZAL, Mips::BLTZAL, Mips::BLTZAL_MM },
  { Mips::BLTZALL, Mips::BLTZALL, (uint16_t)-1U },
  { Mips::BLTZL, Mips::BLTZL, (uint16_t)-1U },
  { Mips::BNE, Mips::BNE, Mips::BNE_MM },
  { Mips::BNEL, Mips::BNEL, (uint16_t)-1U },
  { Mips::BREAK, Mips::BREAK, Mips::BREAK_MM },
  { Mips::CACHE, Mips::CACHE, Mips::CACHE_MM },
  { Mips::CACHEE, Mips::CACHEE, Mips::CACHEE_MM },
  { Mips::CEIL_W_D32, Mips::CEIL_W_D32, Mips::CEIL_W_MM },
  { Mips::CEIL_W_S, Mips::CEIL_W_S, Mips::CEIL_W_S_MM },
  { Mips::CFC1, Mips::CFC1, Mips::CFC1_MM },
  { Mips::CLO, Mips::CLO, Mips::CLO_MM },
  { Mips::CLZ, Mips::CLZ, Mips::CLZ_MM },
  { Mips::CTC1, Mips::CTC1, Mips::CTC1_MM },
  { Mips::CVT_D32_S, Mips::CVT_D32_S, Mips::CVT_D32_S_MM },
  { Mips::CVT_D32_W, Mips::CVT_D32_W, Mips::CVT_D32_W_MM },
  { Mips::CVT_L_D64, Mips::CVT_L_D64, Mips::CVT_L_D64_MM },
  { Mips::CVT_L_S, Mips::CVT_L_S, Mips::CVT_L_S_MM },
  { Mips::CVT_S_D32, Mips::CVT_S_D32, Mips::CVT_S_D32_MM },
  { Mips::CVT_S_W, Mips::CVT_S_W, Mips::CVT_S_W_MM },
  { Mips::CVT_W_D32, Mips::CVT_W_D32, Mips::CVT_W_D32_MM },
  { Mips::CVT_W_S, Mips::CVT_W_S, Mips::CVT_W_S_MM },
  { Mips::C_EQ_D32, Mips::C_EQ_D32, Mips::C_EQ_D32_MM },
  { Mips::C_EQ_D64, Mips::C_EQ_D64, Mips::C_EQ_D64_MM },
  { Mips::C_EQ_S, Mips::C_EQ_S, Mips::C_EQ_S_MM },
  { Mips::C_F_D32, Mips::C_F_D32, Mips::C_F_D32_MM },
  { Mips::C_F_D64, Mips::C_F_D64, Mips::C_F_D64_MM },
  { Mips::C_F_S, Mips::C_F_S, Mips::C_F_S_MM },
  { Mips::C_LE_D32, Mips::C_LE_D32, Mips::C_LE_D32_MM },
  { Mips::C_LE_D64, Mips::C_LE_D64, Mips::C_LE_D64_MM },
  { Mips::C_LE_S, Mips::C_LE_S, Mips::C_LE_S_MM },
  { Mips::C_LT_D32, Mips::C_LT_D32, Mips::C_LT_D32_MM },
  { Mips::C_LT_D64, Mips::C_LT_D64, Mips::C_LT_D64_MM },
  { Mips::C_LT_S, Mips::C_LT_S, Mips::C_LT_S_MM },
  { Mips::C_NGE_D32, Mips::C_NGE_D32, Mips::C_NGE_D32_MM },
  { Mips::C_NGE_D64, Mips::C_NGE_D64, Mips::C_NGE_D64_MM },
  { Mips::C_NGE_S, Mips::C_NGE_S, Mips::C_NGE_S_MM },
  { Mips::C_NGLE_D32, Mips::C_NGLE_D32, Mips::C_NGLE_D32_MM },
  { Mips::C_NGLE_D64, Mips::C_NGLE_D64, Mips::C_NGLE_D64_MM },
  { Mips::C_NGLE_S, Mips::C_NGLE_S, Mips::C_NGLE_S_MM },
  { Mips::C_NGL_D32, Mips::C_NGL_D32, Mips::C_NGL_D32_MM },
  { Mips::C_NGL_D64, Mips::C_NGL_D64, Mips::C_NGL_D64_MM },
  { Mips::C_NGL_S, Mips::C_NGL_S, Mips::C_NGL_S_MM },
  { Mips::C_NGT_D32, Mips::C_NGT_D32, Mips::C_NGT_D32_MM },
  { Mips::C_NGT_D64, Mips::C_NGT_D64, Mips::C_NGT_D64_MM },
  { Mips::C_NGT_S, Mips::C_NGT_S, Mips::C_NGT_S_MM },
  { Mips::C_OLE_D32, Mips::C_OLE_D32, Mips::C_OLE_D32_MM },
  { Mips::C_OLE_D64, Mips::C_OLE_D64, Mips::C_OLE_D64_MM },
  { Mips::C_OLE_S, Mips::C_OLE_S, Mips::C_OLE_S_MM },
  { Mips::C_OLT_D32, Mips::C_OLT_D32, Mips::C_OLT_D32_MM },
  { Mips::C_OLT_D64, Mips::C_OLT_D64, Mips::C_OLT_D64_MM },
  { Mips::C_OLT_S, Mips::C_OLT_S, Mips::C_OLT_S_MM },
  { Mips::C_SEQ_D32, Mips::C_SEQ_D32, Mips::C_SEQ_D32_MM },
  { Mips::C_SEQ_D64, Mips::C_SEQ_D64, Mips::C_SEQ_D64_MM },
  { Mips::C_SEQ_S, Mips::C_SEQ_S, Mips::C_SEQ_S_MM },
  { Mips::C_SF_D32, Mips::C_SF_D32, Mips::C_SF_D32_MM },
  { Mips::C_SF_D64, Mips::C_SF_D64, Mips::C_SF_D64_MM },
  { Mips::C_SF_S, Mips::C_SF_S, Mips::C_SF_S_MM },
  { Mips::C_UEQ_D32, Mips::C_UEQ_D32, Mips::C_UEQ_D32_MM },
  { Mips::C_UEQ_D64, Mips::C_UEQ_D64, Mips::C_UEQ_D64_MM },
  { Mips::C_UEQ_S, Mips::C_UEQ_S, Mips::C_UEQ_S_MM },
  { Mips::C_ULE_D32, Mips::C_ULE_D32, Mips::C_ULE_D32_MM },
  { Mips::C_ULE_D64, Mips::C_ULE_D64, Mips::C_ULE_D64_MM },
  { Mips::C_ULE_S, Mips::C_ULE_S, Mips::C_ULE_S_MM },
  { Mips::C_ULT_D32, Mips::C_ULT_D32, Mips::C_ULT_D32_MM },
  { Mips::C_ULT_D64, Mips::C_ULT_D64, Mips::C_ULT_D64_MM },
  { Mips::C_ULT_S, Mips::C_ULT_S, Mips::C_ULT_S_MM },
  { Mips::C_UN_D32, Mips::C_UN_D32, Mips::C_UN_D32_MM },
  { Mips::C_UN_D64, Mips::C_UN_D64, Mips::C_UN_D64_MM },
  { Mips::C_UN_S, Mips::C_UN_S, Mips::C_UN_S_MM },
  { Mips::DERET, Mips::DERET, Mips::DERET_MM },
  { Mips::DI, Mips::DI, Mips::DI_MM },
  { Mips::EHB, Mips::EHB, Mips::EHB_MM },
  { Mips::EI, Mips::EI, Mips::EI_MM },
  { Mips::ERET, Mips::ERET, Mips::ERET_MM },
  { Mips::ERETNC, Mips::ERETNC, (uint16_t)-1U },
  { Mips::EXT, Mips::EXT, Mips::EXT_MM },
  { Mips::FABS_D32, Mips::FABS_D32, Mips::FABS_D32_MM },
  { Mips::FABS_S, Mips::FABS_S, Mips::FABS_S_MM },
  { Mips::FADD_D32, Mips::FADD_D32, Mips::FADD_D32_MM },
  { Mips::FADD_S, Mips::FADD_S, Mips::FADD_S_MM },
  { Mips::FCMP_D32, Mips::FCMP_D32, Mips::FCMP_D32_MM },
  { Mips::FCMP_S32, Mips::FCMP_S32, Mips::FCMP_S32_MM },
  { Mips::FDIV_D32, Mips::FDIV_D32, Mips::FDIV_D32_MM },
  { Mips::FDIV_S, Mips::FDIV_S, Mips::FDIV_S_MM },
  { Mips::FLOOR_W_D32, Mips::FLOOR_W_D32, Mips::FLOOR_W_MM },
  { Mips::FLOOR_W_S, Mips::FLOOR_W_S, Mips::FLOOR_W_S_MM },
  { Mips::FMOV_D32, Mips::FMOV_D32, Mips::FMOV_D32_MM },
  { Mips::FMOV_S, Mips::FMOV_S, Mips::FMOV_S_MM },
  { Mips::FMUL_D32, Mips::FMUL_D32, Mips::FMUL_D32_MM },
  { Mips::FMUL_S, Mips::FMUL_S, Mips::FMUL_S_MM },
  { Mips::FNEG_D32, Mips::FNEG_D32, Mips::FNEG_D32_MM },
  { Mips::FNEG_S, Mips::FNEG_S, Mips::FNEG_S_MM },
  { Mips::FSQRT_D32, Mips::FSQRT_D32, Mips::FSQRT_D32_MM },
  { Mips::FSQRT_S, Mips::FSQRT_S, Mips::FSQRT_S_MM },
  { Mips::FSUB_D32, Mips::FSUB_D32, Mips::FSUB_D32_MM },
  { Mips::FSUB_S, Mips::FSUB_S, Mips::FSUB_S_MM },
  { Mips::HYPCALL, Mips::HYPCALL, Mips::HYPCALL_MM },
  { Mips::INS, Mips::INS, Mips::INS_MM },
  { Mips::J, Mips::J, Mips::J_MM },
  { Mips::JAL, Mips::JAL, Mips::JAL_MM },
  { Mips::JALX, Mips::JALX, Mips::JALX_MM },
  { Mips::JR, Mips::JR, Mips::JR_MM },
  { Mips::LB, Mips::LB, Mips::LB_MM },
  { Mips::LBE, Mips::LBE, Mips::LBE_MM },
  { Mips::LBu, Mips::LBu, Mips::LBu_MM },
  { Mips::LBuE, Mips::LBuE, Mips::LBuE_MM },
  { Mips::LDC1, Mips::LDC1, Mips::LDC1_MM },
  { Mips::LEA_ADDiu, Mips::LEA_ADDiu, Mips::LEA_ADDiu_MM },
  { Mips::LH, Mips::LH, Mips::LH_MM },
  { Mips::LHE, Mips::LHE, Mips::LHE_MM },
  { Mips::LHu, Mips::LHu, Mips::LHu_MM },
  { Mips::LHuE, Mips::LHuE, Mips::LHuE_MM },
  { Mips::LLE, Mips::LLE, Mips::LLE_MM },
  { Mips::LUXC1, Mips::LUXC1, Mips::LUXC1_MM },
  { Mips::LUi, Mips::LUi, Mips::LUi_MM },
  { Mips::LW, Mips::LW, Mips::LW_MM },
  { Mips::LWC1, Mips::LWC1, Mips::LWC1_MM },
  { Mips::LWE, Mips::LWE, Mips::LWE_MM },
  { Mips::LWL, Mips::LWL, Mips::LWL_MM },
  { Mips::LWLE, Mips::LWLE, Mips::LWLE_MM },
  { Mips::LWR, Mips::LWR, Mips::LWR_MM },
  { Mips::LWRE, Mips::LWRE, Mips::LWRE_MM },
  { Mips::LWXC1, Mips::LWXC1, Mips::LWXC1_MM },
  { Mips::LWu, Mips::LWu, Mips::LWU_MM },
  { Mips::MADD, Mips::MADD, Mips::MADD_MM },
  { Mips::MADDU, Mips::MADDU, Mips::MADDU_MM },
  { Mips::MADD_D32, Mips::MADD_D32, Mips::MADD_D32_MM },
  { Mips::MADD_S, Mips::MADD_S, Mips::MADD_S_MM },
  { Mips::MFC1, Mips::MFC1, Mips::MFC1_MM },
  { Mips::MFGC0, Mips::MFGC0, Mips::MFGC0_MM },
  { Mips::MFHC1_D32, Mips::MFHC1_D32, Mips::MFHC1_D32_MM },
  { Mips::MFHGC0, Mips::MFHGC0, Mips::MFHGC0_MM },
  { Mips::MFHI, Mips::MFHI, Mips::MFHI_MM },
  { Mips::MFLO, Mips::MFLO, Mips::MFLO_MM },
  { Mips::MOVF_D32, Mips::MOVF_D32, Mips::MOVF_D32_MM },
  { Mips::MOVF_I, Mips::MOVF_I, Mips::MOVF_I_MM },
  { Mips::MOVF_S, Mips::MOVF_S, Mips::MOVF_S_MM },
  { Mips::MOVN_I_D32, Mips::MOVN_I_D32, Mips::MOVN_I_D32_MM },
  { Mips::MOVN_I_I, Mips::MOVN_I_I, Mips::MOVN_I_MM },
  { Mips::MOVN_I_S, Mips::MOVN_I_S, Mips::MOVN_I_S_MM },
  { Mips::MOVT_D32, Mips::MOVT_D32, Mips::MOVT_D32_MM },
  { Mips::MOVT_I, Mips::MOVT_I, Mips::MOVT_I_MM },
  { Mips::MOVT_S, Mips::MOVT_S, Mips::MOVT_S_MM },
  { Mips::MOVZ_I_D32, Mips::MOVZ_I_D32, Mips::MOVZ_I_D32_MM },
  { Mips::MOVZ_I_I, Mips::MOVZ_I_I, Mips::MOVZ_I_MM },
  { Mips::MOVZ_I_S, Mips::MOVZ_I_S, Mips::MOVZ_I_S_MM },
  { Mips::MSUB, Mips::MSUB, Mips::MSUB_MM },
  { Mips::MSUBU, Mips::MSUBU, Mips::MSUBU_MM },
  { Mips::MSUB_D32, Mips::MSUB_D32, Mips::MSUB_D32_MM },
  { Mips::MSUB_S, Mips::MSUB_S, Mips::MSUB_S_MM },
  { Mips::MTC1, Mips::MTC1, Mips::MTC1_MM },
  { Mips::MTGC0, Mips::MTGC0, Mips::MTGC0_MM },
  { Mips::MTHC1_D32, Mips::MTHC1_D32, Mips::MTHC1_D32_MM },
  { Mips::MTHGC0, Mips::MTHGC0, Mips::MTHGC0_MM },
  { Mips::MTHI, Mips::MTHI, Mips::MTHI_MM },
  { Mips::MTLO, Mips::MTLO, Mips::MTLO_MM },
  { Mips::MUL, Mips::MUL, Mips::MUL_MM },
  { Mips::MULT, Mips::MULT, Mips::MULT_MM },
  { Mips::MULTu, Mips::MULTu, Mips::MULTu_MM },
  { Mips::NMADD_D32, Mips::NMADD_D32, Mips::NMADD_D32_MM },
  { Mips::NMADD_S, Mips::NMADD_S, Mips::NMADD_S_MM },
  { Mips::NMSUB_D32, Mips::NMSUB_D32, Mips::NMSUB_D32_MM },
  { Mips::NMSUB_S, Mips::NMSUB_S, Mips::NMSUB_S_MM },
  { Mips::NOR, Mips::NOR, Mips::NOR_MM },
  { Mips::OR, Mips::OR, Mips::OR_MM },
  { Mips::ORi, Mips::ORi, Mips::ORi_MM },
  { Mips::PAUSE, Mips::PAUSE, Mips::PAUSE_MM },
  { Mips::PREF, Mips::PREF, Mips::PREF_MM },
  { Mips::PREFE, Mips::PREFE, Mips::PREFE_MM },
  { Mips::RDHWR, Mips::RDHWR, Mips::RDHWR_MM },
  { Mips::RECIP_D32, Mips::RECIP_D32, Mips::RECIP_D32_MM },
  { Mips::RECIP_D64, Mips::RECIP_D64, Mips::RECIP_D64_MM },
  { Mips::RECIP_S, Mips::RECIP_S, Mips::RECIP_S_MM },
  { Mips::ROTR, Mips::ROTR, Mips::ROTR_MM },
  { Mips::ROTRV, Mips::ROTRV, Mips::ROTRV_MM },
  { Mips::ROUND_W_D32, Mips::ROUND_W_D32, Mips::ROUND_W_MM },
  { Mips::ROUND_W_S, Mips::ROUND_W_S, Mips::ROUND_W_S_MM },
  { Mips::RSQRT_D32, Mips::RSQRT_D32, Mips::RSQRT_D32_MM },
  { Mips::RSQRT_D64, Mips::RSQRT_D64, Mips::RSQRT_D64_MM },
  { Mips::RSQRT_S, Mips::RSQRT_S, Mips::RSQRT_S_MM },
  { Mips::SB, Mips::SB, Mips::SB_MM },
  { Mips::SBE, Mips::SBE, Mips::SBE_MM },
  { Mips::SCE, Mips::SCE, Mips::SCE_MM },
  { Mips::SDBBP, Mips::SDBBP, Mips::SDBBP_MM },
  { Mips::SDC1, Mips::SDC1, Mips::SDC1_MM },
  { Mips::SDIV, Mips::SDIV, Mips::SDIV_MM },
  { Mips::SEB, Mips::SEB, Mips::SEB_MM },
  { Mips::SEH, Mips::SEH, Mips::SEH_MM },
  { Mips::SH, Mips::SH, Mips::SH_MM },
  { Mips::SHE, Mips::SHE, Mips::SHE_MM },
  { Mips::SLL, Mips::SLL, Mips::SLL_MM },
  { Mips::SLLV, Mips::SLLV, Mips::SLLV_MM },
  { Mips::SLT, Mips::SLT, Mips::SLT_MM },
  { Mips::SLTi, Mips::SLTi, Mips::SLTi_MM },
  { Mips::SLTiu, Mips::SLTiu, Mips::SLTiu_MM },
  { Mips::SLTu, Mips::SLTu, Mips::SLTu_MM },
  { Mips::SRA, Mips::SRA, Mips::SRA_MM },
  { Mips::SRAV, Mips::SRAV, Mips::SRAV_MM },
  { Mips::SRL, Mips::SRL, Mips::SRL_MM },
  { Mips::SRLV, Mips::SRLV, Mips::SRLV_MM },
  { Mips::SSNOP, Mips::SSNOP, Mips::SSNOP_MM },
  { Mips::SUB, Mips::SUB, Mips::SUB_MM },
  { Mips::SUBu, Mips::SUBu, Mips::SUBu_MM },
  { Mips::SUXC1, Mips::SUXC1, Mips::SUXC1_MM },
  { Mips::SW, Mips::SW, Mips::SW_MM },
  { Mips::SWC1, Mips::SWC1, Mips::SWC1_MM },
  { Mips::SWE, Mips::SWE, Mips::SWE_MM },
  { Mips::SWL, Mips::SWL, Mips::SWL_MM },
  { Mips::SWLE, Mips::SWLE, Mips::SWLE_MM },
  { Mips::SWR, Mips::SWR, Mips::SWR_MM },
  { Mips::SWRE, Mips::SWRE, Mips::SWRE_MM },
  { Mips::SWXC1, Mips::SWXC1, Mips::SWXC1_MM },
  { Mips::SYNC, Mips::SYNC, Mips::SYNC_MM },
  { Mips::SYNCI, Mips::SYNCI, Mips::SYNCI_MM },
  { Mips::SYSCALL, Mips::SYSCALL, Mips::SYSCALL_MM },
  { Mips::TEQ, Mips::TEQ, Mips::TEQ_MM },
  { Mips::TEQI, Mips::TEQI, Mips::TEQI_MM },
  { Mips::TGE, Mips::TGE, Mips::TGE_MM },
  { Mips::TGEI, Mips::TGEI, Mips::TGEI_MM },
  { Mips::TGEIU, Mips::TGEIU, Mips::TGEIU_MM },
  { Mips::TGEU, Mips::TGEU, Mips::TGEU_MM },
  { Mips::TLBGINV, Mips::TLBGINV, Mips::TLBGINV_MM },
  { Mips::TLBGINVF, Mips::TLBGINVF, Mips::TLBGINVF_MM },
  { Mips::TLBGP, Mips::TLBGP, Mips::TLBGP_MM },
  { Mips::TLBGR, Mips::TLBGR, Mips::TLBGR_MM },
  { Mips::TLBGWI, Mips::TLBGWI, Mips::TLBGWI_MM },
  { Mips::TLBGWR, Mips::TLBGWR, Mips::TLBGWR_MM },
  { Mips::TLBP, Mips::TLBP, Mips::TLBP_MM },
  { Mips::TLBR, Mips::TLBR, Mips::TLBR_MM },
  { Mips::TLBWI, Mips::TLBWI, Mips::TLBWI_MM },
  { Mips::TLBWR, Mips::TLBWR, Mips::TLBWR_MM },
  { Mips::TLT, Mips::TLT, Mips::TLT_MM },
  { Mips::TLTI, Mips::TLTI, Mips::TLTI_MM },
  { Mips::TLTU, Mips::TLTU, Mips::TLTU_MM },
  { Mips::TNE, Mips::TNE, Mips::TNE_MM },
  { Mips::TNEI, Mips::TNEI, Mips::TNEI_MM },
  { Mips::TRUNC_W_D32, Mips::TRUNC_W_D32, Mips::TRUNC_W_MM },
  { Mips::TRUNC_W_S, Mips::TRUNC_W_S, Mips::TRUNC_W_S_MM },
  { Mips::TTLTIU, Mips::TTLTIU, Mips::TLTIU_MM },
  { Mips::UDIV, Mips::UDIV, Mips::UDIV_MM },
  { Mips::WAIT, Mips::WAIT, Mips::WAIT_MM },
  { Mips::WSBH, Mips::WSBH, Mips::WSBH_MM },
  { Mips::XOR, Mips::XOR, Mips::XOR_MM },
  { Mips::XORi, Mips::XORi, Mips::XORi_MM },
}; // End of Std2MicroMipsTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 266;
  while (start < end) {
    mid = start + (end - start) / 2;
    if (Opcode == Std2MicroMipsTable[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsTable[mid][1];
  if (inArch == Arch_micromips)
    return Std2MicroMipsTable[mid][2];
  return -1;}

// Std2MicroMipsR6
LLVM_READONLY
int Std2MicroMipsR6(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsR6Table[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MMR6 },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDIU_MMR6 },
  { Mips::ADDu, Mips::ADDu, Mips::ADDU_MMR6 },
  { Mips::AND, Mips::AND, Mips::AND_MMR6 },
  { Mips::ANDi, Mips::ANDi, Mips::ANDI_MMR6 },
  { Mips::BREAK, Mips::BREAK, Mips::BREAK_MMR6 },
  { Mips::CEIL_W_D64, Mips::CEIL_W_D64, Mips::CEIL_W_D_MMR6 },
  { Mips::CEIL_W_S, Mips::CEIL_W_S, Mips::CEIL_W_S_MMR6 },
  { Mips::CVT_W_D64, Mips::CVT_W_D64, (uint16_t)-1U },
  { Mips::DI, Mips::DI, Mips::DI_MMR6 },
  { Mips::EI, Mips::EI, Mips::EI_MMR6 },
  { Mips::EXT, Mips::EXT, Mips::EXT_MMR6 },
  { Mips::FABS_D64, Mips::FABS_D64, (uint16_t)-1U },
  { Mips::FLOOR_W_D64, Mips::FLOOR_W_D64, Mips::FLOOR_W_D_MMR6 },
  { Mips::FLOOR_W_S, Mips::FLOOR_W_S, Mips::FLOOR_W_S_MMR6 },
  { Mips::FMOV_D64, Mips::FMOV_D64, Mips::FMOV_D_MMR6 },
  { Mips::FNEG_D64, Mips::FNEG_D64, (uint16_t)-1U },
  { Mips::FSQRT_D64, Mips::FSQRT_D64, (uint16_t)-1U },
  { Mips::FSQRT_S, Mips::FSQRT_S, (uint16_t)-1U },
  { Mips::INS, Mips::INS, Mips::INS_MMR6 },
  { Mips::LDC1, Mips::LDC1, (uint16_t)-1U },
  { Mips::LDC164, Mips::LDC164, Mips::LDC1_D64_MMR6 },
  { Mips::LDC2, Mips::LDC2, Mips::LDC2_MMR6 },
  { Mips::LW, Mips::LW, Mips::LW_MMR6 },
  { Mips::LWC2, Mips::LWC2, Mips::LWC2_MMR6 },
  { Mips::MFC1, Mips::MFC1, Mips::MFC1_MMR6 },
  { Mips::MTC1, Mips::MTC1, Mips::MTC1_MMR6 },
  { Mips::MTHC1_D32, Mips::MTHC1_D32, (uint16_t)-1U },
  { Mips::NOR, Mips::NOR, Mips::NOR_MMR6 },
  { Mips::OR, Mips::OR, Mips::OR_MMR6 },
  { Mips::ORi, Mips::ORi, Mips::ORI_MMR6 },
  { Mips::PAUSE, Mips::PAUSE, Mips::PAUSE_MMR6 },
  { Mips::ROUND_W_D64, Mips::ROUND_W_D64, Mips::ROUND_W_D_MMR6 },
  { Mips::ROUND_W_S, Mips::ROUND_W_S, Mips::ROUND_W_S_MMR6 },
  { Mips::SB, Mips::SB, Mips::SB_MMR6 },
  { Mips::SDC164, Mips::SDC164, Mips::SDC1_D64_MMR6 },
  { Mips::SDC2, Mips::SDC2, Mips::SDC2_MMR6 },
  { Mips::SEB, Mips::SEB, (uint16_t)-1U },
  { Mips::SEH, Mips::SEH, (uint16_t)-1U },
  { Mips::SSNOP, Mips::SSNOP, Mips::SSNOP_MMR6 },
  { Mips::SUB, Mips::SUB, Mips::SUB_MMR6 },
  { Mips::SUBu, Mips::SUBu, Mips::SUBU_MMR6 },
  { Mips::SW, Mips::SW, Mips::SW_MMR6 },
  { Mips::SWC2, Mips::SWC2, Mips::SWC2_MMR6 },
  { Mips::SYNC, Mips::SYNC, Mips::SYNC_MMR6 },
  { Mips::SYNCI, Mips::SYNCI, Mips::SYNCI_MMR6 },
  { Mips::TRUNC_W_D64, Mips::TRUNC_W_D64, Mips::TRUNC_W_D_MMR6 },
  { Mips::TRUNC_W_S, Mips::TRUNC_W_S, Mips::TRUNC_W_S_MMR6 },
  { Mips::WAIT, Mips::WAIT, Mips::WAIT_MMR6 },
  { Mips::XOR, Mips::XOR, Mips::XOR_MMR6 },
  { Mips::XORi, Mips::XORi, Mips::XORI_MMR6 },
}; // End of Std2MicroMipsR6Table

  unsigned mid;
  unsigned start = 0;
  unsigned end = 51;
  while (start < end) {
    mid = start + (end - start) / 2;
    if (Opcode == Std2MicroMipsR6Table[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsR6Table[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsR6Table[mid][1];
  if (inArch == Arch_micromipsr6)
    return Std2MicroMipsR6Table[mid][2];
  return -1;}

} // end namespace Mips
} // end namespace llvm
#endif // GET_INSTRMAP_INFO

