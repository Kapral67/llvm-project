/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t LanaiMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
    SmallVectorImpl<MCFixup> &Fixups,
    const MCSubtargetInfo &STI) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(268632064),	// ADDC_F_I_HI
    UINT64_C(268566528),	// ADDC_F_I_LO
    UINT64_C(3221356800),	// ADDC_F_R
    UINT64_C(268500992),	// ADDC_I_HI
    UINT64_C(268435456),	// ADDC_I_LO
    UINT64_C(3221225728),	// ADDC_R
    UINT64_C(196608),	// ADD_F_I_HI
    UINT64_C(131072),	// ADD_F_I_LO
    UINT64_C(3221356544),	// ADD_F_R
    UINT64_C(65536),	// ADD_I_HI
    UINT64_C(0),	// ADD_I_LO
    UINT64_C(3221225472),	// ADD_R
    UINT64_C(1073938432),	// AND_F_I_HI
    UINT64_C(1073872896),	// AND_F_I_LO
    UINT64_C(3221357568),	// AND_F_R
    UINT64_C(1073807360),	// AND_I_HI
    UINT64_C(1073741824),	// AND_I_LO
    UINT64_C(3221226496),	// AND_R
    UINT64_C(3758096384),	// BRCC
    UINT64_C(3238003968),	// BRIND_CC
    UINT64_C(3238003968),	// BRIND_CCA
    UINT64_C(3774873602),	// BRR
    UINT64_C(3758096384),	// BT
    UINT64_C(3238003968),	// JR
    UINT64_C(4026531840),	// LDADDR
    UINT64_C(4026744832),	// LDBs_RI
    UINT64_C(2684354564),	// LDBs_RR
    UINT64_C(4026748928),	// LDBz_RI
    UINT64_C(2684354565),	// LDBz_RR
    UINT64_C(4026728448),	// LDHs_RI
    UINT64_C(2684354560),	// LDHs_RR
    UINT64_C(4026732544),	// LDHz_RI
    UINT64_C(2684354561),	// LDHz_RR
    UINT64_C(2147483648),	// LDW_RI
    UINT64_C(2684354562),	// LDW_RR
    UINT64_C(2684354563),	// LDWz_RR
    UINT64_C(3489660930),	// LEADZ
    UINT64_C(2),	// LOG0
    UINT64_C(3),	// LOG1
    UINT64_C(4),	// LOG2
    UINT64_C(5),	// LOG3
    UINT64_C(6),	// LOG4
    UINT64_C(65536),	// MOVHI
    UINT64_C(1),	// NOP
    UINT64_C(1342373888),	// OR_F_I_HI
    UINT64_C(1342308352),	// OR_F_I_LO
    UINT64_C(3221357824),	// OR_F_R
    UINT64_C(1342242816),	// OR_I_HI
    UINT64_C(1342177280),	// OR_I_LO
    UINT64_C(3221226752),	// OR_R
    UINT64_C(3489660929),	// POPC
    UINT64_C(2165768188),	// RET
    UINT64_C(1879244800),	// SA_F_I
    UINT64_C(1879113728),	// SA_I
    UINT64_C(3758096386),	// SCC
    UINT64_C(3221227264),	// SELECT
    UINT64_C(537067520),	// SFSUB_F_RI_HI
    UINT64_C(537001984),	// SFSUB_F_RI_LO
    UINT64_C(3221357056),	// SFSUB_F_RR
    UINT64_C(3221358464),	// SHL_F_R
    UINT64_C(3221227392),	// SHL_R
    UINT64_C(4026662912),	// SLI
    UINT64_C(1879179264),	// SL_F_I
    UINT64_C(1879048192),	// SL_I
    UINT64_C(3221358528),	// SRA_F_R
    UINT64_C(3221227456),	// SRA_R
    UINT64_C(3221358464),	// SRL_F_R
    UINT64_C(3221227392),	// SRL_R
    UINT64_C(4026597376),	// STADDR
    UINT64_C(4026753024),	// STB_RI
    UINT64_C(2952790020),	// STB_RR
    UINT64_C(4026736640),	// STH_RI
    UINT64_C(2952790016),	// STH_RR
    UINT64_C(805502976),	// SUBB_F_I_HI
    UINT64_C(805437440),	// SUBB_F_I_LO
    UINT64_C(3221357312),	// SUBB_F_R
    UINT64_C(805371904),	// SUBB_I_HI
    UINT64_C(805306368),	// SUBB_I_LO
    UINT64_C(3221226240),	// SUBB_R
    UINT64_C(537067520),	// SUB_F_I_HI
    UINT64_C(537001984),	// SUB_F_I_LO
    UINT64_C(3221357056),	// SUB_F_R
    UINT64_C(536936448),	// SUB_I_HI
    UINT64_C(536870912),	// SUB_I_LO
    UINT64_C(3221225984),	// SUB_R
    UINT64_C(2415919104),	// SW_RI
    UINT64_C(2952790018),	// SW_RR
    UINT64_C(3489660931),	// TRAILZ
    UINT64_C(1610809344),	// XOR_F_I_HI
    UINT64_C(1610743808),	// XOR_F_I_LO
    UINT64_C(3221358080),	// XOR_F_R
    UINT64_C(1610678272),	// XOR_I_HI
    UINT64_C(1610612736),	// XOR_I_LO
    UINT64_C(3221227008),	// XOR_R
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case Lanai::LOG0:
    case Lanai::LOG1:
    case Lanai::LOG2:
    case Lanai::LOG3:
    case Lanai::LOG4:
    case Lanai::NOP:
    case Lanai::RET: {
      break;
    }
    case Lanai::BRR: {
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(14)) << 24;
      Value |= (op & UINT64_C(1));
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(65532);
      Value |= op;
      break;
    }
    case Lanai::STB_RI:
    case Lanai::STH_RI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 11;
      Value |= op;
      // op: Q
      op = getSplsOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 10;
      Value |= op;
      // op: dst
      op = getSplsOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(126976)) << 6;
      Value |= (op & UINT64_C(1023));
      Value = adjustPqBitsSpls(MI, Value, STI);
      break;
    }
    case Lanai::LDBs_RI:
    case Lanai::LDBz_RI:
    case Lanai::LDHs_RI:
    case Lanai::LDHz_RI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 11;
      Value |= op;
      // op: Q
      op = getSplsOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 10;
      Value |= op;
      // op: src
      op = getSplsOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(126976)) << 6;
      Value |= (op & UINT64_C(1023));
      Value = adjustPqBitsSpls(MI, Value, STI);
      break;
    }
    case Lanai::SW_RI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 17;
      Value |= op;
      // op: Q
      op = getRiMemoryOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 16;
      Value |= op;
      // op: dst
      op = getRiMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(8126464));
      Value |= (op & UINT64_C(65535));
      Value = adjustPqBitsRmAndRrm(MI, Value, STI);
      break;
    }
    case Lanai::LDW_RI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 17;
      Value |= op;
      // op: Q
      op = getRiMemoryOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 16;
      Value |= op;
      // op: src
      op = getRiMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(8126464));
      Value |= (op & UINT64_C(65535));
      Value = adjustPqBitsRmAndRrm(MI, Value, STI);
      break;
    }
    case Lanai::STB_RR:
    case Lanai::STH_RR:
    case Lanai::SW_RR: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 17;
      Value |= op;
      // op: Q
      op = getRrMemoryOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 16;
      Value |= op;
      // op: dst
      op = getRrMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1015808)) << 3;
      Value |= (op & UINT64_C(31744)) << 1;
      Value |= (op & UINT64_C(255)) << 3;
      Value = adjustPqBitsRmAndRrm(MI, Value, STI);
      break;
    }
    case Lanai::LDBs_RR:
    case Lanai::LDBz_RR:
    case Lanai::LDHs_RR:
    case Lanai::LDHz_RR:
    case Lanai::LDW_RR:
    case Lanai::LDWz_RR: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: P
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 17;
      Value |= op;
      // op: Q
      op = getRrMemoryOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1);
      op <<= 16;
      Value |= op;
      // op: src
      op = getRrMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1015808)) << 3;
      Value |= (op & UINT64_C(31744)) << 1;
      Value |= (op & UINT64_C(255)) << 3;
      Value = adjustPqBitsRmAndRrm(MI, Value, STI);
      break;
    }
    case Lanai::LEADZ:
    case Lanai::POPC:
    case Lanai::TRAILZ: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      break;
    }
    case Lanai::ADDC_F_R:
    case Lanai::ADDC_R:
    case Lanai::ADD_F_R:
    case Lanai::ADD_R:
    case Lanai::AND_F_R:
    case Lanai::AND_R:
    case Lanai::OR_F_R:
    case Lanai::OR_R:
    case Lanai::SELECT:
    case Lanai::SHL_F_R:
    case Lanai::SHL_R:
    case Lanai::SRA_F_R:
    case Lanai::SRA_R:
    case Lanai::SRL_F_R:
    case Lanai::SRL_R:
    case Lanai::SUBB_F_R:
    case Lanai::SUBB_R:
    case Lanai::SUB_F_R:
    case Lanai::SUB_R:
    case Lanai::XOR_F_R:
    case Lanai::XOR_R: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: Rs2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 11;
      Value |= op;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 16;
      Value |= (op & UINT64_C(14)) >> 1;
      break;
    }
    case Lanai::ADDC_F_I_HI:
    case Lanai::ADDC_F_I_LO:
    case Lanai::ADDC_I_HI:
    case Lanai::ADDC_I_LO:
    case Lanai::ADD_F_I_HI:
    case Lanai::ADD_F_I_LO:
    case Lanai::ADD_I_HI:
    case Lanai::ADD_I_LO:
    case Lanai::AND_F_I_HI:
    case Lanai::AND_F_I_LO:
    case Lanai::AND_I_HI:
    case Lanai::AND_I_LO:
    case Lanai::OR_F_I_HI:
    case Lanai::OR_F_I_LO:
    case Lanai::OR_I_HI:
    case Lanai::OR_I_LO:
    case Lanai::SA_F_I:
    case Lanai::SA_I:
    case Lanai::SL_F_I:
    case Lanai::SL_I:
    case Lanai::SUBB_F_I_HI:
    case Lanai::SUBB_F_I_LO:
    case Lanai::SUBB_I_HI:
    case Lanai::SUBB_I_LO:
    case Lanai::SUB_F_I_HI:
    case Lanai::SUB_F_I_LO:
    case Lanai::SUB_I_HI:
    case Lanai::SUB_I_LO:
    case Lanai::XOR_F_I_HI:
    case Lanai::XOR_F_I_LO:
    case Lanai::XOR_I_HI:
    case Lanai::XOR_I_LO: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(65535);
      Value |= op;
      break;
    }
    case Lanai::STADDR: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(2031616)) << 2;
      Value |= (op & UINT64_C(65535));
      break;
    }
    case Lanai::SLI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(2031616)) << 2;
      Value |= (op & UINT64_C(65535));
      break;
    }
    case Lanai::MOVHI: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(65535);
      Value |= op;
      break;
    }
    case Lanai::LDADDR: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 23;
      Value |= op;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(2031616)) << 2;
      Value |= (op & UINT64_C(65535));
      break;
    }
    case Lanai::BRIND_CC: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 16;
      Value |= (op & UINT64_C(14)) >> 1;
      break;
    }
    case Lanai::SCC: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(14)) << 24;
      Value |= (op & UINT64_C(1));
      break;
    }
    case Lanai::SFSUB_F_RR: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: Rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 11;
      Value |= op;
      break;
    }
    case Lanai::BRIND_CCA: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: Rs2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 11;
      Value |= op;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 16;
      Value |= (op & UINT64_C(14)) >> 1;
      break;
    }
    case Lanai::SFSUB_F_RI_HI:
    case Lanai::SFSUB_F_RI_LO: {
      // op: Rs1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 18;
      Value |= op;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(65535);
      Value |= op;
      break;
    }
    case Lanai::JR: {
      // op: Rs2
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 11;
      Value |= op;
      break;
    }
    case Lanai::BT: {
      // op: addr
      op = getBranchTargetOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(33554428);
      Value |= op;
      break;
    }
    case Lanai::BRCC: {
      // op: addr
      op = getBranchTargetOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(33554428);
      Value |= op;
      // op: DDDI
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(14)) << 24;
      Value |= (op & UINT64_C(1));
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str());
  }
  return Value;
}

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  nullptr
};

