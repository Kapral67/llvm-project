/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  FeatureBitset ComputeAvailableFeatures(const FeatureBitset &FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                FeatureBitset &MissingFeatures,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0);
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0) {
    FeatureBitset MissingFeatures;
    return MatchInstructionImpl(Operands, Inst, ErrorInfo, MissingFeatures,
                                matchingInlineAsm, VariantID);
  }

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_HasSIMD128Bit = 6,
  Feature_HasUnimplementedSIMD128Bit = 9,
  Feature_HasAtomicsBit = 0,
  Feature_HasMultivalueBit = 3,
  Feature_HasNontrappingFPToIntBit = 4,
  Feature_NotHasNontrappingFPToIntBit = 10,
  Feature_HasSignExtBit = 7,
  Feature_HasTailCallBit = 8,
  Feature_HasExceptionHandlingBit = 2,
  Feature_HasBulkMemoryBit = 1,
  Feature_HasReferenceTypesBit = 5,
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasSIMD128Bit: return "simd128";
  case Feature_HasUnimplementedSIMD128Bit: return "unimplemented-simd128";
  case Feature_HasAtomicsBit: return "atomics";
  case Feature_HasMultivalueBit: return "multivalue";
  case Feature_HasNontrappingFPToIntBit: return "nontrapping-fptoint";
  case Feature_NotHasNontrappingFPToIntBit: return "nontrapping-fptoint";
  case Feature_HasSignExtBit: return "sign-ext";
  case Feature_HasTailCallBit: return "tail-call";
  case Feature_HasExceptionHandlingBit: return "exception-handling";
  case Feature_HasBulkMemoryBit: return "bulk-memory";
  case Feature_HasReferenceTypesBit: return "reference-types";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static const uint8_t TiedAsmOperandTable[][3] = { /* empty  */ {0, 0, 0} };

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_imm_95_0,
  CVT_95_addImmOperands,
  CVT_95_addBrListOperands,
  CVT_95_addFPImmf32Operands,
  CVT_95_addFPImmf64Operands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__imm_95_0,
  Convert__Imm1_0,
  Convert__BrList1_0,
  Convert__Imm1_0__imm_95_0,
  Convert_NoOperands,
  Convert__imm_95_0__imm_95_0,
  Convert__FPImmf321_0,
  Convert__Imm1_1__Imm1_0,
  Convert__FPImmf641_0,
  Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15,
  Convert__Imm1_0__Imm1_1,
  Convert__FPImmf641_0__FPImmf641_1,
  Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3,
  Convert__FPImmf321_0__FPImmf321_1__FPImmf321_2__FPImmf321_3,
  Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7,
  Convert__Imm1_1__Imm1_0__Imm1_2,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][33] = {
  // Convert__imm_95_0
  { CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__BrList1_0
  { CVT_95_addBrListOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__imm_95_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__FPImmf321_0
  { CVT_95_addFPImmf32Operands, 1, CVT_Done },
  // Convert__Imm1_1__Imm1_0
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FPImmf641_0
  { CVT_95_addFPImmf64Operands, 1, CVT_Done },
  // Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 7, CVT_95_addImmOperands, 8, CVT_95_addImmOperands, 9, CVT_95_addImmOperands, 10, CVT_95_addImmOperands, 11, CVT_95_addImmOperands, 12, CVT_95_addImmOperands, 13, CVT_95_addImmOperands, 14, CVT_95_addImmOperands, 15, CVT_95_addImmOperands, 16, CVT_Done },
  // Convert__Imm1_0__Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FPImmf641_0__FPImmf641_1
  { CVT_95_addFPImmf64Operands, 1, CVT_95_addFPImmf64Operands, 2, CVT_Done },
  // Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FPImmf321_0__FPImmf321_1__FPImmf321_2__FPImmf321_3
  { CVT_95_addFPImmf32Operands, 1, CVT_95_addFPImmf32Operands, 2, CVT_95_addFPImmf32Operands, 3, CVT_95_addFPImmf32Operands, 4, CVT_Done },
  // Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 7, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Imm1_1__Imm1_0__Imm1_2
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
};

void WebAssemblyAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  unsigned OpIdx;
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p += 2) {
    OpIdx = *(p + 1);
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<WebAssemblyOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied: {
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                              std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned TiedResOpnd = TiedAsmOperandTable[OpIdx][0];
      if (TiedResOpnd != (uint8_t)-1)
        Inst.addOperand(Inst.getOperand(TiedResOpnd));
      break;
    }
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addImmOperands:
      static_cast<WebAssemblyOperand &>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addBrListOperands:
      static_cast<WebAssemblyOperand &>(*Operands[OpIdx]).addBrListOperands(Inst, 1);
      break;
    case CVT_95_addFPImmf32Operands:
      static_cast<WebAssemblyOperand &>(*Operands[OpIdx]).addFPImmf32Operands(Inst, 1);
      break;
    case CVT_95_addFPImmf64Operands:
      static_cast<WebAssemblyOperand &>(*Operands[OpIdx]).addFPImmf64Operands(Inst, 1);
      break;
    }
  }
}

void WebAssemblyAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p += 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBrListOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFPImmf32Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFPImmf64Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  OptionalMatchClass = 1,
  MCK_LAST_TOKEN = OptionalMatchClass,
  MCK_EXTERNREF, // register class 'EXTERNREF'
  MCK_F32, // register class 'F32'
  MCK_F64, // register class 'F64'
  MCK_FUNCREF, // register class 'FUNCREF'
  MCK_V128, // register class 'V128'
  MCK_I32, // register class 'I32'
  MCK_I64, // register class 'I64'
  MCK_LAST_REGISTER = MCK_I64,
  MCK_BrList, // user defined class 'BrListAsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_FPImmf32, // user defined class 'anonymous_2284'
  MCK_FPImmf64, // user defined class 'anonymous_2285'
  NumMatchClassKinds
};

} // end anonymous namespace

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  return false;
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  WebAssemblyOperand &Operand = (WebAssemblyOperand &)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'BrList' class
  case MCK_BrList: {
    DiagnosticPredicate DP(Operand.isBrList());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'Imm' class
  case MCK_Imm: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'FPImmf32' class
  case MCK_FPImmf32: {
    DiagnosticPredicate DP(Operand.isFPImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'FPImmf64' class
  case MCK_FPImmf64: {
    DiagnosticPredicate DP(Operand.isFPImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case WebAssembly::FP32: OpKind = MCK_I32; break;
    case WebAssembly::FP64: OpKind = MCK_I64; break;
    case WebAssembly::SP32: OpKind = MCK_I32; break;
    case WebAssembly::SP64: OpKind = MCK_I64; break;
    case WebAssembly::I32_0: OpKind = MCK_I32; break;
    case WebAssembly::I64_0: OpKind = MCK_I64; break;
    case WebAssembly::F32_0: OpKind = MCK_F32; break;
    case WebAssembly::F64_0: OpKind = MCK_F64; break;
    case WebAssembly::V128_0: OpKind = MCK_V128; break;
    case WebAssembly::FUNCREF_0: OpKind = MCK_FUNCREF; break;
    case WebAssembly::EXTERNREF_0: OpKind = MCK_EXTERNREF; break;
    }
    return isSubclass(OpKind, Kind) ? (unsigned)MCTargetAsmParser::Match_Success :
                                      getDiagKindFromRegisterClass(Kind);
  }

  if (Kind > MCK_LAST_TOKEN && Kind <= MCK_LAST_REGISTER)
    return getDiagKindFromRegisterClass(Kind);

  return MCTargetAsmParser::Match_InvalidOperand;
}

#ifndef NDEBUG
const char *getMatchClassName(MatchClassKind Kind) {
  switch (Kind) {
  case InvalidMatchClass: return "InvalidMatchClass";
  case OptionalMatchClass: return "OptionalMatchClass";
  case MCK_EXTERNREF: return "MCK_EXTERNREF";
  case MCK_F32: return "MCK_F32";
  case MCK_F64: return "MCK_F64";
  case MCK_FUNCREF: return "MCK_FUNCREF";
  case MCK_V128: return "MCK_V128";
  case MCK_I32: return "MCK_I32";
  case MCK_I64: return "MCK_I64";
  case MCK_BrList: return "MCK_BrList";
  case MCK_Imm: return "MCK_Imm";
  case MCK_FPImmf32: return "MCK_FPImmf32";
  case MCK_FPImmf64: return "MCK_FPImmf64";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
FeatureBitset WebAssemblyAsmParser::
ComputeAvailableFeatures(const FeatureBitset &FB) const {
  FeatureBitset Features;
  if (FB[WebAssembly::FeatureSIMD128])
    Features.set(Feature_HasSIMD128Bit);
  if (FB[WebAssembly::FeatureUnimplementedSIMD128])
    Features.set(Feature_HasUnimplementedSIMD128Bit);
  if (FB[WebAssembly::FeatureAtomics])
    Features.set(Feature_HasAtomicsBit);
  if (FB[WebAssembly::FeatureMultivalue])
    Features.set(Feature_HasMultivalueBit);
  if (FB[WebAssembly::FeatureNontrappingFPToInt])
    Features.set(Feature_HasNontrappingFPToIntBit);
  if (!FB[WebAssembly::FeatureNontrappingFPToInt])
    Features.set(Feature_NotHasNontrappingFPToIntBit);
  if (FB[WebAssembly::FeatureSignExt])
    Features.set(Feature_HasSignExtBit);
  if (FB[WebAssembly::FeatureTailCall])
    Features.set(Feature_HasTailCallBit);
  if (FB[WebAssembly::FeatureExceptionHandling])
    Features.set(Feature_HasExceptionHandlingBit);
  if (FB[WebAssembly::FeatureBulkMemory])
    Features.set(Feature_HasBulkMemoryBit);
  if (FB[WebAssembly::FeatureReferenceTypes])
    Features.set(Feature_HasReferenceTypesBit);
  return Features;
}

static bool checkAsmTiedOperandConstraints(const WebAssemblyAsmParser&AsmParser,
                               unsigned Kind,
                               const OperandVector &Operands,
                               uint64_t &ErrorInfo) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p += 2) {
    switch (*p) {
    case CVT_Tied: {
      unsigned OpIdx = *(p + 1);
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                              std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned OpndNum1 = TiedAsmOperandTable[OpIdx][1];
      unsigned OpndNum2 = TiedAsmOperandTable[OpIdx][2];
      if (OpndNum1 != OpndNum2) {
        auto &SrcOp1 = Operands[OpndNum1];
        auto &SrcOp2 = Operands[OpndNum2];
        if (SrcOp1->isReg() && SrcOp2->isReg()) {
          if (!AsmParser.regsEqual(*SrcOp1, *SrcOp2)) {
            ErrorInfo = OpndNum2;
            return false;
          }
        }
      }
      break;
    }
    default:
      break;
    }
  }
  return true;
}

static const char *const MnemonicTable =
    "\014atomic.fence\005block\002br\005br_if\010br_table\004call\015call_in"
    "direct\013call_params\014call_results\005catch\tcatch_all\010catchret\n"
    "cleanupret\016compiler_fence\tdata.drop\004drop\004else\003end\tend_blo"
    "ck\014end_function\006end_if\010end_loop\007end_try\020externref.select"
    "\007f32.abs\007f32.add\010f32.ceil\tf32.const\021f32.convert_i32_s\021f"
    "32.convert_i32_u\021f32.convert_i64_s\021f32.convert_i64_u\014f32.copys"
    "ign\016f32.demote_f64\007f32.div\006f32.eq\tf32.floor\006f32.ge\006f32."
    "gt\006f32.le\010f32.load\006f32.lt\007f32.max\007f32.min\007f32.mul\006"
    "f32.ne\013f32.nearest\007f32.neg\023f32.reinterpret_i32\nf32.select\010"
    "f32.sqrt\tf32.store\007f32.sub\tf32.trunc\tf32x4.abs\tf32x4.add\nf32x4."
    "ceil\025f32x4.convert_i32x4_s\025f32x4.convert_i32x4_u\027f32x4.demote_"
    "zero_f64x2\tf32x4.div\010f32x4.eq\022f32x4.extract_lane\013f32x4.floor\010"
    "f32x4.ge\010f32x4.gt\010f32x4.le\010f32x4.lt\tf32x4.max\tf32x4.min\tf32"
    "x4.mul\010f32x4.ne\015f32x4.nearest\tf32x4.neg\nf32x4.pmax\nf32x4.pmin\n"
    "f32x4.qfma\nf32x4.qfms\022f32x4.replace_lane\013f32x4.splat\nf32x4.sqrt"
    "\tf32x4.sub\013f32x4.trunc\007f64.abs\007f64.add\010f64.ceil\tf64.const"
    "\021f64.convert_i32_s\021f64.convert_i32_u\021f64.convert_i64_s\021f64."
    "convert_i64_u\014f64.copysign\007f64.div\006f64.eq\tf64.floor\006f64.ge"
    "\006f64.gt\006f64.le\010f64.load\006f64.lt\007f64.max\007f64.min\007f64"
    ".mul\006f64.ne\013f64.nearest\007f64.neg\017f64.promote_f32\023f64.rein"
    "terpret_i64\nf64.select\010f64.sqrt\tf64.store\007f64.sub\tf64.trunc\tf"
    "64x2.abs\tf64x2.add\nf64x2.ceil\031f64x2.convert_low_i32x4_s\031f64x2.c"
    "onvert_low_i32x4_u\tf64x2.div\010f64x2.eq\022f64x2.extract_lane\013f64x"
    "2.floor\010f64x2.ge\010f64x2.gt\010f64x2.le\010f64x2.lt\tf64x2.max\tf64"
    "x2.min\tf64x2.mul\010f64x2.ne\015f64x2.nearest\tf64x2.neg\nf64x2.pmax\n"
    "f64x2.pmin\027f64x2.promote_low_f32x4\nf64x2.qfma\nf64x2.qfms\022f64x2."
    "replace_lane\013f64x2.splat\nf64x2.sqrt\tf64x2.sub\013f64x2.trunc\016fu"
    "ncref.select\nglobal.get\nglobal.set\ti16x8.abs\ti16x8.add\024i16x8.add"
    "_saturate_s\024i16x8.add_saturate_u\016i16x8.all_true\016i16x8.any_true"
    "\014i16x8.avgr_u\015i16x8.bitmask\010i16x8.eq\035i16x8.extadd_pairwise_"
    "i8x16_s\035i16x8.extadd_pairwise_i8x16_u\031i16x8.extmul_high_i8x16_s\031"
    "i16x8.extmul_high_i8x16_u\030i16x8.extmul_low_i8x16_s\030i16x8.extmul_l"
    "ow_i8x16_u\024i16x8.extract_lane_s\024i16x8.extract_lane_u\ni16x8.ge_s\n"
    "i16x8.ge_u\ni16x8.gt_s\ni16x8.gt_u\ni16x8.le_s\ni16x8.le_u\017i16x8.loa"
    "d8x8_s\017i16x8.load8x8_u\ni16x8.lt_s\ni16x8.lt_u\013i16x8.max_s\013i16"
    "x8.max_u\013i16x8.min_s\013i16x8.min_u\ti16x8.mul\024i16x8.narrow_i32x4"
    "_s\024i16x8.narrow_i32x4_u\010i16x8.ne\ti16x8.neg\023i16x8.q15mulr_sat_"
    "s\022i16x8.replace_lane\ti16x8.shl\013i16x8.shr_s\013i16x8.shr_u\020i16"
    "x8.signselect\013i16x8.splat\ti16x8.sub\024i16x8.sub_saturate_s\024i16x"
    "8.sub_saturate_u\030i16x8.widen_high_i8x16_s\030i16x8.widen_high_i8x16_"
    "u\027i16x8.widen_low_i8x16_s\027i16x8.widen_low_i8x16_u\007i32.add\007i"
    "32.and\017i32.atomic.load\023i32.atomic.load16_u\022i32.atomic.load8_u\022"
    "i32.atomic.rmw.add\022i32.atomic.rmw.and\026i32.atomic.rmw.cmpxchg\021i"
    "32.atomic.rmw.or\022i32.atomic.rmw.sub\023i32.atomic.rmw.xchg\022i32.at"
    "omic.rmw.xor\026i32.atomic.rmw16.add_u\026i32.atomic.rmw16.and_u\032i32"
    ".atomic.rmw16.cmpxchg_u\025i32.atomic.rmw16.or_u\026i32.atomic.rmw16.su"
    "b_u\027i32.atomic.rmw16.xchg_u\026i32.atomic.rmw16.xor_u\025i32.atomic."
    "rmw8.add_u\025i32.atomic.rmw8.and_u\031i32.atomic.rmw8.cmpxchg_u\024i32"
    ".atomic.rmw8.or_u\025i32.atomic.rmw8.sub_u\026i32.atomic.rmw8.xchg_u\025"
    "i32.atomic.rmw8.xor_u\020i32.atomic.store\022i32.atomic.store16\021i32."
    "atomic.store8\007i32.clz\ti32.const\007i32.ctz\ti32.div_s\ti32.div_u\006"
    "i32.eq\007i32.eqz\016i32.extend16_s\015i32.extend8_s\010i32.ge_s\010i32"
    ".ge_u\010i32.gt_s\010i32.gt_u\010i32.le_s\010i32.le_u\010i32.load\014i3"
    "2.load16_s\014i32.load16_u\013i32.load8_s\013i32.load8_u\010i32.lt_s\010"
    "i32.lt_u\007i32.mul\006i32.ne\006i32.or\ni32.popcnt\023i32.reinterpret_"
    "f32\ti32.rem_s\ti32.rem_u\010i32.rotl\010i32.rotr\ni32.select\007i32.sh"
    "l\ti32.shr_s\ti32.shr_u\ti32.store\013i32.store16\ni32.store8\007i32.su"
    "b\017i32.trunc_f32_s\017i32.trunc_f32_u\017i32.trunc_f64_s\017i32.trunc"
    "_f64_u\023i32.trunc_sat_f32_s\023i32.trunc_sat_f32_u\023i32.trunc_sat_f"
    "64_s\023i32.trunc_sat_f64_u\014i32.wrap_i64\007i32.xor\ti32x4.abs\ti32x"
    "4.add\016i32x4.all_true\016i32x4.any_true\015i32x4.bitmask\021i32x4.dot"
    "_i16x8_s\010i32x4.eq\035i32x4.extadd_pairwise_i16x8_s\035i32x4.extadd_p"
    "airwise_i16x8_u\031i32x4.extmul_high_i16x8_s\031i32x4.extmul_high_i16x8"
    "_u\030i32x4.extmul_low_i16x8_s\030i32x4.extmul_low_i16x8_u\022i32x4.ext"
    "ract_lane\ni32x4.ge_s\ni32x4.ge_u\ni32x4.gt_s\ni32x4.gt_u\ni32x4.le_s\n"
    "i32x4.le_u\020i32x4.load16x4_s\020i32x4.load16x4_u\ni32x4.lt_s\ni32x4.l"
    "t_u\013i32x4.max_s\013i32x4.max_u\013i32x4.min_s\013i32x4.min_u\ti32x4."
    "mul\010i32x4.ne\ti32x4.neg\022i32x4.replace_lane\ti32x4.shl\013i32x4.sh"
    "r_s\013i32x4.shr_u\020i32x4.signselect\013i32x4.splat\ti32x4.sub\027i32"
    "x4.trunc_sat_f32x4_s\027i32x4.trunc_sat_f32x4_u\034i32x4.trunc_sat_zero"
    "_f64x2_s\034i32x4.trunc_sat_zero_f64x2_u\030i32x4.widen_high_i16x8_s\030"
    "i32x4.widen_high_i16x8_u\023i32x4.widen_i8x16_s\023i32x4.widen_i8x16_u\027"
    "i32x4.widen_low_i16x8_s\027i32x4.widen_low_i16x8_u\007i64.add\007i64.an"
    "d\017i64.atomic.load\023i64.atomic.load16_u\023i64.atomic.load32_u\022i"
    "64.atomic.load8_u\022i64.atomic.rmw.add\022i64.atomic.rmw.and\026i64.at"
    "omic.rmw.cmpxchg\021i64.atomic.rmw.or\022i64.atomic.rmw.sub\023i64.atom"
    "ic.rmw.xchg\022i64.atomic.rmw.xor\026i64.atomic.rmw16.add_u\026i64.atom"
    "ic.rmw16.and_u\032i64.atomic.rmw16.cmpxchg_u\025i64.atomic.rmw16.or_u\026"
    "i64.atomic.rmw16.sub_u\027i64.atomic.rmw16.xchg_u\026i64.atomic.rmw16.x"
    "or_u\026i64.atomic.rmw32.add_u\026i64.atomic.rmw32.and_u\032i64.atomic."
    "rmw32.cmpxchg_u\025i64.atomic.rmw32.or_u\026i64.atomic.rmw32.sub_u\027i"
    "64.atomic.rmw32.xchg_u\026i64.atomic.rmw32.xor_u\025i64.atomic.rmw8.add"
    "_u\025i64.atomic.rmw8.and_u\031i64.atomic.rmw8.cmpxchg_u\024i64.atomic."
    "rmw8.or_u\025i64.atomic.rmw8.sub_u\026i64.atomic.rmw8.xchg_u\025i64.ato"
    "mic.rmw8.xor_u\020i64.atomic.store\022i64.atomic.store16\022i64.atomic."
    "store32\021i64.atomic.store8\007i64.clz\ti64.const\007i64.ctz\ti64.div_"
    "s\ti64.div_u\006i64.eq\007i64.eqz\016i64.extend16_s\016i64.extend32_s\015"
    "i64.extend8_s\020i64.extend_i32_s\020i64.extend_i32_u\010i64.ge_s\010i6"
    "4.ge_u\010i64.gt_s\010i64.gt_u\010i64.le_s\010i64.le_u\010i64.load\014i"
    "64.load16_s\014i64.load16_u\014i64.load32_s\014i64.load32_u\013i64.load"
    "8_s\013i64.load8_u\010i64.lt_s\010i64.lt_u\007i64.mul\006i64.ne\006i64."
    "or\ni64.popcnt\023i64.reinterpret_f64\ti64.rem_s\ti64.rem_u\010i64.rotl"
    "\010i64.rotr\ni64.select\007i64.shl\ti64.shr_s\ti64.shr_u\ti64.store\013"
    "i64.store16\013i64.store32\ni64.store8\007i64.sub\017i64.trunc_f32_s\017"
    "i64.trunc_f32_u\017i64.trunc_f64_s\017i64.trunc_f64_u\023i64.trunc_sat_"
    "f32_s\023i64.trunc_sat_f32_u\023i64.trunc_sat_f64_s\023i64.trunc_sat_f6"
    "4_u\007i64.xor\ti64x2.abs\ti64x2.add\016i64x2.all_true\016i64x2.any_tru"
    "e\015i64x2.bitmask\010i64x2.eq\031i64x2.extmul_high_i32x4_s\031i64x2.ex"
    "tmul_high_i32x4_u\030i64x2.extmul_low_i32x4_s\030i64x2.extmul_low_i32x4"
    "_u\022i64x2.extract_lane\020i64x2.load32x2_s\020i64x2.load32x2_u\ti64x2"
    ".mul\ti64x2.neg\022i64x2.replace_lane\ti64x2.shl\013i64x2.shr_s\013i64x"
    "2.shr_u\020i64x2.signselect\013i64x2.splat\ti64x2.sub\030i64x2.widen_hi"
    "gh_i32x4_s\030i64x2.widen_high_i32x4_u\027i64x2.widen_low_i32x4_s\027i6"
    "4x2.widen_low_i32x4_u\ti8x16.abs\ti8x16.add\024i8x16.add_saturate_s\024"
    "i8x16.add_saturate_u\016i8x16.all_true\016i8x16.any_true\014i8x16.avgr_"
    "u\015i8x16.bitmask\010i8x16.eq\024i8x16.extract_lane_s\024i8x16.extract"
    "_lane_u\ni8x16.ge_s\ni8x16.ge_u\ni8x16.gt_s\ni8x16.gt_u\ni8x16.le_s\ni8"
    "x16.le_u\ni8x16.lt_s\ni8x16.lt_u\013i8x16.max_s\013i8x16.max_u\013i8x16"
    ".min_s\013i8x16.min_u\024i8x16.narrow_i16x8_s\024i8x16.narrow_i16x8_u\010"
    "i8x16.ne\ti8x16.neg\014i8x16.popcnt\022i8x16.replace_lane\ti8x16.shl\013"
    "i8x16.shr_s\013i8x16.shr_u\015i8x16.shuffle\020i8x16.signselect\013i8x1"
    "6.splat\ti8x16.sub\024i8x16.sub_saturate_s\024i8x16.sub_saturate_u\015i"
    "8x16.swizzle\002if\tlocal.get\tlocal.set\tlocal.tee\004loop\024memory.a"
    "tomic.notify\024memory.atomic.wait32\024memory.atomic.wait64\013memory."
    "copy\013memory.fill\013memory.grow\013memory.init\013memory.size\003nop"
    "\013prefetch.nt\nprefetch.t\010ref.null\007rethrow\006return\013return_"
    "call\024return_call_indirect\023return_call_results\ntable.copy\ntable."
    "fill\ttable.get\ntable.grow\ttable.set\ntable.size\005throw\003try\013u"
    "nreachable\010v128.and\013v128.andnot\016v128.bitselect\nv128.const\tv1"
    "28.load\020v128.load16_lane\021v128.load16_splat\020v128.load32_lane\021"
    "v128.load32_splat\020v128.load32_zero\020v128.load64_lane\021v128.load6"
    "4_splat\020v128.load64_zero\017v128.load8_lane\020v128.load8_splat\010v"
    "128.not\007v128.or\013v128.select\nv128.store\021v128.store16_lane\021v"
    "128.store32_lane\021v128.store64_lane\020v128.store8_lane\010v128.xor";

// Feature bitsets.
enum : uint8_t {
  AMFBS_None,
  AMFBS_HasAtomics,
  AMFBS_HasBulkMemory,
  AMFBS_HasExceptionHandling,
  AMFBS_HasNontrappingFPToInt,
  AMFBS_HasReferenceTypes,
  AMFBS_HasSIMD128,
  AMFBS_HasSignExt,
  AMFBS_HasTailCall,
  AMFBS_HasUnimplementedSIMD128,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // AMFBS_None
  {Feature_HasAtomicsBit, },
  {Feature_HasBulkMemoryBit, },
  {Feature_HasExceptionHandlingBit, },
  {Feature_HasNontrappingFPToIntBit, },
  {Feature_HasReferenceTypesBit, },
  {Feature_HasSIMD128Bit, },
  {Feature_HasSignExtBit, },
  {Feature_HasTailCallBit, },
  {Feature_HasUnimplementedSIMD128Bit, },
};

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint8_t ConvertFn;
    uint8_t RequiredFeaturesIdx;
    uint8_t Classes[16];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace

static const MatchEntry MatchTable0[] = {
  { 0 /* atomic.fence */, WebAssembly::ATOMIC_FENCE_S, Convert__imm_95_0, AMFBS_HasAtomics, {  }, },
  { 13 /* block */, WebAssembly::BLOCK_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 19 /* br */, WebAssembly::BR_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 22 /* br_if */, WebAssembly::BR_IF_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 28 /* br_table */, WebAssembly::BR_TABLE_I32_S, Convert__BrList1_0, AMFBS_None, { MCK_BrList }, },
  { 28 /* br_table */, WebAssembly::BR_TABLE_I64_S, Convert__BrList1_0, AMFBS_None, { MCK_BrList }, },
  { 37 /* call */, WebAssembly::CALL_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 42 /* call_indirect */, WebAssembly::CALL_INDIRECT_S, Convert__Imm1_0__imm_95_0, AMFBS_None, { MCK_Imm }, },
  { 56 /* call_params */, WebAssembly::CALL_PARAMS_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 68 /* call_results */, WebAssembly::CALL_RESULTS_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 81 /* catch */, WebAssembly::CATCH_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 87 /* catch_all */, WebAssembly::CATCH_ALL_S, Convert_NoOperands, AMFBS_HasExceptionHandling, {  }, },
  { 97 /* catchret */, WebAssembly::CATCHRET_S, Convert__imm_95_0__imm_95_0, AMFBS_HasExceptionHandling, {  }, },
  { 106 /* cleanupret */, WebAssembly::CLEANUPRET_S, Convert_NoOperands, AMFBS_HasExceptionHandling, {  }, },
  { 117 /* compiler_fence */, WebAssembly::COMPILER_FENCE_S, Convert_NoOperands, AMFBS_HasAtomics, {  }, },
  { 132 /* data.drop */, WebAssembly::anonymous_4568DATA_DROP_S, Convert__Imm1_0, AMFBS_HasBulkMemory, { MCK_Imm }, },
  { 132 /* data.drop */, WebAssembly::anonymous_4569DATA_DROP_S, Convert__Imm1_0, AMFBS_HasBulkMemory, { MCK_Imm }, },
  { 142 /* drop */, WebAssembly::DROP_EXTERNREF_S, Convert_NoOperands, AMFBS_HasReferenceTypes, {  }, },
  { 142 /* drop */, WebAssembly::DROP_FUNCREF_S, Convert_NoOperands, AMFBS_HasReferenceTypes, {  }, },
  { 142 /* drop */, WebAssembly::DROP_V128_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 142 /* drop */, WebAssembly::DROP_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 142 /* drop */, WebAssembly::DROP_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 142 /* drop */, WebAssembly::DROP_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 142 /* drop */, WebAssembly::DROP_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 147 /* else */, WebAssembly::ELSE_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 152 /* end */, WebAssembly::END_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 156 /* end_block */, WebAssembly::END_BLOCK_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 166 /* end_function */, WebAssembly::END_FUNCTION_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 179 /* end_if */, WebAssembly::END_IF_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 186 /* end_loop */, WebAssembly::END_LOOP_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 195 /* end_try */, WebAssembly::END_TRY_S, Convert_NoOperands, AMFBS_HasExceptionHandling, {  }, },
  { 203 /* externref.select */, WebAssembly::SELECT_EXTERNREF_S, Convert_NoOperands, AMFBS_HasReferenceTypes, {  }, },
  { 220 /* f32.abs */, WebAssembly::ABS_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 228 /* f32.add */, WebAssembly::ADD_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 236 /* f32.ceil */, WebAssembly::CEIL_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 245 /* f32.const */, WebAssembly::CONST_F32_S, Convert__FPImmf321_0, AMFBS_None, { MCK_FPImmf32 }, },
  { 255 /* f32.convert_i32_s */, WebAssembly::F32_CONVERT_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 273 /* f32.convert_i32_u */, WebAssembly::F32_CONVERT_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 291 /* f32.convert_i64_s */, WebAssembly::F32_CONVERT_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 309 /* f32.convert_i64_u */, WebAssembly::F32_CONVERT_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 327 /* f32.copysign */, WebAssembly::COPYSIGN_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 340 /* f32.demote_f64 */, WebAssembly::F32_DEMOTE_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 355 /* f32.div */, WebAssembly::DIV_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 363 /* f32.eq */, WebAssembly::EQ_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 370 /* f32.floor */, WebAssembly::FLOOR_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 380 /* f32.ge */, WebAssembly::GE_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 387 /* f32.gt */, WebAssembly::GT_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 394 /* f32.le */, WebAssembly::LE_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 401 /* f32.load */, WebAssembly::LOAD_F32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 401 /* f32.load */, WebAssembly::LOAD_F32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 410 /* f32.lt */, WebAssembly::LT_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 417 /* f32.max */, WebAssembly::MAX_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 425 /* f32.min */, WebAssembly::MIN_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 433 /* f32.mul */, WebAssembly::MUL_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 441 /* f32.ne */, WebAssembly::NE_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 448 /* f32.nearest */, WebAssembly::NEAREST_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 460 /* f32.neg */, WebAssembly::NEG_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 468 /* f32.reinterpret_i32 */, WebAssembly::F32_REINTERPRET_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 488 /* f32.select */, WebAssembly::SELECT_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 499 /* f32.sqrt */, WebAssembly::SQRT_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 508 /* f32.store */, WebAssembly::STORE_F32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 508 /* f32.store */, WebAssembly::STORE_F32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 518 /* f32.sub */, WebAssembly::SUB_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 526 /* f32.trunc */, WebAssembly::TRUNC_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 536 /* f32x4.abs */, WebAssembly::ABS_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 546 /* f32x4.add */, WebAssembly::ADD_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 556 /* f32x4.ceil */, WebAssembly::CEIL_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 567 /* f32x4.convert_i32x4_s */, WebAssembly::sint_to_fp_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 589 /* f32x4.convert_i32x4_u */, WebAssembly::uint_to_fp_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 611 /* f32x4.demote_zero_f64x2 */, WebAssembly::int_wasm_demote_zero_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 635 /* f32x4.div */, WebAssembly::DIV_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 645 /* f32x4.eq */, WebAssembly::EQ_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 654 /* f32x4.extract_lane */, WebAssembly::EXTRACT_LANE_F32x4_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 673 /* f32x4.floor */, WebAssembly::FLOOR_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 685 /* f32x4.ge */, WebAssembly::GE_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 694 /* f32x4.gt */, WebAssembly::GT_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 703 /* f32x4.le */, WebAssembly::LE_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 712 /* f32x4.lt */, WebAssembly::LT_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 721 /* f32x4.max */, WebAssembly::MAX_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 731 /* f32x4.min */, WebAssembly::MIN_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 741 /* f32x4.mul */, WebAssembly::MUL_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 751 /* f32x4.ne */, WebAssembly::NE_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 760 /* f32x4.nearest */, WebAssembly::NEAREST_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 774 /* f32x4.neg */, WebAssembly::NEG_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 784 /* f32x4.pmax */, WebAssembly::PMAX_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 795 /* f32x4.pmin */, WebAssembly::PMIN_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 806 /* f32x4.qfma */, WebAssembly::QFMA_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 817 /* f32x4.qfms */, WebAssembly::QFMS_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 828 /* f32x4.replace_lane */, WebAssembly::REPLACE_LANE_F32x4_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 847 /* f32x4.splat */, WebAssembly::SPLAT_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 859 /* f32x4.sqrt */, WebAssembly::SQRT_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 870 /* f32x4.sub */, WebAssembly::SUB_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 880 /* f32x4.trunc */, WebAssembly::TRUNC_F32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 892 /* f64.abs */, WebAssembly::ABS_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 900 /* f64.add */, WebAssembly::ADD_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 908 /* f64.ceil */, WebAssembly::CEIL_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 917 /* f64.const */, WebAssembly::CONST_F64_S, Convert__FPImmf641_0, AMFBS_None, { MCK_FPImmf64 }, },
  { 927 /* f64.convert_i32_s */, WebAssembly::F64_CONVERT_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 945 /* f64.convert_i32_u */, WebAssembly::F64_CONVERT_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 963 /* f64.convert_i64_s */, WebAssembly::F64_CONVERT_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 981 /* f64.convert_i64_u */, WebAssembly::F64_CONVERT_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 999 /* f64.copysign */, WebAssembly::COPYSIGN_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1012 /* f64.div */, WebAssembly::DIV_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1020 /* f64.eq */, WebAssembly::EQ_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1027 /* f64.floor */, WebAssembly::FLOOR_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1037 /* f64.ge */, WebAssembly::GE_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1044 /* f64.gt */, WebAssembly::GT_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1051 /* f64.le */, WebAssembly::LE_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1058 /* f64.load */, WebAssembly::LOAD_F64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 1058 /* f64.load */, WebAssembly::LOAD_F64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 1067 /* f64.lt */, WebAssembly::LT_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1074 /* f64.max */, WebAssembly::MAX_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1082 /* f64.min */, WebAssembly::MIN_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1090 /* f64.mul */, WebAssembly::MUL_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1098 /* f64.ne */, WebAssembly::NE_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1105 /* f64.nearest */, WebAssembly::NEAREST_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1117 /* f64.neg */, WebAssembly::NEG_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1125 /* f64.promote_f32 */, WebAssembly::F64_PROMOTE_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1141 /* f64.reinterpret_i64 */, WebAssembly::F64_REINTERPRET_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1161 /* f64.select */, WebAssembly::SELECT_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1172 /* f64.sqrt */, WebAssembly::SQRT_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1181 /* f64.store */, WebAssembly::STORE_F64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 1181 /* f64.store */, WebAssembly::STORE_F64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 1191 /* f64.sub */, WebAssembly::SUB_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1199 /* f64.trunc */, WebAssembly::TRUNC_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 1209 /* f64x2.abs */, WebAssembly::ABS_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1219 /* f64x2.add */, WebAssembly::ADD_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1229 /* f64x2.ceil */, WebAssembly::CEIL_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1240 /* f64x2.convert_low_i32x4_s */, WebAssembly::int_wasm_convert_low_signed_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1266 /* f64x2.convert_low_i32x4_u */, WebAssembly::int_wasm_convert_low_unsigned_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1292 /* f64x2.div */, WebAssembly::DIV_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1302 /* f64x2.eq */, WebAssembly::EQ_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1311 /* f64x2.extract_lane */, WebAssembly::EXTRACT_LANE_F64x2_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1330 /* f64x2.floor */, WebAssembly::FLOOR_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1342 /* f64x2.ge */, WebAssembly::GE_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1351 /* f64x2.gt */, WebAssembly::GT_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1360 /* f64x2.le */, WebAssembly::LE_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1369 /* f64x2.lt */, WebAssembly::LT_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1378 /* f64x2.max */, WebAssembly::MAX_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1388 /* f64x2.min */, WebAssembly::MIN_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1398 /* f64x2.mul */, WebAssembly::MUL_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1408 /* f64x2.ne */, WebAssembly::NE_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1417 /* f64x2.nearest */, WebAssembly::NEAREST_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1431 /* f64x2.neg */, WebAssembly::NEG_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1441 /* f64x2.pmax */, WebAssembly::PMAX_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1452 /* f64x2.pmin */, WebAssembly::PMIN_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1463 /* f64x2.promote_low_f32x4 */, WebAssembly::int_wasm_promote_low_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1487 /* f64x2.qfma */, WebAssembly::QFMA_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1498 /* f64x2.qfms */, WebAssembly::QFMS_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1509 /* f64x2.replace_lane */, WebAssembly::REPLACE_LANE_F64x2_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1528 /* f64x2.splat */, WebAssembly::SPLAT_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1540 /* f64x2.sqrt */, WebAssembly::SQRT_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1551 /* f64x2.sub */, WebAssembly::SUB_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1561 /* f64x2.trunc */, WebAssembly::TRUNC_F64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1573 /* funcref.select */, WebAssembly::SELECT_FUNCREF_S, Convert_NoOperands, AMFBS_HasReferenceTypes, {  }, },
  { 1588 /* global.get */, WebAssembly::GLOBAL_GET_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 1588 /* global.get */, WebAssembly::GLOBAL_GET_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 1588 /* global.get */, WebAssembly::GLOBAL_GET_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1588 /* global.get */, WebAssembly::GLOBAL_GET_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1588 /* global.get */, WebAssembly::GLOBAL_GET_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1588 /* global.get */, WebAssembly::GLOBAL_GET_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1588 /* global.get */, WebAssembly::GLOBAL_GET_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1599 /* global.set */, WebAssembly::GLOBAL_SET_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 1599 /* global.set */, WebAssembly::GLOBAL_SET_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 1599 /* global.set */, WebAssembly::GLOBAL_SET_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1599 /* global.set */, WebAssembly::GLOBAL_SET_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1599 /* global.set */, WebAssembly::GLOBAL_SET_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1599 /* global.set */, WebAssembly::GLOBAL_SET_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1599 /* global.set */, WebAssembly::GLOBAL_SET_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 1610 /* i16x8.abs */, WebAssembly::ABS_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1620 /* i16x8.add */, WebAssembly::ADD_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1630 /* i16x8.add_saturate_s */, WebAssembly::ADD_SAT_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1651 /* i16x8.add_saturate_u */, WebAssembly::ADD_SAT_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1672 /* i16x8.all_true */, WebAssembly::ALLTRUE_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1687 /* i16x8.any_true */, WebAssembly::ANYTRUE_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1702 /* i16x8.avgr_u */, WebAssembly::AVGR_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1715 /* i16x8.bitmask */, WebAssembly::BITMASK_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1729 /* i16x8.eq */, WebAssembly::EQ_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1738 /* i16x8.extadd_pairwise_i8x16_s */, WebAssembly::int_wasm_extadd_pairwise_signed_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1768 /* i16x8.extadd_pairwise_i8x16_u */, WebAssembly::int_wasm_extadd_pairwise_unsigned_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1798 /* i16x8.extmul_high_i8x16_s */, WebAssembly::EXTMUL_HIGH_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1824 /* i16x8.extmul_high_i8x16_u */, WebAssembly::EXTMUL_HIGH_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1850 /* i16x8.extmul_low_i8x16_s */, WebAssembly::EXTMUL_LOW_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1875 /* i16x8.extmul_low_i8x16_u */, WebAssembly::EXTMUL_LOW_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1900 /* i16x8.extract_lane_s */, WebAssembly::EXTRACT_LANE_I16x8_s_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1921 /* i16x8.extract_lane_u */, WebAssembly::EXTRACT_LANE_I16x8_u_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 1942 /* i16x8.ge_s */, WebAssembly::GE_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1953 /* i16x8.ge_u */, WebAssembly::GE_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1964 /* i16x8.gt_s */, WebAssembly::GT_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1975 /* i16x8.gt_u */, WebAssembly::GT_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1986 /* i16x8.le_s */, WebAssembly::LE_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 1997 /* i16x8.le_u */, WebAssembly::LE_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2008 /* i16x8.load8x8_s */, WebAssembly::LOAD_EXTEND_S_I16x8_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 2008 /* i16x8.load8x8_s */, WebAssembly::LOAD_EXTEND_S_I16x8_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 2024 /* i16x8.load8x8_u */, WebAssembly::LOAD_EXTEND_U_I16x8_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 2024 /* i16x8.load8x8_u */, WebAssembly::LOAD_EXTEND_U_I16x8_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 2040 /* i16x8.lt_s */, WebAssembly::LT_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2051 /* i16x8.lt_u */, WebAssembly::LT_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2062 /* i16x8.max_s */, WebAssembly::MAX_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2074 /* i16x8.max_u */, WebAssembly::MAX_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2086 /* i16x8.min_s */, WebAssembly::MIN_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2098 /* i16x8.min_u */, WebAssembly::MIN_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2110 /* i16x8.mul */, WebAssembly::MUL_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2120 /* i16x8.narrow_i32x4_s */, WebAssembly::NARROW_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2141 /* i16x8.narrow_i32x4_u */, WebAssembly::NARROW_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2162 /* i16x8.ne */, WebAssembly::NE_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2171 /* i16x8.neg */, WebAssembly::NEG_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2181 /* i16x8.q15mulr_sat_s */, WebAssembly::Q15MULR_SAT_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2201 /* i16x8.replace_lane */, WebAssembly::REPLACE_LANE_I16x8_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 2220 /* i16x8.shl */, WebAssembly::SHL_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2230 /* i16x8.shr_s */, WebAssembly::SHR_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2242 /* i16x8.shr_u */, WebAssembly::SHR_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2254 /* i16x8.signselect */, WebAssembly::anonymous_4466SIGNSELECT_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2271 /* i16x8.splat */, WebAssembly::SPLAT_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2283 /* i16x8.sub */, WebAssembly::SUB_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2293 /* i16x8.sub_saturate_s */, WebAssembly::SUB_SAT_S_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2314 /* i16x8.sub_saturate_u */, WebAssembly::SUB_SAT_U_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2335 /* i16x8.widen_high_i8x16_s */, WebAssembly::widen_high_s_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2360 /* i16x8.widen_high_i8x16_u */, WebAssembly::widen_high_u_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2385 /* i16x8.widen_low_i8x16_s */, WebAssembly::widen_low_s_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2409 /* i16x8.widen_low_i8x16_u */, WebAssembly::widen_low_u_I16x8_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 2433 /* i32.add */, WebAssembly::ADD_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2441 /* i32.and */, WebAssembly::AND_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 2449 /* i32.atomic.load */, WebAssembly::ATOMIC_LOAD_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2449 /* i32.atomic.load */, WebAssembly::ATOMIC_LOAD_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2465 /* i32.atomic.load16_u */, WebAssembly::ATOMIC_LOAD16_U_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2465 /* i32.atomic.load16_u */, WebAssembly::ATOMIC_LOAD16_U_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2485 /* i32.atomic.load8_u */, WebAssembly::ATOMIC_LOAD8_U_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2485 /* i32.atomic.load8_u */, WebAssembly::ATOMIC_LOAD8_U_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2504 /* i32.atomic.rmw.add */, WebAssembly::ATOMIC_RMW_ADD_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2504 /* i32.atomic.rmw.add */, WebAssembly::ATOMIC_RMW_ADD_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2523 /* i32.atomic.rmw.and */, WebAssembly::ATOMIC_RMW_AND_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2523 /* i32.atomic.rmw.and */, WebAssembly::ATOMIC_RMW_AND_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2542 /* i32.atomic.rmw.cmpxchg */, WebAssembly::ATOMIC_RMW_CMPXCHG_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2542 /* i32.atomic.rmw.cmpxchg */, WebAssembly::ATOMIC_RMW_CMPXCHG_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2565 /* i32.atomic.rmw.or */, WebAssembly::ATOMIC_RMW_OR_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2565 /* i32.atomic.rmw.or */, WebAssembly::ATOMIC_RMW_OR_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2583 /* i32.atomic.rmw.sub */, WebAssembly::ATOMIC_RMW_SUB_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2583 /* i32.atomic.rmw.sub */, WebAssembly::ATOMIC_RMW_SUB_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2602 /* i32.atomic.rmw.xchg */, WebAssembly::ATOMIC_RMW_XCHG_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2602 /* i32.atomic.rmw.xchg */, WebAssembly::ATOMIC_RMW_XCHG_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2622 /* i32.atomic.rmw.xor */, WebAssembly::ATOMIC_RMW_XOR_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2622 /* i32.atomic.rmw.xor */, WebAssembly::ATOMIC_RMW_XOR_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2641 /* i32.atomic.rmw16.add_u */, WebAssembly::ATOMIC_RMW16_U_ADD_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2641 /* i32.atomic.rmw16.add_u */, WebAssembly::ATOMIC_RMW16_U_ADD_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2664 /* i32.atomic.rmw16.and_u */, WebAssembly::ATOMIC_RMW16_U_AND_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2664 /* i32.atomic.rmw16.and_u */, WebAssembly::ATOMIC_RMW16_U_AND_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2687 /* i32.atomic.rmw16.cmpxchg_u */, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2687 /* i32.atomic.rmw16.cmpxchg_u */, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2714 /* i32.atomic.rmw16.or_u */, WebAssembly::ATOMIC_RMW16_U_OR_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2714 /* i32.atomic.rmw16.or_u */, WebAssembly::ATOMIC_RMW16_U_OR_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2736 /* i32.atomic.rmw16.sub_u */, WebAssembly::ATOMIC_RMW16_U_SUB_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2736 /* i32.atomic.rmw16.sub_u */, WebAssembly::ATOMIC_RMW16_U_SUB_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2759 /* i32.atomic.rmw16.xchg_u */, WebAssembly::ATOMIC_RMW16_U_XCHG_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2759 /* i32.atomic.rmw16.xchg_u */, WebAssembly::ATOMIC_RMW16_U_XCHG_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2783 /* i32.atomic.rmw16.xor_u */, WebAssembly::ATOMIC_RMW16_U_XOR_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2783 /* i32.atomic.rmw16.xor_u */, WebAssembly::ATOMIC_RMW16_U_XOR_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2806 /* i32.atomic.rmw8.add_u */, WebAssembly::ATOMIC_RMW8_U_ADD_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2806 /* i32.atomic.rmw8.add_u */, WebAssembly::ATOMIC_RMW8_U_ADD_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2828 /* i32.atomic.rmw8.and_u */, WebAssembly::ATOMIC_RMW8_U_AND_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2828 /* i32.atomic.rmw8.and_u */, WebAssembly::ATOMIC_RMW8_U_AND_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2850 /* i32.atomic.rmw8.cmpxchg_u */, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2850 /* i32.atomic.rmw8.cmpxchg_u */, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2876 /* i32.atomic.rmw8.or_u */, WebAssembly::ATOMIC_RMW8_U_OR_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2876 /* i32.atomic.rmw8.or_u */, WebAssembly::ATOMIC_RMW8_U_OR_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2897 /* i32.atomic.rmw8.sub_u */, WebAssembly::ATOMIC_RMW8_U_SUB_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2897 /* i32.atomic.rmw8.sub_u */, WebAssembly::ATOMIC_RMW8_U_SUB_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2919 /* i32.atomic.rmw8.xchg_u */, WebAssembly::ATOMIC_RMW8_U_XCHG_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2919 /* i32.atomic.rmw8.xchg_u */, WebAssembly::ATOMIC_RMW8_U_XCHG_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2942 /* i32.atomic.rmw8.xor_u */, WebAssembly::ATOMIC_RMW8_U_XOR_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2942 /* i32.atomic.rmw8.xor_u */, WebAssembly::ATOMIC_RMW8_U_XOR_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2964 /* i32.atomic.store */, WebAssembly::ATOMIC_STORE_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2964 /* i32.atomic.store */, WebAssembly::ATOMIC_STORE_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2981 /* i32.atomic.store16 */, WebAssembly::ATOMIC_STORE16_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 2981 /* i32.atomic.store16 */, WebAssembly::ATOMIC_STORE16_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3000 /* i32.atomic.store8 */, WebAssembly::ATOMIC_STORE8_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3000 /* i32.atomic.store8 */, WebAssembly::ATOMIC_STORE8_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 3018 /* i32.clz */, WebAssembly::CLZ_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3026 /* i32.const */, WebAssembly::CONST_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 3036 /* i32.ctz */, WebAssembly::CTZ_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3044 /* i32.div_s */, WebAssembly::DIV_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3054 /* i32.div_u */, WebAssembly::DIV_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3064 /* i32.eq */, WebAssembly::EQ_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3071 /* i32.eqz */, WebAssembly::EQZ_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3079 /* i32.extend16_s */, WebAssembly::I32_EXTEND16_S_I32_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 3094 /* i32.extend8_s */, WebAssembly::I32_EXTEND8_S_I32_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 3108 /* i32.ge_s */, WebAssembly::GE_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3117 /* i32.ge_u */, WebAssembly::GE_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3126 /* i32.gt_s */, WebAssembly::GT_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3135 /* i32.gt_u */, WebAssembly::GT_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3144 /* i32.le_s */, WebAssembly::LE_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3153 /* i32.le_u */, WebAssembly::LE_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3162 /* i32.load */, WebAssembly::LOAD_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3162 /* i32.load */, WebAssembly::LOAD_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3171 /* i32.load16_s */, WebAssembly::LOAD16_S_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3171 /* i32.load16_s */, WebAssembly::LOAD16_S_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3184 /* i32.load16_u */, WebAssembly::LOAD16_U_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3184 /* i32.load16_u */, WebAssembly::LOAD16_U_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3197 /* i32.load8_s */, WebAssembly::LOAD8_S_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3197 /* i32.load8_s */, WebAssembly::LOAD8_S_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3209 /* i32.load8_u */, WebAssembly::LOAD8_U_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3209 /* i32.load8_u */, WebAssembly::LOAD8_U_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3221 /* i32.lt_s */, WebAssembly::LT_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3230 /* i32.lt_u */, WebAssembly::LT_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3239 /* i32.mul */, WebAssembly::MUL_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3247 /* i32.ne */, WebAssembly::NE_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3254 /* i32.or */, WebAssembly::OR_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3261 /* i32.popcnt */, WebAssembly::POPCNT_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3272 /* i32.reinterpret_f32 */, WebAssembly::I32_REINTERPRET_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3292 /* i32.rem_s */, WebAssembly::REM_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3302 /* i32.rem_u */, WebAssembly::REM_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3312 /* i32.rotl */, WebAssembly::ROTL_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3321 /* i32.rotr */, WebAssembly::ROTR_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3330 /* i32.select */, WebAssembly::SELECT_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3341 /* i32.shl */, WebAssembly::SHL_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3349 /* i32.shr_s */, WebAssembly::SHR_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3359 /* i32.shr_u */, WebAssembly::SHR_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3369 /* i32.store */, WebAssembly::STORE_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3369 /* i32.store */, WebAssembly::STORE_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3379 /* i32.store16 */, WebAssembly::STORE16_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3379 /* i32.store16 */, WebAssembly::STORE16_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3391 /* i32.store8 */, WebAssembly::STORE8_I32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3391 /* i32.store8 */, WebAssembly::STORE8_I32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 3402 /* i32.sub */, WebAssembly::SUB_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3410 /* i32.trunc_f32_s */, WebAssembly::I32_TRUNC_S_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3426 /* i32.trunc_f32_u */, WebAssembly::I32_TRUNC_U_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3442 /* i32.trunc_f64_s */, WebAssembly::I32_TRUNC_S_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3458 /* i32.trunc_f64_u */, WebAssembly::I32_TRUNC_U_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3474 /* i32.trunc_sat_f32_s */, WebAssembly::I32_TRUNC_S_SAT_F32_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 3494 /* i32.trunc_sat_f32_u */, WebAssembly::I32_TRUNC_U_SAT_F32_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 3514 /* i32.trunc_sat_f64_s */, WebAssembly::I32_TRUNC_S_SAT_F64_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 3534 /* i32.trunc_sat_f64_u */, WebAssembly::I32_TRUNC_U_SAT_F64_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 3554 /* i32.wrap_i64 */, WebAssembly::I32_WRAP_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3567 /* i32.xor */, WebAssembly::XOR_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 3575 /* i32x4.abs */, WebAssembly::ABS_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3585 /* i32x4.add */, WebAssembly::ADD_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3595 /* i32x4.all_true */, WebAssembly::ALLTRUE_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3610 /* i32x4.any_true */, WebAssembly::ANYTRUE_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3625 /* i32x4.bitmask */, WebAssembly::BITMASK_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3639 /* i32x4.dot_i16x8_s */, WebAssembly::DOT_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3657 /* i32x4.eq */, WebAssembly::EQ_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3666 /* i32x4.extadd_pairwise_i16x8_s */, WebAssembly::int_wasm_extadd_pairwise_signed_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3696 /* i32x4.extadd_pairwise_i16x8_u */, WebAssembly::int_wasm_extadd_pairwise_unsigned_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3726 /* i32x4.extmul_high_i16x8_s */, WebAssembly::EXTMUL_HIGH_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3752 /* i32x4.extmul_high_i16x8_u */, WebAssembly::EXTMUL_HIGH_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3778 /* i32x4.extmul_low_i16x8_s */, WebAssembly::EXTMUL_LOW_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3803 /* i32x4.extmul_low_i16x8_u */, WebAssembly::EXTMUL_LOW_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3828 /* i32x4.extract_lane */, WebAssembly::EXTRACT_LANE_I32x4_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 3847 /* i32x4.ge_s */, WebAssembly::GE_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3858 /* i32x4.ge_u */, WebAssembly::GE_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3869 /* i32x4.gt_s */, WebAssembly::GT_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3880 /* i32x4.gt_u */, WebAssembly::GT_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3891 /* i32x4.le_s */, WebAssembly::LE_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3902 /* i32x4.le_u */, WebAssembly::LE_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3913 /* i32x4.load16x4_s */, WebAssembly::LOAD_EXTEND_S_I32x4_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 3913 /* i32x4.load16x4_s */, WebAssembly::LOAD_EXTEND_S_I32x4_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 3930 /* i32x4.load16x4_u */, WebAssembly::LOAD_EXTEND_U_I32x4_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 3930 /* i32x4.load16x4_u */, WebAssembly::LOAD_EXTEND_U_I32x4_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 3947 /* i32x4.lt_s */, WebAssembly::LT_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3958 /* i32x4.lt_u */, WebAssembly::LT_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3969 /* i32x4.max_s */, WebAssembly::MAX_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3981 /* i32x4.max_u */, WebAssembly::MAX_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 3993 /* i32x4.min_s */, WebAssembly::MIN_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4005 /* i32x4.min_u */, WebAssembly::MIN_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4017 /* i32x4.mul */, WebAssembly::MUL_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4027 /* i32x4.ne */, WebAssembly::NE_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4036 /* i32x4.neg */, WebAssembly::NEG_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4046 /* i32x4.replace_lane */, WebAssembly::REPLACE_LANE_I32x4_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 4065 /* i32x4.shl */, WebAssembly::SHL_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4075 /* i32x4.shr_s */, WebAssembly::SHR_S_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4087 /* i32x4.shr_u */, WebAssembly::SHR_U_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4099 /* i32x4.signselect */, WebAssembly::anonymous_4467SIGNSELECT_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4116 /* i32x4.splat */, WebAssembly::SPLAT_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4128 /* i32x4.sub */, WebAssembly::SUB_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4138 /* i32x4.trunc_sat_f32x4_s */, WebAssembly::fp_to_sint_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4162 /* i32x4.trunc_sat_f32x4_u */, WebAssembly::fp_to_uint_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4186 /* i32x4.trunc_sat_zero_f64x2_s */, WebAssembly::int_wasm_trunc_saturate_zero_signed_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4215 /* i32x4.trunc_sat_zero_f64x2_u */, WebAssembly::int_wasm_trunc_saturate_zero_unsigned_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4244 /* i32x4.widen_high_i16x8_s */, WebAssembly::widen_high_s_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4269 /* i32x4.widen_high_i16x8_u */, WebAssembly::widen_high_u_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4294 /* i32x4.widen_i8x16_s */, WebAssembly::WIDEN_I8x16_TO_I32x4_S_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 4314 /* i32x4.widen_i8x16_u */, WebAssembly::WIDEN_I8x16_TO_I32x4_U_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 4334 /* i32x4.widen_low_i16x8_s */, WebAssembly::widen_low_s_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4358 /* i32x4.widen_low_i16x8_u */, WebAssembly::widen_low_u_I32x4_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 4382 /* i64.add */, WebAssembly::ADD_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4390 /* i64.and */, WebAssembly::AND_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 4398 /* i64.atomic.load */, WebAssembly::ATOMIC_LOAD_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4398 /* i64.atomic.load */, WebAssembly::ATOMIC_LOAD_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4414 /* i64.atomic.load16_u */, WebAssembly::ATOMIC_LOAD16_U_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4414 /* i64.atomic.load16_u */, WebAssembly::ATOMIC_LOAD16_U_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4434 /* i64.atomic.load32_u */, WebAssembly::ATOMIC_LOAD32_U_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4434 /* i64.atomic.load32_u */, WebAssembly::ATOMIC_LOAD32_U_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4454 /* i64.atomic.load8_u */, WebAssembly::ATOMIC_LOAD8_U_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4454 /* i64.atomic.load8_u */, WebAssembly::ATOMIC_LOAD8_U_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4473 /* i64.atomic.rmw.add */, WebAssembly::ATOMIC_RMW_ADD_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4473 /* i64.atomic.rmw.add */, WebAssembly::ATOMIC_RMW_ADD_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4492 /* i64.atomic.rmw.and */, WebAssembly::ATOMIC_RMW_AND_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4492 /* i64.atomic.rmw.and */, WebAssembly::ATOMIC_RMW_AND_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4511 /* i64.atomic.rmw.cmpxchg */, WebAssembly::ATOMIC_RMW_CMPXCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4511 /* i64.atomic.rmw.cmpxchg */, WebAssembly::ATOMIC_RMW_CMPXCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4534 /* i64.atomic.rmw.or */, WebAssembly::ATOMIC_RMW_OR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4534 /* i64.atomic.rmw.or */, WebAssembly::ATOMIC_RMW_OR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4552 /* i64.atomic.rmw.sub */, WebAssembly::ATOMIC_RMW_SUB_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4552 /* i64.atomic.rmw.sub */, WebAssembly::ATOMIC_RMW_SUB_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4571 /* i64.atomic.rmw.xchg */, WebAssembly::ATOMIC_RMW_XCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4571 /* i64.atomic.rmw.xchg */, WebAssembly::ATOMIC_RMW_XCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4591 /* i64.atomic.rmw.xor */, WebAssembly::ATOMIC_RMW_XOR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4591 /* i64.atomic.rmw.xor */, WebAssembly::ATOMIC_RMW_XOR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4610 /* i64.atomic.rmw16.add_u */, WebAssembly::ATOMIC_RMW16_U_ADD_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4610 /* i64.atomic.rmw16.add_u */, WebAssembly::ATOMIC_RMW16_U_ADD_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4633 /* i64.atomic.rmw16.and_u */, WebAssembly::ATOMIC_RMW16_U_AND_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4633 /* i64.atomic.rmw16.and_u */, WebAssembly::ATOMIC_RMW16_U_AND_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4656 /* i64.atomic.rmw16.cmpxchg_u */, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4656 /* i64.atomic.rmw16.cmpxchg_u */, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4683 /* i64.atomic.rmw16.or_u */, WebAssembly::ATOMIC_RMW16_U_OR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4683 /* i64.atomic.rmw16.or_u */, WebAssembly::ATOMIC_RMW16_U_OR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4705 /* i64.atomic.rmw16.sub_u */, WebAssembly::ATOMIC_RMW16_U_SUB_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4705 /* i64.atomic.rmw16.sub_u */, WebAssembly::ATOMIC_RMW16_U_SUB_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4728 /* i64.atomic.rmw16.xchg_u */, WebAssembly::ATOMIC_RMW16_U_XCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4728 /* i64.atomic.rmw16.xchg_u */, WebAssembly::ATOMIC_RMW16_U_XCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4752 /* i64.atomic.rmw16.xor_u */, WebAssembly::ATOMIC_RMW16_U_XOR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4752 /* i64.atomic.rmw16.xor_u */, WebAssembly::ATOMIC_RMW16_U_XOR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4775 /* i64.atomic.rmw32.add_u */, WebAssembly::ATOMIC_RMW32_U_ADD_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4775 /* i64.atomic.rmw32.add_u */, WebAssembly::ATOMIC_RMW32_U_ADD_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4798 /* i64.atomic.rmw32.and_u */, WebAssembly::ATOMIC_RMW32_U_AND_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4798 /* i64.atomic.rmw32.and_u */, WebAssembly::ATOMIC_RMW32_U_AND_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4821 /* i64.atomic.rmw32.cmpxchg_u */, WebAssembly::ATOMIC_RMW32_U_CMPXCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4821 /* i64.atomic.rmw32.cmpxchg_u */, WebAssembly::ATOMIC_RMW32_U_CMPXCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4848 /* i64.atomic.rmw32.or_u */, WebAssembly::ATOMIC_RMW32_U_OR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4848 /* i64.atomic.rmw32.or_u */, WebAssembly::ATOMIC_RMW32_U_OR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4870 /* i64.atomic.rmw32.sub_u */, WebAssembly::ATOMIC_RMW32_U_SUB_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4870 /* i64.atomic.rmw32.sub_u */, WebAssembly::ATOMIC_RMW32_U_SUB_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4893 /* i64.atomic.rmw32.xchg_u */, WebAssembly::ATOMIC_RMW32_U_XCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4893 /* i64.atomic.rmw32.xchg_u */, WebAssembly::ATOMIC_RMW32_U_XCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4917 /* i64.atomic.rmw32.xor_u */, WebAssembly::ATOMIC_RMW32_U_XOR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4917 /* i64.atomic.rmw32.xor_u */, WebAssembly::ATOMIC_RMW32_U_XOR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4940 /* i64.atomic.rmw8.add_u */, WebAssembly::ATOMIC_RMW8_U_ADD_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4940 /* i64.atomic.rmw8.add_u */, WebAssembly::ATOMIC_RMW8_U_ADD_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4962 /* i64.atomic.rmw8.and_u */, WebAssembly::ATOMIC_RMW8_U_AND_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4962 /* i64.atomic.rmw8.and_u */, WebAssembly::ATOMIC_RMW8_U_AND_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4984 /* i64.atomic.rmw8.cmpxchg_u */, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 4984 /* i64.atomic.rmw8.cmpxchg_u */, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5010 /* i64.atomic.rmw8.or_u */, WebAssembly::ATOMIC_RMW8_U_OR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5010 /* i64.atomic.rmw8.or_u */, WebAssembly::ATOMIC_RMW8_U_OR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5031 /* i64.atomic.rmw8.sub_u */, WebAssembly::ATOMIC_RMW8_U_SUB_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5031 /* i64.atomic.rmw8.sub_u */, WebAssembly::ATOMIC_RMW8_U_SUB_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5053 /* i64.atomic.rmw8.xchg_u */, WebAssembly::ATOMIC_RMW8_U_XCHG_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5053 /* i64.atomic.rmw8.xchg_u */, WebAssembly::ATOMIC_RMW8_U_XCHG_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5076 /* i64.atomic.rmw8.xor_u */, WebAssembly::ATOMIC_RMW8_U_XOR_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5076 /* i64.atomic.rmw8.xor_u */, WebAssembly::ATOMIC_RMW8_U_XOR_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5098 /* i64.atomic.store */, WebAssembly::ATOMIC_STORE_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5098 /* i64.atomic.store */, WebAssembly::ATOMIC_STORE_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5115 /* i64.atomic.store16 */, WebAssembly::ATOMIC_STORE16_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5115 /* i64.atomic.store16 */, WebAssembly::ATOMIC_STORE16_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5134 /* i64.atomic.store32 */, WebAssembly::ATOMIC_STORE32_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5134 /* i64.atomic.store32 */, WebAssembly::ATOMIC_STORE32_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5153 /* i64.atomic.store8 */, WebAssembly::ATOMIC_STORE8_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5153 /* i64.atomic.store8 */, WebAssembly::ATOMIC_STORE8_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 5171 /* i64.clz */, WebAssembly::CLZ_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5179 /* i64.const */, WebAssembly::CONST_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 5189 /* i64.ctz */, WebAssembly::CTZ_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5197 /* i64.div_s */, WebAssembly::DIV_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5207 /* i64.div_u */, WebAssembly::DIV_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5217 /* i64.eq */, WebAssembly::EQ_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5224 /* i64.eqz */, WebAssembly::EQZ_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5232 /* i64.extend16_s */, WebAssembly::I64_EXTEND16_S_I64_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 5247 /* i64.extend32_s */, WebAssembly::I64_EXTEND32_S_I64_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 5262 /* i64.extend8_s */, WebAssembly::I64_EXTEND8_S_I64_S, Convert_NoOperands, AMFBS_HasSignExt, {  }, },
  { 5276 /* i64.extend_i32_s */, WebAssembly::I64_EXTEND_S_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5293 /* i64.extend_i32_u */, WebAssembly::I64_EXTEND_U_I32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5310 /* i64.ge_s */, WebAssembly::GE_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5319 /* i64.ge_u */, WebAssembly::GE_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5328 /* i64.gt_s */, WebAssembly::GT_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5337 /* i64.gt_u */, WebAssembly::GT_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5346 /* i64.le_s */, WebAssembly::LE_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5355 /* i64.le_u */, WebAssembly::LE_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5364 /* i64.load */, WebAssembly::LOAD_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5364 /* i64.load */, WebAssembly::LOAD_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5373 /* i64.load16_s */, WebAssembly::LOAD16_S_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5373 /* i64.load16_s */, WebAssembly::LOAD16_S_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5386 /* i64.load16_u */, WebAssembly::LOAD16_U_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5386 /* i64.load16_u */, WebAssembly::LOAD16_U_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5399 /* i64.load32_s */, WebAssembly::LOAD32_S_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5399 /* i64.load32_s */, WebAssembly::LOAD32_S_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5412 /* i64.load32_u */, WebAssembly::LOAD32_U_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5412 /* i64.load32_u */, WebAssembly::LOAD32_U_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5425 /* i64.load8_s */, WebAssembly::LOAD8_S_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5425 /* i64.load8_s */, WebAssembly::LOAD8_S_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5437 /* i64.load8_u */, WebAssembly::LOAD8_U_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5437 /* i64.load8_u */, WebAssembly::LOAD8_U_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5449 /* i64.lt_s */, WebAssembly::LT_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5458 /* i64.lt_u */, WebAssembly::LT_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5467 /* i64.mul */, WebAssembly::MUL_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5475 /* i64.ne */, WebAssembly::NE_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5482 /* i64.or */, WebAssembly::OR_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5489 /* i64.popcnt */, WebAssembly::POPCNT_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5500 /* i64.reinterpret_f64 */, WebAssembly::I64_REINTERPRET_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5520 /* i64.rem_s */, WebAssembly::REM_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5530 /* i64.rem_u */, WebAssembly::REM_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5540 /* i64.rotl */, WebAssembly::ROTL_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5549 /* i64.rotr */, WebAssembly::ROTR_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5558 /* i64.select */, WebAssembly::SELECT_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5569 /* i64.shl */, WebAssembly::SHL_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5577 /* i64.shr_s */, WebAssembly::SHR_S_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5587 /* i64.shr_u */, WebAssembly::SHR_U_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5597 /* i64.store */, WebAssembly::STORE_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5597 /* i64.store */, WebAssembly::STORE_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5607 /* i64.store16 */, WebAssembly::STORE16_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5607 /* i64.store16 */, WebAssembly::STORE16_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5619 /* i64.store32 */, WebAssembly::STORE32_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5619 /* i64.store32 */, WebAssembly::STORE32_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5631 /* i64.store8 */, WebAssembly::STORE8_I64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5631 /* i64.store8 */, WebAssembly::STORE8_I64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_None, { MCK_Imm, MCK_Imm }, },
  { 5642 /* i64.sub */, WebAssembly::SUB_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5650 /* i64.trunc_f32_s */, WebAssembly::I64_TRUNC_S_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5666 /* i64.trunc_f32_u */, WebAssembly::I64_TRUNC_U_F32_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5682 /* i64.trunc_f64_s */, WebAssembly::I64_TRUNC_S_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5698 /* i64.trunc_f64_u */, WebAssembly::I64_TRUNC_U_F64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5714 /* i64.trunc_sat_f32_s */, WebAssembly::I64_TRUNC_S_SAT_F32_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 5734 /* i64.trunc_sat_f32_u */, WebAssembly::I64_TRUNC_U_SAT_F32_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 5754 /* i64.trunc_sat_f64_s */, WebAssembly::I64_TRUNC_S_SAT_F64_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 5774 /* i64.trunc_sat_f64_u */, WebAssembly::I64_TRUNC_U_SAT_F64_S, Convert_NoOperands, AMFBS_HasNontrappingFPToInt, {  }, },
  { 5794 /* i64.xor */, WebAssembly::XOR_I64_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 5802 /* i64x2.abs */, WebAssembly::ABS_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5812 /* i64x2.add */, WebAssembly::ADD_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5822 /* i64x2.all_true */, WebAssembly::ALLTRUE_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5837 /* i64x2.any_true */, WebAssembly::ANYTRUE_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5852 /* i64x2.bitmask */, WebAssembly::BITMASK_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5866 /* i64x2.eq */, WebAssembly::EQ_v2i64_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5875 /* i64x2.extmul_high_i32x4_s */, WebAssembly::EXTMUL_HIGH_S_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5901 /* i64x2.extmul_high_i32x4_u */, WebAssembly::EXTMUL_HIGH_U_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5927 /* i64x2.extmul_low_i32x4_s */, WebAssembly::EXTMUL_LOW_S_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5952 /* i64x2.extmul_low_i32x4_u */, WebAssembly::EXTMUL_LOW_U_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 5977 /* i64x2.extract_lane */, WebAssembly::EXTRACT_LANE_I64x2_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 5996 /* i64x2.load32x2_s */, WebAssembly::LOAD_EXTEND_S_I64x2_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5996 /* i64x2.load32x2_s */, WebAssembly::LOAD_EXTEND_S_I64x2_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6013 /* i64x2.load32x2_u */, WebAssembly::LOAD_EXTEND_U_I64x2_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6013 /* i64x2.load32x2_u */, WebAssembly::LOAD_EXTEND_U_I64x2_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6030 /* i64x2.mul */, WebAssembly::MUL_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6040 /* i64x2.neg */, WebAssembly::NEG_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6050 /* i64x2.replace_lane */, WebAssembly::REPLACE_LANE_I64x2_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6069 /* i64x2.shl */, WebAssembly::SHL_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6079 /* i64x2.shr_s */, WebAssembly::SHR_S_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6091 /* i64x2.shr_u */, WebAssembly::SHR_U_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6103 /* i64x2.signselect */, WebAssembly::anonymous_4468SIGNSELECT_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6120 /* i64x2.splat */, WebAssembly::SPLAT_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6132 /* i64x2.sub */, WebAssembly::SUB_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6142 /* i64x2.widen_high_i32x4_s */, WebAssembly::int_wasm_widen_high_signed_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6167 /* i64x2.widen_high_i32x4_u */, WebAssembly::int_wasm_widen_high_unsigned_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6192 /* i64x2.widen_low_i32x4_s */, WebAssembly::int_wasm_widen_low_signed_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6216 /* i64x2.widen_low_i32x4_u */, WebAssembly::int_wasm_widen_low_unsigned_I64x2_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6240 /* i8x16.abs */, WebAssembly::ABS_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6250 /* i8x16.add */, WebAssembly::ADD_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6260 /* i8x16.add_saturate_s */, WebAssembly::ADD_SAT_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6281 /* i8x16.add_saturate_u */, WebAssembly::ADD_SAT_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6302 /* i8x16.all_true */, WebAssembly::ALLTRUE_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6317 /* i8x16.any_true */, WebAssembly::ANYTRUE_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6332 /* i8x16.avgr_u */, WebAssembly::AVGR_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6345 /* i8x16.bitmask */, WebAssembly::BITMASK_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6359 /* i8x16.eq */, WebAssembly::EQ_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6368 /* i8x16.extract_lane_s */, WebAssembly::EXTRACT_LANE_I8x16_s_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6389 /* i8x16.extract_lane_u */, WebAssembly::EXTRACT_LANE_I8x16_u_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6410 /* i8x16.ge_s */, WebAssembly::GE_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6421 /* i8x16.ge_u */, WebAssembly::GE_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6432 /* i8x16.gt_s */, WebAssembly::GT_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6443 /* i8x16.gt_u */, WebAssembly::GT_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6454 /* i8x16.le_s */, WebAssembly::LE_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6465 /* i8x16.le_u */, WebAssembly::LE_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6476 /* i8x16.lt_s */, WebAssembly::LT_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6487 /* i8x16.lt_u */, WebAssembly::LT_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6498 /* i8x16.max_s */, WebAssembly::MAX_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6510 /* i8x16.max_u */, WebAssembly::MAX_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6522 /* i8x16.min_s */, WebAssembly::MIN_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6534 /* i8x16.min_u */, WebAssembly::MIN_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6546 /* i8x16.narrow_i16x8_s */, WebAssembly::NARROW_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6567 /* i8x16.narrow_i16x8_u */, WebAssembly::NARROW_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6588 /* i8x16.ne */, WebAssembly::NE_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6597 /* i8x16.neg */, WebAssembly::NEG_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6607 /* i8x16.popcnt */, WebAssembly::POPCNT_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6620 /* i8x16.replace_lane */, WebAssembly::REPLACE_LANE_I8x16_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6639 /* i8x16.shl */, WebAssembly::SHL_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6649 /* i8x16.shr_s */, WebAssembly::SHR_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6661 /* i8x16.shr_u */, WebAssembly::SHR_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6673 /* i8x16.shuffle */, WebAssembly::SHUFFLE_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 6687 /* i8x16.signselect */, WebAssembly::anonymous_4465SIGNSELECT_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6704 /* i8x16.splat */, WebAssembly::SPLAT_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6716 /* i8x16.sub */, WebAssembly::SUB_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6726 /* i8x16.sub_saturate_s */, WebAssembly::SUB_SAT_S_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6747 /* i8x16.sub_saturate_u */, WebAssembly::SUB_SAT_U_I8x16_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6768 /* i8x16.swizzle */, WebAssembly::SWIZZLE_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 6782 /* if */, WebAssembly::IF_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6785 /* local.get */, WebAssembly::LOCAL_GET_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 6785 /* local.get */, WebAssembly::LOCAL_GET_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 6785 /* local.get */, WebAssembly::LOCAL_GET_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6785 /* local.get */, WebAssembly::LOCAL_GET_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6785 /* local.get */, WebAssembly::LOCAL_GET_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6785 /* local.get */, WebAssembly::LOCAL_GET_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6785 /* local.get */, WebAssembly::LOCAL_GET_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6795 /* local.set */, WebAssembly::LOCAL_SET_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 6795 /* local.set */, WebAssembly::LOCAL_SET_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 6795 /* local.set */, WebAssembly::LOCAL_SET_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6795 /* local.set */, WebAssembly::LOCAL_SET_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6795 /* local.set */, WebAssembly::LOCAL_SET_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6795 /* local.set */, WebAssembly::LOCAL_SET_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6795 /* local.set */, WebAssembly::LOCAL_SET_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6805 /* local.tee */, WebAssembly::LOCAL_TEE_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 6805 /* local.tee */, WebAssembly::LOCAL_TEE_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 6805 /* local.tee */, WebAssembly::LOCAL_TEE_V128_S, Convert__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm }, },
  { 6805 /* local.tee */, WebAssembly::LOCAL_TEE_F32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6805 /* local.tee */, WebAssembly::LOCAL_TEE_F64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6805 /* local.tee */, WebAssembly::LOCAL_TEE_I32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6805 /* local.tee */, WebAssembly::LOCAL_TEE_I64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6815 /* loop */, WebAssembly::LOOP_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6820 /* memory.atomic.notify */, WebAssembly::MEMORY_ATOMIC_NOTIFY_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 6820 /* memory.atomic.notify */, WebAssembly::MEMORY_ATOMIC_NOTIFY_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 6841 /* memory.atomic.wait32 */, WebAssembly::MEMORY_ATOMIC_WAIT32_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 6841 /* memory.atomic.wait32 */, WebAssembly::MEMORY_ATOMIC_WAIT32_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 6862 /* memory.atomic.wait64 */, WebAssembly::MEMORY_ATOMIC_WAIT64_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 6862 /* memory.atomic.wait64 */, WebAssembly::MEMORY_ATOMIC_WAIT64_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasAtomics, { MCK_Imm, MCK_Imm }, },
  { 6883 /* memory.copy */, WebAssembly::anonymous_4568MEMORY_COPY_A32_S, Convert__Imm1_0__Imm1_1, AMFBS_HasBulkMemory, { MCK_Imm, MCK_Imm }, },
  { 6883 /* memory.copy */, WebAssembly::anonymous_4569MEMORY_COPY_A64_S, Convert__Imm1_0__Imm1_1, AMFBS_HasBulkMemory, { MCK_Imm, MCK_Imm }, },
  { 6895 /* memory.fill */, WebAssembly::anonymous_4568MEMORY_FILL_A32_S, Convert__Imm1_0, AMFBS_HasBulkMemory, { MCK_Imm }, },
  { 6895 /* memory.fill */, WebAssembly::anonymous_4569MEMORY_FILL_A64_S, Convert__Imm1_0, AMFBS_HasBulkMemory, { MCK_Imm }, },
  { 6907 /* memory.grow */, WebAssembly::anonymous_2718MEMORY_GROW_A32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6907 /* memory.grow */, WebAssembly::anonymous_2719MEMORY_GROW_A64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6919 /* memory.init */, WebAssembly::anonymous_4568MEMORY_INIT_A32_S, Convert__Imm1_0__Imm1_1, AMFBS_HasBulkMemory, { MCK_Imm, MCK_Imm }, },
  { 6919 /* memory.init */, WebAssembly::anonymous_4569MEMORY_INIT_A64_S, Convert__Imm1_0__Imm1_1, AMFBS_HasBulkMemory, { MCK_Imm, MCK_Imm }, },
  { 6931 /* memory.size */, WebAssembly::anonymous_2718MEMORY_SIZE_A32_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6931 /* memory.size */, WebAssembly::anonymous_2719MEMORY_SIZE_A64_S, Convert__Imm1_0, AMFBS_None, { MCK_Imm }, },
  { 6943 /* nop */, WebAssembly::NOP_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 6947 /* prefetch.nt */, WebAssembly::PREFETCH_NT_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6947 /* prefetch.nt */, WebAssembly::PREFETCH_NT_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6959 /* prefetch.t */, WebAssembly::PREFETCH_T_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6959 /* prefetch.t */, WebAssembly::PREFETCH_T_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 6970 /* ref.null */, WebAssembly::REF_NULL_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 6970 /* ref.null */, WebAssembly::REF_NULL_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 6979 /* rethrow */, WebAssembly::RETHROW_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 6987 /* return */, WebAssembly::RETURN_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 6994 /* return_call */, WebAssembly::RET_CALL_S, Convert__Imm1_0, AMFBS_HasTailCall, { MCK_Imm }, },
  { 7006 /* return_call_indirect */, WebAssembly::RET_CALL_INDIRECT_S, Convert__Imm1_0__imm_95_0, AMFBS_HasTailCall, { MCK_Imm }, },
  { 7027 /* return_call_results */, WebAssembly::RET_CALL_RESULTS_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 7047 /* table.copy */, WebAssembly::TABLE_COPY_S, Convert__Imm1_0__Imm1_1, AMFBS_HasReferenceTypes, { MCK_Imm, MCK_Imm }, },
  { 7058 /* table.fill */, WebAssembly::TABLE_FILL_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7058 /* table.fill */, WebAssembly::TABLE_FILL_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7069 /* table.get */, WebAssembly::TABLE_GET_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7069 /* table.get */, WebAssembly::TABLE_GET_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7079 /* table.grow */, WebAssembly::TABLE_GROW_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7079 /* table.grow */, WebAssembly::TABLE_GROW_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7090 /* table.set */, WebAssembly::TABLE_SET_EXTERNREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7090 /* table.set */, WebAssembly::TABLE_SET_FUNCREF_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7100 /* table.size */, WebAssembly::TABLE_SIZE_S, Convert__Imm1_0, AMFBS_HasReferenceTypes, { MCK_Imm }, },
  { 7111 /* throw */, WebAssembly::THROW_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 7117 /* try */, WebAssembly::TRY_S, Convert__Imm1_0, AMFBS_HasExceptionHandling, { MCK_Imm }, },
  { 7121 /* unreachable */, WebAssembly::DEBUG_UNREACHABLE_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 7121 /* unreachable */, WebAssembly::UNREACHABLE_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 7133 /* v128.and */, WebAssembly::AND_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7142 /* v128.andnot */, WebAssembly::ANDNOT_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7154 /* v128.bitselect */, WebAssembly::BITSELECT_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7169 /* v128.const */, WebAssembly::CONST_V128_I64x2_S, Convert__Imm1_0__Imm1_1, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7169 /* v128.const */, WebAssembly::CONST_V128_F64x2_S, Convert__FPImmf641_0__FPImmf641_1, AMFBS_HasUnimplementedSIMD128, { MCK_FPImmf64, MCK_FPImmf64 }, },
  { 7169 /* v128.const */, WebAssembly::CONST_V128_I32x4_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7169 /* v128.const */, WebAssembly::CONST_V128_F32x4_S, Convert__FPImmf321_0__FPImmf321_1__FPImmf321_2__FPImmf321_3, AMFBS_HasUnimplementedSIMD128, { MCK_FPImmf32, MCK_FPImmf32, MCK_FPImmf32, MCK_FPImmf32 }, },
  { 7169 /* v128.const */, WebAssembly::CONST_V128_I16x8_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7169 /* v128.const */, WebAssembly::CONST_V128_I8x16_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15, AMFBS_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7180 /* v128.load */, WebAssembly::LOAD_V128_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7180 /* v128.load */, WebAssembly::LOAD_V128_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7190 /* v128.load16_lane */, WebAssembly::LOAD_LANE_I16x8_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7190 /* v128.load16_lane */, WebAssembly::LOAD_LANE_I16x8_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7207 /* v128.load16_splat */, WebAssembly::LOAD16_SPLAT_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7207 /* v128.load16_splat */, WebAssembly::LOAD16_SPLAT_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7225 /* v128.load32_lane */, WebAssembly::LOAD_LANE_I32x4_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7225 /* v128.load32_lane */, WebAssembly::LOAD_LANE_I32x4_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7242 /* v128.load32_splat */, WebAssembly::LOAD32_SPLAT_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7242 /* v128.load32_splat */, WebAssembly::LOAD32_SPLAT_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7260 /* v128.load32_zero */, WebAssembly::LOAD_ZERO_I32x4_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7260 /* v128.load32_zero */, WebAssembly::LOAD_ZERO_I32x4_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7277 /* v128.load64_lane */, WebAssembly::LOAD_LANE_I64x2_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7277 /* v128.load64_lane */, WebAssembly::LOAD_LANE_I64x2_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7294 /* v128.load64_splat */, WebAssembly::LOAD64_SPLAT_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7294 /* v128.load64_splat */, WebAssembly::LOAD64_SPLAT_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7312 /* v128.load64_zero */, WebAssembly::LOAD_ZERO_I64x2_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7312 /* v128.load64_zero */, WebAssembly::LOAD_ZERO_I64x2_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7329 /* v128.load8_lane */, WebAssembly::LOAD_LANE_I8x16_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7329 /* v128.load8_lane */, WebAssembly::LOAD_LANE_I8x16_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7345 /* v128.load8_splat */, WebAssembly::LOAD8_SPLAT_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7345 /* v128.load8_splat */, WebAssembly::LOAD8_SPLAT_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7362 /* v128.not */, WebAssembly::NOT_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7371 /* v128.or */, WebAssembly::OR_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
  { 7379 /* v128.select */, WebAssembly::SELECT_V128_S, Convert_NoOperands, AMFBS_None, {  }, },
  { 7391 /* v128.store */, WebAssembly::STORE_V128_A32_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7391 /* v128.store */, WebAssembly::STORE_V128_A64_S, Convert__Imm1_1__Imm1_0, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 7402 /* v128.store16_lane */, WebAssembly::STORE_LANE_I16x8_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7402 /* v128.store16_lane */, WebAssembly::STORE_LANE_I16x8_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7420 /* v128.store32_lane */, WebAssembly::STORE_LANE_I32x4_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7420 /* v128.store32_lane */, WebAssembly::STORE_LANE_I32x4_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7438 /* v128.store64_lane */, WebAssembly::STORE_LANE_I64x2_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7438 /* v128.store64_lane */, WebAssembly::STORE_LANE_I64x2_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7456 /* v128.store8_lane */, WebAssembly::STORE_LANE_I8x16_A32_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7456 /* v128.store8_lane */, WebAssembly::STORE_LANE_I8x16_A64_S, Convert__Imm1_1__Imm1_0__Imm1_2, AMFBS_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 7473 /* v128.xor */, WebAssembly::XOR_S, Convert_NoOperands, AMFBS_HasSIMD128, {  }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned WebAssemblyAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     FeatureBitset &MissingFeatures,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 17) {
    ErrorInfo = 17;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((WebAssemblyOperand &)*Operands[0]).getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  MissingFeatures.set();
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  DEBUG_WITH_TYPE("asm-matcher", dbgs() << "AsmMatcher: found " <<
  std::distance(MnemonicRange.first, MnemonicRange.second) <<
  " encodings with mnemonic '" << Mnemonic << "'\n");

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    const FeatureBitset &RequiredFeatures = FeatureBitsets[it->RequiredFeaturesIdx];
    bool HasRequiredFeatures =
      (AvailableFeatures & RequiredFeatures) == RequiredFeatures;
    DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Trying to match opcode "
                                          << MII.getName(it->Opcode) << "\n");
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 16; ++FormalIdx) {
      auto Formal = static_cast<MatchClassKind>(it->Classes[FormalIdx]);
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "  Matching formal operand class " << getMatchClassName(Formal)
                             << " against actual operand at index " << ActualIdx);
      if (ActualIdx < Operands.size())
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << " (";
                        Operands[ActualIdx]->print(dbgs()); dbgs() << "): ");
      else
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << ": ");
      if (ActualIdx >= Operands.size()) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "actual operand index out of range ");
        OperandsValid = (Formal == InvalidMatchClass) || isSubclass(Formal, OptionalMatchClass);
        if (!OperandsValid) ErrorInfo = ActualIdx;
        break;
      }
      MCParsedAsmOperand &Actual = *Operands[ActualIdx];
      unsigned Diag = validateOperandClass(Actual, Formal);
      if (Diag == Match_Success) {
        DEBUG_WITH_TYPE("asm-matcher",
                        dbgs() << "match success using generic matcher\n");
        ++ActualIdx;
        continue;
      }
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag != Match_Success) {
        unsigned TargetDiag = validateTargetOperandClass(Actual, Formal);
        if (TargetDiag == Match_Success) {
          DEBUG_WITH_TYPE("asm-matcher",
                          dbgs() << "match success using target matcher\n");
          ++ActualIdx;
          continue;
        }
        // If the target matcher returned a specific error code use
        // that, else use the one from the generic matcher.
        if (TargetDiag != Match_InvalidOperand && HasRequiredFeatures)
          Diag = TargetDiag;
      }
      // If current formal operand wasn't matched and it is optional
      // then try to match next formal operand
      if (Diag == Match_InvalidOperand && isSubclass(Formal, OptionalMatchClass)) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "ignoring optional operand\n");
        continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= ActualIdx)) {
        if (HasRequiredFeatures && (ErrorInfo != ActualIdx || Diag != Match_InvalidOperand))
          RetCode = Diag;
        ErrorInfo = ActualIdx;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) {
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Opcode result: multiple "
                                               "operand mismatches, ignoring "
                                               "this opcode\n");
      continue;
    }
    if (!HasRequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      FeatureBitset NewMissingFeatures = RequiredFeatures & ~AvailableFeatures;
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Missing target features:";
                      for (unsigned I = 0, E = NewMissingFeatures.size(); I != E; ++I)
                        if (NewMissingFeatures[I])
                          dbgs() << ' ' << I;
                      dbgs() << "\n");
      if (NewMissingFeatures.count() <=
          MissingFeatures.count())
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    Inst.setOpcode(it->Opcode);
    // We have a potential match but have not rendered the operands.
    // Check the target predicate to handle any context sensitive
    // constraints.
    // For example, Ties that are referenced multiple times must be
    // checked here to ensure the input is the same for each match
    // constraints. If we leave it any later the ties will have been
    // canonicalized
    unsigned MatchResult;
    if ((MatchResult = checkEarlyTargetMatchPredicate(Inst, Operands)) != Match_Success) {
      Inst.clear();
      DEBUG_WITH_TYPE(
          "asm-matcher",
          dbgs() << "Early target match predicate failed with diag code "
                 << MatchResult << "\n");
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (matchingInlineAsm) {
      convertToMapAndConstraints(it->ConvertFn, Operands);
      if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
        return Match_InvalidTiedOperand;

      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "Target match predicate failed with diag code "
                             << MatchResult << "\n");
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
      return Match_InvalidTiedOperand;

    DEBUG_WITH_TYPE(
        "asm-matcher",
        dbgs() << "Opcode result: complete match, selecting this opcode\n");
    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  ErrorInfo = 0;
  return Match_MissingFeature;
}

