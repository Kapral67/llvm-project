/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Combiner                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef AARCH64POSTLEGALIZERLOWERINGHELPER_GENCOMBINERHELPER_DEPS
#include "llvm/ADT/SparseBitVector.h"
namespace llvm {
extern cl::OptionCategory GICombinerOptionCategory;
} // end namespace llvm
#endif // ifdef AARCH64POSTLEGALIZERLOWERINGHELPER_GENCOMBINERHELPER_DEPS

#ifdef AARCH64POSTLEGALIZERLOWERINGHELPER_GENCOMBINERHELPER_H
class AArch64GenPostLegalizerLoweringHelperRuleConfig {
  SparseBitVector<> DisabledRules;

public:
  bool parseCommandLineOption();
  bool isRuleDisabled(unsigned ID) const;
  bool setRuleEnabled(StringRef RuleIdentifier);
  bool setRuleDisabled(StringRef RuleIdentifier);
};

class AArch64GenPostLegalizerLoweringHelper {
  const AArch64GenPostLegalizerLoweringHelperRuleConfig *RuleConfig;

public:
  template <typename... Args>AArch64GenPostLegalizerLoweringHelper(const AArch64GenPostLegalizerLoweringHelperRuleConfig &RuleConfig, Args &&... args) : RuleConfig(&RuleConfig) {}

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
  case 3:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'd':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "up", 2) != 0)
        break;
      return 0;	 // "dup"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xt", 2) != 0)
        break;
      return 2;	 // "ext"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ev", 2) != 0)
        break;
      return 1;	 // "rev"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "rn", 2) != 0)
        break;
      return 5;	 // "trn"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "zp", 2) != 0)
        break;
      return 4;	 // "uzp"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ip", 2) != 0)
        break;
      return 3;	 // "zip"
    }
    break;
  case 12:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "form_duplane", 12) != 0)
      break;
    return 8;	 // "form_duplane"
  case 15:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "djust_icmp_imm", 14) != 0)
        break;
      return 7;	 // "adjust_icmp_imm"
    case 'v':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ashr_vlshr_imm", 14) != 0)
        break;
      return 6;	 // "vashr_vlshr_imm"
    }
    break;
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
    return {{0, 9}};
  } else {
    const auto I = getRuleIdxForIdentifier(RangePair.first);
    if (!I.hasValue())
      return None;
    return {{*I, *I + 1}};
  }
  return None;
}

bool AArch64GenPostLegalizerLoweringHelperRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange.hasValue())
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool AArch64GenPostLegalizerLoweringHelperRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange.hasValue())
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

bool AArch64GenPostLegalizerLoweringHelperRuleConfig::isRuleDisabled(unsigned RuleID) const {
  return DisabledRules.test(RuleID);
}
#endif // ifdef AARCH64POSTLEGALIZERLOWERINGHELPER_GENCOMBINERHELPER_H

#ifdef AARCH64POSTLEGALIZERLOWERINGHELPER_GENCOMBINERHELPER_CPP

std::vector<std::string> AArch64PostLegalizerLoweringHelperOption;
cl::list<std::string> AArch64PostLegalizerLoweringHelperDisableOption(
    "aarch64postlegalizerloweringhelper-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the AArch64PostLegalizerLoweringHelper pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      AArch64PostLegalizerLoweringHelperOption.push_back(Str);
    }));
cl::list<std::string> AArch64PostLegalizerLoweringHelperOnlyEnableOption(
    "aarch64postlegalizerloweringhelper-only-enable-rule",
    cl::desc("Disable all rules in the AArch64PostLegalizerLoweringHelper pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      AArch64PostLegalizerLoweringHelperOption.push_back("*");
      do {
        auto X = Str.split(",");
        AArch64PostLegalizerLoweringHelperOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));

bool AArch64GenPostLegalizerLoweringHelperRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : AArch64PostLegalizerLoweringHelperOption) {
    bool Enabled = Identifier.consume_front("!");
    if (Enabled && !setRuleEnabled(Identifier))
      return false;
    if (!Enabled && !setRuleDisabled(Identifier))
      return false;
  }
  return true;
}

