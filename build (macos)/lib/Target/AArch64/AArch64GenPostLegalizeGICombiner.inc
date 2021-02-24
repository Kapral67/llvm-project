/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Combiner                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef AARCH64POSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_DEPS
#include "llvm/ADT/SparseBitVector.h"
namespace llvm {
extern cl::OptionCategory GICombinerOptionCategory;
} // end namespace llvm
#endif // ifdef AARCH64POSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_DEPS

#ifdef AARCH64POSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_H
class AArch64GenPostLegalizerCombinerHelperRuleConfig {
  SparseBitVector<> DisabledRules;

public:
  bool parseCommandLineOption();
  bool isRuleDisabled(unsigned ID) const;
  bool setRuleEnabled(StringRef RuleIdentifier);
  bool setRuleDisabled(StringRef RuleIdentifier);
};

class AArch64GenPostLegalizerCombinerHelper {
  const AArch64GenPostLegalizerCombinerHelperRuleConfig *RuleConfig;

public:
  template <typename... Args>AArch64GenPostLegalizerCombinerHelper(const AArch64GenPostLegalizerCombinerHelperRuleConfig &RuleConfig, Args &&... args) : RuleConfig(&RuleConfig) {}

  bool tryCombineAll(
    GISelChangeObserver &Observer,
    MachineInstr &MI,
    MachineIRBuilder &B,
    CombinerHelper &Helper) const;
};

static Optional<uint64_t> getRuleIdxForIdentifier(StringRef RuleIdentifier) {
  uint64_t I;
  // getAtInteger(...) returns false on success
  bool Parsed = !RuleIdentifier.getAsInteger(0, I);
  if (Parsed)
    return I;

#ifndef NDEBUG
  switch (RuleIdentifier.size()) {
  default: break;
  case 9:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "opy_prop", 8) != 0)
        break;
      return 0;	 // "copy_prop"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ul_const", 8) != 0)
        break;
      return 9;	 // "mul_const"
    }
    break;
  case 12:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "redundant_or", 12) != 0)
      break;
    return 8;	 // "redundant_or"
  case 13:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "redundant_and", 13) != 0)
      break;
    return 5;	 // "redundant_and"
  case 15:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "extending_loads", 15) != 0)
      break;
    return 2;	 // "extending_loads"
  case 17:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "erase_undef_store", 17) != 0)
      break;
    return 1;	 // "erase_undef_store"
  case 19:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "sext_trunc_sextload", 19) != 0)
      break;
    return 3;	 // "sext_trunc_sextload"
  case 24:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "xor_of_and_with_same_reg", 24) != 0)
      break;
    return 6;	 // "xor_of_and_with_same_reg"
  case 26:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "extractvecelt_pairwise_add", 26) != 0)
      break;
    return 7;	 // "extractvecelt_pairwise_add"
  case 37:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "hoist_logic_op_with_same_opcode_hands", 37) != 0)
      break;
    return 4;	 // "hoist_logic_op_with_same_opcode_hands"
  }
#endif // ifndef NDEBUG

  return None;
}
static Optional<std::pair<uint64_t, uint64_t>> getRuleRangeForIdentifier(StringRef RuleIdentifier) {
  std::pair<StringRef, StringRef> RangePair = RuleIdentifier.split('-');
  if (!RangePair.second.empty()) {
    const auto First = getRuleIdxForIdentifier(RangePair.first);
    const auto Last = getRuleIdxForIdentifier(RangePair.second);
    if (!First.hasValue() || !Last.hasValue())
      return None;
    if (First >= Last)
      report_fatal_error("Beginning of range should be before end of range");
    return {{*First, *Last + 1}};
  } else if (RangePair.first == "*") {
    return {{0, 10}};
  } else {
    const auto I = getRuleIdxForIdentifier(RangePair.first);
    if (!I.hasValue())
      return None;
    return {{*I, *I + 1}};
  }
  return None;
}

bool AArch64GenPostLegalizerCombinerHelperRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange.hasValue())
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool AArch64GenPostLegalizerCombinerHelperRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange.hasValue())
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

bool AArch64GenPostLegalizerCombinerHelperRuleConfig::isRuleDisabled(unsigned RuleID) const {
  return DisabledRules.test(RuleID);
}
#endif // ifdef AARCH64POSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_H

#ifdef AARCH64POSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_CPP

std::vector<std::string> AArch64PostLegalizerCombinerHelperOption;
cl::list<std::string> AArch64PostLegalizerCombinerHelperDisableOption(
    "aarch64postlegalizercombinerhelper-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the AArch64PostLegalizerCombinerHelper pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      AArch64PostLegalizerCombinerHelperOption.push_back(Str);
    }));
