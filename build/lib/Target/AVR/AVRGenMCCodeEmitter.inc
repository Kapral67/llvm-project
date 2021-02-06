/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t AVRMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
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
    UINT64_C(7168),	// ADCRdRr
    UINT64_C(3072),	// ADDRdRr
    UINT64_C(38400),	// ADIWRdK
    UINT64_C(28672),	// ANDIRdK
    UINT64_C(8192),	// ANDRdRr
    UINT64_C(37893),	// ASRRd
    UINT64_C(38024),	// BCLRs
    UINT64_C(63488),	// BLD
    UINT64_C(62464),	// BRBCsk
    UINT64_C(61440),	// BRBSsk
    UINT64_C(38296),	// BREAK
    UINT64_C(61441),	// BREQk
    UINT64_C(62468),	// BRGEk
    UINT64_C(61440),	// BRLOk
    UINT64_C(61444),	// BRLTk
    UINT64_C(61442),	// BRMIk
    UINT64_C(62465),	// BRNEk
    UINT64_C(62466),	// BRPLk
    UINT64_C(62464),	// BRSHk
    UINT64_C(37896),	// BSETs
    UINT64_C(64000),	// BST
    UINT64_C(2483945472),	// CALLk
    UINT64_C(38912),	// CBIAb
    UINT64_C(37888),	// COMRd
    UINT64_C(1024),	// CPCRdRr
    UINT64_C(12288),	// CPIRdK
    UINT64_C(5120),	// CPRdRr
    UINT64_C(4096),	// CPSE
    UINT64_C(37898),	// DECRd
    UINT64_C(37899),	// DESK
    UINT64_C(38169),	// EICALL
    UINT64_C(37913),	// EIJMP
    UINT64_C(38360),	// ELPM
    UINT64_C(36870),	// ELPMRdZ
    UINT64_C(36871),	// ELPMRdZPi
    UINT64_C(9216),	// EORRdRr
    UINT64_C(776),	// FMUL
    UINT64_C(896),	// FMULS
    UINT64_C(904),	// FMULSU
    UINT64_C(38153),	// ICALL
    UINT64_C(37897),	// IJMP
    UINT64_C(37891),	// INCRd
    UINT64_C(45056),	// INRdA
    UINT64_C(2483814400),	// JMPk
    UINT64_C(37382),	// LACZRd
    UINT64_C(37381),	// LASZRd
    UINT64_C(37383),	// LATZRd
    UINT64_C(32768),	// LDDRdPtrQ
    UINT64_C(57344),	// LDIRdK
    UINT64_C(32768),	// LDRdPtr
    UINT64_C(32770),	// LDRdPtrPd
    UINT64_C(32769),	// LDRdPtrPi
    UINT64_C(2415919104),	// LDSRdK
    UINT64_C(38344),	// LPM
    UINT64_C(36868),	// LPMRdZ
    UINT64_C(36869),	// LPMRdZPi
    UINT64_C(37894),	// LSRRd
    UINT64_C(11264),	// MOVRdRr
    UINT64_C(256),	// MOVWRdRr
    UINT64_C(39936),	// MULRdRr
    UINT64_C(512),	// MULSRdRr
    UINT64_C(768),	// MULSURdRr
    UINT64_C(37889),	// NEGRd
    UINT64_C(0),	// NOP
    UINT64_C(24576),	// ORIRdK
    UINT64_C(10240),	// ORRdRr
    UINT64_C(47104),	// OUTARr
    UINT64_C(36879),	// POPRd
    UINT64_C(37391),	// PUSHRr
    UINT64_C(53248),	// RCALLk
    UINT64_C(38152),	// RET
    UINT64_C(38168),	// RETI
    UINT64_C(49152),	// RJMPk
    UINT64_C(37895),	// RORRd
    UINT64_C(16384),	// SBCIRdK
    UINT64_C(2048),	// SBCRdRr
    UINT64_C(39424),	// SBIAb
    UINT64_C(39168),	// SBICAb
    UINT64_C(39680),	// SBISAb
    UINT64_C(38656),	// SBIWRdK
    UINT64_C(64512),	// SBRCRrB
    UINT64_C(65024),	// SBRSRrB
    UINT64_C(38280),	// SLEEP
    UINT64_C(38376),	// SPM
    UINT64_C(38392),	// SPMZPi
    UINT64_C(33280),	// STDPtrQRr
    UINT64_C(33282),	// STPtrPdRr
    UINT64_C(33281),	// STPtrPiRr
    UINT64_C(33280),	// STPtrRr
    UINT64_C(2449473536),	// STSKRr
    UINT64_C(20480),	// SUBIRdK
    UINT64_C(6144),	// SUBRdRr
    UINT64_C(37890),	// SWAPRd
    UINT64_C(38312),	// WDR
    UINT64_C(37380),	// XCHZRd
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case AVR::BREAK:
    case AVR::EICALL:
    case AVR::EIJMP:
    case AVR::ELPM:
    case AVR::ICALL:
    case AVR::IJMP:
    case AVR::LPM:
    case AVR::NOP:
    case AVR::RET:
    case AVR::RETI:
    case AVR::SLEEP:
    case AVR::SPM:
    case AVR::SPMZPi:
    case AVR::WDR: {
      break;
    }
    case AVR::CBIAb:
    case AVR::SBIAb:
    case AVR::SBICAb:
    case AVR::SBISAb: {
      // op: A
      op = encodeImm<AVR::fixup_port5, 0>(MI, 0, Fixups, STI);
      op &= UINT64_C(31);
      op <<= 3;
      Value |= op;
      // op: b
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case AVR::OUTARr: {
      // op: A
      op = encodeImm<AVR::fixup_port6, 0>(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(48)) << 5;
      Value |= (op & UINT64_C(15));
      // op: r
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::MOVWRdRr: {
      // op: d
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(30);
      op <<= 3;
      Value |= op;
      // op: r
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(30);
      op >>= 1;
      Value |= op;
      break;
    }
    case AVR::ASRRd:
    case AVR::COMRd:
    case AVR::DECRd:
    case AVR::INCRd:
    case AVR::LSRRd:
    case AVR::NEGRd:
    case AVR::POPRd:
    case AVR::PUSHRr:
    case AVR::RORRd:
    case AVR::SWAPRd: {
      // op: d
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::INRdA: {
      // op: d
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      // op: A
      op = encodeImm<AVR::fixup_port6, 0>(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(48)) << 5;
      Value |= (op & UINT64_C(15));
      break;
    }
    case AVR::ADIWRdK:
    case AVR::SBIWRdK: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(6);
      op <<= 3;
      Value |= op;
      // op: k
      op = encodeImm<AVR::fixup_6_adiw, 0>(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(48)) << 2;
      Value |= (op & UINT64_C(15));
      break;
    }
    case AVR::CALLk:
    case AVR::JMPk: {
      // op: k
      op = encodeCallTarget(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(4063232)) << 3;
      Value |= (op & UINT64_C(131071));
      break;
    }
    case AVR::RCALLk:
    case AVR::RJMPk: {
      // op: k
      op = encodeRelCondBrTarget<AVR::fixup_13_pcrel>(MI, 0, Fixups, STI);
      op &= UINT64_C(4095);
      Value |= op;
      break;
    }
    case AVR::BREQk:
    case AVR::BRGEk:
    case AVR::BRLOk:
    case AVR::BRLTk:
    case AVR::BRMIk:
    case AVR::BRNEk:
    case AVR::BRPLk:
    case AVR::BRSHk: {
      // op: k
      op = encodeRelCondBrTarget<AVR::fixup_7_pcrel>(MI, 0, Fixups, STI);
      op &= UINT64_C(127);
      op <<= 3;
      Value |= op;
      break;
    }
    case AVR::BRBCsk:
    case AVR::BRBSsk: {
      // op: k
      op = encodeRelCondBrTarget<AVR::fixup_7_pcrel>(MI, 1, Fixups, STI);
      op &= UINT64_C(127);
      op <<= 3;
      Value |= op;
      // op: s
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case AVR::DESK: {
      // op: k
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::STDPtrQRr: {
      // op: memri
      op = encodeMemri(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(32)) << 8;
      Value |= (op & UINT64_C(24)) << 7;
      Value |= (op & UINT64_C(64)) >> 3;
      Value |= (op & UINT64_C(7));
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::LDDRdPtrQ: {
      // op: memri
      op = encodeMemri(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(32)) << 8;
      Value |= (op & UINT64_C(24)) << 7;
      Value |= (op & UINT64_C(64)) >> 3;
      Value |= (op & UINT64_C(7));
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::STPtrRr: {
      // op: ptrreg
      op = encodeLDSTPtrReg(MI, 0, Fixups, STI);
      op &= UINT64_C(3);
      op <<= 2;
      Value |= op;
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      Value = loadStorePostEncoder(MI, Value, STI);
      break;
    }
    case AVR::LDRdPtr: {
      // op: ptrreg
      op = encodeLDSTPtrReg(MI, 1, Fixups, STI);
      op &= UINT64_C(3);
      op <<= 2;
      Value |= op;
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      Value = loadStorePostEncoder(MI, Value, STI);
      break;
    }
    case AVR::STPtrPdRr:
    case AVR::STPtrPiRr: {
      // op: ptrreg
      op = encodeLDSTPtrReg(MI, 1, Fixups, STI);
      op &= UINT64_C(3);
      op <<= 2;
      Value |= op;
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      Value = loadStorePostEncoder(MI, Value, STI);
      break;
    }
    case AVR::LDRdPtrPd:
    case AVR::LDRdPtrPi: {
      // op: ptrreg
      op = encodeLDSTPtrReg(MI, 2, Fixups, STI);
      op &= UINT64_C(3);
      op <<= 2;
      Value |= op;
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      Value = loadStorePostEncoder(MI, Value, STI);
      break;
    }
    case AVR::CPIRdK:
    case AVR::LDIRdK: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: k
      op = encodeImm<AVR::fixup_ldi, 0>(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(240)) << 4;
      Value |= (op & UINT64_C(15));
      break;
    }
    case AVR::ANDIRdK:
    case AVR::ORIRdK:
    case AVR::SBCIRdK:
    case AVR::SUBIRdK: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: k
      op = encodeImm<AVR::fixup_ldi, 0>(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(240)) << 4;
      Value |= (op & UINT64_C(15));
      break;
    }
    case AVR::MULSRdRr:
    case AVR::MULSURdRr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 4;
      Value |= op;
      // op: rr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      break;
    }
    case AVR::LDSRdK: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: k
      op = encodeImm<AVR::fixup_16, 2>(MI, 1, Fixups, STI);
      op &= UINT64_C(65535);
      Value |= op;
      break;
    }
    case AVR::LACZRd:
    case AVR::LASZRd:
    case AVR::LATZRd:
    case AVR::XCHZRd: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::BLD:
    case AVR::BST:
    case AVR::SBRCRrB:
    case AVR::SBRSRrB: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      // op: b
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case AVR::CPCRdRr:
    case AVR::CPRdRr:
    case AVR::CPSE:
    case AVR::MOVRdRr:
    case AVR::MULRdRr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      // op: rr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(16)) << 5;
      Value |= (op & UINT64_C(15));
      break;
    }
    case AVR::ADCRdRr:
    case AVR::ADDRdRr:
    case AVR::ANDRdRr:
    case AVR::EORRdRr:
    case AVR::ORRdRr:
    case AVR::SBCRdRr:
    case AVR::SUBRdRr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      // op: rr
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(16)) << 5;
      Value |= (op & UINT64_C(15));
      break;
    }
    case AVR::FMUL:
    case AVR::FMULS:
    case AVR::FMULSU: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 4;
      Value |= op;
      // op: rr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      Value |= op;
      break;
    }
    case AVR::STSKRr: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 20;
      Value |= op;
      // op: k
      op = encodeImm<AVR::fixup_16, 2>(MI, 0, Fixups, STI);
      op &= UINT64_C(65535);
      Value |= op;
      break;
    }
    case AVR::ELPMRdZ:
    case AVR::ELPMRdZPi:
    case AVR::LPMRdZ:
    case AVR::LPMRdZPi: {
      // op: reg
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(31);
      op <<= 4;
      Value |= op;
      break;
    }
    case AVR::BCLRs:
    case AVR::BSETs: {
      // op: s
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 4;
      Value |= op;
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
  Feature_HasSRAMBit = 13,
  Feature_HasJMPCALLBit = 7,
  Feature_HasIJMPCALLBit = 6,
  Feature_HasEIJMPCALLBit = 3,
  Feature_HasADDSUBIWBit = 0,
  Feature_HasSmallStackBit = 14,
  Feature_HasMOVWBit = 10,
  Feature_HasLPMBit = 8,
  Feature_HasLPMXBit = 9,
  Feature_HasELPMBit = 4,
  Feature_HasELPMXBit = 5,
  Feature_HasSPMBit = 11,
  Feature_HasSPMXBit = 12,
  Feature_HasDESBit = 2,
  Feature_SupportsRMWBit = 17,
  Feature_SupportsMultiplicationBit = 16,
  Feature_HasBREAKBit = 1,
  Feature_HasTinyEncodingBit = 15,
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  "Feature_HasADDSUBIW",
  "Feature_HasBREAK",
  "Feature_HasDES",
  "Feature_HasEIJMPCALL",
  "Feature_HasELPM",
  "Feature_HasELPMX",
  "Feature_HasIJMPCALL",
  "Feature_HasJMPCALL",
  "Feature_HasLPM",
  "Feature_HasLPMX",
  "Feature_HasMOVW",
  "Feature_HasSPM",
  "Feature_HasSPMX",
  "Feature_HasSRAM",
  "Feature_HasSmallStack",
  "Feature_HasTinyEncoding",
  "Feature_SupportsMultiplication",
  "Feature_SupportsRMW",
  nullptr
};

