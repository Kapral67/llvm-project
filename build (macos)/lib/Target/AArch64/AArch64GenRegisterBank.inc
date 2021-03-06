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
namespace AArch64 {
enum : unsigned {
  InvalidRegBankID = ~0u,
  CCRegBankID = 0,
  FPRRegBankID = 1,
  GPRRegBankID = 2,
  NumRegisterBanks,
};
} // end namespace AArch64
} // end namespace llvm
#endif // GET_REGBANK_DECLARATIONS

#ifdef GET_TARGET_REGBANK_CLASS
#undef GET_TARGET_REGBANK_CLASS
private:
  static RegisterBank *RegBanks[];

protected:
  AArch64GenRegisterBankInfo();

#endif // GET_TARGET_REGBANK_CLASS

#ifdef GET_TARGET_REGBANK_IMPL
#undef GET_TARGET_REGBANK_IMPL
namespace llvm {
namespace AArch64 {
const uint32_t CCRegBankCoverageData[] = {
    // 0-31
    (1u << (AArch64::CCRRegClassID - 0)) |
    0,
    // 32-63
    0,
    // 64-95
    0,
    // 96-127
    0,
    // 128-159
    0,
    // 160-191
    0,
};
const uint32_t FPRRegBankCoverageData[] = {
    // 0-31
    (1u << (AArch64::FPR8RegClassID - 0)) |
    (1u << (AArch64::FPR16RegClassID - 0)) |
    (1u << (AArch64::FPR32RegClassID - 0)) |
    (1u << (AArch64::FPR64RegClassID - 0)) |
    (1u << (AArch64::FPR16_loRegClassID - 0)) |
    (1u << (AArch64::FPR32_with_hsub_in_FPR16_loRegClassID - 0)) |
    (1u << (AArch64::FPR64_loRegClassID - 0)) |
    0,
    // 32-63
    0,
    // 64-95
    (1u << (AArch64::DDRegClassID - 64)) |
    (1u << (AArch64::DD_with_dsub0_in_FPR64_loRegClassID - 64)) |
    (1u << (AArch64::DD_with_dsub1_in_FPR64_loRegClassID - 64)) |
    (1u << (AArch64::DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loRegClassID - 64)) |
    0,
    // 96-127
    (1u << (AArch64::FPR128RegClassID - 96)) |
    (1u << (AArch64::DDDRegClassID - 96)) |
    (1u << (AArch64::DDDDRegClassID - 96)) |
    (1u << (AArch64::QQRegClassID - 96)) |
    (1u << (AArch64::FPR128_loRegClassID - 96)) |
    (1u << (AArch64::DDD_with_dsub0_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub0_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::QQ_with_dsub_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDD_with_dsub1_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub1_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::QQ_with_qsub1_in_FPR128_loRegClassID - 96)) |
    (1u << (AArch64::DDD_with_dsub2_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub2_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub3_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID - 96)) |
    (1u << (AArch64::DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID - 96)) |
    0,
    // 128-159
    (1u << (AArch64::QQQQRegClassID - 128)) |
    (1u << (AArch64::QQQRegClassID - 128)) |
    (1u << (AArch64::QQQQ_with_dsub_in_FPR64_loRegClassID - 128)) |
    (1u << (AArch64::QQQ_with_dsub_in_FPR64_loRegClassID - 128)) |
    (1u << (AArch64::QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loRegClassID - 128)) |
    (1u << (AArch64::QQQ_with_qsub1_in_FPR128_loRegClassID - 128)) |
    (1u << (AArch64::QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loRegClassID - 128)) |
    (1u << (AArch64::QQQ_with_qsub2_in_FPR128_loRegClassID - 128)) |
    (1u << (AArch64::QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loRegClassID - 128)) |
    (1u << (AArch64::QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loRegClassID - 128)) |
    (1u << (AArch64::QQQQ_with_qsub1_in_FPR128_loRegClassID - 128)) |
    (1u << (AArch64::QQQQ_with_qsub2_in_FPR128_loRegClassID - 128)) |
    (1u << (AArch64::QQQQ_with_qsub3_in_FPR128_loRegClassID - 128)) |
    0,
    // 160-191
    (1u << (AArch64::QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loRegClassID - 160)) |
    (1u << (AArch64::QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClassID - 160)) |
    (1u << (AArch64::QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID - 160)) |
    (1u << (AArch64::QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClassID - 160)) |
    (1u << (AArch64::QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID - 160)) |
    (1u << (AArch64::QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID - 160)) |
    0,
};
const uint32_t GPRRegBankCoverageData[] = {
    // 0-31
    (1u << (AArch64::GPR64allRegClassID - 0)) |
    (1u << (AArch64::GPR32allRegClassID - 0)) |
    (1u << (AArch64::GPR64RegClassID - 0)) |
    (1u << (AArch64::GPR32RegClassID - 0)) |
    (1u << (AArch64::GPR64commonRegClassID - 0)) |
    (1u << (AArch64::GPR32spRegClassID - 0)) |
    (1u << (AArch64::GPR32commonRegClassID - 0)) |
    (1u << (AArch64::GPR64common_and_GPR64noipRegClassID - 0)) |
    (1u << (AArch64::GPR64noip_and_tcGPR64RegClassID - 0)) |
    (1u << (AArch64::GPR32argRegClassID - 0)) |
    (1u << (AArch64::tcGPR64RegClassID - 0)) |
    (1u << (AArch64::GPR64noipRegClassID - 0)) |
    (1u << (AArch64::GPR64spRegClassID - 0)) |
    (1u << (AArch64::GPR32sponlyRegClassID - 0)) |
    0,
    // 32-63
    (1u << (AArch64::GPR64argRegClassID - 32)) |
    0,
    // 64-95
    (1u << (AArch64::rtcGPR64RegClassID - 64)) |
    (1u << (AArch64::GPR64sponlyRegClassID - 64)) |
    0,
    // 96-127
    0,
    // 128-159
    0,
    // 160-191
    0,
};

RegisterBank CCRegBank(/* ID */ AArch64::CCRegBankID, /* Name */ "CC", /* Size */ 32, /* CoveredRegClasses */ CCRegBankCoverageData, /* NumRegClasses */ 186);
RegisterBank FPRRegBank(/* ID */ AArch64::FPRRegBankID, /* Name */ "FPR", /* Size */ 512, /* CoveredRegClasses */ FPRRegBankCoverageData, /* NumRegClasses */ 186);
RegisterBank GPRRegBank(/* ID */ AArch64::GPRRegBankID, /* Name */ "GPR", /* Size */ 64, /* CoveredRegClasses */ GPRRegBankCoverageData, /* NumRegClasses */ 186);
} // end namespace AArch64

RegisterBank *AArch64GenRegisterBankInfo::RegBanks[] = {
    &AArch64::CCRegBank,
    &AArch64::FPRRegBank,
    &AArch64::GPRRegBank,
};

AArch64GenRegisterBankInfo::AArch64GenRegisterBankInfo()
    : RegisterBankInfo(RegBanks, AArch64::NumRegisterBanks) {
  // Assert that RegBank indices match their ID's
#ifndef NDEBUG
  unsigned Index = 0;
  for (const auto &RB : RegBanks)
    assert(Index++ == RB->getID() && "Index != ID");
#endif // NDEBUG
}
} // end namespace llvm
#endif // GET_TARGET_REGBANK_IMPL