bool AArch64GenPostLegalizerLoweringHelper::tryCombineAll(
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
  ShuffleVectorPseudo MatchData0;
  ShuffleVectorPseudo MatchData1;
  ShuffleVectorPseudo MatchData2;
  ShuffleVectorPseudo MatchData3;
  ShuffleVectorPseudo MatchData4;
  ShuffleVectorPseudo MatchData5;
  int64_t MatchData6;
  std::pair<uint64_t, CmpInst::Predicate> MatchData7;
  std::pair<unsigned, int> MatchData8;

  int Partition = -1;
  Partition = -1;
  switch (MIs[0]->getOpcode()) {
  case TargetOpcode::G_SHUFFLE_VECTOR: Partition = 0; break;
  case TargetOpcode::G_ASHR: Partition = 1; break;
  case TargetOpcode::G_LSHR: Partition = 2; break;
  case TargetOpcode::G_ICMP: Partition = 3; break;
  }
  // Default case but without conflicting with potential default case in selection.
  if (Partition == -1) return false;
  if (Partition == 0 /* TargetOpcode::G_SHUFFLE_VECTOR */) {
    // Leaf name: dup
    // Rule: dup
    if (!RuleConfig->isRuleDisabled(0)) {
      if (1
          && [&]() {
           return matchDup(*MIs[0], MRI, MatchData0); 
          return true;
      }()) {
        applyShuffleVectorPseudo(*MIs[0], MatchData0); 
        return true;
      }
    }
    // Leaf name: rev
    // Rule: rev
    if (!RuleConfig->isRuleDisabled(1)) {
      if (1
          && [&]() {
           return matchREV(*MIs[0], MRI, MatchData1); 
          return true;
      }()) {
        applyShuffleVectorPseudo(*MIs[0], MatchData1); 
        return true;
      }
    }
    // Leaf name: ext
    // Rule: ext
    if (!RuleConfig->isRuleDisabled(2)) {
      if (1
          && [&]() {
           return matchEXT(*MIs[0], MRI, MatchData2); 
          return true;
      }()) {
        applyEXT(*MIs[0], MatchData2); 
        return true;
      }
    }
    // Leaf name: zip
    // Rule: zip
    if (!RuleConfig->isRuleDisabled(3)) {
      if (1
          && [&]() {
           return matchZip(*MIs[0], MRI, MatchData3); 
          return true;
      }()) {
        applyShuffleVectorPseudo(*MIs[0], MatchData3); 
        return true;
      }
    }
    // Leaf name: uzp
    // Rule: uzp
    if (!RuleConfig->isRuleDisabled(4)) {
      if (1
          && [&]() {
           return matchUZP(*MIs[0], MRI, MatchData4); 
          return true;
      }()) {
        applyShuffleVectorPseudo(*MIs[0], MatchData4); 
        return true;
      }
    }
    // Leaf name: trn
    // Rule: trn
    if (!RuleConfig->isRuleDisabled(5)) {
      if (1
          && [&]() {
           return matchTRN(*MIs[0], MRI, MatchData5); 
          return true;
      }()) {
        applyShuffleVectorPseudo(*MIs[0], MatchData5); 
        return true;
      }
    }
    // Leaf name: form_duplane
    // Rule: form_duplane
    if (!RuleConfig->isRuleDisabled(8)) {
      if (1
          && [&]() {
           return matchDupLane(*MIs[0], MRI, MatchData8); 
          return true;
      }()) {
        applyDupLane(*MIs[0], MRI, B, MatchData8); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 1 /* TargetOpcode::G_ASHR */) {
    // Leaf name: vashr_vlshr_imm
    // Rule: vashr_vlshr_imm
    if (!RuleConfig->isRuleDisabled(6)) {
      if (1
          && [&]() {
           return matchVAshrLshrImm(*MIs[0], MRI, MatchData6); 
          return true;
      }()) {
        applyVAshrLshrImm(*MIs[0], MRI, MatchData6); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 2 /* TargetOpcode::G_LSHR */) {
    // Leaf name: vashr_vlshr_imm
    // Rule: vashr_vlshr_imm
    if (!RuleConfig->isRuleDisabled(6)) {
      if (1
          && [&]() {
           return matchVAshrLshrImm(*MIs[0], MRI, MatchData6); 
          return true;
      }()) {
        applyVAshrLshrImm(*MIs[0], MRI, MatchData6); 
        return true;
      }
    }
    return false;
  }
  if (Partition == 3 /* TargetOpcode::G_ICMP */) {
    // Leaf name: adjust_icmp_imm
    // Rule: adjust_icmp_imm
    if (!RuleConfig->isRuleDisabled(7)) {
      if (1
          && [&]() {
           return matchAdjustICmpImmAndPred(*MIs[0], MRI, MatchData7); 
          return true;
      }()) {
        applyAdjustICmpImmAndPred(*MIs[0], MatchData7, B, Observer); 
        return true;
      }
    }
    return false;
  }

  return false;
}
#endif // ifdef AARCH64POSTLEGALIZERLOWERINGHELPER_GENCOMBINERHELPER_CPP