#endif // NDEBUG
FeatureBitset AVRMCCodeEmitter::
computeAvailableFeatures(const FeatureBitset &FB) const {
  FeatureBitset Features;
  if (FB[AVR::FeatureSRAM])
    Features.set(Feature_HasSRAMBit);
  if (FB[AVR::FeatureJMPCALL])
    Features.set(Feature_HasJMPCALLBit);
  if (FB[AVR::FeatureIJMPCALL])
    Features.set(Feature_HasIJMPCALLBit);
  if (FB[AVR::FeatureEIJMPCALL])
    Features.set(Feature_HasEIJMPCALLBit);
  if (FB[AVR::FeatureADDSUBIW])
    Features.set(Feature_HasADDSUBIWBit);
  if (FB[AVR::FeatureSmallStack])
    Features.set(Feature_HasSmallStackBit);
  if (FB[AVR::FeatureMOVW])
    Features.set(Feature_HasMOVWBit);
  if (FB[AVR::FeatureLPM])
    Features.set(Feature_HasLPMBit);
  if (FB[AVR::FeatureLPMX])
    Features.set(Feature_HasLPMXBit);
  if (FB[AVR::FeatureELPM])
    Features.set(Feature_HasELPMBit);
  if (FB[AVR::FeatureELPMX])
    Features.set(Feature_HasELPMXBit);
  if (FB[AVR::FeatureSPM])
    Features.set(Feature_HasSPMBit);
  if (FB[AVR::FeatureSPMX])
    Features.set(Feature_HasSPMXBit);
  if (FB[AVR::FeatureDES])
    Features.set(Feature_HasDESBit);
  if (FB[AVR::FeatureRMW])
    Features.set(Feature_SupportsRMWBit);
  if (FB[AVR::FeatureMultiplication])
    Features.set(Feature_SupportsMultiplicationBit);
  if (FB[AVR::FeatureBREAK])
    Features.set(Feature_HasBREAKBit);
  if (FB[AVR::FeatureTinyEncoding])
    Features.set(Feature_HasTinyEncodingBit);
  return Features;
}

