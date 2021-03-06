/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Writer Source Fragment                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// getMnemonic - This method is automatically generated by tablegen
/// from the instruction set description.
std::pair<const char *, uint64_t> LanaiInstPrinter::getMnemonic(const MCInst *MI) {

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
  static const char AsmStrs[] = {
  /* 0 */ "sha\t\0"
  /* 5 */ "uld.b\t\0"
  /* 12 */ "st.b\t\0"
  /* 18 */ "subb\t\0"
  /* 24 */ "sub\t\0"
  /* 29 */ "addc\t\0"
  /* 35 */ "popc\t\0"
  /* 41 */ "add\t\0"
  /* 46 */ "uld\t\0"
  /* 51 */ "and\t\0"
  /* 56 */ "sha.f\t\0"
  /* 63 */ "subb.f\t\0"
  /* 71 */ "sub.f\t\0"
  /* 78 */ "addc.f\t\0"
  /* 86 */ "add.f\t\0"
  /* 93 */ "and.f\t\0"
  /* 100 */ "sh.f\t\0"
  /* 106 */ "xor.f\t\0"
  /* 113 */ "uld.h\t\0"
  /* 120 */ "st.h\t\0"
  /* 126 */ "sh\t\0"
  /* 130 */ "xor\t\0"
  /* 135 */ "bt\t\0"
  /* 139 */ "st\t\0"
  /* 143 */ "mov\t\0"
  /* 148 */ "leadz\t\0"
  /* 155 */ "trailz\t\0"
  /* 163 */ "#ADJDYNALLOC \0"
  /* 177 */ "#ADJCALLSTACKDOWN \0"
  /* 196 */ "#ADJCALLSTACKUP \0"
  /* 213 */ "# XRay Function Patchable RET.\0"
  /* 244 */ "# XRay Typed Event Log.\0"
  /* 268 */ "# XRay Custom Event Log.\0"
  /* 293 */ "sel.\0"
  /* 298 */ "# XRay Function Enter.\0"
  /* 321 */ "# XRay Tail Call Exit.\0"
  /* 344 */ "# XRay Function Exit.\0"
  /* 366 */ "log_0\0"
  /* 372 */ "log_1\0"
  /* 378 */ "log_2\0"
  /* 384 */ "log_3\0"
  /* 390 */ "log_4\0"
  /* 396 */ "LIFETIME_END\0"
  /* 409 */ "PSEUDO_PROBE\0"
  /* 422 */ "BUNDLE\0"
  /* 429 */ "DBG_VALUE\0"
  /* 439 */ "DBG_INSTR_REF\0"
  /* 453 */ "DBG_LABEL\0"
  /* 463 */ "LIFETIME_START\0"
  /* 478 */ "sha\0"
  /* 482 */ "subb\0"
  /* 487 */ "sub\0"
  /* 491 */ "addc\0"
  /* 496 */ "add\0"
  /* 500 */ "and\0"
  /* 504 */ "sha.f\0"
  /* 510 */ "subb.f\0"
  /* 517 */ "sub.f\0"
  /* 523 */ "addc.f\0"
  /* 530 */ "add.f\0"
  /* 536 */ "and.f\0"
  /* 542 */ "sh.f\0"
  /* 547 */ "xor.f\0"
  /* 553 */ "sh\0"
  /* 556 */ "# FEntry call\0"
  /* 570 */ "ld\t-4[%fp], %pc ! return\0"
  /* 595 */ "nop\0"
  /* 599 */ "xor\0"
  /* 603 */ "s\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

  static const uint16_t OpInfo0[] = {
    0U,	// PHI
    0U,	// INLINEASM
    0U,	// INLINEASM_BR
    0U,	// CFI_INSTRUCTION
    0U,	// EH_LABEL
    0U,	// GC_LABEL
    0U,	// ANNOTATION_LABEL
    0U,	// KILL
    0U,	// EXTRACT_SUBREG
    0U,	// INSERT_SUBREG
    0U,	// IMPLICIT_DEF
    0U,	// SUBREG_TO_REG
    0U,	// COPY_TO_REGCLASS
    430U,	// DBG_VALUE
    440U,	// DBG_INSTR_REF
    454U,	// DBG_LABEL
    0U,	// REG_SEQUENCE
    0U,	// COPY
    423U,	// BUNDLE
    464U,	// LIFETIME_START
    397U,	// LIFETIME_END
    410U,	// PSEUDO_PROBE
    0U,	// STACKMAP
    557U,	// FENTRY_CALL
    0U,	// PATCHPOINT
    0U,	// LOAD_STACK_GUARD
    0U,	// PREALLOCATED_SETUP
    0U,	// PREALLOCATED_ARG
    0U,	// STATEPOINT
    0U,	// LOCAL_ESCAPE
    0U,	// FAULTING_OP
    0U,	// PATCHABLE_OP
    299U,	// PATCHABLE_FUNCTION_ENTER
    214U,	// PATCHABLE_RET
    345U,	// PATCHABLE_FUNCTION_EXIT
    322U,	// PATCHABLE_TAIL_CALL
    269U,	// PATCHABLE_EVENT_CALL
    245U,	// PATCHABLE_TYPED_EVENT_CALL
    0U,	// ICALL_BRANCH_FUNNEL
    0U,	// G_ASSERT_ZEXT
    0U,	// G_ADD
    0U,	// G_SUB
    0U,	// G_MUL
    0U,	// G_SDIV
    0U,	// G_UDIV
    0U,	// G_SREM
    0U,	// G_UREM
    0U,	// G_AND
    0U,	// G_OR
    0U,	// G_XOR
    0U,	// G_IMPLICIT_DEF
    0U,	// G_PHI
    0U,	// G_FRAME_INDEX
    0U,	// G_GLOBAL_VALUE
    0U,	// G_EXTRACT
    0U,	// G_UNMERGE_VALUES
    0U,	// G_INSERT
    0U,	// G_MERGE_VALUES
    0U,	// G_BUILD_VECTOR
    0U,	// G_BUILD_VECTOR_TRUNC
    0U,	// G_CONCAT_VECTORS
    0U,	// G_PTRTOINT
    0U,	// G_INTTOPTR
    0U,	// G_BITCAST
    0U,	// G_FREEZE
    0U,	// G_INTRINSIC_TRUNC
    0U,	// G_INTRINSIC_ROUND
    0U,	// G_INTRINSIC_LRINT
    0U,	// G_INTRINSIC_ROUNDEVEN
    0U,	// G_READCYCLECOUNTER
    0U,	// G_LOAD
    0U,	// G_SEXTLOAD
    0U,	// G_ZEXTLOAD
    0U,	// G_INDEXED_LOAD
    0U,	// G_INDEXED_SEXTLOAD
    0U,	// G_INDEXED_ZEXTLOAD
    0U,	// G_STORE
    0U,	// G_INDEXED_STORE
    0U,	// G_ATOMIC_CMPXCHG_WITH_SUCCESS
    0U,	// G_ATOMIC_CMPXCHG
    0U,	// G_ATOMICRMW_XCHG
    0U,	// G_ATOMICRMW_ADD
    0U,	// G_ATOMICRMW_SUB
    0U,	// G_ATOMICRMW_AND
    0U,	// G_ATOMICRMW_NAND
    0U,	// G_ATOMICRMW_OR
    0U,	// G_ATOMICRMW_XOR
    0U,	// G_ATOMICRMW_MAX
    0U,	// G_ATOMICRMW_MIN
    0U,	// G_ATOMICRMW_UMAX
    0U,	// G_ATOMICRMW_UMIN
    0U,	// G_ATOMICRMW_FADD
    0U,	// G_ATOMICRMW_FSUB
    0U,	// G_FENCE
    0U,	// G_BRCOND
    0U,	// G_BRINDIRECT
    0U,	// G_INTRINSIC
    0U,	// G_INTRINSIC_W_SIDE_EFFECTS
    0U,	// G_ANYEXT
    0U,	// G_TRUNC
    0U,	// G_CONSTANT
    0U,	// G_FCONSTANT
    0U,	// G_VASTART
    0U,	// G_VAARG
    0U,	// G_SEXT
    0U,	// G_SEXT_INREG
    0U,	// G_ZEXT
    0U,	// G_SHL
    0U,	// G_LSHR
    0U,	// G_ASHR
    0U,	// G_FSHL
    0U,	// G_FSHR
    0U,	// G_ICMP
    0U,	// G_FCMP
    0U,	// G_SELECT
    0U,	// G_UADDO
    0U,	// G_UADDE
    0U,	// G_USUBO
    0U,	// G_USUBE
    0U,	// G_SADDO
    0U,	// G_SADDE
    0U,	// G_SSUBO
    0U,	// G_SSUBE
    0U,	// G_UMULO
    0U,	// G_SMULO
    0U,	// G_UMULH
    0U,	// G_SMULH
    0U,	// G_UADDSAT
    0U,	// G_SADDSAT
    0U,	// G_USUBSAT
    0U,	// G_SSUBSAT
    0U,	// G_USHLSAT
    0U,	// G_SSHLSAT
    0U,	// G_SMULFIX
    0U,	// G_UMULFIX
    0U,	// G_SMULFIXSAT
    0U,	// G_UMULFIXSAT
    0U,	// G_SDIVFIX
    0U,	// G_UDIVFIX
    0U,	// G_SDIVFIXSAT
    0U,	// G_UDIVFIXSAT
    0U,	// G_FADD
    0U,	// G_FSUB
    0U,	// G_FMUL
    0U,	// G_FMA
    0U,	// G_FMAD
    0U,	// G_FDIV
    0U,	// G_FREM
    0U,	// G_FPOW
    0U,	// G_FPOWI
    0U,	// G_FEXP
    0U,	// G_FEXP2
    0U,	// G_FLOG
    0U,	// G_FLOG2
    0U,	// G_FLOG10
    0U,	// G_FNEG
    0U,	// G_FPEXT
    0U,	// G_FPTRUNC
    0U,	// G_FPTOSI
    0U,	// G_FPTOUI
    0U,	// G_SITOFP
    0U,	// G_UITOFP
    0U,	// G_FABS
    0U,	// G_FCOPYSIGN
    0U,	// G_FCANONICALIZE
    0U,	// G_FMINNUM
    0U,	// G_FMAXNUM
    0U,	// G_FMINNUM_IEEE
    0U,	// G_FMAXNUM_IEEE
    0U,	// G_FMINIMUM
    0U,	// G_FMAXIMUM
    0U,	// G_PTR_ADD
    0U,	// G_PTRMASK
    0U,	// G_SMIN
    0U,	// G_SMAX
    0U,	// G_UMIN
    0U,	// G_UMAX
    0U,	// G_ABS
    0U,	// G_BR
    0U,	// G_BRJT
    0U,	// G_INSERT_VECTOR_ELT
    0U,	// G_EXTRACT_VECTOR_ELT
    0U,	// G_SHUFFLE_VECTOR
    0U,	// G_CTTZ
    0U,	// G_CTTZ_ZERO_UNDEF
    0U,	// G_CTLZ
    0U,	// G_CTLZ_ZERO_UNDEF
    0U,	// G_CTPOP
    0U,	// G_BSWAP
    0U,	// G_BITREVERSE
    0U,	// G_FCEIL
    0U,	// G_FCOS
    0U,	// G_FSIN
    0U,	// G_FSQRT
    0U,	// G_FFLOOR
    0U,	// G_FRINT
    0U,	// G_FNEARBYINT
    0U,	// G_ADDRSPACE_CAST
    0U,	// G_BLOCK_ADDR
    0U,	// G_JUMP_TABLE
    0U,	// G_DYN_STACKALLOC
    0U,	// G_STRICT_FADD
    0U,	// G_STRICT_FSUB
    0U,	// G_STRICT_FMUL
    0U,	// G_STRICT_FDIV
    0U,	// G_STRICT_FREM
    0U,	// G_STRICT_FMA
    0U,	// G_STRICT_FSQRT
    0U,	// G_READ_REGISTER
    0U,	// G_WRITE_REGISTER
    0U,	// G_MEMCPY
    0U,	// G_MEMMOVE
    0U,	// G_MEMSET
    0U,	// G_VECREDUCE_SEQ_FADD
    0U,	// G_VECREDUCE_SEQ_FMUL
    0U,	// G_VECREDUCE_FADD
    0U,	// G_VECREDUCE_FMUL
    0U,	// G_VECREDUCE_FMAX
    0U,	// G_VECREDUCE_FMIN
    0U,	// G_VECREDUCE_ADD
    0U,	// G_VECREDUCE_MUL
    0U,	// G_VECREDUCE_AND
    0U,	// G_VECREDUCE_OR
    0U,	// G_VECREDUCE_XOR
    0U,	// G_VECREDUCE_SMAX
    0U,	// G_VECREDUCE_SMIN
    0U,	// G_VECREDUCE_UMAX
    0U,	// G_VECREDUCE_UMIN
    1202U,	// ADJCALLSTACKDOWN
    1221U,	// ADJCALLSTACKUP
    1188U,	// ADJDYNALLOC
    0U,	// CALL
    0U,	// CALLR
    18511U,	// ADDC_F_I_HI
    34895U,	// ADDC_F_I_LO
    3596U,	// ADDC_F_R
    18462U,	// ADDC_I_HI
    34846U,	// ADDC_I_LO
    3564U,	// ADDC_R
    18519U,	// ADD_F_I_HI
    34903U,	// ADD_F_I_LO
    3603U,	// ADD_F_R
    18474U,	// ADD_I_HI
    34858U,	// ADD_I_LO
    3569U,	// ADD_R
    51294U,	// AND_F_I_HI
    2142U,	// AND_F_I_LO
    3609U,	// AND_F_R
    51252U,	// AND_I_HI
    2100U,	// AND_I_LO
    3573U,	// AND_R
    20966U,	// BRCC
    20966U,	// BRIND_CC
    5606U,	// BRIND_CCA
    37350U,	// BRR
    50312U,	// BT
    50312U,	// JR
    6192U,	// LDADDR
    7175U,	// LDBs_RI
    8199U,	// LDBs_RR
    7174U,	// LDBz_RI
    8198U,	// LDBz_RR
    7283U,	// LDHs_RI
    8307U,	// LDHs_RR
    7282U,	// LDHz_RI
    8306U,	// LDHz_RR
    9263U,	// LDW_RI
    8240U,	// LDW_RR
    8239U,	// LDWz_RR
    2197U,	// LEADZ
    367U,	// LOG0
    373U,	// LOG1
    379U,	// LOG2
    385U,	// LOG3
    391U,	// LOG4
    10384U,	// MOVHI
    596U,	// NOP
    18540U,	// OR_F_I_HI
    34924U,	// OR_F_I_LO
    3621U,	// OR_F_R
    18564U,	// OR_I_HI
    34948U,	// OR_I_LO
    3673U,	// OR_R
    2084U,	// POPC
    571U,	// RET
    34873U,	// SA_F_I
    34817U,	// SA_I
    21084U,	// SCC
    11558U,	// SELECT
    17480U,	// SFSUB_F_RI_HI
    17480U,	// SFSUB_F_RI_LO
    17480U,	// SFSUB_F_RR
    3615U,	// SHL_F_R
    3626U,	// SHL_R
    2192U,	// SLI
    34917U,	// SL_F_I
    34943U,	// SL_I
    3577U,	// SRA_F_R
    3551U,	// SRA_R
    3615U,	// SRL_F_R
    3626U,	// SRL_R
    17548U,	// STADDR
    17421U,	// STB_RI
    17421U,	// STB_RR
    17529U,	// STH_RI
    17529U,	// STH_RR
    18496U,	// SUBB_F_I_HI
    34880U,	// SUBB_F_I_LO
    3583U,	// SUBB_F_R
    18451U,	// SUBB_I_HI
    34835U,	// SUBB_I_LO
    3555U,	// SUBB_R
    18504U,	// SUB_F_I_HI
    34888U,	// SUB_F_I_LO
    3590U,	// SUB_F_R
    18457U,	// SUB_I_HI
    34841U,	// SUB_I_LO
    3560U,	// SUB_R
    17548U,	// SW_RI
    17548U,	// SW_RR
    2204U,	// TRAILZ
    18539U,	// XOR_F_I_HI
    34923U,	// XOR_F_I_LO
    3620U,	// XOR_F_R
    18563U,	// XOR_I_HI
    34947U,	// XOR_I_LO
    3672U,	// XOR_R
  };

  static const uint8_t OpInfo1[] = {
    0U,	// PHI
    0U,	// INLINEASM
    0U,	// INLINEASM_BR
    0U,	// CFI_INSTRUCTION
    0U,	// EH_LABEL
    0U,	// GC_LABEL
    0U,	// ANNOTATION_LABEL
    0U,	// KILL
    0U,	// EXTRACT_SUBREG
    0U,	// INSERT_SUBREG
    0U,	// IMPLICIT_DEF
    0U,	// SUBREG_TO_REG
    0U,	// COPY_TO_REGCLASS
    0U,	// DBG_VALUE
    0U,	// DBG_INSTR_REF
    0U,	// DBG_LABEL
    0U,	// REG_SEQUENCE
    0U,	// COPY
    0U,	// BUNDLE
    0U,	// LIFETIME_START
    0U,	// LIFETIME_END
    0U,	// PSEUDO_PROBE
    0U,	// STACKMAP
    0U,	// FENTRY_CALL
    0U,	// PATCHPOINT
    0U,	// LOAD_STACK_GUARD
    0U,	// PREALLOCATED_SETUP
    0U,	// PREALLOCATED_ARG
    0U,	// STATEPOINT
    0U,	// LOCAL_ESCAPE
    0U,	// FAULTING_OP
    0U,	// PATCHABLE_OP
    0U,	// PATCHABLE_FUNCTION_ENTER
    0U,	// PATCHABLE_RET
    0U,	// PATCHABLE_FUNCTION_EXIT
    0U,	// PATCHABLE_TAIL_CALL
    0U,	// PATCHABLE_EVENT_CALL
    0U,	// PATCHABLE_TYPED_EVENT_CALL
    0U,	// ICALL_BRANCH_FUNNEL
    0U,	// G_ASSERT_ZEXT
    0U,	// G_ADD
    0U,	// G_SUB
    0U,	// G_MUL
    0U,	// G_SDIV
    0U,	// G_UDIV
    0U,	// G_SREM
    0U,	// G_UREM
    0U,	// G_AND
    0U,	// G_OR
    0U,	// G_XOR
    0U,	// G_IMPLICIT_DEF
    0U,	// G_PHI
    0U,	// G_FRAME_INDEX
    0U,	// G_GLOBAL_VALUE
    0U,	// G_EXTRACT
    0U,	// G_UNMERGE_VALUES
    0U,	// G_INSERT
    0U,	// G_MERGE_VALUES
    0U,	// G_BUILD_VECTOR
    0U,	// G_BUILD_VECTOR_TRUNC
    0U,	// G_CONCAT_VECTORS
    0U,	// G_PTRTOINT
    0U,	// G_INTTOPTR
    0U,	// G_BITCAST
    0U,	// G_FREEZE
    0U,	// G_INTRINSIC_TRUNC
    0U,	// G_INTRINSIC_ROUND
    0U,	// G_INTRINSIC_LRINT
    0U,	// G_INTRINSIC_ROUNDEVEN
    0U,	// G_READCYCLECOUNTER
    0U,	// G_LOAD
    0U,	// G_SEXTLOAD
    0U,	// G_ZEXTLOAD
    0U,	// G_INDEXED_LOAD
    0U,	// G_INDEXED_SEXTLOAD
    0U,	// G_INDEXED_ZEXTLOAD
    0U,	// G_STORE
    0U,	// G_INDEXED_STORE
    0U,	// G_ATOMIC_CMPXCHG_WITH_SUCCESS
    0U,	// G_ATOMIC_CMPXCHG
    0U,	// G_ATOMICRMW_XCHG
    0U,	// G_ATOMICRMW_ADD
    0U,	// G_ATOMICRMW_SUB
    0U,	// G_ATOMICRMW_AND
    0U,	// G_ATOMICRMW_NAND
    0U,	// G_ATOMICRMW_OR
    0U,	// G_ATOMICRMW_XOR
    0U,	// G_ATOMICRMW_MAX
    0U,	// G_ATOMICRMW_MIN
    0U,	// G_ATOMICRMW_UMAX
    0U,	// G_ATOMICRMW_UMIN
    0U,	// G_ATOMICRMW_FADD
    0U,	// G_ATOMICRMW_FSUB
    0U,	// G_FENCE
    0U,	// G_BRCOND
    0U,	// G_BRINDIRECT
    0U,	// G_INTRINSIC
    0U,	// G_INTRINSIC_W_SIDE_EFFECTS
    0U,	// G_ANYEXT
    0U,	// G_TRUNC
    0U,	// G_CONSTANT
    0U,	// G_FCONSTANT
    0U,	// G_VASTART
    0U,	// G_VAARG
    0U,	// G_SEXT
    0U,	// G_SEXT_INREG
    0U,	// G_ZEXT
    0U,	// G_SHL
    0U,	// G_LSHR
    0U,	// G_ASHR
    0U,	// G_FSHL
    0U,	// G_FSHR
    0U,	// G_ICMP
    0U,	// G_FCMP
    0U,	// G_SELECT
    0U,	// G_UADDO
    0U,	// G_UADDE
    0U,	// G_USUBO
    0U,	// G_USUBE
    0U,	// G_SADDO
    0U,	// G_SADDE
    0U,	// G_SSUBO
    0U,	// G_SSUBE
    0U,	// G_UMULO
    0U,	// G_SMULO
    0U,	// G_UMULH
    0U,	// G_SMULH
    0U,	// G_UADDSAT
    0U,	// G_SADDSAT
    0U,	// G_USUBSAT
    0U,	// G_SSUBSAT
    0U,	// G_USHLSAT
    0U,	// G_SSHLSAT
    0U,	// G_SMULFIX
    0U,	// G_UMULFIX
    0U,	// G_SMULFIXSAT
    0U,	// G_UMULFIXSAT
    0U,	// G_SDIVFIX
    0U,	// G_UDIVFIX
    0U,	// G_SDIVFIXSAT
    0U,	// G_UDIVFIXSAT
    0U,	// G_FADD
    0U,	// G_FSUB
    0U,	// G_FMUL
    0U,	// G_FMA
    0U,	// G_FMAD
    0U,	// G_FDIV
    0U,	// G_FREM
    0U,	// G_FPOW
    0U,	// G_FPOWI
    0U,	// G_FEXP
    0U,	// G_FEXP2
    0U,	// G_FLOG
    0U,	// G_FLOG2
    0U,	// G_FLOG10
    0U,	// G_FNEG
    0U,	// G_FPEXT
    0U,	// G_FPTRUNC
    0U,	// G_FPTOSI
    0U,	// G_FPTOUI
    0U,	// G_SITOFP
    0U,	// G_UITOFP
    0U,	// G_FABS
    0U,	// G_FCOPYSIGN
    0U,	// G_FCANONICALIZE
    0U,	// G_FMINNUM
    0U,	// G_FMAXNUM
    0U,	// G_FMINNUM_IEEE
    0U,	// G_FMAXNUM_IEEE
    0U,	// G_FMINIMUM
    0U,	// G_FMAXIMUM
    0U,	// G_PTR_ADD
    0U,	// G_PTRMASK
    0U,	// G_SMIN
    0U,	// G_SMAX
    0U,	// G_UMIN
    0U,	// G_UMAX
    0U,	// G_ABS
    0U,	// G_BR
    0U,	// G_BRJT
    0U,	// G_INSERT_VECTOR_ELT
    0U,	// G_EXTRACT_VECTOR_ELT
    0U,	// G_SHUFFLE_VECTOR
    0U,	// G_CTTZ
    0U,	// G_CTTZ_ZERO_UNDEF
    0U,	// G_CTLZ
    0U,	// G_CTLZ_ZERO_UNDEF
    0U,	// G_CTPOP
    0U,	// G_BSWAP
    0U,	// G_BITREVERSE
    0U,	// G_FCEIL
    0U,	// G_FCOS
    0U,	// G_FSIN
    0U,	// G_FSQRT
    0U,	// G_FFLOOR
    0U,	// G_FRINT
    0U,	// G_FNEARBYINT
    0U,	// G_ADDRSPACE_CAST
    0U,	// G_BLOCK_ADDR
    0U,	// G_JUMP_TABLE
    0U,	// G_DYN_STACKALLOC
    0U,	// G_STRICT_FADD
    0U,	// G_STRICT_FSUB
    0U,	// G_STRICT_FMUL
    0U,	// G_STRICT_FDIV
    0U,	// G_STRICT_FREM
    0U,	// G_STRICT_FMA
    0U,	// G_STRICT_FSQRT
    0U,	// G_READ_REGISTER
    0U,	// G_WRITE_REGISTER
    0U,	// G_MEMCPY
    0U,	// G_MEMMOVE
    0U,	// G_MEMSET
    0U,	// G_VECREDUCE_SEQ_FADD
    0U,	// G_VECREDUCE_SEQ_FMUL
    0U,	// G_VECREDUCE_FADD
    0U,	// G_VECREDUCE_FMUL
    0U,	// G_VECREDUCE_FMAX
    0U,	// G_VECREDUCE_FMIN
    0U,	// G_VECREDUCE_ADD
    0U,	// G_VECREDUCE_MUL
    0U,	// G_VECREDUCE_AND
    0U,	// G_VECREDUCE_OR
    0U,	// G_VECREDUCE_XOR
    0U,	// G_VECREDUCE_SMAX
    0U,	// G_VECREDUCE_SMIN
    0U,	// G_VECREDUCE_UMAX
    0U,	// G_VECREDUCE_UMIN
    0U,	// ADJCALLSTACKDOWN
    0U,	// ADJCALLSTACKUP
    0U,	// ADJDYNALLOC
    0U,	// CALL
    0U,	// CALLR
    0U,	// ADDC_F_I_HI
    0U,	// ADDC_F_I_LO
    0U,	// ADDC_F_R
    0U,	// ADDC_I_HI
    0U,	// ADDC_I_LO
    0U,	// ADDC_R
    0U,	// ADD_F_I_HI
    0U,	// ADD_F_I_LO
    0U,	// ADD_F_R
    0U,	// ADD_I_HI
    0U,	// ADD_I_LO
    0U,	// ADD_R
    0U,	// AND_F_I_HI
    1U,	// AND_F_I_LO
    0U,	// AND_F_R
    0U,	// AND_I_HI
    1U,	// AND_I_LO
    0U,	// AND_R
    1U,	// BRCC
    1U,	// BRIND_CC
    0U,	// BRIND_CCA
    1U,	// BRR
    1U,	// BT
    1U,	// JR
    0U,	// LDADDR
    0U,	// LDBs_RI
    0U,	// LDBs_RR
    0U,	// LDBz_RI
    0U,	// LDBz_RR
    0U,	// LDHs_RI
    0U,	// LDHs_RR
    0U,	// LDHz_RI
    0U,	// LDHz_RR
    0U,	// LDW_RI
    0U,	// LDW_RR
    0U,	// LDWz_RR
    2U,	// LEADZ
    0U,	// LOG0
    0U,	// LOG1
    0U,	// LOG2
    0U,	// LOG3
    0U,	// LOG4
    0U,	// MOVHI
    0U,	// NOP
    0U,	// OR_F_I_HI
    0U,	// OR_F_I_LO
    0U,	// OR_F_R
    0U,	// OR_I_HI
    0U,	// OR_I_LO
    0U,	// OR_R
    2U,	// POPC
    0U,	// RET
    0U,	// SA_F_I
    0U,	// SA_I
    1U,	// SCC
    0U,	// SELECT
    2U,	// SFSUB_F_RI_HI
    6U,	// SFSUB_F_RI_LO
    6U,	// SFSUB_F_RR
    0U,	// SHL_F_R
    0U,	// SHL_R
    2U,	// SLI
    0U,	// SL_F_I
    0U,	// SL_I
    0U,	// SRA_F_R
    0U,	// SRA_R
    0U,	// SRL_F_R
    0U,	// SRL_R
    10U,	// STADDR
    14U,	// STB_RI
    18U,	// STB_RR
    14U,	// STH_RI
    18U,	// STH_RR
    0U,	// SUBB_F_I_HI
    0U,	// SUBB_F_I_LO
    0U,	// SUBB_F_R
    0U,	// SUBB_I_HI
    0U,	// SUBB_I_LO
    0U,	// SUBB_R
    0U,	// SUB_F_I_HI
    0U,	// SUB_F_I_LO
    0U,	// SUB_F_R
    0U,	// SUB_I_HI
    0U,	// SUB_I_LO
    0U,	// SUB_R
    22U,	// SW_RI
    18U,	// SW_RR
    2U,	// TRAILZ
    0U,	// XOR_F_I_HI
    0U,	// XOR_F_I_LO
    0U,	// XOR_F_R
    0U,	// XOR_I_HI
    0U,	// XOR_I_LO
    0U,	// XOR_R
  };

  // Emit the opcode for the instruction.
  uint32_t Bits = 0;
  Bits |= OpInfo0[MI->getOpcode()] << 0;
  Bits |= OpInfo1[MI->getOpcode()] << 16;
  return {AsmStrs+(Bits & 1023)-1, Bits};

}
/// printInstruction - This method is automatically generated by tablegen
/// from the instruction set description.
void LanaiInstPrinter::printInstruction(const MCInst *MI, uint64_t Address, raw_ostream &O) {
  O << "\t";

  auto MnemonicInfo = getMnemonic(MI);

  O << MnemonicInfo.first;

  uint32_t Bits = MnemonicInfo.second;
  assert(Bits != 0 && "Cannot print this instruction.");

  // Fragment 0 encoded into 4 bits for 12 unique commands.
  switch ((Bits >> 10) & 15) {
  default: llvm_unreachable("Invalid command number.");
  case 0:
    // DBG_VALUE, DBG_INSTR_REF, DBG_LABEL, BUNDLE, LIFETIME_START, LIFETIME_...
    return;
    break;
  case 1:
    // ADJCALLSTACKDOWN, ADJCALLSTACKUP, ADJDYNALLOC, BT, JR, SFSUB_F_RI_HI, ...
    printOperand(MI, 0, O);
    break;
  case 2:
    // ADDC_F_I_HI, ADDC_F_I_LO, ADDC_I_HI, ADDC_I_LO, ADD_F_I_HI, ADD_F_I_LO...
    printOperand(MI, 1, O);
    O << ", ";
    break;
  case 3:
    // ADDC_F_R, ADDC_R, ADD_F_R, ADD_R, AND_F_R, AND_R, OR_F_R, OR_R, SHL_F_...
    printPredicateOperand(MI, 3, O);
    O << "\t";
    printOperand(MI, 1, O);
    O << ", ";
    printOperand(MI, 2, O);
    O << ", ";
    printOperand(MI, 0, O);
    return;
    break;
  case 4:
    // BRCC, BRIND_CC, BRR, SCC
    printCCOperand(MI, 1, O);
    break;
  case 5:
    // BRIND_CCA
    printCCOperand(MI, 2, O);
    O << "\t";
    printOperand(MI, 0, O);
    O << " add ";
    printOperand(MI, 1, O);
    return;
    break;
  case 6:
    // LDADDR
    printMemImmOperand(MI, 1, O);
    O << ", ";
    printOperand(MI, 0, O);
    return;
    break;
  case 7:
    // LDBs_RI, LDBz_RI, LDHs_RI, LDHz_RI
    printMemSplsOperand(MI, 1, O);
    O << ", ";
    printOperand(MI, 0, O);
    return;
    break;
  case 8:
    // LDBs_RR, LDBz_RR, LDHs_RR, LDHz_RR, LDW_RR, LDWz_RR
    printMemRrOperand(MI, 1, O);
    O << ", ";
    printOperand(MI, 0, O);
    return;
    break;
  case 9:
    // LDW_RI
    printMemRiOperand(MI, 1, O);
    O << ", ";
    printOperand(MI, 0, O);
    return;
    break;
  case 10:
    // MOVHI
    printHi16ImmOperand(MI, 1, O);
    O << ", ";
    printOperand(MI, 0, O);
    return;
    break;
  case 11:
    // SELECT
    printCCOperand(MI, 3, O);
    O << ' ';
    printOperand(MI, 1, O);
    O << ", ";
    printOperand(MI, 2, O);
    O << ", ";
    printOperand(MI, 0, O);
    return;
    break;
  }


  // Fragment 1 encoded into 4 bits for 10 unique commands.
  switch ((Bits >> 14) & 15) {
  default: llvm_unreachable("Invalid command number.");
  case 0:
    // ADJCALLSTACKDOWN, ADJCALLSTACKUP, ADJDYNALLOC
    O << ' ';
    printOperand(MI, 1, O);
    return;
    break;
  case 1:
    // ADDC_F_I_HI, ADDC_I_HI, ADD_F_I_HI, ADD_I_HI, OR_F_I_HI, OR_I_HI, SUBB...
    printHi16ImmOperand(MI, 2, O);
    O << ", ";
    printOperand(MI, 0, O);
    return;
    break;
  case 2:
    // ADDC_F_I_LO, ADDC_I_LO, ADD_F_I_LO, ADD_I_LO, OR_F_I_LO, OR_I_LO, SA_F...
    printOperand(MI, 2, O);
    O << ", ";
    printOperand(MI, 0, O);
    return;
    break;
  case 3:
    // AND_F_I_HI, AND_I_HI
    printHi16AndImmOperand(MI, 2, O);
    O << ", ";
    printOperand(MI, 0, O);
    return;
    break;
  case 4:
    // AND_F_I_LO, AND_I_LO
    printLo16AndImmOperand(MI, 2, O);
    O << ", ";
    printOperand(MI, 0, O);
    return;
    break;
  case 5:
    // BRCC, BRIND_CC, SCC
    O << "\t";
    printOperand(MI, 0, O);
    return;
    break;
  case 6:
    // BRR
    O << ".r\t";
    printOperand(MI, 0, O);
    return;
    break;
  case 7:
    // BT, JR
    return;
    break;
  case 8:
    // LEADZ, POPC, SLI, TRAILZ
    printOperand(MI, 0, O);
    return;
    break;
  case 9:
    // SFSUB_F_RI_HI, SFSUB_F_RI_LO, SFSUB_F_RR, STADDR, STB_RI, STB_RR, STH_...
    O << ", ";
    break;
  }


  // Fragment 2 encoded into 3 bits for 6 unique commands.
  switch ((Bits >> 18) & 7) {
  default: llvm_unreachable("Invalid command number.");
  case 0:
    // SFSUB_F_RI_HI
    printHi16ImmOperand(MI, 1, O);
    O << ", %r0";
    return;
    break;
  case 1:
    // SFSUB_F_RI_LO, SFSUB_F_RR
    printOperand(MI, 1, O);
    O << ", %r0";
    return;
    break;
  case 2:
    // STADDR
    printMemImmOperand(MI, 1, O);
    return;
    break;
  case 3:
    // STB_RI, STH_RI
    printMemSplsOperand(MI, 1, O);
    return;
    break;
  case 4:
    // STB_RR, STH_RR, SW_RR
    printMemRrOperand(MI, 1, O);
    return;
    break;
  case 5:
    // SW_RI
    printMemRiOperand(MI, 1, O);
    return;
    break;
  }

}


/// getRegisterName - This method is automatically generated by tblgen
/// from the register set description.  This returns the assembler name
/// for the specified register.
const char *LanaiInstPrinter::getRegisterName(unsigned RegNo) {
  assert(RegNo && RegNo < 41 && "Invalid register number!");


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
  static const char AsmStrs[] = {
  /* 0 */ "r10\0"
  /* 4 */ "r20\0"
  /* 8 */ "r30\0"
  /* 12 */ "r0\0"
  /* 15 */ "r11\0"
  /* 19 */ "r21\0"
  /* 23 */ "r31\0"
  /* 27 */ "rr1\0"
  /* 31 */ "r12\0"
  /* 35 */ "r22\0"
  /* 39 */ "rr2\0"
  /* 43 */ "r13\0"
  /* 47 */ "r23\0"
  /* 51 */ "r3\0"
  /* 54 */ "r14\0"
  /* 58 */ "r24\0"
  /* 62 */ "r4\0"
  /* 65 */ "r15\0"
  /* 69 */ "r25\0"
  /* 73 */ "r5\0"
  /* 76 */ "r16\0"
  /* 80 */ "r26\0"
  /* 84 */ "r6\0"
  /* 87 */ "r17\0"
  /* 91 */ "r27\0"
  /* 95 */ "r7\0"
  /* 98 */ "r18\0"
  /* 102 */ "r28\0"
  /* 106 */ "r8\0"
  /* 109 */ "r19\0"
  /* 113 */ "r29\0"
  /* 117 */ "r9\0"
  /* 120 */ "rca\0"
  /* 124 */ "pc\0"
  /* 127 */ "fp\0"
  /* 130 */ "sp\0"
  /* 133 */ "rv\0"
  /* 136 */ "sw\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

  static const uint8_t RegAsmOffset[] = {
    127, 124, 120, 133, 130, 136, 12, 28, 40, 51, 62, 73, 84, 95, 
    106, 117, 0, 15, 31, 43, 54, 65, 76, 87, 98, 109, 4, 19, 
    35, 47, 58, 69, 80, 91, 102, 113, 8, 23, 27, 39, 
  };

  assert (*(AsmStrs+RegAsmOffset[RegNo-1]) &&
          "Invalid alt name index for register!");
  return AsmStrs+RegAsmOffset[RegNo-1];
}

#ifdef PRINT_ALIAS_INSTR
#undef PRINT_ALIAS_INSTR

bool LanaiInstPrinter::printAliasInstr(const MCInst *MI, uint64_t Address, raw_ostream &OS) {
  static const PatternsForOpcode OpToPatterns[] = {
    {Lanai::ADD_I_HI, 0, 1 },
    {Lanai::ADD_I_LO, 1, 1 },
    {Lanai::ADD_R, 2, 1 },
    {Lanai::AND_I_HI, 3, 1 },
    {Lanai::AND_I_LO, 4, 1 },
    {Lanai::LDW_RI, 5, 1 },
  };

  static const AliasPattern Patterns[] = {
    // Lanai::ADD_I_HI - 0
    {0, 0, 3, 2 },
    // Lanai::ADD_I_LO - 1
    {13, 2, 3, 2 },
    // Lanai::ADD_R - 2
    {24, 4, 4, 4 },
    // Lanai::AND_I_HI - 3
    {35, 8, 3, 2 },
    // Lanai::AND_I_LO - 4
    {48, 10, 3, 2 },
    // Lanai::LDW_RI - 5
    {61, 12, 4, 1 },
  };

  static const AliasPatternCond Conds[] = {
    // (ADD_I_HI GPR:$dst, R0, i32hi16:$imm16) - 0
    {AliasPatternCond::K_RegClass, Lanai::GPRRegClassID},
    {AliasPatternCond::K_Reg, Lanai::R0},
    // (ADD_I_LO GPR:$dst, R0, i32lo16z:$imm16) - 2
    {AliasPatternCond::K_RegClass, Lanai::GPRRegClassID},
    {AliasPatternCond::K_Reg, Lanai::R0},
    // (ADD_R GPR:$dst, GPR:$src, R0, 0) - 4
    {AliasPatternCond::K_RegClass, Lanai::GPRRegClassID},
    {AliasPatternCond::K_RegClass, Lanai::GPRRegClassID},
    {AliasPatternCond::K_Reg, Lanai::R0},
    {AliasPatternCond::K_Imm, uint32_t(0)},
    // (AND_I_HI GPR:$dst, R1, i32hi16and:$imm16) - 8
    {AliasPatternCond::K_RegClass, Lanai::GPRRegClassID},
    {AliasPatternCond::K_Reg, Lanai::R1},
    // (AND_I_LO GPR:$dst, R1, i32lo16and:$imm16) - 10
    {AliasPatternCond::K_RegClass, Lanai::GPRRegClassID},
    {AliasPatternCond::K_Reg, Lanai::R1},
    // (LDW_RI GPR:$dst, MEMri:$src) - 12
    {AliasPatternCond::K_RegClass, Lanai::GPRRegClassID},
  };

  static const char AsmStrings[] =
    /* 0 */ "mov $\xFF\x03\x01, $\x01\0"
    /* 13 */ "mov $\x03, $\x01\0"
    /* 24 */ "mov $\x02, $\x01\0"
    /* 35 */ "mov $\xFF\x03\x02, $\x01\0"
    /* 48 */ "mov $\xFF\x03\x03, $\x01\0"
    /* 61 */ "ld $\xFF\x02\x04, $\x01\0"
  ;

#ifndef NDEBUG
  static struct SortCheck {
    SortCheck(ArrayRef<PatternsForOpcode> OpToPatterns) {
      assert(std::is_sorted(
                 OpToPatterns.begin(), OpToPatterns.end(),
                 [](const PatternsForOpcode &L, const PatternsForOpcode &R) {
                   return L.Opcode < R.Opcode;
                 }) &&
             "tablegen failed to sort opcode patterns");
    }
  } sortCheckVar(OpToPatterns);
#endif

  AliasMatchingData M {
    makeArrayRef(OpToPatterns),
    makeArrayRef(Patterns),
    makeArrayRef(Conds),
    StringRef(AsmStrings, array_lengthof(AsmStrings)),
    nullptr,
  };
  const char *AsmString = matchAliasPatterns(MI, nullptr, M);
  if (!AsmString) return false;

  unsigned I = 0;
  while (AsmString[I] != ' ' && AsmString[I] != '\t' &&
         AsmString[I] != '$' && AsmString[I] != '\0')
    ++I;
  OS << '\t' << StringRef(AsmString, I);
  if (AsmString[I] != '\0') {
    if (AsmString[I] == ' ' || AsmString[I] == '\t') {
      OS << '\t';
      ++I;
    }
    do {
      if (AsmString[I] == '$') {
        ++I;
        if (AsmString[I] == (char)0xff) {
          ++I;
          int OpIdx = AsmString[I++] - 1;
          int PrintMethodIdx = AsmString[I++] - 1;
          printCustomAliasOperand(MI, Address, OpIdx, PrintMethodIdx, OS);
        } else
          printOperand(MI, unsigned(AsmString[I++]) - 1, OS);
      } else {
        OS << AsmString[I++];
      }
    } while (AsmString[I] != '\0');
  }

  return true;
}

void LanaiInstPrinter::printCustomAliasOperand(
         const MCInst *MI, uint64_t Address, unsigned OpIdx,
         unsigned PrintMethodIdx,
         raw_ostream &OS) {
  switch (PrintMethodIdx) {
  default:
    llvm_unreachable("Unknown PrintMethod kind");
    break;
  case 0:
    printHi16ImmOperand(MI, OpIdx, OS);
    break;
  case 1:
    printHi16AndImmOperand(MI, OpIdx, OS);
    break;
  case 2:
    printLo16AndImmOperand(MI, OpIdx, OS);
    break;
  case 3:
    printMemRiOperand(MI, OpIdx, OS);
    break;
  }
}

#endif // PRINT_ALIAS_INSTR
