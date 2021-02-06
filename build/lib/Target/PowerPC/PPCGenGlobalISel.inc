/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Instruction Selector for the PPC target                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GLOBALISEL_PREDICATE_BITSET
const unsigned MAX_SUBTARGET_PREDICATES = 31;
using PredicateBitset = llvm::PredicateBitsetImpl<MAX_SUBTARGET_PREDICATES>;
#endif // ifdef GET_GLOBALISEL_PREDICATE_BITSET

#ifdef GET_GLOBALISEL_TEMPORARIES_DECL
  mutable MatcherState State;
  typedef ComplexRendererFns(PPCInstructionSelector::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(PPCInstructionSelector::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr &, int) const;
  const ISelInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ISelInfo;
  static PPCInstructionSelector::ComplexMatcherMemFn ComplexPredicateFns[];
  static PPCInstructionSelector::CustomRendererFn CustomRenderers[];
  bool testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const override;
  bool testImmPredicate_APInt(unsigned PredicateID, const APInt &Imm) const override;
  bool testImmPredicate_APFloat(unsigned PredicateID, const APFloat &Imm) const override;
  const int64_t *getMatchTable() const override;
  bool testMIPredicate_MI(unsigned PredicateID, const MachineInstr &MI, const std::array<const MachineOperand *, 3> &Operands) const override;
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_DECL

#ifdef GET_GLOBALISEL_TEMPORARIES_INIT
, State(0),
ISelInfo(TypeObjects, NumTypeObjects, FeatureBitsets, ComplexPredicateFns, CustomRenderers)
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_INIT

#ifdef GET_GLOBALISEL_IMPL
// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_In32BitModeBit = 1,
  Feature_In64BitModeBit = 9,
  Feature_HasOnlyMSYNCBit = 21,
  Feature_HasSYNCBit = 20,
  Feature_HasSPEBit = 8,
  Feature_HasICBTBit = 19,
  Feature_HasBPERMDBit = 10,
  Feature_HasExtDivBit = 3,
  Feature_IsISA3_0Bit = 2,
  Feature_HasFPUBit = 0,
  Feature_PCRelativeMemopsBit = 29,
  Feature_IsNotISA3_1Bit = 30,
  Feature_HasAltivecBit = 4,
  Feature_HasP8AltivecBit = 5,
  Feature_HasP8CryptoBit = 6,
  Feature_HasP9AltivecBit = 7,
  Feature_HasVSXBit = 11,
  Feature_IsLittleEndianBit = 22,
  Feature_IsBigEndianBit = 23,
  Feature_IsPPC64Bit = 25,
  Feature_HasOnlySwappingMemOpsBit = 12,
  Feature_HasP8VectorBit = 13,
  Feature_HasDirectMoveBit = 14,
  Feature_NoP9VectorBit = 24,
  Feature_HasP9VectorBit = 15,
  Feature_NoP9AltivecBit = 26,
  Feature_HasHTMBit = 27,
  Feature_PrefixInstrsBit = 17,
  Feature_IsISA3_1Bit = 18,
  Feature_PairedVectorMemopsBit = 28,
  Feature_MMABit = 16,
};

PredicateBitset PPCInstructionSelector::
computeAvailableModuleFeatures(const PPCSubtarget *Subtarget) const {
  PredicateBitset Features;
  if (!Subtarget->isPPC64())
    Features.set(Feature_In32BitModeBit);
  if (Subtarget->isPPC64())
    Features.set(Feature_In64BitModeBit);
  if (Subtarget->hasOnlyMSYNC())
    Features.set(Feature_HasOnlyMSYNCBit);
  if (!Subtarget->hasOnlyMSYNC())
    Features.set(Feature_HasSYNCBit);
  if (Subtarget->hasSPE())
    Features.set(Feature_HasSPEBit);
  if (Subtarget->hasICBT())
    Features.set(Feature_HasICBTBit);
  if (Subtarget->hasBPERMD())
    Features.set(Feature_HasBPERMDBit);
  if (Subtarget->hasExtDiv())
    Features.set(Feature_HasExtDivBit);
  if (Subtarget->isISA3_0())
    Features.set(Feature_IsISA3_0Bit);
  if (Subtarget->hasFPU())
    Features.set(Feature_HasFPUBit);
  if (Subtarget->hasPCRelativeMemops())
    Features.set(Feature_PCRelativeMemopsBit);
  if (!Subtarget->isISA3_1())
    Features.set(Feature_IsNotISA3_1Bit);
  if (Subtarget->hasAltivec())
    Features.set(Feature_HasAltivecBit);
  if (Subtarget->hasP8Altivec())
    Features.set(Feature_HasP8AltivecBit);
  if (Subtarget->hasP8Crypto())
    Features.set(Feature_HasP8CryptoBit);
  if (Subtarget->hasP9Altivec())
    Features.set(Feature_HasP9AltivecBit);
  if (Subtarget->hasVSX())
    Features.set(Feature_HasVSXBit);
  if (Subtarget->isLittleEndian())
    Features.set(Feature_IsLittleEndianBit);
  if (!Subtarget->isLittleEndian())
    Features.set(Feature_IsBigEndianBit);
  if (Subtarget->isPPC64())
    Features.set(Feature_IsPPC64Bit);
  if (!Subtarget->hasP9Vector())
    Features.set(Feature_HasOnlySwappingMemOpsBit);
  if (Subtarget->hasP8Vector())
    Features.set(Feature_HasP8VectorBit);
  if (Subtarget->hasDirectMove())
    Features.set(Feature_HasDirectMoveBit);
  if (!Subtarget->hasP9Vector())
    Features.set(Feature_NoP9VectorBit);
  if (Subtarget->hasP9Vector())
    Features.set(Feature_HasP9VectorBit);
  if (!Subtarget->hasP9Altivec())
    Features.set(Feature_NoP9AltivecBit);
  if (Subtarget->hasHTM())
    Features.set(Feature_HasHTMBit);
  if (Subtarget->hasPrefixInstrs())
    Features.set(Feature_PrefixInstrsBit);
  if (Subtarget->isISA3_1())
    Features.set(Feature_IsISA3_1Bit);
  if (Subtarget->pairedVectorMemops())
    Features.set(Feature_PairedVectorMemopsBit);
  if (Subtarget->hasMMA())
    Features.set(Feature_MMABit);
  return Features;
}

void PPCInstructionSelector::setupGeneratedPerFunctionState(MachineFunction &MF) {
  AvailableFunctionFeatures = computeAvailableFunctionFeatures((const PPCSubtarget *)&MF.getSubtarget(), &MF);
}
PredicateBitset PPCInstructionSelector::
computeAvailableFunctionFeatures(const PPCSubtarget *Subtarget, const MachineFunction *MF) const {
  PredicateBitset Features;
  return Features;
}

// LLT Objects.
enum {
  GILLT_s1,
  GILLT_s32,
  GILLT_s64,
  GILLT_s128,
  GILLT_v2s64,
  GILLT_v4s32,
  GILLT_v8s16,
  GILLT_v16s8,
  GILLT_v256s1,
  GILLT_v512s1,
};
const static size_t NumTypeObjects = 10;
const static LLT TypeObjects[] = {
  LLT::scalar(1),
  LLT::scalar(32),
  LLT::scalar(64),
  LLT::scalar(128),
  LLT::vector(2, 64),
  LLT::vector(4, 32),
  LLT::vector(8, 16),
  LLT::vector(16, 8),
  LLT::vector(256, 1),
  LLT::vector(512, 1),
};

// Feature bitsets.
enum {
  GIFBS_Invalid,
  GIFBS_HasAltivec,
  GIFBS_HasBPERMD,
  GIFBS_HasExtDiv,
  GIFBS_HasFPU,
  GIFBS_HasHTM,
  GIFBS_HasOnlyMSYNC,
  GIFBS_HasP8Altivec,
  GIFBS_HasP8Crypto,
  GIFBS_HasP9Altivec,
  GIFBS_HasSPE,
  GIFBS_HasSYNC,
  GIFBS_HasVSX,
  GIFBS_IsISA3_0,
  GIFBS_IsISA3_1,
  GIFBS_MMA,
  GIFBS_PrefixInstrs,
  GIFBS_HasDirectMove_HasVSX,
  GIFBS_HasP8Vector_HasVSX,
  GIFBS_HasP9Vector_HasVSX,
};
const static PredicateBitset FeatureBitsets[] {
  {}, // GIFBS_Invalid
  {Feature_HasAltivecBit, },
  {Feature_HasBPERMDBit, },
  {Feature_HasExtDivBit, },
  {Feature_HasFPUBit, },
  {Feature_HasHTMBit, },
  {Feature_HasOnlyMSYNCBit, },
  {Feature_HasP8AltivecBit, },
  {Feature_HasP8CryptoBit, },
  {Feature_HasP9AltivecBit, },
  {Feature_HasSPEBit, },
  {Feature_HasSYNCBit, },
  {Feature_HasVSXBit, },
  {Feature_IsISA3_0Bit, },
  {Feature_IsISA3_1Bit, },
  {Feature_MMABit, },
  {Feature_PrefixInstrsBit, },
  {Feature_HasDirectMoveBit, Feature_HasVSXBit, },
  {Feature_HasP8VectorBit, Feature_HasVSXBit, },
  {Feature_HasP9VectorBit, Feature_HasVSXBit, },
};

// ComplexPattern predicates.
enum {
  GICP_Invalid,
};
// See constructor for table contents

