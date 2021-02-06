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

namespace SP {
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
    ADJCALLSTACKDOWN	= 228,
    ADJCALLSTACKUP	= 229,
    GETPCX	= 230,
    SELECT_CC_DFP_FCC	= 231,
    SELECT_CC_DFP_ICC	= 232,
    SELECT_CC_FP_FCC	= 233,
    SELECT_CC_FP_ICC	= 234,
    SELECT_CC_Int_FCC	= 235,
    SELECT_CC_Int_ICC	= 236,
    SELECT_CC_QFP_FCC	= 237,
    SELECT_CC_QFP_ICC	= 238,
    SET	= 239,
    ADDCCri	= 240,
    ADDCCrr	= 241,
    ADDCri	= 242,
    ADDCrr	= 243,
    ADDEri	= 244,
    ADDErr	= 245,
    ADDXC	= 246,
    ADDXCCC	= 247,
    ADDXri	= 248,
    ADDXrr	= 249,
    ADDri	= 250,
    ADDrr	= 251,
    ALIGNADDR	= 252,
    ALIGNADDRL	= 253,
    ANDCCri	= 254,
    ANDCCrr	= 255,
    ANDNCCri	= 256,
    ANDNCCrr	= 257,
    ANDNri	= 258,
    ANDNrr	= 259,
    ANDXNrr	= 260,
    ANDXri	= 261,
    ANDXrr	= 262,
    ANDri	= 263,
    ANDrr	= 264,
    ARRAY16	= 265,
    ARRAY32	= 266,
    ARRAY8	= 267,
    BA	= 268,
    BCOND	= 269,
    BCONDA	= 270,
    BINDri	= 271,
    BINDrr	= 272,
    BMASK	= 273,
    BPFCC	= 274,
    BPFCCA	= 275,
    BPFCCANT	= 276,
    BPFCCNT	= 277,
    BPGEZapn	= 278,
    BPGEZapt	= 279,
    BPGEZnapn	= 280,
    BPGEZnapt	= 281,
    BPGZapn	= 282,
    BPGZapt	= 283,
    BPGZnapn	= 284,
    BPGZnapt	= 285,
    BPICC	= 286,
    BPICCA	= 287,
    BPICCANT	= 288,
    BPICCNT	= 289,
    BPLEZapn	= 290,
    BPLEZapt	= 291,
    BPLEZnapn	= 292,
    BPLEZnapt	= 293,
    BPLZapn	= 294,
    BPLZapt	= 295,
    BPLZnapn	= 296,
    BPLZnapt	= 297,
    BPNZapn	= 298,
    BPNZapt	= 299,
    BPNZnapn	= 300,
    BPNZnapt	= 301,
    BPXCC	= 302,
    BPXCCA	= 303,
    BPXCCANT	= 304,
    BPXCCNT	= 305,
    BPZapn	= 306,
    BPZapt	= 307,
    BPZnapn	= 308,
    BPZnapt	= 309,
    BSHUFFLE	= 310,
    CALL	= 311,
    CALLri	= 312,
    CALLrr	= 313,
    CASAasi10	= 314,
    CASArr	= 315,
    CASXrr	= 316,
    CASrr	= 317,
    CBCOND	= 318,
    CBCONDA	= 319,
    CMASK16	= 320,
    CMASK32	= 321,
    CMASK8	= 322,
    CMPri	= 323,
    CMPrr	= 324,
    EDGE16	= 325,
    EDGE16L	= 326,
    EDGE16LN	= 327,
    EDGE16N	= 328,
    EDGE32	= 329,
    EDGE32L	= 330,
    EDGE32LN	= 331,
    EDGE32N	= 332,
    EDGE8	= 333,
    EDGE8L	= 334,
    EDGE8LN	= 335,
    EDGE8N	= 336,
    FABSD	= 337,
    FABSQ	= 338,
    FABSS	= 339,
    FADDD	= 340,
    FADDQ	= 341,
    FADDS	= 342,
    FALIGNADATA	= 343,
    FAND	= 344,
    FANDNOT1	= 345,
    FANDNOT1S	= 346,
    FANDNOT2	= 347,
    FANDNOT2S	= 348,
    FANDS	= 349,
    FBCOND	= 350,
    FBCONDA	= 351,
    FCHKSM16	= 352,
    FCMPD	= 353,
    FCMPEQ16	= 354,
    FCMPEQ32	= 355,
    FCMPGT16	= 356,
    FCMPGT32	= 357,
    FCMPLE16	= 358,
    FCMPLE32	= 359,
    FCMPNE16	= 360,
    FCMPNE32	= 361,
    FCMPQ	= 362,
    FCMPS	= 363,
    FDIVD	= 364,
    FDIVQ	= 365,
    FDIVS	= 366,
    FDMULQ	= 367,
    FDTOI	= 368,
    FDTOQ	= 369,
    FDTOS	= 370,
    FDTOX	= 371,
    FEXPAND	= 372,
    FHADDD	= 373,
    FHADDS	= 374,
    FHSUBD	= 375,
    FHSUBS	= 376,
    FITOD	= 377,
    FITOQ	= 378,
    FITOS	= 379,
    FLCMPD	= 380,
    FLCMPS	= 381,
    FLUSH	= 382,
    FLUSHW	= 383,
    FLUSHri	= 384,
    FLUSHrr	= 385,
    FMEAN16	= 386,
    FMOVD	= 387,
    FMOVD_FCC	= 388,
    FMOVD_ICC	= 389,
    FMOVD_XCC	= 390,
    FMOVQ	= 391,
    FMOVQ_FCC	= 392,
    FMOVQ_ICC	= 393,
    FMOVQ_XCC	= 394,
    FMOVRGEZD	= 395,
    FMOVRGEZQ	= 396,
    FMOVRGEZS	= 397,
    FMOVRGZD	= 398,
    FMOVRGZQ	= 399,
    FMOVRGZS	= 400,
    FMOVRLEZD	= 401,
    FMOVRLEZQ	= 402,
    FMOVRLEZS	= 403,
    FMOVRLZD	= 404,
    FMOVRLZQ	= 405,
    FMOVRLZS	= 406,
    FMOVRNZD	= 407,
    FMOVRNZQ	= 408,
    FMOVRNZS	= 409,
    FMOVRZD	= 410,
    FMOVRZQ	= 411,
    FMOVRZS	= 412,
    FMOVS	= 413,
    FMOVS_FCC	= 414,
    FMOVS_ICC	= 415,
    FMOVS_XCC	= 416,
    FMUL8SUX16	= 417,
    FMUL8ULX16	= 418,
    FMUL8X16	= 419,
    FMUL8X16AL	= 420,
    FMUL8X16AU	= 421,
    FMULD	= 422,
    FMULD8SUX16	= 423,
    FMULD8ULX16	= 424,
    FMULQ	= 425,
    FMULS	= 426,
    FNADDD	= 427,
    FNADDS	= 428,
    FNAND	= 429,
    FNANDS	= 430,
    FNEGD	= 431,
    FNEGQ	= 432,
    FNEGS	= 433,
    FNHADDD	= 434,
    FNHADDS	= 435,
    FNMULD	= 436,
    FNMULS	= 437,
    FNOR	= 438,
    FNORS	= 439,
    FNOT1	= 440,
    FNOT1S	= 441,
    FNOT2	= 442,
    FNOT2S	= 443,
    FNSMULD	= 444,
    FONE	= 445,
    FONES	= 446,
    FOR	= 447,
    FORNOT1	= 448,
    FORNOT1S	= 449,
    FORNOT2	= 450,
    FORNOT2S	= 451,
    FORS	= 452,
    FPACK16	= 453,
    FPACK32	= 454,
    FPACKFIX	= 455,
    FPADD16	= 456,
    FPADD16S	= 457,
    FPADD32	= 458,
    FPADD32S	= 459,
    FPADD64	= 460,
    FPMERGE	= 461,
    FPSUB16	= 462,
    FPSUB16S	= 463,
    FPSUB32	= 464,
    FPSUB32S	= 465,
    FQTOD	= 466,
    FQTOI	= 467,
    FQTOS	= 468,
    FQTOX	= 469,
    FSLAS16	= 470,
    FSLAS32	= 471,
    FSLL16	= 472,
    FSLL32	= 473,
    FSMULD	= 474,
    FSQRTD	= 475,
    FSQRTQ	= 476,
    FSQRTS	= 477,
    FSRA16	= 478,
    FSRA32	= 479,
    FSRC1	= 480,
    FSRC1S	= 481,
    FSRC2	= 482,
    FSRC2S	= 483,
    FSRL16	= 484,
    FSRL32	= 485,
    FSTOD	= 486,
    FSTOI	= 487,
    FSTOQ	= 488,
    FSTOX	= 489,
    FSUBD	= 490,
    FSUBQ	= 491,
    FSUBS	= 492,
    FXNOR	= 493,
    FXNORS	= 494,
    FXOR	= 495,
    FXORS	= 496,
    FXTOD	= 497,
    FXTOQ	= 498,
    FXTOS	= 499,
    FZERO	= 500,
    FZEROS	= 501,
    JMPLri	= 502,
    JMPLrr	= 503,
    LDArr	= 504,
    LDCSRri	= 505,
    LDCSRrr	= 506,
    LDCri	= 507,
    LDCrr	= 508,
    LDDArr	= 509,
    LDDCri	= 510,
    LDDCrr	= 511,
    LDDFArr	= 512,
    LDDFri	= 513,
    LDDFrr	= 514,
    LDDri	= 515,
    LDDrr	= 516,
    LDFArr	= 517,
    LDFSRri	= 518,
    LDFSRrr	= 519,
    LDFri	= 520,
    LDFrr	= 521,
    LDQFArr	= 522,
    LDQFri	= 523,
    LDQFrr	= 524,
    LDSBArr	= 525,
    LDSBri	= 526,
    LDSBrr	= 527,
    LDSHArr	= 528,
    LDSHri	= 529,
    LDSHrr	= 530,
    LDSTUBArr	= 531,
    LDSTUBri	= 532,
    LDSTUBrr	= 533,
    LDSWri	= 534,
    LDSWrr	= 535,
    LDUBArr	= 536,
    LDUBri	= 537,
    LDUBrr	= 538,
    LDUHArr	= 539,
    LDUHri	= 540,
    LDUHrr	= 541,
    LDXFSRri	= 542,
    LDXFSRrr	= 543,
    LDXri	= 544,
    LDXrr	= 545,
    LDri	= 546,
    LDrr	= 547,
    LEAX_ADDri	= 548,
    LEA_ADDri	= 549,
    LZCNT	= 550,
    MEMBARi	= 551,
    MOVDTOX	= 552,
    MOVFCCri	= 553,
    MOVFCCrr	= 554,
    MOVICCri	= 555,
    MOVICCrr	= 556,
    MOVRGEZri	= 557,
    MOVRGEZrr	= 558,
    MOVRGZri	= 559,
    MOVRGZrr	= 560,
    MOVRLEZri	= 561,
    MOVRLEZrr	= 562,
    MOVRLZri	= 563,
    MOVRLZrr	= 564,
    MOVRNZri	= 565,
    MOVRNZrr	= 566,
    MOVRRZri	= 567,
    MOVRRZrr	= 568,
    MOVSTOSW	= 569,
    MOVSTOUW	= 570,
    MOVWTOS	= 571,
    MOVXCCri	= 572,
    MOVXCCrr	= 573,
    MOVXTOD	= 574,
    MULSCCri	= 575,
    MULSCCrr	= 576,
    MULXri	= 577,
    MULXrr	= 578,
    NOP	= 579,
    ORCCri	= 580,
    ORCCrr	= 581,
    ORNCCri	= 582,
    ORNCCrr	= 583,
    ORNri	= 584,
    ORNrr	= 585,
    ORXNrr	= 586,
    ORXri	= 587,
    ORXrr	= 588,
    ORri	= 589,
    ORrr	= 590,
    PDIST	= 591,
    PDISTN	= 592,
    POPCrr	= 593,
    PWRPSRri	= 594,
    PWRPSRrr	= 595,
    RDASR	= 596,
    RDPR	= 597,
    RDPSR	= 598,
    RDTBR	= 599,
    RDWIM	= 600,
    RESTOREri	= 601,
    RESTORErr	= 602,
    RET	= 603,
    RETL	= 604,
    RETTri	= 605,
    RETTrr	= 606,
    SAVEri	= 607,
    SAVErr	= 608,
    SDIVCCri	= 609,
    SDIVCCrr	= 610,
    SDIVXri	= 611,
    SDIVXrr	= 612,
    SDIVri	= 613,
    SDIVrr	= 614,
    SETHIXi	= 615,
    SETHIi	= 616,
    SHUTDOWN	= 617,
    SIAM	= 618,
    SLLXri	= 619,
    SLLXrr	= 620,
    SLLri	= 621,
    SLLrr	= 622,
    SMACri	= 623,
    SMACrr	= 624,
    SMULCCri	= 625,
    SMULCCrr	= 626,
    SMULri	= 627,
    SMULrr	= 628,
    SRAXri	= 629,
    SRAXrr	= 630,
    SRAri	= 631,
    SRArr	= 632,
    SRLXri	= 633,
    SRLXrr	= 634,
    SRLri	= 635,
    SRLrr	= 636,
    STArr	= 637,
    STBAR	= 638,
    STBArr	= 639,
    STBri	= 640,
    STBrr	= 641,
    STCSRri	= 642,
    STCSRrr	= 643,
    STCri	= 644,
    STCrr	= 645,
    STDArr	= 646,
    STDCQri	= 647,
    STDCQrr	= 648,
    STDCri	= 649,
    STDCrr	= 650,
    STDFArr	= 651,
    STDFQri	= 652,
    STDFQrr	= 653,
    STDFri	= 654,
    STDFrr	= 655,
    STDri	= 656,
    STDrr	= 657,
    STFArr	= 658,
    STFSRri	= 659,
    STFSRrr	= 660,
    STFri	= 661,
    STFrr	= 662,
    STHArr	= 663,
    STHri	= 664,
    STHrr	= 665,
    STQFArr	= 666,
    STQFri	= 667,
    STQFrr	= 668,
    STXFSRri	= 669,
    STXFSRrr	= 670,
    STXri	= 671,
    STXrr	= 672,
    STri	= 673,
    STrr	= 674,
    SUBCCri	= 675,
    SUBCCrr	= 676,
    SUBCri	= 677,
    SUBCrr	= 678,
    SUBEri	= 679,
    SUBErr	= 680,
    SUBXri	= 681,
    SUBXrr	= 682,
    SUBri	= 683,
    SUBrr	= 684,
    SWAPArr	= 685,
    SWAPri	= 686,
    SWAPrr	= 687,
    TA1	= 688,
    TA3	= 689,
    TA5	= 690,
    TADDCCTVri	= 691,
    TADDCCTVrr	= 692,
    TADDCCri	= 693,
    TADDCCrr	= 694,
    TICCri	= 695,
    TICCrr	= 696,
    TLS_ADDXrr	= 697,
    TLS_ADDrr	= 698,
    TLS_CALL	= 699,
    TLS_LDXrr	= 700,
    TLS_LDrr	= 701,
    TRAPri	= 702,
    TRAPrr	= 703,
    TSUBCCTVri	= 704,
    TSUBCCTVrr	= 705,
    TSUBCCri	= 706,
    TSUBCCrr	= 707,
    TXCCri	= 708,
    TXCCrr	= 709,
    UDIVCCri	= 710,
    UDIVCCrr	= 711,
    UDIVXri	= 712,
    UDIVXrr	= 713,
    UDIVri	= 714,
    UDIVrr	= 715,
    UMACri	= 716,
    UMACrr	= 717,
    UMULCCri	= 718,
    UMULCCrr	= 719,
    UMULXHI	= 720,
    UMULri	= 721,
    UMULrr	= 722,
    UNIMP	= 723,
    V9FCMPD	= 724,
    V9FCMPED	= 725,
    V9FCMPEQ	= 726,
    V9FCMPES	= 727,
    V9FCMPQ	= 728,
    V9FCMPS	= 729,
    V9FMOVD_FCC	= 730,
    V9FMOVQ_FCC	= 731,
    V9FMOVS_FCC	= 732,
    V9MOVFCCri	= 733,
    V9MOVFCCrr	= 734,
    WRASRri	= 735,
    WRASRrr	= 736,
    WRPRri	= 737,
    WRPRrr	= 738,
    WRPSRri	= 739,
    WRPSRrr	= 740,
    WRTBRri	= 741,
    WRTBRrr	= 742,
    WRWIMri	= 743,
    WRWIMrr	= 744,
    XMULX	= 745,
    XMULXHI	= 746,
    XNORCCri	= 747,
    XNORCCrr	= 748,
    XNORXrr	= 749,
    XNORri	= 750,
    XNORrr	= 751,
    XORCCri	= 752,
    XORCCrr	= 753,
    XORXri	= 754,
    XORXrr	= 755,
    XORri	= 756,
    XORrr	= 757,
    INSTRUCTION_LIST_END = 758
  };

} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace SP {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_iu_instr	= 1,
    IIC_fpu_normal_instr	= 2,
    IIC_jmp_or_call	= 3,
    IIC_fpu_abs	= 4,
    IIC_fpu_fast_instr	= 5,
    IIC_fpu_divd	= 6,
    IIC_fpu_divs	= 7,
    IIC_fpu_muld	= 8,
    IIC_fpu_muls	= 9,
    IIC_fpu_negs	= 10,
    IIC_fpu_sqrtd	= 11,
    IIC_fpu_sqrts	= 12,
    IIC_fpu_stod	= 13,
    IIC_ldd	= 14,
    IIC_iu_or_fpu_instr	= 15,
    IIC_iu_div	= 16,
    IIC_smac_umac	= 17,
    IIC_iu_smul	= 18,
    IIC_st	= 19,
    IIC_std	= 20,
    IIC_iu_umul	= 21,
    SCHED_LIST_END = 22
  };
} // end namespace Sched
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { SP::O6, 0 };
static const MCPhysReg ImplicitList2[] = { SP::O7, 0 };
static const MCPhysReg ImplicitList3[] = { SP::FCC0, 0 };
static const MCPhysReg ImplicitList4[] = { SP::ICC, 0 };
static const MCPhysReg ImplicitList5[] = { SP::CPSR, 0 };
static const MCPhysReg ImplicitList6[] = { SP::FSR, 0 };
static const MCPhysReg ImplicitList7[] = { SP::Y, SP::ICC, 0 };
static const MCPhysReg ImplicitList8[] = { SP::PSR, 0 };
static const MCPhysReg ImplicitList9[] = { SP::TBR, 0 };
static const MCPhysReg ImplicitList10[] = { SP::WIM, 0 };
static const MCPhysReg ImplicitList11[] = { SP::Y, 0 };
static const MCPhysReg ImplicitList12[] = { SP::Y, SP::ASR18, 0 };
static const MCPhysReg ImplicitList13[] = { SP::CPQ, 0 };
static const MCPhysReg ImplicitList14[] = { SP::FQ, 0 };

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
static const MCOperandInfo OperandInfo43[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo57[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo59[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo79[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo80[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo139[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo140[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, };
static const MCOperandInfo OperandInfo141[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, MCOI_TIED_TO(0) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SparcInsts[] = {
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
  { 17,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #17 = COPY
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
  { 228,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #228 = ADJCALLSTACKDOWN
  { 229,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #229 = ADJCALLSTACKUP
  { 230,	1,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList2, OperandInfo2 },  // Inst #230 = GETPCX
  { 231,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo43 },  // Inst #231 = SELECT_CC_DFP_FCC
  { 232,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo43 },  // Inst #232 = SELECT_CC_DFP_ICC
  { 233,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo44 },  // Inst #233 = SELECT_CC_FP_FCC
  { 234,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo44 },  // Inst #234 = SELECT_CC_FP_ICC
  { 235,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo45 },  // Inst #235 = SELECT_CC_Int_FCC
  { 236,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo45 },  // Inst #236 = SELECT_CC_Int_ICC
  { 237,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo46 },  // Inst #237 = SELECT_CC_QFP_FCC
  { 238,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo46 },  // Inst #238 = SELECT_CC_QFP_ICC
  { 239,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #239 = SET
  { 240,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #240 = ADDCCri
  { 241,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #241 = ADDCCrr
  { 242,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo48 },  // Inst #242 = ADDCri
  { 243,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo49 },  // Inst #243 = ADDCrr
  { 244,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo48 },  // Inst #244 = ADDEri
  { 245,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo49 },  // Inst #245 = ADDErr
  { 246,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo50 },  // Inst #246 = ADDXC
  { 247,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo50 },  // Inst #247 = ADDXCCC
  { 248,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #248 = ADDXri
  { 249,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #249 = ADDXrr
  { 250,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #250 = ADDri
  { 251,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #251 = ADDrr
  { 252,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #252 = ALIGNADDR
  { 253,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #253 = ALIGNADDRL
  { 254,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #254 = ANDCCri
  { 255,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #255 = ANDCCrr
  { 256,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #256 = ANDNCCri
  { 257,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #257 = ANDNCCrr
  { 258,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #258 = ANDNri
  { 259,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #259 = ANDNrr
  { 260,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #260 = ANDXNrr
  { 261,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #261 = ANDXri
  { 262,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #262 = ANDXrr
  { 263,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #263 = ANDri
  { 264,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #264 = ANDrr
  { 265,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #265 = ARRAY16
  { 266,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #266 = ARRAY32
  { 267,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #267 = ARRAY8
  { 268,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #268 = BA
  { 269,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #269 = BCOND
  { 270,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #270 = BCONDA
  { 271,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo14 },  // Inst #271 = BINDri
  { 272,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #272 = BINDrr
  { 273,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #273 = BMASK
  { 274,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #274 = BPFCC
  { 275,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #275 = BPFCCA
  { 276,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #276 = BPFCCANT
  { 277,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53 },  // Inst #277 = BPFCCNT
  { 278,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #278 = BPGEZapn
  { 279,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #279 = BPGEZapt
  { 280,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #280 = BPGEZnapn
  { 281,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #281 = BPGEZnapt
  { 282,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #282 = BPGZapn
  { 283,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #283 = BPGZapt
  { 284,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #284 = BPGZnapn
  { 285,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #285 = BPGZnapt
  { 286,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #286 = BPICC
  { 287,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #287 = BPICCA
  { 288,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #288 = BPICCANT
  { 289,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #289 = BPICCNT
  { 290,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #290 = BPLEZapn
  { 291,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #291 = BPLEZapt
  { 292,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #292 = BPLEZnapn
  { 293,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #293 = BPLEZnapt
  { 294,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #294 = BPLZapn
  { 295,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #295 = BPLZapt
  { 296,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #296 = BPLZnapn
  { 297,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #297 = BPLZnapt
  { 298,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #298 = BPNZapn
  { 299,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #299 = BPNZapt
  { 300,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #300 = BPNZnapn
  { 301,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #301 = BPNZnapt
  { 302,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #302 = BPXCC
  { 303,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #303 = BPXCCA
  { 304,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #304 = BPXCCANT
  { 305,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7 },  // Inst #305 = BPXCCNT
  { 306,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #306 = BPZapn
  { 307,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #307 = BPZapt
  { 308,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #308 = BPZnapn
  { 309,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54 },  // Inst #309 = BPZnapt
  { 310,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #310 = BSHUFFLE
  { 311,	1,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo2 },  // Inst #311 = CALL
  { 312,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo14 },  // Inst #312 = CALLri
  { 313,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo52 },  // Inst #313 = CALLrr
  { 314,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #314 = CASAasi10
  { 315,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57 },  // Inst #315 = CASArr
  { 316,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo58 },  // Inst #316 = CASXrr
  { 317,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo56 },  // Inst #317 = CASrr
  { 318,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #318 = CBCOND
  { 319,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #319 = CBCONDA
  { 320,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #320 = CMASK16
  { 321,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #321 = CMASK32
  { 322,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo59 },  // Inst #322 = CMASK8
  { 323,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo60 },  // Inst #323 = CMPri
  { 324,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo61 },  // Inst #324 = CMPrr
  { 325,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #325 = EDGE16
  { 326,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #326 = EDGE16L
  { 327,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #327 = EDGE16LN
  { 328,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #328 = EDGE16N
  { 329,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #329 = EDGE32
  { 330,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #330 = EDGE32L
  { 331,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #331 = EDGE32LN
  { 332,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #332 = EDGE32N
  { 333,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #333 = EDGE8
  { 334,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #334 = EDGE8L
  { 335,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #335 = EDGE8LN
  { 336,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #336 = EDGE8N
  { 337,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #337 = FABSD
  { 338,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #338 = FABSQ
  { 339,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #339 = FABSS
  { 340,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #340 = FADDD
  { 341,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #341 = FADDQ
  { 342,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #342 = FADDS
  { 343,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #343 = FALIGNADATA
  { 344,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #344 = FAND
  { 345,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #345 = FANDNOT1
  { 346,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #346 = FANDNOT1S
  { 347,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #347 = FANDNOT2
  { 348,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #348 = FANDNOT2S
  { 349,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #349 = FANDS
  { 350,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, nullptr, OperandInfo7 },  // Inst #350 = FBCOND
  { 351,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo7 },  // Inst #351 = FBCONDA
  { 352,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #352 = FCHKSM16
  { 353,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo62 },  // Inst #353 = FCMPD
  { 354,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #354 = FCMPEQ16
  { 355,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #355 = FCMPEQ32
  { 356,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #356 = FCMPGT16
  { 357,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #357 = FCMPGT32
  { 358,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #358 = FCMPLE16
  { 359,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #359 = FCMPLE32
  { 360,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #360 = FCMPNE16
  { 361,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67 },  // Inst #361 = FCMPNE32
  { 362,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo63 },  // Inst #362 = FCMPQ
  { 363,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo64 },  // Inst #363 = FCMPS
  { 364,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #364 = FDIVD
  { 365,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #365 = FDIVQ
  { 366,	3,	1,	4,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #366 = FDIVS
  { 367,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo68 },  // Inst #367 = FDMULQ
  { 368,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #368 = FDTOI
  { 369,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #369 = FDTOQ
  { 370,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #370 = FDTOS
  { 371,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #371 = FDTOX
  { 372,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #372 = FEXPAND
  { 373,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #373 = FHADDD
  { 374,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #374 = FHADDS
  { 375,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #375 = FHSUBD
  { 376,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #376 = FHSUBS
  { 377,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #377 = FITOD
  { 378,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo72 },  // Inst #378 = FITOQ
  { 379,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #379 = FITOS
  { 380,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #380 = FLCMPD
  { 381,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #381 = FLCMPS
  { 382,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #382 = FLUSH
  { 383,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #383 = FLUSHW
  { 384,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14 },  // Inst #384 = FLUSHri
  { 385,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #385 = FLUSHrr
  { 386,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #386 = FMEAN16
  { 387,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #387 = FMOVD
  { 388,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo74 },  // Inst #388 = FMOVD_FCC
  { 389,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo74 },  // Inst #389 = FMOVD_ICC
  { 390,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo74 },  // Inst #390 = FMOVD_XCC
  { 391,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #391 = FMOVQ
  { 392,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo75 },  // Inst #392 = FMOVQ_FCC
  { 393,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo75 },  // Inst #393 = FMOVQ_ICC
  { 394,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo75 },  // Inst #394 = FMOVQ_XCC
  { 395,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #395 = FMOVRGEZD
  { 396,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #396 = FMOVRGEZQ
  { 397,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #397 = FMOVRGEZS
  { 398,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #398 = FMOVRGZD
  { 399,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #399 = FMOVRGZQ
  { 400,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #400 = FMOVRGZS
  { 401,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #401 = FMOVRLEZD
  { 402,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #402 = FMOVRLEZQ
  { 403,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #403 = FMOVRLEZS
  { 404,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #404 = FMOVRLZD
  { 405,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #405 = FMOVRLZQ
  { 406,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #406 = FMOVRLZS
  { 407,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #407 = FMOVRNZD
  { 408,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #408 = FMOVRNZQ
  { 409,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #409 = FMOVRNZS
  { 410,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #410 = FMOVRZD
  { 411,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #411 = FMOVRZQ
  { 412,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo76 },  // Inst #412 = FMOVRZS
  { 413,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #413 = FMOVS
  { 414,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo77 },  // Inst #414 = FMOVS_FCC
  { 415,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo77 },  // Inst #415 = FMOVS_ICC
  { 416,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo77 },  // Inst #416 = FMOVS_XCC
  { 417,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #417 = FMUL8SUX16
  { 418,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #418 = FMUL8ULX16
  { 419,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #419 = FMUL8X16
  { 420,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #420 = FMUL8X16AL
  { 421,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #421 = FMUL8X16AU
  { 422,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #422 = FMULD
  { 423,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #423 = FMULD8SUX16
  { 424,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #424 = FMULD8ULX16
  { 425,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #425 = FMULQ
  { 426,	3,	1,	4,	9,	0, 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #426 = FMULS
  { 427,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #427 = FNADDD
  { 428,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #428 = FNADDS
  { 429,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #429 = FNAND
  { 430,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #430 = FNANDS
  { 431,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #431 = FNEGD
  { 432,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #432 = FNEGQ
  { 433,	2,	1,	4,	10,	0, 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #433 = FNEGS
  { 434,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #434 = FNHADDD
  { 435,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #435 = FNHADDS
  { 436,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #436 = FNMULD
  { 437,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #437 = FNMULS
  { 438,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #438 = FNOR
  { 439,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #439 = FNORS
  { 440,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #440 = FNOT1
  { 441,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #441 = FNOT1S
  { 442,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #442 = FNOT2
  { 443,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #443 = FNOT2S
  { 444,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #444 = FNSMULD
  { 445,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo78 },  // Inst #445 = FONE
  { 446,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #446 = FONES
  { 447,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #447 = FOR
  { 448,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #448 = FORNOT1
  { 449,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #449 = FORNOT1S
  { 450,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #450 = FORNOT2
  { 451,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #451 = FORNOT2S
  { 452,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #452 = FORS
  { 453,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #453 = FPACK16
  { 454,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #454 = FPACK32
  { 455,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #455 = FPACKFIX
  { 456,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #456 = FPADD16
  { 457,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #457 = FPADD16S
  { 458,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #458 = FPADD32
  { 459,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #459 = FPADD32S
  { 460,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #460 = FPADD64
  { 461,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #461 = FPMERGE
  { 462,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #462 = FPSUB16
  { 463,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #463 = FPSUB16S
  { 464,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #464 = FPSUB32
  { 465,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #465 = FPSUB32S
  { 466,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #466 = FQTOD
  { 467,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo81 },  // Inst #467 = FQTOI
  { 468,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo81 },  // Inst #468 = FQTOS
  { 469,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo80 },  // Inst #469 = FQTOX
  { 470,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #470 = FSLAS16
  { 471,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #471 = FSLAS32
  { 472,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #472 = FSLL16
  { 473,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #473 = FSLL32
  { 474,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo82 },  // Inst #474 = FSMULD
  { 475,	2,	1,	4,	11,	0, 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #475 = FSQRTD
  { 476,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo63 },  // Inst #476 = FSQRTQ
  { 477,	2,	1,	4,	12,	0, 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #477 = FSQRTS
  { 478,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #478 = FSRA16
  { 479,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #479 = FSRA32
  { 480,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #480 = FSRC1
  { 481,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #481 = FSRC1S
  { 482,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #482 = FSRC2
  { 483,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #483 = FSRC2S
  { 484,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #484 = FSRL16
  { 485,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #485 = FSRL32
  { 486,	2,	1,	4,	13,	0, 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #486 = FSTOD
  { 487,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo64 },  // Inst #487 = FSTOI
  { 488,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo72 },  // Inst #488 = FSTOQ
  { 489,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo71 },  // Inst #489 = FSTOX
  { 490,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #490 = FSUBD
  { 491,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo65 },  // Inst #491 = FSUBQ
  { 492,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #492 = FSUBS
  { 493,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #493 = FXNOR
  { 494,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #494 = FXNORS
  { 495,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #495 = FXOR
  { 496,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66 },  // Inst #496 = FXORS
  { 497,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo62 },  // Inst #497 = FXTOD
  { 498,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo70 },  // Inst #498 = FXTOQ
  { 499,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo69 },  // Inst #499 = FXTOS
  { 500,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo78 },  // Inst #500 = FZERO
  { 501,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo79 },  // Inst #501 = FZEROS
  { 502,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #502 = JMPLri
  { 503,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #503 = JMPLrr
  { 504,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #504 = LDArr
  { 505,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo14 },  // Inst #505 = LDCSRri
  { 506,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo52 },  // Inst #506 = LDCSRrr
  { 507,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo86 },  // Inst #507 = LDCri
  { 508,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo87 },  // Inst #508 = LDCrr
  { 509,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo88 },  // Inst #509 = LDDArr
  { 510,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo89 },  // Inst #510 = LDDCri
  { 511,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo90 },  // Inst #511 = LDDCrr
  { 512,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo91 },  // Inst #512 = LDDFArr
  { 513,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo92 },  // Inst #513 = LDDFri
  { 514,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo93 },  // Inst #514 = LDDFrr
  { 515,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo94 },  // Inst #515 = LDDri
  { 516,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo95 },  // Inst #516 = LDDrr
  { 517,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo96 },  // Inst #517 = LDFArr
  { 518,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo14 },  // Inst #518 = LDFSRri
  { 519,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo52 },  // Inst #519 = LDFSRrr
  { 520,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo97 },  // Inst #520 = LDFri
  { 521,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo98 },  // Inst #521 = LDFrr
  { 522,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo99 },  // Inst #522 = LDQFArr
  { 523,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo100 },  // Inst #523 = LDQFri
  { 524,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo101 },  // Inst #524 = LDQFrr
  { 525,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #525 = LDSBArr
  { 526,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #526 = LDSBri
  { 527,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #527 = LDSBrr
  { 528,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #528 = LDSHArr
  { 529,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #529 = LDSHri
  { 530,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #530 = LDSHrr
  { 531,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #531 = LDSTUBArr
  { 532,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #532 = LDSTUBri
  { 533,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #533 = LDSTUBrr
  { 534,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo102 },  // Inst #534 = LDSWri
  { 535,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo103 },  // Inst #535 = LDSWrr
  { 536,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #536 = LDUBArr
  { 537,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #537 = LDUBri
  { 538,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #538 = LDUBrr
  { 539,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85 },  // Inst #539 = LDUHArr
  { 540,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #540 = LDUHri
  { 541,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #541 = LDUHrr
  { 542,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo14 },  // Inst #542 = LDXFSRri
  { 543,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo52 },  // Inst #543 = LDXFSRrr
  { 544,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo102 },  // Inst #544 = LDXri
  { 545,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo103 },  // Inst #545 = LDXrr
  { 546,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #546 = LDri
  { 547,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo84 },  // Inst #547 = LDrr
  { 548,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo102 },  // Inst #548 = LEAX_ADDri
  { 549,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo83 },  // Inst #549 = LEA_ADDri
  { 550,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104 },  // Inst #550 = LZCNT
  { 551,	1,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #551 = MEMBARi
  { 552,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105 },  // Inst #552 = MOVDTOX
  { 553,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo106 },  // Inst #553 = MOVFCCri
  { 554,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo107 },  // Inst #554 = MOVFCCrr
  { 555,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo106 },  // Inst #555 = MOVICCri
  { 556,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo107 },  // Inst #556 = MOVICCrr
  { 557,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #557 = MOVRGEZri
  { 558,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #558 = MOVRGEZrr
  { 559,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #559 = MOVRGZri
  { 560,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #560 = MOVRGZrr
  { 561,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #561 = MOVRLEZri
  { 562,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #562 = MOVRLEZrr
  { 563,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #563 = MOVRLZri
  { 564,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #564 = MOVRLZrr
  { 565,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #565 = MOVRNZri
  { 566,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #566 = MOVRNZrr
  { 567,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #567 = MOVRRZri
  { 568,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #568 = MOVRRZrr
  { 569,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105 },  // Inst #569 = MOVSTOSW
  { 570,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105 },  // Inst #570 = MOVSTOUW
  { 571,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo109 },  // Inst #571 = MOVWTOS
  { 572,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo106 },  // Inst #572 = MOVXCCri
  { 573,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo107 },  // Inst #573 = MOVXCCrr
  { 574,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo109 },  // Inst #574 = MOVXTOD
  { 575,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList7, OperandInfo48 },  // Inst #575 = MULSCCri
  { 576,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList7, OperandInfo49 },  // Inst #576 = MULSCCrr
  { 577,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo110 },  // Inst #577 = MULXri
  { 578,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #578 = MULXrr
  { 579,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #579 = NOP
  { 580,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #580 = ORCCri
  { 581,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #581 = ORCCrr
  { 582,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #582 = ORNCCri
  { 583,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #583 = ORNCCrr
  { 584,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #584 = ORNri
  { 585,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #585 = ORNrr
  { 586,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #586 = ORXNrr
  { 587,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #587 = ORXri
  { 588,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #588 = ORXrr
  { 589,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #589 = ORri
  { 590,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #590 = ORrr
  { 591,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #591 = PDIST
  { 592,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55 },  // Inst #592 = PDISTN
  { 593,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo61 },  // Inst #593 = POPCrr
  { 594,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo60 },  // Inst #594 = PWRPSRri
  { 595,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo61 },  // Inst #595 = PWRPSRrr
  { 596,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo111 },  // Inst #596 = RDASR
  { 597,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo112 },  // Inst #597 = RDPR
  { 598,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, nullptr, OperandInfo113 },  // Inst #598 = RDPSR
  { 599,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, nullptr, OperandInfo113 },  // Inst #599 = RDTBR
  { 600,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, nullptr, OperandInfo113 },  // Inst #600 = RDWIM
  { 601,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #601 = RESTOREri
  { 602,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #602 = RESTORErr
  { 603,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #603 = RET
  { 604,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #604 = RETL
  { 605,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14 },  // Inst #605 = RETTri
  { 606,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52 },  // Inst #606 = RETTrr
  { 607,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #607 = SAVEri
  { 608,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #608 = SAVErr
  { 609,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo48 },  // Inst #609 = SDIVCCri
  { 610,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo49 },  // Inst #610 = SDIVCCrr
  { 611,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110 },  // Inst #611 = SDIVXri
  { 612,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #612 = SDIVXrr
  { 613,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo48 },  // Inst #613 = SDIVri
  { 614,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo49 },  // Inst #614 = SDIVrr
  { 615,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #615 = SETHIXi
  { 616,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #616 = SETHIi
  { 617,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #617 = SHUTDOWN
  { 618,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #618 = SIAM
  { 619,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo114 },  // Inst #619 = SLLXri
  { 620,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #620 = SLLXrr
  { 621,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #621 = SLLri
  { 622,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #622 = SLLrr
  { 623,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo115 },  // Inst #623 = SMACri
  { 624,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo116 },  // Inst #624 = SMACrr
  { 625,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo48 },  // Inst #625 = SMULCCri
  { 626,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo49 },  // Inst #626 = SMULCCrr
  { 627,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo48 },  // Inst #627 = SMULri
  { 628,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo49 },  // Inst #628 = SMULrr
  { 629,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo114 },  // Inst #629 = SRAXri
  { 630,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #630 = SRAXrr
  { 631,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #631 = SRAri
  { 632,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #632 = SRArr
  { 633,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo114 },  // Inst #633 = SRLXri
  { 634,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo108 },  // Inst #634 = SRLXrr
  { 635,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #635 = SRLri
  { 636,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #636 = SRLrr
  { 637,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo117 },  // Inst #637 = STArr
  { 638,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #638 = STBAR
  { 639,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo117 },  // Inst #639 = STBArr
  { 640,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo118 },  // Inst #640 = STBri
  { 641,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo119 },  // Inst #641 = STBrr
  { 642,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo14 },  // Inst #642 = STCSRri
  { 643,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo52 },  // Inst #643 = STCSRrr
  { 644,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo120 },  // Inst #644 = STCri
  { 645,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo121 },  // Inst #645 = STCrr
  { 646,	4,	0,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo122 },  // Inst #646 = STDArr
  { 647,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo14 },  // Inst #647 = STDCQri
  { 648,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo52 },  // Inst #648 = STDCQrr
  { 649,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo123 },  // Inst #649 = STDCri
  { 650,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo124 },  // Inst #650 = STDCrr
  { 651,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo125 },  // Inst #651 = STDFArr
  { 652,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo14 },  // Inst #652 = STDFQri
  { 653,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo52 },  // Inst #653 = STDFQrr
  { 654,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo126 },  // Inst #654 = STDFri
  { 655,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo127 },  // Inst #655 = STDFrr
  { 656,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo128 },  // Inst #656 = STDri
  { 657,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo129 },  // Inst #657 = STDrr
  { 658,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo130 },  // Inst #658 = STFArr
  { 659,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo14 },  // Inst #659 = STFSRri
  { 660,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo52 },  // Inst #660 = STFSRrr
  { 661,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo131 },  // Inst #661 = STFri
  { 662,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo132 },  // Inst #662 = STFrr
  { 663,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo117 },  // Inst #663 = STHArr
  { 664,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo118 },  // Inst #664 = STHri
  { 665,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo119 },  // Inst #665 = STHrr
  { 666,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo133 },  // Inst #666 = STQFArr
  { 667,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo134 },  // Inst #667 = STQFri
  { 668,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo135 },  // Inst #668 = STQFrr
  { 669,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo14 },  // Inst #669 = STXFSRri
  { 670,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo52 },  // Inst #670 = STXFSRrr
  { 671,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo136 },  // Inst #671 = STXri
  { 672,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo137 },  // Inst #672 = STXrr
  { 673,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo118 },  // Inst #673 = STri
  { 674,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo119 },  // Inst #674 = STrr
  { 675,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #675 = SUBCCri
  { 676,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #676 = SUBCCrr
  { 677,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo48 },  // Inst #677 = SUBCri
  { 678,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo49 },  // Inst #678 = SUBCrr
  { 679,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo48 },  // Inst #679 = SUBEri
  { 680,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo49 },  // Inst #680 = SUBErr
  { 681,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #681 = SUBXri
  { 682,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #682 = SUBXrr
  { 683,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #683 = SUBri
  { 684,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #684 = SUBrr
  { 685,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo138 },  // Inst #685 = SWAPArr
  { 686,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo139 },  // Inst #686 = SWAPri
  { 687,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo140 },  // Inst #687 = SWAPrr
  { 688,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #688 = TA1
  { 689,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #689 = TA3
  { 690,	0,	0,	4,	1,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #690 = TA5
  { 691,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #691 = TADDCCTVri
  { 692,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #692 = TADDCCTVrr
  { 693,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #693 = TADDCCri
  { 694,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #694 = TADDCCrr
  { 695,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo141 },  // Inst #695 = TICCri
  { 696,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo48 },  // Inst #696 = TICCrr
  { 697,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo142 },  // Inst #697 = TLS_ADDXrr
  { 698,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo143 },  // Inst #698 = TLS_ADDrr
  { 699,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo7 },  // Inst #699 = TLS_CALL
  { 700,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo144 },  // Inst #700 = TLS_LDXrr
  { 701,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo144 },  // Inst #701 = TLS_LDrr
  { 702,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo141 },  // Inst #702 = TRAPri
  { 703,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo48 },  // Inst #703 = TRAPrr
  { 704,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #704 = TSUBCCTVri
  { 705,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #705 = TSUBCCTVrr
  { 706,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #706 = TSUBCCri
  { 707,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #707 = TSUBCCrr
  { 708,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo141 },  // Inst #708 = TXCCri
  { 709,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo48 },  // Inst #709 = TXCCrr
  { 710,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo48 },  // Inst #710 = UDIVCCri
  { 711,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo49 },  // Inst #711 = UDIVCCrr
  { 712,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110 },  // Inst #712 = UDIVXri
  { 713,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #713 = UDIVXrr
  { 714,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo48 },  // Inst #714 = UDIVri
  { 715,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo49 },  // Inst #715 = UDIVrr
  { 716,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo115 },  // Inst #716 = UMACri
  { 717,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo116 },  // Inst #717 = UMACrr
  { 718,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo48 },  // Inst #718 = UMULCCri
  { 719,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo49 },  // Inst #719 = UMULCCrr
  { 720,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #720 = UMULXHI
  { 721,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo48 },  // Inst #721 = UMULri
  { 722,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo49 },  // Inst #722 = UMULrr
  { 723,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #723 = UNIMP
  { 724,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #724 = V9FCMPD
  { 725,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73 },  // Inst #725 = V9FCMPED
  { 726,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo145 },  // Inst #726 = V9FCMPEQ
  { 727,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo146 },  // Inst #727 = V9FCMPES
  { 728,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo145 },  // Inst #728 = V9FCMPQ
  { 729,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo146 },  // Inst #729 = V9FCMPS
  { 730,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo147 },  // Inst #730 = V9FMOVD_FCC
  { 731,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo148 },  // Inst #731 = V9FMOVQ_FCC
  { 732,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo149 },  // Inst #732 = V9FMOVS_FCC
  { 733,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo150 },  // Inst #733 = V9MOVFCCri
  { 734,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo151 },  // Inst #734 = V9MOVFCCrr
  { 735,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo152 },  // Inst #735 = WRASRri
  { 736,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo153 },  // Inst #736 = WRASRrr
  { 737,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo154 },  // Inst #737 = WRPRri
  { 738,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo155 },  // Inst #738 = WRPRrr
  { 739,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo60 },  // Inst #739 = WRPSRri
  { 740,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo61 },  // Inst #740 = WRPSRrr
  { 741,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo60 },  // Inst #741 = WRTBRri
  { 742,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo61 },  // Inst #742 = WRTBRrr
  { 743,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo60 },  // Inst #743 = WRWIMri
  { 744,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo61 },  // Inst #744 = WRWIMrr
  { 745,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #745 = XMULX
  { 746,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #746 = XMULXHI
  { 747,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #747 = XNORCCri
  { 748,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #748 = XNORCCrr
  { 749,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #749 = XNORXrr
  { 750,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #750 = XNORri
  { 751,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #751 = XNORrr
  { 752,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo48 },  // Inst #752 = XORCCri
  { 753,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo49 },  // Inst #753 = XORCCrr
  { 754,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51 },  // Inst #754 = XORXri
  { 755,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50 },  // Inst #755 = XORXrr
  { 756,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo48 },  // Inst #756 = XORri
  { 757,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo49 },  // Inst #757 = XORrr
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char SparcInstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "CASAasi10\0"
  /* 19 */ "TA1\0"
  /* 23 */ "FSRC1\0"
  /* 29 */ "FANDNOT1\0"
  /* 38 */ "FNOT1\0"
  /* 44 */ "FORNOT1\0"
  /* 52 */ "FSRA32\0"
  /* 59 */ "FPSUB32\0"
  /* 67 */ "FPADD32\0"
  /* 75 */ "EDGE32\0"
  /* 82 */ "FCMPLE32\0"
  /* 91 */ "FCMPNE32\0"
  /* 100 */ "FPACK32\0"
  /* 108 */ "CMASK32\0"
  /* 116 */ "FSLL32\0"
  /* 123 */ "FSRL32\0"
  /* 130 */ "FCMPEQ32\0"
  /* 139 */ "FSLAS32\0"
  /* 147 */ "FCMPGT32\0"
  /* 156 */ "ARRAY32\0"
  /* 164 */ "FSRC2\0"
  /* 170 */ "G_FLOG2\0"
  /* 178 */ "G_FEXP2\0"
  /* 186 */ "FANDNOT2\0"
  /* 195 */ "FNOT2\0"
  /* 201 */ "FORNOT2\0"
  /* 209 */ "TA3\0"
  /* 213 */ "FPADD64\0"
  /* 221 */ "TA5\0"
  /* 225 */ "FSRA16\0"
  /* 232 */ "FPSUB16\0"
  /* 240 */ "FPADD16\0"
  /* 248 */ "EDGE16\0"
  /* 255 */ "FCMPLE16\0"
  /* 264 */ "FCMPNE16\0"
  /* 273 */ "FPACK16\0"
  /* 281 */ "CMASK16\0"
  /* 289 */ "FSLL16\0"
  /* 296 */ "FSRL16\0"
  /* 303 */ "FCHKSM16\0"
  /* 312 */ "FMEAN16\0"
  /* 320 */ "FCMPEQ16\0"
  /* 329 */ "FSLAS16\0"
  /* 337 */ "FCMPGT16\0"
  /* 346 */ "FMUL8X16\0"
  /* 355 */ "FMULD8ULX16\0"
  /* 367 */ "FMUL8ULX16\0"
  /* 378 */ "FMULD8SUX16\0"
  /* 390 */ "FMUL8SUX16\0"
  /* 401 */ "ARRAY16\0"
  /* 409 */ "EDGE8\0"
  /* 415 */ "CMASK8\0"
  /* 422 */ "ARRAY8\0"
  /* 429 */ "BA\0"
  /* 432 */ "BPFCCA\0"
  /* 439 */ "BPICCA\0"
  /* 446 */ "BPXCCA\0"
  /* 453 */ "CBCONDA\0"
  /* 461 */ "FBCONDA\0"
  /* 469 */ "G_FMA\0"
  /* 475 */ "G_STRICT_FMA\0"
  /* 488 */ "FALIGNADATA\0"
  /* 500 */ "G_FSUB\0"
  /* 507 */ "G_STRICT_FSUB\0"
  /* 521 */ "G_ATOMICRMW_FSUB\0"
  /* 538 */ "G_SUB\0"
  /* 544 */ "G_ATOMICRMW_SUB\0"
  /* 560 */ "ADDXCCC\0"
  /* 568 */ "BPFCC\0"
  /* 574 */ "V9FMOVD_FCC\0"
  /* 586 */ "SELECT_CC_DFP_FCC\0"
  /* 604 */ "SELECT_CC_QFP_FCC\0"
  /* 622 */ "SELECT_CC_FP_FCC\0"
  /* 639 */ "V9FMOVQ_FCC\0"
  /* 651 */ "V9FMOVS_FCC\0"
  /* 663 */ "SELECT_CC_Int_FCC\0"
  /* 681 */ "BPICC\0"
  /* 687 */ "FMOVD_ICC\0"
  /* 697 */ "SELECT_CC_DFP_ICC\0"
  /* 715 */ "SELECT_CC_QFP_ICC\0"
  /* 733 */ "SELECT_CC_FP_ICC\0"
  /* 750 */ "FMOVQ_ICC\0"
  /* 760 */ "FMOVS_ICC\0"
  /* 770 */ "SELECT_CC_Int_ICC\0"
  /* 788 */ "BPXCC\0"
  /* 794 */ "FMOVD_XCC\0"
  /* 804 */ "FMOVQ_XCC\0"
  /* 814 */ "FMOVS_XCC\0"
  /* 824 */ "G_INTRINSIC\0"
  /* 836 */ "G_FPTRUNC\0"
  /* 846 */ "G_INTRINSIC_TRUNC\0"
  /* 864 */ "G_TRUNC\0"
  /* 872 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 893 */ "G_DYN_STACKALLOC\0"
  /* 910 */ "ADDXC\0"
  /* 916 */ "G_FMAD\0"
  /* 923 */ "G_INDEXED_SEXTLOAD\0"
  /* 942 */ "G_SEXTLOAD\0"
  /* 953 */ "G_INDEXED_ZEXTLOAD\0"
  /* 972 */ "G_ZEXTLOAD\0"
  /* 983 */ "G_INDEXED_LOAD\0"
  /* 998 */ "G_LOAD\0"
  /* 1005 */ "FSUBD\0"
  /* 1011 */ "FHSUBD\0"
  /* 1018 */ "G_VECREDUCE_FADD\0"
  /* 1035 */ "G_FADD\0"
  /* 1042 */ "G_VECREDUCE_SEQ_FADD\0"
  /* 1063 */ "G_STRICT_FADD\0"
  /* 1077 */ "G_ATOMICRMW_FADD\0"
  /* 1094 */ "G_VECREDUCE_ADD\0"
  /* 1110 */ "G_ADD\0"
  /* 1116 */ "G_PTR_ADD\0"
  /* 1126 */ "G_ATOMICRMW_ADD\0"
  /* 1142 */ "FADDD\0"
  /* 1148 */ "FHADDD\0"
  /* 1155 */ "FNHADDD\0"
  /* 1163 */ "FNADDD\0"
  /* 1170 */ "V9FCMPED\0"
  /* 1179 */ "FNEGD\0"
  /* 1185 */ "FMULD\0"
  /* 1191 */ "FNMULD\0"
  /* 1198 */ "FSMULD\0"
  /* 1205 */ "FNSMULD\0"
  /* 1213 */ "FAND\0"
  /* 1218 */ "FNAND\0"
  /* 1224 */ "G_ATOMICRMW_NAND\0"
  /* 1241 */ "FEXPAND\0"
  /* 1249 */ "G_VECREDUCE_AND\0"
  /* 1265 */ "G_AND\0"
  /* 1271 */ "G_ATOMICRMW_AND\0"
  /* 1287 */ "LIFETIME_END\0"
  /* 1300 */ "CBCOND\0"
  /* 1307 */ "FBCOND\0"
  /* 1314 */ "G_BRCOND\0"
  /* 1323 */ "G_INTRINSIC_ROUND\0"
  /* 1341 */ "FITOD\0"
  /* 1347 */ "FQTOD\0"
  /* 1353 */ "FSTOD\0"
  /* 1359 */ "FXTOD\0"
  /* 1365 */ "MOVXTOD\0"
  /* 1373 */ "V9FCMPD\0"
  /* 1381 */ "FLCMPD\0"
  /* 1388 */ "LOAD_STACK_GUARD\0"
  /* 1405 */ "FABSD\0"
  /* 1411 */ "FSQRTD\0"
  /* 1418 */ "FDIVD\0"
  /* 1424 */ "FMOVD\0"
  /* 1430 */ "FMOVRGEZD\0"
  /* 1440 */ "FMOVRLEZD\0"
  /* 1450 */ "FMOVRGZD\0"
  /* 1459 */ "FMOVRLZD\0"
  /* 1468 */ "FMOVRNZD\0"
  /* 1477 */ "FMOVRZD\0"
  /* 1485 */ "PSEUDO_PROBE\0"
  /* 1498 */ "G_SSUBE\0"
  /* 1506 */ "G_USUBE\0"
  /* 1514 */ "G_FENCE\0"
  /* 1522 */ "REG_SEQUENCE\0"
  /* 1535 */ "G_SADDE\0"
  /* 1543 */ "G_UADDE\0"
  /* 1551 */ "G_FMINNUM_IEEE\0"
  /* 1566 */ "G_FMAXNUM_IEEE\0"
  /* 1581 */ "FPMERGE\0"
  /* 1589 */ "G_JUMP_TABLE\0"
  /* 1602 */ "BUNDLE\0"
  /* 1609 */ "BSHUFFLE\0"
  /* 1618 */ "FONE\0"
  /* 1623 */ "LOCAL_ESCAPE\0"
  /* 1636 */ "G_INDEXED_STORE\0"
  /* 1652 */ "G_STORE\0"
  /* 1660 */ "G_BITREVERSE\0"
  /* 1673 */ "DBG_VALUE\0"
  /* 1683 */ "G_GLOBAL_VALUE\0"
  /* 1698 */ "G_MEMMOVE\0"
  /* 1708 */ "G_FREEZE\0"
  /* 1717 */ "G_FCANONICALIZE\0"
  /* 1733 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 1751 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 1769 */ "G_IMPLICIT_DEF\0"
  /* 1784 */ "DBG_INSTR_REF\0"
  /* 1798 */ "G_FNEG\0"
  /* 1805 */ "EXTRACT_SUBREG\0"
  /* 1820 */ "INSERT_SUBREG\0"
  /* 1834 */ "G_SEXT_INREG\0"
  /* 1847 */ "SUBREG_TO_REG\0"
  /* 1861 */ "G_ATOMIC_CMPXCHG\0"
  /* 1878 */ "G_ATOMICRMW_XCHG\0"
  /* 1895 */ "G_FLOG\0"
  /* 1902 */ "G_VAARG\0"
  /* 1910 */ "PREALLOCATED_ARG\0"
  /* 1927 */ "G_SMULH\0"
  /* 1935 */ "G_UMULH\0"
  /* 1943 */ "FLUSH\0"
  /* 1949 */ "G_PHI\0"
  /* 1955 */ "UMULXHI\0"
  /* 1963 */ "XMULXHI\0"
  /* 1971 */ "FDTOI\0"
  /* 1977 */ "FQTOI\0"
  /* 1983 */ "FSTOI\0"
  /* 1989 */ "G_FPTOSI\0"
  /* 1998 */ "G_FPTOUI\0"
  /* 2007 */ "G_FPOWI\0"
  /* 2015 */ "BMASK\0"
  /* 2021 */ "G_PTRMASK\0"
  /* 2031 */ "EDGE32L\0"
  /* 2039 */ "EDGE16L\0"
  /* 2047 */ "EDGE8L\0"
  /* 2054 */ "FMUL8X16AL\0"
  /* 2065 */ "GC_LABEL\0"
  /* 2074 */ "DBG_LABEL\0"
  /* 2084 */ "EH_LABEL\0"
  /* 2093 */ "ANNOTATION_LABEL\0"
  /* 2110 */ "ICALL_BRANCH_FUNNEL\0"
  /* 2130 */ "G_FSHL\0"
  /* 2137 */ "G_SHL\0"
  /* 2143 */ "G_FCEIL\0"
  /* 2151 */ "PATCHABLE_TAIL_CALL\0"
  /* 2171 */ "TLS_CALL\0"
  /* 2180 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 2207 */ "PATCHABLE_EVENT_CALL\0"
  /* 2228 */ "FENTRY_CALL\0"
  /* 2240 */ "KILL\0"
  /* 2245 */ "ALIGNADDRL\0"
  /* 2256 */ "RETL\0"
  /* 2261 */ "G_VECREDUCE_FMUL\0"
  /* 2278 */ "G_FMUL\0"
  /* 2285 */ "G_VECREDUCE_SEQ_FMUL\0"
  /* 2306 */ "G_STRICT_FMUL\0"
  /* 2320 */ "G_VECREDUCE_MUL\0"
  /* 2336 */ "G_MUL\0"
  /* 2342 */ "SIAM\0"
  /* 2347 */ "G_FREM\0"
  /* 2354 */ "G_STRICT_FREM\0"
  /* 2368 */ "G_SREM\0"
  /* 2375 */ "G_UREM\0"
  /* 2382 */ "RDWIM\0"
  /* 2388 */ "INLINEASM\0"
  /* 2398 */ "G_FMINIMUM\0"
  /* 2409 */ "G_FMAXIMUM\0"
  /* 2420 */ "G_FMINNUM\0"
  /* 2430 */ "G_FMAXNUM\0"
  /* 2440 */ "EDGE32N\0"
  /* 2448 */ "EDGE16N\0"
  /* 2456 */ "EDGE8N\0"
  /* 2463 */ "G_INTRINSIC_ROUNDEVEN\0"
  /* 2485 */ "G_FCOPYSIGN\0"
  /* 2497 */ "G_VECREDUCE_FMIN\0"
  /* 2514 */ "G_VECREDUCE_SMIN\0"
  /* 2531 */ "G_SMIN\0"
  /* 2538 */ "G_VECREDUCE_UMIN\0"
  /* 2555 */ "G_UMIN\0"
  /* 2562 */ "G_ATOMICRMW_UMIN\0"
  /* 2579 */ "G_ATOMICRMW_MIN\0"
  /* 2595 */ "G_FSIN\0"
  /* 2602 */ "EDGE32LN\0"
  /* 2611 */ "EDGE16LN\0"
  /* 2620 */ "EDGE8LN\0"
  /* 2628 */ "CFI_INSTRUCTION\0"
  /* 2644 */ "PDISTN\0"
  /* 2651 */ "ADJCALLSTACKDOWN\0"
  /* 2668 */ "SHUTDOWN\0"
  /* 2677 */ "G_SSUBO\0"
  /* 2685 */ "G_USUBO\0"
  /* 2693 */ "G_SADDO\0"
  /* 2701 */ "G_UADDO\0"
  /* 2709 */ "G_SMULO\0"
  /* 2717 */ "G_UMULO\0"
  /* 2725 */ "FZERO\0"
  /* 2731 */ "STACKMAP\0"
  /* 2740 */ "G_BSWAP\0"
  /* 2748 */ "G_SITOFP\0"
  /* 2757 */ "G_UITOFP\0"
  /* 2766 */ "G_FCMP\0"
  /* 2773 */ "G_ICMP\0"
  /* 2780 */ "UNIMP\0"
  /* 2786 */ "NOP\0"
  /* 2790 */ "G_CTPOP\0"
  /* 2798 */ "PATCHABLE_OP\0"
  /* 2811 */ "FAULTING_OP\0"
  /* 2823 */ "ADJCALLSTACKUP\0"
  /* 2838 */ "PREALLOCATED_SETUP\0"
  /* 2857 */ "G_FEXP\0"
  /* 2864 */ "FSUBQ\0"
  /* 2870 */ "FADDQ\0"
  /* 2876 */ "V9FCMPEQ\0"
  /* 2885 */ "FNEGQ\0"
  /* 2891 */ "FDMULQ\0"
  /* 2898 */ "FMULQ\0"
  /* 2904 */ "FDTOQ\0"
  /* 2910 */ "FITOQ\0"
  /* 2916 */ "FSTOQ\0"
  /* 2922 */ "FXTOQ\0"
  /* 2928 */ "V9FCMPQ\0"
  /* 2936 */ "FABSQ\0"
  /* 2942 */ "FSQRTQ\0"
  /* 2949 */ "FDIVQ\0"
  /* 2955 */ "FMOVQ\0"
  /* 2961 */ "FMOVRGEZQ\0"
  /* 2971 */ "FMOVRLEZQ\0"
  /* 2981 */ "FMOVRGZQ\0"
  /* 2990 */ "FMOVRLZQ\0"
  /* 2999 */ "FMOVRNZQ\0"
  /* 3008 */ "FMOVRZQ\0"
  /* 3016 */ "STBAR\0"
  /* 3022 */ "RDTBR\0"
  /* 3028 */ "G_BR\0"
  /* 3033 */ "INLINEASM_BR\0"
  /* 3046 */ "ALIGNADDR\0"
  /* 3056 */ "G_BLOCK_ADDR\0"
  /* 3069 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 3094 */ "G_READCYCLECOUNTER\0"
  /* 3113 */ "G_READ_REGISTER\0"
  /* 3129 */ "G_WRITE_REGISTER\0"
  /* 3146 */ "G_ASHR\0"
  /* 3153 */ "G_FSHR\0"
  /* 3160 */ "G_LSHR\0"
  /* 3167 */ "FOR\0"
  /* 3171 */ "FNOR\0"
  /* 3176 */ "FXNOR\0"
  /* 3182 */ "G_FFLOOR\0"
  /* 3191 */ "G_BUILD_VECTOR\0"
  /* 3206 */ "G_SHUFFLE_VECTOR\0"
  /* 3223 */ "FXOR\0"
  /* 3228 */ "G_VECREDUCE_XOR\0"
  /* 3244 */ "G_XOR\0"
  /* 3250 */ "G_ATOMICRMW_XOR\0"
  /* 3266 */ "G_VECREDUCE_OR\0"
  /* 3281 */ "G_OR\0"
  /* 3286 */ "G_ATOMICRMW_OR\0"
  /* 3301 */ "RDPR\0"
  /* 3306 */ "RDASR\0"
  /* 3312 */ "RDPSR\0"
  /* 3318 */ "G_INTTOPTR\0"
  /* 3329 */ "FSRC1S\0"
  /* 3336 */ "FANDNOT1S\0"
  /* 3346 */ "FNOT1S\0"
  /* 3353 */ "FORNOT1S\0"
  /* 3362 */ "FPSUB32S\0"
  /* 3371 */ "FPADD32S\0"
  /* 3380 */ "FSRC2S\0"
  /* 3387 */ "FANDNOT2S\0"
  /* 3397 */ "FNOT2S\0"
  /* 3404 */ "FORNOT2S\0"
  /* 3413 */ "FPSUB16S\0"
  /* 3422 */ "FPADD16S\0"
  /* 3431 */ "G_FABS\0"
  /* 3438 */ "G_ABS\0"
  /* 3444 */ "FSUBS\0"
  /* 3450 */ "FHSUBS\0"
  /* 3457 */ "FADDS\0"
  /* 3463 */ "FHADDS\0"
  /* 3470 */ "FNHADDS\0"
  /* 3478 */ "FNADDS\0"
  /* 3485 */ "FANDS\0"
  /* 3491 */ "FNANDS\0"
  /* 3498 */ "FONES\0"
  /* 3504 */ "V9FCMPES\0"
  /* 3513 */ "G_UNMERGE_VALUES\0"
  /* 3530 */ "G_MERGE_VALUES\0"
  /* 3545 */ "FNEGS\0"
  /* 3551 */ "FMULS\0"
  /* 3557 */ "FNMULS\0"
  /* 3564 */ "G_FCOS\0"
  /* 3571 */ "FZEROS\0"
  /* 3578 */ "FDTOS\0"
  /* 3584 */ "FITOS\0"
  /* 3590 */ "FQTOS\0"
  /* 3596 */ "MOVWTOS\0"
  /* 3604 */ "FXTOS\0"
  /* 3610 */ "V9FCMPS\0"
  /* 3618 */ "FLCMPS\0"
  /* 3625 */ "FORS\0"
  /* 3630 */ "FNORS\0"
  /* 3636 */ "FXNORS\0"
  /* 3643 */ "G_CONCAT_VECTORS\0"
  /* 3660 */ "FXORS\0"
  /* 3666 */ "COPY_TO_REGCLASS\0"
  /* 3683 */ "FABSS\0"
  /* 3689 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 3719 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 3746 */ "FSQRTS\0"
  /* 3753 */ "FDIVS\0"
  /* 3759 */ "FMOVS\0"
  /* 3765 */ "FMOVRGEZS\0"
  /* 3775 */ "FMOVRLEZS\0"
  /* 3785 */ "FMOVRGZS\0"
  /* 3794 */ "FMOVRLZS\0"
  /* 3803 */ "FMOVRNZS\0"
  /* 3812 */ "FMOVRZS\0"
  /* 3820 */ "G_SSUBSAT\0"
  /* 3830 */ "G_USUBSAT\0"
  /* 3840 */ "G_SADDSAT\0"
  /* 3850 */ "G_UADDSAT\0"
  /* 3860 */ "G_SSHLSAT\0"
  /* 3870 */ "G_USHLSAT\0"
  /* 3880 */ "G_SMULFIXSAT\0"
  /* 3893 */ "G_UMULFIXSAT\0"
  /* 3906 */ "G_SDIVFIXSAT\0"
  /* 3919 */ "G_UDIVFIXSAT\0"
  /* 3932 */ "G_EXTRACT\0"
  /* 3942 */ "G_SELECT\0"
  /* 3951 */ "G_BRINDIRECT\0"
  /* 3964 */ "PATCHABLE_RET\0"
  /* 3978 */ "G_MEMSET\0"
  /* 3987 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 4011 */ "G_BRJT\0"
  /* 4018 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 4039 */ "G_INSERT_VECTOR_ELT\0"
  /* 4059 */ "BPFCCANT\0"
  /* 4068 */ "BPICCANT\0"
  /* 4077 */ "BPXCCANT\0"
  /* 4086 */ "G_FCONSTANT\0"
  /* 4098 */ "G_CONSTANT\0"
  /* 4109 */ "BPFCCNT\0"
  /* 4117 */ "BPICCNT\0"
  /* 4125 */ "BPXCCNT\0"
  /* 4133 */ "LZCNT\0"
  /* 4139 */ "STATEPOINT\0"
  /* 4150 */ "PATCHPOINT\0"
  /* 4161 */ "G_PTRTOINT\0"
  /* 4172 */ "G_FRINT\0"
  /* 4180 */ "G_INTRINSIC_LRINT\0"
  /* 4198 */ "G_FNEARBYINT\0"
  /* 4211 */ "G_VASTART\0"
  /* 4221 */ "LIFETIME_START\0"
  /* 4236 */ "G_INSERT\0"
  /* 4245 */ "G_FSQRT\0"
  /* 4253 */ "G_STRICT_FSQRT\0"
  /* 4268 */ "G_BITCAST\0"
  /* 4278 */ "G_ADDRSPACE_CAST\0"
  /* 4295 */ "PDIST\0"
  /* 4301 */ "G_FPEXT\0"
  /* 4309 */ "G_SEXT\0"
  /* 4316 */ "G_ANYEXT\0"
  /* 4325 */ "G_ZEXT\0"
  /* 4332 */ "G_ASSERT_ZEXT\0"
  /* 4346 */ "FMUL8X16AU\0"
  /* 4357 */ "G_FDIV\0"
  /* 4364 */ "G_STRICT_FDIV\0"
  /* 4378 */ "G_SDIV\0"
  /* 4385 */ "G_UDIV\0"
  /* 4392 */ "FLUSHW\0"
  /* 4399 */ "G_FPOW\0"
  /* 4406 */ "MOVSTOSW\0"
  /* 4415 */ "MOVSTOUW\0"
  /* 4424 */ "G_VECREDUCE_FMAX\0"
  /* 4441 */ "G_VECREDUCE_SMAX\0"
  /* 4458 */ "G_SMAX\0"
  /* 4465 */ "G_VECREDUCE_UMAX\0"
  /* 4482 */ "G_UMAX\0"
  /* 4489 */ "G_ATOMICRMW_UMAX\0"
  /* 4506 */ "G_ATOMICRMW_MAX\0"
  /* 4522 */ "GETPCX\0"
  /* 4529 */ "G_FRAME_INDEX\0"
  /* 4543 */ "FPACKFIX\0"
  /* 4552 */ "G_SMULFIX\0"
  /* 4562 */ "G_UMULFIX\0"
  /* 4572 */ "G_SDIVFIX\0"
  /* 4582 */ "G_UDIVFIX\0"
  /* 4592 */ "XMULX\0"
  /* 4598 */ "FDTOX\0"
  /* 4604 */ "MOVDTOX\0"
  /* 4612 */ "FQTOX\0"
  /* 4618 */ "FSTOX\0"
  /* 4624 */ "G_MEMCPY\0"
  /* 4633 */ "COPY\0"
  /* 4638 */ "G_CTLZ\0"
  /* 4645 */ "G_CTTZ\0"
  /* 4652 */ "SETHIi\0"
  /* 4659 */ "MEMBARi\0"
  /* 4667 */ "SETHIXi\0"
  /* 4675 */ "SRAri\0"
  /* 4681 */ "LDSBri\0"
  /* 4688 */ "STBri\0"
  /* 4694 */ "LDUBri\0"
  /* 4701 */ "SUBri\0"
  /* 4707 */ "LDSTUBri\0"
  /* 4716 */ "SMACri\0"
  /* 4723 */ "UMACri\0"
  /* 4730 */ "SUBCri\0"
  /* 4737 */ "TSUBCCri\0"
  /* 4746 */ "TADDCCri\0"
  /* 4755 */ "ANDCCri\0"
  /* 4763 */ "V9MOVFCCri\0"
  /* 4774 */ "TICCri\0"
  /* 4781 */ "MOVICCri\0"
  /* 4790 */ "SMULCCri\0"
  /* 4799 */ "UMULCCri\0"
  /* 4808 */ "ANDNCCri\0"
  /* 4817 */ "ORNCCri\0"
  /* 4825 */ "XNORCCri\0"
  /* 4834 */ "XORCCri\0"
  /* 4842 */ "MULSCCri\0"
  /* 4851 */ "SDIVCCri\0"
  /* 4860 */ "UDIVCCri\0"
  /* 4869 */ "TXCCri\0"
  /* 4876 */ "MOVXCCri\0"
  /* 4885 */ "ADDCri\0"
  /* 4892 */ "LDDCri\0"
  /* 4899 */ "LDCri\0"
  /* 4905 */ "STDCri\0"
  /* 4912 */ "STCri\0"
  /* 4918 */ "LEA_ADDri\0"
  /* 4928 */ "LEAX_ADDri\0"
  /* 4939 */ "LDDri\0"
  /* 4945 */ "LDri\0"
  /* 4950 */ "ANDri\0"
  /* 4956 */ "BINDri\0"
  /* 4963 */ "STDri\0"
  /* 4969 */ "SUBEri\0"
  /* 4976 */ "ADDEri\0"
  /* 4983 */ "RESTOREri\0"
  /* 4993 */ "SAVEri\0"
  /* 5000 */ "LDDFri\0"
  /* 5007 */ "LDFri\0"
  /* 5013 */ "STDFri\0"
  /* 5020 */ "LDQFri\0"
  /* 5027 */ "STQFri\0"
  /* 5034 */ "STFri\0"
  /* 5040 */ "LDSHri\0"
  /* 5047 */ "FLUSHri\0"
  /* 5055 */ "STHri\0"
  /* 5061 */ "LDUHri\0"
  /* 5068 */ "CALLri\0"
  /* 5075 */ "SLLri\0"
  /* 5081 */ "JMPLri\0"
  /* 5088 */ "SRLri\0"
  /* 5094 */ "SMULri\0"
  /* 5101 */ "UMULri\0"
  /* 5108 */ "WRWIMri\0"
  /* 5116 */ "ANDNri\0"
  /* 5123 */ "ORNri\0"
  /* 5129 */ "TRAPri\0"
  /* 5136 */ "SWAPri\0"
  /* 5143 */ "CMPri\0"
  /* 5149 */ "STDCQri\0"
  /* 5157 */ "STDFQri\0"
  /* 5165 */ "WRTBRri\0"
  /* 5173 */ "XNORri\0"
  /* 5180 */ "XORri\0"
  /* 5186 */ "WRPRri\0"
  /* 5193 */ "WRASRri\0"
  /* 5201 */ "LDCSRri\0"
  /* 5209 */ "STCSRri\0"
  /* 5217 */ "LDFSRri\0"
  /* 5225 */ "STFSRri\0"
  /* 5233 */ "LDXFSRri\0"
  /* 5242 */ "STXFSRri\0"
  /* 5251 */ "PWRPSRri\0"
  /* 5260 */ "STri\0"
  /* 5265 */ "RETTri\0"
  /* 5272 */ "SDIVri\0"
  /* 5279 */ "UDIVri\0"
  /* 5286 */ "TSUBCCTVri\0"
  /* 5297 */ "TADDCCTVri\0"
  /* 5308 */ "LDSWri\0"
  /* 5315 */ "SRAXri\0"
  /* 5322 */ "SUBXri\0"
  /* 5329 */ "ADDXri\0"
  /* 5336 */ "LDXri\0"
  /* 5342 */ "ANDXri\0"
  /* 5349 */ "SLLXri\0"
  /* 5356 */ "SRLXri\0"
  /* 5363 */ "MULXri\0"
  /* 5370 */ "XORXri\0"
  /* 5377 */ "STXri\0"
  /* 5383 */ "SDIVXri\0"
  /* 5391 */ "UDIVXri\0"
  /* 5399 */ "MOVRGEZri\0"
  /* 5409 */ "MOVRLEZri\0"
  /* 5419 */ "MOVRGZri\0"
  /* 5428 */ "MOVRLZri\0"
  /* 5437 */ "MOVRNZri\0"
  /* 5446 */ "MOVRRZri\0"
  /* 5455 */ "BPGEZapn\0"
  /* 5464 */ "BPLEZapn\0"
  /* 5473 */ "BPGZapn\0"
  /* 5481 */ "BPLZapn\0"
  /* 5489 */ "BPNZapn\0"
  /* 5497 */ "BPZapn\0"
  /* 5504 */ "BPGEZnapn\0"
  /* 5514 */ "BPLEZnapn\0"
  /* 5524 */ "BPGZnapn\0"
  /* 5533 */ "BPLZnapn\0"
  /* 5542 */ "BPNZnapn\0"
  /* 5551 */ "BPZnapn\0"
  /* 5559 */ "LDSBArr\0"
  /* 5567 */ "STBArr\0"
  /* 5574 */ "LDUBArr\0"
  /* 5582 */ "LDSTUBArr\0"
  /* 5592 */ "LDDArr\0"
  /* 5599 */ "LDArr\0"
  /* 5605 */ "STDArr\0"
  /* 5612 */ "LDDFArr\0"
  /* 5620 */ "LDFArr\0"
  /* 5627 */ "STDFArr\0"
  /* 5635 */ "LDQFArr\0"
  /* 5643 */ "STQFArr\0"
  /* 5651 */ "STFArr\0"
  /* 5658 */ "LDSHArr\0"
  /* 5666 */ "STHArr\0"
  /* 5673 */ "LDUHArr\0"
  /* 5681 */ "SWAPArr\0"
  /* 5689 */ "SRArr\0"
  /* 5695 */ "CASArr\0"
  /* 5702 */ "STArr\0"
  /* 5708 */ "LDSBrr\0"
  /* 5715 */ "STBrr\0"
  /* 5721 */ "LDUBrr\0"
  /* 5728 */ "SUBrr\0"
  /* 5734 */ "LDSTUBrr\0"
  /* 5743 */ "SMACrr\0"
  /* 5750 */ "UMACrr\0"
  /* 5757 */ "SUBCrr\0"
  /* 5764 */ "TSUBCCrr\0"
  /* 5773 */ "TADDCCrr\0"
  /* 5782 */ "ANDCCrr\0"
  /* 5790 */ "V9MOVFCCrr\0"
  /* 5801 */ "TICCrr\0"
  /* 5808 */ "MOVICCrr\0"
  /* 5817 */ "SMULCCrr\0"
  /* 5826 */ "UMULCCrr\0"
  /* 5835 */ "ANDNCCrr\0"
  /* 5844 */ "ORNCCrr\0"
  /* 5852 */ "XNORCCrr\0"
  /* 5861 */ "XORCCrr\0"
  /* 5869 */ "MULSCCrr\0"
  /* 5878 */ "SDIVCCrr\0"
  /* 5887 */ "UDIVCCrr\0"
  /* 5896 */ "TXCCrr\0"
  /* 5903 */ "MOVXCCrr\0"
  /* 5912 */ "ADDCrr\0"
  /* 5919 */ "LDDCrr\0"
  /* 5926 */ "LDCrr\0"
  /* 5932 */ "STDCrr\0"
  /* 5939 */ "POPCrr\0"
  /* 5946 */ "STCrr\0"
  /* 5952 */ "TLS_ADDrr\0"
  /* 5962 */ "LDDrr\0"
  /* 5968 */ "TLS_LDrr\0"
  /* 5977 */ "ANDrr\0"
  /* 5983 */ "BINDrr\0"
  /* 5990 */ "STDrr\0"
  /* 5996 */ "SUBErr\0"
  /* 6003 */ "ADDErr\0"
  /* 6010 */ "RESTORErr\0"
  /* 6020 */ "SAVErr\0"
  /* 6027 */ "LDDFrr\0"
  /* 6034 */ "LDFrr\0"
  /* 6040 */ "STDFrr\0"
  /* 6047 */ "LDQFrr\0"
  /* 6054 */ "STQFrr\0"
  /* 6061 */ "STFrr\0"
  /* 6067 */ "LDSHrr\0"
  /* 6074 */ "FLUSHrr\0"
  /* 6082 */ "STHrr\0"
  /* 6088 */ "LDUHrr\0"
  /* 6095 */ "CALLrr\0"
  /* 6102 */ "SLLrr\0"
  /* 6108 */ "JMPLrr\0"
  /* 6115 */ "SRLrr\0"
  /* 6121 */ "SMULrr\0"
  /* 6128 */ "UMULrr\0"
  /* 6135 */ "WRWIMrr\0"
  /* 6143 */ "ANDNrr\0"
  /* 6150 */ "ORNrr\0"
  /* 6156 */ "ANDXNrr\0"
  /* 6164 */ "ORXNrr\0"
  /* 6171 */ "TRAPrr\0"
  /* 6178 */ "SWAPrr\0"
  /* 6185 */ "CMPrr\0"
  /* 6191 */ "STDCQrr\0"
  /* 6199 */ "STDFQrr\0"
  /* 6207 */ "WRTBRrr\0"
  /* 6215 */ "XNORrr\0"
  /* 6222 */ "XORrr\0"
  /* 6228 */ "WRPRrr\0"
  /* 6235 */ "WRASRrr\0"
  /* 6243 */ "LDCSRrr\0"
  /* 6251 */ "STCSRrr\0"
  /* 6259 */ "LDFSRrr\0"
  /* 6267 */ "STFSRrr\0"
  /* 6275 */ "LDXFSRrr\0"
  /* 6284 */ "STXFSRrr\0"
  /* 6293 */ "PWRPSRrr\0"
  /* 6302 */ "CASrr\0"
  /* 6308 */ "STrr\0"
  /* 6313 */ "RETTrr\0"
  /* 6320 */ "SDIVrr\0"
  /* 6327 */ "UDIVrr\0"
  /* 6334 */ "TSUBCCTVrr\0"
  /* 6345 */ "TADDCCTVrr\0"
  /* 6356 */ "LDSWrr\0"
  /* 6363 */ "SRAXrr\0"
  /* 6370 */ "SUBXrr\0"
  /* 6377 */ "TLS_ADDXrr\0"
  /* 6388 */ "TLS_LDXrr\0"
  /* 6398 */ "ANDXrr\0"
  /* 6405 */ "SLLXrr\0"
  /* 6412 */ "SRLXrr\0"
  /* 6419 */ "MULXrr\0"
  /* 6426 */ "XNORXrr\0"
  /* 6434 */ "XORXrr\0"
  /* 6441 */ "CASXrr\0"
  /* 6448 */ "STXrr\0"
  /* 6454 */ "SDIVXrr\0"
  /* 6462 */ "UDIVXrr\0"
  /* 6470 */ "MOVRGEZrr\0"
  /* 6480 */ "MOVRLEZrr\0"
  /* 6490 */ "MOVRGZrr\0"
  /* 6499 */ "MOVRLZrr\0"
  /* 6508 */ "MOVRNZrr\0"
  /* 6517 */ "MOVRRZrr\0"
  /* 6526 */ "BPGEZapt\0"
  /* 6535 */ "BPLEZapt\0"
  /* 6544 */ "BPGZapt\0"
  /* 6552 */ "BPLZapt\0"
  /* 6560 */ "BPNZapt\0"
  /* 6568 */ "BPZapt\0"
  /* 6575 */ "BPGEZnapt\0"
  /* 6585 */ "BPLEZnapt\0"
  /* 6595 */ "BPGZnapt\0"
  /* 6604 */ "BPLZnapt\0"
  /* 6613 */ "BPNZnapt\0"
  /* 6622 */ "BPZnapt\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned SparcInstrNameIndices[] = {
    1951U, 2388U, 3033U, 2628U, 2084U, 2065U, 2093U, 2240U, 
    1805U, 1820U, 1771U, 1847U, 3666U, 1673U, 1784U, 2074U, 
    1522U, 4633U, 1602U, 4221U, 1287U, 1485U, 2731U, 2228U, 
    4150U, 1388U, 2838U, 1910U, 4139U, 1623U, 2811U, 2798U, 
    3069U, 3964U, 3987U, 2151U, 2207U, 2180U, 2110U, 4332U, 
    1110U, 538U, 2336U, 4378U, 4385U, 2368U, 2375U, 1265U, 
    3281U, 3244U, 1769U, 1949U, 4529U, 1683U, 3932U, 3513U, 
    4236U, 3530U, 3191U, 872U, 3643U, 4161U, 3318U, 4268U, 
    1708U, 846U, 1323U, 4180U, 2463U, 3094U, 998U, 942U, 
    972U, 983U, 923U, 953U, 1652U, 1636U, 3689U, 1861U, 
    1878U, 1126U, 544U, 1271U, 1224U, 3286U, 3250U, 4506U, 
    2579U, 4489U, 2562U, 1077U, 521U, 1514U, 1314U, 3951U, 
    824U, 3719U, 4316U, 864U, 4098U, 4086U, 4211U, 1902U, 
    4309U, 1834U, 4325U, 2137U, 3160U, 3146U, 2130U, 3153U, 
    2773U, 2766U, 3942U, 2701U, 1543U, 2685U, 1506U, 2693U, 
    1535U, 2677U, 1498U, 2717U, 2709U, 1935U, 1927U, 3850U, 
    3840U, 3830U, 3820U, 3870U, 3860U, 4552U, 4562U, 3880U, 
    3893U, 4572U, 4582U, 3906U, 3919U, 1035U, 500U, 2278U, 
    469U, 916U, 4357U, 2347U, 4399U, 2007U, 2857U, 178U, 
    1895U, 170U, 0U, 1798U, 4301U, 836U, 1989U, 1998U, 
    2748U, 2757U, 3431U, 2485U, 1717U, 2420U, 2430U, 1551U, 
    1566U, 2398U, 2409U, 1116U, 2021U, 2531U, 4458U, 2555U, 
    4482U, 3438U, 3028U, 4011U, 4039U, 4018U, 3206U, 4645U, 
    1751U, 4638U, 1733U, 2790U, 2740U, 1660U, 2143U, 3564U, 
    2595U, 4245U, 3182U, 4172U, 4198U, 4278U, 3056U, 1589U, 
    893U, 1063U, 507U, 2306U, 4364U, 2354U, 475U, 4253U, 
    3113U, 3129U, 4624U, 1698U, 3978U, 1042U, 2285U, 1018U, 
    2261U, 4424U, 2497U, 1094U, 2320U, 1249U, 3266U, 3228U, 
    4441U, 2514U, 4465U, 2538U, 2651U, 2823U, 4522U, 586U, 
    697U, 622U, 733U, 663U, 770U, 604U, 715U, 3983U, 
    4747U, 5774U, 4885U, 5912U, 4976U, 6003U, 910U, 560U, 
    5329U, 6381U, 4922U, 5956U, 3046U, 2245U, 4755U, 5782U, 
    4808U, 5835U, 5116U, 6143U, 6156U, 5342U, 6398U, 4950U, 
    5977U, 401U, 156U, 422U, 429U, 1301U, 454U, 4956U, 
    5983U, 2015U, 568U, 432U, 4059U, 4109U, 5455U, 6526U, 
    5504U, 6575U, 5473U, 6544U, 5524U, 6595U, 681U, 439U, 
    4068U, 4117U, 5464U, 6535U, 5514U, 6585U, 5481U, 6552U, 
    5533U, 6604U, 5489U, 6560U, 5542U, 6613U, 788U, 446U, 
    4077U, 4125U, 5497U, 6568U, 5551U, 6622U, 1609U, 2166U, 
    5068U, 6095U, 9U, 5695U, 6441U, 6302U, 1300U, 453U, 
    281U, 108U, 415U, 5143U, 6185U, 248U, 2039U, 2611U, 
    2448U, 75U, 2031U, 2602U, 2440U, 409U, 2047U, 2620U, 
    2456U, 1405U, 2936U, 3683U, 1142U, 2870U, 3457U, 488U, 
    1213U, 29U, 3336U, 186U, 3387U, 3485U, 1307U, 461U, 
    303U, 1375U, 320U, 130U, 337U, 147U, 255U, 82U, 
    264U, 91U, 2930U, 3612U, 1418U, 2949U, 3753U, 2891U, 
    1971U, 2904U, 3578U, 4598U, 1241U, 1148U, 3463U, 1011U, 
    3450U, 1341U, 2910U, 3584U, 1381U, 3618U, 1943U, 4392U, 
    5047U, 6074U, 312U, 1424U, 576U, 687U, 794U, 2955U, 
    641U, 750U, 804U, 1430U, 2961U, 3765U, 1450U, 2981U, 
    3785U, 1440U, 2971U, 3775U, 1459U, 2990U, 3794U, 1468U, 
    2999U, 3803U, 1477U, 3008U, 3812U, 3759U, 653U, 760U, 
    814U, 390U, 367U, 346U, 2054U, 4346U, 1185U, 378U, 
    355U, 2898U, 3551U, 1163U, 3478U, 1218U, 3491U, 1179U, 
    2885U, 3545U, 1155U, 3470U, 1191U, 3557U, 3171U, 3630U, 
    38U, 3346U, 195U, 3397U, 1205U, 1618U, 3498U, 3167U, 
    44U, 3353U, 201U, 3404U, 3625U, 273U, 100U, 4543U, 
    240U, 3422U, 67U, 3371U, 213U, 1581U, 232U, 3413U, 
    59U, 3362U, 1347U, 1977U, 3590U, 4612U, 329U, 139U, 
    289U, 116U, 1198U, 1411U, 2942U, 3746U, 225U, 52U, 
    23U, 3329U, 164U, 3380U, 296U, 123U, 1353U, 1983U, 
    2916U, 4618U, 1005U, 2864U, 3444U, 3176U, 3636U, 3223U, 
    3660U, 1359U, 2922U, 3604U, 2725U, 3571U, 5081U, 6108U, 
    5599U, 5201U, 6243U, 4899U, 5926U, 5592U, 4892U, 5919U, 
    5612U, 5000U, 6027U, 4939U, 5962U, 5620U, 5217U, 6259U, 
    5007U, 6034U, 5635U, 5020U, 6047U, 5559U, 4681U, 5708U, 
    5658U, 5040U, 6067U, 5582U, 4707U, 5734U, 5308U, 6356U, 
    5574U, 4694U, 5721U, 5673U, 5061U, 6088U, 5233U, 6275U, 
    5336U, 6392U, 4945U, 5972U, 4928U, 4918U, 4133U, 4659U, 
    4604U, 4765U, 5792U, 4781U, 5808U, 5399U, 6470U, 5419U, 
    6490U, 5409U, 6480U, 5428U, 6499U, 5437U, 6508U, 5446U, 
    6517U, 4406U, 4415U, 3596U, 4876U, 5903U, 1365U, 4842U, 
    5869U, 5363U, 6419U, 2786U, 4827U, 5854U, 4817U, 5844U, 
    5123U, 6150U, 6164U, 5371U, 6428U, 5175U, 6217U, 4295U, 
    2644U, 5939U, 5251U, 6293U, 3306U, 3301U, 3312U, 3022U, 
    2382U, 4983U, 6010U, 3974U, 2256U, 5265U, 6313U, 4993U, 
    6020U, 4851U, 5878U, 5383U, 6454U, 5272U, 6320U, 4667U, 
    4652U, 2668U, 2342U, 5349U, 6405U, 5075U, 6102U, 4716U, 
    5743U, 4790U, 5817U, 5094U, 6121U, 5315U, 6363U, 4675U, 
    5689U, 5356U, 6412U, 5088U, 6115U, 5702U, 3016U, 5567U, 
    4688U, 5715U, 5209U, 6251U, 4912U, 5946U, 5605U, 5149U, 
    6191U, 4905U, 5932U, 5627U, 5157U, 6199U, 5013U, 6040U, 
    4963U, 5990U, 5651U, 5225U, 6267U, 5034U, 6061U, 5666U, 
    5055U, 6082U, 5643U, 5027U, 6054U, 5242U, 6284U, 5377U, 
    6448U, 5260U, 6308U, 4738U, 5765U, 4730U, 5757U, 4969U, 
    5996U, 5322U, 6370U, 4701U, 5728U, 5681U, 5136U, 6178U, 
    19U, 209U, 221U, 5297U, 6345U, 4746U, 5773U, 4774U, 
    5801U, 6377U, 5952U, 2171U, 6388U, 5968U, 5129U, 6171U, 
    5286U, 6334U, 4737U, 5764U, 4869U, 5896U, 4860U, 5887U, 
    5391U, 6462U, 5279U, 6327U, 4723U, 5750U, 4799U, 5826U, 
    1955U, 5101U, 6128U, 2780U, 1373U, 1170U, 2876U, 3504U, 
    2928U, 3610U, 574U, 639U, 651U, 4763U, 5790U, 5193U, 
    6235U, 5186U, 6228U, 5252U, 6294U, 5165U, 6207U, 5108U, 
    6135U, 4592U, 1963U, 4825U, 5852U, 6426U, 5173U, 6215U, 
    4834U, 5861U, 5370U, 6434U, 5180U, 6222U, 
};

static inline void InitSparcMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, nullptr, nullptr, 758);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SparcGenInstrInfo : public TargetInstrInfo {
  explicit SparcGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~SparcGenInstrInfo() override = default;

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
extern const MCInstrDesc SparcInsts[];
extern const unsigned SparcInstrNameIndices[];
extern const char SparcInstrNameData[];
SparcGenInstrInfo::SparcGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, nullptr, nullptr, 758);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace SP {
namespace OpName {
enum {
  OPERAND_LAST
};
} // end namespace OpName
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace SP {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace SP {
namespace OpTypes {
enum OperandType {
  CCOp = 0,
  MEMri = 1,
  MEMrr = 2,
  MembarTag = 3,
  TLSSym = 4,
  bprtarget = 5,
  bprtarget16 = 6,
  brtarget = 7,
  calltarget = 8,
  f32imm = 9,
  f64imm = 10,
  getPCX = 11,
  i16imm = 12,
  i1imm = 13,
  i32imm = 14,
  i64imm = 15,
  i8imm = 16,
  ptype0 = 17,
  ptype1 = 18,
  ptype2 = 19,
  ptype3 = 20,
  ptype4 = 21,
  ptype5 = 22,
  shift_imm5 = 23,
  shift_imm6 = 24,
  simm13Op = 25,
  type0 = 26,
  type1 = 27,
  type2 = 28,
  type3 = 29,
  type4 = 30,
  type5 = 31,
  untyped_imm_0 = 32,
  ASRRegs = 33,
  CoprocPair = 34,
  CoprocRegs = 35,
  DFPRegs = 36,
  FCCRegs = 37,
  FPRegs = 38,
  I64Regs = 39,
  IntPair = 40,
  IntRegs = 41,
  LowDFPRegs = 42,
  LowQFPRegs = 43,
  PRRegs = 44,
  QFPRegs = 45,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace SP {
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
    580,
    584,
    588,
    592,
    596,
    600,
    604,
    608,
    612,
    614,
    617,
    620,
    623,
    626,
    629,
    632,
    635,
    638,
    641,
    644,
    647,
    650,
    653,
    656,
    659,
    662,
    665,
    668,
    671,
    674,
    677,
    680,
    683,
    686,
    689,
    692,
    695,
    698,
    699,
    701,
    703,
    705,
    707,
    710,
    713,
    716,
    719,
    722,
    724,
    726,
    728,
    730,
    732,
    734,
    736,
    738,
    740,
    742,
    744,
    746,
    748,
    750,
    752,
    754,
    756,
    758,
    760,
    762,
    764,
    766,
    768,
    770,
    772,
    774,
    776,
    778,
    780,
    782,
    784,
    786,
    789,
    790,
    792,
    794,
    798,
    803,
    807,
    811,
    813,
    815,
    816,
    817,
    818,
    820,
    822,
    825,
    828,
    831,
    834,
    837,
    840,
    843,
    846,
    849,
    852,
    855,
    858,
    860,
    862,
    864,
    867,
    870,
    873,
    876,
    879,
    882,
    885,
    888,
    891,
    894,
    896,
    898,
    901,
    903,
    906,
    909,
    912,
    915,
    918,
    921,
    924,
    927,
    929,
    931,
    934,
    937,
    940,
    943,
    945,
    947,
    949,
    951,
    953,
    956,
    959,
    962,
    965,
    967,
    969,
    971,
    974,
    977,
    977,
    977,
    979,
    981,
    984,
    986,
    990,
    994,
    998,
    1000,
    1004,
    1008,
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
    1066,
    1068,
    1072,
    1076,
    1080,
    1083,
    1086,
    1089,
    1092,
    1095,
    1098,
    1101,
    1104,
    1107,
    1110,
    1113,
    1116,
    1119,
    1122,
    1124,
    1126,
    1128,
    1131,
    1134,
    1137,
    1140,
    1143,
    1146,
    1148,
    1150,
    1152,
    1154,
    1157,
    1159,
    1161,
    1164,
    1167,
    1170,
    1173,
    1176,
    1179,
    1181,
    1184,
    1186,
    1189,
    1192,
    1195,
    1198,
    1201,
    1204,
    1207,
    1210,
    1213,
    1216,
    1218,
    1220,
    1222,
    1224,
    1227,
    1230,
    1233,
    1236,
    1239,
    1241,
    1243,
    1245,
    1248,
    1251,
    1253,
    1255,
    1257,
    1259,
    1262,
    1265,
    1267,
    1269,
    1271,
    1273,
    1276,
    1279,
    1282,
    1285,
    1288,
    1291,
    1294,
    1296,
    1298,
    1300,
    1302,
    1304,
    1307,
    1310,
    1314,
    1316,
    1318,
    1321,
    1324,
    1328,
    1331,
    1334,
    1338,
    1341,
    1344,
    1347,
    1350,
    1354,
    1356,
    1358,
    1361,
    1364,
    1368,
    1371,
    1374,
    1378,
    1381,
    1384,
    1388,
    1391,
    1394,
    1398,
    1401,
    1404,
    1407,
    1410,
    1414,
    1417,
    1420,
    1424,
    1427,
    1430,
    1432,
    1434,
    1437,
    1440,
    1443,
    1446,
    1449,
    1452,
    1454,
    1455,
    1457,
    1461,
    1465,
    1469,
    1473,
    1476,
    1479,
    1482,
    1485,
    1488,
    1491,
    1494,
    1497,
    1500,
    1503,
    1506,
    1509,
    1511,
    1513,
    1515,
    1519,
    1523,
    1525,
    1528,
    1531,
    1534,
    1537,
    1537,
    1540,
    1543,
    1546,
    1549,
    1552,
    1555,
    1558,
    1561,
    1564,
    1567,
    1570,
    1573,
    1576,
    1578,
    1580,
    1582,
    1584,
    1586,
    1587,
    1588,
    1589,
    1592,
    1595,
    1596,
    1597,
    1599,
    1601,
    1604,
    1607,
    1610,
    1613,
    1616,
    1619,
    1622,
    1625,
    1627,
    1629,
    1629,
    1629,
    1632,
    1635,
    1638,
    1641,
    1645,
    1649,
    1652,
    1655,
    1658,
    1661,
    1664,
    1667,
    1670,
    1673,
    1676,
    1679,
    1682,
    1685,
    1689,
    1689,
    1693,
    1696,
    1699,
    1701,
    1703,
    1706,
    1709,
    1713,
    1715,
    1717,
    1720,
    1723,
    1727,
    1729,
    1731,
    1734,
    1737,
    1740,
    1743,
    1747,
    1749,
    1751,
    1754,
    1757,
    1761,
    1764,
    1767,
    1771,
    1774,
    1777,
    1779,
    1781,
    1784,
    1787,
    1790,
    1793,
    1796,
    1799,
    1802,
    1805,
    1808,
    1811,
    1814,
    1817,
    1820,
    1823,
    1828,
    1832,
    1836,
    1836,
    1836,
    1836,
    1839,
    1842,
    1845,
    1848,
    1851,
    1854,
    1858,
    1862,
    1864,
    1868,
    1872,
    1875,
    1878,
    1881,
    1884,
    1887,
    1890,
    1893,
    1896,
    1899,
    1902,
    1905,
    1908,
    1911,
    1914,
    1918,
    1922,
    1925,
    1928,
    1931,
    1934,
    1937,
    1938,
    1941,
    1944,
    1947,
    1950,
    1953,
    1956,
    1961,
    1966,
    1971,
    1976,
    1981,
    1984,
    1987,
    1990,
    1993,
    1995,
    1997,
    1999,
    2001,
    2003,
    2005,
    2008,
    2011,
    2014,
    2017,
    2020,
    2023,
    2026,
    2029,
    2032,
    2035,
    2038,
    2041,
  };
  const int8_t OpcodeOperandTypes[] = {
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
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::getPCX, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::i32imm, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::i32imm, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::i32imm, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::i32imm, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i32imm, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i32imm, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::i32imm, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::i32imm, 
    OpTypes::IntRegs, OpTypes::i32imm, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::brtarget, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::brtarget, OpTypes::CCOp, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::bprtarget, OpTypes::CCOp, OpTypes::FCCRegs, 
    OpTypes::bprtarget, OpTypes::CCOp, OpTypes::FCCRegs, 
    OpTypes::bprtarget, OpTypes::CCOp, OpTypes::FCCRegs, 
    OpTypes::bprtarget, OpTypes::CCOp, OpTypes::FCCRegs, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::I64Regs, OpTypes::bprtarget16, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::calltarget, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i8imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::I64Regs, 
    OpTypes::I64Regs, 
    OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::QFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::FPRegs, 
    OpTypes::QFPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    /**/
    /**/
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::CCOp, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::CCOp, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::CCOp, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::CCOp, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::I64Regs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::CCOp, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::CCOp, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::QFPRegs, 
    OpTypes::DFPRegs, OpTypes::QFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::FPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::QFPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::QFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::CoprocRegs, -1, OpTypes::i32imm, 
    OpTypes::CoprocRegs, -1, -1, 
    OpTypes::IntPair, -1, -1, OpTypes::i8imm, 
    OpTypes::CoprocPair, -1, OpTypes::i32imm, 
    OpTypes::CoprocPair, -1, -1, 
    OpTypes::DFPRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::DFPRegs, -1, OpTypes::i32imm, 
    OpTypes::DFPRegs, -1, -1, 
    OpTypes::IntPair, -1, OpTypes::i32imm, 
    OpTypes::IntPair, -1, -1, 
    OpTypes::FPRegs, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::FPRegs, -1, OpTypes::i32imm, 
    OpTypes::FPRegs, -1, -1, 
    OpTypes::QFPRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::QFPRegs, -1, OpTypes::i32imm, 
    OpTypes::QFPRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::I64Regs, -1, OpTypes::i32imm, 
    OpTypes::I64Regs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::I64Regs, -1, OpTypes::i32imm, 
    OpTypes::I64Regs, -1, -1, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, -1, 
    OpTypes::I64Regs, -1, OpTypes::i32imm, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::MembarTag, 
    OpTypes::I64Regs, OpTypes::DFPRegs, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, 
    OpTypes::I64Regs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::DFPRegs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    /**/
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::PRRegs, 
    OpTypes::IntRegs, 
    OpTypes::IntRegs, 
    OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::i64imm, 
    OpTypes::IntRegs, OpTypes::i32imm, 
    /**/
    /**/
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::shift_imm6, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::shift_imm5, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::shift_imm6, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::shift_imm5, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::shift_imm6, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::shift_imm5, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    -1, -1, OpTypes::IntRegs, OpTypes::i8imm, 
    /**/
    -1, -1, OpTypes::IntRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, OpTypes::IntRegs, 
    -1, -1, OpTypes::IntRegs, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::CoprocRegs, 
    -1, -1, OpTypes::CoprocRegs, 
    -1, -1, OpTypes::IntPair, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::CoprocPair, 
    -1, -1, OpTypes::CoprocPair, 
    -1, -1, OpTypes::DFPRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::DFPRegs, 
    -1, -1, OpTypes::DFPRegs, 
    -1, OpTypes::i32imm, OpTypes::IntPair, 
    -1, -1, OpTypes::IntPair, 
    -1, -1, OpTypes::FPRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::FPRegs, 
    -1, -1, OpTypes::FPRegs, 
    -1, -1, OpTypes::IntRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, OpTypes::IntRegs, 
    -1, -1, OpTypes::IntRegs, 
    -1, -1, OpTypes::QFPRegs, OpTypes::i8imm, 
    -1, OpTypes::i32imm, OpTypes::QFPRegs, 
    -1, -1, OpTypes::QFPRegs, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, OpTypes::I64Regs, 
    -1, -1, OpTypes::I64Regs, 
    -1, OpTypes::i32imm, OpTypes::IntRegs, 
    -1, -1, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, -1, -1, OpTypes::i8imm, OpTypes::IntRegs, 
    OpTypes::IntRegs, -1, OpTypes::i32imm, OpTypes::IntRegs, 
    OpTypes::IntRegs, -1, -1, OpTypes::IntRegs, 
    /**/
    /**/
    /**/
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::TLSSym, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::TLSSym, 
    OpTypes::calltarget, OpTypes::TLSSym, 
    OpTypes::IntRegs, -1, -1, OpTypes::TLSSym, 
    OpTypes::IntRegs, -1, -1, OpTypes::TLSSym, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::i32imm, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::ASRRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::i32imm, 
    OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, 
    OpTypes::FCCRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FCCRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::FCCRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, 
    OpTypes::FCCRegs, OpTypes::FPRegs, OpTypes::FPRegs, 
    OpTypes::DFPRegs, OpTypes::FCCRegs, OpTypes::DFPRegs, OpTypes::DFPRegs, OpTypes::CCOp, 
    OpTypes::QFPRegs, OpTypes::FCCRegs, OpTypes::QFPRegs, OpTypes::QFPRegs, OpTypes::CCOp, 
    OpTypes::FPRegs, OpTypes::FCCRegs, OpTypes::FPRegs, OpTypes::FPRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::FCCRegs, OpTypes::i32imm, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::IntRegs, OpTypes::FCCRegs, OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::CCOp, 
    OpTypes::ASRRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::ASRRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::PRRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::PRRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::i64imm, 
    OpTypes::I64Regs, OpTypes::I64Regs, OpTypes::I64Regs, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::simm13Op, 
    OpTypes::IntRegs, OpTypes::IntRegs, OpTypes::IntRegs, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