#endif // GET_MATCHER_IMPLEMENTATION


#ifdef GET_MNEMONIC_SPELL_CHECKER
#undef GET_MNEMONIC_SPELL_CHECKER

static std::string WebAssemblyMnemonicSpellCheck(StringRef S, const FeatureBitset &FBS, unsigned VariantID) {
  const unsigned MaxEditDist = 2;
  std::vector<StringRef> Candidates;
  StringRef Prev = "";

  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }

  for (auto I = Start; I < End; I++) {
    // Ignore unsupported instructions.
    const FeatureBitset &RequiredFeatures = FeatureBitsets[I->RequiredFeaturesIdx];
    if ((FBS & RequiredFeatures) != RequiredFeatures)
      continue;

    StringRef T = I->getMnemonic();
    // Avoid recomputing the edit distance for the same string.
    if (T.equals(Prev))
      continue;

    Prev = T;
    unsigned Dist = S.edit_distance(T, false, MaxEditDist);
    if (Dist <= MaxEditDist)
      Candidates.push_back(T);
  }

  if (Candidates.empty())
    return "";

  std::string Res = ", did you mean: ";
  unsigned i = 0;
  for (; i < Candidates.size() - 1; i++)
    Res += Candidates[i].str() + ", ";
  return Res + Candidates[i].str() + "?";
}

#endif // GET_MNEMONIC_SPELL_CHECKER


#ifdef GET_MNEMONIC_CHECKER
#undef GET_MNEMONIC_CHECKER

static bool WebAssemblyCheckMnemonic(StringRef Mnemonic,
                                const FeatureBitset &AvailableFeatures,
                                unsigned VariantID) {
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }

  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  if (MnemonicRange.first == MnemonicRange.second)
    return false;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    const FeatureBitset &RequiredFeatures =
      FeatureBitsets[it->RequiredFeaturesIdx];
    if ((AvailableFeatures & RequiredFeatures) == RequiredFeatures)
      return true;
  }
  return false;
}

#endif // GET_MNEMONIC_CHECKER