#ifndef NDEBUG
// Feature bitsets.
enum : uint8_t {
  CEFBS_None,
  CEFBS_HasADDSUBIW,
  CEFBS_HasBREAK,
  CEFBS_HasDES,
  CEFBS_HasEIJMPCALL,
  CEFBS_HasELPM,
  CEFBS_HasELPMX,
  CEFBS_HasIJMPCALL,
  CEFBS_HasJMPCALL,
  CEFBS_HasLPM,
  CEFBS_HasLPMX,
  CEFBS_HasMOVW,
  CEFBS_HasSPM,
  CEFBS_HasSPMX,
  CEFBS_HasSRAM,
  CEFBS_SupportsMultiplication,
  CEFBS_SupportsRMW,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // CEFBS_None
  {Feature_HasADDSUBIWBit, },
  {Feature_HasBREAKBit, },
  {Feature_HasDESBit, },
  {Feature_HasEIJMPCALLBit, },
  {Feature_HasELPMBit, },
  {Feature_HasELPMXBit, },
  {Feature_HasIJMPCALLBit, },
  {Feature_HasJMPCALLBit, },
  {Feature_HasLPMBit, },
  {Feature_HasLPMXBit, },
  {Feature_HasMOVWBit, },
  {Feature_HasSPMBit, },
  {Feature_HasSPMXBit, },
  {Feature_HasSRAMBit, },
  {Feature_SupportsMultiplicationBit, },
  {Feature_SupportsRMWBit, },
};
#endif // NDEBUG