// PatFrag predicates.
enum {
  GIPFP_I64_Predicate_Msk2Imm = GIPFP_I64_Invalid + 1,
  GIPFP_I64_Predicate_Msk4Imm,
  GIPFP_I64_Predicate_Msk8Imm,
  GIPFP_I64_Predicate_i32immNonAllOneNonZero,
  GIPFP_I64_Predicate_imm32SExt16,
  GIPFP_I64_Predicate_imm64SExt16,
  GIPFP_I64_Predicate_imm64ZExt32,
  GIPFP_I64_Predicate_immNonAllOneAnyExt8,
  GIPFP_I64_Predicate_immSExt5NonZero,
};
bool PPCInstructionSelector::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  switch (PredicateID) {
  case GIPFP_I64_Predicate_Msk2Imm: {
     return isUInt<2>(Imm); 
    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_Msk4Imm: {
     return isUInt<4>(Imm); 
    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_Msk8Imm: {
     return isUInt<8>(Imm); 
    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_i32immNonAllOneNonZero: {
     return Imm && (Imm != -1); 
    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_imm32SExt16: {
    
  // imm32SExt16 predicate - True if the i32 immediate fits in a 16-bit
  // sign extended field.  Used by instructions like 'addi'.
  return (int32_t)Imm == (short)Imm;

    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_imm64SExt16: {
    
  // imm64SExt16 predicate - True if the i64 immediate fits in a 16-bit
  // sign extended field.  Used by instructions like 'addi'.
  return (int64_t)Imm == (short)Imm;

    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_imm64ZExt32: {
    
  // imm64ZExt32 predicate - True if the i64 immediate fits in a 32-bit
  // zero extended field.
  return isUInt<32>(Imm);

    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_immNonAllOneAnyExt8: {
    
  return (isInt<8>(Imm) && (Imm != -1)) || (isUInt<8>(Imm) && (Imm != 0xFF));

    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_immSExt5NonZero: {
     return Imm && isInt<5>(Imm); 
    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  }
  llvm_unreachable("Unknown predicate");
  return false;
}
bool PPCInstructionSelector::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool PPCInstructionSelector::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool PPCInstructionSelector::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI, const std::array<const MachineOperand *, 3> &Operands) const {
  const MachineFunction &MF = *MI.getParent()->getParent();
  const MachineRegisterInfo &MRI = MF.getRegInfo();
  (void)MRI;
  llvm_unreachable("Unknown predicate");
  return false;
}

PPCInstructionSelector::ComplexMatcherMemFn
PPCInstructionSelector::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
};

// Custom renderers.
enum {
  GICR_Invalid,
};
PPCInstructionSelector::CustomRendererFn
PPCInstructionSelector::CustomRenderers[] = {
  nullptr, // GICR_Invalid
};

bool PPCInstructionSelector::selectImpl(MachineInstr &I, CodeGenCoverage &CoverageInfo) const {
  MachineFunction &MF = *I.getParent()->getParent();
  MachineRegisterInfo &MRI = MF.getRegInfo();
  const PredicateBitset AvailableFeatures = getAvailableFeatures();
  NewMIVector OutMIs;
  State.MIs.clear();
  State.MIs.push_back(&I);

  if (executeMatchTable(*this, OutMIs, State, ISelInfo, getMatchTable(), TII, MRI, TRI, RBI, AvailableFeatures, CoverageInfo)) {
    return true;
  }

  return false;
}

const int64_t *PPCInstructionSelector::getMatchTable() const {
  constexpr static int64_t MatchTable0[] = {
    GIM_SwitchOpcode, /*MI*/0, /*[*/40, 208, /*)*//*default:*//*Label 54*/ 27526,
    /*TargetOpcode::G_ADD*//*Label 0*/ 173,
    /*TargetOpcode::G_SUB*//*Label 1*/ 423,
    /*TargetOpcode::G_MUL*//*Label 2*/ 747,
    /*TargetOpcode::G_SDIV*//*Label 3*/ 923,
    /*TargetOpcode::G_UDIV*//*Label 4*/ 1051,
    /*TargetOpcode::G_SREM*//*Label 5*/ 1179,
    /*TargetOpcode::G_UREM*//*Label 6*/ 1311,
    /*TargetOpcode::G_AND*//*Label 7*/ 1443,
    /*TargetOpcode::G_OR*//*Label 8*/ 2059,
    /*TargetOpcode::G_XOR*//*Label 9*/ 2675, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_BUILD_VECTOR*//*Label 10*/ 4020, 0, 0, 0, 0,
    /*TargetOpcode::G_BITCAST*//*Label 11*/ 4274, 0,
    /*TargetOpcode::G_INTRINSIC_TRUNC*//*Label 12*/ 5849,
    /*TargetOpcode::G_INTRINSIC_ROUND*//*Label 13*/ 5959, 0, 0,
    /*TargetOpcode::G_READCYCLECOUNTER*//*Label 14*/ 6069, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_FENCE*//*Label 15*/ 6087, 0, 0,
    /*TargetOpcode::G_INTRINSIC*//*Label 16*/ 6194,
    /*TargetOpcode::G_INTRINSIC_W_SIDE_EFFECTS*//*Label 17*/ 17789, 0,
    /*TargetOpcode::G_TRUNC*//*Label 18*/ 19654,
    /*TargetOpcode::G_CONSTANT*//*Label 19*/ 19794, 0, 0, 0,
    /*TargetOpcode::G_SEXT*//*Label 20*/ 19916, 0, 0, 0, 0,
    /*TargetOpcode::G_ASHR*//*Label 21*/ 19938, 0, 0, 0, 0,
    /*TargetOpcode::G_SELECT*//*Label 22*/ 20033, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_UMULH*//*Label 23*/ 20275,
    /*TargetOpcode::G_SMULH*//*Label 24*/ 20379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_FADD*//*Label 25*/ 20483,
    /*TargetOpcode::G_FSUB*//*Label 26*/ 20714,
    /*TargetOpcode::G_FMUL*//*Label 27*/ 20945,
    /*TargetOpcode::G_FMA*//*Label 28*/ 21158, 0,
    /*TargetOpcode::G_FDIV*//*Label 29*/ 21768, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_FNEG*//*Label 30*/ 21981,
    /*TargetOpcode::G_FPEXT*//*Label 31*/ 24222,
    /*TargetOpcode::G_FPTRUNC*//*Label 32*/ 24271,
    /*TargetOpcode::G_FPTOSI*//*Label 33*/ 24331,
    /*TargetOpcode::G_FPTOUI*//*Label 34*/ 24428,
    /*TargetOpcode::G_SITOFP*//*Label 35*/ 24525,
    /*TargetOpcode::G_UITOFP*//*Label 36*/ 24623,
    /*TargetOpcode::G_FABS*//*Label 37*/ 24721,
    /*TargetOpcode::G_FCOPYSIGN*//*Label 38*/ 24893, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_BR*//*Label 39*/ 25121, 0, 0, 0, 0,
    /*TargetOpcode::G_CTTZ*//*Label 40*/ 25134, 0,
    /*TargetOpcode::G_CTLZ*//*Label 41*/ 25268, 0,
    /*TargetOpcode::G_CTPOP*//*Label 42*/ 25398,
    /*TargetOpcode::G_BSWAP*//*Label 43*/ 25528, 0,
    /*TargetOpcode::G_FCEIL*//*Label 44*/ 25577, 0, 0,
    /*TargetOpcode::G_FSQRT*//*Label 45*/ 25687,
    /*TargetOpcode::G_FFLOOR*//*Label 46*/ 25850, 0,
    /*TargetOpcode::G_FNEARBYINT*//*Label 47*/ 25960, 0, 0, 0, 0,
    /*TargetOpcode::G_STRICT_FADD*//*Label 48*/ 26040,
    /*TargetOpcode::G_STRICT_FSUB*//*Label 49*/ 26223,
    /*TargetOpcode::G_STRICT_FMUL*//*Label 50*/ 26406,
    /*TargetOpcode::G_STRICT_FDIV*//*Label 51*/ 26589, 0,
    /*TargetOpcode::G_STRICT_FMA*//*Label 52*/ 26772,
    /*TargetOpcode::G_STRICT_FSQRT*//*Label 53*/ 27363,
    // Label 0: @173
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 8, /*)*//*default:*//*Label 62*/ 422,
    /*GILLT_s32*//*Label 55*/ 186,
    /*GILLT_s64*//*Label 56*/ 244,
    /*GILLT_s128*//*Label 57*/ 302,
    /*GILLT_v2s64*//*Label 58*/ 326,
    /*GILLT_v4s32*//*Label 59*/ 350,
    /*GILLT_v8s16*//*Label 60*/ 374,
    /*GILLT_v16s8*//*Label 61*/ 398,
    // Label 55: @186
    GIM_Try, /*On fail goto*//*Label 63*/ 243,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 64*/ 233, // Rule ID 99 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_imm32SExt16,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (add:{ *:[i32] } i32:{ *:[i32] }:$rA, (imm:{ *:[i32] })<<P:Predicate_imm32SExt16>>:$imm)  =>  (ADDI:{ *:[i32] } i32:{ *:[i32] }:$rA, (imm:{ *:[i32] }):$imm)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ADDI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // imm
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 99,
        GIR_Done,
      // Label 64: @233
      GIM_Try, /*On fail goto*//*Label 65*/ 242, // Rule ID 186 //
        // (add:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (ADD4:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::ADD4,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 186,
        GIR_Done,
      // Label 65: @242
      GIM_Reject,
    // Label 63: @243
    GIM_Reject,
    // Label 56: @244
    GIM_Try, /*On fail goto*//*Label 66*/ 301,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_Try, /*On fail goto*//*Label 67*/ 291, // Rule ID 627 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_imm64SExt16,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (add:{ *:[i64] } i64:{ *:[i64] }:$rA, (imm:{ *:[i64] })<<P:Predicate_imm64SExt16>>:$imm)  =>  (ADDI8:{ *:[i64] } i64:{ *:[i64] }:$rA, (imm:{ *:[i64] }):$imm)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ADDI8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // imm
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 627,
        GIR_Done,
      // Label 67: @291
      GIM_Try, /*On fail goto*//*Label 68*/ 300, // Rule ID 623 //
        // (add:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (ADD8:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::ADD8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 623,
        GIR_Done,
      // Label 68: @300
      GIM_Reject,
    // Label 66: @301
    GIM_Reject,
    // Label 57: @302
    GIM_Try, /*On fail goto*//*Label 69*/ 325, // Rule ID 454 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (add:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VADDUQM:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VADDUQM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 454,
      GIR_Done,
    // Label 69: @325
    GIM_Reject,
    // Label 58: @326
    GIM_Try, /*On fail goto*//*Label 70*/ 349, // Rule ID 453 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (add:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VADDUDM:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VADDUDM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 453,
      GIR_Done,
    // Label 70: @349
    GIM_Reject,
    // Label 59: @350
    GIM_Try, /*On fail goto*//*Label 71*/ 373, // Rule ID 287 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (add:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VADDUWM:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VADDUWM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 287,
      GIR_Done,
    // Label 71: @373
    GIM_Reject,
    // Label 60: @374
    GIM_Try, /*On fail goto*//*Label 72*/ 397, // Rule ID 286 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (add:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VADDUHM:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VADDUHM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 286,
      GIR_Done,
    // Label 72: @397
    GIM_Reject,
    // Label 61: @398
    GIM_Try, /*On fail goto*//*Label 73*/ 421, // Rule ID 285 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (add:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VADDUBM:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VADDUBM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 285,
      GIR_Done,
    // Label 73: @421
    GIM_Reject,
    // Label 62: @422
    GIM_Reject,
    // Label 1: @423
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 8, /*)*//*default:*//*Label 81*/ 746,
    /*GILLT_s32*//*Label 74*/ 436,
    /*GILLT_s64*//*Label 75*/ 496,
    /*GILLT_s128*//*Label 76*/ 556,
    /*GILLT_v2s64*//*Label 77*/ 580,
    /*GILLT_v4s32*//*Label 78*/ 639,
    /*GILLT_v8s16*//*Label 79*/ 698,
    /*GILLT_v16s8*//*Label 80*/ 722,
    // Label 74: @436
    GIM_Try, /*On fail goto*//*Label 82*/ 495,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 83*/ 472, // Rule ID 198 //
        GIM_CheckConstantInt, /*MI*/0, /*Op*/1, 0,
        // (sub:{ *:[i32] } 0:{ *:[i32] }, i32:{ *:[i32] }:$rA)  =>  (NEG:{ *:[i32] } i32:{ *:[i32] }:$rA)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::NEG,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 198,
        GIR_Done,
      // Label 83: @472
      GIM_Try, /*On fail goto*//*Label 84*/ 494, // Rule ID 196 //
        // (sub:{ *:[i32] } i32:{ *:[i32] }:$rB, i32:{ *:[i32] }:$rA)  =>  (SUBF:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SUBF,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 196,
        GIR_Done,
      // Label 84: @494
      GIM_Reject,
    // Label 82: @495
    GIM_Reject,
    // Label 75: @496
    GIM_Try, /*On fail goto*//*Label 85*/ 555,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_Try, /*On fail goto*//*Label 86*/ 532, // Rule ID 632 //
        GIM_CheckConstantInt, /*MI*/0, /*Op*/1, 0,
        // (sub:{ *:[i64] } 0:{ *:[i64] }, i64:{ *:[i64] }:$rA)  =>  (NEG8:{ *:[i64] } i64:{ *:[i64] }:$rA)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::NEG8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 632,
        GIR_Done,
      // Label 86: @532
      GIM_Try, /*On fail goto*//*Label 87*/ 554, // Rule ID 631 //
        // (sub:{ *:[i64] } i64:{ *:[i64] }:$rB, i64:{ *:[i64] }:$rA)  =>  (SUBF8:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SUBF8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 631,
        GIR_Done,
      // Label 87: @554
      GIM_Reject,
    // Label 85: @555
    GIM_Reject,
    // Label 76: @556
    GIM_Try, /*On fail goto*//*Label 88*/ 579, // Rule ID 459 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (sub:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VSUBUQM:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VSUBUQM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 459,
      GIR_Done,
    // Label 88: @579
    GIM_Reject,
    // Label 77: @580
    GIM_Try, /*On fail goto*//*Label 89*/ 638,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 90*/ 626, // Rule ID 526 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcodeIsEither, /*MI*/1, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllZeros, /*MI*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (sub:{ *:[v2i64] } immAllZerosV:{ *:[v2i64] }, v2i64:{ *:[v2i64] }:$vB)  =>  (VNEGD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNEGD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 526,
        GIR_Done,
      // Label 90: @626
      GIM_Try, /*On fail goto*//*Label 91*/ 637, // Rule ID 458 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        // (sub:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VSUBUDM:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VSUBUDM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 458,
        GIR_Done,
      // Label 91: @637
      GIM_Reject,
    // Label 89: @638
    GIM_Reject,
    // Label 78: @639
    GIM_Try, /*On fail goto*//*Label 92*/ 697,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 93*/ 685, // Rule ID 525 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcodeIsEither, /*MI*/1, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllZeros, /*MI*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (sub:{ *:[v4i32] } immAllZerosV:{ *:[v4i32] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VNEGW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNEGW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 525,
        GIR_Done,
      // Label 93: @685
      GIM_Try, /*On fail goto*//*Label 94*/ 696, // Rule ID 357 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        // (sub:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUBUWM:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VSUBUWM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 357,
        GIR_Done,
      // Label 94: @696
      GIM_Reject,
    // Label 92: @697
    GIM_Reject,
    // Label 79: @698
    GIM_Try, /*On fail goto*//*Label 95*/ 721, // Rule ID 356 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (sub:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VSUBUHM:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VSUBUHM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 356,
      GIR_Done,
    // Label 95: @721
    GIM_Reject,
    // Label 80: @722
    GIM_Try, /*On fail goto*//*Label 96*/ 745, // Rule ID 355 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (sub:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSUBUBM:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VSUBUBM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 355,
      GIR_Done,
    // Label 96: @745
    GIM_Reject,
    // Label 81: @746
    GIM_Reject,
    // Label 2: @747
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 101*/ 922,
    /*GILLT_s32*//*Label 97*/ 758,
    /*GILLT_s64*//*Label 98*/ 816, 0,
    /*GILLT_v2s64*//*Label 99*/ 874,
    /*GILLT_v4s32*//*Label 100*/ 898,
    // Label 97: @758
    GIM_Try, /*On fail goto*//*Label 102*/ 815,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 103*/ 805, // Rule ID 103 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_imm32SExt16,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (mul:{ *:[i32] } i32:{ *:[i32] }:$rA, (imm:{ *:[i32] })<<P:Predicate_imm32SExt16>>:$imm)  =>  (MULLI:{ *:[i32] } i32:{ *:[i32] }:$rA, (imm:{ *:[i32] }):$imm)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MULLI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // imm
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 103,
        GIR_Done,
      // Label 103: @805
      GIM_Try, /*On fail goto*//*Label 104*/ 814, // Rule ID 195 //
        // (mul:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (MULLW:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MULLW,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 195,
        GIR_Done,
      // Label 104: @814
      GIM_Reject,
    // Label 102: @815
    GIM_Reject,
    // Label 98: @816
    GIM_Try, /*On fail goto*//*Label 105*/ 873,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_Try, /*On fail goto*//*Label 106*/ 863, // Rule ID 666 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_imm64SExt16,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (mul:{ *:[i64] } i64:{ *:[i64] }:$rA, (imm:{ *:[i64] })<<P:Predicate_imm64SExt16>>:$imm)  =>  (MULLI8:{ *:[i64] } i64:{ *:[i64] }:$rA, (imm:{ *:[i64] }):$imm)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MULLI8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // imm
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 666,
        GIR_Done,
      // Label 106: @863
      GIM_Try, /*On fail goto*//*Label 107*/ 872, // Rule ID 665 //
        // (mul:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (MULLD:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MULLD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 665,
        GIR_Done,
      // Label 107: @872
      GIM_Reject,
    // Label 105: @873
    GIM_Reject,
    // Label 99: @874
    GIM_Try, /*On fail goto*//*Label 108*/ 897, // Rule ID 1073 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (mul:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULLD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMULLD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1073,
      GIR_Done,
    // Label 108: @897
    GIM_Reject,
    // Label 100: @898
    GIM_Try, /*On fail goto*//*Label 109*/ 921, // Rule ID 445 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (mul:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULUWM:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMULUWM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 445,
      GIR_Done,
    // Label 109: @921
    GIM_Reject,
    // Label 101: @922
    GIM_Reject,
    // Label 3: @923
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 115*/ 1050,
    /*GILLT_s32*//*Label 110*/ 934,
    /*GILLT_s64*//*Label 111*/ 956,
    /*GILLT_s128*//*Label 112*/ 978,
    /*GILLT_v2s64*//*Label 113*/ 1002,
    /*GILLT_v4s32*//*Label 114*/ 1026,
    // Label 110: @934
    GIM_Try, /*On fail goto*//*Label 116*/ 955, // Rule ID 189 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (sdiv:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (DIVW:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::DIVW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 189,
      GIR_Done,
    // Label 116: @955
    GIM_Reject,
    // Label 111: @956
    GIM_Try, /*On fail goto*//*Label 117*/ 977, // Rule ID 657 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (sdiv:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (DIVD:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::DIVD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 657,
      GIR_Done,
    // Label 117: @977
    GIM_Reject,
    // Label 112: @978
    GIM_Try, /*On fail goto*//*Label 118*/ 1001, // Rule ID 1095 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (sdiv:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VDIVSQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VDIVSQ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1095,
      GIR_Done,
    // Label 118: @1001
    GIM_Reject,
    // Label 113: @1002
    GIM_Try, /*On fail goto*//*Label 119*/ 1025, // Rule ID 1084 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (sdiv:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VDIVSD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VDIVSD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1084,
      GIR_Done,
    // Label 119: @1025
    GIM_Reject,
    // Label 114: @1026
    GIM_Try, /*On fail goto*//*Label 120*/ 1049, // Rule ID 1082 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (sdiv:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VDIVSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VDIVSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1082,
      GIR_Done,
    // Label 120: @1049
    GIM_Reject,
    // Label 115: @1050
    GIM_Reject,
    // Label 4: @1051
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 126*/ 1178,
    /*GILLT_s32*//*Label 121*/ 1062,
    /*GILLT_s64*//*Label 122*/ 1084,
    /*GILLT_s128*//*Label 123*/ 1106,
    /*GILLT_v2s64*//*Label 124*/ 1130,
    /*GILLT_v4s32*//*Label 125*/ 1154,
    // Label 121: @1062
    GIM_Try, /*On fail goto*//*Label 127*/ 1083, // Rule ID 190 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (udiv:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (DIVWU:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::DIVWU,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 190,
      GIR_Done,
    // Label 127: @1083
    GIM_Reject,
    // Label 122: @1084
    GIM_Try, /*On fail goto*//*Label 128*/ 1105, // Rule ID 658 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (udiv:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (DIVDU:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::DIVDU,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 658,
      GIR_Done,
    // Label 128: @1105
    GIM_Reject,
    // Label 123: @1106
    GIM_Try, /*On fail goto*//*Label 129*/ 1129, // Rule ID 1096 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (udiv:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VDIVUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VDIVUQ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1096,
      GIR_Done,
    // Label 129: @1129
    GIM_Reject,
    // Label 124: @1130
    GIM_Try, /*On fail goto*//*Label 130*/ 1153, // Rule ID 1085 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (udiv:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VDIVUD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VDIVUD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1085,
      GIR_Done,
    // Label 130: @1153
    GIM_Reject,
    // Label 125: @1154
    GIM_Try, /*On fail goto*//*Label 131*/ 1177, // Rule ID 1083 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (udiv:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VDIVUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VDIVUW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1083,
      GIR_Done,
    // Label 131: @1177
    GIM_Reject,
    // Label 126: @1178
    GIM_Reject,
    // Label 5: @1179
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 137*/ 1310,
    /*GILLT_s32*//*Label 132*/ 1190,
    /*GILLT_s64*//*Label 133*/ 1214,
    /*GILLT_s128*//*Label 134*/ 1238,
    /*GILLT_v2s64*//*Label 135*/ 1262,
    /*GILLT_v4s32*//*Label 136*/ 1286,
    // Label 132: @1190
    GIM_Try, /*On fail goto*//*Label 138*/ 1213, // Rule ID 184 //
      GIM_CheckFeatures, GIFBS_IsISA3_0,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (srem:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (MODSW:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MODSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 184,
      GIR_Done,
    // Label 138: @1213
    GIM_Reject,
    // Label 133: @1214
    GIM_Try, /*On fail goto*//*Label 139*/ 1237, // Rule ID 662 //
      GIM_CheckFeatures, GIFBS_IsISA3_0,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (srem:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (MODSD:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MODSD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 662,
      GIR_Done,
    // Label 139: @1237
    GIM_Reject,
    // Label 134: @1238
    GIM_Try, /*On fail goto*//*Label 140*/ 1261, // Rule ID 1105 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (srem:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VMODSQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMODSQ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1105,
      GIR_Done,
    // Label 140: @1261
    GIM_Reject,
    // Label 135: @1262
    GIM_Try, /*On fail goto*//*Label 141*/ 1285, // Rule ID 1080 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (srem:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMODSD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMODSD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1080,
      GIR_Done,
    // Label 141: @1285
    GIM_Reject,
    // Label 136: @1286
    GIM_Try, /*On fail goto*//*Label 142*/ 1309, // Rule ID 1078 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (srem:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMODSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMODSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1078,
      GIR_Done,
    // Label 142: @1309
    GIM_Reject,
    // Label 137: @1310
    GIM_Reject,
    // Label 6: @1311
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 148*/ 1442,
    /*GILLT_s32*//*Label 143*/ 1322,
    /*GILLT_s64*//*Label 144*/ 1346,
    /*GILLT_s128*//*Label 145*/ 1370,
    /*GILLT_v2s64*//*Label 146*/ 1394,
    /*GILLT_v4s32*//*Label 147*/ 1418,
    // Label 143: @1322
    GIM_Try, /*On fail goto*//*Label 149*/ 1345, // Rule ID 185 //
      GIM_CheckFeatures, GIFBS_IsISA3_0,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (urem:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (MODUW:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MODUW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 185,
      GIR_Done,
    // Label 149: @1345
    GIM_Reject,
    // Label 144: @1346
    GIM_Try, /*On fail goto*//*Label 150*/ 1369, // Rule ID 663 //
      GIM_CheckFeatures, GIFBS_IsISA3_0,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (urem:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (MODUD:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MODUD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 663,
      GIR_Done,
    // Label 150: @1369
    GIM_Reject,
    // Label 145: @1370
    GIM_Try, /*On fail goto*//*Label 151*/ 1393, // Rule ID 1106 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (urem:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VMODUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMODUQ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1106,
      GIR_Done,
    // Label 151: @1393
    GIM_Reject,
    // Label 146: @1394
    GIM_Try, /*On fail goto*//*Label 152*/ 1417, // Rule ID 1081 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (urem:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMODUD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMODUD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1081,
      GIR_Done,
    // Label 152: @1417
    GIM_Reject,
    // Label 147: @1418
    GIM_Try, /*On fail goto*//*Label 153*/ 1441, // Rule ID 1079 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (urem:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMODUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMODUW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1079,
      GIR_Done,
    // Label 153: @1441
    GIM_Reject,
    // Label 148: @1442
    GIM_Reject,
    // Label 7: @1443
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/0, 6, /*)*//*default:*//*Label 158*/ 2058,
    /*GILLT_s1*//*Label 154*/ 1455,
    /*GILLT_s32*//*Label 155*/ 1566,
    /*GILLT_s64*//*Label 156*/ 1677, 0, 0,
    /*GILLT_v4s32*//*Label 157*/ 1788,
    // Label 154: @1455
    GIM_Try, /*On fail goto*//*Label 159*/ 1565,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 160*/ 1512, // Rule ID 4132 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (and:{ *:[i1] } (xor:{ *:[i1] } i1:{ *:[i1] }:$CRB, -1:{ *:[i1] }), i1:{ *:[i1] }:$CRA)  =>  (CRANDC:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4132,
        GIR_Done,
      // Label 160: @1512
      GIM_Try, /*On fail goto*//*Label 161*/ 1555, // Rule ID 173 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (and:{ *:[i1] } i1:{ *:[i1] }:$CRA, (xor:{ *:[i1] } i1:{ *:[i1] }:$CRB, -1:{ *:[i1] }))  =>  (CRANDC:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 173,
        GIR_Done,
      // Label 161: @1555
      GIM_Try, /*On fail goto*//*Label 162*/ 1564, // Rule ID 167 //
        // (and:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)  =>  (CRAND:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CRAND,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 167,
        GIR_Done,
      // Label 162: @1564
      GIM_Reject,
    // Label 159: @1565
    GIM_Reject,
    // Label 155: @1566
    GIM_Try, /*On fail goto*//*Label 163*/ 1676,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 164*/ 1623, // Rule ID 4126 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$rB, -1:{ *:[i32] }), i32:{ *:[i32] }:$rS)  =>  (ANDC:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4126,
        GIR_Done,
      // Label 164: @1623
      GIM_Try, /*On fail goto*//*Label 165*/ 1666, // Rule ID 115 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (and:{ *:[i32] } i32:{ *:[i32] }:$rS, (xor:{ *:[i32] } i32:{ *:[i32] }:$rB, -1:{ *:[i32] }))  =>  (ANDC:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 115,
        GIR_Done,
      // Label 165: @1666
      GIM_Try, /*On fail goto*//*Label 166*/ 1675, // Rule ID 114 //
        // (and:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)  =>  (AND:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::AND,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 114,
        GIR_Done,
      // Label 166: @1675
      GIM_Reject,
    // Label 163: @1676
    GIM_Reject,
    // Label 156: @1677
    GIM_Try, /*On fail goto*//*Label 167*/ 1787,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_Try, /*On fail goto*//*Label 168*/ 1734, // Rule ID 4139 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$rB, -1:{ *:[i64] }), i64:{ *:[i64] }:$rS)  =>  (ANDC8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ANDC8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4139,
        GIR_Done,
      // Label 168: @1734
      GIM_Try, /*On fail goto*//*Label 169*/ 1777, // Rule ID 611 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (and:{ *:[i64] } i64:{ *:[i64] }:$rS, (xor:{ *:[i64] } i64:{ *:[i64] }:$rB, -1:{ *:[i64] }))  =>  (ANDC8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ANDC8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 611,
        GIR_Done,
      // Label 169: @1777
      GIM_Try, /*On fail goto*//*Label 170*/ 1786, // Rule ID 610 //
        // (and:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (AND8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::AND8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 610,
        GIR_Done,
      // Label 170: @1786
      GIM_Reject,
    // Label 167: @1787
    GIM_Reject,
    // Label 157: @1788
    GIM_Try, /*On fail goto*//*Label 171*/ 2057,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 172*/ 1855, // Rule ID 4146 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (and:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB, immAllOnesV:{ *:[v4i32] }), v4i32:{ *:[v4i32] }:$XA)  =>  (XXLANDC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4146,
        GIR_Done,
      // Label 172: @1855
      GIM_Try, /*On fail goto*//*Label 173*/ 1912, // Rule ID 889 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (and:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB, immAllOnesV:{ *:[v4i32] }))  =>  (XXLANDC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 889,
        GIR_Done,
      // Label 173: @1912
      GIM_Try, /*On fail goto*//*Label 174*/ 1927, // Rule ID 888 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (and:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)  =>  (XXLAND:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XXLAND,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 888,
        GIR_Done,
      // Label 174: @1927
      GIM_Try, /*On fail goto*//*Label 175*/ 1984, // Rule ID 4135 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (and:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB, immAllOnesV:{ *:[v4i32] }), v4i32:{ *:[v4i32] }:$vA)  =>  (VANDC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4135,
        GIR_Done,
      // Label 175: @1984
      GIM_Try, /*On fail goto*//*Label 176*/ 2041, // Rule ID 296 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (and:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB, immAllOnesV:{ *:[v4i32] }))  =>  (VANDC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VANDC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 296,
        GIR_Done,
      // Label 176: @2041
      GIM_Try, /*On fail goto*//*Label 177*/ 2056, // Rule ID 295 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (and:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VAND:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VAND,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 295,
        GIR_Done,
      // Label 177: @2056
      GIM_Reject,
    // Label 171: @2057
    GIM_Reject,
    // Label 158: @2058
    GIM_Reject,
    // Label 8: @2059
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/0, 6, /*)*//*default:*//*Label 182*/ 2674,
    /*GILLT_s1*//*Label 178*/ 2071,
    /*GILLT_s32*//*Label 179*/ 2182,
    /*GILLT_s64*//*Label 180*/ 2293, 0, 0,
    /*GILLT_v4s32*//*Label 181*/ 2404,
    // Label 178: @2071
    GIM_Try, /*On fail goto*//*Label 183*/ 2181,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 184*/ 2128, // Rule ID 4133 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (or:{ *:[i1] } (xor:{ *:[i1] } i1:{ *:[i1] }:$CRB, -1:{ *:[i1] }), i1:{ *:[i1] }:$CRA)  =>  (CRORC:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4133,
        GIR_Done,
      // Label 184: @2128
      GIM_Try, /*On fail goto*//*Label 185*/ 2171, // Rule ID 174 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (or:{ *:[i1] } i1:{ *:[i1] }:$CRA, (xor:{ *:[i1] } i1:{ *:[i1] }:$CRB, -1:{ *:[i1] }))  =>  (CRORC:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 174,
        GIR_Done,
      // Label 185: @2171
      GIM_Try, /*On fail goto*//*Label 186*/ 2180, // Rule ID 169 //
        // (or:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)  =>  (CROR:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CROR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 169,
        GIR_Done,
      // Label 186: @2180
      GIM_Reject,
    // Label 183: @2181
    GIM_Reject,
    // Label 179: @2182
    GIM_Try, /*On fail goto*//*Label 187*/ 2292,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 188*/ 2239, // Rule ID 4127 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (or:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$rB, -1:{ *:[i32] }), i32:{ *:[i32] }:$rS)  =>  (ORC:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4127,
        GIR_Done,
      // Label 188: @2239
      GIM_Try, /*On fail goto*//*Label 189*/ 2282, // Rule ID 118 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (or:{ *:[i32] } i32:{ *:[i32] }:$rS, (xor:{ *:[i32] } i32:{ *:[i32] }:$rB, -1:{ *:[i32] }))  =>  (ORC:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 118,
        GIR_Done,
      // Label 189: @2282
      GIM_Try, /*On fail goto*//*Label 190*/ 2291, // Rule ID 116 //
        // (or:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)  =>  (OR:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::OR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 116,
        GIR_Done,
      // Label 190: @2291
      GIM_Reject,
    // Label 187: @2292
    GIM_Reject,
    // Label 180: @2293
    GIM_Try, /*On fail goto*//*Label 191*/ 2403,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_Try, /*On fail goto*//*Label 192*/ 2350, // Rule ID 4140 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (or:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$rB, -1:{ *:[i64] }), i64:{ *:[i64] }:$rS)  =>  (ORC8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ORC8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4140,
        GIR_Done,
      // Label 192: @2350
      GIM_Try, /*On fail goto*//*Label 193*/ 2393, // Rule ID 614 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (or:{ *:[i64] } i64:{ *:[i64] }:$rS, (xor:{ *:[i64] } i64:{ *:[i64] }:$rB, -1:{ *:[i64] }))  =>  (ORC8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ORC8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 614,
        GIR_Done,
      // Label 193: @2393
      GIM_Try, /*On fail goto*//*Label 194*/ 2402, // Rule ID 612 //
        // (or:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (OR8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::OR8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 612,
        GIR_Done,
      // Label 194: @2402
      GIM_Reject,
    // Label 191: @2403
    GIM_Reject,
    // Label 181: @2404
    GIM_Try, /*On fail goto*//*Label 195*/ 2673,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 196*/ 2471, // Rule ID 4149 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (or:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB, immAllOnesV:{ *:[v4i32] }), v4i32:{ *:[v4i32] }:$XA)  =>  (XXLORC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4149,
        GIR_Done,
      // Label 196: @2471
      GIM_Try, /*On fail goto*//*Label 197*/ 2528, // Rule ID 902 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (or:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB, immAllOnesV:{ *:[v4i32] }))  =>  (XXLORC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 902,
        GIR_Done,
      // Label 197: @2528
      GIM_Try, /*On fail goto*//*Label 198*/ 2543, // Rule ID 891 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (or:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)  =>  (XXLOR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XXLOR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 891,
        GIR_Done,
      // Label 198: @2543
      GIM_Try, /*On fail goto*//*Label 199*/ 2600, // Rule ID 4138 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (or:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB, immAllOnesV:{ *:[v4i32] }), v4i32:{ *:[v4i32] }:$vA)  =>  (VORC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4138,
        GIR_Done,
      // Label 199: @2600
      GIM_Try, /*On fail goto*//*Label 200*/ 2657, // Rule ID 473 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (or:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB, immAllOnesV:{ *:[v4i32] }))  =>  (VORC:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VORC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 473,
        GIR_Done,
      // Label 200: @2657
      GIM_Try, /*On fail goto*//*Label 201*/ 2672, // Rule ID 370 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (or:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VOR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VOR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 370,
        GIR_Done,
      // Label 201: @2672
      GIM_Reject,
    // Label 195: @2673
    GIM_Reject,
    // Label 182: @2674
    GIM_Reject,
    // Label 9: @2675
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/0, 6, /*)*//*default:*//*Label 206*/ 4019,
    /*GILLT_s1*//*Label 202*/ 2687,
    /*GILLT_s32*//*Label 203*/ 2927,
    /*GILLT_s64*//*Label 204*/ 3167, 0, 0,
    /*GILLT_v4s32*//*Label 205*/ 3407,
    // Label 202: @2687
    GIM_Try, /*On fail goto*//*Label 207*/ 2926,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s1,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 208*/ 2744, // Rule ID 168 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i1] } (and:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB), -1:{ *:[i1] })  =>  (CRNAND:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRNAND,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 168,
        GIR_Done,
      // Label 208: @2744
      GIM_Try, /*On fail goto*//*Label 209*/ 2787, // Rule ID 171 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_OR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i1] } (or:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB), -1:{ *:[i1] })  =>  (CRNOR:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRNOR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 171,
        GIR_Done,
      // Label 209: @2787
      GIM_Try, /*On fail goto*//*Label 210*/ 2830, // Rule ID 4130 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i1] } (xor:{ *:[i1] } i1:{ *:[i1] }:$CRA, -1:{ *:[i1] }), i1:{ *:[i1] }:$CRB)  =>  (CREQV:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CREQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4130,
        GIR_Done,
      // Label 210: @2830
      GIM_Try, /*On fail goto*//*Label 211*/ 2873, // Rule ID 172 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i1] } (xor:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB), -1:{ *:[i1] })  =>  (CREQV:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CREQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 172,
        GIR_Done,
      // Label 211: @2873
      GIM_Try, /*On fail goto*//*Label 212*/ 2916, // Rule ID 4131 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i1] } i1:{ *:[i1] }:$CRB, (xor:{ *:[i1] } i1:{ *:[i1] }:$CRA, -1:{ *:[i1] }))  =>  (CREQV:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CREQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // CRD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // CRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // CRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4131,
        GIR_Done,
      // Label 212: @2916
      GIM_Try, /*On fail goto*//*Label 213*/ 2925, // Rule ID 170 //
        // (xor:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)  =>  (CRXOR:{ *:[i1] } i1:{ *:[i1] }:$CRA, i1:{ *:[i1] }:$CRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CRXOR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 170,
        GIR_Done,
      // Label 213: @2925
      GIM_Reject,
    // Label 207: @2926
    GIM_Reject,
    // Label 203: @2927
    GIM_Try, /*On fail goto*//*Label 214*/ 3166,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 215*/ 2984, // Rule ID 113 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB), -1:{ *:[i32] })  =>  (NAND:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::NAND,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 113,
        GIR_Done,
      // Label 215: @2984
      GIM_Try, /*On fail goto*//*Label 216*/ 3027, // Rule ID 117 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_OR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB), -1:{ *:[i32] })  =>  (NOR:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::NOR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 117,
        GIR_Done,
      // Label 216: @3027
      GIM_Try, /*On fail goto*//*Label 217*/ 3070, // Rule ID 4128 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$rS, -1:{ *:[i32] }), i32:{ *:[i32] }:$rB)  =>  (EQV:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4128,
        GIR_Done,
      // Label 217: @3070
      GIM_Try, /*On fail goto*//*Label 218*/ 3113, // Rule ID 119 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB), -1:{ *:[i32] })  =>  (EQV:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 119,
        GIR_Done,
      // Label 218: @3113
      GIM_Try, /*On fail goto*//*Label 219*/ 3156, // Rule ID 4129 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i32] } i32:{ *:[i32] }:$rB, (xor:{ *:[i32] } i32:{ *:[i32] }:$rS, -1:{ *:[i32] }))  =>  (EQV:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4129,
        GIR_Done,
      // Label 219: @3156
      GIM_Try, /*On fail goto*//*Label 220*/ 3165, // Rule ID 120 //
        // (xor:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)  =>  (XOR:{ *:[i32] } i32:{ *:[i32] }:$rS, i32:{ *:[i32] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XOR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 120,
        GIR_Done,
      // Label 220: @3165
      GIM_Reject,
    // Label 214: @3166
    GIM_Reject,
    // Label 204: @3167
    GIM_Try, /*On fail goto*//*Label 221*/ 3406,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_Try, /*On fail goto*//*Label 222*/ 3224, // Rule ID 609 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB), -1:{ *:[i64] })  =>  (NAND8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::NAND8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 609,
        GIR_Done,
      // Label 222: @3224
      GIM_Try, /*On fail goto*//*Label 223*/ 3267, // Rule ID 613 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_OR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB), -1:{ *:[i64] })  =>  (NOR8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::NOR8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 613,
        GIR_Done,
      // Label 223: @3267
      GIM_Try, /*On fail goto*//*Label 224*/ 3310, // Rule ID 4141 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$rS, -1:{ *:[i64] }), i64:{ *:[i64] }:$rB)  =>  (EQV8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EQV8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4141,
        GIR_Done,
      // Label 224: @3310
      GIM_Try, /*On fail goto*//*Label 225*/ 3353, // Rule ID 615 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB), -1:{ *:[i64] })  =>  (EQV8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EQV8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 615,
        GIR_Done,
      // Label 225: @3353
      GIM_Try, /*On fail goto*//*Label 226*/ 3396, // Rule ID 4142 //
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (xor:{ *:[i64] } i64:{ *:[i64] }:$rB, (xor:{ *:[i64] } i64:{ *:[i64] }:$rS, -1:{ *:[i64] }))  =>  (EQV8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EQV8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4142,
        GIR_Done,
      // Label 226: @3396
      GIM_Try, /*On fail goto*//*Label 227*/ 3405, // Rule ID 616 //
        // (xor:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (XOR8:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XOR8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 616,
        GIR_Done,
      // Label 227: @3405
      GIM_Reject,
    // Label 221: @3406
    GIM_Reject,
    // Label 205: @3407
    GIM_Try, /*On fail goto*//*Label 228*/ 4018,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 229*/ 3474, // Rule ID 900 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (and:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB), immAllOnesV:{ *:[v4i32] })  =>  (XXLNAND:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLNAND,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 900,
        GIR_Done,
      // Label 229: @3474
      GIM_Try, /*On fail goto*//*Label 230*/ 3531, // Rule ID 890 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_OR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (or:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB), immAllOnesV:{ *:[v4i32] })  =>  (XXLNOR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLNOR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 890,
        GIR_Done,
      // Label 230: @3531
      GIM_Try, /*On fail goto*//*Label 231*/ 3588, // Rule ID 4147 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, immAllOnesV:{ *:[v4i32] }), v4i32:{ *:[v4i32] }:$XB)  =>  (XXLEQV:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLEQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4147,
        GIR_Done,
      // Label 231: @3588
      GIM_Try, /*On fail goto*//*Label 232*/ 3645, // Rule ID 899 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB), immAllOnesV:{ *:[v4i32] })  =>  (XXLEQV:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLEQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 899,
        GIR_Done,
      // Label 232: @3645
      GIM_Try, /*On fail goto*//*Label 233*/ 3702, // Rule ID 4148 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB, (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, immAllOnesV:{ *:[v4i32] }))  =>  (XXLEQV:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLEQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4148,
        GIR_Done,
      // Label 233: @3702
      GIM_Try, /*On fail goto*//*Label 234*/ 3717, // Rule ID 892 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)  =>  (XXLXOR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XXLXOR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 892,
        GIR_Done,
      // Label 234: @3717
      GIM_Try, /*On fail goto*//*Label 235*/ 3774, // Rule ID 472 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (and:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB), immAllOnesV:{ *:[v4i32] })  =>  (VNAND:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNAND,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 472,
        GIR_Done,
      // Label 235: @3774
      GIM_Try, /*On fail goto*//*Label 236*/ 3831, // Rule ID 369 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_OR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (or:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB), immAllOnesV:{ *:[v4i32] })  =>  (VNOR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNOR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 369,
        GIR_Done,
      // Label 236: @3831
      GIM_Try, /*On fail goto*//*Label 237*/ 3888, // Rule ID 4136 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, immAllOnesV:{ *:[v4i32] }), v4i32:{ *:[v4i32] }:$vB)  =>  (VEQV:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4136,
        GIR_Done,
      // Label 237: @3888
      GIM_Try, /*On fail goto*//*Label 238*/ 3945, // Rule ID 471 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB), immAllOnesV:{ *:[v4i32] })  =>  (VEQV:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 471,
        GIR_Done,
      // Label 238: @3945
      GIM_Try, /*On fail goto*//*Label 239*/ 4002, // Rule ID 4137 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
        GIM_CheckOpcodeIsEither, /*MI*/2, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
        GIM_CheckIsBuildVectorAllOnes, /*MI*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB, (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, immAllOnesV:{ *:[v4i32] }))  =>  (VEQV:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEQV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4137,
        GIR_Done,
      // Label 239: @4002
      GIM_Try, /*On fail goto*//*Label 240*/ 4017, // Rule ID 371 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (xor:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VXOR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VXOR,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 371,
        GIR_Done,
      // Label 240: @4017
      GIM_Reject,
    // Label 228: @4018
    GIM_Reject,
    // Label 206: @4019
    GIM_Reject,
    // Label 10: @4020
    GIM_Try, /*On fail goto*//*Label 241*/ 4134,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 242*/ 4083, // Rule ID 1844 //
        GIM_CheckFeatures, GIFBS_HasDirectMove_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_immSExt5NonZero,
        // MIs[1] Operand 1
        // No operand predicates
        // MIs[0] A
        GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
        // MIs[0] A
        GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/3, /*OtherMI*/0, /*OtherOpIdx*/1,
        // MIs[0] A
        GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/4, /*OtherMI*/0, /*OtherOpIdx*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (build_vector:{ *:[v4i32] } (imm:{ *:[i32] })<<P:Predicate_immSExt5NonZero>>:$A, (imm:{ *:[i32] })<<P:Predicate_immSExt5NonZero>>:$A, (imm:{ *:[i32] })<<P:Predicate_immSExt5NonZero>>:$A, (imm:{ *:[i32] })<<P:Predicate_immSExt5NonZero>>:$A)  =>  (VSPLTISW:{ *:[v4i32] } (imm:{ *:[i32] }):$A)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSPLTISW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // A
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1844,
        GIR_Done,
      // Label 242: @4083
      GIM_Try, /*On fail goto*//*Label 243*/ 4133, // Rule ID 3003 //
        GIM_CheckFeatures, GIFBS_PrefixInstrs,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_i32immNonAllOneNonZero,
        // MIs[1] Operand 1
        // No operand predicates
        // MIs[0] A
        GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
        // MIs[0] A
        GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/3, /*OtherMI*/0, /*OtherOpIdx*/1,
        // MIs[0] A
        GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/4, /*OtherMI*/0, /*OtherOpIdx*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (build_vector:{ *:[v4i32] } (imm:{ *:[i32] })<<P:Predicate_i32immNonAllOneNonZero>>:$A, (imm:{ *:[i32] })<<P:Predicate_i32immNonAllOneNonZero>>:$A, (imm:{ *:[i32] })<<P:Predicate_i32immNonAllOneNonZero>>:$A, (imm:{ *:[i32] })<<P:Predicate_i32immNonAllOneNonZero>>:$A)  =>  (XXSPLTIW:{ *:[v4i32] } (imm:{ *:[i32] }):$A)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXSPLTIW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // A
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 3003,
        GIR_Done,
      // Label 243: @4133
      GIM_Reject,
    // Label 241: @4134
    GIM_Try, /*On fail goto*//*Label 244*/ 4273, // Rule ID 2078 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/17,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_immNonAllOneAnyExt8,
      // MIs[1] Operand 1
      // No operand predicates
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/3, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/4, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/5, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/6, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/7, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/8, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/9, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/10, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/11, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/12, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/13, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/14, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/15, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[0] A
      GIM_CheckIsSameOperand, /*MI*/0, /*OpIdx*/16, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (build_vector:{ *:[v16i8] } (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A, (imm:{ *:[i32] })<<P:Predicate_immNonAllOneAnyExt8>>:$A)  =>  (COPY_TO_REGCLASS:{ *:[v16i8] } (XXSPLTIB:{ *:[v4i32] } (imm:{ *:[i32] }):$A), VSRC:{ *:[i32] })
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_v4s32,
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/PPC::XXSPLTIB,
      GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
      GIR_CopyConstantAsSImm, /*NewInsnID*/1, /*OldInsnID*/1, // A
      GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VSRCRegClassID,
      // GIR_Coverage, 2078,
      GIR_Done,
    // Label 244: @4273
    GIM_Reject,
    // Label 11: @4274
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/3, 8, /*)*//*default:*//*Label 250*/ 5848,
    /*GILLT_s128*//*Label 245*/ 4285,
    /*GILLT_v2s64*//*Label 246*/ 4680,
    /*GILLT_v4s32*//*Label 247*/ 4939,
    /*GILLT_v8s16*//*Label 248*/ 5384,
    /*GILLT_v16s8*//*Label 249*/ 5643,
    // Label 245: @4285
    GIM_Try, /*On fail goto*//*Label 251*/ 4339, // Rule ID 1749 //
      GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcodeIsEither, /*MI*/1, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
      GIM_CheckIsBuildVectorAllOnes, /*MI*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (bitconvert:{ *:[v1i128] } immAllOnesV:{ *:[v16i8] })  =>  (COPY_TO_REGCLASS:{ *:[v1i128] } (XXLEQVOnes:{ *:[v4i32] }), VSRC:{ *:[i32] })
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_v4s32,
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/PPC::XXLEQVOnes,
      GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VSRCRegClassID,
      // GIR_Coverage, 1749,
      GIR_Done,
    // Label 251: @4339
    GIM_Try, /*On fail goto*//*Label 252*/ 4373, // Rule ID 1246 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v1i128] } VRRC:{ *:[v16i8] }:$src)  =>  VRRC:{ *:[v1i128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1246,
      GIR_Done,
    // Label 252: @4373
    GIM_Try, /*On fail goto*//*Label 253*/ 4407, // Rule ID 1247 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v1i128] } VRRC:{ *:[v8i16] }:$src)  =>  VRRC:{ *:[v1i128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1247,
      GIR_Done,
    // Label 253: @4407
    GIM_Try, /*On fail goto*//*Label 254*/ 4441, // Rule ID 1248 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v1i128] } VRRC:{ *:[v4i32] }:$src)  =>  VRRC:{ *:[v1i128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1248,
      GIR_Done,
    // Label 254: @4441
    GIM_Try, /*On fail goto*//*Label 255*/ 4475, // Rule ID 1249 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v1i128] } VRRC:{ *:[v4f32] }:$src)  =>  VRRC:{ *:[v1i128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1249,
      GIR_Done,
    // Label 255: @4475
    GIM_Try, /*On fail goto*//*Label 256*/ 4509, // Rule ID 1250 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v1i128] } VRRC:{ *:[v2i64] }:$src)  =>  VRRC:{ *:[v1i128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1250,
      GIR_Done,
    // Label 256: @4509
    GIM_Try, /*On fail goto*//*Label 257*/ 4543, // Rule ID 1251 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[f128] } VRRC:{ *:[v16i8] }:$src)  =>  VRRC:{ *:[f128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1251,
      GIR_Done,
    // Label 257: @4543
    GIM_Try, /*On fail goto*//*Label 258*/ 4577, // Rule ID 1252 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[f128] } VRRC:{ *:[v8i16] }:$src)  =>  VRRC:{ *:[f128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1252,
      GIR_Done,
    // Label 258: @4577
    GIM_Try, /*On fail goto*//*Label 259*/ 4611, // Rule ID 1253 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[f128] } VRRC:{ *:[v4i32] }:$src)  =>  VRRC:{ *:[f128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1253,
      GIR_Done,
    // Label 259: @4611
    GIM_Try, /*On fail goto*//*Label 260*/ 4645, // Rule ID 1254 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[f128] } VRRC:{ *:[v4f32] }:$src)  =>  VRRC:{ *:[f128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1254,
      GIR_Done,
    // Label 260: @4645
    GIM_Try, /*On fail goto*//*Label 261*/ 4679, // Rule ID 1255 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[f128] } VRRC:{ *:[v2f64] }:$src)  =>  VRRC:{ *:[f128] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1255,
      GIR_Done,
    // Label 261: @4679
    GIM_Reject,
    // Label 246: @4680
    GIM_Try, /*On fail goto*//*Label 262*/ 4734, // Rule ID 1750 //
      GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcodeIsEither, /*MI*/1, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
      GIM_CheckIsBuildVectorAllOnes, /*MI*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (bitconvert:{ *:[v2i64] } immAllOnesV:{ *:[v16i8] })  =>  (COPY_TO_REGCLASS:{ *:[v2i64] } (XXLEQVOnes:{ *:[v4i32] }), VSRC:{ *:[i32] })
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_v4s32,
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/PPC::XXLEQVOnes,
      GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VSRCRegClassID,
      // GIR_Coverage, 1750,
      GIR_Done,
    // Label 262: @4734
    GIM_Try, /*On fail goto*//*Label 263*/ 4768, // Rule ID 1241 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v2i64] } VRRC:{ *:[v16i8] }:$src)  =>  VRRC:{ *:[v2i64] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1241,
      GIR_Done,
    // Label 263: @4768
    GIM_Try, /*On fail goto*//*Label 264*/ 4802, // Rule ID 1242 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v2i64] } VRRC:{ *:[v8i16] }:$src)  =>  VRRC:{ *:[v2i64] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1242,
      GIR_Done,
    // Label 264: @4802
    GIM_Try, /*On fail goto*//*Label 265*/ 4836, // Rule ID 1243 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v2i64] } VRRC:{ *:[v4i32] }:$src)  =>  VRRC:{ *:[v2i64] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1243,
      GIR_Done,
    // Label 265: @4836
    GIM_Try, /*On fail goto*//*Label 266*/ 4870, // Rule ID 1244 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v2i64] } VRRC:{ *:[v4f32] }:$src)  =>  VRRC:{ *:[v2i64] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1244,
      GIR_Done,
    // Label 266: @4870
    GIM_Try, /*On fail goto*//*Label 267*/ 4904, // Rule ID 1245 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v2i64] } VRRC:{ *:[v1i128] }:$src)  =>  VRRC:{ *:[v2i64] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1245,
      GIR_Done,
    // Label 267: @4904
    GIM_Try, /*On fail goto*//*Label 268*/ 4938, // Rule ID 1260 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v2f64] } VRRC:{ *:[f128] }:$src)  =>  VRRC:{ *:[v2f64] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1260,
      GIR_Done,
    // Label 268: @4938
    GIM_Reject,
    // Label 247: @4939
    GIM_Try, /*On fail goto*//*Label 269*/ 4975, // Rule ID 901 //
      GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcodeIsEither, /*MI*/1, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
      GIM_CheckIsBuildVectorAllOnes, /*MI*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (bitconvert:{ *:[v4i32] } immAllOnesV:{ *:[v16i8] })  =>  (XXLEQVOnes:{ *:[v4i32] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXLEQVOnes,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 901,
      GIR_Done,
    // Label 269: @4975
    GIM_Try, /*On fail goto*//*Label 270*/ 5009, // Rule ID 1231 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4i32] } VRRC:{ *:[v16i8] }:$src)  =>  VRRC:{ *:[v4i32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1231,
      GIR_Done,
    // Label 270: @5009
    GIM_Try, /*On fail goto*//*Label 271*/ 5043, // Rule ID 1232 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4i32] } VRRC:{ *:[v8i16] }:$src)  =>  VRRC:{ *:[v4i32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1232,
      GIR_Done,
    // Label 271: @5043
    GIM_Try, /*On fail goto*//*Label 272*/ 5077, // Rule ID 1233 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4i32] } VRRC:{ *:[v4f32] }:$src)  =>  VRRC:{ *:[v4i32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1233,
      GIR_Done,
    // Label 272: @5077
    GIM_Try, /*On fail goto*//*Label 273*/ 5111, // Rule ID 1234 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4i32] } VRRC:{ *:[v2i64] }:$src)  =>  VRRC:{ *:[v4i32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1234,
      GIR_Done,
    // Label 273: @5111
    GIM_Try, /*On fail goto*//*Label 274*/ 5145, // Rule ID 1235 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4i32] } VRRC:{ *:[v1i128] }:$src)  =>  VRRC:{ *:[v4i32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1235,
      GIR_Done,
    // Label 274: @5145
    GIM_Try, /*On fail goto*//*Label 275*/ 5179, // Rule ID 1236 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4f32] } VRRC:{ *:[v16i8] }:$src)  =>  VRRC:{ *:[v4f32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1236,
      GIR_Done,
    // Label 275: @5179
    GIM_Try, /*On fail goto*//*Label 276*/ 5213, // Rule ID 1237 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4f32] } VRRC:{ *:[v8i16] }:$src)  =>  VRRC:{ *:[v4f32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1237,
      GIR_Done,
    // Label 276: @5213
    GIM_Try, /*On fail goto*//*Label 277*/ 5247, // Rule ID 1238 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4f32] } VRRC:{ *:[v4i32] }:$src)  =>  VRRC:{ *:[v4f32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1238,
      GIR_Done,
    // Label 277: @5247
    GIM_Try, /*On fail goto*//*Label 278*/ 5281, // Rule ID 1239 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4f32] } VRRC:{ *:[v2i64] }:$src)  =>  VRRC:{ *:[v4f32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1239,
      GIR_Done,
    // Label 278: @5281
    GIM_Try, /*On fail goto*//*Label 279*/ 5315, // Rule ID 1240 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4f32] } VRRC:{ *:[v1i128] }:$src)  =>  VRRC:{ *:[v4f32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1240,
      GIR_Done,
    // Label 279: @5315
    GIM_Try, /*On fail goto*//*Label 280*/ 5349, // Rule ID 1258 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4i32] } VRRC:{ *:[f128] }:$src)  =>  VRRC:{ *:[v4i32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1258,
      GIR_Done,
    // Label 280: @5349
    GIM_Try, /*On fail goto*//*Label 281*/ 5383, // Rule ID 1259 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v4f32] } VRRC:{ *:[f128] }:$src)  =>  VRRC:{ *:[v4f32] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1259,
      GIR_Done,
    // Label 281: @5383
    GIM_Reject,
    // Label 248: @5384
    GIM_Try, /*On fail goto*//*Label 282*/ 5438, // Rule ID 1751 //
      GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcodeIsEither, /*MI*/1, TargetOpcode::G_BUILD_VECTOR, TargetOpcode::G_BUILD_VECTOR_TRUNC,
      GIM_CheckIsBuildVectorAllOnes, /*MI*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (bitconvert:{ *:[v8i16] } immAllOnesV:{ *:[v16i8] })  =>  (COPY_TO_REGCLASS:{ *:[v8i16] } (XXLEQVOnes:{ *:[v4i32] }), VSRC:{ *:[i32] })
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_v4s32,
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/PPC::XXLEQVOnes,
      GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VSRCRegClassID,
      // GIR_Coverage, 1751,
      GIR_Done,
    // Label 282: @5438
    GIM_Try, /*On fail goto*//*Label 283*/ 5472, // Rule ID 1226 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v8i16] } VRRC:{ *:[v16i8] }:$src)  =>  VRRC:{ *:[v8i16] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1226,
      GIR_Done,
    // Label 283: @5472
    GIM_Try, /*On fail goto*//*Label 284*/ 5506, // Rule ID 1227 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v8i16] } VRRC:{ *:[v4i32] }:$src)  =>  VRRC:{ *:[v8i16] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1227,
      GIR_Done,
    // Label 284: @5506
    GIM_Try, /*On fail goto*//*Label 285*/ 5540, // Rule ID 1228 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v8i16] } VRRC:{ *:[v4f32] }:$src)  =>  VRRC:{ *:[v8i16] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1228,
      GIR_Done,
    // Label 285: @5540
    GIM_Try, /*On fail goto*//*Label 286*/ 5574, // Rule ID 1229 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v8i16] } VRRC:{ *:[v2i64] }:$src)  =>  VRRC:{ *:[v8i16] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1229,
      GIR_Done,
    // Label 286: @5574
    GIM_Try, /*On fail goto*//*Label 287*/ 5608, // Rule ID 1230 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v8i16] } VRRC:{ *:[v1i128] }:$src)  =>  VRRC:{ *:[v8i16] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1230,
      GIR_Done,
    // Label 287: @5608
    GIM_Try, /*On fail goto*//*Label 288*/ 5642, // Rule ID 1257 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v8i16] } VRRC:{ *:[f128] }:$src)  =>  VRRC:{ *:[v8i16] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1257,
      GIR_Done,
    // Label 288: @5642
    GIM_Reject,
    // Label 249: @5643
    GIM_Try, /*On fail goto*//*Label 289*/ 5677, // Rule ID 1221 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v16i8] } VRRC:{ *:[v8i16] }:$src)  =>  VRRC:{ *:[v16i8] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1221,
      GIR_Done,
    // Label 289: @5677
    GIM_Try, /*On fail goto*//*Label 290*/ 5711, // Rule ID 1222 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v16i8] } VRRC:{ *:[v4i32] }:$src)  =>  VRRC:{ *:[v16i8] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1222,
      GIR_Done,
    // Label 290: @5711
    GIM_Try, /*On fail goto*//*Label 291*/ 5745, // Rule ID 1223 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v16i8] } VRRC:{ *:[v4f32] }:$src)  =>  VRRC:{ *:[v16i8] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1223,
      GIR_Done,
    // Label 291: @5745
    GIM_Try, /*On fail goto*//*Label 292*/ 5779, // Rule ID 1224 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v16i8] } VRRC:{ *:[v2i64] }:$src)  =>  VRRC:{ *:[v16i8] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1224,
      GIR_Done,
    // Label 292: @5779
    GIM_Try, /*On fail goto*//*Label 293*/ 5813, // Rule ID 1225 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v16i8] } VRRC:{ *:[v1i128] }:$src)  =>  VRRC:{ *:[v16i8] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1225,
      GIR_Done,
    // Label 293: @5813
    GIM_Try, /*On fail goto*//*Label 294*/ 5847, // Rule ID 1256 //
      GIM_CheckFeatures, GIFBS_HasAltivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/PPC::VRRCRegClassID,
      // (bitconvert:{ *:[v16i8] } VRRC:{ *:[f128] }:$src)  =>  VRRC:{ *:[v16i8] }:$src
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::VRRCRegClassID,
      // GIR_Coverage, 1256,
      GIR_Done,
    // Label 294: @5847
    GIM_Reject,
    // Label 250: @5848
    GIM_Reject,
    // Label 12: @5849
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 299*/ 5958,
    /*GILLT_s32*//*Label 295*/ 5860,
    /*GILLT_s64*//*Label 296*/ 5880, 0,
    /*GILLT_v2s64*//*Label 297*/ 5918,
    /*GILLT_v4s32*//*Label 298*/ 5938,
    // Label 295: @5860
    GIM_Try, /*On fail goto*//*Label 300*/ 5879, // Rule ID 142 //
      GIM_CheckFeatures, GIFBS_HasFPU,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
      // (ftrunc:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FRIZS:{ *:[f32] } f32:{ *:[f32] }:$frB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIZS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 142,
      GIR_Done,
    // Label 300: @5879
    GIM_Reject,
    // Label 296: @5880
    GIM_Try, /*On fail goto*//*Label 301*/ 5917,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 302*/ 5901, // Rule ID 871 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (ftrunc:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSRDPIZ:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSRDPIZ,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 871,
        GIR_Done,
      // Label 302: @5901
      GIM_Try, /*On fail goto*//*Label 303*/ 5916, // Rule ID 140 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (ftrunc:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FRIZD:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIZD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 140,
        GIR_Done,
      // Label 303: @5916
      GIM_Reject,
    // Label 301: @5917
    GIM_Reject,
    // Label 297: @5918
    GIM_Try, /*On fail goto*//*Label 304*/ 5937, // Rule ID 879 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (ftrunc:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVRDPIZ:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRDPIZ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 879,
      GIR_Done,
    // Label 304: @5937
    GIM_Reject,
    // Label 298: @5938
    GIM_Try, /*On fail goto*//*Label 305*/ 5957, // Rule ID 887 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (ftrunc:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVRSPIZ:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRSPIZ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 887,
      GIR_Done,
    // Label 305: @5957
    GIM_Reject,
    // Label 299: @5958
    GIM_Reject,
    // Label 13: @5959
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 310*/ 6068,
    /*GILLT_s32*//*Label 306*/ 5970,
    /*GILLT_s64*//*Label 307*/ 5990, 0,
    /*GILLT_v2s64*//*Label 308*/ 6028,
    /*GILLT_v4s32*//*Label 309*/ 6048,
    // Label 306: @5970
    GIM_Try, /*On fail goto*//*Label 311*/ 5989, // Rule ID 134 //
      GIM_CheckFeatures, GIFBS_HasFPU,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
      // (fround:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FRINS:{ *:[f32] } f32:{ *:[f32] }:$frB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRINS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 134,
      GIR_Done,
    // Label 311: @5989
    GIM_Reject,
    // Label 307: @5990
    GIM_Try, /*On fail goto*//*Label 312*/ 6027,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 313*/ 6011, // Rule ID 865 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fround:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSRDPI:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSRDPI,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 865,
        GIR_Done,
      // Label 313: @6011
      GIM_Try, /*On fail goto*//*Label 314*/ 6026, // Rule ID 132 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fround:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FRIND:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIND,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 132,
        GIR_Done,
      // Label 314: @6026
      GIM_Reject,
    // Label 312: @6027
    GIM_Reject,
    // Label 308: @6028
    GIM_Try, /*On fail goto*//*Label 315*/ 6047, // Rule ID 873 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fround:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVRDPI:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRDPI,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 873,
      GIR_Done,
    // Label 315: @6047
    GIM_Reject,
    // Label 309: @6048
    GIM_Try, /*On fail goto*//*Label 316*/ 6067, // Rule ID 881 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fround:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVRSPI:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRSPI,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 881,
      GIR_Done,
    // Label 316: @6067
    GIM_Reject,
    // Label 310: @6068
    GIM_Reject,
    // Label 14: @6069
    GIM_Try, /*On fail goto*//*Label 317*/ 6086, // Rule ID 603 //
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (readcyclecounter:{ *:[i64] })  =>  (MFTB8:{ *:[i64] })
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MFTB8,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 603,
      GIR_Done,
    // Label 317: @6086
    GIM_Reject,
    // Label 15: @6087
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 3, /*)*//*default:*//*Label 320*/ 6149,
    /*GILLT_s32*//*Label 318*/ 6095,
    /*GILLT_s64*//*Label 319*/ 6122,
    // Label 318: @6095
    GIM_Try, /*On fail goto*//*Label 321*/ 6121, // Rule ID 1191 //
      GIM_CheckFeatures, GIFBS_HasSYNC,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/0, 7,
      // MIs[0] Operand 1
      GIM_CheckIsImm, /*MI*/0, /*Op*/1,
      // (atomic_fence 7:{ *:[i32] }, (timm:{ *:[i32] }))  =>  (SYNC 0:{ *:[i32] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SYNC,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1191,
      GIR_Done,
    // Label 321: @6121
    GIM_Reject,
    // Label 319: @6122
    GIM_Try, /*On fail goto*//*Label 322*/ 6148, // Rule ID 1190 //
      GIM_CheckFeatures, GIFBS_HasSYNC,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/0, 7,
      // MIs[0] Operand 1
      GIM_CheckIsImm, /*MI*/0, /*Op*/1,
      // (atomic_fence 7:{ *:[i64] }, (timm:{ *:[i64] }))  =>  (SYNC 0:{ *:[i32] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SYNC,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1190,
      GIR_Done,
    // Label 322: @6148
    GIM_Reject,
    // Label 320: @6149
    GIM_Try, /*On fail goto*//*Label 323*/ 6193,
      GIM_CheckIsImm, /*MI*/0, /*Op*/0,
      GIM_CheckIsImm, /*MI*/0, /*Op*/1,
      GIM_Try, /*On fail goto*//*Label 324*/ 6176, // Rule ID 1192 //
        GIM_CheckFeatures, GIFBS_HasSYNC,
        // (atomic_fence (timm:{ *:[iPTR] }), (timm:{ *:[iPTR] }))  =>  (SYNC 1:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SYNC,
        GIR_AddImm, /*InsnID*/0, /*Imm*/1,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1192,
        GIR_Done,
      // Label 324: @6176
      GIM_Try, /*On fail goto*//*Label 325*/ 6192, // Rule ID 1193 //
        GIM_CheckFeatures, GIFBS_HasOnlyMSYNC,
        // (atomic_fence (timm:{ *:[iPTR] }), (timm:{ *:[iPTR] }))  =>  (MSYNC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MSYNC,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1193,
        GIR_Done,
      // Label 325: @6192
      GIM_Reject,
    // Label 323: @6193
    GIM_Reject,
    // Label 16: @6194
    GIM_Try, /*On fail goto*//*Label 326*/ 6370,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_Try, /*On fail goto*//*Label 327*/ 6227, // Rule ID 1006 //
        GIM_CheckFeatures, GIFBS_MMA,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_mma_xxsetaccz,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v512s1,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::ACCRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v512i1] } 6490:{ *:[iPTR] })  =>  (XXSETACCZ:{ *:[v512i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXSETACCZ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // AT
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1006,
        GIR_Done,
      // Label 327: @6227
      GIM_Try, /*On fail goto*//*Label 328*/ 6253, // Rule ID 1159 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_readflm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[f64] } 6495:{ *:[iPTR] })  =>  (MFFS:{ *:[f64] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFFS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1159,
        GIR_Done,
      // Label 328: @6253
      GIM_Try, /*On fail goto*//*Label 329*/ 6307, // Rule ID 1448 //
        GIM_CheckFeatures, GIFBS_IsISA3_0,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_darn32,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6399:{ *:[iPTR] })  =>  (EXTRACT_SUBREG:{ *:[i32] } (DARN:{ *:[i64] } 0:{ *:[i32] }), sub_32:{ *:[i32] })
        GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s64,
        GIR_BuildMI, /*InsnID*/1, /*Opcode*/PPC::DARN,
        GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
        GIR_AddImm, /*InsnID*/1, /*Imm*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_AddTempSubRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0, PPC::sub_32,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, PPC::GPRCRegClassID,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/1, PPC::G8RCRegClassID,
        // GIR_Coverage, 1448,
        GIR_Done,
      // Label 329: @6307
      GIM_Try, /*On fail goto*//*Label 330*/ 6338, // Rule ID 1449 //
        GIM_CheckFeatures, GIFBS_IsISA3_0,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_darn,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 6398:{ *:[iPTR] })  =>  (DARN:{ *:[i64] } 1:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DARN,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_AddImm, /*InsnID*/0, /*Imm*/1,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1449,
        GIR_Done,
      // Label 330: @6338
      GIM_Try, /*On fail goto*//*Label 331*/ 6369, // Rule ID 1450 //
        GIM_CheckFeatures, GIFBS_IsISA3_0,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_darnraw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 6400:{ *:[iPTR] })  =>  (DARN:{ *:[i64] } 2:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DARN,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_AddImm, /*InsnID*/0, /*Imm*/2,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1450,
        GIR_Done,
      // Label 331: @6369
      GIM_Reject,
    // Label 326: @6370
    GIM_Try, /*On fail goto*//*Label 332*/ 8794,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_Try, /*On fail goto*//*Label 333*/ 6411, // Rule ID 831 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvdpsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6554:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XB)  =>  (XVCVDPSP:{ *:[v4f32] } v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVDPSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 831,
        GIR_Done,
      // Label 333: @6411
      GIM_Try, /*On fail goto*//*Label 334*/ 6447, // Rule ID 834 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvdpsxws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6555:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XB)  =>  (XVCVDPSXWS:{ *:[v4i32] } v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVDPSXWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 834,
        GIR_Done,
      // Label 334: @6447
      GIM_Try, /*On fail goto*//*Label 335*/ 6483, // Rule ID 837 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvdpuxws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6556:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XB)  =>  (XVCVDPUXWS:{ *:[v4i32] } v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVDPUXWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 837,
        GIR_Done,
      // Label 335: @6483
      GIM_Try, /*On fail goto*//*Label 336*/ 6519, // Rule ID 838 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvspdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2f64] } 6559:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XB)  =>  (XVCVSPDP:{ *:[v2f64] } v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVSPDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 838,
        GIR_Done,
      // Label 336: @6519
      GIM_Try, /*On fail goto*//*Label 337*/ 6555, // Rule ID 845 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvsxdsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6561:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$XB)  =>  (XVCVSXDSP:{ *:[v4f32] } v2i64:{ *:[v2i64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVSXDSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 845,
        GIR_Done,
      // Label 337: @6555
      GIM_Try, /*On fail goto*//*Label 338*/ 6591, // Rule ID 850 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvuxdsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6563:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$XB)  =>  (XVCVUXDSP:{ *:[v4f32] } v2i64:{ *:[v2i64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVUXDSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 850,
        GIR_Done,
      // Label 338: @6591
      GIM_Try, /*On fail goto*//*Label 339*/ 6627, // Rule ID 853 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvsxwdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2f64] } 6562:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$XB)  =>  (XVCVSXWDP:{ *:[v2f64] } v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVSXWDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 853,
        GIR_Done,
      // Label 339: @6627
      GIM_Try, /*On fail goto*//*Label 340*/ 6663, // Rule ID 854 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvuxwdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2f64] } 6564:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$XB)  =>  (XVCVUXWDP:{ *:[v2f64] } v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVUXWDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 854,
        GIR_Done,
      // Label 340: @6663
      GIM_Try, /*On fail goto*//*Label 341*/ 6699, // Rule ID 965 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_sqrtf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f128] } 6504:{ *:[iPTR] }, f128:{ *:[f128] }:$vB)  =>  (XSSQRTQPO:{ *:[f128] } f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSSQRTQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 965,
        GIR_Done,
      // Label 341: @6699
      GIM_Try, /*On fail goto*//*Label 342*/ 6735, // Rule ID 972 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_truncf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VFRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f64] } 6519:{ *:[iPTR] }, f128:{ *:[f128] }:$vB)  =>  (XSCVQPDPO:{ *:[f64] } f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSCVQPDPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 972,
        GIR_Done,
      // Label 342: @6735
      GIM_Try, /*On fail goto*//*Label 343*/ 6771, // Rule ID 973 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcvsphp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6560:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XB)  =>  (XVCVSPHP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCVSPHP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 973,
        GIR_Done,
      // Label 343: @6771
      GIM_Try, /*On fail goto*//*Label 344*/ 6807, // Rule ID 977 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvxexpdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6586:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XB)  =>  (XVXEXPDP:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVXEXPDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 977,
        GIR_Done,
      // Label 344: @6807
      GIM_Try, /*On fail goto*//*Label 345*/ 6843, // Rule ID 978 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvxexpsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6587:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XB)  =>  (XVXEXPSP:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVXEXPSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 978,
        GIR_Done,
      // Label 345: @6843
      GIM_Try, /*On fail goto*//*Label 346*/ 6879, // Rule ID 979 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvxsigdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6588:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XB)  =>  (XVXSIGDP:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVXSIGDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 979,
        GIR_Done,
      // Label 346: @6879
      GIM_Try, /*On fail goto*//*Label 347*/ 6915, // Rule ID 980 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvxsigsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6589:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XB)  =>  (XVXSIGSP:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVXSIGSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 980,
        GIR_Done,
      // Label 347: @6915
      GIM_Try, /*On fail goto*//*Label 348*/ 6959, // Rule ID 1046 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mtvsrbm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6116:{ *:[iPTR] }, (imm:{ *:[i64] }):$D)  =>  (MTVSRBMI:{ *:[v16i8] } (imm:{ *:[i64] }):$D)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSRBMI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // D
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1046,
        GIR_Done,
      // Label 348: @6959
      GIM_Try, /*On fail goto*//*Label 349*/ 6995, // Rule ID 305 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vexptefp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6222:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VEXPTEFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXPTEFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 305,
        GIR_Done,
      // Label 349: @6995
      GIM_Try, /*On fail goto*//*Label 350*/ 7031, // Rule ID 306 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vlogefp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6260:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VLOGEFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VLOGEFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 306,
        GIR_Done,
      // Label 350: @7031
      GIM_Try, /*On fail goto*//*Label 351*/ 7067, // Rule ID 347 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrefp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6328:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VREFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VREFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 347,
        GIR_Done,
      // Label 351: @7067
      GIM_Try, /*On fail goto*//*Label 352*/ 7103, // Rule ID 348 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrfim,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6329:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VRFIM:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRFIM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 348,
        GIR_Done,
      // Label 352: @7103
      GIM_Try, /*On fail goto*//*Label 353*/ 7139, // Rule ID 349 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrfin,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6330:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VRFIN:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRFIN,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 349,
        GIR_Done,
      // Label 353: @7139
      GIM_Try, /*On fail goto*//*Label 354*/ 7175, // Rule ID 350 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrfip,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6331:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VRFIP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRFIP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 350,
        GIR_Done,
      // Label 354: @7175
      GIM_Try, /*On fail goto*//*Label 355*/ 7211, // Rule ID 351 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrfiz,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6332:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VRFIZ:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRFIZ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 351,
        GIR_Done,
      // Label 355: @7211
      GIM_Try, /*On fail goto*//*Label 356*/ 7247, // Rule ID 352 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrsqrtefp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6343:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB)  =>  (VRSQRTEFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRSQRTEFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 352,
        GIR_Done,
      // Label 356: @7247
      GIM_Try, /*On fail goto*//*Label 357*/ 7283, // Rule ID 403 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupkhpx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6385:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VUPKHPX:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKHPX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 403,
        GIR_Done,
      // Label 357: @7283
      GIM_Try, /*On fail goto*//*Label 358*/ 7319, // Rule ID 404 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupkhsb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6386:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VUPKHSB:{ *:[v8i16] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKHSB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 404,
        GIR_Done,
      // Label 358: @7319
      GIM_Try, /*On fail goto*//*Label 359*/ 7355, // Rule ID 405 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupkhsh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6387:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VUPKHSH:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKHSH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 405,
        GIR_Done,
      // Label 359: @7355
      GIM_Try, /*On fail goto*//*Label 360*/ 7391, // Rule ID 406 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupklpx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6389:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VUPKLPX:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKLPX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 406,
        GIR_Done,
      // Label 360: @7391
      GIM_Try, /*On fail goto*//*Label 361*/ 7427, // Rule ID 407 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupklsb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6390:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VUPKLSB:{ *:[v8i16] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKLSB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 407,
        GIR_Done,
      // Label 361: @7427
      GIM_Try, /*On fail goto*//*Label 362*/ 7463, // Rule ID 408 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupklsh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6391:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VUPKLSH:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKLSH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 408,
        GIR_Done,
      // Label 362: @7463
      GIM_Try, /*On fail goto*//*Label 363*/ 7499, // Rule ID 488 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupkhsw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6388:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VUPKHSW:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKHSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 488,
        GIR_Done,
      // Label 363: @7499
      GIM_Try, /*On fail goto*//*Label 364*/ 7535, // Rule ID 489 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vupklsw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6392:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VUPKLSW:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VUPKLSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 489,
        GIR_Done,
      // Label 364: @7535
      GIM_Try, /*On fail goto*//*Label 365*/ 7571, // Rule ID 490 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vgbbd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6242:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VGBBD:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VGBBD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 490,
        GIR_Done,
      // Label 365: @7571
      GIM_Try, /*On fail goto*//*Label 366*/ 7607, // Rule ID 498 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vsbox,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6098:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA)  =>  (VSBOX:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSBOX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 498,
        GIR_Done,
      // Label 366: @7607
      GIM_Try, /*On fail goto*//*Label 367*/ 7643, // Rule ID 514 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vclzlsbb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6152:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VCLZLSBB:{ *:[i32] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCLZLSBB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 514,
        GIR_Done,
      // Label 367: @7643
      GIM_Try, /*On fail goto*//*Label 368*/ 7679, // Rule ID 515 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vctzlsbb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6210:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VCTZLSBB:{ *:[i32] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCTZLSBB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 515,
        GIR_Done,
      // Label 368: @7679
      GIM_Try, /*On fail goto*//*Label 369*/ 7715, // Rule ID 520 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextsb2w,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6237:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VEXTSB2W:{ *:[v4i32] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTSB2W,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 520,
        GIR_Done,
      // Label 369: @7715
      GIM_Try, /*On fail goto*//*Label 370*/ 7751, // Rule ID 521 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextsh2w,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6240:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VEXTSH2W:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTSH2W,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 521,
        GIR_Done,
      // Label 370: @7751
      GIM_Try, /*On fail goto*//*Label 371*/ 7787, // Rule ID 522 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextsb2d,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6236:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VEXTSB2D:{ *:[v2i64] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTSB2D,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 522,
        GIR_Done,
      // Label 371: @7787
      GIM_Try, /*On fail goto*//*Label 372*/ 7823, // Rule ID 523 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextsh2d,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6239:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VEXTSH2D:{ *:[v2i64] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTSH2D,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 523,
        GIR_Done,
      // Label 372: @7823
      GIM_Try, /*On fail goto*//*Label 373*/ 7859, // Rule ID 524 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextsw2d,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6241:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VEXTSW2D:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTSW2D,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 524,
        GIR_Done,
      // Label 373: @7859
      GIM_Try, /*On fail goto*//*Label 374*/ 7895, // Rule ID 527 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vprtybw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6327:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VPRTYBW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPRTYBW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 527,
        GIR_Done,
      // Label 374: @7895
      GIM_Try, /*On fail goto*//*Label 375*/ 7931, // Rule ID 528 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vprtybd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6325:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vB)  =>  (VPRTYBD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPRTYBD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 528,
        GIR_Done,
      // Label 375: @7931
      GIM_Try, /*On fail goto*//*Label 376*/ 7967, // Rule ID 529 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vprtybq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6326:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vB)  =>  (VPRTYBQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPRTYBQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 529,
        GIR_Done,
      // Label 376: @7967
      GIM_Try, /*On fail goto*//*Label 377*/ 8001, // Rule ID 656 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_popcntb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 6494:{ *:[iPTR] }, i64:{ *:[i64] }:$rS)  =>  (POPCNTB:{ *:[i64] } i64:{ *:[i64] }:$rS)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::POPCNTB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 656,
        GIR_Done,
      // Label 377: @8001
      GIM_Try, /*On fail goto*//*Label 378*/ 8037, // Rule ID 1004 //
        GIM_CheckFeatures, GIFBS_MMA,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_mma_xxmfacc,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v512s1,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v512s1,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::ACCRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v512i1] } 6488:{ *:[iPTR] }, v512i1:{ *:[v512i1] }:$AS)  =>  (XXMFACC:{ *:[v512i1] } v512i1:{ *:[v512i1] }:$AS)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXMFACC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // ASo
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // AS
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1004,
        GIR_Done,
      // Label 378: @8037
      GIM_Try, /*On fail goto*//*Label 379*/ 8073, // Rule ID 1005 //
        GIM_CheckFeatures, GIFBS_MMA,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_mma_xxmtacc,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v512s1,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v512s1,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::ACCRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v512i1] } 6489:{ *:[iPTR] }, v512i1:{ *:[v512i1] }:$ATi)  =>  (XXMTACC:{ *:[v512i1] } v512i1:{ *:[v512i1] }:$ATi)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXMTACC,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // AT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // ATi
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1005,
        GIR_Done,
      // Label 379: @8073
      GIM_Try, /*On fail goto*//*Label 380*/ 8109, // Rule ID 1011 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vstribr,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6364:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VSTRIBR:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSTRIBR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1011,
        GIR_Done,
      // Label 380: @8109
      GIM_Try, /*On fail goto*//*Label 381*/ 8145, // Rule ID 1012 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vstribl,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6362:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VSTRIBL:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSTRIBL,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1012,
        GIR_Done,
      // Label 381: @8145
      GIM_Try, /*On fail goto*//*Label 382*/ 8181, // Rule ID 1013 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vstrihr,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6368:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VSTRIHR:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSTRIHR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1013,
        GIR_Done,
      // Label 382: @8181
      GIM_Try, /*On fail goto*//*Label 383*/ 8217, // Rule ID 1014 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vstrihl,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6366:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VSTRIHL:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSTRIHL,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1014,
        GIR_Done,
      // Label 383: @8217
      GIM_Try, /*On fail goto*//*Label 384*/ 8253, // Rule ID 1031 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextractbm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6231:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VEXTRACTBM:{ *:[i32] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTRACTBM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1031,
        GIR_Done,
      // Label 384: @8253
      GIM_Try, /*On fail goto*//*Label 385*/ 8289, // Rule ID 1032 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextracthm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6233:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VEXTRACTHM:{ *:[i32] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTRACTHM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1032,
        GIR_Done,
      // Label 385: @8289
      GIM_Try, /*On fail goto*//*Label 386*/ 8325, // Rule ID 1033 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextractwm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6235:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VEXTRACTWM:{ *:[i32] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTRACTWM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1033,
        GIR_Done,
      // Label 386: @8325
      GIM_Try, /*On fail goto*//*Label 387*/ 8361, // Rule ID 1034 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextractdm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6232:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vB)  =>  (VEXTRACTDM:{ *:[i32] } v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTRACTDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1034,
        GIR_Done,
      // Label 387: @8361
      GIM_Try, /*On fail goto*//*Label 388*/ 8397, // Rule ID 1035 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextractqm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6234:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vB)  =>  (VEXTRACTQM:{ *:[i32] } v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTRACTQM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1035,
        GIR_Done,
      // Label 388: @8397
      GIM_Try, /*On fail goto*//*Label 389*/ 8433, // Rule ID 1036 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vexpandbm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6217:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB)  =>  (VEXPANDBM:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXPANDBM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1036,
        GIR_Done,
      // Label 389: @8433
      GIM_Try, /*On fail goto*//*Label 390*/ 8469, // Rule ID 1037 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vexpandhm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6219:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB)  =>  (VEXPANDHM:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXPANDHM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1037,
        GIR_Done,
      // Label 390: @8469
      GIM_Try, /*On fail goto*//*Label 391*/ 8505, // Rule ID 1038 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vexpandwm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6221:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (VEXPANDWM:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXPANDWM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1038,
        GIR_Done,
      // Label 391: @8505
      GIM_Try, /*On fail goto*//*Label 392*/ 8541, // Rule ID 1039 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vexpanddm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6218:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vB)  =>  (VEXPANDDM:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXPANDDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1039,
        GIR_Done,
      // Label 392: @8541
      GIM_Try, /*On fail goto*//*Label 393*/ 8577, // Rule ID 1040 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vexpandqm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6220:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vB)  =>  (VEXPANDQM:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXPANDQM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1040,
        GIR_Done,
      // Label 393: @8577
      GIM_Try, /*On fail goto*//*Label 394*/ 8613, // Rule ID 1041 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mtvsrbm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6116:{ *:[iPTR] }, i64:{ *:[i64] }:$rB)  =>  (MTVSRBM:{ *:[v16i8] } i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSRBM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1041,
        GIR_Done,
      // Label 394: @8613
      GIM_Try, /*On fail goto*//*Label 395*/ 8649, // Rule ID 1042 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mtvsrhm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6118:{ *:[iPTR] }, i64:{ *:[i64] }:$rB)  =>  (MTVSRHM:{ *:[v8i16] } i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSRHM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1042,
        GIR_Done,
      // Label 395: @8649
      GIM_Try, /*On fail goto*//*Label 396*/ 8685, // Rule ID 1043 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mtvsrwm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6120:{ *:[iPTR] }, i64:{ *:[i64] }:$rB)  =>  (MTVSRWM:{ *:[v4i32] } i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSRWM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1043,
        GIR_Done,
      // Label 396: @8685
      GIM_Try, /*On fail goto*//*Label 397*/ 8721, // Rule ID 1044 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mtvsrdm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6117:{ *:[iPTR] }, i64:{ *:[i64] }:$rB)  =>  (MTVSRDM:{ *:[v2i64] } i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSRDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1044,
        GIR_Done,
      // Label 397: @8721
      GIM_Try, /*On fail goto*//*Label 398*/ 8757, // Rule ID 1045 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mtvsrqm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6119:{ *:[iPTR] }, i64:{ *:[i64] }:$rB)  =>  (MTVSRQM:{ *:[v1i128] } i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSRQM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1045,
        GIR_Done,
      // Label 398: @8757
      GIM_Try, /*On fail goto*//*Label 399*/ 8793, // Rule ID 1107 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextsd2q,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6238:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vB)  =>  (VEXTSD2Q:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTSD2Q,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1107,
        GIR_Done,
      // Label 399: @8793
      GIM_Reject,
    // Label 332: @8794
    GIM_Try, /*On fail goto*//*Label 400*/ 15329,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_Try, /*On fail goto*//*Label 401*/ 8842, // Rule ID 981 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvtstdcsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // MIs[0] DCMX
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6585:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XB, (timm:{ *:[i32] }):$DCMX)  =>  (XVTSTDCSP:{ *:[v4i32] } (timm:{ *:[i32] }):$DCMX, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVTSTDCSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // DCMX
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 981,
        GIR_Done,
      // Label 401: @8842
      GIM_Try, /*On fail goto*//*Label 402*/ 8885, // Rule ID 982 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvtstdcdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // MIs[0] DCMX
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6584:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XB, (timm:{ *:[i32] }):$DCMX)  =>  (XVTSTDCDP:{ *:[v2i64] } (timm:{ *:[i32] }):$DCMX, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVTSTDCDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // DCMX
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 982,
        GIR_Done,
      // Label 402: @8885
      GIM_Try, /*On fail goto*//*Label 403*/ 8937, // Rule ID 858 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xsmaxdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::VSFRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::VSFRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f64] } 6539:{ *:[iPTR] }, vsfrc:{ *:[f64] }:$XA, vsfrc:{ *:[f64] }:$XB)  =>  (XSMAXDP:{ *:[f64] } vsfrc:{ *:[f64] }:$XA, vsfrc:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMAXDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 858,
        GIR_Done,
      // Label 403: @8937
      GIM_Try, /*On fail goto*//*Label 404*/ 8989, // Rule ID 859 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xsmindp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::VSFRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::VSFRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f64] } 6540:{ *:[iPTR] }, vsfrc:{ *:[f64] }:$XA, vsfrc:{ *:[f64] }:$XB)  =>  (XSMINDP:{ *:[f64] } vsfrc:{ *:[f64] }:$XA, vsfrc:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMINDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 859,
        GIR_Done,
      // Label 404: @8989
      GIM_Try, /*On fail goto*//*Label 405*/ 9041, // Rule ID 860 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvmaxdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2f64] } 6569:{ *:[iPTR] }, vsrc:{ *:[v2f64] }:$XA, vsrc:{ *:[v2f64] }:$XB)  =>  (XVMAXDP:{ *:[v2f64] } vsrc:{ *:[v2f64] }:$XA, vsrc:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMAXDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 860,
        GIR_Done,
      // Label 405: @9041
      GIM_Try, /*On fail goto*//*Label 406*/ 9093, // Rule ID 861 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvmindp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2f64] } 6571:{ *:[iPTR] }, vsrc:{ *:[v2f64] }:$XA, vsrc:{ *:[v2f64] }:$XB)  =>  (XVMINDP:{ *:[v2f64] } vsrc:{ *:[v2f64] }:$XA, vsrc:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMINDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 861,
        GIR_Done,
      // Label 406: @9093
      GIM_Try, /*On fail goto*//*Label 407*/ 9145, // Rule ID 862 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvmaxsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6570:{ *:[iPTR] }, vsrc:{ *:[v4f32] }:$XA, vsrc:{ *:[v4f32] }:$XB)  =>  (XVMAXSP:{ *:[v4f32] } vsrc:{ *:[v4f32] }:$XA, vsrc:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMAXSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 862,
        GIR_Done,
      // Label 407: @9145
      GIM_Try, /*On fail goto*//*Label 408*/ 9197, // Rule ID 863 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvminsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::VSRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6572:{ *:[iPTR] }, vsrc:{ *:[v4f32] }:$XA, vsrc:{ *:[v4f32] }:$XB)  =>  (XVMINSP:{ *:[v4f32] } vsrc:{ *:[v4f32] }:$XA, vsrc:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMINSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 863,
        GIR_Done,
      // Label 408: @9197
      GIM_Try, /*On fail goto*//*Label 409*/ 9241, // Rule ID 787 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcmpeqdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6541:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVCMPEQDP:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCMPEQDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 787,
        GIR_Done,
      // Label 409: @9241
      GIM_Try, /*On fail goto*//*Label 410*/ 9285, // Rule ID 789 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcmpeqsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6543:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVCMPEQSP:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCMPEQSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 789,
        GIR_Done,
      // Label 410: @9285
      GIM_Try, /*On fail goto*//*Label 411*/ 9329, // Rule ID 791 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcmpgedp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6545:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVCMPGEDP:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCMPGEDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 791,
        GIR_Done,
      // Label 411: @9329
      GIM_Try, /*On fail goto*//*Label 412*/ 9373, // Rule ID 793 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcmpgesp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6547:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVCMPGESP:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCMPGESP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 793,
        GIR_Done,
      // Label 412: @9373
      GIM_Try, /*On fail goto*//*Label 413*/ 9417, // Rule ID 795 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcmpgtdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6549:{ *:[iPTR] }, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVCMPGTDP:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCMPGTDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 795,
        GIR_Done,
      // Label 413: @9417
      GIM_Try, /*On fail goto*//*Label 414*/ 9461, // Rule ID 797 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xvcmpgtsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6551:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVCMPGTSP:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCMPGTSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 797,
        GIR_Done,
      // Label 414: @9461
      GIM_Try, /*On fail goto*//*Label 415*/ 9505, // Rule ID 961 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_addf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f128] } 6088:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSADDQPO:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSADDQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 961,
        GIR_Done,
      // Label 415: @9505
      GIM_Try, /*On fail goto*//*Label 416*/ 9549, // Rule ID 962 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_mulf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f128] } 6491:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSMULQPO:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMULQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 962,
        GIR_Done,
      // Label 416: @9549
      GIM_Try, /*On fail goto*//*Label 417*/ 9593, // Rule ID 963 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_subf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f128] } 6505:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSSUBQPO:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSSUBQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 963,
        GIR_Done,
      // Label 417: @9593
      GIM_Try, /*On fail goto*//*Label 418*/ 9637, // Rule ID 964 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_divf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f128] } 6417:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSDIVQPO:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSDIVQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 964,
        GIR_Done,
      // Label 418: @9637
      GIM_Try, /*On fail goto*//*Label 419*/ 9681, // Rule ID 975 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xviexpdp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2f64] } 6567:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$XA, v2i64:{ *:[v2i64] }:$XB)  =>  (XVIEXPDP:{ *:[v2f64] } v2i64:{ *:[v2i64] }:$XA, v2i64:{ *:[v2i64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVIEXPDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 975,
        GIR_Done,
      // Label 419: @9681
      GIM_Try, /*On fail goto*//*Label 420*/ 9725, // Rule ID 976 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xviexpsp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6568:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)  =>  (XVIEXPSP:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$XA, v4i32:{ *:[v4i32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVIEXPSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 976,
        GIR_Done,
      // Label 420: @9725
      GIM_Try, /*On fail goto*//*Label 421*/ 9765, // Rule ID 301 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcfsx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] Operand 3
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/3, 0,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6146:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB, 0:{ *:[i32] })  =>  (VCFSX_0:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCFSX_0,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 301,
        GIR_Done,
      // Label 421: @9765
      GIM_Try, /*On fail goto*//*Label 422*/ 9805, // Rule ID 302 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vctuxs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] Operand 3
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/3, 0,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6208:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB, 0:{ *:[i32] })  =>  (VCTUXS_0:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCTUXS_0,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 302,
        GIR_Done,
      // Label 422: @9805
      GIM_Try, /*On fail goto*//*Label 423*/ 9845, // Rule ID 303 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcfux,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] Operand 3
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/3, 0,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6148:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB, 0:{ *:[i32] })  =>  (VCFUX_0:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCFUX_0,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 303,
        GIR_Done,
      // Label 423: @9845
      GIM_Try, /*On fail goto*//*Label 424*/ 9885, // Rule ID 304 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vctsxs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] Operand 3
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/3, 0,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6207:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB, 0:{ *:[i32] })  =>  (VCTSXS_0:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCTSXS_0,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 304,
        GIR_Done,
      // Label 424: @9885
      GIM_Try, /*On fail goto*//*Label 425*/ 9928, // Rule ID 297 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcfsx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] UIMM
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6146:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB, (timm:{ *:[i32] }):$UIMM)  =>  (VCFSX:{ *:[v4f32] } (timm:{ *:[i32] }):$UIMM, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCFSX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // UIMM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 297,
        GIR_Done,
      // Label 425: @9928
      GIM_Try, /*On fail goto*//*Label 426*/ 9971, // Rule ID 298 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcfux,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] UIMM
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6148:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB, (timm:{ *:[i32] }):$UIMM)  =>  (VCFUX:{ *:[v4f32] } (timm:{ *:[i32] }):$UIMM, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCFUX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // UIMM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 298,
        GIR_Done,
      // Label 426: @9971
      GIM_Try, /*On fail goto*//*Label 427*/ 10014, // Rule ID 299 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vctsxs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] UIMM
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6207:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB, (timm:{ *:[i32] }):$UIMM)  =>  (VCTSXS:{ *:[v4i32] } (timm:{ *:[i32] }):$UIMM, v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCTSXS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // UIMM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 299,
        GIR_Done,
      // Label 427: @10014
      GIM_Try, /*On fail goto*//*Label 428*/ 10057, // Rule ID 300 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vctuxs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] UIMM
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6208:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vB, (timm:{ *:[i32] }):$UIMM)  =>  (VCTUXS:{ *:[v4i32] } (timm:{ *:[i32] }):$UIMM, v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCTUXS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // UIMM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 300,
        GIR_Done,
      // Label 428: @10057
      GIM_Try, /*On fail goto*//*Label 429*/ 10100, // Rule ID 1047 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcntmbb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // MIs[0] MP
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[i64] } 6203:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vB, (timm:{ *:[i32] }):$MP)  =>  (VCNTMBB:{ *:[i64] } v16i8:{ *:[v16i8] }:$vB, (timm:{ *:[i32] }):$MP)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCNTMBB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // MP
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1047,
        GIR_Done,
      // Label 429: @10100
      GIM_Try, /*On fail goto*//*Label 430*/ 10143, // Rule ID 1048 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcntmbh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // MIs[0] MP
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[i64] } 6205:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vB, (timm:{ *:[i32] }):$MP)  =>  (VCNTMBH:{ *:[i64] } v8i16:{ *:[v8i16] }:$vB, (timm:{ *:[i32] }):$MP)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCNTMBH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // MP
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1048,
        GIR_Done,
      // Label 430: @10143
      GIM_Try, /*On fail goto*//*Label 431*/ 10186, // Rule ID 1049 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcntmbw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // MIs[0] MP
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[i64] } 6206:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB, (timm:{ *:[i32] }):$MP)  =>  (VCNTMBW:{ *:[i64] } v4i32:{ *:[v4i32] }:$vB, (timm:{ *:[i32] }):$MP)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCNTMBW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // MP
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1049,
        GIR_Done,
      // Label 431: @10186
      GIM_Try, /*On fail goto*//*Label 432*/ 10229, // Rule ID 1050 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcntmbd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // MIs[0] MP
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[i64] } 6204:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vB, (timm:{ *:[i32] }):$MP)  =>  (VCNTMBD:{ *:[i64] } v2i64:{ *:[v2i64] }:$vB, (timm:{ *:[i32] }):$MP)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCNTMBD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // MP
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1050,
        GIR_Done,
      // Label 432: @10229
      GIM_Try, /*On fail goto*//*Label 433*/ 10272, // Rule ID 1064 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vgnb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // MIs[0] N
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // (intrinsic_wo_chain:{ *:[i64] } 6243:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vB, (timm:{ *:[i32] }):$N)  =>  (VGNB:{ *:[i64] } v1i128:{ *:[v1i128] }:$vB, (timm:{ *:[i32] }):$N)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VGNB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // N
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1064,
        GIR_Done,
      // Label 433: @10272
      GIM_Try, /*On fail goto*//*Label 434*/ 10324, // Rule ID 191 //
        GIM_CheckFeatures, GIFBS_HasExtDiv,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_divwe,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::GPRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6418:{ *:[iPTR] }, gprc:{ *:[i32] }:$rA, gprc:{ *:[i32] }:$rB)  =>  (DIVWE:{ *:[i32] } gprc:{ *:[i32] }:$rA, gprc:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DIVWE,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 191,
        GIR_Done,
      // Label 434: @10324
      GIM_Try, /*On fail goto*//*Label 435*/ 10376, // Rule ID 192 //
        GIM_CheckFeatures, GIFBS_HasExtDiv,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_divweu,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::GPRCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 6419:{ *:[iPTR] }, gprc:{ *:[i32] }:$rA, gprc:{ *:[i32] }:$rB)  =>  (DIVWEU:{ *:[i32] } gprc:{ *:[i32] }:$rA, gprc:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DIVWEU,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 192,
        GIR_Done,
      // Label 435: @10376
      GIM_Try, /*On fail goto*//*Label 436*/ 10428, // Rule ID 653 //
        GIM_CheckFeatures, GIFBS_HasBPERMD,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_bpermd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::G8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 6393:{ *:[iPTR] }, g8rc:{ *:[i64] }:$rS, g8rc:{ *:[i64] }:$rB)  =>  (BPERMD:{ *:[i64] } g8rc:{ *:[i64] }:$rS, g8rc:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::BPERMD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 653,
        GIR_Done,
      // Label 436: @10428
      GIM_Try, /*On fail goto*//*Label 437*/ 10480, // Rule ID 659 //
        GIM_CheckFeatures, GIFBS_HasExtDiv,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_divde,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::G8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 6415:{ *:[iPTR] }, g8rc:{ *:[i64] }:$rA, g8rc:{ *:[i64] }:$rB)  =>  (DIVDE:{ *:[i64] } g8rc:{ *:[i64] }:$rA, g8rc:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DIVDE,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 659,
        GIR_Done,
      // Label 437: @10480
      GIM_Try, /*On fail goto*//*Label 438*/ 10532, // Rule ID 664 //
        GIM_CheckFeatures, GIFBS_HasExtDiv,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_divdeu,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::G8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 6416:{ *:[iPTR] }, g8rc:{ *:[i64] }:$rA, g8rc:{ *:[i64] }:$rB)  =>  (DIVDEU:{ *:[i64] } g8rc:{ *:[i64] }:$rA, g8rc:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DIVDEU,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 664,
        GIR_Done,
      // Label 438: @10532
      GIM_Try, /*On fail goto*//*Label 439*/ 10576, // Rule ID 288 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddcuw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6130:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VADDCUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDCUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 288,
        GIR_Done,
      // Label 439: @10576
      GIM_Try, /*On fail goto*//*Label 440*/ 10620, // Rule ID 289 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddsbs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6133:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VADDSBS:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDSBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 289,
        GIR_Done,
      // Label 440: @10620
      GIM_Try, /*On fail goto*//*Label 441*/ 10664, // Rule ID 290 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddshs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6134:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VADDSHS:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDSHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 290,
        GIR_Done,
      // Label 441: @10664
      GIM_Try, /*On fail goto*//*Label 442*/ 10708, // Rule ID 291 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddsws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6135:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VADDSWS:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDSWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 291,
        GIR_Done,
      // Label 442: @10708
      GIM_Try, /*On fail goto*//*Label 443*/ 10752, // Rule ID 292 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddubs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6136:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VADDUBS:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDUBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 292,
        GIR_Done,
      // Label 443: @10752
      GIM_Try, /*On fail goto*//*Label 444*/ 10796, // Rule ID 293 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vadduhs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6137:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VADDUHS:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDUHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 293,
        GIR_Done,
      // Label 444: @10796
      GIM_Try, /*On fail goto*//*Label 445*/ 10840, // Rule ID 294 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vadduws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6138:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VADDUWS:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDUWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 294,
        GIR_Done,
      // Label 445: @10840
      GIM_Try, /*On fail goto*//*Label 446*/ 10884, // Rule ID 307 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vavgsb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6139:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VAVGSB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VAVGSB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 307,
        GIR_Done,
      // Label 446: @10884
      GIM_Try, /*On fail goto*//*Label 447*/ 10928, // Rule ID 308 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vavgsh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6140:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VAVGSH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VAVGSH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 308,
        GIR_Done,
      // Label 447: @10928
      GIM_Try, /*On fail goto*//*Label 448*/ 10972, // Rule ID 309 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vavgsw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6141:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VAVGSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VAVGSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 309,
        GIR_Done,
      // Label 448: @10972
      GIM_Try, /*On fail goto*//*Label 449*/ 11016, // Rule ID 310 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vavgub,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6142:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VAVGUB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VAVGUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 310,
        GIR_Done,
      // Label 449: @11016
      GIM_Try, /*On fail goto*//*Label 450*/ 11060, // Rule ID 311 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vavguh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6143:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VAVGUH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VAVGUH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 311,
        GIR_Done,
      // Label 450: @11060
      GIM_Try, /*On fail goto*//*Label 451*/ 11104, // Rule ID 312 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vavguw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6144:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VAVGUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VAVGUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 312,
        GIR_Done,
      // Label 451: @11104
      GIM_Try, /*On fail goto*//*Label 452*/ 11148, // Rule ID 313 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxfp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6262:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)  =>  (VMAXFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 313,
        GIR_Done,
      // Label 452: @11148
      GIM_Try, /*On fail goto*//*Label 453*/ 11192, // Rule ID 314 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxsb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6263:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMAXSB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXSB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 314,
        GIR_Done,
      // Label 453: @11192
      GIM_Try, /*On fail goto*//*Label 454*/ 11236, // Rule ID 315 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxsh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6265:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMAXSH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXSH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 315,
        GIR_Done,
      // Label 454: @11236
      GIM_Try, /*On fail goto*//*Label 455*/ 11280, // Rule ID 316 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxsw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6266:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMAXSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 316,
        GIR_Done,
      // Label 455: @11280
      GIM_Try, /*On fail goto*//*Label 456*/ 11324, // Rule ID 317 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxub,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6267:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMAXUB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 317,
        GIR_Done,
      // Label 456: @11324
      GIM_Try, /*On fail goto*//*Label 457*/ 11368, // Rule ID 318 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxuh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6269:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMAXUH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXUH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 318,
        GIR_Done,
      // Label 457: @11368
      GIM_Try, /*On fail goto*//*Label 458*/ 11412, // Rule ID 319 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxuw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6270:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMAXUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 319,
        GIR_Done,
      // Label 458: @11412
      GIM_Try, /*On fail goto*//*Label 459*/ 11456, // Rule ID 320 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminfp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4f32] } 6273:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)  =>  (VMINFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 320,
        GIR_Done,
      // Label 459: @11456
      GIM_Try, /*On fail goto*//*Label 460*/ 11500, // Rule ID 321 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminsb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6274:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMINSB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINSB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 321,
        GIR_Done,
      // Label 460: @11500
      GIM_Try, /*On fail goto*//*Label 461*/ 11544, // Rule ID 322 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminsh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6276:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMINSH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINSH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 322,
        GIR_Done,
      // Label 461: @11544
      GIM_Try, /*On fail goto*//*Label 462*/ 11588, // Rule ID 323 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminsw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6277:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMINSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 323,
        GIR_Done,
      // Label 462: @11588
      GIM_Try, /*On fail goto*//*Label 463*/ 11632, // Rule ID 324 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminub,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6278:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMINUB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 324,
        GIR_Done,
      // Label 463: @11632
      GIM_Try, /*On fail goto*//*Label 464*/ 11676, // Rule ID 325 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminuh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6280:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMINUH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINUH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 325,
        GIR_Done,
      // Label 464: @11676
      GIM_Try, /*On fail goto*//*Label 465*/ 11720, // Rule ID 326 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminuw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6281:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMINUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 326,
        GIR_Done,
      // Label 465: @11720
      GIM_Try, /*On fail goto*//*Label 466*/ 11764, // Rule ID 339 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulesb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6291:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMULESB:{ *:[v8i16] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULESB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 339,
        GIR_Done,
      // Label 466: @11764
      GIM_Try, /*On fail goto*//*Label 467*/ 11808, // Rule ID 340 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulesh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6293:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMULESH:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULESH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 340,
        GIR_Done,
      // Label 467: @11808
      GIM_Try, /*On fail goto*//*Label 468*/ 11852, // Rule ID 341 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmuleub,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6295:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMULEUB:{ *:[v8i16] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULEUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 341,
        GIR_Done,
      // Label 468: @11852
      GIM_Try, /*On fail goto*//*Label 469*/ 11896, // Rule ID 342 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmuleuh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6297:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMULEUH:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULEUH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 342,
        GIR_Done,
      // Label 469: @11896
      GIM_Try, /*On fail goto*//*Label 470*/ 11940, // Rule ID 343 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulosb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6303:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMULOSB:{ *:[v8i16] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOSB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 343,
        GIR_Done,
      // Label 470: @11940
      GIM_Try, /*On fail goto*//*Label 471*/ 11984, // Rule ID 344 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulosh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6305:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMULOSH:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOSH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 344,
        GIR_Done,
      // Label 471: @11984
      GIM_Try, /*On fail goto*//*Label 472*/ 12028, // Rule ID 345 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmuloub,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6307:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VMULOUB:{ *:[v8i16] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 345,
        GIR_Done,
      // Label 472: @12028
      GIM_Try, /*On fail goto*//*Label 473*/ 12072, // Rule ID 346 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulouh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6309:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VMULOUH:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOUH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 346,
        GIR_Done,
      // Label 473: @12072
      GIM_Try, /*On fail goto*//*Label 474*/ 12116, // Rule ID 353 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubcuw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6371:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUBCUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBCUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 353,
        GIR_Done,
      // Label 474: @12116
      GIM_Try, /*On fail goto*//*Label 475*/ 12160, // Rule ID 358 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubsbs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6374:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSUBSBS:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBSBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 358,
        GIR_Done,
      // Label 475: @12160
      GIM_Try, /*On fail goto*//*Label 476*/ 12204, // Rule ID 359 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubshs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6375:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VSUBSHS:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBSHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 359,
        GIR_Done,
      // Label 476: @12204
      GIM_Try, /*On fail goto*//*Label 477*/ 12248, // Rule ID 360 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubsws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6376:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUBSWS:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBSWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 360,
        GIR_Done,
      // Label 477: @12248
      GIM_Try, /*On fail goto*//*Label 478*/ 12292, // Rule ID 361 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsububs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6377:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSUBUBS:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBUBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 361,
        GIR_Done,
      // Label 478: @12292
      GIM_Try, /*On fail goto*//*Label 479*/ 12336, // Rule ID 362 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubuhs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6378:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VSUBUHS:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBUHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 362,
        GIR_Done,
      // Label 479: @12336
      GIM_Try, /*On fail goto*//*Label 480*/ 12380, // Rule ID 363 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubuws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6379:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUBUWS:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBUWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 363,
        GIR_Done,
      // Label 480: @12380
      GIM_Try, /*On fail goto*//*Label 481*/ 12424, // Rule ID 372 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6333:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VRLB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 372,
        GIR_Done,
      // Label 481: @12424
      GIM_Try, /*On fail goto*//*Label 482*/ 12468, // Rule ID 373 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6337:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VRLH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 373,
        GIR_Done,
      // Label 482: @12468
      GIM_Try, /*On fail goto*//*Label 483*/ 12512, // Rule ID 374 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6340:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VRLW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 374,
        GIR_Done,
      // Label 483: @12512
      GIM_Try, /*On fail goto*//*Label 484*/ 12556, // Rule ID 375 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsl,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6345:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSL:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSL,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 375,
        GIR_Done,
      // Label 484: @12556
      GIM_Try, /*On fail goto*//*Label 485*/ 12600, // Rule ID 376 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vslo,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6349:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSLO:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSLO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 376,
        GIR_Done,
      // Label 485: @12600
      GIM_Try, /*On fail goto*//*Label 486*/ 12644, // Rule ID 377 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vslb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6346:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSLB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSLB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 377,
        GIR_Done,
      // Label 486: @12644
      GIM_Try, /*On fail goto*//*Label 487*/ 12688, // Rule ID 378 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vslh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6348:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VSLH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSLH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 378,
        GIR_Done,
      // Label 487: @12688
      GIM_Try, /*On fail goto*//*Label 488*/ 12732, // Rule ID 379 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vslw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6351:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSLW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSLW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 379,
        GIR_Done,
      // Label 488: @12732
      GIM_Try, /*On fail goto*//*Label 489*/ 12776, // Rule ID 383 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsr,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6352:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSR:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 383,
        GIR_Done,
      // Label 489: @12776
      GIM_Try, /*On fail goto*//*Label 490*/ 12820, // Rule ID 384 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsro,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6359:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSRO:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 384,
        GIR_Done,
      // Label 490: @12820
      GIM_Try, /*On fail goto*//*Label 491*/ 12864, // Rule ID 385 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrab,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6353:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSRAB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRAB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 385,
        GIR_Done,
      // Label 491: @12864
      GIM_Try, /*On fail goto*//*Label 492*/ 12908, // Rule ID 386 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrah,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6354:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VSRAH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRAH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 386,
        GIR_Done,
      // Label 492: @12908
      GIM_Try, /*On fail goto*//*Label 493*/ 12952, // Rule ID 387 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsraw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6355:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSRAW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRAW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 387,
        GIR_Done,
      // Label 493: @12952
      GIM_Try, /*On fail goto*//*Label 494*/ 12996, // Rule ID 388 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6356:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSRB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 388,
        GIR_Done,
      // Label 494: @12996
      GIM_Try, /*On fail goto*//*Label 495*/ 13040, // Rule ID 389 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6358:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VSRH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 389,
        GIR_Done,
      // Label 495: @13040
      GIM_Try, /*On fail goto*//*Label 496*/ 13084, // Rule ID 390 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6361:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSRW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 390,
        GIR_Done,
      // Label 496: @13084
      GIM_Try, /*On fail goto*//*Label 497*/ 13128, // Rule ID 394 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkpx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6315:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VPKPX:{ *:[v8i16] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKPX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 394,
        GIR_Done,
      // Label 497: @13128
      GIM_Try, /*On fail goto*//*Label 498*/ 13172, // Rule ID 441 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulesw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6294:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULESW:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULESW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 441,
        GIR_Done,
      // Label 498: @13172
      GIM_Try, /*On fail goto*//*Label 499*/ 13216, // Rule ID 442 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmuleuw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6298:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULEUW:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULEUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 442,
        GIR_Done,
      // Label 499: @13216
      GIM_Try, /*On fail goto*//*Label 500*/ 13260, // Rule ID 443 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulosw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6306:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULOSW:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 443,
        GIR_Done,
      // Label 500: @13260
      GIM_Try, /*On fail goto*//*Label 501*/ 13304, // Rule ID 444 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulouw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6310:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULOUW:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 444,
        GIR_Done,
      // Label 501: @13304
      GIM_Try, /*On fail goto*//*Label 502*/ 13348, // Rule ID 446 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxsd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6264:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMAXSD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXSD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 446,
        GIR_Done,
      // Label 502: @13348
      GIM_Try, /*On fail goto*//*Label 503*/ 13392, // Rule ID 447 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmaxud,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6268:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMAXUD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMAXUD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 447,
        GIR_Done,
      // Label 503: @13392
      GIM_Try, /*On fail goto*//*Label 504*/ 13436, // Rule ID 448 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminsd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6275:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMINSD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINSD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 448,
        GIR_Done,
      // Label 504: @13436
      GIM_Try, /*On fail goto*//*Label 505*/ 13480, // Rule ID 449 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vminud,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6279:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMINUD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMINUD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 449,
        GIR_Done,
      // Label 505: @13480
      GIM_Try, /*On fail goto*//*Label 506*/ 13524, // Rule ID 452 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrld,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6334:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VRLD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 452,
        GIR_Done,
      // Label 506: @13524
      GIM_Try, /*On fail goto*//*Label 507*/ 13568, // Rule ID 456 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddcuq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6129:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VADDCUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDCUQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 456,
        GIR_Done,
      // Label 507: @13568
      GIM_Try, /*On fail goto*//*Label 508*/ 13612, // Rule ID 461 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubcuq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6370:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VSUBCUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBCUQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 461,
        GIR_Done,
      // Label 508: @13612
      GIM_Try, /*On fail goto*//*Label 509*/ 13656, // Rule ID 480 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vpmsumb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6094:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VPMSUMB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPMSUMB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 480,
        GIR_Done,
      // Label 509: @13656
      GIM_Try, /*On fail goto*//*Label 510*/ 13700, // Rule ID 481 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vpmsumh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6096:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VPMSUMH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPMSUMH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 481,
        GIR_Done,
      // Label 510: @13700
      GIM_Try, /*On fail goto*//*Label 511*/ 13744, // Rule ID 482 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vpmsumw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6097:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VPMSUMW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPMSUMW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 482,
        GIR_Done,
      // Label 511: @13744
      GIM_Try, /*On fail goto*//*Label 512*/ 13788, // Rule ID 483 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vpmsumd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6095:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VPMSUMD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPMSUMD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 483,
        GIR_Done,
      // Label 512: @13788
      GIM_Try, /*On fail goto*//*Label 513*/ 13832, // Rule ID 491 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vbpermq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6145:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VBPERMQ:{ *:[v2i64] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VBPERMQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 491,
        GIR_Done,
      // Label 513: @13832
      GIM_Try, /*On fail goto*//*Label 514*/ 13876, // Rule ID 494 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vcipher,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6089:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VCIPHER:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCIPHER,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 494,
        GIR_Done,
      // Label 514: @13876
      GIM_Try, /*On fail goto*//*Label 515*/ 13920, // Rule ID 495 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vcipherlast,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6090:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VCIPHERLAST:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCIPHERLAST,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 495,
        GIR_Done,
      // Label 515: @13920
      GIM_Try, /*On fail goto*//*Label 516*/ 13964, // Rule ID 496 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vncipher,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6091:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VNCIPHER:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNCIPHER,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 496,
        GIR_Done,
      // Label 516: @13964
      GIM_Try, /*On fail goto*//*Label 517*/ 14008, // Rule ID 497 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vncipherlast,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6092:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VNCIPHERLAST:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNCIPHERLAST,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 497,
        GIR_Done,
      // Label 517: @14008
      GIM_Try, /*On fail goto*//*Label 518*/ 14052, // Rule ID 530 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlwnm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6342:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VRLWNM:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLWNM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 530,
        GIR_Done,
      // Label 518: @14052
      GIM_Try, /*On fail goto*//*Label 519*/ 14096, // Rule ID 532 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrldnm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6336:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VRLDNM:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLDNM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 532,
        GIR_Done,
      // Label 519: @14096
      GIM_Try, /*On fail goto*//*Label 520*/ 14140, // Rule ID 534 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vslv,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6350:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSLV:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSLV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 534,
        GIR_Done,
      // Label 520: @14140
      GIM_Try, /*On fail goto*//*Label 521*/ 14184, // Rule ID 535 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrv,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6360:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VSRV:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRV,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 535,
        GIR_Done,
      // Label 521: @14184
      GIM_Try, /*On fail goto*//*Label 522*/ 14228, // Rule ID 536 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vabsdub,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6126:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)  =>  (VABSDUB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VABSDUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 536,
        GIR_Done,
      // Label 522: @14228
      GIM_Try, /*On fail goto*//*Label 523*/ 14272, // Rule ID 537 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vabsduh,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6127:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VABSDUH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VABSDUH,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 537,
        GIR_Done,
      // Label 523: @14272
      GIM_Try, /*On fail goto*//*Label 524*/ 14316, // Rule ID 538 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vabsduw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6128:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VABSDUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VABSDUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 538,
        GIR_Done,
      // Label 524: @14316
      GIM_Try, /*On fail goto*//*Label 525*/ 14360, // Rule ID 1059 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpdepd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6312:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VPDEPD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPDEPD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1059,
        GIR_Done,
      // Label 525: @14360
      GIM_Try, /*On fail goto*//*Label 526*/ 14404, // Rule ID 1060 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpextd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6314:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VPEXTD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPEXTD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1060,
        GIR_Done,
      // Label 526: @14404
      GIM_Try, /*On fail goto*//*Label 527*/ 14448, // Rule ID 1061 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_pdepd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 6492:{ *:[iPTR] }, i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (PDEPD:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::PDEPD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1061,
        GIR_Done,
      // Label 527: @14448
      GIM_Try, /*On fail goto*//*Label 528*/ 14492, // Rule ID 1062 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_pextd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 6493:{ *:[iPTR] }, i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (PEXTD:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::PEXTD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1062,
        GIR_Done,
      // Label 528: @14492
      GIM_Try, /*On fail goto*//*Label 529*/ 14536, // Rule ID 1063 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vcfuged,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6147:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VCFUGED:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCFUGED,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1063,
        GIR_Done,
      // Label 529: @14536
      GIM_Try, /*On fail goto*//*Label 530*/ 14580, // Rule ID 1065 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_cfuged,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 6395:{ *:[iPTR] }, i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (CFUGED:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CFUGED,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1065,
        GIR_Done,
      // Label 530: @14580
      GIM_Try, /*On fail goto*//*Label 531*/ 14624, // Rule ID 1067 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vclzdm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6151:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VCLZDM:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCLZDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1067,
        GIR_Done,
      // Label 531: @14624
      GIM_Try, /*On fail goto*//*Label 532*/ 14668, // Rule ID 1068 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vctzdm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6209:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VCTZDM:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCTZDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1068,
        GIR_Done,
      // Label 532: @14668
      GIM_Try, /*On fail goto*//*Label 533*/ 14712, // Rule ID 1069 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_cntlzdm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 6396:{ *:[iPTR] }, i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (CNTLZDM:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CNTLZDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1069,
        GIR_Done,
      // Label 533: @14712
      GIM_Try, /*On fail goto*//*Label 534*/ 14756, // Rule ID 1070 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_cnttzdm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 6397:{ *:[iPTR] }, i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)  =>  (CNTTZDM:{ *:[i64] } i64:{ *:[i64] }:$rS, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CNTTZDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rS
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1070,
        GIR_Done,
      // Label 534: @14756
      GIM_Try, /*On fail goto*//*Label 535*/ 14800, // Rule ID 1071 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vclrlb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6149:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, i32:{ *:[i32] }:$rB)  =>  (VCLRLB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCLRLB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1071,
        GIR_Done,
      // Label 535: @14800
      GIM_Try, /*On fail goto*//*Label 536*/ 14844, // Rule ID 1072 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vclrrb,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6150:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, i32:{ *:[i32] }:$rB)  =>  (VCLRRB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VCLRRB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1072,
        GIR_Done,
      // Label 536: @14844
      GIM_Try, /*On fail goto*//*Label 537*/ 14888, // Rule ID 1086 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vdivesw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6213:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VDIVESW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VDIVESW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1086,
        GIR_Done,
      // Label 537: @14888
      GIM_Try, /*On fail goto*//*Label 538*/ 14932, // Rule ID 1087 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vdiveuw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6216:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VDIVEUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VDIVEUW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1087,
        GIR_Done,
      // Label 538: @14932
      GIM_Try, /*On fail goto*//*Label 539*/ 14976, // Rule ID 1088 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vdivesd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6211:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VDIVESD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VDIVESD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1088,
        GIR_Done,
      // Label 539: @14976
      GIM_Try, /*On fail goto*//*Label 540*/ 15020, // Rule ID 1089 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vdiveud,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6214:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VDIVEUD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VDIVEUD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1089,
        GIR_Done,
      // Label 540: @15020
      GIM_Try, /*On fail goto*//*Label 541*/ 15064, // Rule ID 1090 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulesd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6292:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULESD:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULESD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1090,
        GIR_Done,
      // Label 541: @15064
      GIM_Try, /*On fail goto*//*Label 542*/ 15108, // Rule ID 1091 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmuleud,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6296:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULEUD:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULEUD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1091,
        GIR_Done,
      // Label 542: @15108
      GIM_Try, /*On fail goto*//*Label 543*/ 15152, // Rule ID 1092 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmulosd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6304:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULOSD:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOSD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1092,
        GIR_Done,
      // Label 543: @15152
      GIM_Try, /*On fail goto*//*Label 544*/ 15196, // Rule ID 1093 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmuloud,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6308:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULOUD:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMULOUD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1093,
        GIR_Done,
      // Label 544: @15196
      GIM_Try, /*On fail goto*//*Label 545*/ 15240, // Rule ID 1097 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vdivesq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6212:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VDIVESQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VDIVESQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1097,
        GIR_Done,
      // Label 545: @15240
      GIM_Try, /*On fail goto*//*Label 546*/ 15284, // Rule ID 1098 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vdiveuq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6215:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VDIVEUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VDIVEUQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1098,
        GIR_Done,
      // Label 546: @15284
      GIM_Try, /*On fail goto*//*Label 547*/ 15328, // Rule ID 1108 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlqnm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6339:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)  =>  (VRLQNM:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLQNM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1108,
        GIR_Done,
      // Label 547: @15328
      GIM_Reject,
    // Label 400: @15329
    GIM_Try, /*On fail goto*//*Label 548*/ 17726,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_Try, /*On fail goto*//*Label 549*/ 15399, // Rule ID 967 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_fmaf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/4, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_wo_chain:{ *:[f128] } 6421:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, (fneg:{ *:[f128] } f128:{ *:[f128] }:$vTi))  =>  (XSMSUBQPO:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 967,
        GIR_Done,
      // Label 549: @15399
      GIM_Try, /*On fail goto*//*Label 550*/ 15451, // Rule ID 966 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_fmaf128_round_to_odd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[f128] } 6421:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vTi)  =>  (XSMADDQPO:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 966,
        GIR_Done,
      // Label 550: @15451
      GIM_Try, /*On fail goto*//*Label 551*/ 15501, // Rule ID 492 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vshasigmaw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] ST
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // MIs[0] SIX
        GIM_CheckIsImm, /*MI*/0, /*Op*/4,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6100:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, (timm:{ *:[i32] }):$ST, (timm:{ *:[i32] }):$SIX)  =>  (VSHASIGMAW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, (timm:{ *:[i32] }):$ST, (timm:{ *:[i32] }):$SIX)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSHASIGMAW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // ST
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // SIX
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 492,
        GIR_Done,
      // Label 551: @15501
      GIM_Try, /*On fail goto*//*Label 552*/ 15551, // Rule ID 493 //
        GIM_CheckFeatures, GIFBS_HasP8Crypto,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_crypto_vshasigmad,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] ST
        GIM_CheckIsImm, /*MI*/0, /*Op*/3,
        // MIs[0] SIX
        GIM_CheckIsImm, /*MI*/0, /*Op*/4,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6099:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, (timm:{ *:[i32] }):$ST, (timm:{ *:[i32] }):$SIX)  =>  (VSHASIGMAD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, (timm:{ *:[i32] }):$ST, (timm:{ *:[i32] }):$SIX)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSHASIGMAD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // ST
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // SIX
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 493,
        GIR_Done,
      // Label 552: @15551
      GIM_Try, /*On fail goto*//*Label 553*/ 15602, // Rule ID 1015 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsw,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] UIM
        GIM_CheckIsImm, /*MI*/0, /*Op*/4,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6255:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rB, (timm:{ *:[i32] }):$UIM)  =>  (VINSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vDi, (timm:{ *:[i32] }):$UIM, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSW,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // UIM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1015,
        GIR_Done,
      // Label 553: @15602
      GIM_Try, /*On fail goto*//*Label 554*/ 15653, // Rule ID 1016 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] UIM
        GIM_CheckIsImm, /*MI*/0, /*Op*/4,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6248:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vDi, i64:{ *:[i64] }:$rB, (timm:{ *:[i32] }):$UIM)  =>  (VINSD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vDi, (timm:{ *:[i32] }):$UIM, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // UIM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1016,
        GIR_Done,
      // Label 554: @15653
      GIM_Try, /*On fail goto*//*Label 555*/ 15705, // Rule ID 280 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmladduhm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6282:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v8i16:{ *:[v8i16] }:$vC)  =>  (VMLADDUHM:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v8i16:{ *:[v8i16] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMLADDUHM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 280,
        GIR_Done,
      // Label 555: @15705
      GIM_Try, /*On fail goto*//*Label 556*/ 15757, // Rule ID 281 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vperm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6313:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, v16i8:{ *:[v16i8] }:$vC)  =>  (VPERM:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, v16i8:{ *:[v16i8] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPERM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 281,
        GIR_Done,
      // Label 556: @15757
      GIM_Try, /*On fail goto*//*Label 557*/ 15809, // Rule ID 282 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsel,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6344:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VSEL:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSEL,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 282,
        GIR_Done,
      // Label 557: @15809
      GIM_Try, /*On fail goto*//*Label 558*/ 15861, // Rule ID 333 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsummbm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6284:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VMSUMMBM:{ *:[v4i32] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMMBM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 333,
        GIR_Done,
      // Label 558: @15861
      GIM_Try, /*On fail goto*//*Label 559*/ 15913, // Rule ID 334 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumshm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6285:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VMSUMSHM:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMSHM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 334,
        GIR_Done,
      // Label 559: @15913
      GIM_Try, /*On fail goto*//*Label 560*/ 15965, // Rule ID 335 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumubm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6287:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VMSUMUBM:{ *:[v4i32] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMUBM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 335,
        GIR_Done,
      // Label 560: @15965
      GIM_Try, /*On fail goto*//*Label 561*/ 16017, // Rule ID 336 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumuhm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6289:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VMSUMUHM:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMUHM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 336,
        GIR_Done,
      // Label 561: @16017
      GIM_Try, /*On fail goto*//*Label 562*/ 16069, // Rule ID 455 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddeuqm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6132:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)  =>  (VADDEUQM:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDEUQM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 455,
        GIR_Done,
      // Label 562: @16069
      GIM_Try, /*On fail goto*//*Label 563*/ 16121, // Rule ID 457 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vaddecuq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6131:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)  =>  (VADDECUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VADDECUQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 457,
        GIR_Done,
      // Label 563: @16121
      GIM_Try, /*On fail goto*//*Label 564*/ 16173, // Rule ID 460 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubeuqm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6373:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)  =>  (VSUBEUQM:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBEUQM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 460,
        GIR_Done,
      // Label 564: @16173
      GIM_Try, /*On fail goto*//*Label 565*/ 16225, // Rule ID 462 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsubecuq,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6372:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)  =>  (VSUBECUQ:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUBECUQ,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 462,
        GIR_Done,
      // Label 565: @16225
      GIM_Try, /*On fail goto*//*Label 566*/ 16277, // Rule ID 499 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumudm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6288:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, v1i128:{ *:[v1i128] }:$vC)  =>  (VMSUMUDM:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, v1i128:{ *:[v1i128] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMUDM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 499,
        GIR_Done,
      // Label 566: @16277
      GIM_Try, /*On fail goto*//*Label 567*/ 16329, // Rule ID 531 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlwmi,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6341:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, v4i32:{ *:[v4i32] }:$vDi)  =>  (VRLWMI:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, v4i32:{ *:[v4i32] }:$vDi)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLWMI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vDi
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 531,
        GIR_Done,
      // Label 567: @16329
      GIM_Try, /*On fail goto*//*Label 568*/ 16381, // Rule ID 533 //
        GIM_CheckFeatures, GIFBS_HasP9Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrldmi,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6335:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, v2i64:{ *:[v2i64] }:$vDi)  =>  (VRLDMI:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, v2i64:{ *:[v2i64] }:$vDi)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLDMI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vDi
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 533,
        GIR_Done,
      // Label 568: @16381
      GIM_Try, /*On fail goto*//*Label 569*/ 16433, // Rule ID 1017 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsbvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6246:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, v16i8:{ *:[v16i8] }:$vB)  =>  (VINSBVLX:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSBVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1017,
        GIR_Done,
      // Label 569: @16433
      GIM_Try, /*On fail goto*//*Label 570*/ 16485, // Rule ID 1018 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsbvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6247:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, v16i8:{ *:[v16i8] }:$vB)  =>  (VINSBVRX:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, v16i8:{ *:[v16i8] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSBVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1018,
        GIR_Done,
      // Label 570: @16485
      GIM_Try, /*On fail goto*//*Label 571*/ 16537, // Rule ID 1019 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinshvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6253:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, v8i16:{ *:[v8i16] }:$vB)  =>  (VINSHVLX:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSHVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1019,
        GIR_Done,
      // Label 571: @16537
      GIM_Try, /*On fail goto*//*Label 572*/ 16589, // Rule ID 1020 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinshvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6254:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, v8i16:{ *:[v8i16] }:$vB)  =>  (VINSHVRX:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSHVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1020,
        GIR_Done,
      // Label 572: @16589
      GIM_Try, /*On fail goto*//*Label 573*/ 16641, // Rule ID 1021 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinswvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6258:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, v4i32:{ *:[v4i32] }:$vB)  =>  (VINSWVLX:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSWVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1021,
        GIR_Done,
      // Label 573: @16641
      GIM_Try, /*On fail goto*//*Label 574*/ 16693, // Rule ID 1022 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinswvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6259:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, v4i32:{ *:[v4i32] }:$vB)  =>  (VINSWVRX:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSWVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1022,
        GIR_Done,
      // Label 574: @16693
      GIM_Try, /*On fail goto*//*Label 575*/ 16745, // Rule ID 1023 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsblx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6244:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (VINSBLX:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSBLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1023,
        GIR_Done,
      // Label 575: @16745
      GIM_Try, /*On fail goto*//*Label 576*/ 16797, // Rule ID 1024 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsbrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v16i8] } 6245:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (VINSBRX:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSBRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1024,
        GIR_Done,
      // Label 576: @16797
      GIM_Try, /*On fail goto*//*Label 577*/ 16849, // Rule ID 1025 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinshlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6251:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (VINSHLX:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSHLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1025,
        GIR_Done,
      // Label 577: @16849
      GIM_Try, /*On fail goto*//*Label 578*/ 16901, // Rule ID 1026 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinshrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v8i16] } 6252:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (VINSHRX:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSHRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1026,
        GIR_Done,
      // Label 578: @16901
      GIM_Try, /*On fail goto*//*Label 579*/ 16953, // Rule ID 1027 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinswlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6256:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (VINSWLX:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSWLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1027,
        GIR_Done,
      // Label 579: @16953
      GIM_Try, /*On fail goto*//*Label 580*/ 17005, // Rule ID 1028 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinswrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 6257:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (VINSWRX:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vDi, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSWRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1028,
        GIR_Done,
      // Label 580: @17005
      GIM_Try, /*On fail goto*//*Label 581*/ 17057, // Rule ID 1029 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsdlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6249:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vDi, i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (VINSDLX:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vDi, i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSDLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1029,
        GIR_Done,
      // Label 581: @17057
      GIM_Try, /*On fail goto*//*Label 582*/ 17109, // Rule ID 1030 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vinsdrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6250:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vDi, i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (VINSDRX:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vDi, i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VINSDRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vDi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1030,
        GIR_Done,
      // Label 582: @17109
      GIM_Try, /*On fail goto*//*Label 583*/ 17161, // Rule ID 1051 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextdubvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6225:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDUBVLX:{ *:[v2i64] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDUBVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1051,
        GIR_Done,
      // Label 583: @17161
      GIM_Try, /*On fail goto*//*Label 584*/ 17213, // Rule ID 1052 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextdubvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6226:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDUBVRX:{ *:[v2i64] } v16i8:{ *:[v16i8] }:$vA, v16i8:{ *:[v16i8] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDUBVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1052,
        GIR_Done,
      // Label 584: @17213
      GIM_Try, /*On fail goto*//*Label 585*/ 17265, // Rule ID 1053 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextduhvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6227:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDUHVLX:{ *:[v2i64] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDUHVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1053,
        GIR_Done,
      // Label 585: @17265
      GIM_Try, /*On fail goto*//*Label 586*/ 17317, // Rule ID 1054 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextduhvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6228:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDUHVRX:{ *:[v2i64] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDUHVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1054,
        GIR_Done,
      // Label 586: @17317
      GIM_Try, /*On fail goto*//*Label 587*/ 17369, // Rule ID 1055 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextduwvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6229:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDUWVLX:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDUWVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1055,
        GIR_Done,
      // Label 587: @17369
      GIM_Try, /*On fail goto*//*Label 588*/ 17421, // Rule ID 1056 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextduwvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6230:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDUWVRX:{ *:[v2i64] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDUWVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1056,
        GIR_Done,
      // Label 588: @17421
      GIM_Try, /*On fail goto*//*Label 589*/ 17473, // Rule ID 1057 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextddvlx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6223:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDDVLX:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDDVLX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1057,
        GIR_Done,
      // Label 589: @17473
      GIM_Try, /*On fail goto*//*Label 590*/ 17525, // Rule ID 1058 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vextddvrx,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v2i64] } 6224:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, i32:{ *:[i32] }:$rC)  =>  (VEXTDDVRX:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, i32:{ *:[i32] }:$rC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VEXTDDVRX,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // rC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1058,
        GIR_Done,
      // Label 590: @17525
      GIM_Try, /*On fail goto*//*Label 591*/ 17577, // Rule ID 1094 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumcud,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6283:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, v1i128:{ *:[v1i128] }:$vC)  =>  (VMSUMCUD:{ *:[v1i128] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB, v1i128:{ *:[v1i128] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMCUD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1094,
        GIR_Done,
      // Label 591: @17577
      GIM_Try, /*On fail goto*//*Label 592*/ 17629, // Rule ID 1109 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vrlqmi,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_wo_chain:{ *:[v1i128] } 6338:{ *:[iPTR] }, v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vDi)  =>  (VRLQMI:{ *:[v1i128] } v1i128:{ *:[v1i128] }:$vA, v1i128:{ *:[v1i128] }:$vB, v1i128:{ *:[v1i128] }:$vDi)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VRLQMI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vDi
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1109,
        GIR_Done,
      // Label 592: @17629
      GIM_Try, /*On fail goto*//*Label 593*/ 17677, // Rule ID 1009 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsldbi,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] SH
        // No operand predicates
        // (intrinsic_wo_chain:{ *:[v16i8] } 6347:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$VRA, v16i8:{ *:[v16i8] }:$VRB, i32:{ *:[i32] }:$SH)  =>  (VSLDBI:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$VRA, v16i8:{ *:[v16i8] }:$VRB, i32:{ *:[i32] }:$SH)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSLDBI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // VRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // VRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // VRB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // SH
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1009,
        GIR_Done,
      // Label 593: @17677
      GIM_Try, /*On fail goto*//*Label 594*/ 17725, // Rule ID 1010 //
        GIM_CheckFeatures, GIFBS_IsISA3_1,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsrdbi,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v16s8,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // MIs[0] SH
        // No operand predicates
        // (intrinsic_wo_chain:{ *:[v16i8] } 6357:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$VRA, v16i8:{ *:[v16i8] }:$VRB, i32:{ *:[i32] }:$SH)  =>  (VSRDBI:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$VRA, v16i8:{ *:[v16i8] }:$VRB, i32:{ *:[i32] }:$SH)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSRDBI,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // VRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // VRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // VRB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // SH
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1010,
        GIR_Done,
      // Label 594: @17725
      GIM_Reject,
    // Label 548: @17726
    GIM_Try, /*On fail goto*//*Label 595*/ 17788, // Rule ID 1066 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/6,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_vsx_xxeval,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // MIs[0] IMM
      GIM_CheckIsImm, /*MI*/0, /*Op*/5,
      // (intrinsic_wo_chain:{ *:[v2i64] } 6594:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$XA, v2i64:{ *:[v2i64] }:$XB, v2i64:{ *:[v2i64] }:$XC, (timm:{ *:[i32] }):$IMM)  =>  (XXEVAL:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$XA, v2i64:{ *:[v2i64] }:$XB, v2i64:{ *:[v2i64] }:$XC, (timm:{ *:[i32] }):$IMM)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XXEVAL,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XB
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // XC
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/5, // IMM
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1066,
      GIR_Done,
    // Label 595: @17788
    GIM_Reject,
    // Label 17: @17789
    GIM_Try, /*On fail goto*//*Label 596*/ 17937,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/1,
      GIM_Try, /*On fail goto*//*Label 597*/ 17814, // Rule ID 253 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dssall,
        // (intrinsic_void 6102:{ *:[iPTR] })  =>  (DSSALL)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSSALL,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 253,
        GIR_Done,
      // Label 597: @17814
      GIM_Try, /*On fail goto*//*Label 598*/ 17837, // Rule ID 1134 //
        GIM_CheckFeatures, GIFBS_HasSYNC,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_sync,
        // (intrinsic_void 6506:{ *:[iPTR] })  =>  (SYNC 0:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SYNC,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1134,
        GIR_Done,
      // Label 598: @17837
      GIM_Try, /*On fail goto*//*Label 599*/ 17860, // Rule ID 1135 //
        GIM_CheckFeatures, GIFBS_HasSYNC,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_lwsync,
        // (intrinsic_void 6427:{ *:[iPTR] })  =>  (SYNC 1:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SYNC,
        GIR_AddImm, /*InsnID*/0, /*Imm*/1,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1135,
        GIR_Done,
      // Label 599: @17860
      GIM_Try, /*On fail goto*//*Label 600*/ 17880, // Rule ID 1136 //
        GIM_CheckFeatures, GIFBS_HasOnlyMSYNC,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_sync,
        // (intrinsic_void 6506:{ *:[iPTR] })  =>  (MSYNC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MSYNC,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1136,
        GIR_Done,
      // Label 600: @17880
      GIM_Try, /*On fail goto*//*Label 601*/ 17900, // Rule ID 1137 //
        GIM_CheckFeatures, GIFBS_HasOnlyMSYNC,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_lwsync,
        // (intrinsic_void 6427:{ *:[iPTR] })  =>  (MSYNC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MSYNC,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1137,
        GIR_Done,
      // Label 601: @17900
      GIM_Try, /*On fail goto*//*Label 602*/ 17918, // Rule ID 1138 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_eieio,
        // (intrinsic_void 6420:{ *:[iPTR] })  =>  (EnforceIEIO)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EnforceIEIO,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1138,
        GIR_Done,
      // Label 602: @17918
      GIM_Try, /*On fail goto*//*Label 603*/ 17936, // Rule ID 4105 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_isync,
        // (intrinsic_void 6426:{ *:[iPTR] })  =>  (ISYNC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ISYNC,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 4105,
        GIR_Done,
      // Label 603: @17936
      GIM_Reject,
    // Label 596: @17937
    GIM_Try, /*On fail goto*//*Label 604*/ 18256,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_Try, /*On fail goto*//*Label 605*/ 17979, // Rule ID 252 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dss,
        GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6101:{ *:[iPTR] }, (imm:{ *:[i32] }):$STRM)  =>  (DSS (imm:{ *:[i32] }):$STRM)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSS,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 252,
        GIR_Done,
      // Label 605: @17979
      GIM_Try, /*On fail goto*//*Label 606*/ 18007, // Rule ID 262 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_mfvscr,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v8i16] } 6114:{ *:[iPTR] })  =>  (MFVSCR:{ *:[v8i16] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFVSCR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 262,
        GIR_Done,
      // Label 606: @18007
      GIM_Try, /*On fail goto*//*Label 607*/ 18039, // Rule ID 2458 //
        GIM_CheckFeatures, GIFBS_HasHTM,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_tcheck,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_w_chain:{ *:[i32] } 6513:{ *:[iPTR] })  =>  (TCHECK_RET:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::TCHECK_RET,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // out
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2458,
        GIR_Done,
      // Label 607: @18039
      GIM_Try, /*On fail goto*//*Label 608*/ 18074, // Rule ID 2462 //
        GIM_CheckFeatures, GIFBS_HasHTM,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_get_texasr,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 6422:{ *:[iPTR] })  =>  (MFSPR8:{ *:[i64] } 130:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFSPR8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_AddImm, /*InsnID*/0, /*Imm*/130,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2462,
        GIR_Done,
      // Label 608: @18074
      GIM_Try, /*On fail goto*//*Label 609*/ 18109, // Rule ID 2463 //
        GIM_CheckFeatures, GIFBS_HasHTM,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_get_texasru,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 6423:{ *:[iPTR] })  =>  (MFSPR8:{ *:[i64] } 131:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFSPR8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_AddImm, /*InsnID*/0, /*Imm*/131,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2463,
        GIR_Done,
      // Label 609: @18109
      GIM_Try, /*On fail goto*//*Label 610*/ 18144, // Rule ID 2464 //
        GIM_CheckFeatures, GIFBS_HasHTM,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_get_tfhar,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 6424:{ *:[iPTR] })  =>  (MFSPR8:{ *:[i64] } 128:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFSPR8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_AddImm, /*InsnID*/0, /*Imm*/128,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2464,
        GIR_Done,
      // Label 610: @18144
      GIM_Try, /*On fail goto*//*Label 611*/ 18179, // Rule ID 2465 //
        GIM_CheckFeatures, GIFBS_HasHTM,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_get_tfiar,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 6425:{ *:[iPTR] })  =>  (MFSPR8:{ *:[i64] } 129:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MFSPR8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_AddImm, /*InsnID*/0, /*Imm*/129,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2465,
        GIR_Done,
      // Label 611: @18179
      GIM_Try, /*On fail goto*//*Label 612*/ 18205, // Rule ID 180 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::set_loop_iterations,
        GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
        // (intrinsic_void 244:{ *:[iPTR] }, i32:{ *:[i32] }:$rS)  =>  (MTCTRloop:{ *:[i32] } i32:{ *:[i32] }:$rS)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTCTRloop,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 180,
        GIR_Done,
      // Label 612: @18205
      GIM_Try, /*On fail goto*//*Label 613*/ 18229, // Rule ID 263 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_mtvscr,
        GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
        // (intrinsic_void 6115:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vB)  =>  (MTVSCR v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTVSCR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 263,
        GIR_Done,
      // Label 613: @18229
      GIM_Try, /*On fail goto*//*Label 614*/ 18255, // Rule ID 602 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::set_loop_iterations,
        GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
        // (intrinsic_void 244:{ *:[iPTR] }, i64:{ *:[i64] }:$rS)  =>  (MTCTR8loop:{ *:[i64] } i64:{ *:[i64] }:$rS)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::MTCTR8loop,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 602,
        GIR_Done,
      // Label 614: @18255
      GIM_Reject,
    // Label 604: @18256
    GIM_Try, /*On fail goto*//*Label 615*/ 18393,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_Try, /*On fail goto*//*Label 616*/ 18308, // Rule ID 12 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_setrnd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_w_chain:{ *:[f64] } 6503:{ *:[iPTR] }, (imm:{ *:[i32] }):$RND)  =>  (SETRNDi:{ *:[f64] } (imm:{ *:[i32] }):$RND)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SETRNDi,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // RND
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 12,
        GIR_Done,
      // Label 616: @18308
      GIM_Try, /*On fail goto*//*Label 617*/ 18350, // Rule ID 13 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_setrnd,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::GPRCRegClassID,
        // (intrinsic_w_chain:{ *:[f64] } 6503:{ *:[iPTR] }, gprc:{ *:[i32] }:$in)  =>  (SETRND:{ *:[f64] } gprc:{ *:[i32] }:$in)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SETRND,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // in
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 13,
        GIR_Done,
      // Label 617: @18350
      GIM_Try, /*On fail goto*//*Label 618*/ 18392, // Rule ID 14 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_setflm,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/PPC::F8RCRegClassID,
        // (intrinsic_w_chain:{ *:[f64] } 6502:{ *:[iPTR] }, f8rc:{ *:[f64] }:$FLM)  =>  (SETFLM:{ *:[f64] } f8rc:{ *:[f64] }:$FLM)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SETFLM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // FLM
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 14,
        GIR_Done,
      // Label 618: @18392
      GIM_Reject,
    // Label 615: @18393
    GIM_Try, /*On fail goto*//*Label 619*/ 19439,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_Try, /*On fail goto*//*Label 620*/ 18451, // Rule ID 254 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dst,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6103:{ *:[iPTR] }, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DST (imm:{ *:[i32] }):$STRM, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DST,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 254,
        GIR_Done,
      // Label 620: @18451
      GIM_Try, /*On fail goto*//*Label 621*/ 18504, // Rule ID 255 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dstt,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6106:{ *:[iPTR] }, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DSTT (imm:{ *:[i32] }):$STRM, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSTT,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 255,
        GIR_Done,
      // Label 621: @18504
      GIM_Try, /*On fail goto*//*Label 622*/ 18557, // Rule ID 256 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dstst,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6104:{ *:[iPTR] }, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DSTST (imm:{ *:[i32] }):$STRM, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSTST,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 256,
        GIR_Done,
      // Label 622: @18557
      GIM_Try, /*On fail goto*//*Label 623*/ 18610, // Rule ID 257 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dststt,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6105:{ *:[iPTR] }, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DSTSTT (imm:{ *:[i32] }):$STRM, i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSTSTT,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 257,
        GIR_Done,
      // Label 623: @18610
      GIM_Try, /*On fail goto*//*Label 624*/ 18663, // Rule ID 258 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dst,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/64,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6103:{ *:[iPTR] }, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DST64 (imm:{ *:[i32] }):$STRM, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DST64,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 258,
        GIR_Done,
      // Label 624: @18663
      GIM_Try, /*On fail goto*//*Label 625*/ 18716, // Rule ID 259 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dstt,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/64,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6106:{ *:[iPTR] }, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DSTT64 (imm:{ *:[i32] }):$STRM, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSTT64,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 259,
        GIR_Done,
      // Label 625: @18716
      GIM_Try, /*On fail goto*//*Label 626*/ 18769, // Rule ID 260 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dstst,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/64,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6104:{ *:[iPTR] }, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DSTST64 (imm:{ *:[i32] }):$STRM, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSTST64,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 260,
        GIR_Done,
      // Label 626: @18769
      GIM_Try, /*On fail goto*//*Label 627*/ 18822, // Rule ID 261 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::ppc_altivec_dststt,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        // MIs[0] rA
        GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/64,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 6105:{ *:[iPTR] }, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB, (imm:{ *:[i32] }):$STRM)  =>  (DSTSTT64 (imm:{ *:[i32] }):$STRM, i64:{ *:[i64] }:$rA, i32:{ *:[i32] }:$rB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::DSTSTT64,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // STRM
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // rB
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 261,
        GIR_Done,
      // Label 627: @18822
      GIM_Try, /*On fail goto*//*Label 628*/ 18866, // Rule ID 364 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsumsws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 6384:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUMSWS:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUMSWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 364,
        GIR_Done,
      // Label 628: @18866
      GIM_Try, /*On fail goto*//*Label 629*/ 18910, // Rule ID 365 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsum2sws,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 6380:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUM2SWS:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUM2SWS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 365,
        GIR_Done,
      // Label 629: @18910
      GIM_Try, /*On fail goto*//*Label 630*/ 18954, // Rule ID 366 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsum4sbs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 6381:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUM4SBS:{ *:[v4i32] } v16i8:{ *:[v16i8] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUM4SBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 366,
        GIR_Done,
      // Label 630: @18954
      GIM_Try, /*On fail goto*//*Label 631*/ 18998, // Rule ID 367 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsum4shs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 6382:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUM4SHS:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUM4SHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 367,
        GIR_Done,
      // Label 631: @18998
      GIM_Try, /*On fail goto*//*Label 632*/ 19042, // Rule ID 368 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vsum4ubs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 6383:{ *:[iPTR] }, v16i8:{ *:[v16i8] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VSUM4UBS:{ *:[v4i32] } v16i8:{ *:[v16i8] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VSUM4UBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 368,
        GIR_Done,
      // Label 632: @19042
      GIM_Try, /*On fail goto*//*Label 633*/ 19086, // Rule ID 395 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkshss,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v16i8] } 6318:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VPKSHSS:{ *:[v16i8] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKSHSS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 395,
        GIR_Done,
      // Label 633: @19086
      GIM_Try, /*On fail goto*//*Label 634*/ 19130, // Rule ID 396 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkshus,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v16i8] } 6319:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VPKSHUS:{ *:[v16i8] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKSHUS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 396,
        GIR_Done,
      // Label 634: @19130
      GIM_Try, /*On fail goto*//*Label 635*/ 19174, // Rule ID 397 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkswss,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v8i16] } 6320:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VPKSWSS:{ *:[v8i16] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKSWSS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 397,
        GIR_Done,
      // Label 635: @19174
      GIM_Try, /*On fail goto*//*Label 636*/ 19218, // Rule ID 398 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkswus,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v8i16] } 6321:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VPKSWUS:{ *:[v8i16] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKSWUS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 398,
        GIR_Done,
      // Label 636: @19218
      GIM_Try, /*On fail goto*//*Label 637*/ 19262, // Rule ID 399 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkuhus,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s8,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v16i8] } 6323:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)  =>  (VPKUHUS:{ *:[v16i8] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKUHUS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 399,
        GIR_Done,
      // Label 637: @19262
      GIM_Try, /*On fail goto*//*Label 638*/ 19306, // Rule ID 400 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkuwus,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v8i16] } 6324:{ *:[iPTR] }, v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VPKUWUS:{ *:[v8i16] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKUWUS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 400,
        GIR_Done,
      // Label 638: @19306
      GIM_Try, /*On fail goto*//*Label 639*/ 19350, // Rule ID 484 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpksdss,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 6316:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VPKSDSS:{ *:[v4i32] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKSDSS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 484,
        GIR_Done,
      // Label 639: @19350
      GIM_Try, /*On fail goto*//*Label 640*/ 19394, // Rule ID 485 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpksdus,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 6317:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VPKSDUS:{ *:[v4i32] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKSDUS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 485,
        GIR_Done,
      // Label 640: @19394
      GIM_Try, /*On fail goto*//*Label 641*/ 19438, // Rule ID 486 //
        GIM_CheckFeatures, GIFBS_HasP8Altivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vpkudus,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 6322:{ *:[iPTR] }, v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VPKUDUS:{ *:[v4i32] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VPKUDUS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 486,
        GIR_Done,
      // Label 641: @19438
      GIM_Reject,
    // Label 619: @19439
    GIM_Try, /*On fail goto*//*Label 642*/ 19653,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_Try, /*On fail goto*//*Label 643*/ 19496, // Rule ID 278 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmhaddshs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v8i16] } 6271:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v8i16:{ *:[v8i16] }:$vC)  =>  (VMHADDSHS:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v8i16:{ *:[v8i16] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMHADDSHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 278,
        GIR_Done,
      // Label 643: @19496
      GIM_Try, /*On fail goto*//*Label 644*/ 19548, // Rule ID 279 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmhraddshs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v8s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v8i16] } 6272:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v8i16:{ *:[v8i16] }:$vC)  =>  (VMHRADDSHS:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v8i16:{ *:[v8i16] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMHRADDSHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 279,
        GIR_Done,
      // Label 644: @19548
      GIM_Try, /*On fail goto*//*Label 645*/ 19600, // Rule ID 337 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumshs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 6286:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VMSUMSHS:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMSHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 337,
        GIR_Done,
      // Label 645: @19600
      GIM_Try, /*On fail goto*//*Label 646*/ 19652, // Rule ID 338 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::ppc_altivec_vmsumuhs,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v8s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (intrinsic_w_chain:{ *:[v4i32] } 6290:{ *:[iPTR] }, v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)  =>  (VMSUMUHS:{ *:[v4i32] } v8i16:{ *:[v8i16] }:$vA, v8i16:{ *:[v8i16] }:$vB, v4i32:{ *:[v4i32] }:$vC)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VMSUMUHS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vB
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vC
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 338,
        GIR_Done,
      // Label 646: @19652
      GIM_Reject,
    // Label 642: @19653
    GIM_Reject,
    // Label 18: @19654
    GIM_Try, /*On fail goto*//*Label 647*/ 19793,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s1,
      GIM_SwitchType, /*MI*/0, /*Op*/1, /*[*/1, 3, /*)*//*default:*//*Label 650*/ 19756,
      /*GILLT_s32*//*Label 648*/ 19668,
      /*GILLT_s64*//*Label 649*/ 19712,
      // Label 648: @19668
      GIM_Try, /*On fail goto*//*Label 651*/ 19711, // Rule ID 1110 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (trunc:{ *:[i1] } (xor:{ *:[i32] } i32:{ *:[i32] }:$in, -1:{ *:[i32] }))  =>  (ANDI_rec_1_EQ_BIT:{ *:[i1] } i32:{ *:[i32] }:$in)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ANDI_rec_1_EQ_BIT,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // in
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1110,
        GIR_Done,
      // Label 651: @19711
      GIM_Reject,
      // Label 649: @19712
      GIM_Try, /*On fail goto*//*Label 652*/ 19755, // Rule ID 1112 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_XOR,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckConstantInt, /*MI*/1, /*Op*/2, -1,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (trunc:{ *:[i1] } (xor:{ *:[i64] } i64:{ *:[i64] }:$in, -1:{ *:[i64] }))  =>  (ANDI_rec_1_EQ_BIT8:{ *:[i1] } i64:{ *:[i64] }:$in)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::ANDI_rec_1_EQ_BIT8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // in
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1112,
        GIR_Done,
      // Label 652: @19755
      GIM_Reject,
      // Label 650: @19756
      GIM_SwitchType, /*MI*/0, /*Op*/1, /*[*/1, 3, /*)*//*default:*//*Label 655*/ 19792,
      /*GILLT_s32*//*Label 653*/ 19764,
      /*GILLT_s64*//*Label 654*/ 19778,
      // Label 653: @19764
      GIM_Try, /*On fail goto*//*Label 656*/ 19777, // Rule ID 1111 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
        // (trunc:{ *:[i1] } i32:{ *:[i32] }:$in)  =>  (ANDI_rec_1_GT_BIT:{ *:[i1] } i32:{ *:[i32] }:$in)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::ANDI_rec_1_GT_BIT,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1111,
        GIR_Done,
      // Label 656: @19777
      GIM_Reject,
      // Label 654: @19778
      GIM_Try, /*On fail goto*//*Label 657*/ 19791, // Rule ID 1113 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
        // (trunc:{ *:[i1] } i64:{ *:[i64] }:$in)  =>  (ANDI_rec_1_GT_BIT8:{ *:[i1] } i64:{ *:[i64] }:$in)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::ANDI_rec_1_GT_BIT8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1113,
        GIR_Done,
      // Label 657: @19791
      GIM_Reject,
      // Label 655: @19792
      GIM_Reject,
    // Label 647: @19793
    GIM_Reject,
    // Label 19: @19794
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/0, 3, /*)*//*default:*//*Label 661*/ 19915,
    /*GILLT_s1*//*Label 658*/ 19803,
    /*GILLT_s32*//*Label 659*/ 19865,
    /*GILLT_s64*//*Label 660*/ 19890,
    // Label 658: @19803
    GIM_Try, /*On fail goto*//*Label 662*/ 19864,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::CRBITRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 663*/ 19827, // Rule ID 175 //
        // MIs[0] Operand 1
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/1, 1,
        // 1:{ *:[i1] }  =>  (CRSET:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRSET,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 175,
        GIR_Done,
      // Label 663: @19827
      GIM_Try, /*On fail goto*//*Label 664*/ 19845, // Rule ID 176 //
        // MIs[0] Operand 1
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/1, 0,
        // 0:{ *:[i1] }  =>  (CRUNSET:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRUNSET,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 176,
        GIR_Done,
      // Label 664: @19845
      GIM_Try, /*On fail goto*//*Label 665*/ 19863, // Rule ID 3028 //
        // MIs[0] Operand 1
        GIM_CheckLiteralInt, /*MI*/0, /*Op*/1, -1,
        // -1:{ *:[i1] }  =>  (CRSET:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::CRSET,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 3028,
        GIR_Done,
      // Label 665: @19863
      GIM_Reject,
    // Label 662: @19864
    GIM_Reject,
    // Label 659: @19865
    GIM_Try, /*On fail goto*//*Label 666*/ 19889, // Rule ID 105 //
      GIM_CheckI64ImmPredicate, /*MI*/0, /*Predicate*/GIPFP_I64_Predicate_imm32SExt16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // MIs[0] Operand 1
      // No operand predicates
      // (imm:{ *:[i32] })<<P:Predicate_imm32SExt16>>:$imm  =>  (LI:{ *:[i32] } (imm:{ *:[i32] }):$imm)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::LI,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/0, // imm
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 105,
      GIR_Done,
    // Label 666: @19889
    GIM_Reject,
    // Label 660: @19890
    GIM_Try, /*On fail goto*//*Label 667*/ 19914, // Rule ID 607 //
      GIM_CheckI64ImmPredicate, /*MI*/0, /*Predicate*/GIPFP_I64_Predicate_imm64SExt16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // MIs[0] Operand 1
      // No operand predicates
      // (imm:{ *:[i64] })<<P:Predicate_imm64SExt16>>:$imm  =>  (LI8:{ *:[i64] } (imm:{ *:[i64] }):$imm)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::LI8,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rD
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/0, // imm
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 607,
      GIR_Done,
    // Label 667: @19914
    GIM_Reject,
    // Label 661: @19915
    GIM_Reject,
    // Label 20: @19916
    GIM_Try, /*On fail goto*//*Label 668*/ 19937, // Rule ID 647 //
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (sext:{ *:[i64] } i32:{ *:[i32] }:$rS)  =>  (EXTSW_32_64:{ *:[i64] } i32:{ *:[i32] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EXTSW_32_64,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 647,
      GIR_Done,
    // Label 668: @19937
    GIM_Reject,
    // Label 21: @19938
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 3, /*)*//*default:*//*Label 671*/ 20032,
    /*GILLT_s32*//*Label 669*/ 19946,
    /*GILLT_s64*//*Label 670*/ 19989,
    // Label 669: @19946
    GIM_Try, /*On fail goto*//*Label 672*/ 19988, // Rule ID 124 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 1
      // No operand predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (sra:{ *:[i32] } i32:{ *:[i32] }:$rS, (imm:{ *:[i32] }):$SH)  =>  (SRAWI:{ *:[i32] }:{ *:[i32] } i32:{ *:[i32] }:$rS, (imm:{ *:[i32] }):$SH)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SRAWI,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // SH
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 124,
      GIR_Done,
    // Label 672: @19988
    GIM_Reject,
    // Label 670: @19989
    GIM_Try, /*On fail goto*//*Label 673*/ 20031, // Rule ID 648 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 1
      // No operand predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      // (sra:{ *:[i64] } i64:{ *:[i64] }:$rS, (imm:{ *:[i32] }):$SH)  =>  (SRADI:{ *:[i64] }:{ *:[i32] } i64:{ *:[i64] }:$rS, (imm:{ *:[i32] }):$SH)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::SRADI,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // rA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // rS
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // SH
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 648,
      GIR_Done,
    // Label 673: @20031
    GIM_Reject,
    // Label 671: @20032
    GIM_Reject,
    // Label 22: @20033
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 679*/ 20274,
    /*GILLT_s32*//*Label 674*/ 20044,
    /*GILLT_s64*//*Label 675*/ 20118,
    /*GILLT_s128*//*Label 676*/ 20192,
    /*GILLT_v2s64*//*Label 677*/ 20220,
    /*GILLT_v4s32*//*Label 678*/ 20248,
    // Label 674: @20044
    GIM_Try, /*On fail goto*//*Label 680*/ 20117,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 681*/ 20073, // Rule ID 1003 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (select:{ *:[f32] } i1:{ *:[i1] }:$cond, f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F)  =>  (SELECT_VSSRC:{ *:[f32] } i1:{ *:[i1] }:$cond, f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_VSSRC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1003,
        GIR_Done,
      // Label 681: @20073
      GIM_Try, /*On fail goto*//*Label 682*/ 20086, // Rule ID 5 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (select:{ *:[i32] } i1:{ *:[i1] }:$cond, i32:{ *:[i32] }:$T, i32:{ *:[i32] }:$F)  =>  (SELECT_I4:{ *:[i32] } i1:{ *:[i1] }:$cond, i32:{ *:[i32] }:$T, i32:{ *:[i32] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_I4,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 5,
        GIR_Done,
      // Label 682: @20086
      GIM_Try, /*On fail goto*//*Label 683*/ 20101, // Rule ID 7 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (select:{ *:[f32] } i1:{ *:[i1] }:$cond, f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F)  =>  (SELECT_F4:{ *:[f32] } i1:{ *:[i1] }:$cond, f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_F4,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 7,
        GIR_Done,
      // Label 683: @20101
      GIM_Try, /*On fail goto*//*Label 684*/ 20116, // Rule ID 579 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (select:{ *:[f32] } i1:{ *:[i1] }:$cond, f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F)  =>  (SELECT_SPE4:{ *:[f32] } i1:{ *:[i1] }:$cond, f32:{ *:[f32] }:$T, f32:{ *:[f32] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_SPE4,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 579,
        GIR_Done,
      // Label 684: @20116
      GIM_Reject,
    // Label 680: @20117
    GIM_Reject,
    // Label 675: @20118
    GIM_Try, /*On fail goto*//*Label 685*/ 20191,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 686*/ 20147, // Rule ID 1002 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (select:{ *:[f64] } i1:{ *:[i1] }:$cond, f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F)  =>  (SELECT_VSFRC:{ *:[f64] } i1:{ *:[i1] }:$cond, f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_VSFRC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1002,
        GIR_Done,
      // Label 686: @20147
      GIM_Try, /*On fail goto*//*Label 687*/ 20160, // Rule ID 6 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
        // (select:{ *:[i64] } i1:{ *:[i1] }:$cond, i64:{ *:[i64] }:$T, i64:{ *:[i64] }:$F)  =>  (SELECT_I8:{ *:[i64] } i1:{ *:[i1] }:$cond, i64:{ *:[i64] }:$T, i64:{ *:[i64] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_I8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 6,
        GIR_Done,
      // Label 687: @20160
      GIM_Try, /*On fail goto*//*Label 688*/ 20175, // Rule ID 8 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (select:{ *:[f64] } i1:{ *:[i1] }:$cond, f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F)  =>  (SELECT_F8:{ *:[f64] } i1:{ *:[i1] }:$cond, f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_F8,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 8,
        GIR_Done,
      // Label 688: @20175
      GIM_Try, /*On fail goto*//*Label 689*/ 20190, // Rule ID 580 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (select:{ *:[f64] } i1:{ *:[i1] }:$cond, f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F)  =>  (SELECT_SPE:{ *:[f64] } i1:{ *:[i1] }:$cond, f64:{ *:[f64] }:$T, f64:{ *:[f64] }:$F)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_SPE,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 580,
        GIR_Done,
      // Label 689: @20190
      GIM_Reject,
    // Label 685: @20191
    GIM_Reject,
    // Label 676: @20192
    GIM_Try, /*On fail goto*//*Label 690*/ 20219, // Rule ID 9 //
      GIM_CheckFeatures, GIFBS_HasFPU,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (select:{ *:[f128] } i1:{ *:[i1] }:$cond, f128:{ *:[f128] }:$T, f128:{ *:[f128] }:$F)  =>  (SELECT_F16:{ *:[f128] } i1:{ *:[i1] }:$cond, f128:{ *:[f128] }:$T, f128:{ *:[f128] }:$F)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_F16,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 9,
      GIR_Done,
    // Label 690: @20219
    GIM_Reject,
    // Label 677: @20220
    GIM_Try, /*On fail goto*//*Label 691*/ 20247, // Rule ID 1001 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (select:{ *:[v2f64] } i1:{ *:[i1] }:$cond, v2f64:{ *:[v2f64] }:$T, v2f64:{ *:[v2f64] }:$F)  =>  (SELECT_VSRC:{ *:[v2f64] } i1:{ *:[i1] }:$cond, v2f64:{ *:[v2f64] }:$T, v2f64:{ *:[v2f64] }:$F)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_VSRC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1001,
      GIR_Done,
    // Label 691: @20247
    GIM_Reject,
    // Label 678: @20248
    GIM_Try, /*On fail goto*//*Label 692*/ 20273, // Rule ID 10 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s1,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (select:{ *:[v4i32] } i1:{ *:[i1] }:$cond, v4i32:{ *:[v4i32] }:$T, v4i32:{ *:[v4i32] }:$F)  =>  (SELECT_VRRC:{ *:[v4i32] } i1:{ *:[i1] }:$cond, v4i32:{ *:[v4i32] }:$T, v4i32:{ *:[v4i32] }:$F)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::SELECT_VRRC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 10,
      GIR_Done,
    // Label 692: @20273
    GIM_Reject,
    // Label 679: @20274
    GIM_Reject,
    // Label 23: @20275
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 697*/ 20378,
    /*GILLT_s32*//*Label 693*/ 20286,
    /*GILLT_s64*//*Label 694*/ 20308, 0,
    /*GILLT_v2s64*//*Label 695*/ 20330,
    /*GILLT_v4s32*//*Label 696*/ 20354,
    // Label 693: @20286
    GIM_Try, /*On fail goto*//*Label 698*/ 20307, // Rule ID 194 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (mulhu:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (MULHWU:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MULHWU,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 194,
      GIR_Done,
    // Label 698: @20307
    GIM_Reject,
    // Label 694: @20308
    GIM_Try, /*On fail goto*//*Label 699*/ 20329, // Rule ID 640 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (mulhu:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (MULHDU:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MULHDU,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 640,
      GIR_Done,
    // Label 699: @20329
    GIM_Reject,
    // Label 695: @20330
    GIM_Try, /*On fail goto*//*Label 700*/ 20353, // Rule ID 1077 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (mulhu:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULHUD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMULHUD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1077,
      GIR_Done,
    // Label 700: @20353
    GIM_Reject,
    // Label 696: @20354
    GIM_Try, /*On fail goto*//*Label 701*/ 20377, // Rule ID 1075 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (mulhu:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULHUW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMULHUW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1075,
      GIR_Done,
    // Label 701: @20377
    GIM_Reject,
    // Label 697: @20378
    GIM_Reject,
    // Label 24: @20379
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 706*/ 20482,
    /*GILLT_s32*//*Label 702*/ 20390,
    /*GILLT_s64*//*Label 703*/ 20412, 0,
    /*GILLT_v2s64*//*Label 704*/ 20434,
    /*GILLT_v4s32*//*Label 705*/ 20458,
    // Label 702: @20390
    GIM_Try, /*On fail goto*//*Label 707*/ 20411, // Rule ID 193 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (mulhs:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)  =>  (MULHW:{ *:[i32] } i32:{ *:[i32] }:$rA, i32:{ *:[i32] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MULHW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 193,
      GIR_Done,
    // Label 707: @20411
    GIM_Reject,
    // Label 703: @20412
    GIM_Try, /*On fail goto*//*Label 708*/ 20433, // Rule ID 639 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (mulhs:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)  =>  (MULHD:{ *:[i64] } i64:{ *:[i64] }:$rA, i64:{ *:[i64] }:$rB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::MULHD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 639,
      GIR_Done,
    // Label 708: @20433
    GIM_Reject,
    // Label 704: @20434
    GIM_Try, /*On fail goto*//*Label 709*/ 20457, // Rule ID 1076 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (mulhs:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)  =>  (VMULHSD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vA, v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMULHSD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1076,
      GIR_Done,
    // Label 709: @20457
    GIM_Reject,
    // Label 705: @20458
    GIM_Try, /*On fail goto*//*Label 710*/ 20481, // Rule ID 1074 //
      GIM_CheckFeatures, GIFBS_IsISA3_1,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (mulhs:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)  =>  (VMULHSW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vA, v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMULHSW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1074,
      GIR_Done,
    // Label 710: @20481
    GIM_Reject,
    // Label 706: @20482
    GIM_Reject,
    // Label 25: @20483
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 716*/ 20713,
    /*GILLT_s32*//*Label 711*/ 20494,
    /*GILLT_s64*//*Label 712*/ 20554,
    /*GILLT_s128*//*Label 713*/ 20617,
    /*GILLT_v2s64*//*Label 714*/ 20641,
    /*GILLT_v4s32*//*Label 715*/ 20668,
    // Label 711: @20494
    GIM_Try, /*On fail goto*//*Label 717*/ 20553,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 718*/ 20519, // Rule ID 909 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fadd:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSADDSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSADDSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 909,
        GIR_Done,
      // Label 718: @20519
      GIM_Try, /*On fail goto*//*Label 719*/ 20537, // Rule ID 226 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fadd:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)  =>  (FADDS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FADDS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 226,
        GIR_Done,
      // Label 719: @20537
      GIM_Try, /*On fail goto*//*Label 720*/ 20552, // Rule ID 556 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fadd:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)  =>  (EFSADD:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSADD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 556,
        GIR_Done,
      // Label 720: @20552
      GIM_Reject,
    // Label 717: @20553
    GIM_Reject,
    // Label 712: @20554
    GIM_Try, /*On fail goto*//*Label 721*/ 20616,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 722*/ 20582, // Rule ID 726 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fadd:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSADDDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSADDDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 726,
        GIR_Done,
      // Label 722: @20582
      GIM_Try, /*On fail goto*//*Label 723*/ 20600, // Rule ID 224 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fadd:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)  =>  (FADD:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FADD,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 224,
        GIR_Done,
      // Label 723: @20600
      GIM_Try, /*On fail goto*//*Label 724*/ 20615, // Rule ID 540 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (fadd:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)  =>  (EFDADD:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDADD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 540,
        GIR_Done,
      // Label 724: @20615
      GIM_Reject,
    // Label 721: @20616
    GIM_Reject,
    // Label 713: @20617
    GIM_Try, /*On fail goto*//*Label 725*/ 20640, // Rule ID 944 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fadd:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSADDQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSADDQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 944,
      GIR_Done,
    // Label 725: @20640
    GIM_Reject,
    // Label 714: @20641
    GIM_Try, /*On fail goto*//*Label 726*/ 20667, // Rule ID 730 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fadd:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVADDDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVADDDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 730,
      GIR_Done,
    // Label 726: @20667
    GIM_Reject,
    // Label 715: @20668
    GIM_Try, /*On fail goto*//*Label 727*/ 20712,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 728*/ 20696, // Rule ID 732 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (fadd:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVADDSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVADDSP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 732,
        GIR_Done,
      // Label 728: @20696
      GIM_Try, /*On fail goto*//*Label 729*/ 20711, // Rule ID 284 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (fadd:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)  =>  (VADDFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VADDFP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 284,
        GIR_Done,
      // Label 729: @20711
      GIM_Reject,
    // Label 727: @20712
    GIM_Reject,
    // Label 716: @20713
    GIM_Reject,
    // Label 26: @20714
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 735*/ 20944,
    /*GILLT_s32*//*Label 730*/ 20725,
    /*GILLT_s64*//*Label 731*/ 20785,
    /*GILLT_s128*//*Label 732*/ 20848,
    /*GILLT_v2s64*//*Label 733*/ 20872,
    /*GILLT_v4s32*//*Label 734*/ 20899,
    // Label 730: @20725
    GIM_Try, /*On fail goto*//*Label 736*/ 20784,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 737*/ 20750, // Rule ID 913 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fsub:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSSUBSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSUBSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 913,
        GIR_Done,
      // Label 737: @20750
      GIM_Try, /*On fail goto*//*Label 738*/ 20768, // Rule ID 238 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fsub:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)  =>  (FSUBS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSUBS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 238,
        GIR_Done,
      // Label 738: @20768
      GIM_Try, /*On fail goto*//*Label 739*/ 20783, // Rule ID 570 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fsub:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)  =>  (EFSSUB:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSSUB,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 570,
        GIR_Done,
      // Label 739: @20783
      GIM_Reject,
    // Label 736: @20784
    GIM_Reject,
    // Label 731: @20785
    GIM_Try, /*On fail goto*//*Label 740*/ 20847,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 741*/ 20813, // Rule ID 738 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fsub:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSSUBDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSUBDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 738,
        GIR_Done,
      // Label 741: @20813
      GIM_Try, /*On fail goto*//*Label 742*/ 20831, // Rule ID 236 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fsub:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)  =>  (FSUB:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSUB,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 236,
        GIR_Done,
      // Label 742: @20831
      GIM_Try, /*On fail goto*//*Label 743*/ 20846, // Rule ID 554 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (fsub:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)  =>  (EFDSUB:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDSUB,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 554,
        GIR_Done,
      // Label 743: @20846
      GIM_Reject,
    // Label 740: @20847
    GIM_Reject,
    // Label 732: @20848
    GIM_Try, /*On fail goto*//*Label 744*/ 20871, // Rule ID 948 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fsub:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSSUBQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSUBQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 948,
      GIR_Done,
    // Label 744: @20871
    GIM_Reject,
    // Label 733: @20872
    GIM_Try, /*On fail goto*//*Label 745*/ 20898, // Rule ID 740 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fsub:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVSUBDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSUBDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 740,
      GIR_Done,
    // Label 745: @20898
    GIM_Reject,
    // Label 734: @20899
    GIM_Try, /*On fail goto*//*Label 746*/ 20943,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 747*/ 20927, // Rule ID 742 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (fsub:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVSUBSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSUBSP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 742,
        GIR_Done,
      // Label 747: @20927
      GIM_Try, /*On fail goto*//*Label 748*/ 20942, // Rule ID 354 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (fsub:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)  =>  (VSUBFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VSUBFP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 354,
        GIR_Done,
      // Label 748: @20942
      GIM_Reject,
    // Label 746: @20943
    GIM_Reject,
    // Label 735: @20944
    GIM_Reject,
    // Label 27: @20945
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 754*/ 21157,
    /*GILLT_s32*//*Label 749*/ 20956,
    /*GILLT_s64*//*Label 750*/ 21016,
    /*GILLT_s128*//*Label 751*/ 21079,
    /*GILLT_v2s64*//*Label 752*/ 21103,
    /*GILLT_v4s32*//*Label 753*/ 21130,
    // Label 749: @20956
    GIM_Try, /*On fail goto*//*Label 755*/ 21015,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 756*/ 20981, // Rule ID 911 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fmul:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSMULSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSMULSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 911,
        GIR_Done,
      // Label 756: @20981
      GIM_Try, /*On fail goto*//*Label 757*/ 20999, // Rule ID 234 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fmul:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC)  =>  (FMULS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMULS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 234,
        GIR_Done,
      // Label 757: @20999
      GIM_Try, /*On fail goto*//*Label 758*/ 21014, // Rule ID 567 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fmul:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)  =>  (EFSMUL:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSMUL,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 567,
        GIR_Done,
      // Label 758: @21014
      GIM_Reject,
    // Label 755: @21015
    GIM_Reject,
    // Label 750: @21016
    GIM_Try, /*On fail goto*//*Label 759*/ 21078,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 760*/ 21044, // Rule ID 728 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fmul:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSMULDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSMULDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 728,
        GIR_Done,
      // Label 760: @21044
      GIM_Try, /*On fail goto*//*Label 761*/ 21062, // Rule ID 232 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fmul:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC)  =>  (FMUL:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMUL,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 232,
        GIR_Done,
      // Label 761: @21062
      GIM_Try, /*On fail goto*//*Label 762*/ 21077, // Rule ID 551 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (fmul:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)  =>  (EFDMUL:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDMUL,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 551,
        GIR_Done,
      // Label 762: @21077
      GIM_Reject,
    // Label 759: @21078
    GIM_Reject,
    // Label 751: @21079
    GIM_Try, /*On fail goto*//*Label 763*/ 21102, // Rule ID 946 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fmul:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSMULQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSMULQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 946,
      GIR_Done,
    // Label 763: @21102
    GIM_Reject,
    // Label 752: @21103
    GIM_Try, /*On fail goto*//*Label 764*/ 21129, // Rule ID 734 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fmul:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVMULDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVMULDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 734,
      GIR_Done,
    // Label 764: @21129
    GIM_Reject,
    // Label 753: @21130
    GIM_Try, /*On fail goto*//*Label 765*/ 21156, // Rule ID 736 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fmul:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVMULSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVMULSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 736,
      GIR_Done,
    // Label 765: @21156
    GIM_Reject,
    // Label 754: @21157
    GIM_Reject,
    // Label 28: @21158
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 771*/ 21767,
    /*GILLT_s32*//*Label 766*/ 21169,
    /*GILLT_s64*//*Label 767*/ 21325,
    /*GILLT_s128*//*Label 768*/ 21481,
    /*GILLT_v2s64*//*Label 769*/ 21570,
    /*GILLT_v4s32*//*Label 770*/ 21659,
    // Label 766: @21169
    GIM_Try, /*On fail goto*//*Label 772*/ 21324,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 773*/ 21228, // Rule ID 925 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, (fneg:{ *:[f32] } f32:{ *:[f32] }:$XTi))  =>  (XSMSUBASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 925,
        GIR_Done,
      // Label 773: @21228
      GIM_Try, /*On fail goto*//*Label 774*/ 21260, // Rule ID 923 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, f32:{ *:[f32] }:$XTi)  =>  (XSMADDASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 923,
        GIR_Done,
      // Label 774: @21260
      GIM_Try, /*On fail goto*//*Label 775*/ 21305, // Rule ID 212 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, (fneg:{ *:[f32] } f32:{ *:[f32] }:$FRB))  =>  (FMSUBS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FMSUBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 212,
        GIR_Done,
      // Label 775: @21305
      GIM_Try, /*On fail goto*//*Label 776*/ 21323, // Rule ID 208 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)  =>  (FMADDS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMADDS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 208,
        GIR_Done,
      // Label 776: @21323
      GIM_Reject,
    // Label 772: @21324
    GIM_Reject,
    // Label 767: @21325
    GIM_Try, /*On fail goto*//*Label 777*/ 21480,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 778*/ 21384, // Rule ID 746 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, (fneg:{ *:[f64] } f64:{ *:[f64] }:$XTi))  =>  (XSMSUBADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 746,
        GIR_Done,
      // Label 778: @21384
      GIM_Try, /*On fail goto*//*Label 779*/ 21416, // Rule ID 744 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, f64:{ *:[f64] }:$XTi)  =>  (XSMADDADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 744,
        GIR_Done,
      // Label 779: @21416
      GIM_Try, /*On fail goto*//*Label 780*/ 21461, // Rule ID 210 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, (fneg:{ *:[f64] } f64:{ *:[f64] }:$FRB))  =>  (FMSUB:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FMSUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 210,
        GIR_Done,
      // Label 780: @21461
      GIM_Try, /*On fail goto*//*Label 781*/ 21479, // Rule ID 206 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)  =>  (FMADD:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMADD,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 206,
        GIR_Done,
      // Label 781: @21479
      GIM_Reject,
    // Label 777: @21480
    GIM_Reject,
    // Label 768: @21481
    GIM_Try, /*On fail goto*//*Label 782*/ 21569,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 783*/ 21540, // Rule ID 956 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, (fneg:{ *:[f128] } f128:{ *:[f128] }:$vTi))  =>  (XSMSUBQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 956,
        GIR_Done,
      // Label 783: @21540
      GIM_Try, /*On fail goto*//*Label 784*/ 21568, // Rule ID 954 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        // (fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vTi)  =>  (XSMADDQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 954,
        GIR_Done,
      // Label 784: @21568
      GIM_Reject,
    // Label 782: @21569
    GIM_Reject,
    // Label 769: @21570
    GIM_Try, /*On fail goto*//*Label 785*/ 21658,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 786*/ 21629, // Rule ID 756 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, (fneg:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi))  =>  (XVMSUBADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 756,
        GIR_Done,
      // Label 786: @21629
      GIM_Try, /*On fail goto*//*Label 787*/ 21657, // Rule ID 752 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        // (fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, v2f64:{ *:[v2f64] }:$XTi)  =>  (XVMADDADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 752,
        GIR_Done,
      // Label 787: @21657
      GIM_Reject,
    // Label 785: @21658
    GIM_Reject,
    // Label 770: @21659
    GIM_Try, /*On fail goto*//*Label 788*/ 21766,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 789*/ 21718, // Rule ID 758 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, (fneg:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi))  =>  (XVMSUBASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 758,
        GIR_Done,
      // Label 789: @21718
      GIM_Try, /*On fail goto*//*Label 790*/ 21750, // Rule ID 754 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, v4f32:{ *:[v4f32] }:$XTi)  =>  (XVMADDASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 754,
        GIR_Done,
      // Label 790: @21750
      GIM_Try, /*On fail goto*//*Label 791*/ 21765, // Rule ID 276 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        // (fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vC, v4f32:{ *:[v4f32] }:$vB)  =>  (VMADDFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vC, v4f32:{ *:[v4f32] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VMADDFP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 276,
        GIR_Done,
      // Label 791: @21765
      GIM_Reject,
    // Label 788: @21766
    GIM_Reject,
    // Label 771: @21767
    GIM_Reject,
    // Label 29: @21768
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 797*/ 21980,
    /*GILLT_s32*//*Label 792*/ 21779,
    /*GILLT_s64*//*Label 793*/ 21839,
    /*GILLT_s128*//*Label 794*/ 21902,
    /*GILLT_v2s64*//*Label 795*/ 21926,
    /*GILLT_v4s32*//*Label 796*/ 21953,
    // Label 792: @21779
    GIM_Try, /*On fail goto*//*Label 798*/ 21838,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 799*/ 21804, // Rule ID 915 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fdiv:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSDIVSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSDIVSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 915,
        GIR_Done,
      // Label 799: @21804
      GIM_Try, /*On fail goto*//*Label 800*/ 21822, // Rule ID 230 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fdiv:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)  =>  (FDIVS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FDIVS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 230,
        GIR_Done,
      // Label 800: @21822
      GIM_Try, /*On fail goto*//*Label 801*/ 21837, // Rule ID 566 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fdiv:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)  =>  (EFSDIV:{ *:[f32] } f32:{ *:[f32] }:$RA, f32:{ *:[f32] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSDIV,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 566,
        GIR_Done,
      // Label 801: @21837
      GIM_Reject,
    // Label 798: @21838
    GIM_Reject,
    // Label 793: @21839
    GIM_Try, /*On fail goto*//*Label 802*/ 21901,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 803*/ 21867, // Rule ID 767 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fdiv:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSDIVDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSDIVDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 767,
        GIR_Done,
      // Label 803: @21867
      GIM_Try, /*On fail goto*//*Label 804*/ 21885, // Rule ID 228 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fdiv:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)  =>  (FDIV:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FDIV,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 228,
        GIR_Done,
      // Label 804: @21885
      GIM_Try, /*On fail goto*//*Label 805*/ 21900, // Rule ID 550 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (fdiv:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)  =>  (EFDDIV:{ *:[f64] } f64:{ *:[f64] }:$RA, f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDDIV,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 550,
        GIR_Done,
      // Label 805: @21900
      GIM_Reject,
    // Label 802: @21901
    GIM_Reject,
    // Label 794: @21902
    GIM_Try, /*On fail goto*//*Label 806*/ 21925, // Rule ID 950 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fdiv:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSDIVQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSDIVQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 950,
      GIR_Done,
    // Label 806: @21925
    GIM_Reject,
    // Label 795: @21926
    GIM_Try, /*On fail goto*//*Label 807*/ 21952, // Rule ID 776 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fdiv:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVDIVDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVDIVDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 776,
      GIR_Done,
    // Label 807: @21952
    GIM_Reject,
    // Label 796: @21953
    GIM_Try, /*On fail goto*//*Label 808*/ 21979, // Rule ID 778 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fdiv:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVDIVSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVDIVSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 778,
      GIR_Done,
    // Label 808: @21979
    GIM_Reject,
    // Label 797: @21980
    GIM_Reject,
    // Label 30: @21981
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 814*/ 24221,
    /*GILLT_s32*//*Label 809*/ 21992,
    /*GILLT_s64*//*Label 810*/ 22580,
    /*GILLT_s128*//*Label 811*/ 23223,
    /*GILLT_v2s64*//*Label 812*/ 23626,
    /*GILLT_v4s32*//*Label 813*/ 23907,
    // Label 809: @21992
    GIM_Try, /*On fail goto*//*Label 815*/ 22579,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 816*/ 22064, // Rule ID 929 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f32] } (fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, (fneg:{ *:[f32] } f32:{ *:[f32] }:$XTi)))  =>  (XSNMSUBASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 929,
        GIR_Done,
      // Label 816: @22064
      GIM_Try, /*On fail goto*//*Label 817*/ 22130, // Rule ID 928 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f32] } (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, (fneg:{ *:[f32] } f32:{ *:[f32] }:$XTi)))  =>  (XSNMSUBASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 928,
        GIR_Done,
      // Label 817: @22130
      GIM_Try, /*On fail goto*//*Label 818*/ 22183, // Rule ID 927 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f32] } (fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, f32:{ *:[f32] }:$XTi))  =>  (XSNMADDASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 927,
        GIR_Done,
      // Label 818: @22183
      GIM_Try, /*On fail goto*//*Label 819*/ 22236, // Rule ID 926 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f32] } (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, f32:{ *:[f32] }:$XTi))  =>  (XSNMADDASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 926,
        GIR_Done,
      // Label 819: @22236
      GIM_Try, /*On fail goto*//*Label 820*/ 22302, // Rule ID 220 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f32] } (fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, (fneg:{ *:[f32] } f32:{ *:[f32] }:$FRB)))  =>  (FNMSUBS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMSUBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 220,
        GIR_Done,
      // Label 820: @22302
      GIM_Try, /*On fail goto*//*Label 821*/ 22368, // Rule ID 219 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f32] } (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, (fneg:{ *:[f32] } f32:{ *:[f32] }:$FRB)))  =>  (FNMSUBS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMSUBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 219,
        GIR_Done,
      // Label 821: @22368
      GIM_Try, /*On fail goto*//*Label 822*/ 22421, // Rule ID 216 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f32] } (fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB))  =>  (FNMADDS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMADDS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 216,
        GIR_Done,
      // Label 822: @22421
      GIM_Try, /*On fail goto*//*Label 823*/ 22474, // Rule ID 215 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f32] } (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB))  =>  (FNMADDS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMADDS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 215,
        GIR_Done,
      // Label 823: @22474
      GIM_Try, /*On fail goto*//*Label 824*/ 22511, // Rule ID 157 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f32] } (fabs:{ *:[f32] } f32:{ *:[f32] }:$frB))  =>  (FNABSS:{ *:[f32] } f32:{ *:[f32] }:$frB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNABSS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // frD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // frB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 157,
        GIR_Done,
      // Label 824: @22511
      GIM_Try, /*On fail goto*//*Label 825*/ 22548, // Rule ID 568 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f32] } (fabs:{ *:[f32] } f32:{ *:[f32] }:$RA))  =>  (EFSNABS:{ *:[f32] } f32:{ *:[f32] }:$RA)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EFSNABS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // RA
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 568,
        GIR_Done,
      // Label 825: @22548
      GIM_Try, /*On fail goto*//*Label 826*/ 22563, // Rule ID 159 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fneg:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FNEGS:{ *:[f32] } f32:{ *:[f32] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FNEGS,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 159,
        GIR_Done,
      // Label 826: @22563
      GIM_Try, /*On fail goto*//*Label 827*/ 22578, // Rule ID 569 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fneg:{ *:[f32] } f32:{ *:[f32] }:$RA)  =>  (EFSNEG:{ *:[f32] } f32:{ *:[f32] }:$RA)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSNEG,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 569,
        GIR_Done,
      // Label 827: @22578
      GIM_Reject,
    // Label 815: @22579
    GIM_Reject,
    // Label 810: @22580
    GIM_Try, /*On fail goto*//*Label 828*/ 23222,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 829*/ 22652, // Rule ID 750 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f64] } (fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, (fneg:{ *:[f64] } f64:{ *:[f64] }:$XTi)))  =>  (XSNMSUBADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 750,
        GIR_Done,
      // Label 829: @22652
      GIM_Try, /*On fail goto*//*Label 830*/ 22718, // Rule ID 749 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f64] } (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, (fneg:{ *:[f64] } f64:{ *:[f64] }:$XTi)))  =>  (XSNMSUBADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 749,
        GIR_Done,
      // Label 830: @22718
      GIM_Try, /*On fail goto*//*Label 831*/ 22771, // Rule ID 748 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, f64:{ *:[f64] }:$XTi))  =>  (XSNMADDADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 748,
        GIR_Done,
      // Label 831: @22771
      GIM_Try, /*On fail goto*//*Label 832*/ 22824, // Rule ID 747 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, f64:{ *:[f64] }:$XTi))  =>  (XSNMADDADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 747,
        GIR_Done,
      // Label 832: @22824
      GIM_Try, /*On fail goto*//*Label 833*/ 22861, // Rule ID 800 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (fabs:{ *:[f64] } f64:{ *:[f64] }:$XB))  =>  (XSNABSDP:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNABSDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 800,
        GIR_Done,
      // Label 833: @22861
      GIM_Try, /*On fail goto*//*Label 834*/ 22879, // Rule ID 801 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fneg:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSNEGDP:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSNEGDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 801,
        GIR_Done,
      // Label 834: @22879
      GIM_Try, /*On fail goto*//*Label 835*/ 22945, // Rule ID 218 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f64] } (fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, (fneg:{ *:[f64] } f64:{ *:[f64] }:$FRB)))  =>  (FNMSUB:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMSUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 218,
        GIR_Done,
      // Label 835: @22945
      GIM_Try, /*On fail goto*//*Label 836*/ 23011, // Rule ID 217 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f64] } (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, (fneg:{ *:[f64] } f64:{ *:[f64] }:$FRB)))  =>  (FNMSUB:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMSUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 217,
        GIR_Done,
      // Label 836: @23011
      GIM_Try, /*On fail goto*//*Label 837*/ 23064, // Rule ID 214 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB))  =>  (FNMADD:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMADD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 214,
        GIR_Done,
      // Label 837: @23064
      GIM_Try, /*On fail goto*//*Label 838*/ 23117, // Rule ID 213 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB))  =>  (FNMADD:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNMADD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 213,
        GIR_Done,
      // Label 838: @23117
      GIM_Try, /*On fail goto*//*Label 839*/ 23154, // Rule ID 158 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (fabs:{ *:[f64] } f64:{ *:[f64] }:$frB))  =>  (FNABSD:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FNABSD,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // frD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // frB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 158,
        GIR_Done,
      // Label 839: @23154
      GIM_Try, /*On fail goto*//*Label 840*/ 23191, // Rule ID 552 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f64] } (fabs:{ *:[f64] } f64:{ *:[f64] }:$RA))  =>  (EFDNABS:{ *:[f64] } f64:{ *:[f64] }:$RA)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::EFDNABS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // RT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // RA
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 552,
        GIR_Done,
      // Label 840: @23191
      GIM_Try, /*On fail goto*//*Label 841*/ 23206, // Rule ID 160 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fneg:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FNEGD:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FNEGD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 160,
        GIR_Done,
      // Label 841: @23206
      GIM_Try, /*On fail goto*//*Label 842*/ 23221, // Rule ID 553 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (fneg:{ *:[f64] } f64:{ *:[f64] }:$RA)  =>  (EFDNEG:{ *:[f64] } f64:{ *:[f64] }:$RA)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDNEG,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 553,
        GIR_Done,
      // Label 842: @23221
      GIM_Reject,
    // Label 828: @23222
    GIM_Reject,
    // Label 811: @23223
    GIM_Try, /*On fail goto*//*Label 843*/ 23625,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 844*/ 23302, // Rule ID 969 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_INTRINSIC,
        GIM_CheckNumOperands, /*MI*/1, /*Expected*/5,
        GIM_CheckIntrinsicID, /*MI*/1, /*Op*/1, Intrinsic::ppc_fmaf128_round_to_odd,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/4, /*Type*/GILLT_s128,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/4, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f128] } (intrinsic_wo_chain:{ *:[f128] } 6421:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, (fneg:{ *:[f128] } f128:{ *:[f128] }:$vTi)))  =>  (XSNMSUBQPO:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 969,
        GIR_Done,
      // Label 844: @23302
      GIM_Try, /*On fail goto*//*Label 845*/ 23358, // Rule ID 968 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_INTRINSIC,
        GIM_CheckNumOperands, /*MI*/1, /*Expected*/5,
        GIM_CheckIntrinsicID, /*MI*/1, /*Op*/1, Intrinsic::ppc_fmaf128_round_to_odd,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/4, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f128] } (intrinsic_wo_chain:{ *:[f128] } 6421:{ *:[iPTR] }, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vTi))  =>  (XSNMADDQPO:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDQPO,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/4, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 968,
        GIR_Done,
      // Label 845: @23358
      GIM_Try, /*On fail goto*//*Label 846*/ 23420, // Rule ID 960 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s128,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f128] } (fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, (fneg:{ *:[f128] } f128:{ *:[f128] }:$vTi)))  =>  (XSNMSUBQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 960,
        GIR_Done,
      // Label 846: @23420
      GIM_Try, /*On fail goto*//*Label 847*/ 23482, // Rule ID 959 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s128,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[f128] } (strict_fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, (fneg:{ *:[f128] } f128:{ *:[f128] }:$vTi)))  =>  (XSNMSUBQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMSUBQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 959,
        GIR_Done,
      // Label 847: @23482
      GIM_Try, /*On fail goto*//*Label 848*/ 23531, // Rule ID 958 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f128] } (fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vTi))  =>  (XSNMADDQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 958,
        GIR_Done,
      // Label 848: @23531
      GIM_Try, /*On fail goto*//*Label 849*/ 23580, // Rule ID 957 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s128,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f128] } (strict_fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vTi))  =>  (XSNMADDQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNMADDQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 957,
        GIR_Done,
      // Label 849: @23580
      GIM_Try, /*On fail goto*//*Label 850*/ 23613, // Rule ID 941 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[f128] } (fabs:{ *:[f128] } f128:{ *:[f128] }:$vB))  =>  (XSNABSQP:{ *:[f128] } f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSNABSQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 941,
        GIR_Done,
      // Label 850: @23613
      GIM_Try, /*On fail goto*//*Label 851*/ 23624, // Rule ID 942 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        // (fneg:{ *:[f128] } f128:{ *:[f128] }:$vB)  =>  (XSNEGQP:{ *:[f128] } f128:{ *:[f128] }:$vB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSNEGQP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 942,
        GIR_Done,
      // Label 851: @23624
      GIM_Reject,
    // Label 843: @23625
    GIM_Reject,
    // Label 812: @23626
    GIM_Try, /*On fail goto*//*Label 852*/ 23906,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 853*/ 23698, // Rule ID 763 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[v2f64] } (fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, (fneg:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi)))  =>  (XVNMSUBADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 763,
        GIR_Done,
      // Label 853: @23698
      GIM_Try, /*On fail goto*//*Label 854*/ 23760, // Rule ID 762 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[v2f64] } (strict_fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, (fneg:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi)))  =>  (XVNMSUBADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 762,
        GIR_Done,
      // Label 854: @23760
      GIM_Try, /*On fail goto*//*Label 855*/ 23809, // Rule ID 760 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[v2f64] } (fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, v2f64:{ *:[v2f64] }:$XTi))  =>  (XVNMADDADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 760,
        GIR_Done,
      // Label 855: @23809
      GIM_Try, /*On fail goto*//*Label 856*/ 23858, // Rule ID 759 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v2s64,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[v2f64] } (strict_fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, v2f64:{ *:[v2f64] }:$XTi))  =>  (XVNMADDADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 759,
        GIR_Done,
      // Label 856: @23858
      GIM_Try, /*On fail goto*//*Label 857*/ 23891, // Rule ID 807 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[v2f64] } (fabs:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB))  =>  (XVNABSDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNABSDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 807,
        GIR_Done,
      // Label 857: @23891
      GIM_Try, /*On fail goto*//*Label 858*/ 23905, // Rule ID 809 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        // (fneg:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVNEGDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVNEGDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 809,
        GIR_Done,
      // Label 858: @23905
      GIM_Reject,
    // Label 852: @23906
    GIM_Reject,
    // Label 813: @23907
    GIM_Try, /*On fail goto*//*Label 859*/ 24220,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_Try, /*On fail goto*//*Label 860*/ 23979, // Rule ID 765 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[v4f32] } (fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, (fneg:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi)))  =>  (XVNMSUBASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 765,
        GIR_Done,
      // Label 860: @23979
      GIM_Try, /*On fail goto*//*Label 861*/ 24045, // Rule ID 764 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_STRICT_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[v4f32] } (strict_fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, (fneg:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi)))  =>  (XVNMSUBASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 764,
        GIR_Done,
      // Label 861: @24045
      GIM_Try, /*On fail goto*//*Label 862*/ 24098, // Rule ID 761 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[v4f32] } (fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, v4f32:{ *:[v4f32] }:$XTi))  =>  (XVNMADDASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 761,
        GIR_Done,
      // Label 862: @24098
      GIM_Try, /*On fail goto*//*Label 863*/ 24135, // Rule ID 808 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FABS,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (fneg:{ *:[v4f32] } (fabs:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB))  =>  (XVNABSSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVNABSSP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 808,
        GIR_Done,
      // Label 863: @24135
      GIM_Try, /*On fail goto*//*Label 864*/ 24153, // Rule ID 810 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
        // (fneg:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVNEGSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVNEGSP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 810,
        GIR_Done,
      // Label 864: @24153
      GIM_Try, /*On fail goto*//*Label 865*/ 24219, // Rule ID 277 //
        GIM_CheckFeatures, GIFBS_HasAltivec,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FMA,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/1, /*Op*/3, /*Type*/GILLT_v4s32,
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/3, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        // (fneg:{ *:[v4f32] } (fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vC, (fneg:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vB)))  =>  (VNMSUBFP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vA, v4f32:{ *:[v4f32] }:$vC, v4f32:{ *:[v4f32] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::VNMSUBFP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // vC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 277,
        GIR_Done,
      // Label 865: @24219
      GIM_Reject,
    // Label 859: @24220
    GIM_Reject,
    // Label 814: @24221
    GIM_Reject,
    // Label 31: @24222
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/2, 4, /*)*//*default:*//*Label 868*/ 24270,
    /*GILLT_s64*//*Label 866*/ 24230,
    /*GILLT_s128*//*Label 867*/ 24250,
    // Label 866: @24230
    GIM_Try, /*On fail goto*//*Label 869*/ 24249, // Rule ID 541 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
      // (fpextend:{ *:[f64] } f32:{ *:[f32] }:$RB)  =>  (EFDCFS:{ *:[f64] } f32:{ *:[f32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDCFS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 541,
      GIR_Done,
    // Label 869: @24249
    GIM_Reject,
    // Label 867: @24250
    GIM_Try, /*On fail goto*//*Label 870*/ 24269, // Rule ID 971 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fpextend:{ *:[f128] } f64:{ *:[f64] }:$vB)  =>  (XSCVDPQP:{ *:[f128] } f64:{ *:[f64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSCVDPQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 971,
      GIR_Done,
    // Label 870: @24269
    GIM_Reject,
    // Label 868: @24270
    GIM_Reject,
    // Label 32: @24271
    GIM_Try, /*On fail goto*//*Label 871*/ 24330,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 872*/ 24296, // Rule ID 918 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fpround:{ *:[f32] } f64:{ *:[f64] }:$XB)  =>  (XSRSP:{ *:[f32] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSRSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 918,
        GIR_Done,
      // Label 872: @24296
      GIM_Try, /*On fail goto*//*Label 873*/ 24314, // Rule ID 150 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fpround:{ *:[f32] } f64:{ *:[f64] }:$frB)  =>  (FRSP:{ *:[f32] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRSP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 150,
        GIR_Done,
      // Label 873: @24314
      GIM_Try, /*On fail goto*//*Label 874*/ 24329, // Rule ID 557 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fpround:{ *:[f32] } f64:{ *:[f64] }:$RB)  =>  (EFSCFD:{ *:[f32] } f64:{ *:[f64] }:$RB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSCFD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 557,
        GIR_Done,
      // Label 874: @24329
      GIM_Reject,
    // Label 871: @24330
    GIM_Reject,
    // Label 33: @24331
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 878*/ 24427,
    /*GILLT_s32*//*Label 875*/ 24342, 0, 0,
    /*GILLT_v2s64*//*Label 876*/ 24381,
    /*GILLT_v4s32*//*Label 877*/ 24404,
    // Label 875: @24342
    GIM_Try, /*On fail goto*//*Label 879*/ 24361, // Rule ID 547 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (fp_to_sint:{ *:[i32] } f64:{ *:[f64] }:$RB)  =>  (EFDCTSIZ:{ *:[i32] } f64:{ *:[f64] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDCTSIZ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 547,
      GIR_Done,
    // Label 879: @24361
    GIM_Try, /*On fail goto*//*Label 880*/ 24380, // Rule ID 563 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (fp_to_sint:{ *:[i32] } f32:{ *:[f32] }:$RB)  =>  (EFSCTSIZ:{ *:[i32] } f32:{ *:[f32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSCTSIZ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 563,
      GIR_Done,
    // Label 880: @24380
    GIM_Reject,
    // Label 876: @24381
    GIM_Try, /*On fail goto*//*Label 881*/ 24403, // Rule ID 833 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fp_to_sint:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVCVDPSXDS:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVDPSXDS,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 833,
      GIR_Done,
    // Label 881: @24403
    GIM_Reject,
    // Label 877: @24404
    GIM_Try, /*On fail goto*//*Label 882*/ 24426, // Rule ID 840 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fp_to_sint:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVCVSPSXWS:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVSPSXWS,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 840,
      GIR_Done,
    // Label 882: @24426
    GIM_Reject,
    // Label 878: @24427
    GIM_Reject,
    // Label 34: @24428
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 886*/ 24524,
    /*GILLT_s32*//*Label 883*/ 24439, 0, 0,
    /*GILLT_v2s64*//*Label 884*/ 24478,
    /*GILLT_v4s32*//*Label 885*/ 24501,
    // Label 883: @24439
    GIM_Try, /*On fail goto*//*Label 887*/ 24458, // Rule ID 549 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (fp_to_uint:{ *:[i32] } f64:{ *:[f64] }:$RB)  =>  (EFDCTUIZ:{ *:[i32] } f64:{ *:[f64] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDCTUIZ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 549,
      GIR_Done,
    // Label 887: @24458
    GIM_Try, /*On fail goto*//*Label 888*/ 24477, // Rule ID 565 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (fp_to_uint:{ *:[i32] } f32:{ *:[f32] }:$RB)  =>  (EFSCTUIZ:{ *:[i32] } f32:{ *:[f32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSCTUIZ,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 565,
      GIR_Done,
    // Label 888: @24477
    GIM_Reject,
    // Label 884: @24478
    GIM_Try, /*On fail goto*//*Label 889*/ 24500, // Rule ID 836 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fp_to_uint:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVCVDPUXDS:{ *:[v2i64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVDPUXDS,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 836,
      GIR_Done,
    // Label 889: @24500
    GIM_Reject,
    // Label 885: @24501
    GIM_Try, /*On fail goto*//*Label 890*/ 24523, // Rule ID 842 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fp_to_uint:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVCVSPUXWS:{ *:[v4i32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVSPUXWS,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 842,
      GIR_Done,
    // Label 890: @24523
    GIM_Reject,
    // Label 886: @24524
    GIM_Reject,
    // Label 35: @24525
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 895*/ 24622,
    /*GILLT_s32*//*Label 891*/ 24536,
    /*GILLT_s64*//*Label 892*/ 24556, 0,
    /*GILLT_v2s64*//*Label 893*/ 24576,
    /*GILLT_v4s32*//*Label 894*/ 24599,
    // Label 891: @24536
    GIM_Try, /*On fail goto*//*Label 896*/ 24555, // Rule ID 559 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (sint_to_fp:{ *:[f32] } i32:{ *:[i32] }:$RB)  =>  (EFSCFSI:{ *:[f32] } i32:{ *:[i32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSCFSI,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 559,
      GIR_Done,
    // Label 896: @24555
    GIM_Reject,
    // Label 892: @24556
    GIM_Try, /*On fail goto*//*Label 897*/ 24575, // Rule ID 543 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
      // (sint_to_fp:{ *:[f64] } i32:{ *:[i32] }:$RB)  =>  (EFDCFSI:{ *:[f64] } i32:{ *:[i32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDCFSI,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 543,
      GIR_Done,
    // Label 897: @24575
    GIM_Reject,
    // Label 893: @24576
    GIM_Try, /*On fail goto*//*Label 898*/ 24598, // Rule ID 844 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (sint_to_fp:{ *:[v2f64] } v2i64:{ *:[v2i64] }:$XB)  =>  (XVCVSXDDP:{ *:[v2f64] } v2i64:{ *:[v2i64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVSXDDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 844,
      GIR_Done,
    // Label 898: @24598
    GIM_Reject,
    // Label 894: @24599
    GIM_Try, /*On fail goto*//*Label 899*/ 24621, // Rule ID 847 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (sint_to_fp:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$XB)  =>  (XVCVSXWSP:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVSXWSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 847,
      GIR_Done,
    // Label 899: @24621
    GIM_Reject,
    // Label 895: @24622
    GIM_Reject,
    // Label 36: @24623
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 904*/ 24720,
    /*GILLT_s32*//*Label 900*/ 24634,
    /*GILLT_s64*//*Label 901*/ 24654, 0,
    /*GILLT_v2s64*//*Label 902*/ 24674,
    /*GILLT_v4s32*//*Label 903*/ 24697,
    // Label 900: @24634
    GIM_Try, /*On fail goto*//*Label 905*/ 24653, // Rule ID 561 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (uint_to_fp:{ *:[f32] } i32:{ *:[i32] }:$RB)  =>  (EFSCFUI:{ *:[f32] } i32:{ *:[i32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSCFUI,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 561,
      GIR_Done,
    // Label 905: @24653
    GIM_Reject,
    // Label 901: @24654
    GIM_Try, /*On fail goto*//*Label 906*/ 24673, // Rule ID 545 //
      GIM_CheckFeatures, GIFBS_HasSPE,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
      // (uint_to_fp:{ *:[f64] } i32:{ *:[i32] }:$RB)  =>  (EFDCFUI:{ *:[f64] } i32:{ *:[i32] }:$RB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDCFUI,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 545,
      GIR_Done,
    // Label 906: @24673
    GIM_Reject,
    // Label 902: @24674
    GIM_Try, /*On fail goto*//*Label 907*/ 24696, // Rule ID 849 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (uint_to_fp:{ *:[v2f64] } v2i64:{ *:[v2i64] }:$XB)  =>  (XVCVUXDDP:{ *:[v2f64] } v2i64:{ *:[v2i64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVUXDDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 849,
      GIR_Done,
    // Label 907: @24696
    GIM_Reject,
    // Label 903: @24697
    GIM_Try, /*On fail goto*//*Label 908*/ 24719, // Rule ID 852 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (uint_to_fp:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$XB)  =>  (XVCVUXWSP:{ *:[v4f32] } v4i32:{ *:[v4i32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVCVUXWSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 852,
      GIR_Done,
    // Label 908: @24719
    GIM_Reject,
    // Label 904: @24720
    GIM_Reject,
    // Label 37: @24721
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 914*/ 24892,
    /*GILLT_s32*//*Label 909*/ 24732,
    /*GILLT_s64*//*Label 910*/ 24770,
    /*GILLT_s128*//*Label 911*/ 24826,
    /*GILLT_v2s64*//*Label 912*/ 24846,
    /*GILLT_v4s32*//*Label 913*/ 24869,
    // Label 909: @24732
    GIM_Try, /*On fail goto*//*Label 915*/ 24769,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 916*/ 24753, // Rule ID 155 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fabs:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FABSS:{ *:[f32] } f32:{ *:[f32] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FABSS,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 155,
        GIR_Done,
      // Label 916: @24753
      GIM_Try, /*On fail goto*//*Label 917*/ 24768, // Rule ID 555 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
        // (fabs:{ *:[f32] } f32:{ *:[f32] }:$RA)  =>  (EFSABS:{ *:[f32] } f32:{ *:[f32] }:$RA)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFSABS,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 555,
        GIR_Done,
      // Label 917: @24768
      GIM_Reject,
    // Label 915: @24769
    GIM_Reject,
    // Label 910: @24770
    GIM_Try, /*On fail goto*//*Label 918*/ 24825,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 919*/ 24794, // Rule ID 799 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fabs:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSABSDP:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSABSDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 799,
        GIR_Done,
      // Label 919: @24794
      GIM_Try, /*On fail goto*//*Label 920*/ 24809, // Rule ID 156 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fabs:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FABSD:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FABSD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 156,
        GIR_Done,
      // Label 920: @24809
      GIM_Try, /*On fail goto*//*Label 921*/ 24824, // Rule ID 539 //
        GIM_CheckFeatures, GIFBS_HasSPE,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::SPERCRegClassID,
        // (fabs:{ *:[f64] } f64:{ *:[f64] }:$RA)  =>  (EFDABS:{ *:[f64] } f64:{ *:[f64] }:$RA)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::EFDABS,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 539,
        GIR_Done,
      // Label 921: @24824
      GIM_Reject,
    // Label 918: @24825
    GIM_Reject,
    // Label 911: @24826
    GIM_Try, /*On fail goto*//*Label 922*/ 24845, // Rule ID 940 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fabs:{ *:[f128] } f128:{ *:[f128] }:$vB)  =>  (XSABSQP:{ *:[f128] } f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSABSQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 940,
      GIR_Done,
    // Label 922: @24845
    GIM_Reject,
    // Label 912: @24846
    GIM_Try, /*On fail goto*//*Label 923*/ 24868, // Rule ID 803 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fabs:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVABSDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVABSDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 803,
      GIR_Done,
    // Label 923: @24868
    GIM_Reject,
    // Label 913: @24869
    GIM_Try, /*On fail goto*//*Label 924*/ 24891, // Rule ID 804 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fabs:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVABSSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVABSSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 804,
      GIR_Done,
    // Label 924: @24891
    GIM_Reject,
    // Label 914: @24892
    GIM_Reject,
    // Label 38: @24893
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 930*/ 25120,
    /*GILLT_s32*//*Label 925*/ 24904,
    /*GILLT_s64*//*Label 926*/ 24941,
    /*GILLT_s128*//*Label 927*/ 25009,
    /*GILLT_v2s64*//*Label 928*/ 25046,
    /*GILLT_v4s32*//*Label 929*/ 25083,
    // Label 925: @24904
    GIM_Try, /*On fail goto*//*Label 931*/ 24940, // Rule ID 161 //
      GIM_CheckFeatures, GIFBS_HasFPU,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
      // (fcopysign:{ *:[f32] } f32:{ *:[f32] }:$frB, f32:{ *:[f32] }:$frA)  =>  (FCPSGNS:{ *:[f32] } f32:{ *:[f32] }:$frA, f32:{ *:[f32] }:$frB)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FCPSGNS,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // frD
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // frA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // frB
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 161,
      GIR_Done,
    // Label 931: @24940
    GIM_Reject,
    // Label 926: @24941
    GIM_Try, /*On fail goto*//*Label 932*/ 25008,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 933*/ 24979, // Rule ID 802 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fcopysign:{ *:[f64] } f64:{ *:[f64] }:$XB, f64:{ *:[f64] }:$XA)  =>  (XSCPSGNDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSCPSGNDP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 802,
        GIR_Done,
      // Label 933: @24979
      GIM_Try, /*On fail goto*//*Label 934*/ 25007, // Rule ID 162 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fcopysign:{ *:[f64] } f64:{ *:[f64] }:$frB, f64:{ *:[f64] }:$frA)  =>  (FCPSGND:{ *:[f64] } f64:{ *:[f64] }:$frA, f64:{ *:[f64] }:$frB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FCPSGND,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // frD
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // frA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // frB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 162,
        GIR_Done,
      // Label 934: @25007
      GIM_Reject,
    // Label 932: @25008
    GIM_Reject,
    // Label 927: @25009
    GIM_Try, /*On fail goto*//*Label 935*/ 25045, // Rule ID 939 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fcopysign:{ *:[f128] } f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vA)  =>  (XSCPSGNQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSCPSGNQP,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vB
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 939,
      GIR_Done,
    // Label 935: @25045
    GIM_Reject,
    // Label 928: @25046
    GIM_Try, /*On fail goto*//*Label 936*/ 25082, // Rule ID 805 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fcopysign:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB, v2f64:{ *:[v2f64] }:$XA)  =>  (XVCPSGNDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCPSGNDP,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XB
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 805,
      GIR_Done,
    // Label 936: @25082
    GIM_Reject,
    // Label 929: @25083
    GIM_Try, /*On fail goto*//*Label 937*/ 25119, // Rule ID 806 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fcopysign:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB, v4f32:{ *:[v4f32] }:$XA)  =>  (XVCPSGNSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVCPSGNSP,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XA
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XB
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 806,
      GIR_Done,
    // Label 937: @25119
    GIM_Reject,
    // Label 930: @25120
    GIM_Reject,
    // Label 39: @25121
    GIM_Try, /*On fail goto*//*Label 938*/ 25133, // Rule ID 15 //
      // MIs[0] dst
      GIM_CheckIsMBB, /*MI*/0, /*Op*/0,
      // (br (bb:{ *:[Other] }):$dst)  =>  (B (bb:{ *:[Other] }):$dst)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::B,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 15,
      GIR_Done,
    // Label 938: @25133
    GIM_Reject,
    // Label 40: @25134
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 8, /*)*//*default:*//*Label 945*/ 25267,
    /*GILLT_s32*//*Label 939*/ 25147,
    /*GILLT_s64*//*Label 940*/ 25167, 0,
    /*GILLT_v2s64*//*Label 941*/ 25187,
    /*GILLT_v4s32*//*Label 942*/ 25207,
    /*GILLT_v8s16*//*Label 943*/ 25227,
    /*GILLT_v16s8*//*Label 944*/ 25247,
    // Label 939: @25147
    GIM_Try, /*On fail goto*//*Label 946*/ 25166, // Rule ID 126 //
      GIM_CheckFeatures, GIFBS_IsISA3_0,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (cttz:{ *:[i32] } i32:{ *:[i32] }:$rS)  =>  (CNTTZW:{ *:[i32] } i32:{ *:[i32] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CNTTZW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 126,
      GIR_Done,
    // Label 946: @25166
    GIM_Reject,
    // Label 940: @25167
    GIM_Try, /*On fail goto*//*Label 947*/ 25186, // Rule ID 651 //
      GIM_CheckFeatures, GIFBS_IsISA3_0,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (cttz:{ *:[i64] } i64:{ *:[i64] }:$rS)  =>  (CNTTZD:{ *:[i64] } i64:{ *:[i64] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CNTTZD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 651,
      GIR_Done,
    // Label 947: @25186
    GIM_Reject,
    // Label 941: @25187
    GIM_Try, /*On fail goto*//*Label 948*/ 25206, // Rule ID 519 //
      GIM_CheckFeatures, GIFBS_HasP9Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (cttz:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)  =>  (VCTZD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCTZD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 519,
      GIR_Done,
    // Label 948: @25206
    GIM_Reject,
    // Label 942: @25207
    GIM_Try, /*On fail goto*//*Label 949*/ 25226, // Rule ID 518 //
      GIM_CheckFeatures, GIFBS_HasP9Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (cttz:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)  =>  (VCTZW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCTZW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 518,
      GIR_Done,
    // Label 949: @25226
    GIM_Reject,
    // Label 943: @25227
    GIM_Try, /*On fail goto*//*Label 950*/ 25246, // Rule ID 517 //
      GIM_CheckFeatures, GIFBS_HasP9Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (cttz:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)  =>  (VCTZH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCTZH,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 517,
      GIR_Done,
    // Label 950: @25246
    GIM_Reject,
    // Label 944: @25247
    GIM_Try, /*On fail goto*//*Label 951*/ 25266, // Rule ID 516 //
      GIM_CheckFeatures, GIFBS_HasP9Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (cttz:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)  =>  (VCTZB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCTZB,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 516,
      GIR_Done,
    // Label 951: @25266
    GIM_Reject,
    // Label 945: @25267
    GIM_Reject,
    // Label 41: @25268
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 8, /*)*//*default:*//*Label 958*/ 25397,
    /*GILLT_s32*//*Label 952*/ 25281,
    /*GILLT_s64*//*Label 953*/ 25299, 0,
    /*GILLT_v2s64*//*Label 954*/ 25317,
    /*GILLT_v4s32*//*Label 955*/ 25337,
    /*GILLT_v8s16*//*Label 956*/ 25357,
    /*GILLT_v16s8*//*Label 957*/ 25377,
    // Label 952: @25281
    GIM_Try, /*On fail goto*//*Label 959*/ 25298, // Rule ID 125 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (ctlz:{ *:[i32] } i32:{ *:[i32] }:$rS)  =>  (CNTLZW:{ *:[i32] } i32:{ *:[i32] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CNTLZW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 125,
      GIR_Done,
    // Label 959: @25298
    GIM_Reject,
    // Label 953: @25299
    GIM_Try, /*On fail goto*//*Label 960*/ 25316, // Rule ID 650 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (ctlz:{ *:[i64] } i64:{ *:[i64] }:$rS)  =>  (CNTLZD:{ *:[i64] } i64:{ *:[i64] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::CNTLZD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 650,
      GIR_Done,
    // Label 960: @25316
    GIM_Reject,
    // Label 954: @25317
    GIM_Try, /*On fail goto*//*Label 961*/ 25336, // Rule ID 466 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctlz:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)  =>  (VCLZD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCLZD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 466,
      GIR_Done,
    // Label 961: @25336
    GIM_Reject,
    // Label 955: @25337
    GIM_Try, /*On fail goto*//*Label 962*/ 25356, // Rule ID 465 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctlz:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)  =>  (VCLZW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCLZW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 465,
      GIR_Done,
    // Label 962: @25356
    GIM_Reject,
    // Label 956: @25357
    GIM_Try, /*On fail goto*//*Label 963*/ 25376, // Rule ID 464 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctlz:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)  =>  (VCLZH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCLZH,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 464,
      GIR_Done,
    // Label 963: @25376
    GIM_Reject,
    // Label 957: @25377
    GIM_Try, /*On fail goto*//*Label 964*/ 25396, // Rule ID 463 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctlz:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)  =>  (VCLZB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VCLZB,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 463,
      GIR_Done,
    // Label 964: @25396
    GIM_Reject,
    // Label 958: @25397
    GIM_Reject,
    // Label 42: @25398
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 8, /*)*//*default:*//*Label 971*/ 25527,
    /*GILLT_s32*//*Label 965*/ 25411,
    /*GILLT_s64*//*Label 966*/ 25429, 0,
    /*GILLT_v2s64*//*Label 967*/ 25447,
    /*GILLT_v4s32*//*Label 968*/ 25467,
    /*GILLT_v8s16*//*Label 969*/ 25487,
    /*GILLT_v16s8*//*Label 970*/ 25507,
    // Label 965: @25411
    GIM_Try, /*On fail goto*//*Label 972*/ 25428, // Rule ID 655 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::GPRCRegClassID,
      // (ctpop:{ *:[i32] } i32:{ *:[i32] }:$rS)  =>  (POPCNTW:{ *:[i32] } i32:{ *:[i32] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::POPCNTW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 655,
      GIR_Done,
    // Label 972: @25428
    GIM_Reject,
    // Label 966: @25429
    GIM_Try, /*On fail goto*//*Label 973*/ 25446, // Rule ID 652 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::G8RCRegClassID,
      // (ctpop:{ *:[i64] } i64:{ *:[i64] }:$rS)  =>  (POPCNTD:{ *:[i64] } i64:{ *:[i64] }:$rS)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::POPCNTD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 652,
      GIR_Done,
    // Label 973: @25446
    GIM_Reject,
    // Label 967: @25447
    GIM_Try, /*On fail goto*//*Label 974*/ 25466, // Rule ID 470 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctpop:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)  =>  (VPOPCNTD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VPOPCNTD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 470,
      GIR_Done,
    // Label 974: @25466
    GIM_Reject,
    // Label 968: @25467
    GIM_Try, /*On fail goto*//*Label 975*/ 25486, // Rule ID 469 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctpop:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)  =>  (VPOPCNTW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VPOPCNTW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 469,
      GIR_Done,
    // Label 975: @25486
    GIM_Reject,
    // Label 969: @25487
    GIM_Try, /*On fail goto*//*Label 976*/ 25506, // Rule ID 468 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctpop:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)  =>  (VPOPCNTH:{ *:[v8i16] } v8i16:{ *:[v8i16] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VPOPCNTH,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 468,
      GIR_Done,
    // Label 976: @25506
    GIM_Reject,
    // Label 970: @25507
    GIM_Try, /*On fail goto*//*Label 977*/ 25526, // Rule ID 467 //
      GIM_CheckFeatures, GIFBS_HasP8Altivec,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s8,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (ctpop:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)  =>  (VPOPCNTB:{ *:[v16i8] } v16i8:{ *:[v16i8] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::VPOPCNTB,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 467,
      GIR_Done,
    // Label 977: @25526
    GIM_Reject,
    // Label 971: @25527
    GIM_Reject,
    // Label 43: @25528
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 6, /*)*//*default:*//*Label 980*/ 25576,
    /*GILLT_v2s64*//*Label 978*/ 25536,
    /*GILLT_v4s32*//*Label 979*/ 25556,
    // Label 978: @25536
    GIM_Try, /*On fail goto*//*Label 981*/ 25555, // Rule ID 986 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (bswap:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$XB)  =>  (XXBRD:{ *:[v2i64] } v2i64:{ *:[v2i64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XXBRD,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 986,
      GIR_Done,
    // Label 981: @25555
    GIM_Reject,
    // Label 979: @25556
    GIM_Try, /*On fail goto*//*Label 982*/ 25575, // Rule ID 985 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (bswap:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB)  =>  (XXBRW:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XXBRW,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 985,
      GIR_Done,
    // Label 982: @25575
    GIM_Reject,
    // Label 980: @25576
    GIM_Reject,
    // Label 44: @25577
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 987*/ 25686,
    /*GILLT_s32*//*Label 983*/ 25588,
    /*GILLT_s64*//*Label 984*/ 25608, 0,
    /*GILLT_v2s64*//*Label 985*/ 25646,
    /*GILLT_v4s32*//*Label 986*/ 25666,
    // Label 983: @25588
    GIM_Try, /*On fail goto*//*Label 988*/ 25607, // Rule ID 138 //
      GIM_CheckFeatures, GIFBS_HasFPU,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
      // (fceil:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FRIPS:{ *:[f32] } f32:{ *:[f32] }:$frB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIPS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 138,
      GIR_Done,
    // Label 988: @25607
    GIM_Reject,
    // Label 984: @25608
    GIM_Try, /*On fail goto*//*Label 989*/ 25645,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 990*/ 25629, // Rule ID 869 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fceil:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSRDPIP:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSRDPIP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 869,
        GIR_Done,
      // Label 990: @25629
      GIM_Try, /*On fail goto*//*Label 991*/ 25644, // Rule ID 136 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fceil:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FRIPD:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIPD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 136,
        GIR_Done,
      // Label 991: @25644
      GIM_Reject,
    // Label 989: @25645
    GIM_Reject,
    // Label 985: @25646
    GIM_Try, /*On fail goto*//*Label 992*/ 25665, // Rule ID 877 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fceil:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVRDPIP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRDPIP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 877,
      GIR_Done,
    // Label 992: @25665
    GIM_Reject,
    // Label 986: @25666
    GIM_Try, /*On fail goto*//*Label 993*/ 25685, // Rule ID 885 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fceil:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVRSPIP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRSPIP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 885,
      GIR_Done,
    // Label 993: @25685
    GIM_Reject,
    // Label 987: @25686
    GIM_Reject,
    // Label 45: @25687
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 999*/ 25849,
    /*GILLT_s32*//*Label 994*/ 25698,
    /*GILLT_s64*//*Label 995*/ 25739,
    /*GILLT_s128*//*Label 996*/ 25783,
    /*GILLT_v2s64*//*Label 997*/ 25803,
    /*GILLT_v4s32*//*Label 998*/ 25826,
    // Label 994: @25698
    GIM_Try, /*On fail goto*//*Label 1000*/ 25738,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1001*/ 25719, // Rule ID 920 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$XB)  =>  (XSSQRTSP:{ *:[f32] } f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSQRTSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 920,
        GIR_Done,
      // Label 1001: @25719
      GIM_Try, /*On fail goto*//*Label 1002*/ 25737, // Rule ID 154 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FSQRTS:{ *:[f32] } f32:{ *:[f32] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSQRTS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 154,
        GIR_Done,
      // Label 1002: @25737
      GIM_Reject,
    // Label 1000: @25738
    GIM_Reject,
    // Label 995: @25739
    GIM_Try, /*On fail goto*//*Label 1003*/ 25782,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1004*/ 25763, // Rule ID 769 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (fsqrt:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSSQRTDP:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSQRTDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 769,
        GIR_Done,
      // Label 1004: @25763
      GIM_Try, /*On fail goto*//*Label 1005*/ 25781, // Rule ID 152 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (fsqrt:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FSQRT:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSQRT,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 152,
        GIR_Done,
      // Label 1005: @25781
      GIM_Reject,
    // Label 1003: @25782
    GIM_Reject,
    // Label 996: @25783
    GIM_Try, /*On fail goto*//*Label 1006*/ 25802, // Rule ID 952 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (fsqrt:{ *:[f128] } f128:{ *:[f128] }:$vB)  =>  (XSSQRTQP:{ *:[f128] } f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSQRTQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 952,
      GIR_Done,
    // Label 1006: @25802
    GIM_Reject,
    // Label 997: @25803
    GIM_Try, /*On fail goto*//*Label 1007*/ 25825, // Rule ID 780 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fsqrt:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVSQRTDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSQRTDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 780,
      GIR_Done,
    // Label 1007: @25825
    GIM_Reject,
    // Label 998: @25826
    GIM_Try, /*On fail goto*//*Label 1008*/ 25848, // Rule ID 782 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fsqrt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVSQRTSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSQRTSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 782,
      GIR_Done,
    // Label 1008: @25848
    GIM_Reject,
    // Label 999: @25849
    GIM_Reject,
    // Label 46: @25850
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1013*/ 25959,
    /*GILLT_s32*//*Label 1009*/ 25861,
    /*GILLT_s64*//*Label 1010*/ 25881, 0,
    /*GILLT_v2s64*//*Label 1011*/ 25919,
    /*GILLT_v4s32*//*Label 1012*/ 25939,
    // Label 1009: @25861
    GIM_Try, /*On fail goto*//*Label 1014*/ 25880, // Rule ID 146 //
      GIM_CheckFeatures, GIFBS_HasFPU,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
      // (ffloor:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FRIMS:{ *:[f32] } f32:{ *:[f32] }:$frB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIMS,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 146,
      GIR_Done,
    // Label 1014: @25880
    GIM_Reject,
    // Label 1010: @25881
    GIM_Try, /*On fail goto*//*Label 1015*/ 25918,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1016*/ 25902, // Rule ID 867 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (ffloor:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSRDPIM:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSRDPIM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 867,
        GIR_Done,
      // Label 1016: @25902
      GIM_Try, /*On fail goto*//*Label 1017*/ 25917, // Rule ID 144 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (ffloor:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FRIMD:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FRIMD,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 144,
        GIR_Done,
      // Label 1017: @25917
      GIM_Reject,
    // Label 1015: @25918
    GIM_Reject,
    // Label 1011: @25919
    GIM_Try, /*On fail goto*//*Label 1018*/ 25938, // Rule ID 875 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (ffloor:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVRDPIM:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRDPIM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 875,
      GIR_Done,
    // Label 1018: @25938
    GIM_Reject,
    // Label 1012: @25939
    GIM_Try, /*On fail goto*//*Label 1019*/ 25958, // Rule ID 883 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (ffloor:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVRSPIM:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRSPIM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 883,
      GIR_Done,
    // Label 1019: @25958
    GIM_Reject,
    // Label 1013: @25959
    GIM_Reject,
    // Label 47: @25960
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/2, 6, /*)*//*default:*//*Label 1023*/ 26039,
    /*GILLT_s64*//*Label 1020*/ 25970, 0,
    /*GILLT_v2s64*//*Label 1021*/ 25993,
    /*GILLT_v4s32*//*Label 1022*/ 26016,
    // Label 1020: @25970
    GIM_Try, /*On fail goto*//*Label 1024*/ 25992, // Rule ID 855 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
      // (fnearbyint:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSRDPIC:{ *:[f64] } f64:{ *:[f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSRDPIC,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 855,
      GIR_Done,
    // Label 1024: @25992
    GIM_Reject,
    // Label 1021: @25993
    GIM_Try, /*On fail goto*//*Label 1025*/ 26015, // Rule ID 856 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fnearbyint:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVRDPIC:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRDPIC,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 856,
      GIR_Done,
    // Label 1025: @26015
    GIM_Reject,
    // Label 1022: @26016
    GIM_Try, /*On fail goto*//*Label 1026*/ 26038, // Rule ID 857 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (fnearbyint:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVRSPIC:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVRSPIC,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 857,
      GIR_Done,
    // Label 1026: @26038
    GIM_Reject,
    // Label 1023: @26039
    GIM_Reject,
    // Label 48: @26040
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1032*/ 26222,
    /*GILLT_s32*//*Label 1027*/ 26051,
    /*GILLT_s64*//*Label 1028*/ 26096,
    /*GILLT_s128*//*Label 1029*/ 26144,
    /*GILLT_v2s64*//*Label 1030*/ 26168,
    /*GILLT_v4s32*//*Label 1031*/ 26195,
    // Label 1027: @26051
    GIM_Try, /*On fail goto*//*Label 1033*/ 26095,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1034*/ 26076, // Rule ID 908 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (strict_fadd:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSADDSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSADDSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 908,
        GIR_Done,
      // Label 1034: @26076
      GIM_Try, /*On fail goto*//*Label 1035*/ 26094, // Rule ID 225 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (strict_fadd:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)  =>  (FADDS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FADDS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 225,
        GIR_Done,
      // Label 1035: @26094
      GIM_Reject,
    // Label 1033: @26095
    GIM_Reject,
    // Label 1028: @26096
    GIM_Try, /*On fail goto*//*Label 1036*/ 26143,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1037*/ 26124, // Rule ID 725 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (strict_fadd:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSADDDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSADDDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 725,
        GIR_Done,
      // Label 1037: @26124
      GIM_Try, /*On fail goto*//*Label 1038*/ 26142, // Rule ID 223 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (strict_fadd:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)  =>  (FADD:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FADD,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 223,
        GIR_Done,
      // Label 1038: @26142
      GIM_Reject,
    // Label 1036: @26143
    GIM_Reject,
    // Label 1029: @26144
    GIM_Try, /*On fail goto*//*Label 1039*/ 26167, // Rule ID 943 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (strict_fadd:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSADDQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSADDQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 943,
      GIR_Done,
    // Label 1039: @26167
    GIM_Reject,
    // Label 1030: @26168
    GIM_Try, /*On fail goto*//*Label 1040*/ 26194, // Rule ID 729 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fadd:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVADDDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVADDDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 729,
      GIR_Done,
    // Label 1040: @26194
    GIM_Reject,
    // Label 1031: @26195
    GIM_Try, /*On fail goto*//*Label 1041*/ 26221, // Rule ID 731 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fadd:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVADDSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVADDSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 731,
      GIR_Done,
    // Label 1041: @26221
    GIM_Reject,
    // Label 1032: @26222
    GIM_Reject,
    // Label 49: @26223
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1047*/ 26405,
    /*GILLT_s32*//*Label 1042*/ 26234,
    /*GILLT_s64*//*Label 1043*/ 26279,
    /*GILLT_s128*//*Label 1044*/ 26327,
    /*GILLT_v2s64*//*Label 1045*/ 26351,
    /*GILLT_v4s32*//*Label 1046*/ 26378,
    // Label 1042: @26234
    GIM_Try, /*On fail goto*//*Label 1048*/ 26278,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1049*/ 26259, // Rule ID 912 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (strict_fsub:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSSUBSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSUBSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 912,
        GIR_Done,
      // Label 1049: @26259
      GIM_Try, /*On fail goto*//*Label 1050*/ 26277, // Rule ID 237 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (strict_fsub:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)  =>  (FSUBS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSUBS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 237,
        GIR_Done,
      // Label 1050: @26277
      GIM_Reject,
    // Label 1048: @26278
    GIM_Reject,
    // Label 1043: @26279
    GIM_Try, /*On fail goto*//*Label 1051*/ 26326,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1052*/ 26307, // Rule ID 737 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (strict_fsub:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSSUBDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSUBDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 737,
        GIR_Done,
      // Label 1052: @26307
      GIM_Try, /*On fail goto*//*Label 1053*/ 26325, // Rule ID 235 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (strict_fsub:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)  =>  (FSUB:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSUB,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 235,
        GIR_Done,
      // Label 1053: @26325
      GIM_Reject,
    // Label 1051: @26326
    GIM_Reject,
    // Label 1044: @26327
    GIM_Try, /*On fail goto*//*Label 1054*/ 26350, // Rule ID 947 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (strict_fsub:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSSUBQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSUBQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 947,
      GIR_Done,
    // Label 1054: @26350
    GIM_Reject,
    // Label 1045: @26351
    GIM_Try, /*On fail goto*//*Label 1055*/ 26377, // Rule ID 739 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fsub:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVSUBDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSUBDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 739,
      GIR_Done,
    // Label 1055: @26377
    GIM_Reject,
    // Label 1046: @26378
    GIM_Try, /*On fail goto*//*Label 1056*/ 26404, // Rule ID 741 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fsub:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVSUBSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSUBSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 741,
      GIR_Done,
    // Label 1056: @26404
    GIM_Reject,
    // Label 1047: @26405
    GIM_Reject,
    // Label 50: @26406
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1062*/ 26588,
    /*GILLT_s32*//*Label 1057*/ 26417,
    /*GILLT_s64*//*Label 1058*/ 26462,
    /*GILLT_s128*//*Label 1059*/ 26510,
    /*GILLT_v2s64*//*Label 1060*/ 26534,
    /*GILLT_v4s32*//*Label 1061*/ 26561,
    // Label 1057: @26417
    GIM_Try, /*On fail goto*//*Label 1063*/ 26461,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1064*/ 26442, // Rule ID 910 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (strict_fmul:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSMULSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSMULSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 910,
        GIR_Done,
      // Label 1064: @26442
      GIM_Try, /*On fail goto*//*Label 1065*/ 26460, // Rule ID 233 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (strict_fmul:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC)  =>  (FMULS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMULS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 233,
        GIR_Done,
      // Label 1065: @26460
      GIM_Reject,
    // Label 1063: @26461
    GIM_Reject,
    // Label 1058: @26462
    GIM_Try, /*On fail goto*//*Label 1066*/ 26509,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1067*/ 26490, // Rule ID 727 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (strict_fmul:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSMULDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSMULDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 727,
        GIR_Done,
      // Label 1067: @26490
      GIM_Try, /*On fail goto*//*Label 1068*/ 26508, // Rule ID 231 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (strict_fmul:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC)  =>  (FMUL:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMUL,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 231,
        GIR_Done,
      // Label 1068: @26508
      GIM_Reject,
    // Label 1066: @26509
    GIM_Reject,
    // Label 1059: @26510
    GIM_Try, /*On fail goto*//*Label 1069*/ 26533, // Rule ID 945 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (strict_fmul:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSMULQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSMULQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 945,
      GIR_Done,
    // Label 1069: @26533
    GIM_Reject,
    // Label 1060: @26534
    GIM_Try, /*On fail goto*//*Label 1070*/ 26560, // Rule ID 733 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fmul:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVMULDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVMULDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 733,
      GIR_Done,
    // Label 1070: @26560
    GIM_Reject,
    // Label 1061: @26561
    GIM_Try, /*On fail goto*//*Label 1071*/ 26587, // Rule ID 735 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fmul:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVMULSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVMULSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 735,
      GIR_Done,
    // Label 1071: @26587
    GIM_Reject,
    // Label 1062: @26588
    GIM_Reject,
    // Label 51: @26589
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1077*/ 26771,
    /*GILLT_s32*//*Label 1072*/ 26600,
    /*GILLT_s64*//*Label 1073*/ 26645,
    /*GILLT_s128*//*Label 1074*/ 26693,
    /*GILLT_v2s64*//*Label 1075*/ 26717,
    /*GILLT_v4s32*//*Label 1076*/ 26744,
    // Label 1072: @26600
    GIM_Try, /*On fail goto*//*Label 1078*/ 26644,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1079*/ 26625, // Rule ID 914 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (strict_fdiv:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)  =>  (XSDIVSP:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSDIVSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 914,
        GIR_Done,
      // Label 1079: @26625
      GIM_Try, /*On fail goto*//*Label 1080*/ 26643, // Rule ID 229 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (strict_fdiv:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)  =>  (FDIVS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FDIVS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 229,
        GIR_Done,
      // Label 1080: @26643
      GIM_Reject,
    // Label 1078: @26644
    GIM_Reject,
    // Label 1073: @26645
    GIM_Try, /*On fail goto*//*Label 1081*/ 26692,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1082*/ 26673, // Rule ID 766 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (strict_fdiv:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)  =>  (XSDIVDP:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSDIVDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 766,
        GIR_Done,
      // Label 1082: @26673
      GIM_Try, /*On fail goto*//*Label 1083*/ 26691, // Rule ID 227 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (strict_fdiv:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)  =>  (FDIV:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FDIV,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 227,
        GIR_Done,
      // Label 1083: @26691
      GIM_Reject,
    // Label 1081: @26692
    GIM_Reject,
    // Label 1074: @26693
    GIM_Try, /*On fail goto*//*Label 1084*/ 26716, // Rule ID 949 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (strict_fdiv:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)  =>  (XSDIVQP:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSDIVQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 949,
      GIR_Done,
    // Label 1084: @26716
    GIM_Reject,
    // Label 1075: @26717
    GIM_Try, /*On fail goto*//*Label 1085*/ 26743, // Rule ID 775 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fdiv:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)  =>  (XVDIVDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVDIVDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 775,
      GIR_Done,
    // Label 1085: @26743
    GIM_Reject,
    // Label 1076: @26744
    GIM_Try, /*On fail goto*//*Label 1086*/ 26770, // Rule ID 777 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fdiv:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)  =>  (XVDIVSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVDIVSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 777,
      GIR_Done,
    // Label 1086: @26770
    GIM_Reject,
    // Label 1077: @26771
    GIM_Reject,
    // Label 52: @26772
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1092*/ 27362,
    /*GILLT_s32*//*Label 1087*/ 26783,
    /*GILLT_s64*//*Label 1088*/ 26939,
    /*GILLT_s128*//*Label 1089*/ 27095,
    /*GILLT_v2s64*//*Label 1090*/ 27184,
    /*GILLT_v4s32*//*Label 1091*/ 27273,
    // Label 1087: @26783
    GIM_Try, /*On fail goto*//*Label 1093*/ 26938,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1094*/ 26842, // Rule ID 924 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, (fneg:{ *:[f32] } f32:{ *:[f32] }:$XTi))  =>  (XSMSUBASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 924,
        GIR_Done,
      // Label 1094: @26842
      GIM_Try, /*On fail goto*//*Label 1095*/ 26874, // Rule ID 922 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB, f32:{ *:[f32] }:$XTi)  =>  (XSMADDASP:{ *:[f32] } f32:{ *:[f32] }:$XTi, f32:{ *:[f32] }:$XA, f32:{ *:[f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 922,
        GIR_Done,
      // Label 1095: @26874
      GIM_Try, /*On fail goto*//*Label 1096*/ 26919, // Rule ID 211 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, (fneg:{ *:[f32] } f32:{ *:[f32] }:$FRB))  =>  (FMSUBS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FMSUBS,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 211,
        GIR_Done,
      // Label 1096: @26919
      GIM_Try, /*On fail goto*//*Label 1097*/ 26937, // Rule ID 207 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (strict_fma:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)  =>  (FMADDS:{ *:[f32] } f32:{ *:[f32] }:$FRA, f32:{ *:[f32] }:$FRC, f32:{ *:[f32] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMADDS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 207,
        GIR_Done,
      // Label 1097: @26937
      GIM_Reject,
    // Label 1093: @26938
    GIM_Reject,
    // Label 1088: @26939
    GIM_Try, /*On fail goto*//*Label 1098*/ 27094,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1099*/ 26998, // Rule ID 745 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, (fneg:{ *:[f64] } f64:{ *:[f64] }:$XTi))  =>  (XSMSUBADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 745,
        GIR_Done,
      // Label 1099: @26998
      GIM_Try, /*On fail goto*//*Label 1100*/ 27030, // Rule ID 743 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB, f64:{ *:[f64] }:$XTi)  =>  (XSMADDADP:{ *:[f64] } f64:{ *:[f64] }:$XTi, f64:{ *:[f64] }:$XA, f64:{ *:[f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 743,
        GIR_Done,
      // Label 1100: @27030
      GIM_Try, /*On fail goto*//*Label 1101*/ 27075, // Rule ID 209 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, (fneg:{ *:[f64] } f64:{ *:[f64] }:$FRB))  =>  (FMSUB:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::FMSUB,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // FRT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // FRA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // FRC
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // FRB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 209,
        GIR_Done,
      // Label 1101: @27075
      GIM_Try, /*On fail goto*//*Label 1102*/ 27093, // Rule ID 205 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (strict_fma:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)  =>  (FMADD:{ *:[f64] } f64:{ *:[f64] }:$FRA, f64:{ *:[f64] }:$FRC, f64:{ *:[f64] }:$FRB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FMADD,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 205,
        GIR_Done,
      // Label 1102: @27093
      GIM_Reject,
    // Label 1098: @27094
    GIM_Reject,
    // Label 1089: @27095
    GIM_Try, /*On fail goto*//*Label 1103*/ 27183,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s128,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 1104*/ 27154, // Rule ID 955 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s128,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, (fneg:{ *:[f128] } f128:{ *:[f128] }:$vTi))  =>  (XSMSUBQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMSUBQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 955,
        GIR_Done,
      // Label 1104: @27154
      GIM_Try, /*On fail goto*//*Label 1105*/ 27182, // Rule ID 953 //
        GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
        // (strict_fma:{ *:[f128] } f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB, f128:{ *:[f128] }:$vTi)  =>  (XSMADDQP:{ *:[f128] } f128:{ *:[f128] }:$vTi, f128:{ *:[f128] }:$vA, f128:{ *:[f128] }:$vB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XSMADDQP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // vTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // vA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 953,
        GIR_Done,
      // Label 1105: @27182
      GIM_Reject,
    // Label 1103: @27183
    GIM_Reject,
    // Label 1090: @27184
    GIM_Try, /*On fail goto*//*Label 1106*/ 27272,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 1107*/ 27243, // Rule ID 755 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v2s64,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, (fneg:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi))  =>  (XVMSUBADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMSUBADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 755,
        GIR_Done,
      // Label 1107: @27243
      GIM_Try, /*On fail goto*//*Label 1108*/ 27271, // Rule ID 751 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        // (strict_fma:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB, v2f64:{ *:[v2f64] }:$XTi)  =>  (XVMADDADP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XTi, v2f64:{ *:[v2f64] }:$XA, v2f64:{ *:[v2f64] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMADDADP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 751,
        GIR_Done,
      // Label 1108: @27271
      GIM_Reject,
    // Label 1106: @27272
    GIM_Reject,
    // Label 1091: @27273
    GIM_Try, /*On fail goto*//*Label 1109*/ 27361,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      GIM_Try, /*On fail goto*//*Label 1110*/ 27332, // Rule ID 757 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_v4s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (strict_fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, (fneg:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi))  =>  (XVMSUBASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMSUBASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 757,
        GIR_Done,
      // Label 1110: @27332
      GIM_Try, /*On fail goto*//*Label 1111*/ 27360, // Rule ID 753 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        // (strict_fma:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB, v4f32:{ *:[v4f32] }:$XTi)  =>  (XVMADDASP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XTi, v4f32:{ *:[v4f32] }:$XA, v4f32:{ *:[v4f32] }:$XB)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/PPC::XVMADDASP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // XT
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // XTi
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // XA
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // XB
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 753,
        GIR_Done,
      // Label 1111: @27360
      GIM_Reject,
    // Label 1109: @27361
    GIM_Reject,
    // Label 1092: @27362
    GIM_Reject,
    // Label 53: @27363
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 6, /*)*//*default:*//*Label 1117*/ 27525,
    /*GILLT_s32*//*Label 1112*/ 27374,
    /*GILLT_s64*//*Label 1113*/ 27415,
    /*GILLT_s128*//*Label 1114*/ 27459,
    /*GILLT_v2s64*//*Label 1115*/ 27479,
    /*GILLT_v4s32*//*Label 1116*/ 27502,
    // Label 1112: @27374
    GIM_Try, /*On fail goto*//*Label 1118*/ 27414,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 1119*/ 27395, // Rule ID 919 //
        GIM_CheckFeatures, GIFBS_HasP8Vector_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSSRCRegClassID,
        // (strict_fsqrt:{ *:[f32] } f32:{ *:[f32] }:$XB)  =>  (XSSQRTSP:{ *:[f32] } f32:{ *:[f32] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSQRTSP,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 919,
        GIR_Done,
      // Label 1119: @27395
      GIM_Try, /*On fail goto*//*Label 1120*/ 27413, // Rule ID 153 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F4RCRegClassID,
        // (strict_fsqrt:{ *:[f32] } f32:{ *:[f32] }:$frB)  =>  (FSQRTS:{ *:[f32] } f32:{ *:[f32] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSQRTS,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 153,
        GIR_Done,
      // Label 1120: @27413
      GIM_Reject,
    // Label 1118: @27414
    GIM_Reject,
    // Label 1113: @27415
    GIM_Try, /*On fail goto*//*Label 1121*/ 27458,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_Try, /*On fail goto*//*Label 1122*/ 27439, // Rule ID 768 //
        GIM_CheckFeatures, GIFBS_HasVSX,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSFRCRegClassID,
        // (strict_fsqrt:{ *:[f64] } f64:{ *:[f64] }:$XB)  =>  (XSSQRTDP:{ *:[f64] } f64:{ *:[f64] }:$XB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSQRTDP,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 768,
        GIR_Done,
      // Label 1122: @27439
      GIM_Try, /*On fail goto*//*Label 1123*/ 27457, // Rule ID 151 //
        GIM_CheckFeatures, GIFBS_HasFPU,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::F8RCRegClassID,
        // (strict_fsqrt:{ *:[f64] } f64:{ *:[f64] }:$frB)  =>  (FSQRT:{ *:[f64] } f64:{ *:[f64] }:$frB)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::FSQRT,
        GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 151,
        GIR_Done,
      // Label 1123: @27457
      GIM_Reject,
    // Label 1121: @27458
    GIM_Reject,
    // Label 1114: @27459
    GIM_Try, /*On fail goto*//*Label 1124*/ 27478, // Rule ID 951 //
      GIM_CheckFeatures, GIFBS_HasP9Vector_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s128,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VRRCRegClassID,
      // (strict_fsqrt:{ *:[f128] } f128:{ *:[f128] }:$vB)  =>  (XSSQRTQP:{ *:[f128] } f128:{ *:[f128] }:$vB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XSSQRTQP,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 951,
      GIR_Done,
    // Label 1124: @27478
    GIM_Reject,
    // Label 1115: @27479
    GIM_Try, /*On fail goto*//*Label 1125*/ 27501, // Rule ID 779 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fsqrt:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)  =>  (XVSQRTDP:{ *:[v2f64] } v2f64:{ *:[v2f64] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSQRTDP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 779,
      GIR_Done,
    // Label 1125: @27501
    GIM_Reject,
    // Label 1116: @27502
    GIM_Try, /*On fail goto*//*Label 1126*/ 27524, // Rule ID 781 //
      GIM_CheckFeatures, GIFBS_HasVSX,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/PPC::VSRCRegClassID,
      // (strict_fsqrt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)  =>  (XVSQRTSP:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$XB)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/PPC::XVSQRTSP,
      GIR_AddImplicitUse, /*InsnID*/0, PPC::RM,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 781,
      GIR_Done,
    // Label 1126: @27524
    GIM_Reject,
    // Label 1117: @27525
    GIM_Reject,
    // Label 54: @27526
    GIM_Reject,
    };
  return MatchTable0;
}
#endif // ifdef GET_GLOBALISEL_IMPL
#ifdef GET_GLOBALISEL_PREDICATES_DECL
PredicateBitset AvailableModuleFeatures;
mutable PredicateBitset AvailableFunctionFeatures;
PredicateBitset getAvailableFeatures() const {
  return AvailableModuleFeatures | AvailableFunctionFeatures;
}
PredicateBitset
computeAvailableModuleFeatures(const PPCSubtarget *Subtarget) const;
PredicateBitset
computeAvailableFunctionFeatures(const PPCSubtarget *Subtarget,
                                 const MachineFunction *MF) const;
void setupGeneratedPerFunctionState(MachineFunction &MF) override;
#endif // ifdef GET_GLOBALISEL_PREDICATES_DECL
#ifdef GET_GLOBALISEL_PREDICATES_INIT
AvailableModuleFeatures(computeAvailableModuleFeatures(&STI)),
AvailableFunctionFeatures()
#endif // ifdef GET_GLOBALISEL_PREDICATES_INIT
