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

  OperandMatchResultTy MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic,
    bool ParseForAllFeatures = false);
  OperandMatchResultTy tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_FeatureSoftFloatBit = 29,
  Feature_FeatureDistinctOpsBit = 3,
  Feature_FeatureFastSerializationBit = 8,
  Feature_FeatureFPExtensionBit = 7,
  Feature_FeatureHighWordBit = 10,
  Feature_FeatureInterlockedAccess1Bit = 12,
  Feature_FeatureLoadStoreOnCondBit = 15,
  Feature_FeaturePopulationCountBit = 26,
  Feature_FeatureMessageSecurityAssist3Bit = 17,
  Feature_FeatureMessageSecurityAssist4Bit = 18,
  Feature_FeatureResetReferenceBitsMultipleBit = 28,
  Feature_FeatureExecutionHintBit = 6,
  Feature_FeatureLoadAndTrapBit = 13,
  Feature_FeatureMiscellaneousExtensionsBit = 23,
  Feature_FeatureProcessorAssistBit = 27,
  Feature_FeatureTransactionalExecutionBit = 30,
  Feature_FeatureDFPZonedConversionBit = 1,
  Feature_FeatureEnhancedDAT2Bit = 4,
  Feature_FeatureLoadAndZeroRightmostByteBit = 14,
  Feature_FeatureLoadStoreOnCond2Bit = 16,
  Feature_FeatureMessageSecurityAssist5Bit = 19,
  Feature_FeatureDFPPackedConversionBit = 0,
  Feature_FeatureVectorBit = 31,
  Feature_FeatureMiscellaneousExtensions2Bit = 24,
  Feature_FeatureGuardedStorageBit = 9,
  Feature_FeatureMessageSecurityAssist7Bit = 20,
  Feature_FeatureMessageSecurityAssist8Bit = 21,
  Feature_FeatureVectorEnhancements1Bit = 32,
  Feature_FeatureVectorPackedDecimalBit = 34,
  Feature_FeatureInsertReferenceBitsMultipleBit = 11,
  Feature_FeatureMiscellaneousExtensions3Bit = 25,
  Feature_FeatureMessageSecurityAssist9Bit = 22,
  Feature_FeatureVectorEnhancements2Bit = 33,
  Feature_FeatureVectorPackedDecimalEnhancementBit = 35,
  Feature_FeatureEnhancedSortBit = 5,
  Feature_FeatureDeflateConversionBit = 2,
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_FeatureSoftFloatBit: return "soft-float";
  case Feature_FeatureDistinctOpsBit: return "distinct-ops";
  case Feature_FeatureFastSerializationBit: return "fast-serialization";
  case Feature_FeatureFPExtensionBit: return "fp-extension";
  case Feature_FeatureHighWordBit: return "high-word";
  case Feature_FeatureInterlockedAccess1Bit: return "interlocked-access1";
  case Feature_FeatureLoadStoreOnCondBit: return "load-store-on-cond";
  case Feature_FeaturePopulationCountBit: return "population-count";
  case Feature_FeatureMessageSecurityAssist3Bit: return "message-security-assist-extension3";
  case Feature_FeatureMessageSecurityAssist4Bit: return "message-security-assist-extension4";
  case Feature_FeatureResetReferenceBitsMultipleBit: return "reset-reference-bits-multiple";
  case Feature_FeatureExecutionHintBit: return "execution-hint";
  case Feature_FeatureLoadAndTrapBit: return "load-and-trap";
  case Feature_FeatureMiscellaneousExtensionsBit: return "miscellaneous-extensions";
  case Feature_FeatureProcessorAssistBit: return "processor-assist";
  case Feature_FeatureTransactionalExecutionBit: return "transactional-execution";
  case Feature_FeatureDFPZonedConversionBit: return "dfp-zoned-conversion";
  case Feature_FeatureEnhancedDAT2Bit: return "enhanced-dat-2";
  case Feature_FeatureLoadAndZeroRightmostByteBit: return "load-and-zero-rightmost-byte";
  case Feature_FeatureLoadStoreOnCond2Bit: return "load-store-on-cond-2";
  case Feature_FeatureMessageSecurityAssist5Bit: return "message-security-assist-extension5";
  case Feature_FeatureDFPPackedConversionBit: return "dfp-packed-conversion";
  case Feature_FeatureVectorBit: return "vector";
  case Feature_FeatureMiscellaneousExtensions2Bit: return "miscellaneous-extensions-2";
  case Feature_FeatureGuardedStorageBit: return "guarded-storage";
  case Feature_FeatureMessageSecurityAssist7Bit: return "message-security-assist-extension7";
  case Feature_FeatureMessageSecurityAssist8Bit: return "message-security-assist-extension8";
  case Feature_FeatureVectorEnhancements1Bit: return "vector-enhancements-1";
  case Feature_FeatureVectorPackedDecimalBit: return "vector-packed-decimal";
  case Feature_FeatureInsertReferenceBitsMultipleBit: return "insert-reference-bits-multiple";
  case Feature_FeatureMiscellaneousExtensions3Bit: return "miscellaneous-extensions-3";
  case Feature_FeatureMessageSecurityAssist9Bit: return "message-security-assist-extension9";
  case Feature_FeatureVectorEnhancements2Bit: return "vector-enhancements-2";
  case Feature_FeatureVectorPackedDecimalEnhancementBit: return "vector-packed-decimal-enhancement";
  case Feature_FeatureEnhancedSortBit: return "enhanced-sort";
  case Feature_FeatureDeflateConversionBit: return "deflate-conversion";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static void applyMnemonicAliases(StringRef &Mnemonic, const FeatureBitset &Features, unsigned VariantID) {
  switch (VariantID) {
  case 0:
      switch (Mnemonic.size()) {
      default: break;
      case 3:	 // 11 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'b':	 // 8 strings to match.
          if (Mnemonic[1] != 'r')
            break;
          switch (Mnemonic[2]) {
          default: break;
          case 'e':	 // 1 string to match.
            Mnemonic = "je";	 // "bre"
            return;
          case 'h':	 // 1 string to match.
            Mnemonic = "jh";	 // "brh"
            return;
          case 'l':	 // 1 string to match.
            Mnemonic = "jl";	 // "brl"
            return;
          case 'm':	 // 1 string to match.
            Mnemonic = "jm";	 // "brm"
            return;
          case 'o':	 // 1 string to match.
            Mnemonic = "jo";	 // "bro"
            return;
          case 'p':	 // 1 string to match.
            Mnemonic = "jp";	 // "brp"
            return;
          case 'u':	 // 1 string to match.
            Mnemonic = "j";	 // "bru"
            return;
          case 'z':	 // 1 string to match.
            Mnemonic = "jz";	 // "brz"
            return;
          }
          break;
        case 'j':	 // 3 strings to match.
          switch (Mnemonic[1]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Mnemonic[2] != 's')
              break;
            Mnemonic = "bras";	 // "jas"
            return;
          case 'c':	 // 1 string to match.
            if (Mnemonic[2] != 't')
              break;
            Mnemonic = "brct";	 // "jct"
            return;
          case 'x':	 // 1 string to match.
            if (Mnemonic[2] != 'h')
              break;
            Mnemonic = "brxh";	 // "jxh"
            return;
          }
          break;
        }
        break;
      case 4:	 // 22 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'b':	 // 18 strings to match.
          if (Mnemonic[1] != 'r')
            break;
          switch (Mnemonic[2]) {
          default: break;
          case 'e':	 // 1 string to match.
            if (Mnemonic[3] != 'l')
              break;
            Mnemonic = "jge";	 // "brel"
            return;
          case 'h':	 // 2 strings to match.
            switch (Mnemonic[3]) {
            default: break;
            case 'e':	 // 1 string to match.
              Mnemonic = "jhe";	 // "brhe"
              return;
            case 'l':	 // 1 string to match.
              Mnemonic = "jgh";	 // "brhl"
              return;
            }
            break;
          case 'l':	 // 3 strings to match.
            switch (Mnemonic[3]) {
            default: break;
            case 'e':	 // 1 string to match.
              Mnemonic = "jle";	 // "brle"
              return;
            case 'h':	 // 1 string to match.
              Mnemonic = "jlh";	 // "brlh"
              return;
            case 'l':	 // 1 string to match.
              Mnemonic = "jgl";	 // "brll"
              return;
            }
            break;
          case 'm':	 // 1 string to match.
            if (Mnemonic[3] != 'l')
              break;
            Mnemonic = "jgm";	 // "brml"
            return;
          case 'n':	 // 7 strings to match.
            switch (Mnemonic[3]) {
            default: break;
            case 'e':	 // 1 string to match.
              Mnemonic = "jne";	 // "brne"
              return;
            case 'h':	 // 1 string to match.
              Mnemonic = "jnh";	 // "brnh"
              return;
            case 'l':	 // 1 string to match.
              Mnemonic = "jnl";	 // "brnl"
              return;
            case 'm':	 // 1 string to match.
              Mnemonic = "jnm";	 // "brnm"
              return;
            case 'o':	 // 1 string to match.
              Mnemonic = "jno";	 // "brno"
              return;
            case 'p':	 // 1 string to match.
              Mnemonic = "jnp";	 // "brnp"
              return;
            case 'z':	 // 1 string to match.
              Mnemonic = "jnz";	 // "brnz"
              return;
            }
            break;
          case 'o':	 // 1 string to match.
            if (Mnemonic[3] != 'l')
              break;
            Mnemonic = "jgo";	 // "brol"
            return;
          case 'p':	 // 1 string to match.
            if (Mnemonic[3] != 'l')
              break;
            Mnemonic = "jgp";	 // "brpl"
            return;
          case 'u':	 // 1 string to match.
            if (Mnemonic[3] != 'l')
              break;
            Mnemonic = "jg";	 // "brul"
            return;
          case 'z':	 // 1 string to match.
            if (Mnemonic[3] != 'l')
              break;
            Mnemonic = "jgz";	 // "brzl"
            return;
          }
          break;
        case 'j':	 // 4 strings to match.
          switch (Mnemonic[1]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (memcmp(Mnemonic.data()+2, "sl", 2) != 0)
              break;
            Mnemonic = "brasl";	 // "jasl"
            return;
          case 'c':	 // 1 string to match.
            if (memcmp(Mnemonic.data()+2, "tg", 2) != 0)
              break;
            Mnemonic = "brctg";	 // "jctg"
            return;
          case 'x':	 // 2 strings to match.
            switch (Mnemonic[2]) {
            default: break;
            case 'h':	 // 1 string to match.
              if (Mnemonic[3] != 'g')
                break;
              Mnemonic = "brxhg";	 // "jxhg"
              return;
            case 'l':	 // 1 string to match.
              if (Mnemonic[3] != 'e')
                break;
              Mnemonic = "brxle";	 // "jxle"
              return;
            }
            break;
          }
          break;
        }
        break;
      case 5:	 // 14 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'b':	 // 13 strings to match.
          if (Mnemonic[1] != 'r')
            break;
          switch (Mnemonic[2]) {
          default: break;
          case 'h':	 // 1 string to match.
            if (memcmp(Mnemonic.data()+3, "el", 2) != 0)
              break;
            Mnemonic = "jghe";	 // "brhel"
            return;
          case 'l':	 // 2 strings to match.
            switch (Mnemonic[3]) {
            default: break;
            case 'e':	 // 1 string to match.
              if (Mnemonic[4] != 'l')
                break;
              Mnemonic = "jgle";	 // "brlel"
              return;
            case 'h':	 // 1 string to match.
              if (Mnemonic[4] != 'l')
                break;
              Mnemonic = "jglh";	 // "brlhl"
              return;
            }
            break;
          case 'n':	 // 10 strings to match.
            switch (Mnemonic[3]) {
            default: break;
            case 'e':	 // 1 string to match.
              if (Mnemonic[4] != 'l')
                break;
              Mnemonic = "jgne";	 // "brnel"
              return;
            case 'h':	 // 2 strings to match.
              switch (Mnemonic[4]) {
              default: break;
              case 'e':	 // 1 string to match.
                Mnemonic = "jnhe";	 // "brnhe"
                return;
              case 'l':	 // 1 string to match.
                Mnemonic = "jgnh";	 // "brnhl"
                return;
              }
              break;
            case 'l':	 // 3 strings to match.
              switch (Mnemonic[4]) {
              default: break;
              case 'e':	 // 1 string to match.
                Mnemonic = "jnle";	 // "brnle"
                return;
              case 'h':	 // 1 string to match.
                Mnemonic = "jnlh";	 // "brnlh"
                return;
              case 'l':	 // 1 string to match.
                Mnemonic = "jgnl";	 // "brnll"
                return;
              }
              break;
            case 'm':	 // 1 string to match.
              if (Mnemonic[4] != 'l')
                break;
              Mnemonic = "jgnm";	 // "brnml"
              return;
            case 'o':	 // 1 string to match.
              if (Mnemonic[4] != 'l')
                break;
              Mnemonic = "jgno";	 // "brnol"
              return;
            case 'p':	 // 1 string to match.
              if (Mnemonic[4] != 'l')
                break;
              Mnemonic = "jgnp";	 // "brnpl"
              return;
            case 'z':	 // 1 string to match.
              if (Mnemonic[4] != 'l')
                break;
              Mnemonic = "jgnz";	 // "brnzl"
              return;
            }
            break;
          }
          break;
        case 'j':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "xleg", 4) != 0)
            break;
          Mnemonic = "brxlg";	 // "jxleg"
          return;
        }
        break;
      case 6:	 // 3 strings to match.
        if (memcmp(Mnemonic.data()+0, "brn", 3) != 0)
          break;
        switch (Mnemonic[3]) {
        default: break;
        case 'h':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+4, "el", 2) != 0)
            break;
          Mnemonic = "jgnhe";	 // "brnhel"
          return;
        case 'l':	 // 2 strings to match.
          switch (Mnemonic[4]) {
          default: break;
          case 'e':	 // 1 string to match.
            if (Mnemonic[5] != 'l')
              break;
            Mnemonic = "jgnle";	 // "brnlel"
            return;
          case 'h':	 // 1 string to match.
            if (Mnemonic[5] != 'l')
              break;
            Mnemonic = "jgnlh";	 // "brnlhl"
            return;
          }
          break;
        }
        break;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 3:	 // 11 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'b':	 // 8 strings to match.
      if (Mnemonic[1] != 'r')
        break;
      switch (Mnemonic[2]) {
      default: break;
      case 'e':	 // 1 string to match.
        Mnemonic = "je";	 // "bre"
        return;
      case 'h':	 // 1 string to match.
        Mnemonic = "jh";	 // "brh"
        return;
      case 'l':	 // 1 string to match.
        Mnemonic = "jl";	 // "brl"
        return;
      case 'm':	 // 1 string to match.
        Mnemonic = "jm";	 // "brm"
        return;
      case 'o':	 // 1 string to match.
        Mnemonic = "jo";	 // "bro"
        return;
      case 'p':	 // 1 string to match.
        Mnemonic = "jp";	 // "brp"
        return;
      case 'u':	 // 1 string to match.
        Mnemonic = "j";	 // "bru"
        return;
      case 'z':	 // 1 string to match.
        Mnemonic = "jz";	 // "brz"
        return;
      }
      break;
    case 'j':	 // 3 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (Mnemonic[2] != 's')
          break;
        Mnemonic = "bras";	 // "jas"
        return;
      case 'c':	 // 1 string to match.
        if (Mnemonic[2] != 't')
          break;
        Mnemonic = "brct";	 // "jct"
        return;
      case 'x':	 // 1 string to match.
        if (Mnemonic[2] != 'h')
          break;
        Mnemonic = "brxh";	 // "jxh"
        return;
      }
      break;
    }
    break;
  case 4:	 // 22 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'b':	 // 18 strings to match.
      if (Mnemonic[1] != 'r')
        break;
      switch (Mnemonic[2]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (Mnemonic[3] != 'l')
          break;
        Mnemonic = "jge";	 // "brel"
        return;
      case 'h':	 // 2 strings to match.
        switch (Mnemonic[3]) {
        default: break;
        case 'e':	 // 1 string to match.
          Mnemonic = "jhe";	 // "brhe"
          return;
        case 'l':	 // 1 string to match.
          Mnemonic = "jgh";	 // "brhl"
          return;
        }
        break;
      case 'l':	 // 3 strings to match.
        switch (Mnemonic[3]) {
        default: break;
        case 'e':	 // 1 string to match.
          Mnemonic = "jle";	 // "brle"
          return;
        case 'h':	 // 1 string to match.
          Mnemonic = "jlh";	 // "brlh"
          return;
        case 'l':	 // 1 string to match.
          Mnemonic = "jgl";	 // "brll"
          return;
        }
        break;
      case 'm':	 // 1 string to match.
        if (Mnemonic[3] != 'l')
          break;
        Mnemonic = "jgm";	 // "brml"
        return;
      case 'n':	 // 7 strings to match.
        switch (Mnemonic[3]) {
        default: break;
        case 'e':	 // 1 string to match.
          Mnemonic = "jne";	 // "brne"
          return;
        case 'h':	 // 1 string to match.
          Mnemonic = "jnh";	 // "brnh"
          return;
        case 'l':	 // 1 string to match.
          Mnemonic = "jnl";	 // "brnl"
          return;
        case 'm':	 // 1 string to match.
          Mnemonic = "jnm";	 // "brnm"
          return;
        case 'o':	 // 1 string to match.
          Mnemonic = "jno";	 // "brno"
          return;
        case 'p':	 // 1 string to match.
          Mnemonic = "jnp";	 // "brnp"
          return;
        case 'z':	 // 1 string to match.
          Mnemonic = "jnz";	 // "brnz"
          return;
        }
        break;
      case 'o':	 // 1 string to match.
        if (Mnemonic[3] != 'l')
          break;
        Mnemonic = "jgo";	 // "brol"
        return;
      case 'p':	 // 1 string to match.
        if (Mnemonic[3] != 'l')
          break;
        Mnemonic = "jgp";	 // "brpl"
        return;
      case 'u':	 // 1 string to match.
        if (Mnemonic[3] != 'l')
          break;
        Mnemonic = "jg";	 // "brul"
        return;
      case 'z':	 // 1 string to match.
        if (Mnemonic[3] != 'l')
          break;
        Mnemonic = "jgz";	 // "brzl"
        return;
      }
      break;
    case 'j':	 // 4 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+2, "sl", 2) != 0)
          break;
        Mnemonic = "brasl";	 // "jasl"
        return;
      case 'c':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+2, "tg", 2) != 0)
          break;
        Mnemonic = "brctg";	 // "jctg"
        return;
      case 'x':	 // 2 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'h':	 // 1 string to match.
          if (Mnemonic[3] != 'g')
            break;
          Mnemonic = "brxhg";	 // "jxhg"
          return;
        case 'l':	 // 1 string to match.
          if (Mnemonic[3] != 'e')
            break;
          Mnemonic = "brxle";	 // "jxle"
          return;
        }
        break;
      }
      break;
    }
    break;
  case 5:	 // 14 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'b':	 // 13 strings to match.
      if (Mnemonic[1] != 'r')
        break;
      switch (Mnemonic[2]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+3, "el", 2) != 0)
          break;
        Mnemonic = "jghe";	 // "brhel"
        return;
      case 'l':	 // 2 strings to match.
        switch (Mnemonic[3]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (Mnemonic[4] != 'l')
            break;
          Mnemonic = "jgle";	 // "brlel"
          return;
        case 'h':	 // 1 string to match.
          if (Mnemonic[4] != 'l')
            break;
          Mnemonic = "jglh";	 // "brlhl"
          return;
        }
        break;
      case 'n':	 // 10 strings to match.
        switch (Mnemonic[3]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (Mnemonic[4] != 'l')
            break;
          Mnemonic = "jgne";	 // "brnel"
          return;
        case 'h':	 // 2 strings to match.
          switch (Mnemonic[4]) {
          default: break;
          case 'e':	 // 1 string to match.
            Mnemonic = "jnhe";	 // "brnhe"
            return;
          case 'l':	 // 1 string to match.
            Mnemonic = "jgnh";	 // "brnhl"
            return;
          }
          break;
        case 'l':	 // 3 strings to match.
          switch (Mnemonic[4]) {
          default: break;
          case 'e':	 // 1 string to match.
            Mnemonic = "jnle";	 // "brnle"
            return;
          case 'h':	 // 1 string to match.
            Mnemonic = "jnlh";	 // "brnlh"
            return;
          case 'l':	 // 1 string to match.
            Mnemonic = "jgnl";	 // "brnll"
            return;
          }
          break;
        case 'm':	 // 1 string to match.
          if (Mnemonic[4] != 'l')
            break;
          Mnemonic = "jgnm";	 // "brnml"
          return;
        case 'o':	 // 1 string to match.
          if (Mnemonic[4] != 'l')
            break;
          Mnemonic = "jgno";	 // "brnol"
          return;
        case 'p':	 // 1 string to match.
          if (Mnemonic[4] != 'l')
            break;
          Mnemonic = "jgnp";	 // "brnpl"
          return;
        case 'z':	 // 1 string to match.
          if (Mnemonic[4] != 'l')
            break;
          Mnemonic = "jgnz";	 // "brnzl"
          return;
        }
        break;
      }
      break;
    case 'j':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "xleg", 4) != 0)
        break;
      Mnemonic = "brxlg";	 // "jxleg"
      return;
    }
    break;
  case 6:	 // 3 strings to match.
    if (memcmp(Mnemonic.data()+0, "brn", 3) != 0)
      break;
    switch (Mnemonic[3]) {
    default: break;
    case 'h':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+4, "el", 2) != 0)
        break;
      Mnemonic = "jgnhe";	 // "brnhel"
      return;
    case 'l':	 // 2 strings to match.
      switch (Mnemonic[4]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (Mnemonic[5] != 'l')
          break;
        Mnemonic = "jgnle";	 // "brnlel"
        return;
      case 'h':	 // 1 string to match.
        if (Mnemonic[5] != 'l')
          break;
        Mnemonic = "jgnlh";	 // "brnlhl"
        return;
      }
      break;
    }
    break;
  }
}

enum {
  Tie0_1_1,
  Tie1_1_1,
  Tie2_1_1,
};

static const uint8_t TiedAsmOperandTable[][3] = {
  /* Tie0_1_1 */ { 0, 1, 1 },
  /* Tie1_1_1 */ { 1, 1, 1 },
  /* Tie2_1_1 */ { 2, 1, 1 },
};

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegOperands,
  CVT_95_addBDXAddrOperands,
  CVT_95_addImmOperands,
  CVT_95_addBDAddrOperands,
  CVT_95_addBDLAddrOperands,
  CVT_95_addImmTLSOperands,
  CVT_imm_95_0,
  CVT_95_addBDRAddrOperands,
  CVT_regR0D,
  CVT_95_addBDVAddrOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0_1_1__FP641_1,
  Convert__FP641_0__FP641_1__FP641_2,
  Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1,
  Convert__FP321_0__Tie0_1_1__FP321_1,
  Convert__GR321_0__Tie0_1_1__S32Imm1_1,
  Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1,
  Convert__GR641_0__Tie0_1_1__S32Imm1_1,
  Convert__GR641_0__Tie0_1_1__GR321_1,
  Convert__GR641_0__Tie0_1_1__S16Imm1_1,
  Convert__GR641_0__GR641_1__S16Imm1_2,
  Convert__GR641_0__Tie0_1_1__GR641_1,
  Convert__GR641_0__GR641_1__GR641_2,
  Convert__BDAddr64Disp202_0__S8Imm1_1,
  Convert__GRH321_0__GRH321_1__GRH321_2,
  Convert__GRH321_0__GRH321_1__GR321_2,
  Convert__GR321_0__Tie0_1_1__S16Imm1_1,
  Convert__GR321_0__GR321_1__S16Imm1_2,
  Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1,
  Convert__GRH321_0__Tie0_1_1__S32Imm1_1,
  Convert__GR321_0__Tie0_1_1__GR321_1,
  Convert__GR321_0__Tie0_1_1__U32Imm1_1,
  Convert__GR641_0__Tie0_1_1__U32Imm1_1,
  Convert__GR321_0__GR321_1__GR321_2,
  Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1,
  Convert__FP1281_0__Tie0_1_1__FP1281_1,
  Convert__FP1281_0__FP1281_1__FP1281_2,
  Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3,
  Convert__BDXAddr64Disp123_0,
  Convert__GR641_0__GR641_1,
  Convert__GR641_0__BDXAddr64Disp123_1,
  Convert__GR641_0__ADDR641_1,
  Convert__U4Imm1_0__BDXAddr64Disp123_1,
  Convert__U4Imm1_0__GR641_1,
  Convert__GR321_0__Tie0_1_1__GR641_1,
  Convert__ADDR641_0,
  Convert__BDXAddr64Disp203_0,
  Convert__U4Imm1_0__BDXAddr64Disp203_1,
  Convert__U4Imm1_0__PCRel161_1__BDXAddr64Disp123_2,
  Convert__U4Imm1_0__PCRel121_1__PCRel241_2,
  Convert__GR641_0__PCRelTLS162_1,
  Convert__GR641_0__PCRelTLS322_1,
  Convert__U4Imm1_0__PCRel161_1,
  Convert__U4Imm1_0__PCRel321_1,
  Convert__GR321_0__Tie0_1_1__PCRel161_1,
  Convert__GR641_0__Tie0_1_1__PCRel161_1,
  Convert__GRH321_0__Tie0_1_1__PCRel321_1,
  Convert__GR321_0__Tie0_1_1__GR321_1__PCRel161_2,
  Convert__GR641_0__Tie0_1_1__GR641_1__PCRel161_2,
  Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp122_2,
  Convert__GR641_0__Tie0_1_1__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__BDXAddr64Disp123_1,
  Convert__FP641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP641_1,
  Convert__FP641_0__GR321_1,
  Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP641_0__GR641_1,
  Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2,
  Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp122_2,
  Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp202_2,
  Convert__FP321_0__BDXAddr64Disp123_1,
  Convert__FP321_0__FP321_1,
  Convert__FP321_0__GR321_1,
  Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP321_0__GR641_1,
  Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP1281_0__FP1281_1,
  Convert__BDAddr64Disp122_0,
  Convert__GR321_0__U4Imm1_1__FP641_2,
  Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR321_0__U4Imm1_1__FP321_2,
  Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__GR321_0__S32Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2,
  Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR641_0__BDXAddr64Disp203_1,
  Convert__GR641_0__U4Imm1_1__FP641_2,
  Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__GR641_0__U4Imm1_1__FP321_2,
  Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__GR641_0__S32Imm1_1,
  Convert__GR641_0__GR321_1,
  Convert__GR641_0__PCRel321_1,
  Convert__GR641_0__S16Imm1_1,
  Convert__BDAddr64Disp122_0__S16Imm1_1,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__S8Imm1_1__PCRel161_2,
  Convert__GR641_0__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__GR641_1__BDAddr64Disp122_2,
  Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__GR641_1__PCRel161_2,
  Convert__GR641_0__GR641_1__U4Imm1_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GRH321_0__BDXAddr64Disp203_1,
  Convert__GRH321_0__GRH321_1,
  Convert__GR321_0__S16Imm1_1,
  Convert__GRH321_0__GR321_1,
  Convert__GR321_0__PCRel321_1,
  Convert__GR321_0__BDXAddr64Disp203_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__S32Imm1_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__S8Imm1_1__PCRel161_2,
  Convert__GR321_0__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__GR1281_1__Tie0_1_1__Tie1_1_1,
  Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1,
  Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1,
  Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp122_2,
  Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp202_2,
  Convert__BDAddr64Disp122_0__U16Imm1_1,
  Convert__GR321_0__U32Imm1_1,
  Convert__GR321_0__U16Imm1_1__U4Imm1_2,
  Convert__GR321_0__U16Imm1_1,
  Convert__GR641_0__U32Imm1_1,
  Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2,
  Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__U8Imm1_1__PCRel161_2,
  Convert__GR641_0__U16Imm1_1__U4Imm1_2,
  Convert__GR641_0__U16Imm1_1,
  Convert__GR641_0__BDAddr64Disp202_2__U4Imm1_1,
  Convert__GR641_0__BDAddr64Disp202_1,
  Convert__BDAddr64Disp122_0__U8Imm1_1,
  Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__U32Imm1_1,
  Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__U8Imm1_1__PCRel161_2,
  Convert__BDAddr64Disp202_0__U8Imm1_1,
  Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR321_0__GR321_1,
  Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3,
  Convert__GR321_0__GR321_1__BDAddr64Disp122_2,
  Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__GR321_1__PCRel161_2,
  Convert__GR321_0__GR321_1__U4Imm1_2,
  Convert__GR641_0__GR641_1__Tie0_1_1__Tie1_1_1,
  Convert__GR321_0__BDAddr64Disp202_2__U4Imm1_1,
  Convert__GR321_0__BDAddr64Disp202_1,
  Convert__FP641_0__FP641_2__FP641_1,
  Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2,
  Convert__AR321_0__AR321_1,
  Convert__GR1281_0__GR1281_2__GR641_1,
  Convert__GR1281_0__GR1281_2__GR641_1__U4Imm1_3,
  Convert_NoOperands,
  Convert__GR641_0__FP641_1__U4Imm1_2,
  Convert__GR1281_0__Tie0_1_1__GR641_1,
  Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2,
  Convert__GR1281_0__FP1281_1__U4Imm1_2,
  Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp202_2,
  Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2,
  Convert__GR641_0__FP641_1,
  Convert__GR1281_0__FP1281_1,
  Convert__FP1281_0__GR321_1,
  Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3,
  Convert__FP1281_0__GR641_1,
  Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3,
  Convert__FP1281_0__GR1281_1,
  Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp123_1,
  Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__GR641_2,
  Convert__FP641_0__FP641_1__Tie0_1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__FP321_1__Tie0_1_1__FP321_2__U4Imm1_3,
  Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1,
  Convert__GR1281_0__Tie0_1_1__GR321_1,
  Convert__GR321_0__AR321_1,
  Convert__GR641_0__GR641_1__BDAddr32Disp202_2,
  Convert__GR321_0__GR641_1,
  Convert__GR321_0,
  Convert__GR641_0,
  Convert__GR321_0__Tie0_1_1,
  Convert__GR1281_0__GR321_1,
  Convert__FP641_0__U4Imm1_1__FP641_2,
  Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__U4Imm1_1__FP321_2,
  Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3,
  Convert__FP1281_0__U4Imm1_1__FP1281_2,
  Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3,
  Convert__GR1281_0__GR641_1,
  Convert__GR641_0__Tie0_1_1__BDXAddr64Disp123_1,
  Convert__GR321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp122_2,
  Convert__GRH321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp202_2,
  Convert__GR641_0__GR641_2__GR641_1,
  Convert__GR641_0__GR641_2__GR641_1__U4Imm1_3,
  Convert__FP1281_0__FP1281_2__FP1281_1,
  Convert__GRH321_0__Tie0_1_1__U16Imm1_1,
  Convert__GR321_0__Tie0_1_1__U16Imm1_1,
  Convert__GR641_0__GR321_1__GR321_2,
  Convert__GR641_0__GR321_1__GR321_2__U4Imm1_3,
  Convert__PCRel161_0,
  Convert__PCRel321_0,
  Convert__imm_95_0__PCRel321_0,
  Convert__imm_95_0__PCRel161_0,
  Convert__GR1281_1__GR641_0__Tie0_1_1,
  Convert__GR1281_0__GR1281_2__GR1281_1__Tie0_1_1__Tie1_1_1__Tie2_1_1,
  Convert__GR321_0__GR321_1__BDAddr64Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr64Disp202_2,
  Convert__AR321_0__AR321_1__BDAddr64Disp122_2,
  Convert__AR321_0__AR321_1__BDAddr64Disp202_2,
  Convert__BDAddr64Disp122_0__BDAddr64Disp122_1,
  Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__CR641_0__CR641_1__BDAddr64Disp122_2,
  Convert__CR641_0__CR641_1__BDAddr64Disp202_2,
  Convert__FP641_0__FP321_1,
  Convert__FP641_0__FP321_1__U4Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP1281_1,
  Convert__FP641_0__BDXAddr64Disp203_1,
  Convert__FP321_0__FP641_1,
  Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3,
  Convert__FP321_0__FP1281_1,
  Convert__FP321_0__BDXAddr64Disp203_1,
  Convert__GR641_0__GR641_1__BDAddr64Disp122_2__BDAddr64Disp122_3,
  Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1,
  Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1,
  Convert__GRH321_0__Tie0_1_1__GRH321_1__U4Imm1_2,
  Convert__GRH321_0__Tie0_1_1__GRH321_1,
  Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0_1_1__S16Imm1_1__U4Imm1_2,
  Convert__GR641_0__Tie0_1_1__GR641_1__U4Imm1_2,
  Convert__GRH321_0__Tie0_1_1__S16Imm1_1__U4Imm1_2,
  Convert__GRH321_0__Tie0_1_1__S16Imm1_1,
  Convert__GR321_0__Tie0_1_1__S16Imm1_1__U4Imm1_2,
  Convert__GR321_0__Tie0_1_1__GR321_1__U4Imm1_2,
  Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2,
  Convert__GR1281_0__BDXAddr64Disp203_1,
  Convert__GR641_0__GR641_1__Tie0_1_1__GR641_2__U4Imm1_3,
  Convert__FP1281_0__BDXAddr64Disp123_1,
  Convert__FP1281_0__FP641_1,
  Convert__FP1281_0__FP641_1__U4Imm1_2,
  Convert__FP1281_0__FP321_1,
  Convert__FP641_0,
  Convert__FP321_0,
  Convert__FP1281_0,
  Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2,
  Convert__FP321_0__Tie0_1_1__FP321_1__BDXAddr64Disp123_2,
  Convert__FP321_0__Tie0_1_1__FP321_1__FP321_2,
  Convert__FP1281_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2,
  Convert__FP1281_0__Tie0_1_1__FP641_1__FP641_2,
  Convert__FP641_0__Tie0_1_1__FP321_1,
  Convert__GR1281_0__GR641_1__GR641_2,
  Convert__GR1281_0,
  Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2,
  Convert__FP1281_0__Tie0_1_1__BDXAddr64Disp123_1,
  Convert__FP1281_0__Tie0_1_1__FP641_1,
  Convert__FP1281_0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP1281_0__FP641_1__FP641_2,
  Convert__U4Imm1_0__U4Imm1_1,
  Convert__GRH321_0__Tie0_1_1__U32Imm1_1,
  Convert__imm_95_0__BDXAddr64Disp123_0,
  Convert__imm_95_0__regR0D,
  Convert__imm_95_0__GR641_0,
  Convert__GR641_1__GR321_0__Tie0_1_1,
  Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1,
  Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3,
  Convert__GR641_0__Tie0_1_1,
  Convert__FP1281_0__FP1281_1__Tie0_1_1__FP1281_2__U4Imm1_3,
  Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GRH321_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__GR321_1__BDAddr32Disp202_2,
  Convert__AR321_0__GR321_1,
  Convert__GRH321_0__GRH321_2__GRH321_1__U4Imm1_3,
  Convert__GRH321_0__GRH321_2__GRH321_1,
  Convert__GR321_0__GR321_2__GR321_1__U4Imm1_3,
  Convert__GR321_0__GR321_2__GR321_1,
  Convert__GR321_0__Tie0_1_1__BDAddr32Disp122_1,
  Convert__GR1281_0__Tie0_1_1__BDAddr32Disp122_1,
  Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2,
  Convert__BDAddr32Disp122_0,
  Convert__BDLAddr64Disp12Len43_0__BDAddr32Disp122_1__U4Imm1_2,
  Convert__GR321_0__GR641_1__U4Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__imm_95_0,
  Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GRH321_0__BDAddr64Disp202_1,
  Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__U8Imm1_0,
  Convert__FP321_0__U4Imm1_1__FP641_2,
  Convert__GRH321_0__U16Imm1_1,
  Convert__BDLAddr64Disp12Len43_0,
  Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1,
  Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1__U4Imm1_2,
  Convert__GR641_1__GR1281_0__Tie1_1_1,
  Convert__GR641_1__GR1281_0__Tie1_1_1__U4Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__VR1281_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3,
  Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U4Imm1_2,
  Convert__VR1281_0__VR1281_1,
  Convert__GR321_0__VR1281_1__U4Imm1_2,
  Convert__GR321_0__VR1281_1__U4Imm1_2__U4Imm1_3,
  Convert__GR641_0__VR1281_1__U4Imm1_2,
  Convert__GR641_0__VR1281_1__U4Imm1_2__U4Imm1_3,
  Convert__VR1281_0__GR321_1__U8Imm1_2__U4Imm1_3,
  Convert__VR1281_0__GR641_1__U8Imm1_2__U4Imm1_3,
  Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4,
  Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3,
  Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5,
  Convert__VR1281_0__VR1281_1__U12Imm1_2__U4Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U12Imm1_2,
  Convert__VR1281_0__U16Imm1_1,
  Convert__VR1281_0__Tie0_1_1__BDVAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__Tie0_1_1__BDVAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__U8Imm1_1__U8Imm1_2__U4Imm1_3,
  Convert__VR1281_0__U8Imm1_1__U8Imm1_2,
  Convert__VR1281_0__VR1281_1__U4Imm1_2__imm_95_0,
  Convert__VR1281_0__VR1281_1__imm_95_0,
  Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U4Imm1_2,
  Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U3Imm1_2,
  Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U4Imm1_2,
  Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U2Imm1_2,
  Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U1Imm1_2,
  Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U3Imm1_2,
  Convert__GR641_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3,
  Convert__GR641_0__VR1281_1__BDAddr32Disp122_2,
  Convert__VR1281_0__U16Imm1_1__U4Imm1_2,
  Convert__VR1281_0__GR321_1__BDAddr64Disp122_2,
  Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2,
  Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2__U4Imm1_3,
  Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2,
  Convert__VR1281_0__Tie0_1_1__GR641_1__BDAddr32Disp122_2__U4Imm1_3,
  Convert__VR1281_0__Tie0_1_1__GR321_1__BDAddr32Disp122_2,
  Convert__VR1281_0__Tie0_1_1__GR641_1__BDAddr32Disp122_2,
  Convert__VR1281_0__GR641_1__GR641_2,
  Convert__VR1281_0__VR1281_1__VR1281_1,
  Convert__VR1281_0,
  Convert__VR1281_0__VR1281_1__U8Imm1_2__U8Imm1_3__U4Imm1_4,
  Convert__VR1281_0__VR1281_1__U16Imm1_2__U4Imm1_3,
  Convert__VR1281_0__VR1281_1__U16Imm1_2,
  Convert__VR1281_0__S16Imm1_1__U4Imm1_2,
  Convert__VR1281_0__S16Imm1_1,
  Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3,
  Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2,
  Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0,
  Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0,
  Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3,
  Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3,
  Convert__VR641_0__VR641_1__VR641_2,
  Convert__VR321_0__VR321_1__VR321_2,
  Convert__VR641_0__VR641_1,
  Convert__VR321_0__VR321_1,
  Convert__VR1281_0__VR641_1,
  Convert__VR641_0__VR321_1,
  Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3,
  Convert__VR641_0__VR1281_1__U4Imm1_2__U4Imm1_3,
  Convert__VR641_0__VR641_1__VR641_2__VR641_3,
  Convert__VR321_0__VR321_1__VR321_2__VR321_3,
  Convert__VR641_0__VR641_1__VR641_2__U4Imm1_3,
  Convert__VR321_0__VR321_1__VR321_2__U4Imm1_3,
  Convert__VR641_0__VR641_1__U4Imm1_2,
  Convert__VR321_0__VR321_1__U4Imm1_2,
  Convert__VR641_0__VR641_1__U12Imm1_2,
  Convert__VR321_0__VR321_1__U12Imm1_2,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0_1_1__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0_1_1__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__S8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__GRH321_1__GRH321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GRH321_0__GRH321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0_1_1__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP1281_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__BDXAddr64Disp123_0
  { CVT_95_addBDXAddrOperands, 1, CVT_Done },
  // Convert__GR641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__ADDR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp123_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__GR641_1
  { CVT_95_addImmOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__ADDR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__BDXAddr64Disp203_0
  { CVT_95_addBDXAddrOperands, 1, CVT_Done },
  // Convert__U4Imm1_0__BDXAddr64Disp203_1
  { CVT_95_addImmOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1__BDXAddr64Disp123_2
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__U4Imm1_0__PCRel121_1__PCRel241_2
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__PCRelTLS162_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRelTLS322_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmTLSOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel321_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0
  { CVT_95_addBDAddrOperands, 1, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__S16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GRH321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__GRH321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR1281_1__Tie0_1_1__Tie1_1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_Done },
  // Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp122_0__U16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__U8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__Tie0_1_1__Tie1_1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_2__U4Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_2__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AR321_0__AR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR1281_2__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR1281_2__GR641_1__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__GR641_0__FP641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2
  { CVT_95_addBDAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR1281_0__FP1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__GR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__FP641_1__Tie0_1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__FP321_1__Tie0_1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__AR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR321_0__Tie0_1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__GR1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_2__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_2__GR641_1__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__FP1281_2__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__GR321_1__GR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__PCRel161_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__PCRel321_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__imm_95_0__PCRel321_0
  { CVT_imm_95_0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__imm_95_0__PCRel161_0
  { CVT_imm_95_0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GR1281_1__GR641_0__Tie0_1_1
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__GR1281_0__GR1281_2__GR1281_1__Tie0_1_1__Tie1_1_1__Tie2_1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_Tied, Tie2_1_1, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__AR321_0__AR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__AR321_0__AR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp122_0__BDAddr64Disp122_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__CR641_0__CR641_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__CR641_0__CR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__FP321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP321_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp122_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__GRH321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__GRH321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR1281_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__Tie0_1_1__GR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__FP1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0_1_1__FP321_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0_1_1__FP321_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0_1_1__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0_1_1__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2
  { CVT_95_addBDRAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0_1_1__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0_1_1__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__U4Imm1_0__U4Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_0__BDXAddr64Disp123_0
  { CVT_imm_95_0, 0, CVT_95_addBDXAddrOperands, 1, CVT_Done },
  // Convert__imm_95_0__regR0D
  { CVT_imm_95_0, 0, CVT_regR0D, 0, CVT_Done },
  // Convert__imm_95_0__GR641_0
  { CVT_imm_95_0, 0, CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_1__GR321_0__Tie0_1_1
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addBDLAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addBDAddrOperands, 4, CVT_Done },
  // Convert__GR641_0__Tie0_1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__FP1281_0__FP1281_1__Tie0_1_1__FP1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GRH321_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__AR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GRH321_0__GRH321_2__GRH321_1__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GRH321_0__GRH321_2__GRH321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_2__GR321_1__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_2__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0_1_1__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0_1_1__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__BDAddr32Disp122_0
  { CVT_95_addBDAddrOperands, 1, CVT_Done },
  // Convert__BDLAddr64Disp12Len43_0__BDAddr32Disp122_1__U4Imm1_2
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GRH321_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__U8Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GRH321_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDLAddr64Disp12Len43_0
  { CVT_95_addBDLAddrOperands, 1, CVT_Done },
  // Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_Done },
  // Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Tied, Tie0_1_1, CVT_Tied, Tie1_1_1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_1__GR1281_0__Tie1_1_1
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, Tie1_1_1, CVT_Done },
  // Convert__GR641_1__GR1281_0__Tie1_1_1__U4Imm1_2
  { CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 1, CVT_Tied, Tie1_1_1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__VR1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__VR1281_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__VR1281_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__VR1281_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__GR321_1__U8Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__GR641_1__U8Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U12Imm1_2__U4Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__BDVAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__BDVAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__U8Imm1_1__U8Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__U8Imm1_1__U8Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U4Imm1_2__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__VR1281_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__U16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__GR641_1__BDAddr32Disp122_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__GR321_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__Tie0_1_1__GR641_1__BDAddr32Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, Tie0_1_1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__VR1281_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U8Imm1_2__U8Imm1_3__U4Imm1_4
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U16Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__VR1281_1__U16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__S16Imm1_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDVAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_95_addImmOperands, 5, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR321_0__VR321_1__VR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__VR641_0__VR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR321_0__VR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR1281_0__VR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR641_0__VR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR1281_1__U4Imm1_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2__VR641_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR321_0__VR321_1__VR321_2__VR321_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addRegOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__VR641_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR321_0__VR321_1__VR321_2__U4Imm1_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__VR641_0__VR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR321_0__VR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR641_0__VR641_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__VR321_0__VR321_1__U12Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
};

void SystemZAsmParser::
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
      static_cast<SystemZOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
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
    case CVT_95_addRegOperands:
      static_cast<SystemZOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addBDXAddrOperands:
      static_cast<SystemZOperand &>(*Operands[OpIdx]).addBDXAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmOperands:
      static_cast<SystemZOperand &>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addBDAddrOperands:
      static_cast<SystemZOperand &>(*Operands[OpIdx]).addBDAddrOperands(Inst, 2);
      break;
    case CVT_95_addBDLAddrOperands:
      static_cast<SystemZOperand &>(*Operands[OpIdx]).addBDLAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmTLSOperands:
      static_cast<SystemZOperand &>(*Operands[OpIdx]).addImmTLSOperands(Inst, 2);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addBDRAddrOperands:
      static_cast<SystemZOperand &>(*Operands[OpIdx]).addBDRAddrOperands(Inst, 3);
      break;
    case CVT_regR0D:
      Inst.addOperand(MCOperand::createReg(SystemZ::R0D));
      break;
    case CVT_95_addBDVAddrOperands:
      static_cast<SystemZOperand &>(*Operands[OpIdx]).addBDVAddrOperands(Inst, 3);
      break;
    }
  }
}

void SystemZAsmParser::
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
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDXAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addBDLAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmTLSOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addBDRAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_regR0D:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addBDVAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
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
  MCK_CCR, // register class 'CCR'
  MCK_FPCRegs, // register class 'FPCRegs'
  MCK_ADDR128Bit, // register class 'ADDR128Bit'
  MCK_FP128Bit, // register class 'FP128Bit'
  MCK_GR128Bit, // register class 'GR128Bit'
  MCK_ADDR32Bit, // register class 'ADDR32Bit'
  MCK_ADDR64Bit, // register class 'ADDR64Bit'
  MCK_AR32Bit, // register class 'AR32Bit'
  MCK_CR64Bit, // register class 'CR64Bit'
  MCK_FP32Bit, // register class 'FP32Bit'
  MCK_FP64Bit, // register class 'FP64Bit'
  MCK_GR32Bit, // register class 'GR32Bit'
  MCK_GR64Bit, // register class 'GR64Bit'
  MCK_GRH32Bit, // register class 'GRH32Bit'
  MCK_VF128Bit, // register class 'VF128Bit'
  MCK_Reg13, // derived register class
  MCK_GRX32Bit, // register class 'GRX32Bit'
  MCK_VR128Bit, // register class 'VR128Bit'
  MCK_VR32Bit, // register class 'VR32Bit'
  MCK_VR64Bit, // register class 'VR64Bit'
  MCK_AnyRegBit, // register class 'AnyRegBit'
  MCK_LAST_REGISTER = MCK_AnyRegBit,
  MCK_ADDR128, // user defined class 'ADDR128AsmOperand'
  MCK_ADDR32, // user defined class 'ADDR32AsmOperand'
  MCK_ADDR64, // user defined class 'ADDR64AsmOperand'
  MCK_AR32, // user defined class 'AR32AsmOperand'
  MCK_AnyReg, // user defined class 'AnyRegAsmOperand'
  MCK_BDAddr32Disp12, // user defined class 'BDAddr32Disp12'
  MCK_BDAddr32Disp20, // user defined class 'BDAddr32Disp20'
  MCK_BDAddr64Disp12, // user defined class 'BDAddr64Disp12'
  MCK_BDAddr64Disp20, // user defined class 'BDAddr64Disp20'
  MCK_BDLAddr64Disp12Len4, // user defined class 'BDLAddr64Disp12Len4'
  MCK_BDLAddr64Disp12Len8, // user defined class 'BDLAddr64Disp12Len8'
  MCK_BDRAddr64Disp12, // user defined class 'BDRAddr64Disp12'
  MCK_BDVAddr64Disp12, // user defined class 'BDVAddr64Disp12'
  MCK_BDXAddr64Disp12, // user defined class 'BDXAddr64Disp12'
  MCK_BDXAddr64Disp20, // user defined class 'BDXAddr64Disp20'
  MCK_CR64, // user defined class 'CR64AsmOperand'
  MCK_FP128, // user defined class 'FP128AsmOperand'
  MCK_FP32, // user defined class 'FP32AsmOperand'
  MCK_FP64, // user defined class 'FP64AsmOperand'
  MCK_GR128, // user defined class 'GR128AsmOperand'
  MCK_GR32, // user defined class 'GR32AsmOperand'
  MCK_GR64, // user defined class 'GR64AsmOperand'
  MCK_GRH32, // user defined class 'GRH32AsmOperand'
  MCK_GRX32, // user defined class 'GRX32AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_PCRel12, // user defined class 'PCRel12'
  MCK_PCRel16, // user defined class 'PCRel16'
  MCK_PCRel24, // user defined class 'PCRel24'
  MCK_PCRel32, // user defined class 'PCRel32'
  MCK_PCRelTLS16, // user defined class 'PCRelTLS16'
  MCK_PCRelTLS32, // user defined class 'PCRelTLS32'
  MCK_S16Imm, // user defined class 'S16Imm'
  MCK_S32Imm, // user defined class 'S32Imm'
  MCK_S8Imm, // user defined class 'S8Imm'
  MCK_U12Imm, // user defined class 'U12Imm'
  MCK_U16Imm, // user defined class 'U16Imm'
  MCK_U1Imm, // user defined class 'U1Imm'
  MCK_U2Imm, // user defined class 'U2Imm'
  MCK_U32Imm, // user defined class 'U32Imm'
  MCK_U3Imm, // user defined class 'U3Imm'
  MCK_U48Imm, // user defined class 'U48Imm'
  MCK_U4Imm, // user defined class 'U4Imm'
  MCK_U6Imm, // user defined class 'U6Imm'
  MCK_U8Imm, // user defined class 'U8Imm'
  MCK_VF128, // user defined class 'VF128AsmOperand'
  MCK_VR128, // user defined class 'VR128AsmOperand'
  MCK_VR32, // user defined class 'VR32AsmOperand'
  MCK_VR64, // user defined class 'VR64AsmOperand'
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

  switch (A) {
  default:
    return false;

  case MCK_ADDR128Bit:
    return B == MCK_GR128Bit;

  case MCK_ADDR32Bit:
    switch (B) {
    default: return false;
    case MCK_GR32Bit: return true;
    case MCK_GRX32Bit: return true;
    }

  case MCK_ADDR64Bit:
    switch (B) {
    default: return false;
    case MCK_GR64Bit: return true;
    case MCK_AnyRegBit: return true;
    }

  case MCK_FP32Bit:
    return B == MCK_VR32Bit;

  case MCK_FP64Bit:
    switch (B) {
    default: return false;
    case MCK_Reg13: return true;
    case MCK_VR64Bit: return true;
    case MCK_AnyRegBit: return true;
    }

  case MCK_GR32Bit:
    return B == MCK_GRX32Bit;

  case MCK_GR64Bit:
    return B == MCK_AnyRegBit;

  case MCK_GRH32Bit:
    return B == MCK_GRX32Bit;

  case MCK_VF128Bit:
    switch (B) {
    default: return false;
    case MCK_Reg13: return true;
    case MCK_VR128Bit: return true;
    case MCK_AnyRegBit: return true;
    }

  case MCK_Reg13:
    return B == MCK_AnyRegBit;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  SystemZOperand &Operand = (SystemZOperand &)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'ADDR128' class
  case MCK_ADDR128: {
    DiagnosticPredicate DP(Operand.isADDR128());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'ADDR32' class
  case MCK_ADDR32: {
    DiagnosticPredicate DP(Operand.isADDR32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'ADDR64' class
  case MCK_ADDR64: {
    DiagnosticPredicate DP(Operand.isADDR64());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'AR32' class
  case MCK_AR32: {
    DiagnosticPredicate DP(Operand.isAR32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'AnyReg' class
  case MCK_AnyReg: {
    DiagnosticPredicate DP(Operand.isAnyReg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDAddr32Disp12' class
  case MCK_BDAddr32Disp12: {
    DiagnosticPredicate DP(Operand.isBDAddr32Disp12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDAddr32Disp20' class
  case MCK_BDAddr32Disp20: {
    DiagnosticPredicate DP(Operand.isBDAddr32Disp20());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDAddr64Disp12' class
  case MCK_BDAddr64Disp12: {
    DiagnosticPredicate DP(Operand.isBDAddr64Disp12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDAddr64Disp20' class
  case MCK_BDAddr64Disp20: {
    DiagnosticPredicate DP(Operand.isBDAddr64Disp20());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDLAddr64Disp12Len4' class
  case MCK_BDLAddr64Disp12Len4: {
    DiagnosticPredicate DP(Operand.isBDLAddr64Disp12Len4());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDLAddr64Disp12Len8' class
  case MCK_BDLAddr64Disp12Len8: {
    DiagnosticPredicate DP(Operand.isBDLAddr64Disp12Len8());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDRAddr64Disp12' class
  case MCK_BDRAddr64Disp12: {
    DiagnosticPredicate DP(Operand.isBDRAddr64Disp12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDVAddr64Disp12' class
  case MCK_BDVAddr64Disp12: {
    DiagnosticPredicate DP(Operand.isBDVAddr64Disp12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDXAddr64Disp12' class
  case MCK_BDXAddr64Disp12: {
    DiagnosticPredicate DP(Operand.isBDXAddr64Disp12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BDXAddr64Disp20' class
  case MCK_BDXAddr64Disp20: {
    DiagnosticPredicate DP(Operand.isBDXAddr64Disp20());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'CR64' class
  case MCK_CR64: {
    DiagnosticPredicate DP(Operand.isCR64());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'FP128' class
  case MCK_FP128: {
    DiagnosticPredicate DP(Operand.isFP128());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'FP32' class
  case MCK_FP32: {
    DiagnosticPredicate DP(Operand.isFP32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'FP64' class
  case MCK_FP64: {
    DiagnosticPredicate DP(Operand.isFP64());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GR128' class
  case MCK_GR128: {
    DiagnosticPredicate DP(Operand.isGR128());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GR32' class
  case MCK_GR32: {
    DiagnosticPredicate DP(Operand.isGR32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GR64' class
  case MCK_GR64: {
    DiagnosticPredicate DP(Operand.isGR64());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GRH32' class
  case MCK_GRH32: {
    DiagnosticPredicate DP(Operand.isGRH32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'GRX32' class
  case MCK_GRX32: {
    DiagnosticPredicate DP(Operand.isGRX32());
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
  // 'PCRel12' class
  case MCK_PCRel12: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'PCRel16' class
  case MCK_PCRel16: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'PCRel24' class
  case MCK_PCRel24: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'PCRel32' class
  case MCK_PCRel32: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'PCRelTLS16' class
  case MCK_PCRelTLS16: {
    DiagnosticPredicate DP(Operand.isImmTLS());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'PCRelTLS32' class
  case MCK_PCRelTLS32: {
    DiagnosticPredicate DP(Operand.isImmTLS());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S16Imm' class
  case MCK_S16Imm: {
    DiagnosticPredicate DP(Operand.isS16Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S32Imm' class
  case MCK_S32Imm: {
    DiagnosticPredicate DP(Operand.isS32Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'S8Imm' class
  case MCK_S8Imm: {
    DiagnosticPredicate DP(Operand.isS8Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U12Imm' class
  case MCK_U12Imm: {
    DiagnosticPredicate DP(Operand.isU12Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U16Imm' class
  case MCK_U16Imm: {
    DiagnosticPredicate DP(Operand.isU16Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U1Imm' class
  case MCK_U1Imm: {
    DiagnosticPredicate DP(Operand.isU1Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U2Imm' class
  case MCK_U2Imm: {
    DiagnosticPredicate DP(Operand.isU2Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U32Imm' class
  case MCK_U32Imm: {
    DiagnosticPredicate DP(Operand.isU32Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U3Imm' class
  case MCK_U3Imm: {
    DiagnosticPredicate DP(Operand.isU3Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U48Imm' class
  case MCK_U48Imm: {
    DiagnosticPredicate DP(Operand.isU48Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U4Imm' class
  case MCK_U4Imm: {
    DiagnosticPredicate DP(Operand.isU4Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U6Imm' class
  case MCK_U6Imm: {
    DiagnosticPredicate DP(Operand.isU6Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'U8Imm' class
  case MCK_U8Imm: {
    DiagnosticPredicate DP(Operand.isU8Imm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'VF128' class
  case MCK_VF128: {
    DiagnosticPredicate DP(Operand.isVF128());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'VR128' class
  case MCK_VR128: {
    DiagnosticPredicate DP(Operand.isVR128());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'VR32' class
  case MCK_VR32: {
    DiagnosticPredicate DP(Operand.isVR32());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'VR64' class
  case MCK_VR64: {
    DiagnosticPredicate DP(Operand.isVR64());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case SystemZ::R0L: OpKind = MCK_GR32Bit; break;
    case SystemZ::R0H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R0D: OpKind = MCK_GR64Bit; break;
    case SystemZ::R1L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R1H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R1D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R2L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R2H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R2D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R3L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R3H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R3D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R4L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R4H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R4D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R5L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R5H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R5D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R6L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R6H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R6D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R7L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R7H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R7D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R8L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R8H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R8D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R9L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R9H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R9D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R10L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R10H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R10D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R11L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R11H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R11D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R12L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R12H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R12D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R13L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R13H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R13D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R14L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R14H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R14D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R15L: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R15H: OpKind = MCK_GRH32Bit; break;
    case SystemZ::R15D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R0Q: OpKind = MCK_GR128Bit; break;
    case SystemZ::R2Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R4Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R6Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R8Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R10Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R12Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R14Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::F0S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F0D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F1S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F1D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F2S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F2D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F3S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F3D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F4S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F4D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F5S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F5D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F6S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F6D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F7S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F7D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F8S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F8D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F9S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F9D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F10S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F10D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F11S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F11D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F12S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F12D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F13S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F13D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F14S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F14D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F15S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F15D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F16S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F16D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F17S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F17D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F18S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F18D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F19S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F19D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F20S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F20D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F21S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F21D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F22S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F22D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F23S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F23D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F24S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F24D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F25S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F25D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F26S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F26D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F27S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F27D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F28S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F28D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F29S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F29D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F30S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F30D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F31S: OpKind = MCK_VR32Bit; break;
    case SystemZ::F31D: OpKind = MCK_VR64Bit; break;
    case SystemZ::F0Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F1Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F4Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F5Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F8Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F9Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F12Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F13Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::V0: OpKind = MCK_VF128Bit; break;
    case SystemZ::V1: OpKind = MCK_VF128Bit; break;
    case SystemZ::V2: OpKind = MCK_VF128Bit; break;
    case SystemZ::V3: OpKind = MCK_VF128Bit; break;
    case SystemZ::V4: OpKind = MCK_VF128Bit; break;
    case SystemZ::V5: OpKind = MCK_VF128Bit; break;
    case SystemZ::V6: OpKind = MCK_VF128Bit; break;
    case SystemZ::V7: OpKind = MCK_VF128Bit; break;
    case SystemZ::V8: OpKind = MCK_VF128Bit; break;
    case SystemZ::V9: OpKind = MCK_VF128Bit; break;
    case SystemZ::V10: OpKind = MCK_VF128Bit; break;
    case SystemZ::V11: OpKind = MCK_VF128Bit; break;
    case SystemZ::V12: OpKind = MCK_VF128Bit; break;
    case SystemZ::V13: OpKind = MCK_VF128Bit; break;
    case SystemZ::V14: OpKind = MCK_VF128Bit; break;
    case SystemZ::V15: OpKind = MCK_VF128Bit; break;
    case SystemZ::V16: OpKind = MCK_VR128Bit; break;
    case SystemZ::V17: OpKind = MCK_VR128Bit; break;
    case SystemZ::V18: OpKind = MCK_VR128Bit; break;
    case SystemZ::V19: OpKind = MCK_VR128Bit; break;
    case SystemZ::V20: OpKind = MCK_VR128Bit; break;
    case SystemZ::V21: OpKind = MCK_VR128Bit; break;
    case SystemZ::V22: OpKind = MCK_VR128Bit; break;
    case SystemZ::V23: OpKind = MCK_VR128Bit; break;
    case SystemZ::V24: OpKind = MCK_VR128Bit; break;
    case SystemZ::V25: OpKind = MCK_VR128Bit; break;
    case SystemZ::V26: OpKind = MCK_VR128Bit; break;
    case SystemZ::V27: OpKind = MCK_VR128Bit; break;
    case SystemZ::V28: OpKind = MCK_VR128Bit; break;
    case SystemZ::V29: OpKind = MCK_VR128Bit; break;
    case SystemZ::V30: OpKind = MCK_VR128Bit; break;
    case SystemZ::V31: OpKind = MCK_VR128Bit; break;
    case SystemZ::CC: OpKind = MCK_CCR; break;
    case SystemZ::FPC: OpKind = MCK_FPCRegs; break;
    case SystemZ::A0: OpKind = MCK_AR32Bit; break;
    case SystemZ::A1: OpKind = MCK_AR32Bit; break;
    case SystemZ::A2: OpKind = MCK_AR32Bit; break;
    case SystemZ::A3: OpKind = MCK_AR32Bit; break;
    case SystemZ::A4: OpKind = MCK_AR32Bit; break;
    case SystemZ::A5: OpKind = MCK_AR32Bit; break;
    case SystemZ::A6: OpKind = MCK_AR32Bit; break;
    case SystemZ::A7: OpKind = MCK_AR32Bit; break;
    case SystemZ::A8: OpKind = MCK_AR32Bit; break;
    case SystemZ::A9: OpKind = MCK_AR32Bit; break;
    case SystemZ::A10: OpKind = MCK_AR32Bit; break;
    case SystemZ::A11: OpKind = MCK_AR32Bit; break;
    case SystemZ::A12: OpKind = MCK_AR32Bit; break;
    case SystemZ::A13: OpKind = MCK_AR32Bit; break;
    case SystemZ::A14: OpKind = MCK_AR32Bit; break;
    case SystemZ::A15: OpKind = MCK_AR32Bit; break;
    case SystemZ::C0: OpKind = MCK_CR64Bit; break;
    case SystemZ::C1: OpKind = MCK_CR64Bit; break;
    case SystemZ::C2: OpKind = MCK_CR64Bit; break;
    case SystemZ::C3: OpKind = MCK_CR64Bit; break;
    case SystemZ::C4: OpKind = MCK_CR64Bit; break;
    case SystemZ::C5: OpKind = MCK_CR64Bit; break;
    case SystemZ::C6: OpKind = MCK_CR64Bit; break;
    case SystemZ::C7: OpKind = MCK_CR64Bit; break;
    case SystemZ::C8: OpKind = MCK_CR64Bit; break;
    case SystemZ::C9: OpKind = MCK_CR64Bit; break;
    case SystemZ::C10: OpKind = MCK_CR64Bit; break;
    case SystemZ::C11: OpKind = MCK_CR64Bit; break;
    case SystemZ::C12: OpKind = MCK_CR64Bit; break;
    case SystemZ::C13: OpKind = MCK_CR64Bit; break;
    case SystemZ::C14: OpKind = MCK_CR64Bit; break;
    case SystemZ::C15: OpKind = MCK_CR64Bit; break;
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
  case MCK_CCR: return "MCK_CCR";
  case MCK_FPCRegs: return "MCK_FPCRegs";
  case MCK_ADDR128Bit: return "MCK_ADDR128Bit";
  case MCK_FP128Bit: return "MCK_FP128Bit";
  case MCK_GR128Bit: return "MCK_GR128Bit";
  case MCK_ADDR32Bit: return "MCK_ADDR32Bit";
  case MCK_ADDR64Bit: return "MCK_ADDR64Bit";
  case MCK_AR32Bit: return "MCK_AR32Bit";
  case MCK_CR64Bit: return "MCK_CR64Bit";
  case MCK_FP32Bit: return "MCK_FP32Bit";
  case MCK_FP64Bit: return "MCK_FP64Bit";
  case MCK_GR32Bit: return "MCK_GR32Bit";
  case MCK_GR64Bit: return "MCK_GR64Bit";
  case MCK_GRH32Bit: return "MCK_GRH32Bit";
  case MCK_VF128Bit: return "MCK_VF128Bit";
  case MCK_Reg13: return "MCK_Reg13";
  case MCK_GRX32Bit: return "MCK_GRX32Bit";
  case MCK_VR128Bit: return "MCK_VR128Bit";
  case MCK_VR32Bit: return "MCK_VR32Bit";
  case MCK_VR64Bit: return "MCK_VR64Bit";
  case MCK_AnyRegBit: return "MCK_AnyRegBit";
  case MCK_ADDR128: return "MCK_ADDR128";
  case MCK_ADDR32: return "MCK_ADDR32";
  case MCK_ADDR64: return "MCK_ADDR64";
  case MCK_AR32: return "MCK_AR32";
  case MCK_AnyReg: return "MCK_AnyReg";
  case MCK_BDAddr32Disp12: return "MCK_BDAddr32Disp12";
  case MCK_BDAddr32Disp20: return "MCK_BDAddr32Disp20";
  case MCK_BDAddr64Disp12: return "MCK_BDAddr64Disp12";
  case MCK_BDAddr64Disp20: return "MCK_BDAddr64Disp20";
  case MCK_BDLAddr64Disp12Len4: return "MCK_BDLAddr64Disp12Len4";
  case MCK_BDLAddr64Disp12Len8: return "MCK_BDLAddr64Disp12Len8";
  case MCK_BDRAddr64Disp12: return "MCK_BDRAddr64Disp12";
  case MCK_BDVAddr64Disp12: return "MCK_BDVAddr64Disp12";
  case MCK_BDXAddr64Disp12: return "MCK_BDXAddr64Disp12";
  case MCK_BDXAddr64Disp20: return "MCK_BDXAddr64Disp20";
  case MCK_CR64: return "MCK_CR64";
  case MCK_FP128: return "MCK_FP128";
  case MCK_FP32: return "MCK_FP32";
  case MCK_FP64: return "MCK_FP64";
  case MCK_GR128: return "MCK_GR128";
  case MCK_GR32: return "MCK_GR32";
  case MCK_GR64: return "MCK_GR64";
  case MCK_GRH32: return "MCK_GRH32";
  case MCK_GRX32: return "MCK_GRX32";
  case MCK_Imm: return "MCK_Imm";
  case MCK_PCRel12: return "MCK_PCRel12";
  case MCK_PCRel16: return "MCK_PCRel16";
  case MCK_PCRel24: return "MCK_PCRel24";
  case MCK_PCRel32: return "MCK_PCRel32";
  case MCK_PCRelTLS16: return "MCK_PCRelTLS16";
  case MCK_PCRelTLS32: return "MCK_PCRelTLS32";
  case MCK_S16Imm: return "MCK_S16Imm";
  case MCK_S32Imm: return "MCK_S32Imm";
  case MCK_S8Imm: return "MCK_S8Imm";
  case MCK_U12Imm: return "MCK_U12Imm";
  case MCK_U16Imm: return "MCK_U16Imm";
  case MCK_U1Imm: return "MCK_U1Imm";
  case MCK_U2Imm: return "MCK_U2Imm";
  case MCK_U32Imm: return "MCK_U32Imm";
  case MCK_U3Imm: return "MCK_U3Imm";
  case MCK_U48Imm: return "MCK_U48Imm";
  case MCK_U4Imm: return "MCK_U4Imm";
  case MCK_U6Imm: return "MCK_U6Imm";
  case MCK_U8Imm: return "MCK_U8Imm";
  case MCK_VF128: return "MCK_VF128";
  case MCK_VR128: return "MCK_VR128";
  case MCK_VR32: return "MCK_VR32";
  case MCK_VR64: return "MCK_VR64";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
FeatureBitset SystemZAsmParser::
ComputeAvailableFeatures(const FeatureBitset &FB) const {
  FeatureBitset Features;
  if (FB[SystemZ::FeatureSoftFloat])
    Features.set(Feature_FeatureSoftFloatBit);
  if (FB[SystemZ::FeatureDistinctOps])
    Features.set(Feature_FeatureDistinctOpsBit);
  if (FB[SystemZ::FeatureFastSerialization])
    Features.set(Feature_FeatureFastSerializationBit);
  if (FB[SystemZ::FeatureFPExtension])
    Features.set(Feature_FeatureFPExtensionBit);
  if (FB[SystemZ::FeatureHighWord])
    Features.set(Feature_FeatureHighWordBit);
  if (FB[SystemZ::FeatureInterlockedAccess1])
    Features.set(Feature_FeatureInterlockedAccess1Bit);
  if (FB[SystemZ::FeatureLoadStoreOnCond])
    Features.set(Feature_FeatureLoadStoreOnCondBit);
  if (FB[SystemZ::FeaturePopulationCount])
    Features.set(Feature_FeaturePopulationCountBit);
  if (FB[SystemZ::FeatureMessageSecurityAssist3])
    Features.set(Feature_FeatureMessageSecurityAssist3Bit);
  if (FB[SystemZ::FeatureMessageSecurityAssist4])
    Features.set(Feature_FeatureMessageSecurityAssist4Bit);
  if (FB[SystemZ::FeatureResetReferenceBitsMultiple])
    Features.set(Feature_FeatureResetReferenceBitsMultipleBit);
  if (FB[SystemZ::FeatureExecutionHint])
    Features.set(Feature_FeatureExecutionHintBit);
  if (FB[SystemZ::FeatureLoadAndTrap])
    Features.set(Feature_FeatureLoadAndTrapBit);
  if (FB[SystemZ::FeatureMiscellaneousExtensions])
    Features.set(Feature_FeatureMiscellaneousExtensionsBit);
  if (FB[SystemZ::FeatureProcessorAssist])
    Features.set(Feature_FeatureProcessorAssistBit);
  if (FB[SystemZ::FeatureTransactionalExecution])
    Features.set(Feature_FeatureTransactionalExecutionBit);
  if (FB[SystemZ::FeatureDFPZonedConversion])
    Features.set(Feature_FeatureDFPZonedConversionBit);
  if (FB[SystemZ::FeatureEnhancedDAT2])
    Features.set(Feature_FeatureEnhancedDAT2Bit);
  if (FB[SystemZ::FeatureLoadAndZeroRightmostByte])
    Features.set(Feature_FeatureLoadAndZeroRightmostByteBit);
  if (FB[SystemZ::FeatureLoadStoreOnCond2])
    Features.set(Feature_FeatureLoadStoreOnCond2Bit);
  if (FB[SystemZ::FeatureMessageSecurityAssist5])
    Features.set(Feature_FeatureMessageSecurityAssist5Bit);
  if (FB[SystemZ::FeatureDFPPackedConversion])
    Features.set(Feature_FeatureDFPPackedConversionBit);
  if (FB[SystemZ::FeatureVector])
    Features.set(Feature_FeatureVectorBit);
  if (FB[SystemZ::FeatureMiscellaneousExtensions2])
    Features.set(Feature_FeatureMiscellaneousExtensions2Bit);
  if (FB[SystemZ::FeatureGuardedStorage])
    Features.set(Feature_FeatureGuardedStorageBit);
  if (FB[SystemZ::FeatureMessageSecurityAssist7])
    Features.set(Feature_FeatureMessageSecurityAssist7Bit);
  if (FB[SystemZ::FeatureMessageSecurityAssist8])
    Features.set(Feature_FeatureMessageSecurityAssist8Bit);
  if (FB[SystemZ::FeatureVectorEnhancements1])
    Features.set(Feature_FeatureVectorEnhancements1Bit);
  if (FB[SystemZ::FeatureVectorPackedDecimal])
    Features.set(Feature_FeatureVectorPackedDecimalBit);
  if (FB[SystemZ::FeatureInsertReferenceBitsMultiple])
    Features.set(Feature_FeatureInsertReferenceBitsMultipleBit);
  if (FB[SystemZ::FeatureMiscellaneousExtensions3])
    Features.set(Feature_FeatureMiscellaneousExtensions3Bit);
  if (FB[SystemZ::FeatureMessageSecurityAssist9])
    Features.set(Feature_FeatureMessageSecurityAssist9Bit);
  if (FB[SystemZ::FeatureVectorEnhancements2])
    Features.set(Feature_FeatureVectorEnhancements2Bit);
  if (FB[SystemZ::FeatureVectorPackedDecimalEnhancement])
    Features.set(Feature_FeatureVectorPackedDecimalEnhancementBit);
  if (FB[SystemZ::FeatureEnhancedSort])
    Features.set(Feature_FeatureEnhancedSortBit);
  if (FB[SystemZ::FeatureDeflateConversion])
    Features.set(Feature_FeatureDeflateConversionBit);
  return Features;
}

static bool checkAsmTiedOperandConstraints(const SystemZAsmParser&AsmParser,
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
    "\001a\002ad\003adb\004adbr\003adr\004adtr\005adtra\002ae\003aeb\004aebr"
    "\003aer\003afi\002ag\003agf\004agfi\004agfr\003agh\004aghi\005aghik\003"
    "agr\004agrk\004agsi\002ah\005ahhhr\005ahhlr\003ahi\004ahik\003ahy\003ai"
    "h\002al\003alc\004alcg\005alcgr\004alcr\004alfi\003alg\004algf\005algfi"
    "\005algfr\007alghsik\004algr\005algrk\005algsi\006alhhhr\006alhhlr\006a"
    "lhsik\003alr\004alrk\004alsi\005alsih\006alsihn\003aly\002ap\002ar\003a"
    "rk\003asi\002au\003aur\002aw\003awr\004axbr\003axr\004axtr\005axtra\002"
    "ay\001b\004bakr\003bal\004balr\003bas\004basr\005bassm\002bc\003bcr\003"
    "bct\004bctg\005bctgr\004bctr\002be\003ber\002bh\003bhe\004bher\003bhr\002"
    "bi\003bic\003bie\003bih\004bihe\003bil\004bile\004bilh\003bim\004bine\004"
    "binh\005binhe\004binl\005binle\005binlh\004binm\004bino\004binp\004binz"
    "\003bio\003bip\003biz\002bl\003ble\004bler\003blh\004blhr\003blr\002bm\003"
    "bmr\003bne\004bner\003bnh\004bnhe\005bnher\004bnhr\003bnl\004bnle\005bn"
    "ler\004bnlh\005bnlhr\004bnlr\003bnm\004bnmr\003bno\004bnor\003bnp\004bn"
    "pr\003bnz\004bnzr\002bo\003bor\002bp\003bpp\003bpr\004bprp\002br\004bra"
    "s\005brasl\003brc\004brcl\004brct\005brctg\005brcth\004brxh\005brxhg\005"
    "brxle\005brxlg\003bsa\003bsg\003bsm\003bxh\004bxhg\004bxle\005bxleg\002"
    "bz\003bzr\001c\002cd\003cdb\004cdbr\005cdfbr\006cdfbra\004cdfr\005cdftr"
    "\005cdgbr\006cdgbra\004cdgr\005cdgtr\006cdgtra\006cdlfbr\006cdlftr\006c"
    "dlgbr\006cdlgtr\004cdpt\003cdr\003cds\004cdsg\005cdstr\004cdsy\004cdtr\005"
    "cdutr\004cdzt\002ce\003ceb\004cebr\005cedtr\005cefbr\006cefbra\004cefr\005"
    "cegbr\006cegbra\004cegr\006celfbr\006celgbr\003cer\005cextr\003cfc\005c"
    "fdbr\006cfdbra\004cfdr\005cfdtr\005cfebr\006cfebra\004cfer\003cfi\005cf"
    "xbr\006cfxbra\004cfxr\005cfxtr\002cg\005cgdbr\006cgdbra\004cgdr\005cgdt"
    "r\006cgdtra\005cgebr\006cgebra\004cger\003cgf\004cgfi\004cgfr\005cgfrl\003"
    "cgh\004cghi\005cghrl\005cghsi\004cgib\005cgibe\005cgibh\006cgibhe\005cg"
    "ibl\006cgible\006cgiblh\006cgibne\006cgibnh\007cgibnhe\006cgibnl\007cgi"
    "bnle\007cgibnlh\004cgij\005cgije\005cgijh\006cgijhe\005cgijl\006cgijle\006"
    "cgijlh\006cgijne\006cgijnh\007cgijnhe\006cgijnl\007cgijnle\007cgijnlh\004"
    "cgit\005cgite\005cgith\006cgithe\005cgitl\006cgitle\006cgitlh\006cgitne"
    "\006cgitnh\007cgitnhe\006cgitnl\007cgitnle\007cgitnlh\003cgr\004cgrb\005"
    "cgrbe\005cgrbh\006cgrbhe\005cgrbl\006cgrble\006cgrblh\006cgrbne\006cgrb"
    "nh\007cgrbnhe\006cgrbnl\007cgrbnle\007cgrbnlh\004cgrj\005cgrje\005cgrjh"
    "\006cgrjhe\005cgrjl\006cgrjle\006cgrjlh\006cgrjne\006cgrjnh\007cgrjnhe\006"
    "cgrjnl\007cgrjnle\007cgrjnlh\004cgrl\004cgrt\005cgrte\005cgrth\006cgrth"
    "e\005cgrtl\006cgrtle\006cgrtlh\006cgrtne\006cgrtnh\007cgrtnhe\006cgrtnl"
    "\007cgrtnle\007cgrtnlh\005cgxbr\006cgxbra\004cgxr\005cgxtr\006cgxtra\002"
    "ch\003chf\004chhr\005chhsi\003chi\004chlr\004chrl\004chsi\003chy\003cib"
    "\004cibe\004cibh\005cibhe\004cibl\005cible\005ciblh\005cibne\005cibnh\006"
    "cibnhe\005cibnl\006cibnle\006cibnlh\003cih\003cij\004cije\004cijh\005ci"
    "jhe\004cijl\005cijle\005cijlh\005cijne\005cijnh\006cijnhe\005cijnl\006c"
    "ijnle\006cijnlh\003cit\004cite\004cith\005cithe\004citl\005citle\005cit"
    "lh\005citne\005citnh\006citnhe\005citnl\006citnle\006citnlh\004cksm\002"
    "cl\003clc\004clcl\005clcle\005clclu\006clfdbr\006clfdtr\006clfebr\006cl"
    "fhsi\004clfi\005clfit\006clfite\006clfith\007clfithe\006clfitl\007clfit"
    "le\007clfitlh\007clfitne\007clfitnh\010clfitnhe\007clfitnl\010clfitnle\010"
    "clfitnlh\006clfxbr\006clfxtr\003clg\006clgdbr\006clgdtr\006clgebr\004cl"
    "gf\005clgfi\005clgfr\006clgfrl\006clghrl\006clghsi\005clgib\006clgibe\006"
    "clgibh\007clgibhe\006clgibl\007clgible\007clgiblh\007clgibne\007clgibnh"
    "\010clgibnhe\007clgibnl\010clgibnle\010clgibnlh\005clgij\006clgije\006c"
    "lgijh\007clgijhe\006clgijl\007clgijle\007clgijlh\007clgijne\007clgijnh\010"
    "clgijnhe\007clgijnl\010clgijnle\010clgijnlh\005clgit\006clgite\006clgit"
    "h\007clgithe\006clgitl\007clgitle\007clgitlh\007clgitne\007clgitnh\010c"
    "lgitnhe\007clgitnl\010clgitnle\010clgitnlh\004clgr\005clgrb\006clgrbe\006"
    "clgrbh\007clgrbhe\006clgrbl\007clgrble\007clgrblh\007clgrbne\007clgrbnh"
    "\010clgrbnhe\007clgrbnl\010clgrbnle\010clgrbnlh\005clgrj\006clgrje\006c"
    "lgrjh\007clgrjhe\006clgrjl\007clgrjle\007clgrjlh\007clgrjne\007clgrjnh\010"
    "clgrjnhe\007clgrjnl\010clgrjnle\010clgrjnlh\005clgrl\005clgrt\006clgrte"
    "\006clgrth\007clgrthe\006clgrtl\007clgrtle\007clgrtlh\007clgrtne\007clg"
    "rtnh\010clgrtnhe\007clgrtnl\010clgrtnle\010clgrtnlh\004clgt\005clgte\005"
    "clgth\006clgthe\005clgtl\006clgtle\006clgtlh\006clgtne\006clgtnh\007clg"
    "tnhe\006clgtnl\007clgtnle\007clgtnlh\006clgxbr\006clgxtr\004clhf\005clh"
    "hr\006clhhsi\005clhlr\005clhrl\003cli\004clib\005clibe\005clibh\006clib"
    "he\005clibl\006clible\006cliblh\006clibne\006clibnh\007clibnhe\006clibn"
    "l\007clibnle\007clibnlh\004clih\004clij\005clije\005clijh\006clijhe\005"
    "clijl\006clijle\006clijlh\006clijne\006clijnh\007clijnhe\006clijnl\007c"
    "lijnle\007clijnlh\004cliy\003clm\004clmh\004clmy\003clr\004clrb\005clrb"
    "e\005clrbh\006clrbhe\005clrbl\006clrble\006clrblh\006clrbne\006clrbnh\007"
    "clrbnhe\006clrbnl\007clrbnle\007clrbnlh\004clrj\005clrje\005clrjh\006cl"
    "rjhe\005clrjl\006clrjle\006clrjlh\006clrjne\006clrjnh\007clrjnhe\006clr"
    "jnl\007clrjnle\007clrjnlh\004clrl\004clrt\005clrte\005clrth\006clrthe\005"
    "clrtl\006clrtle\006clrtlh\006clrtne\006clrtnh\007clrtnhe\006clrtnl\007c"
    "lrtnle\007clrtnlh\004clst\003clt\004clte\004clth\005clthe\004cltl\005cl"
    "tle\005cltlh\005cltne\005cltnh\006cltnhe\005cltnl\006cltnle\006cltnlh\003"
    "cly\005cmpsc\002cp\004cpdt\005cpsdr\004cpxt\004cpya\002cr\003crb\004crb"
    "e\004crbh\005crbhe\004crbl\005crble\005crblh\005crbne\005crbnh\006crbnh"
    "e\005crbnl\006crbnle\006crbnlh\005crdte\003crj\004crje\004crjh\005crjhe"
    "\004crjl\005crjle\005crjlh\005crjne\005crjnh\006crjnhe\005crjnl\006crjn"
    "le\006crjnlh\003crl\003crt\004crte\004crth\005crthe\004crtl\005crtle\005"
    "crtlh\005crtne\005crtnh\006crtnhe\005crtnl\006crtnle\006crtnlh\002cs\004"
    "csch\005csdtr\003csg\003csp\004cspg\004csst\005csxtr\003csy\004cu12\004"
    "cu14\004cu21\004cu24\004cu41\004cu42\005cudtr\004cuse\005cutfu\005cuutf"
    "\005cuxtr\003cvb\004cvbg\004cvby\003cvd\004cvdg\004cvdy\004cxbr\005cxfb"
    "r\006cxfbra\004cxfr\005cxftr\005cxgbr\006cxgbra\004cxgr\005cxgtr\006cxg"
    "tra\006cxlfbr\006cxlftr\006cxlgbr\006cxlgtr\004cxpt\003cxr\005cxstr\004"
    "cxtr\005cxutr\004cxzt\002cy\004czdt\004czxt\001d\002dd\003ddb\004ddbr\003"
    "ddr\004ddtr\005ddtra\002de\003deb\004debr\003der\006dfltcc\004diag\005d"
    "idbr\005diebr\002dl\003dlg\004dlgr\003dlr\002dp\002dr\003dsg\004dsgf\005"
    "dsgfr\004dsgr\004dxbr\003dxr\004dxtr\005dxtra\003ear\004ecag\005ecctr\005"
    "ecpga\004ectg\002ed\004edmk\005eedtr\005eextr\004efpc\005epair\004epar\005"
    "epctr\004epsw\004ereg\005eregg\005esair\004esar\005esdtr\004esea\004est"
    "a\005esxtr\004etnd\002ex\004exrl\005fidbr\006fidbra\004fidr\005fidtr\005"
    "fiebr\006fiebra\004fier\005fixbr\006fixbra\004fixr\005fixtr\005flogr\003"
    "hdr\003her\004hsch\003iac\002ic\003icm\004icmh\004icmy\003icy\004idte\005"
    "iedtr\005iextr\004iihf\004iihh\004iihl\004iilf\004iilh\004iill\003ipk\003"
    "ipm\004ipte\004irbm\004iske\004ivsk\001j\002je\002jg\003jge\003jgh\004j"
    "ghe\003jgl\004jgle\004jglh\003jgm\004jgne\004jgnh\005jgnhe\004jgnl\005j"
    "gnle\005jgnlh\004jgnm\004jgno\005jgnop\004jgnp\004jgnz\003jgo\003jgp\003"
    "jgz\002jh\003jhe\002jl\003jle\003jlh\002jm\003jne\003jnh\004jnhe\003jnl"
    "\004jnle\004jnlh\003jnm\003jno\004jnop\003jnp\003jnz\002jo\002jp\002jz\003"
    "kdb\004kdbr\004kdsa\004kdtr\003keb\004kebr\004kimd\004klmd\002km\003kma"
    "\004kmac\003kmc\005kmctr\003kmf\003kmo\004kxbr\004kxtr\001l\002la\003la"
    "a\004laag\004laal\005laalg\003lae\004laey\003lam\004lamy\003lan\004lang"
    "\003lao\004laog\004larl\004lasp\003lat\003lax\004laxg\003lay\002lb\003l"
    "bh\003lbr\004lcbb\005lcctl\005lcdbr\005lcdfr\004lcdr\005lcebr\004lcer\005"
    "lcgfr\004lcgr\003lcr\004lctl\005lctlg\005lcxbr\004lcxr\002ld\003lde\004"
    "ldeb\005ldebr\004lder\005ldetr\004ldgr\003ldr\004ldrv\005ldxbr\006ldxbr"
    "a\004ldxr\005ldxtr\003ldy\002le\005ledbr\006ledbra\004ledr\005ledtr\003"
    "ler\004lerv\005lexbr\006lexbra\004lexr\003ley\004lfas\003lfh\005lfhat\004"
    "lfpc\002lg\004lgat\003lgb\004lgbr\004lgdr\003lgf\004lgfi\004lgfr\005lgf"
    "rl\003lgg\003lgh\004lghi\004lghr\005lghrl\003lgr\004lgrl\004lgsc\002lh\003"
    "lhh\003lhi\003lhr\004lhrl\003lhy\003llc\004llch\004llcr\004llgc\005llgc"
    "r\004llgf\006llgfat\005llgfr\006llgfrl\006llgfsg\004llgh\005llghr\006ll"
    "ghrl\004llgt\006llgtat\005llgtr\003llh\004llhh\004llhr\005llhrl\005llih"
    "f\005llihh\005llihl\005llilf\005llilh\005llill\006llzrgf\002lm\003lmd\003"
    "lmg\003lmh\003lmy\005lndbr\005lndfr\004lndr\005lnebr\004lner\005lngfr\004"
    "lngr\003lnr\005lnxbr\004lnxr\003loc\004loce\005locfh\006locfhe\006locfh"
    "h\007locfhhe\006locfhl\007locfhle\007locfhlh\006locfhm\007locfhne\007lo"
    "cfhnh\010locfhnhe\007locfhnl\010locfhnle\010locfhnlh\007locfhnm\007locf"
    "hno\007locfhnp\007locfhnz\006locfho\006locfhp\006locfhr\007locfhre\007l"
    "ocfhrh\010locfhrhe\007locfhrl\010locfhrle\010locfhrlh\007locfhrm\010loc"
    "fhrne\010locfhrnh\tlocfhrnhe\010locfhrnl\tlocfhrnle\tlocfhrnlh\010locfh"
    "rnm\010locfhrno\010locfhrnp\010locfhrnz\007locfhro\007locfhrp\007locfhr"
    "z\006locfhz\004locg\005locge\005locgh\006locghe\006locghi\007locghie\007"
    "locghih\010locghihe\007locghil\010locghile\010locghilh\007locghim\010lo"
    "cghine\010locghinh\tlocghinhe\010locghinl\tlocghinle\tlocghinlh\010locg"
    "hinm\010locghino\010locghinp\010locghinz\007locghio\007locghip\007locgh"
    "iz\005locgl\006locgle\006locglh\005locgm\006locgne\006locgnh\007locgnhe"
    "\006locgnl\007locgnle\007locgnlh\006locgnm\006locgno\006locgnp\006locgn"
    "z\005locgo\005locgp\005locgr\006locgre\006locgrh\007locgrhe\006locgrl\007"
    "locgrle\007locgrlh\006locgrm\007locgrne\007locgrnh\010locgrnhe\007locgr"
    "nl\010locgrnle\010locgrnlh\007locgrnm\007locgrno\007locgrnp\007locgrnz\006"
    "locgro\006locgrp\006locgrz\005locgz\004loch\005loche\006lochhi\007lochh"
    "ie\007lochhih\010lochhihe\007lochhil\010lochhile\010lochhilh\007lochhim"
    "\010lochhine\010lochhinh\tlochhinhe\010lochhinl\tlochhinle\tlochhinlh\010"
    "lochhinm\010lochhino\010lochhinp\010lochhinz\007lochhio\007lochhip\007l"
    "ochhiz\005lochi\006lochie\006lochih\007lochihe\006lochil\007lochile\007"
    "lochilh\006lochim\007lochine\007lochinh\010lochinhe\007lochinl\010lochi"
    "nle\010lochinlh\007lochinm\007lochino\007lochinp\007lochinz\006lochio\006"
    "lochip\006lochiz\004locl\005locle\005loclh\004locm\005locne\005locnh\006"
    "locnhe\005locnl\006locnle\006locnlh\005locnm\005locno\005locnp\005locnz"
    "\004loco\004locp\004locr\005locre\005locrh\006locrhe\005locrl\006locrle"
    "\006locrlh\005locrm\006locrne\006locrnh\007locrnhe\006locrnl\007locrnle"
    "\007locrnlh\006locrnm\006locrno\006locrnp\006locrnz\005locro\005locrp\005"
    "locrz\004locz\005lpctl\003lpd\005lpdbr\005lpdfr\004lpdg\004lpdr\005lpeb"
    "r\004lper\005lpgfr\004lpgr\003lpp\003lpq\003lpr\004lpsw\005lpswe\005lpt"
    "ea\005lpxbr\004lpxr\002lr\003lra\004lrag\004lray\004lrdr\004lrer\003lrl"
    "\003lrv\004lrvg\005lrvgr\004lrvh\004lrvr\005lsctl\002lt\005ltdbr\004ltd"
    "r\005ltdtr\005ltebr\004lter\003ltg\004ltgf\005ltgfr\004ltgr\003ltr\005l"
    "txbr\004ltxr\005ltxtr\004lura\005lurag\003lxd\004lxdb\005lxdbr\004lxdr\005"
    "lxdtr\003lxe\004lxeb\005lxebr\004lxer\003lxr\002ly\004lzdr\004lzer\004l"
    "zrf\004lzrg\004lzxr\001m\003mad\004madb\005madbr\004madr\003mae\004maeb"
    "\005maebr\004maer\003may\004mayh\005mayhr\004mayl\005maylr\004mayr\002m"
    "c\002md\003mdb\004mdbr\003mde\004mdeb\005mdebr\004mder\003mdr\004mdtr\005"
    "mdtra\002me\003mee\004meeb\005meebr\004meer\003mer\003mfy\002mg\003mgh\004"
    "mghi\004mgrk\002mh\003mhi\003mhy\002ml\003mlg\004mlgr\003mlr\002mp\002m"
    "r\002ms\003msc\004msch\003msd\004msdb\005msdbr\004msdr\003mse\004mseb\005"
    "msebr\004mser\004msfi\003msg\004msgc\004msgf\005msgfi\005msgfr\004msgr\006"
    "msgrkc\003msr\005msrkc\004msta\003msy\003mvc\005mvcdk\005mvcin\004mvck\004"
    "mvcl\005mvcle\005mvclu\005mvcos\004mvcp\005mvcrl\004mvcs\005mvcsk\005mv"
    "ghi\005mvhhi\004mvhi\003mvi\004mviy\003mvn\003mvo\004mvpg\004mvst\003mv"
    "z\004mxbr\003mxd\004mxdb\005mxdbr\004mxdr\003mxr\004mxtr\005mxtra\002my"
    "\003myh\004myhr\003myl\004mylr\003myr\001n\002nc\005ncgrk\004ncrk\002ng"
    "\003ngr\004ngrk\002ni\004niai\004nihf\004nihh\004nihl\004nilf\004nilh\004"
    "nill\003niy\005nngrk\004nnrk\005nogrk\003nop\004nopr\004nork\002nr\003n"
    "rk\005ntstg\005nxgrk\004nxrk\002ny\001o\002oc\005ocgrk\004ocrk\002og\003"
    "ogr\004ogrk\002oi\004oihf\004oihh\004oihl\004oilf\004oilh\004oill\003oi"
    "y\002or\003ork\002oy\004pack\004palb\002pc\003pcc\005pckmo\003pfd\005pf"
    "drl\004pfmf\004pfpo\004pgin\005pgout\003pka\003pku\003plo\006popcnt\003"
    "ppa\004ppno\002pr\004prno\002pt\003ptf\004ptff\003pti\004ptlb\005qadtr\005"
    "qaxtr\005qctri\003qsi\004rchp\005risbg\006risbgn\006risbhg\006risblg\003"
    "rll\004rllg\005rnsbg\005rosbg\002rp\004rrbe\004rrbm\005rrdtr\005rrxtr\004"
    "rsch\005rxsbg\001s\003sac\004sacf\003sal\005sam24\005sam31\005sam64\003"
    "sar\005scctr\004schm\003sck\004sckc\005sckpf\002sd\003sdb\004sdbr\003sd"
    "r\004sdtr\005sdtra\002se\003seb\004sebr\006selfhr\007selfhre\007selfhrh"
    "\010selfhrhe\007selfhrl\010selfhrle\010selfhrlh\007selfhrm\010selfhrne\010"
    "selfhrnh\tselfhrnhe\010selfhrnl\tselfhrnle\tselfhrnlh\010selfhrnm\010se"
    "lfhrno\010selfhrnp\010selfhrnz\007selfhro\007selfhrp\007selfhrz\005selg"
    "r\006selgre\006selgrh\007selgrhe\006selgrl\007selgrle\007selgrlh\006sel"
    "grm\007selgrne\007selgrnh\010selgrnhe\007selgrnl\010selgrnle\010selgrnl"
    "h\007selgrnm\007selgrno\007selgrnp\007selgrnz\006selgro\006selgrp\006se"
    "lgrz\004selr\005selre\005selrh\006selrhe\005selrl\006selrle\006selrlh\005"
    "selrm\006selrne\006selrnh\007selrnhe\006selrnl\007selrnle\007selrnlh\006"
    "selrnm\006selrno\006selrnp\006selrnz\005selro\005selrp\005selrz\003ser\005"
    "sfasr\004sfpc\002sg\003sgf\004sgfr\003sgh\003sgr\004sgrk\002sh\005shhhr"
    "\005shhlr\003shy\003sie\004siga\004sigp\002sl\003sla\004slag\004slak\003"
    "slb\004slbg\005slbgr\004slbr\004slda\004sldl\004sldt\004slfi\003slg\004"
    "slgf\005slgfi\005slgfr\004slgr\005slgrk\006slhhhr\006slhhlr\003sll\004s"
    "llg\004sllk\003slr\004slrk\004slxt\003sly\005sortl\002sp\005spctr\004sp"
    "ka\003spm\003spt\003spx\003sqd\004sqdb\005sqdbr\004sqdr\003sqe\004sqeb\005"
    "sqebr\004sqer\005sqxbr\004sqxr\002sr\003sra\004srag\004srak\004srda\004"
    "srdl\004srdt\003srk\003srl\004srlg\004srlk\004srnm\005srnmb\005srnmt\003"
    "srp\004srst\005srstu\004srxt\005ssair\004ssar\004ssch\004sske\003ssm\002"
    "st\004stam\005stamy\004stap\003stc\004stch\004stck\005stckc\005stcke\005"
    "stckf\004stcm\005stcmh\005stcmy\005stcps\005stcrw\005stctg\005stctl\004"
    "stcy\003std\005stdrv\004stdy\003ste\005sterv\004stey\004stfh\004stfl\005"
    "stfle\005stfpc\003stg\005stgrl\005stgsc\003sth\004sthh\005sthrl\004sthy"
    "\005stidp\003stm\004stmg\004stmh\004stmy\005stnsm\004stoc\005stoce\006s"
    "tocfh\007stocfhe\007stocfhh\010stocfhhe\007stocfhl\010stocfhle\010stocf"
    "hlh\007stocfhm\010stocfhne\010stocfhnh\tstocfhnhe\010stocfhnl\tstocfhnl"
    "e\tstocfhnlh\010stocfhnm\010stocfhno\010stocfhnp\010stocfhnz\007stocfho"
    "\007stocfhp\007stocfhz\005stocg\006stocge\006stocgh\007stocghe\006stocg"
    "l\007stocgle\007stocglh\006stocgm\007stocgne\007stocgnh\010stocgnhe\007"
    "stocgnl\010stocgnle\010stocgnlh\007stocgnm\007stocgno\007stocgnp\007sto"
    "cgnz\006stocgo\006stocgp\006stocgz\005stoch\006stoche\005stocl\006stocl"
    "e\006stoclh\005stocm\006stocne\006stocnh\007stocnhe\006stocnl\007stocnl"
    "e\007stocnlh\006stocnm\006stocno\006stocnp\006stocnz\005stoco\005stocp\005"
    "stocz\005stosm\004stpq\004stpt\004stpx\005strag\004strl\004strv\005strv"
    "g\005strvh\005stsch\004stsi\005stura\005sturg\003sty\002su\003sur\003sv"
    "c\002sw\003swr\004sxbr\003sxr\004sxtr\005sxtra\002sy\006tabort\003tam\003"
    "tar\002tb\004tbdr\005tbedr\006tbegin\007tbeginc\004tcdb\004tceb\004tcxb"
    "\005tdcdt\005tdcet\005tdcxt\005tdgdt\005tdget\005tdgxt\004tend\005thder"
    "\004thdr\002tm\003tmh\004tmhh\004tmhl\003tml\004tmlh\004tmll\003tmy\002"
    "tp\003tpi\005tprot\002tr\005trace\005tracg\005trap2\005trap4\003tre\004"
    "troo\004trot\003trt\004trte\004trto\004trtr\005trtre\004trtt\002ts\004t"
    "sch\004unpk\005unpka\005unpku\003upt\002va\003vab\003vac\004vacc\005vac"
    "cb\005vaccc\006vacccq\005vaccf\005vaccg\005vacch\005vaccq\004vacq\003va"
    "f\003vag\003vah\003vap\003vaq\004vavg\005vavgb\005vavgf\005vavgg\005vav"
    "gh\005vavgl\006vavglb\006vavglf\006vavglg\006vavglh\006vbperm\004vcdg\005"
    "vcdgb\005vcdlg\006vcdlgb\005vcefb\006vcelfb\004vceq\005vceqb\006vceqbs\005"
    "vceqf\006vceqfs\005vceqg\006vceqgs\005vceqh\006vceqhs\005vcfeb\005vcfpl"
    "\005vcfps\004vcgd\005vcgdb\003vch\004vchb\005vchbs\004vchf\005vchfs\004"
    "vchg\005vchgs\004vchh\005vchhs\004vchl\005vchlb\006vchlbs\005vchlf\006v"
    "chlfs\005vchlg\006vchlgs\005vchlh\006vchlhs\005vcksm\006vclfeb\005vclfp"
    "\005vclgd\006vclgdb\004vclz\005vclzb\005vclzf\005vclzg\005vclzh\003vcp\005"
    "vcsfp\004vctz\005vctzb\005vctzf\005vctzg\005vctzh\004vcvb\005vcvbg\004v"
    "cvd\005vcvdg\003vdp\003vec\004vecb\004vecf\004vecg\004vech\004vecl\005v"
    "eclb\005veclf\005veclg\005veclh\005verim\006verimb\006verimf\006verimg\006"
    "verimh\005verll\006verllb\006verllf\006verllg\006verllh\006verllv\007ve"
    "rllvb\007verllvf\007verllvg\007verllvh\004vesl\005veslb\005veslf\005ves"
    "lg\005veslh\005veslv\006veslvb\006veslvf\006veslvg\006veslvh\005vesra\006"
    "vesrab\006vesraf\006vesrag\006vesrah\006vesrav\007vesravb\007vesravf\007"
    "vesravg\007vesravh\005vesrl\006vesrlb\006vesrlf\006vesrlg\006vesrlh\006"
    "vesrlv\007vesrlvb\007vesrlvf\007vesrlvg\007vesrlvh\003vfa\005vfadb\004v"
    "fae\005vfaeb\006vfaebs\005vfaef\006vfaefs\005vfaeh\006vfaehs\006vfaezb\007"
    "vfaezbs\006vfaezf\007vfaezfs\006vfaezh\007vfaezhs\005vfasb\004vfce\006v"
    "fcedb\007vfcedbs\006vfcesb\007vfcesbs\004vfch\006vfchdb\007vfchdbs\005v"
    "fche\007vfchedb\010vfchedbs\007vfchesb\010vfchesbs\006vfchsb\007vfchsbs"
    "\003vfd\005vfddb\005vfdsb\004vfee\005vfeeb\006vfeebs\005vfeef\006vfeefs"
    "\005vfeeh\006vfeehs\006vfeezb\007vfeezbs\006vfeezf\007vfeezfs\006vfeezh"
    "\007vfeezhs\005vfene\006vfeneb\007vfenebs\006vfenef\007vfenefs\006vfene"
    "h\007vfenehs\007vfenezb\010vfenezbs\007vfenezf\010vfenezfs\007vfenezh\010"
    "vfenezhs\003vfi\005vfidb\005vfisb\006vfkedb\007vfkedbs\006vfkesb\007vfk"
    "esbs\006vfkhdb\007vfkhdbs\007vfkhedb\010vfkhedbs\007vfkhesb\010vfkhesbs"
    "\006vfkhsb\007vfkhsbs\006vflcdb\006vflcsb\004vfll\005vflls\006vflndb\006"
    "vflnsb\006vflpdb\006vflpsb\004vflr\005vflrd\003vfm\004vfma\006vfmadb\006"
    "vfmasb\005vfmax\007vfmaxdb\007vfmaxsb\005vfmdb\005vfmin\007vfmindb\007v"
    "fminsb\004vfms\005vfmsb\006vfmsdb\006vfmssb\005vfnma\007vfnmadb\007vfnm"
    "asb\005vfnms\007vfnmsdb\007vfnmssb\005vfpso\007vfpsodb\007vfpsosb\003vf"
    "s\005vfsdb\004vfsq\006vfsqdb\006vfsqsb\005vfssb\005vftci\007vftcidb\007"
    "vftcisb\004vgbm\004vgef\004vgeg\004vgfm\005vgfma\006vgfmab\006vgfmaf\006"
    "vgfmag\006vgfmah\005vgfmb\005vgfmf\005vgfmg\005vgfmh\003vgm\004vgmb\004"
    "vgmf\004vgmg\004vgmh\005vistr\006vistrb\007vistrbs\006vistrf\007vistrfs"
    "\006vistrh\007vistrhs\002vl\004vlbb\004vlbr\005vlbrf\005vlbrg\005vlbrh\005"
    "vlbrq\007vlbrrep\010vlbrrepf\010vlbrrepg\010vlbrreph\003vlc\004vlcb\004"
    "vlcf\004vlcg\004vlch\004vlde\005vldeb\004vleb\006vlebrf\006vlebrg\006vl"
    "ebrh\004vled\005vledb\004vlef\004vleg\004vleh\005vleib\005vleif\005vlei"
    "g\005vleih\004vler\005vlerf\005vlerg\005vlerh\004vlgv\005vlgvb\005vlgvf"
    "\005vlgvg\005vlgvh\004vlip\003vll\007vllebrz\010vllebrze\010vllebrzf\010"
    "vllebrzg\010vllebrzh\005vllez\006vllezb\006vllezf\006vllezg\006vllezh\007"
    "vllezlf\003vlm\003vlp\004vlpb\004vlpf\004vlpg\004vlph\003vlr\005vlrep\006"
    "vlrepb\006vlrepf\006vlrepg\006vlreph\004vlrl\005vlrlr\004vlvg\005vlvgb\005"
    "vlvgf\005vlvgg\005vlvgh\005vlvgp\004vmae\005vmaeb\005vmaef\005vmaeh\004"
    "vmah\005vmahb\005vmahf\005vmahh\004vmal\005vmalb\005vmale\006vmaleb\006"
    "vmalef\006vmaleh\005vmalf\005vmalh\006vmalhb\006vmalhf\006vmalhh\006vma"
    "lhw\005vmalo\006vmalob\006vmalof\006vmaloh\004vmao\005vmaob\005vmaof\005"
    "vmaoh\003vme\004vmeb\004vmef\004vmeh\003vmh\004vmhb\004vmhf\004vmhh\003"
    "vml\004vmlb\004vmle\005vmleb\005vmlef\005vmleh\004vmlf\004vmlh\005vmlhb"
    "\005vmlhf\005vmlhh\005vmlhw\004vmlo\005vmlob\005vmlof\005vmloh\003vmn\004"
    "vmnb\004vmnf\004vmng\004vmnh\004vmnl\005vmnlb\005vmnlf\005vmnlg\005vmnl"
    "h\003vmo\004vmob\004vmof\004vmoh\003vmp\004vmrh\005vmrhb\005vmrhf\005vm"
    "rhg\005vmrhh\004vmrl\005vmrlb\005vmrlf\005vmrlg\005vmrlh\004vmsl\005vms"
    "lg\004vmsp\003vmx\004vmxb\004vmxf\004vmxg\004vmxh\004vmxl\005vmxlb\005v"
    "mxlf\005vmxlg\005vmxlh\002vn\003vnc\003vnn\003vno\004vnot\003vnx\002vo\003"
    "voc\004vone\004vpdi\005vperm\003vpk\004vpkf\004vpkg\004vpkh\005vpkls\006"
    "vpklsf\007vpklsfs\006vpklsg\007vpklsgs\006vpklsh\007vpklshs\004vpks\005"
    "vpksf\006vpksfs\005vpksg\006vpksgs\005vpksh\006vpkshs\004vpkz\006vpopct"
    "\007vpopctb\007vpopctf\007vpopctg\007vpopcth\005vpsop\004vrep\005vrepb\005"
    "vrepf\005vrepg\005vreph\005vrepi\006vrepib\006vrepif\006vrepig\006vrepi"
    "h\003vrp\002vs\003vsb\006vsbcbi\007vsbcbiq\004vsbi\005vsbiq\005vscbi\006"
    "vscbib\006vscbif\006vscbig\006vscbih\006vscbiq\005vscef\005vsceg\004vsd"
    "p\004vseg\005vsegb\005vsegf\005vsegh\004vsel\003vsf\003vsg\003vsh\003vs"
    "l\004vslb\004vsld\005vsldb\003vsp\003vsq\004vsra\005vsrab\004vsrd\004vs"
    "rl\005vsrlb\004vsrp\003vst\005vstbr\006vstbrf\006vstbrg\006vstbrh\006vs"
    "tbrq\005vsteb\007vstebrf\007vstebrg\007vstebrh\005vstef\005vsteg\005vst"
    "eh\005vster\006vsterf\006vsterg\006vsterh\004vstl\004vstm\005vstrc\006v"
    "strcb\007vstrcbs\006vstrcf\007vstrcfs\006vstrch\007vstrchs\007vstrczb\010"
    "vstrczbs\007vstrczf\010vstrczfs\007vstrczh\010vstrczhs\005vstrl\006vstr"
    "lr\005vstrs\006vstrsb\006vstrsf\006vstrsh\007vstrszb\007vstrszf\007vstr"
    "szh\004vsum\005vsumb\005vsumg\006vsumgf\006vsumgh\005vsumh\005vsumq\006"
    "vsumqf\006vsumqg\003vtm\003vtp\004vuph\005vuphb\005vuphf\005vuphh\005vu"
    "pkz\004vupl\005vuplb\005vuplf\005vuplh\006vuplhb\006vuplhf\006vuplhh\006"
    "vuplhw\005vupll\006vupllb\006vupllf\006vupllh\002vx\005vzero\005wcdgb\006"
    "wcdlgb\005wcefb\006wcelfb\005wcfeb\005wcgdb\006wclfeb\006wclgdb\005wfad"
    "b\005wfasb\005wfaxb\003wfc\005wfcdb\006wfcedb\007wfcedbs\006wfcesb\007w"
    "fcesbs\006wfcexb\007wfcexbs\006wfchdb\007wfchdbs\007wfchedb\010wfchedbs"
    "\007wfchesb\010wfchesbs\007wfchexb\010wfchexbs\006wfchsb\007wfchsbs\006"
    "wfchxb\007wfchxbs\005wfcsb\005wfcxb\005wfddb\005wfdsb\005wfdxb\005wfidb"
    "\005wfisb\005wfixb\003wfk\005wfkdb\006wfkedb\007wfkedbs\006wfkesb\007wf"
    "kesbs\006wfkexb\007wfkexbs\006wfkhdb\007wfkhdbs\007wfkhedb\010wfkhedbs\007"
    "wfkhesb\010wfkhesbs\007wfkhexb\010wfkhexbs\006wfkhsb\007wfkhsbs\006wfkh"
    "xb\007wfkhxbs\005wfksb\005wfkxb\006wflcdb\006wflcsb\006wflcxb\005wflld\005"
    "wflls\006wflndb\006wflnsb\006wflnxb\006wflpdb\006wflpsb\006wflpxb\005wf"
    "lrd\005wflrx\006wfmadb\006wfmasb\006wfmaxb\007wfmaxdb\007wfmaxsb\007wfm"
    "axxb\005wfmdb\007wfmindb\007wfminsb\007wfminxb\005wfmsb\006wfmsdb\006wf"
    "mssb\006wfmsxb\005wfmxb\007wfnmadb\007wfnmasb\007wfnmaxb\007wfnmsdb\007"
    "wfnmssb\007wfnmsxb\007wfpsodb\007wfpsosb\007wfpsoxb\005wfsdb\006wfsqdb\006"
    "wfsqsb\006wfsqxb\005wfssb\005wfsxb\007wftcidb\007wftcisb\007wftcixb\005"
    "wldeb\005wledb\001x\002xc\002xg\003xgr\004xgrk\002xi\004xihf\004xilf\003"
    "xiy\002xr\003xrk\004xsch\002xy\003zap";

// Feature bitsets.
enum : uint8_t {
  AMFBS_None,
  AMFBS_FeatureDFPPackedConversion,
  AMFBS_FeatureDFPZonedConversion,
  AMFBS_FeatureDeflateConversion,
  AMFBS_FeatureDistinctOps,
  AMFBS_FeatureEnhancedDAT2,
  AMFBS_FeatureEnhancedSort,
  AMFBS_FeatureExecutionHint,
  AMFBS_FeatureFPExtension,
  AMFBS_FeatureGuardedStorage,
  AMFBS_FeatureHighWord,
  AMFBS_FeatureInsertReferenceBitsMultiple,
  AMFBS_FeatureInterlockedAccess1,
  AMFBS_FeatureLoadAndTrap,
  AMFBS_FeatureLoadAndZeroRightmostByte,
  AMFBS_FeatureLoadStoreOnCond,
  AMFBS_FeatureLoadStoreOnCond2,
  AMFBS_FeatureMessageSecurityAssist3,
  AMFBS_FeatureMessageSecurityAssist4,
  AMFBS_FeatureMessageSecurityAssist5,
  AMFBS_FeatureMessageSecurityAssist7,
  AMFBS_FeatureMessageSecurityAssist8,
  AMFBS_FeatureMessageSecurityAssist9,
  AMFBS_FeatureMiscellaneousExtensions,
  AMFBS_FeatureMiscellaneousExtensions2,
  AMFBS_FeatureMiscellaneousExtensions3,
  AMFBS_FeaturePopulationCount,
  AMFBS_FeatureProcessorAssist,
  AMFBS_FeatureResetReferenceBitsMultiple,
  AMFBS_FeatureTransactionalExecution,
  AMFBS_FeatureVector,
  AMFBS_FeatureVectorEnhancements1,
  AMFBS_FeatureVectorEnhancements2,
  AMFBS_FeatureVectorPackedDecimal,
  AMFBS_FeatureVectorPackedDecimalEnhancement,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // AMFBS_None
  {Feature_FeatureDFPPackedConversionBit, },
  {Feature_FeatureDFPZonedConversionBit, },
  {Feature_FeatureDeflateConversionBit, },
  {Feature_FeatureDistinctOpsBit, },
  {Feature_FeatureEnhancedDAT2Bit, },
  {Feature_FeatureEnhancedSortBit, },
  {Feature_FeatureExecutionHintBit, },
  {Feature_FeatureFPExtensionBit, },
  {Feature_FeatureGuardedStorageBit, },
  {Feature_FeatureHighWordBit, },
  {Feature_FeatureInsertReferenceBitsMultipleBit, },
  {Feature_FeatureInterlockedAccess1Bit, },
  {Feature_FeatureLoadAndTrapBit, },
  {Feature_FeatureLoadAndZeroRightmostByteBit, },
  {Feature_FeatureLoadStoreOnCondBit, },
  {Feature_FeatureLoadStoreOnCond2Bit, },
  {Feature_FeatureMessageSecurityAssist3Bit, },
  {Feature_FeatureMessageSecurityAssist4Bit, },
  {Feature_FeatureMessageSecurityAssist5Bit, },
  {Feature_FeatureMessageSecurityAssist7Bit, },
  {Feature_FeatureMessageSecurityAssist8Bit, },
  {Feature_FeatureMessageSecurityAssist9Bit, },
  {Feature_FeatureMiscellaneousExtensionsBit, },
  {Feature_FeatureMiscellaneousExtensions2Bit, },
  {Feature_FeatureMiscellaneousExtensions3Bit, },
  {Feature_FeaturePopulationCountBit, },
  {Feature_FeatureProcessorAssistBit, },
  {Feature_FeatureResetReferenceBitsMultipleBit, },
  {Feature_FeatureTransactionalExecutionBit, },
  {Feature_FeatureVectorBit, },
  {Feature_FeatureVectorEnhancements1Bit, },
  {Feature_FeatureVectorEnhancements2Bit, },
  {Feature_FeatureVectorPackedDecimalBit, },
  {Feature_FeatureVectorPackedDecimalEnhancementBit, },
};

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeaturesIdx;
    uint8_t Classes[6];
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
  { 0 /* a */, SystemZ::A, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2 /* ad */, SystemZ::AD, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 5 /* adb */, SystemZ::ADB, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9 /* adbr */, SystemZ::ADBR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 14 /* adr */, SystemZ::ADR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 18 /* adtr */, SystemZ::ADTR, Convert__FP641_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 23 /* adtra */, SystemZ::ADTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 29 /* ae */, SystemZ::AE, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 32 /* aeb */, SystemZ::AEB, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 36 /* aebr */, SystemZ::AEBR, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 41 /* aer */, SystemZ::AER, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 45 /* afi */, SystemZ::AFI, Convert__GR321_0__Tie0_1_1__S32Imm1_1, AMFBS_None, { MCK_GR32, MCK_S32Imm }, },
  { 49 /* ag */, SystemZ::AG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 52 /* agf */, SystemZ::AGF, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 56 /* agfi */, SystemZ::AGFI, Convert__GR641_0__Tie0_1_1__S32Imm1_1, AMFBS_None, { MCK_GR64, MCK_S32Imm }, },
  { 61 /* agfr */, SystemZ::AGFR, Convert__GR641_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 66 /* agh */, SystemZ::AGH, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 70 /* aghi */, SystemZ::AGHI, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 75 /* aghik */, SystemZ::AGHIK, Convert__GR641_0__GR641_1__S16Imm1_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 81 /* agr */, SystemZ::AGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 85 /* agrk */, SystemZ::AGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 90 /* agsi */, SystemZ::AGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 95 /* ah */, SystemZ::AH, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 98 /* ahhhr */, SystemZ::AHHHR, Convert__GRH321_0__GRH321_1__GRH321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 104 /* ahhlr */, SystemZ::AHHLR, Convert__GRH321_0__GRH321_1__GR321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GR32 }, },
  { 110 /* ahi */, SystemZ::AHI, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 114 /* ahik */, SystemZ::AHIK, Convert__GR321_0__GR321_1__S16Imm1_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 119 /* ahy */, SystemZ::AHY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 123 /* aih */, SystemZ::AIH, Convert__GRH321_0__Tie0_1_1__S32Imm1_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 127 /* al */, SystemZ::AL, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 130 /* alc */, SystemZ::ALC, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 134 /* alcg */, SystemZ::ALCG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 139 /* alcgr */, SystemZ::ALCGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 145 /* alcr */, SystemZ::ALCR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 150 /* alfi */, SystemZ::ALFI, Convert__GR321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 155 /* alg */, SystemZ::ALG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 159 /* algf */, SystemZ::ALGF, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 164 /* algfi */, SystemZ::ALGFI, Convert__GR641_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR64, MCK_U32Imm }, },
  { 170 /* algfr */, SystemZ::ALGFR, Convert__GR641_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 176 /* alghsik */, SystemZ::ALGHSIK, Convert__GR641_0__GR641_1__S16Imm1_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 184 /* algr */, SystemZ::ALGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 189 /* algrk */, SystemZ::ALGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 195 /* algsi */, SystemZ::ALGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 201 /* alhhhr */, SystemZ::ALHHHR, Convert__GRH321_0__GRH321_1__GRH321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 208 /* alhhlr */, SystemZ::ALHHLR, Convert__GRH321_0__GRH321_1__GR321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GR32 }, },
  { 215 /* alhsik */, SystemZ::ALHSIK, Convert__GR321_0__GR321_1__S16Imm1_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 222 /* alr */, SystemZ::ALR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 226 /* alrk */, SystemZ::ALRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 231 /* alsi */, SystemZ::ALSI, Convert__BDAddr64Disp202_0__S8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 236 /* alsih */, SystemZ::ALSIH, Convert__GRH321_0__Tie0_1_1__S32Imm1_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 242 /* alsihn */, SystemZ::ALSIHN, Convert__GRH321_0__Tie0_1_1__S32Imm1_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 249 /* aly */, SystemZ::ALY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 253 /* ap */, SystemZ::AP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 256 /* ar */, SystemZ::AR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 259 /* ark */, SystemZ::ARK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 263 /* asi */, SystemZ::ASI, Convert__BDAddr64Disp202_0__S8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 267 /* au */, SystemZ::AU, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 270 /* aur */, SystemZ::AUR, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 274 /* aw */, SystemZ::AW, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 277 /* awr */, SystemZ::AWR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 281 /* axbr */, SystemZ::AXBR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 286 /* axr */, SystemZ::AXR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 290 /* axtr */, SystemZ::AXTR, Convert__FP1281_0__FP1281_1__FP1281_2, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 295 /* axtra */, SystemZ::AXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 301 /* ay */, SystemZ::AY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 304 /* b */, SystemZ::B, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 306 /* bakr */, SystemZ::BAKR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 311 /* bal */, SystemZ::BAL, Convert__GR641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 315 /* balr */, SystemZ::BALR, Convert__GR641_0__ADDR641_1, AMFBS_None, { MCK_GR64, MCK_ADDR64 }, },
  { 320 /* bas */, SystemZ::BAS, Convert__GR641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 324 /* basr */, SystemZ::BASR, Convert__GR641_0__ADDR641_1, AMFBS_None, { MCK_GR64, MCK_ADDR64 }, },
  { 329 /* bassm */, SystemZ::BASSM, Convert__GR641_0__ADDR641_1, AMFBS_None, { MCK_GR64, MCK_ADDR64 }, },
  { 335 /* bc */, SystemZ::BCAsm, Convert__U4Imm1_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_U4Imm, MCK_BDXAddr64Disp12 }, },
  { 338 /* bcr */, SystemZ::BCRAsm, Convert__U4Imm1_0__GR641_1, AMFBS_None, { MCK_U4Imm, MCK_GR64 }, },
  { 342 /* bct */, SystemZ::BCT, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 346 /* bctg */, SystemZ::BCTG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 351 /* bctgr */, SystemZ::BCTGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 357 /* bctr */, SystemZ::BCTR, Convert__GR321_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 362 /* be */, SystemZ::BAsmE, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 365 /* ber */, SystemZ::BRAsmE, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 369 /* bh */, SystemZ::BAsmH, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 372 /* bhe */, SystemZ::BAsmHE, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 376 /* bher */, SystemZ::BRAsmHE, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 381 /* bhr */, SystemZ::BRAsmH, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 385 /* bi */, SystemZ::BI, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 388 /* bic */, SystemZ::BICAsm, Convert__U4Imm1_0__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_U4Imm, MCK_BDXAddr64Disp20 }, },
  { 392 /* bie */, SystemZ::BIAsmE, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 396 /* bih */, SystemZ::BIAsmH, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 400 /* bihe */, SystemZ::BIAsmHE, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 405 /* bil */, SystemZ::BIAsmL, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 409 /* bile */, SystemZ::BIAsmLE, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 414 /* bilh */, SystemZ::BIAsmLH, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 419 /* bim */, SystemZ::BIAsmM, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 423 /* bine */, SystemZ::BIAsmNE, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 428 /* binh */, SystemZ::BIAsmNH, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 433 /* binhe */, SystemZ::BIAsmNHE, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 439 /* binl */, SystemZ::BIAsmNL, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 444 /* binle */, SystemZ::BIAsmNLE, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 450 /* binlh */, SystemZ::BIAsmNLH, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 456 /* binm */, SystemZ::BIAsmNM, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 461 /* bino */, SystemZ::BIAsmNO, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 466 /* binp */, SystemZ::BIAsmNP, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 471 /* binz */, SystemZ::BIAsmNZ, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 476 /* bio */, SystemZ::BIAsmO, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 480 /* bip */, SystemZ::BIAsmP, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 484 /* biz */, SystemZ::BIAsmZ, Convert__BDXAddr64Disp203_0, AMFBS_FeatureMiscellaneousExtensions2, { MCK_BDXAddr64Disp20 }, },
  { 488 /* bl */, SystemZ::BAsmL, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 491 /* ble */, SystemZ::BAsmLE, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 495 /* bler */, SystemZ::BRAsmLE, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 500 /* blh */, SystemZ::BAsmLH, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 504 /* blhr */, SystemZ::BRAsmLH, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 509 /* blr */, SystemZ::BRAsmL, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 513 /* bm */, SystemZ::BAsmM, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 516 /* bmr */, SystemZ::BRAsmM, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 520 /* bne */, SystemZ::BAsmNE, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 524 /* bner */, SystemZ::BRAsmNE, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 529 /* bnh */, SystemZ::BAsmNH, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 533 /* bnhe */, SystemZ::BAsmNHE, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 538 /* bnher */, SystemZ::BRAsmNHE, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 544 /* bnhr */, SystemZ::BRAsmNH, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 549 /* bnl */, SystemZ::BAsmNL, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 553 /* bnle */, SystemZ::BAsmNLE, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 558 /* bnler */, SystemZ::BRAsmNLE, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 564 /* bnlh */, SystemZ::BAsmNLH, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 569 /* bnlhr */, SystemZ::BRAsmNLH, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 575 /* bnlr */, SystemZ::BRAsmNL, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 580 /* bnm */, SystemZ::BAsmNM, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 584 /* bnmr */, SystemZ::BRAsmNM, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 589 /* bno */, SystemZ::BAsmNO, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 593 /* bnor */, SystemZ::BRAsmNO, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 598 /* bnp */, SystemZ::BAsmNP, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 602 /* bnpr */, SystemZ::BRAsmNP, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 607 /* bnz */, SystemZ::BAsmNZ, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 611 /* bnzr */, SystemZ::BRAsmNZ, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 616 /* bo */, SystemZ::BAsmO, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 619 /* bor */, SystemZ::BRAsmO, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 623 /* bp */, SystemZ::BAsmP, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 626 /* bpp */, SystemZ::BPP, Convert__U4Imm1_0__PCRel161_1__BDXAddr64Disp123_2, AMFBS_FeatureExecutionHint, { MCK_U4Imm, MCK_PCRel16, MCK_BDXAddr64Disp12 }, },
  { 630 /* bpr */, SystemZ::BRAsmP, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 634 /* bprp */, SystemZ::BPRP, Convert__U4Imm1_0__PCRel121_1__PCRel241_2, AMFBS_FeatureExecutionHint, { MCK_U4Imm, MCK_PCRel12, MCK_PCRel24 }, },
  { 639 /* br */, SystemZ::BR, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 642 /* bras */, SystemZ::BRAS, Convert__GR641_0__PCRelTLS162_1, AMFBS_None, { MCK_GR64, MCK_PCRelTLS16 }, },
  { 647 /* brasl */, SystemZ::BRASL, Convert__GR641_0__PCRelTLS322_1, AMFBS_None, { MCK_GR64, MCK_PCRelTLS32 }, },
  { 653 /* brc */, SystemZ::BRCAsm, Convert__U4Imm1_0__PCRel161_1, AMFBS_None, { MCK_U4Imm, MCK_PCRel16 }, },
  { 657 /* brcl */, SystemZ::BRCLAsm, Convert__U4Imm1_0__PCRel321_1, AMFBS_None, { MCK_U4Imm, MCK_PCRel32 }, },
  { 662 /* brct */, SystemZ::BRCT, Convert__GR321_0__Tie0_1_1__PCRel161_1, AMFBS_None, { MCK_GR32, MCK_PCRel16 }, },
  { 667 /* brctg */, SystemZ::BRCTG, Convert__GR641_0__Tie0_1_1__PCRel161_1, AMFBS_None, { MCK_GR64, MCK_PCRel16 }, },
  { 673 /* brcth */, SystemZ::BRCTH, Convert__GRH321_0__Tie0_1_1__PCRel321_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_PCRel32 }, },
  { 679 /* brxh */, SystemZ::BRXH, Convert__GR321_0__Tie0_1_1__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 684 /* brxhg */, SystemZ::BRXHG, Convert__GR641_0__Tie0_1_1__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 690 /* brxle */, SystemZ::BRXLE, Convert__GR321_0__Tie0_1_1__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 696 /* brxlg */, SystemZ::BRXLG, Convert__GR641_0__Tie0_1_1__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 702 /* bsa */, SystemZ::BSA, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 706 /* bsg */, SystemZ::BSG, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 710 /* bsm */, SystemZ::BSM, Convert__GR641_0__ADDR641_1, AMFBS_None, { MCK_GR64, MCK_ADDR64 }, },
  { 714 /* bxh */, SystemZ::BXH, Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 718 /* bxhg */, SystemZ::BXHG, Convert__GR641_0__Tie0_1_1__GR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 723 /* bxle */, SystemZ::BXLE, Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 728 /* bxleg */, SystemZ::BXLEG, Convert__GR641_0__Tie0_1_1__GR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 734 /* bz */, SystemZ::BAsmZ, Convert__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 737 /* bzr */, SystemZ::BRAsmZ, Convert__ADDR641_0, AMFBS_None, { MCK_ADDR64 }, },
  { 741 /* c */, SystemZ::C, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 743 /* cd */, SystemZ::CD, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 746 /* cdb */, SystemZ::CDB, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 750 /* cdbr */, SystemZ::CDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 755 /* cdfbr */, SystemZ::CDFBR, Convert__FP641_0__GR321_1, AMFBS_None, { MCK_FP64, MCK_GR32 }, },
  { 761 /* cdfbra */, SystemZ::CDFBRA, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 768 /* cdfr */, SystemZ::CDFR, Convert__FP641_0__GR321_1, AMFBS_None, { MCK_FP64, MCK_GR32 }, },
  { 773 /* cdftr */, SystemZ::CDFTR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 779 /* cdgbr */, SystemZ::CDGBR, Convert__FP641_0__GR641_1, AMFBS_None, { MCK_FP64, MCK_GR64 }, },
  { 785 /* cdgbra */, SystemZ::CDGBRA, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 792 /* cdgr */, SystemZ::CDGR, Convert__FP641_0__GR641_1, AMFBS_None, { MCK_FP64, MCK_GR64 }, },
  { 797 /* cdgtr */, SystemZ::CDGTR, Convert__FP641_0__GR641_1, AMFBS_None, { MCK_FP64, MCK_GR64 }, },
  { 803 /* cdgtra */, SystemZ::CDGTRA, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 810 /* cdlfbr */, SystemZ::CDLFBR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 817 /* cdlftr */, SystemZ::CDLFTR, Convert__FP641_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 824 /* cdlgbr */, SystemZ::CDLGBR, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 831 /* cdlgtr */, SystemZ::CDLGTR, Convert__FP641_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 838 /* cdpt */, SystemZ::CDPT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPPackedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 843 /* cdr */, SystemZ::CDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 847 /* cds */, SystemZ::CDS, Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp12 }, },
  { 851 /* cdsg */, SystemZ::CDSG, Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp20 }, },
  { 856 /* cdstr */, SystemZ::CDSTR, Convert__FP641_0__GR641_1, AMFBS_None, { MCK_FP64, MCK_GR64 }, },
  { 862 /* cdsy */, SystemZ::CDSY, Convert__GR1281_0__Tie0_1_1__GR1281_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr64Disp20 }, },
  { 867 /* cdtr */, SystemZ::CDTR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 872 /* cdutr */, SystemZ::CDUTR, Convert__FP641_0__GR641_1, AMFBS_None, { MCK_FP64, MCK_GR64 }, },
  { 878 /* cdzt */, SystemZ::CDZT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPZonedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 883 /* ce */, SystemZ::CE, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 886 /* ceb */, SystemZ::CEB, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 890 /* cebr */, SystemZ::CEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 895 /* cedtr */, SystemZ::CEDTR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 901 /* cefbr */, SystemZ::CEFBR, Convert__FP321_0__GR321_1, AMFBS_None, { MCK_FP32, MCK_GR32 }, },
  { 907 /* cefbra */, SystemZ::CEFBRA, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 914 /* cefr */, SystemZ::CEFR, Convert__FP321_0__GR321_1, AMFBS_None, { MCK_FP32, MCK_GR32 }, },
  { 919 /* cegbr */, SystemZ::CEGBR, Convert__FP321_0__GR641_1, AMFBS_None, { MCK_FP32, MCK_GR64 }, },
  { 925 /* cegbra */, SystemZ::CEGBRA, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 932 /* cegr */, SystemZ::CEGR, Convert__FP321_0__GR641_1, AMFBS_None, { MCK_FP32, MCK_GR64 }, },
  { 937 /* celfbr */, SystemZ::CELFBR, Convert__FP321_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 944 /* celgbr */, SystemZ::CELGBR, Convert__FP321_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 951 /* cer */, SystemZ::CER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 955 /* cextr */, SystemZ::CEXTR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 961 /* cfc */, SystemZ::CFC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 965 /* cfdbr */, SystemZ::CFDBR, Convert__GR321_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 971 /* cfdbra */, SystemZ::CFDBRA, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 978 /* cfdr */, SystemZ::CFDR, Convert__GR321_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 983 /* cfdtr */, SystemZ::CFDTR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 989 /* cfebr */, SystemZ::CFEBR, Convert__GR321_0__U4Imm1_1__FP321_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 995 /* cfebra */, SystemZ::CFEBRA, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1002 /* cfer */, SystemZ::CFER, Convert__GR321_0__U4Imm1_1__FP321_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 1007 /* cfi */, SystemZ::CFI, Convert__GR321_0__S32Imm1_1, AMFBS_None, { MCK_GR32, MCK_S32Imm }, },
  { 1011 /* cfxbr */, SystemZ::CFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 1017 /* cfxbra */, SystemZ::CFXBRA, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1024 /* cfxr */, SystemZ::CFXR, Convert__GR321_0__U4Imm1_1__FP1281_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 1029 /* cfxtr */, SystemZ::CFXTR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1035 /* cg */, SystemZ::CG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1038 /* cgdbr */, SystemZ::CGDBR, Convert__GR641_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 1044 /* cgdbra */, SystemZ::CGDBRA, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1051 /* cgdr */, SystemZ::CGDR, Convert__GR641_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 1056 /* cgdtr */, SystemZ::CGDTR, Convert__GR641_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 1062 /* cgdtra */, SystemZ::CGDTRA, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 1069 /* cgebr */, SystemZ::CGEBR, Convert__GR641_0__U4Imm1_1__FP321_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 1075 /* cgebra */, SystemZ::CGEBRA, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 1082 /* cger */, SystemZ::CGER, Convert__GR641_0__U4Imm1_1__FP321_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 1087 /* cgf */, SystemZ::CGF, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1091 /* cgfi */, SystemZ::CGFI, Convert__GR641_0__S32Imm1_1, AMFBS_None, { MCK_GR64, MCK_S32Imm }, },
  { 1096 /* cgfr */, SystemZ::CGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 1101 /* cgfrl */, SystemZ::CGFRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 1107 /* cgh */, SystemZ::CGH, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1111 /* cghi */, SystemZ::CGHI, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1116 /* cghrl */, SystemZ::CGHRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 1122 /* cghsi */, SystemZ::CGHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1128 /* cgib */, SystemZ::CGIBAsm, Convert__GR641_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1133 /* cgibe */, SystemZ::CGIBAsmE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1139 /* cgibh */, SystemZ::CGIBAsmH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1145 /* cgibhe */, SystemZ::CGIBAsmHE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1152 /* cgibl */, SystemZ::CGIBAsmL, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1158 /* cgible */, SystemZ::CGIBAsmLE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1165 /* cgiblh */, SystemZ::CGIBAsmLH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1172 /* cgibne */, SystemZ::CGIBAsmNE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1179 /* cgibnh */, SystemZ::CGIBAsmNH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1186 /* cgibnhe */, SystemZ::CGIBAsmNHE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1194 /* cgibnl */, SystemZ::CGIBAsmNL, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1201 /* cgibnle */, SystemZ::CGIBAsmNLE, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1209 /* cgibnlh */, SystemZ::CGIBAsmNLH, Convert__GR641_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1217 /* cgij */, SystemZ::CGIJAsm, Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1222 /* cgije */, SystemZ::CGIJAsmE, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1228 /* cgijh */, SystemZ::CGIJAsmH, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1234 /* cgijhe */, SystemZ::CGIJAsmHE, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1241 /* cgijl */, SystemZ::CGIJAsmL, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1247 /* cgijle */, SystemZ::CGIJAsmLE, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1254 /* cgijlh */, SystemZ::CGIJAsmLH, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1261 /* cgijne */, SystemZ::CGIJAsmNE, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1268 /* cgijnh */, SystemZ::CGIJAsmNH, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1275 /* cgijnhe */, SystemZ::CGIJAsmNHE, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1283 /* cgijnl */, SystemZ::CGIJAsmNL, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1290 /* cgijnle */, SystemZ::CGIJAsmNLE, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1298 /* cgijnlh */, SystemZ::CGIJAsmNLH, Convert__GR641_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 1306 /* cgit */, SystemZ::CGITAsm, Convert__GR641_0__S16Imm1_1__U4Imm1_2, AMFBS_None, { MCK_GR64, MCK_S16Imm, MCK_U4Imm }, },
  { 1311 /* cgite */, SystemZ::CGITAsmE, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1317 /* cgith */, SystemZ::CGITAsmH, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1323 /* cgithe */, SystemZ::CGITAsmHE, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1330 /* cgitl */, SystemZ::CGITAsmL, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1336 /* cgitle */, SystemZ::CGITAsmLE, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1343 /* cgitlh */, SystemZ::CGITAsmLH, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1350 /* cgitne */, SystemZ::CGITAsmNE, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1357 /* cgitnh */, SystemZ::CGITAsmNH, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1364 /* cgitnhe */, SystemZ::CGITAsmNHE, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1372 /* cgitnl */, SystemZ::CGITAsmNL, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1379 /* cgitnle */, SystemZ::CGITAsmNLE, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1387 /* cgitnlh */, SystemZ::CGITAsmNLH, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 1395 /* cgr */, SystemZ::CGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1399 /* cgrb */, SystemZ::CGRBAsm, Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1404 /* cgrbe */, SystemZ::CGRBAsmE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1410 /* cgrbh */, SystemZ::CGRBAsmH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1416 /* cgrbhe */, SystemZ::CGRBAsmHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1423 /* cgrbl */, SystemZ::CGRBAsmL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1429 /* cgrble */, SystemZ::CGRBAsmLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1436 /* cgrblh */, SystemZ::CGRBAsmLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1443 /* cgrbne */, SystemZ::CGRBAsmNE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1450 /* cgrbnh */, SystemZ::CGRBAsmNH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1457 /* cgrbnhe */, SystemZ::CGRBAsmNHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1465 /* cgrbnl */, SystemZ::CGRBAsmNL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1472 /* cgrbnle */, SystemZ::CGRBAsmNLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1480 /* cgrbnlh */, SystemZ::CGRBAsmNLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 1488 /* cgrj */, SystemZ::CGRJAsm, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 1493 /* cgrje */, SystemZ::CGRJAsmE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1499 /* cgrjh */, SystemZ::CGRJAsmH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1505 /* cgrjhe */, SystemZ::CGRJAsmHE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1512 /* cgrjl */, SystemZ::CGRJAsmL, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1518 /* cgrjle */, SystemZ::CGRJAsmLE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1525 /* cgrjlh */, SystemZ::CGRJAsmLH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1532 /* cgrjne */, SystemZ::CGRJAsmNE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1539 /* cgrjnh */, SystemZ::CGRJAsmNH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1546 /* cgrjnhe */, SystemZ::CGRJAsmNHE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1554 /* cgrjnl */, SystemZ::CGRJAsmNL, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1561 /* cgrjnle */, SystemZ::CGRJAsmNLE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1569 /* cgrjnlh */, SystemZ::CGRJAsmNLH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 1577 /* cgrl */, SystemZ::CGRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 1582 /* cgrt */, SystemZ::CGRTAsm, Convert__GR641_0__GR641_1__U4Imm1_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 1587 /* cgrte */, SystemZ::CGRTAsmE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1593 /* cgrth */, SystemZ::CGRTAsmH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1599 /* cgrthe */, SystemZ::CGRTAsmHE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1606 /* cgrtl */, SystemZ::CGRTAsmL, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1612 /* cgrtle */, SystemZ::CGRTAsmLE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1619 /* cgrtlh */, SystemZ::CGRTAsmLH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1626 /* cgrtne */, SystemZ::CGRTAsmNE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1633 /* cgrtnh */, SystemZ::CGRTAsmNH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1640 /* cgrtnhe */, SystemZ::CGRTAsmNHE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1648 /* cgrtnl */, SystemZ::CGRTAsmNL, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1655 /* cgrtnle */, SystemZ::CGRTAsmNLE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1663 /* cgrtnlh */, SystemZ::CGRTAsmNLH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 1671 /* cgxbr */, SystemZ::CGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1677 /* cgxbra */, SystemZ::CGXBRA, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1684 /* cgxr */, SystemZ::CGXR, Convert__GR641_0__U4Imm1_1__FP1281_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1689 /* cgxtr */, SystemZ::CGXTR, Convert__GR641_0__U4Imm1_1__FP1281_2, AMFBS_None, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 1695 /* cgxtra */, SystemZ::CGXTRA, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 1702 /* ch */, SystemZ::CH, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1705 /* chf */, SystemZ::CHF, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 1709 /* chhr */, SystemZ::CHHR, Convert__GRH321_0__GRH321_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32 }, },
  { 1714 /* chhsi */, SystemZ::CHHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1720 /* chi */, SystemZ::CHI, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1724 /* chlr */, SystemZ::CHLR, Convert__GRH321_0__GR321_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GR32 }, },
  { 1729 /* chrl */, SystemZ::CHRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 1734 /* chsi */, SystemZ::CHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 1739 /* chy */, SystemZ::CHY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1743 /* cib */, SystemZ::CIBAsm, Convert__GR321_0__S8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 1747 /* cibe */, SystemZ::CIBAsmE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1752 /* cibh */, SystemZ::CIBAsmH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1757 /* cibhe */, SystemZ::CIBAsmHE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1763 /* cibl */, SystemZ::CIBAsmL, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1768 /* cible */, SystemZ::CIBAsmLE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1774 /* ciblh */, SystemZ::CIBAsmLH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1780 /* cibne */, SystemZ::CIBAsmNE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1786 /* cibnh */, SystemZ::CIBAsmNH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1792 /* cibnhe */, SystemZ::CIBAsmNHE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1799 /* cibnl */, SystemZ::CIBAsmNL, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1805 /* cibnle */, SystemZ::CIBAsmNLE, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1812 /* cibnlh */, SystemZ::CIBAsmNLH, Convert__GR321_0__S8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_BDAddr64Disp12 }, },
  { 1819 /* cih */, SystemZ::CIH, Convert__GRH321_0__S32Imm1_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_S32Imm }, },
  { 1823 /* cij */, SystemZ::CIJAsm, Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 1827 /* cije */, SystemZ::CIJAsmE, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1832 /* cijh */, SystemZ::CIJAsmH, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1837 /* cijhe */, SystemZ::CIJAsmHE, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1843 /* cijl */, SystemZ::CIJAsmL, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1848 /* cijle */, SystemZ::CIJAsmLE, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1854 /* cijlh */, SystemZ::CIJAsmLH, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1860 /* cijne */, SystemZ::CIJAsmNE, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1866 /* cijnh */, SystemZ::CIJAsmNH, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1872 /* cijnhe */, SystemZ::CIJAsmNHE, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1879 /* cijnl */, SystemZ::CIJAsmNL, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1885 /* cijnle */, SystemZ::CIJAsmNLE, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1892 /* cijnlh */, SystemZ::CIJAsmNLH, Convert__GR321_0__S8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 1899 /* cit */, SystemZ::CITAsm, Convert__GR321_0__S16Imm1_1__U4Imm1_2, AMFBS_None, { MCK_GR32, MCK_S16Imm, MCK_U4Imm }, },
  { 1903 /* cite */, SystemZ::CITAsmE, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1908 /* cith */, SystemZ::CITAsmH, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1913 /* cithe */, SystemZ::CITAsmHE, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1919 /* citl */, SystemZ::CITAsmL, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1924 /* citle */, SystemZ::CITAsmLE, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1930 /* citlh */, SystemZ::CITAsmLH, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1936 /* citne */, SystemZ::CITAsmNE, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1942 /* citnh */, SystemZ::CITAsmNH, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1948 /* citnhe */, SystemZ::CITAsmNHE, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1955 /* citnl */, SystemZ::CITAsmNL, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1961 /* citnle */, SystemZ::CITAsmNLE, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1968 /* citnlh */, SystemZ::CITAsmNLH, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 1975 /* cksm */, SystemZ::CKSM, Convert__GR641_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR64, MCK_GR128 }, },
  { 1980 /* cl */, SystemZ::CL, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1983 /* clc */, SystemZ::CLC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 1987 /* clcl */, SystemZ::CLCL, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 1992 /* clcle */, SystemZ::CLCLE, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp122_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 1998 /* clclu */, SystemZ::CLCLU, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp20 }, },
  { 2004 /* clfdbr */, SystemZ::CLFDBR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2011 /* clfdtr */, SystemZ::CLFDTR, Convert__GR321_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2018 /* clfebr */, SystemZ::CLFEBR, Convert__GR321_0__U4Imm1_1__FP321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 2025 /* clfhsi */, SystemZ::CLFHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 2032 /* clfi */, SystemZ::CLFI, Convert__GR321_0__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 2037 /* clfit */, SystemZ::CLFITAsm, Convert__GR321_0__U16Imm1_1__U4Imm1_2, AMFBS_None, { MCK_GR32, MCK_U16Imm, MCK_U4Imm }, },
  { 2043 /* clfite */, SystemZ::CLFITAsmE, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2050 /* clfith */, SystemZ::CLFITAsmH, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2057 /* clfithe */, SystemZ::CLFITAsmHE, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2065 /* clfitl */, SystemZ::CLFITAsmL, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2072 /* clfitle */, SystemZ::CLFITAsmLE, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2080 /* clfitlh */, SystemZ::CLFITAsmLH, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2088 /* clfitne */, SystemZ::CLFITAsmNE, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2096 /* clfitnh */, SystemZ::CLFITAsmNH, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2104 /* clfitnhe */, SystemZ::CLFITAsmNHE, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2113 /* clfitnl */, SystemZ::CLFITAsmNL, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2121 /* clfitnle */, SystemZ::CLFITAsmNLE, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2130 /* clfitnlh */, SystemZ::CLFITAsmNLH, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 2139 /* clfxbr */, SystemZ::CLFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2146 /* clfxtr */, SystemZ::CLFXTR, Convert__GR321_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR32, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2153 /* clg */, SystemZ::CLG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2157 /* clgdbr */, SystemZ::CLGDBR, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2164 /* clgdtr */, SystemZ::CLGDTR, Convert__GR641_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 2171 /* clgebr */, SystemZ::CLGEBR, Convert__GR641_0__U4Imm1_1__FP321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 2178 /* clgf */, SystemZ::CLGF, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2183 /* clgfi */, SystemZ::CLGFI, Convert__GR641_0__U32Imm1_1, AMFBS_None, { MCK_GR64, MCK_U32Imm }, },
  { 2189 /* clgfr */, SystemZ::CLGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 2195 /* clgfrl */, SystemZ::CLGFRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 2202 /* clghrl */, SystemZ::CLGHRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 2209 /* clghsi */, SystemZ::CLGHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 2216 /* clgib */, SystemZ::CLGIBAsm, Convert__GR641_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2222 /* clgibe */, SystemZ::CLGIBAsmE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2229 /* clgibh */, SystemZ::CLGIBAsmH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2236 /* clgibhe */, SystemZ::CLGIBAsmHE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2244 /* clgibl */, SystemZ::CLGIBAsmL, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2251 /* clgible */, SystemZ::CLGIBAsmLE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2259 /* clgiblh */, SystemZ::CLGIBAsmLH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2267 /* clgibne */, SystemZ::CLGIBAsmNE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2275 /* clgibnh */, SystemZ::CLGIBAsmNH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2283 /* clgibnhe */, SystemZ::CLGIBAsmNHE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2292 /* clgibnl */, SystemZ::CLGIBAsmNL, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2300 /* clgibnle */, SystemZ::CLGIBAsmNLE, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2309 /* clgibnlh */, SystemZ::CLGIBAsmNLH, Convert__GR641_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2318 /* clgij */, SystemZ::CLGIJAsm, Convert__GR641_0__U8Imm1_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 2324 /* clgije */, SystemZ::CLGIJAsmE, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2331 /* clgijh */, SystemZ::CLGIJAsmH, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2338 /* clgijhe */, SystemZ::CLGIJAsmHE, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2346 /* clgijl */, SystemZ::CLGIJAsmL, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2353 /* clgijle */, SystemZ::CLGIJAsmLE, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2361 /* clgijlh */, SystemZ::CLGIJAsmLH, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2369 /* clgijne */, SystemZ::CLGIJAsmNE, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2377 /* clgijnh */, SystemZ::CLGIJAsmNH, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2385 /* clgijnhe */, SystemZ::CLGIJAsmNHE, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2394 /* clgijnl */, SystemZ::CLGIJAsmNL, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2402 /* clgijnle */, SystemZ::CLGIJAsmNLE, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2411 /* clgijnlh */, SystemZ::CLGIJAsmNLH, Convert__GR641_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_U8Imm, MCK_PCRel16 }, },
  { 2420 /* clgit */, SystemZ::CLGITAsm, Convert__GR641_0__U16Imm1_1__U4Imm1_2, AMFBS_None, { MCK_GR64, MCK_U16Imm, MCK_U4Imm }, },
  { 2426 /* clgite */, SystemZ::CLGITAsmE, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2433 /* clgith */, SystemZ::CLGITAsmH, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2440 /* clgithe */, SystemZ::CLGITAsmHE, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2448 /* clgitl */, SystemZ::CLGITAsmL, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2455 /* clgitle */, SystemZ::CLGITAsmLE, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2463 /* clgitlh */, SystemZ::CLGITAsmLH, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2471 /* clgitne */, SystemZ::CLGITAsmNE, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2479 /* clgitnh */, SystemZ::CLGITAsmNH, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2487 /* clgitnhe */, SystemZ::CLGITAsmNHE, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2496 /* clgitnl */, SystemZ::CLGITAsmNL, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2504 /* clgitnle */, SystemZ::CLGITAsmNLE, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2513 /* clgitnlh */, SystemZ::CLGITAsmNLH, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 2522 /* clgr */, SystemZ::CLGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2527 /* clgrb */, SystemZ::CLGRBAsm, Convert__GR641_0__GR641_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2533 /* clgrbe */, SystemZ::CLGRBAsmE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2540 /* clgrbh */, SystemZ::CLGRBAsmH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2547 /* clgrbhe */, SystemZ::CLGRBAsmHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2555 /* clgrbl */, SystemZ::CLGRBAsmL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2562 /* clgrble */, SystemZ::CLGRBAsmLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2570 /* clgrblh */, SystemZ::CLGRBAsmLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2578 /* clgrbne */, SystemZ::CLGRBAsmNE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2586 /* clgrbnh */, SystemZ::CLGRBAsmNH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2594 /* clgrbnhe */, SystemZ::CLGRBAsmNHE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2603 /* clgrbnl */, SystemZ::CLGRBAsmNL, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2611 /* clgrbnle */, SystemZ::CLGRBAsmNLE, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2620 /* clgrbnlh */, SystemZ::CLGRBAsmNLH, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 2629 /* clgrj */, SystemZ::CLGRJAsm, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 2635 /* clgrje */, SystemZ::CLGRJAsmE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2642 /* clgrjh */, SystemZ::CLGRJAsmH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2649 /* clgrjhe */, SystemZ::CLGRJAsmHE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2657 /* clgrjl */, SystemZ::CLGRJAsmL, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2664 /* clgrjle */, SystemZ::CLGRJAsmLE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2672 /* clgrjlh */, SystemZ::CLGRJAsmLH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2680 /* clgrjne */, SystemZ::CLGRJAsmNE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2688 /* clgrjnh */, SystemZ::CLGRJAsmNH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2696 /* clgrjnhe */, SystemZ::CLGRJAsmNHE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2705 /* clgrjnl */, SystemZ::CLGRJAsmNL, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2713 /* clgrjnle */, SystemZ::CLGRJAsmNLE, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2722 /* clgrjnlh */, SystemZ::CLGRJAsmNLH, Convert__GR641_0__GR641_1__PCRel161_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 2731 /* clgrl */, SystemZ::CLGRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 2737 /* clgrt */, SystemZ::CLGRTAsm, Convert__GR641_0__GR641_1__U4Imm1_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 2743 /* clgrte */, SystemZ::CLGRTAsmE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2750 /* clgrth */, SystemZ::CLGRTAsmH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2757 /* clgrthe */, SystemZ::CLGRTAsmHE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2765 /* clgrtl */, SystemZ::CLGRTAsmL, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2772 /* clgrtle */, SystemZ::CLGRTAsmLE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2780 /* clgrtlh */, SystemZ::CLGRTAsmLH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2788 /* clgrtne */, SystemZ::CLGRTAsmNE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2796 /* clgrtnh */, SystemZ::CLGRTAsmNH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2804 /* clgrtnhe */, SystemZ::CLGRTAsmNHE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2813 /* clgrtnl */, SystemZ::CLGRTAsmNL, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2821 /* clgrtnle */, SystemZ::CLGRTAsmNLE, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2830 /* clgrtnlh */, SystemZ::CLGRTAsmNLH, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 2839 /* clgt */, SystemZ::CLGTAsm, Convert__GR641_0__BDAddr64Disp202_2__U4Imm1_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 2844 /* clgte */, SystemZ::CLGTAsmE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2850 /* clgth */, SystemZ::CLGTAsmH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2856 /* clgthe */, SystemZ::CLGTAsmHE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2863 /* clgtl */, SystemZ::CLGTAsmL, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2869 /* clgtle */, SystemZ::CLGTAsmLE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2876 /* clgtlh */, SystemZ::CLGTAsmLH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2883 /* clgtne */, SystemZ::CLGTAsmNE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2890 /* clgtnh */, SystemZ::CLGTAsmNH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2897 /* clgtnhe */, SystemZ::CLGTAsmNHE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2905 /* clgtnl */, SystemZ::CLGTAsmNL, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2912 /* clgtnle */, SystemZ::CLGTAsmNLE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2920 /* clgtnlh */, SystemZ::CLGTAsmNLH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2928 /* clgxbr */, SystemZ::CLGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2935 /* clgxtr */, SystemZ::CLGXTR, Convert__GR641_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_GR64, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 2942 /* clhf */, SystemZ::CLHF, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 2947 /* clhhr */, SystemZ::CLHHR, Convert__GRH321_0__GRH321_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32 }, },
  { 2953 /* clhhsi */, SystemZ::CLHHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 2960 /* clhlr */, SystemZ::CLHLR, Convert__GRH321_0__GR321_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GR32 }, },
  { 2966 /* clhrl */, SystemZ::CLHRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 2972 /* cli */, SystemZ::CLI, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2976 /* clib */, SystemZ::CLIBAsm, Convert__GR321_0__U8Imm1_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 2981 /* clibe */, SystemZ::CLIBAsmE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2987 /* clibh */, SystemZ::CLIBAsmH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 2993 /* clibhe */, SystemZ::CLIBAsmHE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3000 /* clibl */, SystemZ::CLIBAsmL, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3006 /* clible */, SystemZ::CLIBAsmLE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3013 /* cliblh */, SystemZ::CLIBAsmLH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3020 /* clibne */, SystemZ::CLIBAsmNE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3027 /* clibnh */, SystemZ::CLIBAsmNH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3034 /* clibnhe */, SystemZ::CLIBAsmNHE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3042 /* clibnl */, SystemZ::CLIBAsmNL, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3049 /* clibnle */, SystemZ::CLIBAsmNLE, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3057 /* clibnlh */, SystemZ::CLIBAsmNLH, Convert__GR321_0__U8Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_BDAddr64Disp12 }, },
  { 3065 /* clih */, SystemZ::CLIH, Convert__GRH321_0__U32Imm1_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_U32Imm }, },
  { 3070 /* clij */, SystemZ::CLIJAsm, Convert__GR321_0__U8Imm1_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 3075 /* clije */, SystemZ::CLIJAsmE, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3081 /* clijh */, SystemZ::CLIJAsmH, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3087 /* clijhe */, SystemZ::CLIJAsmHE, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3094 /* clijl */, SystemZ::CLIJAsmL, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3100 /* clijle */, SystemZ::CLIJAsmLE, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3107 /* clijlh */, SystemZ::CLIJAsmLH, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3114 /* clijne */, SystemZ::CLIJAsmNE, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3121 /* clijnh */, SystemZ::CLIJAsmNH, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3128 /* clijnhe */, SystemZ::CLIJAsmNHE, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3136 /* clijnl */, SystemZ::CLIJAsmNL, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3143 /* clijnle */, SystemZ::CLIJAsmNLE, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3151 /* clijnlh */, SystemZ::CLIJAsmNLH, Convert__GR321_0__U8Imm1_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_U8Imm, MCK_PCRel16 }, },
  { 3159 /* cliy */, SystemZ::CLIY, Convert__BDAddr64Disp202_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 3164 /* clm */, SystemZ::CLM, Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3168 /* clmh */, SystemZ::CLMH, Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3173 /* clmy */, SystemZ::CLMY, Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3178 /* clr */, SystemZ::CLR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3182 /* clrb */, SystemZ::CLRBAsm, Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3187 /* clrbe */, SystemZ::CLRBAsmE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3193 /* clrbh */, SystemZ::CLRBAsmH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3199 /* clrbhe */, SystemZ::CLRBAsmHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3206 /* clrbl */, SystemZ::CLRBAsmL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3212 /* clrble */, SystemZ::CLRBAsmLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3219 /* clrblh */, SystemZ::CLRBAsmLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3226 /* clrbne */, SystemZ::CLRBAsmNE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3233 /* clrbnh */, SystemZ::CLRBAsmNH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3240 /* clrbnhe */, SystemZ::CLRBAsmNHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3248 /* clrbnl */, SystemZ::CLRBAsmNL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3255 /* clrbnle */, SystemZ::CLRBAsmNLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3263 /* clrbnlh */, SystemZ::CLRBAsmNLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3271 /* clrj */, SystemZ::CLRJAsm, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 3276 /* clrje */, SystemZ::CLRJAsmE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3282 /* clrjh */, SystemZ::CLRJAsmH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3288 /* clrjhe */, SystemZ::CLRJAsmHE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3295 /* clrjl */, SystemZ::CLRJAsmL, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3301 /* clrjle */, SystemZ::CLRJAsmLE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3308 /* clrjlh */, SystemZ::CLRJAsmLH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3315 /* clrjne */, SystemZ::CLRJAsmNE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3322 /* clrjnh */, SystemZ::CLRJAsmNH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3329 /* clrjnhe */, SystemZ::CLRJAsmNHE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3337 /* clrjnl */, SystemZ::CLRJAsmNL, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3344 /* clrjnle */, SystemZ::CLRJAsmNLE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3352 /* clrjnlh */, SystemZ::CLRJAsmNLH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3360 /* clrl */, SystemZ::CLRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 3365 /* clrt */, SystemZ::CLRTAsm, Convert__GR321_0__GR321_1__U4Imm1_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 3370 /* clrte */, SystemZ::CLRTAsmE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3376 /* clrth */, SystemZ::CLRTAsmH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3382 /* clrthe */, SystemZ::CLRTAsmHE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3389 /* clrtl */, SystemZ::CLRTAsmL, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3395 /* clrtle */, SystemZ::CLRTAsmLE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3402 /* clrtlh */, SystemZ::CLRTAsmLH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3409 /* clrtne */, SystemZ::CLRTAsmNE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3416 /* clrtnh */, SystemZ::CLRTAsmNH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3423 /* clrtnhe */, SystemZ::CLRTAsmNHE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3431 /* clrtnl */, SystemZ::CLRTAsmNL, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3438 /* clrtnle */, SystemZ::CLRTAsmNLE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3446 /* clrtnlh */, SystemZ::CLRTAsmNLH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3454 /* clst */, SystemZ::CLST, Convert__GR641_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 3459 /* clt */, SystemZ::CLTAsm, Convert__GR321_0__BDAddr64Disp202_2__U4Imm1_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 3463 /* clte */, SystemZ::CLTAsmE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3468 /* clth */, SystemZ::CLTAsmH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3473 /* clthe */, SystemZ::CLTAsmHE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3479 /* cltl */, SystemZ::CLTAsmL, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3484 /* cltle */, SystemZ::CLTAsmLE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3490 /* cltlh */, SystemZ::CLTAsmLH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3496 /* cltne */, SystemZ::CLTAsmNE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3502 /* cltnh */, SystemZ::CLTAsmNH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3508 /* cltnhe */, SystemZ::CLTAsmNHE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3515 /* cltnl */, SystemZ::CLTAsmNL, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3521 /* cltnle */, SystemZ::CLTAsmNLE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3528 /* cltnlh */, SystemZ::CLTAsmNLH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3535 /* cly */, SystemZ::CLY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3539 /* cmpsc */, SystemZ::CMPSC, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3545 /* cp */, SystemZ::CP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 3548 /* cpdt */, SystemZ::CPDT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPPackedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 3553 /* cpsdr */, SystemZ::CPSDRdd, Convert__FP641_0__FP641_2__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 3559 /* cpxt */, SystemZ::CPXT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPPackedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 3564 /* cpya */, SystemZ::CPYA, Convert__AR321_0__AR321_1, AMFBS_None, { MCK_AR32, MCK_AR32 }, },
  { 3569 /* cr */, SystemZ::CR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3572 /* crb */, SystemZ::CRBAsm, Convert__GR321_0__GR321_1__U4Imm1_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 3576 /* crbe */, SystemZ::CRBAsmE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3581 /* crbh */, SystemZ::CRBAsmH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3586 /* crbhe */, SystemZ::CRBAsmHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3592 /* crbl */, SystemZ::CRBAsmL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3597 /* crble */, SystemZ::CRBAsmLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3603 /* crblh */, SystemZ::CRBAsmLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3609 /* crbne */, SystemZ::CRBAsmNE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3615 /* crbnh */, SystemZ::CRBAsmNH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3621 /* crbnhe */, SystemZ::CRBAsmNHE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3628 /* crbnl */, SystemZ::CRBAsmNL, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3634 /* crbnle */, SystemZ::CRBAsmNLE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3641 /* crbnlh */, SystemZ::CRBAsmNLH, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3648 /* crdte */, SystemZ::CRDTEOpt, Convert__GR1281_0__GR1281_2__GR641_1, AMFBS_FeatureEnhancedDAT2, { MCK_GR128, MCK_GR64, MCK_GR128 }, },
  { 3648 /* crdte */, SystemZ::CRDTE, Convert__GR1281_0__GR1281_2__GR641_1__U4Imm1_3, AMFBS_FeatureEnhancedDAT2, { MCK_GR128, MCK_GR64, MCK_GR128, MCK_U4Imm }, },
  { 3654 /* crj */, SystemZ::CRJAsm, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 3658 /* crje */, SystemZ::CRJAsmE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3663 /* crjh */, SystemZ::CRJAsmH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3668 /* crjhe */, SystemZ::CRJAsmHE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3674 /* crjl */, SystemZ::CRJAsmL, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3679 /* crjle */, SystemZ::CRJAsmLE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3685 /* crjlh */, SystemZ::CRJAsmLH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3691 /* crjne */, SystemZ::CRJAsmNE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3697 /* crjnh */, SystemZ::CRJAsmNH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3703 /* crjnhe */, SystemZ::CRJAsmNHE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3710 /* crjnl */, SystemZ::CRJAsmNL, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3716 /* crjnle */, SystemZ::CRJAsmNLE, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3723 /* crjnlh */, SystemZ::CRJAsmNLH, Convert__GR321_0__GR321_1__PCRel161_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 3730 /* crl */, SystemZ::CRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 3734 /* crt */, SystemZ::CRTAsm, Convert__GR321_0__GR321_1__U4Imm1_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 3738 /* crte */, SystemZ::CRTAsmE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3743 /* crth */, SystemZ::CRTAsmH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3748 /* crthe */, SystemZ::CRTAsmHE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3754 /* crtl */, SystemZ::CRTAsmL, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3759 /* crtle */, SystemZ::CRTAsmLE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3765 /* crtlh */, SystemZ::CRTAsmLH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3771 /* crtne */, SystemZ::CRTAsmNE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3777 /* crtnh */, SystemZ::CRTAsmNH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3783 /* crtnhe */, SystemZ::CRTAsmNHE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3790 /* crtnl */, SystemZ::CRTAsmNL, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3796 /* crtnle */, SystemZ::CRTAsmNLE, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3803 /* crtnlh */, SystemZ::CRTAsmNLH, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 3810 /* cs */, SystemZ::CS, Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 3813 /* csch */, SystemZ::CSCH, Convert_NoOperands, AMFBS_None, {  }, },
  { 3818 /* csdtr */, SystemZ::CSDTR, Convert__GR641_0__FP641_1__U4Imm1_2, AMFBS_None, { MCK_GR64, MCK_FP64, MCK_U4Imm }, },
  { 3824 /* csg */, SystemZ::CSG, Convert__GR641_0__Tie0_1_1__GR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 3828 /* csp */, SystemZ::CSP, Convert__GR1281_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 3832 /* cspg */, SystemZ::CSPG, Convert__GR1281_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 3837 /* csst */, SystemZ::CSST, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 3842 /* csxtr */, SystemZ::CSXTR, Convert__GR1281_0__FP1281_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_FP128, MCK_U4Imm }, },
  { 3848 /* csy */, SystemZ::CSY, Convert__GR321_0__Tie0_1_1__GR321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 3852 /* cu12 */, SystemZ::CU12Opt, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3852 /* cu12 */, SystemZ::CU12, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3857 /* cu14 */, SystemZ::CU14Opt, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3857 /* cu14 */, SystemZ::CU14, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3862 /* cu21 */, SystemZ::CU21Opt, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3862 /* cu21 */, SystemZ::CU21, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3867 /* cu24 */, SystemZ::CU24Opt, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3867 /* cu24 */, SystemZ::CU24, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3872 /* cu41 */, SystemZ::CU41, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3877 /* cu42 */, SystemZ::CU42, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3882 /* cudtr */, SystemZ::CUDTR, Convert__GR641_0__FP641_1, AMFBS_None, { MCK_GR64, MCK_FP64 }, },
  { 3888 /* cuse */, SystemZ::CUSE, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3893 /* cutfu */, SystemZ::CUTFUOpt, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3893 /* cutfu */, SystemZ::CUTFU, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3899 /* cuutf */, SystemZ::CUUTFOpt, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 3899 /* cuutf */, SystemZ::CUUTF, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_U4Imm }, },
  { 3905 /* cuxtr */, SystemZ::CUXTR, Convert__GR1281_0__FP1281_1, AMFBS_None, { MCK_GR128, MCK_FP128 }, },
  { 3911 /* cvb */, SystemZ::CVB, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3915 /* cvbg */, SystemZ::CVBG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3920 /* cvby */, SystemZ::CVBY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3925 /* cvd */, SystemZ::CVD, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 3929 /* cvdg */, SystemZ::CVDG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 3934 /* cvdy */, SystemZ::CVDY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 3939 /* cxbr */, SystemZ::CXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 3944 /* cxfbr */, SystemZ::CXFBR, Convert__FP1281_0__GR321_1, AMFBS_None, { MCK_FP128, MCK_GR32 }, },
  { 3950 /* cxfbra */, SystemZ::CXFBRA, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 3957 /* cxfr */, SystemZ::CXFR, Convert__FP1281_0__GR321_1, AMFBS_None, { MCK_FP128, MCK_GR32 }, },
  { 3962 /* cxftr */, SystemZ::CXFTR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 3968 /* cxgbr */, SystemZ::CXGBR, Convert__FP1281_0__GR641_1, AMFBS_None, { MCK_FP128, MCK_GR64 }, },
  { 3974 /* cxgbra */, SystemZ::CXGBRA, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 3981 /* cxgr */, SystemZ::CXGR, Convert__FP1281_0__GR641_1, AMFBS_None, { MCK_FP128, MCK_GR64 }, },
  { 3986 /* cxgtr */, SystemZ::CXGTR, Convert__FP1281_0__GR641_1, AMFBS_None, { MCK_FP128, MCK_GR64 }, },
  { 3992 /* cxgtra */, SystemZ::CXGTRA, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 3999 /* cxlfbr */, SystemZ::CXLFBR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 4006 /* cxlftr */, SystemZ::CXLFTR, Convert__FP1281_0__U4Imm1_1__GR321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR32, MCK_U4Imm }, },
  { 4013 /* cxlgbr */, SystemZ::CXLGBR, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 4020 /* cxlgtr */, SystemZ::CXLGTR, Convert__FP1281_0__U4Imm1_1__GR641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_GR64, MCK_U4Imm }, },
  { 4027 /* cxpt */, SystemZ::CXPT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPPackedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 4032 /* cxr */, SystemZ::CXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4036 /* cxstr */, SystemZ::CXSTR, Convert__FP1281_0__GR1281_1, AMFBS_None, { MCK_FP128, MCK_GR128 }, },
  { 4042 /* cxtr */, SystemZ::CXTR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4047 /* cxutr */, SystemZ::CXUTR, Convert__FP1281_0__GR1281_1, AMFBS_None, { MCK_FP128, MCK_GR128 }, },
  { 4053 /* cxzt */, SystemZ::CXZT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPZonedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 4058 /* cy */, SystemZ::CY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4061 /* czdt */, SystemZ::CZDT, Convert__FP641_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPZonedConversion, { MCK_FP64, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 4066 /* czxt */, SystemZ::CZXT, Convert__FP1281_0__BDLAddr64Disp12Len83_1__U4Imm1_2, AMFBS_FeatureDFPZonedConversion, { MCK_FP128, MCK_BDLAddr64Disp12Len8, MCK_U4Imm }, },
  { 4071 /* d */, SystemZ::D, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp12 }, },
  { 4073 /* dd */, SystemZ::DD, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4076 /* ddb */, SystemZ::DDB, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4080 /* ddbr */, SystemZ::DDBR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4085 /* ddr */, SystemZ::DDR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4089 /* ddtr */, SystemZ::DDTR, Convert__FP641_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 4094 /* ddtra */, SystemZ::DDTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 4100 /* de */, SystemZ::DE, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4103 /* deb */, SystemZ::DEB, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4107 /* debr */, SystemZ::DEBR, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4112 /* der */, SystemZ::DER, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4116 /* dfltcc */, SystemZ::DFLTCC, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__GR641_2, AMFBS_FeatureDeflateConversion, { MCK_GR128, MCK_GR128, MCK_GR64 }, },
  { 4123 /* diag */, SystemZ::DIAG, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 4128 /* didbr */, SystemZ::DIDBR, Convert__FP641_0__FP641_1__Tie0_1_1__FP641_2__U4Imm1_3, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 4134 /* diebr */, SystemZ::DIEBR, Convert__FP321_0__FP321_1__Tie0_1_1__FP321_2__U4Imm1_3, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_FP32, MCK_U4Imm }, },
  { 4140 /* dl */, SystemZ::DL, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 4143 /* dlg */, SystemZ::DLG, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 4147 /* dlgr */, SystemZ::DLGR, Convert__GR1281_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 4152 /* dlr */, SystemZ::DLR, Convert__GR1281_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR128, MCK_GR32 }, },
  { 4156 /* dp */, SystemZ::DP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 4159 /* dr */, SystemZ::DR, Convert__GR1281_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR128, MCK_GR32 }, },
  { 4162 /* dsg */, SystemZ::DSG, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 4166 /* dsgf */, SystemZ::DSGF, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 4171 /* dsgfr */, SystemZ::DSGFR, Convert__GR1281_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR128, MCK_GR32 }, },
  { 4177 /* dsgr */, SystemZ::DSGR, Convert__GR1281_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 4182 /* dxbr */, SystemZ::DXBR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4187 /* dxr */, SystemZ::DXR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4191 /* dxtr */, SystemZ::DXTR, Convert__FP1281_0__FP1281_1__FP1281_2, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 4196 /* dxtra */, SystemZ::DXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 4202 /* ear */, SystemZ::EAR, Convert__GR321_0__AR321_1, AMFBS_None, { MCK_GR32, MCK_AR32 }, },
  { 4206 /* ecag */, SystemZ::ECAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 4211 /* ecctr */, SystemZ::ECCTR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 4217 /* ecpga */, SystemZ::ECPGA, Convert__GR321_0__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 4223 /* ectg */, SystemZ::ECTG, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 4228 /* ed */, SystemZ::ED, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 4231 /* edmk */, SystemZ::EDMK, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 4236 /* eedtr */, SystemZ::EEDTR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4242 /* eextr */, SystemZ::EEXTR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4248 /* efpc */, SystemZ::EFPC, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 4253 /* epair */, SystemZ::EPAIR, Convert__GR641_0, AMFBS_None, { MCK_GR64 }, },
  { 4259 /* epar */, SystemZ::EPAR, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 4264 /* epctr */, SystemZ::EPCTR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 4270 /* epsw */, SystemZ::EPSW, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 4275 /* ereg */, SystemZ::EREG, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 4280 /* eregg */, SystemZ::EREGG, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 4286 /* esair */, SystemZ::ESAIR, Convert__GR641_0, AMFBS_None, { MCK_GR64 }, },
  { 4292 /* esar */, SystemZ::ESAR, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 4297 /* esdtr */, SystemZ::ESDTR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4303 /* esea */, SystemZ::ESEA, Convert__GR321_0__Tie0_1_1, AMFBS_None, { MCK_GR32 }, },
  { 4308 /* esta */, SystemZ::ESTA, Convert__GR1281_0__GR321_1, AMFBS_None, { MCK_GR128, MCK_GR32 }, },
  { 4313 /* esxtr */, SystemZ::ESXTR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4319 /* etnd */, SystemZ::ETND, Convert__GR321_0, AMFBS_FeatureTransactionalExecution, { MCK_GR32 }, },
  { 4324 /* ex */, SystemZ::EX, Convert__GR641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4327 /* exrl */, SystemZ::EXRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 4332 /* fidbr */, SystemZ::FIDBR, Convert__FP641_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 4338 /* fidbra */, SystemZ::FIDBRA, Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 4345 /* fidr */, SystemZ::FIDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4350 /* fidtr */, SystemZ::FIDTR, Convert__FP641_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_None, { MCK_FP64, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 4356 /* fiebr */, SystemZ::FIEBR, Convert__FP321_0__U4Imm1_1__FP321_2, AMFBS_None, { MCK_FP32, MCK_U4Imm, MCK_FP32 }, },
  { 4362 /* fiebra */, SystemZ::FIEBRA, Convert__FP321_0__U4Imm1_1__FP321_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP32, MCK_U4Imm }, },
  { 4369 /* fier */, SystemZ::FIER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4374 /* fixbr */, SystemZ::FIXBR, Convert__FP1281_0__U4Imm1_1__FP1281_2, AMFBS_None, { MCK_FP128, MCK_U4Imm, MCK_FP128 }, },
  { 4380 /* fixbra */, SystemZ::FIXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 4387 /* fixr */, SystemZ::FIXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4392 /* fixtr */, SystemZ::FIXTR, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_None, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 4398 /* flogr */, SystemZ::FLOGR, Convert__GR1281_0__GR641_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 4404 /* hdr */, SystemZ::HDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4408 /* her */, SystemZ::HER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4412 /* hsch */, SystemZ::HSCH, Convert_NoOperands, AMFBS_None, {  }, },
  { 4417 /* iac */, SystemZ::IAC, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 4421 /* ic */, SystemZ::IC, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4424 /* icm */, SystemZ::ICM, Convert__GR321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 4428 /* icmh */, SystemZ::ICMH, Convert__GRH321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 4433 /* icmy */, SystemZ::ICMY, Convert__GR321_0__Tie0_1_1__U4Imm1_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 4438 /* icy */, SystemZ::ICY, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4442 /* idte */, SystemZ::IDTEOpt, Convert__GR641_0__GR641_2__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 4442 /* idte */, SystemZ::IDTE, Convert__GR641_0__GR641_2__GR641_1__U4Imm1_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 4447 /* iedtr */, SystemZ::IEDTR, Convert__FP641_0__FP641_2__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 4453 /* iextr */, SystemZ::IEXTR, Convert__FP1281_0__FP1281_2__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 4459 /* iihf */, SystemZ::IIHF, Convert__GRH321_0__U32Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U32Imm }, },
  { 4464 /* iihh */, SystemZ::IIHH, Convert__GRH321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 4469 /* iihl */, SystemZ::IIHL, Convert__GRH321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 4474 /* iilf */, SystemZ::IILF, Convert__GR321_0__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 4479 /* iilh */, SystemZ::IILH, Convert__GR321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 4484 /* iill */, SystemZ::IILL, Convert__GR321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 4489 /* ipk */, SystemZ::IPK, Convert_NoOperands, AMFBS_None, {  }, },
  { 4493 /* ipm */, SystemZ::IPM, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 4497 /* ipte */, SystemZ::IPTEOptOpt, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 4497 /* ipte */, SystemZ::IPTEOpt, Convert__GR641_0__GR321_1__GR321_2, AMFBS_None, { MCK_GR64, MCK_GR32, MCK_GR32 }, },
  { 4497 /* ipte */, SystemZ::IPTE, Convert__GR641_0__GR321_1__GR321_2__U4Imm1_3, AMFBS_None, { MCK_GR64, MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 4502 /* irbm */, SystemZ::IRBM, Convert__GR641_0__GR641_1, AMFBS_FeatureInsertReferenceBitsMultiple, { MCK_GR64, MCK_GR64 }, },
  { 4507 /* iske */, SystemZ::ISKE, Convert__GR321_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 4512 /* ivsk */, SystemZ::IVSK, Convert__GR321_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 4517 /* j */, SystemZ::J, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4519 /* je */, SystemZ::JAsmE, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4522 /* jg */, SystemZ::JG, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4525 /* jge */, SystemZ::JGAsmE, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4529 /* jgh */, SystemZ::JGAsmH, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4533 /* jghe */, SystemZ::JGAsmHE, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4538 /* jgl */, SystemZ::JGAsmL, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4542 /* jgle */, SystemZ::JGAsmLE, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4547 /* jglh */, SystemZ::JGAsmLH, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4552 /* jgm */, SystemZ::JGAsmM, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4556 /* jgne */, SystemZ::JGAsmNE, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4561 /* jgnh */, SystemZ::JGAsmNH, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4566 /* jgnhe */, SystemZ::JGAsmNHE, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4572 /* jgnl */, SystemZ::JGAsmNL, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4577 /* jgnle */, SystemZ::JGAsmNLE, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4583 /* jgnlh */, SystemZ::JGAsmNLH, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4589 /* jgnm */, SystemZ::JGAsmNM, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4594 /* jgno */, SystemZ::JGAsmNO, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4599 /* jgnop */, SystemZ::BRCLAsm, Convert__imm_95_0__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4605 /* jgnp */, SystemZ::JGAsmNP, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4610 /* jgnz */, SystemZ::JGAsmNZ, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4615 /* jgo */, SystemZ::JGAsmO, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4619 /* jgp */, SystemZ::JGAsmP, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4623 /* jgz */, SystemZ::JGAsmZ, Convert__PCRel321_0, AMFBS_None, { MCK_PCRel32 }, },
  { 4627 /* jh */, SystemZ::JAsmH, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4630 /* jhe */, SystemZ::JAsmHE, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4634 /* jl */, SystemZ::JAsmL, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4637 /* jle */, SystemZ::JAsmLE, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4641 /* jlh */, SystemZ::JAsmLH, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4645 /* jm */, SystemZ::JAsmM, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4648 /* jne */, SystemZ::JAsmNE, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4652 /* jnh */, SystemZ::JAsmNH, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4656 /* jnhe */, SystemZ::JAsmNHE, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4661 /* jnl */, SystemZ::JAsmNL, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4665 /* jnle */, SystemZ::JAsmNLE, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4670 /* jnlh */, SystemZ::JAsmNLH, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4675 /* jnm */, SystemZ::JAsmNM, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4679 /* jno */, SystemZ::JAsmNO, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4683 /* jnop */, SystemZ::BRCAsm, Convert__imm_95_0__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4688 /* jnp */, SystemZ::JAsmNP, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4692 /* jnz */, SystemZ::JAsmNZ, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4696 /* jo */, SystemZ::JAsmO, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4699 /* jp */, SystemZ::JAsmP, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4702 /* jz */, SystemZ::JAsmZ, Convert__PCRel161_0, AMFBS_None, { MCK_PCRel16 }, },
  { 4705 /* kdb */, SystemZ::KDB, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4709 /* kdbr */, SystemZ::KDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4714 /* kdsa */, SystemZ::KDSA, Convert__GR1281_1__GR641_0__Tie0_1_1, AMFBS_FeatureMessageSecurityAssist9, { MCK_GR64, MCK_GR128 }, },
  { 4719 /* kdtr */, SystemZ::KDTR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4724 /* keb */, SystemZ::KEB, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 4728 /* kebr */, SystemZ::KEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4733 /* kimd */, SystemZ::KIMD, Convert__GR1281_1__GR641_0__Tie0_1_1, AMFBS_None, { MCK_GR64, MCK_GR128 }, },
  { 4738 /* klmd */, SystemZ::KLMD, Convert__GR1281_1__GR641_0__Tie0_1_1, AMFBS_None, { MCK_GR64, MCK_GR128 }, },
  { 4743 /* km */, SystemZ::KM, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 4746 /* kma */, SystemZ::KMA, Convert__GR1281_0__GR1281_2__GR1281_1__Tie0_1_1__Tie1_1_1__Tie2_1_1, AMFBS_FeatureMessageSecurityAssist8, { MCK_GR128, MCK_GR128, MCK_GR128 }, },
  { 4750 /* kmac */, SystemZ::KMAC, Convert__GR1281_1__GR641_0__Tie0_1_1, AMFBS_None, { MCK_GR64, MCK_GR128 }, },
  { 4755 /* kmc */, SystemZ::KMC, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 4759 /* kmctr */, SystemZ::KMCTR, Convert__GR1281_0__GR1281_2__GR1281_1__Tie0_1_1__Tie1_1_1__Tie2_1_1, AMFBS_FeatureMessageSecurityAssist4, { MCK_GR128, MCK_GR128, MCK_GR128 }, },
  { 4765 /* kmf */, SystemZ::KMF, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_FeatureMessageSecurityAssist4, { MCK_GR128, MCK_GR128 }, },
  { 4769 /* kmo */, SystemZ::KMO, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_FeatureMessageSecurityAssist4, { MCK_GR128, MCK_GR128 }, },
  { 4773 /* kxbr */, SystemZ::KXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4778 /* kxtr */, SystemZ::KXTR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4783 /* l */, SystemZ::L, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 4785 /* la */, SystemZ::LA, Convert__GR641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4788 /* laa */, SystemZ::LAA, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4792 /* laag */, SystemZ::LAAG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4797 /* laal */, SystemZ::LAAL, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4802 /* laalg */, SystemZ::LAALG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4808 /* lae */, SystemZ::LAE, Convert__GR641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 4812 /* laey */, SystemZ::LAEY, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4817 /* lam */, SystemZ::LAM, Convert__AR321_0__AR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp12 }, },
  { 4821 /* lamy */, SystemZ::LAMY, Convert__AR321_0__AR321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp20 }, },
  { 4826 /* lan */, SystemZ::LAN, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4830 /* lang */, SystemZ::LANG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4835 /* lao */, SystemZ::LAO, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4839 /* laog */, SystemZ::LAOG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4844 /* larl */, SystemZ::LARL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 4849 /* lasp */, SystemZ::LASP, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 4854 /* lat */, SystemZ::LAT, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndTrap, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4858 /* lax */, SystemZ::LAX, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 4862 /* laxg */, SystemZ::LAXG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 4867 /* lay */, SystemZ::LAY, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 4871 /* lb */, SystemZ::LB, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 4874 /* lbh */, SystemZ::LBH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 4878 /* lbr */, SystemZ::LBR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 4882 /* lcbb */, SystemZ::LCBB, Convert__GR321_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_GR32, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 4887 /* lcctl */, SystemZ::LCCTL, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 4893 /* lcdbr */, SystemZ::LCDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4899 /* lcdfr */, SystemZ::LCDFR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4905 /* lcdr */, SystemZ::LCDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4910 /* lcebr */, SystemZ::LCEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4916 /* lcer */, SystemZ::LCER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 4921 /* lcgfr */, SystemZ::LCGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 4927 /* lcgr */, SystemZ::LCGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 4932 /* lcr */, SystemZ::LCR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 4936 /* lctl */, SystemZ::LCTL, Convert__CR641_0__CR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_CR64, MCK_CR64, MCK_BDAddr64Disp12 }, },
  { 4941 /* lctlg */, SystemZ::LCTLG, Convert__CR641_0__CR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_CR64, MCK_CR64, MCK_BDAddr64Disp20 }, },
  { 4947 /* lcxbr */, SystemZ::LCXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4953 /* lcxr */, SystemZ::LCXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 4958 /* ld */, SystemZ::LD, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4961 /* lde */, SystemZ::LDE, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4965 /* ldeb */, SystemZ::LDEB, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 4970 /* ldebr */, SystemZ::LDEBR, Convert__FP641_0__FP321_1, AMFBS_None, { MCK_FP64, MCK_FP32 }, },
  { 4976 /* lder */, SystemZ::LDER, Convert__FP641_0__FP321_1, AMFBS_None, { MCK_FP64, MCK_FP32 }, },
  { 4981 /* ldetr */, SystemZ::LDETR, Convert__FP641_0__FP321_1__U4Imm1_2, AMFBS_None, { MCK_FP64, MCK_FP32, MCK_U4Imm }, },
  { 4987 /* ldgr */, SystemZ::LDGR, Convert__FP641_0__GR641_1, AMFBS_None, { MCK_FP64, MCK_GR64 }, },
  { 4992 /* ldr */, SystemZ::LDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 4996 /* ldrv */, SystemZ::VLLEBRZG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 5001 /* ldxbr */, SystemZ::LDXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 5007 /* ldxbra */, SystemZ::LDXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 5014 /* ldxr */, SystemZ::LDXR, Convert__FP641_0__FP1281_1, AMFBS_None, { MCK_FP64, MCK_FP128 }, },
  { 5019 /* ldxtr */, SystemZ::LDXTR, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_None, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 5025 /* ldy */, SystemZ::LDY, Convert__FP641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 5029 /* le */, SystemZ::LE, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 5032 /* ledbr */, SystemZ::LEDBR, Convert__FP321_0__FP641_1, AMFBS_None, { MCK_FP32, MCK_FP64 }, },
  { 5038 /* ledbra */, SystemZ::LEDBRA, Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 5045 /* ledr */, SystemZ::LEDR, Convert__FP321_0__FP641_1, AMFBS_None, { MCK_FP32, MCK_FP64 }, },
  { 5050 /* ledtr */, SystemZ::LEDTR, Convert__FP321_0__U4Imm1_1__FP641_2__U4Imm1_3, AMFBS_None, { MCK_FP32, MCK_U4Imm, MCK_FP64, MCK_U4Imm }, },
  { 5056 /* ler */, SystemZ::LER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 5060 /* lerv */, SystemZ::VLLEBRZE, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 5065 /* lexbr */, SystemZ::LEXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 5071 /* lexbra */, SystemZ::LEXBRA, Convert__FP1281_0__U4Imm1_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_U4Imm, MCK_FP128, MCK_U4Imm }, },
  { 5078 /* lexr */, SystemZ::LEXR, Convert__FP321_0__FP1281_1, AMFBS_None, { MCK_FP32, MCK_FP128 }, },
  { 5083 /* ley */, SystemZ::LEY, Convert__FP321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 5087 /* lfas */, SystemZ::LFAS, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 5092 /* lfh */, SystemZ::LFH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5096 /* lfhat */, SystemZ::LFHAT, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndTrap, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5102 /* lfpc */, SystemZ::LFPC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 5107 /* lg */, SystemZ::LG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5110 /* lgat */, SystemZ::LGAT, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5115 /* lgb */, SystemZ::LGB, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5119 /* lgbr */, SystemZ::LGBR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5124 /* lgdr */, SystemZ::LGDR, Convert__GR641_0__FP641_1, AMFBS_None, { MCK_GR64, MCK_FP64 }, },
  { 5129 /* lgf */, SystemZ::LGF, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5133 /* lgfi */, SystemZ::LGFI, Convert__GR641_0__S32Imm1_1, AMFBS_None, { MCK_GR64, MCK_S32Imm }, },
  { 5138 /* lgfr */, SystemZ::LGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 5143 /* lgfrl */, SystemZ::LGFRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 5149 /* lgg */, SystemZ::LGG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureGuardedStorage, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5153 /* lgh */, SystemZ::LGH, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5157 /* lghi */, SystemZ::LGHI, Convert__GR641_0__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 5162 /* lghr */, SystemZ::LGHR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5167 /* lghrl */, SystemZ::LGHRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 5173 /* lgr */, SystemZ::LGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5177 /* lgrl */, SystemZ::LGRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 5182 /* lgsc */, SystemZ::LGSC, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureGuardedStorage, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5187 /* lh */, SystemZ::LH, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 5190 /* lhh */, SystemZ::LHH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5194 /* lhi */, SystemZ::LHI, Convert__GR321_0__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 5198 /* lhr */, SystemZ::LHR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 5202 /* lhrl */, SystemZ::LHRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 5207 /* lhy */, SystemZ::LHY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5211 /* llc */, SystemZ::LLC, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5215 /* llch */, SystemZ::LLCH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5220 /* llcr */, SystemZ::LLCR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 5225 /* llgc */, SystemZ::LLGC, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5230 /* llgcr */, SystemZ::LLGCR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5236 /* llgf */, SystemZ::LLGF, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5241 /* llgfat */, SystemZ::LLGFAT, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5248 /* llgfr */, SystemZ::LLGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 5254 /* llgfrl */, SystemZ::LLGFRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 5261 /* llgfsg */, SystemZ::LLGFSG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureGuardedStorage, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5268 /* llgh */, SystemZ::LLGH, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5273 /* llghr */, SystemZ::LLGHR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5279 /* llghrl */, SystemZ::LLGHRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 5286 /* llgt */, SystemZ::LLGT, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5291 /* llgtat */, SystemZ::LLGTAT, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndTrap, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5298 /* llgtr */, SystemZ::LLGTR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5304 /* llh */, SystemZ::LLH, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 5308 /* llhh */, SystemZ::LLHH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 5313 /* llhr */, SystemZ::LLHR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 5318 /* llhrl */, SystemZ::LLHRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 5324 /* llihf */, SystemZ::LLIHF, Convert__GR641_0__U32Imm1_1, AMFBS_None, { MCK_GR64, MCK_U32Imm }, },
  { 5330 /* llihh */, SystemZ::LLIHH, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 5336 /* llihl */, SystemZ::LLIHL, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 5342 /* llilf */, SystemZ::LLILF, Convert__GR641_0__U32Imm1_1, AMFBS_None, { MCK_GR64, MCK_U32Imm }, },
  { 5348 /* llilh */, SystemZ::LLILH, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 5354 /* llill */, SystemZ::LLILL, Convert__GR641_0__U16Imm1_1, AMFBS_None, { MCK_GR64, MCK_U16Imm }, },
  { 5360 /* llzrgf */, SystemZ::LLZRGF, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndZeroRightmostByte, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 5367 /* lm */, SystemZ::LM, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 5370 /* lmd */, SystemZ::LMD, Convert__GR641_0__GR641_1__BDAddr64Disp122_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 5374 /* lmg */, SystemZ::LMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5378 /* lmh */, SystemZ::LMH, Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GRH32, MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5382 /* lmy */, SystemZ::LMY, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5386 /* lndbr */, SystemZ::LNDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 5392 /* lndfr */, SystemZ::LNDFR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 5398 /* lndr */, SystemZ::LNDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 5403 /* lnebr */, SystemZ::LNEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 5409 /* lner */, SystemZ::LNER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 5414 /* lngfr */, SystemZ::LNGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 5420 /* lngr */, SystemZ::LNGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 5425 /* lnr */, SystemZ::LNR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 5429 /* lnxbr */, SystemZ::LNXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 5435 /* lnxr */, SystemZ::LNXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 5440 /* loc */, SystemZ::LOCAsm, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5444 /* loce */, SystemZ::LOCAsmE, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 5449 /* locfh */, SystemZ::LOCFHAsm, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5455 /* locfhe */, SystemZ::LOCFHAsmE, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5462 /* locfhh */, SystemZ::LOCFHAsmH, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5469 /* locfhhe */, SystemZ::LOCFHAsmHE, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5477 /* locfhl */, SystemZ::LOCFHAsmL, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5484 /* locfhle */, SystemZ::LOCFHAsmLE, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5492 /* locfhlh */, SystemZ::LOCFHAsmLH, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5500 /* locfhm */, SystemZ::LOCFHAsmM, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5507 /* locfhne */, SystemZ::LOCFHAsmNE, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5515 /* locfhnh */, SystemZ::LOCFHAsmNH, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5523 /* locfhnhe */, SystemZ::LOCFHAsmNHE, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5532 /* locfhnl */, SystemZ::LOCFHAsmNL, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5540 /* locfhnle */, SystemZ::LOCFHAsmNLE, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5549 /* locfhnlh */, SystemZ::LOCFHAsmNLH, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5558 /* locfhnm */, SystemZ::LOCFHAsmNM, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5566 /* locfhno */, SystemZ::LOCFHAsmNO, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5574 /* locfhnp */, SystemZ::LOCFHAsmNP, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5582 /* locfhnz */, SystemZ::LOCFHAsmNZ, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5590 /* locfho */, SystemZ::LOCFHAsmO, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5597 /* locfhp */, SystemZ::LOCFHAsmP, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5604 /* locfhr */, SystemZ::LOCFHRAsm, Convert__GRH321_0__Tie0_1_1__GRH321_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32, MCK_U4Imm }, },
  { 5611 /* locfhre */, SystemZ::LOCFHRAsmE, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5619 /* locfhrh */, SystemZ::LOCFHRAsmH, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5627 /* locfhrhe */, SystemZ::LOCFHRAsmHE, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5636 /* locfhrl */, SystemZ::LOCFHRAsmL, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5644 /* locfhrle */, SystemZ::LOCFHRAsmLE, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5653 /* locfhrlh */, SystemZ::LOCFHRAsmLH, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5662 /* locfhrm */, SystemZ::LOCFHRAsmM, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5670 /* locfhrne */, SystemZ::LOCFHRAsmNE, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5679 /* locfhrnh */, SystemZ::LOCFHRAsmNH, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5688 /* locfhrnhe */, SystemZ::LOCFHRAsmNHE, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5698 /* locfhrnl */, SystemZ::LOCFHRAsmNL, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5707 /* locfhrnle */, SystemZ::LOCFHRAsmNLE, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5717 /* locfhrnlh */, SystemZ::LOCFHRAsmNLH, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5727 /* locfhrnm */, SystemZ::LOCFHRAsmNM, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5736 /* locfhrno */, SystemZ::LOCFHRAsmNO, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5745 /* locfhrnp */, SystemZ::LOCFHRAsmNP, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5754 /* locfhrnz */, SystemZ::LOCFHRAsmNZ, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5763 /* locfhro */, SystemZ::LOCFHRAsmO, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5771 /* locfhrp */, SystemZ::LOCFHRAsmP, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5779 /* locfhrz */, SystemZ::LOCFHRAsmZ, Convert__GRH321_0__Tie0_1_1__GRH321_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_GRH32 }, },
  { 5787 /* locfhz */, SystemZ::LOCFHAsmZ, Convert__GRH321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 5794 /* locg */, SystemZ::LOCGAsm, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 5799 /* locge */, SystemZ::LOCGAsmE, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5805 /* locgh */, SystemZ::LOCGAsmH, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5811 /* locghe */, SystemZ::LOCGAsmHE, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 5818 /* locghi */, SystemZ::LOCGHIAsm, Convert__GR641_0__Tie0_1_1__S16Imm1_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm, MCK_U4Imm }, },
  { 5825 /* locghie */, SystemZ::LOCGHIAsmE, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5833 /* locghih */, SystemZ::LOCGHIAsmH, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5841 /* locghihe */, SystemZ::LOCGHIAsmHE, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5850 /* locghil */, SystemZ::LOCGHIAsmL, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5858 /* locghile */, SystemZ::LOCGHIAsmLE, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5867 /* locghilh */, SystemZ::LOCGHIAsmLH, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5876 /* locghim */, SystemZ::LOCGHIAsmM, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5884 /* locghine */, SystemZ::LOCGHIAsmNE, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5893 /* locghinh */, SystemZ::LOCGHIAsmNH, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5902 /* locghinhe */, SystemZ::LOCGHIAsmNHE, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5912 /* locghinl */, SystemZ::LOCGHIAsmNL, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5921 /* locghinle */, SystemZ::LOCGHIAsmNLE, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5931 /* locghinlh */, SystemZ::LOCGHIAsmNLH, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5941 /* locghinm */, SystemZ::LOCGHIAsmNM, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5950 /* locghino */, SystemZ::LOCGHIAsmNO, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5959 /* locghinp */, SystemZ::LOCGHIAsmNP, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5968 /* locghinz */, SystemZ::LOCGHIAsmNZ, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5977 /* locghio */, SystemZ::LOCGHIAsmO, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5985 /* locghip */, SystemZ::LOCGHIAsmP, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 5993 /* locghiz */, SystemZ::LOCGHIAsmZ, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR64, MCK_S16Imm }, },
  { 6001 /* locgl */, SystemZ::LOCGAsmL, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6007 /* locgle */, SystemZ::LOCGAsmLE, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6014 /* locglh */, SystemZ::LOCGAsmLH, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6021 /* locgm */, SystemZ::LOCGAsmM, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6027 /* locgne */, SystemZ::LOCGAsmNE, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6034 /* locgnh */, SystemZ::LOCGAsmNH, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6041 /* locgnhe */, SystemZ::LOCGAsmNHE, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6049 /* locgnl */, SystemZ::LOCGAsmNL, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6056 /* locgnle */, SystemZ::LOCGAsmNLE, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6064 /* locgnlh */, SystemZ::LOCGAsmNLH, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6072 /* locgnm */, SystemZ::LOCGAsmNM, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6079 /* locgno */, SystemZ::LOCGAsmNO, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6086 /* locgnp */, SystemZ::LOCGAsmNP, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6093 /* locgnz */, SystemZ::LOCGAsmNZ, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6100 /* locgo */, SystemZ::LOCGAsmO, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6106 /* locgp */, SystemZ::LOCGAsmP, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6112 /* locgr */, SystemZ::LOCGRAsm, Convert__GR641_0__Tie0_1_1__GR641_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 6118 /* locgre */, SystemZ::LOCGRAsmE, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6125 /* locgrh */, SystemZ::LOCGRAsmH, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6132 /* locgrhe */, SystemZ::LOCGRAsmHE, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6140 /* locgrl */, SystemZ::LOCGRAsmL, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6147 /* locgrle */, SystemZ::LOCGRAsmLE, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6155 /* locgrlh */, SystemZ::LOCGRAsmLH, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6163 /* locgrm */, SystemZ::LOCGRAsmM, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6170 /* locgrne */, SystemZ::LOCGRAsmNE, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6178 /* locgrnh */, SystemZ::LOCGRAsmNH, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6186 /* locgrnhe */, SystemZ::LOCGRAsmNHE, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6195 /* locgrnl */, SystemZ::LOCGRAsmNL, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6203 /* locgrnle */, SystemZ::LOCGRAsmNLE, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6212 /* locgrnlh */, SystemZ::LOCGRAsmNLH, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6221 /* locgrnm */, SystemZ::LOCGRAsmNM, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6229 /* locgrno */, SystemZ::LOCGRAsmNO, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6237 /* locgrnp */, SystemZ::LOCGRAsmNP, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6245 /* locgrnz */, SystemZ::LOCGRAsmNZ, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6253 /* locgro */, SystemZ::LOCGRAsmO, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6260 /* locgrp */, SystemZ::LOCGRAsmP, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6267 /* locgrz */, SystemZ::LOCGRAsmZ, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 6274 /* locgz */, SystemZ::LOCGAsmZ, Convert__GR641_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 6280 /* loch */, SystemZ::LOCAsmH, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6285 /* loche */, SystemZ::LOCAsmHE, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6291 /* lochhi */, SystemZ::LOCHHIAsm, Convert__GRH321_0__Tie0_1_1__S16Imm1_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm, MCK_U4Imm }, },
  { 6298 /* lochhie */, SystemZ::LOCHHIAsmE, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6306 /* lochhih */, SystemZ::LOCHHIAsmH, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6314 /* lochhihe */, SystemZ::LOCHHIAsmHE, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6323 /* lochhil */, SystemZ::LOCHHIAsmL, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6331 /* lochhile */, SystemZ::LOCHHIAsmLE, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6340 /* lochhilh */, SystemZ::LOCHHIAsmLH, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6349 /* lochhim */, SystemZ::LOCHHIAsmM, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6357 /* lochhine */, SystemZ::LOCHHIAsmNE, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6366 /* lochhinh */, SystemZ::LOCHHIAsmNH, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6375 /* lochhinhe */, SystemZ::LOCHHIAsmNHE, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6385 /* lochhinl */, SystemZ::LOCHHIAsmNL, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6394 /* lochhinle */, SystemZ::LOCHHIAsmNLE, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6404 /* lochhinlh */, SystemZ::LOCHHIAsmNLH, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6414 /* lochhinm */, SystemZ::LOCHHIAsmNM, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6423 /* lochhino */, SystemZ::LOCHHIAsmNO, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6432 /* lochhinp */, SystemZ::LOCHHIAsmNP, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6441 /* lochhinz */, SystemZ::LOCHHIAsmNZ, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6450 /* lochhio */, SystemZ::LOCHHIAsmO, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6458 /* lochhip */, SystemZ::LOCHHIAsmP, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6466 /* lochhiz */, SystemZ::LOCHHIAsmZ, Convert__GRH321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_S16Imm }, },
  { 6474 /* lochi */, SystemZ::LOCHIAsm, Convert__GR321_0__Tie0_1_1__S16Imm1_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm, MCK_U4Imm }, },
  { 6480 /* lochie */, SystemZ::LOCHIAsmE, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6487 /* lochih */, SystemZ::LOCHIAsmH, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6494 /* lochihe */, SystemZ::LOCHIAsmHE, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6502 /* lochil */, SystemZ::LOCHIAsmL, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6509 /* lochile */, SystemZ::LOCHIAsmLE, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6517 /* lochilh */, SystemZ::LOCHIAsmLH, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6525 /* lochim */, SystemZ::LOCHIAsmM, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6532 /* lochine */, SystemZ::LOCHIAsmNE, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6540 /* lochinh */, SystemZ::LOCHIAsmNH, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6548 /* lochinhe */, SystemZ::LOCHIAsmNHE, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6557 /* lochinl */, SystemZ::LOCHIAsmNL, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6565 /* lochinle */, SystemZ::LOCHIAsmNLE, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6574 /* lochinlh */, SystemZ::LOCHIAsmNLH, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6583 /* lochinm */, SystemZ::LOCHIAsmNM, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6591 /* lochino */, SystemZ::LOCHIAsmNO, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6599 /* lochinp */, SystemZ::LOCHIAsmNP, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6607 /* lochinz */, SystemZ::LOCHIAsmNZ, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6615 /* lochio */, SystemZ::LOCHIAsmO, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6622 /* lochip */, SystemZ::LOCHIAsmP, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6629 /* lochiz */, SystemZ::LOCHIAsmZ, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GR32, MCK_S16Imm }, },
  { 6636 /* locl */, SystemZ::LOCAsmL, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6641 /* locle */, SystemZ::LOCAsmLE, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6647 /* loclh */, SystemZ::LOCAsmLH, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6653 /* locm */, SystemZ::LOCAsmM, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6658 /* locne */, SystemZ::LOCAsmNE, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6664 /* locnh */, SystemZ::LOCAsmNH, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6670 /* locnhe */, SystemZ::LOCAsmNHE, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6677 /* locnl */, SystemZ::LOCAsmNL, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6683 /* locnle */, SystemZ::LOCAsmNLE, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6690 /* locnlh */, SystemZ::LOCAsmNLH, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6697 /* locnm */, SystemZ::LOCAsmNM, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6703 /* locno */, SystemZ::LOCAsmNO, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6709 /* locnp */, SystemZ::LOCAsmNP, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6715 /* locnz */, SystemZ::LOCAsmNZ, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6721 /* loco */, SystemZ::LOCAsmO, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6726 /* locp */, SystemZ::LOCAsmP, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6731 /* locr */, SystemZ::LOCRAsm, Convert__GR321_0__Tie0_1_1__GR321_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 6736 /* locre */, SystemZ::LOCRAsmE, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6742 /* locrh */, SystemZ::LOCRAsmH, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6748 /* locrhe */, SystemZ::LOCRAsmHE, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6755 /* locrl */, SystemZ::LOCRAsmL, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6761 /* locrle */, SystemZ::LOCRAsmLE, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6768 /* locrlh */, SystemZ::LOCRAsmLH, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6775 /* locrm */, SystemZ::LOCRAsmM, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6781 /* locrne */, SystemZ::LOCRAsmNE, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6788 /* locrnh */, SystemZ::LOCRAsmNH, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6795 /* locrnhe */, SystemZ::LOCRAsmNHE, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6803 /* locrnl */, SystemZ::LOCRAsmNL, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6810 /* locrnle */, SystemZ::LOCRAsmNLE, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6818 /* locrnlh */, SystemZ::LOCRAsmNLH, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6826 /* locrnm */, SystemZ::LOCRAsmNM, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6833 /* locrno */, SystemZ::LOCRAsmNO, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6840 /* locrnp */, SystemZ::LOCRAsmNP, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6847 /* locrnz */, SystemZ::LOCRAsmNZ, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6854 /* locro */, SystemZ::LOCRAsmO, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6860 /* locrp */, SystemZ::LOCRAsmP, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6866 /* locrz */, SystemZ::LOCRAsmZ, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 6872 /* locz */, SystemZ::LOCAsmZ, Convert__GR321_0__Tie0_1_1__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 6877 /* lpctl */, SystemZ::LPCTL, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 6883 /* lpd */, SystemZ::LPD, Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR128, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 6887 /* lpdbr */, SystemZ::LPDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 6893 /* lpdfr */, SystemZ::LPDFR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 6899 /* lpdg */, SystemZ::LPDG, Convert__GR1281_0__BDAddr64Disp122_1__BDAddr64Disp122_2, AMFBS_FeatureInterlockedAccess1, { MCK_GR128, MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 6904 /* lpdr */, SystemZ::LPDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 6909 /* lpebr */, SystemZ::LPEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 6915 /* lper */, SystemZ::LPER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 6920 /* lpgfr */, SystemZ::LPGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 6926 /* lpgr */, SystemZ::LPGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 6931 /* lpp */, SystemZ::LPP, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 6935 /* lpq */, SystemZ::LPQ, Convert__GR1281_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 6939 /* lpr */, SystemZ::LPR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 6943 /* lpsw */, SystemZ::LPSW, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 6948 /* lpswe */, SystemZ::LPSWE, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 6954 /* lptea */, SystemZ::LPTEA, Convert__GR641_0__GR641_1__Tie0_1_1__GR641_2__U4Imm1_3, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 6960 /* lpxbr */, SystemZ::LPXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 6966 /* lpxr */, SystemZ::LPXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 6971 /* lr */, SystemZ::LR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 6974 /* lra */, SystemZ::LRA, Convert__GR641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 6978 /* lrag */, SystemZ::LRAG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6983 /* lray */, SystemZ::LRAY, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 6988 /* lrdr */, SystemZ::LRDR, Convert__FP641_0__FP1281_1, AMFBS_None, { MCK_FP64, MCK_FP128 }, },
  { 6993 /* lrer */, SystemZ::LRER, Convert__FP321_0__FP641_1, AMFBS_None, { MCK_FP32, MCK_FP64 }, },
  { 6998 /* lrl */, SystemZ::LRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 7002 /* lrv */, SystemZ::LRV, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7006 /* lrvg */, SystemZ::LRVG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7011 /* lrvgr */, SystemZ::LRVGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7017 /* lrvh */, SystemZ::LRVH, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7022 /* lrvr */, SystemZ::LRVR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 7027 /* lsctl */, SystemZ::LSCTL, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 7033 /* lt */, SystemZ::LT, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7036 /* ltdbr */, SystemZ::LTDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 7042 /* ltdr */, SystemZ::LTDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 7047 /* ltdtr */, SystemZ::LTDTR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 7053 /* ltebr */, SystemZ::LTEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 7059 /* lter */, SystemZ::LTER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 7064 /* ltg */, SystemZ::LTG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7068 /* ltgf */, SystemZ::LTGF, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7073 /* ltgfr */, SystemZ::LTGFR, Convert__GR641_0__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 7079 /* ltgr */, SystemZ::LTGR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7084 /* ltr */, SystemZ::LTR, Convert__GR321_0__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 7088 /* ltxbr */, SystemZ::LTXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 7094 /* ltxr */, SystemZ::LTXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 7099 /* ltxtr */, SystemZ::LTXTR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 7105 /* lura */, SystemZ::LURA, Convert__GR321_0__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 7110 /* lurag */, SystemZ::LURAG, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7116 /* lxd */, SystemZ::LXD, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7120 /* lxdb */, SystemZ::LXDB, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7125 /* lxdbr */, SystemZ::LXDBR, Convert__FP1281_0__FP641_1, AMFBS_None, { MCK_FP128, MCK_FP64 }, },
  { 7131 /* lxdr */, SystemZ::LXDR, Convert__FP1281_0__FP641_1, AMFBS_None, { MCK_FP128, MCK_FP64 }, },
  { 7136 /* lxdtr */, SystemZ::LXDTR, Convert__FP1281_0__FP641_1__U4Imm1_2, AMFBS_None, { MCK_FP128, MCK_FP64, MCK_U4Imm }, },
  { 7142 /* lxe */, SystemZ::LXE, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7146 /* lxeb */, SystemZ::LXEB, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7151 /* lxebr */, SystemZ::LXEBR, Convert__FP1281_0__FP321_1, AMFBS_None, { MCK_FP128, MCK_FP32 }, },
  { 7157 /* lxer */, SystemZ::LXER, Convert__FP1281_0__FP321_1, AMFBS_None, { MCK_FP128, MCK_FP32 }, },
  { 7162 /* lxr */, SystemZ::LXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 7166 /* ly */, SystemZ::LY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7169 /* lzdr */, SystemZ::LZDR, Convert__FP641_0, AMFBS_None, { MCK_FP64 }, },
  { 7174 /* lzer */, SystemZ::LZER, Convert__FP321_0, AMFBS_None, { MCK_FP32 }, },
  { 7179 /* lzrf */, SystemZ::LZRF, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndZeroRightmostByte, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7184 /* lzrg */, SystemZ::LZRG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureLoadAndZeroRightmostByte, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7189 /* lzxr */, SystemZ::LZXR, Convert__FP1281_0, AMFBS_None, { MCK_FP128 }, },
  { 7194 /* m */, SystemZ::M, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp12 }, },
  { 7196 /* mad */, SystemZ::MAD, Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7200 /* madb */, SystemZ::MADB, Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7205 /* madbr */, SystemZ::MADBR, Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7211 /* madr */, SystemZ::MADR, Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7216 /* mae */, SystemZ::MAE, Convert__FP321_0__Tie0_1_1__FP321_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7220 /* maeb */, SystemZ::MAEB, Convert__FP321_0__Tie0_1_1__FP321_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7225 /* maebr */, SystemZ::MAEBR, Convert__FP321_0__Tie0_1_1__FP321_1__FP321_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 7231 /* maer */, SystemZ::MAER, Convert__FP321_0__Tie0_1_1__FP321_1__FP321_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 7236 /* may */, SystemZ::MAY, Convert__FP1281_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP128, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7240 /* mayh */, SystemZ::MAYH, Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7245 /* mayhr */, SystemZ::MAYHR, Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7251 /* mayl */, SystemZ::MAYL, Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7256 /* maylr */, SystemZ::MAYLR, Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7262 /* mayr */, SystemZ::MAYR, Convert__FP1281_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP128, MCK_FP64, MCK_FP64 }, },
  { 7267 /* mc */, SystemZ::MC, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7270 /* md */, SystemZ::MD, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7273 /* mdb */, SystemZ::MDB, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7277 /* mdbr */, SystemZ::MDBR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 7282 /* mde */, SystemZ::MDE, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7286 /* mdeb */, SystemZ::MDEB, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7291 /* mdebr */, SystemZ::MDEBR, Convert__FP641_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP64, MCK_FP32 }, },
  { 7297 /* mder */, SystemZ::MDER, Convert__FP641_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP64, MCK_FP32 }, },
  { 7302 /* mdr */, SystemZ::MDR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 7306 /* mdtr */, SystemZ::MDTR, Convert__FP641_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7311 /* mdtra */, SystemZ::MDTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 7317 /* me */, SystemZ::ME, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7320 /* mee */, SystemZ::MEE, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7324 /* meeb */, SystemZ::MEEB, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7329 /* meebr */, SystemZ::MEEBR, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 7335 /* meer */, SystemZ::MEER, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 7340 /* mer */, SystemZ::MER, Convert__FP641_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP64, MCK_FP32 }, },
  { 7344 /* mfy */, SystemZ::MFY, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 7348 /* mg */, SystemZ::MG, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 7351 /* mgh */, SystemZ::MGH, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7355 /* mghi */, SystemZ::MGHI, Convert__GR641_0__Tie0_1_1__S16Imm1_1, AMFBS_None, { MCK_GR64, MCK_S16Imm }, },
  { 7360 /* mgrk */, SystemZ::MGRK, Convert__GR1281_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR128, MCK_GR64, MCK_GR64 }, },
  { 7365 /* mh */, SystemZ::MH, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7368 /* mhi */, SystemZ::MHI, Convert__GR321_0__Tie0_1_1__S16Imm1_1, AMFBS_None, { MCK_GR32, MCK_S16Imm }, },
  { 7372 /* mhy */, SystemZ::MHY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7376 /* ml */, SystemZ::ML, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 7379 /* mlg */, SystemZ::MLG, Convert__GR1281_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 7383 /* mlgr */, SystemZ::MLGR, Convert__GR1281_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 7388 /* mlr */, SystemZ::MLR, Convert__GR1281_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR128, MCK_GR32 }, },
  { 7392 /* mp */, SystemZ::MP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 7395 /* mr */, SystemZ::MR, Convert__GR1281_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR128, MCK_GR32 }, },
  { 7398 /* ms */, SystemZ::MS, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7401 /* msc */, SystemZ::MSC, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7405 /* msch */, SystemZ::MSCH, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 7410 /* msd */, SystemZ::MSD, Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7414 /* msdb */, SystemZ::MSDB, Convert__FP641_0__Tie0_1_1__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7419 /* msdbr */, SystemZ::MSDBR, Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7425 /* msdr */, SystemZ::MSDR, Convert__FP641_0__Tie0_1_1__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7430 /* mse */, SystemZ::MSE, Convert__FP321_0__Tie0_1_1__FP321_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7434 /* mseb */, SystemZ::MSEB, Convert__FP321_0__Tie0_1_1__FP321_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 7439 /* msebr */, SystemZ::MSEBR, Convert__FP321_0__Tie0_1_1__FP321_1__FP321_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 7445 /* mser */, SystemZ::MSER, Convert__FP321_0__Tie0_1_1__FP321_1__FP321_2, AMFBS_None, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 7450 /* msfi */, SystemZ::MSFI, Convert__GR321_0__Tie0_1_1__S32Imm1_1, AMFBS_None, { MCK_GR32, MCK_S32Imm }, },
  { 7455 /* msg */, SystemZ::MSG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7459 /* msgc */, SystemZ::MSGC, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7464 /* msgf */, SystemZ::MSGF, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7469 /* msgfi */, SystemZ::MSGFI, Convert__GR641_0__Tie0_1_1__S32Imm1_1, AMFBS_None, { MCK_GR64, MCK_S32Imm }, },
  { 7475 /* msgfr */, SystemZ::MSGFR, Convert__GR641_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 7481 /* msgr */, SystemZ::MSGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7486 /* msgrkc */, SystemZ::MSGRKC, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7493 /* msr */, SystemZ::MSR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 7497 /* msrkc */, SystemZ::MSRKC, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7503 /* msta */, SystemZ::MSTA, Convert__GR1281_0, AMFBS_None, { MCK_GR128 }, },
  { 7508 /* msy */, SystemZ::MSY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7512 /* mvc */, SystemZ::MVC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7516 /* mvcdk */, SystemZ::MVCDK, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 7522 /* mvcin */, SystemZ::MVCIN, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7528 /* mvck */, SystemZ::MVCK, Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2, AMFBS_None, { MCK_BDRAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 7533 /* mvcl */, SystemZ::MVCL, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR128 }, },
  { 7538 /* mvcle */, SystemZ::MVCLE, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp122_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 7544 /* mvclu */, SystemZ::MVCLU, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR128, MCK_GR128, MCK_BDAddr32Disp20 }, },
  { 7550 /* mvcos */, SystemZ::MVCOS, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1__GR641_2, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 7556 /* mvcp */, SystemZ::MVCP, Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2, AMFBS_None, { MCK_BDRAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 7561 /* mvcrl */, SystemZ::MVCRL, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 7567 /* mvcs */, SystemZ::MVCS, Convert__BDRAddr64Disp123_0__BDAddr64Disp122_1__GR641_2, AMFBS_None, { MCK_BDRAddr64Disp12, MCK_BDAddr64Disp12, MCK_GR64 }, },
  { 7572 /* mvcsk */, SystemZ::MVCSK, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 7578 /* mvghi */, SystemZ::MVGHI, Convert__BDAddr64Disp122_0__S16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 7584 /* mvhhi */, SystemZ::MVHHI, Convert__BDAddr64Disp122_0__S16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 7590 /* mvhi */, SystemZ::MVHI, Convert__BDAddr64Disp122_0__S16Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 7595 /* mvi */, SystemZ::MVI, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7599 /* mviy */, SystemZ::MVIY, Convert__BDAddr64Disp202_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 7604 /* mvn */, SystemZ::MVN, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7608 /* mvo */, SystemZ::MVO, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 7612 /* mvpg */, SystemZ::MVPG, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7617 /* mvst */, SystemZ::MVST, Convert__GR641_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7622 /* mvz */, SystemZ::MVZ, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7626 /* mxbr */, SystemZ::MXBR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 7631 /* mxd */, SystemZ::MXD, Convert__FP1281_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7635 /* mxdb */, SystemZ::MXDB, Convert__FP1281_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 7640 /* mxdbr */, SystemZ::MXDBR, Convert__FP1281_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP128, MCK_FP64 }, },
  { 7646 /* mxdr */, SystemZ::MXDR, Convert__FP1281_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP128, MCK_FP64 }, },
  { 7651 /* mxr */, SystemZ::MXR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 7655 /* mxtr */, SystemZ::MXTR, Convert__FP1281_0__FP1281_1__FP1281_2, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 7660 /* mxtra */, SystemZ::MXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 7666 /* my */, SystemZ::MY, Convert__FP1281_0__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP128, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7669 /* myh */, SystemZ::MYH, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7673 /* myhr */, SystemZ::MYHR, Convert__FP641_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7678 /* myl */, SystemZ::MYL, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 7682 /* mylr */, SystemZ::MYLR, Convert__FP641_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 7687 /* myr */, SystemZ::MYR, Convert__FP1281_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP128, MCK_FP64, MCK_FP64 }, },
  { 7691 /* n */, SystemZ::N, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7693 /* nc */, SystemZ::NC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7696 /* ncgrk */, SystemZ::NCGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7702 /* ncrk */, SystemZ::NCRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7707 /* ng */, SystemZ::NG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7710 /* ngr */, SystemZ::NGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7714 /* ngrk */, SystemZ::NGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7719 /* ni */, SystemZ::NI, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7722 /* niai */, SystemZ::NIAI, Convert__U4Imm1_0__U4Imm1_1, AMFBS_FeatureExecutionHint, { MCK_U4Imm, MCK_U4Imm }, },
  { 7727 /* nihf */, SystemZ::NIHF, Convert__GRH321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U32Imm }, },
  { 7732 /* nihh */, SystemZ::NIHH, Convert__GRH321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 7737 /* nihl */, SystemZ::NIHL, Convert__GRH321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 7742 /* nilf */, SystemZ::NILF, Convert__GR321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 7747 /* nilh */, SystemZ::NILH, Convert__GR321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 7752 /* nill */, SystemZ::NILL, Convert__GR321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 7757 /* niy */, SystemZ::NIY, Convert__BDAddr64Disp202_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 7761 /* nngrk */, SystemZ::NNGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7767 /* nnrk */, SystemZ::NNRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7772 /* nogrk */, SystemZ::NOGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7778 /* nop */, SystemZ::NOP_bare, Convert_NoOperands, AMFBS_None, {  }, },
  { 7778 /* nop */, SystemZ::BCAsm, Convert__imm_95_0__BDXAddr64Disp123_0, AMFBS_None, { MCK_BDXAddr64Disp12 }, },
  { 7782 /* nopr */, SystemZ::BCRAsm, Convert__imm_95_0__regR0D, AMFBS_None, {  }, },
  { 7782 /* nopr */, SystemZ::BCRAsm, Convert__imm_95_0__GR641_0, AMFBS_None, { MCK_GR64 }, },
  { 7787 /* nork */, SystemZ::NORK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7792 /* nr */, SystemZ::NR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 7795 /* nrk */, SystemZ::NRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7799 /* ntstg */, SystemZ::NTSTG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureTransactionalExecution, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7805 /* nxgrk */, SystemZ::NXGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7811 /* nxrk */, SystemZ::NXRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7816 /* ny */, SystemZ::NY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7819 /* o */, SystemZ::O, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 7821 /* oc */, SystemZ::OC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 7824 /* ocgrk */, SystemZ::OCGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7830 /* ocrk */, SystemZ::OCRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7835 /* og */, SystemZ::OG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 7838 /* ogr */, SystemZ::OGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7842 /* ogrk */, SystemZ::OGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 7847 /* oi */, SystemZ::OI, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 7850 /* oihf */, SystemZ::OIHF, Convert__GRH321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U32Imm }, },
  { 7855 /* oihh */, SystemZ::OIHH, Convert__GRH321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 7860 /* oihl */, SystemZ::OIHL, Convert__GRH321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 7865 /* oilf */, SystemZ::OILF, Convert__GR321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 7870 /* oilh */, SystemZ::OILH, Convert__GR321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 7875 /* oill */, SystemZ::OILL, Convert__GR321_0__Tie0_1_1__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 7880 /* oiy */, SystemZ::OIY, Convert__BDAddr64Disp202_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 7884 /* or */, SystemZ::OR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 7887 /* ork */, SystemZ::ORK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 7891 /* oy */, SystemZ::OY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 7894 /* pack */, SystemZ::PACK, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 7899 /* palb */, SystemZ::PALB, Convert_NoOperands, AMFBS_None, {  }, },
  { 7904 /* pc */, SystemZ::PC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 7907 /* pcc */, SystemZ::PCC, Convert_NoOperands, AMFBS_FeatureMessageSecurityAssist4, {  }, },
  { 7911 /* pckmo */, SystemZ::PCKMO, Convert_NoOperands, AMFBS_FeatureMessageSecurityAssist3, {  }, },
  { 7917 /* pfd */, SystemZ::PFD, Convert__U4Imm1_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_U4Imm, MCK_BDXAddr64Disp20 }, },
  { 7921 /* pfdrl */, SystemZ::PFDRL, Convert__U4Imm1_0__PCRel321_1, AMFBS_None, { MCK_U4Imm, MCK_PCRel32 }, },
  { 7927 /* pfmf */, SystemZ::PFMF, Convert__GR641_1__GR321_0__Tie0_1_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 7932 /* pfpo */, SystemZ::PFPO, Convert_NoOperands, AMFBS_None, {  }, },
  { 7937 /* pgin */, SystemZ::PGIN, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7942 /* pgout */, SystemZ::PGOUT, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 7948 /* pka */, SystemZ::PKA, Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDLAddr64Disp12Len8 }, },
  { 7952 /* pku */, SystemZ::PKU, Convert__BDAddr64Disp122_0__BDLAddr64Disp12Len83_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDLAddr64Disp12Len8 }, },
  { 7956 /* plo */, SystemZ::PLO, Convert__GR641_0__BDAddr64Disp122_1__GR641_2__BDAddr64Disp122_3, AMFBS_None, { MCK_GR64, MCK_BDAddr64Disp12, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 7960 /* popcnt */, SystemZ::POPCNT, Convert__GR641_0__GR641_1, AMFBS_FeaturePopulationCount, { MCK_GR64, MCK_GR64 }, },
  { 7960 /* popcnt */, SystemZ::POPCNTOpt, Convert__GR641_0__GR641_1__U4Imm1_2, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 7967 /* ppa */, SystemZ::PPA, Convert__GR641_0__GR641_1__U4Imm1_2, AMFBS_FeatureProcessorAssist, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 7971 /* ppno */, SystemZ::PPNO, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_FeatureMessageSecurityAssist5, { MCK_GR128, MCK_GR128 }, },
  { 7976 /* pr */, SystemZ::PR, Convert_NoOperands, AMFBS_None, {  }, },
  { 7979 /* prno */, SystemZ::PRNO, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_FeatureMessageSecurityAssist7, { MCK_GR128, MCK_GR128 }, },
  { 7984 /* pt */, SystemZ::PT, Convert__GR321_0__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 7987 /* ptf */, SystemZ::PTF, Convert__GR641_0__Tie0_1_1, AMFBS_None, { MCK_GR64 }, },
  { 7991 /* ptff */, SystemZ::PTFF, Convert_NoOperands, AMFBS_None, {  }, },
  { 7996 /* pti */, SystemZ::PTI, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 8000 /* ptlb */, SystemZ::PTLB, Convert_NoOperands, AMFBS_None, {  }, },
  { 8005 /* qadtr */, SystemZ::QADTR, Convert__FP641_0__FP641_1__Tie0_1_1__FP641_2__U4Imm1_3, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 8011 /* qaxtr */, SystemZ::QAXTR, Convert__FP1281_0__FP1281_1__Tie0_1_1__FP1281_2__U4Imm1_3, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 8017 /* qctri */, SystemZ::QCTRI, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8023 /* qsi */, SystemZ::QSI, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8027 /* rchp */, SystemZ::RCHP, Convert_NoOperands, AMFBS_None, {  }, },
  { 8032 /* risbg */, SystemZ::RISBG, Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8038 /* risbgn */, SystemZ::RISBGN, Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_FeatureMiscellaneousExtensions, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8045 /* risbhg */, SystemZ::RISBHG, Convert__GRH321_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8052 /* risblg */, SystemZ::RISBLG, Convert__GR321_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_FeatureHighWord, { MCK_GR32, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8059 /* rll */, SystemZ::RLL, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 8063 /* rllg */, SystemZ::RLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 8068 /* rnsbg */, SystemZ::RNSBG, Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8074 /* rosbg */, SystemZ::ROSBG, Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8080 /* rp */, SystemZ::RP, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8083 /* rrbe */, SystemZ::RRBE, Convert__GR321_0__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 8088 /* rrbm */, SystemZ::RRBM, Convert__GR641_0__GR641_1, AMFBS_FeatureResetReferenceBitsMultiple, { MCK_GR64, MCK_GR64 }, },
  { 8093 /* rrdtr */, SystemZ::RRDTR, Convert__FP641_0__FP641_1__Tie0_1_1__FP641_2__U4Imm1_3, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 8099 /* rrxtr */, SystemZ::RRXTR, Convert__FP1281_0__FP1281_1__Tie0_1_1__FP1281_2__U4Imm1_3, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 8105 /* rsch */, SystemZ::RSCH, Convert_NoOperands, AMFBS_None, {  }, },
  { 8110 /* rxsbg */, SystemZ::RXSBG, Convert__GR641_0__Tie0_1_1__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 8116 /* s */, SystemZ::S, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 8118 /* sac */, SystemZ::SAC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8122 /* sacf */, SystemZ::SACF, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8127 /* sal */, SystemZ::SAL, Convert_NoOperands, AMFBS_None, {  }, },
  { 8131 /* sam24 */, SystemZ::SAM24, Convert_NoOperands, AMFBS_None, {  }, },
  { 8137 /* sam31 */, SystemZ::SAM31, Convert_NoOperands, AMFBS_None, {  }, },
  { 8143 /* sam64 */, SystemZ::SAM64, Convert_NoOperands, AMFBS_None, {  }, },
  { 8149 /* sar */, SystemZ::SAR, Convert__AR321_0__GR321_1, AMFBS_None, { MCK_AR32, MCK_GR32 }, },
  { 8153 /* scctr */, SystemZ::SCCTR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 8159 /* schm */, SystemZ::SCHM, Convert_NoOperands, AMFBS_None, {  }, },
  { 8164 /* sck */, SystemZ::SCK, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8168 /* sckc */, SystemZ::SCKC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8173 /* sckpf */, SystemZ::SCKPF, Convert_NoOperands, AMFBS_None, {  }, },
  { 8179 /* sd */, SystemZ::SD, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8182 /* sdb */, SystemZ::SDB, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8186 /* sdbr */, SystemZ::SDBR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 8191 /* sdr */, SystemZ::SDR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 8195 /* sdtr */, SystemZ::SDTR, Convert__FP641_0__FP641_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 8200 /* sdtra */, SystemZ::SDTRA, Convert__FP641_0__FP641_1__FP641_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP64, MCK_FP64, MCK_FP64, MCK_U4Imm }, },
  { 8206 /* se */, SystemZ::SE, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8209 /* seb */, SystemZ::SEB, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8213 /* sebr */, SystemZ::SEBR, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 8218 /* selfhr */, SystemZ::SELFHRAsm, Convert__GRH321_0__GRH321_2__GRH321_1__U4Imm1_3, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32, MCK_U4Imm }, },
  { 8225 /* selfhre */, SystemZ::SELFHRAsmE, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8233 /* selfhrh */, SystemZ::SELFHRAsmH, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8241 /* selfhrhe */, SystemZ::SELFHRAsmHE, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8250 /* selfhrl */, SystemZ::SELFHRAsmL, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8258 /* selfhrle */, SystemZ::SELFHRAsmLE, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8267 /* selfhrlh */, SystemZ::SELFHRAsmLH, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8276 /* selfhrm */, SystemZ::SELFHRAsmM, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8284 /* selfhrne */, SystemZ::SELFHRAsmNE, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8293 /* selfhrnh */, SystemZ::SELFHRAsmNH, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8302 /* selfhrnhe */, SystemZ::SELFHRAsmNHE, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8312 /* selfhrnl */, SystemZ::SELFHRAsmNL, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8321 /* selfhrnle */, SystemZ::SELFHRAsmNLE, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8331 /* selfhrnlh */, SystemZ::SELFHRAsmNLH, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8341 /* selfhrnm */, SystemZ::SELFHRAsmNM, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8350 /* selfhrno */, SystemZ::SELFHRAsmNO, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8359 /* selfhrnp */, SystemZ::SELFHRAsmNP, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8368 /* selfhrnz */, SystemZ::SELFHRAsmNZ, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8377 /* selfhro */, SystemZ::SELFHRAsmO, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8385 /* selfhrp */, SystemZ::SELFHRAsmP, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8393 /* selfhrz */, SystemZ::SELFHRAsmZ, Convert__GRH321_0__GRH321_2__GRH321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8401 /* selgr */, SystemZ::SELGRAsm, Convert__GR641_0__GR641_2__GR641_1__U4Imm1_3, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 8407 /* selgre */, SystemZ::SELGRAsmE, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8414 /* selgrh */, SystemZ::SELGRAsmH, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8421 /* selgrhe */, SystemZ::SELGRAsmHE, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8429 /* selgrl */, SystemZ::SELGRAsmL, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8436 /* selgrle */, SystemZ::SELGRAsmLE, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8444 /* selgrlh */, SystemZ::SELGRAsmLH, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8452 /* selgrm */, SystemZ::SELGRAsmM, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8459 /* selgrne */, SystemZ::SELGRAsmNE, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8467 /* selgrnh */, SystemZ::SELGRAsmNH, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8475 /* selgrnhe */, SystemZ::SELGRAsmNHE, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8484 /* selgrnl */, SystemZ::SELGRAsmNL, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8492 /* selgrnle */, SystemZ::SELGRAsmNLE, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8501 /* selgrnlh */, SystemZ::SELGRAsmNLH, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8510 /* selgrnm */, SystemZ::SELGRAsmNM, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8518 /* selgrno */, SystemZ::SELGRAsmNO, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8526 /* selgrnp */, SystemZ::SELGRAsmNP, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8534 /* selgrnz */, SystemZ::SELGRAsmNZ, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8542 /* selgro */, SystemZ::SELGRAsmO, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8549 /* selgrp */, SystemZ::SELGRAsmP, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8556 /* selgrz */, SystemZ::SELGRAsmZ, Convert__GR641_0__GR641_2__GR641_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8563 /* selr */, SystemZ::SELRAsm, Convert__GR321_0__GR321_2__GR321_1__U4Imm1_3, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 8568 /* selre */, SystemZ::SELRAsmE, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8574 /* selrh */, SystemZ::SELRAsmH, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8580 /* selrhe */, SystemZ::SELRAsmHE, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8587 /* selrl */, SystemZ::SELRAsmL, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8593 /* selrle */, SystemZ::SELRAsmLE, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8600 /* selrlh */, SystemZ::SELRAsmLH, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8607 /* selrm */, SystemZ::SELRAsmM, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8613 /* selrne */, SystemZ::SELRAsmNE, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8620 /* selrnh */, SystemZ::SELRAsmNH, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8627 /* selrnhe */, SystemZ::SELRAsmNHE, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8635 /* selrnl */, SystemZ::SELRAsmNL, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8642 /* selrnle */, SystemZ::SELRAsmNLE, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8650 /* selrnlh */, SystemZ::SELRAsmNLH, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8658 /* selrnm */, SystemZ::SELRAsmNM, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8665 /* selrno */, SystemZ::SELRAsmNO, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8672 /* selrnp */, SystemZ::SELRAsmNP, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8679 /* selrnz */, SystemZ::SELRAsmNZ, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8686 /* selro */, SystemZ::SELRAsmO, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8692 /* selrp */, SystemZ::SELRAsmP, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8698 /* selrz */, SystemZ::SELRAsmZ, Convert__GR321_0__GR321_2__GR321_1, AMFBS_FeatureMiscellaneousExtensions3, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8704 /* ser */, SystemZ::SER, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 8708 /* sfasr */, SystemZ::SFASR, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 8714 /* sfpc */, SystemZ::SFPC, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 8719 /* sg */, SystemZ::SG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8722 /* sgf */, SystemZ::SGF, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8726 /* sgfr */, SystemZ::SGFR, Convert__GR641_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 8731 /* sgh */, SystemZ::SGH, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_FeatureMiscellaneousExtensions2, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8735 /* sgr */, SystemZ::SGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 8739 /* sgrk */, SystemZ::SGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8744 /* sh */, SystemZ::SH, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 8747 /* shhhr */, SystemZ::SHHHR, Convert__GRH321_0__GRH321_1__GRH321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8753 /* shhlr */, SystemZ::SHHLR, Convert__GRH321_0__GRH321_1__GR321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GR32 }, },
  { 8759 /* shy */, SystemZ::SHY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8763 /* sie */, SystemZ::SIE, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8767 /* siga */, SystemZ::SIGA, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8772 /* sigp */, SystemZ::SIGP, Convert__GR641_0__GR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp12 }, },
  { 8777 /* sl */, SystemZ::SL, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 8780 /* sla */, SystemZ::SLA, Convert__GR321_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 8784 /* slag */, SystemZ::SLAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 8789 /* slak */, SystemZ::SLAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 8794 /* slb */, SystemZ::SLB, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8798 /* slbg */, SystemZ::SLBG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8803 /* slbgr */, SystemZ::SLBGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 8809 /* slbr */, SystemZ::SLBR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 8814 /* slda */, SystemZ::SLDA, Convert__GR1281_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 8819 /* sldl */, SystemZ::SLDL, Convert__GR1281_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 8824 /* sldt */, SystemZ::SLDT, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8829 /* slfi */, SystemZ::SLFI, Convert__GR321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 8834 /* slg */, SystemZ::SLG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8838 /* slgf */, SystemZ::SLGF, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 8843 /* slgfi */, SystemZ::SLGFI, Convert__GR641_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR64, MCK_U32Imm }, },
  { 8849 /* slgfr */, SystemZ::SLGFR, Convert__GR641_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR64, MCK_GR32 }, },
  { 8855 /* slgr */, SystemZ::SLGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 8860 /* slgrk */, SystemZ::SLGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 8866 /* slhhhr */, SystemZ::SLHHHR, Convert__GRH321_0__GRH321_1__GRH321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GRH32 }, },
  { 8873 /* slhhlr */, SystemZ::SLHHLR, Convert__GRH321_0__GRH321_1__GR321_2, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_GRH32, MCK_GR32 }, },
  { 8880 /* sll */, SystemZ::SLL, Convert__GR321_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 8884 /* sllg */, SystemZ::SLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 8889 /* sllk */, SystemZ::SLLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 8894 /* slr */, SystemZ::SLR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 8898 /* slrk */, SystemZ::SLRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 8903 /* slxt */, SystemZ::SLXT, Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 8908 /* sly */, SystemZ::SLY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 8912 /* sortl */, SystemZ::SORTL, Convert__GR1281_0__GR1281_1__Tie0_1_1__Tie1_1_1, AMFBS_FeatureEnhancedSort, { MCK_GR128, MCK_GR128 }, },
  { 8918 /* sp */, SystemZ::SP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 8921 /* spctr */, SystemZ::SPCTR, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 8927 /* spka */, SystemZ::SPKA, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8932 /* spm */, SystemZ::SPM, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 8936 /* spt */, SystemZ::SPT, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8940 /* spx */, SystemZ::SPX, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 8944 /* sqd */, SystemZ::SQD, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8948 /* sqdb */, SystemZ::SQDB, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 8953 /* sqdbr */, SystemZ::SQDBR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 8959 /* sqdr */, SystemZ::SQDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 8964 /* sqe */, SystemZ::SQE, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8968 /* sqeb */, SystemZ::SQEB, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 8973 /* sqebr */, SystemZ::SQEBR, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 8979 /* sqer */, SystemZ::SQER, Convert__FP321_0__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 8984 /* sqxbr */, SystemZ::SQXBR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 8990 /* sqxr */, SystemZ::SQXR, Convert__FP1281_0__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 8995 /* sr */, SystemZ::SR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 8998 /* sra */, SystemZ::SRA, Convert__GR321_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 9002 /* srag */, SystemZ::SRAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 9007 /* srak */, SystemZ::SRAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 9012 /* srda */, SystemZ::SRDA, Convert__GR1281_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 9017 /* srdl */, SystemZ::SRDL, Convert__GR1281_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR128, MCK_BDAddr32Disp12 }, },
  { 9022 /* srdt */, SystemZ::SRDT, Convert__FP641_0__FP641_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9027 /* srk */, SystemZ::SRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 9031 /* srl */, SystemZ::SRL, Convert__GR321_0__Tie0_1_1__BDAddr32Disp122_1, AMFBS_None, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 9035 /* srlg */, SystemZ::SRLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 9040 /* srlk */, SystemZ::SRLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 9045 /* srnm */, SystemZ::SRNM, Convert__BDAddr32Disp122_0, AMFBS_None, { MCK_BDAddr32Disp12 }, },
  { 9050 /* srnmb */, SystemZ::SRNMB, Convert__BDAddr32Disp122_0, AMFBS_FeatureFPExtension, { MCK_BDAddr32Disp12 }, },
  { 9056 /* srnmt */, SystemZ::SRNMT, Convert__BDAddr32Disp122_0, AMFBS_None, { MCK_BDAddr32Disp12 }, },
  { 9062 /* srp */, SystemZ::SRP, Convert__BDLAddr64Disp12Len43_0__BDAddr32Disp122_1__U4Imm1_2, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 9066 /* srst */, SystemZ::SRST, Convert__GR641_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 9071 /* srstu */, SystemZ::SRSTU, Convert__GR641_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 9077 /* srxt */, SystemZ::SRXT, Convert__FP1281_0__FP1281_1__BDXAddr64Disp123_2, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 9082 /* ssair */, SystemZ::SSAIR, Convert__GR641_0, AMFBS_None, { MCK_GR64 }, },
  { 9088 /* ssar */, SystemZ::SSAR, Convert__GR321_0, AMFBS_None, { MCK_GR32 }, },
  { 9093 /* ssch */, SystemZ::SSCH, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9098 /* sske */, SystemZ::SSKEOpt, Convert__GR321_0__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 9098 /* sske */, SystemZ::SSKE, Convert__GR321_0__GR641_1__U4Imm1_2, AMFBS_None, { MCK_GR32, MCK_GR64, MCK_U4Imm }, },
  { 9103 /* ssm */, SystemZ::SSM, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9107 /* st */, SystemZ::ST, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 9110 /* stam */, SystemZ::STAM, Convert__AR321_0__AR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp12 }, },
  { 9115 /* stamy */, SystemZ::STAMY, Convert__AR321_0__AR321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_AR32, MCK_AR32, MCK_BDAddr64Disp20 }, },
  { 9121 /* stap */, SystemZ::STAP, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9126 /* stc */, SystemZ::STC, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 9130 /* stch */, SystemZ::STCH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 9135 /* stck */, SystemZ::STCK, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9140 /* stckc */, SystemZ::STCKC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9146 /* stcke */, SystemZ::STCKE, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9152 /* stckf */, SystemZ::STCKF, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9158 /* stcm */, SystemZ::STCM, Convert__GR321_0__U4Imm1_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp12 }, },
  { 9163 /* stcmh */, SystemZ::STCMH, Convert__GRH321_0__U4Imm1_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GRH32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 9169 /* stcmy */, SystemZ::STCMY, Convert__GR321_0__U4Imm1_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR32, MCK_U4Imm, MCK_BDAddr64Disp20 }, },
  { 9175 /* stcps */, SystemZ::STCPS, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9181 /* stcrw */, SystemZ::STCRW, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9187 /* stctg */, SystemZ::STCTG, Convert__CR641_0__CR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_CR64, MCK_CR64, MCK_BDAddr64Disp20 }, },
  { 9193 /* stctl */, SystemZ::STCTL, Convert__CR641_0__CR641_1__BDAddr64Disp122_2, AMFBS_None, { MCK_CR64, MCK_CR64, MCK_BDAddr64Disp12 }, },
  { 9199 /* stcy */, SystemZ::STCY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9204 /* std */, SystemZ::STD, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9208 /* stdrv */, SystemZ::VSTEBRG, Convert__VR1281_0__BDXAddr64Disp123_1__imm_95_0, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 9214 /* stdy */, SystemZ::STDY, Convert__FP641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 9219 /* ste */, SystemZ::STE, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 9223 /* sterv */, SystemZ::VSTEBRF, Convert__VR1281_0__BDXAddr64Disp123_1__imm_95_0, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 9229 /* stey */, SystemZ::STEY, Convert__FP321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 9234 /* stfh */, SystemZ::STFH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 9239 /* stfl */, SystemZ::STFL, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9244 /* stfle */, SystemZ::STFLE, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9250 /* stfpc */, SystemZ::STFPC, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9256 /* stg */, SystemZ::STG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 9260 /* stgrl */, SystemZ::STGRL, Convert__GR641_0__PCRel321_1, AMFBS_None, { MCK_GR64, MCK_PCRel32 }, },
  { 9266 /* stgsc */, SystemZ::STGSC, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_FeatureGuardedStorage, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 9272 /* sth */, SystemZ::STH, Convert__GR321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 9276 /* sthh */, SystemZ::STHH, Convert__GRH321_0__BDXAddr64Disp203_1, AMFBS_FeatureHighWord, { MCK_GRH32, MCK_BDXAddr64Disp20 }, },
  { 9281 /* sthrl */, SystemZ::STHRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 9287 /* sthy */, SystemZ::STHY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9292 /* stidp */, SystemZ::STIDP, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9298 /* stm */, SystemZ::STM, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 9302 /* stmg */, SystemZ::STMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9307 /* stmh */, SystemZ::STMH, Convert__GRH321_0__GRH321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GRH32, MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9312 /* stmy */, SystemZ::STMY, Convert__GR321_0__GR321_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9317 /* stnsm */, SystemZ::STNSM, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 9323 /* stoc */, SystemZ::STOCAsm, Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 9328 /* stoce */, SystemZ::STOCAsmE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9334 /* stocfh */, SystemZ::STOCFHAsm, Convert__GRH321_0__BDAddr64Disp202_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 9341 /* stocfhe */, SystemZ::STOCFHAsmE, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9349 /* stocfhh */, SystemZ::STOCFHAsmH, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9357 /* stocfhhe */, SystemZ::STOCFHAsmHE, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9366 /* stocfhl */, SystemZ::STOCFHAsmL, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9374 /* stocfhle */, SystemZ::STOCFHAsmLE, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9383 /* stocfhlh */, SystemZ::STOCFHAsmLH, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9392 /* stocfhm */, SystemZ::STOCFHAsmM, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9400 /* stocfhne */, SystemZ::STOCFHAsmNE, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9409 /* stocfhnh */, SystemZ::STOCFHAsmNH, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9418 /* stocfhnhe */, SystemZ::STOCFHAsmNHE, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9428 /* stocfhnl */, SystemZ::STOCFHAsmNL, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9437 /* stocfhnle */, SystemZ::STOCFHAsmNLE, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9447 /* stocfhnlh */, SystemZ::STOCFHAsmNLH, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9457 /* stocfhnm */, SystemZ::STOCFHAsmNM, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9466 /* stocfhno */, SystemZ::STOCFHAsmNO, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9475 /* stocfhnp */, SystemZ::STOCFHAsmNP, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9484 /* stocfhnz */, SystemZ::STOCFHAsmNZ, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9493 /* stocfho */, SystemZ::STOCFHAsmO, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9501 /* stocfhp */, SystemZ::STOCFHAsmP, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9509 /* stocfhz */, SystemZ::STOCFHAsmZ, Convert__GRH321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond2, { MCK_GRH32, MCK_BDAddr64Disp20 }, },
  { 9517 /* stocg */, SystemZ::STOCGAsm, Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 9523 /* stocge */, SystemZ::STOCGAsmE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9530 /* stocgh */, SystemZ::STOCGAsmH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9537 /* stocghe */, SystemZ::STOCGAsmHE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9545 /* stocgl */, SystemZ::STOCGAsmL, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9552 /* stocgle */, SystemZ::STOCGAsmLE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9560 /* stocglh */, SystemZ::STOCGAsmLH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9568 /* stocgm */, SystemZ::STOCGAsmM, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9575 /* stocgne */, SystemZ::STOCGAsmNE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9583 /* stocgnh */, SystemZ::STOCGAsmNH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9591 /* stocgnhe */, SystemZ::STOCGAsmNHE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9600 /* stocgnl */, SystemZ::STOCGAsmNL, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9608 /* stocgnle */, SystemZ::STOCGAsmNLE, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9617 /* stocgnlh */, SystemZ::STOCGAsmNLH, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9626 /* stocgnm */, SystemZ::STOCGAsmNM, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9634 /* stocgno */, SystemZ::STOCGAsmNO, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9642 /* stocgnp */, SystemZ::STOCGAsmNP, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9650 /* stocgnz */, SystemZ::STOCGAsmNZ, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9658 /* stocgo */, SystemZ::STOCGAsmO, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9665 /* stocgp */, SystemZ::STOCGAsmP, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9672 /* stocgz */, SystemZ::STOCGAsmZ, Convert__GR641_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 9679 /* stoch */, SystemZ::STOCAsmH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9685 /* stoche */, SystemZ::STOCAsmHE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9692 /* stocl */, SystemZ::STOCAsmL, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9698 /* stocle */, SystemZ::STOCAsmLE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9705 /* stoclh */, SystemZ::STOCAsmLH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9712 /* stocm */, SystemZ::STOCAsmM, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9718 /* stocne */, SystemZ::STOCAsmNE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9725 /* stocnh */, SystemZ::STOCAsmNH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9732 /* stocnhe */, SystemZ::STOCAsmNHE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9740 /* stocnl */, SystemZ::STOCAsmNL, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9747 /* stocnle */, SystemZ::STOCAsmNLE, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9755 /* stocnlh */, SystemZ::STOCAsmNLH, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9763 /* stocnm */, SystemZ::STOCAsmNM, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9770 /* stocno */, SystemZ::STOCAsmNO, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9777 /* stocnp */, SystemZ::STOCAsmNP, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9784 /* stocnz */, SystemZ::STOCAsmNZ, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9791 /* stoco */, SystemZ::STOCAsmO, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9797 /* stocp */, SystemZ::STOCAsmP, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9803 /* stocz */, SystemZ::STOCAsmZ, Convert__GR321_0__BDAddr64Disp202_1, AMFBS_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 9809 /* stosm */, SystemZ::STOSM, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 9815 /* stpq */, SystemZ::STPQ, Convert__GR1281_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 9820 /* stpt */, SystemZ::STPT, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9825 /* stpx */, SystemZ::STPX, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9830 /* strag */, SystemZ::STRAG, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 9836 /* strl */, SystemZ::STRL, Convert__GR321_0__PCRel321_1, AMFBS_None, { MCK_GR32, MCK_PCRel32 }, },
  { 9841 /* strv */, SystemZ::STRV, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9846 /* strvg */, SystemZ::STRVG, Convert__GR641_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 9852 /* strvh */, SystemZ::STRVH, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9858 /* stsch */, SystemZ::STSCH, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9864 /* stsi */, SystemZ::STSI, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 9869 /* stura */, SystemZ::STURA, Convert__GR321_0__GR641_1, AMFBS_None, { MCK_GR32, MCK_GR64 }, },
  { 9875 /* sturg */, SystemZ::STURG, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 9881 /* sty */, SystemZ::STY, Convert__GR321_0__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9885 /* su */, SystemZ::SU, Convert__FP321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 9888 /* sur */, SystemZ::SUR, Convert__FP321_0__Tie0_1_1__FP321_1, AMFBS_None, { MCK_FP32, MCK_FP32 }, },
  { 9892 /* svc */, SystemZ::SVC, Convert__U8Imm1_0, AMFBS_None, { MCK_U8Imm }, },
  { 9896 /* sw */, SystemZ::SW, Convert__FP641_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9899 /* swr */, SystemZ::SWR, Convert__FP641_0__Tie0_1_1__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 9903 /* sxbr */, SystemZ::SXBR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 9908 /* sxr */, SystemZ::SXR, Convert__FP1281_0__Tie0_1_1__FP1281_1, AMFBS_None, { MCK_FP128, MCK_FP128 }, },
  { 9912 /* sxtr */, SystemZ::SXTR, Convert__FP1281_0__FP1281_1__FP1281_2, AMFBS_None, { MCK_FP128, MCK_FP128, MCK_FP128 }, },
  { 9917 /* sxtra */, SystemZ::SXTRA, Convert__FP1281_0__FP1281_1__FP1281_2__U4Imm1_3, AMFBS_FeatureFPExtension, { MCK_FP128, MCK_FP128, MCK_FP128, MCK_U4Imm }, },
  { 9923 /* sy */, SystemZ::SY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 9926 /* tabort */, SystemZ::TABORT, Convert__BDAddr64Disp122_0, AMFBS_FeatureTransactionalExecution, { MCK_BDAddr64Disp12 }, },
  { 9933 /* tam */, SystemZ::TAM, Convert_NoOperands, AMFBS_None, {  }, },
  { 9937 /* tar */, SystemZ::TAR, Convert__AR321_0__GR321_1, AMFBS_None, { MCK_AR32, MCK_GR32 }, },
  { 9941 /* tb */, SystemZ::TB, Convert__GR641_0__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 9944 /* tbdr */, SystemZ::TBDR, Convert__FP641_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 9949 /* tbedr */, SystemZ::TBEDR, Convert__FP321_0__U4Imm1_1__FP641_2, AMFBS_None, { MCK_FP32, MCK_U4Imm, MCK_FP64 }, },
  { 9955 /* tbegin */, SystemZ::TBEGIN, Convert__BDAddr64Disp122_0__U16Imm1_1, AMFBS_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 9962 /* tbeginc */, SystemZ::TBEGINC, Convert__BDAddr64Disp122_0__U16Imm1_1, AMFBS_FeatureTransactionalExecution, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 9970 /* tcdb */, SystemZ::TCDB, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9975 /* tceb */, SystemZ::TCEB, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 9980 /* tcxb */, SystemZ::TCXB, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 9985 /* tdcdt */, SystemZ::TDCDT, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 9991 /* tdcet */, SystemZ::TDCET, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 9997 /* tdcxt */, SystemZ::TDCXT, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 10003 /* tdgdt */, SystemZ::TDGDT, Convert__FP641_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 10009 /* tdget */, SystemZ::TDGET, Convert__FP321_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 10015 /* tdgxt */, SystemZ::TDGXT, Convert__FP1281_0__BDXAddr64Disp123_1, AMFBS_None, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 10021 /* tend */, SystemZ::TEND, Convert_NoOperands, AMFBS_FeatureTransactionalExecution, {  }, },
  { 10026 /* thder */, SystemZ::THDER, Convert__FP641_0__FP321_1, AMFBS_None, { MCK_FP64, MCK_FP32 }, },
  { 10032 /* thdr */, SystemZ::THDR, Convert__FP641_0__FP641_1, AMFBS_None, { MCK_FP64, MCK_FP64 }, },
  { 10037 /* tm */, SystemZ::TM, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 10040 /* tmh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 10044 /* tmhh */, SystemZ::TMHH, Convert__GRH321_0__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 10049 /* tmhl */, SystemZ::TMHL, Convert__GRH321_0__U16Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U16Imm }, },
  { 10054 /* tml */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 10058 /* tmlh */, SystemZ::TMLH, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 10063 /* tmll */, SystemZ::TMLL, Convert__GR321_0__U16Imm1_1, AMFBS_None, { MCK_GR32, MCK_U16Imm }, },
  { 10068 /* tmy */, SystemZ::TMY, Convert__BDAddr64Disp202_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 10072 /* tp */, SystemZ::TP, Convert__BDLAddr64Disp12Len43_0, AMFBS_None, { MCK_BDLAddr64Disp12Len4 }, },
  { 10075 /* tpi */, SystemZ::TPI, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 10079 /* tprot */, SystemZ::TPROT, Convert__BDAddr64Disp122_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_BDAddr64Disp12 }, },
  { 10085 /* tr */, SystemZ::TR, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 10088 /* trace */, SystemZ::TRACE, Convert__GR321_0__GR321_1__BDAddr64Disp122_2, AMFBS_None, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 10094 /* tracg */, SystemZ::TRACG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, AMFBS_None, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 10100 /* trap2 */, SystemZ::TRAP2, Convert_NoOperands, AMFBS_None, {  }, },
  { 10106 /* trap4 */, SystemZ::TRAP4, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 10112 /* tre */, SystemZ::TRE, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10116 /* troo */, SystemZ::TROOOpt, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10116 /* troo */, SystemZ::TROO, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 10121 /* trot */, SystemZ::TROTOpt, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10121 /* trot */, SystemZ::TROT, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 10126 /* trt */, SystemZ::TRT, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 10130 /* trte */, SystemZ::TRTEOpt, Convert__GR641_1__GR1281_0__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10130 /* trte */, SystemZ::TRTE, Convert__GR641_1__GR1281_0__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 10135 /* trto */, SystemZ::TRTOOpt, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10135 /* trto */, SystemZ::TRTO, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 10140 /* trtr */, SystemZ::TRTR, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 10145 /* trtre */, SystemZ::TRTREOpt, Convert__GR641_1__GR1281_0__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10145 /* trtre */, SystemZ::TRTRE, Convert__GR641_1__GR1281_0__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 10151 /* trtt */, SystemZ::TRTTOpt, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1, AMFBS_None, { MCK_GR128, MCK_GR64 }, },
  { 10151 /* trtt */, SystemZ::TRTT, Convert__GR1281_0__GR641_1__Tie0_1_1__Tie1_1_1__U4Imm1_2, AMFBS_None, { MCK_GR128, MCK_GR64, MCK_U4Imm }, },
  { 10156 /* ts */, SystemZ::TS, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 10159 /* tsch */, SystemZ::TSCH, Convert__BDAddr64Disp122_0, AMFBS_None, { MCK_BDAddr64Disp12 }, },
  { 10164 /* unpk */, SystemZ::UNPK, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
  { 10169 /* unpka */, SystemZ::UNPKA, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 10175 /* unpku */, SystemZ::UNPKU, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 10181 /* upt */, SystemZ::UPT, Convert_NoOperands, AMFBS_None, {  }, },
  { 10185 /* va */, SystemZ::VA, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10188 /* vab */, SystemZ::VAB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10192 /* vac */, SystemZ::VAC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10196 /* vacc */, SystemZ::VACC, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10201 /* vaccb */, SystemZ::VACCB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10207 /* vaccc */, SystemZ::VACCC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10213 /* vacccq */, SystemZ::VACCCQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10220 /* vaccf */, SystemZ::VACCF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10226 /* vaccg */, SystemZ::VACCG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10232 /* vacch */, SystemZ::VACCH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10238 /* vaccq */, SystemZ::VACCQ, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10244 /* vacq */, SystemZ::VACQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10249 /* vaf */, SystemZ::VAF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10253 /* vag */, SystemZ::VAG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10257 /* vah */, SystemZ::VAH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10261 /* vap */, SystemZ::VAP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 10265 /* vaq */, SystemZ::VAQ, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10269 /* vavg */, SystemZ::VAVG, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10274 /* vavgb */, SystemZ::VAVGB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10280 /* vavgf */, SystemZ::VAVGF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10286 /* vavgg */, SystemZ::VAVGG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10292 /* vavgh */, SystemZ::VAVGH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10298 /* vavgl */, SystemZ::VAVGL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10304 /* vavglb */, SystemZ::VAVGLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10311 /* vavglf */, SystemZ::VAVGLF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10318 /* vavglg */, SystemZ::VAVGLG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10325 /* vavglh */, SystemZ::VAVGLH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10332 /* vbperm */, SystemZ::VBPERM, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10339 /* vcdg */, SystemZ::VCDG, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10344 /* vcdgb */, SystemZ::VCDGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10350 /* vcdlg */, SystemZ::VCDLG, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10356 /* vcdlgb */, SystemZ::VCDLGB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10363 /* vcefb */, SystemZ::VCEFB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10369 /* vcelfb */, SystemZ::VCELFB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10376 /* vceq */, SystemZ::VCEQ, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10381 /* vceqb */, SystemZ::VCEQB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10387 /* vceqbs */, SystemZ::VCEQBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10394 /* vceqf */, SystemZ::VCEQF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10400 /* vceqfs */, SystemZ::VCEQFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10407 /* vceqg */, SystemZ::VCEQG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10413 /* vceqgs */, SystemZ::VCEQGS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10420 /* vceqh */, SystemZ::VCEQH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10426 /* vceqhs */, SystemZ::VCEQHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10433 /* vcfeb */, SystemZ::VCFEB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10439 /* vcfpl */, SystemZ::VCFPL, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10445 /* vcfps */, SystemZ::VCFPS, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10451 /* vcgd */, SystemZ::VCGD, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10456 /* vcgdb */, SystemZ::VCGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10462 /* vch */, SystemZ::VCH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10466 /* vchb */, SystemZ::VCHB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10471 /* vchbs */, SystemZ::VCHBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10477 /* vchf */, SystemZ::VCHF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10482 /* vchfs */, SystemZ::VCHFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10488 /* vchg */, SystemZ::VCHG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10493 /* vchgs */, SystemZ::VCHGS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10499 /* vchh */, SystemZ::VCHH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10504 /* vchhs */, SystemZ::VCHHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10510 /* vchl */, SystemZ::VCHL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10515 /* vchlb */, SystemZ::VCHLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10521 /* vchlbs */, SystemZ::VCHLBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10528 /* vchlf */, SystemZ::VCHLF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10534 /* vchlfs */, SystemZ::VCHLFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10541 /* vchlg */, SystemZ::VCHLG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10547 /* vchlgs */, SystemZ::VCHLGS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10554 /* vchlh */, SystemZ::VCHLH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10560 /* vchlhs */, SystemZ::VCHLHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10567 /* vcksm */, SystemZ::VCKSM, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10573 /* vclfeb */, SystemZ::VCLFEB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10580 /* vclfp */, SystemZ::VCLFP, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10586 /* vclgd */, SystemZ::VCLGD, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10592 /* vclgdb */, SystemZ::VCLGDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10599 /* vclz */, SystemZ::VCLZ, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10604 /* vclzb */, SystemZ::VCLZB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10610 /* vclzf */, SystemZ::VCLZF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10616 /* vclzg */, SystemZ::VCLZG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10622 /* vclzh */, SystemZ::VCLZH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10628 /* vcp */, SystemZ::VCP, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10632 /* vcsfp */, SystemZ::VCSFP, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 10638 /* vctz */, SystemZ::VCTZ, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10643 /* vctzb */, SystemZ::VCTZB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10649 /* vctzf */, SystemZ::VCTZF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10655 /* vctzg */, SystemZ::VCTZG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10661 /* vctzh */, SystemZ::VCTZH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10667 /* vcvb */, SystemZ::VCVB, Convert__GR321_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_GR32, MCK_VR128, MCK_U4Imm }, },
  { 10667 /* vcvb */, SystemZ::VCVBOpt, Convert__GR321_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorPackedDecimalEnhancement, { MCK_GR32, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10672 /* vcvbg */, SystemZ::VCVBG, Convert__GR641_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_GR64, MCK_VR128, MCK_U4Imm }, },
  { 10672 /* vcvbg */, SystemZ::VCVBGOpt, Convert__GR641_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorPackedDecimalEnhancement, { MCK_GR64, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 10678 /* vcvd */, SystemZ::VCVD, Convert__VR1281_0__GR321_1__U8Imm1_2__U4Imm1_3, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_GR32, MCK_U8Imm, MCK_U4Imm }, },
  { 10683 /* vcvdg */, SystemZ::VCVDG, Convert__VR1281_0__GR641_1__U8Imm1_2__U4Imm1_3, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_GR64, MCK_U8Imm, MCK_U4Imm }, },
  { 10689 /* vdp */, SystemZ::VDP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 10693 /* vec */, SystemZ::VEC, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10697 /* vecb */, SystemZ::VECB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10702 /* vecf */, SystemZ::VECF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10707 /* vecg */, SystemZ::VECG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10712 /* vech */, SystemZ::VECH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10717 /* vecl */, SystemZ::VECL, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10722 /* veclb */, SystemZ::VECLB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10728 /* veclf */, SystemZ::VECLF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10734 /* veclg */, SystemZ::VECLG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10740 /* veclh */, SystemZ::VECLH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 10746 /* verim */, SystemZ::VERIM, Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 10752 /* verimb */, SystemZ::VERIMB, Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 10759 /* verimf */, SystemZ::VERIMF, Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 10766 /* verimg */, SystemZ::VERIMG, Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 10773 /* verimh */, SystemZ::VERIMH, Convert__VR1281_0__Tie0_1_1__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 10780 /* verll */, SystemZ::VERLL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10786 /* verllb */, SystemZ::VERLLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10793 /* verllf */, SystemZ::VERLLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10800 /* verllg */, SystemZ::VERLLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10807 /* verllh */, SystemZ::VERLLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10814 /* verllv */, SystemZ::VERLLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10821 /* verllvb */, SystemZ::VERLLVB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10829 /* verllvf */, SystemZ::VERLLVF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10837 /* verllvg */, SystemZ::VERLLVG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10845 /* verllvh */, SystemZ::VERLLVH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10853 /* vesl */, SystemZ::VESL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10858 /* veslb */, SystemZ::VESLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10864 /* veslf */, SystemZ::VESLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10870 /* veslg */, SystemZ::VESLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10876 /* veslh */, SystemZ::VESLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10882 /* veslv */, SystemZ::VESLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10888 /* veslvb */, SystemZ::VESLVB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10895 /* veslvf */, SystemZ::VESLVF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10902 /* veslvg */, SystemZ::VESLVG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10909 /* veslvh */, SystemZ::VESLVH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10916 /* vesra */, SystemZ::VESRA, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10922 /* vesrab */, SystemZ::VESRAB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10929 /* vesraf */, SystemZ::VESRAF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10936 /* vesrag */, SystemZ::VESRAG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10943 /* vesrah */, SystemZ::VESRAH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 10950 /* vesrav */, SystemZ::VESRAV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 10957 /* vesravb */, SystemZ::VESRAVB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10965 /* vesravf */, SystemZ::VESRAVF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10973 /* vesravg */, SystemZ::VESRAVG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10981 /* vesravh */, SystemZ::VESRAVH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 10989 /* vesrl */, SystemZ::VESRL, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 10995 /* vesrlb */, SystemZ::VESRLB, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 11002 /* vesrlf */, SystemZ::VESRLF, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 11009 /* vesrlg */, SystemZ::VESRLG, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 11016 /* vesrlh */, SystemZ::VESRLH, Convert__VR1281_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 11023 /* vesrlv */, SystemZ::VESRLV, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11030 /* vesrlvb */, SystemZ::VESRLVB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11038 /* vesrlvf */, SystemZ::VESRLVF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11046 /* vesrlvg */, SystemZ::VESRLVG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11054 /* vesrlvh */, SystemZ::VESRLVH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11062 /* vfa */, SystemZ::VFA, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11066 /* vfadb */, SystemZ::VFADB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11072 /* vfae */, SystemZ::VFAE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11072 /* vfae */, SystemZ::VFAE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11077 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11077 /* vfaeb */, SystemZ::VFAEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11083 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11083 /* vfaebs */, SystemZ::VFAEBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11090 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11090 /* vfaef */, SystemZ::VFAEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11096 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11096 /* vfaefs */, SystemZ::VFAEFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11103 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11103 /* vfaeh */, SystemZ::VFAEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11109 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11109 /* vfaehs */, SystemZ::VFAEHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11116 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11116 /* vfaezb */, SystemZ::VFAEZB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11123 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11123 /* vfaezbs */, SystemZ::VFAEZBS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11131 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11131 /* vfaezf */, SystemZ::VFAEZF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11138 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11138 /* vfaezfs */, SystemZ::VFAEZFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11146 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11146 /* vfaezh */, SystemZ::VFAEZH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11153 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11153 /* vfaezhs */, SystemZ::VFAEZHS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11161 /* vfasb */, SystemZ::VFASB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11167 /* vfce */, SystemZ::VFCE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11172 /* vfcedb */, SystemZ::VFCEDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11179 /* vfcedbs */, SystemZ::VFCEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11187 /* vfcesb */, SystemZ::VFCESB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11194 /* vfcesbs */, SystemZ::VFCESBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11202 /* vfch */, SystemZ::VFCH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11207 /* vfchdb */, SystemZ::VFCHDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11214 /* vfchdbs */, SystemZ::VFCHDBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11222 /* vfche */, SystemZ::VFCHE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11228 /* vfchedb */, SystemZ::VFCHEDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11236 /* vfchedbs */, SystemZ::VFCHEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11245 /* vfchesb */, SystemZ::VFCHESB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11253 /* vfchesbs */, SystemZ::VFCHESBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11262 /* vfchsb */, SystemZ::VFCHSB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11269 /* vfchsbs */, SystemZ::VFCHSBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11277 /* vfd */, SystemZ::VFD, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11281 /* vfddb */, SystemZ::VFDDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11287 /* vfdsb */, SystemZ::VFDSB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11293 /* vfee */, SystemZ::VFEE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11293 /* vfee */, SystemZ::VFEE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11298 /* vfeeb */, SystemZ::VFEEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11298 /* vfeeb */, SystemZ::VFEEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11304 /* vfeebs */, SystemZ::VFEEBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11311 /* vfeef */, SystemZ::VFEEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11311 /* vfeef */, SystemZ::VFEEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11317 /* vfeefs */, SystemZ::VFEEFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11324 /* vfeeh */, SystemZ::VFEEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11324 /* vfeeh */, SystemZ::VFEEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11330 /* vfeehs */, SystemZ::VFEEHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11337 /* vfeezb */, SystemZ::VFEEZB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11344 /* vfeezbs */, SystemZ::VFEEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11352 /* vfeezf */, SystemZ::VFEEZF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11359 /* vfeezfs */, SystemZ::VFEEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11367 /* vfeezh */, SystemZ::VFEEZH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11374 /* vfeezhs */, SystemZ::VFEEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11382 /* vfene */, SystemZ::VFENE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11382 /* vfene */, SystemZ::VFENE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11388 /* vfeneb */, SystemZ::VFENEB, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11388 /* vfeneb */, SystemZ::VFENEB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11395 /* vfenebs */, SystemZ::VFENEBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11403 /* vfenef */, SystemZ::VFENEF, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11403 /* vfenef */, SystemZ::VFENEF, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11410 /* vfenefs */, SystemZ::VFENEFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11418 /* vfeneh */, SystemZ::VFENEH, Convert__VR1281_0__VR1281_1__VR1281_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11418 /* vfeneh */, SystemZ::VFENEH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11425 /* vfenehs */, SystemZ::VFENEHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11433 /* vfenezb */, SystemZ::VFENEZB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11441 /* vfenezbs */, SystemZ::VFENEZBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11450 /* vfenezf */, SystemZ::VFENEZF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11458 /* vfenezfs */, SystemZ::VFENEZFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11467 /* vfenezh */, SystemZ::VFENEZH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11475 /* vfenezhs */, SystemZ::VFENEZHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11484 /* vfi */, SystemZ::VFI, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11488 /* vfidb */, SystemZ::VFIDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11494 /* vfisb */, SystemZ::VFISB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11500 /* vfkedb */, SystemZ::VFKEDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11507 /* vfkedbs */, SystemZ::VFKEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11515 /* vfkesb */, SystemZ::VFKESB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11522 /* vfkesbs */, SystemZ::VFKESBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11530 /* vfkhdb */, SystemZ::VFKHDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11537 /* vfkhdbs */, SystemZ::VFKHDBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11545 /* vfkhedb */, SystemZ::VFKHEDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11553 /* vfkhedbs */, SystemZ::VFKHEDBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11562 /* vfkhesb */, SystemZ::VFKHESB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11570 /* vfkhesbs */, SystemZ::VFKHESBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11579 /* vfkhsb */, SystemZ::VFKHSB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11586 /* vfkhsbs */, SystemZ::VFKHSBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11594 /* vflcdb */, SystemZ::VFLCDB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11601 /* vflcsb */, SystemZ::VFLCSB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 11608 /* vfll */, SystemZ::VFLL, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11613 /* vflls */, SystemZ::VFLLS, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 11619 /* vflndb */, SystemZ::VFLNDB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11626 /* vflnsb */, SystemZ::VFLNSB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 11633 /* vflpdb */, SystemZ::VFLPDB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11640 /* vflpsb */, SystemZ::VFLPSB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 11647 /* vflr */, SystemZ::VFLR, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11652 /* vflrd */, SystemZ::VFLRD, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11658 /* vfm */, SystemZ::VFM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11662 /* vfma */, SystemZ::VFMA, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11667 /* vfmadb */, SystemZ::VFMADB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11674 /* vfmasb */, SystemZ::VFMASB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11681 /* vfmax */, SystemZ::VFMAX, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11687 /* vfmaxdb */, SystemZ::VFMAXDB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11695 /* vfmaxsb */, SystemZ::VFMAXSB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11703 /* vfmdb */, SystemZ::VFMDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11709 /* vfmin */, SystemZ::VFMIN, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11715 /* vfmindb */, SystemZ::VFMINDB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11723 /* vfminsb */, SystemZ::VFMINSB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11731 /* vfms */, SystemZ::VFMS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11736 /* vfmsb */, SystemZ::VFMSB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11742 /* vfmsdb */, SystemZ::VFMSDB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11749 /* vfmssb */, SystemZ::VFMSSB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11756 /* vfnma */, SystemZ::VFNMA, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11762 /* vfnmadb */, SystemZ::VFNMADB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11770 /* vfnmasb */, SystemZ::VFNMASB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11778 /* vfnms */, SystemZ::VFNMS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11784 /* vfnmsdb */, SystemZ::VFNMSDB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11792 /* vfnmssb */, SystemZ::VFNMSSB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11800 /* vfpso */, SystemZ::VFPSO, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11806 /* vfpsodb */, SystemZ::VFPSODB, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11814 /* vfpsosb */, SystemZ::VFPSOSB, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11822 /* vfs */, SystemZ::VFS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11826 /* vfsdb */, SystemZ::VFSDB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11832 /* vfsq */, SystemZ::VFSQ, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11837 /* vfsqdb */, SystemZ::VFSQDB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11844 /* vfsqsb */, SystemZ::VFSQSB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 11851 /* vfssb */, SystemZ::VFSSB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11857 /* vftci */, SystemZ::VFTCI, Convert__VR1281_0__VR1281_1__U12Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U12Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 11863 /* vftcidb */, SystemZ::VFTCIDB, Convert__VR1281_0__VR1281_1__U12Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U12Imm }, },
  { 11871 /* vftcisb */, SystemZ::VFTCISB, Convert__VR1281_0__VR1281_1__U12Imm1_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U12Imm }, },
  { 11879 /* vgbm */, SystemZ::VGBM, Convert__VR1281_0__U16Imm1_1, AMFBS_FeatureVector, { MCK_VR128, MCK_U16Imm }, },
  { 11884 /* vgef */, SystemZ::VGEF, Convert__VR1281_0__Tie0_1_1__BDVAddr64Disp123_1__U2Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 11889 /* vgeg */, SystemZ::VGEG, Convert__VR1281_0__Tie0_1_1__BDVAddr64Disp123_1__U1Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 11894 /* vgfm */, SystemZ::VGFM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11899 /* vgfma */, SystemZ::VGFMA, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11905 /* vgfmab */, SystemZ::VGFMAB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11912 /* vgfmaf */, SystemZ::VGFMAF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11919 /* vgfmag */, SystemZ::VGFMAG, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11926 /* vgfmah */, SystemZ::VGFMAH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11933 /* vgfmb */, SystemZ::VGFMB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11939 /* vgfmf */, SystemZ::VGFMF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11945 /* vgfmg */, SystemZ::VGFMG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11951 /* vgfmh */, SystemZ::VGFMH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 11957 /* vgm */, SystemZ::VGM, Convert__VR1281_0__U8Imm1_1__U8Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm, MCK_U4Imm }, },
  { 11961 /* vgmb */, SystemZ::VGMB, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 11966 /* vgmf */, SystemZ::VGMF, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 11971 /* vgmg */, SystemZ::VGMG, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 11976 /* vgmh */, SystemZ::VGMH, Convert__VR1281_0__U8Imm1_1__U8Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_U8Imm, MCK_U8Imm }, },
  { 11981 /* vistr */, SystemZ::VISTR, Convert__VR1281_0__VR1281_1__U4Imm1_2__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11981 /* vistr */, SystemZ::VISTR, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 11987 /* vistrb */, SystemZ::VISTRB, Convert__VR1281_0__VR1281_1__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 11987 /* vistrb */, SystemZ::VISTRB, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 11994 /* vistrbs */, SystemZ::VISTRBS, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12002 /* vistrf */, SystemZ::VISTRF, Convert__VR1281_0__VR1281_1__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12002 /* vistrf */, SystemZ::VISTRF, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12009 /* vistrfs */, SystemZ::VISTRFS, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12017 /* vistrh */, SystemZ::VISTRH, Convert__VR1281_0__VR1281_1__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12017 /* vistrh */, SystemZ::VISTRH, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12024 /* vistrhs */, SystemZ::VISTRHS, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12032 /* vl */, SystemZ::VL, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12032 /* vl */, SystemZ::VLAlign, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12035 /* vlbb */, SystemZ::VLBB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12040 /* vlbr */, SystemZ::VLBR, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12045 /* vlbrf */, SystemZ::VLBRF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12051 /* vlbrg */, SystemZ::VLBRG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12057 /* vlbrh */, SystemZ::VLBRH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12063 /* vlbrq */, SystemZ::VLBRQ, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12069 /* vlbrrep */, SystemZ::VLBRREP, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12077 /* vlbrrepf */, SystemZ::VLBRREPF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12086 /* vlbrrepg */, SystemZ::VLBRREPG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12095 /* vlbrreph */, SystemZ::VLBRREPH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12104 /* vlc */, SystemZ::VLC, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12108 /* vlcb */, SystemZ::VLCB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12113 /* vlcf */, SystemZ::VLCF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12118 /* vlcg */, SystemZ::VLCG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12123 /* vlch */, SystemZ::VLCH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12128 /* vlde */, SystemZ::VLDE, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 12133 /* vldeb */, SystemZ::VLDEB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12139 /* vleb */, SystemZ::VLEB, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12144 /* vlebrf */, SystemZ::VLEBRF, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U2Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 12151 /* vlebrg */, SystemZ::VLEBRG, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U1Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 12158 /* vlebrh */, SystemZ::VLEBRH, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U3Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 12165 /* vled */, SystemZ::VLED, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm, MCK_U4Imm }, },
  { 12170 /* vledb */, SystemZ::VLEDB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 12176 /* vlef */, SystemZ::VLEF, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U2Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 12181 /* vleg */, SystemZ::VLEG, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U1Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 12186 /* vleh */, SystemZ::VLEH, Convert__VR1281_0__Tie0_1_1__BDXAddr64Disp123_1__U3Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 12191 /* vleib */, SystemZ::VLEIB, Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U4Imm }, },
  { 12197 /* vleif */, SystemZ::VLEIF, Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U2Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U2Imm }, },
  { 12203 /* vleig */, SystemZ::VLEIG, Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U1Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U1Imm }, },
  { 12209 /* vleih */, SystemZ::VLEIH, Convert__VR1281_0__Tie0_1_1__S16Imm1_1__U3Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U3Imm }, },
  { 12215 /* vler */, SystemZ::VLER, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12220 /* vlerf */, SystemZ::VLERF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12226 /* vlerg */, SystemZ::VLERG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12232 /* vlerh */, SystemZ::VLERH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12238 /* vlgv */, SystemZ::VLGV, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 12243 /* vlgvb */, SystemZ::VLGVB, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 12249 /* vlgvf */, SystemZ::VLGVF, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 12255 /* vlgvg */, SystemZ::VLGVG, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 12261 /* vlgvh */, SystemZ::VLGVH, Convert__GR641_0__VR1281_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_GR64, MCK_VR128, MCK_BDAddr32Disp12 }, },
  { 12267 /* vlip */, SystemZ::VLIP, Convert__VR1281_0__U16Imm1_1__U4Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_U16Imm, MCK_U4Imm }, },
  { 12272 /* vll */, SystemZ::VLL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 12276 /* vllebrz */, SystemZ::VLLEBRZ, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12284 /* vllebrze */, SystemZ::VLLEBRZE, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12293 /* vllebrzf */, SystemZ::VLLEBRZF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12302 /* vllebrzg */, SystemZ::VLLEBRZG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12311 /* vllebrzh */, SystemZ::VLLEBRZH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12320 /* vllez */, SystemZ::VLLEZ, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12326 /* vllezb */, SystemZ::VLLEZB, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12333 /* vllezf */, SystemZ::VLLEZF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12340 /* vllezg */, SystemZ::VLLEZG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12347 /* vllezh */, SystemZ::VLLEZH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12354 /* vllezlf */, SystemZ::VLLEZLF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12362 /* vlm */, SystemZ::VLM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 12362 /* vlm */, SystemZ::VLMAlign, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12, MCK_U4Imm }, },
  { 12366 /* vlp */, SystemZ::VLP, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12370 /* vlpb */, SystemZ::VLPB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12375 /* vlpf */, SystemZ::VLPF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12380 /* vlpg */, SystemZ::VLPG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12385 /* vlph */, SystemZ::VLPH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12390 /* vlr */, SystemZ::VLR, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12394 /* vlrep */, SystemZ::VLREP, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 12400 /* vlrepb */, SystemZ::VLREPB, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12407 /* vlrepf */, SystemZ::VLREPF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12414 /* vlrepg */, SystemZ::VLREPG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12421 /* vlreph */, SystemZ::VLREPH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 12428 /* vlrl */, SystemZ::VLRL, Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 12433 /* vlrlr */, SystemZ::VLRLR, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 12439 /* vlvg */, SystemZ::VLVG, Convert__VR1281_0__Tie0_1_1__GR641_1__BDAddr32Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_GR64, MCK_BDAddr32Disp12, MCK_U4Imm }, },
  { 12444 /* vlvgb */, SystemZ::VLVGB, Convert__VR1281_0__Tie0_1_1__GR321_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 12450 /* vlvgf */, SystemZ::VLVGF, Convert__VR1281_0__Tie0_1_1__GR321_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 12456 /* vlvgg */, SystemZ::VLVGG, Convert__VR1281_0__Tie0_1_1__GR641_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR64, MCK_BDAddr32Disp12 }, },
  { 12462 /* vlvgh */, SystemZ::VLVGH, Convert__VR1281_0__Tie0_1_1__GR321_1__BDAddr32Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 12468 /* vlvgp */, SystemZ::VLVGP, Convert__VR1281_0__GR641_1__GR641_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR64, MCK_GR64 }, },
  { 12474 /* vmae */, SystemZ::VMAE, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12479 /* vmaeb */, SystemZ::VMAEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12485 /* vmaef */, SystemZ::VMAEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12491 /* vmaeh */, SystemZ::VMAEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12497 /* vmah */, SystemZ::VMAH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12502 /* vmahb */, SystemZ::VMAHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12508 /* vmahf */, SystemZ::VMAHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12514 /* vmahh */, SystemZ::VMAHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12520 /* vmal */, SystemZ::VMAL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12525 /* vmalb */, SystemZ::VMALB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12531 /* vmale */, SystemZ::VMALE, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12537 /* vmaleb */, SystemZ::VMALEB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12544 /* vmalef */, SystemZ::VMALEF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12551 /* vmaleh */, SystemZ::VMALEH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12558 /* vmalf */, SystemZ::VMALF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12564 /* vmalh */, SystemZ::VMALH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12570 /* vmalhb */, SystemZ::VMALHB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12577 /* vmalhf */, SystemZ::VMALHF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12584 /* vmalhh */, SystemZ::VMALHH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12591 /* vmalhw */, SystemZ::VMALHW, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12598 /* vmalo */, SystemZ::VMALO, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12604 /* vmalob */, SystemZ::VMALOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12611 /* vmalof */, SystemZ::VMALOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12618 /* vmaloh */, SystemZ::VMALOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12625 /* vmao */, SystemZ::VMAO, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12630 /* vmaob */, SystemZ::VMAOB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12636 /* vmaof */, SystemZ::VMAOF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12642 /* vmaoh */, SystemZ::VMAOH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12648 /* vme */, SystemZ::VME, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12652 /* vmeb */, SystemZ::VMEB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12657 /* vmef */, SystemZ::VMEF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12662 /* vmeh */, SystemZ::VMEH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12667 /* vmh */, SystemZ::VMH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12671 /* vmhb */, SystemZ::VMHB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12676 /* vmhf */, SystemZ::VMHF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12681 /* vmhh */, SystemZ::VMHH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12686 /* vml */, SystemZ::VML, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12690 /* vmlb */, SystemZ::VMLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12695 /* vmle */, SystemZ::VMLE, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12700 /* vmleb */, SystemZ::VMLEB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12706 /* vmlef */, SystemZ::VMLEF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12712 /* vmleh */, SystemZ::VMLEH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12718 /* vmlf */, SystemZ::VMLF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12723 /* vmlh */, SystemZ::VMLH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12728 /* vmlhb */, SystemZ::VMLHB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12734 /* vmlhf */, SystemZ::VMLHF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12740 /* vmlhh */, SystemZ::VMLHH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12746 /* vmlhw */, SystemZ::VMLHW, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12752 /* vmlo */, SystemZ::VMLO, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12757 /* vmlob */, SystemZ::VMLOB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12763 /* vmlof */, SystemZ::VMLOF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12769 /* vmloh */, SystemZ::VMLOH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12775 /* vmn */, SystemZ::VMN, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12779 /* vmnb */, SystemZ::VMNB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12784 /* vmnf */, SystemZ::VMNF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12789 /* vmng */, SystemZ::VMNG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12794 /* vmnh */, SystemZ::VMNH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12799 /* vmnl */, SystemZ::VMNL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12804 /* vmnlb */, SystemZ::VMNLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12810 /* vmnlf */, SystemZ::VMNLF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12816 /* vmnlg */, SystemZ::VMNLG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12822 /* vmnlh */, SystemZ::VMNLH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12828 /* vmo */, SystemZ::VMO, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12832 /* vmob */, SystemZ::VMOB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12837 /* vmof */, SystemZ::VMOF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12842 /* vmoh */, SystemZ::VMOH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12847 /* vmp */, SystemZ::VMP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 12851 /* vmrh */, SystemZ::VMRH, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12856 /* vmrhb */, SystemZ::VMRHB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12862 /* vmrhf */, SystemZ::VMRHF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12868 /* vmrhg */, SystemZ::VMRHG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12874 /* vmrhh */, SystemZ::VMRHH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12880 /* vmrl */, SystemZ::VMRL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12885 /* vmrlb */, SystemZ::VMRLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12891 /* vmrlf */, SystemZ::VMRLF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12897 /* vmrlg */, SystemZ::VMRLG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12903 /* vmrlh */, SystemZ::VMRLH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12909 /* vmsl */, SystemZ::VMSL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 12914 /* vmslg */, SystemZ::VMSLG, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12920 /* vmsp */, SystemZ::VMSP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 12925 /* vmx */, SystemZ::VMX, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12929 /* vmxb */, SystemZ::VMXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12934 /* vmxf */, SystemZ::VMXF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12939 /* vmxg */, SystemZ::VMXG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12944 /* vmxh */, SystemZ::VMXH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12949 /* vmxl */, SystemZ::VMXL, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 12954 /* vmxlb */, SystemZ::VMXLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12960 /* vmxlf */, SystemZ::VMXLF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12966 /* vmxlg */, SystemZ::VMXLG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12972 /* vmxlh */, SystemZ::VMXLH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12978 /* vn */, SystemZ::VN, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12981 /* vnc */, SystemZ::VNC, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12985 /* vnn */, SystemZ::VNN, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12989 /* vno */, SystemZ::VNO, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 12993 /* vnot */, SystemZ::VNO, Convert__VR1281_0__VR1281_1__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 12998 /* vnx */, SystemZ::VNX, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13002 /* vo */, SystemZ::VO, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13005 /* voc */, SystemZ::VOC, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13009 /* vone */, SystemZ::VONE, Convert__VR1281_0, AMFBS_FeatureVector, { MCK_VR128 }, },
  { 13014 /* vpdi */, SystemZ::VPDI, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13019 /* vperm */, SystemZ::VPERM, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13025 /* vpk */, SystemZ::VPK, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13029 /* vpkf */, SystemZ::VPKF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13034 /* vpkg */, SystemZ::VPKG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13039 /* vpkh */, SystemZ::VPKH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13044 /* vpkls */, SystemZ::VPKLS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 13050 /* vpklsf */, SystemZ::VPKLSF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13057 /* vpklsfs */, SystemZ::VPKLSFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13065 /* vpklsg */, SystemZ::VPKLSG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13072 /* vpklsgs */, SystemZ::VPKLSGS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13080 /* vpklsh */, SystemZ::VPKLSH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13087 /* vpklshs */, SystemZ::VPKLSHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13095 /* vpks */, SystemZ::VPKS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 13100 /* vpksf */, SystemZ::VPKSF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13106 /* vpksfs */, SystemZ::VPKSFS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13113 /* vpksg */, SystemZ::VPKSG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13119 /* vpksgs */, SystemZ::VPKSGS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13126 /* vpksh */, SystemZ::VPKSH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13132 /* vpkshs */, SystemZ::VPKSHS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13139 /* vpkz */, SystemZ::VPKZ, Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 13144 /* vpopct */, SystemZ::VPOPCT, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13151 /* vpopctb */, SystemZ::VPOPCTB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13159 /* vpopctf */, SystemZ::VPOPCTF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13167 /* vpopctg */, SystemZ::VPOPCTG, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13175 /* vpopcth */, SystemZ::VPOPCTH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 13183 /* vpsop */, SystemZ::VPSOP, Convert__VR1281_0__VR1281_1__U8Imm1_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U8Imm, MCK_U4Imm }, },
  { 13189 /* vrep */, SystemZ::VREP, Convert__VR1281_0__VR1281_1__U16Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm, MCK_U4Imm }, },
  { 13194 /* vrepb */, SystemZ::VREPB, Convert__VR1281_0__VR1281_1__U16Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 13200 /* vrepf */, SystemZ::VREPF, Convert__VR1281_0__VR1281_1__U16Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 13206 /* vrepg */, SystemZ::VREPG, Convert__VR1281_0__VR1281_1__U16Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 13212 /* vreph */, SystemZ::VREPH, Convert__VR1281_0__VR1281_1__U16Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U16Imm }, },
  { 13218 /* vrepi */, SystemZ::VREPI, Convert__VR1281_0__S16Imm1_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm, MCK_U4Imm }, },
  { 13224 /* vrepib */, SystemZ::VREPIB, Convert__VR1281_0__S16Imm1_1, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 13231 /* vrepif */, SystemZ::VREPIF, Convert__VR1281_0__S16Imm1_1, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 13238 /* vrepig */, SystemZ::VREPIG, Convert__VR1281_0__S16Imm1_1, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 13245 /* vrepih */, SystemZ::VREPIH, Convert__VR1281_0__S16Imm1_1, AMFBS_FeatureVector, { MCK_VR128, MCK_S16Imm }, },
  { 13252 /* vrp */, SystemZ::VRP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 13256 /* vs */, SystemZ::VS, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13259 /* vsb */, SystemZ::VSB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13263 /* vsbcbi */, SystemZ::VSBCBI, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13270 /* vsbcbiq */, SystemZ::VSBCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13278 /* vsbi */, SystemZ::VSBI, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13283 /* vsbiq */, SystemZ::VSBIQ, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13289 /* vscbi */, SystemZ::VSCBI, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13295 /* vscbib */, SystemZ::VSCBIB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13302 /* vscbif */, SystemZ::VSCBIF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13309 /* vscbig */, SystemZ::VSCBIG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13316 /* vscbih */, SystemZ::VSCBIH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13323 /* vscbiq */, SystemZ::VSCBIQ, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13330 /* vscef */, SystemZ::VSCEF, Convert__VR1281_0__BDVAddr64Disp123_1__U2Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U2Imm }, },
  { 13336 /* vsceg */, SystemZ::VSCEG, Convert__VR1281_0__BDVAddr64Disp123_1__U1Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDVAddr64Disp12, MCK_U1Imm }, },
  { 13342 /* vsdp */, SystemZ::VSDP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 13347 /* vseg */, SystemZ::VSEG, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13352 /* vsegb */, SystemZ::VSEGB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13358 /* vsegf */, SystemZ::VSEGF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13364 /* vsegh */, SystemZ::VSEGH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13370 /* vsel */, SystemZ::VSEL, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13375 /* vsf */, SystemZ::VSF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13379 /* vsg */, SystemZ::VSG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13383 /* vsh */, SystemZ::VSH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13387 /* vsl */, SystemZ::VSL, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13391 /* vslb */, SystemZ::VSLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13396 /* vsld */, SystemZ::VSLD, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 13401 /* vsldb */, SystemZ::VSLDB, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 13407 /* vsp */, SystemZ::VSP, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U4Imm }, },
  { 13411 /* vsq */, SystemZ::VSQ, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13415 /* vsra */, SystemZ::VSRA, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13420 /* vsrab */, SystemZ::VSRAB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13426 /* vsrd */, SystemZ::VSRD, Convert__VR1281_0__VR1281_1__VR1281_2__U8Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U8Imm }, },
  { 13431 /* vsrl */, SystemZ::VSRL, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13436 /* vsrlb */, SystemZ::VSRLB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13442 /* vsrp */, SystemZ::VSRP, Convert__VR1281_0__VR1281_1__U8Imm1_2__U8Imm1_3__U4Imm1_4, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_VR128, MCK_U8Imm, MCK_U8Imm, MCK_U4Imm }, },
  { 13447 /* vst */, SystemZ::VST, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13447 /* vst */, SystemZ::VSTAlign, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 13451 /* vstbr */, SystemZ::VSTBR, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 13457 /* vstbrf */, SystemZ::VSTBRF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13464 /* vstbrg */, SystemZ::VSTBRG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13471 /* vstbrh */, SystemZ::VSTBRH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13478 /* vstbrq */, SystemZ::VSTBRQ, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13485 /* vsteb */, SystemZ::VSTEB, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 13491 /* vstebrf */, SystemZ::VSTEBRF, Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 13499 /* vstebrg */, SystemZ::VSTEBRG, Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 13507 /* vstebrh */, SystemZ::VSTEBRH, Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 13515 /* vstef */, SystemZ::VSTEF, Convert__VR1281_0__BDXAddr64Disp123_1__U2Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U2Imm }, },
  { 13521 /* vsteg */, SystemZ::VSTEG, Convert__VR1281_0__BDXAddr64Disp123_1__U1Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U1Imm }, },
  { 13527 /* vsteh */, SystemZ::VSTEH, Convert__VR1281_0__BDXAddr64Disp123_1__U3Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U3Imm }, },
  { 13533 /* vster */, SystemZ::VSTER, Convert__VR1281_0__BDXAddr64Disp123_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12, MCK_U4Imm }, },
  { 13539 /* vsterf */, SystemZ::VSTERF, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13546 /* vsterg */, SystemZ::VSTERG, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13553 /* vsterh */, SystemZ::VSTERH, Convert__VR1281_0__BDXAddr64Disp123_1, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_BDXAddr64Disp12 }, },
  { 13560 /* vstl */, SystemZ::VSTL, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 13565 /* vstm */, SystemZ::VSTM, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12 }, },
  { 13565 /* vstm */, SystemZ::VSTMAlign, Convert__VR1281_0__VR1281_1__BDAddr64Disp122_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_BDAddr64Disp12, MCK_U4Imm }, },
  { 13570 /* vstrc */, SystemZ::VSTRC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13570 /* vstrc */, SystemZ::VSTRC, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 13576 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13576 /* vstrcb */, SystemZ::VSTRCB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13583 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13583 /* vstrcbs */, SystemZ::VSTRCBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13591 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13591 /* vstrcf */, SystemZ::VSTRCF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13598 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13598 /* vstrcfs */, SystemZ::VSTRCFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13606 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13606 /* vstrch */, SystemZ::VSTRCH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13613 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13613 /* vstrchs */, SystemZ::VSTRCHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13621 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13621 /* vstrczb */, SystemZ::VSTRCZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13629 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13629 /* vstrczbs */, SystemZ::VSTRCZBS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13638 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13638 /* vstrczf */, SystemZ::VSTRCZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13646 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13646 /* vstrczfs */, SystemZ::VSTRCZFS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13655 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13655 /* vstrczh */, SystemZ::VSTRCZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13663 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13663 /* vstrczhs */, SystemZ::VSTRCZHS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13672 /* vstrl */, SystemZ::VSTRL, Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 13678 /* vstrlr */, SystemZ::VSTRLR, Convert__VR1281_0__GR321_1__BDAddr64Disp122_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 13685 /* vstrs */, SystemZ::VSTRS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__imm_95_0, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13685 /* vstrs */, SystemZ::VSTRS, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4__U4Imm1_5, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 13691 /* vstrsb */, SystemZ::VSTRSB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13691 /* vstrsb */, SystemZ::VSTRSB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13698 /* vstrsf */, SystemZ::VSTRSF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13698 /* vstrsf */, SystemZ::VSTRSF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13705 /* vstrsh */, SystemZ::VSTRSH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__imm_95_0, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13705 /* vstrsh */, SystemZ::VSTRSH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3__U4Imm1_4, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13712 /* vstrszb */, SystemZ::VSTRSZB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13720 /* vstrszf */, SystemZ::VSTRSZF, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13728 /* vstrszh */, SystemZ::VSTRSZH, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13736 /* vsum */, SystemZ::VSUM, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13741 /* vsumb */, SystemZ::VSUMB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13747 /* vsumg */, SystemZ::VSUMG, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13753 /* vsumgf */, SystemZ::VSUMGF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13760 /* vsumgh */, SystemZ::VSUMGH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13767 /* vsumh */, SystemZ::VSUMH, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13773 /* vsumq */, SystemZ::VSUMQ, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13779 /* vsumqf */, SystemZ::VSUMQF, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13786 /* vsumqg */, SystemZ::VSUMQG, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13793 /* vtm */, SystemZ::VTM, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13797 /* vtp */, SystemZ::VTP, Convert__VR1281_0, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128 }, },
  { 13801 /* vuph */, SystemZ::VUPH, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13806 /* vuphb */, SystemZ::VUPHB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13812 /* vuphf */, SystemZ::VUPHF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13818 /* vuphh */, SystemZ::VUPHH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13824 /* vupkz */, SystemZ::VUPKZ, Convert__VR1281_0__BDAddr64Disp122_1__U8Imm1_2, AMFBS_FeatureVectorPackedDecimal, { MCK_VR128, MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 13830 /* vupl */, SystemZ::VUPL, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13835 /* vuplb */, SystemZ::VUPLB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13841 /* vuplf */, SystemZ::VUPLF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13847 /* vuplh */, SystemZ::VUPLH, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13853 /* vuplhb */, SystemZ::VUPLHB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13860 /* vuplhf */, SystemZ::VUPLHF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13867 /* vuplhh */, SystemZ::VUPLHH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13874 /* vuplhw */, SystemZ::VUPLHW, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13881 /* vupll */, SystemZ::VUPLL, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 13887 /* vupllb */, SystemZ::VUPLLB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13894 /* vupllf */, SystemZ::VUPLLF, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13901 /* vupllh */, SystemZ::VUPLLH, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128 }, },
  { 13908 /* vx */, SystemZ::VX, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVector, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13911 /* vzero */, SystemZ::VZERO, Convert__VR1281_0, AMFBS_FeatureVector, { MCK_VR128 }, },
  { 13917 /* wcdgb */, SystemZ::WCDGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13923 /* wcdlgb */, SystemZ::WCDLGB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13930 /* wcefb */, SystemZ::WCEFB, Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR32, MCK_VR32, MCK_U4Imm, MCK_U4Imm }, },
  { 13936 /* wcelfb */, SystemZ::WCELFB, Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR32, MCK_VR32, MCK_U4Imm, MCK_U4Imm }, },
  { 13943 /* wcfeb */, SystemZ::WCFEB, Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR32, MCK_VR32, MCK_U4Imm, MCK_U4Imm }, },
  { 13949 /* wcgdb */, SystemZ::WCGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13955 /* wclfeb */, SystemZ::WCLFEB, Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements2, { MCK_VR32, MCK_VR32, MCK_U4Imm, MCK_U4Imm }, },
  { 13962 /* wclgdb */, SystemZ::WCLGDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13969 /* wfadb */, SystemZ::WFADB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 13975 /* wfasb */, SystemZ::WFASB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 13981 /* wfaxb */, SystemZ::WFAXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 13987 /* wfc */, SystemZ::WFC, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 13991 /* wfcdb */, SystemZ::WFCDB, Convert__VR641_0__VR641_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 13997 /* wfcedb */, SystemZ::WFCEDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14004 /* wfcedbs */, SystemZ::WFCEDBS, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14012 /* wfcesb */, SystemZ::WFCESB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14019 /* wfcesbs */, SystemZ::WFCESBS, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14027 /* wfcexb */, SystemZ::WFCEXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14034 /* wfcexbs */, SystemZ::WFCEXBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14042 /* wfchdb */, SystemZ::WFCHDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14049 /* wfchdbs */, SystemZ::WFCHDBS, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14057 /* wfchedb */, SystemZ::WFCHEDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14065 /* wfchedbs */, SystemZ::WFCHEDBS, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14074 /* wfchesb */, SystemZ::WFCHESB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14082 /* wfchesbs */, SystemZ::WFCHESBS, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14091 /* wfchexb */, SystemZ::WFCHEXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14099 /* wfchexbs */, SystemZ::WFCHEXBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14108 /* wfchsb */, SystemZ::WFCHSB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14115 /* wfchsbs */, SystemZ::WFCHSBS, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14123 /* wfchxb */, SystemZ::WFCHXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14130 /* wfchxbs */, SystemZ::WFCHXBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14138 /* wfcsb */, SystemZ::WFCSB, Convert__VR321_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 14144 /* wfcxb */, SystemZ::WFCXB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 14150 /* wfddb */, SystemZ::WFDDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14156 /* wfdsb */, SystemZ::WFDSB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14162 /* wfdxb */, SystemZ::WFDXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14168 /* wfidb */, SystemZ::WFIDB, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 14174 /* wfisb */, SystemZ::WFISB, Convert__VR321_0__VR321_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_U4Imm, MCK_U4Imm }, },
  { 14180 /* wfixb */, SystemZ::WFIXB, Convert__VR1281_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 14186 /* wfk */, SystemZ::WFK, Convert__VR641_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 14190 /* wfkdb */, SystemZ::WFKDB, Convert__VR641_0__VR641_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 14196 /* wfkedb */, SystemZ::WFKEDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14203 /* wfkedbs */, SystemZ::WFKEDBS, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14211 /* wfkesb */, SystemZ::WFKESB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14218 /* wfkesbs */, SystemZ::WFKESBS, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14226 /* wfkexb */, SystemZ::WFKEXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14233 /* wfkexbs */, SystemZ::WFKEXBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14241 /* wfkhdb */, SystemZ::WFKHDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14248 /* wfkhdbs */, SystemZ::WFKHDBS, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14256 /* wfkhedb */, SystemZ::WFKHEDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14264 /* wfkhedbs */, SystemZ::WFKHEDBS, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14273 /* wfkhesb */, SystemZ::WFKHESB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14281 /* wfkhesbs */, SystemZ::WFKHESBS, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14290 /* wfkhexb */, SystemZ::WFKHEXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14298 /* wfkhexbs */, SystemZ::WFKHEXBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14307 /* wfkhsb */, SystemZ::WFKHSB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14314 /* wfkhsbs */, SystemZ::WFKHSBS, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14322 /* wfkhxb */, SystemZ::WFKHXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14329 /* wfkhxbs */, SystemZ::WFKHXBS, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14337 /* wfksb */, SystemZ::WFKSB, Convert__VR321_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 14343 /* wfkxb */, SystemZ::WFKXB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 14349 /* wflcdb */, SystemZ::WFLCDB, Convert__VR641_0__VR641_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 14356 /* wflcsb */, SystemZ::WFLCSB, Convert__VR321_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 14363 /* wflcxb */, SystemZ::WFLCXB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 14370 /* wflld */, SystemZ::WFLLD, Convert__VR1281_0__VR641_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR64 }, },
  { 14376 /* wflls */, SystemZ::WFLLS, Convert__VR641_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR32 }, },
  { 14382 /* wflndb */, SystemZ::WFLNDB, Convert__VR641_0__VR641_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 14389 /* wflnsb */, SystemZ::WFLNSB, Convert__VR321_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 14396 /* wflnxb */, SystemZ::WFLNXB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 14403 /* wflpdb */, SystemZ::WFLPDB, Convert__VR641_0__VR641_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 14410 /* wflpsb */, SystemZ::WFLPSB, Convert__VR321_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 14417 /* wflpxb */, SystemZ::WFLPXB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 14424 /* wflrd */, SystemZ::WFLRD, Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 14430 /* wflrx */, SystemZ::WFLRX, Convert__VR641_0__VR1281_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR128, MCK_U4Imm, MCK_U4Imm }, },
  { 14436 /* wfmadb */, SystemZ::WFMADB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14443 /* wfmasb */, SystemZ::WFMASB, Convert__VR321_0__VR321_1__VR321_2__VR321_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14450 /* wfmaxb */, SystemZ::WFMAXB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14457 /* wfmaxdb */, SystemZ::WFMAXDB, Convert__VR641_0__VR641_1__VR641_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_U4Imm }, },
  { 14465 /* wfmaxsb */, SystemZ::WFMAXSB, Convert__VR321_0__VR321_1__VR321_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_U4Imm }, },
  { 14473 /* wfmaxxb */, SystemZ::WFMAXXB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 14481 /* wfmdb */, SystemZ::WFMDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14487 /* wfmindb */, SystemZ::WFMINDB, Convert__VR641_0__VR641_1__VR641_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_U4Imm }, },
  { 14495 /* wfminsb */, SystemZ::WFMINSB, Convert__VR321_0__VR321_1__VR321_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_U4Imm }, },
  { 14503 /* wfminxb */, SystemZ::WFMINXB, Convert__VR1281_0__VR1281_1__VR1281_2__U4Imm1_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 14511 /* wfmsb */, SystemZ::WFMSB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14517 /* wfmsdb */, SystemZ::WFMSDB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14524 /* wfmssb */, SystemZ::WFMSSB, Convert__VR321_0__VR321_1__VR321_2__VR321_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14531 /* wfmsxb */, SystemZ::WFMSXB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14538 /* wfmxb */, SystemZ::WFMXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14544 /* wfnmadb */, SystemZ::WFNMADB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14552 /* wfnmasb */, SystemZ::WFNMASB, Convert__VR321_0__VR321_1__VR321_2__VR321_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14560 /* wfnmaxb */, SystemZ::WFNMAXB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14568 /* wfnmsdb */, SystemZ::WFNMSDB, Convert__VR641_0__VR641_1__VR641_2__VR641_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR64, MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14576 /* wfnmssb */, SystemZ::WFNMSSB, Convert__VR321_0__VR321_1__VR321_2__VR321_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14584 /* wfnmsxb */, SystemZ::WFNMSXB, Convert__VR1281_0__VR1281_1__VR1281_2__VR1281_3, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14592 /* wfpsodb */, SystemZ::WFPSODB, Convert__VR641_0__VR641_1__U4Imm1_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U4Imm }, },
  { 14600 /* wfpsosb */, SystemZ::WFPSOSB, Convert__VR321_0__VR321_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_U4Imm }, },
  { 14608 /* wfpsoxb */, SystemZ::WFPSOXB, Convert__VR1281_0__VR1281_1__U4Imm1_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U4Imm }, },
  { 14616 /* wfsdb */, SystemZ::WFSDB, Convert__VR641_0__VR641_1__VR641_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_VR64 }, },
  { 14622 /* wfsqdb */, SystemZ::WFSQDB, Convert__VR641_0__VR641_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64 }, },
  { 14629 /* wfsqsb */, SystemZ::WFSQSB, Convert__VR321_0__VR321_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32 }, },
  { 14636 /* wfsqxb */, SystemZ::WFSQXB, Convert__VR1281_0__VR1281_1, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128 }, },
  { 14643 /* wfssb */, SystemZ::WFSSB, Convert__VR321_0__VR321_1__VR321_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_VR32 }, },
  { 14649 /* wfsxb */, SystemZ::WFSXB, Convert__VR1281_0__VR1281_1__VR1281_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_VR128 }, },
  { 14655 /* wftcidb */, SystemZ::WFTCIDB, Convert__VR641_0__VR641_1__U12Imm1_2, AMFBS_FeatureVector, { MCK_VR64, MCK_VR64, MCK_U12Imm }, },
  { 14663 /* wftcisb */, SystemZ::WFTCISB, Convert__VR321_0__VR321_1__U12Imm1_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR32, MCK_VR32, MCK_U12Imm }, },
  { 14671 /* wftcixb */, SystemZ::WFTCIXB, Convert__VR1281_0__VR1281_1__U12Imm1_2, AMFBS_FeatureVectorEnhancements1, { MCK_VR128, MCK_VR128, MCK_U12Imm }, },
  { 14679 /* wldeb */, SystemZ::WLDEB, Convert__VR641_0__VR321_1, AMFBS_FeatureVector, { MCK_VR64, MCK_VR32 }, },
  { 14685 /* wledb */, SystemZ::WLEDB, Convert__VR321_0__VR641_1__U4Imm1_2__U4Imm1_3, AMFBS_FeatureVector, { MCK_VR32, MCK_VR64, MCK_U4Imm, MCK_U4Imm }, },
  { 14691 /* x */, SystemZ::X, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp123_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 14693 /* xc */, SystemZ::XC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, AMFBS_None, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 14696 /* xg */, SystemZ::XG, Convert__GR641_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 14699 /* xgr */, SystemZ::XGR, Convert__GR641_0__Tie0_1_1__GR641_1, AMFBS_None, { MCK_GR64, MCK_GR64 }, },
  { 14703 /* xgrk */, SystemZ::XGRK, Convert__GR641_0__GR641_1__GR641_2, AMFBS_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 14708 /* xi */, SystemZ::XI, Convert__BDAddr64Disp122_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 14711 /* xihf */, SystemZ::XIHF, Convert__GRH321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GRH32, MCK_U32Imm }, },
  { 14716 /* xilf */, SystemZ::XILF, Convert__GR321_0__Tie0_1_1__U32Imm1_1, AMFBS_None, { MCK_GR32, MCK_U32Imm }, },
  { 14721 /* xiy */, SystemZ::XIY, Convert__BDAddr64Disp202_0__U8Imm1_1, AMFBS_None, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 14725 /* xr */, SystemZ::XR, Convert__GR321_0__Tie0_1_1__GR321_1, AMFBS_None, { MCK_GR32, MCK_GR32 }, },
  { 14728 /* xrk */, SystemZ::XRK, Convert__GR321_0__GR321_1__GR321_2, AMFBS_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 14732 /* xsch */, SystemZ::XSCH, Convert_NoOperands, AMFBS_None, {  }, },
  { 14737 /* xy */, SystemZ::XY, Convert__GR321_0__Tie0_1_1__BDXAddr64Disp203_1, AMFBS_None, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 14740 /* zap */, SystemZ::ZAP, Convert__BDLAddr64Disp12Len43_0__BDLAddr64Disp12Len43_1, AMFBS_None, { MCK_BDLAddr64Disp12Len4, MCK_BDLAddr64Disp12Len4 }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned SystemZAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     FeatureBitset &MissingFeatures,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 7) {
    ErrorInfo = 7;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((SystemZOperand &)*Operands[0]).getToken();

  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

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
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 6; ++FormalIdx) {
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

namespace {
  struct OperandMatchEntry {
    uint16_t Mnemonic;
    uint8_t OperandMask;
    uint8_t Class;
    uint8_t RequiredFeaturesIdx;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace

static const OperandMatchEntry OperandMatchTable[3566] = {
  /* Operand List Mnemonic, Mask, Operand Class, Features */
  { 0 /* a */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 0 /* a */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2 /* ad */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 2 /* ad */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 5 /* adb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 5 /* adb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 9 /* adbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 14 /* adr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 18 /* adtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 23 /* adtra */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 29 /* ae */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 29 /* ae */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 32 /* aeb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 32 /* aeb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 36 /* aebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 41 /* aer */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 45 /* afi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 49 /* ag */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 49 /* ag */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 52 /* agf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 52 /* agf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 56 /* agfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 61 /* agfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 61 /* agfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 66 /* agh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 66 /* agh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions2 },
  { 70 /* aghi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 75 /* aghik */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 81 /* agr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 85 /* agrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 90 /* agsi */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 95 /* ah */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 95 /* ah */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 98 /* ahhhr */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 104 /* ahhlr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 104 /* ahhlr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 110 /* ahi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 114 /* ahik */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 119 /* ahy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 119 /* ahy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 123 /* aih */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 127 /* al */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 127 /* al */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 130 /* alc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 130 /* alc */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 134 /* alcg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 134 /* alcg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 139 /* alcgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 145 /* alcr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 150 /* alfi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 155 /* alg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 155 /* alg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 159 /* algf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 159 /* algf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 164 /* algfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 170 /* algfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 170 /* algfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 176 /* alghsik */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 184 /* algr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 189 /* algrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 195 /* algsi */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 201 /* alhhhr */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 208 /* alhhlr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 208 /* alhhlr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 215 /* alhsik */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 222 /* alr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 226 /* alrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 231 /* alsi */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 236 /* alsih */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 242 /* alsihn */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 249 /* aly */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 249 /* aly */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 253 /* ap */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 256 /* ar */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 259 /* ark */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 263 /* asi */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 267 /* au */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 267 /* au */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 270 /* aur */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 274 /* aw */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 274 /* aw */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 277 /* awr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 281 /* axbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 286 /* axr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 290 /* axtr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 295 /* axtra */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 301 /* ay */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 301 /* ay */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 304 /* b */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 306 /* bakr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 311 /* bal */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 311 /* bal */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 315 /* balr */, 2 /* 1 */, MCK_ADDR64, AMFBS_None },
  { 315 /* balr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 320 /* bas */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 320 /* bas */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 324 /* basr */, 2 /* 1 */, MCK_ADDR64, AMFBS_None },
  { 324 /* basr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 329 /* bassm */, 2 /* 1 */, MCK_ADDR64, AMFBS_None },
  { 329 /* bassm */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 335 /* bc */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 338 /* bcr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 342 /* bct */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 342 /* bct */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 346 /* bctg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 346 /* bctg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 351 /* bctgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 357 /* bctr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 357 /* bctr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 362 /* be */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 365 /* ber */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 369 /* bh */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 372 /* bhe */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 376 /* bher */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 381 /* bhr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 385 /* bi */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 388 /* bic */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 392 /* bie */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 396 /* bih */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 400 /* bihe */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 405 /* bil */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 409 /* bile */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 414 /* bilh */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 419 /* bim */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 423 /* bine */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 428 /* binh */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 433 /* binhe */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 439 /* binl */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 444 /* binle */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 450 /* binlh */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 456 /* binm */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 461 /* bino */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 466 /* binp */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 471 /* binz */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 476 /* bio */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 480 /* bip */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 484 /* biz */, 1 /* 0 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 488 /* bl */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 491 /* ble */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 495 /* bler */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 500 /* blh */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 504 /* blhr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 509 /* blr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 513 /* bm */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 516 /* bmr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 520 /* bne */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 524 /* bner */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 529 /* bnh */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 533 /* bnhe */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 538 /* bnher */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 544 /* bnhr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 549 /* bnl */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 553 /* bnle */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 558 /* bnler */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 564 /* bnlh */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 569 /* bnlhr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 575 /* bnlr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 580 /* bnm */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 584 /* bnmr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 589 /* bno */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 593 /* bnor */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 598 /* bnp */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 602 /* bnpr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 607 /* bnz */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 611 /* bnzr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 616 /* bo */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 619 /* bor */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 623 /* bp */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 626 /* bpp */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_FeatureExecutionHint },
  { 626 /* bpp */, 2 /* 1 */, MCK_PCRel16, AMFBS_FeatureExecutionHint },
  { 630 /* bpr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 634 /* bprp */, 2 /* 1 */, MCK_PCRel12, AMFBS_FeatureExecutionHint },
  { 634 /* bprp */, 4 /* 2 */, MCK_PCRel24, AMFBS_FeatureExecutionHint },
  { 639 /* br */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 642 /* bras */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 642 /* bras */, 2 /* 1 */, MCK_PCRelTLS16, AMFBS_None },
  { 647 /* brasl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 647 /* brasl */, 2 /* 1 */, MCK_PCRelTLS32, AMFBS_None },
  { 653 /* brc */, 2 /* 1 */, MCK_PCRel16, AMFBS_None },
  { 657 /* brcl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 662 /* brct */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 662 /* brct */, 2 /* 1 */, MCK_PCRel16, AMFBS_None },
  { 667 /* brctg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 667 /* brctg */, 2 /* 1 */, MCK_PCRel16, AMFBS_None },
  { 673 /* brcth */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 673 /* brcth */, 2 /* 1 */, MCK_PCRel32, AMFBS_FeatureHighWord },
  { 679 /* brxh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 679 /* brxh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 684 /* brxhg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 684 /* brxhg */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 690 /* brxle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 690 /* brxle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 696 /* brxlg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 696 /* brxlg */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 702 /* bsa */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 706 /* bsg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 710 /* bsm */, 2 /* 1 */, MCK_ADDR64, AMFBS_None },
  { 710 /* bsm */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 714 /* bxh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 714 /* bxh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 718 /* bxhg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 718 /* bxhg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 723 /* bxle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 723 /* bxle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 728 /* bxleg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 728 /* bxleg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 734 /* bz */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 737 /* bzr */, 1 /* 0 */, MCK_ADDR64, AMFBS_None },
  { 741 /* c */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 741 /* c */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 743 /* cd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 743 /* cd */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 746 /* cdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 746 /* cdb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 750 /* cdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 755 /* cdfbr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 755 /* cdfbr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 761 /* cdfbra */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 761 /* cdfbra */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 768 /* cdfr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 768 /* cdfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 773 /* cdftr */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 773 /* cdftr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 779 /* cdgbr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 779 /* cdgbr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 785 /* cdgbra */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 785 /* cdgbra */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 792 /* cdgr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 792 /* cdgr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 797 /* cdgtr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 797 /* cdgtr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 803 /* cdgtra */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 803 /* cdgtra */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 810 /* cdlfbr */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 810 /* cdlfbr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 817 /* cdlftr */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 817 /* cdlftr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 824 /* cdlgbr */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 824 /* cdlgbr */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 831 /* cdlgtr */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 831 /* cdlgtr */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 838 /* cdpt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPPackedConversion },
  { 838 /* cdpt */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureDFPPackedConversion },
  { 843 /* cdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 847 /* cds */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 847 /* cds */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 851 /* cdsg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 851 /* cdsg */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 856 /* cdstr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 856 /* cdstr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 862 /* cdsy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 862 /* cdsy */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 867 /* cdtr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 872 /* cdutr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 872 /* cdutr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 878 /* cdzt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPZonedConversion },
  { 878 /* cdzt */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureDFPZonedConversion },
  { 883 /* ce */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 883 /* ce */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 886 /* ceb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 886 /* ceb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 890 /* cebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 895 /* cedtr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 901 /* cefbr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 901 /* cefbr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 907 /* cefbra */, 1 /* 0 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 907 /* cefbra */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 914 /* cefr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 914 /* cefr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 919 /* cegbr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 919 /* cegbr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 925 /* cegbra */, 1 /* 0 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 925 /* cegbra */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 932 /* cegr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 932 /* cegr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 937 /* celfbr */, 1 /* 0 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 937 /* celfbr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 944 /* celgbr */, 1 /* 0 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 944 /* celgbr */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 951 /* cer */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 955 /* cextr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 961 /* cfc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 965 /* cfdbr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 965 /* cfdbr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 971 /* cfdbra */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 971 /* cfdbra */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 978 /* cfdr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 978 /* cfdr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 983 /* cfdtr */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 983 /* cfdtr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 989 /* cfebr */, 4 /* 2 */, MCK_FP32, AMFBS_None },
  { 989 /* cfebr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 995 /* cfebra */, 4 /* 2 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 995 /* cfebra */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 1002 /* cfer */, 4 /* 2 */, MCK_FP32, AMFBS_None },
  { 1002 /* cfer */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1007 /* cfi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1011 /* cfxbr */, 4 /* 2 */, MCK_FP128, AMFBS_None },
  { 1011 /* cfxbr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1017 /* cfxbra */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 1017 /* cfxbra */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 1024 /* cfxr */, 4 /* 2 */, MCK_FP128, AMFBS_None },
  { 1024 /* cfxr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1029 /* cfxtr */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 1029 /* cfxtr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 1035 /* cg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 1035 /* cg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1038 /* cgdbr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 1038 /* cgdbr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1044 /* cgdbra */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 1044 /* cgdbra */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 1051 /* cgdr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 1051 /* cgdr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1056 /* cgdtr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 1056 /* cgdtr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1062 /* cgdtra */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 1062 /* cgdtra */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 1069 /* cgebr */, 4 /* 2 */, MCK_FP32, AMFBS_None },
  { 1069 /* cgebr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1075 /* cgebra */, 4 /* 2 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 1075 /* cgebra */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 1082 /* cger */, 4 /* 2 */, MCK_FP32, AMFBS_None },
  { 1082 /* cger */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1087 /* cgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 1087 /* cgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1091 /* cgfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1096 /* cgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 1096 /* cgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1101 /* cgfrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1101 /* cgfrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 1107 /* cgh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 1107 /* cgh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1111 /* cghi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1116 /* cghrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1116 /* cghrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 1122 /* cghsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1128 /* cgib */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1128 /* cgib */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1133 /* cgibe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1133 /* cgibe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1139 /* cgibh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1139 /* cgibh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1145 /* cgibhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1145 /* cgibhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1152 /* cgibl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1152 /* cgibl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1158 /* cgible */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1158 /* cgible */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1165 /* cgiblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1165 /* cgiblh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1172 /* cgibne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1172 /* cgibne */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1179 /* cgibnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1179 /* cgibnh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1186 /* cgibnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1186 /* cgibnhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1194 /* cgibnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1194 /* cgibnl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1201 /* cgibnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1201 /* cgibnle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1209 /* cgibnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1209 /* cgibnlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1217 /* cgij */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1217 /* cgij */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 1222 /* cgije */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1222 /* cgije */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1228 /* cgijh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1228 /* cgijh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1234 /* cgijhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1234 /* cgijhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1241 /* cgijl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1241 /* cgijl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1247 /* cgijle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1247 /* cgijle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1254 /* cgijlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1254 /* cgijlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1261 /* cgijne */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1261 /* cgijne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1268 /* cgijnh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1268 /* cgijnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1275 /* cgijnhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1275 /* cgijnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1283 /* cgijnl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1283 /* cgijnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1290 /* cgijnle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1290 /* cgijnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1298 /* cgijnlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1298 /* cgijnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1306 /* cgit */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1311 /* cgite */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1317 /* cgith */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1323 /* cgithe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1330 /* cgitl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1336 /* cgitle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1343 /* cgitlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1350 /* cgitne */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1357 /* cgitnh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1364 /* cgitnhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1372 /* cgitnl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1379 /* cgitnle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1387 /* cgitnlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1395 /* cgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1399 /* cgrb */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1399 /* cgrb */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1404 /* cgrbe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1404 /* cgrbe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1410 /* cgrbh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1410 /* cgrbh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1416 /* cgrbhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1416 /* cgrbhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1423 /* cgrbl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1423 /* cgrbl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1429 /* cgrble */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1429 /* cgrble */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1436 /* cgrblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1436 /* cgrblh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1443 /* cgrbne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1443 /* cgrbne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1450 /* cgrbnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1450 /* cgrbnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1457 /* cgrbnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1457 /* cgrbnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1465 /* cgrbnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1465 /* cgrbnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1472 /* cgrbnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1472 /* cgrbnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1480 /* cgrbnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1480 /* cgrbnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1488 /* cgrj */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1488 /* cgrj */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 1493 /* cgrje */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1493 /* cgrje */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1499 /* cgrjh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1499 /* cgrjh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1505 /* cgrjhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1505 /* cgrjhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1512 /* cgrjl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1512 /* cgrjl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1518 /* cgrjle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1518 /* cgrjle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1525 /* cgrjlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1525 /* cgrjlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1532 /* cgrjne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1532 /* cgrjne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1539 /* cgrjnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1539 /* cgrjnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1546 /* cgrjnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1546 /* cgrjnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1554 /* cgrjnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1554 /* cgrjnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1561 /* cgrjnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1561 /* cgrjnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1569 /* cgrjnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1569 /* cgrjnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1577 /* cgrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1577 /* cgrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 1582 /* cgrt */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1587 /* cgrte */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1593 /* cgrth */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1599 /* cgrthe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1606 /* cgrtl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1612 /* cgrtle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1619 /* cgrtlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1626 /* cgrtne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1633 /* cgrtnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1640 /* cgrtnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1648 /* cgrtnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1655 /* cgrtnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1663 /* cgrtnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 1671 /* cgxbr */, 4 /* 2 */, MCK_FP128, AMFBS_None },
  { 1671 /* cgxbr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1677 /* cgxbra */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 1677 /* cgxbra */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 1684 /* cgxr */, 4 /* 2 */, MCK_FP128, AMFBS_None },
  { 1684 /* cgxr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1689 /* cgxtr */, 4 /* 2 */, MCK_FP128, AMFBS_None },
  { 1689 /* cgxtr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1695 /* cgxtra */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 1695 /* cgxtra */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 1702 /* ch */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 1702 /* ch */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1705 /* chf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 1705 /* chf */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 1709 /* chhr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 1714 /* chhsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1720 /* chi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1724 /* chlr */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 1724 /* chlr */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 1729 /* chrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1729 /* chrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 1734 /* chsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1739 /* chy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 1739 /* chy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1743 /* cib */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1743 /* cib */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1747 /* cibe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1747 /* cibe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1752 /* cibh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1752 /* cibh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1757 /* cibhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1757 /* cibhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1763 /* cibl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1763 /* cibl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1768 /* cible */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1768 /* cible */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1774 /* ciblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1774 /* ciblh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1780 /* cibne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1780 /* cibne */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1786 /* cibnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1786 /* cibnh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1792 /* cibnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1792 /* cibnhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1799 /* cibnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1799 /* cibnl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1805 /* cibnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1805 /* cibnle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1812 /* cibnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1812 /* cibnlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1819 /* cih */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 1823 /* cij */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1823 /* cij */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 1827 /* cije */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1827 /* cije */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1832 /* cijh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1832 /* cijh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1837 /* cijhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1837 /* cijhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1843 /* cijl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1843 /* cijl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1848 /* cijle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1848 /* cijle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1854 /* cijlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1854 /* cijlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1860 /* cijne */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1860 /* cijne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1866 /* cijnh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1866 /* cijnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1872 /* cijnhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1872 /* cijnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1879 /* cijnl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1879 /* cijnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1885 /* cijnle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1885 /* cijnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1892 /* cijnlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1892 /* cijnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 1899 /* cit */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1903 /* cite */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1908 /* cith */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1913 /* cithe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1919 /* citl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1924 /* citle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1930 /* citlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1936 /* citne */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1942 /* citnh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1948 /* citnhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1955 /* citnl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1961 /* citnle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1968 /* citnlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1975 /* cksm */, 2 /* 1 */, MCK_GR128, AMFBS_None },
  { 1975 /* cksm */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 1980 /* cl */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 1980 /* cl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 1983 /* clc */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 1983 /* clc */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 1987 /* clcl */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 1992 /* clcle */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 1992 /* clcle */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 1998 /* clclu */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 1998 /* clclu */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 2004 /* clfdbr */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 2004 /* clfdbr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 2011 /* clfdtr */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 2011 /* clfdtr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 2018 /* clfebr */, 4 /* 2 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 2018 /* clfebr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 2025 /* clfhsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2032 /* clfi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2037 /* clfit */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2043 /* clfite */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2050 /* clfith */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2057 /* clfithe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2065 /* clfitl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2072 /* clfitle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2080 /* clfitlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2088 /* clfitne */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2096 /* clfitnh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2104 /* clfitnhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2113 /* clfitnl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2121 /* clfitnle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2130 /* clfitnlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2139 /* clfxbr */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 2139 /* clfxbr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 2146 /* clfxtr */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 2146 /* clfxtr */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 2153 /* clg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 2153 /* clg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2157 /* clgdbr */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 2157 /* clgdbr */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 2164 /* clgdtr */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 2164 /* clgdtr */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 2171 /* clgebr */, 4 /* 2 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 2171 /* clgebr */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 2178 /* clgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 2178 /* clgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2183 /* clgfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2189 /* clgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 2189 /* clgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2195 /* clgfrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2195 /* clgfrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 2202 /* clghrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2202 /* clghrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 2209 /* clghsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2216 /* clgib */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2216 /* clgib */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2222 /* clgibe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2222 /* clgibe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2229 /* clgibh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2229 /* clgibh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2236 /* clgibhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2236 /* clgibhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2244 /* clgibl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2244 /* clgibl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2251 /* clgible */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2251 /* clgible */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2259 /* clgiblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2259 /* clgiblh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2267 /* clgibne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2267 /* clgibne */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2275 /* clgibnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2275 /* clgibnh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2283 /* clgibnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2283 /* clgibnhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2292 /* clgibnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2292 /* clgibnl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2300 /* clgibnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2300 /* clgibnle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2309 /* clgibnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2309 /* clgibnlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2318 /* clgij */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2318 /* clgij */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 2324 /* clgije */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2324 /* clgije */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2331 /* clgijh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2331 /* clgijh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2338 /* clgijhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2338 /* clgijhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2346 /* clgijl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2346 /* clgijl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2353 /* clgijle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2353 /* clgijle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2361 /* clgijlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2361 /* clgijlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2369 /* clgijne */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2369 /* clgijne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2377 /* clgijnh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2377 /* clgijnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2385 /* clgijnhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2385 /* clgijnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2394 /* clgijnl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2394 /* clgijnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2402 /* clgijnle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2402 /* clgijnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2411 /* clgijnlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2411 /* clgijnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2420 /* clgit */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2426 /* clgite */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2433 /* clgith */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2440 /* clgithe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2448 /* clgitl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2455 /* clgitle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2463 /* clgitlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2471 /* clgitne */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2479 /* clgitnh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2487 /* clgitnhe */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2496 /* clgitnl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2504 /* clgitnle */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2513 /* clgitnlh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2522 /* clgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2527 /* clgrb */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2527 /* clgrb */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2533 /* clgrbe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2533 /* clgrbe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2540 /* clgrbh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2540 /* clgrbh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2547 /* clgrbhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2547 /* clgrbhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2555 /* clgrbl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2555 /* clgrbl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2562 /* clgrble */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2562 /* clgrble */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2570 /* clgrblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2570 /* clgrblh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2578 /* clgrbne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2578 /* clgrbne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2586 /* clgrbnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2586 /* clgrbnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2594 /* clgrbnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2594 /* clgrbnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2603 /* clgrbnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2603 /* clgrbnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2611 /* clgrbnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2611 /* clgrbnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2620 /* clgrbnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2620 /* clgrbnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2629 /* clgrj */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2629 /* clgrj */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 2635 /* clgrje */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2635 /* clgrje */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2642 /* clgrjh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2642 /* clgrjh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2649 /* clgrjhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2649 /* clgrjhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2657 /* clgrjl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2657 /* clgrjl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2664 /* clgrjle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2664 /* clgrjle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2672 /* clgrjlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2672 /* clgrjlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2680 /* clgrjne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2680 /* clgrjne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2688 /* clgrjnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2688 /* clgrjnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2696 /* clgrjnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2696 /* clgrjnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2705 /* clgrjnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2705 /* clgrjnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2713 /* clgrjnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2713 /* clgrjnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2722 /* clgrjnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2722 /* clgrjnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 2731 /* clgrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 2731 /* clgrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 2737 /* clgrt */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2743 /* clgrte */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2750 /* clgrth */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2757 /* clgrthe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2765 /* clgrtl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2772 /* clgrtle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2780 /* clgrtlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2788 /* clgrtne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2796 /* clgrtnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2804 /* clgrtnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2813 /* clgrtnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2821 /* clgrtnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2830 /* clgrtnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 2839 /* clgt */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2839 /* clgt */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2844 /* clgte */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2844 /* clgte */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2850 /* clgth */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2850 /* clgth */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2856 /* clgthe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2856 /* clgthe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2863 /* clgtl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2863 /* clgtl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2869 /* clgtle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2869 /* clgtle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2876 /* clgtlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2876 /* clgtlh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2883 /* clgtne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2883 /* clgtne */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2890 /* clgtnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2890 /* clgtnh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2897 /* clgtnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2897 /* clgtnhe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2905 /* clgtnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2905 /* clgtnl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2912 /* clgtnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2912 /* clgtnle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2920 /* clgtnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 2920 /* clgtnlh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 2928 /* clgxbr */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 2928 /* clgxbr */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 2935 /* clgxtr */, 4 /* 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 2935 /* clgxtr */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 2942 /* clhf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 2942 /* clhf */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 2947 /* clhhr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 2953 /* clhhsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2960 /* clhlr */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 2960 /* clhlr */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 2966 /* clhrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2966 /* clhrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 2972 /* cli */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2976 /* clib */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2976 /* clib */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2981 /* clibe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2981 /* clibe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2987 /* clibh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2987 /* clibh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 2993 /* clibhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 2993 /* clibhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3000 /* clibl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3000 /* clibl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3006 /* clible */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3006 /* clible */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3013 /* cliblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3013 /* cliblh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3020 /* clibne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3020 /* clibne */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3027 /* clibnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3027 /* clibnh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3034 /* clibnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3034 /* clibnhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3042 /* clibnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3042 /* clibnl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3049 /* clibnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3049 /* clibnle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3057 /* clibnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3057 /* clibnlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3065 /* clih */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 3070 /* clij */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3070 /* clij */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 3075 /* clije */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3075 /* clije */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3081 /* clijh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3081 /* clijh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3087 /* clijhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3087 /* clijhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3094 /* clijl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3094 /* clijl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3100 /* clijle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3100 /* clijle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3107 /* clijlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3107 /* clijlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3114 /* clijne */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3114 /* clijne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3121 /* clijnh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3121 /* clijnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3128 /* clijnhe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3128 /* clijnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3136 /* clijnl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3136 /* clijnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3143 /* clijnle */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3143 /* clijnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3151 /* clijnlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3151 /* clijnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3159 /* cliy */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 3164 /* clm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3164 /* clm */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3168 /* clmh */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 3168 /* clmh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 3173 /* clmy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 3173 /* clmy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3178 /* clr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3182 /* clrb */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3182 /* clrb */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3187 /* clrbe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3187 /* clrbe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3193 /* clrbh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3193 /* clrbh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3199 /* clrbhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3199 /* clrbhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3206 /* clrbl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3206 /* clrbl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3212 /* clrble */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3212 /* clrble */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3219 /* clrblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3219 /* clrblh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3226 /* clrbne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3226 /* clrbne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3233 /* clrbnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3233 /* clrbnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3240 /* clrbnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3240 /* clrbnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3248 /* clrbnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3248 /* clrbnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3255 /* clrbnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3255 /* clrbnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3263 /* clrbnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3263 /* clrbnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3271 /* clrj */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3271 /* clrj */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 3276 /* clrje */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3276 /* clrje */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3282 /* clrjh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3282 /* clrjh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3288 /* clrjhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3288 /* clrjhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3295 /* clrjl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3295 /* clrjl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3301 /* clrjle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3301 /* clrjle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3308 /* clrjlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3308 /* clrjlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3315 /* clrjne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3315 /* clrjne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3322 /* clrjnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3322 /* clrjnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3329 /* clrjnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3329 /* clrjnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3337 /* clrjnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3337 /* clrjnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3344 /* clrjnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3344 /* clrjnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3352 /* clrjnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3352 /* clrjnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3360 /* clrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3360 /* clrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 3365 /* clrt */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3370 /* clrte */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3376 /* clrth */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3382 /* clrthe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3389 /* clrtl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3395 /* clrtle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3402 /* clrtlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3409 /* clrtne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3416 /* clrtnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3423 /* clrtnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3431 /* clrtnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3438 /* clrtnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3446 /* clrtnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3454 /* clst */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 3459 /* clt */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3459 /* clt */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3463 /* clte */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3463 /* clte */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3468 /* clth */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3468 /* clth */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3473 /* clthe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3473 /* clthe */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3479 /* cltl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3479 /* cltl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3484 /* cltle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3484 /* cltle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3490 /* cltlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3490 /* cltlh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3496 /* cltne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3496 /* cltne */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3502 /* cltnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3502 /* cltnh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3508 /* cltnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3508 /* cltnhe */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3515 /* cltnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3515 /* cltnl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3521 /* cltnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3521 /* cltnle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3528 /* cltnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions },
  { 3528 /* cltnlh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions },
  { 3535 /* cly */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 3535 /* cly */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3539 /* cmpsc */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3545 /* cp */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 3548 /* cpdt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPPackedConversion },
  { 3548 /* cpdt */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureDFPPackedConversion },
  { 3553 /* cpsdr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 3559 /* cpxt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPPackedConversion },
  { 3559 /* cpxt */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureDFPPackedConversion },
  { 3564 /* cpya */, 3 /* 0, 1 */, MCK_AR32, AMFBS_None },
  { 3569 /* cr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3572 /* crb */, 8 /* 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3572 /* crb */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3576 /* crbe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3576 /* crbe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3581 /* crbh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3581 /* crbh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3586 /* crbhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3586 /* crbhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3592 /* crbl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3592 /* crbl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3597 /* crble */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3597 /* crble */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3603 /* crblh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3603 /* crblh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3609 /* crbne */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3609 /* crbne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3615 /* crbnh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3615 /* crbnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3621 /* crbnhe */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3621 /* crbnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3628 /* crbnl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3628 /* crbnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3634 /* crbnle */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3634 /* crbnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3641 /* crbnlh */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3641 /* crbnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3648 /* crdte */, 5 /* 0, 2 */, MCK_GR128, AMFBS_FeatureEnhancedDAT2 },
  { 3648 /* crdte */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureEnhancedDAT2 },
  { 3648 /* crdte */, 5 /* 0, 2 */, MCK_GR128, AMFBS_FeatureEnhancedDAT2 },
  { 3648 /* crdte */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureEnhancedDAT2 },
  { 3654 /* crj */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3654 /* crj */, 8 /* 3 */, MCK_PCRel16, AMFBS_None },
  { 3658 /* crje */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3658 /* crje */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3663 /* crjh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3663 /* crjh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3668 /* crjhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3668 /* crjhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3674 /* crjl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3674 /* crjl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3679 /* crjle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3679 /* crjle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3685 /* crjlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3685 /* crjlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3691 /* crjne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3691 /* crjne */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3697 /* crjnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3697 /* crjnh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3703 /* crjnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3703 /* crjnhe */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3710 /* crjnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3710 /* crjnl */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3716 /* crjnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3716 /* crjnle */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3723 /* crjnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3723 /* crjnlh */, 4 /* 2 */, MCK_PCRel16, AMFBS_None },
  { 3730 /* crl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3730 /* crl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 3734 /* crt */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3738 /* crte */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3743 /* crth */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3748 /* crthe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3754 /* crtl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3759 /* crtle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3765 /* crtlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3771 /* crtne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3777 /* crtnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3783 /* crtnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3790 /* crtnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3796 /* crtnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3803 /* crtnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3810 /* cs */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3810 /* cs */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3818 /* csdtr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 3818 /* csdtr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 3824 /* csg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 3824 /* csg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 3828 /* csp */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 3828 /* csp */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 3832 /* cspg */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 3832 /* cspg */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 3837 /* csst */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 3837 /* csst */, 4 /* 2 */, MCK_GR64, AMFBS_None },
  { 3842 /* csxtr */, 2 /* 1 */, MCK_FP128, AMFBS_None },
  { 3842 /* csxtr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 3848 /* csy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 3848 /* csy */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 3852 /* cu12 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3852 /* cu12 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3857 /* cu14 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3857 /* cu14 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3862 /* cu21 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3862 /* cu21 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3867 /* cu24 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3867 /* cu24 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3872 /* cu41 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3877 /* cu42 */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3882 /* cudtr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 3882 /* cudtr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 3888 /* cuse */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3893 /* cutfu */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3893 /* cutfu */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3899 /* cuutf */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3899 /* cuutf */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 3905 /* cuxtr */, 2 /* 1 */, MCK_FP128, AMFBS_None },
  { 3905 /* cuxtr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 3911 /* cvb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 3911 /* cvb */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3915 /* cvbg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 3915 /* cvbg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 3920 /* cvby */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 3920 /* cvby */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3925 /* cvd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 3925 /* cvd */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3929 /* cvdg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 3929 /* cvdg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 3934 /* cvdy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 3934 /* cvdy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 3939 /* cxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 3944 /* cxfbr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 3944 /* cxfbr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 3950 /* cxfbra */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 3950 /* cxfbra */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 3957 /* cxfr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 3957 /* cxfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 3962 /* cxftr */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 3962 /* cxftr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 3968 /* cxgbr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 3968 /* cxgbr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 3974 /* cxgbra */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 3974 /* cxgbra */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 3981 /* cxgr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 3981 /* cxgr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 3986 /* cxgtr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 3986 /* cxgtr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 3992 /* cxgtra */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 3992 /* cxgtra */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 3999 /* cxlfbr */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 3999 /* cxlfbr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 4006 /* cxlftr */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 4006 /* cxlftr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureFPExtension },
  { 4013 /* cxlgbr */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 4013 /* cxlgbr */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 4020 /* cxlgtr */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 4020 /* cxlgtr */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureFPExtension },
  { 4027 /* cxpt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPPackedConversion },
  { 4027 /* cxpt */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureDFPPackedConversion },
  { 4032 /* cxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4036 /* cxstr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 4036 /* cxstr */, 2 /* 1 */, MCK_GR128, AMFBS_None },
  { 4042 /* cxtr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4047 /* cxutr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 4047 /* cxutr */, 2 /* 1 */, MCK_GR128, AMFBS_None },
  { 4053 /* cxzt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPZonedConversion },
  { 4053 /* cxzt */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureDFPZonedConversion },
  { 4058 /* cy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4058 /* cy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4061 /* czdt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPZonedConversion },
  { 4061 /* czdt */, 1 /* 0 */, MCK_FP64, AMFBS_FeatureDFPZonedConversion },
  { 4066 /* czxt */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_FeatureDFPZonedConversion },
  { 4066 /* czxt */, 1 /* 0 */, MCK_FP128, AMFBS_FeatureDFPZonedConversion },
  { 4071 /* d */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4071 /* d */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4073 /* dd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4073 /* dd */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4076 /* ddb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4076 /* ddb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4080 /* ddbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4085 /* ddr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4089 /* ddtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 4094 /* ddtra */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 4100 /* de */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4100 /* de */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 4103 /* deb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4103 /* deb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 4107 /* debr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4112 /* der */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4116 /* dfltcc */, 3 /* 0, 1 */, MCK_GR128, AMFBS_FeatureDeflateConversion },
  { 4116 /* dfltcc */, 4 /* 2 */, MCK_GR64, AMFBS_FeatureDeflateConversion },
  { 4123 /* diag */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4123 /* diag */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 4128 /* didbr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 4134 /* diebr */, 7 /* 0, 1, 2 */, MCK_FP32, AMFBS_None },
  { 4140 /* dl */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4140 /* dl */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4143 /* dlg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4143 /* dlg */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4147 /* dlgr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4147 /* dlgr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4152 /* dlr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4152 /* dlr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 4156 /* dp */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 4159 /* dr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4159 /* dr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 4162 /* dsg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4162 /* dsg */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4166 /* dsgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4166 /* dsgf */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4171 /* dsgfr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4171 /* dsgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 4177 /* dsgr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4177 /* dsgr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4182 /* dxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4187 /* dxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4191 /* dxtr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 4196 /* dxtra */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 4202 /* ear */, 2 /* 1 */, MCK_AR32, AMFBS_None },
  { 4202 /* ear */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4206 /* ecag */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 4206 /* ecag */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 4211 /* ecctr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 4217 /* ecpga */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4217 /* ecpga */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4223 /* ectg */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4223 /* ectg */, 4 /* 2 */, MCK_GR64, AMFBS_None },
  { 4228 /* ed */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4228 /* ed */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 4231 /* edmk */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4231 /* edmk */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 4236 /* eedtr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4242 /* eextr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4248 /* efpc */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4253 /* epair */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4259 /* epar */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4264 /* epctr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 4270 /* epsw */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 4275 /* ereg */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 4280 /* eregg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 4286 /* esair */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4292 /* esar */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4297 /* esdtr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4303 /* esea */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4308 /* esta */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4308 /* esta */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 4313 /* esxtr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4319 /* etnd */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureTransactionalExecution },
  { 4324 /* ex */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4324 /* ex */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4327 /* exrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4327 /* exrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 4332 /* fidbr */, 5 /* 0, 2 */, MCK_FP64, AMFBS_None },
  { 4338 /* fidbra */, 5 /* 0, 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 4345 /* fidr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4350 /* fidtr */, 5 /* 0, 2 */, MCK_FP64, AMFBS_None },
  { 4356 /* fiebr */, 5 /* 0, 2 */, MCK_FP32, AMFBS_None },
  { 4362 /* fiebra */, 5 /* 0, 2 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 4369 /* fier */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4374 /* fixbr */, 5 /* 0, 2 */, MCK_FP128, AMFBS_None },
  { 4380 /* fixbra */, 5 /* 0, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 4387 /* fixr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4392 /* fixtr */, 5 /* 0, 2 */, MCK_FP128, AMFBS_None },
  { 4398 /* flogr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 4398 /* flogr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4404 /* hdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4408 /* her */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4417 /* iac */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4421 /* ic */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4421 /* ic */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4424 /* icm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4424 /* icm */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4428 /* icmh */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 4428 /* icmh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 4433 /* icmy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 4433 /* icmy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4438 /* icy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4438 /* icy */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4442 /* idte */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_None },
  { 4442 /* idte */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_None },
  { 4447 /* iedtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 4453 /* iextr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 4459 /* iihf */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 4464 /* iihh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 4469 /* iihl */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 4474 /* iilf */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4479 /* iilh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4484 /* iill */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4493 /* ipm */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4497 /* ipte */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 4497 /* ipte */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4497 /* ipte */, 6 /* 1, 2 */, MCK_GR32, AMFBS_None },
  { 4497 /* ipte */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4497 /* ipte */, 6 /* 1, 2 */, MCK_GR32, AMFBS_None },
  { 4497 /* ipte */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4502 /* irbm */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureInsertReferenceBitsMultiple },
  { 4507 /* iske */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4507 /* iske */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4512 /* ivsk */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4512 /* ivsk */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4517 /* j */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4519 /* je */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4522 /* jg */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4525 /* jge */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4529 /* jgh */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4533 /* jghe */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4538 /* jgl */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4542 /* jgle */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4547 /* jglh */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4552 /* jgm */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4556 /* jgne */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4561 /* jgnh */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4566 /* jgnhe */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4572 /* jgnl */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4577 /* jgnle */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4583 /* jgnlh */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4589 /* jgnm */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4594 /* jgno */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4599 /* jgnop */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4605 /* jgnp */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4610 /* jgnz */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4615 /* jgo */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4619 /* jgp */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4623 /* jgz */, 1 /* 0 */, MCK_PCRel32, AMFBS_None },
  { 4627 /* jh */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4630 /* jhe */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4634 /* jl */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4637 /* jle */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4641 /* jlh */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4645 /* jm */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4648 /* jne */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4652 /* jnh */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4656 /* jnhe */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4661 /* jnl */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4665 /* jnle */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4670 /* jnlh */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4675 /* jnm */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4679 /* jno */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4683 /* jnop */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4688 /* jnp */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4692 /* jnz */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4696 /* jo */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4699 /* jp */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4702 /* jz */, 1 /* 0 */, MCK_PCRel16, AMFBS_None },
  { 4705 /* kdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4705 /* kdb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4709 /* kdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4714 /* kdsa */, 2 /* 1 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist9 },
  { 4714 /* kdsa */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMessageSecurityAssist9 },
  { 4719 /* kdtr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4724 /* keb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4724 /* keb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 4728 /* kebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4733 /* kimd */, 2 /* 1 */, MCK_GR128, AMFBS_None },
  { 4733 /* kimd */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4738 /* klmd */, 2 /* 1 */, MCK_GR128, AMFBS_None },
  { 4738 /* klmd */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4743 /* km */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 4746 /* kma */, 7 /* 0, 1, 2 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist8 },
  { 4750 /* kmac */, 2 /* 1 */, MCK_GR128, AMFBS_None },
  { 4750 /* kmac */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4755 /* kmc */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 4759 /* kmctr */, 7 /* 0, 1, 2 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist4 },
  { 4765 /* kmf */, 3 /* 0, 1 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist4 },
  { 4769 /* kmo */, 3 /* 0, 1 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist4 },
  { 4773 /* kxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4778 /* kxtr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4783 /* l */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4783 /* l */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4785 /* la */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4785 /* la */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4788 /* laa */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4788 /* laa */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureInterlockedAccess1 },
  { 4792 /* laag */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4792 /* laag */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureInterlockedAccess1 },
  { 4797 /* laal */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4797 /* laal */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureInterlockedAccess1 },
  { 4802 /* laalg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4802 /* laalg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureInterlockedAccess1 },
  { 4808 /* lae */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4808 /* lae */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4812 /* laey */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4812 /* laey */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4817 /* lam */, 3 /* 0, 1 */, MCK_AR32, AMFBS_None },
  { 4817 /* lam */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4821 /* lamy */, 3 /* 0, 1 */, MCK_AR32, AMFBS_None },
  { 4821 /* lamy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 4826 /* lan */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4826 /* lan */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureInterlockedAccess1 },
  { 4830 /* lang */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4830 /* lang */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureInterlockedAccess1 },
  { 4835 /* lao */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4835 /* lao */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureInterlockedAccess1 },
  { 4839 /* laog */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4839 /* laog */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureInterlockedAccess1 },
  { 4844 /* larl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4844 /* larl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 4849 /* lasp */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4854 /* lat */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndTrap },
  { 4854 /* lat */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadAndTrap },
  { 4858 /* lax */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4858 /* lax */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureInterlockedAccess1 },
  { 4862 /* laxg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_FeatureInterlockedAccess1 },
  { 4862 /* laxg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureInterlockedAccess1 },
  { 4867 /* lay */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4867 /* lay */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4871 /* lb */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 4871 /* lb */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 4874 /* lbh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 4874 /* lbh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 4878 /* lbr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 4882 /* lcbb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 4882 /* lcbb */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureVector },
  { 4887 /* lcctl */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4893 /* lcdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4899 /* lcdfr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4905 /* lcdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4910 /* lcebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4916 /* lcer */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 4921 /* lcgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 4921 /* lcgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 4927 /* lcgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 4932 /* lcr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 4936 /* lctl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 4936 /* lctl */, 3 /* 0, 1 */, MCK_CR64, AMFBS_None },
  { 4941 /* lctlg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 4941 /* lctlg */, 3 /* 0, 1 */, MCK_CR64, AMFBS_None },
  { 4947 /* lcxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4953 /* lcxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 4958 /* ld */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4958 /* ld */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4961 /* lde */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4961 /* lde */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4965 /* ldeb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 4965 /* ldeb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4970 /* ldebr */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 4970 /* ldebr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4976 /* lder */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 4976 /* lder */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4981 /* ldetr */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 4981 /* ldetr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4987 /* ldgr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 4987 /* ldgr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 4992 /* ldr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 4996 /* ldrv */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 4996 /* ldrv */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 5001 /* ldxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 5007 /* ldxbra */, 5 /* 0, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 5014 /* ldxr */, 2 /* 1 */, MCK_FP128, AMFBS_None },
  { 5014 /* ldxr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 5019 /* ldxtr */, 5 /* 0, 2 */, MCK_FP128, AMFBS_None },
  { 5025 /* ldy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5025 /* ldy */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 5029 /* le */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 5029 /* le */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 5032 /* ledbr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 5032 /* ledbr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 5038 /* ledbra */, 1 /* 0 */, MCK_FP32, AMFBS_FeatureFPExtension },
  { 5038 /* ledbra */, 4 /* 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 5045 /* ledr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 5045 /* ledr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 5050 /* ledtr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 5050 /* ledtr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 5056 /* ler */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 5060 /* lerv */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 5060 /* lerv */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 5065 /* lexbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 5071 /* lexbra */, 5 /* 0, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 5078 /* lexr */, 2 /* 1 */, MCK_FP128, AMFBS_None },
  { 5078 /* lexr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 5083 /* ley */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5083 /* ley */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 5087 /* lfas */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 5092 /* lfh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 5092 /* lfh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 5096 /* lfhat */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndTrap },
  { 5096 /* lfhat */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadAndTrap },
  { 5102 /* lfpc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 5107 /* lg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5107 /* lg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5110 /* lgat */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndTrap },
  { 5110 /* lgat */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadAndTrap },
  { 5115 /* lgb */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5115 /* lgb */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5119 /* lgbr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5124 /* lgdr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 5124 /* lgdr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5129 /* lgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5129 /* lgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5133 /* lgfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5138 /* lgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 5138 /* lgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5143 /* lgfrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5143 /* lgfrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5149 /* lgg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureGuardedStorage },
  { 5149 /* lgg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureGuardedStorage },
  { 5153 /* lgh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5153 /* lgh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5157 /* lghi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5162 /* lghr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5167 /* lghrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5167 /* lghrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5173 /* lgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5177 /* lgrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5177 /* lgrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5182 /* lgsc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureGuardedStorage },
  { 5182 /* lgsc */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureGuardedStorage },
  { 5187 /* lh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 5187 /* lh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5190 /* lhh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 5190 /* lhh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 5194 /* lhi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5198 /* lhr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 5202 /* lhrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5202 /* lhrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5207 /* lhy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5207 /* lhy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5211 /* llc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5211 /* llc */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5215 /* llch */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 5215 /* llch */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 5220 /* llcr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 5225 /* llgc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5225 /* llgc */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5230 /* llgcr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5236 /* llgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5236 /* llgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5241 /* llgfat */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndTrap },
  { 5241 /* llgfat */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadAndTrap },
  { 5248 /* llgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 5248 /* llgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5254 /* llgfrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5254 /* llgfrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5261 /* llgfsg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureGuardedStorage },
  { 5261 /* llgfsg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureGuardedStorage },
  { 5268 /* llgh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5268 /* llgh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5273 /* llghr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5279 /* llghrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5279 /* llghrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5286 /* llgt */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5286 /* llgt */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5291 /* llgtat */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndTrap },
  { 5291 /* llgtat */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadAndTrap },
  { 5298 /* llgtr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5304 /* llh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 5304 /* llh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5308 /* llhh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 5308 /* llhh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 5313 /* llhr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 5318 /* llhrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 5318 /* llhrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 5324 /* llihf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5330 /* llihh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5336 /* llihl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5342 /* llilf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5348 /* llilh */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5354 /* llill */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5360 /* llzrgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndZeroRightmostByte },
  { 5360 /* llzrgf */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadAndZeroRightmostByte },
  { 5367 /* lm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 5367 /* lm */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 5370 /* lmd */, 12 /* 2, 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 5370 /* lmd */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5374 /* lmg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 5374 /* lmg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5378 /* lmh */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 5378 /* lmh */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_None },
  { 5382 /* lmy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 5382 /* lmy */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 5386 /* lndbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 5392 /* lndfr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 5398 /* lndr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 5403 /* lnebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 5409 /* lner */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 5414 /* lngfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 5414 /* lngfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 5420 /* lngr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 5425 /* lnr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 5429 /* lnxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 5435 /* lnxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 5440 /* loc */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5440 /* loc */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 5444 /* loce */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5444 /* loce */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 5449 /* locfh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5449 /* locfh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5455 /* locfhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5455 /* locfhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5462 /* locfhh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5462 /* locfhh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5469 /* locfhhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5469 /* locfhhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5477 /* locfhl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5477 /* locfhl */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5484 /* locfhle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5484 /* locfhle */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5492 /* locfhlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5492 /* locfhlh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5500 /* locfhm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5500 /* locfhm */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5507 /* locfhne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5507 /* locfhne */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5515 /* locfhnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5515 /* locfhnh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5523 /* locfhnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5523 /* locfhnhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5532 /* locfhnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5532 /* locfhnl */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5540 /* locfhnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5540 /* locfhnle */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5549 /* locfhnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5549 /* locfhnlh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5558 /* locfhnm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5558 /* locfhnm */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5566 /* locfhno */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5566 /* locfhno */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5574 /* locfhnp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5574 /* locfhnp */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5582 /* locfhnz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5582 /* locfhnz */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5590 /* locfho */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5590 /* locfho */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5597 /* locfhp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5597 /* locfhp */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5604 /* locfhr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5611 /* locfhre */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5619 /* locfhrh */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5627 /* locfhrhe */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5636 /* locfhrl */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5644 /* locfhrle */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5653 /* locfhrlh */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5662 /* locfhrm */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5670 /* locfhrne */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5679 /* locfhrnh */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5688 /* locfhrnhe */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5698 /* locfhrnl */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5707 /* locfhrnle */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5717 /* locfhrnlh */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5727 /* locfhrnm */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5736 /* locfhrno */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5745 /* locfhrnp */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5754 /* locfhrnz */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5763 /* locfhro */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5771 /* locfhrp */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5779 /* locfhrz */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5787 /* locfhz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 5787 /* locfhz */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 5794 /* locg */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5794 /* locg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 5799 /* locge */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5799 /* locge */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 5805 /* locgh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5805 /* locgh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 5811 /* locghe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 5811 /* locghe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 5818 /* locghi */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5825 /* locghie */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5833 /* locghih */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5841 /* locghihe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5850 /* locghil */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5858 /* locghile */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5867 /* locghilh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5876 /* locghim */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5884 /* locghine */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5893 /* locghinh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5902 /* locghinhe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5912 /* locghinl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5921 /* locghinle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5931 /* locghinlh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5941 /* locghinm */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5950 /* locghino */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5959 /* locghinp */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5968 /* locghinz */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5977 /* locghio */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5985 /* locghip */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 5993 /* locghiz */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond2 },
  { 6001 /* locgl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6001 /* locgl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6007 /* locgle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6007 /* locgle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6014 /* locglh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6014 /* locglh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6021 /* locgm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6021 /* locgm */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6027 /* locgne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6027 /* locgne */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6034 /* locgnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6034 /* locgnh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6041 /* locgnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6041 /* locgnhe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6049 /* locgnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6049 /* locgnl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6056 /* locgnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6056 /* locgnle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6064 /* locgnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6064 /* locgnlh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6072 /* locgnm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6072 /* locgnm */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6079 /* locgno */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6079 /* locgno */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6086 /* locgnp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6086 /* locgnp */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6093 /* locgnz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6093 /* locgnz */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6100 /* locgo */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6100 /* locgo */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6106 /* locgp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6106 /* locgp */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6112 /* locgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6118 /* locgre */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6125 /* locgrh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6132 /* locgrhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6140 /* locgrl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6147 /* locgrle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6155 /* locgrlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6163 /* locgrm */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6170 /* locgrne */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6178 /* locgrnh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6186 /* locgrnhe */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6195 /* locgrnl */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6203 /* locgrnle */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6212 /* locgrnlh */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6221 /* locgrnm */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6229 /* locgrno */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6237 /* locgrnp */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6245 /* locgrnz */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6253 /* locgro */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6260 /* locgrp */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6267 /* locgrz */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6274 /* locgz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6274 /* locgz */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 6280 /* loch */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6280 /* loch */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6285 /* loche */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6285 /* loche */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6291 /* lochhi */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6298 /* lochhie */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6306 /* lochhih */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6314 /* lochhihe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6323 /* lochhil */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6331 /* lochhile */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6340 /* lochhilh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6349 /* lochhim */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6357 /* lochhine */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6366 /* lochhinh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6375 /* lochhinhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6385 /* lochhinl */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6394 /* lochhinle */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6404 /* lochhinlh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6414 /* lochhinm */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6423 /* lochhino */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6432 /* lochhinp */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6441 /* lochhinz */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6450 /* lochhio */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6458 /* lochhip */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6466 /* lochhiz */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6474 /* lochi */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6480 /* lochie */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6487 /* lochih */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6494 /* lochihe */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6502 /* lochil */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6509 /* lochile */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6517 /* lochilh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6525 /* lochim */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6532 /* lochine */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6540 /* lochinh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6548 /* lochinhe */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6557 /* lochinl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6565 /* lochinle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6574 /* lochinlh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6583 /* lochinm */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6591 /* lochino */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6599 /* lochinp */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6607 /* lochinz */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6615 /* lochio */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6622 /* lochip */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6629 /* lochiz */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond2 },
  { 6636 /* locl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6636 /* locl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6641 /* locle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6641 /* locle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6647 /* loclh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6647 /* loclh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6653 /* locm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6653 /* locm */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6658 /* locne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6658 /* locne */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6664 /* locnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6664 /* locnh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6670 /* locnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6670 /* locnhe */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6677 /* locnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6677 /* locnl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6683 /* locnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6683 /* locnle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6690 /* locnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6690 /* locnlh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6697 /* locnm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6697 /* locnm */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6703 /* locno */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6703 /* locno */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6709 /* locnp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6709 /* locnp */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6715 /* locnz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6715 /* locnz */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6721 /* loco */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6721 /* loco */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6726 /* locp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6726 /* locp */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6731 /* locr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6736 /* locre */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6742 /* locrh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6748 /* locrhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6755 /* locrl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6761 /* locrle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6768 /* locrlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6775 /* locrm */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6781 /* locrne */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6788 /* locrnh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6795 /* locrnhe */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6803 /* locrnl */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6810 /* locrnle */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6818 /* locrnlh */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6826 /* locrnm */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6833 /* locrno */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6840 /* locrnp */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6847 /* locrnz */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6854 /* locro */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6860 /* locrp */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6866 /* locrz */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6872 /* locz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 6872 /* locz */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 6877 /* lpctl */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 6883 /* lpd */, 6 /* 1, 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureInterlockedAccess1 },
  { 6883 /* lpd */, 1 /* 0 */, MCK_GR128, AMFBS_FeatureInterlockedAccess1 },
  { 6887 /* lpdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 6893 /* lpdfr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 6899 /* lpdg */, 6 /* 1, 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureInterlockedAccess1 },
  { 6899 /* lpdg */, 1 /* 0 */, MCK_GR128, AMFBS_FeatureInterlockedAccess1 },
  { 6904 /* lpdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 6909 /* lpebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 6915 /* lper */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 6920 /* lpgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 6920 /* lpgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 6926 /* lpgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 6931 /* lpp */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 6935 /* lpq */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 6935 /* lpq */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 6939 /* lpr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 6943 /* lpsw */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 6948 /* lpswe */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 6954 /* lptea */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_None },
  { 6960 /* lpxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 6966 /* lpxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 6971 /* lr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 6974 /* lra */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 6974 /* lra */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 6978 /* lrag */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 6978 /* lrag */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 6983 /* lray */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 6983 /* lray */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 6988 /* lrdr */, 2 /* 1 */, MCK_FP128, AMFBS_None },
  { 6988 /* lrdr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 6993 /* lrer */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 6993 /* lrer */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 6998 /* lrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 6998 /* lrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 7002 /* lrv */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7002 /* lrv */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7006 /* lrvg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7006 /* lrvg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7011 /* lrvgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7017 /* lrvh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7017 /* lrvh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7022 /* lrvr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 7027 /* lsctl */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7033 /* lt */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7033 /* lt */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7036 /* ltdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7042 /* ltdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7047 /* ltdtr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7053 /* ltebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7059 /* lter */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7064 /* ltg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7064 /* ltg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7068 /* ltgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7068 /* ltgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7073 /* ltgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 7073 /* ltgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7079 /* ltgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7084 /* ltr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 7088 /* ltxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 7094 /* ltxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 7099 /* ltxtr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 7105 /* lura */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7105 /* lura */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 7110 /* lurag */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7116 /* lxd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7116 /* lxd */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7120 /* lxdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7120 /* lxdb */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7125 /* lxdbr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7125 /* lxdbr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7131 /* lxdr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7131 /* lxdr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7136 /* lxdtr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7136 /* lxdtr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7142 /* lxe */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7142 /* lxe */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7146 /* lxeb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7146 /* lxeb */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7151 /* lxebr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7151 /* lxebr */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 7157 /* lxer */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7157 /* lxer */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 7162 /* lxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 7166 /* ly */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7166 /* ly */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7169 /* lzdr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7174 /* lzer */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 7179 /* lzrf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndZeroRightmostByte },
  { 7179 /* lzrf */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadAndZeroRightmostByte },
  { 7184 /* lzrg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureLoadAndZeroRightmostByte },
  { 7184 /* lzrg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadAndZeroRightmostByte },
  { 7189 /* lzxr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7194 /* m */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7194 /* m */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7196 /* mad */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7196 /* mad */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7200 /* madb */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7200 /* madb */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7205 /* madbr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7211 /* madr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7216 /* mae */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7216 /* mae */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7220 /* maeb */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7220 /* maeb */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7225 /* maebr */, 7 /* 0, 1, 2 */, MCK_FP32, AMFBS_None },
  { 7231 /* maer */, 7 /* 0, 1, 2 */, MCK_FP32, AMFBS_None },
  { 7236 /* may */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7236 /* may */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7236 /* may */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7240 /* mayh */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7240 /* mayh */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7245 /* mayhr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7251 /* mayl */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7251 /* mayl */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7256 /* maylr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7262 /* mayr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7262 /* mayr */, 6 /* 1, 2 */, MCK_FP64, AMFBS_None },
  { 7267 /* mc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7270 /* md */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7270 /* md */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7273 /* mdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7273 /* mdb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7277 /* mdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7282 /* mde */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7282 /* mde */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7286 /* mdeb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7286 /* mdeb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7291 /* mdebr */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 7291 /* mdebr */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7297 /* mder */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 7297 /* mder */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7302 /* mdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7306 /* mdtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7311 /* mdtra */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 7317 /* me */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7317 /* me */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7320 /* mee */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7320 /* mee */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 7324 /* meeb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7324 /* meeb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 7329 /* meebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7335 /* meer */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7340 /* mer */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 7340 /* mer */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 7344 /* mfy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7344 /* mfy */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7348 /* mg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7348 /* mg */, 1 /* 0 */, MCK_GR128, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7351 /* mgh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7351 /* mgh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7355 /* mghi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7360 /* mgrk */, 1 /* 0 */, MCK_GR128, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7360 /* mgrk */, 6 /* 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7365 /* mh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7365 /* mh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7368 /* mhi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7372 /* mhy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7372 /* mhy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7376 /* ml */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7376 /* ml */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7379 /* mlg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7379 /* mlg */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7383 /* mlgr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7383 /* mlgr */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 7388 /* mlr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7388 /* mlr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 7392 /* mp */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 7395 /* mr */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7395 /* mr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 7398 /* ms */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7398 /* ms */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7401 /* msc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7401 /* msc */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7405 /* msch */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7410 /* msd */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7410 /* msd */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7414 /* msdb */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7414 /* msdb */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7419 /* msdbr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7425 /* msdr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7430 /* mse */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7430 /* mse */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7434 /* mseb */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7434 /* mseb */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 7439 /* msebr */, 7 /* 0, 1, 2 */, MCK_FP32, AMFBS_None },
  { 7445 /* mser */, 7 /* 0, 1, 2 */, MCK_FP32, AMFBS_None },
  { 7450 /* msfi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7455 /* msg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7455 /* msg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7459 /* msgc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7459 /* msgc */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7464 /* msgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7464 /* msgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7469 /* msgfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7475 /* msgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 7475 /* msgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7481 /* msgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7486 /* msgrkc */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7493 /* msr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 7497 /* msrkc */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions2 },
  { 7503 /* msta */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 7508 /* msy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7508 /* msy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7512 /* mvc */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7512 /* mvc */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7516 /* mvcdk */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7522 /* mvcin */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7522 /* mvcin */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7528 /* mvck */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7528 /* mvck */, 1 /* 0 */, MCK_BDRAddr64Disp12, AMFBS_None },
  { 7528 /* mvck */, 4 /* 2 */, MCK_GR64, AMFBS_None },
  { 7533 /* mvcl */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 7538 /* mvcle */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 7538 /* mvcle */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 7544 /* mvclu */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 7544 /* mvclu */, 3 /* 0, 1 */, MCK_GR128, AMFBS_None },
  { 7550 /* mvcos */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7550 /* mvcos */, 4 /* 2 */, MCK_GR64, AMFBS_None },
  { 7556 /* mvcp */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7556 /* mvcp */, 1 /* 0 */, MCK_BDRAddr64Disp12, AMFBS_None },
  { 7556 /* mvcp */, 4 /* 2 */, MCK_GR64, AMFBS_None },
  { 7561 /* mvcrl */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7567 /* mvcs */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7567 /* mvcs */, 1 /* 0 */, MCK_BDRAddr64Disp12, AMFBS_None },
  { 7567 /* mvcs */, 4 /* 2 */, MCK_GR64, AMFBS_None },
  { 7572 /* mvcsk */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7578 /* mvghi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7584 /* mvhhi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7590 /* mvhi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7595 /* mvi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7599 /* mviy */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 7604 /* mvn */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7604 /* mvn */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7608 /* mvo */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 7612 /* mvpg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7617 /* mvst */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7622 /* mvz */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7622 /* mvz */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7626 /* mxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 7631 /* mxd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7631 /* mxd */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7635 /* mxdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7635 /* mxdb */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7640 /* mxdbr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7640 /* mxdbr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7646 /* mxdr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7646 /* mxdr */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7651 /* mxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 7655 /* mxtr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 7660 /* mxtra */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 7666 /* my */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7666 /* my */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7666 /* my */, 2 /* 1 */, MCK_FP64, AMFBS_None },
  { 7669 /* myh */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7669 /* myh */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7673 /* myhr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7678 /* myl */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7678 /* myl */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 7682 /* mylr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 7687 /* myr */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 7687 /* myr */, 6 /* 1, 2 */, MCK_FP64, AMFBS_None },
  { 7691 /* n */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7691 /* n */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7693 /* nc */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7693 /* nc */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7696 /* ncgrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7702 /* ncrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7707 /* ng */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7707 /* ng */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7710 /* ngr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7714 /* ngrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 7719 /* ni */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7727 /* nihf */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 7732 /* nihh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 7737 /* nihl */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 7742 /* nilf */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7747 /* nilh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7752 /* nill */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7757 /* niy */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 7761 /* nngrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7767 /* nnrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7772 /* nogrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7778 /* nop */, 1 /* 0 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7782 /* nopr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7787 /* nork */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7792 /* nr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 7795 /* nrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 7799 /* ntstg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureTransactionalExecution },
  { 7799 /* ntstg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureTransactionalExecution },
  { 7805 /* nxgrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7811 /* nxrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7816 /* ny */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7816 /* ny */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7819 /* o */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 7819 /* o */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7821 /* oc */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7821 /* oc */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7824 /* ocgrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7830 /* ocrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7835 /* og */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7835 /* og */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7838 /* ogr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7842 /* ogrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 7847 /* oi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7850 /* oihf */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 7855 /* oihh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 7860 /* oihl */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 7865 /* oilf */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7870 /* oilh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7875 /* oill */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7880 /* oiy */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 7884 /* or */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 7887 /* ork */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 7891 /* oy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7891 /* oy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7894 /* pack */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 7904 /* pc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7917 /* pfd */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 7921 /* pfdrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 7927 /* pfmf */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7927 /* pfmf */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 7937 /* pgin */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7942 /* pgout */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 7948 /* pka */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7948 /* pka */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7952 /* pku */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7952 /* pku */, 2 /* 1 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 7956 /* plo */, 10 /* 1, 3 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 7956 /* plo */, 5 /* 0, 2 */, MCK_GR64, AMFBS_None },
  { 7960 /* popcnt */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeaturePopulationCount },
  { 7960 /* popcnt */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 7967 /* ppa */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureProcessorAssist },
  { 7971 /* ppno */, 3 /* 0, 1 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist5 },
  { 7979 /* prno */, 3 /* 0, 1 */, MCK_GR128, AMFBS_FeatureMessageSecurityAssist7 },
  { 7984 /* pt */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 7984 /* pt */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 7987 /* ptf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 7996 /* pti */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8005 /* qadtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 8011 /* qaxtr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 8017 /* qctri */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8023 /* qsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8032 /* risbg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8038 /* risbgn */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions },
  { 8045 /* risbhg */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureHighWord },
  { 8045 /* risbhg */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 8052 /* risblg */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 8052 /* risblg */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureHighWord },
  { 8059 /* rll */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 8059 /* rll */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 8063 /* rllg */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 8063 /* rllg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8068 /* rnsbg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8074 /* rosbg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8080 /* rp */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8083 /* rrbe */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8083 /* rrbe */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 8088 /* rrbm */, 3 /* 0, 1 */, MCK_GR64, AMFBS_FeatureResetReferenceBitsMultiple },
  { 8093 /* rrdtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 8099 /* rrxtr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 8110 /* rxsbg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8116 /* s */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8116 /* s */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8118 /* sac */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8122 /* sacf */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8149 /* sar */, 1 /* 0 */, MCK_AR32, AMFBS_None },
  { 8149 /* sar */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 8153 /* scctr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8164 /* sck */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8168 /* sckc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8179 /* sd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8179 /* sd */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 8182 /* sdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8182 /* sdb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 8186 /* sdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 8191 /* sdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 8195 /* sdtr */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_None },
  { 8200 /* sdtra */, 7 /* 0, 1, 2 */, MCK_FP64, AMFBS_FeatureFPExtension },
  { 8206 /* se */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8206 /* se */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 8209 /* seb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8209 /* seb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 8213 /* sebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 8218 /* selfhr */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8225 /* selfhre */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8233 /* selfhrh */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8241 /* selfhrhe */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8250 /* selfhrl */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8258 /* selfhrle */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8267 /* selfhrlh */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8276 /* selfhrm */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8284 /* selfhrne */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8293 /* selfhrnh */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8302 /* selfhrnhe */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8312 /* selfhrnl */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8321 /* selfhrnle */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8331 /* selfhrnlh */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8341 /* selfhrnm */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8350 /* selfhrno */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8359 /* selfhrnp */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8368 /* selfhrnz */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8377 /* selfhro */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8385 /* selfhrp */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8393 /* selfhrz */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8401 /* selgr */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8407 /* selgre */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8414 /* selgrh */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8421 /* selgrhe */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8429 /* selgrl */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8436 /* selgrle */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8444 /* selgrlh */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8452 /* selgrm */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8459 /* selgrne */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8467 /* selgrnh */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8475 /* selgrnhe */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8484 /* selgrnl */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8492 /* selgrnle */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8501 /* selgrnlh */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8510 /* selgrnm */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8518 /* selgrno */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8526 /* selgrnp */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8534 /* selgrnz */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8542 /* selgro */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8549 /* selgrp */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8556 /* selgrz */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8563 /* selr */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8568 /* selre */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8574 /* selrh */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8580 /* selrhe */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8587 /* selrl */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8593 /* selrle */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8600 /* selrlh */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8607 /* selrm */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8613 /* selrne */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8620 /* selrnh */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8627 /* selrnhe */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8635 /* selrnl */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8642 /* selrnle */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8650 /* selrnlh */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8658 /* selrnm */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8665 /* selrno */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8672 /* selrnp */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8679 /* selrnz */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8686 /* selro */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8692 /* selrp */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8698 /* selrz */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureMiscellaneousExtensions3 },
  { 8704 /* ser */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 8708 /* sfasr */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8714 /* sfpc */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8719 /* sg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8719 /* sg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8722 /* sgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8722 /* sgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8726 /* sgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 8726 /* sgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8731 /* sgh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureMiscellaneousExtensions2 },
  { 8731 /* sgh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureMiscellaneousExtensions2 },
  { 8735 /* sgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8739 /* sgrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 8744 /* sh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8744 /* sh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8747 /* shhhr */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 8753 /* shhlr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 8753 /* shhlr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 8759 /* shy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8759 /* shy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8763 /* sie */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8767 /* siga */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8772 /* sigp */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8772 /* sigp */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8777 /* sl */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8777 /* sl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8780 /* sla */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 8780 /* sla */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8784 /* slag */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 8784 /* slag */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8789 /* slak */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_FeatureDistinctOps },
  { 8789 /* slak */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 8794 /* slb */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8794 /* slb */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8798 /* slbg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8798 /* slbg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8803 /* slbgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8809 /* slbr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 8814 /* slda */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 8814 /* slda */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 8819 /* sldl */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 8819 /* sldl */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 8824 /* sldt */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8824 /* sldt */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 8829 /* slfi */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8834 /* slg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8834 /* slg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8838 /* slgf */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8838 /* slgf */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8843 /* slgfi */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8849 /* slgfr */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 8849 /* slgfr */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 8855 /* slgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8860 /* slgrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 8866 /* slhhhr */, 7 /* 0, 1, 2 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 8873 /* slhhlr */, 4 /* 2 */, MCK_GR32, AMFBS_FeatureHighWord },
  { 8873 /* slhhlr */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 8880 /* sll */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 8880 /* sll */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8884 /* sllg */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 8884 /* sllg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8889 /* sllk */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_FeatureDistinctOps },
  { 8889 /* sllk */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 8894 /* slr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 8898 /* slrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 8903 /* slxt */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8903 /* slxt */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 8908 /* sly */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 8908 /* sly */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8912 /* sortl */, 3 /* 0, 1 */, MCK_GR128, AMFBS_FeatureEnhancedSort },
  { 8918 /* sp */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 8921 /* spctr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 8927 /* spka */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8932 /* spm */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 8936 /* spt */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8940 /* spx */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 8944 /* sqd */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8944 /* sqd */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 8948 /* sqdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8948 /* sqdb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 8953 /* sqdbr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 8959 /* sqdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 8964 /* sqe */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8964 /* sqe */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 8968 /* sqeb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 8968 /* sqeb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 8973 /* sqebr */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 8979 /* sqer */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 8984 /* sqxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 8990 /* sqxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 8995 /* sr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 8998 /* sra */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 8998 /* sra */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9002 /* srag */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 9002 /* srag */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 9007 /* srak */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_FeatureDistinctOps },
  { 9007 /* srak */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 9012 /* srda */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 9012 /* srda */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 9017 /* srdl */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 9017 /* srdl */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 9022 /* srdt */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9022 /* srdt */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 9027 /* srk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 9031 /* srl */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 9031 /* srl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9035 /* srlg */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_None },
  { 9035 /* srlg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 9040 /* srlk */, 4 /* 2 */, MCK_BDAddr32Disp20, AMFBS_FeatureDistinctOps },
  { 9040 /* srlk */, 3 /* 0, 1 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 9045 /* srnm */, 1 /* 0 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 9050 /* srnmb */, 1 /* 0 */, MCK_BDAddr32Disp12, AMFBS_FeatureFPExtension },
  { 9056 /* srnmt */, 1 /* 0 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 9062 /* srp */, 2 /* 1 */, MCK_BDAddr32Disp12, AMFBS_None },
  { 9062 /* srp */, 1 /* 0 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 9066 /* srst */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 9071 /* srstu */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 9077 /* srxt */, 4 /* 2 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9077 /* srxt */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 9082 /* ssair */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 9088 /* ssar */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9093 /* ssch */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9098 /* sske */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9098 /* sske */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 9098 /* sske */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9098 /* sske */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 9103 /* ssm */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9107 /* st */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9107 /* st */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9110 /* stam */, 3 /* 0, 1 */, MCK_AR32, AMFBS_None },
  { 9110 /* stam */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9115 /* stamy */, 3 /* 0, 1 */, MCK_AR32, AMFBS_None },
  { 9115 /* stamy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9121 /* stap */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9126 /* stc */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9126 /* stc */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9130 /* stch */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 9130 /* stch */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 9135 /* stck */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9140 /* stckc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9146 /* stcke */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9152 /* stckf */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9158 /* stcm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9158 /* stcm */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9163 /* stcmh */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9163 /* stcmh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 9169 /* stcmy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9169 /* stcmy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9175 /* stcps */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9181 /* stcrw */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9187 /* stctg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9187 /* stctg */, 3 /* 0, 1 */, MCK_CR64, AMFBS_None },
  { 9193 /* stctl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9193 /* stctl */, 3 /* 0, 1 */, MCK_CR64, AMFBS_None },
  { 9199 /* stcy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9199 /* stcy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9204 /* std */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9204 /* std */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 9208 /* stdrv */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 9208 /* stdrv */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 9214 /* stdy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9214 /* stdy */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 9219 /* ste */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9219 /* ste */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 9223 /* sterv */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 9223 /* sterv */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 9229 /* stey */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9229 /* stey */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 9234 /* stfh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 9234 /* stfh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 9239 /* stfl */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9244 /* stfle */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9250 /* stfpc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9256 /* stg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9256 /* stg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 9260 /* stgrl */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 9260 /* stgrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 9266 /* stgsc */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureGuardedStorage },
  { 9266 /* stgsc */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureGuardedStorage },
  { 9272 /* sth */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9272 /* sth */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9276 /* sthh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_FeatureHighWord },
  { 9276 /* sthh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureHighWord },
  { 9281 /* sthrl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9281 /* sthrl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 9287 /* sthy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9287 /* sthy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9292 /* stidp */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9298 /* stm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9298 /* stm */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 9302 /* stmg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9302 /* stmg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 9307 /* stmh */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9307 /* stmh */, 3 /* 0, 1 */, MCK_GRH32, AMFBS_None },
  { 9312 /* stmy */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 9312 /* stmy */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 9317 /* stnsm */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9323 /* stoc */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9323 /* stoc */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9328 /* stoce */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9328 /* stoce */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9334 /* stocfh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9334 /* stocfh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9341 /* stocfhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9341 /* stocfhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9349 /* stocfhh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9349 /* stocfhh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9357 /* stocfhhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9357 /* stocfhhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9366 /* stocfhl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9366 /* stocfhl */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9374 /* stocfhle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9374 /* stocfhle */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9383 /* stocfhlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9383 /* stocfhlh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9392 /* stocfhm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9392 /* stocfhm */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9400 /* stocfhne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9400 /* stocfhne */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9409 /* stocfhnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9409 /* stocfhnh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9418 /* stocfhnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9418 /* stocfhnhe */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9428 /* stocfhnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9428 /* stocfhnl */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9437 /* stocfhnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9437 /* stocfhnle */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9447 /* stocfhnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9447 /* stocfhnlh */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9457 /* stocfhnm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9457 /* stocfhnm */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9466 /* stocfhno */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9466 /* stocfhno */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9475 /* stocfhnp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9475 /* stocfhnp */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9484 /* stocfhnz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9484 /* stocfhnz */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9493 /* stocfho */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9493 /* stocfho */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9501 /* stocfhp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9501 /* stocfhp */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9509 /* stocfhz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond2 },
  { 9509 /* stocfhz */, 1 /* 0 */, MCK_GRH32, AMFBS_FeatureLoadStoreOnCond2 },
  { 9517 /* stocg */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9517 /* stocg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9523 /* stocge */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9523 /* stocge */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9530 /* stocgh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9530 /* stocgh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9537 /* stocghe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9537 /* stocghe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9545 /* stocgl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9545 /* stocgl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9552 /* stocgle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9552 /* stocgle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9560 /* stocglh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9560 /* stocglh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9568 /* stocgm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9568 /* stocgm */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9575 /* stocgne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9575 /* stocgne */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9583 /* stocgnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9583 /* stocgnh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9591 /* stocgnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9591 /* stocgnhe */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9600 /* stocgnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9600 /* stocgnl */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9608 /* stocgnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9608 /* stocgnle */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9617 /* stocgnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9617 /* stocgnlh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9626 /* stocgnm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9626 /* stocgnm */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9634 /* stocgno */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9634 /* stocgno */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9642 /* stocgnp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9642 /* stocgnp */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9650 /* stocgnz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9650 /* stocgnz */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9658 /* stocgo */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9658 /* stocgo */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9665 /* stocgp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9665 /* stocgp */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9672 /* stocgz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9672 /* stocgz */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureLoadStoreOnCond },
  { 9679 /* stoch */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9679 /* stoch */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9685 /* stoche */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9685 /* stoche */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9692 /* stocl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9692 /* stocl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9698 /* stocle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9698 /* stocle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9705 /* stoclh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9705 /* stoclh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9712 /* stocm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9712 /* stocm */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9718 /* stocne */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9718 /* stocne */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9725 /* stocnh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9725 /* stocnh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9732 /* stocnhe */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9732 /* stocnhe */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9740 /* stocnl */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9740 /* stocnl */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9747 /* stocnle */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9747 /* stocnle */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9755 /* stocnlh */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9755 /* stocnlh */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9763 /* stocnm */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9763 /* stocnm */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9770 /* stocno */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9770 /* stocno */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9777 /* stocnp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9777 /* stocnp */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9784 /* stocnz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9784 /* stocnz */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9791 /* stoco */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9791 /* stoco */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9797 /* stocp */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9797 /* stocp */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9803 /* stocz */, 2 /* 1 */, MCK_BDAddr64Disp20, AMFBS_FeatureLoadStoreOnCond },
  { 9803 /* stocz */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureLoadStoreOnCond },
  { 9809 /* stosm */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9815 /* stpq */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9815 /* stpq */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 9820 /* stpt */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9825 /* stpx */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9830 /* strag */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9836 /* strl */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9836 /* strl */, 2 /* 1 */, MCK_PCRel32, AMFBS_None },
  { 9841 /* strv */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9841 /* strv */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9846 /* strvg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9846 /* strvg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 9852 /* strvh */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9852 /* strvh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9858 /* stsch */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9864 /* stsi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 9869 /* stura */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9869 /* stura */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 9875 /* sturg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 9881 /* sty */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9881 /* sty */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9885 /* su */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9885 /* su */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 9888 /* sur */, 3 /* 0, 1 */, MCK_FP32, AMFBS_None },
  { 9896 /* sw */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9896 /* sw */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 9899 /* swr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 9903 /* sxbr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 9908 /* sxr */, 3 /* 0, 1 */, MCK_FP128, AMFBS_None },
  { 9912 /* sxtr */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_None },
  { 9917 /* sxtra */, 7 /* 0, 1, 2 */, MCK_FP128, AMFBS_FeatureFPExtension },
  { 9923 /* sy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 9923 /* sy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 9926 /* tabort */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_FeatureTransactionalExecution },
  { 9937 /* tar */, 1 /* 0 */, MCK_AR32, AMFBS_None },
  { 9937 /* tar */, 2 /* 1 */, MCK_GR32, AMFBS_None },
  { 9941 /* tb */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 9944 /* tbdr */, 5 /* 0, 2 */, MCK_FP64, AMFBS_None },
  { 9949 /* tbedr */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 9949 /* tbedr */, 4 /* 2 */, MCK_FP64, AMFBS_None },
  { 9955 /* tbegin */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_FeatureTransactionalExecution },
  { 9962 /* tbeginc */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_FeatureTransactionalExecution },
  { 9970 /* tcdb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9970 /* tcdb */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 9975 /* tceb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9975 /* tceb */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 9980 /* tcxb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9980 /* tcxb */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 9985 /* tdcdt */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9985 /* tdcdt */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 9991 /* tdcet */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9991 /* tdcet */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 9997 /* tdcxt */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 9997 /* tdcxt */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 10003 /* tdgdt */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 10003 /* tdgdt */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 10009 /* tdget */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 10009 /* tdget */, 1 /* 0 */, MCK_FP32, AMFBS_None },
  { 10015 /* tdgxt */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 10015 /* tdgxt */, 1 /* 0 */, MCK_FP128, AMFBS_None },
  { 10026 /* thder */, 2 /* 1 */, MCK_FP32, AMFBS_None },
  { 10026 /* thder */, 1 /* 0 */, MCK_FP64, AMFBS_None },
  { 10032 /* thdr */, 3 /* 0, 1 */, MCK_FP64, AMFBS_None },
  { 10037 /* tm */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10040 /* tmh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 10044 /* tmhh */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 10049 /* tmhl */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 10054 /* tml */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 10058 /* tmlh */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 10063 /* tmll */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 10068 /* tmy */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 10072 /* tp */, 1 /* 0 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 10075 /* tpi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10079 /* tprot */, 3 /* 0, 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10085 /* tr */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10085 /* tr */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 10088 /* trace */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10088 /* trace */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 10094 /* tracg */, 4 /* 2 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 10094 /* tracg */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 10106 /* trap4 */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10112 /* tre */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10112 /* tre */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10116 /* troo */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10116 /* troo */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10116 /* troo */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10116 /* troo */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10121 /* trot */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10121 /* trot */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10121 /* trot */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10121 /* trot */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10126 /* trt */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10126 /* trt */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 10130 /* trte */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10130 /* trte */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10130 /* trte */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10130 /* trte */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10135 /* trto */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10135 /* trto */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10135 /* trto */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10135 /* trto */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10140 /* trtr */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10140 /* trtr */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 10145 /* trtre */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10145 /* trtre */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10145 /* trtre */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10145 /* trtre */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10151 /* trtt */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10151 /* trtt */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10151 /* trtt */, 1 /* 0 */, MCK_GR128, AMFBS_None },
  { 10151 /* trtt */, 2 /* 1 */, MCK_GR64, AMFBS_None },
  { 10156 /* ts */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10159 /* tsch */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10164 /* unpk */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
  { 10169 /* unpka */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10169 /* unpka */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 10175 /* unpku */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 10175 /* unpku */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 10185 /* va */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10188 /* vab */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10192 /* vac */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 10196 /* vacc */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10201 /* vaccb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10207 /* vaccc */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 10213 /* vacccq */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 10220 /* vaccf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10226 /* vaccg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10232 /* vacch */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10238 /* vaccq */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10244 /* vacq */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 10249 /* vaf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10253 /* vag */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10257 /* vah */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10261 /* vap */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10265 /* vaq */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10269 /* vavg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10274 /* vavgb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10280 /* vavgf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10286 /* vavgg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10292 /* vavgh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10298 /* vavgl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10304 /* vavglb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10311 /* vavglf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10318 /* vavglg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10325 /* vavglh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10332 /* vbperm */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 10339 /* vcdg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10344 /* vcdgb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10350 /* vcdlg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10356 /* vcdlgb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10363 /* vcefb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10369 /* vcelfb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10376 /* vceq */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10381 /* vceqb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10387 /* vceqbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10394 /* vceqf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10400 /* vceqfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10407 /* vceqg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10413 /* vceqgs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10420 /* vceqh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10426 /* vceqhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10433 /* vcfeb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10439 /* vcfpl */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10445 /* vcfps */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10451 /* vcgd */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10456 /* vcgdb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10462 /* vch */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10466 /* vchb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10471 /* vchbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10477 /* vchf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10482 /* vchfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10488 /* vchg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10493 /* vchgs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10499 /* vchh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10504 /* vchhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10510 /* vchl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10515 /* vchlb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10521 /* vchlbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10528 /* vchlf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10534 /* vchlfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10541 /* vchlg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10547 /* vchlgs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10554 /* vchlh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10560 /* vchlhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10567 /* vcksm */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10573 /* vclfeb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10580 /* vclfp */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10586 /* vclgd */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10592 /* vclgdb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10599 /* vclz */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10604 /* vclzb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10610 /* vclzf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10616 /* vclzg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10622 /* vclzh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10628 /* vcp */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10632 /* vcsfp */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 10638 /* vctz */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10643 /* vctzb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10649 /* vctzf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10655 /* vctzg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10661 /* vctzh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10667 /* vcvb */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureVectorPackedDecimal },
  { 10667 /* vcvb */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10667 /* vcvb */, 1 /* 0 */, MCK_GR32, AMFBS_FeatureVectorPackedDecimalEnhancement },
  { 10667 /* vcvb */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimalEnhancement },
  { 10672 /* vcvbg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVectorPackedDecimal },
  { 10672 /* vcvbg */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10672 /* vcvbg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVectorPackedDecimalEnhancement },
  { 10672 /* vcvbg */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimalEnhancement },
  { 10678 /* vcvd */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVectorPackedDecimal },
  { 10678 /* vcvd */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10683 /* vcvdg */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureVectorPackedDecimal },
  { 10683 /* vcvdg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10689 /* vdp */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 10693 /* vec */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10697 /* vecb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10702 /* vecf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10707 /* vecg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10712 /* vech */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10717 /* vecl */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10722 /* veclb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10728 /* veclf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10734 /* veclg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10740 /* veclh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10746 /* verim */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10752 /* verimb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10759 /* verimf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10766 /* verimg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10773 /* verimh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10780 /* verll */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10780 /* verll */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10786 /* verllb */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10786 /* verllb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10793 /* verllf */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10793 /* verllf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10800 /* verllg */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10800 /* verllg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10807 /* verllh */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10807 /* verllh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10814 /* verllv */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10821 /* verllvb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10829 /* verllvf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10837 /* verllvg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10845 /* verllvh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10853 /* vesl */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10853 /* vesl */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10858 /* veslb */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10858 /* veslb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10864 /* veslf */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10864 /* veslf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10870 /* veslg */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10870 /* veslg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10876 /* veslh */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10876 /* veslh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10882 /* veslv */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10888 /* veslvb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10895 /* veslvf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10902 /* veslvg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10909 /* veslvh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10916 /* vesra */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10916 /* vesra */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10922 /* vesrab */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10922 /* vesrab */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10929 /* vesraf */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10929 /* vesraf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10936 /* vesrag */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10936 /* vesrag */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10943 /* vesrah */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10943 /* vesrah */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10950 /* vesrav */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10957 /* vesravb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10965 /* vesravf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10973 /* vesravg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10981 /* vesravh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 10989 /* vesrl */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10989 /* vesrl */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 10995 /* vesrlb */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 10995 /* vesrlb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11002 /* vesrlf */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 11002 /* vesrlf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11009 /* vesrlg */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 11009 /* vesrlg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11016 /* vesrlh */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 11016 /* vesrlh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11023 /* vesrlv */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11030 /* vesrlvb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11038 /* vesrlvf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11046 /* vesrlvg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11054 /* vesrlvh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11062 /* vfa */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11066 /* vfadb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11072 /* vfae */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11072 /* vfae */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11077 /* vfaeb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11077 /* vfaeb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11083 /* vfaebs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11083 /* vfaebs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11090 /* vfaef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11090 /* vfaef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11096 /* vfaefs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11096 /* vfaefs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11103 /* vfaeh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11103 /* vfaeh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11109 /* vfaehs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11109 /* vfaehs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11116 /* vfaezb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11116 /* vfaezb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11123 /* vfaezbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11123 /* vfaezbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11131 /* vfaezf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11131 /* vfaezf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11138 /* vfaezfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11138 /* vfaezfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11146 /* vfaezh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11146 /* vfaezh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11153 /* vfaezhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11153 /* vfaezhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11161 /* vfasb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11167 /* vfce */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11172 /* vfcedb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11179 /* vfcedbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11187 /* vfcesb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11194 /* vfcesbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11202 /* vfch */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11207 /* vfchdb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11214 /* vfchdbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11222 /* vfche */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11228 /* vfchedb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11236 /* vfchedbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11245 /* vfchesb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11253 /* vfchesbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11262 /* vfchsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11269 /* vfchsbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11277 /* vfd */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11281 /* vfddb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11287 /* vfdsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11293 /* vfee */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11293 /* vfee */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11298 /* vfeeb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11298 /* vfeeb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11304 /* vfeebs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11311 /* vfeef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11311 /* vfeef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11317 /* vfeefs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11324 /* vfeeh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11324 /* vfeeh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11330 /* vfeehs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11337 /* vfeezb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11344 /* vfeezbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11352 /* vfeezf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11359 /* vfeezfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11367 /* vfeezh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11374 /* vfeezhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11382 /* vfene */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11382 /* vfene */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11388 /* vfeneb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11388 /* vfeneb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11395 /* vfenebs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11403 /* vfenef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11403 /* vfenef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11410 /* vfenefs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11418 /* vfeneh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11418 /* vfeneh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11425 /* vfenehs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11433 /* vfenezb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11441 /* vfenezbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11450 /* vfenezf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11458 /* vfenezfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11467 /* vfenezh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11475 /* vfenezhs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11484 /* vfi */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11488 /* vfidb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11494 /* vfisb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11500 /* vfkedb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11507 /* vfkedbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11515 /* vfkesb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11522 /* vfkesbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11530 /* vfkhdb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11537 /* vfkhdbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11545 /* vfkhedb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11553 /* vfkhedbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11562 /* vfkhesb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11570 /* vfkhesbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11579 /* vfkhsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11586 /* vfkhsbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11594 /* vflcdb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11601 /* vflcsb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11608 /* vfll */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11613 /* vflls */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11619 /* vflndb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11626 /* vflnsb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11633 /* vflpdb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11640 /* vflpsb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11647 /* vflr */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11652 /* vflrd */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11658 /* vfm */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11662 /* vfma */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11667 /* vfmadb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11674 /* vfmasb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11681 /* vfmax */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11687 /* vfmaxdb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11695 /* vfmaxsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11703 /* vfmdb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11709 /* vfmin */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11715 /* vfmindb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11723 /* vfminsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11731 /* vfms */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11736 /* vfmsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11742 /* vfmsdb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11749 /* vfmssb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11756 /* vfnma */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11762 /* vfnmadb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11770 /* vfnmasb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11778 /* vfnms */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11784 /* vfnmsdb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11792 /* vfnmssb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11800 /* vfpso */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11806 /* vfpsodb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11814 /* vfpsosb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11822 /* vfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11826 /* vfsdb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11832 /* vfsq */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11837 /* vfsqdb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11844 /* vfsqsb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11851 /* vfssb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11857 /* vftci */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11863 /* vftcidb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11871 /* vftcisb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 11879 /* vgbm */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11884 /* vgef */, 2 /* 1 */, MCK_BDVAddr64Disp12, AMFBS_FeatureVector },
  { 11884 /* vgef */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11889 /* vgeg */, 2 /* 1 */, MCK_BDVAddr64Disp12, AMFBS_FeatureVector },
  { 11889 /* vgeg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11894 /* vgfm */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11899 /* vgfma */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11905 /* vgfmab */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11912 /* vgfmaf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11919 /* vgfmag */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11926 /* vgfmah */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 11933 /* vgfmb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11939 /* vgfmf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11945 /* vgfmg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11951 /* vgfmh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 11957 /* vgm */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11961 /* vgmb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11966 /* vgmf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11971 /* vgmg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11976 /* vgmh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 11981 /* vistr */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11981 /* vistr */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11987 /* vistrb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11987 /* vistrb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 11994 /* vistrbs */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12002 /* vistrf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12002 /* vistrf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12009 /* vistrfs */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12017 /* vistrh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12017 /* vistrh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12024 /* vistrhs */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12032 /* vl */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12032 /* vl */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12032 /* vl */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12032 /* vl */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12035 /* vlbb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12035 /* vlbb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12040 /* vlbr */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12040 /* vlbr */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12045 /* vlbrf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12045 /* vlbrf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12051 /* vlbrg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12051 /* vlbrg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12057 /* vlbrh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12057 /* vlbrh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12063 /* vlbrq */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12063 /* vlbrq */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12069 /* vlbrrep */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12069 /* vlbrrep */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12077 /* vlbrrepf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12077 /* vlbrrepf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12086 /* vlbrrepg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12086 /* vlbrrepg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12095 /* vlbrreph */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12095 /* vlbrreph */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12104 /* vlc */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12108 /* vlcb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12113 /* vlcf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12118 /* vlcg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12123 /* vlch */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12128 /* vlde */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12133 /* vldeb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12139 /* vleb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12139 /* vleb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12144 /* vlebrf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12144 /* vlebrf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12151 /* vlebrg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12151 /* vlebrg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12158 /* vlebrh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12158 /* vlebrh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12165 /* vled */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12170 /* vledb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12176 /* vlef */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12176 /* vlef */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12181 /* vleg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12181 /* vleg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12186 /* vleh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12186 /* vleh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12191 /* vleib */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12197 /* vleif */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12203 /* vleig */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12209 /* vleih */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12215 /* vler */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12215 /* vler */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12220 /* vlerf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12220 /* vlerf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12226 /* vlerg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12226 /* vlerg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12232 /* vlerh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12232 /* vlerh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12238 /* vlgv */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12238 /* vlgv */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVector },
  { 12238 /* vlgv */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12243 /* vlgvb */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12243 /* vlgvb */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVector },
  { 12243 /* vlgvb */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12249 /* vlgvf */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12249 /* vlgvf */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVector },
  { 12249 /* vlgvf */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12255 /* vlgvg */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12255 /* vlgvg */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVector },
  { 12255 /* vlgvg */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12261 /* vlgvh */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12261 /* vlgvh */, 1 /* 0 */, MCK_GR64, AMFBS_FeatureVector },
  { 12261 /* vlgvh */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12267 /* vlip */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 12272 /* vll */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVector },
  { 12272 /* vll */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVector },
  { 12272 /* vll */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12276 /* vllebrz */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12276 /* vllebrz */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12284 /* vllebrze */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12284 /* vllebrze */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12293 /* vllebrzf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12293 /* vllebrzf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12302 /* vllebrzg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12302 /* vllebrzg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12311 /* vllebrzh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 12311 /* vllebrzh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 12320 /* vllez */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12320 /* vllez */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12326 /* vllezb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12326 /* vllezb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12333 /* vllezf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12333 /* vllezf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12340 /* vllezg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12340 /* vllezg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12347 /* vllezh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12347 /* vllezh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12354 /* vllezlf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements1 },
  { 12354 /* vllezlf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 12362 /* vlm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVector },
  { 12362 /* vlm */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12362 /* vlm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVector },
  { 12362 /* vlm */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12366 /* vlp */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12370 /* vlpb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12375 /* vlpf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12380 /* vlpg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12385 /* vlph */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12390 /* vlr */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12394 /* vlrep */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12394 /* vlrep */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12400 /* vlrepb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12400 /* vlrepb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12407 /* vlrepf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12407 /* vlrepf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12414 /* vlrepg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12414 /* vlrepg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12421 /* vlreph */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 12421 /* vlreph */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12428 /* vlrl */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_FeatureVectorPackedDecimal },
  { 12428 /* vlrl */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 12433 /* vlrlr */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVectorPackedDecimal },
  { 12433 /* vlrlr */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVectorPackedDecimal },
  { 12433 /* vlrlr */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 12439 /* vlvg */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12439 /* vlvg */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureVector },
  { 12439 /* vlvg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12444 /* vlvgb */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12444 /* vlvgb */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVector },
  { 12444 /* vlvgb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12450 /* vlvgf */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12450 /* vlvgf */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVector },
  { 12450 /* vlvgf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12456 /* vlvgg */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12456 /* vlvgg */, 2 /* 1 */, MCK_GR64, AMFBS_FeatureVector },
  { 12456 /* vlvgg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12462 /* vlvgh */, 4 /* 2 */, MCK_BDAddr32Disp12, AMFBS_FeatureVector },
  { 12462 /* vlvgh */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVector },
  { 12462 /* vlvgh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12468 /* vlvgp */, 6 /* 1, 2 */, MCK_GR64, AMFBS_FeatureVector },
  { 12468 /* vlvgp */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 12474 /* vmae */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12479 /* vmaeb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12485 /* vmaef */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12491 /* vmaeh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12497 /* vmah */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12502 /* vmahb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12508 /* vmahf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12514 /* vmahh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12520 /* vmal */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12525 /* vmalb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12531 /* vmale */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12537 /* vmaleb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12544 /* vmalef */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12551 /* vmaleh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12558 /* vmalf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12564 /* vmalh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12570 /* vmalhb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12577 /* vmalhf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12584 /* vmalhh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12591 /* vmalhw */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12598 /* vmalo */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12604 /* vmalob */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12611 /* vmalof */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12618 /* vmaloh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12625 /* vmao */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12630 /* vmaob */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12636 /* vmaof */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12642 /* vmaoh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 12648 /* vme */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12652 /* vmeb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12657 /* vmef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12662 /* vmeh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12667 /* vmh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12671 /* vmhb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12676 /* vmhf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12681 /* vmhh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12686 /* vml */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12690 /* vmlb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12695 /* vmle */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12700 /* vmleb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12706 /* vmlef */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12712 /* vmleh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12718 /* vmlf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12723 /* vmlh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12728 /* vmlhb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12734 /* vmlhf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12740 /* vmlhh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12746 /* vmlhw */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12752 /* vmlo */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12757 /* vmlob */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12763 /* vmlof */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12769 /* vmloh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12775 /* vmn */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12779 /* vmnb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12784 /* vmnf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12789 /* vmng */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12794 /* vmnh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12799 /* vmnl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12804 /* vmnlb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12810 /* vmnlf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12816 /* vmnlg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12822 /* vmnlh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12828 /* vmo */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12832 /* vmob */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12837 /* vmof */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12842 /* vmoh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12847 /* vmp */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 12851 /* vmrh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12856 /* vmrhb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12862 /* vmrhf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12868 /* vmrhg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12874 /* vmrhh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12880 /* vmrl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12885 /* vmrlb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12891 /* vmrlf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12897 /* vmrlg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12903 /* vmrlh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12909 /* vmsl */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 12914 /* vmslg */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 12920 /* vmsp */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 12925 /* vmx */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12929 /* vmxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12934 /* vmxf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12939 /* vmxg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12944 /* vmxh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12949 /* vmxl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12954 /* vmxlb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12960 /* vmxlf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12966 /* vmxlg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12972 /* vmxlh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12978 /* vn */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12981 /* vnc */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12985 /* vnn */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 12989 /* vno */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 12993 /* vnot */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 12998 /* vnx */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 13002 /* vo */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13005 /* voc */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 13009 /* vone */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13014 /* vpdi */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13019 /* vperm */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13025 /* vpk */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13029 /* vpkf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13034 /* vpkg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13039 /* vpkh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13044 /* vpkls */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13050 /* vpklsf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13057 /* vpklsfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13065 /* vpklsg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13072 /* vpklsgs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13080 /* vpklsh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13087 /* vpklshs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13095 /* vpks */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13100 /* vpksf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13106 /* vpksfs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13113 /* vpksg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13119 /* vpksgs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13126 /* vpksh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13132 /* vpkshs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13139 /* vpkz */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_FeatureVectorPackedDecimal },
  { 13139 /* vpkz */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13144 /* vpopct */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13151 /* vpopctb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 13159 /* vpopctf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 13167 /* vpopctg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 13175 /* vpopcth */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 13183 /* vpsop */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13189 /* vrep */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13194 /* vrepb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13200 /* vrepf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13206 /* vrepg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13212 /* vreph */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13218 /* vrepi */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13224 /* vrepib */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13231 /* vrepif */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13238 /* vrepig */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13245 /* vrepih */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13252 /* vrp */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13256 /* vs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13259 /* vsb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13263 /* vsbcbi */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13270 /* vsbcbiq */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13278 /* vsbi */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13283 /* vsbiq */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13289 /* vscbi */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13295 /* vscbib */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13302 /* vscbif */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13309 /* vscbig */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13316 /* vscbih */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13323 /* vscbiq */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13330 /* vscef */, 2 /* 1 */, MCK_BDVAddr64Disp12, AMFBS_FeatureVector },
  { 13330 /* vscef */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13336 /* vsceg */, 2 /* 1 */, MCK_BDVAddr64Disp12, AMFBS_FeatureVector },
  { 13336 /* vsceg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13342 /* vsdp */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13347 /* vseg */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13352 /* vsegb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13358 /* vsegf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13364 /* vsegh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13370 /* vsel */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13375 /* vsf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13379 /* vsg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13383 /* vsh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13387 /* vsl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13391 /* vslb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13396 /* vsld */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13401 /* vsldb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13407 /* vsp */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13411 /* vsq */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13415 /* vsra */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13420 /* vsrab */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13426 /* vsrd */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13431 /* vsrl */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13436 /* vsrlb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13442 /* vsrp */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13447 /* vst */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 13447 /* vst */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13447 /* vst */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 13447 /* vst */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13451 /* vstbr */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13451 /* vstbr */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13457 /* vstbrf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13457 /* vstbrf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13464 /* vstbrg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13464 /* vstbrg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13471 /* vstbrh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13471 /* vstbrh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13478 /* vstbrq */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13478 /* vstbrq */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13485 /* vsteb */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 13485 /* vsteb */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13491 /* vstebrf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13491 /* vstebrf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13499 /* vstebrg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13499 /* vstebrg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13507 /* vstebrh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13507 /* vstebrh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13515 /* vstef */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 13515 /* vstef */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13521 /* vsteg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 13521 /* vsteg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13527 /* vsteh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVector },
  { 13527 /* vsteh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13533 /* vster */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13533 /* vster */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13539 /* vsterf */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13539 /* vsterf */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13546 /* vsterg */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13546 /* vsterg */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13553 /* vsterh */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_FeatureVectorEnhancements2 },
  { 13553 /* vsterh */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13560 /* vstl */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVector },
  { 13560 /* vstl */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVector },
  { 13560 /* vstl */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13565 /* vstm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVector },
  { 13565 /* vstm */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13565 /* vstm */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVector },
  { 13565 /* vstm */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13570 /* vstrc */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13570 /* vstrc */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13576 /* vstrcb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13576 /* vstrcb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13583 /* vstrcbs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13583 /* vstrcbs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13591 /* vstrcf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13591 /* vstrcf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13598 /* vstrcfs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13598 /* vstrcfs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13606 /* vstrch */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13606 /* vstrch */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13613 /* vstrchs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13613 /* vstrchs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13621 /* vstrczb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13621 /* vstrczb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13629 /* vstrczbs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13629 /* vstrczbs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13638 /* vstrczf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13638 /* vstrczf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13646 /* vstrczfs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13646 /* vstrczfs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13655 /* vstrczh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13655 /* vstrczh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13663 /* vstrczhs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13663 /* vstrczhs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVector },
  { 13672 /* vstrl */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_FeatureVectorPackedDecimal },
  { 13672 /* vstrl */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13678 /* vstrlr */, 4 /* 2 */, MCK_BDAddr64Disp12, AMFBS_FeatureVectorPackedDecimal },
  { 13678 /* vstrlr */, 2 /* 1 */, MCK_GR32, AMFBS_FeatureVectorPackedDecimal },
  { 13678 /* vstrlr */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13685 /* vstrs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13685 /* vstrs */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13691 /* vstrsb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13691 /* vstrsb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13698 /* vstrsf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13698 /* vstrsf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13705 /* vstrsh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13705 /* vstrsh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13712 /* vstrszb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13720 /* vstrszf */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13728 /* vstrszh */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements2 },
  { 13736 /* vsum */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13741 /* vsumb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13747 /* vsumg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13753 /* vsumgf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13760 /* vsumgh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13767 /* vsumh */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13773 /* vsumq */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13779 /* vsumqf */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13786 /* vsumqg */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13793 /* vtm */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13797 /* vtp */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13801 /* vuph */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13806 /* vuphb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13812 /* vuphf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13818 /* vuphh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13824 /* vupkz */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_FeatureVectorPackedDecimal },
  { 13824 /* vupkz */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorPackedDecimal },
  { 13830 /* vupl */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13835 /* vuplb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13841 /* vuplf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13847 /* vuplh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13853 /* vuplhb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13860 /* vuplhf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13867 /* vuplhh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13874 /* vuplhw */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13881 /* vupll */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13887 /* vupllb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13894 /* vupllf */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13901 /* vupllh */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVector },
  { 13908 /* vx */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVector },
  { 13911 /* vzero */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVector },
  { 13917 /* wcdgb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 13923 /* wcdlgb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 13930 /* wcefb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements2 },
  { 13936 /* wcelfb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements2 },
  { 13943 /* wcfeb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements2 },
  { 13949 /* wcgdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 13955 /* wclfeb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements2 },
  { 13962 /* wclgdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 13969 /* wfadb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 13975 /* wfasb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 13981 /* wfaxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 13987 /* wfc */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 13991 /* wfcdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 13997 /* wfcedb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14004 /* wfcedbs */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14012 /* wfcesb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14019 /* wfcesbs */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14027 /* wfcexb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14034 /* wfcexbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14042 /* wfchdb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14049 /* wfchdbs */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14057 /* wfchedb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14065 /* wfchedbs */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14074 /* wfchesb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14082 /* wfchesbs */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14091 /* wfchexb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14099 /* wfchexbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14108 /* wfchsb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14115 /* wfchsbs */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14123 /* wfchxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14130 /* wfchxbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14138 /* wfcsb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14144 /* wfcxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14150 /* wfddb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14156 /* wfdsb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14162 /* wfdxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14168 /* wfidb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14174 /* wfisb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14180 /* wfixb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14186 /* wfk */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14190 /* wfkdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14196 /* wfkedb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14203 /* wfkedbs */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14211 /* wfkesb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14218 /* wfkesbs */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14226 /* wfkexb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14233 /* wfkexbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14241 /* wfkhdb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14248 /* wfkhdbs */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14256 /* wfkhedb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14264 /* wfkhedbs */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14273 /* wfkhesb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14281 /* wfkhesbs */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14290 /* wfkhexb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14298 /* wfkhexbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14307 /* wfkhsb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14314 /* wfkhsbs */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14322 /* wfkhxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14329 /* wfkhxbs */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14337 /* wfksb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14343 /* wfkxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14349 /* wflcdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14356 /* wflcsb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14363 /* wflcxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14370 /* wflld */, 1 /* 0 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14370 /* wflld */, 2 /* 1 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14376 /* wflls */, 2 /* 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14376 /* wflls */, 1 /* 0 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14382 /* wflndb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14389 /* wflnsb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14396 /* wflnxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14403 /* wflpdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14410 /* wflpsb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14417 /* wflpxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14424 /* wflrd */, 1 /* 0 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14424 /* wflrd */, 2 /* 1 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14430 /* wflrx */, 2 /* 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14430 /* wflrx */, 1 /* 0 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14436 /* wfmadb */, 15 /* 0, 1, 2, 3 */, MCK_VR64, AMFBS_FeatureVector },
  { 14443 /* wfmasb */, 15 /* 0, 1, 2, 3 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14450 /* wfmaxb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14457 /* wfmaxdb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14465 /* wfmaxsb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14473 /* wfmaxxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14481 /* wfmdb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14487 /* wfmindb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14495 /* wfminsb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14503 /* wfminxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14511 /* wfmsb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14517 /* wfmsdb */, 15 /* 0, 1, 2, 3 */, MCK_VR64, AMFBS_FeatureVector },
  { 14524 /* wfmssb */, 15 /* 0, 1, 2, 3 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14531 /* wfmsxb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14538 /* wfmxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14544 /* wfnmadb */, 15 /* 0, 1, 2, 3 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14552 /* wfnmasb */, 15 /* 0, 1, 2, 3 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14560 /* wfnmaxb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14568 /* wfnmsdb */, 15 /* 0, 1, 2, 3 */, MCK_VR64, AMFBS_FeatureVectorEnhancements1 },
  { 14576 /* wfnmssb */, 15 /* 0, 1, 2, 3 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14584 /* wfnmsxb */, 15 /* 0, 1, 2, 3 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14592 /* wfpsodb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14600 /* wfpsosb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14608 /* wfpsoxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14616 /* wfsdb */, 7 /* 0, 1, 2 */, MCK_VR64, AMFBS_FeatureVector },
  { 14622 /* wfsqdb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14629 /* wfsqsb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14636 /* wfsqxb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14643 /* wfssb */, 7 /* 0, 1, 2 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14649 /* wfsxb */, 7 /* 0, 1, 2 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14655 /* wftcidb */, 3 /* 0, 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14663 /* wftcisb */, 3 /* 0, 1 */, MCK_VR32, AMFBS_FeatureVectorEnhancements1 },
  { 14671 /* wftcixb */, 3 /* 0, 1 */, MCK_VR128, AMFBS_FeatureVectorEnhancements1 },
  { 14679 /* wldeb */, 2 /* 1 */, MCK_VR32, AMFBS_FeatureVector },
  { 14679 /* wldeb */, 1 /* 0 */, MCK_VR64, AMFBS_FeatureVector },
  { 14685 /* wledb */, 1 /* 0 */, MCK_VR32, AMFBS_FeatureVector },
  { 14685 /* wledb */, 2 /* 1 */, MCK_VR64, AMFBS_FeatureVector },
  { 14691 /* x */, 2 /* 1 */, MCK_BDXAddr64Disp12, AMFBS_None },
  { 14691 /* x */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 14693 /* xc */, 2 /* 1 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 14693 /* xc */, 1 /* 0 */, MCK_BDLAddr64Disp12Len8, AMFBS_None },
  { 14696 /* xg */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 14696 /* xg */, 1 /* 0 */, MCK_GR64, AMFBS_None },
  { 14699 /* xgr */, 3 /* 0, 1 */, MCK_GR64, AMFBS_None },
  { 14703 /* xgrk */, 7 /* 0, 1, 2 */, MCK_GR64, AMFBS_FeatureDistinctOps },
  { 14708 /* xi */, 1 /* 0 */, MCK_BDAddr64Disp12, AMFBS_None },
  { 14711 /* xihf */, 1 /* 0 */, MCK_GRH32, AMFBS_None },
  { 14716 /* xilf */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 14721 /* xiy */, 1 /* 0 */, MCK_BDAddr64Disp20, AMFBS_None },
  { 14725 /* xr */, 3 /* 0, 1 */, MCK_GR32, AMFBS_None },
  { 14728 /* xrk */, 7 /* 0, 1, 2 */, MCK_GR32, AMFBS_FeatureDistinctOps },
  { 14737 /* xy */, 2 /* 1 */, MCK_BDXAddr64Disp20, AMFBS_None },
  { 14737 /* xy */, 1 /* 0 */, MCK_GR32, AMFBS_None },
  { 14740 /* zap */, 3 /* 0, 1 */, MCK_BDLAddr64Disp12Len4, AMFBS_None },
};

OperandMatchResultTy SystemZAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ADDR128:
    return parseADDR128(Operands);
  case MCK_ADDR32:
    return parseADDR32(Operands);
  case MCK_ADDR64:
    return parseADDR64(Operands);
  case MCK_AR32:
    return parseAR32(Operands);
  case MCK_AnyReg:
    return parseAnyReg(Operands);
  case MCK_BDAddr32Disp12:
    return parseBDAddr32(Operands);
  case MCK_BDAddr32Disp20:
    return parseBDAddr32(Operands);
  case MCK_BDAddr64Disp12:
    return parseBDAddr64(Operands);
  case MCK_BDAddr64Disp20:
    return parseBDAddr64(Operands);
  case MCK_BDLAddr64Disp12Len4:
    return parseBDLAddr64(Operands);
  case MCK_BDLAddr64Disp12Len8:
    return parseBDLAddr64(Operands);
  case MCK_BDRAddr64Disp12:
    return parseBDRAddr64(Operands);
  case MCK_BDVAddr64Disp12:
    return parseBDVAddr64(Operands);
  case MCK_BDXAddr64Disp12:
    return parseBDXAddr64(Operands);
  case MCK_BDXAddr64Disp20:
    return parseBDXAddr64(Operands);
  case MCK_CR64:
    return parseCR64(Operands);
  case MCK_FP128:
    return parseFP128(Operands);
  case MCK_FP32:
    return parseFP32(Operands);
  case MCK_FP64:
    return parseFP64(Operands);
  case MCK_GR128:
    return parseGR128(Operands);
  case MCK_GR32:
    return parseGR32(Operands);
  case MCK_GR64:
    return parseGR64(Operands);
  case MCK_GRH32:
    return parseGRH32(Operands);
  case MCK_GRX32:
    return parseGRX32(Operands);
  case MCK_PCRel12:
    return parsePCRel12(Operands);
  case MCK_PCRel16:
    return parsePCRel16(Operands);
  case MCK_PCRel24:
    return parsePCRel24(Operands);
  case MCK_PCRel32:
    return parsePCRel32(Operands);
  case MCK_PCRelTLS16:
    return parsePCRelTLS16(Operands);
  case MCK_PCRelTLS32:
    return parsePCRelTLS32(Operands);
  case MCK_VF128:
    return parseVF128(Operands);
  case MCK_VR128:
    return parseVR128(Operands);
  case MCK_VR32:
    return parseVR32(Operands);
  case MCK_VR64:
    return parseVR64(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

OperandMatchResultTy SystemZAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic,
                       bool ParseForAllFeatures) {
  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size() - 1;
  // Search the table.
  auto MnemonicRange =
    std::equal_range(std::begin(OperandMatchTable), std::end(OperandMatchTable),
                     Mnemonic, LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    const FeatureBitset &RequiredFeatures = FeatureBitsets[it->RequiredFeaturesIdx];
    if (!ParseForAllFeatures && (AvailableFeatures & RequiredFeatures) != RequiredFeatures)
      continue;

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION


#ifdef GET_MNEMONIC_SPELL_CHECKER
#undef GET_MNEMONIC_SPELL_CHECKER

static std::string SystemZMnemonicSpellCheck(StringRef S, const FeatureBitset &FBS, unsigned VariantID) {
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

static bool SystemZCheckMnemonic(StringRef Mnemonic,
                                const FeatureBitset &AvailableFeatures,
                                unsigned VariantID) {
  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

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