void AVRMCCodeEmitter::verifyInstructionPredicates(
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
    CEFBS_None, // ADCWRdRr = 228
    CEFBS_None, // ADDWRdRr = 229
    CEFBS_None, // ADJCALLSTACKDOWN = 230
    CEFBS_None, // ADJCALLSTACKUP = 231
    CEFBS_None, // ANDIWRdK = 232
    CEFBS_None, // ANDWRdRr = 233
    CEFBS_None, // ASRB7Rd = 234
    CEFBS_None, // ASRW8Rd = 235
    CEFBS_None, // ASRWRd = 236
    CEFBS_None, // Asr16 = 237
    CEFBS_None, // Asr8 = 238
    CEFBS_None, // AtomicFence = 239
    CEFBS_None, // AtomicLoad16 = 240
    CEFBS_None, // AtomicLoad8 = 241
    CEFBS_None, // AtomicLoadAdd16 = 242
    CEFBS_None, // AtomicLoadAdd8 = 243
    CEFBS_None, // AtomicLoadAnd16 = 244
    CEFBS_None, // AtomicLoadAnd8 = 245
    CEFBS_None, // AtomicLoadOr16 = 246
    CEFBS_None, // AtomicLoadOr8 = 247
    CEFBS_None, // AtomicLoadSub16 = 248
    CEFBS_None, // AtomicLoadSub8 = 249
    CEFBS_None, // AtomicLoadXor16 = 250
    CEFBS_None, // AtomicLoadXor8 = 251
    CEFBS_None, // AtomicStore16 = 252
    CEFBS_None, // AtomicStore8 = 253
    CEFBS_None, // COMWRd = 254
    CEFBS_None, // CPCWRdRr = 255
    CEFBS_None, // CPWRdRr = 256
    CEFBS_None, // EORWRdRr = 257
    CEFBS_None, // FRMIDX = 258
    CEFBS_None, // INWRdA = 259
    CEFBS_HasSRAM, // LDDWRdPtrQ = 260
    CEFBS_HasSRAM, // LDDWRdYQ = 261
    CEFBS_None, // LDIWRdK = 262
    CEFBS_HasSRAM, // LDSWRdK = 263
    CEFBS_HasSRAM, // LDWRdPtr = 264
    CEFBS_HasSRAM, // LDWRdPtrPd = 265
    CEFBS_HasSRAM, // LDWRdPtrPi = 266
    CEFBS_HasLPMX, // LPMWRdZ = 267
    CEFBS_HasLPMX, // LPMWRdZPi = 268
    CEFBS_None, // LSLB7Rd = 269
    CEFBS_None, // LSLW12Rd = 270
    CEFBS_None, // LSLW4Rd = 271
    CEFBS_None, // LSLW8Rd = 272
    CEFBS_None, // LSLWRd = 273
    CEFBS_None, // LSRB7Rd = 274
    CEFBS_None, // LSRW12Rd = 275
    CEFBS_None, // LSRW4Rd = 276
    CEFBS_None, // LSRW8Rd = 277
    CEFBS_None, // LSRWRd = 278
    CEFBS_None, // Lsl16 = 279
    CEFBS_None, // Lsl8 = 280
    CEFBS_None, // Lsr16 = 281
    CEFBS_None, // Lsr8 = 282
    CEFBS_None, // NEGWRd = 283
    CEFBS_None, // ORIWRdK = 284
    CEFBS_None, // ORWRdRr = 285
    CEFBS_None, // OUTWARr = 286
    CEFBS_HasSRAM, // POPWRd = 287
    CEFBS_HasSRAM, // PUSHWRr = 288
    CEFBS_None, // ROLBRd = 289
    CEFBS_None, // ROLWRd = 290
    CEFBS_None, // RORBRd = 291
    CEFBS_None, // RORWRd = 292
    CEFBS_None, // Rol16 = 293
    CEFBS_None, // Rol8 = 294
    CEFBS_None, // Ror16 = 295
    CEFBS_None, // Ror8 = 296
    CEFBS_None, // SBCIWRdK = 297
    CEFBS_None, // SBCWRdRr = 298
    CEFBS_None, // SEXT = 299
    CEFBS_None, // SPREAD = 300
    CEFBS_None, // SPWRITE = 301
    CEFBS_None, // STDSPQRr = 302
    CEFBS_HasSRAM, // STDWPtrQRr = 303
    CEFBS_None, // STDWSPQRr = 304
    CEFBS_HasSRAM, // STSWKRr = 305
    CEFBS_HasSRAM, // STWPtrPdRr = 306
    CEFBS_HasSRAM, // STWPtrPiRr = 307
    CEFBS_HasSRAM, // STWPtrRr = 308
    CEFBS_None, // SUBIWRdK = 309
    CEFBS_None, // SUBWRdRr = 310
    CEFBS_None, // Select16 = 311
    CEFBS_None, // Select8 = 312
    CEFBS_None, // ZEXT = 313
    CEFBS_None, // ADCRdRr = 314
    CEFBS_None, // ADDRdRr = 315
    CEFBS_HasADDSUBIW, // ADIWRdK = 316
    CEFBS_None, // ANDIRdK = 317
    CEFBS_None, // ANDRdRr = 318
    CEFBS_None, // ASRRd = 319
    CEFBS_None, // BCLRs = 320
    CEFBS_None, // BLD = 321
    CEFBS_None, // BRBCsk = 322
    CEFBS_None, // BRBSsk = 323
    CEFBS_HasBREAK, // BREAK = 324
    CEFBS_None, // BREQk = 325
    CEFBS_None, // BRGEk = 326
    CEFBS_None, // BRLOk = 327
    CEFBS_None, // BRLTk = 328
    CEFBS_None, // BRMIk = 329
    CEFBS_None, // BRNEk = 330
    CEFBS_None, // BRPLk = 331
    CEFBS_None, // BRSHk = 332
    CEFBS_None, // BSETs = 333
    CEFBS_None, // BST = 334
    CEFBS_HasJMPCALL, // CALLk = 335
    CEFBS_None, // CBIAb = 336
    CEFBS_None, // COMRd = 337
    CEFBS_None, // CPCRdRr = 338
    CEFBS_None, // CPIRdK = 339
    CEFBS_None, // CPRdRr = 340
    CEFBS_None, // CPSE = 341
    CEFBS_None, // DECRd = 342
    CEFBS_HasDES, // DESK = 343
    CEFBS_HasEIJMPCALL, // EICALL = 344
    CEFBS_HasEIJMPCALL, // EIJMP = 345
    CEFBS_HasELPM, // ELPM = 346
    CEFBS_HasELPMX, // ELPMRdZ = 347
    CEFBS_HasELPMX, // ELPMRdZPi = 348
    CEFBS_None, // EORRdRr = 349
    CEFBS_SupportsMultiplication, // FMUL = 350
    CEFBS_SupportsMultiplication, // FMULS = 351
    CEFBS_SupportsMultiplication, // FMULSU = 352
    CEFBS_HasIJMPCALL, // ICALL = 353
    CEFBS_HasIJMPCALL, // IJMP = 354
    CEFBS_None, // INCRd = 355
    CEFBS_None, // INRdA = 356
    CEFBS_HasJMPCALL, // JMPk = 357
    CEFBS_SupportsRMW, // LACZRd = 358
    CEFBS_SupportsRMW, // LASZRd = 359
    CEFBS_SupportsRMW, // LATZRd = 360
    CEFBS_HasSRAM, // LDDRdPtrQ = 361
    CEFBS_None, // LDIRdK = 362
    CEFBS_HasSRAM, // LDRdPtr = 363
    CEFBS_HasSRAM, // LDRdPtrPd = 364
    CEFBS_HasSRAM, // LDRdPtrPi = 365
    CEFBS_HasSRAM, // LDSRdK = 366
    CEFBS_HasLPM, // LPM = 367
    CEFBS_HasLPMX, // LPMRdZ = 368
    CEFBS_HasLPMX, // LPMRdZPi = 369
    CEFBS_None, // LSRRd = 370
    CEFBS_None, // MOVRdRr = 371
    CEFBS_HasMOVW, // MOVWRdRr = 372
    CEFBS_SupportsMultiplication, // MULRdRr = 373
    CEFBS_SupportsMultiplication, // MULSRdRr = 374
    CEFBS_SupportsMultiplication, // MULSURdRr = 375
    CEFBS_None, // NEGRd = 376
    CEFBS_None, // NOP = 377
    CEFBS_None, // ORIRdK = 378
    CEFBS_None, // ORRdRr = 379
    CEFBS_None, // OUTARr = 380
    CEFBS_HasSRAM, // POPRd = 381
    CEFBS_HasSRAM, // PUSHRr = 382
    CEFBS_None, // RCALLk = 383
    CEFBS_None, // RET = 384
    CEFBS_None, // RETI = 385
    CEFBS_None, // RJMPk = 386
    CEFBS_None, // RORRd = 387
    CEFBS_None, // SBCIRdK = 388
    CEFBS_None, // SBCRdRr = 389
    CEFBS_None, // SBIAb = 390
    CEFBS_None, // SBICAb = 391
    CEFBS_None, // SBISAb = 392
    CEFBS_HasADDSUBIW, // SBIWRdK = 393
    CEFBS_None, // SBRCRrB = 394
    CEFBS_None, // SBRSRrB = 395
    CEFBS_None, // SLEEP = 396
    CEFBS_HasSPM, // SPM = 397
    CEFBS_HasSPMX, // SPMZPi = 398
    CEFBS_HasSRAM, // STDPtrQRr = 399
    CEFBS_HasSRAM, // STPtrPdRr = 400
    CEFBS_HasSRAM, // STPtrPiRr = 401
    CEFBS_HasSRAM, // STPtrRr = 402
    CEFBS_HasSRAM, // STSKRr = 403
    CEFBS_None, // SUBIRdK = 404
    CEFBS_None, // SUBRdRr = 405
    CEFBS_None, // SWAPRd = 406
    CEFBS_None, // WDR = 407
    CEFBS_SupportsRMW, // XCHZRd = 408
  };

  assert(Inst.getOpcode() < 409);
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
