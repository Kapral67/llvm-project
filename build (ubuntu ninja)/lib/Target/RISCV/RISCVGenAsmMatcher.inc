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
                       const OperandVector &Operands,
                       const SmallBitVector &OptionalOperandsMask);
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

  Match_InvalidBareSymbol,
  Match_InvalidCLUIImm,
  Match_InvalidCSRSystemRegister,
  Match_InvalidCallSymbol,
  Match_InvalidFRMArg,
  Match_InvalidFenceArg,
  Match_InvalidImmXLenLI,
  Match_InvalidImmZero,
  Match_InvalidPseudoJumpSymbol,
  Match_InvalidSImm10Lsb0000NonZero,
  Match_InvalidSImm12,
  Match_InvalidSImm12Lsb0,
  Match_InvalidSImm13Lsb0,
  Match_InvalidSImm21Lsb0JAL,
  Match_InvalidSImm5,
  Match_InvalidSImm5Plus1,
  Match_InvalidSImm6,
  Match_InvalidSImm6NonZero,
  Match_InvalidSImm9Lsb0,
  Match_InvalidTPRelAddSymbol,
  Match_InvalidUImm10Lsb00NonZero,
  Match_InvalidUImm20AUIPC,
  Match_InvalidUImm20LUI,
  Match_InvalidUImm5,
  Match_InvalidUImm7Lsb00,
  Match_InvalidUImm8Lsb00,
  Match_InvalidUImm8Lsb000,
  Match_InvalidUImm9Lsb000,
  Match_InvalidUImmLog2XLen,
  Match_InvalidUImmLog2XLenHalf,
  Match_InvalidUImmLog2XLenNonZero,
  Match_InvalidVMaskRegister,
  Match_InvalidVTypeI,
  END_OPERAND_DIAGNOSTIC_TYPES
#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_HasStdExtMBit = 6,
  Feature_HasStdExtABit = 1,
  Feature_HasStdExtFBit = 5,
  Feature_HasStdExtDBit = 4,
  Feature_HasStdExtZfhBit = 20,
  Feature_HasStdExtCBit = 3,
  Feature_HasStdExtZbaBit = 8,
  Feature_HasStdExtZbbBit = 9,
  Feature_HasStdExtZbcBit = 11,
  Feature_HasStdExtZbeBit = 12,
  Feature_HasStdExtZbfBit = 13,
  Feature_HasStdExtZbmBit = 14,
  Feature_HasStdExtZbpBit = 15,
  Feature_HasStdExtZbrBit = 17,
  Feature_HasStdExtZbsBit = 18,
  Feature_HasStdExtZbtBit = 19,
  Feature_HasStdExtZbbOrZbpBit = 10,
  Feature_HasStdExtZbproposedcBit = 16,
  Feature_HasStdExtBBit = 2,
  Feature_HasRVCHintsBit = 0,
  Feature_HasStdExtVBit = 7,
  Feature_HasStdExtZvlssegBit = 22,
  Feature_HasStdExtZvamoBit = 21,
  Feature_IsRV64Bit = 25,
  Feature_IsRV32Bit = 23,
  Feature_IsRV32EBit = 24,
};

static unsigned MatchRegisterName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 61 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 30 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 3 strings to match.
        return 69;	 // "f0"
      case '1':	 // 3 strings to match.
        return 70;	 // "f1"
      case '2':	 // 3 strings to match.
        return 71;	 // "f2"
      case '3':	 // 3 strings to match.
        return 72;	 // "f3"
      case '4':	 // 3 strings to match.
        return 73;	 // "f4"
      case '5':	 // 3 strings to match.
        return 74;	 // "f5"
      case '6':	 // 3 strings to match.
        return 75;	 // "f6"
      case '7':	 // 3 strings to match.
        return 76;	 // "f7"
      case '8':	 // 3 strings to match.
        return 77;	 // "f8"
      case '9':	 // 3 strings to match.
        return 78;	 // "f9"
      }
      break;
    case 'v':	 // 21 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 4 strings to match.
        return 5;	 // "v0"
      case '1':	 // 1 string to match.
        return 6;	 // "v1"
      case '2':	 // 2 strings to match.
        return 7;	 // "v2"
      case '3':	 // 1 string to match.
        return 8;	 // "v3"
      case '4':	 // 3 strings to match.
        return 9;	 // "v4"
      case '5':	 // 1 string to match.
        return 10;	 // "v5"
      case '6':	 // 2 strings to match.
        return 11;	 // "v6"
      case '7':	 // 1 string to match.
        return 12;	 // "v7"
      case '8':	 // 4 strings to match.
        return 13;	 // "v8"
      case '9':	 // 1 string to match.
        return 14;	 // "v9"
      case 'l':	 // 1 string to match.
        return 1;	 // "vl"
      }
      break;
    case 'x':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 37;	 // "x0"
      case '1':	 // 1 string to match.
        return 38;	 // "x1"
      case '2':	 // 1 string to match.
        return 39;	 // "x2"
      case '3':	 // 1 string to match.
        return 40;	 // "x3"
      case '4':	 // 1 string to match.
        return 41;	 // "x4"
      case '5':	 // 1 string to match.
        return 42;	 // "x5"
      case '6':	 // 1 string to match.
        return 43;	 // "x6"
      case '7':	 // 1 string to match.
        return 44;	 // "x7"
      case '8':	 // 1 string to match.
        return 45;	 // "x8"
      case '9':	 // 1 string to match.
        return 46;	 // "x9"
      }
      break;
    }
    break;
  case 3:	 // 128 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 66 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 30 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 79;	 // "f10"
        case '1':	 // 3 strings to match.
          return 80;	 // "f11"
        case '2':	 // 3 strings to match.
          return 81;	 // "f12"
        case '3':	 // 3 strings to match.
          return 82;	 // "f13"
        case '4':	 // 3 strings to match.
          return 83;	 // "f14"
        case '5':	 // 3 strings to match.
          return 84;	 // "f15"
        case '6':	 // 3 strings to match.
          return 85;	 // "f16"
        case '7':	 // 3 strings to match.
          return 86;	 // "f17"
        case '8':	 // 3 strings to match.
          return 87;	 // "f18"
        case '9':	 // 3 strings to match.
          return 88;	 // "f19"
        }
        break;
      case '2':	 // 30 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 89;	 // "f20"
        case '1':	 // 3 strings to match.
          return 90;	 // "f21"
        case '2':	 // 3 strings to match.
          return 91;	 // "f22"
        case '3':	 // 3 strings to match.
          return 92;	 // "f23"
        case '4':	 // 3 strings to match.
          return 93;	 // "f24"
        case '5':	 // 3 strings to match.
          return 94;	 // "f25"
        case '6':	 // 3 strings to match.
          return 95;	 // "f26"
        case '7':	 // 3 strings to match.
          return 96;	 // "f27"
        case '8':	 // 3 strings to match.
          return 97;	 // "f28"
        case '9':	 // 3 strings to match.
          return 98;	 // "f29"
        }
        break;
      case '3':	 // 6 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 99;	 // "f30"
        case '1':	 // 3 strings to match.
          return 100;	 // "f31"
        }
        break;
      }
      break;
    case 'v':	 // 40 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 18 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 15;	 // "v10"
        case '1':	 // 1 string to match.
          return 16;	 // "v11"
        case '2':	 // 3 strings to match.
          return 17;	 // "v12"
        case '3':	 // 1 string to match.
          return 18;	 // "v13"
        case '4':	 // 2 strings to match.
          return 19;	 // "v14"
        case '5':	 // 1 string to match.
          return 20;	 // "v15"
        case '6':	 // 4 strings to match.
          return 21;	 // "v16"
        case '7':	 // 1 string to match.
          return 22;	 // "v17"
        case '8':	 // 2 strings to match.
          return 23;	 // "v18"
        case '9':	 // 1 string to match.
          return 24;	 // "v19"
        }
        break;
      case '2':	 // 19 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 25;	 // "v20"
        case '1':	 // 1 string to match.
          return 26;	 // "v21"
        case '2':	 // 2 strings to match.
          return 27;	 // "v22"
        case '3':	 // 1 string to match.
          return 28;	 // "v23"
        case '4':	 // 4 strings to match.
          return 29;	 // "v24"
        case '5':	 // 1 string to match.
          return 30;	 // "v25"
        case '6':	 // 2 strings to match.
          return 31;	 // "v26"
        case '7':	 // 1 string to match.
          return 32;	 // "v27"
        case '8':	 // 3 strings to match.
          return 33;	 // "v28"
        case '9':	 // 1 string to match.
          return 34;	 // "v29"
        }
        break;
      case '3':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 2 strings to match.
          return 35;	 // "v30"
        case '1':	 // 1 string to match.
          return 36;	 // "v31"
        }
        break;
      }
      break;
    case 'x':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 47;	 // "x10"
        case '1':	 // 1 string to match.
          return 48;	 // "x11"
        case '2':	 // 1 string to match.
          return 49;	 // "x12"
        case '3':	 // 1 string to match.
          return 50;	 // "x13"
        case '4':	 // 1 string to match.
          return 51;	 // "x14"
        case '5':	 // 1 string to match.
          return 52;	 // "x15"
        case '6':	 // 1 string to match.
          return 53;	 // "x16"
        case '7':	 // 1 string to match.
          return 54;	 // "x17"
        case '8':	 // 1 string to match.
          return 55;	 // "x18"
        case '9':	 // 1 string to match.
          return 56;	 // "x19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 57;	 // "x20"
        case '1':	 // 1 string to match.
          return 58;	 // "x21"
        case '2':	 // 1 string to match.
          return 59;	 // "x22"
        case '3':	 // 1 string to match.
          return 60;	 // "x23"
        case '4':	 // 1 string to match.
          return 61;	 // "x24"
        case '5':	 // 1 string to match.
          return 62;	 // "x25"
        case '6':	 // 1 string to match.
          return 63;	 // "x26"
        case '7':	 // 1 string to match.
          return 64;	 // "x27"
        case '8':	 // 1 string to match.
          return 65;	 // "x28"
        case '9':	 // 1 string to match.
          return 66;	 // "x29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 67;	 // "x30"
        case '1':	 // 1 string to match.
          return 68;	 // "x31"
        }
        break;
      }
      break;
    }
    break;
  case 4:	 // 1 string to match.
    if (memcmp(Name.data()+0, "vxrm", 4) != 0)
      break;
    return 3;	 // "vxrm"
  case 5:	 // 2 strings to match.
    if (Name[0] != 'v')
      break;
    switch (Name[1]) {
    default: break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+2, "ype", 3) != 0)
        break;
      return 2;	 // "vtype"
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sat", 3) != 0)
        break;
      return 4;	 // "vxsat"
    }
    break;
  }
  return 0;
}

static unsigned MatchRegisterAltName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 139 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 8 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 47;	 // "a0"
      case '1':	 // 1 string to match.
        return 48;	 // "a1"
      case '2':	 // 1 string to match.
        return 49;	 // "a2"
      case '3':	 // 1 string to match.
        return 50;	 // "a3"
      case '4':	 // 1 string to match.
        return 51;	 // "a4"
      case '5':	 // 1 string to match.
        return 52;	 // "a5"
      case '6':	 // 1 string to match.
        return 53;	 // "a6"
      case '7':	 // 1 string to match.
        return 54;	 // "a7"
      }
      break;
    case 'f':	 // 1 string to match.
      if (Name[1] != 'p')
        break;
      return 45;	 // "fp"
    case 'g':	 // 1 string to match.
      if (Name[1] != 'p')
        break;
      return 40;	 // "gp"
    case 'r':	 // 1 string to match.
      if (Name[1] != 'a')
        break;
      return 38;	 // "ra"
    case 's':	 // 11 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 45;	 // "s0"
      case '1':	 // 1 string to match.
        return 46;	 // "s1"
      case '2':	 // 1 string to match.
        return 55;	 // "s2"
      case '3':	 // 1 string to match.
        return 56;	 // "s3"
      case '4':	 // 1 string to match.
        return 57;	 // "s4"
      case '5':	 // 1 string to match.
        return 58;	 // "s5"
      case '6':	 // 1 string to match.
        return 59;	 // "s6"
      case '7':	 // 1 string to match.
        return 60;	 // "s7"
      case '8':	 // 1 string to match.
        return 61;	 // "s8"
      case '9':	 // 1 string to match.
        return 62;	 // "s9"
      case 'p':	 // 1 string to match.
        return 39;	 // "sp"
      }
      break;
    case 't':	 // 8 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 42;	 // "t0"
      case '1':	 // 1 string to match.
        return 43;	 // "t1"
      case '2':	 // 1 string to match.
        return 44;	 // "t2"
      case '3':	 // 1 string to match.
        return 65;	 // "t3"
      case '4':	 // 1 string to match.
        return 66;	 // "t4"
      case '5':	 // 1 string to match.
        return 67;	 // "t5"
      case '6':	 // 1 string to match.
        return 68;	 // "t6"
      case 'p':	 // 1 string to match.
        return 41;	 // "tp"
      }
      break;
    case 'v':	 // 109 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 15 strings to match.
        return 5;	 // "v0"
      case '1':	 // 8 strings to match.
        return 6;	 // "v1"
      case '2':	 // 12 strings to match.
        return 7;	 // "v2"
      case '3':	 // 8 strings to match.
        return 8;	 // "v3"
      case '4':	 // 14 strings to match.
        return 9;	 // "v4"
      case '5':	 // 8 strings to match.
        return 10;	 // "v5"
      case '6':	 // 12 strings to match.
        return 11;	 // "v6"
      case '7':	 // 8 strings to match.
        return 12;	 // "v7"
      case '8':	 // 15 strings to match.
        return 13;	 // "v8"
      case '9':	 // 8 strings to match.
        return 14;	 // "v9"
      case 'l':	 // 1 string to match.
        return 1;	 // "vl"
      }
      break;
    }
    break;
  case 3:	 // 283 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 84 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 24 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 79;	 // "fa0"
        case '1':	 // 3 strings to match.
          return 80;	 // "fa1"
        case '2':	 // 3 strings to match.
          return 81;	 // "fa2"
        case '3':	 // 3 strings to match.
          return 82;	 // "fa3"
        case '4':	 // 3 strings to match.
          return 83;	 // "fa4"
        case '5':	 // 3 strings to match.
          return 84;	 // "fa5"
        case '6':	 // 3 strings to match.
          return 85;	 // "fa6"
        case '7':	 // 3 strings to match.
          return 86;	 // "fa7"
        }
        break;
      case 's':	 // 30 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 77;	 // "fs0"
        case '1':	 // 3 strings to match.
          return 78;	 // "fs1"
        case '2':	 // 3 strings to match.
          return 87;	 // "fs2"
        case '3':	 // 3 strings to match.
          return 88;	 // "fs3"
        case '4':	 // 3 strings to match.
          return 89;	 // "fs4"
        case '5':	 // 3 strings to match.
          return 90;	 // "fs5"
        case '6':	 // 3 strings to match.
          return 91;	 // "fs6"
        case '7':	 // 3 strings to match.
          return 92;	 // "fs7"
        case '8':	 // 3 strings to match.
          return 93;	 // "fs8"
        case '9':	 // 3 strings to match.
          return 94;	 // "fs9"
        }
        break;
      case 't':	 // 30 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 69;	 // "ft0"
        case '1':	 // 3 strings to match.
          return 70;	 // "ft1"
        case '2':	 // 3 strings to match.
          return 71;	 // "ft2"
        case '3':	 // 3 strings to match.
          return 72;	 // "ft3"
        case '4':	 // 3 strings to match.
          return 73;	 // "ft4"
        case '5':	 // 3 strings to match.
          return 74;	 // "ft5"
        case '6':	 // 3 strings to match.
          return 75;	 // "ft6"
        case '7':	 // 3 strings to match.
          return 76;	 // "ft7"
        case '8':	 // 3 strings to match.
          return 97;	 // "ft8"
        case '9':	 // 3 strings to match.
          return 98;	 // "ft9"
        }
        break;
      }
      break;
    case 's':	 // 2 strings to match.
      if (Name[1] != '1')
        break;
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 63;	 // "s10"
      case '1':	 // 1 string to match.
        return 64;	 // "s11"
      }
      break;
    case 'v':	 // 197 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 105 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 12 strings to match.
          return 15;	 // "v10"
        case '1':	 // 8 strings to match.
          return 16;	 // "v11"
        case '2':	 // 14 strings to match.
          return 17;	 // "v12"
        case '3':	 // 8 strings to match.
          return 18;	 // "v13"
        case '4':	 // 12 strings to match.
          return 19;	 // "v14"
        case '5':	 // 8 strings to match.
          return 20;	 // "v15"
        case '6':	 // 15 strings to match.
          return 21;	 // "v16"
        case '7':	 // 8 strings to match.
          return 22;	 // "v17"
        case '8':	 // 12 strings to match.
          return 23;	 // "v18"
        case '9':	 // 8 strings to match.
          return 24;	 // "v19"
        }
        break;
      case '2':	 // 88 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 14 strings to match.
          return 25;	 // "v20"
        case '1':	 // 8 strings to match.
          return 26;	 // "v21"
        case '2':	 // 12 strings to match.
          return 27;	 // "v22"
        case '3':	 // 8 strings to match.
          return 28;	 // "v23"
        case '4':	 // 15 strings to match.
          return 29;	 // "v24"
        case '5':	 // 7 strings to match.
          return 30;	 // "v25"
        case '6':	 // 9 strings to match.
          return 31;	 // "v26"
        case '7':	 // 5 strings to match.
          return 32;	 // "v27"
        case '8':	 // 7 strings to match.
          return 33;	 // "v28"
        case '9':	 // 3 strings to match.
          return 34;	 // "v29"
        }
        break;
      case '3':	 // 4 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 35;	 // "v30"
        case '1':	 // 1 string to match.
          return 36;	 // "v31"
        }
        break;
      }
      break;
    }
    break;
  case 4:	 // 14 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 12 strings to match.
      switch (Name[1]) {
      default: break;
      case 's':	 // 6 strings to match.
        if (Name[2] != '1')
          break;
        switch (Name[3]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 95;	 // "fs10"
        case '1':	 // 3 strings to match.
          return 96;	 // "fs11"
        }
        break;
      case 't':	 // 6 strings to match.
        if (Name[2] != '1')
          break;
        switch (Name[3]) {
        default: break;
        case '0':	 // 3 strings to match.
          return 99;	 // "ft10"
        case '1':	 // 3 strings to match.
          return 100;	 // "ft11"
        }
        break;
      }
      break;
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "xrm", 3) != 0)
        break;
      return 3;	 // "vxrm"
    case 'z':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ero", 3) != 0)
        break;
      return 37;	 // "zero"
    }
    break;
  case 5:	 // 2 strings to match.
    if (Name[0] != 'v')
      break;
    switch (Name[1]) {
    default: break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+2, "ype", 3) != 0)
        break;
      return 2;	 // "vtype"
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sat", 3) != 0)
        break;
      return 4;	 // "vxsat"
    }
    break;
  }
  return 0;
}

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasStdExtMBit: return "'M' (Integer Multiplication and Division)";
  case Feature_HasStdExtABit: return "'A' (Atomic Instructions)";
  case Feature_HasStdExtFBit: return "'F' (Single-Precision Floating-Point)";
  case Feature_HasStdExtDBit: return "'D' (Double-Precision Floating-Point)";
  case Feature_HasStdExtZfhBit: return "'Zfh' (Half-Precision Floating-Point)";
  case Feature_HasStdExtCBit: return "'C' (Compressed Instructions)";
  case Feature_HasStdExtZbaBit: return "'Zba' (Address calculation 'B' Instructions)";
  case Feature_HasStdExtZbbBit: return "'Zbb' (Base 'B' Instructions)";
  case Feature_HasStdExtZbcBit: return "'Zbc' (Carry-Less 'B' Instructions)";
  case Feature_HasStdExtZbeBit: return "'Zbe' (Extract-Deposit 'B' Instructions)";
  case Feature_HasStdExtZbfBit: return "'Zbf' (Bit-Field 'B' Instructions)";
  case Feature_HasStdExtZbmBit: return "'Zbm' (Matrix 'B' Instructions)";
  case Feature_HasStdExtZbpBit: return "'Zbp' (Permutation 'B' Instructions)";
  case Feature_HasStdExtZbrBit: return "'Zbr' (Polynomial Reduction 'B' Instructions)";
  case Feature_HasStdExtZbsBit: return "'Zbs' (Single-Bit 'B' Instructions)";
  case Feature_HasStdExtZbtBit: return "'Zbt' (Ternary 'B' Instructions)";
  case Feature_HasStdExtZbbOrZbpBit: return "'Zbb' (Base 'B' Instructions) or 'Zbp' (Permutation 'B' Instructions)";
  case Feature_HasStdExtZbproposedcBit: return "'Zbproposedc' (Proposed Compressed 'B' Instructions)";
  case Feature_HasStdExtBBit: return "'B' (Bit Manipulation Instructions)";
  case Feature_HasRVCHintsBit: return "RVC Hint Instructions";
  case Feature_HasStdExtVBit: return "'V' (Vector Instructions)";
  case Feature_HasStdExtZvlssegBit: return "'Zvlsseg' (Vector segment load/store instructions)";
  case Feature_HasStdExtZvamoBit: return "'Zvamo'(Vector AMO Operations)";
  case Feature_IsRV64Bit: return "RV64I Base Instruction Set";
  case Feature_IsRV32Bit: return "RV32I Base Instruction Set";
  case Feature_IsRV32EBit: return "";
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
      case 4:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "move", 4) != 0)
          break;
        Mnemonic = "mv";	 // "move"
        return;
      case 5:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "scall", 5) != 0)
          break;
        Mnemonic = "ecall";	 // "scall"
        return;
      case 6:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "sbreak", 6) != 0)
          break;
        Mnemonic = "ebreak";	 // "sbreak"
        return;
      case 7:	 // 2 strings to match.
        if (memcmp(Mnemonic.data()+0, "fmv.", 4) != 0)
          break;
        switch (Mnemonic[4]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+5, ".x", 2) != 0)
            break;
          if (Features.test(Feature_HasStdExtFBit))	 // "fmv.s.x"
            Mnemonic = "fmv.w.x";
          return;
        case 'x':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+5, ".s", 2) != 0)
            break;
          if (Features.test(Feature_HasStdExtFBit))	 // "fmv.x.s"
            Mnemonic = "fmv.x.w";
          return;
        }
        break;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 4:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "move", 4) != 0)
      break;
    Mnemonic = "mv";	 // "move"
    return;
  case 5:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "scall", 5) != 0)
      break;
    Mnemonic = "ecall";	 // "scall"
    return;
  case 6:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "sbreak", 6) != 0)
      break;
    Mnemonic = "ebreak";	 // "sbreak"
    return;
  case 7:	 // 2 strings to match.
    if (memcmp(Mnemonic.data()+0, "fmv.", 4) != 0)
      break;
    switch (Mnemonic[4]) {
    default: break;
    case 's':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+5, ".x", 2) != 0)
        break;
      if (Features.test(Feature_HasStdExtFBit))	 // "fmv.s.x"
        Mnemonic = "fmv.w.x";
      return;
    case 'x':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+5, ".s", 2) != 0)
        break;
      if (Features.test(Feature_HasStdExtFBit))	 // "fmv.x.s"
        Mnemonic = "fmv.x.w";
      return;
    }
    break;
  }
}

enum {
  Tie0_1_1,
  Tie0_1_6,
};