cl::list<std::string> AArch64PostLegalizerCombinerHelperOnlyEnableOption(
    "aarch64postlegalizercombinerhelper-only-enable-rule",
    cl::desc("Disable all rules in the AArch64PostLegalizerCombinerHelper pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      AArch64PostLegalizerCombinerHelperOption.push_back("*");
      do {
        auto X = Str.split(",");
        AArch64PostLegalizerCombinerHelperOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));

bool AArch64GenPostLegalizerCombinerHelperRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : AArch64PostLegalizerCombinerHelperOption) {
    bool Enabled = Identifier.consume_front("!");
    if (Enabled && !setRuleEnabled(Identifier))
      return false;
    if (!Enabled && !setRuleDisabled(Identifier))
      return false;
  }
  return true;
}

bool AArch64GenPostLegalizerCombinerHelper::tryCombineAll(
    GISelChangeObserver &Observer,
    MachineInstr &MI,
    MachineIRBuilder &B,
    CombinerHelper &Helper) const {
  MachineBasicBlock *MBB = MI.getParent();
  MachineFunction *MF = MBB->getParent();
  MachineRegisterInfo &MRI = MF->getRegInfo();
  SmallVector<MachineInstr *, 8> MIs = {&MI};

  (void)MBB; (void)MF; (void)MRI; (void)RuleConfig;

  // Match data
  PreferredTuple MatchData2;
  InstructionStepsMatchInfo MatchData4;
  Register MatchData5;
  std::pair<Register, Register> MatchData6;
  std::tuple<unsigned, LLT, Register> MatchData7;
  Register MatchData8;
  std::function<void(MachineIRBuilder&, Register)> MatchData9;

  int Partition = -1;
  Partition = -1;
  switch (MIs[0]->getOpcode()) {
  case TargetOpcode::COPY: Partition = 0; break;
  case TargetOpcode::G_STORE: Partition = 1; break;
  case TargetOpcode::G_LOAD: Partition = 2; break;
  case TargetOpcode::G_SEXTLOAD: Partition = 3; break;
  case TargetOpcode::G_ZEXTLOAD: Partition = 4; break;
  case TargetOpcode::G_SEXT_INREG: Partition = 5; break;
  case TargetOpcode::G_AND: Partition = 6; break;
  case TargetOpcode::G_OR: Partition = 7; break;
  case TargetOpcode::G_XOR: Partition = 8; break;
  case TargetOpcode::G_EXTRACT_VECTOR_ELT: Partition = 9; break;
  case TargetOpcode::G_MUL: Partition = 10; break;
  }
  // Default case but without conflicting with potential default case in selection.
  if (Partition == -1) return false;
  if (Partition == 0 /* TargetOpcode::COPY */) {
    // Leaf name: copy_prop
    // Rule: copy_prop
    if (!RuleConfig->isRuleDisabled(0)) {
      if (1
          && [&]() {
           return Helper.matchCombineCopy(*MIs[0]); 
          return true;
      }()) {
        Helper.applyCombineCopy(*MIs[0]); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 1 /* TargetOpcode::G_STORE */) {
    // Leaf name: erase_undef_store
    // Rule: erase_undef_store
    if (!RuleConfig->isRuleDisabled(1)) {
      if (1
          && [&]() {
           return Helper.matchUndefStore(*MIs[0]); 
          return true;
      }()) {
        return Helper.eraseInst(*MIs[0]); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 2 /* TargetOpcode::G_LOAD */) {
    // Leaf name: extending_loads
    // Rule: extending_loads
    if (!RuleConfig->isRuleDisabled(2)) {
      if (1
          && [&]() {
           return Helper.matchCombineExtendingLoads(*MIs[0], MatchData2); 
          return true;
      }()) {
        Helper.applyCombineExtendingLoads(*MIs[0], MatchData2); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 3 /* TargetOpcode::G_SEXTLOAD */) {
    // Leaf name: extending_loads
    // Rule: extending_loads
    if (!RuleConfig->isRuleDisabled(2)) {
      if (1
          && [&]() {
           return Helper.matchCombineExtendingLoads(*MIs[0], MatchData2); 
          return true;
      }()) {
        Helper.applyCombineExtendingLoads(*MIs[0], MatchData2); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 4 /* TargetOpcode::G_ZEXTLOAD */) {
    // Leaf name: extending_loads
    // Rule: extending_loads
    if (!RuleConfig->isRuleDisabled(2)) {
      if (1
          && [&]() {
           return Helper.matchCombineExtendingLoads(*MIs[0], MatchData2); 
          return true;
      }()) {
        Helper.applyCombineExtendingLoads(*MIs[0], MatchData2); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 5 /* TargetOpcode::G_SEXT_INREG */) {
    // Leaf name: sext_trunc_sextload
    // Rule: sext_trunc_sextload
    if (!RuleConfig->isRuleDisabled(3)) {
      if (1
          && [&]() {
           return Helper.matchSextTruncSextLoad(*MIs[0]); 
          return true;
      }()) {
        Helper.applySextTruncSextLoad(*MIs[0]); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 6 /* TargetOpcode::G_AND */) {
    // Leaf name: hoist_logic_op_with_same_opcode_hands
    // Rule: hoist_logic_op_with_same_opcode_hands
    if (!RuleConfig->isRuleDisabled(4)) {
      if (1
          && [&]() {
           return Helper.matchHoistLogicOpWithSameOpcodeHands(*MIs[0], MatchData4); 
          return true;
      }()) {
        return Helper.applyBuildInstructionSteps(*MIs[0], MatchData4);
        return true;
      }
    }
    // Leaf name: redundant_and
    // Rule: redundant_and
    if (!RuleConfig->isRuleDisabled(5)) {
      if (1
          && [&]() {
           return Helper.matchRedundantAnd(*MIs[0], MatchData5); 
          return true;
      }()) {
        return Helper.replaceSingleDefInstWithReg(*MIs[0], MatchData5); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 7 /* TargetOpcode::G_OR */) {
    // Leaf name: hoist_logic_op_with_same_opcode_hands
    // Rule: hoist_logic_op_with_same_opcode_hands
    if (!RuleConfig->isRuleDisabled(4)) {
      if (1
          && [&]() {
           return Helper.matchHoistLogicOpWithSameOpcodeHands(*MIs[0], MatchData4); 
          return true;
      }()) {
        return Helper.applyBuildInstructionSteps(*MIs[0], MatchData4);
        return true;
      }
    }
    // Leaf name: redundant_or
    // Rule: redundant_or
    if (!RuleConfig->isRuleDisabled(8)) {
      if (1
          && [&]() {
           return Helper.matchRedundantOr(*MIs[0], MatchData8); 
          return true;
      }()) {
        return Helper.replaceSingleDefInstWithReg(*MIs[0], MatchData8); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 8 /* TargetOpcode::G_XOR */) {
    // Leaf name: hoist_logic_op_with_same_opcode_hands
    // Rule: hoist_logic_op_with_same_opcode_hands
    if (!RuleConfig->isRuleDisabled(4)) {
      if (1
          && [&]() {
           return Helper.matchHoistLogicOpWithSameOpcodeHands(*MIs[0], MatchData4); 
          return true;
      }()) {
        return Helper.applyBuildInstructionSteps(*MIs[0], MatchData4);
        return true;
      }
    }
    // Leaf name: xor_of_and_with_same_reg
    // Rule: xor_of_and_with_same_reg
    if (!RuleConfig->isRuleDisabled(6)) {
      if (1
          && [&]() {
           return Helper.matchXorOfAndWithSameReg(*MIs[0], MatchData6); 
          return true;
      }()) {
        return Helper.applyXorOfAndWithSameReg(*MIs[0], MatchData6); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 9 /* TargetOpcode::G_EXTRACT_VECTOR_ELT */) {
    // Leaf name: extractvecelt_pairwise_add
    // Rule: extractvecelt_pairwise_add
    if (!RuleConfig->isRuleDisabled(7)) {
      if (1
          && [&]() {
           return matchExtractVecEltPairwiseAdd(*MIs[0], MRI, MatchData7); 
          return true;
      }()) {
        applyExtractVecEltPairwiseAdd(*MIs[0], MRI, B, MatchData7); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 10 /* TargetOpcode::G_MUL */) {
    // Leaf name: mul_const
    // Rule: mul_const
    if (!RuleConfig->isRuleDisabled(9)) {
      if (1
          && [&]() {
           return matchAArch64MulConstCombine(*MIs[0], MRI, MatchData9); 
          return true;
      }()) {
        applyAArch64MulConstCombine(*MIs[0], MRI, B, MatchData9); 
        return true;
      }
    }
    return false;
  }

  return false;
}
#endif // ifdef AARCH64POSTLEGALIZERCOMBINERHELPER_GENCOMBINERHELPER_CPP