#endif // NDEBUG
FeatureBitset LanaiMCCodeEmitter::
computeAvailableFeatures(const FeatureBitset &FB) const {
  FeatureBitset Features;
  return Features;
}

#ifndef NDEBUG
// Feature bitsets.
enum : uint8_t {
  CEFBS_None,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // CEFBS_None
};
#endif // NDEBUG

void LanaiMCCodeEmitter::verifyInstructionPredicates(
    const MCInst &Inst, const FeatureBitset &AvailableFeatures) const {
#ifndef NDEBUG
  static uint8_t RequiredFeaturesRefs[] = {
    CEFBS_None, // PHI = 0
    CEFBS_None, // INLINEASM = 1
    CEFBS_None, // INLINEASM_BR = 2
    CEFBS_None, // CFI_INSTRUCTION = 3
    CEFBS_None, // EH_LABEL = 4
    CEFBS_None, // GC_LABEL = 5
    CEFBS_None, // ANNOTATION_LABEL = 6
    CEFBS_None, // KILL = 7
    CEFBS_None, // EXTRACT_SUBREG = 8
    CEFBS_None, // INSERT_SUBREG = 9
    CEFBS_None, // IMPLICIT_DEF = 10
    CEFBS_None, // SUBREG_TO_REG = 11
    CEFBS_None, // COPY_TO_REGCLASS = 12
    CEFBS_None, // DBG_VALUE = 13
    CEFBS_None, // DBG_INSTR_REF = 14
    CEFBS_None, // DBG_LABEL = 15
    CEFBS_None, // REG_SEQUENCE = 16
    CEFBS_None, // COPY = 17
    CEFBS_None, // BUNDLE = 18
    CEFBS_None, // LIFETIME_START = 19
    CEFBS_None, // LIFETIME_END = 20
    CEFBS_None, // PSEUDO_PROBE = 21
    CEFBS_None, // STACKMAP = 22
    CEFBS_None, // FENTRY_CALL = 23
    CEFBS_None, // PATCHPOINT = 24
    CEFBS_None, // LOAD_STACK_GUARD = 25
    CEFBS_None, // PREALLOCATED_SETUP = 26
    CEFBS_None, // PREALLOCATED_ARG = 27
    CEFBS_None, // STATEPOINT = 28
    CEFBS_None, // LOCAL_ESCAPE = 29
    CEFBS_None, // FAULTING_OP = 30
    CEFBS_None, // PATCHABLE_OP = 31
    CEFBS_None, // PATCHABLE_FUNCTION_ENTER = 32
    CEFBS_None, // PATCHABLE_RET = 33
    CEFBS_None, // PATCHABLE_FUNCTION_EXIT = 34
    CEFBS_None, // PATCHABLE_TAIL_CALL = 35
    CEFBS_None, // PATCHABLE_EVENT_CALL = 36
    CEFBS_None, // PATCHABLE_TYPED_EVENT_CALL = 37
    CEFBS_None, // ICALL_BRANCH_FUNNEL = 38
    CEFBS_None, // G_ASSERT_ZEXT = 39
    CEFBS_None, // G_ADD = 40
    CEFBS_None, // G_SUB = 41
    CEFBS_None, // G_MUL = 42
    CEFBS_None, // G_SDIV = 43
    CEFBS_None, // G_UDIV = 44
    CEFBS_None, // G_SREM = 45
    CEFBS_None, // G_UREM = 46
    CEFBS_None, // G_AND = 47
    CEFBS_None, // G_OR = 48
    CEFBS_None, // G_XOR = 49
    CEFBS_None, // G_IMPLICIT_DEF = 50
    CEFBS_None, // G_PHI = 51
    CEFBS_None, // G_FRAME_INDEX = 52
    CEFBS_None, // G_GLOBAL_VALUE = 53
    CEFBS_None, // G_EXTRACT = 54
    CEFBS_None, // G_UNMERGE_VALUES = 55
    CEFBS_None, // G_INSERT = 56
    CEFBS_None, // G_MERGE_VALUES = 57
    CEFBS_None, // G_BUILD_VECTOR = 58
    CEFBS_None, // G_BUILD_VECTOR_TRUNC = 59
    CEFBS_None, // G_CONCAT_VECTORS = 60
    CEFBS_None, // G_PTRTOINT = 61
    CEFBS_None, // G_INTTOPTR = 62
    CEFBS_None, // G_BITCAST = 63
    CEFBS_None, // G_FREEZE = 64
    CEFBS_None, // G_INTRINSIC_TRUNC = 65
    CEFBS_None, // G_INTRINSIC_ROUND = 66
    CEFBS_None, // G_INTRINSIC_LRINT = 67
    CEFBS_None, // G_INTRINSIC_ROUNDEVEN = 68
    CEFBS_None, // G_READCYCLECOUNTER = 69
    CEFBS_None, // G_LOAD = 70
    CEFBS_None, // G_SEXTLOAD = 71
    CEFBS_None, // G_ZEXTLOAD = 72
    CEFBS_None, // G_INDEXED_LOAD = 73
    CEFBS_None, // G_INDEXED_SEXTLOAD = 74
    CEFBS_None, // G_INDEXED_ZEXTLOAD = 75
    CEFBS_None, // G_STORE = 76
    CEFBS_None, // G_INDEXED_STORE = 77
    CEFBS_None, // G_ATOMIC_CMPXCHG_WITH_SUCCESS = 78
    CEFBS_None, // G_ATOMIC_CMPXCHG = 79
    CEFBS_None, // G_ATOMICRMW_XCHG = 80
    CEFBS_None, // G_ATOMICRMW_ADD = 81
    CEFBS_None, // G_ATOMICRMW_SUB = 82
    CEFBS_None, // G_ATOMICRMW_AND = 83
    CEFBS_None, // G_ATOMICRMW_NAND = 84
    CEFBS_None, // G_ATOMICRMW_OR = 85
    CEFBS_None, // G_ATOMICRMW_XOR = 86
    CEFBS_None, // G_ATOMICRMW_MAX = 87
    CEFBS_None, // G_ATOMICRMW_MIN = 88
    CEFBS_None, // G_ATOMICRMW_UMAX = 89
    CEFBS_None, // G_ATOMICRMW_UMIN = 90
    CEFBS_None, // G_ATOMICRMW_FADD = 91
    CEFBS_None, // G_ATOMICRMW_FSUB = 92
    CEFBS_None, // G_FENCE = 93
    CEFBS_None, // G_BRCOND = 94
    CEFBS_None, // G_BRINDIRECT = 95
    CEFBS_None, // G_INTRINSIC = 96
    CEFBS_None, // G_INTRINSIC_W_SIDE_EFFECTS = 97
    CEFBS_None, // G_ANYEXT = 98
    CEFBS_None, // G_TRUNC = 99
    CEFBS_None, // G_CONSTANT = 100
    CEFBS_None, // G_FCONSTANT = 101
    CEFBS_None, // G_VASTART = 102
    CEFBS_None, // G_VAARG = 103
    CEFBS_None, // G_SEXT = 104
    CEFBS_None, // G_SEXT_INREG = 105
    CEFBS_None, // G_ZEXT = 106
    CEFBS_None, // G_SHL = 107
    CEFBS_None, // G_LSHR = 108
    CEFBS_None, // G_ASHR = 109
    CEFBS_None, // G_FSHL = 110
    CEFBS_None, // G_FSHR = 111
    CEFBS_None, // G_ICMP = 112
    CEFBS_None, // G_FCMP = 113
    CEFBS_None, // G_SELECT = 114
    CEFBS_None, // G_UADDO = 115
    CEFBS_None, // G_UADDE = 116
    CEFBS_None, // G_USUBO = 117
    CEFBS_None, // G_USUBE = 118
    CEFBS_None, // G_SADDO = 119
    CEFBS_None, // G_SADDE = 120
    CEFBS_None, // G_SSUBO = 121
    CEFBS_None, // G_SSUBE = 122
    CEFBS_None, // G_UMULO = 123
    CEFBS_None, // G_SMULO = 124
    CEFBS_None, // G_UMULH = 125
    CEFBS_None, // G_SMULH = 126
    CEFBS_None, // G_UADDSAT = 127
    CEFBS_None, // G_SADDSAT = 128
    CEFBS_None, // G_USUBSAT = 129
    CEFBS_None, // G_SSUBSAT = 130
    CEFBS_None, // G_USHLSAT = 131
    CEFBS_None, // G_SSHLSAT = 132
    CEFBS_None, // G_SMULFIX = 133
    CEFBS_None, // G_UMULFIX = 134
    CEFBS_None, // G_SMULFIXSAT = 135
    CEFBS_None, // G_UMULFIXSAT = 136
    CEFBS_None, // G_SDIVFIX = 137
    CEFBS_None, // G_UDIVFIX = 138
    CEFBS_None, // G_SDIVFIXSAT = 139
    CEFBS_None, // G_UDIVFIXSAT = 140
    CEFBS_None, // G_FADD = 141
    CEFBS_None, // G_FSUB = 142
    CEFBS_None, // G_FMUL = 143
    CEFBS_None, // G_FMA = 144
    CEFBS_None, // G_FMAD = 145
    CEFBS_None, // G_FDIV = 146
    CEFBS_None, // G_FREM = 147
    CEFBS_None, // G_FPOW = 148
    CEFBS_None, // G_FPOWI = 149
    CEFBS_None, // G_FEXP = 150
    CEFBS_None, // G_FEXP2 = 151
    CEFBS_None, // G_FLOG = 152
    CEFBS_None, // G_FLOG2 = 153
    CEFBS_None, // G_FLOG10 = 154
    CEFBS_None, // G_FNEG = 155
    CEFBS_None, // G_FPEXT = 156
    CEFBS_None, // G_FPTRUNC = 157
    CEFBS_None, // G_FPTOSI = 158
    CEFBS_None, // G_FPTOUI = 159
    CEFBS_None, // G_SITOFP = 160
    CEFBS_None, // G_UITOFP = 161
    CEFBS_None, // G_FABS = 162
    CEFBS_None, // G_FCOPYSIGN = 163
    CEFBS_None, // G_FCANONICALIZE = 164
    CEFBS_None, // G_FMINNUM = 165
    CEFBS_None, // G_FMAXNUM = 166
    CEFBS_None, // G_FMINNUM_IEEE = 167
    CEFBS_None, // G_FMAXNUM_IEEE = 168
    CEFBS_None, // G_FMINIMUM = 169
    CEFBS_None, // G_FMAXIMUM = 170
    CEFBS_None, // G_PTR_ADD = 171
    CEFBS_None, // G_PTRMASK = 172
    CEFBS_None, // G_SMIN = 173
    CEFBS_None, // G_SMAX = 174
    CEFBS_None, // G_UMIN = 175
    CEFBS_None, // G_UMAX = 176
    CEFBS_None, // G_ABS = 177
    CEFBS_None, // G_BR = 178
    CEFBS_None, // G_BRJT = 179
    CEFBS_None, // G_INSERT_VECTOR_ELT = 180
    CEFBS_None, // G_EXTRACT_VECTOR_ELT = 181
    CEFBS_None, // G_SHUFFLE_VECTOR = 182
    CEFBS_None, // G_CTTZ = 183
    CEFBS_None, // G_CTTZ_ZERO_UNDEF = 184
    CEFBS_None, // G_CTLZ = 185
    CEFBS_None, // G_CTLZ_ZERO_UNDEF = 186
    CEFBS_None, // G_CTPOP = 187
    CEFBS_None, // G_BSWAP = 188
    CEFBS_None, // G_BITREVERSE = 189
    CEFBS_None, // G_FCEIL = 190
    CEFBS_None, // G_FCOS = 191
    CEFBS_None, // G_FSIN = 192
    CEFBS_None, // G_FSQRT = 193
    CEFBS_None, // G_FFLOOR = 194
    CEFBS_None, // G_FRINT = 195
    CEFBS_None, // G_FNEARBYINT = 196
    CEFBS_None, // G_ADDRSPACE_CAST = 197
    CEFBS_None, // G_BLOCK_ADDR = 198
    CEFBS_None, // G_JUMP_TABLE = 199
    CEFBS_None, // G_DYN_STACKALLOC = 200
    CEFBS_None, // G_STRICT_FADD = 201
    CEFBS_None, // G_STRICT_FSUB = 202
    CEFBS_None, // G_STRICT_FMUL = 203
    CEFBS_None, // G_STRICT_FDIV = 204
    CEFBS_None, // G_STRICT_FREM = 205
    CEFBS_None, // G_STRICT_FMA = 206
    CEFBS_None, // G_STRICT_FSQRT = 207
    CEFBS_None, // G_READ_REGISTER = 208
    CEFBS_None, // G_WRITE_REGISTER = 209
    CEFBS_None, // G_MEMCPY = 210
    CEFBS_None, // G_MEMMOVE = 211
    CEFBS_None, // G_MEMSET = 212
    CEFBS_None, // G_VECREDUCE_SEQ_FADD = 213
    CEFBS_None, // G_VECREDUCE_SEQ_FMUL = 214
    CEFBS_None, // G_VECREDUCE_FADD = 215
    CEFBS_None, // G_VECREDUCE_FMUL = 216
    CEFBS_None, // G_VECREDUCE_FMAX = 217
    CEFBS_None, // G_VECREDUCE_FMIN = 218
    CEFBS_None, // G_VECREDUCE_ADD = 219
    CEFBS_None, // G_VECREDUCE_MUL = 220
    CEFBS_None, // G_VECREDUCE_AND = 221
    CEFBS_None, // G_VECREDUCE_OR = 222
    CEFBS_None, // G_VECREDUCE_XOR = 223
    CEFBS_None, // G_VECREDUCE_SMAX = 224
    CEFBS_None, // G_VECREDUCE_SMIN = 225
    CEFBS_None, // G_VECREDUCE_UMAX = 226
    CEFBS_None, // G_VECREDUCE_UMIN = 227
    CEFBS_None, // ADJCALLSTACKDOWN = 228
    CEFBS_None, // ADJCALLSTACKUP = 229
    CEFBS_None, // ADJDYNALLOC = 230
    CEFBS_None, // CALL = 231
    CEFBS_None, // CALLR = 232
    CEFBS_None, // ADDC_F_I_HI = 233
    CEFBS_None, // ADDC_F_I_LO = 234
    CEFBS_None, // ADDC_F_R = 235
    CEFBS_None, // ADDC_I_HI = 236
    CEFBS_None, // ADDC_I_LO = 237
    CEFBS_None, // ADDC_R = 238
    CEFBS_None, // ADD_F_I_HI = 239
    CEFBS_None, // ADD_F_I_LO = 240
    CEFBS_None, // ADD_F_R = 241
    CEFBS_None, // ADD_I_HI = 242
    CEFBS_None, // ADD_I_LO = 243
    CEFBS_None, // ADD_R = 244
    CEFBS_None, // AND_F_I_HI = 245
    CEFBS_None, // AND_F_I_LO = 246
    CEFBS_None, // AND_F_R = 247
    CEFBS_None, // AND_I_HI = 248
    CEFBS_None, // AND_I_LO = 249
    CEFBS_None, // AND_R = 250
    CEFBS_None, // BRCC = 251
    CEFBS_None, // BRIND_CC = 252
    CEFBS_None, // BRIND_CCA = 253
    CEFBS_None, // BRR = 254
    CEFBS_None, // BT = 255
    CEFBS_None, // JR = 256
    CEFBS_None, // LDADDR = 257
    CEFBS_None, // LDBs_RI = 258
    CEFBS_None, // LDBs_RR = 259
    CEFBS_None, // LDBz_RI = 260
    CEFBS_None, // LDBz_RR = 261
    CEFBS_None, // LDHs_RI = 262
    CEFBS_None, // LDHs_RR = 263
    CEFBS_None, // LDHz_RI = 264
    CEFBS_None, // LDHz_RR = 265
    CEFBS_None, // LDW_RI = 266
    CEFBS_None, // LDW_RR = 267
    CEFBS_None, // LDWz_RR = 268
    CEFBS_None, // LEADZ = 269
    CEFBS_None, // LOG0 = 270
    CEFBS_None, // LOG1 = 271
    CEFBS_None, // LOG2 = 272
    CEFBS_None, // LOG3 = 273
    CEFBS_None, // LOG4 = 274
    CEFBS_None, // MOVHI = 275
    CEFBS_None, // NOP = 276
    CEFBS_None, // OR_F_I_HI = 277
    CEFBS_None, // OR_F_I_LO = 278
    CEFBS_None, // OR_F_R = 279
    CEFBS_None, // OR_I_HI = 280
    CEFBS_None, // OR_I_LO = 281
    CEFBS_None, // OR_R = 282
    CEFBS_None, // POPC = 283
    CEFBS_None, // RET = 284
    CEFBS_None, // SA_F_I = 285
    CEFBS_None, // SA_I = 286
    CEFBS_None, // SCC = 287
    CEFBS_None, // SELECT = 288
    CEFBS_None, // SFSUB_F_RI_HI = 289
    CEFBS_None, // SFSUB_F_RI_LO = 290
    CEFBS_None, // SFSUB_F_RR = 291
    CEFBS_None, // SHL_F_R = 292
    CEFBS_None, // SHL_R = 293
    CEFBS_None, // SLI = 294
    CEFBS_None, // SL_F_I = 295
    CEFBS_None, // SL_I = 296
    CEFBS_None, // SRA_F_R = 297
    CEFBS_None, // SRA_R = 298
    CEFBS_None, // SRL_F_R = 299
    CEFBS_None, // SRL_R = 300
    CEFBS_None, // STADDR = 301
    CEFBS_None, // STB_RI = 302
    CEFBS_None, // STB_RR = 303
    CEFBS_None, // STH_RI = 304
    CEFBS_None, // STH_RR = 305
    CEFBS_None, // SUBB_F_I_HI = 306
    CEFBS_None, // SUBB_F_I_LO = 307
    CEFBS_None, // SUBB_F_R = 308
    CEFBS_None, // SUBB_I_HI = 309
    CEFBS_None, // SUBB_I_LO = 310
    CEFBS_None, // SUBB_R = 311
    CEFBS_None, // SUB_F_I_HI = 312
    CEFBS_None, // SUB_F_I_LO = 313
    CEFBS_None, // SUB_F_R = 314
    CEFBS_None, // SUB_I_HI = 315
    CEFBS_None, // SUB_I_LO = 316
    CEFBS_None, // SUB_R = 317
    CEFBS_None, // SW_RI = 318
    CEFBS_None, // SW_RR = 319
    CEFBS_None, // TRAILZ = 320
    CEFBS_None, // XOR_F_I_HI = 321
    CEFBS_None, // XOR_F_I_LO = 322
    CEFBS_None, // XOR_F_R = 323
    CEFBS_None, // XOR_I_HI = 324
    CEFBS_None, // XOR_I_LO = 325
    CEFBS_None, // XOR_R = 326
  };

  assert(Inst.getOpcode() < 327);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Inst.getOpcode()]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << MCII.getName(Inst.getOpcode()).str()
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str());
  }
#else
  // Silence unused variable warning on targets that don't use MCII for other purposes (e.g. BPF).
  (void)MCII;
#endif // NDEBUG
}
#endif