static const uint8_t TiedAsmOperandTable[][3] = {
  /* Tie0_1_1 */ { 0, 1, 1 },
  /* Tie0_1_6 */ { 0, 1, 6 },
};

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_Reg,
  CVT_95_addImmOperands,
  CVT_95_addRegOperands,
  CVT_regX0,
  CVT_imm_95_0,
  CVT_95_addCSRSystemRegisterOperands,
  CVT_imm_95_7,
  CVT_95_addFRMArgOperands,
  CVT_imm_95_15,
  CVT_95_addFenceArgOperands,
  CVT_imm_95_3,
  CVT_imm_95_1,
  CVT_imm_95_2,
  CVT_regX1,
  CVT_imm_95__MINUS_1,
  CVT_imm_95_31,
  CVT_imm_95_63,
  CVT_imm_95_16,
  CVT_imm_95_48,
  CVT_imm_95_30,
  CVT_imm_95_62,
  CVT_imm_95_6,
  CVT_imm_95_14,
  CVT_imm_95_32,
  CVT_imm_95_28,
  CVT_imm_95_60,
  CVT_imm_95_4,
  CVT_imm_95_12,
  CVT_imm_95_24,
  CVT_imm_95_56,
  CVT_imm_95_8,
  CVT_imm_95_3072,
  CVT_imm_95_3200,
  CVT_imm_95_3074,
  CVT_imm_95_3202,
  CVT_imm_95_3073,
  CVT_imm_95_3201,
  CVT_95_addRegOperands_95_defaultMaskRegOp,
  CVT_95_addVTypeIOperands,
  CVT_imm_95_255,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__Reg1_0__Reg1_1__SImm121_2,
  Convert__Reg1_0__Reg1_1__Reg1_2__TPRelAddSymbol1_3,
  Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1,
  Convert__Reg1_0__UImm20AUIPC1_1,
  Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2,
  Convert__Reg1_0__Reg1_1__UImm51_2,
  Convert__Reg1_0__Reg1_1__SImm13Lsb01_2,
  Convert__Reg1_0__regX0__SImm13Lsb01_1,
  Convert__Reg1_1__Reg1_0__SImm13Lsb01_2,
  Convert__regX0__Reg1_0__SImm13Lsb01_1,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_0__Tie0_1_1__Reg1_1,
  Convert__Reg1_0__Tie0_1_1__ImmZero1_1,
  Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1,
  Convert__Reg1_0__Tie0_1_1__SImm10Lsb0000NonZero1_1,
  Convert__Reg1_0__Reg1_1__UImm10Lsb00NonZero1_2,
  Convert__Reg1_0__Tie0_1_1__SImm61_1,
  Convert__Reg1_0__SImm9Lsb01_1,
  Convert_NoOperands,
  Convert__Reg1_0__Reg1_2__imm_95_0,
  Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1,
  Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1,
  Convert__Reg1_0__Reg1_3__UImm7Lsb001_1,
  Convert__Reg1_0__Reg1_3__UImm8Lsb001_1,
  Convert__SImm12Lsb01_0,
  Convert__Reg1_0,
  Convert__Reg1_0__SImm61_1,
  Convert__Reg1_0__CLUIImm1_1,
  Convert__Reg1_0__Tie0_1_1,
  Convert__SImm6NonZero1_0,
  Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1,
  Convert__CallSymbol1_0,
  Convert__Reg1_0__CallSymbol1_1,
  Convert__Reg1_0__Reg1_2__Reg1_1__Reg1_3,
  Convert__regX0__CSRSystemRegister1_0__Reg1_1,
  Convert__regX0__CSRSystemRegister1_0__UImm51_1,
  Convert__Reg1_0__CSRSystemRegister1_1__regX0,
  Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2,
  Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2,
  Convert__imm_95_0__imm_95_0,
  Convert__Reg1_0__Reg1_1__Reg1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7,
  Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3,
  Convert__Reg1_0__Reg1_1__imm_95_7,
  Convert__Reg1_0__Reg1_1__FRMArg1_2,
  Convert__imm_95_15__imm_95_15,
  Convert__FenceArg1_0__FenceArg1_1,
  Convert__Reg1_0__Reg1_2__Reg1_1,
  Convert__Reg1_0__Reg1_2__BareSymbol1_1,
  Convert__Reg1_0__Reg1_3__SImm121_1,
  Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7,
  Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4,
  Convert__Reg1_0__imm_95_3__regX0,
  Convert__Reg1_0__imm_95_1__regX0,
  Convert__Reg1_0__imm_95_2__regX0,
  Convert__regX0__imm_95_3__Reg1_0,
  Convert__Reg1_0__imm_95_3__Reg1_1,
  Convert__regX0__imm_95_1__Reg1_0,
  Convert__Reg1_0__imm_95_1__Reg1_1,
  Convert__regX0__imm_95_1__UImm51_0,
  Convert__Reg1_0__imm_95_1__UImm51_1,
  Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2,
  Convert__Reg1_0__Reg1_1__Reg1_2__UImmLog2XLen1_3,
  Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3,
  Convert__regX0__imm_95_2__Reg1_0,
  Convert__Reg1_0__imm_95_2__Reg1_1,
  Convert__regX0__imm_95_2__UImm51_0,
  Convert__Reg1_0__imm_95_2__UImm51_1,
  Convert__regX0__SImm21Lsb0JAL1_0,
  Convert__regX1__SImm21Lsb0JAL1_0,
  Convert__Reg1_0__SImm21Lsb0JAL1_1,
  Convert__regX1__Reg1_0__imm_95_0,
  Convert__Reg1_0__Reg1_1__imm_95_0,
  Convert__regX1__Reg1_0__SImm121_1,
  Convert__regX1__Reg1_2__SImm121_0,
  Convert__regX0__Reg1_0__imm_95_0,
  Convert__regX0__Reg1_0__SImm121_1,
  Convert__regX0__Reg1_2__SImm121_0,
  Convert__Reg1_1__PseudoJumpSymbol1_0,
  Convert__Reg1_0__BareSymbol1_1,
  Convert__Reg1_0__ImmXLenLI1_1,
  Convert__Reg1_0__AtomicMemOpOperand1_1,
  Convert__Reg1_0__UImm20LUI1_1,
  Convert__Reg1_0__regX0__Reg1_1,
  Convert__regX0__regX0__imm_95_0,
  Convert__Reg1_0__Reg1_1__imm_95__MINUS_1,
  Convert__Reg1_0__Reg1_1__imm_95_31,
  Convert__Reg1_0__Reg1_1__imm_95_63,
  Convert__Reg1_0__Reg1_1__imm_95_15,
  Convert__Reg1_0__Reg1_1__imm_95_3,
  Convert__Reg1_0__Reg1_1__imm_95_1,
  Convert__Reg1_0__Reg1_1__imm_95_16,
  Convert__Reg1_0__Reg1_1__imm_95_48,
  Convert__Reg1_0__Reg1_1__imm_95_30,
  Convert__Reg1_0__Reg1_1__imm_95_62,
  Convert__Reg1_0__Reg1_1__imm_95_6,
  Convert__Reg1_0__Reg1_1__imm_95_14,
  Convert__Reg1_0__Reg1_1__imm_95_2,
  Convert__Reg1_0__Reg1_1__imm_95_32,
  Convert__Reg1_0__Reg1_1__imm_95_28,
  Convert__Reg1_0__Reg1_1__imm_95_60,
  Convert__Reg1_0__Reg1_1__imm_95_4,
  Convert__Reg1_0__Reg1_1__imm_95_12,
  Convert__Reg1_0__Reg1_1__imm_95_24,
  Convert__Reg1_0__Reg1_1__imm_95_56,
  Convert__Reg1_0__Reg1_1__imm_95_8,
  Convert__Reg1_0__imm_95_3072__regX0,
  Convert__Reg1_0__imm_95_3200__regX0,
  Convert__Reg1_0__imm_95_3074__regX0,
  Convert__Reg1_0__imm_95_3202__regX0,
  Convert__Reg1_0__imm_95_3073__regX0,
  Convert__Reg1_0__imm_95_3201__regX0,
  Convert__regX0__regX1__imm_95_0,
  Convert__regX0__regX0,
  Convert__Reg1_0__regX0,
  Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2,
  Convert__Reg1_0__Reg1_1__regX0,
  Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0,
  Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0,
  Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6,
  Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6,
  Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__Reg1_1__Reg1_1__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__RVVMaskRegOpOperand1_1,
  Convert__Reg1_0__Reg1_2,
  Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4,
  Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5,
  Convert__Reg1_0__Reg1_1__SImm51_2,
  Convert__Reg1_0__Reg1_0__Reg1_0,
  Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_4__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__SImm51_1,
  Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3,
  Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__RVVMaskRegOpOperand1_2,
  Convert__Reg1_0__UImm51_1__VTypeI1_2,
  Convert__Reg1_0__Reg1_1__VTypeI1_2,
  Convert__Reg1_0__Reg1_1__imm_95_255,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm121_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__TPRelAddSymbol1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 3, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__UImm20AUIPC1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm51_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm13Lsb01_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__regX0__SImm13Lsb01_1
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_1__Reg1_0__SImm13Lsb01_2
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__regX0__Reg1_0__SImm13Lsb01_1
  { CVT_regX0, 0, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__Reg1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__ImmZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__SImm10Lsb0000NonZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm10Lsb00NonZero1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__SImm61_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__SImm9Lsb01_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm7Lsb001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__UImm8Lsb001_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__SImm12Lsb01_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__SImm61_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__CLUIImm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_Done },
  // Convert__SImm6NonZero1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1
  { CVT_95_Reg, 1, CVT_Tied, Tie0_1_1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__CallSymbol1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__CallSymbol1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_1__Reg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Done },
  // Convert__regX0__CSRSystemRegister1_0__Reg1_1
  { CVT_regX0, 0, CVT_95_addCSRSystemRegisterOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__CSRSystemRegister1_0__UImm51_1
  { CVT_regX0, 0, CVT_95_addCSRSystemRegisterOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__CSRSystemRegister1_1__regX0
  { CVT_95_Reg, 1, CVT_95_addCSRSystemRegisterOperands, 2, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_addCSRSystemRegisterOperands, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2
  { CVT_95_Reg, 1, CVT_95_addCSRSystemRegisterOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__imm_95_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addFRMArgOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_7
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__FRMArg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addFRMArgOperands, 3, CVT_Done },
  // Convert__imm_95_15__imm_95_15
  { CVT_imm_95_15, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__FenceArg1_0__FenceArg1_1
  { CVT_95_addFenceArgOperands, 1, CVT_95_addFenceArgOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2__BareSymbol1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__SImm121_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_Reg, 4, CVT_95_addFRMArgOperands, 5, CVT_Done },
  // Convert__Reg1_0__imm_95_3__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_1__regX0
  { CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_2__regX0
  { CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_regX0, 0, CVT_Done },
  // Convert__regX0__imm_95_3__Reg1_0
  { CVT_regX0, 0, CVT_imm_95_3, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_3__Reg1_1
  { CVT_95_Reg, 1, CVT_imm_95_3, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__imm_95_1__Reg1_0
  { CVT_regX0, 0, CVT_imm_95_1, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_1__Reg1_1
  { CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__imm_95_1__UImm51_0
  { CVT_regX0, 0, CVT_imm_95_1, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_1__UImm51_1
  { CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UImmLog2XLen1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__regX0__imm_95_2__Reg1_0
  { CVT_regX0, 0, CVT_imm_95_2, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_2__Reg1_1
  { CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__imm_95_2__UImm51_0
  { CVT_regX0, 0, CVT_imm_95_2, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__imm_95_2__UImm51_1
  { CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX0__SImm21Lsb0JAL1_0
  { CVT_regX0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regX1__SImm21Lsb0JAL1_0
  { CVT_regX1, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__SImm21Lsb0JAL1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX1__Reg1_0__imm_95_0
  { CVT_regX1, 0, CVT_95_Reg, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX1__Reg1_0__SImm121_1
  { CVT_regX1, 0, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX1__Reg1_2__SImm121_0
  { CVT_regX1, 0, CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regX0__Reg1_0__imm_95_0
  { CVT_regX0, 0, CVT_95_Reg, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX0__Reg1_0__SImm121_1
  { CVT_regX0, 0, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regX0__Reg1_2__SImm121_0
  { CVT_regX0, 0, CVT_95_Reg, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_1__PseudoJumpSymbol1_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__BareSymbol1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__ImmXLenLI1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__AtomicMemOpOperand1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__Reg1_0__UImm20LUI1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__regX0__Reg1_1
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__regX0__regX0__imm_95_0
  { CVT_regX0, 0, CVT_regX0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95__MINUS_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95__MINUS_1, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_31
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_31, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_63
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_63, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_15
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_16
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_16, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_48
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_48, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_30
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_30, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_62
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_62, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_6
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_14
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_32
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_32, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_28
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_28, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_60
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_60, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_4
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_12
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_24
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_24, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_56
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_56, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_8
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3072__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3072, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3200__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3200, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3074__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3074, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3202__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3202, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3073__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3073, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__imm_95_3201__regX0
  { CVT_95_Reg, 1, CVT_imm_95_3201, 0, CVT_regX0, 0, CVT_Done },
  // Convert__regX0__regX1__imm_95_0
  { CVT_regX0, 0, CVT_regX1, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regX0__regX0
  { CVT_regX0, 0, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__regX0
  { CVT_95_Reg, 1, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__regX0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_regX0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6
  { CVT_95_Reg, 3, CVT_95_Reg, 5, CVT_95_Reg, 6, CVT_95_addRegOperands_95_defaultMaskRegOp, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 5, CVT_Tied, Tie0_1_6, CVT_95_addRegOperands_95_defaultMaskRegOp, 7, CVT_Done },
  // Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_1__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__RVVMaskRegOpOperand1_1
  { CVT_95_Reg, 1, CVT_95_addRegOperands_95_defaultMaskRegOp, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 5, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 5, CVT_95_addRegOperands_95_defaultMaskRegOp, 6, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm51_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_0__Reg1_0
  { CVT_95_Reg, 1, CVT_95_Reg, 1, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_4__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 5, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__SImm51_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_addRegOperands_95_defaultMaskRegOp, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_regX0, 0, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__RVVMaskRegOpOperand1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95__MINUS_1, 0, CVT_95_addRegOperands_95_defaultMaskRegOp, 3, CVT_Done },
  // Convert__Reg1_0__UImm51_1__VTypeI1_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_95_addVTypeIOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__VTypeI1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addVTypeIOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__imm_95_255
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_imm_95_255, 0, CVT_Done },
};

void RISCVAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands,
                const SmallBitVector &OptionalOperandsMask) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  unsigned DefaultsOffset[8] = { 0 };
  assert(OptionalOperandsMask.size() == 7);
  for (unsigned i = 0, NumDefaults = 0; i < 7; ++i) {
    DefaultsOffset[i + 1] = NumDefaults;
    NumDefaults += (OptionalOperandsMask[i] ? 1 : 0);
  }
  unsigned OpIdx;
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p += 2) {
    OpIdx = *(p + 1) - DefaultsOffset[*(p + 1)];
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
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
    case CVT_95_Reg:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addRegOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_regX0:
      Inst.addOperand(MCOperand::createReg(RISCV::X0));
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addCSRSystemRegisterOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addCSRSystemRegisterOperands(Inst, 1);
      break;
    case CVT_imm_95_7:
      Inst.addOperand(MCOperand::createImm(7));
      break;
    case CVT_95_addFRMArgOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addFRMArgOperands(Inst, 1);
      break;
    case CVT_imm_95_15:
      Inst.addOperand(MCOperand::createImm(15));
      break;
    case CVT_95_addFenceArgOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addFenceArgOperands(Inst, 1);
      break;
    case CVT_imm_95_3:
      Inst.addOperand(MCOperand::createImm(3));
      break;
    case CVT_imm_95_1:
      Inst.addOperand(MCOperand::createImm(1));
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_regX1:
      Inst.addOperand(MCOperand::createReg(RISCV::X1));
      break;
    case CVT_imm_95__MINUS_1:
      Inst.addOperand(MCOperand::createImm(-1));
      break;
    case CVT_imm_95_31:
      Inst.addOperand(MCOperand::createImm(31));
      break;
    case CVT_imm_95_63:
      Inst.addOperand(MCOperand::createImm(63));
      break;
    case CVT_imm_95_16:
      Inst.addOperand(MCOperand::createImm(16));
      break;
    case CVT_imm_95_48:
      Inst.addOperand(MCOperand::createImm(48));
      break;
    case CVT_imm_95_30:
      Inst.addOperand(MCOperand::createImm(30));
      break;
    case CVT_imm_95_62:
      Inst.addOperand(MCOperand::createImm(62));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::createImm(6));
      break;
    case CVT_imm_95_14:
      Inst.addOperand(MCOperand::createImm(14));
      break;
    case CVT_imm_95_32:
      Inst.addOperand(MCOperand::createImm(32));
      break;
    case CVT_imm_95_28:
      Inst.addOperand(MCOperand::createImm(28));
      break;
    case CVT_imm_95_60:
      Inst.addOperand(MCOperand::createImm(60));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::createImm(4));
      break;
    case CVT_imm_95_12:
      Inst.addOperand(MCOperand::createImm(12));
      break;
    case CVT_imm_95_24:
      Inst.addOperand(MCOperand::createImm(24));
      break;
    case CVT_imm_95_56:
      Inst.addOperand(MCOperand::createImm(56));
      break;
    case CVT_imm_95_8:
      Inst.addOperand(MCOperand::createImm(8));
      break;
    case CVT_imm_95_3072:
      Inst.addOperand(MCOperand::createImm(3072));
      break;
    case CVT_imm_95_3200:
      Inst.addOperand(MCOperand::createImm(3200));
      break;
    case CVT_imm_95_3074:
      Inst.addOperand(MCOperand::createImm(3074));
      break;
    case CVT_imm_95_3202:
      Inst.addOperand(MCOperand::createImm(3202));
      break;
    case CVT_imm_95_3073:
      Inst.addOperand(MCOperand::createImm(3073));
      break;
    case CVT_imm_95_3201:
      Inst.addOperand(MCOperand::createImm(3201));
      break;
    case CVT_95_addRegOperands_95_defaultMaskRegOp:
      if (OptionalOperandsMask[*(p + 1) - 1]) {
        defaultMaskRegOp()->addRegOperands(Inst, 1);
      } else {
        static_cast<RISCVOperand &>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      }
      break;
    case CVT_95_addVTypeIOperands:
      static_cast<RISCVOperand &>(*Operands[OpIdx]).addVTypeIOperands(Inst, 1);
      break;
    case CVT_imm_95_255:
      Inst.addOperand(MCOperand::createImm(255));
      break;
    }
  }
}

void RISCVAsmParser::
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
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regX0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addCSRSystemRegisterOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addFRMArgOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addFenceArgOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regX1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_95__MINUS_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_31:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_63:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_16:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_48:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_30:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_62:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_32:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_28:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_60:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_24:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_56:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3072:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3200:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3074:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3202:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3073:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3201:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addRegOperands_95_defaultMaskRegOp:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addVTypeIOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_255:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
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
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK_LAST_TOKEN = MCK__41_,
  MCK_Reg55, // derived register class
  MCK_Reg52, // derived register class
  MCK_Reg49, // derived register class
  MCK_Reg46, // derived register class
  MCK_Reg43, // derived register class
  MCK_Reg40, // derived register class
  MCK_Reg37, // derived register class
  MCK_Reg34, // derived register class
  MCK_Reg31, // derived register class
  MCK_Reg28, // derived register class
  MCK_Reg25, // derived register class
  MCK_Reg22, // derived register class
  MCK_Reg19, // derived register class
  MCK_Reg16, // derived register class
  MCK_GPRX0, // register class 'GPRX0,X0'
  MCK_SP, // register class 'SP'
  MCK_VMV0, // register class 'VMV0,V0'
  MCK_VRM8NoV0, // register class 'VRM8NoV0'
  MCK_VRM8, // register class 'VRM8'
  MCK_Reg33, // derived register class
  MCK_Reg7, // derived register class
  MCK_VRM4NoV0, // register class 'VRM4NoV0'
  MCK_VRN2M4, // register class 'VRN2M4'
  MCK_FPR32C, // register class 'FPR32C'
  MCK_FPR64C, // register class 'FPR64C'
  MCK_GPRC, // register class 'GPRC'
  MCK_VRM4, // register class 'VRM4'
  MCK_Reg45, // derived register class
  MCK_Reg39, // derived register class
  MCK_VRN4M2, // register class 'VRN4M2'
  MCK_Reg30, // derived register class
  MCK_VRN3M2, // register class 'VRN3M2'
  MCK_GPRTC, // register class 'GPRTC'
  MCK_VRM2NoV0, // register class 'VRM2NoV0'
  MCK_VRN2M2, // register class 'VRN2M2'
  MCK_VRM2, // register class 'VRM2'
  MCK_Reg57, // derived register class
  MCK_Reg54, // derived register class
  MCK_VRN8M1, // register class 'VRN8M1'
  MCK_Reg51, // derived register class
  MCK_VRN7M1, // register class 'VRN7M1'
  MCK_Reg48, // derived register class
  MCK_VRN6M1, // register class 'VRN6M1'
  MCK_Reg42, // derived register class
  MCK_VRN5M1, // register class 'VRN5M1'
  MCK_Reg36, // derived register class
  MCK_VRN4M1, // register class 'VRN4M1'
  MCK_Reg27, // derived register class
  MCK_GPRNoX0X2, // register class 'GPRNoX0X2'
  MCK_VRN3M1, // register class 'VRN3M1'
  MCK_GPRNoX0, // register class 'GPRNoX0'
  MCK_VRN2M1, // register class 'VRN2M1'
  MCK_VRNoV0, // register class 'VRNoV0'
  MCK_FPR16, // register class 'FPR16'
  MCK_FPR32, // register class 'FPR32'
  MCK_FPR64, // register class 'FPR64'
  MCK_GPR, // register class 'GPR'
  MCK_VR, // register class 'VR'
  MCK_LAST_REGISTER = MCK_VR,
  MCK_AtomicMemOpOperand, // user defined class 'AtomicMemOpOperand'
  MCK_BareSymbol, // user defined class 'BareSymbol'
  MCK_CLUIImm, // user defined class 'CLUIImmAsmOperand'
  MCK_CSRSystemRegister, // user defined class 'CSRSystemRegister'
  MCK_CallSymbol, // user defined class 'CallSymbol'
  MCK_FRMArg, // user defined class 'FRMArg'
  MCK_FenceArg, // user defined class 'FenceArg'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_ImmZero, // user defined class 'ImmZeroAsmOperand'
  MCK_PseudoJumpSymbol, // user defined class 'PseudoJumpSymbol'
  MCK_SImm5Plus1, // user defined class 'SImm5Plus1AsmOperand'
  MCK_SImm21Lsb0JAL, // user defined class 'Simm21Lsb0JALAsmOperand'
  MCK_TPRelAddSymbol, // user defined class 'TPRelAddSymbol'
  MCK_UImmLog2XLen, // user defined class 'UImmLog2XLenAsmOperand'
  MCK_UImmLog2XLenHalf, // user defined class 'UImmLog2XLenHalfAsmOperand'
  MCK_UImmLog2XLenNonZero, // user defined class 'UImmLog2XLenNonZeroAsmOperand'
  MCK_RVVMaskRegOpOperand, // user defined class 'VMaskAsmOperand'
  MCK_VTypeI, // user defined class 'VTypeIAsmOperand'
  MCK_UImm5, // user defined class 'anonymous_2626'
  MCK_SImm12, // user defined class 'anonymous_2627'
  MCK_SImm13Lsb0, // user defined class 'anonymous_2628'
  MCK_UImm20LUI, // user defined class 'anonymous_2629'
  MCK_UImm20AUIPC, // user defined class 'anonymous_2630'
  MCK_ImmXLenLI, // user defined class 'anonymous_2631'
  MCK_SImm6, // user defined class 'anonymous_3290'
  MCK_SImm6NonZero, // user defined class 'anonymous_3291'
  MCK_UImm7Lsb00, // user defined class 'anonymous_3292'
  MCK_UImm8Lsb00, // user defined class 'anonymous_3293'
  MCK_UImm8Lsb000, // user defined class 'anonymous_3294'
  MCK_SImm9Lsb0, // user defined class 'anonymous_3295'
  MCK_UImm9Lsb000, // user defined class 'anonymous_3296'
  MCK_UImm10Lsb00NonZero, // user defined class 'anonymous_3297'
  MCK_SImm10Lsb0000NonZero, // user defined class 'anonymous_3298'
  MCK_SImm12Lsb0, // user defined class 'anonymous_3299'
  MCK_SImm5, // user defined class 'anonymous_3566'
  NumMatchClassKinds
};

} // end anonymous namespace

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    }
    break;
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_Reg55:
    return B == MCK_VRN8M1;

  case MCK_Reg52:
    return B == MCK_VRN7M1;

  case MCK_Reg49:
    return B == MCK_VRN6M1;

  case MCK_Reg46:
    return B == MCK_VRN5M1;

  case MCK_Reg43:
    return B == MCK_VRN4M2;

  case MCK_Reg40:
    return B == MCK_VRN4M1;

  case MCK_Reg37:
    return B == MCK_VRN3M2;

  case MCK_Reg34:
    return B == MCK_VRN3M1;

  case MCK_Reg31:
    return B == MCK_VRN2M4;

  case MCK_Reg28:
    return B == MCK_VRN2M2;

  case MCK_Reg25:
    return B == MCK_VRN2M1;

  case MCK_Reg22:
    return B == MCK_VRM8;

  case MCK_Reg19:
    return B == MCK_VRM4;

  case MCK_Reg16:
    return B == MCK_VRM2;

  case MCK_GPRX0:
    return B == MCK_GPR;

  case MCK_SP:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    }

  case MCK_VMV0:
    return B == MCK_VR;

  case MCK_VRM8NoV0:
    return B == MCK_VRM8;

  case MCK_Reg33:
    return B == MCK_VRN2M4;

  case MCK_Reg7:
    switch (B) {
    default: return false;
    case MCK_GPRC: return true;
    case MCK_GPRTC: return true;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    }

  case MCK_VRM4NoV0:
    return B == MCK_VRM4;

  case MCK_FPR32C:
    return B == MCK_FPR32;

  case MCK_FPR64C:
    return B == MCK_FPR64;

  case MCK_GPRC:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    }

  case MCK_Reg45:
    return B == MCK_VRN4M2;

  case MCK_Reg39:
    return B == MCK_VRN3M2;

  case MCK_Reg30:
    return B == MCK_VRN2M2;

  case MCK_GPRTC:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0X2: return true;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    }

  case MCK_VRM2NoV0:
    return B == MCK_VRM2;

  case MCK_Reg57:
    return B == MCK_VRN8M1;

  case MCK_Reg54:
    return B == MCK_VRN7M1;

  case MCK_Reg51:
    return B == MCK_VRN6M1;

  case MCK_Reg48:
    return B == MCK_VRN5M1;

  case MCK_Reg42:
    return B == MCK_VRN4M1;

  case MCK_Reg36:
    return B == MCK_VRN3M1;

  case MCK_Reg27:
    return B == MCK_VRN2M1;

  case MCK_GPRNoX0X2:
    switch (B) {
    default: return false;
    case MCK_GPRNoX0: return true;
    case MCK_GPR: return true;
    }

  case MCK_GPRNoX0:
    return B == MCK_GPR;

  case MCK_VRNoV0:
    return B == MCK_VR;

  case MCK_RVVMaskRegOpOperand:
    return B == OptionalMatchClass;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  RISCVOperand &Operand = (RISCVOperand &)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'AtomicMemOpOperand' class
  case MCK_AtomicMemOpOperand: {
    DiagnosticPredicate DP(Operand.isGPR());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'BareSymbol' class
  case MCK_BareSymbol: {
    DiagnosticPredicate DP(Operand.isBareSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidBareSymbol;
    break;
    }
  // 'CLUIImm' class
  case MCK_CLUIImm: {
    DiagnosticPredicate DP(Operand.isCLUIImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidCLUIImm;
    break;
    }
  // 'CSRSystemRegister' class
  case MCK_CSRSystemRegister: {
    DiagnosticPredicate DP(Operand.isCSRSystemRegister());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidCSRSystemRegister;
    break;
    }
  // 'CallSymbol' class
  case MCK_CallSymbol: {
    DiagnosticPredicate DP(Operand.isCallSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidCallSymbol;
    break;
    }
  // 'FRMArg' class
  case MCK_FRMArg: {
    DiagnosticPredicate DP(Operand.isFRMArg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidFRMArg;
    break;
    }
  // 'FenceArg' class
  case MCK_FenceArg: {
    DiagnosticPredicate DP(Operand.isFenceArg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidFenceArg;
    break;
    }
  // 'Imm' class
  case MCK_Imm: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'ImmZero' class
  case MCK_ImmZero: {
    DiagnosticPredicate DP(Operand.isImmZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidImmZero;
    break;
    }
  // 'PseudoJumpSymbol' class
  case MCK_PseudoJumpSymbol: {
    DiagnosticPredicate DP(Operand.isPseudoJumpSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidPseudoJumpSymbol;
    break;
    }
  // 'SImm5Plus1' class
  case MCK_SImm5Plus1: {
    DiagnosticPredicate DP(Operand.isSImm5Plus1());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm5Plus1;
    break;
    }
  // 'SImm21Lsb0JAL' class
  case MCK_SImm21Lsb0JAL: {
    DiagnosticPredicate DP(Operand.isSImm21Lsb0JAL());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm21Lsb0JAL;
    break;
    }
  // 'TPRelAddSymbol' class
  case MCK_TPRelAddSymbol: {
    DiagnosticPredicate DP(Operand.isTPRelAddSymbol());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidTPRelAddSymbol;
    break;
    }
  // 'UImmLog2XLen' class
  case MCK_UImmLog2XLen: {
    DiagnosticPredicate DP(Operand.isUImmLog2XLen());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImmLog2XLen;
    break;
    }
  // 'UImmLog2XLenHalf' class
  case MCK_UImmLog2XLenHalf: {
    DiagnosticPredicate DP(Operand.isUImmLog2XLenHalf());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImmLog2XLenHalf;
    break;
    }
  // 'UImmLog2XLenNonZero' class
  case MCK_UImmLog2XLenNonZero: {
    DiagnosticPredicate DP(Operand.isUImmLog2XLenNonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImmLog2XLenNonZero;
    break;
    }
  // 'RVVMaskRegOpOperand' class
  case MCK_RVVMaskRegOpOperand: {
    DiagnosticPredicate DP(Operand.isV0Reg());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidVMaskRegister;
    break;
    }
  // 'VTypeI' class
  case MCK_VTypeI: {
    DiagnosticPredicate DP(Operand.isVTypeI());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidVTypeI;
    break;
    }
  // 'UImm5' class
  case MCK_UImm5: {
    DiagnosticPredicate DP(Operand.isUImm5());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm5;
    break;
    }
  // 'SImm12' class
  case MCK_SImm12: {
    DiagnosticPredicate DP(Operand.isSImm12());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm12;
    break;
    }
  // 'SImm13Lsb0' class
  case MCK_SImm13Lsb0: {
    DiagnosticPredicate DP(Operand.isSImm13Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm13Lsb0;
    break;
    }
  // 'UImm20LUI' class
  case MCK_UImm20LUI: {
    DiagnosticPredicate DP(Operand.isUImm20LUI());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm20LUI;
    break;
    }
  // 'UImm20AUIPC' class
  case MCK_UImm20AUIPC: {
    DiagnosticPredicate DP(Operand.isUImm20AUIPC());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm20AUIPC;
    break;
    }
  // 'ImmXLenLI' class
  case MCK_ImmXLenLI: {
    DiagnosticPredicate DP(Operand.isImmXLenLI());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidImmXLenLI;
    break;
    }
  // 'SImm6' class
  case MCK_SImm6: {
    DiagnosticPredicate DP(Operand.isSImm6());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm6;
    break;
    }
  // 'SImm6NonZero' class
  case MCK_SImm6NonZero: {
    DiagnosticPredicate DP(Operand.isSImm6NonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm6NonZero;
    break;
    }
  // 'UImm7Lsb00' class
  case MCK_UImm7Lsb00: {
    DiagnosticPredicate DP(Operand.isUImm7Lsb00());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm7Lsb00;
    break;
    }
  // 'UImm8Lsb00' class
  case MCK_UImm8Lsb00: {
    DiagnosticPredicate DP(Operand.isUImm8Lsb00());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm8Lsb00;
    break;
    }
  // 'UImm8Lsb000' class
  case MCK_UImm8Lsb000: {
    DiagnosticPredicate DP(Operand.isUImm8Lsb000());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm8Lsb000;
    break;
    }
  // 'SImm9Lsb0' class
  case MCK_SImm9Lsb0: {
    DiagnosticPredicate DP(Operand.isSImm9Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm9Lsb0;
    break;
    }
  // 'UImm9Lsb000' class
  case MCK_UImm9Lsb000: {
    DiagnosticPredicate DP(Operand.isUImm9Lsb000());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm9Lsb000;
    break;
    }
  // 'UImm10Lsb00NonZero' class
  case MCK_UImm10Lsb00NonZero: {
    DiagnosticPredicate DP(Operand.isUImm10Lsb00NonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidUImm10Lsb00NonZero;
    break;
    }
  // 'SImm10Lsb0000NonZero' class
  case MCK_SImm10Lsb0000NonZero: {
    DiagnosticPredicate DP(Operand.isSImm10Lsb0000NonZero());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm10Lsb0000NonZero;
    break;
    }
  // 'SImm12Lsb0' class
  case MCK_SImm12Lsb0: {
    DiagnosticPredicate DP(Operand.isSImm12Lsb0());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm12Lsb0;
    break;
    }
  // 'SImm5' class
  case MCK_SImm5: {
    DiagnosticPredicate DP(Operand.isSImm5());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    if (DP.isNearMatch())
      return RISCVAsmParser::Match_InvalidSImm5;
    break;
    }
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case RISCV::X0: OpKind = MCK_GPRX0; break;
    case RISCV::X1: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X2: OpKind = MCK_SP; break;
    case RISCV::X3: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X4: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X5: OpKind = MCK_GPRTC; break;
    case RISCV::X6: OpKind = MCK_GPRTC; break;
    case RISCV::X7: OpKind = MCK_GPRTC; break;
    case RISCV::X8: OpKind = MCK_GPRC; break;
    case RISCV::X9: OpKind = MCK_GPRC; break;
    case RISCV::X10: OpKind = MCK_Reg7; break;
    case RISCV::X11: OpKind = MCK_Reg7; break;
    case RISCV::X12: OpKind = MCK_Reg7; break;
    case RISCV::X13: OpKind = MCK_Reg7; break;
    case RISCV::X14: OpKind = MCK_Reg7; break;
    case RISCV::X15: OpKind = MCK_Reg7; break;
    case RISCV::X16: OpKind = MCK_GPRTC; break;
    case RISCV::X17: OpKind = MCK_GPRTC; break;
    case RISCV::X18: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X19: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X20: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X21: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X22: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X23: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X24: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X25: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X26: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X27: OpKind = MCK_GPRNoX0X2; break;
    case RISCV::X28: OpKind = MCK_GPRTC; break;
    case RISCV::X29: OpKind = MCK_GPRTC; break;
    case RISCV::X30: OpKind = MCK_GPRTC; break;
    case RISCV::X31: OpKind = MCK_GPRTC; break;
    case RISCV::F0_H: OpKind = MCK_FPR16; break;
    case RISCV::F1_H: OpKind = MCK_FPR16; break;
    case RISCV::F2_H: OpKind = MCK_FPR16; break;
    case RISCV::F3_H: OpKind = MCK_FPR16; break;
    case RISCV::F4_H: OpKind = MCK_FPR16; break;
    case RISCV::F5_H: OpKind = MCK_FPR16; break;
    case RISCV::F6_H: OpKind = MCK_FPR16; break;
    case RISCV::F7_H: OpKind = MCK_FPR16; break;
    case RISCV::F8_H: OpKind = MCK_FPR16; break;
    case RISCV::F9_H: OpKind = MCK_FPR16; break;
    case RISCV::F10_H: OpKind = MCK_FPR16; break;
    case RISCV::F11_H: OpKind = MCK_FPR16; break;
    case RISCV::F12_H: OpKind = MCK_FPR16; break;
    case RISCV::F13_H: OpKind = MCK_FPR16; break;
    case RISCV::F14_H: OpKind = MCK_FPR16; break;
    case RISCV::F15_H: OpKind = MCK_FPR16; break;
    case RISCV::F16_H: OpKind = MCK_FPR16; break;
    case RISCV::F17_H: OpKind = MCK_FPR16; break;
    case RISCV::F18_H: OpKind = MCK_FPR16; break;
    case RISCV::F19_H: OpKind = MCK_FPR16; break;
    case RISCV::F20_H: OpKind = MCK_FPR16; break;
    case RISCV::F21_H: OpKind = MCK_FPR16; break;
    case RISCV::F22_H: OpKind = MCK_FPR16; break;
    case RISCV::F23_H: OpKind = MCK_FPR16; break;
    case RISCV::F24_H: OpKind = MCK_FPR16; break;
    case RISCV::F25_H: OpKind = MCK_FPR16; break;
    case RISCV::F26_H: OpKind = MCK_FPR16; break;
    case RISCV::F27_H: OpKind = MCK_FPR16; break;
    case RISCV::F28_H: OpKind = MCK_FPR16; break;
    case RISCV::F29_H: OpKind = MCK_FPR16; break;
    case RISCV::F30_H: OpKind = MCK_FPR16; break;
    case RISCV::F31_H: OpKind = MCK_FPR16; break;
    case RISCV::F0_F: OpKind = MCK_FPR32; break;
    case RISCV::F1_F: OpKind = MCK_FPR32; break;
    case RISCV::F2_F: OpKind = MCK_FPR32; break;
    case RISCV::F3_F: OpKind = MCK_FPR32; break;
    case RISCV::F4_F: OpKind = MCK_FPR32; break;
    case RISCV::F5_F: OpKind = MCK_FPR32; break;
    case RISCV::F6_F: OpKind = MCK_FPR32; break;
    case RISCV::F7_F: OpKind = MCK_FPR32; break;
    case RISCV::F8_F: OpKind = MCK_FPR32C; break;
    case RISCV::F9_F: OpKind = MCK_FPR32C; break;
    case RISCV::F10_F: OpKind = MCK_FPR32C; break;
    case RISCV::F11_F: OpKind = MCK_FPR32C; break;
    case RISCV::F12_F: OpKind = MCK_FPR32C; break;
    case RISCV::F13_F: OpKind = MCK_FPR32C; break;
    case RISCV::F14_F: OpKind = MCK_FPR32C; break;
    case RISCV::F15_F: OpKind = MCK_FPR32C; break;
    case RISCV::F16_F: OpKind = MCK_FPR32; break;
    case RISCV::F17_F: OpKind = MCK_FPR32; break;
    case RISCV::F18_F: OpKind = MCK_FPR32; break;
    case RISCV::F19_F: OpKind = MCK_FPR32; break;
    case RISCV::F20_F: OpKind = MCK_FPR32; break;
    case RISCV::F21_F: OpKind = MCK_FPR32; break;
    case RISCV::F22_F: OpKind = MCK_FPR32; break;
    case RISCV::F23_F: OpKind = MCK_FPR32; break;
    case RISCV::F24_F: OpKind = MCK_FPR32; break;
    case RISCV::F25_F: OpKind = MCK_FPR32; break;
    case RISCV::F26_F: OpKind = MCK_FPR32; break;
    case RISCV::F27_F: OpKind = MCK_FPR32; break;
    case RISCV::F28_F: OpKind = MCK_FPR32; break;
    case RISCV::F29_F: OpKind = MCK_FPR32; break;
    case RISCV::F30_F: OpKind = MCK_FPR32; break;
    case RISCV::F31_F: OpKind = MCK_FPR32; break;
    case RISCV::F0_D: OpKind = MCK_FPR64; break;
    case RISCV::F1_D: OpKind = MCK_FPR64; break;
    case RISCV::F2_D: OpKind = MCK_FPR64; break;
    case RISCV::F3_D: OpKind = MCK_FPR64; break;
    case RISCV::F4_D: OpKind = MCK_FPR64; break;
    case RISCV::F5_D: OpKind = MCK_FPR64; break;
    case RISCV::F6_D: OpKind = MCK_FPR64; break;
    case RISCV::F7_D: OpKind = MCK_FPR64; break;
    case RISCV::F8_D: OpKind = MCK_FPR64C; break;
    case RISCV::F9_D: OpKind = MCK_FPR64C; break;
    case RISCV::F10_D: OpKind = MCK_FPR64C; break;
    case RISCV::F11_D: OpKind = MCK_FPR64C; break;
    case RISCV::F12_D: OpKind = MCK_FPR64C; break;
    case RISCV::F13_D: OpKind = MCK_FPR64C; break;
    case RISCV::F14_D: OpKind = MCK_FPR64C; break;
    case RISCV::F15_D: OpKind = MCK_FPR64C; break;
    case RISCV::F16_D: OpKind = MCK_FPR64; break;
    case RISCV::F17_D: OpKind = MCK_FPR64; break;
    case RISCV::F18_D: OpKind = MCK_FPR64; break;
    case RISCV::F19_D: OpKind = MCK_FPR64; break;
    case RISCV::F20_D: OpKind = MCK_FPR64; break;
    case RISCV::F21_D: OpKind = MCK_FPR64; break;
    case RISCV::F22_D: OpKind = MCK_FPR64; break;
    case RISCV::F23_D: OpKind = MCK_FPR64; break;
    case RISCV::F24_D: OpKind = MCK_FPR64; break;
    case RISCV::F25_D: OpKind = MCK_FPR64; break;
    case RISCV::F26_D: OpKind = MCK_FPR64; break;
    case RISCV::F27_D: OpKind = MCK_FPR64; break;
    case RISCV::F28_D: OpKind = MCK_FPR64; break;
    case RISCV::F29_D: OpKind = MCK_FPR64; break;
    case RISCV::F30_D: OpKind = MCK_FPR64; break;
    case RISCV::F31_D: OpKind = MCK_FPR64; break;
    case RISCV::V0: OpKind = MCK_VMV0; break;
    case RISCV::V1: OpKind = MCK_VRNoV0; break;
    case RISCV::V2: OpKind = MCK_VRNoV0; break;
    case RISCV::V3: OpKind = MCK_VRNoV0; break;
    case RISCV::V4: OpKind = MCK_VRNoV0; break;
    case RISCV::V5: OpKind = MCK_VRNoV0; break;
    case RISCV::V6: OpKind = MCK_VRNoV0; break;
    case RISCV::V7: OpKind = MCK_VRNoV0; break;
    case RISCV::V8: OpKind = MCK_VRNoV0; break;
    case RISCV::V9: OpKind = MCK_VRNoV0; break;
    case RISCV::V10: OpKind = MCK_VRNoV0; break;
    case RISCV::V11: OpKind = MCK_VRNoV0; break;
    case RISCV::V12: OpKind = MCK_VRNoV0; break;
    case RISCV::V13: OpKind = MCK_VRNoV0; break;
    case RISCV::V14: OpKind = MCK_VRNoV0; break;
    case RISCV::V15: OpKind = MCK_VRNoV0; break;
    case RISCV::V16: OpKind = MCK_VRNoV0; break;
    case RISCV::V17: OpKind = MCK_VRNoV0; break;
    case RISCV::V18: OpKind = MCK_VRNoV0; break;
    case RISCV::V19: OpKind = MCK_VRNoV0; break;
    case RISCV::V20: OpKind = MCK_VRNoV0; break;
    case RISCV::V21: OpKind = MCK_VRNoV0; break;
    case RISCV::V22: OpKind = MCK_VRNoV0; break;
    case RISCV::V23: OpKind = MCK_VRNoV0; break;
    case RISCV::V24: OpKind = MCK_VRNoV0; break;
    case RISCV::V25: OpKind = MCK_VRNoV0; break;
    case RISCV::V26: OpKind = MCK_VRNoV0; break;
    case RISCV::V27: OpKind = MCK_VRNoV0; break;
    case RISCV::V28: OpKind = MCK_VRNoV0; break;
    case RISCV::V29: OpKind = MCK_VRNoV0; break;
    case RISCV::V30: OpKind = MCK_VRNoV0; break;
    case RISCV::V31: OpKind = MCK_VRNoV0; break;
    case RISCV::V0M2: OpKind = MCK_Reg16; break;
    case RISCV::V2M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V4M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V6M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V8M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V10M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V12M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V14M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V16M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V18M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V20M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V22M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V24M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V26M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V28M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V30M2: OpKind = MCK_VRM2NoV0; break;
    case RISCV::V0M4: OpKind = MCK_Reg19; break;
    case RISCV::V4M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V8M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V12M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V16M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V20M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V24M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V28M4: OpKind = MCK_VRM4NoV0; break;
    case RISCV::V0M8: OpKind = MCK_Reg22; break;
    case RISCV::V8M8: OpKind = MCK_VRM8NoV0; break;
    case RISCV::V16M8: OpKind = MCK_VRM8NoV0; break;
    case RISCV::V24M8: OpKind = MCK_VRM8NoV0; break;
    case RISCV::V0_V1: OpKind = MCK_Reg25; break;
    case RISCV::V1_V2: OpKind = MCK_Reg27; break;
    case RISCV::V2_V3: OpKind = MCK_Reg27; break;
    case RISCV::V3_V4: OpKind = MCK_Reg27; break;
    case RISCV::V4_V5: OpKind = MCK_Reg27; break;
    case RISCV::V5_V6: OpKind = MCK_Reg27; break;
    case RISCV::V6_V7: OpKind = MCK_Reg27; break;
    case RISCV::V7_V8: OpKind = MCK_Reg27; break;
    case RISCV::V8_V9: OpKind = MCK_Reg27; break;
    case RISCV::V9_V10: OpKind = MCK_Reg27; break;
    case RISCV::V10_V11: OpKind = MCK_Reg27; break;
    case RISCV::V11_V12: OpKind = MCK_Reg27; break;
    case RISCV::V12_V13: OpKind = MCK_Reg27; break;
    case RISCV::V13_V14: OpKind = MCK_Reg27; break;
    case RISCV::V14_V15: OpKind = MCK_Reg27; break;
    case RISCV::V15_V16: OpKind = MCK_Reg27; break;
    case RISCV::V16_V17: OpKind = MCK_Reg27; break;
    case RISCV::V17_V18: OpKind = MCK_Reg27; break;
    case RISCV::V18_V19: OpKind = MCK_Reg27; break;
    case RISCV::V19_V20: OpKind = MCK_Reg27; break;
    case RISCV::V20_V21: OpKind = MCK_Reg27; break;
    case RISCV::V21_V22: OpKind = MCK_Reg27; break;
    case RISCV::V22_V23: OpKind = MCK_Reg27; break;
    case RISCV::V23_V24: OpKind = MCK_Reg27; break;
    case RISCV::V24_V25: OpKind = MCK_Reg27; break;
    case RISCV::V25_V26: OpKind = MCK_Reg27; break;
    case RISCV::V26_V27: OpKind = MCK_Reg27; break;
    case RISCV::V27_V28: OpKind = MCK_Reg27; break;
    case RISCV::V28_V29: OpKind = MCK_Reg27; break;
    case RISCV::V29_V30: OpKind = MCK_Reg27; break;
    case RISCV::V30_V31: OpKind = MCK_Reg27; break;
    case RISCV::V0M2_V2M2: OpKind = MCK_Reg28; break;
    case RISCV::V2M2_V4M2: OpKind = MCK_Reg30; break;
    case RISCV::V4M2_V6M2: OpKind = MCK_Reg30; break;
    case RISCV::V6M2_V8M2: OpKind = MCK_Reg30; break;
    case RISCV::V8M2_V10M2: OpKind = MCK_Reg30; break;
    case RISCV::V10M2_V12M2: OpKind = MCK_Reg30; break;
    case RISCV::V12M2_V14M2: OpKind = MCK_Reg30; break;
    case RISCV::V14M2_V16M2: OpKind = MCK_Reg30; break;
    case RISCV::V16M2_V18M2: OpKind = MCK_Reg30; break;
    case RISCV::V18M2_V20M2: OpKind = MCK_Reg30; break;
    case RISCV::V20M2_V22M2: OpKind = MCK_Reg30; break;
    case RISCV::V22M2_V24M2: OpKind = MCK_Reg30; break;
    case RISCV::V24M2_V26M2: OpKind = MCK_Reg30; break;
    case RISCV::V26M2_V28M2: OpKind = MCK_Reg30; break;
    case RISCV::V28M2_V30M2: OpKind = MCK_Reg30; break;
    case RISCV::V0M4_V4M4: OpKind = MCK_Reg31; break;
    case RISCV::V4M4_V8M4: OpKind = MCK_Reg33; break;
    case RISCV::V8M4_V12M4: OpKind = MCK_Reg33; break;
    case RISCV::V12M4_V16M4: OpKind = MCK_Reg33; break;
    case RISCV::V16M4_V20M4: OpKind = MCK_Reg33; break;
    case RISCV::V20M4_V24M4: OpKind = MCK_Reg33; break;
    case RISCV::V24M4_V28M4: OpKind = MCK_Reg33; break;
    case RISCV::V0_V1_V2: OpKind = MCK_Reg34; break;
    case RISCV::V1_V2_V3: OpKind = MCK_Reg36; break;
    case RISCV::V2_V3_V4: OpKind = MCK_Reg36; break;
    case RISCV::V3_V4_V5: OpKind = MCK_Reg36; break;
    case RISCV::V4_V5_V6: OpKind = MCK_Reg36; break;
    case RISCV::V5_V6_V7: OpKind = MCK_Reg36; break;
    case RISCV::V6_V7_V8: OpKind = MCK_Reg36; break;
    case RISCV::V7_V8_V9: OpKind = MCK_Reg36; break;
    case RISCV::V8_V9_V10: OpKind = MCK_Reg36; break;
    case RISCV::V9_V10_V11: OpKind = MCK_Reg36; break;
    case RISCV::V10_V11_V12: OpKind = MCK_Reg36; break;
    case RISCV::V11_V12_V13: OpKind = MCK_Reg36; break;
    case RISCV::V12_V13_V14: OpKind = MCK_Reg36; break;
    case RISCV::V13_V14_V15: OpKind = MCK_Reg36; break;
    case RISCV::V14_V15_V16: OpKind = MCK_Reg36; break;
    case RISCV::V15_V16_V17: OpKind = MCK_Reg36; break;
    case RISCV::V16_V17_V18: OpKind = MCK_Reg36; break;
    case RISCV::V17_V18_V19: OpKind = MCK_Reg36; break;
    case RISCV::V18_V19_V20: OpKind = MCK_Reg36; break;
    case RISCV::V19_V20_V21: OpKind = MCK_Reg36; break;
    case RISCV::V20_V21_V22: OpKind = MCK_Reg36; break;
    case RISCV::V21_V22_V23: OpKind = MCK_Reg36; break;
    case RISCV::V22_V23_V24: OpKind = MCK_Reg36; break;
    case RISCV::V23_V24_V25: OpKind = MCK_Reg36; break;
    case RISCV::V24_V25_V26: OpKind = MCK_Reg36; break;
    case RISCV::V25_V26_V27: OpKind = MCK_Reg36; break;
    case RISCV::V26_V27_V28: OpKind = MCK_Reg36; break;
    case RISCV::V27_V28_V29: OpKind = MCK_Reg36; break;
    case RISCV::V28_V29_V30: OpKind = MCK_Reg36; break;
    case RISCV::V29_V30_V31: OpKind = MCK_Reg36; break;
    case RISCV::V0M2_V2M2_V4M2: OpKind = MCK_Reg37; break;
    case RISCV::V2M2_V4M2_V6M2: OpKind = MCK_Reg39; break;
    case RISCV::V4M2_V6M2_V8M2: OpKind = MCK_Reg39; break;
    case RISCV::V6M2_V8M2_V10M2: OpKind = MCK_Reg39; break;
    case RISCV::V8M2_V10M2_V12M2: OpKind = MCK_Reg39; break;
    case RISCV::V10M2_V12M2_V14M2: OpKind = MCK_Reg39; break;
    case RISCV::V12M2_V14M2_V16M2: OpKind = MCK_Reg39; break;
    case RISCV::V14M2_V16M2_V18M2: OpKind = MCK_Reg39; break;
    case RISCV::V16M2_V18M2_V20M2: OpKind = MCK_Reg39; break;
    case RISCV::V18M2_V20M2_V22M2: OpKind = MCK_Reg39; break;
    case RISCV::V20M2_V22M2_V24M2: OpKind = MCK_Reg39; break;
    case RISCV::V22M2_V24M2_V26M2: OpKind = MCK_Reg39; break;
    case RISCV::V24M2_V26M2_V28M2: OpKind = MCK_Reg39; break;
    case RISCV::V26M2_V28M2_V30M2: OpKind = MCK_Reg39; break;
    case RISCV::V0_V1_V2_V3: OpKind = MCK_Reg40; break;
    case RISCV::V1_V2_V3_V4: OpKind = MCK_Reg42; break;
    case RISCV::V2_V3_V4_V5: OpKind = MCK_Reg42; break;
    case RISCV::V3_V4_V5_V6: OpKind = MCK_Reg42; break;
    case RISCV::V4_V5_V6_V7: OpKind = MCK_Reg42; break;
    case RISCV::V5_V6_V7_V8: OpKind = MCK_Reg42; break;
    case RISCV::V6_V7_V8_V9: OpKind = MCK_Reg42; break;
    case RISCV::V7_V8_V9_V10: OpKind = MCK_Reg42; break;
    case RISCV::V8_V9_V10_V11: OpKind = MCK_Reg42; break;
    case RISCV::V9_V10_V11_V12: OpKind = MCK_Reg42; break;
    case RISCV::V10_V11_V12_V13: OpKind = MCK_Reg42; break;
    case RISCV::V11_V12_V13_V14: OpKind = MCK_Reg42; break;
    case RISCV::V12_V13_V14_V15: OpKind = MCK_Reg42; break;
    case RISCV::V13_V14_V15_V16: OpKind = MCK_Reg42; break;
    case RISCV::V14_V15_V16_V17: OpKind = MCK_Reg42; break;
    case RISCV::V15_V16_V17_V18: OpKind = MCK_Reg42; break;
    case RISCV::V16_V17_V18_V19: OpKind = MCK_Reg42; break;
    case RISCV::V17_V18_V19_V20: OpKind = MCK_Reg42; break;
    case RISCV::V18_V19_V20_V21: OpKind = MCK_Reg42; break;
    case RISCV::V19_V20_V21_V22: OpKind = MCK_Reg42; break;
    case RISCV::V20_V21_V22_V23: OpKind = MCK_Reg42; break;
    case RISCV::V21_V22_V23_V24: OpKind = MCK_Reg42; break;
    case RISCV::V22_V23_V24_V25: OpKind = MCK_Reg42; break;
    case RISCV::V23_V24_V25_V26: OpKind = MCK_Reg42; break;
    case RISCV::V24_V25_V26_V27: OpKind = MCK_Reg42; break;
    case RISCV::V25_V26_V27_V28: OpKind = MCK_Reg42; break;
    case RISCV::V26_V27_V28_V29: OpKind = MCK_Reg42; break;
    case RISCV::V27_V28_V29_V30: OpKind = MCK_Reg42; break;
    case RISCV::V28_V29_V30_V31: OpKind = MCK_Reg42; break;
    case RISCV::V0M2_V2M2_V4M2_V6M2: OpKind = MCK_Reg43; break;
    case RISCV::V2M2_V4M2_V6M2_V8M2: OpKind = MCK_Reg45; break;
    case RISCV::V4M2_V6M2_V8M2_V10M2: OpKind = MCK_Reg45; break;
    case RISCV::V6M2_V8M2_V10M2_V12M2: OpKind = MCK_Reg45; break;
    case RISCV::V8M2_V10M2_V12M2_V14M2: OpKind = MCK_Reg45; break;
    case RISCV::V10M2_V12M2_V14M2_V16M2: OpKind = MCK_Reg45; break;
    case RISCV::V12M2_V14M2_V16M2_V18M2: OpKind = MCK_Reg45; break;
    case RISCV::V14M2_V16M2_V18M2_V20M2: OpKind = MCK_Reg45; break;
    case RISCV::V16M2_V18M2_V20M2_V22M2: OpKind = MCK_Reg45; break;
    case RISCV::V18M2_V20M2_V22M2_V24M2: OpKind = MCK_Reg45; break;
    case RISCV::V20M2_V22M2_V24M2_V26M2: OpKind = MCK_Reg45; break;
    case RISCV::V22M2_V24M2_V26M2_V28M2: OpKind = MCK_Reg45; break;
    case RISCV::V24M2_V26M2_V28M2_V30M2: OpKind = MCK_Reg45; break;
    case RISCV::V0_V1_V2_V3_V4: OpKind = MCK_Reg46; break;
    case RISCV::V1_V2_V3_V4_V5: OpKind = MCK_Reg48; break;
    case RISCV::V2_V3_V4_V5_V6: OpKind = MCK_Reg48; break;
    case RISCV::V3_V4_V5_V6_V7: OpKind = MCK_Reg48; break;
    case RISCV::V4_V5_V6_V7_V8: OpKind = MCK_Reg48; break;
    case RISCV::V5_V6_V7_V8_V9: OpKind = MCK_Reg48; break;
    case RISCV::V6_V7_V8_V9_V10: OpKind = MCK_Reg48; break;
    case RISCV::V7_V8_V9_V10_V11: OpKind = MCK_Reg48; break;
    case RISCV::V8_V9_V10_V11_V12: OpKind = MCK_Reg48; break;
    case RISCV::V9_V10_V11_V12_V13: OpKind = MCK_Reg48; break;
    case RISCV::V10_V11_V12_V13_V14: OpKind = MCK_Reg48; break;
    case RISCV::V11_V12_V13_V14_V15: OpKind = MCK_Reg48; break;
    case RISCV::V12_V13_V14_V15_V16: OpKind = MCK_Reg48; break;
    case RISCV::V13_V14_V15_V16_V17: OpKind = MCK_Reg48; break;
    case RISCV::V14_V15_V16_V17_V18: OpKind = MCK_Reg48; break;
    case RISCV::V15_V16_V17_V18_V19: OpKind = MCK_Reg48; break;
    case RISCV::V16_V17_V18_V19_V20: OpKind = MCK_Reg48; break;
    case RISCV::V17_V18_V19_V20_V21: OpKind = MCK_Reg48; break;
    case RISCV::V18_V19_V20_V21_V22: OpKind = MCK_Reg48; break;
    case RISCV::V19_V20_V21_V22_V23: OpKind = MCK_Reg48; break;
    case RISCV::V20_V21_V22_V23_V24: OpKind = MCK_Reg48; break;
    case RISCV::V21_V22_V23_V24_V25: OpKind = MCK_Reg48; break;
    case RISCV::V22_V23_V24_V25_V26: OpKind = MCK_Reg48; break;
    case RISCV::V23_V24_V25_V26_V27: OpKind = MCK_Reg48; break;
    case RISCV::V24_V25_V26_V27_V28: OpKind = MCK_Reg48; break;
    case RISCV::V25_V26_V27_V28_V29: OpKind = MCK_Reg48; break;
    case RISCV::V26_V27_V28_V29_V30: OpKind = MCK_Reg48; break;
    case RISCV::V27_V28_V29_V30_V31: OpKind = MCK_Reg48; break;
    case RISCV::V0_V1_V2_V3_V4_V5: OpKind = MCK_Reg49; break;
    case RISCV::V1_V2_V3_V4_V5_V6: OpKind = MCK_Reg51; break;
    case RISCV::V2_V3_V4_V5_V6_V7: OpKind = MCK_Reg51; break;
    case RISCV::V3_V4_V5_V6_V7_V8: OpKind = MCK_Reg51; break;
    case RISCV::V4_V5_V6_V7_V8_V9: OpKind = MCK_Reg51; break;
    case RISCV::V5_V6_V7_V8_V9_V10: OpKind = MCK_Reg51; break;
    case RISCV::V6_V7_V8_V9_V10_V11: OpKind = MCK_Reg51; break;
    case RISCV::V7_V8_V9_V10_V11_V12: OpKind = MCK_Reg51; break;
    case RISCV::V8_V9_V10_V11_V12_V13: OpKind = MCK_Reg51; break;
    case RISCV::V9_V10_V11_V12_V13_V14: OpKind = MCK_Reg51; break;
    case RISCV::V10_V11_V12_V13_V14_V15: OpKind = MCK_Reg51; break;
    case RISCV::V11_V12_V13_V14_V15_V16: OpKind = MCK_Reg51; break;
    case RISCV::V12_V13_V14_V15_V16_V17: OpKind = MCK_Reg51; break;
    case RISCV::V13_V14_V15_V16_V17_V18: OpKind = MCK_Reg51; break;
    case RISCV::V14_V15_V16_V17_V18_V19: OpKind = MCK_Reg51; break;
    case RISCV::V15_V16_V17_V18_V19_V20: OpKind = MCK_Reg51; break;
    case RISCV::V16_V17_V18_V19_V20_V21: OpKind = MCK_Reg51; break;
    case RISCV::V17_V18_V19_V20_V21_V22: OpKind = MCK_Reg51; break;
    case RISCV::V18_V19_V20_V21_V22_V23: OpKind = MCK_Reg51; break;
    case RISCV::V19_V20_V21_V22_V23_V24: OpKind = MCK_Reg51; break;
    case RISCV::V20_V21_V22_V23_V24_V25: OpKind = MCK_Reg51; break;
    case RISCV::V21_V22_V23_V24_V25_V26: OpKind = MCK_Reg51; break;
    case RISCV::V22_V23_V24_V25_V26_V27: OpKind = MCK_Reg51; break;
    case RISCV::V23_V24_V25_V26_V27_V28: OpKind = MCK_Reg51; break;
    case RISCV::V24_V25_V26_V27_V28_V29: OpKind = MCK_Reg51; break;
    case RISCV::V25_V26_V27_V28_V29_V30: OpKind = MCK_Reg51; break;
    case RISCV::V26_V27_V28_V29_V30_V31: OpKind = MCK_Reg51; break;
    case RISCV::V0_V1_V2_V3_V4_V5_V6: OpKind = MCK_Reg52; break;
    case RISCV::V1_V2_V3_V4_V5_V6_V7: OpKind = MCK_Reg54; break;
    case RISCV::V2_V3_V4_V5_V6_V7_V8: OpKind = MCK_Reg54; break;
    case RISCV::V3_V4_V5_V6_V7_V8_V9: OpKind = MCK_Reg54; break;
    case RISCV::V4_V5_V6_V7_V8_V9_V10: OpKind = MCK_Reg54; break;
    case RISCV::V5_V6_V7_V8_V9_V10_V11: OpKind = MCK_Reg54; break;
    case RISCV::V6_V7_V8_V9_V10_V11_V12: OpKind = MCK_Reg54; break;
    case RISCV::V7_V8_V9_V10_V11_V12_V13: OpKind = MCK_Reg54; break;
    case RISCV::V8_V9_V10_V11_V12_V13_V14: OpKind = MCK_Reg54; break;
    case RISCV::V9_V10_V11_V12_V13_V14_V15: OpKind = MCK_Reg54; break;
    case RISCV::V10_V11_V12_V13_V14_V15_V16: OpKind = MCK_Reg54; break;
    case RISCV::V11_V12_V13_V14_V15_V16_V17: OpKind = MCK_Reg54; break;
    case RISCV::V12_V13_V14_V15_V16_V17_V18: OpKind = MCK_Reg54; break;
    case RISCV::V13_V14_V15_V16_V17_V18_V19: OpKind = MCK_Reg54; break;
    case RISCV::V14_V15_V16_V17_V18_V19_V20: OpKind = MCK_Reg54; break;
    case RISCV::V15_V16_V17_V18_V19_V20_V21: OpKind = MCK_Reg54; break;
    case RISCV::V16_V17_V18_V19_V20_V21_V22: OpKind = MCK_Reg54; break;
    case RISCV::V17_V18_V19_V20_V21_V22_V23: OpKind = MCK_Reg54; break;
    case RISCV::V18_V19_V20_V21_V22_V23_V24: OpKind = MCK_Reg54; break;
    case RISCV::V19_V20_V21_V22_V23_V24_V25: OpKind = MCK_Reg54; break;
    case RISCV::V20_V21_V22_V23_V24_V25_V26: OpKind = MCK_Reg54; break;
    case RISCV::V21_V22_V23_V24_V25_V26_V27: OpKind = MCK_Reg54; break;
    case RISCV::V22_V23_V24_V25_V26_V27_V28: OpKind = MCK_Reg54; break;
    case RISCV::V23_V24_V25_V26_V27_V28_V29: OpKind = MCK_Reg54; break;
    case RISCV::V24_V25_V26_V27_V28_V29_V30: OpKind = MCK_Reg54; break;
    case RISCV::V25_V26_V27_V28_V29_V30_V31: OpKind = MCK_Reg54; break;
    case RISCV::V0_V1_V2_V3_V4_V5_V6_V7: OpKind = MCK_Reg55; break;
    case RISCV::V1_V2_V3_V4_V5_V6_V7_V8: OpKind = MCK_Reg57; break;
    case RISCV::V2_V3_V4_V5_V6_V7_V8_V9: OpKind = MCK_Reg57; break;
    case RISCV::V3_V4_V5_V6_V7_V8_V9_V10: OpKind = MCK_Reg57; break;
    case RISCV::V4_V5_V6_V7_V8_V9_V10_V11: OpKind = MCK_Reg57; break;
    case RISCV::V5_V6_V7_V8_V9_V10_V11_V12: OpKind = MCK_Reg57; break;
    case RISCV::V6_V7_V8_V9_V10_V11_V12_V13: OpKind = MCK_Reg57; break;
    case RISCV::V7_V8_V9_V10_V11_V12_V13_V14: OpKind = MCK_Reg57; break;
    case RISCV::V8_V9_V10_V11_V12_V13_V14_V15: OpKind = MCK_Reg57; break;
    case RISCV::V9_V10_V11_V12_V13_V14_V15_V16: OpKind = MCK_Reg57; break;
    case RISCV::V10_V11_V12_V13_V14_V15_V16_V17: OpKind = MCK_Reg57; break;
    case RISCV::V11_V12_V13_V14_V15_V16_V17_V18: OpKind = MCK_Reg57; break;
    case RISCV::V12_V13_V14_V15_V16_V17_V18_V19: OpKind = MCK_Reg57; break;
    case RISCV::V13_V14_V15_V16_V17_V18_V19_V20: OpKind = MCK_Reg57; break;
    case RISCV::V14_V15_V16_V17_V18_V19_V20_V21: OpKind = MCK_Reg57; break;
    case RISCV::V15_V16_V17_V18_V19_V20_V21_V22: OpKind = MCK_Reg57; break;
    case RISCV::V16_V17_V18_V19_V20_V21_V22_V23: OpKind = MCK_Reg57; break;
    case RISCV::V17_V18_V19_V20_V21_V22_V23_V24: OpKind = MCK_Reg57; break;
    case RISCV::V18_V19_V20_V21_V22_V23_V24_V25: OpKind = MCK_Reg57; break;
    case RISCV::V19_V20_V21_V22_V23_V24_V25_V26: OpKind = MCK_Reg57; break;
    case RISCV::V20_V21_V22_V23_V24_V25_V26_V27: OpKind = MCK_Reg57; break;
    case RISCV::V21_V22_V23_V24_V25_V26_V27_V28: OpKind = MCK_Reg57; break;
    case RISCV::V22_V23_V24_V25_V26_V27_V28_V29: OpKind = MCK_Reg57; break;
    case RISCV::V23_V24_V25_V26_V27_V28_V29_V30: OpKind = MCK_Reg57; break;
    case RISCV::V24_V25_V26_V27_V28_V29_V30_V31: OpKind = MCK_Reg57; break;
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
  case MCK__40_: return "MCK__40_";
  case MCK__41_: return "MCK__41_";
  case MCK_Reg55: return "MCK_Reg55";
  case MCK_Reg52: return "MCK_Reg52";
  case MCK_Reg49: return "MCK_Reg49";
  case MCK_Reg46: return "MCK_Reg46";
  case MCK_Reg43: return "MCK_Reg43";
  case MCK_Reg40: return "MCK_Reg40";
  case MCK_Reg37: return "MCK_Reg37";
  case MCK_Reg34: return "MCK_Reg34";
  case MCK_Reg31: return "MCK_Reg31";
  case MCK_Reg28: return "MCK_Reg28";
  case MCK_Reg25: return "MCK_Reg25";
  case MCK_Reg22: return "MCK_Reg22";
  case MCK_Reg19: return "MCK_Reg19";
  case MCK_Reg16: return "MCK_Reg16";
  case MCK_GPRX0: return "MCK_GPRX0";
  case MCK_SP: return "MCK_SP";
  case MCK_VMV0: return "MCK_VMV0";
  case MCK_VRM8NoV0: return "MCK_VRM8NoV0";
  case MCK_VRM8: return "MCK_VRM8";
  case MCK_Reg33: return "MCK_Reg33";
  case MCK_Reg7: return "MCK_Reg7";
  case MCK_VRM4NoV0: return "MCK_VRM4NoV0";
  case MCK_VRN2M4: return "MCK_VRN2M4";
  case MCK_FPR32C: return "MCK_FPR32C";
  case MCK_FPR64C: return "MCK_FPR64C";
  case MCK_GPRC: return "MCK_GPRC";
  case MCK_VRM4: return "MCK_VRM4";
  case MCK_Reg45: return "MCK_Reg45";
  case MCK_Reg39: return "MCK_Reg39";
  case MCK_VRN4M2: return "MCK_VRN4M2";
  case MCK_Reg30: return "MCK_Reg30";
  case MCK_VRN3M2: return "MCK_VRN3M2";
  case MCK_GPRTC: return "MCK_GPRTC";
  case MCK_VRM2NoV0: return "MCK_VRM2NoV0";
  case MCK_VRN2M2: return "MCK_VRN2M2";
  case MCK_VRM2: return "MCK_VRM2";
  case MCK_Reg57: return "MCK_Reg57";
  case MCK_Reg54: return "MCK_Reg54";
  case MCK_VRN8M1: return "MCK_VRN8M1";
  case MCK_Reg51: return "MCK_Reg51";
  case MCK_VRN7M1: return "MCK_VRN7M1";
  case MCK_Reg48: return "MCK_Reg48";
  case MCK_VRN6M1: return "MCK_VRN6M1";
  case MCK_Reg42: return "MCK_Reg42";
  case MCK_VRN5M1: return "MCK_VRN5M1";
  case MCK_Reg36: return "MCK_Reg36";
  case MCK_VRN4M1: return "MCK_VRN4M1";
  case MCK_Reg27: return "MCK_Reg27";
  case MCK_GPRNoX0X2: return "MCK_GPRNoX0X2";
  case MCK_VRN3M1: return "MCK_VRN3M1";
  case MCK_GPRNoX0: return "MCK_GPRNoX0";
  case MCK_VRN2M1: return "MCK_VRN2M1";
  case MCK_VRNoV0: return "MCK_VRNoV0";
  case MCK_FPR16: return "MCK_FPR16";
  case MCK_FPR32: return "MCK_FPR32";
  case MCK_FPR64: return "MCK_FPR64";
  case MCK_GPR: return "MCK_GPR";
  case MCK_VR: return "MCK_VR";
  case MCK_AtomicMemOpOperand: return "MCK_AtomicMemOpOperand";
  case MCK_BareSymbol: return "MCK_BareSymbol";
  case MCK_CLUIImm: return "MCK_CLUIImm";
  case MCK_CSRSystemRegister: return "MCK_CSRSystemRegister";
  case MCK_CallSymbol: return "MCK_CallSymbol";
  case MCK_FRMArg: return "MCK_FRMArg";
  case MCK_FenceArg: return "MCK_FenceArg";
  case MCK_Imm: return "MCK_Imm";
  case MCK_ImmZero: return "MCK_ImmZero";
  case MCK_PseudoJumpSymbol: return "MCK_PseudoJumpSymbol";
  case MCK_SImm5Plus1: return "MCK_SImm5Plus1";
  case MCK_SImm21Lsb0JAL: return "MCK_SImm21Lsb0JAL";
  case MCK_TPRelAddSymbol: return "MCK_TPRelAddSymbol";
  case MCK_UImmLog2XLen: return "MCK_UImmLog2XLen";
  case MCK_UImmLog2XLenHalf: return "MCK_UImmLog2XLenHalf";
  case MCK_UImmLog2XLenNonZero: return "MCK_UImmLog2XLenNonZero";
  case MCK_RVVMaskRegOpOperand: return "MCK_RVVMaskRegOpOperand";
  case MCK_VTypeI: return "MCK_VTypeI";
  case MCK_UImm5: return "MCK_UImm5";
  case MCK_SImm12: return "MCK_SImm12";
  case MCK_SImm13Lsb0: return "MCK_SImm13Lsb0";
  case MCK_UImm20LUI: return "MCK_UImm20LUI";
  case MCK_UImm20AUIPC: return "MCK_UImm20AUIPC";
  case MCK_ImmXLenLI: return "MCK_ImmXLenLI";
  case MCK_SImm6: return "MCK_SImm6";
  case MCK_SImm6NonZero: return "MCK_SImm6NonZero";
  case MCK_UImm7Lsb00: return "MCK_UImm7Lsb00";
  case MCK_UImm8Lsb00: return "MCK_UImm8Lsb00";
  case MCK_UImm8Lsb000: return "MCK_UImm8Lsb000";
  case MCK_SImm9Lsb0: return "MCK_SImm9Lsb0";
  case MCK_UImm9Lsb000: return "MCK_UImm9Lsb000";
  case MCK_UImm10Lsb00NonZero: return "MCK_UImm10Lsb00NonZero";
  case MCK_SImm10Lsb0000NonZero: return "MCK_SImm10Lsb0000NonZero";
  case MCK_SImm12Lsb0: return "MCK_SImm12Lsb0";
  case MCK_SImm5: return "MCK_SImm5";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
FeatureBitset RISCVAsmParser::
ComputeAvailableFeatures(const FeatureBitset &FB) const {
  FeatureBitset Features;
  if (FB[RISCV::FeatureStdExtM])
    Features.set(Feature_HasStdExtMBit);
  if (FB[RISCV::FeatureStdExtA])
    Features.set(Feature_HasStdExtABit);
  if (FB[RISCV::FeatureStdExtF])
    Features.set(Feature_HasStdExtFBit);
  if (FB[RISCV::FeatureStdExtD])
    Features.set(Feature_HasStdExtDBit);
  if (FB[RISCV::FeatureExtZfh])
    Features.set(Feature_HasStdExtZfhBit);
  if (FB[RISCV::FeatureStdExtC])
    Features.set(Feature_HasStdExtCBit);
  if (FB[RISCV::FeatureExtZba])
    Features.set(Feature_HasStdExtZbaBit);
  if (FB[RISCV::FeatureExtZbb])
    Features.set(Feature_HasStdExtZbbBit);
  if (FB[RISCV::FeatureExtZbc])
    Features.set(Feature_HasStdExtZbcBit);
  if (FB[RISCV::FeatureExtZbe])
    Features.set(Feature_HasStdExtZbeBit);
  if (FB[RISCV::FeatureExtZbf])
    Features.set(Feature_HasStdExtZbfBit);
  if (FB[RISCV::FeatureExtZbm])
    Features.set(Feature_HasStdExtZbmBit);
  if (FB[RISCV::FeatureExtZbp])
    Features.set(Feature_HasStdExtZbpBit);
  if (FB[RISCV::FeatureExtZbr])
    Features.set(Feature_HasStdExtZbrBit);
  if (FB[RISCV::FeatureExtZbs])
    Features.set(Feature_HasStdExtZbsBit);
  if (FB[RISCV::FeatureExtZbt])
    Features.set(Feature_HasStdExtZbtBit);
  if ((FB[RISCV::FeatureExtZbb] || FB[RISCV::FeatureExtZbp]))
    Features.set(Feature_HasStdExtZbbOrZbpBit);
  if (FB[RISCV::FeatureExtZbproposedc])
    Features.set(Feature_HasStdExtZbproposedcBit);
  if (FB[RISCV::FeatureStdExtB])
    Features.set(Feature_HasStdExtBBit);
  if (!FB[RISCV::FeatureNoRVCHints])
    Features.set(Feature_HasRVCHintsBit);
  if (FB[RISCV::FeatureStdExtV])
    Features.set(Feature_HasStdExtVBit);
  if (FB[RISCV::FeatureStdExtZvlsseg])
    Features.set(Feature_HasStdExtZvlssegBit);
  if (FB[RISCV::FeatureExtZvamo])
    Features.set(Feature_HasStdExtZvamoBit);
  if (FB[RISCV::Feature64Bit])
    Features.set(Feature_IsRV64Bit);
  if (!FB[RISCV::Feature64Bit])
    Features.set(Feature_IsRV32Bit);
  if (FB[RISCV::FeatureRV32E])
    Features.set(Feature_IsRV32EBit);
  return Features;
}

static bool checkAsmTiedOperandConstraints(const RISCVAsmParser&AsmParser,
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
    "\003add\006add.uw\004addi\005addiw\004addw\010amoadd.d\013amoadd.d.aq\015"
    "amoadd.d.aqrl\013amoadd.d.rl\010amoadd.w\013amoadd.w.aq\015amoadd.w.aqr"
    "l\013amoadd.w.rl\010amoand.d\013amoand.d.aq\015amoand.d.aqrl\013amoand."
    "d.rl\010amoand.w\013amoand.w.aq\015amoand.w.aqrl\013amoand.w.rl\010amom"
    "ax.d\013amomax.d.aq\015amomax.d.aqrl\013amomax.d.rl\010amomax.w\013amom"
    "ax.w.aq\015amomax.w.aqrl\013amomax.w.rl\tamomaxu.d\014amomaxu.d.aq\016a"
    "momaxu.d.aqrl\014amomaxu.d.rl\tamomaxu.w\014amomaxu.w.aq\016amomaxu.w.a"
    "qrl\014amomaxu.w.rl\010amomin.d\013amomin.d.aq\015amomin.d.aqrl\013amom"
    "in.d.rl\010amomin.w\013amomin.w.aq\015amomin.w.aqrl\013amomin.w.rl\tamo"
    "minu.d\014amominu.d.aq\016amominu.d.aqrl\014amominu.d.rl\tamominu.w\014"
    "amominu.w.aq\016amominu.w.aqrl\014amominu.w.rl\007amoor.d\namoor.d.aq\014"
    "amoor.d.aqrl\namoor.d.rl\007amoor.w\namoor.w.aq\014amoor.w.aqrl\namoor."
    "w.rl\tamoswap.d\014amoswap.d.aq\016amoswap.d.aqrl\014amoswap.d.rl\tamos"
    "wap.w\014amoswap.w.aq\016amoswap.w.aqrl\014amoswap.w.rl\010amoxor.d\013"
    "amoxor.d.aq\015amoxor.d.aqrl\013amoxor.d.rl\010amoxor.w\013amoxor.w.aq\015"
    "amoxor.w.aqrl\013amoxor.w.rl\003and\004andi\004andn\005auipc\004bclr\005"
    "bclri\006bclriw\005bclrw\tbcompress\nbcompressw\013bdecompress\014bdeco"
    "mpressw\003beq\004beqz\004bext\005bexti\005bextw\003bfp\004bfpw\003bge\004"
    "bgeu\004bgez\003bgt\004bgtu\004bgtz\004binv\005binvi\006binviw\005binvw"
    "\003ble\004bleu\004blez\003blt\004bltu\004bltz\010bmatflip\006bmator\007"
    "bmatxor\003bne\004bnez\004bset\005bseti\006bsetiw\005bsetw\005c.add\006"
    "c.addi\nc.addi16sp\nc.addi4spn\007c.addiw\006c.addw\005c.and\006c.andi\006"
    "c.beqz\006c.bnez\010c.ebreak\005c.fld\007c.fldsp\005c.flw\007c.flwsp\005"
    "c.fsd\007c.fsdsp\005c.fsw\007c.fswsp\003c.j\005c.jal\006c.jalr\004c.jr\004"
    "c.ld\006c.ldsp\004c.li\005c.lui\004c.lw\006c.lwsp\004c.mv\005c.neg\005c"
    ".nop\005c.not\004c.or\004c.sd\006c.sdsp\006c.slli\010c.slli64\006c.srai"
    "\010c.srai64\006c.srli\010c.srli64\005c.sub\006c.subw\004c.sw\006c.swsp"
    "\007c.unimp\005c.xor\010c.zext.w\004call\005clmul\006clmulh\006clmulr\003"
    "clz\004clzw\004cmix\004cmov\004cpop\005cpopw\007crc32.b\007crc32.d\007c"
    "rc32.h\007crc32.w\010crc32c.b\010crc32c.d\010crc32c.h\010crc32c.w\004cs"
    "rc\005csrci\004csrr\005csrrc\006csrrci\005csrrs\006csrrsi\005csrrw\006c"
    "srrwi\004csrs\005csrsi\004csrw\005csrwi\003ctz\004ctzw\003div\004divu\005"
    "divuw\004divw\004dret\006ebreak\005ecall\006fabs.d\006fabs.h\006fabs.s\006"
    "fadd.d\006fadd.h\006fadd.s\010fclass.d\010fclass.h\010fclass.s\010fcvt."
    "d.h\010fcvt.d.l\tfcvt.d.lu\010fcvt.d.s\010fcvt.d.w\tfcvt.d.wu\010fcvt.h"
    ".d\010fcvt.h.l\tfcvt.h.lu\010fcvt.h.s\010fcvt.h.w\tfcvt.h.wu\010fcvt.l."
    "d\010fcvt.l.h\010fcvt.l.s\tfcvt.lu.d\tfcvt.lu.h\tfcvt.lu.s\010fcvt.s.d\010"
    "fcvt.s.h\010fcvt.s.l\tfcvt.s.lu\010fcvt.s.w\tfcvt.s.wu\010fcvt.w.d\010f"
    "cvt.w.h\010fcvt.w.s\tfcvt.wu.d\tfcvt.wu.h\tfcvt.wu.s\006fdiv.d\006fdiv."
    "h\006fdiv.s\005fence\007fence.i\tfence.tso\005feq.d\005feq.h\005feq.s\005"
    "fge.d\005fge.h\005fge.s\005fgt.d\005fgt.h\005fgt.s\003fld\005fle.d\005f"
    "le.h\005fle.s\003flh\005flt.d\005flt.h\005flt.s\003flw\007fmadd.d\007fm"
    "add.h\007fmadd.s\006fmax.d\006fmax.h\006fmax.s\006fmin.d\006fmin.h\006f"
    "min.s\007fmsub.d\007fmsub.h\007fmsub.s\006fmul.d\006fmul.h\006fmul.s\005"
    "fmv.d\007fmv.d.x\005fmv.h\007fmv.h.x\005fmv.s\007fmv.w.x\007fmv.x.d\007"
    "fmv.x.h\007fmv.x.w\006fneg.d\006fneg.h\006fneg.s\010fnmadd.d\010fnmadd."
    "h\010fnmadd.s\010fnmsub.d\010fnmsub.h\010fnmsub.s\005frcsr\007frflags\004"
    "frrm\004frsr\005fscsr\003fsd\007fsflags\010fsflagsi\007fsgnj.d\007fsgnj"
    ".h\007fsgnj.s\010fsgnjn.d\010fsgnjn.h\010fsgnjn.s\010fsgnjx.d\010fsgnjx"
    ".h\010fsgnjx.s\003fsh\003fsl\004fslw\007fsqrt.d\007fsqrt.h\007fsqrt.s\003"
    "fsr\004fsri\005fsriw\004fsrm\005fsrmi\004fsrw\004fssr\006fsub.d\006fsub"
    ".h\006fsub.s\003fsw\004gorc\005gorci\006gorciw\005gorcw\004grev\005grev"
    "i\006greviw\005grevw\001j\003jal\004jalr\002jr\004jump\002la\tla.tls.gd"
    "\tla.tls.ie\002lb\003lbu\002ld\002lh\003lhu\002li\003lla\004lr.d\007lr."
    "d.aq\tlr.d.aqrl\007lr.d.rl\004lr.w\007lr.w.aq\tlr.w.aqrl\007lr.w.rl\003"
    "lui\002lw\003lwu\003max\004maxu\003min\004minu\004mret\003mul\004mulh\006"
    "mulhsu\005mulhu\004mulw\002mv\003neg\004negw\003nop\003not\002or\003orc"
    "\005orc.b\005orc.h\005orc.n\005orc.p\005orc.w\005orc16\007orc16.w\004or"
    "c2\006orc2.b\006orc2.h\006orc2.n\006orc2.w\005orc32\004orc4\006orc4.b\006"
    "orc4.h\006orc4.w\004orc8\006orc8.h\006orc8.w\003ori\003orn\004pack\005p"
    "ackh\005packu\006packuw\005packw\007rdcycle\010rdcycleh\trdinstret\nrdi"
    "nstreth\006rdtime\007rdtimeh\003rem\004remu\005remuw\004remw\003ret\003"
    "rev\005rev.b\005rev.h\005rev.n\005rev.p\005rev.w\005rev16\007rev16.w\004"
    "rev2\006rev2.b\006rev2.h\006rev2.n\006rev2.w\005rev32\004rev4\006rev4.b"
    "\006rev4.h\006rev4.w\004rev8\006rev8.h\006rev8.w\003rol\004rolw\003ror\004"
    "rori\005roriw\004rorw\002sb\004sc.d\007sc.d.aq\tsc.d.aqrl\007sc.d.rl\004"
    "sc.w\007sc.w.aq\tsc.w.aqrl\007sc.w.rl\002sd\004seqz\006sext.b\006sext.h"
    "\006sext.w\nsfence.vma\003sgt\004sgtu\004sgtz\002sh\006sh1add\tsh1add.u"
    "w\006sh2add\tsh2add.uw\006sh3add\tsh3add.uw\004shfl\005shfli\005shflw\003"
    "sll\004slli\007slli.uw\005slliw\004sllw\003slo\004sloi\005sloiw\004slow"
    "\003slt\004slti\005sltiu\004sltu\004sltz\004snez\003sra\004srai\005srai"
    "w\004sraw\004sret\003srl\004srli\005srliw\004srlw\003sro\004sroi\005sro"
    "iw\004srow\003sub\004subw\002sw\004tail\005unimp\006unshfl\007unshfli\007"
    "unshflw\005unzip\007unzip.b\007unzip.h\007unzip.n\007unzip.w\007unzip16"
    "\006unzip2\010unzip2.b\010unzip2.h\010unzip2.w\006unzip4\010unzip4.h\010"
    "unzip4.w\006unzip8\010unzip8.w\004uret\010vaadd.vv\010vaadd.vx\tvaaddu."
    "vv\tvaaddu.vx\010vadc.vim\010vadc.vvm\010vadc.vxm\007vadd.vi\007vadd.vv"
    "\007vadd.vx\015vamoaddei16.v\015vamoaddei32.v\015vamoaddei64.v\014vamoa"
    "ddei8.v\015vamoandei16.v\015vamoandei32.v\015vamoandei64.v\014vamoandei"
    "8.v\015vamomaxei16.v\015vamomaxei32.v\015vamomaxei64.v\014vamomaxei8.v\016"
    "vamomaxuei16.v\016vamomaxuei32.v\016vamomaxuei64.v\015vamomaxuei8.v\015"
    "vamominei16.v\015vamominei32.v\015vamominei64.v\014vamominei8.v\016vamo"
    "minuei16.v\016vamominuei32.v\016vamominuei64.v\015vamominuei8.v\014vamo"
    "orei16.v\014vamoorei32.v\014vamoorei64.v\013vamoorei8.v\016vamoswapei16"
    ".v\016vamoswapei32.v\016vamoswapei64.v\015vamoswapei8.v\015vamoxorei16."
    "v\015vamoxorei32.v\015vamoxorei64.v\014vamoxorei8.v\007vand.vi\007vand."
    "vv\007vand.vx\010vasub.vv\010vasub.vx\tvasubu.vv\tvasubu.vx\014vcompres"
    "s.vm\007vdiv.vv\007vdiv.vx\010vdivu.vv\010vdivu.vx\010vfadd.vf\010vfadd"
    ".vv\tvfclass.v\013vfcvt.f.x.v\014vfcvt.f.xu.v\017vfcvt.rtz.x.f.v\020vfc"
    "vt.rtz.xu.f.v\013vfcvt.x.f.v\014vfcvt.xu.f.v\010vfdiv.vf\010vfdiv.vv\010"
    "vfirst.m\tvfmacc.vf\tvfmacc.vv\tvfmadd.vf\tvfmadd.vv\010vfmax.vf\010vfm"
    "ax.vv\013vfmerge.vfm\010vfmin.vf\010vfmin.vv\tvfmsac.vf\tvfmsac.vv\tvfm"
    "sub.vf\tvfmsub.vv\010vfmul.vf\010vfmul.vv\010vfmv.f.s\010vfmv.s.f\010vf"
    "mv.v.f\014vfncvt.f.f.w\014vfncvt.f.x.w\015vfncvt.f.xu.w\020vfncvt.rod.f"
    ".f.w\020vfncvt.rtz.x.f.w\021vfncvt.rtz.xu.f.w\014vfncvt.x.f.w\015vfncvt"
    ".xu.f.w\007vfneg.v\nvfnmacc.vf\nvfnmacc.vv\nvfnmadd.vf\nvfnmadd.vv\nvfn"
    "msac.vf\nvfnmsac.vv\nvfnmsub.vf\nvfnmsub.vv\tvfrdiv.vf\010vfrec7.v\013v"
    "fredmax.vs\013vfredmin.vs\014vfredosum.vs\013vfredsum.vs\nvfrsqrt7.v\tv"
    "frsub.vf\tvfsgnj.vf\tvfsgnj.vv\nvfsgnjn.vf\nvfsgnjn.vv\nvfsgnjx.vf\nvfs"
    "gnjx.vv\017vfslide1down.vf\015vfslide1up.vf\010vfsqrt.v\010vfsub.vf\010"
    "vfsub.vv\tvfwadd.vf\tvfwadd.vv\tvfwadd.wf\tvfwadd.wv\014vfwcvt.f.f.v\014"
    "vfwcvt.f.x.v\015vfwcvt.f.xu.v\020vfwcvt.rtz.x.f.v\021vfwcvt.rtz.xu.f.v\014"
    "vfwcvt.x.f.v\015vfwcvt.xu.f.v\nvfwmacc.vf\nvfwmacc.vv\nvfwmsac.vf\nvfwm"
    "sac.vv\tvfwmul.vf\tvfwmul.vv\013vfwnmacc.vf\013vfwnmacc.vv\013vfwnmsac."
    "vf\013vfwnmsac.vv\015vfwredosum.vs\014vfwredsum.vs\tvfwsub.vf\tvfwsub.v"
    "v\tvfwsub.wf\tvfwsub.wv\005vid.v\007viota.m\006vl1r.v\tvl1re16.v\tvl1re"
    "32.v\tvl1re64.v\010vl1re8.v\006vl2r.v\tvl2re16.v\tvl2re32.v\tvl2re64.v\010"
    "vl2re8.v\006vl4r.v\tvl4re16.v\tvl4re32.v\tvl4re64.v\010vl4re8.v\006vl8r"
    ".v\tvl8re16.v\tvl8re32.v\tvl8re64.v\010vl8re8.v\006vle1.v\007vle16.v\tv"
    "le16ff.v\007vle32.v\tvle32ff.v\007vle64.v\tvle64ff.v\006vle8.v\010vle8f"
    "f.v\nvloxei16.v\nvloxei32.v\nvloxei64.v\tvloxei8.v\016vloxseg2ei16.v\016"
    "vloxseg2ei32.v\016vloxseg2ei64.v\015vloxseg2ei8.v\016vloxseg3ei16.v\016"
    "vloxseg3ei32.v\016vloxseg3ei64.v\015vloxseg3ei8.v\016vloxseg4ei16.v\016"
    "vloxseg4ei32.v\016vloxseg4ei64.v\015vloxseg4ei8.v\016vloxseg5ei16.v\016"
    "vloxseg5ei32.v\016vloxseg5ei64.v\015vloxseg5ei8.v\016vloxseg6ei16.v\016"
    "vloxseg6ei32.v\016vloxseg6ei64.v\015vloxseg6ei8.v\016vloxseg7ei16.v\016"
    "vloxseg7ei32.v\016vloxseg7ei64.v\015vloxseg7ei8.v\016vloxseg8ei16.v\016"
    "vloxseg8ei32.v\016vloxseg8ei64.v\015vloxseg8ei8.v\010vlse16.v\010vlse32"
    ".v\010vlse64.v\007vlse8.v\013vlseg2e16.v\015vlseg2e16ff.v\013vlseg2e32."
    "v\015vlseg2e32ff.v\013vlseg2e64.v\015vlseg2e64ff.v\nvlseg2e8.v\014vlseg"
    "2e8ff.v\013vlseg3e16.v\015vlseg3e16ff.v\013vlseg3e32.v\015vlseg3e32ff.v"
    "\013vlseg3e64.v\015vlseg3e64ff.v\nvlseg3e8.v\014vlseg3e8ff.v\013vlseg4e"
    "16.v\015vlseg4e16ff.v\013vlseg4e32.v\015vlseg4e32ff.v\013vlseg4e64.v\015"
    "vlseg4e64ff.v\nvlseg4e8.v\014vlseg4e8ff.v\013vlseg5e16.v\015vlseg5e16ff"
    ".v\013vlseg5e32.v\015vlseg5e32ff.v\013vlseg5e64.v\015vlseg5e64ff.v\nvls"
    "eg5e8.v\014vlseg5e8ff.v\013vlseg6e16.v\015vlseg6e16ff.v\013vlseg6e32.v\015"
    "vlseg6e32ff.v\013vlseg6e64.v\015vlseg6e64ff.v\nvlseg6e8.v\014vlseg6e8ff"
    ".v\013vlseg7e16.v\015vlseg7e16ff.v\013vlseg7e32.v\015vlseg7e32ff.v\013v"
    "lseg7e64.v\015vlseg7e64ff.v\nvlseg7e8.v\014vlseg7e8ff.v\013vlseg8e16.v\015"
    "vlseg8e16ff.v\013vlseg8e32.v\015vlseg8e32ff.v\013vlseg8e64.v\015vlseg8e"
    "64ff.v\nvlseg8e8.v\014vlseg8e8ff.v\014vlsseg2e16.v\014vlsseg2e32.v\014v"
    "lsseg2e64.v\013vlsseg2e8.v\014vlsseg3e16.v\014vlsseg3e32.v\014vlsseg3e6"
    "4.v\013vlsseg3e8.v\014vlsseg4e16.v\014vlsseg4e32.v\014vlsseg4e64.v\013v"
    "lsseg4e8.v\014vlsseg5e16.v\014vlsseg5e32.v\014vlsseg5e64.v\013vlsseg5e8"
    ".v\014vlsseg6e16.v\014vlsseg6e32.v\014vlsseg6e64.v\013vlsseg6e8.v\014vl"
    "sseg7e16.v\014vlsseg7e32.v\014vlsseg7e64.v\013vlsseg7e8.v\014vlsseg8e16"
    ".v\014vlsseg8e32.v\014vlsseg8e64.v\013vlsseg8e8.v\nvluxei16.v\nvluxei32"
    ".v\nvluxei64.v\tvluxei8.v\016vluxseg2ei16.v\016vluxseg2ei32.v\016vluxse"
    "g2ei64.v\015vluxseg2ei8.v\016vluxseg3ei16.v\016vluxseg3ei32.v\016vluxse"
    "g3ei64.v\015vluxseg3ei8.v\016vluxseg4ei16.v\016vluxseg4ei32.v\016vluxse"
    "g4ei64.v\015vluxseg4ei8.v\016vluxseg5ei16.v\016vluxseg5ei32.v\016vluxse"
    "g5ei64.v\015vluxseg5ei8.v\016vluxseg6ei16.v\016vluxseg6ei32.v\016vluxse"
    "g6ei64.v\015vluxseg6ei8.v\016vluxseg7ei16.v\016vluxseg7ei32.v\016vluxse"
    "g7ei64.v\015vluxseg7ei8.v\016vluxseg8ei16.v\016vluxseg8ei32.v\016vluxse"
    "g8ei64.v\015vluxseg8ei8.v\010vmacc.vv\010vmacc.vx\010vmadc.vi\tvmadc.vi"
    "m\010vmadc.vv\tvmadc.vvm\010vmadc.vx\tvmadc.vxm\010vmadd.vv\010vmadd.vx"
    "\010vmand.mm\013vmandnot.mm\007vmax.vv\007vmax.vx\010vmaxu.vv\010vmaxu."
    "vx\007vmclr.m\nvmerge.vim\nvmerge.vvm\nvmerge.vxm\010vmfeq.vf\010vmfeq."
    "vv\010vmfge.vf\010vmfge.vv\010vmfgt.vf\010vmfgt.vv\010vmfle.vf\010vmfle"
    ".vv\010vmflt.vf\010vmflt.vv\010vmfne.vf\010vmfne.vv\007vmin.vv\007vmin."
    "vx\010vminu.vv\010vminu.vx\006vmmv.m\tvmnand.mm\010vmnor.mm\007vmnot.m\007"
    "vmor.mm\nvmornot.mm\010vmsbc.vv\tvmsbc.vvm\010vmsbc.vx\tvmsbc.vxm\007vm"
    "sbf.m\010vmseq.vi\010vmseq.vv\010vmseq.vx\007vmset.m\010vmsge.vi\010vms"
    "ge.vv\010vmsge.vx\tvmsgeu.vi\tvmsgeu.vv\tvmsgeu.vx\010vmsgt.vi\010vmsgt"
    ".vv\010vmsgt.vx\tvmsgtu.vi\tvmsgtu.vv\tvmsgtu.vx\007vmsif.m\010vmsle.vi"
    "\010vmsle.vv\010vmsle.vx\tvmsleu.vi\tvmsleu.vv\tvmsleu.vx\010vmslt.vi\010"
    "vmslt.vv\010vmslt.vx\tvmsltu.vi\tvmsltu.vv\tvmsltu.vx\010vmsne.vi\010vm"
    "sne.vv\010vmsne.vx\007vmsof.m\007vmul.vv\007vmul.vx\010vmulh.vv\010vmul"
    "h.vx\nvmulhsu.vv\nvmulhsu.vx\tvmulhu.vv\tvmulhu.vx\007vmv.s.x\007vmv.v."
    "i\007vmv.v.v\007vmv.v.x\007vmv.x.s\007vmv1r.v\007vmv2r.v\007vmv4r.v\007"
    "vmv8r.v\tvmxnor.mm\010vmxor.mm\tvnclip.wi\tvnclip.wv\tvnclip.wx\nvnclip"
    "u.wi\nvnclipu.wv\nvnclipu.wx\013vncvt.x.x.w\006vneg.v\tvnmsac.vv\tvnmsa"
    "c.vx\tvnmsub.vv\tvnmsub.vx\006vnot.v\010vnsra.wi\010vnsra.wv\010vnsra.w"
    "x\010vnsrl.wi\010vnsrl.wv\010vnsrl.wx\006vor.vi\006vor.vv\006vor.vx\007"
    "vpopc.m\nvredand.vs\nvredmax.vs\013vredmaxu.vs\nvredmin.vs\013vredminu."
    "vs\tvredor.vs\nvredsum.vs\nvredxor.vs\007vrem.vv\007vrem.vx\010vremu.vv"
    "\010vremu.vx\013vrgather.vi\013vrgather.vv\013vrgather.vx\017vrgatherei"
    "16.vv\010vrsub.vi\010vrsub.vx\006vs1r.v\006vs2r.v\006vs4r.v\006vs8r.v\010"
    "vsadd.vi\010vsadd.vv\010vsadd.vx\tvsaddu.vi\tvsaddu.vv\tvsaddu.vx\010vs"
    "bc.vvm\010vsbc.vxm\006vse1.v\007vse16.v\007vse32.v\007vse64.v\006vse8.v"
    "\010vsetivli\006vsetvl\007vsetvli\tvsext.vf2\tvsext.vf4\tvsext.vf8\016v"
    "slide1down.vx\014vslide1up.vx\015vslidedown.vi\015vslidedown.vx\013vsli"
    "deup.vi\013vslideup.vx\007vsll.vi\007vsll.vv\007vsll.vx\010vsmul.vv\010"
    "vsmul.vx\nvsoxei16.v\nvsoxei32.v\nvsoxei64.v\tvsoxei8.v\016vsoxseg2ei16"
    ".v\016vsoxseg2ei32.v\016vsoxseg2ei64.v\015vsoxseg2ei8.v\016vsoxseg3ei16"
    ".v\016vsoxseg3ei32.v\016vsoxseg3ei64.v\015vsoxseg3ei8.v\016vsoxseg4ei16"
    ".v\016vsoxseg4ei32.v\016vsoxseg4ei64.v\015vsoxseg4ei8.v\016vsoxseg5ei16"
    ".v\016vsoxseg5ei32.v\016vsoxseg5ei64.v\015vsoxseg5ei8.v\016vsoxseg6ei16"
    ".v\016vsoxseg6ei32.v\016vsoxseg6ei64.v\015vsoxseg6ei8.v\016vsoxseg7ei16"
    ".v\016vsoxseg7ei32.v\016vsoxseg7ei64.v\015vsoxseg7ei8.v\016vsoxseg8ei16"
    ".v\016vsoxseg8ei32.v\016vsoxseg8ei64.v\015vsoxseg8ei8.v\007vsra.vi\007v"
    "sra.vv\007vsra.vx\007vsrl.vi\007vsrl.vv\007vsrl.vx\010vsse16.v\010vsse3"
    "2.v\010vsse64.v\007vsse8.v\013vsseg2e16.v\013vsseg2e32.v\013vsseg2e64.v"
    "\nvsseg2e8.v\013vsseg3e16.v\013vsseg3e32.v\013vsseg3e64.v\nvsseg3e8.v\013"
    "vsseg4e16.v\013vsseg4e32.v\013vsseg4e64.v\nvsseg4e8.v\013vsseg5e16.v\013"
    "vsseg5e32.v\013vsseg5e64.v\nvsseg5e8.v\013vsseg6e16.v\013vsseg6e32.v\013"
    "vsseg6e64.v\nvsseg6e8.v\013vsseg7e16.v\013vsseg7e32.v\013vsseg7e64.v\nv"
    "sseg7e8.v\013vsseg8e16.v\013vsseg8e32.v\013vsseg8e64.v\nvsseg8e8.v\010v"
    "ssra.vi\010vssra.vv\010vssra.vx\010vssrl.vi\010vssrl.vv\010vssrl.vx\014"
    "vssseg2e16.v\014vssseg2e32.v\014vssseg2e64.v\013vssseg2e8.v\014vssseg3e"
    "16.v\014vssseg3e32.v\014vssseg3e64.v\013vssseg3e8.v\014vssseg4e16.v\014"
    "vssseg4e32.v\014vssseg4e64.v\013vssseg4e8.v\014vssseg5e16.v\014vssseg5e"
    "32.v\014vssseg5e64.v\013vssseg5e8.v\014vssseg6e16.v\014vssseg6e32.v\014"
    "vssseg6e64.v\013vssseg6e8.v\014vssseg7e16.v\014vssseg7e32.v\014vssseg7e"
    "64.v\013vssseg7e8.v\014vssseg8e16.v\014vssseg8e32.v\014vssseg8e64.v\013"
    "vssseg8e8.v\010vssub.vv\010vssub.vx\tvssubu.vv\tvssubu.vx\007vsub.vv\007"
    "vsub.vx\nvsuxei16.v\nvsuxei32.v\nvsuxei64.v\tvsuxei8.v\016vsuxseg2ei16."
    "v\016vsuxseg2ei32.v\016vsuxseg2ei64.v\015vsuxseg2ei8.v\016vsuxseg3ei16."
    "v\016vsuxseg3ei32.v\016vsuxseg3ei64.v\015vsuxseg3ei8.v\016vsuxseg4ei16."
    "v\016vsuxseg4ei32.v\016vsuxseg4ei64.v\015vsuxseg4ei8.v\016vsuxseg5ei16."
    "v\016vsuxseg5ei32.v\016vsuxseg5ei64.v\015vsuxseg5ei8.v\016vsuxseg6ei16."
    "v\016vsuxseg6ei32.v\016vsuxseg6ei64.v\015vsuxseg6ei8.v\016vsuxseg7ei16."
    "v\016vsuxseg7ei32.v\016vsuxseg7ei64.v\015vsuxseg7ei8.v\016vsuxseg8ei16."
    "v\016vsuxseg8ei32.v\016vsuxseg8ei64.v\015vsuxseg8ei8.v\010vwadd.vv\010v"
    "wadd.vx\010vwadd.wv\010vwadd.wx\tvwaddu.vv\tvwaddu.vx\tvwaddu.wv\tvwadd"
    "u.wx\013vwcvt.x.x.v\014vwcvtu.x.x.v\tvwmacc.vv\tvwmacc.vx\013vwmaccsu.v"
    "v\013vwmaccsu.vx\nvwmaccu.vv\nvwmaccu.vx\013vwmaccus.vx\010vwmul.vv\010"
    "vwmul.vx\nvwmulsu.vv\nvwmulsu.vx\tvwmulu.vv\tvwmulu.vx\013vwredsum.vs\014"
    "vwredsumu.vs\010vwsub.vv\010vwsub.vx\010vwsub.wv\010vwsub.wx\tvwsubu.vv"
    "\tvwsubu.vx\tvwsubu.wv\tvwsubu.wx\007vxor.vi\007vxor.vv\007vxor.vx\tvze"
    "xt.vf2\tvzext.vf4\tvzext.vf8\003wfi\004xnor\003xor\004xori\007xperm.b\007"
    "xperm.h\007xperm.n\007xperm.w\006zext.b\006zext.h\006zext.w\003zip\005z"
    "ip.b\005zip.h\005zip.n\005zip.w\005zip16\004zip2\006zip2.b\006zip2.h\006"
    "zip2.w\004zip4\006zip4.h\006zip4.w\004zip8\006zip8.w";

// Feature bitsets.
enum : uint8_t {
  AMFBS_None,
  AMFBS_HasStdExtA,
  AMFBS_HasStdExtC,
  AMFBS_HasStdExtD,
  AMFBS_HasStdExtF,
  AMFBS_HasStdExtM,
  AMFBS_HasStdExtV,
  AMFBS_HasStdExtZba,
  AMFBS_HasStdExtZbb,
  AMFBS_HasStdExtZbbOrZbp,
  AMFBS_HasStdExtZbc,
  AMFBS_HasStdExtZbe,
  AMFBS_HasStdExtZbf,
  AMFBS_HasStdExtZbp,
  AMFBS_HasStdExtZbr,
  AMFBS_HasStdExtZbs,
  AMFBS_HasStdExtZbt,
  AMFBS_HasStdExtZfh,
  AMFBS_HasStdExtZvlsseg,
  AMFBS_IsRV32,
  AMFBS_IsRV64,
  AMFBS_HasStdExtA_IsRV64,
  AMFBS_HasStdExtC_HasRVCHints,
  AMFBS_HasStdExtC_HasStdExtD,
  AMFBS_HasStdExtC_IsRV32,
  AMFBS_HasStdExtC_IsRV64,
  AMFBS_HasStdExtD_IsRV64,
  AMFBS_HasStdExtF_IsRV64,
  AMFBS_HasStdExtM_IsRV64,
  AMFBS_HasStdExtV_HasStdExtF,
  AMFBS_HasStdExtZba_IsRV64,
  AMFBS_HasStdExtZbb_IsRV64,
  AMFBS_HasStdExtZbbOrZbp_IsRV32,
  AMFBS_HasStdExtZbbOrZbp_IsRV64,
  AMFBS_HasStdExtZbe_IsRV64,
  AMFBS_HasStdExtZbf_IsRV64,
  AMFBS_HasStdExtZbm_IsRV64,
  AMFBS_HasStdExtZbp_IsRV32,
  AMFBS_HasStdExtZbp_IsRV64,
  AMFBS_HasStdExtZbproposedc_HasStdExtC,
  AMFBS_HasStdExtZbr_IsRV64,
  AMFBS_HasStdExtZbs_IsRV64,
  AMFBS_HasStdExtZbt_IsRV64,
  AMFBS_HasStdExtZfh_HasStdExtD,
  AMFBS_HasStdExtZfh_IsRV64,
  AMFBS_HasStdExtZvamo_HasStdExtA,
  AMFBS_HasStdExtC_HasStdExtF_IsRV32,
  AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64,
  AMFBS_HasStdExtZbproposedc_HasStdExtZba_HasStdExtC_IsRV64,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // AMFBS_None
  {Feature_HasStdExtABit, },
  {Feature_HasStdExtCBit, },
  {Feature_HasStdExtDBit, },
  {Feature_HasStdExtFBit, },
  {Feature_HasStdExtMBit, },
  {Feature_HasStdExtVBit, },
  {Feature_HasStdExtZbaBit, },
  {Feature_HasStdExtZbbBit, },
  {Feature_HasStdExtZbbOrZbpBit, },
  {Feature_HasStdExtZbcBit, },
  {Feature_HasStdExtZbeBit, },
  {Feature_HasStdExtZbfBit, },
  {Feature_HasStdExtZbpBit, },
  {Feature_HasStdExtZbrBit, },
  {Feature_HasStdExtZbsBit, },
  {Feature_HasStdExtZbtBit, },
  {Feature_HasStdExtZfhBit, },
  {Feature_HasStdExtZvlssegBit, },
  {Feature_IsRV32Bit, },
  {Feature_IsRV64Bit, },
  {Feature_HasStdExtABit, Feature_IsRV64Bit, },
  {Feature_HasStdExtCBit, Feature_HasRVCHintsBit, },
  {Feature_HasStdExtCBit, Feature_HasStdExtDBit, },
  {Feature_HasStdExtCBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtCBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtDBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtFBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtMBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtVBit, Feature_HasStdExtFBit, },
  {Feature_HasStdExtZbaBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbbBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbbOrZbpBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbbOrZbpBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbeBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbfBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbmBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbpBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZbpBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbproposedcBit, Feature_HasStdExtCBit, },
  {Feature_HasStdExtZbrBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbsBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbtBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZfhBit, Feature_HasStdExtDBit, },
  {Feature_HasStdExtZfhBit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZvamoBit, Feature_HasStdExtABit, },
  {Feature_HasStdExtCBit, Feature_HasStdExtFBit, Feature_IsRV32Bit, },
  {Feature_HasStdExtZvamoBit, Feature_HasStdExtABit, Feature_IsRV64Bit, },
  {Feature_HasStdExtZbproposedcBit, Feature_HasStdExtZbaBit, Feature_HasStdExtCBit, Feature_IsRV64Bit, },
};

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint8_t ConvertFn;
    uint8_t RequiredFeaturesIdx;
    uint8_t Classes[7];
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
  { 0 /* add */, RISCV::ADD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 0 /* add */, RISCV::ADDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 0 /* add */, RISCV::PseudoAddTPRel, Convert__Reg1_0__Reg1_1__Reg1_2__TPRelAddSymbol1_3, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_TPRelAddSymbol }, },
  { 4 /* add.uw */, RISCV::ADDUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11 /* addi */, RISCV::ADDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 16 /* addiw */, RISCV::ADDIW, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 22 /* addw */, RISCV::ADDW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 22 /* addw */, RISCV::ADDIW, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 27 /* amoadd.d */, RISCV::AMOADD_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 36 /* amoadd.d.aq */, RISCV::AMOADD_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 48 /* amoadd.d.aqrl */, RISCV::AMOADD_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 62 /* amoadd.d.rl */, RISCV::AMOADD_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 74 /* amoadd.w */, RISCV::AMOADD_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 83 /* amoadd.w.aq */, RISCV::AMOADD_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 95 /* amoadd.w.aqrl */, RISCV::AMOADD_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 109 /* amoadd.w.rl */, RISCV::AMOADD_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 121 /* amoand.d */, RISCV::AMOAND_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 130 /* amoand.d.aq */, RISCV::AMOAND_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 142 /* amoand.d.aqrl */, RISCV::AMOAND_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 156 /* amoand.d.rl */, RISCV::AMOAND_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 168 /* amoand.w */, RISCV::AMOAND_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 177 /* amoand.w.aq */, RISCV::AMOAND_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 189 /* amoand.w.aqrl */, RISCV::AMOAND_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 203 /* amoand.w.rl */, RISCV::AMOAND_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 215 /* amomax.d */, RISCV::AMOMAX_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 224 /* amomax.d.aq */, RISCV::AMOMAX_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 236 /* amomax.d.aqrl */, RISCV::AMOMAX_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 250 /* amomax.d.rl */, RISCV::AMOMAX_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 262 /* amomax.w */, RISCV::AMOMAX_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 271 /* amomax.w.aq */, RISCV::AMOMAX_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 283 /* amomax.w.aqrl */, RISCV::AMOMAX_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 297 /* amomax.w.rl */, RISCV::AMOMAX_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 309 /* amomaxu.d */, RISCV::AMOMAXU_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 319 /* amomaxu.d.aq */, RISCV::AMOMAXU_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 332 /* amomaxu.d.aqrl */, RISCV::AMOMAXU_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 347 /* amomaxu.d.rl */, RISCV::AMOMAXU_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 360 /* amomaxu.w */, RISCV::AMOMAXU_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 370 /* amomaxu.w.aq */, RISCV::AMOMAXU_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 383 /* amomaxu.w.aqrl */, RISCV::AMOMAXU_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 398 /* amomaxu.w.rl */, RISCV::AMOMAXU_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 411 /* amomin.d */, RISCV::AMOMIN_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 420 /* amomin.d.aq */, RISCV::AMOMIN_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 432 /* amomin.d.aqrl */, RISCV::AMOMIN_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 446 /* amomin.d.rl */, RISCV::AMOMIN_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 458 /* amomin.w */, RISCV::AMOMIN_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 467 /* amomin.w.aq */, RISCV::AMOMIN_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 479 /* amomin.w.aqrl */, RISCV::AMOMIN_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 493 /* amomin.w.rl */, RISCV::AMOMIN_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 505 /* amominu.d */, RISCV::AMOMINU_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 515 /* amominu.d.aq */, RISCV::AMOMINU_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 528 /* amominu.d.aqrl */, RISCV::AMOMINU_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 543 /* amominu.d.rl */, RISCV::AMOMINU_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 556 /* amominu.w */, RISCV::AMOMINU_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 566 /* amominu.w.aq */, RISCV::AMOMINU_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 579 /* amominu.w.aqrl */, RISCV::AMOMINU_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 594 /* amominu.w.rl */, RISCV::AMOMINU_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 607 /* amoor.d */, RISCV::AMOOR_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 615 /* amoor.d.aq */, RISCV::AMOOR_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 626 /* amoor.d.aqrl */, RISCV::AMOOR_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 639 /* amoor.d.rl */, RISCV::AMOOR_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 650 /* amoor.w */, RISCV::AMOOR_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 658 /* amoor.w.aq */, RISCV::AMOOR_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 669 /* amoor.w.aqrl */, RISCV::AMOOR_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 682 /* amoor.w.rl */, RISCV::AMOOR_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 693 /* amoswap.d */, RISCV::AMOSWAP_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 703 /* amoswap.d.aq */, RISCV::AMOSWAP_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 716 /* amoswap.d.aqrl */, RISCV::AMOSWAP_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 731 /* amoswap.d.rl */, RISCV::AMOSWAP_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 744 /* amoswap.w */, RISCV::AMOSWAP_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 754 /* amoswap.w.aq */, RISCV::AMOSWAP_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 767 /* amoswap.w.aqrl */, RISCV::AMOSWAP_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 782 /* amoswap.w.rl */, RISCV::AMOSWAP_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 795 /* amoxor.d */, RISCV::AMOXOR_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 804 /* amoxor.d.aq */, RISCV::AMOXOR_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 816 /* amoxor.d.aqrl */, RISCV::AMOXOR_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 830 /* amoxor.d.rl */, RISCV::AMOXOR_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 842 /* amoxor.w */, RISCV::AMOXOR_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 851 /* amoxor.w.aq */, RISCV::AMOXOR_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 863 /* amoxor.w.aqrl */, RISCV::AMOXOR_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 877 /* amoxor.w.rl */, RISCV::AMOXOR_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 889 /* and */, RISCV::AND, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 889 /* and */, RISCV::ANDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 893 /* andi */, RISCV::ANDI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 898 /* andn */, RISCV::ANDN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 903 /* auipc */, RISCV::AUIPC, Convert__Reg1_0__UImm20AUIPC1_1, AMFBS_None, { MCK_GPR, MCK_UImm20AUIPC }, },
  { 909 /* bclr */, RISCV::BCLR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 914 /* bclri */, RISCV::BCLRI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 920 /* bclriw */, RISCV::BCLRIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 927 /* bclrw */, RISCV::BCLRW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 933 /* bcompress */, RISCV::BCOMPRESS, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbe, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 943 /* bcompressw */, RISCV::BCOMPRESSW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbe_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 954 /* bdecompress */, RISCV::BDECOMPRESS, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbe, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 966 /* bdecompressw */, RISCV::BDECOMPRESSW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbe_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 979 /* beq */, RISCV::BEQ, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 983 /* beqz */, RISCV::BEQ, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 988 /* bext */, RISCV::BEXT, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 993 /* bexti */, RISCV::BEXTI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 999 /* bextw */, RISCV::BEXTW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1005 /* bfp */, RISCV::BFP, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbf, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1009 /* bfpw */, RISCV::BFPW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbf_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1014 /* bge */, RISCV::BGE, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1018 /* bgeu */, RISCV::BGEU, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1023 /* bgez */, RISCV::BGE, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1028 /* bgt */, RISCV::BLT, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1032 /* bgtu */, RISCV::BLTU, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1037 /* bgtz */, RISCV::BLT, Convert__regX0__Reg1_0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1042 /* binv */, RISCV::BINV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1047 /* binvi */, RISCV::BINVI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 1053 /* binviw */, RISCV::BINVIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 1060 /* binvw */, RISCV::BINVW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1066 /* ble */, RISCV::BGE, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1070 /* bleu */, RISCV::BGEU, Convert__Reg1_1__Reg1_0__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1075 /* blez */, RISCV::BGE, Convert__regX0__Reg1_0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1080 /* blt */, RISCV::BLT, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1084 /* bltu */, RISCV::BLTU, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1089 /* bltz */, RISCV::BLT, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1094 /* bmatflip */, RISCV::BMATFLIP, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbm_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1103 /* bmator */, RISCV::BMATOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbm_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1110 /* bmatxor */, RISCV::BMATXOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbm_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1118 /* bne */, RISCV::BNE, Convert__Reg1_0__Reg1_1__SImm13Lsb01_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1122 /* bnez */, RISCV::BNE, Convert__Reg1_0__regX0__SImm13Lsb01_1, AMFBS_None, { MCK_GPR, MCK_SImm13Lsb0 }, },
  { 1127 /* bset */, RISCV::BSET, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1132 /* bseti */, RISCV::BSETI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbs, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 1138 /* bsetiw */, RISCV::BSETIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 1145 /* bsetw */, RISCV::BSETW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbs_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1151 /* c.add */, RISCV::C_ADD_HINT, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_GPRNoX0 }, },
  { 1151 /* c.add */, RISCV::C_ADD, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_GPRNoX0 }, },
  { 1157 /* c.addi */, RISCV::C_ADDI_NOP, Convert__Reg1_0__Tie0_1_1__ImmZero1_1, AMFBS_HasStdExtC, { MCK_GPRX0, MCK_ImmZero }, },
  { 1157 /* c.addi */, RISCV::C_ADDI_HINT_X0, Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_SImm6NonZero }, },
  { 1157 /* c.addi */, RISCV::C_ADDI_HINT_IMM_ZERO, Convert__Reg1_0__Tie0_1_1__ImmZero1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRNoX0, MCK_ImmZero }, },
  { 1157 /* c.addi */, RISCV::C_ADDI, Convert__Reg1_0__Tie0_1_1__SImm6NonZero1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_SImm6NonZero }, },
  { 1164 /* c.addi16sp */, RISCV::C_ADDI16SP, Convert__Reg1_0__Tie0_1_1__SImm10Lsb0000NonZero1_1, AMFBS_HasStdExtC, { MCK_SP, MCK_SImm10Lsb0000NonZero }, },
  { 1175 /* c.addi4spn */, RISCV::C_ADDI4SPN, Convert__Reg1_0__Reg1_1__UImm10Lsb00NonZero1_2, AMFBS_HasStdExtC, { MCK_GPRC, MCK_SP, MCK_UImm10Lsb00NonZero }, },
  { 1186 /* c.addiw */, RISCV::C_ADDIW, Convert__Reg1_0__Tie0_1_1__SImm61_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRNoX0, MCK_SImm6 }, },
  { 1194 /* c.addw */, RISCV::C_ADDW, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK_GPRC }, },
  { 1201 /* c.and */, RISCV::C_AND, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_GPRC }, },
  { 1207 /* c.andi */, RISCV::C_ANDI, Convert__Reg1_0__Tie0_1_1__SImm61_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_SImm6 }, },
  { 1214 /* c.beqz */, RISCV::C_BEQZ, Convert__Reg1_0__SImm9Lsb01_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_SImm9Lsb0 }, },
  { 1221 /* c.bnez */, RISCV::C_BNEZ, Convert__Reg1_0__SImm9Lsb01_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_SImm9Lsb0 }, },
  { 1228 /* c.ebreak */, RISCV::C_EBREAK, Convert_NoOperands, AMFBS_HasStdExtC, {  }, },
  { 1237 /* c.fld */, RISCV::C_FLD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1237 /* c.fld */, RISCV::C_FLD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1243 /* c.fldsp */, RISCV::C_FLDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1243 /* c.fldsp */, RISCV::C_FLDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1251 /* c.flw */, RISCV::C_FLW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1251 /* c.flw */, RISCV::C_FLW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1257 /* c.flwsp */, RISCV::C_FLWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1257 /* c.flwsp */, RISCV::C_FLWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1265 /* c.fsd */, RISCV::C_FSD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1265 /* c.fsd */, RISCV::C_FSD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1271 /* c.fsdsp */, RISCV::C_FSDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64C, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1271 /* c.fsdsp */, RISCV::C_FSDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtC_HasStdExtD, { MCK_FPR64, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1279 /* c.fsw */, RISCV::C_FSW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1279 /* c.fsw */, RISCV::C_FSW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1285 /* c.fswsp */, RISCV::C_FSWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32C, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1285 /* c.fswsp */, RISCV::C_FSWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtC_HasStdExtF_IsRV32, { MCK_FPR32, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1293 /* c.j */, RISCV::C_J, Convert__SImm12Lsb01_0, AMFBS_HasStdExtC, { MCK_SImm12Lsb0 }, },
  { 1297 /* c.jal */, RISCV::C_JAL, Convert__SImm12Lsb01_0, AMFBS_HasStdExtC_IsRV32, { MCK_SImm12Lsb0 }, },
  { 1303 /* c.jalr */, RISCV::C_JALR, Convert__Reg1_0, AMFBS_HasStdExtC, { MCK_GPRNoX0 }, },
  { 1310 /* c.jr */, RISCV::C_JR, Convert__Reg1_0, AMFBS_HasStdExtC, { MCK_GPRNoX0 }, },
  { 1315 /* c.ld */, RISCV::C_LD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1315 /* c.ld */, RISCV::C_LD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1320 /* c.ldsp */, RISCV::C_LDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1320 /* c.ldsp */, RISCV::C_LDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRNoX0, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1327 /* c.li */, RISCV::C_LI_HINT, Convert__Reg1_0__SImm61_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_SImm6 }, },
  { 1327 /* c.li */, RISCV::C_LI, Convert__Reg1_0__SImm61_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_SImm6 }, },
  { 1332 /* c.lui */, RISCV::C_LUI_HINT, Convert__Reg1_0__CLUIImm1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_CLUIImm }, },
  { 1332 /* c.lui */, RISCV::C_LUI, Convert__Reg1_0__CLUIImm1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0X2, MCK_CLUIImm }, },
  { 1338 /* c.lw */, RISCV::C_LW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1338 /* c.lw */, RISCV::C_LW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1343 /* c.lwsp */, RISCV::C_LWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1343 /* c.lwsp */, RISCV::C_LWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1350 /* c.mv */, RISCV::C_MV_HINT, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_GPRNoX0 }, },
  { 1350 /* c.mv */, RISCV::C_MV, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_GPRNoX0 }, },
  { 1355 /* c.neg */, RISCV::C_NEG, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtZbproposedc_HasStdExtC, { MCK_GPRC }, },
  { 1361 /* c.nop */, RISCV::C_NOP, Convert_NoOperands, AMFBS_HasStdExtC, {  }, },
  { 1361 /* c.nop */, RISCV::C_NOP_HINT, Convert__SImm6NonZero1_0, AMFBS_HasStdExtC_HasRVCHints, { MCK_SImm6NonZero }, },
  { 1367 /* c.not */, RISCV::C_NOT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtZbproposedc_HasStdExtC, { MCK_GPRC }, },
  { 1373 /* c.or */, RISCV::C_OR, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_GPRC }, },
  { 1378 /* c.sd */, RISCV::C_SD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1378 /* c.sd */, RISCV::C_SD, Convert__Reg1_0__Reg1_3__UImm8Lsb0001_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK_UImm8Lsb000, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1383 /* c.sdsp */, RISCV::C_SDSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1383 /* c.sdsp */, RISCV::C_SDSP, Convert__Reg1_0__Reg1_3__UImm9Lsb0001_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPR, MCK_UImm9Lsb000, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1390 /* c.slli */, RISCV::C_SLLI_HINT, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRX0, MCK_UImmLog2XLenNonZero }, },
  { 1390 /* c.slli */, RISCV::C_SLLI, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtC, { MCK_GPRNoX0, MCK_UImmLog2XLenNonZero }, },
  { 1397 /* c.slli64 */, RISCV::C_SLLI64_HINT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPR }, },
  { 1406 /* c.srai */, RISCV::C_SRAI, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_UImmLog2XLenNonZero }, },
  { 1413 /* c.srai64 */, RISCV::C_SRAI64_HINT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRC }, },
  { 1422 /* c.srli */, RISCV::C_SRLI, Convert__Reg1_0__Tie0_1_1__UImmLog2XLenNonZero1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_UImmLog2XLenNonZero }, },
  { 1429 /* c.srli64 */, RISCV::C_SRLI64_HINT, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtC_HasRVCHints, { MCK_GPRC }, },
  { 1438 /* c.sub */, RISCV::C_SUB, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_GPRC }, },
  { 1444 /* c.subw */, RISCV::C_SUBW, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC_IsRV64, { MCK_GPRC, MCK_GPRC }, },
  { 1451 /* c.sw */, RISCV::C_SW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPRC, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1451 /* c.sw */, RISCV::C_SW, Convert__Reg1_0__Reg1_3__UImm7Lsb001_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_UImm7Lsb00, MCK__40_, MCK_GPRC, MCK__41_ }, },
  { 1456 /* c.swsp */, RISCV::C_SWSP, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPRC, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1456 /* c.swsp */, RISCV::C_SWSP, Convert__Reg1_0__Reg1_3__UImm8Lsb001_1, AMFBS_HasStdExtC, { MCK_GPR, MCK_UImm8Lsb00, MCK__40_, MCK_SP, MCK__41_ }, },
  { 1463 /* c.unimp */, RISCV::C_UNIMP, Convert_NoOperands, AMFBS_HasStdExtC, {  }, },
  { 1471 /* c.xor */, RISCV::C_XOR, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtC, { MCK_GPRC, MCK_GPRC }, },
  { 1477 /* c.zext.w */, RISCV::C_ZEXTW, Convert__Reg1_0__Tie0_1_1, AMFBS_HasStdExtZbproposedc_HasStdExtZba_HasStdExtC_IsRV64, { MCK_GPRC }, },
  { 1486 /* call */, RISCV::PseudoCALL, Convert__CallSymbol1_0, AMFBS_None, { MCK_CallSymbol }, },
  { 1486 /* call */, RISCV::PseudoCALLReg, Convert__Reg1_0__CallSymbol1_1, AMFBS_None, { MCK_GPR, MCK_CallSymbol }, },
  { 1491 /* clmul */, RISCV::CLMUL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbc, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1497 /* clmulh */, RISCV::CLMULH, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbc, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1504 /* clmulr */, RISCV::CLMULR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbc, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1511 /* clz */, RISCV::CLZ, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 1515 /* clzw */, RISCV::CLZW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1520 /* cmix */, RISCV::CMIX, Convert__Reg1_0__Reg1_2__Reg1_1__Reg1_3, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1525 /* cmov */, RISCV::CMOV, Convert__Reg1_0__Reg1_2__Reg1_1__Reg1_3, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1530 /* cpop */, RISCV::CPOP, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 1535 /* cpopw */, RISCV::CPOPW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1541 /* crc32.b */, RISCV::CRC32B, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1549 /* crc32.d */, RISCV::CRC32D, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1557 /* crc32.h */, RISCV::CRC32H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1565 /* crc32.w */, RISCV::CRC32W, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1573 /* crc32c.b */, RISCV::CRC32CB, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1582 /* crc32c.d */, RISCV::CRC32CD, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1591 /* crc32c.h */, RISCV::CRC32CH, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1600 /* crc32c.w */, RISCV::CRC32CW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbr, { MCK_GPR, MCK_GPR }, },
  { 1609 /* csrc */, RISCV::CSRRC, Convert__regX0__CSRSystemRegister1_0__Reg1_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_GPR }, },
  { 1609 /* csrc */, RISCV::CSRRCI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1614 /* csrci */, RISCV::CSRRCI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1620 /* csrr */, RISCV::CSRRS, Convert__Reg1_0__CSRSystemRegister1_1__regX0, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister }, },
  { 1625 /* csrrc */, RISCV::CSRRC, Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_GPR }, },
  { 1625 /* csrrc */, RISCV::CSRRCI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1631 /* csrrci */, RISCV::CSRRCI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1638 /* csrrs */, RISCV::CSRRS, Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_GPR }, },
  { 1638 /* csrrs */, RISCV::CSRRSI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1644 /* csrrsi */, RISCV::CSRRSI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1651 /* csrrw */, RISCV::CSRRW, Convert__Reg1_0__CSRSystemRegister1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_GPR }, },
  { 1651 /* csrrw */, RISCV::CSRRWI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1657 /* csrrwi */, RISCV::CSRRWI, Convert__Reg1_0__CSRSystemRegister1_1__UImm51_2, AMFBS_None, { MCK_GPR, MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1664 /* csrs */, RISCV::CSRRS, Convert__regX0__CSRSystemRegister1_0__Reg1_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_GPR }, },
  { 1664 /* csrs */, RISCV::CSRRSI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1669 /* csrsi */, RISCV::CSRRSI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1675 /* csrw */, RISCV::CSRRW, Convert__regX0__CSRSystemRegister1_0__Reg1_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_GPR }, },
  { 1675 /* csrw */, RISCV::CSRRWI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1680 /* csrwi */, RISCV::CSRRWI, Convert__regX0__CSRSystemRegister1_0__UImm51_1, AMFBS_None, { MCK_CSRSystemRegister, MCK_UImm5 }, },
  { 1686 /* ctz */, RISCV::CTZ, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 1690 /* ctzw */, RISCV::CTZW, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 1695 /* div */, RISCV::DIV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1699 /* divu */, RISCV::DIVU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1704 /* divuw */, RISCV::DIVUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1710 /* divw */, RISCV::DIVW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 1715 /* dret */, RISCV::DRET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 1720 /* ebreak */, RISCV::EBREAK, Convert_NoOperands, AMFBS_None, {  }, },
  { 1727 /* ecall */, RISCV::ECALL, Convert_NoOperands, AMFBS_None, {  }, },
  { 1733 /* fabs.d */, RISCV::FSGNJX_D, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 1740 /* fabs.h */, RISCV::FSGNJX_H, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16 }, },
  { 1747 /* fabs.s */, RISCV::FSGNJX_S, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 1754 /* fadd.d */, RISCV::FADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 1754 /* fadd.d */, RISCV::FADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 1761 /* fadd.h */, RISCV::FADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 1761 /* fadd.h */, RISCV::FADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 1768 /* fadd.s */, RISCV::FADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 1768 /* fadd.s */, RISCV::FADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 1775 /* fclass.d */, RISCV::FCLASS_D, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64 }, },
  { 1784 /* fclass.h */, RISCV::FCLASS_H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16 }, },
  { 1793 /* fclass.s */, RISCV::FCLASS_S, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32 }, },
  { 1802 /* fcvt.d.h */, RISCV::FCVT_D_H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZfh_HasStdExtD, { MCK_FPR64, MCK_FPR16 }, },
  { 1811 /* fcvt.d.l */, RISCV::FCVT_D_L, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR }, },
  { 1811 /* fcvt.d.l */, RISCV::FCVT_D_L, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR, MCK_FRMArg }, },
  { 1820 /* fcvt.d.lu */, RISCV::FCVT_D_LU, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR }, },
  { 1820 /* fcvt.d.lu */, RISCV::FCVT_D_LU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR, MCK_FRMArg }, },
  { 1830 /* fcvt.d.s */, RISCV::FCVT_D_S, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR32 }, },
  { 1839 /* fcvt.d.w */, RISCV::FCVT_D_W, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_GPR }, },
  { 1848 /* fcvt.d.wu */, RISCV::FCVT_D_WU, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_GPR }, },
  { 1858 /* fcvt.h.d */, RISCV::FCVT_H_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh_HasStdExtD, { MCK_FPR16, MCK_FPR64 }, },
  { 1858 /* fcvt.h.d */, RISCV::FCVT_H_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh_HasStdExtD, { MCK_FPR16, MCK_FPR64, MCK_FRMArg }, },
  { 1867 /* fcvt.h.l */, RISCV::FCVT_H_L, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh_IsRV64, { MCK_FPR16, MCK_GPR }, },
  { 1867 /* fcvt.h.l */, RISCV::FCVT_H_L, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh_IsRV64, { MCK_FPR16, MCK_GPR, MCK_FRMArg }, },
  { 1876 /* fcvt.h.lu */, RISCV::FCVT_H_LU, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh_IsRV64, { MCK_FPR16, MCK_GPR }, },
  { 1876 /* fcvt.h.lu */, RISCV::FCVT_H_LU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh_IsRV64, { MCK_FPR16, MCK_GPR, MCK_FRMArg }, },
  { 1886 /* fcvt.h.s */, RISCV::FCVT_H_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR32 }, },
  { 1886 /* fcvt.h.s */, RISCV::FCVT_H_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR32, MCK_FRMArg }, },
  { 1895 /* fcvt.h.w */, RISCV::FCVT_H_W, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_GPR }, },
  { 1895 /* fcvt.h.w */, RISCV::FCVT_H_W, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_GPR, MCK_FRMArg }, },
  { 1904 /* fcvt.h.wu */, RISCV::FCVT_H_WU, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_GPR }, },
  { 1904 /* fcvt.h.wu */, RISCV::FCVT_H_WU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_GPR, MCK_FRMArg }, },
  { 1914 /* fcvt.l.d */, RISCV::FCVT_L_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64 }, },
  { 1914 /* fcvt.l.d */, RISCV::FCVT_L_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 1923 /* fcvt.l.h */, RISCV::FCVT_L_H, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh_IsRV64, { MCK_GPR, MCK_FPR16 }, },
  { 1923 /* fcvt.l.h */, RISCV::FCVT_L_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh_IsRV64, { MCK_GPR, MCK_FPR16, MCK_FRMArg }, },
  { 1932 /* fcvt.l.s */, RISCV::FCVT_L_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32 }, },
  { 1932 /* fcvt.l.s */, RISCV::FCVT_L_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 1941 /* fcvt.lu.d */, RISCV::FCVT_LU_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64 }, },
  { 1941 /* fcvt.lu.d */, RISCV::FCVT_LU_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 1951 /* fcvt.lu.h */, RISCV::FCVT_LU_H, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh_IsRV64, { MCK_GPR, MCK_FPR16 }, },
  { 1951 /* fcvt.lu.h */, RISCV::FCVT_LU_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh_IsRV64, { MCK_GPR, MCK_FPR16, MCK_FRMArg }, },
  { 1961 /* fcvt.lu.s */, RISCV::FCVT_LU_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32 }, },
  { 1961 /* fcvt.lu.s */, RISCV::FCVT_LU_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 1971 /* fcvt.s.d */, RISCV::FCVT_S_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR32, MCK_FPR64 }, },
  { 1971 /* fcvt.s.d */, RISCV::FCVT_S_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_FPR32, MCK_FPR64, MCK_FRMArg }, },
  { 1980 /* fcvt.s.h */, RISCV::FCVT_S_H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZfh, { MCK_FPR32, MCK_FPR16 }, },
  { 1989 /* fcvt.s.l */, RISCV::FCVT_S_L, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR }, },
  { 1989 /* fcvt.s.l */, RISCV::FCVT_S_L, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 1998 /* fcvt.s.lu */, RISCV::FCVT_S_LU, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR }, },
  { 1998 /* fcvt.s.lu */, RISCV::FCVT_S_LU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF_IsRV64, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 2008 /* fcvt.s.w */, RISCV::FCVT_S_W, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR }, },
  { 2008 /* fcvt.s.w */, RISCV::FCVT_S_W, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 2017 /* fcvt.s.wu */, RISCV::FCVT_S_WU, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR }, },
  { 2017 /* fcvt.s.wu */, RISCV::FCVT_S_WU, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR, MCK_FRMArg }, },
  { 2027 /* fcvt.w.d */, RISCV::FCVT_W_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64 }, },
  { 2027 /* fcvt.w.d */, RISCV::FCVT_W_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 2036 /* fcvt.w.h */, RISCV::FCVT_W_H, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16 }, },
  { 2036 /* fcvt.w.h */, RISCV::FCVT_W_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FRMArg }, },
  { 2045 /* fcvt.w.s */, RISCV::FCVT_W_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32 }, },
  { 2045 /* fcvt.w.s */, RISCV::FCVT_W_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 2054 /* fcvt.wu.d */, RISCV::FCVT_WU_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64 }, },
  { 2054 /* fcvt.wu.d */, RISCV::FCVT_WU_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FRMArg }, },
  { 2064 /* fcvt.wu.h */, RISCV::FCVT_WU_H, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16 }, },
  { 2064 /* fcvt.wu.h */, RISCV::FCVT_WU_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FRMArg }, },
  { 2074 /* fcvt.wu.s */, RISCV::FCVT_WU_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32 }, },
  { 2074 /* fcvt.wu.s */, RISCV::FCVT_WU_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FRMArg }, },
  { 2084 /* fdiv.d */, RISCV::FDIV_D, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2084 /* fdiv.d */, RISCV::FDIV_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2091 /* fdiv.h */, RISCV::FDIV_H, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2091 /* fdiv.h */, RISCV::FDIV_H, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2098 /* fdiv.s */, RISCV::FDIV_S, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2098 /* fdiv.s */, RISCV::FDIV_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2105 /* fence */, RISCV::FENCE, Convert__imm_95_15__imm_95_15, AMFBS_None, {  }, },
  { 2105 /* fence */, RISCV::FENCE, Convert__FenceArg1_0__FenceArg1_1, AMFBS_None, { MCK_FenceArg, MCK_FenceArg }, },
  { 2111 /* fence.i */, RISCV::FENCE_I, Convert_NoOperands, AMFBS_None, {  }, },
  { 2119 /* fence.tso */, RISCV::FENCE_TSO, Convert_NoOperands, AMFBS_None, {  }, },
  { 2129 /* feq.d */, RISCV::FEQ_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 2135 /* feq.h */, RISCV::FEQ_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 2141 /* feq.s */, RISCV::FEQ_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 2147 /* fge.d */, RISCV::FLE_D, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 2153 /* fge.h */, RISCV::FLE_H, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 2159 /* fge.s */, RISCV::FLE_S, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 2165 /* fgt.d */, RISCV::FLT_D, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 2171 /* fgt.h */, RISCV::FLT_H, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 2177 /* fgt.s */, RISCV::FLT_S, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 2183 /* fld */, RISCV::PseudoFLD, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_BareSymbol, MCK_GPR }, },
  { 2183 /* fld */, RISCV::FLD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtD, { MCK_FPR64, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2183 /* fld */, RISCV::FLD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2187 /* fle.d */, RISCV::FLE_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 2193 /* fle.h */, RISCV::FLE_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 2199 /* fle.s */, RISCV::FLE_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 2205 /* flh */, RISCV::PseudoFLH, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_BareSymbol, MCK_GPR }, },
  { 2205 /* flh */, RISCV::FLH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2205 /* flh */, RISCV::FLH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2209 /* flt.d */, RISCV::FLT_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_GPR, MCK_FPR64, MCK_FPR64 }, },
  { 2215 /* flt.h */, RISCV::FLT_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16, MCK_FPR16 }, },
  { 2221 /* flt.s */, RISCV::FLT_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32, MCK_FPR32 }, },
  { 2227 /* flw */, RISCV::PseudoFLW, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_BareSymbol, MCK_GPR }, },
  { 2227 /* flw */, RISCV::FLW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtF, { MCK_FPR32, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2227 /* flw */, RISCV::FLW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2231 /* fmadd.d */, RISCV::FMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2231 /* fmadd.d */, RISCV::FMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2239 /* fmadd.h */, RISCV::FMADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2239 /* fmadd.h */, RISCV::FMADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2247 /* fmadd.s */, RISCV::FMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2247 /* fmadd.s */, RISCV::FMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2255 /* fmax.d */, RISCV::FMAX_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2262 /* fmax.h */, RISCV::FMAX_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2269 /* fmax.s */, RISCV::FMAX_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2276 /* fmin.d */, RISCV::FMIN_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2283 /* fmin.h */, RISCV::FMIN_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2290 /* fmin.s */, RISCV::FMIN_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2297 /* fmsub.d */, RISCV::FMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2297 /* fmsub.d */, RISCV::FMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2305 /* fmsub.h */, RISCV::FMSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2305 /* fmsub.h */, RISCV::FMSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2313 /* fmsub.s */, RISCV::FMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2313 /* fmsub.s */, RISCV::FMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2321 /* fmul.d */, RISCV::FMUL_D, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2321 /* fmul.d */, RISCV::FMUL_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2328 /* fmul.h */, RISCV::FMUL_H, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2328 /* fmul.h */, RISCV::FMUL_H, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2335 /* fmul.s */, RISCV::FMUL_S, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2335 /* fmul.s */, RISCV::FMUL_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2342 /* fmv.d */, RISCV::FSGNJ_D, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 2348 /* fmv.d.x */, RISCV::FMV_D_X, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD_IsRV64, { MCK_FPR64, MCK_GPR }, },
  { 2356 /* fmv.h */, RISCV::FSGNJ_H, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16 }, },
  { 2362 /* fmv.h.x */, RISCV::FMV_H_X, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_GPR }, },
  { 2370 /* fmv.s */, RISCV::FSGNJ_S, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 2376 /* fmv.w.x */, RISCV::FMV_W_X, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_GPR }, },
  { 2384 /* fmv.x.d */, RISCV::FMV_X_D, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtD_IsRV64, { MCK_GPR, MCK_FPR64 }, },
  { 2392 /* fmv.x.h */, RISCV::FMV_X_H, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZfh, { MCK_GPR, MCK_FPR16 }, },
  { 2400 /* fmv.x.w */, RISCV::FMV_X_W, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_FPR32 }, },
  { 2408 /* fneg.d */, RISCV::FSGNJN_D, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 2415 /* fneg.h */, RISCV::FSGNJN_H, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16 }, },
  { 2422 /* fneg.s */, RISCV::FSGNJN_S, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 2429 /* fnmadd.d */, RISCV::FNMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2429 /* fnmadd.d */, RISCV::FNMADD_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2438 /* fnmadd.h */, RISCV::FNMADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2438 /* fnmadd.h */, RISCV::FNMADD_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2447 /* fnmadd.s */, RISCV::FNMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2447 /* fnmadd.s */, RISCV::FNMADD_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2456 /* fnmsub.d */, RISCV::FNMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2456 /* fnmsub.d */, RISCV::FNMSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2465 /* fnmsub.h */, RISCV::FNMSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2465 /* fnmsub.h */, RISCV::FNMSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2474 /* fnmsub.s */, RISCV::FNMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2474 /* fnmsub.s */, RISCV::FNMSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__Reg1_3__FRMArg1_4, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2483 /* frcsr */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2489 /* frflags */, RISCV::CSRRS, Convert__Reg1_0__imm_95_1__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2497 /* frrm */, RISCV::CSRRS, Convert__Reg1_0__imm_95_2__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2502 /* frsr */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3__regX0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2507 /* fscsr */, RISCV::CSRRW, Convert__regX0__imm_95_3__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2507 /* fscsr */, RISCV::CSRRW, Convert__Reg1_0__imm_95_3__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 2513 /* fsd */, RISCV::PseudoFSD, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_BareSymbol, MCK_GPR }, },
  { 2513 /* fsd */, RISCV::FSD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtD, { MCK_FPR64, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2513 /* fsd */, RISCV::FSD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtD, { MCK_FPR64, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2517 /* fsflags */, RISCV::CSRRW, Convert__regX0__imm_95_1__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2517 /* fsflags */, RISCV::CSRRW, Convert__Reg1_0__imm_95_1__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 2525 /* fsflagsi */, RISCV::CSRRWI, Convert__regX0__imm_95_1__UImm51_0, AMFBS_HasStdExtF, { MCK_UImm5 }, },
  { 2525 /* fsflagsi */, RISCV::CSRRWI, Convert__Reg1_0__imm_95_1__UImm51_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_UImm5 }, },
  { 2534 /* fsgnj.d */, RISCV::FSGNJ_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2542 /* fsgnj.h */, RISCV::FSGNJ_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2550 /* fsgnj.s */, RISCV::FSGNJ_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2558 /* fsgnjn.d */, RISCV::FSGNJN_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2567 /* fsgnjn.h */, RISCV::FSGNJN_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2576 /* fsgnjn.s */, RISCV::FSGNJN_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2585 /* fsgnjx.d */, RISCV::FSGNJX_D, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2594 /* fsgnjx.h */, RISCV::FSGNJX_H, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2603 /* fsgnjx.s */, RISCV::FSGNJX_S, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2612 /* fsh */, RISCV::PseudoFSH, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_BareSymbol, MCK_GPR }, },
  { 2612 /* fsh */, RISCV::FSH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2612 /* fsh */, RISCV::FSH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2616 /* fsl */, RISCV::FSL, Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2620 /* fslw */, RISCV::FSLW, Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2, AMFBS_HasStdExtZbt_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2625 /* fsqrt.d */, RISCV::FSQRT_D, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64 }, },
  { 2625 /* fsqrt.d */, RISCV::FSQRT_D, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2633 /* fsqrt.h */, RISCV::FSQRT_H, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16 }, },
  { 2633 /* fsqrt.h */, RISCV::FSQRT_H, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2641 /* fsqrt.s */, RISCV::FSQRT_S, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32 }, },
  { 2641 /* fsqrt.s */, RISCV::FSQRT_S, Convert__Reg1_0__Reg1_1__FRMArg1_2, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2649 /* fsr */, RISCV::FSR, Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2653 /* fsri */, RISCV::FSRI, Convert__Reg1_0__Reg1_1__Reg1_2__UImmLog2XLen1_3, AMFBS_HasStdExtZbt, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2658 /* fsriw */, RISCV::FSRIW, Convert__Reg1_0__Reg1_1__Reg1_2__UImm51_3, AMFBS_HasStdExtZbt_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 2664 /* fsrm */, RISCV::CSRRW, Convert__regX0__imm_95_2__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2664 /* fsrm */, RISCV::CSRRW, Convert__Reg1_0__imm_95_2__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 2669 /* fsrmi */, RISCV::CSRRWI, Convert__regX0__imm_95_2__UImm51_0, AMFBS_HasStdExtF, { MCK_UImm5 }, },
  { 2669 /* fsrmi */, RISCV::CSRRWI, Convert__Reg1_0__imm_95_2__UImm51_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_UImm5 }, },
  { 2675 /* fsrw */, RISCV::FSRW, Convert__Reg1_0__Reg1_1__Reg1_3__Reg1_2, AMFBS_HasStdExtZbt_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2680 /* fssr */, RISCV::CSRRW, Convert__regX0__imm_95_3__Reg1_0, AMFBS_HasStdExtF, { MCK_GPR }, },
  { 2680 /* fssr */, RISCV::CSRRW, Convert__Reg1_0__imm_95_3__Reg1_1, AMFBS_HasStdExtF, { MCK_GPR, MCK_GPR }, },
  { 2685 /* fsub.d */, RISCV::FSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64 }, },
  { 2685 /* fsub.d */, RISCV::FSUB_D, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtD, { MCK_FPR64, MCK_FPR64, MCK_FPR64, MCK_FRMArg }, },
  { 2692 /* fsub.h */, RISCV::FSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16 }, },
  { 2692 /* fsub.h */, RISCV::FSUB_H, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtZfh, { MCK_FPR16, MCK_FPR16, MCK_FPR16, MCK_FRMArg }, },
  { 2699 /* fsub.s */, RISCV::FSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_7, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32 }, },
  { 2699 /* fsub.s */, RISCV::FSUB_S, Convert__Reg1_0__Reg1_1__Reg1_2__FRMArg1_3, AMFBS_HasStdExtF, { MCK_FPR32, MCK_FPR32, MCK_FPR32, MCK_FRMArg }, },
  { 2706 /* fsw */, RISCV::PseudoFSW, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_BareSymbol, MCK_GPR }, },
  { 2706 /* fsw */, RISCV::FSW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_HasStdExtF, { MCK_FPR32, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2706 /* fsw */, RISCV::FSW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_HasStdExtF, { MCK_FPR32, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2710 /* gorc */, RISCV::GORC, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2715 /* gorci */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2721 /* gorciw */, RISCV::GORCIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 2728 /* gorcw */, RISCV::GORCW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2734 /* grev */, RISCV::GREV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2739 /* grevi */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 2745 /* greviw */, RISCV::GREVIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 2752 /* grevw */, RISCV::GREVW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2758 /* j */, RISCV::JAL, Convert__regX0__SImm21Lsb0JAL1_0, AMFBS_None, { MCK_SImm21Lsb0JAL }, },
  { 2760 /* jal */, RISCV::JAL, Convert__regX1__SImm21Lsb0JAL1_0, AMFBS_None, { MCK_SImm21Lsb0JAL }, },
  { 2760 /* jal */, RISCV::JAL, Convert__Reg1_0__SImm21Lsb0JAL1_1, AMFBS_None, { MCK_GPR, MCK_SImm21Lsb0JAL }, },
  { 2764 /* jalr */, RISCV::JALR, Convert__regX1__Reg1_0__imm_95_0, AMFBS_None, { MCK_GPR }, },
  { 2764 /* jalr */, RISCV::JALR, Convert__Reg1_0__Reg1_1__imm_95_0, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 2764 /* jalr */, RISCV::JALR, Convert__regX1__Reg1_0__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12 }, },
  { 2764 /* jalr */, RISCV::JALR, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 2764 /* jalr */, RISCV::JALR, Convert__regX1__Reg1_2__SImm121_0, AMFBS_None, { MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2764 /* jalr */, RISCV::JALR, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2769 /* jr */, RISCV::JALR, Convert__regX0__Reg1_0__imm_95_0, AMFBS_None, { MCK_GPR }, },
  { 2769 /* jr */, RISCV::JALR, Convert__regX0__Reg1_0__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12 }, },
  { 2769 /* jr */, RISCV::JALR, Convert__regX0__Reg1_2__SImm121_0, AMFBS_None, { MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2772 /* jump */, RISCV::PseudoJump, Convert__Reg1_1__PseudoJumpSymbol1_0, AMFBS_None, { MCK_PseudoJumpSymbol, MCK_GPR }, },
  { 2777 /* la */, RISCV::PseudoLA, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2780 /* la.tls.gd */, RISCV::PseudoLA_TLS_GD, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2790 /* la.tls.ie */, RISCV::PseudoLA_TLS_IE, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2800 /* lb */, RISCV::PseudoLB, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2800 /* lb */, RISCV::LB, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2800 /* lb */, RISCV::LB, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2803 /* lbu */, RISCV::PseudoLBU, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2803 /* lbu */, RISCV::LBU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2803 /* lbu */, RISCV::LBU, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2807 /* ld */, RISCV::PseudoLD, Convert__Reg1_0__BareSymbol1_1, AMFBS_IsRV64, { MCK_GPR, MCK_BareSymbol }, },
  { 2807 /* ld */, RISCV::LD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2807 /* ld */, RISCV::LD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_IsRV64, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2810 /* lh */, RISCV::PseudoLH, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2810 /* lh */, RISCV::LH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2810 /* lh */, RISCV::LH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2813 /* lhu */, RISCV::PseudoLHU, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2813 /* lhu */, RISCV::LHU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2813 /* lhu */, RISCV::LHU, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2817 /* li */, RISCV::PseudoLI, Convert__Reg1_0__ImmXLenLI1_1, AMFBS_None, { MCK_GPR, MCK_ImmXLenLI }, },
  { 2820 /* lla */, RISCV::PseudoLLA, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2824 /* lr.d */, RISCV::LR_D, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2829 /* lr.d.aq */, RISCV::LR_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2837 /* lr.d.aqrl */, RISCV::LR_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2847 /* lr.d.rl */, RISCV::LR_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2855 /* lr.w */, RISCV::LR_W, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2860 /* lr.w.aq */, RISCV::LR_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2868 /* lr.w.aqrl */, RISCV::LR_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2878 /* lr.w.rl */, RISCV::LR_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 2886 /* lui */, RISCV::LUI, Convert__Reg1_0__UImm20LUI1_1, AMFBS_None, { MCK_GPR, MCK_UImm20LUI }, },
  { 2890 /* lw */, RISCV::PseudoLW, Convert__Reg1_0__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol }, },
  { 2890 /* lw */, RISCV::LW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2890 /* lw */, RISCV::LW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2893 /* lwu */, RISCV::PseudoLWU, Convert__Reg1_0__BareSymbol1_1, AMFBS_IsRV64, { MCK_GPR, MCK_BareSymbol }, },
  { 2893 /* lwu */, RISCV::LWU, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2893 /* lwu */, RISCV::LWU, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_IsRV64, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 2897 /* max */, RISCV::MAX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2901 /* maxu */, RISCV::MAXU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2906 /* min */, RISCV::MIN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2910 /* minu */, RISCV::MINU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2915 /* mret */, RISCV::MRET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 2920 /* mul */, RISCV::MUL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2924 /* mulh */, RISCV::MULH, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2929 /* mulhsu */, RISCV::MULHSU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2936 /* mulhu */, RISCV::MULHU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2942 /* mulw */, RISCV::MULW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2947 /* mv */, RISCV::ADDI, Convert__Reg1_0__Reg1_1__imm_95_0, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 2950 /* neg */, RISCV::SUB, Convert__Reg1_0__regX0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 2954 /* negw */, RISCV::SUBW, Convert__Reg1_0__regX0__Reg1_1, AMFBS_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2959 /* nop */, RISCV::ADDI, Convert__regX0__regX0__imm_95_0, AMFBS_None, {  }, },
  { 2963 /* not */, RISCV::XORI, Convert__Reg1_0__Reg1_1__imm_95__MINUS_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 2967 /* or */, RISCV::OR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 2967 /* or */, RISCV::ORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 2970 /* orc */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 2970 /* orc */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_63, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 2974 /* orc.b */, RISCV::ORCB, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR }, },
  { 2980 /* orc.h */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 2986 /* orc.n */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_3, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 2992 /* orc.p */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 2998 /* orc.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3004 /* orc16 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3004 /* orc16 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_48, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3010 /* orc16.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3018 /* orc2 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3018 /* orc2 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_62, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3023 /* orc2.b */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_6, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3030 /* orc2.h */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3037 /* orc2.n */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3044 /* orc2.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3051 /* orc32 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_32, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3057 /* orc4 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3057 /* orc4 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_60, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3062 /* orc4.b */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_4, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3069 /* orc4.h */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3076 /* orc4.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3083 /* orc8 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3083 /* orc8 */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_56, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3088 /* orc8.h */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3095 /* orc8.w */, RISCV::GORCI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3102 /* ori */, RISCV::ORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 3106 /* orn */, RISCV::ORN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3110 /* pack */, RISCV::PACK, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3115 /* packh */, RISCV::PACKH, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3121 /* packu */, RISCV::PACKU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3127 /* packuw */, RISCV::PACKUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3134 /* packw */, RISCV::PACKW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3140 /* rdcycle */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3072__regX0, AMFBS_None, { MCK_GPR }, },
  { 3148 /* rdcycleh */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3200__regX0, AMFBS_IsRV32, { MCK_GPR }, },
  { 3157 /* rdinstret */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3074__regX0, AMFBS_None, { MCK_GPR }, },
  { 3167 /* rdinstreth */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3202__regX0, AMFBS_IsRV32, { MCK_GPR }, },
  { 3178 /* rdtime */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3073__regX0, AMFBS_None, { MCK_GPR }, },
  { 3185 /* rdtimeh */, RISCV::CSRRS, Convert__Reg1_0__imm_95_3201__regX0, AMFBS_IsRV32, { MCK_GPR }, },
  { 3193 /* rem */, RISCV::REM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3197 /* remu */, RISCV::REMU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3202 /* remuw */, RISCV::REMUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3208 /* remw */, RISCV::REMW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtM_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3213 /* ret */, RISCV::JALR, Convert__regX0__regX1__imm_95_0, AMFBS_None, {  }, },
  { 3217 /* rev */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3217 /* rev */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_63, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3221 /* rev.b */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3227 /* rev.h */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3233 /* rev.n */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_3, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3239 /* rev.p */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3245 /* rev.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3251 /* rev16 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3251 /* rev16 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_48, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3257 /* rev16.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3265 /* rev2 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3265 /* rev2 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_62, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3270 /* rev2.b */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_6, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3277 /* rev2.h */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3284 /* rev2.n */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3291 /* rev2.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3298 /* rev32 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_32, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3304 /* rev4 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3304 /* rev4 */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_60, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3309 /* rev4.b */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_4, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3316 /* rev4.h */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3323 /* rev4.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3330 /* rev8 */, RISCV::REV8_RV32, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3330 /* rev8 */, RISCV::REV8_RV64, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3335 /* rev8.h */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3342 /* rev8.w */, RISCV::GREVI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3349 /* rol */, RISCV::ROL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3353 /* rolw */, RISCV::ROLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3358 /* ror */, RISCV::ROR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3362 /* rori */, RISCV::RORI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3367 /* roriw */, RISCV::RORIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3373 /* rorw */, RISCV::RORW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3378 /* sb */, RISCV::PseudoSB, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 3378 /* sb */, RISCV::SB, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3378 /* sb */, RISCV::SB, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3381 /* sc.d */, RISCV::SC_D, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3386 /* sc.d.aq */, RISCV::SC_D_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3394 /* sc.d.aqrl */, RISCV::SC_D_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3404 /* sc.d.rl */, RISCV::SC_D_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA_IsRV64, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3412 /* sc.w */, RISCV::SC_W, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3417 /* sc.w.aq */, RISCV::SC_W_AQ, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3425 /* sc.w.aqrl */, RISCV::SC_W_AQ_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3435 /* sc.w.rl */, RISCV::SC_W_RL, Convert__Reg1_0__AtomicMemOpOperand1_2__Reg1_1, AMFBS_HasStdExtA, { MCK_GPR, MCK_GPR, MCK_AtomicMemOpOperand }, },
  { 3443 /* sd */, RISCV::PseudoSD, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_IsRV64, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 3443 /* sd */, RISCV::SD, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3443 /* sd */, RISCV::SD, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_IsRV64, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3446 /* seqz */, RISCV::SLTIU, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3451 /* sext.b */, RISCV::SEXTB, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 3451 /* sext.b */, RISCV::PseudoSEXT_B, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3458 /* sext.h */, RISCV::SEXTH, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbb, { MCK_GPR, MCK_GPR }, },
  { 3458 /* sext.h */, RISCV::PseudoSEXT_H, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3465 /* sext.w */, RISCV::ADDIW, Convert__Reg1_0__Reg1_1__imm_95_0, AMFBS_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3472 /* sfence.vma */, RISCV::SFENCE_VMA, Convert__regX0__regX0, AMFBS_None, {  }, },
  { 3472 /* sfence.vma */, RISCV::SFENCE_VMA, Convert__Reg1_0__regX0, AMFBS_None, { MCK_GPR }, },
  { 3472 /* sfence.vma */, RISCV::SFENCE_VMA, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3483 /* sgt */, RISCV::SLT, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3487 /* sgtu */, RISCV::SLTU, Convert__Reg1_0__Reg1_2__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3492 /* sgtz */, RISCV::SLT, Convert__Reg1_0__regX0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3497 /* sh */, RISCV::PseudoSH, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 3497 /* sh */, RISCV::SH, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3497 /* sh */, RISCV::SH, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3500 /* sh1add */, RISCV::SH1ADD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3507 /* sh1add.uw */, RISCV::SH1ADDUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3517 /* sh2add */, RISCV::SH2ADD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3524 /* sh2add.uw */, RISCV::SH2ADDUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3534 /* sh3add */, RISCV::SH3ADD, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3541 /* sh3add.uw */, RISCV::SH3ADDUW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3551 /* shfl */, RISCV::SHFL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3556 /* shfli */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLenHalf }, },
  { 3562 /* shflw */, RISCV::SHFLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3568 /* sll */, RISCV::SLL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3568 /* sll */, RISCV::SLLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3572 /* slli */, RISCV::SLLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3577 /* slli.uw */, RISCV::SLLIUW, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3585 /* slliw */, RISCV::SLLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3591 /* sllw */, RISCV::SLLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3591 /* sllw */, RISCV::SLLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3596 /* slo */, RISCV::SLO, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3600 /* sloi */, RISCV::SLOI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3605 /* sloiw */, RISCV::SLOIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3611 /* slow */, RISCV::SLOW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3616 /* slt */, RISCV::SLT, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3616 /* slt */, RISCV::SLTI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 3620 /* slti */, RISCV::SLTI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 3625 /* sltiu */, RISCV::SLTIU, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 3631 /* sltu */, RISCV::SLTU, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3631 /* sltu */, RISCV::SLTIU, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 3636 /* sltz */, RISCV::SLT, Convert__Reg1_0__Reg1_1__regX0, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3641 /* snez */, RISCV::SLTU, Convert__Reg1_0__regX0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 3646 /* sra */, RISCV::SRA, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3646 /* sra */, RISCV::SRAI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3650 /* srai */, RISCV::SRAI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3655 /* sraiw */, RISCV::SRAIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3661 /* sraw */, RISCV::SRAW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3661 /* sraw */, RISCV::SRAIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3666 /* sret */, RISCV::SRET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 3671 /* srl */, RISCV::SRL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3671 /* srl */, RISCV::SRLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3675 /* srli */, RISCV::SRLI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3680 /* srliw */, RISCV::SRLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3686 /* srlw */, RISCV::SRLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3686 /* srlw */, RISCV::SRLIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3691 /* sro */, RISCV::SRO, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3695 /* sroi */, RISCV::SROI, Convert__Reg1_0__Reg1_1__UImmLog2XLen1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLen }, },
  { 3700 /* sroiw */, RISCV::SROIW, Convert__Reg1_0__Reg1_1__UImm51_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_UImm5 }, },
  { 3706 /* srow */, RISCV::SROW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3711 /* sub */, RISCV::SUB, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3715 /* subw */, RISCV::SUBW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3720 /* sw */, RISCV::PseudoSW, Convert__Reg1_0__Reg1_2__BareSymbol1_1, AMFBS_None, { MCK_GPR, MCK_BareSymbol, MCK_GPR }, },
  { 3720 /* sw */, RISCV::SW, Convert__Reg1_0__Reg1_2__imm_95_0, AMFBS_None, { MCK_GPR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3720 /* sw */, RISCV::SW, Convert__Reg1_0__Reg1_3__SImm121_1, AMFBS_None, { MCK_GPR, MCK_SImm12, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 3723 /* tail */, RISCV::PseudoTAIL, Convert__CallSymbol1_0, AMFBS_None, { MCK_CallSymbol }, },
  { 3728 /* unimp */, RISCV::UNIMP, Convert_NoOperands, AMFBS_None, {  }, },
  { 3734 /* unshfl */, RISCV::UNSHFL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3741 /* unshfli */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__UImmLog2XLenHalf1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_UImmLog2XLenHalf }, },
  { 3749 /* unshflw */, RISCV::UNSHFLW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 3757 /* unzip */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3757 /* unzip */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3763 /* unzip.b */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_3, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3771 /* unzip.h */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3779 /* unzip.n */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3787 /* unzip.w */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3795 /* unzip16 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3803 /* unzip2 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3803 /* unzip2 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3810 /* unzip2.b */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3819 /* unzip2.h */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_6, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3828 /* unzip2.w */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3837 /* unzip4 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3837 /* unzip4 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3844 /* unzip4.h */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_4, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 3853 /* unzip4.w */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3862 /* unzip8 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 3862 /* unzip8 */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3869 /* unzip8.w */, RISCV::UNSHFLI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 3878 /* uret */, RISCV::URET, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 3883 /* vaadd.vv */, RISCV::VAADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 3892 /* vaadd.vx */, RISCV::VAADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 3901 /* vaaddu.vv */, RISCV::VAADDU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 3911 /* vaaddu.vx */, RISCV::VAADDU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 3921 /* vadc.vim */, RISCV::VADC_VIM, Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_VMV0 }, },
  { 3930 /* vadc.vvm */, RISCV::VADC_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_VMV0 }, },
  { 3939 /* vadc.vxm */, RISCV::VADC_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_VMV0 }, },
  { 3948 /* vadd.vi */, RISCV::VADD_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 3956 /* vadd.vv */, RISCV::VADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 3964 /* vadd.vx */, RISCV::VADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 3972 /* vamoaddei16.v */, RISCV::VAMOADDEI16_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 3972 /* vamoaddei16.v */, RISCV::VAMOADDEI16_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 3986 /* vamoaddei32.v */, RISCV::VAMOADDEI32_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 3986 /* vamoaddei32.v */, RISCV::VAMOADDEI32_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4000 /* vamoaddei64.v */, RISCV::VAMOADDEI64_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4000 /* vamoaddei64.v */, RISCV::VAMOADDEI64_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4014 /* vamoaddei8.v */, RISCV::VAMOADDEI8_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4014 /* vamoaddei8.v */, RISCV::VAMOADDEI8_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4027 /* vamoandei16.v */, RISCV::VAMOANDEI16_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4027 /* vamoandei16.v */, RISCV::VAMOANDEI16_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4041 /* vamoandei32.v */, RISCV::VAMOANDEI32_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4041 /* vamoandei32.v */, RISCV::VAMOANDEI32_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4055 /* vamoandei64.v */, RISCV::VAMOANDEI64_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4055 /* vamoandei64.v */, RISCV::VAMOANDEI64_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4069 /* vamoandei8.v */, RISCV::VAMOANDEI8_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4069 /* vamoandei8.v */, RISCV::VAMOANDEI8_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4082 /* vamomaxei16.v */, RISCV::VAMOMAXEI16_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4082 /* vamomaxei16.v */, RISCV::VAMOMAXEI16_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4096 /* vamomaxei32.v */, RISCV::VAMOMAXEI32_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4096 /* vamomaxei32.v */, RISCV::VAMOMAXEI32_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4110 /* vamomaxei64.v */, RISCV::VAMOMAXEI64_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4110 /* vamomaxei64.v */, RISCV::VAMOMAXEI64_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4124 /* vamomaxei8.v */, RISCV::VAMOMAXEI8_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4124 /* vamomaxei8.v */, RISCV::VAMOMAXEI8_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4137 /* vamomaxuei16.v */, RISCV::VAMOMAXUEI16_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4137 /* vamomaxuei16.v */, RISCV::VAMOMAXUEI16_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4152 /* vamomaxuei32.v */, RISCV::VAMOMAXUEI32_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4152 /* vamomaxuei32.v */, RISCV::VAMOMAXUEI32_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4167 /* vamomaxuei64.v */, RISCV::VAMOMAXUEI64_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4167 /* vamomaxuei64.v */, RISCV::VAMOMAXUEI64_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4182 /* vamomaxuei8.v */, RISCV::VAMOMAXUEI8_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4182 /* vamomaxuei8.v */, RISCV::VAMOMAXUEI8_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4196 /* vamominei16.v */, RISCV::VAMOMINEI16_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4196 /* vamominei16.v */, RISCV::VAMOMINEI16_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4210 /* vamominei32.v */, RISCV::VAMOMINEI32_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4210 /* vamominei32.v */, RISCV::VAMOMINEI32_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4224 /* vamominei64.v */, RISCV::VAMOMINEI64_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4224 /* vamominei64.v */, RISCV::VAMOMINEI64_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4238 /* vamominei8.v */, RISCV::VAMOMINEI8_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4238 /* vamominei8.v */, RISCV::VAMOMINEI8_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4251 /* vamominuei16.v */, RISCV::VAMOMINUEI16_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4251 /* vamominuei16.v */, RISCV::VAMOMINUEI16_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4266 /* vamominuei32.v */, RISCV::VAMOMINUEI32_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4266 /* vamominuei32.v */, RISCV::VAMOMINUEI32_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4281 /* vamominuei64.v */, RISCV::VAMOMINUEI64_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4281 /* vamominuei64.v */, RISCV::VAMOMINUEI64_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4296 /* vamominuei8.v */, RISCV::VAMOMINUEI8_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4296 /* vamominuei8.v */, RISCV::VAMOMINUEI8_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4310 /* vamoorei16.v */, RISCV::VAMOOREI16_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4310 /* vamoorei16.v */, RISCV::VAMOOREI16_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4323 /* vamoorei32.v */, RISCV::VAMOOREI32_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4323 /* vamoorei32.v */, RISCV::VAMOOREI32_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4336 /* vamoorei64.v */, RISCV::VAMOOREI64_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4336 /* vamoorei64.v */, RISCV::VAMOOREI64_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4349 /* vamoorei8.v */, RISCV::VAMOOREI8_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4349 /* vamoorei8.v */, RISCV::VAMOOREI8_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4361 /* vamoswapei16.v */, RISCV::VAMOSWAPEI16_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4361 /* vamoswapei16.v */, RISCV::VAMOSWAPEI16_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4376 /* vamoswapei32.v */, RISCV::VAMOSWAPEI32_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4376 /* vamoswapei32.v */, RISCV::VAMOSWAPEI32_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4391 /* vamoswapei64.v */, RISCV::VAMOSWAPEI64_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4391 /* vamoswapei64.v */, RISCV::VAMOSWAPEI64_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4406 /* vamoswapei8.v */, RISCV::VAMOSWAPEI8_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4406 /* vamoswapei8.v */, RISCV::VAMOSWAPEI8_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4420 /* vamoxorei16.v */, RISCV::VAMOXOREI16_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4420 /* vamoxorei16.v */, RISCV::VAMOXOREI16_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4434 /* vamoxorei32.v */, RISCV::VAMOXOREI32_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4434 /* vamoxorei32.v */, RISCV::VAMOXOREI32_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4448 /* vamoxorei64.v */, RISCV::VAMOXOREI64_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4448 /* vamoxorei64.v */, RISCV::VAMOXOREI64_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4462 /* vamoxorei8.v */, RISCV::VAMOXOREI8_UNWD, Convert__Reg1_2__Reg1_4__Reg1_5__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_GPRX0, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4462 /* vamoxorei8.v */, RISCV::VAMOXOREI8_WD, Convert__Reg1_0__Reg1_2__Reg1_4__Tie0_1_6__RVVMaskRegOpOperand1_6, AMFBS_HasStdExtZvamo_HasStdExtA, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4475 /* vand.vi */, RISCV::VAND_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 4483 /* vand.vv */, RISCV::VAND_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4491 /* vand.vx */, RISCV::VAND_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4499 /* vasub.vv */, RISCV::VASUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4508 /* vasub.vx */, RISCV::VASUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4517 /* vasubu.vv */, RISCV::VASUBU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4527 /* vasubu.vx */, RISCV::VASUBU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4537 /* vcompress.vm */, RISCV::VCOMPRESS_VM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR }, },
  { 4550 /* vdiv.vv */, RISCV::VDIV_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4558 /* vdiv.vx */, RISCV::VDIV_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4566 /* vdivu.vv */, RISCV::VDIVU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4575 /* vdivu.vx */, RISCV::VDIVU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 4584 /* vfadd.vf */, RISCV::VFADD_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4593 /* vfadd.vv */, RISCV::VFADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4602 /* vfclass.v */, RISCV::VFCLASS_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4612 /* vfcvt.f.x.v */, RISCV::VFCVT_F_X_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4624 /* vfcvt.f.xu.v */, RISCV::VFCVT_F_XU_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4637 /* vfcvt.rtz.x.f.v */, RISCV::VFCVT_RTZ_X_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4653 /* vfcvt.rtz.xu.f.v */, RISCV::VFCVT_RTZ_XU_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4670 /* vfcvt.x.f.v */, RISCV::VFCVT_X_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4682 /* vfcvt.xu.f.v */, RISCV::VFCVT_XU_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4695 /* vfdiv.vf */, RISCV::VFDIV_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4704 /* vfdiv.vv */, RISCV::VFDIV_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4713 /* vfirst.m */, RISCV::VFIRST_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_GPR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4722 /* vfmacc.vf */, RISCV::VFMACC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4732 /* vfmacc.vv */, RISCV::VFMACC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4742 /* vfmadd.vf */, RISCV::VFMADD_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4752 /* vfmadd.vv */, RISCV::VFMADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4762 /* vfmax.vf */, RISCV::VFMAX_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4771 /* vfmax.vv */, RISCV::VFMAX_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4780 /* vfmerge.vfm */, RISCV::VFMERGE_VFM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_VMV0 }, },
  { 4792 /* vfmin.vf */, RISCV::VFMIN_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4801 /* vfmin.vv */, RISCV::VFMIN_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4810 /* vfmsac.vf */, RISCV::VFMSAC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4820 /* vfmsac.vv */, RISCV::VFMSAC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4830 /* vfmsub.vf */, RISCV::VFMSUB_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4840 /* vfmsub.vv */, RISCV::VFMSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4850 /* vfmul.vf */, RISCV::VFMUL_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 4859 /* vfmul.vv */, RISCV::VFMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4868 /* vfmv.f.s */, RISCV::VFMV_F_S, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtV_HasStdExtF, { MCK_FPR32, MCK_VR }, },
  { 4877 /* vfmv.s.f */, RISCV::VFMV_S_F, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32 }, },
  { 4886 /* vfmv.v.f */, RISCV::VFMV_V_F, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32 }, },
  { 4895 /* vfncvt.f.f.w */, RISCV::VFNCVT_F_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4908 /* vfncvt.f.x.w */, RISCV::VFNCVT_F_X_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4921 /* vfncvt.f.xu.w */, RISCV::VFNCVT_F_XU_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4935 /* vfncvt.rod.f.f.w */, RISCV::VFNCVT_ROD_F_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4952 /* vfncvt.rtz.x.f.w */, RISCV::VFNCVT_RTZ_X_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4969 /* vfncvt.rtz.xu.f.w */, RISCV::VFNCVT_RTZ_XU_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 4987 /* vfncvt.x.f.w */, RISCV::VFNCVT_X_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5000 /* vfncvt.xu.f.w */, RISCV::VFNCVT_XU_F_W, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5014 /* vfneg.v */, RISCV::VFSGNJN_VV, Convert__Reg1_0__Reg1_1__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5022 /* vfnmacc.vf */, RISCV::VFNMACC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5033 /* vfnmacc.vv */, RISCV::VFNMACC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5044 /* vfnmadd.vf */, RISCV::VFNMADD_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5055 /* vfnmadd.vv */, RISCV::VFNMADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5066 /* vfnmsac.vf */, RISCV::VFNMSAC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5077 /* vfnmsac.vv */, RISCV::VFNMSAC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5088 /* vfnmsub.vf */, RISCV::VFNMSUB_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5099 /* vfnmsub.vv */, RISCV::VFNMSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5110 /* vfrdiv.vf */, RISCV::VFRDIV_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5120 /* vfrec7.v */, RISCV::VFREC7_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5129 /* vfredmax.vs */, RISCV::VFREDMAX_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5141 /* vfredmin.vs */, RISCV::VFREDMIN_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5153 /* vfredosum.vs */, RISCV::VFREDOSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5166 /* vfredsum.vs */, RISCV::VFREDSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5178 /* vfrsqrt7.v */, RISCV::VFRSQRT7_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5189 /* vfrsub.vf */, RISCV::VFRSUB_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5199 /* vfsgnj.vf */, RISCV::VFSGNJ_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5209 /* vfsgnj.vv */, RISCV::VFSGNJ_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5219 /* vfsgnjn.vf */, RISCV::VFSGNJN_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5230 /* vfsgnjn.vv */, RISCV::VFSGNJN_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5241 /* vfsgnjx.vf */, RISCV::VFSGNJX_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5252 /* vfsgnjx.vv */, RISCV::VFSGNJX_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5263 /* vfslide1down.vf */, RISCV::VFSLIDE1DOWN_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5279 /* vfslide1up.vf */, RISCV::VFSLIDE1UP_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5293 /* vfsqrt.v */, RISCV::VFSQRT_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5302 /* vfsub.vf */, RISCV::VFSUB_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5311 /* vfsub.vv */, RISCV::VFSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5320 /* vfwadd.vf */, RISCV::VFWADD_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5330 /* vfwadd.vv */, RISCV::VFWADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5340 /* vfwadd.wf */, RISCV::VFWADD_WF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5350 /* vfwadd.wv */, RISCV::VFWADD_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5360 /* vfwcvt.f.f.v */, RISCV::VFWCVT_F_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5373 /* vfwcvt.f.x.v */, RISCV::VFWCVT_F_X_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5386 /* vfwcvt.f.xu.v */, RISCV::VFWCVT_F_XU_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5400 /* vfwcvt.rtz.x.f.v */, RISCV::VFWCVT_RTZ_X_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5417 /* vfwcvt.rtz.xu.f.v */, RISCV::VFWCVT_RTZ_XU_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5435 /* vfwcvt.x.f.v */, RISCV::VFWCVT_X_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5448 /* vfwcvt.xu.f.v */, RISCV::VFWCVT_XU_F_V, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5462 /* vfwmacc.vf */, RISCV::VFWMACC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5473 /* vfwmacc.vv */, RISCV::VFWMACC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5484 /* vfwmsac.vf */, RISCV::VFWMSAC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5495 /* vfwmsac.vv */, RISCV::VFWMSAC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5506 /* vfwmul.vf */, RISCV::VFWMUL_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5516 /* vfwmul.vv */, RISCV::VFWMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5526 /* vfwnmacc.vf */, RISCV::VFWNMACC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5538 /* vfwnmacc.vv */, RISCV::VFWNMACC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5550 /* vfwnmsac.vf */, RISCV::VFWNMSAC_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_FPR32, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5562 /* vfwnmsac.vv */, RISCV::VFWNMSAC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5574 /* vfwredosum.vs */, RISCV::VFWREDOSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5588 /* vfwredsum.vs */, RISCV::VFWREDSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5601 /* vfwsub.vf */, RISCV::VFWSUB_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5611 /* vfwsub.vv */, RISCV::VFWSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5621 /* vfwsub.wf */, RISCV::VFWSUB_WF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 5631 /* vfwsub.wv */, RISCV::VFWSUB_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5641 /* vid.v */, RISCV::VID_V, Convert__Reg1_0__RVVMaskRegOpOperand1_1, AMFBS_HasStdExtV, { MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5647 /* viota.m */, RISCV::VIOTA_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5655 /* vl1r.v */, RISCV::VL1RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5662 /* vl1re16.v */, RISCV::VL1RE16_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5672 /* vl1re32.v */, RISCV::VL1RE32_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5682 /* vl1re64.v */, RISCV::VL1RE64_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5692 /* vl1re8.v */, RISCV::VL1RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5701 /* vl2r.v */, RISCV::VL2RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5708 /* vl2re16.v */, RISCV::VL2RE16_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5718 /* vl2re32.v */, RISCV::VL2RE32_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5728 /* vl2re64.v */, RISCV::VL2RE64_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5738 /* vl2re8.v */, RISCV::VL2RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5747 /* vl4r.v */, RISCV::VL4RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5754 /* vl4re16.v */, RISCV::VL4RE16_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5764 /* vl4re32.v */, RISCV::VL4RE32_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5774 /* vl4re64.v */, RISCV::VL4RE64_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5784 /* vl4re8.v */, RISCV::VL4RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5793 /* vl8r.v */, RISCV::VL8RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5800 /* vl8re16.v */, RISCV::VL8RE16_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5810 /* vl8re32.v */, RISCV::VL8RE32_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5820 /* vl8re64.v */, RISCV::VL8RE64_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5830 /* vl8re8.v */, RISCV::VL8RE8_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5839 /* vle1.v */, RISCV::VLE1_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 5846 /* vle16.v */, RISCV::VLE16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5854 /* vle16ff.v */, RISCV::VLE16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5864 /* vle32.v */, RISCV::VLE32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5872 /* vle32ff.v */, RISCV::VLE32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5882 /* vle64.v */, RISCV::VLE64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5890 /* vle64ff.v */, RISCV::VLE64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5900 /* vle8.v */, RISCV::VLE8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5907 /* vle8ff.v */, RISCV::VLE8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 5916 /* vloxei16.v */, RISCV::VLOXEI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5927 /* vloxei32.v */, RISCV::VLOXEI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5938 /* vloxei64.v */, RISCV::VLOXEI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5949 /* vloxei8.v */, RISCV::VLOXEI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5959 /* vloxseg2ei16.v */, RISCV::VLOXSEG2EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5974 /* vloxseg2ei32.v */, RISCV::VLOXSEG2EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 5989 /* vloxseg2ei64.v */, RISCV::VLOXSEG2EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6004 /* vloxseg2ei8.v */, RISCV::VLOXSEG2EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6018 /* vloxseg3ei16.v */, RISCV::VLOXSEG3EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6033 /* vloxseg3ei32.v */, RISCV::VLOXSEG3EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6048 /* vloxseg3ei64.v */, RISCV::VLOXSEG3EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6063 /* vloxseg3ei8.v */, RISCV::VLOXSEG3EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6077 /* vloxseg4ei16.v */, RISCV::VLOXSEG4EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6092 /* vloxseg4ei32.v */, RISCV::VLOXSEG4EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6107 /* vloxseg4ei64.v */, RISCV::VLOXSEG4EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6122 /* vloxseg4ei8.v */, RISCV::VLOXSEG4EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6136 /* vloxseg5ei16.v */, RISCV::VLOXSEG5EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6151 /* vloxseg5ei32.v */, RISCV::VLOXSEG5EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6166 /* vloxseg5ei64.v */, RISCV::VLOXSEG5EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6181 /* vloxseg5ei8.v */, RISCV::VLOXSEG5EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6195 /* vloxseg6ei16.v */, RISCV::VLOXSEG6EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6210 /* vloxseg6ei32.v */, RISCV::VLOXSEG6EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6225 /* vloxseg6ei64.v */, RISCV::VLOXSEG6EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6240 /* vloxseg6ei8.v */, RISCV::VLOXSEG6EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6254 /* vloxseg7ei16.v */, RISCV::VLOXSEG7EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6269 /* vloxseg7ei32.v */, RISCV::VLOXSEG7EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6284 /* vloxseg7ei64.v */, RISCV::VLOXSEG7EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6299 /* vloxseg7ei8.v */, RISCV::VLOXSEG7EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6313 /* vloxseg8ei16.v */, RISCV::VLOXSEG8EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6328 /* vloxseg8ei32.v */, RISCV::VLOXSEG8EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6343 /* vloxseg8ei64.v */, RISCV::VLOXSEG8EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6358 /* vloxseg8ei8.v */, RISCV::VLOXSEG8EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 6372 /* vlse16.v */, RISCV::VLSE16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6381 /* vlse32.v */, RISCV::VLSE32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6390 /* vlse64.v */, RISCV::VLSE64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6399 /* vlse8.v */, RISCV::VLSE8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 6407 /* vlseg2e16.v */, RISCV::VLSEG2E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6419 /* vlseg2e16ff.v */, RISCV::VLSEG2E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6433 /* vlseg2e32.v */, RISCV::VLSEG2E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6445 /* vlseg2e32ff.v */, RISCV::VLSEG2E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6459 /* vlseg2e64.v */, RISCV::VLSEG2E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6471 /* vlseg2e64ff.v */, RISCV::VLSEG2E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6485 /* vlseg2e8.v */, RISCV::VLSEG2E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6496 /* vlseg2e8ff.v */, RISCV::VLSEG2E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6509 /* vlseg3e16.v */, RISCV::VLSEG3E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6521 /* vlseg3e16ff.v */, RISCV::VLSEG3E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6535 /* vlseg3e32.v */, RISCV::VLSEG3E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6547 /* vlseg3e32ff.v */, RISCV::VLSEG3E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6561 /* vlseg3e64.v */, RISCV::VLSEG3E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6573 /* vlseg3e64ff.v */, RISCV::VLSEG3E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6587 /* vlseg3e8.v */, RISCV::VLSEG3E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6598 /* vlseg3e8ff.v */, RISCV::VLSEG3E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6611 /* vlseg4e16.v */, RISCV::VLSEG4E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6623 /* vlseg4e16ff.v */, RISCV::VLSEG4E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6637 /* vlseg4e32.v */, RISCV::VLSEG4E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6649 /* vlseg4e32ff.v */, RISCV::VLSEG4E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6663 /* vlseg4e64.v */, RISCV::VLSEG4E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6675 /* vlseg4e64ff.v */, RISCV::VLSEG4E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6689 /* vlseg4e8.v */, RISCV::VLSEG4E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6700 /* vlseg4e8ff.v */, RISCV::VLSEG4E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6713 /* vlseg5e16.v */, RISCV::VLSEG5E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6725 /* vlseg5e16ff.v */, RISCV::VLSEG5E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6739 /* vlseg5e32.v */, RISCV::VLSEG5E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6751 /* vlseg5e32ff.v */, RISCV::VLSEG5E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6765 /* vlseg5e64.v */, RISCV::VLSEG5E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6777 /* vlseg5e64ff.v */, RISCV::VLSEG5E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6791 /* vlseg5e8.v */, RISCV::VLSEG5E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6802 /* vlseg5e8ff.v */, RISCV::VLSEG5E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6815 /* vlseg6e16.v */, RISCV::VLSEG6E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6827 /* vlseg6e16ff.v */, RISCV::VLSEG6E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6841 /* vlseg6e32.v */, RISCV::VLSEG6E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6853 /* vlseg6e32ff.v */, RISCV::VLSEG6E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6867 /* vlseg6e64.v */, RISCV::VLSEG6E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6879 /* vlseg6e64ff.v */, RISCV::VLSEG6E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6893 /* vlseg6e8.v */, RISCV::VLSEG6E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6904 /* vlseg6e8ff.v */, RISCV::VLSEG6E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6917 /* vlseg7e16.v */, RISCV::VLSEG7E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6929 /* vlseg7e16ff.v */, RISCV::VLSEG7E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6943 /* vlseg7e32.v */, RISCV::VLSEG7E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6955 /* vlseg7e32ff.v */, RISCV::VLSEG7E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6969 /* vlseg7e64.v */, RISCV::VLSEG7E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6981 /* vlseg7e64ff.v */, RISCV::VLSEG7E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 6995 /* vlseg7e8.v */, RISCV::VLSEG7E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7006 /* vlseg7e8ff.v */, RISCV::VLSEG7E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7019 /* vlseg8e16.v */, RISCV::VLSEG8E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7031 /* vlseg8e16ff.v */, RISCV::VLSEG8E16FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7045 /* vlseg8e32.v */, RISCV::VLSEG8E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7057 /* vlseg8e32ff.v */, RISCV::VLSEG8E32FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7071 /* vlseg8e64.v */, RISCV::VLSEG8E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7083 /* vlseg8e64ff.v */, RISCV::VLSEG8E64FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7097 /* vlseg8e8.v */, RISCV::VLSEG8E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7108 /* vlseg8e8ff.v */, RISCV::VLSEG8E8FF_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 7121 /* vlsseg2e16.v */, RISCV::VLSSEG2E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7134 /* vlsseg2e32.v */, RISCV::VLSSEG2E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7147 /* vlsseg2e64.v */, RISCV::VLSSEG2E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7160 /* vlsseg2e8.v */, RISCV::VLSSEG2E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7172 /* vlsseg3e16.v */, RISCV::VLSSEG3E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7185 /* vlsseg3e32.v */, RISCV::VLSSEG3E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7198 /* vlsseg3e64.v */, RISCV::VLSSEG3E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7211 /* vlsseg3e8.v */, RISCV::VLSSEG3E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7223 /* vlsseg4e16.v */, RISCV::VLSSEG4E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7236 /* vlsseg4e32.v */, RISCV::VLSSEG4E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7249 /* vlsseg4e64.v */, RISCV::VLSSEG4E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7262 /* vlsseg4e8.v */, RISCV::VLSSEG4E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7274 /* vlsseg5e16.v */, RISCV::VLSSEG5E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7287 /* vlsseg5e32.v */, RISCV::VLSSEG5E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7300 /* vlsseg5e64.v */, RISCV::VLSSEG5E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7313 /* vlsseg5e8.v */, RISCV::VLSSEG5E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7325 /* vlsseg6e16.v */, RISCV::VLSSEG6E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7338 /* vlsseg6e32.v */, RISCV::VLSSEG6E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7351 /* vlsseg6e64.v */, RISCV::VLSSEG6E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7364 /* vlsseg6e8.v */, RISCV::VLSSEG6E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7376 /* vlsseg7e16.v */, RISCV::VLSSEG7E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7389 /* vlsseg7e32.v */, RISCV::VLSSEG7E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7402 /* vlsseg7e64.v */, RISCV::VLSSEG7E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7415 /* vlsseg7e8.v */, RISCV::VLSSEG7E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7427 /* vlsseg8e16.v */, RISCV::VLSSEG8E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7440 /* vlsseg8e32.v */, RISCV::VLSSEG8E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7453 /* vlsseg8e64.v */, RISCV::VLSSEG8E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7466 /* vlsseg8e8.v */, RISCV::VLSSEG8E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 7478 /* vluxei16.v */, RISCV::VLUXEI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7489 /* vluxei32.v */, RISCV::VLUXEI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7500 /* vluxei64.v */, RISCV::VLUXEI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7511 /* vluxei8.v */, RISCV::VLUXEI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7521 /* vluxseg2ei16.v */, RISCV::VLUXSEG2EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7536 /* vluxseg2ei32.v */, RISCV::VLUXSEG2EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7551 /* vluxseg2ei64.v */, RISCV::VLUXSEG2EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7566 /* vluxseg2ei8.v */, RISCV::VLUXSEG2EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7580 /* vluxseg3ei16.v */, RISCV::VLUXSEG3EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7595 /* vluxseg3ei32.v */, RISCV::VLUXSEG3EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7610 /* vluxseg3ei64.v */, RISCV::VLUXSEG3EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7625 /* vluxseg3ei8.v */, RISCV::VLUXSEG3EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7639 /* vluxseg4ei16.v */, RISCV::VLUXSEG4EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7654 /* vluxseg4ei32.v */, RISCV::VLUXSEG4EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7669 /* vluxseg4ei64.v */, RISCV::VLUXSEG4EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7684 /* vluxseg4ei8.v */, RISCV::VLUXSEG4EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7698 /* vluxseg5ei16.v */, RISCV::VLUXSEG5EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7713 /* vluxseg5ei32.v */, RISCV::VLUXSEG5EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7728 /* vluxseg5ei64.v */, RISCV::VLUXSEG5EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7743 /* vluxseg5ei8.v */, RISCV::VLUXSEG5EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7757 /* vluxseg6ei16.v */, RISCV::VLUXSEG6EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7772 /* vluxseg6ei32.v */, RISCV::VLUXSEG6EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7787 /* vluxseg6ei64.v */, RISCV::VLUXSEG6EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7802 /* vluxseg6ei8.v */, RISCV::VLUXSEG6EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7816 /* vluxseg7ei16.v */, RISCV::VLUXSEG7EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7831 /* vluxseg7ei32.v */, RISCV::VLUXSEG7EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7846 /* vluxseg7ei64.v */, RISCV::VLUXSEG7EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7861 /* vluxseg7ei8.v */, RISCV::VLUXSEG7EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7875 /* vluxseg8ei16.v */, RISCV::VLUXSEG8EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7890 /* vluxseg8ei32.v */, RISCV::VLUXSEG8EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7905 /* vluxseg8ei64.v */, RISCV::VLUXSEG8EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7920 /* vluxseg8ei8.v */, RISCV::VLUXSEG8EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7934 /* vmacc.vv */, RISCV::VMACC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7943 /* vmacc.vx */, RISCV::VMACC_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_GPR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 7952 /* vmadc.vi */, RISCV::VMADC_VI, Convert__Reg1_0__Reg1_1__SImm51_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5 }, },
  { 7961 /* vmadc.vim */, RISCV::VMADC_VIM, Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_VMV0 }, },
  { 7971 /* vmadc.vv */, RISCV::VMADC_VV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR }, },
  { 7980 /* vmadc.vvm */, RISCV::VMADC_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_VMV0 }, },
  { 7990 /* vmadc.vx */, RISCV::VMADC_VX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR }, },
  { 7999 /* vmadc.vxm */, RISCV::VMADC_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_VMV0 }, },
  { 8009 /* vmadd.vv */, RISCV::VMADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8018 /* vmadd.vx */, RISCV::VMADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_GPR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8027 /* vmand.mm */, RISCV::VMAND_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR }, },
  { 8036 /* vmandnot.mm */, RISCV::VMANDNOT_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR }, },
  { 8048 /* vmax.vv */, RISCV::VMAX_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8056 /* vmax.vx */, RISCV::VMAX_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8064 /* vmaxu.vv */, RISCV::VMAXU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8073 /* vmaxu.vx */, RISCV::VMAXU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8082 /* vmclr.m */, RISCV::VMXOR_MM, Convert__Reg1_0__Reg1_0__Reg1_0, AMFBS_HasStdExtV, { MCK_VR }, },
  { 8090 /* vmerge.vim */, RISCV::VMERGE_VIM, Convert__Reg1_0__Reg1_1__SImm51_2__imm_95_0, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_VMV0 }, },
  { 8101 /* vmerge.vvm */, RISCV::VMERGE_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_VMV0 }, },
  { 8112 /* vmerge.vxm */, RISCV::VMERGE_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_VMV0 }, },
  { 8123 /* vmfeq.vf */, RISCV::VMFEQ_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 8132 /* vmfeq.vv */, RISCV::VMFEQ_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8141 /* vmfge.vf */, RISCV::VMFGE_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 8150 /* vmfge.vv */, RISCV::VMFLE_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8159 /* vmfgt.vf */, RISCV::VMFGT_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 8168 /* vmfgt.vv */, RISCV::VMFLT_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8177 /* vmfle.vf */, RISCV::VMFLE_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 8186 /* vmfle.vv */, RISCV::VMFLE_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8195 /* vmflt.vf */, RISCV::VMFLT_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 8204 /* vmflt.vv */, RISCV::VMFLT_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8213 /* vmfne.vf */, RISCV::VMFNE_VF, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_FPR32, MCK_RVVMaskRegOpOperand }, },
  { 8222 /* vmfne.vv */, RISCV::VMFNE_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV_HasStdExtF, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8231 /* vmin.vv */, RISCV::VMIN_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8239 /* vmin.vx */, RISCV::VMIN_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8247 /* vminu.vv */, RISCV::VMINU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8256 /* vminu.vx */, RISCV::VMINU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8265 /* vmmv.m */, RISCV::VMAND_MM, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtV, { MCK_VR, MCK_VR }, },
  { 8272 /* vmnand.mm */, RISCV::VMNAND_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR }, },
  { 8282 /* vmnor.mm */, RISCV::VMNOR_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR }, },
  { 8291 /* vmnot.m */, RISCV::VMNAND_MM, Convert__Reg1_0__Reg1_1__Reg1_1, AMFBS_HasStdExtV, { MCK_VR, MCK_VR }, },
  { 8299 /* vmor.mm */, RISCV::VMOR_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR }, },
  { 8307 /* vmornot.mm */, RISCV::VMORNOT_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR }, },
  { 8318 /* vmsbc.vv */, RISCV::VMSBC_VV, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR }, },
  { 8327 /* vmsbc.vvm */, RISCV::VMSBC_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_VMV0 }, },
  { 8337 /* vmsbc.vx */, RISCV::VMSBC_VX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR }, },
  { 8346 /* vmsbc.vxm */, RISCV::VMSBC_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_VMV0 }, },
  { 8356 /* vmsbf.m */, RISCV::VMSBF_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8364 /* vmseq.vi */, RISCV::VMSEQ_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 8373 /* vmseq.vv */, RISCV::VMSEQ_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8382 /* vmseq.vx */, RISCV::VMSEQ_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8391 /* vmset.m */, RISCV::VMXNOR_MM, Convert__Reg1_0__Reg1_0__Reg1_0, AMFBS_HasStdExtV, { MCK_VR }, },
  { 8399 /* vmsge.vi */, RISCV::PseudoVMSGE_VI, Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 8408 /* vmsge.vv */, RISCV::VMSLE_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8417 /* vmsge.vx */, RISCV::PseudoVMSGE_VX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR }, },
  { 8417 /* vmsge.vx */, RISCV::PseudoVMSGE_VX_M, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VRNoV0, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8417 /* vmsge.vx */, RISCV::PseudoVMSGE_VX_M_T, Convert__Reg1_0__Reg1_4__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VMV0, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand, MCK_VR }, },
  { 8426 /* vmsgeu.vi */, RISCV::PseudoVMSGEU_VI, Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 8436 /* vmsgeu.vv */, RISCV::VMSLEU_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8446 /* vmsgeu.vx */, RISCV::PseudoVMSGEU_VX, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR }, },
  { 8446 /* vmsgeu.vx */, RISCV::PseudoVMSGEU_VX_M, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VRNoV0, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8446 /* vmsgeu.vx */, RISCV::PseudoVMSGEU_VX_M_T, Convert__Reg1_0__Reg1_4__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VMV0, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand, MCK_VR }, },
  { 8456 /* vmsgt.vi */, RISCV::VMSGT_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 8465 /* vmsgt.vv */, RISCV::VMSLT_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8474 /* vmsgt.vx */, RISCV::VMSGT_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8483 /* vmsgtu.vi */, RISCV::VMSGTU_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 8493 /* vmsgtu.vv */, RISCV::VMSLTU_VV, Convert__Reg1_0__Reg1_2__Reg1_1__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8503 /* vmsgtu.vx */, RISCV::VMSGTU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8513 /* vmsif.m */, RISCV::VMSIF_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8521 /* vmsle.vi */, RISCV::VMSLE_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 8530 /* vmsle.vv */, RISCV::VMSLE_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8539 /* vmsle.vx */, RISCV::VMSLE_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8548 /* vmsleu.vi */, RISCV::VMSLEU_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 8558 /* vmsleu.vv */, RISCV::VMSLEU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8568 /* vmsleu.vx */, RISCV::VMSLEU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8578 /* vmslt.vi */, RISCV::PseudoVMSLT_VI, Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 8587 /* vmslt.vv */, RISCV::VMSLT_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8596 /* vmslt.vx */, RISCV::VMSLT_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8605 /* vmsltu.vi */, RISCV::PseudoVMSLTU_VI, Convert__Reg1_0__Reg1_1__SImm5Plus11_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5Plus1, MCK_RVVMaskRegOpOperand }, },
  { 8615 /* vmsltu.vv */, RISCV::VMSLTU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8625 /* vmsltu.vx */, RISCV::VMSLTU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8635 /* vmsne.vi */, RISCV::VMSNE_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 8644 /* vmsne.vv */, RISCV::VMSNE_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8653 /* vmsne.vx */, RISCV::VMSNE_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8662 /* vmsof.m */, RISCV::VMSOF_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8670 /* vmul.vv */, RISCV::VMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8678 /* vmul.vx */, RISCV::VMUL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8686 /* vmulh.vv */, RISCV::VMULH_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8695 /* vmulh.vx */, RISCV::VMULH_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8704 /* vmulhsu.vv */, RISCV::VMULHSU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8715 /* vmulhsu.vx */, RISCV::VMULHSU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8726 /* vmulhu.vv */, RISCV::VMULHU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8736 /* vmulhu.vx */, RISCV::VMULHU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8746 /* vmv.s.x */, RISCV::VMV_S_X, Convert__Reg1_0__Tie0_1_1__Reg1_1, AMFBS_HasStdExtV, { MCK_VR, MCK_GPR }, },
  { 8754 /* vmv.v.i */, RISCV::VMV_V_I, Convert__Reg1_0__SImm51_1, AMFBS_HasStdExtV, { MCK_VR, MCK_SImm5 }, },
  { 8762 /* vmv.v.v */, RISCV::VMV_V_V, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtV, { MCK_VR, MCK_VR }, },
  { 8770 /* vmv.v.x */, RISCV::VMV_V_X, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtV, { MCK_VR, MCK_GPR }, },
  { 8778 /* vmv.x.s */, RISCV::VMV_X_S, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtV, { MCK_GPR, MCK_VR }, },
  { 8786 /* vmv1r.v */, RISCV::VMV1R_V, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtV, { MCK_VR, MCK_VR }, },
  { 8794 /* vmv2r.v */, RISCV::VMV2R_V, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtV, { MCK_VR, MCK_VR }, },
  { 8802 /* vmv4r.v */, RISCV::VMV4R_V, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtV, { MCK_VR, MCK_VR }, },
  { 8810 /* vmv8r.v */, RISCV::VMV8R_V, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtV, { MCK_VR, MCK_VR }, },
  { 8818 /* vmxnor.mm */, RISCV::VMXNOR_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR }, },
  { 8828 /* vmxor.mm */, RISCV::VMXOR_MM, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR }, },
  { 8837 /* vnclip.wi */, RISCV::VNCLIP_WI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 8847 /* vnclip.wv */, RISCV::VNCLIP_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8857 /* vnclip.wx */, RISCV::VNCLIP_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8867 /* vnclipu.wi */, RISCV::VNCLIPU_WI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 8878 /* vnclipu.wv */, RISCV::VNCLIPU_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8889 /* vnclipu.wx */, RISCV::VNCLIPU_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8900 /* vncvt.x.x.w */, RISCV::VNSRL_WX, Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8912 /* vneg.v */, RISCV::VRSUB_VX, Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8919 /* vnmsac.vv */, RISCV::VNMSAC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8929 /* vnmsac.vx */, RISCV::VNMSAC_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_GPR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8939 /* vnmsub.vv */, RISCV::VNMSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8949 /* vnmsub.vx */, RISCV::VNMSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_GPR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8959 /* vnot.v */, RISCV::VXOR_VI, Convert__Reg1_0__Reg1_1__imm_95__MINUS_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8966 /* vnsra.wi */, RISCV::VNSRA_WI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 8975 /* vnsra.wv */, RISCV::VNSRA_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 8984 /* vnsra.wx */, RISCV::VNSRA_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 8993 /* vnsrl.wi */, RISCV::VNSRL_WI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 9002 /* vnsrl.wv */, RISCV::VNSRL_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9011 /* vnsrl.wx */, RISCV::VNSRL_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9020 /* vor.vi */, RISCV::VOR_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 9027 /* vor.vv */, RISCV::VOR_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9034 /* vor.vx */, RISCV::VOR_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9041 /* vpopc.m */, RISCV::VPOPC_M, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_GPR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9049 /* vredand.vs */, RISCV::VREDAND_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9060 /* vredmax.vs */, RISCV::VREDMAX_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9071 /* vredmaxu.vs */, RISCV::VREDMAXU_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9083 /* vredmin.vs */, RISCV::VREDMIN_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9094 /* vredminu.vs */, RISCV::VREDMINU_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9106 /* vredor.vs */, RISCV::VREDOR_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9116 /* vredsum.vs */, RISCV::VREDSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9127 /* vredxor.vs */, RISCV::VREDXOR_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9138 /* vrem.vv */, RISCV::VREM_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9146 /* vrem.vx */, RISCV::VREM_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9154 /* vremu.vv */, RISCV::VREMU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9163 /* vremu.vx */, RISCV::VREMU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9172 /* vrgather.vi */, RISCV::VRGATHER_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 9184 /* vrgather.vv */, RISCV::VRGATHER_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9196 /* vrgather.vx */, RISCV::VRGATHER_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9208 /* vrgatherei16.vv */, RISCV::VRGATHEREI16_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9224 /* vrsub.vi */, RISCV::VRSUB_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 9233 /* vrsub.vx */, RISCV::VRSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9242 /* vs1r.v */, RISCV::VS1R_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9249 /* vs2r.v */, RISCV::VS2R_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9256 /* vs4r.v */, RISCV::VS4R_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9263 /* vs8r.v */, RISCV::VS8R_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9270 /* vsadd.vi */, RISCV::VSADD_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 9279 /* vsadd.vv */, RISCV::VSADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9288 /* vsadd.vx */, RISCV::VSADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9297 /* vsaddu.vi */, RISCV::VSADDU_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 9307 /* vsaddu.vv */, RISCV::VSADDU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9317 /* vsaddu.vx */, RISCV::VSADDU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9327 /* vsbc.vvm */, RISCV::VSBC_VVM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_VMV0 }, },
  { 9336 /* vsbc.vxm */, RISCV::VSBC_VXM, Convert__Reg1_0__Reg1_1__Reg1_2__imm_95_0, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_VMV0 }, },
  { 9345 /* vse1.v */, RISCV::VSE1_V, Convert__Reg1_0__Reg1_2, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_ }, },
  { 9352 /* vse16.v */, RISCV::VSE16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 9360 /* vse32.v */, RISCV::VSE32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 9368 /* vse64.v */, RISCV::VSE64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 9376 /* vse8.v */, RISCV::VSE8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 9383 /* vsetivli */, RISCV::VSETIVLI, Convert__Reg1_0__UImm51_1__VTypeI1_2, AMFBS_HasStdExtV, { MCK_GPR, MCK_UImm5, MCK_VTypeI }, },
  { 9392 /* vsetvl */, RISCV::VSETVL, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtV, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 9399 /* vsetvli */, RISCV::VSETVLI, Convert__Reg1_0__Reg1_1__VTypeI1_2, AMFBS_HasStdExtV, { MCK_GPR, MCK_GPR, MCK_VTypeI }, },
  { 9407 /* vsext.vf2 */, RISCV::VSEXT_VF2, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9417 /* vsext.vf4 */, RISCV::VSEXT_VF4, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9427 /* vsext.vf8 */, RISCV::VSEXT_VF8, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9437 /* vslide1down.vx */, RISCV::VSLIDE1DOWN_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9452 /* vslide1up.vx */, RISCV::VSLIDE1UP_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9465 /* vslidedown.vi */, RISCV::VSLIDEDOWN_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 9479 /* vslidedown.vx */, RISCV::VSLIDEDOWN_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9493 /* vslideup.vi */, RISCV::VSLIDEUP_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 9505 /* vslideup.vx */, RISCV::VSLIDEUP_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9517 /* vsll.vi */, RISCV::VSLL_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 9525 /* vsll.vv */, RISCV::VSLL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9533 /* vsll.vx */, RISCV::VSLL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9541 /* vsmul.vv */, RISCV::VSMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9550 /* vsmul.vx */, RISCV::VSMUL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 9559 /* vsoxei16.v */, RISCV::VSOXEI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9570 /* vsoxei32.v */, RISCV::VSOXEI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9581 /* vsoxei64.v */, RISCV::VSOXEI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9592 /* vsoxei8.v */, RISCV::VSOXEI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9602 /* vsoxseg2ei16.v */, RISCV::VSOXSEG2EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9617 /* vsoxseg2ei32.v */, RISCV::VSOXSEG2EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9632 /* vsoxseg2ei64.v */, RISCV::VSOXSEG2EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9647 /* vsoxseg2ei8.v */, RISCV::VSOXSEG2EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9661 /* vsoxseg3ei16.v */, RISCV::VSOXSEG3EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9676 /* vsoxseg3ei32.v */, RISCV::VSOXSEG3EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9691 /* vsoxseg3ei64.v */, RISCV::VSOXSEG3EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9706 /* vsoxseg3ei8.v */, RISCV::VSOXSEG3EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9720 /* vsoxseg4ei16.v */, RISCV::VSOXSEG4EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9735 /* vsoxseg4ei32.v */, RISCV::VSOXSEG4EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9750 /* vsoxseg4ei64.v */, RISCV::VSOXSEG4EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9765 /* vsoxseg4ei8.v */, RISCV::VSOXSEG4EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9779 /* vsoxseg5ei16.v */, RISCV::VSOXSEG5EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9794 /* vsoxseg5ei32.v */, RISCV::VSOXSEG5EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9809 /* vsoxseg5ei64.v */, RISCV::VSOXSEG5EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9824 /* vsoxseg5ei8.v */, RISCV::VSOXSEG5EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9838 /* vsoxseg6ei16.v */, RISCV::VSOXSEG6EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9853 /* vsoxseg6ei32.v */, RISCV::VSOXSEG6EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9868 /* vsoxseg6ei64.v */, RISCV::VSOXSEG6EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9883 /* vsoxseg6ei8.v */, RISCV::VSOXSEG6EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9897 /* vsoxseg7ei16.v */, RISCV::VSOXSEG7EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9912 /* vsoxseg7ei32.v */, RISCV::VSOXSEG7EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9927 /* vsoxseg7ei64.v */, RISCV::VSOXSEG7EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9942 /* vsoxseg7ei8.v */, RISCV::VSOXSEG7EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9956 /* vsoxseg8ei16.v */, RISCV::VSOXSEG8EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9971 /* vsoxseg8ei32.v */, RISCV::VSOXSEG8EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 9986 /* vsoxseg8ei64.v */, RISCV::VSOXSEG8EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10001 /* vsoxseg8ei8.v */, RISCV::VSOXSEG8EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10015 /* vsra.vi */, RISCV::VSRA_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 10023 /* vsra.vv */, RISCV::VSRA_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10031 /* vsra.vx */, RISCV::VSRA_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10039 /* vsrl.vi */, RISCV::VSRL_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 10047 /* vsrl.vv */, RISCV::VSRL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10055 /* vsrl.vx */, RISCV::VSRL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10063 /* vsse16.v */, RISCV::VSSE16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10072 /* vsse32.v */, RISCV::VSSE32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10081 /* vsse64.v */, RISCV::VSSE64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10090 /* vsse8.v */, RISCV::VSSE8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10098 /* vsseg2e16.v */, RISCV::VSSEG2E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10110 /* vsseg2e32.v */, RISCV::VSSEG2E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10122 /* vsseg2e64.v */, RISCV::VSSEG2E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10134 /* vsseg2e8.v */, RISCV::VSSEG2E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10145 /* vsseg3e16.v */, RISCV::VSSEG3E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10157 /* vsseg3e32.v */, RISCV::VSSEG3E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10169 /* vsseg3e64.v */, RISCV::VSSEG3E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10181 /* vsseg3e8.v */, RISCV::VSSEG3E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10192 /* vsseg4e16.v */, RISCV::VSSEG4E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10204 /* vsseg4e32.v */, RISCV::VSSEG4E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10216 /* vsseg4e64.v */, RISCV::VSSEG4E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10228 /* vsseg4e8.v */, RISCV::VSSEG4E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10239 /* vsseg5e16.v */, RISCV::VSSEG5E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10251 /* vsseg5e32.v */, RISCV::VSSEG5E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10263 /* vsseg5e64.v */, RISCV::VSSEG5E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10275 /* vsseg5e8.v */, RISCV::VSSEG5E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10286 /* vsseg6e16.v */, RISCV::VSSEG6E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10298 /* vsseg6e32.v */, RISCV::VSSEG6E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10310 /* vsseg6e64.v */, RISCV::VSSEG6E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10322 /* vsseg6e8.v */, RISCV::VSSEG6E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10333 /* vsseg7e16.v */, RISCV::VSSEG7E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10345 /* vsseg7e32.v */, RISCV::VSSEG7E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10357 /* vsseg7e64.v */, RISCV::VSSEG7E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10369 /* vsseg7e8.v */, RISCV::VSSEG7E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10380 /* vsseg8e16.v */, RISCV::VSSEG8E16_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10392 /* vsseg8e32.v */, RISCV::VSSEG8E32_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10404 /* vsseg8e64.v */, RISCV::VSSEG8E64_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10416 /* vsseg8e8.v */, RISCV::VSSEG8E8_V, Convert__Reg1_0__Reg1_2__RVVMaskRegOpOperand1_4, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_RVVMaskRegOpOperand }, },
  { 10427 /* vssra.vi */, RISCV::VSSRA_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 10436 /* vssra.vv */, RISCV::VSSRA_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10445 /* vssra.vx */, RISCV::VSSRA_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10454 /* vssrl.vi */, RISCV::VSSRL_VI, Convert__Reg1_0__Reg1_1__UImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_UImm5, MCK_RVVMaskRegOpOperand }, },
  { 10463 /* vssrl.vv */, RISCV::VSSRL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10472 /* vssrl.vx */, RISCV::VSSRL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10481 /* vssseg2e16.v */, RISCV::VSSSEG2E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10494 /* vssseg2e32.v */, RISCV::VSSSEG2E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10507 /* vssseg2e64.v */, RISCV::VSSSEG2E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10520 /* vssseg2e8.v */, RISCV::VSSSEG2E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10532 /* vssseg3e16.v */, RISCV::VSSSEG3E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10545 /* vssseg3e32.v */, RISCV::VSSSEG3E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10558 /* vssseg3e64.v */, RISCV::VSSSEG3E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10571 /* vssseg3e8.v */, RISCV::VSSSEG3E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10583 /* vssseg4e16.v */, RISCV::VSSSEG4E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10596 /* vssseg4e32.v */, RISCV::VSSSEG4E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10609 /* vssseg4e64.v */, RISCV::VSSSEG4E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10622 /* vssseg4e8.v */, RISCV::VSSSEG4E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10634 /* vssseg5e16.v */, RISCV::VSSSEG5E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10647 /* vssseg5e32.v */, RISCV::VSSSEG5E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10660 /* vssseg5e64.v */, RISCV::VSSSEG5E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10673 /* vssseg5e8.v */, RISCV::VSSSEG5E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10685 /* vssseg6e16.v */, RISCV::VSSSEG6E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10698 /* vssseg6e32.v */, RISCV::VSSSEG6E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10711 /* vssseg6e64.v */, RISCV::VSSSEG6E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10724 /* vssseg6e8.v */, RISCV::VSSSEG6E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10736 /* vssseg7e16.v */, RISCV::VSSSEG7E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10749 /* vssseg7e32.v */, RISCV::VSSSEG7E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10762 /* vssseg7e64.v */, RISCV::VSSSEG7E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10775 /* vssseg7e8.v */, RISCV::VSSSEG7E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10787 /* vssseg8e16.v */, RISCV::VSSSEG8E16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10800 /* vssseg8e32.v */, RISCV::VSSSEG8E32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10813 /* vssseg8e64.v */, RISCV::VSSSEG8E64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10826 /* vssseg8e8.v */, RISCV::VSSSEG8E8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10838 /* vssub.vv */, RISCV::VSSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10847 /* vssub.vx */, RISCV::VSSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10856 /* vssubu.vv */, RISCV::VSSUBU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10866 /* vssubu.vx */, RISCV::VSSUBU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10876 /* vsub.vv */, RISCV::VSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10884 /* vsub.vx */, RISCV::VSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 10892 /* vsuxei16.v */, RISCV::VSUXEI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10903 /* vsuxei32.v */, RISCV::VSUXEI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10914 /* vsuxei64.v */, RISCV::VSUXEI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10925 /* vsuxei8.v */, RISCV::VSUXEI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtV, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10935 /* vsuxseg2ei16.v */, RISCV::VSUXSEG2EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10950 /* vsuxseg2ei32.v */, RISCV::VSUXSEG2EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10965 /* vsuxseg2ei64.v */, RISCV::VSUXSEG2EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10980 /* vsuxseg2ei8.v */, RISCV::VSUXSEG2EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 10994 /* vsuxseg3ei16.v */, RISCV::VSUXSEG3EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11009 /* vsuxseg3ei32.v */, RISCV::VSUXSEG3EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11024 /* vsuxseg3ei64.v */, RISCV::VSUXSEG3EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11039 /* vsuxseg3ei8.v */, RISCV::VSUXSEG3EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11053 /* vsuxseg4ei16.v */, RISCV::VSUXSEG4EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11068 /* vsuxseg4ei32.v */, RISCV::VSUXSEG4EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11083 /* vsuxseg4ei64.v */, RISCV::VSUXSEG4EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11098 /* vsuxseg4ei8.v */, RISCV::VSUXSEG4EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11112 /* vsuxseg5ei16.v */, RISCV::VSUXSEG5EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11127 /* vsuxseg5ei32.v */, RISCV::VSUXSEG5EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11142 /* vsuxseg5ei64.v */, RISCV::VSUXSEG5EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11157 /* vsuxseg5ei8.v */, RISCV::VSUXSEG5EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11171 /* vsuxseg6ei16.v */, RISCV::VSUXSEG6EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11186 /* vsuxseg6ei32.v */, RISCV::VSUXSEG6EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11201 /* vsuxseg6ei64.v */, RISCV::VSUXSEG6EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11216 /* vsuxseg6ei8.v */, RISCV::VSUXSEG6EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11230 /* vsuxseg7ei16.v */, RISCV::VSUXSEG7EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11245 /* vsuxseg7ei32.v */, RISCV::VSUXSEG7EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11260 /* vsuxseg7ei64.v */, RISCV::VSUXSEG7EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11275 /* vsuxseg7ei8.v */, RISCV::VSUXSEG7EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11289 /* vsuxseg8ei16.v */, RISCV::VSUXSEG8EI16_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11304 /* vsuxseg8ei32.v */, RISCV::VSUXSEG8EI32_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11319 /* vsuxseg8ei64.v */, RISCV::VSUXSEG8EI64_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11334 /* vsuxseg8ei8.v */, RISCV::VSUXSEG8EI8_V, Convert__Reg1_0__Reg1_2__Reg1_4__RVVMaskRegOpOperand1_5, AMFBS_HasStdExtZvlsseg, { MCK_VR, MCK__40_, MCK_GPR, MCK__41_, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11348 /* vwadd.vv */, RISCV::VWADD_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11357 /* vwadd.vx */, RISCV::VWADD_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11366 /* vwadd.wv */, RISCV::VWADD_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11375 /* vwadd.wx */, RISCV::VWADD_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11384 /* vwaddu.vv */, RISCV::VWADDU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11394 /* vwaddu.vx */, RISCV::VWADDU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11404 /* vwaddu.wv */, RISCV::VWADDU_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11414 /* vwaddu.wx */, RISCV::VWADDU_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11424 /* vwcvt.x.x.v */, RISCV::VWADD_VX, Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11436 /* vwcvtu.x.x.v */, RISCV::VWADDU_VX, Convert__Reg1_0__Reg1_1__regX0__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11449 /* vwmacc.vv */, RISCV::VWMACC_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11459 /* vwmacc.vx */, RISCV::VWMACC_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_GPR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11469 /* vwmaccsu.vv */, RISCV::VWMACCSU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11481 /* vwmaccsu.vx */, RISCV::VWMACCSU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_GPR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11493 /* vwmaccu.vv */, RISCV::VWMACCU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11504 /* vwmaccu.vx */, RISCV::VWMACCU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_GPR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11515 /* vwmaccus.vx */, RISCV::VWMACCUS_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_GPR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11527 /* vwmul.vv */, RISCV::VWMUL_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11536 /* vwmul.vx */, RISCV::VWMUL_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11545 /* vwmulsu.vv */, RISCV::VWMULSU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11556 /* vwmulsu.vx */, RISCV::VWMULSU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11567 /* vwmulu.vv */, RISCV::VWMULU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11577 /* vwmulu.vx */, RISCV::VWMULU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11587 /* vwredsum.vs */, RISCV::VWREDSUM_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11599 /* vwredsumu.vs */, RISCV::VWREDSUMU_VS, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11612 /* vwsub.vv */, RISCV::VWSUB_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11621 /* vwsub.vx */, RISCV::VWSUB_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11630 /* vwsub.wv */, RISCV::VWSUB_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11639 /* vwsub.wx */, RISCV::VWSUB_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11648 /* vwsubu.vv */, RISCV::VWSUBU_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11658 /* vwsubu.vx */, RISCV::VWSUBU_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11668 /* vwsubu.wv */, RISCV::VWSUBU_WV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11678 /* vwsubu.wx */, RISCV::VWSUBU_WX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11688 /* vxor.vi */, RISCV::VXOR_VI, Convert__Reg1_0__Reg1_1__SImm51_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_SImm5, MCK_RVVMaskRegOpOperand }, },
  { 11696 /* vxor.vv */, RISCV::VXOR_VV, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11704 /* vxor.vx */, RISCV::VXOR_VX, Convert__Reg1_0__Reg1_1__Reg1_2__RVVMaskRegOpOperand1_3, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_GPR, MCK_RVVMaskRegOpOperand }, },
  { 11712 /* vzext.vf2 */, RISCV::VZEXT_VF2, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11722 /* vzext.vf4 */, RISCV::VZEXT_VF4, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11732 /* vzext.vf8 */, RISCV::VZEXT_VF8, Convert__Reg1_0__Reg1_1__RVVMaskRegOpOperand1_2, AMFBS_HasStdExtV, { MCK_VR, MCK_VR, MCK_RVVMaskRegOpOperand }, },
  { 11742 /* wfi */, RISCV::WFI, Convert__imm_95_0__imm_95_0, AMFBS_None, {  }, },
  { 11746 /* xnor */, RISCV::XNOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbbOrZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11751 /* xor */, RISCV::XOR, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11751 /* xor */, RISCV::XORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 11755 /* xori */, RISCV::XORI, Convert__Reg1_0__Reg1_1__SImm121_2, AMFBS_None, { MCK_GPR, MCK_GPR, MCK_SImm12 }, },
  { 11760 /* xperm.b */, RISCV::XPERMB, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11768 /* xperm.h */, RISCV::XPERMH, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11776 /* xperm.n */, RISCV::XPERMN, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11784 /* xperm.w */, RISCV::XPERMW, Convert__Reg1_0__Reg1_1__Reg1_2, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR, MCK_GPR }, },
  { 11792 /* zext.b */, RISCV::ANDI, Convert__Reg1_0__Reg1_1__imm_95_255, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 11799 /* zext.h */, RISCV::ZEXTH_RV32, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbbOrZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 11799 /* zext.h */, RISCV::ZEXTH_RV64, Convert__Reg1_0__Reg1_1, AMFBS_HasStdExtZbbOrZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11799 /* zext.h */, RISCV::PseudoZEXT_H, Convert__Reg1_0__Reg1_1, AMFBS_None, { MCK_GPR, MCK_GPR }, },
  { 11806 /* zext.w */, RISCV::ADDUW, Convert__Reg1_0__Reg1_1__regX0, AMFBS_HasStdExtZba_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11806 /* zext.w */, RISCV::PseudoZEXT_W, Convert__Reg1_0__Reg1_1, AMFBS_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11813 /* zip */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 11813 /* zip */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_31, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11817 /* zip.b */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_3, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 11823 /* zip.h */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_7, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 11829 /* zip.n */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_1, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 11835 /* zip.w */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_15, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11841 /* zip16 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_16, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11847 /* zip2 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 11847 /* zip2 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_30, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11852 /* zip2.b */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_2, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 11859 /* zip2.h */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_6, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 11866 /* zip2.w */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_14, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11873 /* zip4 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 11873 /* zip4 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_28, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11878 /* zip4.h */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_4, AMFBS_HasStdExtZbp, { MCK_GPR, MCK_GPR }, },
  { 11885 /* zip4.w */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_12, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11892 /* zip8 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbp_IsRV32, { MCK_GPR, MCK_GPR }, },
  { 11892 /* zip8 */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_24, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
  { 11897 /* zip8.w */, RISCV::SHFLI, Convert__Reg1_0__Reg1_1__imm_95_8, AMFBS_HasStdExtZbp_IsRV64, { MCK_GPR, MCK_GPR }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned RISCVAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     FeatureBitset &MissingFeatures,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 8) {
    ErrorInfo = 8;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  const FeatureBitset &AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((RISCVOperand &)*Operands[0]).getToken();

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
  SmallBitVector OptionalOperandsMask(7);
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
    OptionalOperandsMask.reset(0, 7);
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 7; ++FormalIdx) {
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
        OptionalOperandsMask.set(FormalIdx, 7);
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
        OptionalOperandsMask.set(FormalIdx);
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
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands,
                    OptionalOperandsMask);

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

static const OperandMatchEntry OperandMatchTable[792] = {
  /* Operand List Mnemonic, Mask, Operand Class, Features */
  { 0 /* add */, 8 /* 3 */, MCK_TPRelAddSymbol, AMFBS_None },
  { 27 /* amoadd.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 36 /* amoadd.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 48 /* amoadd.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 62 /* amoadd.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 74 /* amoadd.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 83 /* amoadd.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 95 /* amoadd.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 109 /* amoadd.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 121 /* amoand.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 130 /* amoand.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 142 /* amoand.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 156 /* amoand.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 168 /* amoand.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 177 /* amoand.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 189 /* amoand.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 203 /* amoand.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 215 /* amomax.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 224 /* amomax.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 236 /* amomax.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 250 /* amomax.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 262 /* amomax.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 271 /* amomax.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 283 /* amomax.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 297 /* amomax.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 309 /* amomaxu.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 319 /* amomaxu.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 332 /* amomaxu.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 347 /* amomaxu.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 360 /* amomaxu.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 370 /* amomaxu.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 383 /* amomaxu.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 398 /* amomaxu.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 411 /* amomin.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 420 /* amomin.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 432 /* amomin.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 446 /* amomin.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 458 /* amomin.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 467 /* amomin.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 479 /* amomin.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 493 /* amomin.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 505 /* amominu.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 515 /* amominu.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 528 /* amominu.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 543 /* amominu.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 556 /* amominu.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 566 /* amominu.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 579 /* amominu.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 594 /* amominu.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 607 /* amoor.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 615 /* amoor.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 626 /* amoor.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 639 /* amoor.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 650 /* amoor.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 658 /* amoor.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 669 /* amoor.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 682 /* amoor.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 693 /* amoswap.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 703 /* amoswap.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 716 /* amoswap.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 731 /* amoswap.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 744 /* amoswap.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 754 /* amoswap.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 767 /* amoswap.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 782 /* amoswap.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 795 /* amoxor.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 804 /* amoxor.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 816 /* amoxor.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 830 /* amoxor.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 842 /* amoxor.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 851 /* amoxor.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 863 /* amoxor.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 877 /* amoxor.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 1486 /* call */, 1 /* 0 */, MCK_CallSymbol, AMFBS_None },
  { 1486 /* call */, 2 /* 1 */, MCK_CallSymbol, AMFBS_None },
  { 1609 /* csrc */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1609 /* csrc */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1614 /* csrci */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1620 /* csrr */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1625 /* csrrc */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1625 /* csrrc */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1631 /* csrrci */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1638 /* csrrs */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1638 /* csrrs */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1644 /* csrrsi */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1651 /* csrrw */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1651 /* csrrw */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1657 /* csrrwi */, 2 /* 1 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1664 /* csrs */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1664 /* csrs */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1669 /* csrsi */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1675 /* csrw */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1675 /* csrw */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 1680 /* csrwi */, 1 /* 0 */, MCK_CSRSystemRegister, AMFBS_None },
  { 2183 /* fld */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtD },
  { 2205 /* flh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtZfh },
  { 2227 /* flw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtF },
  { 2513 /* fsd */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtD },
  { 2612 /* fsh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtZfh },
  { 2706 /* fsw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_HasStdExtF },
  { 2758 /* j */, 1 /* 0 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 2760 /* jal */, 1 /* 0 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 2760 /* jal */, 2 /* 1 */, MCK_SImm21Lsb0JAL, AMFBS_None },
  { 2772 /* jump */, 1 /* 0 */, MCK_PseudoJumpSymbol, AMFBS_None },
  { 2777 /* la */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2780 /* la.tls.gd */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2790 /* la.tls.ie */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2800 /* lb */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2803 /* lbu */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2807 /* ld */, 2 /* 1 */, MCK_BareSymbol, AMFBS_IsRV64 },
  { 2810 /* lh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2813 /* lhu */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2820 /* lla */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2824 /* lr.d */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 2829 /* lr.d.aq */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 2837 /* lr.d.aqrl */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 2847 /* lr.d.rl */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 2855 /* lr.w */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 2860 /* lr.w.aq */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 2868 /* lr.w.aqrl */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 2878 /* lr.w.rl */, 2 /* 1 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 2890 /* lw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 2893 /* lwu */, 2 /* 1 */, MCK_BareSymbol, AMFBS_IsRV64 },
  { 3378 /* sb */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3381 /* sc.d */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3386 /* sc.d.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3394 /* sc.d.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3404 /* sc.d.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA_IsRV64 },
  { 3412 /* sc.w */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 3417 /* sc.w.aq */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 3425 /* sc.w.aqrl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 3435 /* sc.w.rl */, 4 /* 2 */, MCK_AtomicMemOpOperand, AMFBS_HasStdExtA },
  { 3443 /* sd */, 2 /* 1 */, MCK_BareSymbol, AMFBS_IsRV64 },
  { 3497 /* sh */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3720 /* sw */, 2 /* 1 */, MCK_BareSymbol, AMFBS_None },
  { 3723 /* tail */, 1 /* 0 */, MCK_CallSymbol, AMFBS_None },
  { 3883 /* vaadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3892 /* vaadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3901 /* vaaddu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3911 /* vaaddu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3948 /* vadd.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3956 /* vadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3964 /* vadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 3972 /* vamoaddei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 3972 /* vamoaddei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 3986 /* vamoaddei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 3986 /* vamoaddei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4000 /* vamoaddei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4000 /* vamoaddei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4014 /* vamoaddei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4014 /* vamoaddei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4027 /* vamoandei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4027 /* vamoandei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4041 /* vamoandei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4041 /* vamoandei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4055 /* vamoandei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4055 /* vamoandei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4069 /* vamoandei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4069 /* vamoandei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4082 /* vamomaxei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4082 /* vamomaxei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4096 /* vamomaxei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4096 /* vamomaxei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4110 /* vamomaxei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4110 /* vamomaxei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4124 /* vamomaxei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4124 /* vamomaxei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4137 /* vamomaxuei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4137 /* vamomaxuei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4152 /* vamomaxuei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4152 /* vamomaxuei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4167 /* vamomaxuei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4167 /* vamomaxuei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4182 /* vamomaxuei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4182 /* vamomaxuei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4196 /* vamominei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4196 /* vamominei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4210 /* vamominei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4210 /* vamominei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4224 /* vamominei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4224 /* vamominei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4238 /* vamominei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4238 /* vamominei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4251 /* vamominuei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4251 /* vamominuei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4266 /* vamominuei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4266 /* vamominuei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4281 /* vamominuei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4281 /* vamominuei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4296 /* vamominuei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4296 /* vamominuei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4310 /* vamoorei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4310 /* vamoorei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4323 /* vamoorei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4323 /* vamoorei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4336 /* vamoorei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4336 /* vamoorei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4349 /* vamoorei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4349 /* vamoorei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4361 /* vamoswapei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4361 /* vamoswapei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4376 /* vamoswapei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4376 /* vamoswapei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4391 /* vamoswapei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4391 /* vamoswapei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4406 /* vamoswapei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4406 /* vamoswapei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4420 /* vamoxorei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4420 /* vamoxorei16.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4434 /* vamoxorei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4434 /* vamoxorei32.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4448 /* vamoxorei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4448 /* vamoxorei64.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA_IsRV64 },
  { 4462 /* vamoxorei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4462 /* vamoxorei8.v */, 64 /* 6 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvamo_HasStdExtA },
  { 4475 /* vand.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4483 /* vand.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4491 /* vand.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4499 /* vasub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4508 /* vasub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4517 /* vasubu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4527 /* vasubu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4550 /* vdiv.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4558 /* vdiv.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4566 /* vdivu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4575 /* vdivu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4584 /* vfadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4593 /* vfadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4602 /* vfclass.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4612 /* vfcvt.f.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4624 /* vfcvt.f.xu.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4637 /* vfcvt.rtz.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4653 /* vfcvt.rtz.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4670 /* vfcvt.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4682 /* vfcvt.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4695 /* vfdiv.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4704 /* vfdiv.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4713 /* vfirst.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 4722 /* vfmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4732 /* vfmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4742 /* vfmadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4752 /* vfmadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4762 /* vfmax.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4771 /* vfmax.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4792 /* vfmin.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4801 /* vfmin.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4810 /* vfmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4820 /* vfmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4830 /* vfmsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4840 /* vfmsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4850 /* vfmul.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4859 /* vfmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4895 /* vfncvt.f.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4908 /* vfncvt.f.x.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4921 /* vfncvt.f.xu.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4935 /* vfncvt.rod.f.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4952 /* vfncvt.rtz.x.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4969 /* vfncvt.rtz.xu.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 4987 /* vfncvt.x.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5000 /* vfncvt.xu.f.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5014 /* vfneg.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5022 /* vfnmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5033 /* vfnmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5044 /* vfnmadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5055 /* vfnmadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5066 /* vfnmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5077 /* vfnmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5088 /* vfnmsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5099 /* vfnmsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5110 /* vfrdiv.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5120 /* vfrec7.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5129 /* vfredmax.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5141 /* vfredmin.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5153 /* vfredosum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5166 /* vfredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5178 /* vfrsqrt7.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5189 /* vfrsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5199 /* vfsgnj.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5209 /* vfsgnj.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5219 /* vfsgnjn.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5230 /* vfsgnjn.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5241 /* vfsgnjx.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5252 /* vfsgnjx.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5263 /* vfslide1down.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5279 /* vfslide1up.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5293 /* vfsqrt.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5302 /* vfsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5311 /* vfsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5320 /* vfwadd.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5330 /* vfwadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5340 /* vfwadd.wf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5350 /* vfwadd.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5360 /* vfwcvt.f.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5373 /* vfwcvt.f.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5386 /* vfwcvt.f.xu.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5400 /* vfwcvt.rtz.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5417 /* vfwcvt.rtz.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5435 /* vfwcvt.x.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5448 /* vfwcvt.xu.f.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5462 /* vfwmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5473 /* vfwmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5484 /* vfwmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5495 /* vfwmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5506 /* vfwmul.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5516 /* vfwmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5526 /* vfwnmacc.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5538 /* vfwnmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5550 /* vfwnmsac.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5562 /* vfwnmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5574 /* vfwredosum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5588 /* vfwredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5601 /* vfwsub.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5611 /* vfwsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5621 /* vfwsub.wf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5631 /* vfwsub.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 5641 /* vid.v */, 2 /* 1 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5647 /* viota.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5846 /* vle16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5854 /* vle16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5864 /* vle32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5872 /* vle32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5882 /* vle64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5890 /* vle64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5900 /* vle8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5907 /* vle8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5916 /* vloxei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5927 /* vloxei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5938 /* vloxei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5949 /* vloxei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 5959 /* vloxseg2ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 5974 /* vloxseg2ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 5989 /* vloxseg2ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6004 /* vloxseg2ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6018 /* vloxseg3ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6033 /* vloxseg3ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6048 /* vloxseg3ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6063 /* vloxseg3ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6077 /* vloxseg4ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6092 /* vloxseg4ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6107 /* vloxseg4ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6122 /* vloxseg4ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6136 /* vloxseg5ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6151 /* vloxseg5ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6166 /* vloxseg5ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6181 /* vloxseg5ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6195 /* vloxseg6ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6210 /* vloxseg6ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6225 /* vloxseg6ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6240 /* vloxseg6ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6254 /* vloxseg7ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6269 /* vloxseg7ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6284 /* vloxseg7ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6299 /* vloxseg7ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6313 /* vloxseg8ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6328 /* vloxseg8ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6343 /* vloxseg8ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6358 /* vloxseg8ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6372 /* vlse16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6381 /* vlse32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6390 /* vlse64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6399 /* vlse8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 6407 /* vlseg2e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6419 /* vlseg2e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6433 /* vlseg2e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6445 /* vlseg2e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6459 /* vlseg2e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6471 /* vlseg2e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6485 /* vlseg2e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6496 /* vlseg2e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6509 /* vlseg3e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6521 /* vlseg3e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6535 /* vlseg3e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6547 /* vlseg3e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6561 /* vlseg3e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6573 /* vlseg3e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6587 /* vlseg3e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6598 /* vlseg3e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6611 /* vlseg4e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6623 /* vlseg4e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6637 /* vlseg4e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6649 /* vlseg4e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6663 /* vlseg4e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6675 /* vlseg4e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6689 /* vlseg4e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6700 /* vlseg4e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6713 /* vlseg5e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6725 /* vlseg5e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6739 /* vlseg5e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6751 /* vlseg5e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6765 /* vlseg5e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6777 /* vlseg5e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6791 /* vlseg5e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6802 /* vlseg5e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6815 /* vlseg6e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6827 /* vlseg6e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6841 /* vlseg6e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6853 /* vlseg6e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6867 /* vlseg6e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6879 /* vlseg6e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6893 /* vlseg6e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6904 /* vlseg6e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6917 /* vlseg7e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6929 /* vlseg7e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6943 /* vlseg7e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6955 /* vlseg7e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6969 /* vlseg7e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6981 /* vlseg7e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 6995 /* vlseg7e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7006 /* vlseg7e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7019 /* vlseg8e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7031 /* vlseg8e16ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7045 /* vlseg8e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7057 /* vlseg8e32ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7071 /* vlseg8e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7083 /* vlseg8e64ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7097 /* vlseg8e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7108 /* vlseg8e8ff.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7121 /* vlsseg2e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7134 /* vlsseg2e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7147 /* vlsseg2e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7160 /* vlsseg2e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7172 /* vlsseg3e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7185 /* vlsseg3e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7198 /* vlsseg3e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7211 /* vlsseg3e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7223 /* vlsseg4e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7236 /* vlsseg4e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7249 /* vlsseg4e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7262 /* vlsseg4e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7274 /* vlsseg5e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7287 /* vlsseg5e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7300 /* vlsseg5e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7313 /* vlsseg5e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7325 /* vlsseg6e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7338 /* vlsseg6e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7351 /* vlsseg6e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7364 /* vlsseg6e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7376 /* vlsseg7e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7389 /* vlsseg7e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7402 /* vlsseg7e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7415 /* vlsseg7e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7427 /* vlsseg8e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7440 /* vlsseg8e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7453 /* vlsseg8e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7466 /* vlsseg8e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7478 /* vluxei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 7489 /* vluxei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 7500 /* vluxei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 7511 /* vluxei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 7521 /* vluxseg2ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7536 /* vluxseg2ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7551 /* vluxseg2ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7566 /* vluxseg2ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7580 /* vluxseg3ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7595 /* vluxseg3ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7610 /* vluxseg3ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7625 /* vluxseg3ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7639 /* vluxseg4ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7654 /* vluxseg4ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7669 /* vluxseg4ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7684 /* vluxseg4ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7698 /* vluxseg5ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7713 /* vluxseg5ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7728 /* vluxseg5ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7743 /* vluxseg5ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7757 /* vluxseg6ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7772 /* vluxseg6ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7787 /* vluxseg6ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7802 /* vluxseg6ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7816 /* vluxseg7ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7831 /* vluxseg7ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7846 /* vluxseg7ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7861 /* vluxseg7ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7875 /* vluxseg8ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7890 /* vluxseg8ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7905 /* vluxseg8ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7920 /* vluxseg8ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 7934 /* vmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 7943 /* vmacc.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8009 /* vmadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8018 /* vmadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8048 /* vmax.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8056 /* vmax.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8064 /* vmaxu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8073 /* vmaxu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8123 /* vmfeq.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 8132 /* vmfeq.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 8141 /* vmfge.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 8150 /* vmfge.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 8159 /* vmfgt.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 8168 /* vmfgt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 8177 /* vmfle.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 8186 /* vmfle.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 8195 /* vmflt.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 8204 /* vmflt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 8213 /* vmfne.vf */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 8222 /* vmfne.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV_HasStdExtF },
  { 8231 /* vmin.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8239 /* vmin.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8247 /* vminu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8256 /* vminu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8356 /* vmsbf.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8364 /* vmseq.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8373 /* vmseq.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8382 /* vmseq.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8399 /* vmsge.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8408 /* vmsge.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8417 /* vmsge.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8417 /* vmsge.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8426 /* vmsgeu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8436 /* vmsgeu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8446 /* vmsgeu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8446 /* vmsgeu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8456 /* vmsgt.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8465 /* vmsgt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8474 /* vmsgt.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8483 /* vmsgtu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8493 /* vmsgtu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8503 /* vmsgtu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8513 /* vmsif.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8521 /* vmsle.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8530 /* vmsle.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8539 /* vmsle.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8548 /* vmsleu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8558 /* vmsleu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8568 /* vmsleu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8578 /* vmslt.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8587 /* vmslt.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8596 /* vmslt.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8605 /* vmsltu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8615 /* vmsltu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8625 /* vmsltu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8635 /* vmsne.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8644 /* vmsne.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8653 /* vmsne.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8662 /* vmsof.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8670 /* vmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8678 /* vmul.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8686 /* vmulh.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8695 /* vmulh.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8704 /* vmulhsu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8715 /* vmulhsu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8726 /* vmulhu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8736 /* vmulhu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8837 /* vnclip.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8847 /* vnclip.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8857 /* vnclip.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8867 /* vnclipu.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8878 /* vnclipu.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8889 /* vnclipu.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8900 /* vncvt.x.x.w */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8912 /* vneg.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8919 /* vnmsac.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8929 /* vnmsac.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8939 /* vnmsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8949 /* vnmsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8959 /* vnot.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8966 /* vnsra.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8975 /* vnsra.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8984 /* vnsra.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 8993 /* vnsrl.wi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9002 /* vnsrl.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9011 /* vnsrl.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9020 /* vor.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9027 /* vor.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9034 /* vor.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9041 /* vpopc.m */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9049 /* vredand.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9060 /* vredmax.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9071 /* vredmaxu.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9083 /* vredmin.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9094 /* vredminu.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9106 /* vredor.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9116 /* vredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9127 /* vredxor.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9138 /* vrem.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9146 /* vrem.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9154 /* vremu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9163 /* vremu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9172 /* vrgather.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9184 /* vrgather.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9196 /* vrgather.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9208 /* vrgatherei16.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9224 /* vrsub.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9233 /* vrsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9270 /* vsadd.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9279 /* vsadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9288 /* vsadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9297 /* vsaddu.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9307 /* vsaddu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9317 /* vsaddu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9352 /* vse16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9360 /* vse32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9368 /* vse64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9376 /* vse8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9383 /* vsetivli */, 4 /* 2 */, MCK_VTypeI, AMFBS_HasStdExtV },
  { 9399 /* vsetvli */, 4 /* 2 */, MCK_VTypeI, AMFBS_HasStdExtV },
  { 9407 /* vsext.vf2 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9417 /* vsext.vf4 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9427 /* vsext.vf8 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9437 /* vslide1down.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9452 /* vslide1up.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9465 /* vslidedown.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9479 /* vslidedown.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9493 /* vslideup.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9505 /* vslideup.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9517 /* vsll.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9525 /* vsll.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9533 /* vsll.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9541 /* vsmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9550 /* vsmul.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9559 /* vsoxei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9570 /* vsoxei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9581 /* vsoxei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9592 /* vsoxei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 9602 /* vsoxseg2ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9617 /* vsoxseg2ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9632 /* vsoxseg2ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9647 /* vsoxseg2ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9661 /* vsoxseg3ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9676 /* vsoxseg3ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9691 /* vsoxseg3ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9706 /* vsoxseg3ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9720 /* vsoxseg4ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9735 /* vsoxseg4ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9750 /* vsoxseg4ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9765 /* vsoxseg4ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9779 /* vsoxseg5ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9794 /* vsoxseg5ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9809 /* vsoxseg5ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9824 /* vsoxseg5ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9838 /* vsoxseg6ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9853 /* vsoxseg6ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9868 /* vsoxseg6ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9883 /* vsoxseg6ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9897 /* vsoxseg7ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9912 /* vsoxseg7ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9927 /* vsoxseg7ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9942 /* vsoxseg7ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9956 /* vsoxseg8ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9971 /* vsoxseg8ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 9986 /* vsoxseg8ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10001 /* vsoxseg8ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10015 /* vsra.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10023 /* vsra.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10031 /* vsra.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10039 /* vsrl.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10047 /* vsrl.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10055 /* vsrl.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10063 /* vsse16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10072 /* vsse32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10081 /* vsse64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10090 /* vsse8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10098 /* vsseg2e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10110 /* vsseg2e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10122 /* vsseg2e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10134 /* vsseg2e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10145 /* vsseg3e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10157 /* vsseg3e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10169 /* vsseg3e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10181 /* vsseg3e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10192 /* vsseg4e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10204 /* vsseg4e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10216 /* vsseg4e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10228 /* vsseg4e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10239 /* vsseg5e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10251 /* vsseg5e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10263 /* vsseg5e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10275 /* vsseg5e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10286 /* vsseg6e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10298 /* vsseg6e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10310 /* vsseg6e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10322 /* vsseg6e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10333 /* vsseg7e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10345 /* vsseg7e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10357 /* vsseg7e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10369 /* vsseg7e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10380 /* vsseg8e16.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10392 /* vsseg8e32.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10404 /* vsseg8e64.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10416 /* vsseg8e8.v */, 16 /* 4 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10427 /* vssra.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10436 /* vssra.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10445 /* vssra.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10454 /* vssrl.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10463 /* vssrl.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10472 /* vssrl.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10481 /* vssseg2e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10494 /* vssseg2e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10507 /* vssseg2e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10520 /* vssseg2e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10532 /* vssseg3e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10545 /* vssseg3e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10558 /* vssseg3e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10571 /* vssseg3e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10583 /* vssseg4e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10596 /* vssseg4e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10609 /* vssseg4e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10622 /* vssseg4e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10634 /* vssseg5e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10647 /* vssseg5e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10660 /* vssseg5e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10673 /* vssseg5e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10685 /* vssseg6e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10698 /* vssseg6e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10711 /* vssseg6e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10724 /* vssseg6e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10736 /* vssseg7e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10749 /* vssseg7e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10762 /* vssseg7e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10775 /* vssseg7e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10787 /* vssseg8e16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10800 /* vssseg8e32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10813 /* vssseg8e64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10826 /* vssseg8e8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10838 /* vssub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10847 /* vssub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10856 /* vssubu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10866 /* vssubu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10876 /* vsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10884 /* vsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10892 /* vsuxei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10903 /* vsuxei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10914 /* vsuxei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10925 /* vsuxei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 10935 /* vsuxseg2ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10950 /* vsuxseg2ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10965 /* vsuxseg2ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10980 /* vsuxseg2ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 10994 /* vsuxseg3ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11009 /* vsuxseg3ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11024 /* vsuxseg3ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11039 /* vsuxseg3ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11053 /* vsuxseg4ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11068 /* vsuxseg4ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11083 /* vsuxseg4ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11098 /* vsuxseg4ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11112 /* vsuxseg5ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11127 /* vsuxseg5ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11142 /* vsuxseg5ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11157 /* vsuxseg5ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11171 /* vsuxseg6ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11186 /* vsuxseg6ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11201 /* vsuxseg6ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11216 /* vsuxseg6ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11230 /* vsuxseg7ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11245 /* vsuxseg7ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11260 /* vsuxseg7ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11275 /* vsuxseg7ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11289 /* vsuxseg8ei16.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11304 /* vsuxseg8ei32.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11319 /* vsuxseg8ei64.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11334 /* vsuxseg8ei8.v */, 32 /* 5 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtZvlsseg },
  { 11348 /* vwadd.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11357 /* vwadd.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11366 /* vwadd.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11375 /* vwadd.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11384 /* vwaddu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11394 /* vwaddu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11404 /* vwaddu.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11414 /* vwaddu.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11424 /* vwcvt.x.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11436 /* vwcvtu.x.x.v */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11449 /* vwmacc.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11459 /* vwmacc.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11469 /* vwmaccsu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11481 /* vwmaccsu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11493 /* vwmaccu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11504 /* vwmaccu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11515 /* vwmaccus.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11527 /* vwmul.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11536 /* vwmul.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11545 /* vwmulsu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11556 /* vwmulsu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11567 /* vwmulu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11577 /* vwmulu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11587 /* vwredsum.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11599 /* vwredsumu.vs */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11612 /* vwsub.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11621 /* vwsub.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11630 /* vwsub.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11639 /* vwsub.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11648 /* vwsubu.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11658 /* vwsubu.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11668 /* vwsubu.wv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11678 /* vwsubu.wx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11688 /* vxor.vi */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11696 /* vxor.vv */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11704 /* vxor.vx */, 8 /* 3 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11712 /* vzext.vf2 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11722 /* vzext.vf4 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
  { 11732 /* vzext.vf8 */, 4 /* 2 */, MCK_RVVMaskRegOpOperand, AMFBS_HasStdExtV },
};

OperandMatchResultTy RISCVAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_AtomicMemOpOperand:
    return parseAtomicMemOp(Operands);
  case MCK_BareSymbol:
    return parseBareSymbol(Operands);
  case MCK_CSRSystemRegister:
    return parseCSRSystemRegister(Operands);
  case MCK_CallSymbol:
    return parseCallSymbol(Operands);
  case MCK_PseudoJumpSymbol:
    return parsePseudoJumpSymbol(Operands);
  case MCK_SImm21Lsb0JAL:
    return parseJALOffset(Operands);
  case MCK_TPRelAddSymbol:
    return parseOperandWithModifier(Operands);
  case MCK_RVVMaskRegOpOperand:
    return parseMaskReg(Operands);
  case MCK_VTypeI:
    return parseVTypeI(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

OperandMatchResultTy RISCVAsmParser::
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

static std::string RISCVMnemonicSpellCheck(StringRef S, const FeatureBitset &FBS, unsigned VariantID) {
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

static bool RISCVCheckMnemonic(StringRef Mnemonic,
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

