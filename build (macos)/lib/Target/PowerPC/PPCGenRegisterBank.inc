/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Bank Source Fragments                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_REGBANK_DECLARATIONS
#undef GET_REGBANK_DECLARATIONS
namespace llvm {
namespace PPC {
enum : unsigned {
  InvalidRegBankID = ~0u,
  GPRRegBankID = 0,
  NumRegisterBanks,
};
} // end namespace PPC
} // end namespace llvm
#endif // GET_REGBANK_DECLARATIONS

#ifdef GET_TARGET_REGBANK_CLASS
#undef GET_TARGET_REGBANK_CLASS
private:
  static RegisterBank *RegBanks[];

protected:
  PPCGenRegisterBankInfo();

#endif // GET_TARGET_REGBANK_CLASS

#ifdef GET_TARGET_REGBANK_IMPL
#undef GET_TARGET_REGBANK_IMPL
namespace llvm {
namespace PPC {
const uint32_t GPRRegBankCoverageData[] = {
    // 0-31
    (1u << (PPC::G8RCRegClassID - 0)) |
    (1u << (PPC::GPRCRegClassID - 0)) |
    (1u << (PPC::G8RC_and_G8RC_NOX0RegClassID - 0)) |
    (1u << (PPC::GPRC_NOR0RegClassID - 0)) |
    (1u << (PPC::GPRC_and_GPRC_NOR0RegClassID - 0)) |
    0,
    // 32-63
    0,
};

RegisterBank GPRRegBank(/* ID */ PPC::GPRRegBankID, /* Name */ "GPR", /* Size */ 64, /* CoveredRegClasses */ GPRRegBankCoverageData, /* NumRegClasses */ 41);
} // end namespace PPC

RegisterBank *PPCGenRegisterBankInfo::RegBanks[] = {
    &PPC::GPRRegBank,
};

PPCGenRegisterBankInfo::PPCGenRegisterBankInfo()
    : RegisterBankInfo(RegBanks, PPC::NumRegisterBanks) {
  // Assert that RegBank indices match their ID's
#ifndef NDEBUG
  unsigned Index = 0;
  for (const auto &RB : RegBanks)
    assert(Index++ == RB->getID() && "Index != ID");
#endif // NDEBUG
}
} // end namespace llvm
#endif // GET_TARGET_REGBANK_IMPL
