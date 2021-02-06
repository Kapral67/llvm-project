#ifndef GENERATED_DECISION_FOREST_MODEL_COMPLETIONMODEL_H
#define GENERATED_DECISION_FOREST_MODEL_COMPLETIONMODEL_H
#include <cstdint>
#include "llvm/Support/Compiler.h"

namespace clang {
namespace clangd {
class Example {
public:
  // Setters.
  void setIsDeprecated(float V) { IsDeprecated = OrderEncode(V); }
  void setIsReservedName(float V) { IsReservedName = OrderEncode(V); }
  void setIsImplementationDetail(float V) { IsImplementationDetail = OrderEncode(V); }
  void setNumReferences(float V) { NumReferences = OrderEncode(V); }
  void setNumNameInContext(float V) { NumNameInContext = OrderEncode(V); }
  void setFractionNameInContext(float V) { FractionNameInContext = OrderEncode(V); }
  void setIsNameInContext(float V) { IsNameInContext = OrderEncode(V); }
  void setIsInBaseClass(float V) { IsInBaseClass = OrderEncode(V); }
  void setFileProximityDistanceCost(float V) { FileProximityDistanceCost = OrderEncode(V); }
  void setSemaFileProximityScore(float V) { SemaFileProximityScore = OrderEncode(V); }
  void setSymbolScopeDistanceCost(float V) { SymbolScopeDistanceCost = OrderEncode(V); }
  void setSemaSaysInScope(float V) { SemaSaysInScope = OrderEncode(V); }
  void setIsInstanceMember(float V) { IsInstanceMember = OrderEncode(V); }
  void setHadContextType(float V) { HadContextType = OrderEncode(V); }
  void setHadSymbolType(float V) { HadSymbolType = OrderEncode(V); }
  void setTypeMatchesPreferred(float V) { TypeMatchesPreferred = OrderEncode(V); }
  void setSymbolCategory(unsigned V) { SymbolCategory = 1 << V; }
  void setContextKind(unsigned V) { ContextKind = 1 << V; }
  void setScope(unsigned V) { Scope = 1 << V; }

  // Getters.
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getIsDeprecated() const { return IsDeprecated; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getIsReservedName() const { return IsReservedName; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getIsImplementationDetail() const { return IsImplementationDetail; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getNumReferences() const { return NumReferences; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getNumNameInContext() const { return NumNameInContext; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getFractionNameInContext() const { return FractionNameInContext; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getIsNameInContext() const { return IsNameInContext; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getIsInBaseClass() const { return IsInBaseClass; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getFileProximityDistanceCost() const { return FileProximityDistanceCost; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getSemaFileProximityScore() const { return SemaFileProximityScore; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getSymbolScopeDistanceCost() const { return SymbolScopeDistanceCost; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getSemaSaysInScope() const { return SemaSaysInScope; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getIsInstanceMember() const { return IsInstanceMember; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getHadContextType() const { return HadContextType; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getHadSymbolType() const { return HadSymbolType; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getTypeMatchesPreferred() const { return TypeMatchesPreferred; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getSymbolCategory() const { return SymbolCategory; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getContextKind() const { return ContextKind; }
  LLVM_ATTRIBUTE_ALWAYS_INLINE uint32_t getScope() const { return Scope; }

private:
  uint32_t IsDeprecated = 0;
  uint32_t IsReservedName = 0;
  uint32_t IsImplementationDetail = 0;
  uint32_t NumReferences = 0;
  uint32_t NumNameInContext = 0;
  uint32_t FractionNameInContext = 0;
  uint32_t IsNameInContext = 0;
  uint32_t IsInBaseClass = 0;
  uint32_t FileProximityDistanceCost = 0;
  uint32_t SemaFileProximityScore = 0;
  uint32_t SymbolScopeDistanceCost = 0;
  uint32_t SemaSaysInScope = 0;
  uint32_t IsInstanceMember = 0;
  uint32_t HadContextType = 0;
  uint32_t HadSymbolType = 0;
  uint32_t TypeMatchesPreferred = 0;
  uint32_t SymbolCategory = 0;
  uint32_t ContextKind = 0;
  uint32_t Scope = 0;

  // Produces an integer that sorts in the same order as F.
  // That is: a < b <==> orderEncode(a) < orderEncode(b).
  static uint32_t OrderEncode(float F);
};

float Evaluate(const Example&);
} // namespace clangd
} // namespace clang
#endif // GENERATED_DECISION_FOREST_MODEL_COMPLETIONMODEL_H
