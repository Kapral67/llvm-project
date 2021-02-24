/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
namespace Hexagon {
enum {
  ArchV5 = 0,
  ArchV55 = 1,
  ArchV60 = 2,
  ArchV62 = 3,
  ArchV65 = 4,
  ArchV66 = 5,
  ArchV67 = 6,
  ArchV68 = 7,
  ExtensionAudio = 8,
  ExtensionHVX = 9,
  ExtensionHVX64B = 10,
  ExtensionHVX128B = 11,
  ExtensionHVXV60 = 12,
  ExtensionHVXV62 = 13,
  ExtensionHVXV65 = 14,
  ExtensionHVXV66 = 15,
  ExtensionHVXV67 = 16,
  ExtensionHVXV68 = 17,
  ExtensionZReg = 18,
  FeatureCompound = 19,
  FeatureDuplex = 20,
  FeatureLongCalls = 21,
  FeatureMemNoShuf = 22,
  FeatureMemops = 23,
  FeatureNVJ = 24,
  FeatureNVS = 25,
  FeatureNoreturnStackElim = 26,
  FeaturePackets = 27,
  FeaturePreV65 = 28,
  FeatureReservedR19 = 29,
  FeatureSmallData = 30,
  FeatureUnsafeFP = 31,
  ProcTinyCore = 32,
  NumSubtargetFeatures = 33
};
} // end namespace Hexagon
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[] = {
  { "audio", "Hexagon Audio extension instructions", Hexagon::ExtensionAudio, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "compound", "Use compound instructions", Hexagon::FeatureCompound, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "duplex", "Enable generation of duplex instruction", Hexagon::FeatureDuplex, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx", "Hexagon HVX instructions", Hexagon::ExtensionHVX, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx-length128b", "Hexagon HVX 128B instructions", Hexagon::ExtensionHVX128B, { { { 0x200ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvx-length64b", "Hexagon HVX 64B instructions", Hexagon::ExtensionHVX64B, { { { 0x200ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv60", "Hexagon HVX instructions", Hexagon::ExtensionHVXV60, { { { 0x200ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv62", "Hexagon HVX instructions", Hexagon::ExtensionHVXV62, { { { 0x1200ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv65", "Hexagon HVX instructions", Hexagon::ExtensionHVXV65, { { { 0x3200ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv66", "Hexagon HVX instructions", Hexagon::ExtensionHVXV66, { { { 0x47200ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv67", "Hexagon HVX instructions", Hexagon::ExtensionHVXV67, { { { 0xf000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hvxv68", "Hexagon HVX instructions", Hexagon::ExtensionHVXV68, { { { 0x1f000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "long-calls", "Use constant-extended calls", Hexagon::FeatureLongCalls, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "mem_noshuf", "Supports mem_noshuf feature", Hexagon::FeatureMemNoShuf, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "memops", "Use memop instructions", Hexagon::FeatureMemops, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "noreturn-stack-elim", "Eliminate stack allocation in a noreturn function when possible", Hexagon::FeatureNoreturnStackElim, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "nvj", "Support for new-value jumps", Hexagon::FeatureNVJ, { { { 0x8000000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "nvs", "Support for new-value stores", Hexagon::FeatureNVS, { { { 0x8000000ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "packets", "Support for instruction packets", Hexagon::FeaturePackets, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "prev65", "Support features deprecated in v65", Hexagon::FeaturePreV65, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "reserved-r19", "Reserve register R19", Hexagon::FeatureReservedR19, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "small-data", "Allow GP-relative addressing of global variables", Hexagon::FeatureSmallData, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "tinycore", "Hexagon Tiny Core", Hexagon::ProcTinyCore, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "unsafe-fp", "Use unsafe FP math", Hexagon::FeatureUnsafeFP, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v5", "Enable Hexagon V5 architecture", Hexagon::ArchV5, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v55", "Enable Hexagon V55 architecture", Hexagon::ArchV55, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v60", "Enable Hexagon V60 architecture", Hexagon::ArchV60, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v62", "Enable Hexagon V62 architecture", Hexagon::ArchV62, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v65", "Enable Hexagon V65 architecture", Hexagon::ArchV65, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v66", "Enable Hexagon V66 architecture", Hexagon::ArchV66, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v67", "Enable Hexagon V67 architecture", Hexagon::ArchV67, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "v68", "Enable Hexagon V68 architecture", Hexagon::ArchV68, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "zreg", "Hexagon ZReg extension instructions", Hexagon::ExtensionZReg, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "HexagonItinerariesV60"
namespace HexagonItinerariesV60FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV60FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV60"
namespace HexagonItinerariesV60Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV60Bypass

// Functional units for "HexagonItinerariesV5"
namespace HexagonItinerariesV5FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
} // end namespace HexagonItinerariesV5FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV5"
namespace HexagonItinerariesV5Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV5Bypass

// Functional units for "HexagonItinerariesV55"
namespace HexagonItinerariesV55FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
} // end namespace HexagonItinerariesV55FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV55"
namespace HexagonItinerariesV55Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV55Bypass

// Functional units for "HexagonItinerariesV62"
namespace HexagonItinerariesV62FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV62FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV62"
namespace HexagonItinerariesV62Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV62Bypass

// Functional units for "HexagonItinerariesV65"
namespace HexagonItinerariesV65FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV65FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV65"
namespace HexagonItinerariesV65Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV65Bypass

// Functional units for "HexagonItinerariesV66"
namespace HexagonItinerariesV66FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV66FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV66"
namespace HexagonItinerariesV66Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV66Bypass

// Functional units for "HexagonItinerariesV67"
namespace HexagonItinerariesV67FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV67FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV67"
namespace HexagonItinerariesV67Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV67Bypass

// Functional units for "HexagonItinerariesV67T"
namespace HexagonItinerariesV67TFU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV67TFU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV67T"
namespace HexagonItinerariesV67TBypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV67TBypass

// Functional units for "HexagonItinerariesV68"
namespace HexagonItinerariesV68FU {
  const InstrStage::FuncUnits SLOT0 = 1ULL << 0;
  const InstrStage::FuncUnits SLOT1 = 1ULL << 1;
  const InstrStage::FuncUnits SLOT2 = 1ULL << 2;
  const InstrStage::FuncUnits SLOT3 = 1ULL << 3;
  const InstrStage::FuncUnits SLOT_ENDLOOP = 1ULL << 4;
  const InstrStage::FuncUnits CVI_ST = 1ULL << 5;
  const InstrStage::FuncUnits CVI_XLANE = 1ULL << 6;
  const InstrStage::FuncUnits CVI_SHIFT = 1ULL << 7;
  const InstrStage::FuncUnits CVI_MPY0 = 1ULL << 8;
  const InstrStage::FuncUnits CVI_MPY1 = 1ULL << 9;
  const InstrStage::FuncUnits CVI_LD = 1ULL << 10;
  const InstrStage::FuncUnits CVI_XLSHF = 1ULL << 11;
  const InstrStage::FuncUnits CVI_MPY01 = 1ULL << 12;
  const InstrStage::FuncUnits CVI_ALL = 1ULL << 13;
  const InstrStage::FuncUnits CVI_ALL_NOMEM = 1ULL << 14;
  const InstrStage::FuncUnits CVI_ZW = 1ULL << 15;
} // end namespace HexagonItinerariesV68FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV68"
namespace HexagonItinerariesV68Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV68Bypass

extern const llvm::InstrStage HexagonStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, HexagonItinerariesV60FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, HexagonItinerariesV60FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, HexagonItinerariesV60FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-9
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10-11
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12-14
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15-16
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 17-19
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 20-21
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22-25
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26-27
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 28-29
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 30-31
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 32-33
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 34-37
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 38-39
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40-43
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44-45
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 46-47
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 48-49
  { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 50-52
  { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53-55
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 56-57
  { 1, HexagonItinerariesV60FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58-59
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 60-62
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 63-64
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 65-67
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 68-69
  { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 70
  { 1, HexagonItinerariesV5FU::SLOT0 | HexagonItinerariesV5FU::SLOT1 | HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 71
  { 1, HexagonItinerariesV5FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72
  { 1, HexagonItinerariesV5FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 73
  { 1, HexagonItinerariesV5FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 74
  { 1, HexagonItinerariesV5FU::SLOT0 | HexagonItinerariesV5FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 75
  { 1, HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76
  { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 77-78
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 79
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1 | HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 80
  { 1, HexagonItinerariesV55FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81
  { 1, HexagonItinerariesV55FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 82
  { 1, HexagonItinerariesV55FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 83
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 84
  { 1, HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 85
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86-87
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 1, HexagonItinerariesV62FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 1, HexagonItinerariesV62FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 1, HexagonItinerariesV62FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 1, HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95-96
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97-98
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 99-101
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 102-103
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 104-106
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 107-108
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 109-112
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113-114
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115-116
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117-118
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119-120
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121-124
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125-126
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127-130
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131-132
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133-134
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135-136
  { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137-139
  { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140-142
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143-144
  { 1, HexagonItinerariesV62FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145-146
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147-149
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150-151
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152-154
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155-156
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 1, HexagonItinerariesV65FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 1, HexagonItinerariesV65FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 1, HexagonItinerariesV65FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 1, HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 164-165
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 166-167
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 168-170
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 171-172
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 173-175
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176-177
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 178-181
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 182-183
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 184-185
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 186-187
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 188-189
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 190-193
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 194-195
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 196-199
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 200-201
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 202-203
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 204-205
  { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 206-208
  { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 209-211
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 212-213
  { 1, HexagonItinerariesV65FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 214-215
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 216-218
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 219-220
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 221-223
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 224-225
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 226
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 227
  { 1, HexagonItinerariesV66FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 228
  { 1, HexagonItinerariesV66FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 229
  { 1, HexagonItinerariesV66FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 230
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 231
  { 1, HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 232
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 233-234
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 235-236
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 237-239
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 240-241
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 242-244
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 245-246
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 247-250
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 251-252
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 253-254
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 255-256
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 257-258
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 259-262
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 263-264
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 265-268
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 269-270
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 271-272
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 273-274
  { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 275-277
  { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 278-280
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 281-282
  { 1, HexagonItinerariesV66FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 283-284
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 285-287
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 288-289
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 290-292
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 293-294
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 295
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 296
  { 1, HexagonItinerariesV67FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 297
  { 1, HexagonItinerariesV67FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 298
  { 1, HexagonItinerariesV67FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 299
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 300
  { 1, HexagonItinerariesV67FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 301
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 302-303
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01 | HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 304-305
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 306-308
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 309-310
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 311-313
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLANE | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 314-315
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01 | HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 316-319
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 320-321
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 322-323
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 324-325
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 326-327
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 328-331
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 332-333
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 334-337
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 338-339
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 340-341
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 342-343
  { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1 | HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 344-346
  { 1, HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01 | HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 347-349
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1 | HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 350-351
  { 1, HexagonItinerariesV67FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 352-353
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY0 | HexagonItinerariesV67FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_SHIFT | HexagonItinerariesV67FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 354-356
  { 1, HexagonItinerariesV67FU::SLOT2 | HexagonItinerariesV67FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 357-358
  { 1, HexagonItinerariesV67FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_MPY01 | HexagonItinerariesV67FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 359-361
  { 1, HexagonItinerariesV67FU::SLOT0 | HexagonItinerariesV67FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 362-363
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 364
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 365
  { 1, HexagonItinerariesV67TFU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 366
  { 1, HexagonItinerariesV67TFU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 367
  { 1, HexagonItinerariesV67TFU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 368
  { 1, HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 369
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 370-371
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01 | HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 372-373
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 374-376
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 377-378
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 379-381
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLANE | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 382-383
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01 | HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 384-387
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 388
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 389
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 390-391
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 392-393
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 394-395
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 396-397
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 398-401
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 402-403
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 404-407
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 408-409
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 410-411
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 412-413
  { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1 | HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 414-416
  { 1, HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01 | HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 417-419
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1 | HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 420-421
  { 1, HexagonItinerariesV67TFU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 422-423
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY0 | HexagonItinerariesV67TFU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_SHIFT | HexagonItinerariesV67TFU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 424-426
  { 1, HexagonItinerariesV67TFU::SLOT2 | HexagonItinerariesV67TFU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 427-428
  { 1, HexagonItinerariesV67TFU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_MPY01 | HexagonItinerariesV67TFU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 429-431
  { 1, HexagonItinerariesV67TFU::SLOT0 | HexagonItinerariesV67TFU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV67TFU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 432-433
  { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 434
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 435
  { 1, HexagonItinerariesV68FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 436
  { 1, HexagonItinerariesV68FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 437
  { 1, HexagonItinerariesV68FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 438
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 439
  { 1, HexagonItinerariesV68FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 440
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1 | HexagonItinerariesV68FU::CVI_SHIFT | HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 441-442
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY01 | HexagonItinerariesV68FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 443-444
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1 | HexagonItinerariesV68FU::CVI_SHIFT | HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 445-447
  { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 448-449
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1 | HexagonItinerariesV68FU::CVI_SHIFT | HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 450-452
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_XLANE | HexagonItinerariesV68FU::CVI_SHIFT | HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 453-454
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY01 | HexagonItinerariesV68FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 455-458
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1 | HexagonItinerariesV68FU::CVI_SHIFT | HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 459-460
  { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 461-462
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 463-464
  { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 465-466
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 467-470
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 471-472
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 473-476
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 477-478
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 479-480
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 481-482
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY01 | HexagonItinerariesV68FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 483-485
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1 | HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 486-487
  { 1, HexagonItinerariesV68FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 488-489
  { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY0 | HexagonItinerariesV68FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_SHIFT | HexagonItinerariesV68FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 490-492
  { 1, HexagonItinerariesV68FU::SLOT2 | HexagonItinerariesV68FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 493-494
  { 1, HexagonItinerariesV68FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_MPY01 | HexagonItinerariesV68FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 495-497
  { 1, HexagonItinerariesV68FU::SLOT0 | HexagonItinerariesV68FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV68FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 498-499
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned HexagonOperandCycles[] = {
  0, // No itinerary
  3,   2,   2, // 1-3
  1,   1,   1, // 4-6
  3,   2, // 7-8
  3,   2,   2,   2, // 9-12
  3,   3,   2,   2, // 13-16
  3,   2,   2, // 17-19
  3,   3,   2, // 20-22
  3,   2,   2, // 23-25
  3,   1,   1, // 26-28
  3,   1,   2, // 29-31
  3,   2,   2, // 32-34
  1,   1,   1, // 35-37
  2, // 38
  2,   2, // 39-40
  2,   1, // 41-42
  3,   2,   2, // 43-45
  4,   2,   1,   2, // 46-49
  4,   1,   2, // 50-52
  4,   3,   1,   2, // 53-56
  1,   2,   2, // 57-59
  1,   2,   2, // 60-62
  3,   2,   2, // 63-65
  3,   3,   2, // 66-68
  2, // 69
  3, // 70
  4,   2, // 71-72
  3,   2, // 73-74
  3,   1, // 75-76
  4,   1,   2, // 77-79
  4,   1,   1, // 80-82
  4,   2,   1,   1, // 83-86
  4,   1,   1, // 87-89
  4,   2,   1,   1, // 90-93
  2, // 94
  4,   3,   1,   2,   2, // 95-99
  9,   7,   7, // 100-102
  3,   1,   2,   2,   2, // 103-107
  3,   1,   2,   2, // 108-111
  1, // 112
  9,   7,   7, // 113-115
  9,   1,   2, // 116-118
  1,   1,   1, // 119-121
  9,   2,   7, // 122-124
  1,   2,   7, // 125-127
  9,   2,   7,   7, // 128-131
  4,   2,   2, // 132-134
  2,   1,   2,   2, // 135-138
  2,   1,   2,   3, // 139-142
  1,   2,   2, // 143-145
  1,   2,   3, // 146-148
  4,   2,   2,   2,   2, // 149-153
  3,   1,   2,   3, // 154-157
  1,   2,   2, // 158-160
  2,   1,   2,   2, // 161-164
  3,   1,   2,   2, // 165-168
  4,   2,   2, // 169-171
  1,   1,   1, // 172-174
  9,   7,   7,   7, // 175-178
  9,   7, // 179-180
  9, // 181
  1, // 182
  3,   2,   2, // 183-185
  3,   2, // 186-187
  4,   3,   2, // 188-190
  4,   1, // 191-192
  4,   1,   2, // 193-195
  3,   1,   2, // 196-198
  1,   2,   3, // 199-201
  1,   2,   2, // 202-204
  4,   2, // 205-206
  4,   2,   2, // 207-209
  4,   2,   2, // 210-212
  4,   2,   2, // 213-215
  3,   2, // 216-217
  3,   2,   2, // 218-220
  3,   2,   2, // 221-223
  4,   2, // 224-225
  4,   1, // 226-227
  3,   2,   2, // 228-230
  3,   2,   2, // 231-233
  4,   4,   1,   1,   2, // 234-238
  3,   1,   2, // 239-241
  2, // 242
  4,   1,   1, // 243-245
  4,   1,   1,   2, // 246-249
  4,   4,   1,   1,   1, // 250-254
  3,   2,   2, // 255-257
  4,   4,   2,   2, // 258-261
  4,   2,   2, // 262-264
  3,   2, // 265-266
  3,   1,   1, // 267-269
  3,   1, // 270-271
  3,   2,   2,   2, // 272-275
  4,   2, // 276-277
  3,   2,   2,   2, // 278-281
  5,   1, // 282-283
  5,   1,   1, // 284-286
  4,   2, // 287-288
  5,   2,   1,   1, // 289-292
  4,   2,   1,   1, // 293-296
  4,   1,   1, // 297-299
  5,   1,   1, // 300-302
  5,   2,   1,   1, // 303-306
  5,   2,   1,   1,   2, // 307-311
  5,   5,   1, // 312-314
  4,   2,   2, // 315-317
  5,   5,   1,   1, // 318-321
  4,   2, // 322-323
  4,   1, // 324-325
  2,   2, // 326-327
  1, // 328
  2,   1, // 329-330
  2, // 331
  3,   2, // 332-333
  2,   2, // 334-335
  3,   1, // 336-337
  2,   1, // 338-339
  1,   2, // 340-341
  2,   2, // 342-343
  2,   1, // 344-345
  2, // 346
  2,   2, // 347-348
  2,   1, // 349-350
  2, // 351
  3,   2,   2, // 352-354
  1,   1,   2, // 355-357
  3,   2,   2, // 358-360
  1,   2,   2, // 361-363
  2,   3,   2, // 364-366
  3,   2,   2, // 367-369
  3,   2, // 370-371
  1,   2, // 372-373
  4,   3,   2,   1,   2, // 374-378
  4,   3,   2,   1,   2,   2, // 379-384
  4,   2, // 385-386
  4,   1, // 387-388
  4,   1, // 389-390
  4,   3,   3,   1,   2, // 391-395
  4,   3,   2,   2, // 396-399
  4,   2,   1,   2,   2, // 400-404
  4,   3,   2, // 405-407
  4,   1,   2,   2, // 408-411
  4,   1,   1,   2, // 412-415
  4,   2,   2, // 416-418
  4,   2,   1,   1,   2, // 419-423
  4,   3,   1,   1,   2, // 424-428
  1,   1,   2, // 429-431
  4,   2,   2,   2, // 432-435
  4,   2,   1,   2, // 436-439
  4,   2,   2,   2, // 440-443
  4,   2,   2,   1, // 444-447
  2,   2, // 448-449
  2,   3, // 450-451
  1, // 452
  4,   2, // 453-454
  4,   1,   1, // 455-457
  4,   2,   2, // 458-460
  4,   2,   2, // 461-463
  3,   2,   1,   2,   2, // 464-468
  3,   3,   1,   2,   2, // 469-473
  3,   2,   1,   2,   3, // 474-478
  3,   3,   1,   2,   3, // 479-483
  3,   1,   2,   2,   3, // 484-488
  4,   1,   1, // 489-491
  1,   3, // 492-493
  4,   2, // 494-495
  2,   2,   2, // 496-498
  2,   1,   1,   2,   2, // 499-503
  3,   2,   2, // 504-506
  3,   1,   1,   2,   2, // 507-511
  2,   2,   3, // 512-514
  2,   1,   1,   2,   3, // 515-519
  3,   2,   3, // 520-522
  3,   1,   1,   2,   3, // 523-527
  1,   1,   2,   2, // 528-531
  1,   2,   2,   2, // 532-535
  1,   1,   2,   3, // 536-539
  1,   2,   2,   3, // 540-543
  4,   1,   1,   2, // 544-547
  4,   2,   1,   1,   2, // 548-552
  4,   2, // 553-554
  4,   2,   2,   2, // 555-558
  3,   2, // 559-560
  3,   2,   2, // 561-563
  3,   2, // 564-565
  3, // 566
  3, // 567
  1,   2, // 568-569
  2, // 570
  1,   2, // 571-572
  4,   7,   1, // 573-575
  9,   2, // 576-577
  9,   2, // 578-579
  9,   5,   5,   2, // 580-583
  9,   7,   5,   5,   2, // 584-588
  9,   1,   2, // 589-591
  9,   3,   1,   2, // 592-595
  9,   2,   1,   2, // 596-599
  9,   3,   2,   1,   2, // 600-604
  9,   3,   1,   2, // 605-608
  9,   1,   2, // 609-611
  9,   2,   1,   2, // 612-615
  9,   3,   2,   1,   2, // 616-620
  9,   3,   1,   2, // 621-624
  1,   2,   5, // 625-627
  2,   1,   2,   5, // 628-631
  3,   2,   1,   2,   5, // 632-636
  3,   1,   2,   5, // 637-640
  1,   2,   5, // 641-643
  2,   1,   2,   5, // 644-647
  3,   2,   1,   2,   5, // 648-652
  3,   1,   2,   5, // 653-656
  2,   1,   2,   7, // 657-660
  3,   2,   1,   2,   7, // 661-665
  7,   1,   2,   7, // 666-669
  3,   7,   1,   2,   7, // 670-674
  3,   1,   2,   7, // 675-678
  1,   2, // 679-680
  3,   1,   2, // 681-683
  9,   5,   5, // 684-686
  9,   7,   7,   7, // 687-690
  9,   9,   7,   7,   7, // 691-695
  9,   9,   7,   7, // 696-699
  9,   5,   5, // 700-702
  9,   5,   5, // 703-705
  9,   7,   5,   5, // 706-709
  9,   5,   5,   2, // 710-713
  9,   7,   2, // 714-716
  9,   7,   7,   2, // 717-720
  9,   5,   2, // 721-723
  9,   7,   5,   2, // 724-727
  9,   7,   5,   5, // 728-731
  9,   5,   5,   2, // 732-735
  9,   5, // 736-737
  9,   9,   5,   5,   2, // 738-742
  9,   5, // 743-744
  9,   5,   5, // 745-747
  9,   5,   5,   2, // 748-751
  9,   5,   2, // 752-754
  9,   7,   5,   2, // 755-758
  9,   5,   2, // 759-761
  9,   7,   5,   2, // 762-765
  1,   2,   7, // 766-768
  7,   1,   2,   7, // 769-772
  1,   2,   7, // 773-775
  7,   1,   2,   7, // 776-779
  3, // 780
  9,   5,   2, // 781-783
  9,   7,   5,   5,   2, // 784-788
  9,   5,   5,   2, // 789-792
  9,   5,   2, // 793-795
  9,   7,   5,   2, // 796-799
  9,   5,   2,   2, // 800-803
  9,   7,   5,   2,   2, // 804-808
  9,   5,   2, // 809-811
  9,   7,   5,   2, // 812-815
  9,   3,   5,   2, // 816-819
  9,   3,   7,   5,   2, // 820-824
  9,   5,   2, // 825-827
  9,   5,   5, // 828-830
  9,   7, // 831-832
  1,   2,   7,   7, // 833-836
  7,   1,   2,   7,   7, // 837-841
  1,   2,   7,   7, // 842-845
  7,   1,   2,   7,   7, // 846-850
  9,   7,   7,   7, // 851-854
  9,   5, // 855-856
  9,   7,   5, // 857-859
  2, // 860
  3,   2, // 861-862
  1,   2, // 863-864
  3,   1,   2, // 865-867
  2,   1,   2, // 868-870
  3,   2,   1,   2, // 871-874
  1, // 875
  1,   2, // 876-877
  1, // 878
  1, // 879
  1,   1, // 880-881
  1, // 882
  1,   1, // 883-884
  3, // 885
  3,   2,   2, // 886-888
  1,   1,   1, // 889-891
  3,   2, // 892-893
  3,   2,   2,   2, // 894-897
  3,   3,   2,   2, // 898-901
  3,   2,   2, // 902-904
  3,   3,   2, // 905-907
  3,   2,   2, // 908-910
  3,   1,   1, // 911-913
  3,   1,   2, // 914-916
  3,   2,   2, // 917-919
  1,   1,   1, // 920-922
  2, // 923
  2,   2, // 924-925
  2,   1, // 926-927
  3,   2,   2, // 928-930
  4,   2,   1,   2, // 931-934
  4,   1,   2, // 935-937
  4,   3,   1,   2, // 938-941
  1,   2,   2, // 942-944
  1,   2,   2, // 945-947
  4,   2,   1, // 948-950
  4,   3,   1, // 951-953
  2, // 954
  3, // 955
  4,   2, // 956-957
  4,   2, // 958-959
  2,   1, // 960-961
  4,   1,   2, // 962-964
  4,   1,   1, // 965-967
  4,   2,   1,   1, // 968-971
  4,   1,   1, // 972-974
  4,   2,   1,   1, // 975-978
  2, // 979
  4,   3,   1,   2,   2, // 980-984
  3,   1,   2,   2,   2, // 985-989
  3,   1,   2,   2, // 990-993
  1, // 994
  1,   1,   1, // 995-997
  4,   2,   2, // 998-1000
  2,   1,   2,   2, // 1001-1004
  2,   1,   2,   3, // 1005-1008
  1,   2,   2, // 1009-1011
  1,   2,   3, // 1012-1014
  3,   2,   2,   2,   2, // 1015-1019
  3,   1,   2,   3, // 1020-1023
  1,   2,   2, // 1024-1026
  2,   1,   2,   2, // 1027-1030
  3,   1,   2,   2, // 1031-1034
  4,   2,   2, // 1035-1037
  1,   1,   1, // 1038-1040
  1, // 1041
  3,   2,   2, // 1042-1044
  3,   2, // 1045-1046
  4,   3,   2, // 1047-1049
  4,   1, // 1050-1051
  4,   1,   2, // 1052-1054
  3,   1,   2, // 1055-1057
  1,   2,   3, // 1058-1060
  1,   2,   2, // 1061-1063
  4,   2, // 1064-1065
  4,   2,   2, // 1066-1068
  3,   2,   2, // 1069-1071
  4,   2,   2, // 1072-1074
  3,   2, // 1075-1076
  3,   2,   2, // 1077-1079
  4,   2,   2, // 1080-1082
  4,   2, // 1083-1084
  4,   1, // 1085-1086
  3,   2,   2, // 1087-1089
  4,   2,   2, // 1090-1092
  4,   4,   1,   1,   2, // 1093-1097
  3,   1,   2, // 1098-1100
  2, // 1101
  4,   1,   1, // 1102-1104
  4,   1,   1,   1, // 1105-1108
  4,   4,   1,   1,   1, // 1109-1113
  3,   2,   2, // 1114-1116
  4,   4,   2,   2, // 1117-1120
  4,   2,   2, // 1121-1123
  3,   2, // 1124-1125
  3,   1,   1, // 1126-1128
  3,   1, // 1129-1130
  3,   2,   2,   2, // 1131-1134
  4,   2, // 1135-1136
  3,   2,   2,   2, // 1137-1140
  4,   1, // 1141-1142
  5,   1,   1, // 1143-1145
  4,   2, // 1146-1147
  5,   2,   1,   1, // 1148-1151
  4,   2,   1,   1, // 1152-1155
  4,   1,   1, // 1156-1158
  4,   1,   1, // 1159-1161
  4,   1,   1,   1, // 1162-1165
  4,   1,   1,   1,   2, // 1166-1170
  4,   4,   1, // 1171-1173
  4,   1,   1, // 1174-1176
  4,   4,   1,   1, // 1177-1180
  4,   2, // 1181-1182
  4,   1, // 1183-1184
  2,   2, // 1185-1186
  1, // 1187
  2,   1, // 1188-1189
  2, // 1190
  3,   2, // 1191-1192
  2,   2, // 1193-1194
  3,   1, // 1195-1196
  2,   1, // 1197-1198
  1,   2, // 1199-1200
  2,   2, // 1201-1202
  2,   1, // 1203-1204
  2, // 1205
  2,   2, // 1206-1207
  2,   1, // 1208-1209
  2, // 1210
  3,   1,   2, // 1211-1213
  1,   1,   2, // 1214-1216
  3,   2,   2, // 1217-1219
  1,   2,   2, // 1220-1222
  1,   3,   2, // 1223-1225
  3,   2,   2, // 1226-1228
  3,   2, // 1229-1230
  1,   2, // 1231-1232
  4,   3,   2,   1,   2, // 1233-1237
  4,   3,   2,   1,   2,   2, // 1238-1243
  4,   2, // 1244-1245
  4,   1, // 1246-1247
  4,   1, // 1248-1249
  4,   3,   3,   1,   2, // 1250-1254
  4,   3,   2,   2, // 1255-1258
  4,   2,   1,   2,   2, // 1259-1263
  4,   3,   2, // 1264-1266
  4,   1,   2,   2, // 1267-1270
  4,   1,   1,   2, // 1271-1274
  4,   2,   2, // 1275-1277
  4,   2,   1,   1,   2, // 1278-1282
  4,   3,   1,   1,   2, // 1283-1287
  1,   1,   2, // 1288-1290
  4,   2,   2,   2, // 1291-1294
  4,   2,   1,   2, // 1295-1298
  3,   2,   2,   2, // 1299-1302
  4,   2,   2,   1, // 1303-1306
  2,   2, // 1307-1308
  2,   3, // 1309-1310
  1, // 1311
  3,   2, // 1312-1313
  4,   1,   1, // 1314-1316
  4,   2,   2, // 1317-1319
  4,   2,   2, // 1320-1322
  3,   2,   1,   2,   2, // 1323-1327
  3,   3,   1,   2,   2, // 1328-1332
  3,   2,   1,   2,   3, // 1333-1337
  3,   3,   1,   2,   3, // 1338-1342
  3,   1,   2,   2,   3, // 1343-1347
  4,   1,   1, // 1348-1350
  1,   3, // 1351-1352
  3,   2, // 1353-1354
  2,   2,   2, // 1355-1357
  2,   1,   1,   2,   2, // 1358-1362
  3,   2,   2, // 1363-1365
  3,   1,   1,   2,   2, // 1366-1370
  2,   2,   3, // 1371-1373
  2,   1,   1,   2,   3, // 1374-1378
  3,   2,   3, // 1379-1381
  3,   1,   1,   2,   3, // 1382-1386
  1,   1,   2,   2, // 1387-1390
  1,   2,   2,   2, // 1391-1394
  1,   1,   2,   3, // 1395-1398
  1,   2,   2,   3, // 1399-1402
  4,   1,   1,   2, // 1403-1406
  4,   2,   1,   1,   2, // 1407-1411
  4,   2, // 1412-1413
  4,   2,   2,   2, // 1414-1417
  3,   2, // 1418-1419
  3,   2,   2, // 1420-1422
  3,   2, // 1423-1424
  3, // 1425
  3, // 1426
  1,   2, // 1427-1428
  2, // 1429
  1,   2, // 1430-1431
  1, // 1432
  1,   2, // 1433-1434
  1, // 1435
  1, // 1436
  1,   1, // 1437-1438
  1, // 1439
  1,   1, // 1440-1441
  3, // 1442
  4,   2,   2, // 1443-1445
  1,   1,   1, // 1446-1448
  3,   2, // 1449-1450
  3,   2,   2,   2, // 1451-1454
  3,   3,   2,   2, // 1455-1458
  3,   2,   2, // 1459-1461
  3,   3,   2, // 1462-1464
  3,   2,   2, // 1465-1467
  3,   1,   1, // 1468-1470
  3,   1,   2, // 1471-1473
  3,   2,   2, // 1474-1476
  1,   1,   1, // 1477-1479
  2, // 1480
  2,   2, // 1481-1482
  2,   1, // 1483-1484
  3,   2,   2, // 1485-1487
  4,   2,   1,   2, // 1488-1491
  4,   1,   2, // 1492-1494
  4,   3,   1,   2, // 1495-1498
  1,   2,   2, // 1499-1501
  1,   2,   2, // 1502-1504
  3,   2,   2, // 1505-1507
  3,   3,   2, // 1508-1510
  2, // 1511
  3, // 1512
  4,   2, // 1513-1514
  3,   2, // 1515-1516
  3,   1, // 1517-1518
  4,   1,   2, // 1519-1521
  4,   1,   1, // 1522-1524
  4,   2,   1,   1, // 1525-1528
  4,   1,   1, // 1529-1531
  4,   2,   1,   1, // 1532-1535
  2, // 1536
  4,   3,   1,   2,   2, // 1537-1541
  9,   7,   7, // 1542-1544
  3,   1,   2,   2,   2, // 1545-1549
  3,   1,   2,   2, // 1550-1553
  1, // 1554
  9,   7,   7, // 1555-1557
  9,   1,   2, // 1558-1560
  1,   1,   1, // 1561-1563
  9,   2,   7, // 1564-1566
  1,   2,   7, // 1567-1569
  9,   2,   7,   7, // 1570-1573
  4,   2,   2, // 1574-1576
  2,   1,   2,   2, // 1577-1580
  2,   1,   2,   3, // 1581-1584
  1,   2,   2, // 1585-1587
  1,   2,   3, // 1588-1590
  4,   2,   2,   2,   2, // 1591-1595
  3,   1,   2,   3, // 1596-1599
  1,   2,   2, // 1600-1602
  2,   1,   2,   2, // 1603-1606
  3,   1,   2,   2, // 1607-1610
  4,   2,   2, // 1611-1613
  1,   1,   1, // 1614-1616
  9,   7,   7,   7, // 1617-1620
  9,   7, // 1621-1622
  9, // 1623
  1, // 1624
  3,   2,   2, // 1625-1627
  3,   2, // 1628-1629
  4,   3,   2, // 1630-1632
  4,   1, // 1633-1634
  4,   1,   2, // 1635-1637
  3,   1,   2, // 1638-1640
  1,   2,   3, // 1641-1643
  1,   2,   2, // 1644-1646
  4,   2, // 1647-1648
  4,   2,   2, // 1649-1651
  4,   2,   2, // 1652-1654
  4,   2,   2, // 1655-1657
  3,   2, // 1658-1659
  3,   2,   2, // 1660-1662
  3,   2,   2, // 1663-1665
  4,   2, // 1666-1667
  4,   1, // 1668-1669
  3,   2,   2, // 1670-1672
  3,   2,   2, // 1673-1675
  3,   4,   2,   2,   2, // 1676-1680
  3,   1,   2, // 1681-1683
  2, // 1684
  4,   1,   1, // 1685-1687
  4,   1,   1,   2, // 1688-1691
  4,   4,   2,   1,   1, // 1692-1696
  3,   2,   2, // 1697-1699
  4,   4,   2,   2, // 1700-1703
  4,   2,   2, // 1704-1706
  3,   2, // 1707-1708
  3,   1,   1, // 1709-1711
  3,   1, // 1712-1713
  3,   2,   2,   2, // 1714-1717
  4,   2, // 1718-1719
  3,   2,   2,   2, // 1720-1723
  5,   1, // 1724-1725
  5,   1,   1, // 1726-1728
  4,   2, // 1729-1730
  5,   2,   1,   1, // 1731-1734
  4,   2,   1,   1, // 1735-1738
  4,   1,   1, // 1739-1741
  5,   1,   1, // 1742-1744
  5,   2,   1,   1, // 1745-1748
  5,   2,   1,   1,   2, // 1749-1753
  5,   5,   1, // 1754-1756
  4,   2,   2, // 1757-1759
  5,   5,   1,   1, // 1760-1763
  4,   2, // 1764-1765
  4,   1, // 1766-1767
  2,   2, // 1768-1769
  1, // 1770
  2,   1, // 1771-1772
  2, // 1773
  3,   2, // 1774-1775
  2,   2, // 1776-1777
  3,   1, // 1778-1779
  2,   1, // 1780-1781
  1,   2, // 1782-1783
  2,   2, // 1784-1785
  2,   1, // 1786-1787
  2, // 1788
  2,   2, // 1789-1790
  2,   1, // 1791-1792
  2, // 1793
  3,   2,   2, // 1794-1796
  1,   1,   2, // 1797-1799
  3,   2,   2, // 1800-1802
  1,   2,   2, // 1803-1805
  2,   3,   2, // 1806-1808
  3,   2,   2, // 1809-1811
  3,   2, // 1812-1813
  1,   2, // 1814-1815
  4,   3,   2,   1,   2, // 1816-1820
  4,   3,   2,   1,   2,   2, // 1821-1826
  4,   2, // 1827-1828
  4,   1, // 1829-1830
  4,   1, // 1831-1832
  4,   3,   3,   1,   2, // 1833-1837
  4,   3,   2,   2, // 1838-1841
  4,   2,   1,   2,   2, // 1842-1846
  4,   3,   2, // 1847-1849
  4,   1,   2,   2, // 1850-1853
  4,   1,   1,   2, // 1854-1857
  4,   2,   2, // 1858-1860
  4,   2,   1,   1,   2, // 1861-1865
  4,   3,   1,   1,   2, // 1866-1870
  1,   1,   2, // 1871-1873
  4,   2,   2,   2, // 1874-1877
  4,   2,   1,   2, // 1878-1881
  4,   2,   2,   2, // 1882-1885
  4,   2,   2,   1, // 1886-1889
  2,   2, // 1890-1891
  2,   3, // 1892-1893
  1, // 1894
  4,   2, // 1895-1896
  4,   1,   1, // 1897-1899
  4,   2,   2, // 1900-1902
  4,   2,   2, // 1903-1905
  3,   2,   1,   2,   2, // 1906-1910
  3,   3,   1,   2,   2, // 1911-1915
  3,   2,   1,   2,   3, // 1916-1920
  3,   3,   1,   2,   3, // 1921-1925
  3,   1,   2,   2,   3, // 1926-1930
  4,   1,   1, // 1931-1933
  1,   3, // 1934-1935
  4,   2, // 1936-1937
  2,   2,   2, // 1938-1940
  2,   1,   1,   2,   2, // 1941-1945
  3,   2,   2, // 1946-1948
  3,   1,   1,   2,   2, // 1949-1953
  2,   2,   3, // 1954-1956
  2,   1,   1,   2,   3, // 1957-1961
  3,   2,   3, // 1962-1964
  3,   1,   1,   2,   3, // 1965-1969
  1,   1,   2,   2, // 1970-1973
  1,   2,   2,   2, // 1974-1977
  1,   1,   2,   3, // 1978-1981
  1,   2,   2,   3, // 1982-1985
  4,   1,   1,   2, // 1986-1989
  4,   2,   1,   1,   2, // 1990-1994
  4,   2, // 1995-1996
  4,   2,   2,   2, // 1997-2000
  3,   2, // 2001-2002
  3,   2,   2, // 2003-2005
  3,   2, // 2006-2007
  3, // 2008
  3, // 2009
  1,   2, // 2010-2011
  2, // 2012
  1,   2, // 2013-2014
  4,   7,   1, // 2015-2017
  9,   2, // 2018-2019
  9,   2, // 2020-2021
  9,   5,   5,   2, // 2022-2025
  9,   7,   5,   5,   2, // 2026-2030
  9,   1,   2, // 2031-2033
  9,   3,   1,   2, // 2034-2037
  9,   2,   1,   2, // 2038-2041
  9,   3,   2,   1,   2, // 2042-2046
  9,   3,   1,   2, // 2047-2050
  9,   1,   2, // 2051-2053
  9,   2,   1,   2, // 2054-2057
  9,   3,   2,   1,   2, // 2058-2062
  9,   3,   1,   2, // 2063-2066
  1,   2,   5, // 2067-2069
  2,   1,   2,   5, // 2070-2073
  3,   2,   1,   2,   5, // 2074-2078
  3,   1,   2,   5, // 2079-2082
  1,   2,   5, // 2083-2085
  2,   1,   2,   5, // 2086-2089
  3,   2,   1,   2,   5, // 2090-2094
  3,   1,   2,   5, // 2095-2098
  2,   1,   2,   7, // 2099-2102
  3,   2,   1,   2,   7, // 2103-2107
  7,   1,   2,   7, // 2108-2111
  3,   7,   1,   2,   7, // 2112-2116
  3,   1,   2,   7, // 2117-2120
  1,   2, // 2121-2122
  3,   1,   2, // 2123-2125
  9,   5,   5, // 2126-2128
  9,   7,   7,   7, // 2129-2132
  9,   9,   7,   7,   7, // 2133-2137
  9,   9,   7,   7, // 2138-2141
  9,   5,   5, // 2142-2144
  9,   5,   5, // 2145-2147
  9,   7,   5,   5, // 2148-2151
  9,   5,   5,   2, // 2152-2155
  9,   7,   2, // 2156-2158
  9,   7,   7,   2, // 2159-2162
  9,   5,   2, // 2163-2165
  9,   7,   5,   2, // 2166-2169
  9,   7,   5,   5, // 2170-2173
  9,   5,   5,   2, // 2174-2177
  9,   5, // 2178-2179
  9,   9,   5,   5,   2, // 2180-2184
  9,   5, // 2185-2186
  9,   5,   5, // 2187-2189
  9,   5,   5,   2, // 2190-2193
  9,   5,   2, // 2194-2196
  9,   7,   5,   2, // 2197-2200
  9,   5,   2, // 2201-2203
  9,   7,   5,   2, // 2204-2207
  1,   2,   7, // 2208-2210
  7,   1,   2,   7, // 2211-2214
  1,   2,   7, // 2215-2217
  7,   1,   2,   7, // 2218-2221
  3, // 2222
  9,   5,   2, // 2223-2225
  9,   7,   5,   5,   2, // 2226-2230
  9,   5,   5,   2, // 2231-2234
  9,   5,   2, // 2235-2237
  9,   7,   5,   2, // 2238-2241
  9,   5,   2,   2, // 2242-2245
  9,   7,   5,   2,   2, // 2246-2250
  9,   5,   2, // 2251-2253
  9,   7,   5,   2, // 2254-2257
  9,   3,   5,   2, // 2258-2261
  9,   3,   7,   5,   2, // 2262-2266
  9,   5,   2, // 2267-2269
  9,   7,   7, // 2270-2272
  9,   7, // 2273-2274
  1,   2,   7,   7, // 2275-2278
  7,   1,   2,   7,   7, // 2279-2283
  1,   2,   7,   7, // 2284-2287
  7,   1,   2,   7,   7, // 2288-2292
  9,   7,   7,   7, // 2293-2296
  9,   5, // 2297-2298
  9,   7,   5, // 2299-2301
  2, // 2302
  3,   2, // 2303-2304
  1,   2, // 2305-2306
  3,   1,   2, // 2307-2309
  2,   1,   2, // 2310-2312
  3,   2,   1,   2, // 2313-2316
  1, // 2317
  1,   2, // 2318-2319
  1, // 2320
  1, // 2321
  1,   1, // 2322-2323
  1, // 2324
  1,   1, // 2325-2326
  3, // 2327
  4,   2,   2, // 2328-2330
  1,   1,   1, // 2331-2333
  3,   2, // 2334-2335
  3,   2,   2,   2, // 2336-2339
  4,   3,   2,   2, // 2340-2343
  3,   2,   2, // 2344-2346
  4,   3,   2, // 2347-2349
  3,   2,   2, // 2350-2352
  3,   2,   2, // 2353-2355
  3,   2,   2, // 2356-2358
  3,   2,   2, // 2359-2361
  1,   1,   1, // 2362-2364
  2, // 2365
  2,   2, // 2366-2367
  2,   2, // 2368-2369
  4,   1,   2, // 2370-2372
  4,   2,   1,   2, // 2373-2376
  4,   1,   2, // 2377-2379
  4,   3,   1,   2, // 2380-2383
  1,   2,   2, // 2384-2386
  1,   2,   2, // 2387-2389
  3,   2,   1, // 2390-2392
  3,   3,   1, // 2393-2395
  2, // 2396
  3, // 2397
  4,   1, // 2398-2399
  3,   1, // 2400-2401
  3,   1, // 2402-2403
  4,   1,   2, // 2404-2406
  4,   1,   1, // 2407-2409
  4,   2,   1,   1, // 2410-2413
  4,   1,   1, // 2414-2416
  4,   2,   1,   1, // 2417-2420
  2, // 2421
  4,   3,   1,   2,   2, // 2422-2426
  9,   7,   7, // 2427-2429
  3,   1,   2,   2,   2, // 2430-2434
  3,   1,   2,   2, // 2435-2438
  2, // 2439
  9,   7,   7, // 2440-2442
  9,   1,   2, // 2443-2445
  1,   1,   1, // 2446-2448
  9,   2,   7, // 2449-2451
  1,   2,   7, // 2452-2454
  9,   2,   7,   7, // 2455-2458
  4,   2,   2, // 2459-2461
  2,   1,   2,   2, // 2462-2465
  2,   1,   2,   3, // 2466-2469
  1,   2,   2, // 2470-2472
  1,   2,   3, // 2473-2475
  4,   2,   2,   2,   2, // 2476-2480
  3,   1,   2,   3, // 2481-2484
  1,   2,   2, // 2485-2487
  2,   1,   2,   2, // 2488-2491
  3,   1,   2,   2, // 2492-2495
  3,   1,   2, // 2496-2498
  1,   1,   1, // 2499-2501
  9,   7,   7,   7, // 2502-2505
  9,   7, // 2506-2507
  9, // 2508
  1, // 2509
  3,   2,   2, // 2510-2512
  3,   2, // 2513-2514
  4,   3,   2, // 2515-2517
  4,   1, // 2518-2519
  4,   1,   2, // 2520-2522
  3,   1,   2, // 2523-2525
  1,   2,   3, // 2526-2528
  1,   2,   2, // 2529-2531
  4,   2, // 2532-2533
  4,   2,   2, // 2534-2536
  4,   2,   2, // 2537-2539
  4,   2,   2, // 2540-2542
  3,   2, // 2543-2544
  3,   2,   2, // 2545-2547
  3,   2,   2, // 2548-2550
  4,   2, // 2551-2552
  4,   1, // 2553-2554
  3,   2,   2, // 2555-2557
  3,   2,   2, // 2558-2560
  3,   4,   2,   2,   2, // 2561-2565
  3,   2,   2, // 2566-2568
  2, // 2569
  4,   1,   1, // 2570-2572
  4,   1,   1,   2, // 2573-2576
  4,   4,   2,   1,   1, // 2577-2581
  3,   2,   2, // 2582-2584
  4,   4,   2,   2, // 2585-2588
  4,   2,   2, // 2589-2591
  3,   2, // 2592-2593
  3,   2,   2, // 2594-2596
  3,   2, // 2597-2598
  3,   2,   2,   2, // 2599-2602
  4,   2, // 2603-2604
  3,   2,   2,   2, // 2605-2608
  5,   1, // 2609-2610
  5,   1,   1, // 2611-2613
  4,   2, // 2614-2615
  5,   2,   1,   1, // 2616-2619
  4,   2,   1,   1, // 2620-2623
  4,   1,   1, // 2624-2626
  5,   1,   1, // 2627-2629
  5,   2,   1,   1, // 2630-2633
  5,   2,   1,   1,   2, // 2634-2638
  5,   5,   1, // 2639-2641
  4,   2,   2, // 2642-2644
  5,   5,   1,   1, // 2645-2648
  4,   2, // 2649-2650
  4,   1, // 2651-2652
  2,   2, // 2653-2654
  1, // 2655
  2,   1, // 2656-2657
  2, // 2658
  3,   2, // 2659-2660
  2,   2, // 2661-2662
  3,   2, // 2663-2664
  2,   2, // 2665-2666
  2,   2, // 2667-2668
  2,   2, // 2669-2670
  2,   1, // 2671-2672
  2, // 2673
  2,   2, // 2674-2675
  2,   1, // 2676-2677
  2, // 2678
  3,   2,   2, // 2679-2681
  2,   2,   2, // 2682-2684
  3,   2,   2, // 2685-2687
  2,   2,   2, // 2688-2690
  2,   3,   2, // 2691-2693
  3,   2,   2, // 2694-2696
  3,   2, // 2697-2698
  2,   2, // 2699-2700
  4,   3,   2,   1,   2, // 2701-2705
  4,   3,   2,   1,   2,   2, // 2706-2711
  4,   2, // 2712-2713
  4,   1, // 2714-2715
  4,   1, // 2716-2717
  4,   4,   3,   1,   2, // 2718-2722
  4,   3,   2,   2, // 2723-2726
  4,   2,   1,   2,   2, // 2727-2731
  4,   3,   2, // 2732-2734
  4,   1,   2,   2, // 2735-2738
  4,   1,   1,   2, // 2739-2742
  4,   2,   2, // 2743-2745
  4,   2,   1,   1,   2, // 2746-2750
  4,   3,   1,   1,   2, // 2751-2755
  1,   1,   2, // 2756-2758
  4,   2,   2,   2, // 2759-2762
  4,   2,   1,   2, // 2763-2766
  4,   2,   2,   2, // 2767-2770
  4,   2,   2,   1, // 2771-2774
  2,   2, // 2775-2776
  2,   3, // 2777-2778
  1, // 2779
  4,   2, // 2780-2781
  4,   1,   1, // 2782-2784
  4,   2,   2, // 2785-2787
  4,   2,   2, // 2788-2790
  3,   2,   1,   2,   2, // 2791-2795
  4,   3,   1,   2,   1, // 2796-2800
  3,   2,   1,   2,   3, // 2801-2805
  4,   3,   1,   2,   3, // 2806-2810
  3,   1,   2,   2,   3, // 2811-2815
  4,   1,   1, // 2816-2818
  1,   3, // 2819-2820
  4,   2, // 2821-2822
  2,   2,   2, // 2823-2825
  2,   1,   1,   2,   2, // 2826-2830
  3,   2,   2, // 2831-2833
  3,   1,   1,   2,   2, // 2834-2838
  2,   2,   3, // 2839-2841
  2,   1,   1,   2,   3, // 2842-2846
  3,   2,   3, // 2847-2849
  3,   1,   1,   2,   3, // 2850-2854
  1,   1,   2,   2, // 2855-2858
  1,   2,   2,   2, // 2859-2862
  1,   1,   2,   3, // 2863-2866
  1,   2,   2,   3, // 2867-2870
  4,   1,   1,   2, // 2871-2874
  4,   2,   1,   1,   2, // 2875-2879
  4,   2, // 2880-2881
  4,   2,   2,   2, // 2882-2885
  3,   2, // 2886-2887
  3,   2,   2, // 2888-2890
  3,   2, // 2891-2892
  3, // 2893
  4, // 2894
  2,   2, // 2895-2896
  2, // 2897
  1,   2, // 2898-2899
  4,   7,   1, // 2900-2902
  9,   2, // 2903-2904
  9,   2, // 2905-2906
  9,   5,   5,   2, // 2907-2910
  9,   7,   5,   5,   2, // 2911-2915
  9,   1,   2, // 2916-2918
  9,   3,   1,   2, // 2919-2922
  9,   2,   1,   2, // 2923-2926
  9,   3,   2,   1,   2, // 2927-2931
  9,   3,   1,   2, // 2932-2935
  9,   1,   2, // 2936-2938
  9,   2,   1,   2, // 2939-2942
  9,   3,   2,   1,   2, // 2943-2947
  9,   3,   1,   2, // 2948-2951
  1,   2,   5, // 2952-2954
  2,   1,   2,   5, // 2955-2958
  3,   2,   1,   2,   5, // 2959-2963
  3,   1,   2,   5, // 2964-2967
  1,   2,   5, // 2968-2970
  2,   1,   2,   5, // 2971-2974
  3,   2,   1,   2,   5, // 2975-2979
  3,   1,   2,   5, // 2980-2983
  2,   1,   2,   7, // 2984-2987
  3,   2,   1,   2,   7, // 2988-2992
  7,   1,   2,   7, // 2993-2996
  3,   7,   1,   2,   7, // 2997-3001
  3,   1,   2,   7, // 3002-3005
  1,   2, // 3006-3007
  3,   1,   2, // 3008-3010
  9,   5,   5, // 3011-3013
  9,   7,   7,   7, // 3014-3017
  9,   9,   7,   7,   7, // 3018-3022
  9,   9,   7,   7, // 3023-3026
  9,   5,   5, // 3027-3029
  9,   5,   5, // 3030-3032
  9,   7,   5,   5, // 3033-3036
  9,   5,   5,   2, // 3037-3040
  9,   7,   2, // 3041-3043
  9,   7,   7,   2, // 3044-3047
  9,   5,   2, // 3048-3050
  9,   7,   5,   2, // 3051-3054
  9,   7,   5,   5, // 3055-3058
  9,   5,   5,   2, // 3059-3062
  9,   5, // 3063-3064
  9,   9,   5,   5,   2, // 3065-3069
  9,   5, // 3070-3071
  9,   5,   5, // 3072-3074
  9,   5,   5,   2, // 3075-3078
  9,   5,   2, // 3079-3081
  9,   7,   5,   2, // 3082-3085
  9,   5,   2, // 3086-3088
  9,   7,   5,   2, // 3089-3092
  1,   2,   7, // 3093-3095
  7,   1,   2,   7, // 3096-3099
  1,   2,   7, // 3100-3102
  7,   1,   2,   7, // 3103-3106
  3, // 3107
  9,   5,   2, // 3108-3110
  9,   7,   5,   5,   2, // 3111-3115
  9,   5,   5,   2, // 3116-3119
  9,   5,   2, // 3120-3122
  9,   7,   5,   2, // 3123-3126
  9,   5,   2,   2, // 3127-3130
  9,   7,   5,   2,   2, // 3131-3135
  9,   5,   2, // 3136-3138
  9,   7,   5,   2, // 3139-3142
  9,   3,   5,   2, // 3143-3146
  9,   3,   7,   5,   2, // 3147-3151
  9,   5,   2, // 3152-3154
  9,   7,   7, // 3155-3157
  9,   7, // 3158-3159
  1,   2,   7,   7, // 3160-3163
  7,   1,   2,   7,   7, // 3164-3168
  1,   2,   7,   7, // 3169-3172
  7,   1,   2,   7,   7, // 3173-3177
  9,   7,   7,   7, // 3178-3181
  9,   5, // 3182-3183
  9,   7,   5, // 3184-3186
  2, // 3187
  3,   2, // 3188-3189
  1,   2, // 3190-3191
  3,   1,   2, // 3192-3194
  2,   1,   2, // 3195-3197
  3,   2,   1,   2, // 3198-3201
  1, // 3202
  1,   2, // 3203-3204
  1, // 3205
  1, // 3206
  1,   1, // 3207-3208
  1, // 3209
  1,   1, // 3210-3211
  3, // 3212
  4,   2,   2, // 3213-3215
  1,   1,   1, // 3216-3218
  3,   2, // 3219-3220
  3,   2,   2,   2, // 3221-3224
  4,   3,   2,   2, // 3225-3228
  3,   2,   2, // 3229-3231
  4,   3,   2, // 3232-3234
  3,   2,   2, // 3235-3237
  3,   2,   2, // 3238-3240
  3,   2,   2, // 3241-3243
  3,   2,   2, // 3244-3246
  1,   1,   1, // 3247-3249
  2, // 3250
  2,   2, // 3251-3252
  2,   2, // 3253-3254
  4,   1,   2, // 3255-3257
  4,   2,   1,   2, // 3258-3261
  4,   1,   2, // 3262-3264
  4,   3,   1,   2, // 3265-3268
  1,   2,   3, // 3269-3271
  1,   2,   2, // 3272-3274
  3,   2,   1, // 3275-3277
  3,   3,   1, // 3278-3280
  2, // 3281
  3, // 3282
  4,   1, // 3283-3284
  3,   1, // 3285-3286
  3,   1, // 3287-3288
  4,   1,   2, // 3289-3291
  4,   1,   1, // 3292-3294
  4,   2,   1,   1, // 3295-3298
  4,   1,   1, // 3299-3301
  4,   2,   1,   1, // 3302-3305
  2, // 3306
  4,   3,   1,   2,   2, // 3307-3311
  9,   7,   7, // 3312-3314
  3,   1,   2,   2,   3, // 3315-3319
  3,   1,   2,   3, // 3320-3323
  2, // 3324
  9,   7,   7, // 3325-3327
  9,   1,   2, // 3328-3330
  1,   1,   1, // 3331-3333
  9,   2,   7, // 3334-3336
  1,   2,   7, // 3337-3339
  9,   2,   7,   7, // 3340-3343
  4,   2,   2, // 3344-3346
  2,   1,   2,   3, // 3347-3350
  2,   1,   2,   3, // 3351-3354
  1,   2,   3, // 3355-3357
  1,   2,   3, // 3358-3360
  4,   2,   2,   2,   2, // 3361-3365
  3,   1,   2,   3, // 3366-3369
  1,   2,   2, // 3370-3372
  2,   1,   2,   2, // 3373-3376
  3,   1,   2,   2, // 3377-3380
  3,   1,   2, // 3381-3383
  1,   1,   1, // 3384-3386
  9,   7,   7,   7, // 3387-3390
  9,   7, // 3391-3392
  9, // 3393
  1, // 3394
  3,   2,   2, // 3395-3397
  3,   2, // 3398-3399
  4,   3,   2, // 3400-3402
  4,   1, // 3403-3404
  4,   1,   2, // 3405-3407
  3,   1,   2, // 3408-3410
  1,   2,   3, // 3411-3413
  1,   2,   2, // 3414-3416
  4,   2, // 3417-3418
  4,   2,   2, // 3419-3421
  4,   2,   2, // 3422-3424
  4,   2,   2, // 3425-3427
  3,   2, // 3428-3429
  4,   2,   2, // 3430-3432
  4,   2,   2, // 3433-3435
  4,   2, // 3436-3437
  4,   1, // 3438-3439
  4,   2,   2, // 3440-3442
  4,   2,   2, // 3443-3445
  3,   4,   2,   2,   2, // 3446-3450
  3,   2,   2, // 3451-3453
  2, // 3454
  4,   1,   1, // 3455-3457
  4,   1,   1,   2, // 3458-3461
  4,   4,   2,   1,   1, // 3462-3466
  3,   2,   2, // 3467-3469
  4,   4,   2,   2, // 3470-3473
  4,   2,   2, // 3474-3476
  3,   2, // 3477-3478
  3,   2,   2, // 3479-3481
  3,   2, // 3482-3483
  3,   2,   2,   2, // 3484-3487
  4,   2, // 3488-3489
  3,   2,   2,   2, // 3490-3493
  5,   1, // 3494-3495
  5,   1,   1, // 3496-3498
  4,   2, // 3499-3500
  5,   2,   1,   1, // 3501-3504
  4,   2,   1,   1, // 3505-3508
  4,   1,   1, // 3509-3511
  5,   1,   1, // 3512-3514
  5,   2,   1,   1, // 3515-3518
  5,   2,   1,   1,   2, // 3519-3523
  5,   5,   1, // 3524-3526
  4,   2,   2, // 3527-3529
  5,   5,   1,   1, // 3530-3533
  4,   2, // 3534-3535
  4,   1, // 3536-3537
  2,   2, // 3538-3539
  1, // 3540
  2,   1, // 3541-3542
  2, // 3543
  3,   2, // 3544-3545
  2,   2, // 3546-3547
  3,   2, // 3548-3549
  2,   2, // 3550-3551
  2,   2, // 3552-3553
  2,   2, // 3554-3555
  2,   1, // 3556-3557
  2, // 3558
  2,   2, // 3559-3560
  2,   1, // 3561-3562
  2, // 3563
  3,   3,   2, // 3564-3566
  2,   2,   2, // 3567-3569
  3,   2,   2, // 3570-3572
  2,   2,   2, // 3573-3575
  3,   3,   2, // 3576-3578
  3,   2,   2, // 3579-3581
  3,   2, // 3582-3583
  2,   2, // 3584-3585
  4,   3,   2,   1,   2, // 3586-3590
  4,   3,   2,   1,   2,   2, // 3591-3596
  4,   2, // 3597-3598
  4,   1, // 3599-3600
  4,   1, // 3601-3602
  4,   4,   3,   1,   2, // 3603-3607
  4,   3,   2,   2, // 3608-3611
  4,   2,   1,   2,   2, // 3612-3616
  4,   3,   2, // 3617-3619
  4,   1,   2,   2, // 3620-3623
  4,   1,   1,   2, // 3624-3627
  4,   2,   2, // 3628-3630
  4,   2,   1,   1,   2, // 3631-3635
  4,   3,   1,   1,   2, // 3636-3640
  1,   1,   2, // 3641-3643
  4,   2,   2,   2, // 3644-3647
  4,   2,   1,   2, // 3648-3651
  4,   2,   2,   2, // 3652-3655
  4,   2,   2,   1, // 3656-3659
  2,   3, // 3660-3661
  2,   3, // 3662-3663
  1, // 3664
  4,   2, // 3665-3666
  4,   1,   1, // 3667-3669
  4,   2,   2, // 3670-3672
  4,   2,   2, // 3673-3675
  3,   2,   1,   2,   3, // 3676-3680
  4,   3,   1,   2,   1, // 3681-3685
  3,   2,   1,   2,   3, // 3686-3690
  4,   3,   1,   2,   3, // 3691-3695
  3,   1,   2,   2,   3, // 3696-3700
  4,   1,   1, // 3701-3703
  1,   3, // 3704-3705
  4,   2, // 3706-3707
  2,   2,   3, // 3708-3710
  2,   1,   1,   2,   3, // 3711-3715
  3,   2,   3, // 3716-3718
  3,   1,   1,   2,   3, // 3719-3723
  2,   2,   3, // 3724-3726
  2,   1,   1,   2,   3, // 3727-3731
  3,   2,   3, // 3732-3734
  3,   1,   1,   2,   3, // 3735-3739
  1,   1,   2,   3, // 3740-3743
  1,   2,   2,   3, // 3744-3747
  1,   1,   2,   3, // 3748-3751
  1,   2,   2,   3, // 3752-3755
  4,   1,   1,   2, // 3756-3759
  4,   2,   1,   1,   2, // 3760-3764
  4,   2, // 3765-3766
  4,   2,   2,   2, // 3767-3770
  3,   2, // 3771-3772
  3,   2,   2, // 3773-3775
  3,   2, // 3776-3777
  3, // 3778
  4, // 3779
  2,   2, // 3780-3781
  2, // 3782
  1,   2, // 3783-3784
  4,   7,   1, // 3785-3787
  9,   2, // 3788-3789
  9,   2, // 3790-3791
  9,   5,   5,   2, // 3792-3795
  9,   7,   5,   5,   2, // 3796-3800
  9,   1,   2, // 3801-3803
  9,   3,   1,   2, // 3804-3807
  9,   2,   1,   2, // 3808-3811
  9,   3,   2,   1,   2, // 3812-3816
  9,   3,   1,   2, // 3817-3820
  9,   1,   2, // 3821-3823
  9,   2,   1,   2, // 3824-3827
  9,   3,   2,   1,   2, // 3828-3832
  9,   3,   1,   2, // 3833-3836
  1,   2,   5, // 3837-3839
  2,   1,   2,   5, // 3840-3843
  3,   2,   1,   2,   5, // 3844-3848
  3,   1,   2,   5, // 3849-3852
  1,   2,   5, // 3853-3855
  2,   1,   2,   5, // 3856-3859
  3,   2,   1,   2,   5, // 3860-3864
  3,   1,   2,   5, // 3865-3868
  2,   1,   2,   7, // 3869-3872
  3,   2,   1,   2,   7, // 3873-3877
  7,   1,   2,   7, // 3878-3881
  3,   7,   1,   2,   7, // 3882-3886
  3,   1,   2,   7, // 3887-3890
  1,   2, // 3891-3892
  3,   1,   2, // 3893-3895
  9,   5,   5, // 3896-3898
  9,   7,   7,   7, // 3899-3902
  9,   9,   7,   7,   7, // 3903-3907
  9,   9,   7,   7, // 3908-3911
  9,   5,   5, // 3912-3914
  9,   5,   5, // 3915-3917
  9,   7,   5,   5, // 3918-3921
  9,   5,   5,   2, // 3922-3925
  9,   7,   2, // 3926-3928
  9,   7,   7,   2, // 3929-3932
  9,   5,   2, // 3933-3935
  9,   7,   5,   2, // 3936-3939
  9,   7,   5,   5, // 3940-3943
  9,   5,   5,   2, // 3944-3947
  9,   5, // 3948-3949
  9,   9,   5,   5,   2, // 3950-3954
  9,   5, // 3955-3956
  9,   5,   5, // 3957-3959
  9,   5,   5,   2, // 3960-3963
  9,   5,   2, // 3964-3966
  9,   7,   5,   2, // 3967-3970
  9,   5,   2, // 3971-3973
  9,   7,   5,   2, // 3974-3977
  1,   2,   7, // 3978-3980
  7,   1,   2,   7, // 3981-3984
  1,   2,   7, // 3985-3987
  7,   1,   2,   7, // 3988-3991
  3, // 3992
  9,   5,   2, // 3993-3995
  9,   7,   5,   5,   2, // 3996-4000
  9,   5,   5,   2, // 4001-4004
  9,   5,   2, // 4005-4007
  9,   7,   5,   2, // 4008-4011
  9,   5,   2,   2, // 4012-4015
  9,   7,   5,   2,   2, // 4016-4020
  9,   5,   2, // 4021-4023
  9,   7,   5,   2, // 4024-4027
  9,   3,   5,   2, // 4028-4031
  9,   3,   7,   5,   2, // 4032-4036
  9,   5,   2, // 4037-4039
  9,   7,   7, // 4040-4042
  9,   7, // 4043-4044
  1,   2,   7,   7, // 4045-4048
  7,   1,   2,   7,   7, // 4049-4053
  1,   2,   7,   7, // 4054-4057
  7,   1,   2,   7,   7, // 4058-4062
  9,   7,   7,   7, // 4063-4066
  9,   5, // 4067-4068
  9,   7,   5, // 4069-4071
  2, // 4072
  3,   2, // 4073-4074
  1,   2, // 4075-4076
  3,   1,   2, // 4077-4079
  2,   1,   2, // 4080-4082
  3,   2,   1,   2, // 4083-4086
  1, // 4087
  1,   2, // 4088-4089
  1, // 4090
  1, // 4091
  1,   1, // 4092-4093
  1, // 4094
  1,   1, // 4095-4096
  3, // 4097
  4,   2,   2, // 4098-4100
  1,   1,   1, // 4101-4103
  3,   2, // 4104-4105
  3,   2,   2,   2, // 4106-4109
  4,   3,   2,   2, // 4110-4113
  3,   2,   2, // 4114-4116
  4,   3,   2, // 4117-4119
  3,   2,   2, // 4120-4122
  3,   2,   2, // 4123-4125
  3,   2,   2, // 4126-4128
  3,   2,   2, // 4129-4131
  1,   1,   1, // 4132-4134
  2, // 4135
  2,   2, // 4136-4137
  2,   2, // 4138-4139
  4,   1,   2, // 4140-4142
  4,   2,   1,   2, // 4143-4146
  4,   1,   2, // 4147-4149
  4,   3,   1,   2, // 4150-4153
  1,   2,   3, // 4154-4156
  1,   2,   2, // 4157-4159
  3,   2,   1, // 4160-4162
  3,   3,   1, // 4163-4165
  2, // 4166
  3, // 4167
  4,   1, // 4168-4169
  3,   1, // 4170-4171
  3,   1, // 4172-4173
  4,   1,   2, // 4174-4176
  4,   1,   1, // 4177-4179
  4,   2,   1,   1, // 4180-4183
  4,   1,   1, // 4184-4186
  4,   2,   1,   1, // 4187-4190
  2, // 4191
  4,   3,   1,   2,   2, // 4192-4196
  9,   7,   7, // 4197-4199
  3,   1,   2,   2,   3, // 4200-4204
  3,   1,   2,   3, // 4205-4208
  2, // 4209
  9,   7,   7, // 4210-4212
  9,   1,   2, // 4213-4215
  1,   1,   1, // 4216-4218
  9,   2,   7, // 4219-4221
  1,   2,   7, // 4222-4224
  9,   2,   7,   7, // 4225-4228
  4,   2,   2, // 4229-4231
  2,   1,   2,   3, // 4232-4235
  2,   1,   2,   3, // 4236-4239
  1,   2,   3, // 4240-4242
  1,   2,   3, // 4243-4245
  4,   2,   2,   2,   2, // 4246-4250
  3,   1,   2,   3, // 4251-4254
  1,   2,   2, // 4255-4257
  2,   1,   2,   2, // 4258-4261
  3,   1,   2,   2, // 4262-4265
  3,   1,   2, // 4266-4268
  1,   1,   1, // 4269-4271
  9,   7,   7,   7, // 4272-4275
  9,   7, // 4276-4277
  9, // 4278
  1, // 4279
  3,   2,   2, // 4280-4282
  3,   2, // 4283-4284
  4,   3,   2, // 4285-4287
  4,   1, // 4288-4289
  4,   1,   2, // 4290-4292
  3,   1,   2, // 4293-4295
  1,   2,   3, // 4296-4298
  1,   2,   2, // 4299-4301
  4,   2, // 4302-4303
  4,   2,   2, // 4304-4306
  4,   2,   2, // 4307-4309
  4,   2,   2, // 4310-4312
  3,   2, // 4313-4314
  4,   2,   2, // 4315-4317
  4,   2,   2, // 4318-4320
  4,   2, // 4321-4322
  4,   1, // 4323-4324
  4,   2,   2, // 4325-4327
  4,   2,   2, // 4328-4330
  3,   4,   2,   2,   2, // 4331-4335
  3,   2,   2, // 4336-4338
  2, // 4339
  4,   1,   1, // 4340-4342
  4,   1,   1,   2, // 4343-4346
  4,   4,   2,   1,   1, // 4347-4351
  3,   2,   2, // 4352-4354
  4,   4,   2,   2, // 4355-4358
  4,   2,   2, // 4359-4361
  3,   2, // 4362-4363
  3,   2,   2, // 4364-4366
  3,   2, // 4367-4368
  3,   2,   2,   2, // 4369-4372
  4,   2, // 4373-4374
  3,   2,   2,   2, // 4375-4378
  5,   1, // 4379-4380
  5,   1,   1, // 4381-4383
  4,   2, // 4384-4385
  5,   2,   1,   1, // 4386-4389
  4,   2,   1,   1, // 4390-4393
  4,   1,   1, // 4394-4396
  5,   1,   1, // 4397-4399
  5,   2,   1,   1, // 4400-4403
  5,   2,   1,   1,   2, // 4404-4408
  5,   5,   1, // 4409-4411
  4,   2,   2, // 4412-4414
  5,   5,   1,   1, // 4415-4418
  4,   2, // 4419-4420
  4,   1, // 4421-4422
  2,   2, // 4423-4424
  1, // 4425
  2,   1, // 4426-4427
  2, // 4428
  3,   2, // 4429-4430
  2,   2, // 4431-4432
  3,   2, // 4433-4434
  2,   2, // 4435-4436
  2,   2, // 4437-4438
  2,   2, // 4439-4440
  2,   1, // 4441-4442
  2, // 4443
  2,   2, // 4444-4445
  2,   1, // 4446-4447
  2, // 4448
  3,   3,   2, // 4449-4451
  2,   2,   2, // 4452-4454
  3,   2,   2, // 4455-4457
  2,   2,   2, // 4458-4460
  3,   3,   2, // 4461-4463
  3,   2,   2, // 4464-4466
  3,   2, // 4467-4468
  2,   2, // 4469-4470
  4,   3,   2,   1,   2, // 4471-4475
  4,   3,   2,   1,   2,   2, // 4476-4481
  4,   2, // 4482-4483
  4,   1, // 4484-4485
  4,   1, // 4486-4487
  4,   4,   3,   1,   2, // 4488-4492
  4,   3,   2,   2, // 4493-4496
  4,   2,   1,   2,   2, // 4497-4501
  4,   3,   2, // 4502-4504
  4,   1,   2,   2, // 4505-4508
  4,   1,   1,   2, // 4509-4512
  4,   2,   2, // 4513-4515
  4,   2,   1,   1,   2, // 4516-4520
  4,   3,   1,   1,   2, // 4521-4525
  1,   1,   2, // 4526-4528
  4,   2,   2,   2, // 4529-4532
  4,   2,   1,   2, // 4533-4536
  4,   2,   2,   2, // 4537-4540
  4,   2,   2,   1, // 4541-4544
  2,   3, // 4545-4546
  2,   3, // 4547-4548
  1, // 4549
  4,   2, // 4550-4551
  4,   1,   1, // 4552-4554
  4,   2,   2, // 4555-4557
  4,   2,   2, // 4558-4560
  3,   2,   1,   2,   3, // 4561-4565
  4,   3,   1,   2,   1, // 4566-4570
  3,   2,   1,   2,   3, // 4571-4575
  4,   3,   1,   2,   3, // 4576-4580
  3,   1,   2,   2,   3, // 4581-4585
  4,   1,   1, // 4586-4588
  1,   3, // 4589-4590
  4,   2, // 4591-4592
  2,   2,   3, // 4593-4595
  2,   1,   1,   2,   3, // 4596-4600
  3,   2,   3, // 4601-4603
  3,   1,   1,   2,   3, // 4604-4608
  2,   2,   3, // 4609-4611
  2,   1,   1,   2,   3, // 4612-4616
  3,   2,   3, // 4617-4619
  3,   1,   1,   2,   3, // 4620-4624
  1,   1,   2,   3, // 4625-4628
  1,   2,   2,   3, // 4629-4632
  1,   1,   2,   3, // 4633-4636
  1,   2,   2,   3, // 4637-4640
  4,   1,   1,   2, // 4641-4644
  4,   2,   1,   1,   2, // 4645-4649
  4,   2, // 4650-4651
  4,   2,   2,   2, // 4652-4655
  3,   2, // 4656-4657
  3,   2,   2, // 4658-4660
  3,   2, // 4661-4662
  3, // 4663
  4, // 4664
  2,   2, // 4665-4666
  2, // 4667
  1,   2, // 4668-4669
  4,   7,   1, // 4670-4672
  9,   2, // 4673-4674
  9,   2, // 4675-4676
  9,   5,   5,   2, // 4677-4680
  9,   7,   5,   5,   2, // 4681-4685
  9,   1,   2, // 4686-4688
  9,   3,   1,   2, // 4689-4692
  9,   2,   1,   2, // 4693-4696
  9,   3,   2,   1,   2, // 4697-4701
  9,   3,   1,   2, // 4702-4705
  9,   1,   2, // 4706-4708
  9,   2,   1,   2, // 4709-4712
  9,   3,   2,   1,   2, // 4713-4717
  9,   3,   1,   2, // 4718-4721
  1,   2,   5, // 4722-4724
  2,   1,   2,   5, // 4725-4728
  3,   2,   1,   2,   5, // 4729-4733
  3,   1,   2,   5, // 4734-4737
  1,   2,   5, // 4738-4740
  2,   1,   2,   5, // 4741-4744
  3,   2,   1,   2,   5, // 4745-4749
  3,   1,   2,   5, // 4750-4753
  2,   1,   2,   7, // 4754-4757
  3,   2,   1,   2,   7, // 4758-4762
  7,   1,   2,   7, // 4763-4766
  3,   7,   1,   2,   7, // 4767-4771
  3,   1,   2,   7, // 4772-4775
  1,   2, // 4776-4777
  3,   1,   2, // 4778-4780
  9,   5,   5, // 4781-4783
  9,   7,   7,   7, // 4784-4787
  9,   9,   7,   7,   7, // 4788-4792
  9,   9,   7,   7, // 4793-4796
  9,   5,   5, // 4797-4799
  9,   5,   5, // 4800-4802
  9,   7,   5,   5, // 4803-4806
  9,   5,   5,   2, // 4807-4810
  9,   7,   2, // 4811-4813
  9,   7,   7,   2, // 4814-4817
  9,   5,   2, // 4818-4820
  9,   7,   5,   2, // 4821-4824
  9,   7,   5,   5, // 4825-4828
  9,   5,   5,   2, // 4829-4832
  9,   5, // 4833-4834
  9,   9,   5,   5,   2, // 4835-4839
  9,   5, // 4840-4841
  9,   5,   5, // 4842-4844
  9,   5,   5,   2, // 4845-4848
  9,   5,   2, // 4849-4851
  9,   7,   5,   2, // 4852-4855
  9,   5,   2, // 4856-4858
  9,   7,   5,   2, // 4859-4862
  1,   2,   7, // 4863-4865
  7,   1,   2,   7, // 4866-4869
  1,   2,   7, // 4870-4872
  7,   1,   2,   7, // 4873-4876
  3, // 4877
  9,   5,   2, // 4878-4880
  9,   7,   5,   5,   2, // 4881-4885
  9,   5,   5,   2, // 4886-4889
  9,   5,   2, // 4890-4892
  9,   7,   5,   2, // 4893-4896
  9,   5,   2,   2, // 4897-4900
  9,   7,   5,   2,   2, // 4901-4905
  9,   5,   2, // 4906-4908
  9,   7,   5,   2, // 4909-4912
  9,   3,   5,   2, // 4913-4916
  9,   3,   7,   5,   2, // 4917-4921
  9,   5,   2, // 4922-4924
  9,   7,   7, // 4925-4927
  9,   7, // 4928-4929
  1,   2,   7,   7, // 4930-4933
  7,   1,   2,   7,   7, // 4934-4938
  1,   2,   7,   7, // 4939-4942
  7,   1,   2,   7,   7, // 4943-4947
  9,   7,   7,   7, // 4948-4951
  9,   5, // 4952-4953
  9,   7,   5, // 4954-4956
  2, // 4957
  3,   2, // 4958-4959
  1,   2, // 4960-4961
  3,   1,   2, // 4962-4964
  2,   1,   2, // 4965-4967
  3,   2,   1,   2, // 4968-4971
  1, // 4972
  1,   2, // 4973-4974
  1, // 4975
  1, // 4976
  1,   1, // 4977-4978
  1, // 4979
  1,   1, // 4980-4981
  3, // 4982
  4,   2,   2, // 4983-4985
  2,   1,   1, // 4986-4988
  3,   2, // 4989-4990
  3,   2,   2,   2, // 4991-4994
  4,   3,   2,   2, // 4995-4998
  3,   2,   2, // 4999-5001
  4,   3,   2, // 5002-5004
  3,   2,   2, // 5005-5007
  3,   2,   2, // 5008-5010
  3,   2,   2, // 5011-5013
  3,   2,   2, // 5014-5016
  2,   1,   1, // 5017-5019
  2, // 5020
  2,   2, // 5021-5022
  2,   2, // 5023-5024
  4,   1,   2, // 5025-5027
  4,   2,   1,   2, // 5028-5031
  4,   1,   2, // 5032-5034
  4,   3,   1,   2, // 5035-5038
  1,   2,   3, // 5039-5041
  1,   2,   2, // 5042-5044
  3,   2,   1, // 5045-5047
  3,   3,   1, // 5048-5050
  2, // 5051
  3, // 5052
  4,   1, // 5053-5054
  3,   1, // 5055-5056
  3,   1,   1, // 5057-5059
  4,   1,   2, // 5060-5062
  4,   1,   1, // 5063-5065
  4,   2,   1,   1, // 5066-5069
  4,   1,   1, // 5070-5072
  4,   2,   1,   1, // 5073-5076
  2, // 5077
  4,   3,   1,   2,   2, // 5078-5082
  9,   7,   7, // 5083-5085
  3,   1,   2,   2,   3, // 5086-5090
  3,   1,   2,   3, // 5091-5094
  2, // 5095
  9,   7,   7, // 5096-5098
  9,   1,   2, // 5099-5101
  2,   1,   1, // 5102-5104
  9,   2,   7, // 5105-5107
  1,   2,   7, // 5108-5110
  9,   2,   7,   7, // 5111-5114
  4,   2,   2, // 5115-5117
  2,   1,   2,   3, // 5118-5121
  2,   1,   2,   3, // 5122-5125
  1,   2,   3, // 5126-5128
  1,   2,   3, // 5129-5131
  4,   2,   2,   2,   2, // 5132-5136
  3,   1,   2,   3, // 5137-5140
  1,   2,   2, // 5141-5143
  2,   1,   2,   2, // 5144-5147
  3,   1,   2,   2, // 5148-5151
  3,   1,   2, // 5152-5154
  1,   1,   3,   3, // 5155-5158
  9,   7,   7,   7, // 5159-5162
  9,   7, // 5163-5164
  9, // 5165
  1, // 5166
  3,   2,   2, // 5167-5169
  3,   2, // 5170-5171
  4,   3,   2, // 5172-5174
  4,   1, // 5175-5176
  4,   1,   2, // 5177-5179
  3,   1,   2, // 5180-5182
  1,   2,   3, // 5183-5185
  1,   2,   2, // 5186-5188
  4,   2, // 5189-5190
  4,   2,   2, // 5191-5193
  4,   2,   2, // 5194-5196
  4,   2,   2, // 5197-5199
  3,   2, // 5200-5201
  4,   2,   2, // 5202-5204
  4,   2,   2, // 5205-5207
  4,   2, // 5208-5209
  4,   1, // 5210-5211
  4,   2,   2, // 5212-5214
  4,   2,   2, // 5215-5217
  3,   4,   2,   2,   2, // 5218-5222
  3,   2,   2, // 5223-5225
  2, // 5226
  4,   1,   1, // 5227-5229
  4,   1,   1,   2, // 5230-5233
  4,   4,   2,   1,   1, // 5234-5238
  3,   2,   2, // 5239-5241
  4,   4,   2,   2, // 5242-5245
  4,   2,   2, // 5246-5248
  3,   2, // 5249-5250
  3,   2,   2, // 5251-5253
  3,   2, // 5254-5255
  3,   2,   2,   2, // 5256-5259
  4,   2, // 5260-5261
  3,   2,   2,   2, // 5262-5265
  5,   1, // 5266-5267
  5,   1,   1, // 5268-5270
  4,   2, // 5271-5272
  5,   2,   1,   1, // 5273-5276
  4,   2,   1,   1, // 5277-5280
  4,   1,   1, // 5281-5283
  5,   1,   1, // 5284-5286
  5,   2,   1,   1, // 5287-5290
  5,   2,   1,   1,   2, // 5291-5295
  5,   5,   1, // 5296-5298
  4,   2,   2, // 5299-5301
  5,   5,   1,   1, // 5302-5305
  4,   2, // 5306-5307
  4,   1, // 5308-5309
  2,   2, // 5310-5311
  1, // 5312
  2,   1, // 5313-5314
  2, // 5315
  3,   2, // 5316-5317
  2,   2, // 5318-5319
  3,   2, // 5320-5321
  2,   2, // 5322-5323
  2,   2, // 5324-5325
  2,   2, // 5326-5327
  2,   1, // 5328-5329
  2, // 5330
  2,   2, // 5331-5332
  2,   1, // 5333-5334
  2, // 5335
  3,   3,   2, // 5336-5338
  2,   2,   2, // 5339-5341
  3,   2,   2, // 5342-5344
  2,   2,   2, // 5345-5347
  3,   3,   2, // 5348-5350
  3,   2,   2, // 5351-5353
  3,   2, // 5354-5355
  2,   2, // 5356-5357
  4,   3,   2,   1,   2, // 5358-5362
  4,   3,   2,   1,   2,   2, // 5363-5368
  4,   2, // 5369-5370
  4,   1, // 5371-5372
  4,   1, // 5373-5374
  4,   4,   3,   1,   2, // 5375-5379
  4,   3,   2,   2, // 5380-5383
  4,   2,   1,   2,   2, // 5384-5388
  4,   3,   2, // 5389-5391
  4,   1,   2,   2, // 5392-5395
  4,   1,   1,   2, // 5396-5399
  4,   2,   2, // 5400-5402
  4,   2,   1,   1,   2, // 5403-5407
  4,   3,   1,   1,   2, // 5408-5412
  1,   1,   2, // 5413-5415
  4,   2,   2,   2, // 5416-5419
  4,   2,   1,   2, // 5420-5423
  4,   2,   2,   2, // 5424-5427
  4,   2,   2,   1, // 5428-5431
  2,   3, // 5432-5433
  2,   3, // 5434-5435
  1, // 5436
  4,   2, // 5437-5438
  4,   1,   1, // 5439-5441
  4,   2,   2, // 5442-5444
  4,   2,   2, // 5445-5447
  3,   2,   1,   2,   3, // 5448-5452
  4,   3,   1,   2,   1, // 5453-5457
  3,   2,   1,   2,   3, // 5458-5462
  4,   3,   1,   2,   3, // 5463-5467
  3,   1,   2,   2,   3, // 5468-5472
  4,   1,   1, // 5473-5475
  1,   3, // 5476-5477
  4,   2, // 5478-5479
  2,   2,   3, // 5480-5482
  2,   1,   1,   2,   3, // 5483-5487
  3,   2,   3, // 5488-5490
  3,   1,   1,   2,   3, // 5491-5495
  2,   2,   3, // 5496-5498
  2,   1,   1,   2,   3, // 5499-5503
  3,   2,   3, // 5504-5506
  3,   1,   1,   2,   3, // 5507-5511
  1,   1,   2,   3, // 5512-5515
  1,   2,   2,   3, // 5516-5519
  1,   1,   2,   3, // 5520-5523
  1,   2,   2,   3, // 5524-5527
  4,   1,   1,   2, // 5528-5531
  4,   2,   1,   1,   2, // 5532-5536
  4,   2, // 5537-5538
  4,   2,   2,   2, // 5539-5542
  3,   2, // 5543-5544
  3,   2,   2, // 5545-5547
  3,   2, // 5548-5549
  3, // 5550
  4, // 5551
  2,   2, // 5552-5553
  2, // 5554
  1,   2, // 5555-5556
  4,   7,   1, // 5557-5559
  9,   2, // 5560-5561
  9,   2, // 5562-5563
  9,   5,   5,   2, // 5564-5567
  9,   7,   5,   5,   2, // 5568-5572
  9,   1,   2, // 5573-5575
  9,   3,   1,   2, // 5576-5579
  9,   2,   1,   2, // 5580-5583
  9,   3,   2,   1,   2, // 5584-5588
  9,   3,   1,   2, // 5589-5592
  9,   1,   2, // 5593-5595
  9,   2,   1,   2, // 5596-5599
  9,   3,   2,   1,   2, // 5600-5604
  9,   3,   1,   2, // 5605-5608
  1,   2,   5, // 5609-5611
  2,   1,   2,   5, // 5612-5615
  3,   2,   1,   2,   5, // 5616-5620
  3,   1,   2,   5, // 5621-5624
  1,   2,   5, // 5625-5627
  2,   1,   2,   5, // 5628-5631
  3,   2,   1,   2,   5, // 5632-5636
  3,   1,   2,   5, // 5637-5640
  2,   1,   2,   7, // 5641-5644
  3,   2,   1,   2,   7, // 5645-5649
  7,   1,   2,   7, // 5650-5653
  3,   7,   1,   2,   7, // 5654-5658
  3,   1,   2,   7, // 5659-5662
  1,   2, // 5663-5664
  3,   1,   2, // 5665-5667
  9,   5,   5, // 5668-5670
  9,   7,   7,   7, // 5671-5674
  9,   9,   7,   7,   7, // 5675-5679
  9,   9,   7,   7, // 5680-5683
  9,   5,   5, // 5684-5686
  9,   5,   5, // 5687-5689
  9,   7,   5,   5, // 5690-5693
  9,   5,   5,   2, // 5694-5697
  9,   7,   2, // 5698-5700
  9,   7,   7,   2, // 5701-5704
  9,   5,   2, // 5705-5707
  9,   7,   5,   2, // 5708-5711
  9,   7,   5,   5, // 5712-5715
  9,   5,   5,   2, // 5716-5719
  9,   5, // 5720-5721
  9,   9,   5,   5,   2, // 5722-5726
  9,   5, // 5727-5728
  9,   5,   5, // 5729-5731
  9,   5,   5,   2, // 5732-5735
  9,   5,   2, // 5736-5738
  9,   7,   5,   2, // 5739-5742
  9,   5,   2, // 5743-5745
  9,   7,   5,   2, // 5746-5749
  1,   2,   7, // 5750-5752
  7,   1,   2,   7, // 5753-5756
  1,   2,   7, // 5757-5759
  7,   1,   2,   7, // 5760-5763
  3, // 5764
  9,   5,   2, // 5765-5767
  9,   7,   5,   5,   2, // 5768-5772
  9,   5,   5,   2, // 5773-5776
  9,   5,   2, // 5777-5779
  9,   7,   5,   2, // 5780-5783
  9,   5,   2,   2, // 5784-5787
  9,   7,   5,   2,   2, // 5788-5792
  9,   5,   2, // 5793-5795
  9,   7,   5,   2, // 5796-5799
  9,   3,   5,   2, // 5800-5803
  9,   3,   7,   5,   2, // 5804-5808
  9,   5,   2, // 5809-5811
  9,   7,   7, // 5812-5814
  9,   7, // 5815-5816
  1,   2,   7,   7, // 5817-5820
  7,   1,   2,   7,   7, // 5821-5825
  1,   2,   7,   7, // 5826-5829
  7,   1,   2,   7,   7, // 5830-5834
  9,   7,   7,   7, // 5835-5838
  9,   5, // 5839-5840
  9,   7,   5, // 5841-5843
  2, // 5844
  3,   2, // 5845-5846
  1,   2, // 5847-5848
  3,   1,   2, // 5849-5851
  2,   1,   2, // 5852-5854
  3,   2,   1,   2, // 5855-5858
  1, // 5859
  1,   2, // 5860-5861
  1, // 5862
  1, // 5863
  1,   1, // 5864-5865
  1, // 5866
  1,   1, // 5867-5868
  3, // 5869
  4,   2,   2, // 5870-5872
  1,   1,   1, // 5873-5875
  3,   2, // 5876-5877
  3,   2,   2,   2, // 5878-5881
  4,   3,   2,   2, // 5882-5885
  3,   2,   2, // 5886-5888
  4,   3,   2, // 5889-5891
  3,   2,   2, // 5892-5894
  3,   2,   2, // 5895-5897
  3,   2,   2, // 5898-5900
  3,   2,   2, // 5901-5903
  1,   1,   1, // 5904-5906
  2, // 5907
  2,   2, // 5908-5909
  2,   2, // 5910-5911
  4,   1,   2, // 5912-5914
  4,   2,   1,   2, // 5915-5918
  4,   1,   2, // 5919-5921
  4,   3,   1,   2, // 5922-5925
  1,   2,   3, // 5926-5928
  1,   2,   2, // 5929-5931
  3,   2,   1, // 5932-5934
  3,   3,   1, // 5935-5937
  2, // 5938
  3, // 5939
  4,   1, // 5940-5941
  3,   1, // 5942-5943
  3,   1, // 5944-5945
  4,   1,   2, // 5946-5948
  4,   1,   1, // 5949-5951
  4,   2,   1,   1, // 5952-5955
  4,   1,   1, // 5956-5958
  4,   2,   1,   1, // 5959-5962
  2, // 5963
  4,   3,   1,   2,   2, // 5964-5968
  9,   7,   7, // 5969-5971
  3,   1,   2,   2,   3, // 5972-5976
  3,   1,   2,   3, // 5977-5980
  2, // 5981
  9,   7,   7, // 5982-5984
  9,   1,   2, // 5985-5987
  1,   1,   1, // 5988-5990
  9,   2,   7, // 5991-5993
  1,   2,   7, // 5994-5996
  9,   2,   7,   7, // 5997-6000
  4,   2,   2, // 6001-6003
  2,   1,   2,   3, // 6004-6007
  2,   1,   2,   3, // 6008-6011
  1,   2,   3, // 6012-6014
  1,   2,   3, // 6015-6017
  4,   2,   2,   2,   2, // 6018-6022
  3,   1,   2,   3, // 6023-6026
  1,   2,   2, // 6027-6029
  2,   1,   2,   2, // 6030-6033
  3,   1,   2,   2, // 6034-6037
  3,   1,   2, // 6038-6040
  1,   1,   1, // 6041-6043
  9,   7,   7,   7, // 6044-6047
  9,   7, // 6048-6049
  9, // 6050
  1, // 6051
  3,   2,   2, // 6052-6054
  3,   2, // 6055-6056
  4,   3,   2, // 6057-6059
  4,   1, // 6060-6061
  4,   1,   2, // 6062-6064
  3,   1,   2, // 6065-6067
  1,   2,   3, // 6068-6070
  1,   2,   2, // 6071-6073
  4,   2, // 6074-6075
  4,   2,   2, // 6076-6078
  4,   2,   2, // 6079-6081
  4,   2,   2, // 6082-6084
  3,   2, // 6085-6086
  4,   2,   2, // 6087-6089
  4,   2,   2, // 6090-6092
  4,   2, // 6093-6094
  4,   1, // 6095-6096
  4,   2,   2, // 6097-6099
  4,   2,   2, // 6100-6102
  3,   4,   2,   2,   2, // 6103-6107
  3,   2,   2, // 6108-6110
  2, // 6111
  4,   1,   1, // 6112-6114
  4,   1,   1,   2, // 6115-6118
  4,   4,   2,   1,   1, // 6119-6123
  3,   2,   2, // 6124-6126
  4,   4,   2,   2, // 6127-6130
  4,   2,   2, // 6131-6133
  3,   2, // 6134-6135
  3,   2,   2, // 6136-6138
  3,   2, // 6139-6140
  3,   2,   2,   2, // 6141-6144
  4,   2, // 6145-6146
  3,   2,   2,   2, // 6147-6150
  5,   1, // 6151-6152
  5,   1,   1, // 6153-6155
  4,   2, // 6156-6157
  5,   2,   1,   1, // 6158-6161
  4,   2,   1,   1, // 6162-6165
  4,   1,   1, // 6166-6168
  5,   1,   1, // 6169-6171
  5,   2,   1,   1, // 6172-6175
  5,   2,   1,   1,   2, // 6176-6180
  5,   5,   1, // 6181-6183
  4,   2,   2, // 6184-6186
  5,   5,   1,   1, // 6187-6190
  4,   2, // 6191-6192
  4,   1, // 6193-6194
  2,   2, // 6195-6196
  1, // 6197
  2,   1, // 6198-6199
  2, // 6200
  3,   2, // 6201-6202
  2,   2, // 6203-6204
  3,   2, // 6205-6206
  2,   2, // 6207-6208
  2,   2, // 6209-6210
  2,   2, // 6211-6212
  2,   1, // 6213-6214
  2, // 6215
  2,   2, // 6216-6217
  2,   1, // 6218-6219
  2, // 6220
  3,   3,   2, // 6221-6223
  2,   2,   2, // 6224-6226
  3,   2,   2, // 6227-6229
  2,   2,   2, // 6230-6232
  3,   3,   2, // 6233-6235
  3,   2,   2, // 6236-6238
  3,   2, // 6239-6240
  2,   2, // 6241-6242
  4,   3,   2,   1,   2, // 6243-6247
  4,   3,   2,   1,   2,   2, // 6248-6253
  4,   2, // 6254-6255
  4,   1, // 6256-6257
  4,   1, // 6258-6259
  4,   4,   3,   1,   2, // 6260-6264
  4,   3,   2,   2, // 6265-6268
  4,   2,   1,   2,   2, // 6269-6273
  4,   3,   2, // 6274-6276
  4,   1,   2,   2, // 6277-6280
  4,   1,   1,   2, // 6281-6284
  4,   2,   2, // 6285-6287
  4,   2,   1,   1,   2, // 6288-6292
  4,   3,   1,   1,   2, // 6293-6297
  1,   1,   2, // 6298-6300
  4,   2,   2,   2, // 6301-6304
  4,   2,   1,   2, // 6305-6308
  4,   2,   2,   2, // 6309-6312
  4,   2,   2,   1, // 6313-6316
  2,   3, // 6317-6318
  2,   3, // 6319-6320
  1, // 6321
  4,   2, // 6322-6323
  4,   1,   1, // 6324-6326
  4,   2,   2, // 6327-6329
  4,   2,   2, // 6330-6332
  3,   2,   1,   2,   3, // 6333-6337
  4,   3,   1,   2,   1, // 6338-6342
  3,   2,   1,   2,   3, // 6343-6347
  4,   3,   1,   2,   3, // 6348-6352
  3,   1,   2,   2,   3, // 6353-6357
  4,   1,   1, // 6358-6360
  1,   3, // 6361-6362
  4,   2, // 6363-6364
  2,   2,   3, // 6365-6367
  2,   1,   1,   2,   3, // 6368-6372
  3,   2,   3, // 6373-6375
  3,   1,   1,   2,   3, // 6376-6380
  2,   2,   3, // 6381-6383
  2,   1,   1,   2,   3, // 6384-6388
  3,   2,   3, // 6389-6391
  3,   1,   1,   2,   3, // 6392-6396
  1,   1,   2,   3, // 6397-6400
  1,   2,   2,   3, // 6401-6404
  1,   1,   2,   3, // 6405-6408
  1,   2,   2,   3, // 6409-6412
  4,   1,   1,   2, // 6413-6416
  4,   2,   1,   1,   2, // 6417-6421
  4,   2, // 6422-6423
  4,   2,   2,   2, // 6424-6427
  3,   2, // 6428-6429
  3,   2,   2, // 6430-6432
  3,   2, // 6433-6434
  3, // 6435
  4, // 6436
  2,   2, // 6437-6438
  2, // 6439
  1,   2, // 6440-6441
  4,   7,   1, // 6442-6444
  9,   2, // 6445-6446
  9,   2, // 6447-6448
  9,   5,   5,   2, // 6449-6452
  9,   7,   5,   5,   2, // 6453-6457
  9,   1,   2, // 6458-6460
  9,   3,   1,   2, // 6461-6464
  9,   2,   1,   2, // 6465-6468
  9,   3,   2,   1,   2, // 6469-6473
  9,   3,   1,   2, // 6474-6477
  9,   1,   2, // 6478-6480
  9,   2,   1,   2, // 6481-6484
  9,   3,   2,   1,   2, // 6485-6489
  9,   3,   1,   2, // 6490-6493
  1,   2,   5, // 6494-6496
  2,   1,   2,   5, // 6497-6500
  3,   2,   1,   2,   5, // 6501-6505
  3,   1,   2,   5, // 6506-6509
  1,   2,   5, // 6510-6512
  2,   1,   2,   5, // 6513-6516
  3,   2,   1,   2,   5, // 6517-6521
  3,   1,   2,   5, // 6522-6525
  2,   1,   2,   7, // 6526-6529
  3,   2,   1,   2,   7, // 6530-6534
  7,   1,   2,   7, // 6535-6538
  3,   7,   1,   2,   7, // 6539-6543
  3,   1,   2,   7, // 6544-6547
  1,   2, // 6548-6549
  3,   1,   2, // 6550-6552
  9,   5,   5, // 6553-6555
  9,   7,   7,   7, // 6556-6559
  9,   9,   7,   7,   7, // 6560-6564
  9,   9,   7,   7, // 6565-6568
  9,   5,   5, // 6569-6571
  9,   5,   5, // 6572-6574
  9,   7,   5,   5, // 6575-6578
  9,   5,   5,   2, // 6579-6582
  9,   7,   2, // 6583-6585
  9,   7,   7,   2, // 6586-6589
  9,   5,   2, // 6590-6592
  9,   7,   5,   2, // 6593-6596
  9,   7,   5,   5, // 6597-6600
  9,   5,   5,   2, // 6601-6604
  9,   5, // 6605-6606
  9,   9,   5,   5,   2, // 6607-6611
  9,   5, // 6612-6613
  9,   5,   5, // 6614-6616
  9,   5,   5,   2, // 6617-6620
  9,   5,   2, // 6621-6623
  9,   7,   5,   2, // 6624-6627
  9,   5,   2, // 6628-6630
  9,   7,   5,   2, // 6631-6634
  1,   2,   7, // 6635-6637
  7,   1,   2,   7, // 6638-6641
  1,   2,   7, // 6642-6644
  7,   1,   2,   7, // 6645-6648
  3, // 6649
  9,   5,   2, // 6650-6652
  9,   7,   5,   5,   2, // 6653-6657
  9,   5,   5,   2, // 6658-6661
  9,   5,   2, // 6662-6664
  9,   7,   5,   2, // 6665-6668
  9,   5,   2,   2, // 6669-6672
  9,   7,   5,   2,   2, // 6673-6677
  9,   5,   2, // 6678-6680
  9,   7,   5,   2, // 6681-6684
  9,   3,   5,   2, // 6685-6688
  9,   3,   7,   5,   2, // 6689-6693
  9,   5,   2, // 6694-6696
  9,   7,   7, // 6697-6699
  9,   7, // 6700-6701
  1,   2,   7,   7, // 6702-6705
  7,   1,   2,   7,   7, // 6706-6710
  1,   2,   7,   7, // 6711-6714
  7,   1,   2,   7,   7, // 6715-6719
  9,   7,   7,   7, // 6720-6723
  9,   5, // 6724-6725
  9,   7,   5, // 6726-6728
  2, // 6729
  3,   2, // 6730-6731
  1,   2, // 6732-6733
  3,   1,   2, // 6734-6736
  2,   1,   2, // 6737-6739
  3,   2,   1,   2, // 6740-6743
  1, // 6744
  1,   2, // 6745-6746
  1, // 6747
  1, // 6748
  1,   1, // 6749-6750
  1, // 6751
  1,   1, // 6752-6753
  3, // 6754
  0 // End operand cycles
};
extern const unsigned HexagonForwardingPaths[] = {
 0, // No itinerary
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1-3
 0,  0,  0, // 4-6
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 7-8
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 9-12
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 13-16
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 17-19
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 20-22
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 23-25
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 26-28
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 29-31
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 32-34
 0,  0,  0, // 35-37
 0, // 38
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 39-40
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 41-42
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 43-45
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 46-49
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 50-52
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 53-56
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 57-59
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 60-62
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 63-65
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 66-68
HexagonItinerariesV60Bypass::Hex_FWD, // 69
HexagonItinerariesV60Bypass::Hex_FWD, // 70
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 71-72
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 73-74
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 75-76
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 77-79
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 80-82
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 83-86
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 87-89
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 90-93
HexagonItinerariesV60Bypass::Hex_FWD, // 94
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 95-99
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 100-102
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 103-107
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 108-111
HexagonItinerariesV60Bypass::Hex_FWD, // 112
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 113-115
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 116-118
 0,  0,  0, // 119-121
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 122-124
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 125-127
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 128-131
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 132-134
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 135-138
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 139-142
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 143-145
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 146-148
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 149-153
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 154-157
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 158-160
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 161-164
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 165-168
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 169-171
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 172-174
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD,  0, // 175-178
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 179-180
HexagonItinerariesV60Bypass::HVX_FWD, // 181
HexagonItinerariesV60Bypass::Hex_FWD, // 182
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 183-185
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 186-187
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 188-190
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 191-192
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 193-195
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 196-198
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 199-201
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 202-204
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 205-206
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 207-209
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 210-212
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 213-215
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 216-217
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 218-220
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 221-223
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 224-225
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 226-227
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 228-230
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 231-233
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 234-238
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 239-241
HexagonItinerariesV60Bypass::Hex_FWD, // 242
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 243-245
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 246-249
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 250-254
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 255-257
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 258-261
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 262-264
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 265-266
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 267-269
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 270-271
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 272-275
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 276-277
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 278-281
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 282-283
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 284-286
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 287-288
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 289-292
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 293-296
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 297-299
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 300-302
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 303-306
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 307-311
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 312-314
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 315-317
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 318-321
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 322-323
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 324-325
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 326-327
HexagonItinerariesV60Bypass::Hex_FWD, // 328
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 329-330
HexagonItinerariesV60Bypass::Hex_FWD, // 331
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 332-333
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 334-335
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 336-337
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 338-339
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 340-341
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 342-343
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 344-345
HexagonItinerariesV60Bypass::Hex_FWD, // 346
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 347-348
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 349-350
HexagonItinerariesV60Bypass::Hex_FWD, // 351
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 352-354
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 355-357
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 358-360
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 361-363
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 364-366
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 367-369
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 370-371
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 372-373
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 374-378
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 379-384
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 385-386
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 387-388
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 389-390
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 391-395
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 396-399
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 400-404
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 405-407
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 408-411
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 412-415
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 416-418
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 419-423
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 424-428
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 429-431
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 432-435
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 436-439
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 440-443
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 444-447
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 448-449
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 450-451
HexagonItinerariesV60Bypass::Hex_FWD, // 452
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 453-454
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 455-457
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 458-460
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 461-463
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 464-468
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 469-473
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 474-478
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 479-483
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 484-488
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 489-491
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 492-493
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 494-495
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 496-498
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 499-503
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 504-506
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 507-511
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 512-514
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 515-519
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 520-522
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 523-527
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 528-531
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 532-535
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 536-539
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 540-543
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 544-547
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 548-552
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 553-554
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 555-558
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 559-560
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 561-563
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 564-565
HexagonItinerariesV60Bypass::Hex_FWD, // 566
HexagonItinerariesV60Bypass::Hex_FWD, // 567
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 568-569
HexagonItinerariesV60Bypass::Hex_FWD, // 570
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 571-572
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 573-575
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 576-577
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 578-579
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 580-583
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 584-588
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 589-591
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 592-595
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 596-599
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 600-604
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 605-608
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 609-611
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 612-615
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 616-620
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 621-624
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 625-627
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 628-631
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 632-636
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 637-640
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 641-643
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 644-647
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 648-652
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 653-656
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 657-660
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 661-665
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 666-669
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 670-674
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 675-678
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 679-680
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 681-683
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 684-686
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 687-690
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 691-695
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 696-699
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 700-702
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 703-705
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 706-709
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 710-713
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 714-716
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 717-720
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 721-723
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 724-727
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 728-731
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 732-735
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 736-737
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 738-742
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 743-744
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 745-747
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 748-751
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 752-754
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 755-758
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 759-761
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 762-765
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 766-768
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 769-772
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 773-775
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 776-779
HexagonItinerariesV60Bypass::HVX_FWD, // 780
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 781-783
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 784-788
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 789-792
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 793-795
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 796-799
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 800-803
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 804-808
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 809-811
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 812-815
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 816-819
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 820-824
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 825-827
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 828-830
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 831-832
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 833-836
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 837-841
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 842-845
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 846-850
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 851-854
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 855-856
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 857-859
HexagonItinerariesV60Bypass::Hex_FWD, // 860
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 861-862
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 863-864
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 865-867
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 868-870
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 871-874
HexagonItinerariesV60Bypass::Hex_FWD, // 875
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 876-877
HexagonItinerariesV60Bypass::Hex_FWD, // 878
HexagonItinerariesV60Bypass::Hex_FWD, // 879
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 880-881
HexagonItinerariesV60Bypass::Hex_FWD, // 882
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 883-884
HexagonItinerariesV60Bypass::Hex_FWD, // 885
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 886-888
 0,  0,  0, // 889-891
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 892-893
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 894-897
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 898-901
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 902-904
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 905-907
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 908-910
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 911-913
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 914-916
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 917-919
 0,  0,  0, // 920-922
 0, // 923
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 924-925
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 926-927
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 928-930
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 931-934
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 935-937
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 938-941
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 942-944
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 945-947
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 948-950
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 951-953
HexagonItinerariesV55Bypass::Hex_FWD, // 954
HexagonItinerariesV55Bypass::Hex_FWD, // 955
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 956-957
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 958-959
 0,  0, // 960-961
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 962-964
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 965-967
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 968-971
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 972-974
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 975-978
HexagonItinerariesV55Bypass::Hex_FWD, // 979
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 980-984
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 985-989
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 990-993
HexagonItinerariesV55Bypass::Hex_FWD, // 994
 0,  0,  0, // 995-997
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 998-1000
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1001-1004
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1005-1008
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1009-1011
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1012-1014
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1015-1019
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1020-1023
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1024-1026
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1027-1030
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1031-1034
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1035-1037
 0,  0,  0, // 1038-1040
HexagonItinerariesV55Bypass::Hex_FWD, // 1041
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1042-1044
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1045-1046
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1047-1049
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1050-1051
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1052-1054
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1055-1057
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1058-1060
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1061-1063
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1064-1065
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1066-1068
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1069-1071
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1072-1074
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1075-1076
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1077-1079
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1080-1082
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1083-1084
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1085-1086
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1087-1089
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1090-1092
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1093-1097
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1098-1100
HexagonItinerariesV55Bypass::Hex_FWD, // 1101
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1102-1104
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1105-1108
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1109-1113
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1114-1116
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1117-1120
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1121-1123
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1124-1125
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1126-1128
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1129-1130
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1131-1134
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1135-1136
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1137-1140
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1141-1142
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1143-1145
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1146-1147
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1148-1151
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1152-1155
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1156-1158
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1159-1161
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1162-1165
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1166-1170
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1171-1173
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1174-1176
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1177-1180
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1181-1182
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1183-1184
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1185-1186
HexagonItinerariesV55Bypass::Hex_FWD, // 1187
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1188-1189
HexagonItinerariesV55Bypass::Hex_FWD, // 1190
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1191-1192
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1193-1194
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1195-1196
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1197-1198
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1199-1200
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1201-1202
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1203-1204
HexagonItinerariesV55Bypass::Hex_FWD, // 1205
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1206-1207
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1208-1209
HexagonItinerariesV55Bypass::Hex_FWD, // 1210
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1211-1213
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1214-1216
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1217-1219
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1220-1222
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1223-1225
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1226-1228
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1229-1230
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1231-1232
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1233-1237
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1238-1243
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1244-1245
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1246-1247
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1248-1249
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1250-1254
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1255-1258
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1259-1263
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1264-1266
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1267-1270
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1271-1274
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1275-1277
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1278-1282
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1283-1287
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1288-1290
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1291-1294
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1295-1298
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1299-1302
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1303-1306
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1307-1308
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1309-1310
HexagonItinerariesV55Bypass::Hex_FWD, // 1311
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1312-1313
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1314-1316
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1317-1319
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1320-1322
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1323-1327
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1328-1332
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1333-1337
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1338-1342
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1343-1347
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1348-1350
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1351-1352
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1353-1354
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1355-1357
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1358-1362
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1363-1365
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1366-1370
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1371-1373
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1374-1378
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1379-1381
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1382-1386
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1387-1390
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1391-1394
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1395-1398
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1399-1402
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1403-1406
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1407-1411
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1412-1413
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1414-1417
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1418-1419
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1420-1422
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1423-1424
HexagonItinerariesV55Bypass::Hex_FWD, // 1425
HexagonItinerariesV55Bypass::Hex_FWD, // 1426
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1427-1428
HexagonItinerariesV55Bypass::Hex_FWD, // 1429
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1430-1431
HexagonItinerariesV55Bypass::Hex_FWD, // 1432
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1433-1434
HexagonItinerariesV55Bypass::Hex_FWD, // 1435
HexagonItinerariesV55Bypass::Hex_FWD, // 1436
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1437-1438
HexagonItinerariesV55Bypass::Hex_FWD, // 1439
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1440-1441
HexagonItinerariesV55Bypass::Hex_FWD, // 1442
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1443-1445
 0,  0,  0, // 1446-1448
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1449-1450
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1451-1454
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1455-1458
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1459-1461
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1462-1464
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1465-1467
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1468-1470
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1471-1473
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1474-1476
 0,  0,  0, // 1477-1479
 0, // 1480
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1481-1482
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1483-1484
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1485-1487
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1488-1491
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1492-1494
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1495-1498
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1499-1501
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1502-1504
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1505-1507
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1508-1510
HexagonItinerariesV62Bypass::Hex_FWD, // 1511
HexagonItinerariesV62Bypass::Hex_FWD, // 1512
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1513-1514
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1515-1516
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1517-1518
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1519-1521
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1522-1524
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1525-1528
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1529-1531
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1532-1535
HexagonItinerariesV62Bypass::Hex_FWD, // 1536
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1537-1541
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1542-1544
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1545-1549
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1550-1553
HexagonItinerariesV62Bypass::Hex_FWD, // 1554
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1555-1557
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1558-1560
 0,  0,  0, // 1561-1563
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1564-1566
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1567-1569
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1570-1573
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1574-1576
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1577-1580
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1581-1584
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1585-1587
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1588-1590
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1591-1595
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1596-1599
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1600-1602
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1603-1606
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1607-1610
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1611-1613
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1614-1616
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD,  0, // 1617-1620
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1621-1622
HexagonItinerariesV62Bypass::HVX_FWD, // 1623
HexagonItinerariesV62Bypass::Hex_FWD, // 1624
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1625-1627
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1628-1629
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1630-1632
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1633-1634
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1635-1637
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1638-1640
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1641-1643
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1644-1646
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1647-1648
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1649-1651
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1652-1654
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1655-1657
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1658-1659
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1660-1662
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1663-1665
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1666-1667
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1668-1669
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1670-1672
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1673-1675
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1676-1680
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1681-1683
HexagonItinerariesV62Bypass::Hex_FWD, // 1684
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1685-1687
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1688-1691
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1692-1696
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1697-1699
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1700-1703
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1704-1706
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1707-1708
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1709-1711
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1712-1713
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1714-1717
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1718-1719
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1720-1723
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1724-1725
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1726-1728
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1729-1730
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1731-1734
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1735-1738
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1739-1741
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1742-1744
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1745-1748
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1749-1753
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1754-1756
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1757-1759
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1760-1763
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1764-1765
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1766-1767
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1768-1769
HexagonItinerariesV62Bypass::Hex_FWD, // 1770
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1771-1772
HexagonItinerariesV62Bypass::Hex_FWD, // 1773
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1774-1775
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1776-1777
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1778-1779
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1780-1781
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1782-1783
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1784-1785
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1786-1787
HexagonItinerariesV62Bypass::Hex_FWD, // 1788
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1789-1790
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1791-1792
HexagonItinerariesV62Bypass::Hex_FWD, // 1793
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1794-1796
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1797-1799
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1800-1802
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1803-1805
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1806-1808
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1809-1811
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1812-1813
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1814-1815
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1816-1820
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1821-1826
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1827-1828
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1829-1830
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1831-1832
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1833-1837
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1838-1841
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1842-1846
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1847-1849
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1850-1853
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1854-1857
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1858-1860
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1861-1865
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1866-1870
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1871-1873
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1874-1877
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1878-1881
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1882-1885
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1886-1889
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1890-1891
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1892-1893
HexagonItinerariesV62Bypass::Hex_FWD, // 1894
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1895-1896
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1897-1899
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1900-1902
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1903-1905
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1906-1910
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1911-1915
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1916-1920
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1921-1925
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1926-1930
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1931-1933
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1934-1935
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1936-1937
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1938-1940
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1941-1945
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1946-1948
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1949-1953
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1954-1956
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1957-1961
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1962-1964
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1965-1969
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1970-1973
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1974-1977
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1978-1981
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1982-1985
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1986-1989
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1990-1994
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1995-1996
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1997-2000
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2001-2002
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2003-2005
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2006-2007
HexagonItinerariesV62Bypass::Hex_FWD, // 2008
HexagonItinerariesV62Bypass::Hex_FWD, // 2009
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2010-2011
HexagonItinerariesV62Bypass::Hex_FWD, // 2012
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2013-2014
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2015-2017
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2018-2019
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2020-2021
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2022-2025
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2026-2030
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2031-2033
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2034-2037
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2038-2041
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2042-2046
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2047-2050
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2051-2053
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2054-2057
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2058-2062
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2063-2066
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2067-2069
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2070-2073
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2074-2078
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2079-2082
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2083-2085
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2086-2089
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2090-2094
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2095-2098
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2099-2102
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2103-2107
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2108-2111
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2112-2116
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2117-2120
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2121-2122
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2123-2125
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2126-2128
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2129-2132
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2133-2137
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2138-2141
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2142-2144
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2145-2147
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2148-2151
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2152-2155
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2156-2158
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2159-2162
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2163-2165
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2166-2169
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2170-2173
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2174-2177
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2178-2179
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2180-2184
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2185-2186
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2187-2189
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2190-2193
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2194-2196
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2197-2200
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2201-2203
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2204-2207
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2208-2210
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2211-2214
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2215-2217
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2218-2221
HexagonItinerariesV62Bypass::HVX_FWD, // 2222
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2223-2225
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2226-2230
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2231-2234
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2235-2237
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2238-2241
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2242-2245
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2246-2250
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2251-2253
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2254-2257
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2258-2261
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2262-2266
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2267-2269
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2270-2272
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2273-2274
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2275-2278
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2279-2283
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2284-2287
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2288-2292
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2293-2296
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2297-2298
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2299-2301
HexagonItinerariesV62Bypass::Hex_FWD, // 2302
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2303-2304
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2305-2306
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2307-2309
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2310-2312
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2313-2316
HexagonItinerariesV62Bypass::Hex_FWD, // 2317
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2318-2319
HexagonItinerariesV62Bypass::Hex_FWD, // 2320
HexagonItinerariesV62Bypass::Hex_FWD, // 2321
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2322-2323
HexagonItinerariesV62Bypass::Hex_FWD, // 2324
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2325-2326
HexagonItinerariesV62Bypass::Hex_FWD, // 2327
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2328-2330
 0,  0,  0, // 2331-2333
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2334-2335
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2336-2339
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2340-2343
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2344-2346
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2347-2349
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2350-2352
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2353-2355
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2356-2358
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2359-2361
 0,  0,  0, // 2362-2364
 0, // 2365
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2366-2367
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2368-2369
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2370-2372
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2373-2376
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2377-2379
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2380-2383
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2384-2386
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2387-2389
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2390-2392
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2393-2395
HexagonItinerariesV65Bypass::Hex_FWD, // 2396
HexagonItinerariesV65Bypass::Hex_FWD, // 2397
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2398-2399
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2400-2401
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2402-2403
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2404-2406
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2407-2409
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2410-2413
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2414-2416
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2417-2420
HexagonItinerariesV65Bypass::Hex_FWD, // 2421
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2422-2426
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2427-2429
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2430-2434
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2435-2438
HexagonItinerariesV65Bypass::Hex_FWD, // 2439
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2440-2442
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2443-2445
 0,  0,  0, // 2446-2448
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2449-2451
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2452-2454
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2455-2458
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2459-2461
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2462-2465
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2466-2469
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2470-2472
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2473-2475
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2476-2480
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2481-2484
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2485-2487
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2488-2491
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2492-2495
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2496-2498
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2499-2501
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD,  0, // 2502-2505
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2506-2507
HexagonItinerariesV65Bypass::HVX_FWD, // 2508
HexagonItinerariesV65Bypass::Hex_FWD, // 2509
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2510-2512
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2513-2514
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2515-2517
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2518-2519
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2520-2522
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2523-2525
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2526-2528
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2529-2531
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2532-2533
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2534-2536
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2537-2539
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2540-2542
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2543-2544
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2545-2547
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2548-2550
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2551-2552
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2553-2554
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2555-2557
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2558-2560
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2561-2565
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2566-2568
HexagonItinerariesV65Bypass::Hex_FWD, // 2569
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2570-2572
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2573-2576
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2577-2581
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2582-2584
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2585-2588
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2589-2591
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2592-2593
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2594-2596
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2597-2598
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2599-2602
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2603-2604
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2605-2608
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2609-2610
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2611-2613
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2614-2615
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2616-2619
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2620-2623
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2624-2626
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2627-2629
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2630-2633
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2634-2638
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2639-2641
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2642-2644
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2645-2648
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2649-2650
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2651-2652
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2653-2654
HexagonItinerariesV65Bypass::Hex_FWD, // 2655
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2656-2657
HexagonItinerariesV65Bypass::Hex_FWD, // 2658
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2659-2660
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2661-2662
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2663-2664
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2665-2666
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2667-2668
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2669-2670
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2671-2672
HexagonItinerariesV65Bypass::Hex_FWD, // 2673
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2674-2675
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2676-2677
HexagonItinerariesV65Bypass::Hex_FWD, // 2678
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2679-2681
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2682-2684
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2685-2687
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2688-2690
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2691-2693
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2694-2696
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2697-2698
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2699-2700
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2701-2705
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2706-2711
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2712-2713
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2714-2715
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2716-2717
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2718-2722
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2723-2726
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2727-2731
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2732-2734
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2735-2738
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2739-2742
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2743-2745
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2746-2750
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2751-2755
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2756-2758
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2759-2762
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2763-2766
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2767-2770
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2771-2774
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2775-2776
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2777-2778
HexagonItinerariesV65Bypass::Hex_FWD, // 2779
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2780-2781
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2782-2784
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2785-2787
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2788-2790
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2791-2795
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2796-2800
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2801-2805
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2806-2810
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2811-2815
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2816-2818
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2819-2820
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2821-2822
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2823-2825
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2826-2830
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2831-2833
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2834-2838
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2839-2841
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2842-2846
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2847-2849
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2850-2854
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2855-2858
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2859-2862
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2863-2866
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2867-2870
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2871-2874
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2875-2879
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2880-2881
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2882-2885
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2886-2887
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2888-2890
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2891-2892
HexagonItinerariesV65Bypass::Hex_FWD, // 2893
HexagonItinerariesV65Bypass::Hex_FWD, // 2894
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2895-2896
HexagonItinerariesV65Bypass::Hex_FWD, // 2897
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2898-2899
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2900-2902
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2903-2904
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2905-2906
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2907-2910
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2911-2915
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2916-2918
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2919-2922
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2923-2926
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2927-2931
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2932-2935
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2936-2938
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2939-2942
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2943-2947
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2948-2951
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2952-2954
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2955-2958
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2959-2963
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2964-2967
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2968-2970
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2971-2974
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2975-2979
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2980-2983
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2984-2987
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2988-2992
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2993-2996
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2997-3001
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3002-3005
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3006-3007
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3008-3010
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3011-3013
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3014-3017
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3018-3022
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3023-3026
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3027-3029
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3030-3032
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3033-3036
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3037-3040
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3041-3043
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3044-3047
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3048-3050
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3051-3054
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3055-3058
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3059-3062
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3063-3064
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3065-3069
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3070-3071
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3072-3074
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3075-3078
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3079-3081
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3082-3085
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3086-3088
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3089-3092
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3093-3095
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3096-3099
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3100-3102
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3103-3106
HexagonItinerariesV65Bypass::HVX_FWD, // 3107
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3108-3110
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3111-3115
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3116-3119
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3120-3122
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3123-3126
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3127-3130
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3131-3135
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3136-3138
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3139-3142
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3143-3146
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3147-3151
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3152-3154
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3155-3157
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3158-3159
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3160-3163
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3164-3168
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3169-3172
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3173-3177
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3178-3181
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3182-3183
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 3184-3186
HexagonItinerariesV65Bypass::Hex_FWD, // 3187
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3188-3189
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3190-3191
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3192-3194
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3195-3197
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3198-3201
HexagonItinerariesV65Bypass::Hex_FWD, // 3202
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3203-3204
HexagonItinerariesV65Bypass::Hex_FWD, // 3205
HexagonItinerariesV65Bypass::Hex_FWD, // 3206
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3207-3208
HexagonItinerariesV65Bypass::Hex_FWD, // 3209
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 3210-3211
HexagonItinerariesV65Bypass::Hex_FWD, // 3212
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3213-3215
 0,  0,  0, // 3216-3218
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3219-3220
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3221-3224
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3225-3228
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3229-3231
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3232-3234
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3235-3237
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3238-3240
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3241-3243
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3244-3246
 0,  0,  0, // 3247-3249
 0, // 3250
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3251-3252
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3253-3254
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3255-3257
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3258-3261
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3262-3264
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3265-3268
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3269-3271
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3272-3274
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3275-3277
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3278-3280
HexagonItinerariesV66Bypass::Hex_FWD, // 3281
HexagonItinerariesV66Bypass::Hex_FWD, // 3282
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3283-3284
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3285-3286
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3287-3288
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3289-3291
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3292-3294
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3295-3298
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3299-3301
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3302-3305
HexagonItinerariesV66Bypass::Hex_FWD, // 3306
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3307-3311
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3312-3314
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3315-3319
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3320-3323
HexagonItinerariesV66Bypass::Hex_FWD, // 3324
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3325-3327
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3328-3330
 0,  0,  0, // 3331-3333
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3334-3336
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3337-3339
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3340-3343
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3344-3346
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3347-3350
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3351-3354
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3355-3357
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3358-3360
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3361-3365
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3366-3369
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3370-3372
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3373-3376
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3377-3380
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3381-3383
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3384-3386
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD,  0, // 3387-3390
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3391-3392
HexagonItinerariesV66Bypass::HVX_FWD, // 3393
HexagonItinerariesV66Bypass::Hex_FWD, // 3394
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3395-3397
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3398-3399
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3400-3402
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3403-3404
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3405-3407
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3408-3410
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3411-3413
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3414-3416
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3417-3418
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3419-3421
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3422-3424
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3425-3427
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3428-3429
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3430-3432
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3433-3435
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3436-3437
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3438-3439
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3440-3442
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3443-3445
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3446-3450
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3451-3453
HexagonItinerariesV66Bypass::Hex_FWD, // 3454
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3455-3457
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3458-3461
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3462-3466
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3467-3469
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3470-3473
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3474-3476
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3477-3478
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3479-3481
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3482-3483
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3484-3487
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3488-3489
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3490-3493
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3494-3495
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3496-3498
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3499-3500
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3501-3504
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3505-3508
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3509-3511
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3512-3514
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3515-3518
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3519-3523
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3524-3526
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3527-3529
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3530-3533
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3534-3535
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3536-3537
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3538-3539
HexagonItinerariesV66Bypass::Hex_FWD, // 3540
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3541-3542
HexagonItinerariesV66Bypass::Hex_FWD, // 3543
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3544-3545
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3546-3547
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3548-3549
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3550-3551
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3552-3553
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3554-3555
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3556-3557
HexagonItinerariesV66Bypass::Hex_FWD, // 3558
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3559-3560
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3561-3562
HexagonItinerariesV66Bypass::Hex_FWD, // 3563
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3564-3566
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3567-3569
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3570-3572
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3573-3575
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3576-3578
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3579-3581
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3582-3583
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3584-3585
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3586-3590
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3591-3596
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3597-3598
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3599-3600
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3601-3602
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3603-3607
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3608-3611
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3612-3616
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3617-3619
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3620-3623
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3624-3627
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3628-3630
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3631-3635
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3636-3640
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3641-3643
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3644-3647
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3648-3651
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3652-3655
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3656-3659
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3660-3661
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3662-3663
HexagonItinerariesV66Bypass::Hex_FWD, // 3664
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3665-3666
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3667-3669
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3670-3672
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3673-3675
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3676-3680
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3681-3685
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3686-3690
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3691-3695
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3696-3700
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3701-3703
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3704-3705
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3706-3707
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3708-3710
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3711-3715
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3716-3718
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3719-3723
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3724-3726
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3727-3731
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3732-3734
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3735-3739
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3740-3743
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3744-3747
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3748-3751
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3752-3755
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3756-3759
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3760-3764
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3765-3766
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3767-3770
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3771-3772
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3773-3775
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3776-3777
HexagonItinerariesV66Bypass::Hex_FWD, // 3778
HexagonItinerariesV66Bypass::Hex_FWD, // 3779
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3780-3781
HexagonItinerariesV66Bypass::Hex_FWD, // 3782
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3783-3784
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3785-3787
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3788-3789
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3790-3791
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3792-3795
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3796-3800
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3801-3803
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3804-3807
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3808-3811
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3812-3816
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3817-3820
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3821-3823
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3824-3827
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3828-3832
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3833-3836
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3837-3839
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3840-3843
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3844-3848
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3849-3852
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3853-3855
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3856-3859
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3860-3864
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3865-3868
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3869-3872
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3873-3877
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3878-3881
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3882-3886
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3887-3890
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3891-3892
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3893-3895
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3896-3898
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3899-3902
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3903-3907
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3908-3911
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3912-3914
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3915-3917
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3918-3921
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3922-3925
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3926-3928
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3929-3932
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3933-3935
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3936-3939
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3940-3943
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3944-3947
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3948-3949
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3950-3954
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3955-3956
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3957-3959
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3960-3963
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3964-3966
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3967-3970
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3971-3973
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3974-3977
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3978-3980
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3981-3984
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3985-3987
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3988-3991
HexagonItinerariesV66Bypass::HVX_FWD, // 3992
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3993-3995
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3996-4000
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4001-4004
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4005-4007
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4008-4011
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4012-4015
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4016-4020
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4021-4023
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4024-4027
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4028-4031
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4032-4036
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4037-4039
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4040-4042
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4043-4044
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4045-4048
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4049-4053
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4054-4057
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4058-4062
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4063-4066
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4067-4068
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 4069-4071
HexagonItinerariesV66Bypass::Hex_FWD, // 4072
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4073-4074
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4075-4076
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4077-4079
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4080-4082
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4083-4086
HexagonItinerariesV66Bypass::Hex_FWD, // 4087
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4088-4089
HexagonItinerariesV66Bypass::Hex_FWD, // 4090
HexagonItinerariesV66Bypass::Hex_FWD, // 4091
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4092-4093
HexagonItinerariesV66Bypass::Hex_FWD, // 4094
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 4095-4096
HexagonItinerariesV66Bypass::Hex_FWD, // 4097
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4098-4100
 0,  0,  0, // 4101-4103
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4104-4105
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4106-4109
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4110-4113
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4114-4116
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4117-4119
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4120-4122
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4123-4125
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4126-4128
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4129-4131
 0,  0,  0, // 4132-4134
 0, // 4135
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4136-4137
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4138-4139
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4140-4142
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4143-4146
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4147-4149
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4150-4153
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4154-4156
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4157-4159
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4160-4162
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4163-4165
HexagonItinerariesV67Bypass::Hex_FWD, // 4166
HexagonItinerariesV67Bypass::Hex_FWD, // 4167
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4168-4169
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4170-4171
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4172-4173
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4174-4176
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4177-4179
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4180-4183
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4184-4186
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4187-4190
HexagonItinerariesV67Bypass::Hex_FWD, // 4191
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4192-4196
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4197-4199
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4200-4204
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4205-4208
HexagonItinerariesV67Bypass::Hex_FWD, // 4209
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4210-4212
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4213-4215
 0,  0,  0, // 4216-4218
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4219-4221
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4222-4224
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4225-4228
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4229-4231
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4232-4235
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4236-4239
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4240-4242
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4243-4245
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4246-4250
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4251-4254
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4255-4257
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4258-4261
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4262-4265
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4266-4268
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4269-4271
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD,  0, // 4272-4275
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4276-4277
HexagonItinerariesV67Bypass::HVX_FWD, // 4278
HexagonItinerariesV67Bypass::Hex_FWD, // 4279
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4280-4282
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4283-4284
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4285-4287
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4288-4289
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4290-4292
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4293-4295
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4296-4298
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4299-4301
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4302-4303
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4304-4306
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4307-4309
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4310-4312
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4313-4314
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4315-4317
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4318-4320
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4321-4322
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4323-4324
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4325-4327
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4328-4330
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4331-4335
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4336-4338
HexagonItinerariesV67Bypass::Hex_FWD, // 4339
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4340-4342
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4343-4346
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4347-4351
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4352-4354
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4355-4358
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4359-4361
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4362-4363
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4364-4366
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4367-4368
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4369-4372
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4373-4374
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4375-4378
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4379-4380
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4381-4383
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4384-4385
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4386-4389
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4390-4393
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4394-4396
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4397-4399
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4400-4403
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4404-4408
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4409-4411
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4412-4414
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4415-4418
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4419-4420
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4421-4422
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4423-4424
HexagonItinerariesV67Bypass::Hex_FWD, // 4425
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4426-4427
HexagonItinerariesV67Bypass::Hex_FWD, // 4428
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4429-4430
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4431-4432
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4433-4434
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4435-4436
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4437-4438
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4439-4440
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4441-4442
HexagonItinerariesV67Bypass::Hex_FWD, // 4443
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4444-4445
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4446-4447
HexagonItinerariesV67Bypass::Hex_FWD, // 4448
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4449-4451
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4452-4454
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4455-4457
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4458-4460
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4461-4463
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4464-4466
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4467-4468
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4469-4470
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4471-4475
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4476-4481
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4482-4483
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4484-4485
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4486-4487
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4488-4492
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4493-4496
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4497-4501
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4502-4504
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4505-4508
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4509-4512
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4513-4515
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4516-4520
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4521-4525
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4526-4528
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4529-4532
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4533-4536
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4537-4540
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4541-4544
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4545-4546
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4547-4548
HexagonItinerariesV67Bypass::Hex_FWD, // 4549
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4550-4551
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4552-4554
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4555-4557
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4558-4560
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4561-4565
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4566-4570
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4571-4575
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4576-4580
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4581-4585
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4586-4588
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4589-4590
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4591-4592
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4593-4595
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4596-4600
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4601-4603
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4604-4608
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4609-4611
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4612-4616
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4617-4619
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4620-4624
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4625-4628
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4629-4632
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4633-4636
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4637-4640
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4641-4644
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4645-4649
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4650-4651
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4652-4655
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4656-4657
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4658-4660
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4661-4662
HexagonItinerariesV67Bypass::Hex_FWD, // 4663
HexagonItinerariesV67Bypass::Hex_FWD, // 4664
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4665-4666
HexagonItinerariesV67Bypass::Hex_FWD, // 4667
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4668-4669
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4670-4672
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4673-4674
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4675-4676
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4677-4680
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4681-4685
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4686-4688
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4689-4692
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4693-4696
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4697-4701
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4702-4705
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4706-4708
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4709-4712
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4713-4717
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4718-4721
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4722-4724
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4725-4728
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4729-4733
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4734-4737
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4738-4740
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4741-4744
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4745-4749
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4750-4753
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4754-4757
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4758-4762
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4763-4766
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4767-4771
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4772-4775
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4776-4777
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4778-4780
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4781-4783
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4784-4787
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4788-4792
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4793-4796
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4797-4799
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4800-4802
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4803-4806
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4807-4810
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4811-4813
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4814-4817
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4818-4820
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4821-4824
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4825-4828
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4829-4832
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4833-4834
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4835-4839
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4840-4841
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4842-4844
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4845-4848
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4849-4851
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4852-4855
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4856-4858
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4859-4862
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4863-4865
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4866-4869
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4870-4872
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4873-4876
HexagonItinerariesV67Bypass::HVX_FWD, // 4877
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4878-4880
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4881-4885
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4886-4889
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4890-4892
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4893-4896
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4897-4900
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4901-4905
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4906-4908
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4909-4912
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4913-4916
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4917-4921
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4922-4924
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4925-4927
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4928-4929
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4930-4933
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4934-4938
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4939-4942
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4943-4947
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4948-4951
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4952-4953
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::HVX_FWD, // 4954-4956
HexagonItinerariesV67Bypass::Hex_FWD, // 4957
HexagonItinerariesV67Bypass::HVX_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4958-4959
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4960-4961
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4962-4964
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4965-4967
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4968-4971
HexagonItinerariesV67Bypass::Hex_FWD, // 4972
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4973-4974
HexagonItinerariesV67Bypass::Hex_FWD, // 4975
HexagonItinerariesV67Bypass::Hex_FWD, // 4976
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4977-4978
HexagonItinerariesV67Bypass::Hex_FWD, // 4979
HexagonItinerariesV67Bypass::Hex_FWD, HexagonItinerariesV67Bypass::Hex_FWD, // 4980-4981
HexagonItinerariesV67Bypass::Hex_FWD, // 4982
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4983-4985
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4986-4988
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4989-4990
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4991-4994
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4995-4998
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 4999-5001
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5002-5004
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5005-5007
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5008-5010
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5011-5013
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5014-5016
 0,  0,  0, // 5017-5019
 0, // 5020
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5021-5022
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5023-5024
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5025-5027
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5028-5031
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5032-5034
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5035-5038
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5039-5041
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5042-5044
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5045-5047
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5048-5050
HexagonItinerariesV67TBypass::Hex_FWD, // 5051
HexagonItinerariesV67TBypass::Hex_FWD, // 5052
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5053-5054
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5055-5056
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5057-5059
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5060-5062
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5063-5065
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5066-5069
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5070-5072
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5073-5076
HexagonItinerariesV67TBypass::Hex_FWD, // 5077
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5078-5082
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5083-5085
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5086-5090
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5091-5094
HexagonItinerariesV67TBypass::Hex_FWD, // 5095
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5096-5098
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5099-5101
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5102-5104
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5105-5107
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5108-5110
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5111-5114
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5115-5117
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5118-5121
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5122-5125
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5126-5128
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5129-5131
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5132-5136
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5137-5140
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5141-5143
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5144-5147
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5148-5151
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5152-5154
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD,  0,  0, // 5155-5158
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD,  0, // 5159-5162
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5163-5164
HexagonItinerariesV67TBypass::HVX_FWD, // 5165
HexagonItinerariesV67TBypass::Hex_FWD, // 5166
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5167-5169
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5170-5171
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5172-5174
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5175-5176
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5177-5179
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5180-5182
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5183-5185
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5186-5188
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5189-5190
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5191-5193
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5194-5196
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5197-5199
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5200-5201
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5202-5204
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5205-5207
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5208-5209
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5210-5211
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5212-5214
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5215-5217
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5218-5222
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5223-5225
HexagonItinerariesV67TBypass::Hex_FWD, // 5226
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5227-5229
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5230-5233
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5234-5238
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5239-5241
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5242-5245
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5246-5248
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5249-5250
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5251-5253
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5254-5255
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5256-5259
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5260-5261
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5262-5265
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5266-5267
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5268-5270
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5271-5272
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5273-5276
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5277-5280
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5281-5283
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5284-5286
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5287-5290
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5291-5295
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5296-5298
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5299-5301
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5302-5305
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5306-5307
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5308-5309
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5310-5311
HexagonItinerariesV67TBypass::Hex_FWD, // 5312
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5313-5314
HexagonItinerariesV67TBypass::Hex_FWD, // 5315
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5316-5317
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5318-5319
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5320-5321
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5322-5323
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5324-5325
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5326-5327
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5328-5329
HexagonItinerariesV67TBypass::Hex_FWD, // 5330
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5331-5332
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5333-5334
HexagonItinerariesV67TBypass::Hex_FWD, // 5335
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5336-5338
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5339-5341
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5342-5344
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5345-5347
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5348-5350
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5351-5353
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5354-5355
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5356-5357
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5358-5362
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5363-5368
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5369-5370
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5371-5372
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5373-5374
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5375-5379
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5380-5383
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5384-5388
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5389-5391
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5392-5395
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5396-5399
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5400-5402
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5403-5407
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5408-5412
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5413-5415
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5416-5419
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5420-5423
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5424-5427
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5428-5431
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5432-5433
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5434-5435
HexagonItinerariesV67TBypass::Hex_FWD, // 5436
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5437-5438
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5439-5441
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5442-5444
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5445-5447
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5448-5452
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5453-5457
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5458-5462
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5463-5467
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5468-5472
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5473-5475
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5476-5477
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5478-5479
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5480-5482
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5483-5487
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5488-5490
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5491-5495
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5496-5498
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5499-5503
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5504-5506
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5507-5511
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5512-5515
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5516-5519
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5520-5523
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5524-5527
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5528-5531
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5532-5536
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5537-5538
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5539-5542
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5543-5544
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5545-5547
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5548-5549
HexagonItinerariesV67TBypass::Hex_FWD, // 5550
HexagonItinerariesV67TBypass::Hex_FWD, // 5551
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5552-5553
HexagonItinerariesV67TBypass::Hex_FWD, // 5554
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5555-5556
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5557-5559
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5560-5561
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5562-5563
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5564-5567
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5568-5572
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5573-5575
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5576-5579
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5580-5583
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5584-5588
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5589-5592
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5593-5595
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5596-5599
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5600-5604
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5605-5608
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5609-5611
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5612-5615
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5616-5620
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5621-5624
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5625-5627
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5628-5631
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5632-5636
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5637-5640
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5641-5644
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5645-5649
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5650-5653
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5654-5658
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5659-5662
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5663-5664
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5665-5667
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5668-5670
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5671-5674
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5675-5679
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5680-5683
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5684-5686
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5687-5689
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5690-5693
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5694-5697
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5698-5700
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5701-5704
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5705-5707
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5708-5711
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5712-5715
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5716-5719
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5720-5721
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5722-5726
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5727-5728
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5729-5731
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5732-5735
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5736-5738
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5739-5742
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5743-5745
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5746-5749
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5750-5752
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5753-5756
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5757-5759
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5760-5763
HexagonItinerariesV67TBypass::HVX_FWD, // 5764
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5765-5767
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5768-5772
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5773-5776
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5777-5779
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5780-5783
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5784-5787
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5788-5792
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5793-5795
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5796-5799
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5800-5803
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5804-5808
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5809-5811
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5812-5814
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5815-5816
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5817-5820
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5821-5825
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5826-5829
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5830-5834
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5835-5838
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5839-5840
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::HVX_FWD, // 5841-5843
HexagonItinerariesV67TBypass::Hex_FWD, // 5844
HexagonItinerariesV67TBypass::HVX_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5845-5846
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5847-5848
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5849-5851
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5852-5854
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5855-5858
HexagonItinerariesV67TBypass::Hex_FWD, // 5859
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5860-5861
HexagonItinerariesV67TBypass::Hex_FWD, // 5862
HexagonItinerariesV67TBypass::Hex_FWD, // 5863
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5864-5865
HexagonItinerariesV67TBypass::Hex_FWD, // 5866
HexagonItinerariesV67TBypass::Hex_FWD, HexagonItinerariesV67TBypass::Hex_FWD, // 5867-5868
HexagonItinerariesV67TBypass::Hex_FWD, // 5869
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5870-5872
 0,  0,  0, // 5873-5875
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5876-5877
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5878-5881
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5882-5885
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5886-5888
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5889-5891
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5892-5894
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5895-5897
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5898-5900
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5901-5903
 0,  0,  0, // 5904-5906
 0, // 5907
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5908-5909
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5910-5911
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5912-5914
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5915-5918
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5919-5921
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5922-5925
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5926-5928
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5929-5931
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5932-5934
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5935-5937
HexagonItinerariesV68Bypass::Hex_FWD, // 5938
HexagonItinerariesV68Bypass::Hex_FWD, // 5939
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5940-5941
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5942-5943
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5944-5945
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5946-5948
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5949-5951
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5952-5955
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5956-5958
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5959-5962
HexagonItinerariesV68Bypass::Hex_FWD, // 5963
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5964-5968
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 5969-5971
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5972-5976
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5977-5980
HexagonItinerariesV68Bypass::Hex_FWD, // 5981
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 5982-5984
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 5985-5987
 0,  0,  0, // 5988-5990
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 5991-5993
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 5994-5996
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 5997-6000
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6001-6003
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6004-6007
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6008-6011
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6012-6014
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6015-6017
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6018-6022
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6023-6026
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6027-6029
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6030-6033
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6034-6037
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6038-6040
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6041-6043
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD,  0, // 6044-6047
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6048-6049
HexagonItinerariesV68Bypass::HVX_FWD, // 6050
HexagonItinerariesV68Bypass::Hex_FWD, // 6051
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6052-6054
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6055-6056
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6057-6059
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6060-6061
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6062-6064
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6065-6067
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6068-6070
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6071-6073
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6074-6075
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6076-6078
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6079-6081
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6082-6084
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6085-6086
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6087-6089
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6090-6092
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6093-6094
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6095-6096
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6097-6099
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6100-6102
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6103-6107
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6108-6110
HexagonItinerariesV68Bypass::Hex_FWD, // 6111
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6112-6114
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6115-6118
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6119-6123
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6124-6126
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6127-6130
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6131-6133
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6134-6135
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6136-6138
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6139-6140
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6141-6144
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6145-6146
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6147-6150
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6151-6152
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6153-6155
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6156-6157
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6158-6161
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6162-6165
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6166-6168
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6169-6171
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6172-6175
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6176-6180
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6181-6183
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6184-6186
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6187-6190
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6191-6192
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6193-6194
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6195-6196
HexagonItinerariesV68Bypass::Hex_FWD, // 6197
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6198-6199
HexagonItinerariesV68Bypass::Hex_FWD, // 6200
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6201-6202
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6203-6204
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6205-6206
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6207-6208
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6209-6210
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6211-6212
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6213-6214
HexagonItinerariesV68Bypass::Hex_FWD, // 6215
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6216-6217
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6218-6219
HexagonItinerariesV68Bypass::Hex_FWD, // 6220
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6221-6223
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6224-6226
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6227-6229
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6230-6232
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6233-6235
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6236-6238
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6239-6240
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6241-6242
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6243-6247
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6248-6253
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6254-6255
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6256-6257
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6258-6259
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6260-6264
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6265-6268
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6269-6273
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6274-6276
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6277-6280
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6281-6284
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6285-6287
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6288-6292
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6293-6297
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6298-6300
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6301-6304
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6305-6308
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6309-6312
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6313-6316
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6317-6318
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6319-6320
HexagonItinerariesV68Bypass::Hex_FWD, // 6321
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6322-6323
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6324-6326
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6327-6329
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6330-6332
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6333-6337
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6338-6342
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6343-6347
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6348-6352
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6353-6357
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6358-6360
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6361-6362
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6363-6364
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6365-6367
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6368-6372
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6373-6375
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6376-6380
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6381-6383
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6384-6388
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6389-6391
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6392-6396
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6397-6400
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6401-6404
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6405-6408
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6409-6412
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6413-6416
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6417-6421
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6422-6423
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6424-6427
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6428-6429
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6430-6432
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6433-6434
HexagonItinerariesV68Bypass::Hex_FWD, // 6435
HexagonItinerariesV68Bypass::Hex_FWD, // 6436
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6437-6438
HexagonItinerariesV68Bypass::Hex_FWD, // 6439
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6440-6441
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6442-6444
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6445-6446
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6447-6448
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6449-6452
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6453-6457
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6458-6460
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6461-6464
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6465-6468
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6469-6473
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6474-6477
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6478-6480
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6481-6484
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6485-6489
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6490-6493
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6494-6496
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6497-6500
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6501-6505
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6506-6509
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6510-6512
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6513-6516
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6517-6521
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6522-6525
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6526-6529
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6530-6534
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6535-6538
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6539-6543
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6544-6547
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6548-6549
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6550-6552
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6553-6555
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6556-6559
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6560-6564
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6565-6568
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6569-6571
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6572-6574
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6575-6578
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6579-6582
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6583-6585
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6586-6589
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6590-6592
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6593-6596
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6597-6600
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6601-6604
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6605-6606
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6607-6611
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6612-6613
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6614-6616
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6617-6620
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6621-6623
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6624-6627
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6628-6630
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6631-6634
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6635-6637
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6638-6641
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6642-6644
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6645-6648
HexagonItinerariesV68Bypass::HVX_FWD, // 6649
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6650-6652
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6653-6657
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6658-6661
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6662-6664
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6665-6668
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6669-6672
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6673-6677
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6678-6680
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6681-6684
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6685-6688
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6689-6693
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6694-6696
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6697-6699
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6700-6701
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6702-6705
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6706-6710
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6711-6714
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6715-6719
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6720-6723
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6724-6725
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::HVX_FWD, // 6726-6728
HexagonItinerariesV68Bypass::Hex_FWD, // 6729
HexagonItinerariesV68Bypass::HVX_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6730-6731
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6732-6733
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6734-6736
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6737-6739
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6740-6743
HexagonItinerariesV68Bypass::Hex_FWD, // 6744
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6745-6746
HexagonItinerariesV68Bypass::Hex_FWD, // 6747
HexagonItinerariesV68Bypass::Hex_FWD, // 6748
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6749-6750
HexagonItinerariesV68Bypass::Hex_FWD, // 6751
HexagonItinerariesV68Bypass::Hex_FWD, HexagonItinerariesV68Bypass::Hex_FWD, // 6752-6753
HexagonItinerariesV68Bypass::Hex_FWD, // 6754
 0 // End bypass tables
};

static const llvm::InstrItinerary HexagonItinerariesV60[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 1, 4 }, // 1 tc_01d44cb2
  { 1, 2, 3, 4, 7 }, // 2 PSEUDO
  { 1, 2, 3, 7, 9 }, // 3 tc_c57d9f39
  { 1, 2, 3, 9, 13 }, // 4 tc_1c2c7a4a
  { 1, 2, 3, 13, 17 }, // 5 tc_442395f3
  { 1, 2, 3, 17, 20 }, // 6 tc_713b66bf
  { 1, 2, 3, 20, 23 }, // 7 tc_86173609
  { 1, 1, 2, 23, 26 }, // 8 tc_5da50c4b
  { 1, 1, 2, 26, 29 }, // 9 tc_4a55d03c
  { 1, 2, 3, 29, 32 }, // 10 tc_d33e5eee
  { 1, 1, 2, 32, 35 }, // 11 tc_651cbe02
  { 1, 3, 4, 35, 38 }, // 12 DUPLEX
  { 1, 4, 5, 38, 39 }, // 13 tc_ENDLOOP
  { 1, 2, 3, 0, 0 }, // 14 tc_23708a21
  { 1, 1, 2, 39, 41 }, // 15 tc_56a124a7
  { 1, 5, 6, 41, 43 }, // 16 tc_2f573607
  { 1, 5, 6, 43, 46 }, // 17 tc_53c851ab
  { 1, 6, 7, 46, 50 }, // 18 tc_fedb7e19
  { 1, 6, 7, 50, 53 }, // 19 tc_4222e6bf
  { 1, 6, 7, 53, 57 }, // 20 tc_075c8dd8
  { 1, 3, 4, 57, 60 }, // 21 tc_9bcfb2ee
  { 1, 3, 4, 60, 63 }, // 22 tc_158aa3f7
  { 1, 3, 4, 63, 66 }, // 23 tc_df5d53f9
  { 1, 3, 4, 66, 69 }, // 24 tc_14ab4f41
  { 1, 3, 4, 69, 70 }, // 25 tc_f38f92e1
  { 1, 3, 4, 70, 71 }, // 26 tc_1981450d
  { 1, 6, 7, 71, 73 }, // 27 tc_e9170fb7
  { 1, 3, 4, 73, 75 }, // 28 tc_40d64c94
  { 1, 6, 7, 75, 77 }, // 29 LD_tc_ld_SLOT01
  { 1, 1, 2, 77, 80 }, // 30 tc_38382228
  { 1, 1, 2, 80, 83 }, // 31 tc_c21d7447
  { 1, 1, 2, 83, 87 }, // 32 tc_7f8ae742
  { 1, 7, 8, 87, 90 }, // 33 tc_5a4b5e58
  { 1, 7, 8, 90, 94 }, // 34 tc_197dce51
  { 1, 1, 2, 94, 95 }, // 35 tc_44fffc58
  { 1, 6, 7, 95, 100 }, // 36 tc_5ceb2f9e
  { 1, 8, 10, 100, 103 }, // 37 tc_56c4f9fe
  { 1, 6, 7, 103, 108 }, // 38 tc_b4dc7630
  { 1, 6, 7, 108, 112 }, // 39 tc_a2b365d2
  { 1, 5, 6, 112, 113 }, // 40 tc_60e324ff
  { 1, 10, 12, 113, 116 }, // 41 tc_db5555f3
  { 1, 12, 15, 116, 119 }, // 42 tc_c0749f3c
  { 1, 15, 17, 119, 122 }, // 43 PSEUDOM
  { 1, 8, 10, 122, 125 }, // 44 tc_3aacf4a8
  { 1, 17, 20, 125, 128 }, // 45 tc_c5dba46e
  { 1, 10, 12, 128, 132 }, // 46 tc_af25efd9
  { 1, 1, 2, 132, 135 }, // 47 tc_0dfac0a7
  { 1, 6, 7, 135, 139 }, // 48 tc_8035e91f
  { 1, 3, 4, 139, 143 }, // 49 tc_011e0e9d
  { 1, 6, 7, 143, 146 }, // 50 tc_ae5babd7
  { 1, 3, 4, 146, 149 }, // 51 tc_5deb5e47
  { 1, 1, 2, 149, 154 }, // 52 tc_bb831a7c
  { 1, 3, 4, 154, 158 }, // 53 tc_92240447
  { 1, 6, 7, 158, 161 }, // 54 tc_7c31e19a
  { 1, 6, 7, 161, 165 }, // 55 tc_d03278fd
  { 1, 6, 7, 165, 169 }, // 56 tc_65cbd974
  { 1, 3, 4, 169, 172 }, // 57 tc_934753bb
  { 1, 6, 7, 172, 175 }, // 58 ST_tc_st_SLOT01
  { 1, 20, 22, 175, 179 }, // 59 CVI_VA
  { 1, 8, 10, 179, 181 }, // 60 tc_0ec46cf9
  { 1, 10, 12, 181, 182 }, // 61 tc_718b5c53
  { 1, 22, 26, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 3, 4, 182, 183 }, // 63 tc_d45ba9cd
  { 1, 2, 3, 183, 186 }, // 64 tc_388f9897
  { 1, 2, 3, 186, 188 }, // 65 tc_9124c04f
  { 1, 2, 3, 188, 191 }, // 66 tc_4ac61d92
  { 1, 6, 7, 191, 193 }, // 67 tc_aee6250c
  { 1, 6, 7, 193, 196 }, // 68 tc_eed07714
  { 1, 6, 7, 196, 199 }, // 69 tc_74a42bda
  { 1, 6, 7, 199, 202 }, // 70 tc_a9edeffa
  { 1, 6, 7, 202, 205 }, // 71 tc_838c4d7a
  { 1, 1, 2, 205, 207 }, // 72 tc_d61dfdc3
  { 1, 1, 2, 207, 210 }, // 73 tc_8a825db2
  { 1, 1, 2, 210, 213 }, // 74 tc_f34c1c21
  { 1, 2, 3, 213, 216 }, // 75 tc_95a33176
  { 1, 1, 2, 216, 218 }, // 76 tc_9f6cd987
  { 1, 2, 3, 0, 0 }, // 77 tc_b837298f
  { 1, 2, 3, 218, 221 }, // 78 tc_8b5bd4f5
  { 1, 2, 3, 221, 224 }, // 79 tc_84a7500d
  { 1, 7, 8, 224, 226 }, // 80 tc_7476d766
  { 1, 7, 8, 226, 228 }, // 81 tc_49fdfd4b
  { 1, 1, 2, 228, 231 }, // 82 tc_f098b237
  { 1, 1, 2, 231, 234 }, // 83 tc_20131976
  { 1, 1, 2, 234, 239 }, // 84 tc_1d41f8b7
  { 1, 1, 2, 239, 242 }, // 85 tc_a1297125
  { 1, 2, 3, 242, 243 }, // 86 tc_112d30d6
  { 1, 1, 2, 243, 246 }, // 87 tc_d68dca5c
  { 1, 1, 2, 246, 250 }, // 88 tc_788b1d09
  { 1, 1, 2, 250, 255 }, // 89 tc_38e0bae9
  { 1, 1, 2, 255, 258 }, // 90 tc_407e96f9
  { 1, 1, 2, 258, 262 }, // 91 tc_7401744f
  { 1, 1, 2, 262, 265 }, // 92 tc_9b3c0462
  { 1, 1, 2, 265, 267 }, // 93 tc_151bf368
  { 1, 2, 3, 267, 270 }, // 94 tc_9c52f549
  { 1, 1, 2, 270, 272 }, // 95 tc_55b33fda
  { 1, 1, 2, 272, 276 }, // 96 tc_6fc5dbea
  { 1, 7, 8, 276, 278 }, // 97 tc_3edca78f
  { 1, 1, 2, 278, 282 }, // 98 tc_a7a13fac
  { 1, 1, 2, 282, 284 }, // 99 tc_9783714b
  { 1, 1, 2, 284, 287 }, // 100 tc_f0e8e832
  { 1, 1, 2, 287, 289 }, // 101 tc_65279839
  { 1, 1, 2, 289, 293 }, // 102 tc_0a195f2c
  { 1, 1, 2, 293, 297 }, // 103 tc_01e1be3b
  { 1, 1, 2, 297, 300 }, // 104 tc_556f6577
  { 1, 1, 2, 300, 303 }, // 105 tc_02fe1c65
  { 1, 1, 2, 303, 307 }, // 106 tc_9e72dc89
  { 1, 1, 2, 307, 312 }, // 107 tc_9edb7c77
  { 1, 1, 2, 312, 315 }, // 108 tc_7f7f45f5
  { 1, 1, 2, 315, 318 }, // 109 tc_c20701f0
  { 1, 1, 2, 318, 322 }, // 110 tc_f7569068
  { 1, 7, 8, 322, 324 }, // 111 tc_fae9dfa5
  { 1, 7, 8, 324, 326 }, // 112 tc_6ae3426b
  { 1, 1, 2, 326, 328 }, // 113 tc_69bfb303
  { 1, 5, 6, 328, 329 }, // 114 tc_362b0be2
  { 1, 5, 6, 329, 331 }, // 115 tc_dc51281d
  { 1, 1, 2, 331, 332 }, // 116 tc_decdde8a
  { 1, 1, 2, 332, 334 }, // 117 tc_eeda4109
  { 1, 1, 2, 334, 336 }, // 118 tc_711c805f
  { 1, 5, 6, 336, 338 }, // 119 tc_ed03645c
  { 1, 5, 6, 338, 340 }, // 120 tc_42ff66ba
  { 1, 7, 8, 340, 342 }, // 121 tc_57a55b54
  { 1, 7, 8, 342, 344 }, // 122 tc_1248597c
  { 1, 7, 8, 344, 346 }, // 123 tc_9406230a
  { 1, 5, 6, 346, 347 }, // 124 tc_d57d649c
  { 1, 7, 8, 347, 349 }, // 125 tc_4abdbdc6
  { 1, 7, 8, 349, 351 }, // 126 tc_6d861a95
  { 1, 5, 6, 351, 352 }, // 127 tc_45f9d1be
  { 1, 3, 4, 352, 355 }, // 128 tc_24e109c7
  { 1, 1, 2, 355, 358 }, // 129 tc_9e27f2f9
  { 1, 3, 4, 358, 361 }, // 130 tc_f6e2aff9
  { 1, 1, 2, 361, 364 }, // 131 tc_24f426ab
  { 1, 3, 4, 364, 367 }, // 132 tc_975a4e54
  { 1, 1, 2, 367, 370 }, // 133 tc_5502c366
  { 1, 3, 4, 370, 372 }, // 134 tc_7b9187d3
  { 1, 1, 2, 372, 374 }, // 135 tc_f999c66e
  { 1, 6, 7, 374, 379 }, // 136 tc_1c7522a8
  { 1, 6, 7, 379, 385 }, // 137 tc_76bb5435
  { 1, 6, 7, 385, 387 }, // 138 tc_8a6d0d94
  { 1, 3, 4, 387, 389 }, // 139 tc_2471c1c8
  { 1, 3, 4, 389, 391 }, // 140 tc_64b00d8a
  { 1, 6, 7, 391, 396 }, // 141 tc_5f2afaf7
  { 1, 6, 7, 396, 400 }, // 142 tc_ac65613f
  { 1, 6, 7, 400, 405 }, // 143 tc_a32e03e7
  { 1, 6, 7, 405, 408 }, // 144 tc_822c3c68
  { 1, 6, 7, 408, 412 }, // 145 tc_abfd9a6d
  { 1, 6, 7, 412, 416 }, // 146 tc_bf2ffc0f
  { 1, 6, 7, 416, 419 }, // 147 tc_7c6d32e4
  { 1, 6, 7, 419, 424 }, // 148 tc_45791fb8
  { 1, 6, 7, 424, 429 }, // 149 tc_b7c4062a
  { 1, 6, 7, 429, 432 }, // 150 tc_5944960d
  { 1, 1, 2, 432, 436 }, // 151 tc_2c13e7f5
  { 1, 1, 2, 436, 440 }, // 152 tc_a154b476
  { 1, 1, 2, 440, 444 }, // 153 tc_a4e22bbd
  { 1, 1, 2, 444, 448 }, // 154 tc_503ce0f3
  { 1, 6, 7, 448, 450 }, // 155 tc_0655b949
  { 1, 3, 4, 450, 452 }, // 156 tc_6e20402a
  { 1, 3, 4, 452, 453 }, // 157 tc_db96aa6b
  { 1, 1, 2, 453, 455 }, // 158 tc_a7bdb22c
  { 1, 1, 2, 455, 458 }, // 159 tc_db596beb
  { 1, 1, 2, 458, 461 }, // 160 tc_a08b630b
  { 1, 1, 2, 461, 464 }, // 161 tc_1fcb8495
  { 1, 6, 7, 464, 469 }, // 162 tc_9edefe01
  { 1, 6, 7, 469, 474 }, // 163 tc_449acf79
  { 1, 3, 4, 474, 479 }, // 164 tc_ce59038e
  { 1, 3, 4, 479, 484 }, // 165 tc_f529831b
  { 1, 3, 4, 484, 489 }, // 166 tc_addc37a8
  { 1, 3, 4, 489, 492 }, // 167 tc_6f42bc60
  { 1, 3, 4, 492, 494 }, // 168 tc_7af3a37e
  { 1, 1, 2, 494, 496 }, // 169 tc_e3d699e3
  { 1, 6, 7, 496, 499 }, // 170 tc_ba9255a6
  { 1, 6, 7, 499, 504 }, // 171 tc_1fe4ab69
  { 1, 6, 7, 504, 507 }, // 172 tc_bb07f2c5
  { 1, 6, 7, 507, 512 }, // 173 tc_8e82e8ca
  { 1, 3, 4, 512, 515 }, // 174 tc_cfa0e29b
  { 1, 3, 4, 515, 520 }, // 175 tc_0a6c20ae
  { 1, 3, 4, 520, 523 }, // 176 tc_0fac1eb8
  { 1, 3, 4, 523, 528 }, // 177 tc_829d8a86
  { 1, 6, 7, 528, 532 }, // 178 tc_280f7fe1
  { 1, 6, 7, 532, 536 }, // 179 tc_887d1bb7
  { 1, 3, 4, 536, 540 }, // 180 tc_96ef76ef
  { 1, 3, 4, 540, 544 }, // 181 tc_55a9a350
  { 1, 1, 2, 544, 548 }, // 182 tc_f0cdeccf
  { 1, 1, 2, 548, 553 }, // 183 tc_a38c45dc
  { 1, 1, 2, 553, 555 }, // 184 tc_d3632d88
  { 1, 1, 2, 555, 559 }, // 185 tc_5e4cf0e8
  { 1, 1, 2, 559, 561 }, // 186 tc_ef921005
  { 1, 6, 7, 561, 564 }, // 187 tc_5b347363
  { 1, 6, 7, 564, 566 }, // 188 tc_3d14a17b
  { 1, 6, 7, 566, 567 }, // 189 tc_3fbf1042
  { 1, 6, 7, 567, 568 }, // 190 tc_63567288
  { 1, 6, 7, 568, 570 }, // 191 tc_59a7822c
  { 1, 6, 7, 0, 0 }, // 192 tc_937dd41c
  { 1, 3, 4, 0, 0 }, // 193 tc_a4ee89db
  { 1, 3, 4, 0, 0 }, // 194 tc_c818ff7f
  { 1, 3, 4, 570, 571 }, // 195 tc_1242dc2a
  { 1, 6, 7, 571, 573 }, // 196 tc_44d5a428
  { 1, 26, 28, 573, 576 }, // 197 tc_540c3da3
  { 1, 28, 30, 576, 578 }, // 198 tc_c4edf264
  { 1, 30, 32, 578, 580 }, // 199 tc_5bf8afbb
  { 1, 32, 34, 580, 584 }, // 200 tc_2b4c548e
  { 1, 32, 34, 584, 589 }, // 201 tc_bb599486
  { 1, 34, 38, 589, 592 }, // 202 tc_a7e6707d
  { 1, 34, 38, 592, 596 }, // 203 tc_3c56e5ce
  { 1, 12, 15, 596, 600 }, // 204 tc_abe8c3b2
  { 1, 12, 15, 600, 605 }, // 205 tc_453fe68d
  { 1, 12, 15, 605, 609 }, // 206 tc_1ba8a0cd
  { 1, 38, 40, 609, 612 }, // 207 tc_52447ecc
  { 1, 38, 40, 612, 616 }, // 208 tc_3904b926
  { 1, 38, 40, 616, 621 }, // 209 tc_b9db8205
  { 1, 38, 40, 621, 625 }, // 210 tc_663c80a7
  { 1, 40, 44, 625, 628 }, // 211 tc_f21e8abb
  { 1, 40, 44, 628, 632 }, // 212 tc_131f1c81
  { 1, 40, 44, 632, 637 }, // 213 tc_c7039829
  { 1, 40, 44, 637, 641 }, // 214 tc_e2d2e9e5
  { 1, 44, 46, 641, 644 }, // 215 tc_ab23f776
  { 1, 44, 46, 644, 648 }, // 216 tc_7177e272
  { 1, 44, 46, 648, 653 }, // 217 tc_e99d4c2e
  { 1, 44, 46, 653, 657 }, // 218 tc_6942b6e0
  { 1, 17, 20, 657, 661 }, // 219 tc_a02a10a8
  { 1, 17, 20, 661, 666 }, // 220 tc_54a0dc47
  { 1, 17, 20, 666, 670 }, // 221 tc_447d9895
  { 1, 17, 20, 670, 675 }, // 222 tc_191381c1
  { 1, 17, 20, 675, 679 }, // 223 tc_3e2aaafc
  { 1, 44, 46, 679, 681 }, // 224 tc_3ce09744
  { 1, 44, 46, 681, 684 }, // 225 tc_20a4bbec
  { 1, 28, 30, 684, 687 }, // 226 tc_c127de3a
  { 1, 8, 10, 687, 691 }, // 227 tc_257f6f7c
  { 1, 8, 10, 691, 696 }, // 228 tc_7e6a3e89
  { 1, 8, 10, 696, 700 }, // 229 tc_e35c1e93
  { 1, 46, 48, 700, 703 }, // 230 tc_05ca8cfd
  { 1, 32, 34, 703, 706 }, // 231 tc_d8287c14
  { 1, 32, 34, 706, 710 }, // 232 tc_08a4f1b6
  { 1, 30, 32, 710, 714 }, // 233 tc_56e64202
  { 1, 28, 30, 714, 717 }, // 234 tc_ac4046bc
  { 1, 28, 30, 717, 721 }, // 235 tc_2e8f5f6e
  { 1, 46, 48, 721, 724 }, // 236 tc_7417e785
  { 1, 46, 48, 724, 728 }, // 237 tc_309dbb4f
  { 1, 48, 50, 728, 732 }, // 238 tc_df80eeb0
  { 1, 46, 48, 732, 736 }, // 239 tc_16ff9ef8
  { 1, 46, 48, 736, 738 }, // 240 tc_51d0ecc3
  { 1, 48, 50, 738, 743 }, // 241 tc_561aaa58
  { 1, 30, 32, 743, 745 }, // 242 tc_946013d8
  { 1, 30, 32, 745, 748 }, // 243 tc_46d6c3e0
  { 1, 48, 50, 748, 752 }, // 244 tc_87adc037
  { 1, 28, 30, 752, 755 }, // 245 tc_649072c2
  { 1, 28, 30, 755, 759 }, // 246 tc_b091f1c6
  { 1, 32, 34, 759, 762 }, // 247 tc_0b04c6c7
  { 1, 32, 34, 762, 766 }, // 248 tc_660769f1
  { 1, 50, 53, 766, 769 }, // 249 tc_a28f32b5
  { 1, 50, 53, 769, 773 }, // 250 tc_7d68d5c2
  { 1, 53, 56, 773, 776 }, // 251 tc_7095ecba
  { 1, 53, 56, 776, 780 }, // 252 tc_a69eeee1
  { 1, 56, 58, 0, 0 }, // 253 tc_1381a97c
  { 1, 56, 58, 780, 781 }, // 254 tc_e3f68a46
  { 1, 58, 60, 781, 784 }, // 255 tc_f1de44ef
  { 1, 48, 50, 784, 789 }, // 256 tc_9d1dc972
  { 1, 58, 60, 789, 793 }, // 257 tc_90bcc1db
  { 1, 60, 63, 793, 796 }, // 258 tc_cd94bfe0
  { 1, 60, 63, 796, 800 }, // 259 tc_15fdf750
  { 1, 32, 34, 800, 804 }, // 260 tc_1ad8a370
  { 1, 32, 34, 804, 809 }, // 261 tc_e675c45a
  { 1, 63, 65, 809, 812 }, // 262 tc_61bf7c03
  { 1, 63, 65, 812, 816 }, // 263 tc_933f2b39
  { 1, 63, 65, 816, 820 }, // 264 tc_26a377fe
  { 1, 63, 65, 820, 825 }, // 265 tc_2d4051cd
  { 1, 30, 32, 825, 828 }, // 266 tc_6e7fa133
  { 1, 46, 48, 828, 831 }, // 267 tc_8772086c
  { 1, 10, 12, 831, 833 }, // 268 tc_b4416217
  { 1, 17, 20, 833, 837 }, // 269 tc_9f363d21
  { 1, 17, 20, 837, 842 }, // 270 tc_8e420e4d
  { 1, 65, 68, 842, 846 }, // 271 tc_7273323b
  { 1, 65, 68, 846, 851 }, // 272 tc_58d21193
  { 1, 10, 12, 851, 855 }, // 273 tc_71646d06
  { 1, 48, 50, 855, 857 }, // 274 tc_04da405a
  { 1, 48, 50, 857, 860 }, // 275 tc_2c745bb8
  { 1, 56, 58, 860, 861 }, // 276 tc_b28e51aa
  { 1, 56, 58, 861, 863 }, // 277 tc_767c4e9d
  { 1, 68, 70, 863, 865 }, // 278 tc_e699ae41
  { 1, 68, 70, 865, 868 }, // 279 tc_a0dbea28
  { 1, 68, 70, 868, 871 }, // 280 tc_dd5b0695
  { 1, 68, 70, 871, 875 }, // 281 tc_3ad719fb
  { 1, 3, 4, 0, 0 }, // 282 tc_77f94a5e
  { 1, 7, 8, 0, 0 }, // 283 tc_55255f2b
  { 1, 3, 4, 875, 876 }, // 284 tc_b1ae5f67
  { 1, 3, 4, 876, 878 }, // 285 tc_2237d952
  { 1, 5, 6, 878, 879 }, // 286 tc_0ba0d5da
  { 1, 5, 6, 0, 0 }, // 287 tc_9b34f5e0
  { 1, 7, 8, 879, 880 }, // 288 tc_2c3e17fc
  { 1, 3, 4, 880, 882 }, // 289 tc_a3070909
  { 1, 7, 8, 882, 883 }, // 290 tc_d7718fbe
  { 1, 7, 8, 883, 885 }, // 291 tc_28e55c6f
  { 1, 3, 4, 885, 886 }, // 292 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 293 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV5[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 70, 71, 0, 0 }, // 1 tc_01d44cb2
  { 1, 71, 72, 0, 0 }, // 2 PSEUDO
  { 1, 71, 72, 0, 0 }, // 3 tc_c57d9f39
  { 1, 71, 72, 0, 0 }, // 4 tc_1c2c7a4a
  { 1, 71, 72, 0, 0 }, // 5 tc_442395f3
  { 1, 71, 72, 0, 0 }, // 6 tc_713b66bf
  { 1, 71, 72, 0, 0 }, // 7 tc_86173609
  { 1, 70, 71, 0, 0 }, // 8 tc_5da50c4b
  { 1, 70, 71, 0, 0 }, // 9 tc_4a55d03c
  { 1, 71, 72, 0, 0 }, // 10 tc_d33e5eee
  { 1, 70, 71, 0, 0 }, // 11 tc_651cbe02
  { 1, 72, 73, 0, 0 }, // 12 DUPLEX
  { 1, 73, 74, 0, 0 }, // 13 tc_ENDLOOP
  { 1, 71, 72, 0, 0 }, // 14 tc_23708a21
  { 1, 70, 71, 0, 0 }, // 15 tc_56a124a7
  { 1, 74, 75, 0, 0 }, // 16 tc_2f573607
  { 1, 74, 75, 0, 0 }, // 17 tc_53c851ab
  { 1, 75, 76, 0, 0 }, // 18 tc_fedb7e19
  { 1, 75, 76, 0, 0 }, // 19 tc_4222e6bf
  { 1, 75, 76, 0, 0 }, // 20 tc_075c8dd8
  { 1, 72, 73, 0, 0 }, // 21 tc_9bcfb2ee
  { 1, 72, 73, 0, 0 }, // 22 tc_158aa3f7
  { 1, 72, 73, 0, 0 }, // 23 tc_df5d53f9
  { 1, 72, 73, 0, 0 }, // 24 tc_14ab4f41
  { 1, 72, 73, 0, 0 }, // 25 tc_f38f92e1
  { 1, 72, 73, 0, 0 }, // 26 tc_1981450d
  { 1, 75, 76, 0, 0 }, // 27 tc_e9170fb7
  { 1, 72, 73, 0, 0 }, // 28 tc_40d64c94
  { 1, 75, 76, 0, 0 }, // 29 LD_tc_ld_SLOT01
  { 1, 70, 71, 0, 0 }, // 30 tc_38382228
  { 1, 70, 71, 0, 0 }, // 31 tc_c21d7447
  { 1, 70, 71, 0, 0 }, // 32 tc_7f8ae742
  { 1, 76, 77, 0, 0 }, // 33 tc_5a4b5e58
  { 1, 76, 77, 0, 0 }, // 34 tc_197dce51
  { 1, 70, 71, 0, 0 }, // 35 tc_44fffc58
  { 1, 75, 76, 0, 0 }, // 36 tc_5ceb2f9e
  { 0, 0, 0, 0, 0 }, // 37 tc_56c4f9fe
  { 1, 75, 76, 0, 0 }, // 38 tc_b4dc7630
  { 1, 75, 76, 0, 0 }, // 39 tc_a2b365d2
  { 1, 74, 75, 0, 0 }, // 40 tc_60e324ff
  { 0, 0, 0, 0, 0 }, // 41 tc_db5555f3
  { 0, 0, 0, 0, 0 }, // 42 tc_c0749f3c
  { 1, 77, 79, 0, 0 }, // 43 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 44 tc_3aacf4a8
  { 0, 0, 0, 0, 0 }, // 45 tc_c5dba46e
  { 0, 0, 0, 0, 0 }, // 46 tc_af25efd9
  { 1, 70, 71, 0, 0 }, // 47 tc_0dfac0a7
  { 1, 75, 76, 0, 0 }, // 48 tc_8035e91f
  { 1, 72, 73, 0, 0 }, // 49 tc_011e0e9d
  { 1, 75, 76, 0, 0 }, // 50 tc_ae5babd7
  { 1, 72, 73, 0, 0 }, // 51 tc_5deb5e47
  { 1, 70, 71, 0, 0 }, // 52 tc_bb831a7c
  { 1, 72, 73, 0, 0 }, // 53 tc_92240447
  { 1, 75, 76, 0, 0 }, // 54 tc_7c31e19a
  { 1, 75, 76, 0, 0 }, // 55 tc_d03278fd
  { 1, 75, 76, 0, 0 }, // 56 tc_65cbd974
  { 1, 72, 73, 0, 0 }, // 57 tc_934753bb
  { 1, 75, 76, 0, 0 }, // 58 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 59 CVI_VA
  { 0, 0, 0, 0, 0 }, // 60 tc_0ec46cf9
  { 0, 0, 0, 0, 0 }, // 61 tc_718b5c53
  { 0, 0, 0, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 72, 73, 0, 0 }, // 63 tc_d45ba9cd
  { 1, 71, 72, 0, 0 }, // 64 tc_388f9897
  { 1, 71, 72, 0, 0 }, // 65 tc_9124c04f
  { 1, 71, 72, 0, 0 }, // 66 tc_4ac61d92
  { 1, 75, 76, 0, 0 }, // 67 tc_aee6250c
  { 1, 75, 76, 0, 0 }, // 68 tc_eed07714
  { 1, 75, 76, 0, 0 }, // 69 tc_74a42bda
  { 1, 75, 76, 0, 0 }, // 70 tc_a9edeffa
  { 1, 75, 76, 0, 0 }, // 71 tc_838c4d7a
  { 1, 70, 71, 0, 0 }, // 72 tc_d61dfdc3
  { 1, 70, 71, 0, 0 }, // 73 tc_8a825db2
  { 1, 70, 71, 0, 0 }, // 74 tc_f34c1c21
  { 1, 71, 72, 0, 0 }, // 75 tc_95a33176
  { 1, 70, 71, 0, 0 }, // 76 tc_9f6cd987
  { 1, 71, 72, 0, 0 }, // 77 tc_b837298f
  { 1, 71, 72, 0, 0 }, // 78 tc_8b5bd4f5
  { 1, 71, 72, 0, 0 }, // 79 tc_84a7500d
  { 1, 76, 77, 0, 0 }, // 80 tc_7476d766
  { 1, 76, 77, 0, 0 }, // 81 tc_49fdfd4b
  { 1, 70, 71, 0, 0 }, // 82 tc_f098b237
  { 1, 70, 71, 0, 0 }, // 83 tc_20131976
  { 1, 70, 71, 0, 0 }, // 84 tc_1d41f8b7
  { 1, 70, 71, 0, 0 }, // 85 tc_a1297125
  { 1, 71, 72, 0, 0 }, // 86 tc_112d30d6
  { 1, 70, 71, 0, 0 }, // 87 tc_d68dca5c
  { 1, 70, 71, 0, 0 }, // 88 tc_788b1d09
  { 1, 70, 71, 0, 0 }, // 89 tc_38e0bae9
  { 1, 70, 71, 0, 0 }, // 90 tc_407e96f9
  { 1, 70, 71, 0, 0 }, // 91 tc_7401744f
  { 1, 70, 71, 0, 0 }, // 92 tc_9b3c0462
  { 1, 70, 71, 0, 0 }, // 93 tc_151bf368
  { 1, 71, 72, 0, 0 }, // 94 tc_9c52f549
  { 1, 70, 71, 0, 0 }, // 95 tc_55b33fda
  { 1, 70, 71, 0, 0 }, // 96 tc_6fc5dbea
  { 1, 76, 77, 0, 0 }, // 97 tc_3edca78f
  { 1, 70, 71, 0, 0 }, // 98 tc_a7a13fac
  { 1, 70, 71, 0, 0 }, // 99 tc_9783714b
  { 1, 70, 71, 0, 0 }, // 100 tc_f0e8e832
  { 1, 70, 71, 0, 0 }, // 101 tc_65279839
  { 1, 70, 71, 0, 0 }, // 102 tc_0a195f2c
  { 1, 70, 71, 0, 0 }, // 103 tc_01e1be3b
  { 1, 70, 71, 0, 0 }, // 104 tc_556f6577
  { 1, 70, 71, 0, 0 }, // 105 tc_02fe1c65
  { 1, 70, 71, 0, 0 }, // 106 tc_9e72dc89
  { 1, 70, 71, 0, 0 }, // 107 tc_9edb7c77
  { 1, 70, 71, 0, 0 }, // 108 tc_7f7f45f5
  { 1, 70, 71, 0, 0 }, // 109 tc_c20701f0
  { 1, 70, 71, 0, 0 }, // 110 tc_f7569068
  { 1, 76, 77, 0, 0 }, // 111 tc_fae9dfa5
  { 1, 76, 77, 0, 0 }, // 112 tc_6ae3426b
  { 1, 70, 71, 0, 0 }, // 113 tc_69bfb303
  { 1, 74, 75, 0, 0 }, // 114 tc_362b0be2
  { 1, 74, 75, 0, 0 }, // 115 tc_dc51281d
  { 1, 70, 71, 0, 0 }, // 116 tc_decdde8a
  { 1, 70, 71, 0, 0 }, // 117 tc_eeda4109
  { 1, 70, 71, 0, 0 }, // 118 tc_711c805f
  { 1, 74, 75, 0, 0 }, // 119 tc_ed03645c
  { 1, 74, 75, 0, 0 }, // 120 tc_42ff66ba
  { 1, 76, 77, 0, 0 }, // 121 tc_57a55b54
  { 1, 76, 77, 0, 0 }, // 122 tc_1248597c
  { 1, 76, 77, 0, 0 }, // 123 tc_9406230a
  { 1, 74, 75, 0, 0 }, // 124 tc_d57d649c
  { 1, 76, 77, 0, 0 }, // 125 tc_4abdbdc6
  { 1, 76, 77, 0, 0 }, // 126 tc_6d861a95
  { 1, 74, 75, 0, 0 }, // 127 tc_45f9d1be
  { 1, 72, 73, 0, 0 }, // 128 tc_24e109c7
  { 1, 70, 71, 0, 0 }, // 129 tc_9e27f2f9
  { 1, 72, 73, 0, 0 }, // 130 tc_f6e2aff9
  { 1, 70, 71, 0, 0 }, // 131 tc_24f426ab
  { 1, 72, 73, 0, 0 }, // 132 tc_975a4e54
  { 1, 70, 71, 0, 0 }, // 133 tc_5502c366
  { 1, 72, 73, 0, 0 }, // 134 tc_7b9187d3
  { 1, 70, 71, 0, 0 }, // 135 tc_f999c66e
  { 1, 75, 76, 0, 0 }, // 136 tc_1c7522a8
  { 1, 75, 76, 0, 0 }, // 137 tc_76bb5435
  { 1, 75, 76, 0, 0 }, // 138 tc_8a6d0d94
  { 1, 72, 73, 0, 0 }, // 139 tc_2471c1c8
  { 1, 72, 73, 0, 0 }, // 140 tc_64b00d8a
  { 1, 75, 76, 0, 0 }, // 141 tc_5f2afaf7
  { 1, 75, 76, 0, 0 }, // 142 tc_ac65613f
  { 1, 75, 76, 0, 0 }, // 143 tc_a32e03e7
  { 1, 75, 76, 0, 0 }, // 144 tc_822c3c68
  { 1, 75, 76, 0, 0 }, // 145 tc_abfd9a6d
  { 1, 75, 76, 0, 0 }, // 146 tc_bf2ffc0f
  { 1, 75, 76, 0, 0 }, // 147 tc_7c6d32e4
  { 1, 75, 76, 0, 0 }, // 148 tc_45791fb8
  { 1, 75, 76, 0, 0 }, // 149 tc_b7c4062a
  { 1, 75, 76, 0, 0 }, // 150 tc_5944960d
  { 1, 70, 71, 0, 0 }, // 151 tc_2c13e7f5
  { 1, 70, 71, 0, 0 }, // 152 tc_a154b476
  { 1, 70, 71, 0, 0 }, // 153 tc_a4e22bbd
  { 1, 70, 71, 0, 0 }, // 154 tc_503ce0f3
  { 1, 75, 76, 0, 0 }, // 155 tc_0655b949
  { 1, 72, 73, 0, 0 }, // 156 tc_6e20402a
  { 1, 72, 73, 0, 0 }, // 157 tc_db96aa6b
  { 1, 70, 71, 0, 0 }, // 158 tc_a7bdb22c
  { 1, 70, 71, 0, 0 }, // 159 tc_db596beb
  { 1, 70, 71, 0, 0 }, // 160 tc_a08b630b
  { 1, 70, 71, 0, 0 }, // 161 tc_1fcb8495
  { 1, 75, 76, 0, 0 }, // 162 tc_9edefe01
  { 1, 75, 76, 0, 0 }, // 163 tc_449acf79
  { 1, 72, 73, 0, 0 }, // 164 tc_ce59038e
  { 1, 72, 73, 0, 0 }, // 165 tc_f529831b
  { 1, 72, 73, 0, 0 }, // 166 tc_addc37a8
  { 1, 72, 73, 0, 0 }, // 167 tc_6f42bc60
  { 1, 72, 73, 0, 0 }, // 168 tc_7af3a37e
  { 1, 70, 71, 0, 0 }, // 169 tc_e3d699e3
  { 1, 75, 76, 0, 0 }, // 170 tc_ba9255a6
  { 1, 75, 76, 0, 0 }, // 171 tc_1fe4ab69
  { 1, 75, 76, 0, 0 }, // 172 tc_bb07f2c5
  { 1, 75, 76, 0, 0 }, // 173 tc_8e82e8ca
  { 1, 72, 73, 0, 0 }, // 174 tc_cfa0e29b
  { 1, 72, 73, 0, 0 }, // 175 tc_0a6c20ae
  { 1, 72, 73, 0, 0 }, // 176 tc_0fac1eb8
  { 1, 72, 73, 0, 0 }, // 177 tc_829d8a86
  { 1, 75, 76, 0, 0 }, // 178 tc_280f7fe1
  { 1, 75, 76, 0, 0 }, // 179 tc_887d1bb7
  { 1, 72, 73, 0, 0 }, // 180 tc_96ef76ef
  { 1, 72, 73, 0, 0 }, // 181 tc_55a9a350
  { 1, 70, 71, 0, 0 }, // 182 tc_f0cdeccf
  { 1, 70, 71, 0, 0 }, // 183 tc_a38c45dc
  { 1, 70, 71, 0, 0 }, // 184 tc_d3632d88
  { 1, 70, 71, 0, 0 }, // 185 tc_5e4cf0e8
  { 1, 70, 71, 0, 0 }, // 186 tc_ef921005
  { 1, 75, 76, 0, 0 }, // 187 tc_5b347363
  { 1, 75, 76, 0, 0 }, // 188 tc_3d14a17b
  { 1, 75, 76, 0, 0 }, // 189 tc_3fbf1042
  { 1, 75, 76, 0, 0 }, // 190 tc_63567288
  { 1, 75, 76, 0, 0 }, // 191 tc_59a7822c
  { 1, 75, 76, 0, 0 }, // 192 tc_937dd41c
  { 1, 72, 73, 0, 0 }, // 193 tc_a4ee89db
  { 1, 72, 73, 0, 0 }, // 194 tc_c818ff7f
  { 1, 72, 73, 0, 0 }, // 195 tc_1242dc2a
  { 1, 75, 76, 0, 0 }, // 196 tc_44d5a428
  { 0, 0, 0, 0, 0 }, // 197 tc_540c3da3
  { 0, 0, 0, 0, 0 }, // 198 tc_c4edf264
  { 0, 0, 0, 0, 0 }, // 199 tc_5bf8afbb
  { 0, 0, 0, 0, 0 }, // 200 tc_2b4c548e
  { 0, 0, 0, 0, 0 }, // 201 tc_bb599486
  { 0, 0, 0, 0, 0 }, // 202 tc_a7e6707d
  { 0, 0, 0, 0, 0 }, // 203 tc_3c56e5ce
  { 0, 0, 0, 0, 0 }, // 204 tc_abe8c3b2
  { 0, 0, 0, 0, 0 }, // 205 tc_453fe68d
  { 0, 0, 0, 0, 0 }, // 206 tc_1ba8a0cd
  { 0, 0, 0, 0, 0 }, // 207 tc_52447ecc
  { 0, 0, 0, 0, 0 }, // 208 tc_3904b926
  { 0, 0, 0, 0, 0 }, // 209 tc_b9db8205
  { 0, 0, 0, 0, 0 }, // 210 tc_663c80a7
  { 0, 0, 0, 0, 0 }, // 211 tc_f21e8abb
  { 0, 0, 0, 0, 0 }, // 212 tc_131f1c81
  { 0, 0, 0, 0, 0 }, // 213 tc_c7039829
  { 0, 0, 0, 0, 0 }, // 214 tc_e2d2e9e5
  { 0, 0, 0, 0, 0 }, // 215 tc_ab23f776
  { 0, 0, 0, 0, 0 }, // 216 tc_7177e272
  { 0, 0, 0, 0, 0 }, // 217 tc_e99d4c2e
  { 0, 0, 0, 0, 0 }, // 218 tc_6942b6e0
  { 0, 0, 0, 0, 0 }, // 219 tc_a02a10a8
  { 0, 0, 0, 0, 0 }, // 220 tc_54a0dc47
  { 0, 0, 0, 0, 0 }, // 221 tc_447d9895
  { 0, 0, 0, 0, 0 }, // 222 tc_191381c1
  { 0, 0, 0, 0, 0 }, // 223 tc_3e2aaafc
  { 0, 0, 0, 0, 0 }, // 224 tc_3ce09744
  { 0, 0, 0, 0, 0 }, // 225 tc_20a4bbec
  { 0, 0, 0, 0, 0 }, // 226 tc_c127de3a
  { 0, 0, 0, 0, 0 }, // 227 tc_257f6f7c
  { 0, 0, 0, 0, 0 }, // 228 tc_7e6a3e89
  { 0, 0, 0, 0, 0 }, // 229 tc_e35c1e93
  { 0, 0, 0, 0, 0 }, // 230 tc_05ca8cfd
  { 0, 0, 0, 0, 0 }, // 231 tc_d8287c14
  { 0, 0, 0, 0, 0 }, // 232 tc_08a4f1b6
  { 0, 0, 0, 0, 0 }, // 233 tc_56e64202
  { 0, 0, 0, 0, 0 }, // 234 tc_ac4046bc
  { 0, 0, 0, 0, 0 }, // 235 tc_2e8f5f6e
  { 0, 0, 0, 0, 0 }, // 236 tc_7417e785
  { 0, 0, 0, 0, 0 }, // 237 tc_309dbb4f
  { 0, 0, 0, 0, 0 }, // 238 tc_df80eeb0
  { 0, 0, 0, 0, 0 }, // 239 tc_16ff9ef8
  { 0, 0, 0, 0, 0 }, // 240 tc_51d0ecc3
  { 0, 0, 0, 0, 0 }, // 241 tc_561aaa58
  { 0, 0, 0, 0, 0 }, // 242 tc_946013d8
  { 0, 0, 0, 0, 0 }, // 243 tc_46d6c3e0
  { 0, 0, 0, 0, 0 }, // 244 tc_87adc037
  { 0, 0, 0, 0, 0 }, // 245 tc_649072c2
  { 0, 0, 0, 0, 0 }, // 246 tc_b091f1c6
  { 0, 0, 0, 0, 0 }, // 247 tc_0b04c6c7
  { 0, 0, 0, 0, 0 }, // 248 tc_660769f1
  { 0, 0, 0, 0, 0 }, // 249 tc_a28f32b5
  { 0, 0, 0, 0, 0 }, // 250 tc_7d68d5c2
  { 0, 0, 0, 0, 0 }, // 251 tc_7095ecba
  { 0, 0, 0, 0, 0 }, // 252 tc_a69eeee1
  { 0, 0, 0, 0, 0 }, // 253 tc_1381a97c
  { 0, 0, 0, 0, 0 }, // 254 tc_e3f68a46
  { 0, 0, 0, 0, 0 }, // 255 tc_f1de44ef
  { 0, 0, 0, 0, 0 }, // 256 tc_9d1dc972
  { 0, 0, 0, 0, 0 }, // 257 tc_90bcc1db
  { 0, 0, 0, 0, 0 }, // 258 tc_cd94bfe0
  { 0, 0, 0, 0, 0 }, // 259 tc_15fdf750
  { 0, 0, 0, 0, 0 }, // 260 tc_1ad8a370
  { 0, 0, 0, 0, 0 }, // 261 tc_e675c45a
  { 0, 0, 0, 0, 0 }, // 262 tc_61bf7c03
  { 0, 0, 0, 0, 0 }, // 263 tc_933f2b39
  { 0, 0, 0, 0, 0 }, // 264 tc_26a377fe
  { 0, 0, 0, 0, 0 }, // 265 tc_2d4051cd
  { 0, 0, 0, 0, 0 }, // 266 tc_6e7fa133
  { 0, 0, 0, 0, 0 }, // 267 tc_8772086c
  { 0, 0, 0, 0, 0 }, // 268 tc_b4416217
  { 0, 0, 0, 0, 0 }, // 269 tc_9f363d21
  { 0, 0, 0, 0, 0 }, // 270 tc_8e420e4d
  { 0, 0, 0, 0, 0 }, // 271 tc_7273323b
  { 0, 0, 0, 0, 0 }, // 272 tc_58d21193
  { 0, 0, 0, 0, 0 }, // 273 tc_71646d06
  { 0, 0, 0, 0, 0 }, // 274 tc_04da405a
  { 0, 0, 0, 0, 0 }, // 275 tc_2c745bb8
  { 0, 0, 0, 0, 0 }, // 276 tc_b28e51aa
  { 0, 0, 0, 0, 0 }, // 277 tc_767c4e9d
  { 0, 0, 0, 0, 0 }, // 278 tc_e699ae41
  { 0, 0, 0, 0, 0 }, // 279 tc_a0dbea28
  { 0, 0, 0, 0, 0 }, // 280 tc_dd5b0695
  { 0, 0, 0, 0, 0 }, // 281 tc_3ad719fb
  { 1, 72, 73, 0, 0 }, // 282 tc_77f94a5e
  { 1, 76, 77, 0, 0 }, // 283 tc_55255f2b
  { 1, 72, 73, 0, 0 }, // 284 tc_b1ae5f67
  { 1, 72, 73, 0, 0 }, // 285 tc_2237d952
  { 1, 74, 75, 0, 0 }, // 286 tc_0ba0d5da
  { 1, 74, 75, 0, 0 }, // 287 tc_9b34f5e0
  { 1, 76, 77, 0, 0 }, // 288 tc_2c3e17fc
  { 1, 72, 73, 0, 0 }, // 289 tc_a3070909
  { 1, 76, 77, 0, 0 }, // 290 tc_d7718fbe
  { 1, 76, 77, 0, 0 }, // 291 tc_28e55c6f
  { 1, 72, 73, 0, 0 }, // 292 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 293 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV55[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 79, 80, 886, 889 }, // 1 tc_01d44cb2
  { 1, 80, 81, 889, 892 }, // 2 PSEUDO
  { 1, 80, 81, 892, 894 }, // 3 tc_c57d9f39
  { 1, 80, 81, 894, 898 }, // 4 tc_1c2c7a4a
  { 1, 80, 81, 898, 902 }, // 5 tc_442395f3
  { 1, 80, 81, 902, 905 }, // 6 tc_713b66bf
  { 1, 80, 81, 905, 908 }, // 7 tc_86173609
  { 1, 79, 80, 908, 911 }, // 8 tc_5da50c4b
  { 1, 79, 80, 911, 914 }, // 9 tc_4a55d03c
  { 1, 80, 81, 914, 917 }, // 10 tc_d33e5eee
  { 1, 79, 80, 917, 920 }, // 11 tc_651cbe02
  { 1, 81, 82, 920, 923 }, // 12 DUPLEX
  { 1, 82, 83, 923, 924 }, // 13 tc_ENDLOOP
  { 1, 80, 81, 0, 0 }, // 14 tc_23708a21
  { 1, 79, 80, 924, 926 }, // 15 tc_56a124a7
  { 1, 83, 84, 926, 928 }, // 16 tc_2f573607
  { 1, 83, 84, 928, 931 }, // 17 tc_53c851ab
  { 1, 84, 85, 931, 935 }, // 18 tc_fedb7e19
  { 1, 84, 85, 935, 938 }, // 19 tc_4222e6bf
  { 1, 84, 85, 938, 942 }, // 20 tc_075c8dd8
  { 1, 81, 82, 942, 945 }, // 21 tc_9bcfb2ee
  { 1, 81, 82, 945, 948 }, // 22 tc_158aa3f7
  { 1, 81, 82, 948, 951 }, // 23 tc_df5d53f9
  { 1, 81, 82, 951, 954 }, // 24 tc_14ab4f41
  { 1, 81, 82, 954, 955 }, // 25 tc_f38f92e1
  { 1, 81, 82, 955, 956 }, // 26 tc_1981450d
  { 1, 84, 85, 956, 958 }, // 27 tc_e9170fb7
  { 1, 81, 82, 958, 960 }, // 28 tc_40d64c94
  { 1, 84, 85, 960, 962 }, // 29 LD_tc_ld_SLOT01
  { 1, 79, 80, 962, 965 }, // 30 tc_38382228
  { 1, 79, 80, 965, 968 }, // 31 tc_c21d7447
  { 1, 79, 80, 968, 972 }, // 32 tc_7f8ae742
  { 1, 85, 86, 972, 975 }, // 33 tc_5a4b5e58
  { 1, 85, 86, 975, 979 }, // 34 tc_197dce51
  { 1, 79, 80, 979, 980 }, // 35 tc_44fffc58
  { 1, 84, 85, 980, 985 }, // 36 tc_5ceb2f9e
  { 0, 0, 0, 0, 0 }, // 37 tc_56c4f9fe
  { 1, 84, 85, 985, 990 }, // 38 tc_b4dc7630
  { 1, 84, 85, 990, 994 }, // 39 tc_a2b365d2
  { 1, 83, 84, 994, 995 }, // 40 tc_60e324ff
  { 0, 0, 0, 0, 0 }, // 41 tc_db5555f3
  { 0, 0, 0, 0, 0 }, // 42 tc_c0749f3c
  { 1, 86, 88, 995, 998 }, // 43 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 44 tc_3aacf4a8
  { 0, 0, 0, 0, 0 }, // 45 tc_c5dba46e
  { 0, 0, 0, 0, 0 }, // 46 tc_af25efd9
  { 1, 79, 80, 998, 1001 }, // 47 tc_0dfac0a7
  { 1, 84, 85, 1001, 1005 }, // 48 tc_8035e91f
  { 1, 81, 82, 1005, 1009 }, // 49 tc_011e0e9d
  { 1, 84, 85, 1009, 1012 }, // 50 tc_ae5babd7
  { 1, 81, 82, 1012, 1015 }, // 51 tc_5deb5e47
  { 1, 79, 80, 1015, 1020 }, // 52 tc_bb831a7c
  { 1, 81, 82, 1020, 1024 }, // 53 tc_92240447
  { 1, 84, 85, 1024, 1027 }, // 54 tc_7c31e19a
  { 1, 84, 85, 1027, 1031 }, // 55 tc_d03278fd
  { 1, 84, 85, 1031, 1035 }, // 56 tc_65cbd974
  { 1, 81, 82, 1035, 1038 }, // 57 tc_934753bb
  { 1, 84, 85, 1038, 1041 }, // 58 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 59 CVI_VA
  { 0, 0, 0, 0, 0 }, // 60 tc_0ec46cf9
  { 0, 0, 0, 0, 0 }, // 61 tc_718b5c53
  { 0, 0, 0, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 81, 82, 1041, 1042 }, // 63 tc_d45ba9cd
  { 1, 80, 81, 1042, 1045 }, // 64 tc_388f9897
  { 1, 80, 81, 1045, 1047 }, // 65 tc_9124c04f
  { 1, 80, 81, 1047, 1050 }, // 66 tc_4ac61d92
  { 1, 84, 85, 1050, 1052 }, // 67 tc_aee6250c
  { 1, 84, 85, 1052, 1055 }, // 68 tc_eed07714
  { 1, 84, 85, 1055, 1058 }, // 69 tc_74a42bda
  { 1, 84, 85, 1058, 1061 }, // 70 tc_a9edeffa
  { 1, 84, 85, 1061, 1064 }, // 71 tc_838c4d7a
  { 1, 79, 80, 1064, 1066 }, // 72 tc_d61dfdc3
  { 1, 79, 80, 1066, 1069 }, // 73 tc_8a825db2
  { 1, 79, 80, 1069, 1072 }, // 74 tc_f34c1c21
  { 1, 80, 81, 1072, 1075 }, // 75 tc_95a33176
  { 1, 79, 80, 1075, 1077 }, // 76 tc_9f6cd987
  { 1, 80, 81, 0, 0 }, // 77 tc_b837298f
  { 1, 80, 81, 1077, 1080 }, // 78 tc_8b5bd4f5
  { 1, 80, 81, 1080, 1083 }, // 79 tc_84a7500d
  { 1, 85, 86, 1083, 1085 }, // 80 tc_7476d766
  { 1, 85, 86, 1085, 1087 }, // 81 tc_49fdfd4b
  { 1, 79, 80, 1087, 1090 }, // 82 tc_f098b237
  { 1, 79, 80, 1090, 1093 }, // 83 tc_20131976
  { 1, 79, 80, 1093, 1098 }, // 84 tc_1d41f8b7
  { 1, 79, 80, 1098, 1101 }, // 85 tc_a1297125
  { 1, 80, 81, 1101, 1102 }, // 86 tc_112d30d6
  { 1, 79, 80, 1102, 1105 }, // 87 tc_d68dca5c
  { 1, 79, 80, 1105, 1109 }, // 88 tc_788b1d09
  { 1, 79, 80, 1109, 1114 }, // 89 tc_38e0bae9
  { 1, 79, 80, 1114, 1117 }, // 90 tc_407e96f9
  { 1, 79, 80, 1117, 1121 }, // 91 tc_7401744f
  { 1, 79, 80, 1121, 1124 }, // 92 tc_9b3c0462
  { 1, 79, 80, 1124, 1126 }, // 93 tc_151bf368
  { 1, 80, 81, 1126, 1129 }, // 94 tc_9c52f549
  { 1, 79, 80, 1129, 1131 }, // 95 tc_55b33fda
  { 1, 79, 80, 1131, 1135 }, // 96 tc_6fc5dbea
  { 1, 85, 86, 1135, 1137 }, // 97 tc_3edca78f
  { 1, 79, 80, 1137, 1141 }, // 98 tc_a7a13fac
  { 1, 79, 80, 1141, 1143 }, // 99 tc_9783714b
  { 1, 79, 80, 1143, 1146 }, // 100 tc_f0e8e832
  { 1, 79, 80, 1146, 1148 }, // 101 tc_65279839
  { 1, 79, 80, 1148, 1152 }, // 102 tc_0a195f2c
  { 1, 79, 80, 1152, 1156 }, // 103 tc_01e1be3b
  { 1, 79, 80, 1156, 1159 }, // 104 tc_556f6577
  { 1, 79, 80, 1159, 1162 }, // 105 tc_02fe1c65
  { 1, 79, 80, 1162, 1166 }, // 106 tc_9e72dc89
  { 1, 79, 80, 1166, 1171 }, // 107 tc_9edb7c77
  { 1, 79, 80, 1171, 1174 }, // 108 tc_7f7f45f5
  { 1, 79, 80, 1174, 1177 }, // 109 tc_c20701f0
  { 1, 79, 80, 1177, 1181 }, // 110 tc_f7569068
  { 1, 85, 86, 1181, 1183 }, // 111 tc_fae9dfa5
  { 1, 85, 86, 1183, 1185 }, // 112 tc_6ae3426b
  { 1, 79, 80, 1185, 1187 }, // 113 tc_69bfb303
  { 1, 83, 84, 1187, 1188 }, // 114 tc_362b0be2
  { 1, 83, 84, 1188, 1190 }, // 115 tc_dc51281d
  { 1, 79, 80, 1190, 1191 }, // 116 tc_decdde8a
  { 1, 79, 80, 1191, 1193 }, // 117 tc_eeda4109
  { 1, 79, 80, 1193, 1195 }, // 118 tc_711c805f
  { 1, 83, 84, 1195, 1197 }, // 119 tc_ed03645c
  { 1, 83, 84, 1197, 1199 }, // 120 tc_42ff66ba
  { 1, 85, 86, 1199, 1201 }, // 121 tc_57a55b54
  { 1, 85, 86, 1201, 1203 }, // 122 tc_1248597c
  { 1, 85, 86, 1203, 1205 }, // 123 tc_9406230a
  { 1, 83, 84, 1205, 1206 }, // 124 tc_d57d649c
  { 1, 85, 86, 1206, 1208 }, // 125 tc_4abdbdc6
  { 1, 85, 86, 1208, 1210 }, // 126 tc_6d861a95
  { 1, 83, 84, 1210, 1211 }, // 127 tc_45f9d1be
  { 1, 81, 82, 1211, 1214 }, // 128 tc_24e109c7
  { 1, 79, 80, 1214, 1217 }, // 129 tc_9e27f2f9
  { 1, 81, 82, 1217, 1220 }, // 130 tc_f6e2aff9
  { 1, 79, 80, 1220, 1223 }, // 131 tc_24f426ab
  { 1, 81, 82, 1223, 1226 }, // 132 tc_975a4e54
  { 1, 79, 80, 1226, 1229 }, // 133 tc_5502c366
  { 1, 81, 82, 1229, 1231 }, // 134 tc_7b9187d3
  { 1, 79, 80, 1231, 1233 }, // 135 tc_f999c66e
  { 1, 84, 85, 1233, 1238 }, // 136 tc_1c7522a8
  { 1, 84, 85, 1238, 1244 }, // 137 tc_76bb5435
  { 1, 84, 85, 1244, 1246 }, // 138 tc_8a6d0d94
  { 1, 81, 82, 1246, 1248 }, // 139 tc_2471c1c8
  { 1, 81, 82, 1248, 1250 }, // 140 tc_64b00d8a
  { 1, 84, 85, 1250, 1255 }, // 141 tc_5f2afaf7
  { 1, 84, 85, 1255, 1259 }, // 142 tc_ac65613f
  { 1, 84, 85, 1259, 1264 }, // 143 tc_a32e03e7
  { 1, 84, 85, 1264, 1267 }, // 144 tc_822c3c68
  { 1, 84, 85, 1267, 1271 }, // 145 tc_abfd9a6d
  { 1, 84, 85, 1271, 1275 }, // 146 tc_bf2ffc0f
  { 1, 84, 85, 1275, 1278 }, // 147 tc_7c6d32e4
  { 1, 84, 85, 1278, 1283 }, // 148 tc_45791fb8
  { 1, 84, 85, 1283, 1288 }, // 149 tc_b7c4062a
  { 1, 84, 85, 1288, 1291 }, // 150 tc_5944960d
  { 1, 79, 80, 1291, 1295 }, // 151 tc_2c13e7f5
  { 1, 79, 80, 1295, 1299 }, // 152 tc_a154b476
  { 1, 79, 80, 1299, 1303 }, // 153 tc_a4e22bbd
  { 1, 79, 80, 1303, 1307 }, // 154 tc_503ce0f3
  { 1, 84, 85, 1307, 1309 }, // 155 tc_0655b949
  { 1, 81, 82, 1309, 1311 }, // 156 tc_6e20402a
  { 1, 81, 82, 1311, 1312 }, // 157 tc_db96aa6b
  { 1, 79, 80, 1312, 1314 }, // 158 tc_a7bdb22c
  { 1, 79, 80, 1314, 1317 }, // 159 tc_db596beb
  { 1, 79, 80, 1317, 1320 }, // 160 tc_a08b630b
  { 1, 79, 80, 1320, 1323 }, // 161 tc_1fcb8495
  { 1, 84, 85, 1323, 1328 }, // 162 tc_9edefe01
  { 1, 84, 85, 1328, 1333 }, // 163 tc_449acf79
  { 1, 81, 82, 1333, 1338 }, // 164 tc_ce59038e
  { 1, 81, 82, 1338, 1343 }, // 165 tc_f529831b
  { 1, 81, 82, 1343, 1348 }, // 166 tc_addc37a8
  { 1, 81, 82, 1348, 1351 }, // 167 tc_6f42bc60
  { 1, 81, 82, 1351, 1353 }, // 168 tc_7af3a37e
  { 1, 79, 80, 1353, 1355 }, // 169 tc_e3d699e3
  { 1, 84, 85, 1355, 1358 }, // 170 tc_ba9255a6
  { 1, 84, 85, 1358, 1363 }, // 171 tc_1fe4ab69
  { 1, 84, 85, 1363, 1366 }, // 172 tc_bb07f2c5
  { 1, 84, 85, 1366, 1371 }, // 173 tc_8e82e8ca
  { 1, 81, 82, 1371, 1374 }, // 174 tc_cfa0e29b
  { 1, 81, 82, 1374, 1379 }, // 175 tc_0a6c20ae
  { 1, 81, 82, 1379, 1382 }, // 176 tc_0fac1eb8
  { 1, 81, 82, 1382, 1387 }, // 177 tc_829d8a86
  { 1, 84, 85, 1387, 1391 }, // 178 tc_280f7fe1
  { 1, 84, 85, 1391, 1395 }, // 179 tc_887d1bb7
  { 1, 81, 82, 1395, 1399 }, // 180 tc_96ef76ef
  { 1, 81, 82, 1399, 1403 }, // 181 tc_55a9a350
  { 1, 79, 80, 1403, 1407 }, // 182 tc_f0cdeccf
  { 1, 79, 80, 1407, 1412 }, // 183 tc_a38c45dc
  { 1, 79, 80, 1412, 1414 }, // 184 tc_d3632d88
  { 1, 79, 80, 1414, 1418 }, // 185 tc_5e4cf0e8
  { 1, 79, 80, 1418, 1420 }, // 186 tc_ef921005
  { 1, 84, 85, 1420, 1423 }, // 187 tc_5b347363
  { 1, 84, 85, 1423, 1425 }, // 188 tc_3d14a17b
  { 1, 84, 85, 1425, 1426 }, // 189 tc_3fbf1042
  { 1, 84, 85, 1426, 1427 }, // 190 tc_63567288
  { 1, 84, 85, 1427, 1429 }, // 191 tc_59a7822c
  { 1, 84, 85, 0, 0 }, // 192 tc_937dd41c
  { 1, 81, 82, 0, 0 }, // 193 tc_a4ee89db
  { 1, 81, 82, 0, 0 }, // 194 tc_c818ff7f
  { 1, 81, 82, 1429, 1430 }, // 195 tc_1242dc2a
  { 1, 84, 85, 1430, 1432 }, // 196 tc_44d5a428
  { 0, 0, 0, 0, 0 }, // 197 tc_540c3da3
  { 0, 0, 0, 0, 0 }, // 198 tc_c4edf264
  { 0, 0, 0, 0, 0 }, // 199 tc_5bf8afbb
  { 0, 0, 0, 0, 0 }, // 200 tc_2b4c548e
  { 0, 0, 0, 0, 0 }, // 201 tc_bb599486
  { 0, 0, 0, 0, 0 }, // 202 tc_a7e6707d
  { 0, 0, 0, 0, 0 }, // 203 tc_3c56e5ce
  { 0, 0, 0, 0, 0 }, // 204 tc_abe8c3b2
  { 0, 0, 0, 0, 0 }, // 205 tc_453fe68d
  { 0, 0, 0, 0, 0 }, // 206 tc_1ba8a0cd
  { 0, 0, 0, 0, 0 }, // 207 tc_52447ecc
  { 0, 0, 0, 0, 0 }, // 208 tc_3904b926
  { 0, 0, 0, 0, 0 }, // 209 tc_b9db8205
  { 0, 0, 0, 0, 0 }, // 210 tc_663c80a7
  { 0, 0, 0, 0, 0 }, // 211 tc_f21e8abb
  { 0, 0, 0, 0, 0 }, // 212 tc_131f1c81
  { 0, 0, 0, 0, 0 }, // 213 tc_c7039829
  { 0, 0, 0, 0, 0 }, // 214 tc_e2d2e9e5
  { 0, 0, 0, 0, 0 }, // 215 tc_ab23f776
  { 0, 0, 0, 0, 0 }, // 216 tc_7177e272
  { 0, 0, 0, 0, 0 }, // 217 tc_e99d4c2e
  { 0, 0, 0, 0, 0 }, // 218 tc_6942b6e0
  { 0, 0, 0, 0, 0 }, // 219 tc_a02a10a8
  { 0, 0, 0, 0, 0 }, // 220 tc_54a0dc47
  { 0, 0, 0, 0, 0 }, // 221 tc_447d9895
  { 0, 0, 0, 0, 0 }, // 222 tc_191381c1
  { 0, 0, 0, 0, 0 }, // 223 tc_3e2aaafc
  { 0, 0, 0, 0, 0 }, // 224 tc_3ce09744
  { 0, 0, 0, 0, 0 }, // 225 tc_20a4bbec
  { 0, 0, 0, 0, 0 }, // 226 tc_c127de3a
  { 0, 0, 0, 0, 0 }, // 227 tc_257f6f7c
  { 0, 0, 0, 0, 0 }, // 228 tc_7e6a3e89
  { 0, 0, 0, 0, 0 }, // 229 tc_e35c1e93
  { 0, 0, 0, 0, 0 }, // 230 tc_05ca8cfd
  { 0, 0, 0, 0, 0 }, // 231 tc_d8287c14
  { 0, 0, 0, 0, 0 }, // 232 tc_08a4f1b6
  { 0, 0, 0, 0, 0 }, // 233 tc_56e64202
  { 0, 0, 0, 0, 0 }, // 234 tc_ac4046bc
  { 0, 0, 0, 0, 0 }, // 235 tc_2e8f5f6e
  { 0, 0, 0, 0, 0 }, // 236 tc_7417e785
  { 0, 0, 0, 0, 0 }, // 237 tc_309dbb4f
  { 0, 0, 0, 0, 0 }, // 238 tc_df80eeb0
  { 0, 0, 0, 0, 0 }, // 239 tc_16ff9ef8
  { 0, 0, 0, 0, 0 }, // 240 tc_51d0ecc3
  { 0, 0, 0, 0, 0 }, // 241 tc_561aaa58
  { 0, 0, 0, 0, 0 }, // 242 tc_946013d8
  { 0, 0, 0, 0, 0 }, // 243 tc_46d6c3e0
  { 0, 0, 0, 0, 0 }, // 244 tc_87adc037
  { 0, 0, 0, 0, 0 }, // 245 tc_649072c2
  { 0, 0, 0, 0, 0 }, // 246 tc_b091f1c6
  { 0, 0, 0, 0, 0 }, // 247 tc_0b04c6c7
  { 0, 0, 0, 0, 0 }, // 248 tc_660769f1
  { 0, 0, 0, 0, 0 }, // 249 tc_a28f32b5
  { 0, 0, 0, 0, 0 }, // 250 tc_7d68d5c2
  { 0, 0, 0, 0, 0 }, // 251 tc_7095ecba
  { 0, 0, 0, 0, 0 }, // 252 tc_a69eeee1
  { 0, 0, 0, 0, 0 }, // 253 tc_1381a97c
  { 0, 0, 0, 0, 0 }, // 254 tc_e3f68a46
  { 0, 0, 0, 0, 0 }, // 255 tc_f1de44ef
  { 0, 0, 0, 0, 0 }, // 256 tc_9d1dc972
  { 0, 0, 0, 0, 0 }, // 257 tc_90bcc1db
  { 0, 0, 0, 0, 0 }, // 258 tc_cd94bfe0
  { 0, 0, 0, 0, 0 }, // 259 tc_15fdf750
  { 0, 0, 0, 0, 0 }, // 260 tc_1ad8a370
  { 0, 0, 0, 0, 0 }, // 261 tc_e675c45a
  { 0, 0, 0, 0, 0 }, // 262 tc_61bf7c03
  { 0, 0, 0, 0, 0 }, // 263 tc_933f2b39
  { 0, 0, 0, 0, 0 }, // 264 tc_26a377fe
  { 0, 0, 0, 0, 0 }, // 265 tc_2d4051cd
  { 0, 0, 0, 0, 0 }, // 266 tc_6e7fa133
  { 0, 0, 0, 0, 0 }, // 267 tc_8772086c
  { 0, 0, 0, 0, 0 }, // 268 tc_b4416217
  { 0, 0, 0, 0, 0 }, // 269 tc_9f363d21
  { 0, 0, 0, 0, 0 }, // 270 tc_8e420e4d
  { 0, 0, 0, 0, 0 }, // 271 tc_7273323b
  { 0, 0, 0, 0, 0 }, // 272 tc_58d21193
  { 0, 0, 0, 0, 0 }, // 273 tc_71646d06
  { 0, 0, 0, 0, 0 }, // 274 tc_04da405a
  { 0, 0, 0, 0, 0 }, // 275 tc_2c745bb8
  { 0, 0, 0, 0, 0 }, // 276 tc_b28e51aa
  { 0, 0, 0, 0, 0 }, // 277 tc_767c4e9d
  { 0, 0, 0, 0, 0 }, // 278 tc_e699ae41
  { 0, 0, 0, 0, 0 }, // 279 tc_a0dbea28
  { 0, 0, 0, 0, 0 }, // 280 tc_dd5b0695
  { 0, 0, 0, 0, 0 }, // 281 tc_3ad719fb
  { 1, 81, 82, 0, 0 }, // 282 tc_77f94a5e
  { 1, 85, 86, 0, 0 }, // 283 tc_55255f2b
  { 1, 81, 82, 1432, 1433 }, // 284 tc_b1ae5f67
  { 1, 81, 82, 1433, 1435 }, // 285 tc_2237d952
  { 1, 83, 84, 1435, 1436 }, // 286 tc_0ba0d5da
  { 1, 83, 84, 0, 0 }, // 287 tc_9b34f5e0
  { 1, 85, 86, 1436, 1437 }, // 288 tc_2c3e17fc
  { 1, 81, 82, 1437, 1439 }, // 289 tc_a3070909
  { 1, 85, 86, 1439, 1440 }, // 290 tc_d7718fbe
  { 1, 85, 86, 1440, 1442 }, // 291 tc_28e55c6f
  { 1, 81, 82, 1442, 1443 }, // 292 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 293 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV62[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 88, 89, 1443, 1446 }, // 1 tc_01d44cb2
  { 1, 89, 90, 1446, 1449 }, // 2 PSEUDO
  { 1, 89, 90, 1449, 1451 }, // 3 tc_c57d9f39
  { 1, 89, 90, 1451, 1455 }, // 4 tc_1c2c7a4a
  { 1, 89, 90, 1455, 1459 }, // 5 tc_442395f3
  { 1, 89, 90, 1459, 1462 }, // 6 tc_713b66bf
  { 1, 89, 90, 1462, 1465 }, // 7 tc_86173609
  { 1, 88, 89, 1465, 1468 }, // 8 tc_5da50c4b
  { 1, 88, 89, 1468, 1471 }, // 9 tc_4a55d03c
  { 1, 89, 90, 1471, 1474 }, // 10 tc_d33e5eee
  { 1, 88, 89, 1474, 1477 }, // 11 tc_651cbe02
  { 1, 90, 91, 1477, 1480 }, // 12 DUPLEX
  { 1, 91, 92, 1480, 1481 }, // 13 tc_ENDLOOP
  { 1, 89, 90, 0, 0 }, // 14 tc_23708a21
  { 1, 89, 90, 1481, 1483 }, // 15 tc_56a124a7
  { 1, 92, 93, 1483, 1485 }, // 16 tc_2f573607
  { 1, 92, 93, 1485, 1488 }, // 17 tc_53c851ab
  { 1, 93, 94, 1488, 1492 }, // 18 tc_fedb7e19
  { 1, 93, 94, 1492, 1495 }, // 19 tc_4222e6bf
  { 1, 93, 94, 1495, 1499 }, // 20 tc_075c8dd8
  { 1, 90, 91, 1499, 1502 }, // 21 tc_9bcfb2ee
  { 1, 90, 91, 1502, 1505 }, // 22 tc_158aa3f7
  { 1, 90, 91, 1505, 1508 }, // 23 tc_df5d53f9
  { 1, 90, 91, 1508, 1511 }, // 24 tc_14ab4f41
  { 1, 90, 91, 1511, 1512 }, // 25 tc_f38f92e1
  { 1, 90, 91, 1512, 1513 }, // 26 tc_1981450d
  { 1, 93, 94, 1513, 1515 }, // 27 tc_e9170fb7
  { 1, 90, 91, 1515, 1517 }, // 28 tc_40d64c94
  { 1, 93, 94, 1517, 1519 }, // 29 LD_tc_ld_SLOT01
  { 1, 88, 89, 1519, 1522 }, // 30 tc_38382228
  { 1, 88, 89, 1522, 1525 }, // 31 tc_c21d7447
  { 1, 88, 89, 1525, 1529 }, // 32 tc_7f8ae742
  { 1, 94, 95, 1529, 1532 }, // 33 tc_5a4b5e58
  { 1, 94, 95, 1532, 1536 }, // 34 tc_197dce51
  { 1, 88, 89, 1536, 1537 }, // 35 tc_44fffc58
  { 1, 93, 94, 1537, 1542 }, // 36 tc_5ceb2f9e
  { 1, 95, 97, 1542, 1545 }, // 37 tc_56c4f9fe
  { 1, 93, 94, 1545, 1550 }, // 38 tc_b4dc7630
  { 1, 93, 94, 1550, 1554 }, // 39 tc_a2b365d2
  { 1, 92, 93, 1554, 1555 }, // 40 tc_60e324ff
  { 1, 97, 99, 1555, 1558 }, // 41 tc_db5555f3
  { 1, 99, 102, 1558, 1561 }, // 42 tc_c0749f3c
  { 1, 102, 104, 1561, 1564 }, // 43 PSEUDOM
  { 1, 95, 97, 1564, 1567 }, // 44 tc_3aacf4a8
  { 1, 104, 107, 1567, 1570 }, // 45 tc_c5dba46e
  { 1, 97, 99, 1570, 1574 }, // 46 tc_af25efd9
  { 1, 88, 89, 1574, 1577 }, // 47 tc_0dfac0a7
  { 1, 93, 94, 1577, 1581 }, // 48 tc_8035e91f
  { 1, 90, 91, 1581, 1585 }, // 49 tc_011e0e9d
  { 1, 93, 94, 1585, 1588 }, // 50 tc_ae5babd7
  { 1, 90, 91, 1588, 1591 }, // 51 tc_5deb5e47
  { 1, 88, 89, 1591, 1596 }, // 52 tc_bb831a7c
  { 1, 90, 91, 1596, 1600 }, // 53 tc_92240447
  { 1, 93, 94, 1600, 1603 }, // 54 tc_7c31e19a
  { 1, 93, 94, 1603, 1607 }, // 55 tc_d03278fd
  { 1, 93, 94, 1607, 1611 }, // 56 tc_65cbd974
  { 1, 90, 91, 1611, 1614 }, // 57 tc_934753bb
  { 1, 93, 94, 1614, 1617 }, // 58 ST_tc_st_SLOT01
  { 1, 107, 109, 1617, 1621 }, // 59 CVI_VA
  { 1, 95, 97, 1621, 1623 }, // 60 tc_0ec46cf9
  { 1, 97, 99, 1623, 1624 }, // 61 tc_718b5c53
  { 1, 109, 113, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 90, 91, 1624, 1625 }, // 63 tc_d45ba9cd
  { 1, 89, 90, 1625, 1628 }, // 64 tc_388f9897
  { 1, 89, 90, 1628, 1630 }, // 65 tc_9124c04f
  { 1, 89, 90, 1630, 1633 }, // 66 tc_4ac61d92
  { 1, 93, 94, 1633, 1635 }, // 67 tc_aee6250c
  { 1, 93, 94, 1635, 1638 }, // 68 tc_eed07714
  { 1, 93, 94, 1638, 1641 }, // 69 tc_74a42bda
  { 1, 93, 94, 1641, 1644 }, // 70 tc_a9edeffa
  { 1, 93, 94, 1644, 1647 }, // 71 tc_838c4d7a
  { 1, 88, 89, 1647, 1649 }, // 72 tc_d61dfdc3
  { 1, 88, 89, 1649, 1652 }, // 73 tc_8a825db2
  { 1, 88, 89, 1652, 1655 }, // 74 tc_f34c1c21
  { 1, 89, 90, 1655, 1658 }, // 75 tc_95a33176
  { 1, 88, 89, 1658, 1660 }, // 76 tc_9f6cd987
  { 1, 89, 90, 0, 0 }, // 77 tc_b837298f
  { 1, 89, 90, 1660, 1663 }, // 78 tc_8b5bd4f5
  { 1, 89, 90, 1663, 1666 }, // 79 tc_84a7500d
  { 1, 94, 95, 1666, 1668 }, // 80 tc_7476d766
  { 1, 94, 95, 1668, 1670 }, // 81 tc_49fdfd4b
  { 1, 88, 89, 1670, 1673 }, // 82 tc_f098b237
  { 1, 88, 89, 1673, 1676 }, // 83 tc_20131976
  { 1, 88, 89, 1676, 1681 }, // 84 tc_1d41f8b7
  { 1, 88, 89, 1681, 1684 }, // 85 tc_a1297125
  { 1, 89, 90, 1684, 1685 }, // 86 tc_112d30d6
  { 1, 88, 89, 1685, 1688 }, // 87 tc_d68dca5c
  { 1, 88, 89, 1688, 1692 }, // 88 tc_788b1d09
  { 1, 88, 89, 1692, 1697 }, // 89 tc_38e0bae9
  { 1, 88, 89, 1697, 1700 }, // 90 tc_407e96f9
  { 1, 88, 89, 1700, 1704 }, // 91 tc_7401744f
  { 1, 88, 89, 1704, 1707 }, // 92 tc_9b3c0462
  { 1, 88, 89, 1707, 1709 }, // 93 tc_151bf368
  { 1, 89, 90, 1709, 1712 }, // 94 tc_9c52f549
  { 1, 88, 89, 1712, 1714 }, // 95 tc_55b33fda
  { 1, 88, 89, 1714, 1718 }, // 96 tc_6fc5dbea
  { 1, 94, 95, 1718, 1720 }, // 97 tc_3edca78f
  { 1, 88, 89, 1720, 1724 }, // 98 tc_a7a13fac
  { 1, 88, 89, 1724, 1726 }, // 99 tc_9783714b
  { 1, 88, 89, 1726, 1729 }, // 100 tc_f0e8e832
  { 1, 88, 89, 1729, 1731 }, // 101 tc_65279839
  { 1, 88, 89, 1731, 1735 }, // 102 tc_0a195f2c
  { 1, 88, 89, 1735, 1739 }, // 103 tc_01e1be3b
  { 1, 88, 89, 1739, 1742 }, // 104 tc_556f6577
  { 1, 88, 89, 1742, 1745 }, // 105 tc_02fe1c65
  { 1, 88, 89, 1745, 1749 }, // 106 tc_9e72dc89
  { 1, 88, 89, 1749, 1754 }, // 107 tc_9edb7c77
  { 1, 88, 89, 1754, 1757 }, // 108 tc_7f7f45f5
  { 1, 88, 89, 1757, 1760 }, // 109 tc_c20701f0
  { 1, 88, 89, 1760, 1764 }, // 110 tc_f7569068
  { 1, 94, 95, 1764, 1766 }, // 111 tc_fae9dfa5
  { 1, 94, 95, 1766, 1768 }, // 112 tc_6ae3426b
  { 1, 88, 89, 1768, 1770 }, // 113 tc_69bfb303
  { 1, 92, 93, 1770, 1771 }, // 114 tc_362b0be2
  { 1, 92, 93, 1771, 1773 }, // 115 tc_dc51281d
  { 1, 89, 90, 1773, 1774 }, // 116 tc_decdde8a
  { 1, 89, 90, 1774, 1776 }, // 117 tc_eeda4109
  { 1, 89, 90, 1776, 1778 }, // 118 tc_711c805f
  { 1, 92, 93, 1778, 1780 }, // 119 tc_ed03645c
  { 1, 92, 93, 1780, 1782 }, // 120 tc_42ff66ba
  { 1, 94, 95, 1782, 1784 }, // 121 tc_57a55b54
  { 1, 94, 95, 1784, 1786 }, // 122 tc_1248597c
  { 1, 94, 95, 1786, 1788 }, // 123 tc_9406230a
  { 1, 92, 93, 1788, 1789 }, // 124 tc_d57d649c
  { 1, 94, 95, 1789, 1791 }, // 125 tc_4abdbdc6
  { 1, 94, 95, 1791, 1793 }, // 126 tc_6d861a95
  { 1, 92, 93, 1793, 1794 }, // 127 tc_45f9d1be
  { 1, 90, 91, 1794, 1797 }, // 128 tc_24e109c7
  { 1, 89, 90, 1797, 1800 }, // 129 tc_9e27f2f9
  { 1, 90, 91, 1800, 1803 }, // 130 tc_f6e2aff9
  { 1, 89, 90, 1803, 1806 }, // 131 tc_24f426ab
  { 1, 90, 91, 1806, 1809 }, // 132 tc_975a4e54
  { 1, 88, 89, 1809, 1812 }, // 133 tc_5502c366
  { 1, 90, 91, 1812, 1814 }, // 134 tc_7b9187d3
  { 1, 89, 90, 1814, 1816 }, // 135 tc_f999c66e
  { 1, 93, 94, 1816, 1821 }, // 136 tc_1c7522a8
  { 1, 93, 94, 1821, 1827 }, // 137 tc_76bb5435
  { 1, 93, 94, 1827, 1829 }, // 138 tc_8a6d0d94
  { 1, 90, 91, 1829, 1831 }, // 139 tc_2471c1c8
  { 1, 90, 91, 1831, 1833 }, // 140 tc_64b00d8a
  { 1, 93, 94, 1833, 1838 }, // 141 tc_5f2afaf7
  { 1, 93, 94, 1838, 1842 }, // 142 tc_ac65613f
  { 1, 93, 94, 1842, 1847 }, // 143 tc_a32e03e7
  { 1, 93, 94, 1847, 1850 }, // 144 tc_822c3c68
  { 1, 93, 94, 1850, 1854 }, // 145 tc_abfd9a6d
  { 1, 93, 94, 1854, 1858 }, // 146 tc_bf2ffc0f
  { 1, 93, 94, 1858, 1861 }, // 147 tc_7c6d32e4
  { 1, 93, 94, 1861, 1866 }, // 148 tc_45791fb8
  { 1, 93, 94, 1866, 1871 }, // 149 tc_b7c4062a
  { 1, 93, 94, 1871, 1874 }, // 150 tc_5944960d
  { 1, 88, 89, 1874, 1878 }, // 151 tc_2c13e7f5
  { 1, 88, 89, 1878, 1882 }, // 152 tc_a154b476
  { 1, 88, 89, 1882, 1886 }, // 153 tc_a4e22bbd
  { 1, 88, 89, 1886, 1890 }, // 154 tc_503ce0f3
  { 1, 93, 94, 1890, 1892 }, // 155 tc_0655b949
  { 1, 90, 91, 1892, 1894 }, // 156 tc_6e20402a
  { 1, 90, 91, 1894, 1895 }, // 157 tc_db96aa6b
  { 1, 88, 89, 1895, 1897 }, // 158 tc_a7bdb22c
  { 1, 88, 89, 1897, 1900 }, // 159 tc_db596beb
  { 1, 88, 89, 1900, 1903 }, // 160 tc_a08b630b
  { 1, 88, 89, 1903, 1906 }, // 161 tc_1fcb8495
  { 1, 93, 94, 1906, 1911 }, // 162 tc_9edefe01
  { 1, 93, 94, 1911, 1916 }, // 163 tc_449acf79
  { 1, 90, 91, 1916, 1921 }, // 164 tc_ce59038e
  { 1, 90, 91, 1921, 1926 }, // 165 tc_f529831b
  { 1, 90, 91, 1926, 1931 }, // 166 tc_addc37a8
  { 1, 90, 91, 1931, 1934 }, // 167 tc_6f42bc60
  { 1, 90, 91, 1934, 1936 }, // 168 tc_7af3a37e
  { 1, 88, 89, 1936, 1938 }, // 169 tc_e3d699e3
  { 1, 93, 94, 1938, 1941 }, // 170 tc_ba9255a6
  { 1, 93, 94, 1941, 1946 }, // 171 tc_1fe4ab69
  { 1, 93, 94, 1946, 1949 }, // 172 tc_bb07f2c5
  { 1, 93, 94, 1949, 1954 }, // 173 tc_8e82e8ca
  { 1, 90, 91, 1954, 1957 }, // 174 tc_cfa0e29b
  { 1, 90, 91, 1957, 1962 }, // 175 tc_0a6c20ae
  { 1, 90, 91, 1962, 1965 }, // 176 tc_0fac1eb8
  { 1, 90, 91, 1965, 1970 }, // 177 tc_829d8a86
  { 1, 93, 94, 1970, 1974 }, // 178 tc_280f7fe1
  { 1, 93, 94, 1974, 1978 }, // 179 tc_887d1bb7
  { 1, 90, 91, 1978, 1982 }, // 180 tc_96ef76ef
  { 1, 90, 91, 1982, 1986 }, // 181 tc_55a9a350
  { 1, 88, 89, 1986, 1990 }, // 182 tc_f0cdeccf
  { 1, 88, 89, 1990, 1995 }, // 183 tc_a38c45dc
  { 1, 88, 89, 1995, 1997 }, // 184 tc_d3632d88
  { 1, 88, 89, 1997, 2001 }, // 185 tc_5e4cf0e8
  { 1, 88, 89, 2001, 2003 }, // 186 tc_ef921005
  { 1, 93, 94, 2003, 2006 }, // 187 tc_5b347363
  { 1, 93, 94, 2006, 2008 }, // 188 tc_3d14a17b
  { 1, 93, 94, 2008, 2009 }, // 189 tc_3fbf1042
  { 1, 93, 94, 2009, 2010 }, // 190 tc_63567288
  { 1, 93, 94, 2010, 2012 }, // 191 tc_59a7822c
  { 1, 93, 94, 0, 0 }, // 192 tc_937dd41c
  { 1, 90, 91, 0, 0 }, // 193 tc_a4ee89db
  { 1, 90, 91, 0, 0 }, // 194 tc_c818ff7f
  { 1, 90, 91, 2012, 2013 }, // 195 tc_1242dc2a
  { 1, 93, 94, 2013, 2015 }, // 196 tc_44d5a428
  { 1, 113, 115, 2015, 2018 }, // 197 tc_540c3da3
  { 1, 115, 117, 2018, 2020 }, // 198 tc_c4edf264
  { 1, 117, 119, 2020, 2022 }, // 199 tc_5bf8afbb
  { 1, 119, 121, 2022, 2026 }, // 200 tc_2b4c548e
  { 1, 119, 121, 2026, 2031 }, // 201 tc_bb599486
  { 1, 121, 125, 2031, 2034 }, // 202 tc_a7e6707d
  { 1, 121, 125, 2034, 2038 }, // 203 tc_3c56e5ce
  { 1, 99, 102, 2038, 2042 }, // 204 tc_abe8c3b2
  { 1, 99, 102, 2042, 2047 }, // 205 tc_453fe68d
  { 1, 99, 102, 2047, 2051 }, // 206 tc_1ba8a0cd
  { 1, 125, 127, 2051, 2054 }, // 207 tc_52447ecc
  { 1, 125, 127, 2054, 2058 }, // 208 tc_3904b926
  { 1, 125, 127, 2058, 2063 }, // 209 tc_b9db8205
  { 1, 125, 127, 2063, 2067 }, // 210 tc_663c80a7
  { 1, 127, 131, 2067, 2070 }, // 211 tc_f21e8abb
  { 1, 127, 131, 2070, 2074 }, // 212 tc_131f1c81
  { 1, 127, 131, 2074, 2079 }, // 213 tc_c7039829
  { 1, 127, 131, 2079, 2083 }, // 214 tc_e2d2e9e5
  { 1, 131, 133, 2083, 2086 }, // 215 tc_ab23f776
  { 1, 131, 133, 2086, 2090 }, // 216 tc_7177e272
  { 1, 131, 133, 2090, 2095 }, // 217 tc_e99d4c2e
  { 1, 131, 133, 2095, 2099 }, // 218 tc_6942b6e0
  { 1, 104, 107, 2099, 2103 }, // 219 tc_a02a10a8
  { 1, 104, 107, 2103, 2108 }, // 220 tc_54a0dc47
  { 1, 104, 107, 2108, 2112 }, // 221 tc_447d9895
  { 1, 104, 107, 2112, 2117 }, // 222 tc_191381c1
  { 1, 104, 107, 2117, 2121 }, // 223 tc_3e2aaafc
  { 1, 131, 133, 2121, 2123 }, // 224 tc_3ce09744
  { 1, 131, 133, 2123, 2126 }, // 225 tc_20a4bbec
  { 1, 115, 117, 2126, 2129 }, // 226 tc_c127de3a
  { 1, 95, 97, 2129, 2133 }, // 227 tc_257f6f7c
  { 1, 95, 97, 2133, 2138 }, // 228 tc_7e6a3e89
  { 1, 95, 97, 2138, 2142 }, // 229 tc_e35c1e93
  { 1, 133, 135, 2142, 2145 }, // 230 tc_05ca8cfd
  { 1, 119, 121, 2145, 2148 }, // 231 tc_d8287c14
  { 1, 119, 121, 2148, 2152 }, // 232 tc_08a4f1b6
  { 1, 117, 119, 2152, 2156 }, // 233 tc_56e64202
  { 1, 115, 117, 2156, 2159 }, // 234 tc_ac4046bc
  { 1, 115, 117, 2159, 2163 }, // 235 tc_2e8f5f6e
  { 1, 133, 135, 2163, 2166 }, // 236 tc_7417e785
  { 1, 133, 135, 2166, 2170 }, // 237 tc_309dbb4f
  { 1, 135, 137, 2170, 2174 }, // 238 tc_df80eeb0
  { 1, 133, 135, 2174, 2178 }, // 239 tc_16ff9ef8
  { 1, 133, 135, 2178, 2180 }, // 240 tc_51d0ecc3
  { 1, 135, 137, 2180, 2185 }, // 241 tc_561aaa58
  { 1, 117, 119, 2185, 2187 }, // 242 tc_946013d8
  { 1, 117, 119, 2187, 2190 }, // 243 tc_46d6c3e0
  { 1, 135, 137, 2190, 2194 }, // 244 tc_87adc037
  { 1, 115, 117, 2194, 2197 }, // 245 tc_649072c2
  { 1, 115, 117, 2197, 2201 }, // 246 tc_b091f1c6
  { 1, 119, 121, 2201, 2204 }, // 247 tc_0b04c6c7
  { 1, 119, 121, 2204, 2208 }, // 248 tc_660769f1
  { 1, 137, 140, 2208, 2211 }, // 249 tc_a28f32b5
  { 1, 137, 140, 2211, 2215 }, // 250 tc_7d68d5c2
  { 1, 140, 143, 2215, 2218 }, // 251 tc_7095ecba
  { 1, 140, 143, 2218, 2222 }, // 252 tc_a69eeee1
  { 1, 143, 145, 0, 0 }, // 253 tc_1381a97c
  { 1, 143, 145, 2222, 2223 }, // 254 tc_e3f68a46
  { 1, 145, 147, 2223, 2226 }, // 255 tc_f1de44ef
  { 1, 135, 137, 2226, 2231 }, // 256 tc_9d1dc972
  { 1, 145, 147, 2231, 2235 }, // 257 tc_90bcc1db
  { 1, 147, 150, 2235, 2238 }, // 258 tc_cd94bfe0
  { 1, 147, 150, 2238, 2242 }, // 259 tc_15fdf750
  { 1, 119, 121, 2242, 2246 }, // 260 tc_1ad8a370
  { 1, 119, 121, 2246, 2251 }, // 261 tc_e675c45a
  { 1, 150, 152, 2251, 2254 }, // 262 tc_61bf7c03
  { 1, 150, 152, 2254, 2258 }, // 263 tc_933f2b39
  { 1, 150, 152, 2258, 2262 }, // 264 tc_26a377fe
  { 1, 150, 152, 2262, 2267 }, // 265 tc_2d4051cd
  { 1, 117, 119, 2267, 2270 }, // 266 tc_6e7fa133
  { 1, 95, 97, 2270, 2273 }, // 267 tc_8772086c
  { 1, 97, 99, 2273, 2275 }, // 268 tc_b4416217
  { 1, 104, 107, 2275, 2279 }, // 269 tc_9f363d21
  { 1, 104, 107, 2279, 2284 }, // 270 tc_8e420e4d
  { 1, 152, 155, 2284, 2288 }, // 271 tc_7273323b
  { 1, 152, 155, 2288, 2293 }, // 272 tc_58d21193
  { 1, 97, 99, 2293, 2297 }, // 273 tc_71646d06
  { 1, 135, 137, 2297, 2299 }, // 274 tc_04da405a
  { 1, 135, 137, 2299, 2302 }, // 275 tc_2c745bb8
  { 1, 143, 145, 2302, 2303 }, // 276 tc_b28e51aa
  { 1, 143, 145, 2303, 2305 }, // 277 tc_767c4e9d
  { 1, 155, 157, 2305, 2307 }, // 278 tc_e699ae41
  { 1, 155, 157, 2307, 2310 }, // 279 tc_a0dbea28
  { 1, 155, 157, 2310, 2313 }, // 280 tc_dd5b0695
  { 1, 155, 157, 2313, 2317 }, // 281 tc_3ad719fb
  { 1, 90, 91, 0, 0 }, // 282 tc_77f94a5e
  { 1, 94, 95, 0, 0 }, // 283 tc_55255f2b
  { 1, 90, 91, 2317, 2318 }, // 284 tc_b1ae5f67
  { 1, 90, 91, 2318, 2320 }, // 285 tc_2237d952
  { 1, 92, 93, 2320, 2321 }, // 286 tc_0ba0d5da
  { 1, 92, 93, 0, 0 }, // 287 tc_9b34f5e0
  { 1, 94, 95, 2321, 2322 }, // 288 tc_2c3e17fc
  { 1, 90, 91, 2322, 2324 }, // 289 tc_a3070909
  { 1, 94, 95, 2324, 2325 }, // 290 tc_d7718fbe
  { 1, 94, 95, 2325, 2327 }, // 291 tc_28e55c6f
  { 1, 90, 91, 2327, 2328 }, // 292 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 293 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV65[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 157, 158, 2328, 2331 }, // 1 tc_01d44cb2
  { 1, 158, 159, 2331, 2334 }, // 2 PSEUDO
  { 1, 158, 159, 2334, 2336 }, // 3 tc_c57d9f39
  { 1, 158, 159, 2336, 2340 }, // 4 tc_1c2c7a4a
  { 1, 158, 159, 2340, 2344 }, // 5 tc_442395f3
  { 1, 158, 159, 2344, 2347 }, // 6 tc_713b66bf
  { 1, 158, 159, 2347, 2350 }, // 7 tc_86173609
  { 1, 157, 158, 2350, 2353 }, // 8 tc_5da50c4b
  { 1, 157, 158, 2353, 2356 }, // 9 tc_4a55d03c
  { 1, 158, 159, 2356, 2359 }, // 10 tc_d33e5eee
  { 1, 157, 158, 2359, 2362 }, // 11 tc_651cbe02
  { 1, 159, 160, 2362, 2365 }, // 12 DUPLEX
  { 1, 160, 161, 2365, 2366 }, // 13 tc_ENDLOOP
  { 1, 158, 159, 0, 0 }, // 14 tc_23708a21
  { 1, 158, 159, 2366, 2368 }, // 15 tc_56a124a7
  { 1, 161, 162, 2368, 2370 }, // 16 tc_2f573607
  { 1, 161, 162, 2370, 2373 }, // 17 tc_53c851ab
  { 1, 162, 163, 2373, 2377 }, // 18 tc_fedb7e19
  { 1, 162, 163, 2377, 2380 }, // 19 tc_4222e6bf
  { 1, 162, 163, 2380, 2384 }, // 20 tc_075c8dd8
  { 1, 159, 160, 2384, 2387 }, // 21 tc_9bcfb2ee
  { 1, 159, 160, 2387, 2390 }, // 22 tc_158aa3f7
  { 1, 159, 160, 2390, 2393 }, // 23 tc_df5d53f9
  { 1, 159, 160, 2393, 2396 }, // 24 tc_14ab4f41
  { 1, 159, 160, 2396, 2397 }, // 25 tc_f38f92e1
  { 1, 159, 160, 2397, 2398 }, // 26 tc_1981450d
  { 1, 162, 163, 2398, 2400 }, // 27 tc_e9170fb7
  { 1, 159, 160, 2400, 2402 }, // 28 tc_40d64c94
  { 1, 162, 163, 2402, 2404 }, // 29 LD_tc_ld_SLOT01
  { 1, 157, 158, 2404, 2407 }, // 30 tc_38382228
  { 1, 157, 158, 2407, 2410 }, // 31 tc_c21d7447
  { 1, 157, 158, 2410, 2414 }, // 32 tc_7f8ae742
  { 1, 163, 164, 2414, 2417 }, // 33 tc_5a4b5e58
  { 1, 163, 164, 2417, 2421 }, // 34 tc_197dce51
  { 1, 157, 158, 2421, 2422 }, // 35 tc_44fffc58
  { 1, 162, 163, 2422, 2427 }, // 36 tc_5ceb2f9e
  { 1, 164, 166, 2427, 2430 }, // 37 tc_56c4f9fe
  { 1, 162, 163, 2430, 2435 }, // 38 tc_b4dc7630
  { 1, 162, 163, 2435, 2439 }, // 39 tc_a2b365d2
  { 1, 161, 162, 2439, 2440 }, // 40 tc_60e324ff
  { 1, 166, 168, 2440, 2443 }, // 41 tc_db5555f3
  { 1, 168, 171, 2443, 2446 }, // 42 tc_c0749f3c
  { 1, 171, 173, 2446, 2449 }, // 43 PSEUDOM
  { 1, 164, 166, 2449, 2452 }, // 44 tc_3aacf4a8
  { 1, 173, 176, 2452, 2455 }, // 45 tc_c5dba46e
  { 1, 166, 168, 2455, 2459 }, // 46 tc_af25efd9
  { 1, 157, 158, 2459, 2462 }, // 47 tc_0dfac0a7
  { 1, 162, 163, 2462, 2466 }, // 48 tc_8035e91f
  { 1, 159, 160, 2466, 2470 }, // 49 tc_011e0e9d
  { 1, 162, 163, 2470, 2473 }, // 50 tc_ae5babd7
  { 1, 159, 160, 2473, 2476 }, // 51 tc_5deb5e47
  { 1, 157, 158, 2476, 2481 }, // 52 tc_bb831a7c
  { 1, 159, 160, 2481, 2485 }, // 53 tc_92240447
  { 1, 162, 163, 2485, 2488 }, // 54 tc_7c31e19a
  { 1, 162, 163, 2488, 2492 }, // 55 tc_d03278fd
  { 1, 162, 163, 2492, 2496 }, // 56 tc_65cbd974
  { 1, 159, 160, 2496, 2499 }, // 57 tc_934753bb
  { 1, 162, 163, 2499, 2502 }, // 58 ST_tc_st_SLOT01
  { 1, 176, 178, 2502, 2506 }, // 59 CVI_VA
  { 1, 164, 166, 2506, 2508 }, // 60 tc_0ec46cf9
  { 1, 166, 168, 2508, 2509 }, // 61 tc_718b5c53
  { 1, 178, 182, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 159, 160, 2509, 2510 }, // 63 tc_d45ba9cd
  { 1, 158, 159, 2510, 2513 }, // 64 tc_388f9897
  { 1, 158, 159, 2513, 2515 }, // 65 tc_9124c04f
  { 1, 158, 159, 2515, 2518 }, // 66 tc_4ac61d92
  { 1, 162, 163, 2518, 2520 }, // 67 tc_aee6250c
  { 1, 162, 163, 2520, 2523 }, // 68 tc_eed07714
  { 1, 162, 163, 2523, 2526 }, // 69 tc_74a42bda
  { 1, 162, 163, 2526, 2529 }, // 70 tc_a9edeffa
  { 1, 162, 163, 2529, 2532 }, // 71 tc_838c4d7a
  { 1, 157, 158, 2532, 2534 }, // 72 tc_d61dfdc3
  { 1, 157, 158, 2534, 2537 }, // 73 tc_8a825db2
  { 1, 157, 158, 2537, 2540 }, // 74 tc_f34c1c21
  { 1, 158, 159, 2540, 2543 }, // 75 tc_95a33176
  { 1, 157, 158, 2543, 2545 }, // 76 tc_9f6cd987
  { 1, 158, 159, 0, 0 }, // 77 tc_b837298f
  { 1, 158, 159, 2545, 2548 }, // 78 tc_8b5bd4f5
  { 1, 158, 159, 2548, 2551 }, // 79 tc_84a7500d
  { 1, 163, 164, 2551, 2553 }, // 80 tc_7476d766
  { 1, 163, 164, 2553, 2555 }, // 81 tc_49fdfd4b
  { 1, 157, 158, 2555, 2558 }, // 82 tc_f098b237
  { 1, 157, 158, 2558, 2561 }, // 83 tc_20131976
  { 1, 157, 158, 2561, 2566 }, // 84 tc_1d41f8b7
  { 1, 157, 158, 2566, 2569 }, // 85 tc_a1297125
  { 1, 158, 159, 2569, 2570 }, // 86 tc_112d30d6
  { 1, 157, 158, 2570, 2573 }, // 87 tc_d68dca5c
  { 1, 157, 158, 2573, 2577 }, // 88 tc_788b1d09
  { 1, 157, 158, 2577, 2582 }, // 89 tc_38e0bae9
  { 1, 157, 158, 2582, 2585 }, // 90 tc_407e96f9
  { 1, 157, 158, 2585, 2589 }, // 91 tc_7401744f
  { 1, 157, 158, 2589, 2592 }, // 92 tc_9b3c0462
  { 1, 157, 158, 2592, 2594 }, // 93 tc_151bf368
  { 1, 158, 159, 2594, 2597 }, // 94 tc_9c52f549
  { 1, 157, 158, 2597, 2599 }, // 95 tc_55b33fda
  { 1, 157, 158, 2599, 2603 }, // 96 tc_6fc5dbea
  { 1, 163, 164, 2603, 2605 }, // 97 tc_3edca78f
  { 1, 157, 158, 2605, 2609 }, // 98 tc_a7a13fac
  { 1, 157, 158, 2609, 2611 }, // 99 tc_9783714b
  { 1, 157, 158, 2611, 2614 }, // 100 tc_f0e8e832
  { 1, 157, 158, 2614, 2616 }, // 101 tc_65279839
  { 1, 157, 158, 2616, 2620 }, // 102 tc_0a195f2c
  { 1, 157, 158, 2620, 2624 }, // 103 tc_01e1be3b
  { 1, 157, 158, 2624, 2627 }, // 104 tc_556f6577
  { 1, 157, 158, 2627, 2630 }, // 105 tc_02fe1c65
  { 1, 157, 158, 2630, 2634 }, // 106 tc_9e72dc89
  { 1, 157, 158, 2634, 2639 }, // 107 tc_9edb7c77
  { 1, 157, 158, 2639, 2642 }, // 108 tc_7f7f45f5
  { 1, 157, 158, 2642, 2645 }, // 109 tc_c20701f0
  { 1, 157, 158, 2645, 2649 }, // 110 tc_f7569068
  { 1, 163, 164, 2649, 2651 }, // 111 tc_fae9dfa5
  { 1, 163, 164, 2651, 2653 }, // 112 tc_6ae3426b
  { 1, 157, 158, 2653, 2655 }, // 113 tc_69bfb303
  { 1, 161, 162, 2655, 2656 }, // 114 tc_362b0be2
  { 1, 161, 162, 2656, 2658 }, // 115 tc_dc51281d
  { 1, 158, 159, 2658, 2659 }, // 116 tc_decdde8a
  { 1, 158, 159, 2659, 2661 }, // 117 tc_eeda4109
  { 1, 158, 159, 2661, 2663 }, // 118 tc_711c805f
  { 1, 161, 162, 2663, 2665 }, // 119 tc_ed03645c
  { 1, 161, 162, 2665, 2667 }, // 120 tc_42ff66ba
  { 1, 163, 164, 2667, 2669 }, // 121 tc_57a55b54
  { 1, 163, 164, 2669, 2671 }, // 122 tc_1248597c
  { 1, 163, 164, 2671, 2673 }, // 123 tc_9406230a
  { 1, 161, 162, 2673, 2674 }, // 124 tc_d57d649c
  { 1, 163, 164, 2674, 2676 }, // 125 tc_4abdbdc6
  { 1, 163, 164, 2676, 2678 }, // 126 tc_6d861a95
  { 1, 161, 162, 2678, 2679 }, // 127 tc_45f9d1be
  { 1, 159, 160, 2679, 2682 }, // 128 tc_24e109c7
  { 1, 158, 159, 2682, 2685 }, // 129 tc_9e27f2f9
  { 1, 159, 160, 2685, 2688 }, // 130 tc_f6e2aff9
  { 1, 158, 159, 2688, 2691 }, // 131 tc_24f426ab
  { 1, 159, 160, 2691, 2694 }, // 132 tc_975a4e54
  { 1, 157, 158, 2694, 2697 }, // 133 tc_5502c366
  { 1, 159, 160, 2697, 2699 }, // 134 tc_7b9187d3
  { 1, 158, 159, 2699, 2701 }, // 135 tc_f999c66e
  { 1, 162, 163, 2701, 2706 }, // 136 tc_1c7522a8
  { 1, 162, 163, 2706, 2712 }, // 137 tc_76bb5435
  { 1, 162, 163, 2712, 2714 }, // 138 tc_8a6d0d94
  { 1, 159, 160, 2714, 2716 }, // 139 tc_2471c1c8
  { 1, 159, 160, 2716, 2718 }, // 140 tc_64b00d8a
  { 1, 162, 163, 2718, 2723 }, // 141 tc_5f2afaf7
  { 1, 162, 163, 2723, 2727 }, // 142 tc_ac65613f
  { 1, 162, 163, 2727, 2732 }, // 143 tc_a32e03e7
  { 1, 162, 163, 2732, 2735 }, // 144 tc_822c3c68
  { 1, 162, 163, 2735, 2739 }, // 145 tc_abfd9a6d
  { 1, 162, 163, 2739, 2743 }, // 146 tc_bf2ffc0f
  { 1, 162, 163, 2743, 2746 }, // 147 tc_7c6d32e4
  { 1, 162, 163, 2746, 2751 }, // 148 tc_45791fb8
  { 1, 162, 163, 2751, 2756 }, // 149 tc_b7c4062a
  { 1, 162, 163, 2756, 2759 }, // 150 tc_5944960d
  { 1, 157, 158, 2759, 2763 }, // 151 tc_2c13e7f5
  { 1, 157, 158, 2763, 2767 }, // 152 tc_a154b476
  { 1, 157, 158, 2767, 2771 }, // 153 tc_a4e22bbd
  { 1, 157, 158, 2771, 2775 }, // 154 tc_503ce0f3
  { 1, 162, 163, 2775, 2777 }, // 155 tc_0655b949
  { 1, 159, 160, 2777, 2779 }, // 156 tc_6e20402a
  { 1, 159, 160, 2779, 2780 }, // 157 tc_db96aa6b
  { 1, 157, 158, 2780, 2782 }, // 158 tc_a7bdb22c
  { 1, 157, 158, 2782, 2785 }, // 159 tc_db596beb
  { 1, 157, 158, 2785, 2788 }, // 160 tc_a08b630b
  { 1, 157, 158, 2788, 2791 }, // 161 tc_1fcb8495
  { 1, 162, 163, 2791, 2796 }, // 162 tc_9edefe01
  { 1, 162, 163, 2796, 2801 }, // 163 tc_449acf79
  { 1, 159, 160, 2801, 2806 }, // 164 tc_ce59038e
  { 1, 159, 160, 2806, 2811 }, // 165 tc_f529831b
  { 1, 159, 160, 2811, 2816 }, // 166 tc_addc37a8
  { 1, 159, 160, 2816, 2819 }, // 167 tc_6f42bc60
  { 1, 159, 160, 2819, 2821 }, // 168 tc_7af3a37e
  { 1, 157, 158, 2821, 2823 }, // 169 tc_e3d699e3
  { 1, 162, 163, 2823, 2826 }, // 170 tc_ba9255a6
  { 1, 162, 163, 2826, 2831 }, // 171 tc_1fe4ab69
  { 1, 162, 163, 2831, 2834 }, // 172 tc_bb07f2c5
  { 1, 162, 163, 2834, 2839 }, // 173 tc_8e82e8ca
  { 1, 159, 160, 2839, 2842 }, // 174 tc_cfa0e29b
  { 1, 159, 160, 2842, 2847 }, // 175 tc_0a6c20ae
  { 1, 159, 160, 2847, 2850 }, // 176 tc_0fac1eb8
  { 1, 159, 160, 2850, 2855 }, // 177 tc_829d8a86
  { 1, 162, 163, 2855, 2859 }, // 178 tc_280f7fe1
  { 1, 162, 163, 2859, 2863 }, // 179 tc_887d1bb7
  { 1, 159, 160, 2863, 2867 }, // 180 tc_96ef76ef
  { 1, 159, 160, 2867, 2871 }, // 181 tc_55a9a350
  { 1, 157, 158, 2871, 2875 }, // 182 tc_f0cdeccf
  { 1, 157, 158, 2875, 2880 }, // 183 tc_a38c45dc
  { 1, 157, 158, 2880, 2882 }, // 184 tc_d3632d88
  { 1, 157, 158, 2882, 2886 }, // 185 tc_5e4cf0e8
  { 1, 157, 158, 2886, 2888 }, // 186 tc_ef921005
  { 1, 162, 163, 2888, 2891 }, // 187 tc_5b347363
  { 1, 162, 163, 2891, 2893 }, // 188 tc_3d14a17b
  { 1, 162, 163, 2893, 2894 }, // 189 tc_3fbf1042
  { 1, 162, 163, 2894, 2895 }, // 190 tc_63567288
  { 1, 162, 163, 2895, 2897 }, // 191 tc_59a7822c
  { 1, 162, 163, 0, 0 }, // 192 tc_937dd41c
  { 1, 159, 160, 0, 0 }, // 193 tc_a4ee89db
  { 1, 159, 160, 0, 0 }, // 194 tc_c818ff7f
  { 1, 159, 160, 2897, 2898 }, // 195 tc_1242dc2a
  { 1, 162, 163, 2898, 2900 }, // 196 tc_44d5a428
  { 1, 182, 184, 2900, 2903 }, // 197 tc_540c3da3
  { 1, 184, 186, 2903, 2905 }, // 198 tc_c4edf264
  { 1, 186, 188, 2905, 2907 }, // 199 tc_5bf8afbb
  { 1, 188, 190, 2907, 2911 }, // 200 tc_2b4c548e
  { 1, 188, 190, 2911, 2916 }, // 201 tc_bb599486
  { 1, 190, 194, 2916, 2919 }, // 202 tc_a7e6707d
  { 1, 190, 194, 2919, 2923 }, // 203 tc_3c56e5ce
  { 1, 168, 171, 2923, 2927 }, // 204 tc_abe8c3b2
  { 1, 168, 171, 2927, 2932 }, // 205 tc_453fe68d
  { 1, 168, 171, 2932, 2936 }, // 206 tc_1ba8a0cd
  { 1, 194, 196, 2936, 2939 }, // 207 tc_52447ecc
  { 1, 194, 196, 2939, 2943 }, // 208 tc_3904b926
  { 1, 194, 196, 2943, 2948 }, // 209 tc_b9db8205
  { 1, 194, 196, 2948, 2952 }, // 210 tc_663c80a7
  { 1, 196, 200, 2952, 2955 }, // 211 tc_f21e8abb
  { 1, 196, 200, 2955, 2959 }, // 212 tc_131f1c81
  { 1, 196, 200, 2959, 2964 }, // 213 tc_c7039829
  { 1, 196, 200, 2964, 2968 }, // 214 tc_e2d2e9e5
  { 1, 200, 202, 2968, 2971 }, // 215 tc_ab23f776
  { 1, 200, 202, 2971, 2975 }, // 216 tc_7177e272
  { 1, 200, 202, 2975, 2980 }, // 217 tc_e99d4c2e
  { 1, 200, 202, 2980, 2984 }, // 218 tc_6942b6e0
  { 1, 173, 176, 2984, 2988 }, // 219 tc_a02a10a8
  { 1, 173, 176, 2988, 2993 }, // 220 tc_54a0dc47
  { 1, 173, 176, 2993, 2997 }, // 221 tc_447d9895
  { 1, 173, 176, 2997, 3002 }, // 222 tc_191381c1
  { 1, 173, 176, 3002, 3006 }, // 223 tc_3e2aaafc
  { 1, 200, 202, 3006, 3008 }, // 224 tc_3ce09744
  { 1, 200, 202, 3008, 3011 }, // 225 tc_20a4bbec
  { 1, 184, 186, 3011, 3014 }, // 226 tc_c127de3a
  { 1, 164, 166, 3014, 3018 }, // 227 tc_257f6f7c
  { 1, 164, 166, 3018, 3023 }, // 228 tc_7e6a3e89
  { 1, 164, 166, 3023, 3027 }, // 229 tc_e35c1e93
  { 1, 202, 204, 3027, 3030 }, // 230 tc_05ca8cfd
  { 1, 188, 190, 3030, 3033 }, // 231 tc_d8287c14
  { 1, 188, 190, 3033, 3037 }, // 232 tc_08a4f1b6
  { 1, 186, 188, 3037, 3041 }, // 233 tc_56e64202
  { 1, 184, 186, 3041, 3044 }, // 234 tc_ac4046bc
  { 1, 184, 186, 3044, 3048 }, // 235 tc_2e8f5f6e
  { 1, 202, 204, 3048, 3051 }, // 236 tc_7417e785
  { 1, 202, 204, 3051, 3055 }, // 237 tc_309dbb4f
  { 1, 204, 206, 3055, 3059 }, // 238 tc_df80eeb0
  { 1, 202, 204, 3059, 3063 }, // 239 tc_16ff9ef8
  { 1, 202, 204, 3063, 3065 }, // 240 tc_51d0ecc3
  { 1, 204, 206, 3065, 3070 }, // 241 tc_561aaa58
  { 1, 186, 188, 3070, 3072 }, // 242 tc_946013d8
  { 1, 186, 188, 3072, 3075 }, // 243 tc_46d6c3e0
  { 1, 204, 206, 3075, 3079 }, // 244 tc_87adc037
  { 1, 184, 186, 3079, 3082 }, // 245 tc_649072c2
  { 1, 184, 186, 3082, 3086 }, // 246 tc_b091f1c6
  { 1, 188, 190, 3086, 3089 }, // 247 tc_0b04c6c7
  { 1, 188, 190, 3089, 3093 }, // 248 tc_660769f1
  { 1, 206, 209, 3093, 3096 }, // 249 tc_a28f32b5
  { 1, 206, 209, 3096, 3100 }, // 250 tc_7d68d5c2
  { 1, 209, 212, 3100, 3103 }, // 251 tc_7095ecba
  { 1, 209, 212, 3103, 3107 }, // 252 tc_a69eeee1
  { 1, 212, 214, 0, 0 }, // 253 tc_1381a97c
  { 1, 212, 214, 3107, 3108 }, // 254 tc_e3f68a46
  { 1, 214, 216, 3108, 3111 }, // 255 tc_f1de44ef
  { 1, 204, 206, 3111, 3116 }, // 256 tc_9d1dc972
  { 1, 214, 216, 3116, 3120 }, // 257 tc_90bcc1db
  { 1, 216, 219, 3120, 3123 }, // 258 tc_cd94bfe0
  { 1, 216, 219, 3123, 3127 }, // 259 tc_15fdf750
  { 1, 188, 190, 3127, 3131 }, // 260 tc_1ad8a370
  { 1, 188, 190, 3131, 3136 }, // 261 tc_e675c45a
  { 1, 219, 221, 3136, 3139 }, // 262 tc_61bf7c03
  { 1, 219, 221, 3139, 3143 }, // 263 tc_933f2b39
  { 1, 219, 221, 3143, 3147 }, // 264 tc_26a377fe
  { 1, 219, 221, 3147, 3152 }, // 265 tc_2d4051cd
  { 1, 186, 188, 3152, 3155 }, // 266 tc_6e7fa133
  { 1, 164, 166, 3155, 3158 }, // 267 tc_8772086c
  { 1, 166, 168, 3158, 3160 }, // 268 tc_b4416217
  { 1, 173, 176, 3160, 3164 }, // 269 tc_9f363d21
  { 1, 173, 176, 3164, 3169 }, // 270 tc_8e420e4d
  { 1, 221, 224, 3169, 3173 }, // 271 tc_7273323b
  { 1, 221, 224, 3173, 3178 }, // 272 tc_58d21193
  { 1, 166, 168, 3178, 3182 }, // 273 tc_71646d06
  { 1, 204, 206, 3182, 3184 }, // 274 tc_04da405a
  { 1, 204, 206, 3184, 3187 }, // 275 tc_2c745bb8
  { 1, 212, 214, 3187, 3188 }, // 276 tc_b28e51aa
  { 1, 212, 214, 3188, 3190 }, // 277 tc_767c4e9d
  { 1, 224, 226, 3190, 3192 }, // 278 tc_e699ae41
  { 1, 224, 226, 3192, 3195 }, // 279 tc_a0dbea28
  { 1, 224, 226, 3195, 3198 }, // 280 tc_dd5b0695
  { 1, 224, 226, 3198, 3202 }, // 281 tc_3ad719fb
  { 1, 159, 160, 0, 0 }, // 282 tc_77f94a5e
  { 1, 163, 164, 0, 0 }, // 283 tc_55255f2b
  { 1, 159, 160, 3202, 3203 }, // 284 tc_b1ae5f67
  { 1, 159, 160, 3203, 3205 }, // 285 tc_2237d952
  { 1, 161, 162, 3205, 3206 }, // 286 tc_0ba0d5da
  { 1, 161, 162, 0, 0 }, // 287 tc_9b34f5e0
  { 1, 163, 164, 3206, 3207 }, // 288 tc_2c3e17fc
  { 1, 159, 160, 3207, 3209 }, // 289 tc_a3070909
  { 1, 163, 164, 3209, 3210 }, // 290 tc_d7718fbe
  { 1, 163, 164, 3210, 3212 }, // 291 tc_28e55c6f
  { 1, 159, 160, 3212, 3213 }, // 292 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 293 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV66[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 226, 227, 3213, 3216 }, // 1 tc_01d44cb2
  { 1, 227, 228, 3216, 3219 }, // 2 PSEUDO
  { 1, 227, 228, 3219, 3221 }, // 3 tc_c57d9f39
  { 1, 227, 228, 3221, 3225 }, // 4 tc_1c2c7a4a
  { 1, 227, 228, 3225, 3229 }, // 5 tc_442395f3
  { 1, 227, 228, 3229, 3232 }, // 6 tc_713b66bf
  { 1, 227, 228, 3232, 3235 }, // 7 tc_86173609
  { 1, 226, 227, 3235, 3238 }, // 8 tc_5da50c4b
  { 1, 226, 227, 3238, 3241 }, // 9 tc_4a55d03c
  { 1, 227, 228, 3241, 3244 }, // 10 tc_d33e5eee
  { 1, 226, 227, 3244, 3247 }, // 11 tc_651cbe02
  { 1, 228, 229, 3247, 3250 }, // 12 DUPLEX
  { 1, 229, 230, 3250, 3251 }, // 13 tc_ENDLOOP
  { 1, 227, 228, 0, 0 }, // 14 tc_23708a21
  { 1, 227, 228, 3251, 3253 }, // 15 tc_56a124a7
  { 1, 230, 231, 3253, 3255 }, // 16 tc_2f573607
  { 1, 230, 231, 3255, 3258 }, // 17 tc_53c851ab
  { 1, 231, 232, 3258, 3262 }, // 18 tc_fedb7e19
  { 1, 231, 232, 3262, 3265 }, // 19 tc_4222e6bf
  { 1, 231, 232, 3265, 3269 }, // 20 tc_075c8dd8
  { 1, 228, 229, 3269, 3272 }, // 21 tc_9bcfb2ee
  { 1, 228, 229, 3272, 3275 }, // 22 tc_158aa3f7
  { 1, 228, 229, 3275, 3278 }, // 23 tc_df5d53f9
  { 1, 228, 229, 3278, 3281 }, // 24 tc_14ab4f41
  { 1, 228, 229, 3281, 3282 }, // 25 tc_f38f92e1
  { 1, 228, 229, 3282, 3283 }, // 26 tc_1981450d
  { 1, 231, 232, 3283, 3285 }, // 27 tc_e9170fb7
  { 1, 228, 229, 3285, 3287 }, // 28 tc_40d64c94
  { 1, 231, 232, 3287, 3289 }, // 29 LD_tc_ld_SLOT01
  { 1, 226, 227, 3289, 3292 }, // 30 tc_38382228
  { 1, 226, 227, 3292, 3295 }, // 31 tc_c21d7447
  { 1, 226, 227, 3295, 3299 }, // 32 tc_7f8ae742
  { 1, 232, 233, 3299, 3302 }, // 33 tc_5a4b5e58
  { 1, 232, 233, 3302, 3306 }, // 34 tc_197dce51
  { 1, 226, 227, 3306, 3307 }, // 35 tc_44fffc58
  { 1, 231, 232, 3307, 3312 }, // 36 tc_5ceb2f9e
  { 1, 233, 235, 3312, 3315 }, // 37 tc_56c4f9fe
  { 1, 231, 232, 3315, 3320 }, // 38 tc_b4dc7630
  { 1, 231, 232, 3320, 3324 }, // 39 tc_a2b365d2
  { 1, 230, 231, 3324, 3325 }, // 40 tc_60e324ff
  { 1, 235, 237, 3325, 3328 }, // 41 tc_db5555f3
  { 1, 237, 240, 3328, 3331 }, // 42 tc_c0749f3c
  { 1, 240, 242, 3331, 3334 }, // 43 PSEUDOM
  { 1, 233, 235, 3334, 3337 }, // 44 tc_3aacf4a8
  { 1, 242, 245, 3337, 3340 }, // 45 tc_c5dba46e
  { 1, 235, 237, 3340, 3344 }, // 46 tc_af25efd9
  { 1, 226, 227, 3344, 3347 }, // 47 tc_0dfac0a7
  { 1, 231, 232, 3347, 3351 }, // 48 tc_8035e91f
  { 1, 228, 229, 3351, 3355 }, // 49 tc_011e0e9d
  { 1, 231, 232, 3355, 3358 }, // 50 tc_ae5babd7
  { 1, 228, 229, 3358, 3361 }, // 51 tc_5deb5e47
  { 1, 226, 227, 3361, 3366 }, // 52 tc_bb831a7c
  { 1, 228, 229, 3366, 3370 }, // 53 tc_92240447
  { 1, 231, 232, 3370, 3373 }, // 54 tc_7c31e19a
  { 1, 231, 232, 3373, 3377 }, // 55 tc_d03278fd
  { 1, 231, 232, 3377, 3381 }, // 56 tc_65cbd974
  { 1, 228, 229, 3381, 3384 }, // 57 tc_934753bb
  { 1, 231, 232, 3384, 3387 }, // 58 ST_tc_st_SLOT01
  { 1, 245, 247, 3387, 3391 }, // 59 CVI_VA
  { 1, 233, 235, 3391, 3393 }, // 60 tc_0ec46cf9
  { 1, 235, 237, 3393, 3394 }, // 61 tc_718b5c53
  { 1, 247, 251, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 228, 229, 3394, 3395 }, // 63 tc_d45ba9cd
  { 1, 227, 228, 3395, 3398 }, // 64 tc_388f9897
  { 1, 227, 228, 3398, 3400 }, // 65 tc_9124c04f
  { 1, 227, 228, 3400, 3403 }, // 66 tc_4ac61d92
  { 1, 231, 232, 3403, 3405 }, // 67 tc_aee6250c
  { 1, 231, 232, 3405, 3408 }, // 68 tc_eed07714
  { 1, 231, 232, 3408, 3411 }, // 69 tc_74a42bda
  { 1, 231, 232, 3411, 3414 }, // 70 tc_a9edeffa
  { 1, 231, 232, 3414, 3417 }, // 71 tc_838c4d7a
  { 1, 226, 227, 3417, 3419 }, // 72 tc_d61dfdc3
  { 1, 226, 227, 3419, 3422 }, // 73 tc_8a825db2
  { 1, 226, 227, 3422, 3425 }, // 74 tc_f34c1c21
  { 1, 227, 228, 3425, 3428 }, // 75 tc_95a33176
  { 1, 226, 227, 3428, 3430 }, // 76 tc_9f6cd987
  { 1, 227, 228, 0, 0 }, // 77 tc_b837298f
  { 1, 227, 228, 3430, 3433 }, // 78 tc_8b5bd4f5
  { 1, 227, 228, 3433, 3436 }, // 79 tc_84a7500d
  { 1, 232, 233, 3436, 3438 }, // 80 tc_7476d766
  { 1, 232, 233, 3438, 3440 }, // 81 tc_49fdfd4b
  { 1, 226, 227, 3440, 3443 }, // 82 tc_f098b237
  { 1, 226, 227, 3443, 3446 }, // 83 tc_20131976
  { 1, 226, 227, 3446, 3451 }, // 84 tc_1d41f8b7
  { 1, 226, 227, 3451, 3454 }, // 85 tc_a1297125
  { 1, 227, 228, 3454, 3455 }, // 86 tc_112d30d6
  { 1, 226, 227, 3455, 3458 }, // 87 tc_d68dca5c
  { 1, 226, 227, 3458, 3462 }, // 88 tc_788b1d09
  { 1, 226, 227, 3462, 3467 }, // 89 tc_38e0bae9
  { 1, 226, 227, 3467, 3470 }, // 90 tc_407e96f9
  { 1, 226, 227, 3470, 3474 }, // 91 tc_7401744f
  { 1, 226, 227, 3474, 3477 }, // 92 tc_9b3c0462
  { 1, 226, 227, 3477, 3479 }, // 93 tc_151bf368
  { 1, 227, 228, 3479, 3482 }, // 94 tc_9c52f549
  { 1, 226, 227, 3482, 3484 }, // 95 tc_55b33fda
  { 1, 226, 227, 3484, 3488 }, // 96 tc_6fc5dbea
  { 1, 232, 233, 3488, 3490 }, // 97 tc_3edca78f
  { 1, 226, 227, 3490, 3494 }, // 98 tc_a7a13fac
  { 1, 226, 227, 3494, 3496 }, // 99 tc_9783714b
  { 1, 226, 227, 3496, 3499 }, // 100 tc_f0e8e832
  { 1, 226, 227, 3499, 3501 }, // 101 tc_65279839
  { 1, 226, 227, 3501, 3505 }, // 102 tc_0a195f2c
  { 1, 226, 227, 3505, 3509 }, // 103 tc_01e1be3b
  { 1, 226, 227, 3509, 3512 }, // 104 tc_556f6577
  { 1, 226, 227, 3512, 3515 }, // 105 tc_02fe1c65
  { 1, 226, 227, 3515, 3519 }, // 106 tc_9e72dc89
  { 1, 226, 227, 3519, 3524 }, // 107 tc_9edb7c77
  { 1, 226, 227, 3524, 3527 }, // 108 tc_7f7f45f5
  { 1, 226, 227, 3527, 3530 }, // 109 tc_c20701f0
  { 1, 226, 227, 3530, 3534 }, // 110 tc_f7569068
  { 1, 232, 233, 3534, 3536 }, // 111 tc_fae9dfa5
  { 1, 232, 233, 3536, 3538 }, // 112 tc_6ae3426b
  { 1, 226, 227, 3538, 3540 }, // 113 tc_69bfb303
  { 1, 230, 231, 3540, 3541 }, // 114 tc_362b0be2
  { 1, 230, 231, 3541, 3543 }, // 115 tc_dc51281d
  { 1, 227, 228, 3543, 3544 }, // 116 tc_decdde8a
  { 1, 227, 228, 3544, 3546 }, // 117 tc_eeda4109
  { 1, 227, 228, 3546, 3548 }, // 118 tc_711c805f
  { 1, 230, 231, 3548, 3550 }, // 119 tc_ed03645c
  { 1, 230, 231, 3550, 3552 }, // 120 tc_42ff66ba
  { 1, 232, 233, 3552, 3554 }, // 121 tc_57a55b54
  { 1, 232, 233, 3554, 3556 }, // 122 tc_1248597c
  { 1, 232, 233, 3556, 3558 }, // 123 tc_9406230a
  { 1, 230, 231, 3558, 3559 }, // 124 tc_d57d649c
  { 1, 232, 233, 3559, 3561 }, // 125 tc_4abdbdc6
  { 1, 232, 233, 3561, 3563 }, // 126 tc_6d861a95
  { 1, 230, 231, 3563, 3564 }, // 127 tc_45f9d1be
  { 1, 228, 229, 3564, 3567 }, // 128 tc_24e109c7
  { 1, 227, 228, 3567, 3570 }, // 129 tc_9e27f2f9
  { 1, 228, 229, 3570, 3573 }, // 130 tc_f6e2aff9
  { 1, 227, 228, 3573, 3576 }, // 131 tc_24f426ab
  { 1, 228, 229, 3576, 3579 }, // 132 tc_975a4e54
  { 1, 226, 227, 3579, 3582 }, // 133 tc_5502c366
  { 1, 228, 229, 3582, 3584 }, // 134 tc_7b9187d3
  { 1, 227, 228, 3584, 3586 }, // 135 tc_f999c66e
  { 1, 231, 232, 3586, 3591 }, // 136 tc_1c7522a8
  { 1, 231, 232, 3591, 3597 }, // 137 tc_76bb5435
  { 1, 231, 232, 3597, 3599 }, // 138 tc_8a6d0d94
  { 1, 228, 229, 3599, 3601 }, // 139 tc_2471c1c8
  { 1, 228, 229, 3601, 3603 }, // 140 tc_64b00d8a
  { 1, 231, 232, 3603, 3608 }, // 141 tc_5f2afaf7
  { 1, 231, 232, 3608, 3612 }, // 142 tc_ac65613f
  { 1, 231, 232, 3612, 3617 }, // 143 tc_a32e03e7
  { 1, 231, 232, 3617, 3620 }, // 144 tc_822c3c68
  { 1, 231, 232, 3620, 3624 }, // 145 tc_abfd9a6d
  { 1, 231, 232, 3624, 3628 }, // 146 tc_bf2ffc0f
  { 1, 231, 232, 3628, 3631 }, // 147 tc_7c6d32e4
  { 1, 231, 232, 3631, 3636 }, // 148 tc_45791fb8
  { 1, 231, 232, 3636, 3641 }, // 149 tc_b7c4062a
  { 1, 231, 232, 3641, 3644 }, // 150 tc_5944960d
  { 1, 226, 227, 3644, 3648 }, // 151 tc_2c13e7f5
  { 1, 226, 227, 3648, 3652 }, // 152 tc_a154b476
  { 1, 226, 227, 3652, 3656 }, // 153 tc_a4e22bbd
  { 1, 226, 227, 3656, 3660 }, // 154 tc_503ce0f3
  { 1, 231, 232, 3660, 3662 }, // 155 tc_0655b949
  { 1, 228, 229, 3662, 3664 }, // 156 tc_6e20402a
  { 1, 228, 229, 3664, 3665 }, // 157 tc_db96aa6b
  { 1, 226, 227, 3665, 3667 }, // 158 tc_a7bdb22c
  { 1, 226, 227, 3667, 3670 }, // 159 tc_db596beb
  { 1, 226, 227, 3670, 3673 }, // 160 tc_a08b630b
  { 1, 226, 227, 3673, 3676 }, // 161 tc_1fcb8495
  { 1, 231, 232, 3676, 3681 }, // 162 tc_9edefe01
  { 1, 231, 232, 3681, 3686 }, // 163 tc_449acf79
  { 1, 228, 229, 3686, 3691 }, // 164 tc_ce59038e
  { 1, 228, 229, 3691, 3696 }, // 165 tc_f529831b
  { 1, 228, 229, 3696, 3701 }, // 166 tc_addc37a8
  { 1, 228, 229, 3701, 3704 }, // 167 tc_6f42bc60
  { 1, 228, 229, 3704, 3706 }, // 168 tc_7af3a37e
  { 1, 226, 227, 3706, 3708 }, // 169 tc_e3d699e3
  { 1, 231, 232, 3708, 3711 }, // 170 tc_ba9255a6
  { 1, 231, 232, 3711, 3716 }, // 171 tc_1fe4ab69
  { 1, 231, 232, 3716, 3719 }, // 172 tc_bb07f2c5
  { 1, 231, 232, 3719, 3724 }, // 173 tc_8e82e8ca
  { 1, 228, 229, 3724, 3727 }, // 174 tc_cfa0e29b
  { 1, 228, 229, 3727, 3732 }, // 175 tc_0a6c20ae
  { 1, 228, 229, 3732, 3735 }, // 176 tc_0fac1eb8
  { 1, 228, 229, 3735, 3740 }, // 177 tc_829d8a86
  { 1, 231, 232, 3740, 3744 }, // 178 tc_280f7fe1
  { 1, 231, 232, 3744, 3748 }, // 179 tc_887d1bb7
  { 1, 228, 229, 3748, 3752 }, // 180 tc_96ef76ef
  { 1, 228, 229, 3752, 3756 }, // 181 tc_55a9a350
  { 1, 226, 227, 3756, 3760 }, // 182 tc_f0cdeccf
  { 1, 226, 227, 3760, 3765 }, // 183 tc_a38c45dc
  { 1, 226, 227, 3765, 3767 }, // 184 tc_d3632d88
  { 1, 226, 227, 3767, 3771 }, // 185 tc_5e4cf0e8
  { 1, 226, 227, 3771, 3773 }, // 186 tc_ef921005
  { 1, 231, 232, 3773, 3776 }, // 187 tc_5b347363
  { 1, 231, 232, 3776, 3778 }, // 188 tc_3d14a17b
  { 1, 231, 232, 3778, 3779 }, // 189 tc_3fbf1042
  { 1, 231, 232, 3779, 3780 }, // 190 tc_63567288
  { 1, 231, 232, 3780, 3782 }, // 191 tc_59a7822c
  { 1, 231, 232, 0, 0 }, // 192 tc_937dd41c
  { 1, 228, 229, 0, 0 }, // 193 tc_a4ee89db
  { 1, 228, 229, 0, 0 }, // 194 tc_c818ff7f
  { 1, 228, 229, 3782, 3783 }, // 195 tc_1242dc2a
  { 1, 231, 232, 3783, 3785 }, // 196 tc_44d5a428
  { 1, 251, 253, 3785, 3788 }, // 197 tc_540c3da3
  { 1, 253, 255, 3788, 3790 }, // 198 tc_c4edf264
  { 1, 255, 257, 3790, 3792 }, // 199 tc_5bf8afbb
  { 1, 257, 259, 3792, 3796 }, // 200 tc_2b4c548e
  { 1, 257, 259, 3796, 3801 }, // 201 tc_bb599486
  { 1, 259, 263, 3801, 3804 }, // 202 tc_a7e6707d
  { 1, 259, 263, 3804, 3808 }, // 203 tc_3c56e5ce
  { 1, 237, 240, 3808, 3812 }, // 204 tc_abe8c3b2
  { 1, 237, 240, 3812, 3817 }, // 205 tc_453fe68d
  { 1, 237, 240, 3817, 3821 }, // 206 tc_1ba8a0cd
  { 1, 263, 265, 3821, 3824 }, // 207 tc_52447ecc
  { 1, 263, 265, 3824, 3828 }, // 208 tc_3904b926
  { 1, 263, 265, 3828, 3833 }, // 209 tc_b9db8205
  { 1, 263, 265, 3833, 3837 }, // 210 tc_663c80a7
  { 1, 265, 269, 3837, 3840 }, // 211 tc_f21e8abb
  { 1, 265, 269, 3840, 3844 }, // 212 tc_131f1c81
  { 1, 265, 269, 3844, 3849 }, // 213 tc_c7039829
  { 1, 265, 269, 3849, 3853 }, // 214 tc_e2d2e9e5
  { 1, 269, 271, 3853, 3856 }, // 215 tc_ab23f776
  { 1, 269, 271, 3856, 3860 }, // 216 tc_7177e272
  { 1, 269, 271, 3860, 3865 }, // 217 tc_e99d4c2e
  { 1, 269, 271, 3865, 3869 }, // 218 tc_6942b6e0
  { 1, 242, 245, 3869, 3873 }, // 219 tc_a02a10a8
  { 1, 242, 245, 3873, 3878 }, // 220 tc_54a0dc47
  { 1, 242, 245, 3878, 3882 }, // 221 tc_447d9895
  { 1, 242, 245, 3882, 3887 }, // 222 tc_191381c1
  { 1, 242, 245, 3887, 3891 }, // 223 tc_3e2aaafc
  { 1, 269, 271, 3891, 3893 }, // 224 tc_3ce09744
  { 1, 269, 271, 3893, 3896 }, // 225 tc_20a4bbec
  { 1, 253, 255, 3896, 3899 }, // 226 tc_c127de3a
  { 1, 233, 235, 3899, 3903 }, // 227 tc_257f6f7c
  { 1, 233, 235, 3903, 3908 }, // 228 tc_7e6a3e89
  { 1, 233, 235, 3908, 3912 }, // 229 tc_e35c1e93
  { 1, 271, 273, 3912, 3915 }, // 230 tc_05ca8cfd
  { 1, 257, 259, 3915, 3918 }, // 231 tc_d8287c14
  { 1, 257, 259, 3918, 3922 }, // 232 tc_08a4f1b6
  { 1, 255, 257, 3922, 3926 }, // 233 tc_56e64202
  { 1, 253, 255, 3926, 3929 }, // 234 tc_ac4046bc
  { 1, 253, 255, 3929, 3933 }, // 235 tc_2e8f5f6e
  { 1, 271, 273, 3933, 3936 }, // 236 tc_7417e785
  { 1, 271, 273, 3936, 3940 }, // 237 tc_309dbb4f
  { 1, 273, 275, 3940, 3944 }, // 238 tc_df80eeb0
  { 1, 271, 273, 3944, 3948 }, // 239 tc_16ff9ef8
  { 1, 271, 273, 3948, 3950 }, // 240 tc_51d0ecc3
  { 1, 273, 275, 3950, 3955 }, // 241 tc_561aaa58
  { 1, 255, 257, 3955, 3957 }, // 242 tc_946013d8
  { 1, 255, 257, 3957, 3960 }, // 243 tc_46d6c3e0
  { 1, 273, 275, 3960, 3964 }, // 244 tc_87adc037
  { 1, 253, 255, 3964, 3967 }, // 245 tc_649072c2
  { 1, 253, 255, 3967, 3971 }, // 246 tc_b091f1c6
  { 1, 257, 259, 3971, 3974 }, // 247 tc_0b04c6c7
  { 1, 257, 259, 3974, 3978 }, // 248 tc_660769f1
  { 1, 275, 278, 3978, 3981 }, // 249 tc_a28f32b5
  { 1, 275, 278, 3981, 3985 }, // 250 tc_7d68d5c2
  { 1, 278, 281, 3985, 3988 }, // 251 tc_7095ecba
  { 1, 278, 281, 3988, 3992 }, // 252 tc_a69eeee1
  { 1, 281, 283, 0, 0 }, // 253 tc_1381a97c
  { 1, 281, 283, 3992, 3993 }, // 254 tc_e3f68a46
  { 1, 283, 285, 3993, 3996 }, // 255 tc_f1de44ef
  { 1, 273, 275, 3996, 4001 }, // 256 tc_9d1dc972
  { 1, 283, 285, 4001, 4005 }, // 257 tc_90bcc1db
  { 1, 285, 288, 4005, 4008 }, // 258 tc_cd94bfe0
  { 1, 285, 288, 4008, 4012 }, // 259 tc_15fdf750
  { 1, 257, 259, 4012, 4016 }, // 260 tc_1ad8a370
  { 1, 257, 259, 4016, 4021 }, // 261 tc_e675c45a
  { 1, 288, 290, 4021, 4024 }, // 262 tc_61bf7c03
  { 1, 288, 290, 4024, 4028 }, // 263 tc_933f2b39
  { 1, 288, 290, 4028, 4032 }, // 264 tc_26a377fe
  { 1, 288, 290, 4032, 4037 }, // 265 tc_2d4051cd
  { 1, 255, 257, 4037, 4040 }, // 266 tc_6e7fa133
  { 1, 233, 235, 4040, 4043 }, // 267 tc_8772086c
  { 1, 235, 237, 4043, 4045 }, // 268 tc_b4416217
  { 1, 242, 245, 4045, 4049 }, // 269 tc_9f363d21
  { 1, 242, 245, 4049, 4054 }, // 270 tc_8e420e4d
  { 1, 290, 293, 4054, 4058 }, // 271 tc_7273323b
  { 1, 290, 293, 4058, 4063 }, // 272 tc_58d21193
  { 1, 235, 237, 4063, 4067 }, // 273 tc_71646d06
  { 1, 273, 275, 4067, 4069 }, // 274 tc_04da405a
  { 1, 273, 275, 4069, 4072 }, // 275 tc_2c745bb8
  { 1, 281, 283, 4072, 4073 }, // 276 tc_b28e51aa
  { 1, 281, 283, 4073, 4075 }, // 277 tc_767c4e9d
  { 1, 293, 295, 4075, 4077 }, // 278 tc_e699ae41
  { 1, 293, 295, 4077, 4080 }, // 279 tc_a0dbea28
  { 1, 293, 295, 4080, 4083 }, // 280 tc_dd5b0695
  { 1, 293, 295, 4083, 4087 }, // 281 tc_3ad719fb
  { 1, 228, 229, 0, 0 }, // 282 tc_77f94a5e
  { 1, 232, 233, 0, 0 }, // 283 tc_55255f2b
  { 1, 228, 229, 4087, 4088 }, // 284 tc_b1ae5f67
  { 1, 228, 229, 4088, 4090 }, // 285 tc_2237d952
  { 1, 230, 231, 4090, 4091 }, // 286 tc_0ba0d5da
  { 1, 230, 231, 0, 0 }, // 287 tc_9b34f5e0
  { 1, 232, 233, 4091, 4092 }, // 288 tc_2c3e17fc
  { 1, 228, 229, 4092, 4094 }, // 289 tc_a3070909
  { 1, 232, 233, 4094, 4095 }, // 290 tc_d7718fbe
  { 1, 232, 233, 4095, 4097 }, // 291 tc_28e55c6f
  { 1, 228, 229, 4097, 4098 }, // 292 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 293 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV67[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 295, 296, 4098, 4101 }, // 1 tc_01d44cb2
  { 1, 296, 297, 4101, 4104 }, // 2 PSEUDO
  { 1, 296, 297, 4104, 4106 }, // 3 tc_c57d9f39
  { 1, 296, 297, 4106, 4110 }, // 4 tc_1c2c7a4a
  { 1, 296, 297, 4110, 4114 }, // 5 tc_442395f3
  { 1, 296, 297, 4114, 4117 }, // 6 tc_713b66bf
  { 1, 296, 297, 4117, 4120 }, // 7 tc_86173609
  { 1, 295, 296, 4120, 4123 }, // 8 tc_5da50c4b
  { 1, 295, 296, 4123, 4126 }, // 9 tc_4a55d03c
  { 1, 296, 297, 4126, 4129 }, // 10 tc_d33e5eee
  { 1, 295, 296, 4129, 4132 }, // 11 tc_651cbe02
  { 1, 297, 298, 4132, 4135 }, // 12 DUPLEX
  { 1, 298, 299, 4135, 4136 }, // 13 tc_ENDLOOP
  { 1, 296, 297, 0, 0 }, // 14 tc_23708a21
  { 1, 296, 297, 4136, 4138 }, // 15 tc_56a124a7
  { 1, 299, 300, 4138, 4140 }, // 16 tc_2f573607
  { 1, 299, 300, 4140, 4143 }, // 17 tc_53c851ab
  { 1, 300, 301, 4143, 4147 }, // 18 tc_fedb7e19
  { 1, 300, 301, 4147, 4150 }, // 19 tc_4222e6bf
  { 1, 300, 301, 4150, 4154 }, // 20 tc_075c8dd8
  { 1, 297, 298, 4154, 4157 }, // 21 tc_9bcfb2ee
  { 1, 297, 298, 4157, 4160 }, // 22 tc_158aa3f7
  { 1, 297, 298, 4160, 4163 }, // 23 tc_df5d53f9
  { 1, 297, 298, 4163, 4166 }, // 24 tc_14ab4f41
  { 1, 297, 298, 4166, 4167 }, // 25 tc_f38f92e1
  { 1, 297, 298, 4167, 4168 }, // 26 tc_1981450d
  { 1, 300, 301, 4168, 4170 }, // 27 tc_e9170fb7
  { 1, 297, 298, 4170, 4172 }, // 28 tc_40d64c94
  { 1, 300, 301, 4172, 4174 }, // 29 LD_tc_ld_SLOT01
  { 1, 295, 296, 4174, 4177 }, // 30 tc_38382228
  { 1, 295, 296, 4177, 4180 }, // 31 tc_c21d7447
  { 1, 295, 296, 4180, 4184 }, // 32 tc_7f8ae742
  { 1, 301, 302, 4184, 4187 }, // 33 tc_5a4b5e58
  { 1, 301, 302, 4187, 4191 }, // 34 tc_197dce51
  { 1, 295, 296, 4191, 4192 }, // 35 tc_44fffc58
  { 1, 300, 301, 4192, 4197 }, // 36 tc_5ceb2f9e
  { 1, 302, 304, 4197, 4200 }, // 37 tc_56c4f9fe
  { 1, 300, 301, 4200, 4205 }, // 38 tc_b4dc7630
  { 1, 300, 301, 4205, 4209 }, // 39 tc_a2b365d2
  { 1, 299, 300, 4209, 4210 }, // 40 tc_60e324ff
  { 1, 304, 306, 4210, 4213 }, // 41 tc_db5555f3
  { 1, 306, 309, 4213, 4216 }, // 42 tc_c0749f3c
  { 1, 309, 311, 4216, 4219 }, // 43 PSEUDOM
  { 1, 302, 304, 4219, 4222 }, // 44 tc_3aacf4a8
  { 1, 311, 314, 4222, 4225 }, // 45 tc_c5dba46e
  { 1, 304, 306, 4225, 4229 }, // 46 tc_af25efd9
  { 1, 295, 296, 4229, 4232 }, // 47 tc_0dfac0a7
  { 1, 300, 301, 4232, 4236 }, // 48 tc_8035e91f
  { 1, 297, 298, 4236, 4240 }, // 49 tc_011e0e9d
  { 1, 300, 301, 4240, 4243 }, // 50 tc_ae5babd7
  { 1, 297, 298, 4243, 4246 }, // 51 tc_5deb5e47
  { 1, 295, 296, 4246, 4251 }, // 52 tc_bb831a7c
  { 1, 297, 298, 4251, 4255 }, // 53 tc_92240447
  { 1, 300, 301, 4255, 4258 }, // 54 tc_7c31e19a
  { 1, 300, 301, 4258, 4262 }, // 55 tc_d03278fd
  { 1, 300, 301, 4262, 4266 }, // 56 tc_65cbd974
  { 1, 297, 298, 4266, 4269 }, // 57 tc_934753bb
  { 1, 300, 301, 4269, 4272 }, // 58 ST_tc_st_SLOT01
  { 1, 314, 316, 4272, 4276 }, // 59 CVI_VA
  { 1, 302, 304, 4276, 4278 }, // 60 tc_0ec46cf9
  { 1, 304, 306, 4278, 4279 }, // 61 tc_718b5c53
  { 1, 316, 320, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 297, 298, 4279, 4280 }, // 63 tc_d45ba9cd
  { 1, 296, 297, 4280, 4283 }, // 64 tc_388f9897
  { 1, 296, 297, 4283, 4285 }, // 65 tc_9124c04f
  { 1, 296, 297, 4285, 4288 }, // 66 tc_4ac61d92
  { 1, 300, 301, 4288, 4290 }, // 67 tc_aee6250c
  { 1, 300, 301, 4290, 4293 }, // 68 tc_eed07714
  { 1, 300, 301, 4293, 4296 }, // 69 tc_74a42bda
  { 1, 300, 301, 4296, 4299 }, // 70 tc_a9edeffa
  { 1, 300, 301, 4299, 4302 }, // 71 tc_838c4d7a
  { 1, 295, 296, 4302, 4304 }, // 72 tc_d61dfdc3
  { 1, 295, 296, 4304, 4307 }, // 73 tc_8a825db2
  { 1, 295, 296, 4307, 4310 }, // 74 tc_f34c1c21
  { 1, 296, 297, 4310, 4313 }, // 75 tc_95a33176
  { 1, 295, 296, 4313, 4315 }, // 76 tc_9f6cd987
  { 1, 296, 297, 0, 0 }, // 77 tc_b837298f
  { 1, 296, 297, 4315, 4318 }, // 78 tc_8b5bd4f5
  { 1, 296, 297, 4318, 4321 }, // 79 tc_84a7500d
  { 1, 301, 302, 4321, 4323 }, // 80 tc_7476d766
  { 1, 301, 302, 4323, 4325 }, // 81 tc_49fdfd4b
  { 1, 295, 296, 4325, 4328 }, // 82 tc_f098b237
  { 1, 295, 296, 4328, 4331 }, // 83 tc_20131976
  { 1, 295, 296, 4331, 4336 }, // 84 tc_1d41f8b7
  { 1, 295, 296, 4336, 4339 }, // 85 tc_a1297125
  { 1, 296, 297, 4339, 4340 }, // 86 tc_112d30d6
  { 1, 295, 296, 4340, 4343 }, // 87 tc_d68dca5c
  { 1, 295, 296, 4343, 4347 }, // 88 tc_788b1d09
  { 1, 295, 296, 4347, 4352 }, // 89 tc_38e0bae9
  { 1, 295, 296, 4352, 4355 }, // 90 tc_407e96f9
  { 1, 295, 296, 4355, 4359 }, // 91 tc_7401744f
  { 1, 295, 296, 4359, 4362 }, // 92 tc_9b3c0462
  { 1, 295, 296, 4362, 4364 }, // 93 tc_151bf368
  { 1, 296, 297, 4364, 4367 }, // 94 tc_9c52f549
  { 1, 295, 296, 4367, 4369 }, // 95 tc_55b33fda
  { 1, 295, 296, 4369, 4373 }, // 96 tc_6fc5dbea
  { 1, 301, 302, 4373, 4375 }, // 97 tc_3edca78f
  { 1, 295, 296, 4375, 4379 }, // 98 tc_a7a13fac
  { 1, 295, 296, 4379, 4381 }, // 99 tc_9783714b
  { 1, 295, 296, 4381, 4384 }, // 100 tc_f0e8e832
  { 1, 295, 296, 4384, 4386 }, // 101 tc_65279839
  { 1, 295, 296, 4386, 4390 }, // 102 tc_0a195f2c
  { 1, 295, 296, 4390, 4394 }, // 103 tc_01e1be3b
  { 1, 295, 296, 4394, 4397 }, // 104 tc_556f6577
  { 1, 295, 296, 4397, 4400 }, // 105 tc_02fe1c65
  { 1, 295, 296, 4400, 4404 }, // 106 tc_9e72dc89
  { 1, 295, 296, 4404, 4409 }, // 107 tc_9edb7c77
  { 1, 295, 296, 4409, 4412 }, // 108 tc_7f7f45f5
  { 1, 295, 296, 4412, 4415 }, // 109 tc_c20701f0
  { 1, 295, 296, 4415, 4419 }, // 110 tc_f7569068
  { 1, 301, 302, 4419, 4421 }, // 111 tc_fae9dfa5
  { 1, 301, 302, 4421, 4423 }, // 112 tc_6ae3426b
  { 1, 295, 296, 4423, 4425 }, // 113 tc_69bfb303
  { 1, 299, 300, 4425, 4426 }, // 114 tc_362b0be2
  { 1, 299, 300, 4426, 4428 }, // 115 tc_dc51281d
  { 1, 296, 297, 4428, 4429 }, // 116 tc_decdde8a
  { 1, 296, 297, 4429, 4431 }, // 117 tc_eeda4109
  { 1, 296, 297, 4431, 4433 }, // 118 tc_711c805f
  { 1, 299, 300, 4433, 4435 }, // 119 tc_ed03645c
  { 1, 299, 300, 4435, 4437 }, // 120 tc_42ff66ba
  { 1, 301, 302, 4437, 4439 }, // 121 tc_57a55b54
  { 1, 301, 302, 4439, 4441 }, // 122 tc_1248597c
  { 1, 301, 302, 4441, 4443 }, // 123 tc_9406230a
  { 1, 299, 300, 4443, 4444 }, // 124 tc_d57d649c
  { 1, 301, 302, 4444, 4446 }, // 125 tc_4abdbdc6
  { 1, 301, 302, 4446, 4448 }, // 126 tc_6d861a95
  { 1, 299, 300, 4448, 4449 }, // 127 tc_45f9d1be
  { 1, 297, 298, 4449, 4452 }, // 128 tc_24e109c7
  { 1, 296, 297, 4452, 4455 }, // 129 tc_9e27f2f9
  { 1, 297, 298, 4455, 4458 }, // 130 tc_f6e2aff9
  { 1, 296, 297, 4458, 4461 }, // 131 tc_24f426ab
  { 1, 297, 298, 4461, 4464 }, // 132 tc_975a4e54
  { 1, 295, 296, 4464, 4467 }, // 133 tc_5502c366
  { 1, 297, 298, 4467, 4469 }, // 134 tc_7b9187d3
  { 1, 296, 297, 4469, 4471 }, // 135 tc_f999c66e
  { 1, 300, 301, 4471, 4476 }, // 136 tc_1c7522a8
  { 1, 300, 301, 4476, 4482 }, // 137 tc_76bb5435
  { 1, 300, 301, 4482, 4484 }, // 138 tc_8a6d0d94
  { 1, 297, 298, 4484, 4486 }, // 139 tc_2471c1c8
  { 1, 297, 298, 4486, 4488 }, // 140 tc_64b00d8a
  { 1, 300, 301, 4488, 4493 }, // 141 tc_5f2afaf7
  { 1, 300, 301, 4493, 4497 }, // 142 tc_ac65613f
  { 1, 300, 301, 4497, 4502 }, // 143 tc_a32e03e7
  { 1, 300, 301, 4502, 4505 }, // 144 tc_822c3c68
  { 1, 300, 301, 4505, 4509 }, // 145 tc_abfd9a6d
  { 1, 300, 301, 4509, 4513 }, // 146 tc_bf2ffc0f
  { 1, 300, 301, 4513, 4516 }, // 147 tc_7c6d32e4
  { 1, 300, 301, 4516, 4521 }, // 148 tc_45791fb8
  { 1, 300, 301, 4521, 4526 }, // 149 tc_b7c4062a
  { 1, 300, 301, 4526, 4529 }, // 150 tc_5944960d
  { 1, 295, 296, 4529, 4533 }, // 151 tc_2c13e7f5
  { 1, 295, 296, 4533, 4537 }, // 152 tc_a154b476
  { 1, 295, 296, 4537, 4541 }, // 153 tc_a4e22bbd
  { 1, 295, 296, 4541, 4545 }, // 154 tc_503ce0f3
  { 1, 300, 301, 4545, 4547 }, // 155 tc_0655b949
  { 1, 297, 298, 4547, 4549 }, // 156 tc_6e20402a
  { 1, 297, 298, 4549, 4550 }, // 157 tc_db96aa6b
  { 1, 295, 296, 4550, 4552 }, // 158 tc_a7bdb22c
  { 1, 295, 296, 4552, 4555 }, // 159 tc_db596beb
  { 1, 295, 296, 4555, 4558 }, // 160 tc_a08b630b
  { 1, 295, 296, 4558, 4561 }, // 161 tc_1fcb8495
  { 1, 300, 301, 4561, 4566 }, // 162 tc_9edefe01
  { 1, 300, 301, 4566, 4571 }, // 163 tc_449acf79
  { 1, 297, 298, 4571, 4576 }, // 164 tc_ce59038e
  { 1, 297, 298, 4576, 4581 }, // 165 tc_f529831b
  { 1, 297, 298, 4581, 4586 }, // 166 tc_addc37a8
  { 1, 297, 298, 4586, 4589 }, // 167 tc_6f42bc60
  { 1, 297, 298, 4589, 4591 }, // 168 tc_7af3a37e
  { 1, 295, 296, 4591, 4593 }, // 169 tc_e3d699e3
  { 1, 300, 301, 4593, 4596 }, // 170 tc_ba9255a6
  { 1, 300, 301, 4596, 4601 }, // 171 tc_1fe4ab69
  { 1, 300, 301, 4601, 4604 }, // 172 tc_bb07f2c5
  { 1, 300, 301, 4604, 4609 }, // 173 tc_8e82e8ca
  { 1, 297, 298, 4609, 4612 }, // 174 tc_cfa0e29b
  { 1, 297, 298, 4612, 4617 }, // 175 tc_0a6c20ae
  { 1, 297, 298, 4617, 4620 }, // 176 tc_0fac1eb8
  { 1, 297, 298, 4620, 4625 }, // 177 tc_829d8a86
  { 1, 300, 301, 4625, 4629 }, // 178 tc_280f7fe1
  { 1, 300, 301, 4629, 4633 }, // 179 tc_887d1bb7
  { 1, 297, 298, 4633, 4637 }, // 180 tc_96ef76ef
  { 1, 297, 298, 4637, 4641 }, // 181 tc_55a9a350
  { 1, 295, 296, 4641, 4645 }, // 182 tc_f0cdeccf
  { 1, 295, 296, 4645, 4650 }, // 183 tc_a38c45dc
  { 1, 295, 296, 4650, 4652 }, // 184 tc_d3632d88
  { 1, 295, 296, 4652, 4656 }, // 185 tc_5e4cf0e8
  { 1, 295, 296, 4656, 4658 }, // 186 tc_ef921005
  { 1, 300, 301, 4658, 4661 }, // 187 tc_5b347363
  { 1, 300, 301, 4661, 4663 }, // 188 tc_3d14a17b
  { 1, 300, 301, 4663, 4664 }, // 189 tc_3fbf1042
  { 1, 300, 301, 4664, 4665 }, // 190 tc_63567288
  { 1, 300, 301, 4665, 4667 }, // 191 tc_59a7822c
  { 1, 300, 301, 0, 0 }, // 192 tc_937dd41c
  { 1, 297, 298, 0, 0 }, // 193 tc_a4ee89db
  { 1, 297, 298, 0, 0 }, // 194 tc_c818ff7f
  { 1, 297, 298, 4667, 4668 }, // 195 tc_1242dc2a
  { 1, 300, 301, 4668, 4670 }, // 196 tc_44d5a428
  { 1, 320, 322, 4670, 4673 }, // 197 tc_540c3da3
  { 1, 322, 324, 4673, 4675 }, // 198 tc_c4edf264
  { 1, 324, 326, 4675, 4677 }, // 199 tc_5bf8afbb
  { 1, 326, 328, 4677, 4681 }, // 200 tc_2b4c548e
  { 1, 326, 328, 4681, 4686 }, // 201 tc_bb599486
  { 1, 328, 332, 4686, 4689 }, // 202 tc_a7e6707d
  { 1, 328, 332, 4689, 4693 }, // 203 tc_3c56e5ce
  { 1, 306, 309, 4693, 4697 }, // 204 tc_abe8c3b2
  { 1, 306, 309, 4697, 4702 }, // 205 tc_453fe68d
  { 1, 306, 309, 4702, 4706 }, // 206 tc_1ba8a0cd
  { 1, 332, 334, 4706, 4709 }, // 207 tc_52447ecc
  { 1, 332, 334, 4709, 4713 }, // 208 tc_3904b926
  { 1, 332, 334, 4713, 4718 }, // 209 tc_b9db8205
  { 1, 332, 334, 4718, 4722 }, // 210 tc_663c80a7
  { 1, 334, 338, 4722, 4725 }, // 211 tc_f21e8abb
  { 1, 334, 338, 4725, 4729 }, // 212 tc_131f1c81
  { 1, 334, 338, 4729, 4734 }, // 213 tc_c7039829
  { 1, 334, 338, 4734, 4738 }, // 214 tc_e2d2e9e5
  { 1, 338, 340, 4738, 4741 }, // 215 tc_ab23f776
  { 1, 338, 340, 4741, 4745 }, // 216 tc_7177e272
  { 1, 338, 340, 4745, 4750 }, // 217 tc_e99d4c2e
  { 1, 338, 340, 4750, 4754 }, // 218 tc_6942b6e0
  { 1, 311, 314, 4754, 4758 }, // 219 tc_a02a10a8
  { 1, 311, 314, 4758, 4763 }, // 220 tc_54a0dc47
  { 1, 311, 314, 4763, 4767 }, // 221 tc_447d9895
  { 1, 311, 314, 4767, 4772 }, // 222 tc_191381c1
  { 1, 311, 314, 4772, 4776 }, // 223 tc_3e2aaafc
  { 1, 338, 340, 4776, 4778 }, // 224 tc_3ce09744
  { 1, 338, 340, 4778, 4781 }, // 225 tc_20a4bbec
  { 1, 322, 324, 4781, 4784 }, // 226 tc_c127de3a
  { 1, 302, 304, 4784, 4788 }, // 227 tc_257f6f7c
  { 1, 302, 304, 4788, 4793 }, // 228 tc_7e6a3e89
  { 1, 302, 304, 4793, 4797 }, // 229 tc_e35c1e93
  { 1, 340, 342, 4797, 4800 }, // 230 tc_05ca8cfd
  { 1, 326, 328, 4800, 4803 }, // 231 tc_d8287c14
  { 1, 326, 328, 4803, 4807 }, // 232 tc_08a4f1b6
  { 1, 324, 326, 4807, 4811 }, // 233 tc_56e64202
  { 1, 322, 324, 4811, 4814 }, // 234 tc_ac4046bc
  { 1, 322, 324, 4814, 4818 }, // 235 tc_2e8f5f6e
  { 1, 340, 342, 4818, 4821 }, // 236 tc_7417e785
  { 1, 340, 342, 4821, 4825 }, // 237 tc_309dbb4f
  { 1, 342, 344, 4825, 4829 }, // 238 tc_df80eeb0
  { 1, 340, 342, 4829, 4833 }, // 239 tc_16ff9ef8
  { 1, 340, 342, 4833, 4835 }, // 240 tc_51d0ecc3
  { 1, 342, 344, 4835, 4840 }, // 241 tc_561aaa58
  { 1, 324, 326, 4840, 4842 }, // 242 tc_946013d8
  { 1, 324, 326, 4842, 4845 }, // 243 tc_46d6c3e0
  { 1, 342, 344, 4845, 4849 }, // 244 tc_87adc037
  { 1, 322, 324, 4849, 4852 }, // 245 tc_649072c2
  { 1, 322, 324, 4852, 4856 }, // 246 tc_b091f1c6
  { 1, 326, 328, 4856, 4859 }, // 247 tc_0b04c6c7
  { 1, 326, 328, 4859, 4863 }, // 248 tc_660769f1
  { 1, 344, 347, 4863, 4866 }, // 249 tc_a28f32b5
  { 1, 344, 347, 4866, 4870 }, // 250 tc_7d68d5c2
  { 1, 347, 350, 4870, 4873 }, // 251 tc_7095ecba
  { 1, 347, 350, 4873, 4877 }, // 252 tc_a69eeee1
  { 1, 350, 352, 0, 0 }, // 253 tc_1381a97c
  { 1, 350, 352, 4877, 4878 }, // 254 tc_e3f68a46
  { 1, 352, 354, 4878, 4881 }, // 255 tc_f1de44ef
  { 1, 342, 344, 4881, 4886 }, // 256 tc_9d1dc972
  { 1, 352, 354, 4886, 4890 }, // 257 tc_90bcc1db
  { 1, 354, 357, 4890, 4893 }, // 258 tc_cd94bfe0
  { 1, 354, 357, 4893, 4897 }, // 259 tc_15fdf750
  { 1, 326, 328, 4897, 4901 }, // 260 tc_1ad8a370
  { 1, 326, 328, 4901, 4906 }, // 261 tc_e675c45a
  { 1, 357, 359, 4906, 4909 }, // 262 tc_61bf7c03
  { 1, 357, 359, 4909, 4913 }, // 263 tc_933f2b39
  { 1, 357, 359, 4913, 4917 }, // 264 tc_26a377fe
  { 1, 357, 359, 4917, 4922 }, // 265 tc_2d4051cd
  { 1, 324, 326, 4922, 4925 }, // 266 tc_6e7fa133
  { 1, 302, 304, 4925, 4928 }, // 267 tc_8772086c
  { 1, 304, 306, 4928, 4930 }, // 268 tc_b4416217
  { 1, 311, 314, 4930, 4934 }, // 269 tc_9f363d21
  { 1, 311, 314, 4934, 4939 }, // 270 tc_8e420e4d
  { 1, 359, 362, 4939, 4943 }, // 271 tc_7273323b
  { 1, 359, 362, 4943, 4948 }, // 272 tc_58d21193
  { 1, 304, 306, 4948, 4952 }, // 273 tc_71646d06
  { 1, 342, 344, 4952, 4954 }, // 274 tc_04da405a
  { 1, 342, 344, 4954, 4957 }, // 275 tc_2c745bb8
  { 1, 350, 352, 4957, 4958 }, // 276 tc_b28e51aa
  { 1, 350, 352, 4958, 4960 }, // 277 tc_767c4e9d
  { 1, 362, 364, 4960, 4962 }, // 278 tc_e699ae41
  { 1, 362, 364, 4962, 4965 }, // 279 tc_a0dbea28
  { 1, 362, 364, 4965, 4968 }, // 280 tc_dd5b0695
  { 1, 362, 364, 4968, 4972 }, // 281 tc_3ad719fb
  { 1, 297, 298, 0, 0 }, // 282 tc_77f94a5e
  { 1, 301, 302, 0, 0 }, // 283 tc_55255f2b
  { 1, 297, 298, 4972, 4973 }, // 284 tc_b1ae5f67
  { 1, 297, 298, 4973, 4975 }, // 285 tc_2237d952
  { 1, 299, 300, 4975, 4976 }, // 286 tc_0ba0d5da
  { 1, 299, 300, 0, 0 }, // 287 tc_9b34f5e0
  { 1, 301, 302, 4976, 4977 }, // 288 tc_2c3e17fc
  { 1, 297, 298, 4977, 4979 }, // 289 tc_a3070909
  { 1, 301, 302, 4979, 4980 }, // 290 tc_d7718fbe
  { 1, 301, 302, 4980, 4982 }, // 291 tc_28e55c6f
  { 1, 297, 298, 4982, 4983 }, // 292 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 293 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV67T[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 364, 365, 4983, 4986 }, // 1 tc_01d44cb2
  { 1, 365, 366, 4986, 4989 }, // 2 PSEUDO
  { 1, 365, 366, 4989, 4991 }, // 3 tc_c57d9f39
  { 1, 365, 366, 4991, 4995 }, // 4 tc_1c2c7a4a
  { 1, 365, 366, 4995, 4999 }, // 5 tc_442395f3
  { 1, 365, 366, 4999, 5002 }, // 6 tc_713b66bf
  { 1, 365, 366, 5002, 5005 }, // 7 tc_86173609
  { 1, 364, 365, 5005, 5008 }, // 8 tc_5da50c4b
  { 1, 364, 365, 5008, 5011 }, // 9 tc_4a55d03c
  { 1, 365, 366, 5011, 5014 }, // 10 tc_d33e5eee
  { 1, 364, 365, 5014, 5017 }, // 11 tc_651cbe02
  { 1, 366, 367, 5017, 5020 }, // 12 DUPLEX
  { 1, 367, 368, 5020, 5021 }, // 13 tc_ENDLOOP
  { 1, 365, 366, 0, 0 }, // 14 tc_23708a21
  { 1, 365, 366, 5021, 5023 }, // 15 tc_56a124a7
  { 1, 368, 369, 5023, 5025 }, // 16 tc_2f573607
  { 1, 368, 369, 5025, 5028 }, // 17 tc_53c851ab
  { 1, 366, 367, 5028, 5032 }, // 18 tc_fedb7e19
  { 1, 366, 367, 5032, 5035 }, // 19 tc_4222e6bf
  { 1, 366, 367, 5035, 5039 }, // 20 tc_075c8dd8
  { 1, 366, 367, 5039, 5042 }, // 21 tc_9bcfb2ee
  { 1, 366, 367, 5042, 5045 }, // 22 tc_158aa3f7
  { 1, 366, 367, 5045, 5048 }, // 23 tc_df5d53f9
  { 1, 366, 367, 5048, 5051 }, // 24 tc_14ab4f41
  { 1, 366, 367, 5051, 5052 }, // 25 tc_f38f92e1
  { 1, 366, 367, 5052, 5053 }, // 26 tc_1981450d
  { 1, 366, 367, 5053, 5055 }, // 27 tc_e9170fb7
  { 1, 366, 367, 5055, 5057 }, // 28 tc_40d64c94
  { 1, 366, 367, 5057, 5060 }, // 29 LD_tc_ld_SLOT01
  { 1, 369, 370, 5060, 5063 }, // 30 tc_38382228
  { 1, 369, 370, 5063, 5066 }, // 31 tc_c21d7447
  { 1, 369, 370, 5066, 5070 }, // 32 tc_7f8ae742
  { 1, 369, 370, 5070, 5073 }, // 33 tc_5a4b5e58
  { 1, 369, 370, 5073, 5077 }, // 34 tc_197dce51
  { 1, 364, 365, 5077, 5078 }, // 35 tc_44fffc58
  { 1, 366, 367, 5078, 5083 }, // 36 tc_5ceb2f9e
  { 1, 370, 372, 5083, 5086 }, // 37 tc_56c4f9fe
  { 1, 366, 367, 5086, 5091 }, // 38 tc_b4dc7630
  { 1, 366, 367, 5091, 5095 }, // 39 tc_a2b365d2
  { 1, 368, 369, 5095, 5096 }, // 40 tc_60e324ff
  { 1, 372, 374, 5096, 5099 }, // 41 tc_db5555f3
  { 1, 374, 377, 5099, 5102 }, // 42 tc_c0749f3c
  { 1, 377, 379, 5102, 5105 }, // 43 PSEUDOM
  { 1, 370, 372, 5105, 5108 }, // 44 tc_3aacf4a8
  { 1, 379, 382, 5108, 5111 }, // 45 tc_c5dba46e
  { 1, 372, 374, 5111, 5115 }, // 46 tc_af25efd9
  { 1, 364, 365, 5115, 5118 }, // 47 tc_0dfac0a7
  { 1, 366, 367, 5118, 5122 }, // 48 tc_8035e91f
  { 1, 366, 367, 5122, 5126 }, // 49 tc_011e0e9d
  { 1, 366, 367, 5126, 5129 }, // 50 tc_ae5babd7
  { 1, 366, 367, 5129, 5132 }, // 51 tc_5deb5e47
  { 1, 369, 370, 5132, 5137 }, // 52 tc_bb831a7c
  { 1, 366, 367, 5137, 5141 }, // 53 tc_92240447
  { 1, 366, 367, 5141, 5144 }, // 54 tc_7c31e19a
  { 1, 366, 367, 5144, 5148 }, // 55 tc_d03278fd
  { 1, 366, 367, 5148, 5152 }, // 56 tc_65cbd974
  { 1, 366, 367, 5152, 5155 }, // 57 tc_934753bb
  { 1, 366, 367, 5155, 5159 }, // 58 ST_tc_st_SLOT01
  { 1, 382, 384, 5159, 5163 }, // 59 CVI_VA
  { 1, 370, 372, 5163, 5165 }, // 60 tc_0ec46cf9
  { 1, 372, 374, 5165, 5166 }, // 61 tc_718b5c53
  { 1, 384, 388, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 366, 367, 5166, 5167 }, // 63 tc_d45ba9cd
  { 1, 388, 389, 5167, 5170 }, // 64 tc_388f9897
  { 1, 388, 389, 5170, 5172 }, // 65 tc_9124c04f
  { 1, 388, 389, 5172, 5175 }, // 66 tc_4ac61d92
  { 1, 389, 390, 5175, 5177 }, // 67 tc_aee6250c
  { 1, 389, 390, 5177, 5180 }, // 68 tc_eed07714
  { 1, 389, 390, 5180, 5183 }, // 69 tc_74a42bda
  { 1, 389, 390, 5183, 5186 }, // 70 tc_a9edeffa
  { 1, 389, 390, 5186, 5189 }, // 71 tc_838c4d7a
  { 1, 364, 365, 5189, 5191 }, // 72 tc_d61dfdc3
  { 1, 364, 365, 5191, 5194 }, // 73 tc_8a825db2
  { 1, 364, 365, 5194, 5197 }, // 74 tc_f34c1c21
  { 1, 365, 366, 5197, 5200 }, // 75 tc_95a33176
  { 1, 364, 365, 5200, 5202 }, // 76 tc_9f6cd987
  { 1, 365, 366, 0, 0 }, // 77 tc_b837298f
  { 1, 365, 366, 5202, 5205 }, // 78 tc_8b5bd4f5
  { 1, 365, 366, 5205, 5208 }, // 79 tc_84a7500d
  { 1, 369, 370, 5208, 5210 }, // 80 tc_7476d766
  { 1, 369, 370, 5210, 5212 }, // 81 tc_49fdfd4b
  { 1, 364, 365, 5212, 5215 }, // 82 tc_f098b237
  { 1, 364, 365, 5215, 5218 }, // 83 tc_20131976
  { 1, 364, 365, 5218, 5223 }, // 84 tc_1d41f8b7
  { 1, 364, 365, 5223, 5226 }, // 85 tc_a1297125
  { 1, 365, 366, 5226, 5227 }, // 86 tc_112d30d6
  { 1, 369, 370, 5227, 5230 }, // 87 tc_d68dca5c
  { 1, 369, 370, 5230, 5234 }, // 88 tc_788b1d09
  { 1, 369, 370, 5234, 5239 }, // 89 tc_38e0bae9
  { 1, 364, 365, 5239, 5242 }, // 90 tc_407e96f9
  { 1, 369, 370, 5242, 5246 }, // 91 tc_7401744f
  { 1, 364, 365, 5246, 5249 }, // 92 tc_9b3c0462
  { 1, 364, 365, 5249, 5251 }, // 93 tc_151bf368
  { 1, 365, 366, 5251, 5254 }, // 94 tc_9c52f549
  { 1, 364, 365, 5254, 5256 }, // 95 tc_55b33fda
  { 1, 364, 365, 5256, 5260 }, // 96 tc_6fc5dbea
  { 1, 369, 370, 5260, 5262 }, // 97 tc_3edca78f
  { 1, 364, 365, 5262, 5266 }, // 98 tc_a7a13fac
  { 1, 369, 370, 5266, 5268 }, // 99 tc_9783714b
  { 1, 369, 370, 5268, 5271 }, // 100 tc_f0e8e832
  { 1, 364, 365, 5271, 5273 }, // 101 tc_65279839
  { 1, 369, 370, 5273, 5277 }, // 102 tc_0a195f2c
  { 1, 369, 370, 5277, 5281 }, // 103 tc_01e1be3b
  { 1, 369, 370, 5281, 5284 }, // 104 tc_556f6577
  { 1, 369, 370, 5284, 5287 }, // 105 tc_02fe1c65
  { 1, 369, 370, 5287, 5291 }, // 106 tc_9e72dc89
  { 1, 369, 370, 5291, 5296 }, // 107 tc_9edb7c77
  { 1, 369, 370, 5296, 5299 }, // 108 tc_7f7f45f5
  { 1, 364, 365, 5299, 5302 }, // 109 tc_c20701f0
  { 1, 369, 370, 5302, 5306 }, // 110 tc_f7569068
  { 1, 369, 370, 5306, 5308 }, // 111 tc_fae9dfa5
  { 1, 369, 370, 5308, 5310 }, // 112 tc_6ae3426b
  { 1, 364, 365, 5310, 5312 }, // 113 tc_69bfb303
  { 1, 368, 369, 5312, 5313 }, // 114 tc_362b0be2
  { 1, 368, 369, 5313, 5315 }, // 115 tc_dc51281d
  { 1, 365, 366, 5315, 5316 }, // 116 tc_decdde8a
  { 1, 365, 366, 5316, 5318 }, // 117 tc_eeda4109
  { 1, 365, 366, 5318, 5320 }, // 118 tc_711c805f
  { 1, 368, 369, 5320, 5322 }, // 119 tc_ed03645c
  { 1, 368, 369, 5322, 5324 }, // 120 tc_42ff66ba
  { 1, 369, 370, 5324, 5326 }, // 121 tc_57a55b54
  { 1, 369, 370, 5326, 5328 }, // 122 tc_1248597c
  { 1, 369, 370, 5328, 5330 }, // 123 tc_9406230a
  { 1, 368, 369, 5330, 5331 }, // 124 tc_d57d649c
  { 1, 369, 370, 5331, 5333 }, // 125 tc_4abdbdc6
  { 1, 369, 370, 5333, 5335 }, // 126 tc_6d861a95
  { 1, 368, 369, 5335, 5336 }, // 127 tc_45f9d1be
  { 1, 366, 367, 5336, 5339 }, // 128 tc_24e109c7
  { 1, 365, 366, 5339, 5342 }, // 129 tc_9e27f2f9
  { 1, 366, 367, 5342, 5345 }, // 130 tc_f6e2aff9
  { 1, 365, 366, 5345, 5348 }, // 131 tc_24f426ab
  { 1, 366, 367, 5348, 5351 }, // 132 tc_975a4e54
  { 1, 364, 365, 5351, 5354 }, // 133 tc_5502c366
  { 1, 366, 367, 5354, 5356 }, // 134 tc_7b9187d3
  { 1, 365, 366, 5356, 5358 }, // 135 tc_f999c66e
  { 1, 366, 367, 5358, 5363 }, // 136 tc_1c7522a8
  { 1, 366, 367, 5363, 5369 }, // 137 tc_76bb5435
  { 1, 366, 367, 5369, 5371 }, // 138 tc_8a6d0d94
  { 1, 366, 367, 5371, 5373 }, // 139 tc_2471c1c8
  { 1, 366, 367, 5373, 5375 }, // 140 tc_64b00d8a
  { 1, 366, 367, 5375, 5380 }, // 141 tc_5f2afaf7
  { 1, 366, 367, 5380, 5384 }, // 142 tc_ac65613f
  { 1, 366, 367, 5384, 5389 }, // 143 tc_a32e03e7
  { 1, 366, 367, 5389, 5392 }, // 144 tc_822c3c68
  { 1, 366, 367, 5392, 5396 }, // 145 tc_abfd9a6d
  { 1, 366, 367, 5396, 5400 }, // 146 tc_bf2ffc0f
  { 1, 366, 367, 5400, 5403 }, // 147 tc_7c6d32e4
  { 1, 366, 367, 5403, 5408 }, // 148 tc_45791fb8
  { 1, 366, 367, 5408, 5413 }, // 149 tc_b7c4062a
  { 1, 366, 367, 5413, 5416 }, // 150 tc_5944960d
  { 1, 369, 370, 5416, 5420 }, // 151 tc_2c13e7f5
  { 1, 369, 370, 5420, 5424 }, // 152 tc_a154b476
  { 1, 369, 370, 5424, 5428 }, // 153 tc_a4e22bbd
  { 1, 369, 370, 5428, 5432 }, // 154 tc_503ce0f3
  { 1, 366, 367, 5432, 5434 }, // 155 tc_0655b949
  { 1, 366, 367, 5434, 5436 }, // 156 tc_6e20402a
  { 1, 366, 367, 5436, 5437 }, // 157 tc_db96aa6b
  { 1, 369, 370, 5437, 5439 }, // 158 tc_a7bdb22c
  { 1, 369, 370, 5439, 5442 }, // 159 tc_db596beb
  { 1, 369, 370, 5442, 5445 }, // 160 tc_a08b630b
  { 1, 369, 370, 5445, 5448 }, // 161 tc_1fcb8495
  { 1, 366, 367, 5448, 5453 }, // 162 tc_9edefe01
  { 1, 366, 367, 5453, 5458 }, // 163 tc_449acf79
  { 1, 366, 367, 5458, 5463 }, // 164 tc_ce59038e
  { 1, 366, 367, 5463, 5468 }, // 165 tc_f529831b
  { 1, 366, 367, 5468, 5473 }, // 166 tc_addc37a8
  { 1, 366, 367, 5473, 5476 }, // 167 tc_6f42bc60
  { 1, 366, 367, 5476, 5478 }, // 168 tc_7af3a37e
  { 1, 364, 365, 5478, 5480 }, // 169 tc_e3d699e3
  { 1, 366, 367, 5480, 5483 }, // 170 tc_ba9255a6
  { 1, 366, 367, 5483, 5488 }, // 171 tc_1fe4ab69
  { 1, 366, 367, 5488, 5491 }, // 172 tc_bb07f2c5
  { 1, 366, 367, 5491, 5496 }, // 173 tc_8e82e8ca
  { 1, 366, 367, 5496, 5499 }, // 174 tc_cfa0e29b
  { 1, 366, 367, 5499, 5504 }, // 175 tc_0a6c20ae
  { 1, 366, 367, 5504, 5507 }, // 176 tc_0fac1eb8
  { 1, 366, 367, 5507, 5512 }, // 177 tc_829d8a86
  { 1, 366, 367, 5512, 5516 }, // 178 tc_280f7fe1
  { 1, 366, 367, 5516, 5520 }, // 179 tc_887d1bb7
  { 1, 366, 367, 5520, 5524 }, // 180 tc_96ef76ef
  { 1, 366, 367, 5524, 5528 }, // 181 tc_55a9a350
  { 1, 369, 370, 5528, 5532 }, // 182 tc_f0cdeccf
  { 1, 369, 370, 5532, 5537 }, // 183 tc_a38c45dc
  { 1, 369, 370, 5537, 5539 }, // 184 tc_d3632d88
  { 1, 369, 370, 5539, 5543 }, // 185 tc_5e4cf0e8
  { 1, 364, 365, 5543, 5545 }, // 186 tc_ef921005
  { 1, 366, 367, 5545, 5548 }, // 187 tc_5b347363
  { 1, 366, 367, 5548, 5550 }, // 188 tc_3d14a17b
  { 1, 366, 367, 5550, 5551 }, // 189 tc_3fbf1042
  { 1, 366, 367, 5551, 5552 }, // 190 tc_63567288
  { 1, 366, 367, 5552, 5554 }, // 191 tc_59a7822c
  { 1, 366, 367, 0, 0 }, // 192 tc_937dd41c
  { 1, 366, 367, 0, 0 }, // 193 tc_a4ee89db
  { 1, 366, 367, 0, 0 }, // 194 tc_c818ff7f
  { 1, 366, 367, 5554, 5555 }, // 195 tc_1242dc2a
  { 1, 366, 367, 5555, 5557 }, // 196 tc_44d5a428
  { 1, 390, 392, 5557, 5560 }, // 197 tc_540c3da3
  { 1, 392, 394, 5560, 5562 }, // 198 tc_c4edf264
  { 1, 394, 396, 5562, 5564 }, // 199 tc_5bf8afbb
  { 1, 396, 398, 5564, 5568 }, // 200 tc_2b4c548e
  { 1, 396, 398, 5568, 5573 }, // 201 tc_bb599486
  { 1, 398, 402, 5573, 5576 }, // 202 tc_a7e6707d
  { 1, 398, 402, 5576, 5580 }, // 203 tc_3c56e5ce
  { 1, 374, 377, 5580, 5584 }, // 204 tc_abe8c3b2
  { 1, 374, 377, 5584, 5589 }, // 205 tc_453fe68d
  { 1, 374, 377, 5589, 5593 }, // 206 tc_1ba8a0cd
  { 1, 402, 404, 5593, 5596 }, // 207 tc_52447ecc
  { 1, 402, 404, 5596, 5600 }, // 208 tc_3904b926
  { 1, 402, 404, 5600, 5605 }, // 209 tc_b9db8205
  { 1, 402, 404, 5605, 5609 }, // 210 tc_663c80a7
  { 1, 404, 408, 5609, 5612 }, // 211 tc_f21e8abb
  { 1, 404, 408, 5612, 5616 }, // 212 tc_131f1c81
  { 1, 404, 408, 5616, 5621 }, // 213 tc_c7039829
  { 1, 404, 408, 5621, 5625 }, // 214 tc_e2d2e9e5
  { 1, 408, 410, 5625, 5628 }, // 215 tc_ab23f776
  { 1, 408, 410, 5628, 5632 }, // 216 tc_7177e272
  { 1, 408, 410, 5632, 5637 }, // 217 tc_e99d4c2e
  { 1, 408, 410, 5637, 5641 }, // 218 tc_6942b6e0
  { 1, 379, 382, 5641, 5645 }, // 219 tc_a02a10a8
  { 1, 379, 382, 5645, 5650 }, // 220 tc_54a0dc47
  { 1, 379, 382, 5650, 5654 }, // 221 tc_447d9895
  { 1, 379, 382, 5654, 5659 }, // 222 tc_191381c1
  { 1, 379, 382, 5659, 5663 }, // 223 tc_3e2aaafc
  { 1, 408, 410, 5663, 5665 }, // 224 tc_3ce09744
  { 1, 408, 410, 5665, 5668 }, // 225 tc_20a4bbec
  { 1, 392, 394, 5668, 5671 }, // 226 tc_c127de3a
  { 1, 370, 372, 5671, 5675 }, // 227 tc_257f6f7c
  { 1, 370, 372, 5675, 5680 }, // 228 tc_7e6a3e89
  { 1, 370, 372, 5680, 5684 }, // 229 tc_e35c1e93
  { 1, 410, 412, 5684, 5687 }, // 230 tc_05ca8cfd
  { 1, 396, 398, 5687, 5690 }, // 231 tc_d8287c14
  { 1, 396, 398, 5690, 5694 }, // 232 tc_08a4f1b6
  { 1, 394, 396, 5694, 5698 }, // 233 tc_56e64202
  { 1, 392, 394, 5698, 5701 }, // 234 tc_ac4046bc
  { 1, 392, 394, 5701, 5705 }, // 235 tc_2e8f5f6e
  { 1, 410, 412, 5705, 5708 }, // 236 tc_7417e785
  { 1, 410, 412, 5708, 5712 }, // 237 tc_309dbb4f
  { 1, 412, 414, 5712, 5716 }, // 238 tc_df80eeb0
  { 1, 410, 412, 5716, 5720 }, // 239 tc_16ff9ef8
  { 1, 410, 412, 5720, 5722 }, // 240 tc_51d0ecc3
  { 1, 412, 414, 5722, 5727 }, // 241 tc_561aaa58
  { 1, 394, 396, 5727, 5729 }, // 242 tc_946013d8
  { 1, 394, 396, 5729, 5732 }, // 243 tc_46d6c3e0
  { 1, 412, 414, 5732, 5736 }, // 244 tc_87adc037
  { 1, 392, 394, 5736, 5739 }, // 245 tc_649072c2
  { 1, 392, 394, 5739, 5743 }, // 246 tc_b091f1c6
  { 1, 396, 398, 5743, 5746 }, // 247 tc_0b04c6c7
  { 1, 396, 398, 5746, 5750 }, // 248 tc_660769f1
  { 1, 414, 417, 5750, 5753 }, // 249 tc_a28f32b5
  { 1, 414, 417, 5753, 5757 }, // 250 tc_7d68d5c2
  { 1, 417, 420, 5757, 5760 }, // 251 tc_7095ecba
  { 1, 417, 420, 5760, 5764 }, // 252 tc_a69eeee1
  { 1, 420, 422, 0, 0 }, // 253 tc_1381a97c
  { 1, 420, 422, 5764, 5765 }, // 254 tc_e3f68a46
  { 1, 422, 424, 5765, 5768 }, // 255 tc_f1de44ef
  { 1, 412, 414, 5768, 5773 }, // 256 tc_9d1dc972
  { 1, 422, 424, 5773, 5777 }, // 257 tc_90bcc1db
  { 1, 424, 427, 5777, 5780 }, // 258 tc_cd94bfe0
  { 1, 424, 427, 5780, 5784 }, // 259 tc_15fdf750
  { 1, 396, 398, 5784, 5788 }, // 260 tc_1ad8a370
  { 1, 396, 398, 5788, 5793 }, // 261 tc_e675c45a
  { 1, 427, 429, 5793, 5796 }, // 262 tc_61bf7c03
  { 1, 427, 429, 5796, 5800 }, // 263 tc_933f2b39
  { 1, 427, 429, 5800, 5804 }, // 264 tc_26a377fe
  { 1, 427, 429, 5804, 5809 }, // 265 tc_2d4051cd
  { 1, 394, 396, 5809, 5812 }, // 266 tc_6e7fa133
  { 1, 370, 372, 5812, 5815 }, // 267 tc_8772086c
  { 1, 372, 374, 5815, 5817 }, // 268 tc_b4416217
  { 1, 379, 382, 5817, 5821 }, // 269 tc_9f363d21
  { 1, 379, 382, 5821, 5826 }, // 270 tc_8e420e4d
  { 1, 429, 432, 5826, 5830 }, // 271 tc_7273323b
  { 1, 429, 432, 5830, 5835 }, // 272 tc_58d21193
  { 1, 372, 374, 5835, 5839 }, // 273 tc_71646d06
  { 1, 412, 414, 5839, 5841 }, // 274 tc_04da405a
  { 1, 412, 414, 5841, 5844 }, // 275 tc_2c745bb8
  { 1, 420, 422, 5844, 5845 }, // 276 tc_b28e51aa
  { 1, 420, 422, 5845, 5847 }, // 277 tc_767c4e9d
  { 1, 432, 434, 5847, 5849 }, // 278 tc_e699ae41
  { 1, 432, 434, 5849, 5852 }, // 279 tc_a0dbea28
  { 1, 432, 434, 5852, 5855 }, // 280 tc_dd5b0695
  { 1, 432, 434, 5855, 5859 }, // 281 tc_3ad719fb
  { 1, 366, 367, 0, 0 }, // 282 tc_77f94a5e
  { 1, 369, 370, 0, 0 }, // 283 tc_55255f2b
  { 1, 366, 367, 5859, 5860 }, // 284 tc_b1ae5f67
  { 1, 366, 367, 5860, 5862 }, // 285 tc_2237d952
  { 1, 368, 369, 5862, 5863 }, // 286 tc_0ba0d5da
  { 1, 368, 369, 0, 0 }, // 287 tc_9b34f5e0
  { 1, 369, 370, 5863, 5864 }, // 288 tc_2c3e17fc
  { 1, 366, 367, 5864, 5866 }, // 289 tc_a3070909
  { 1, 369, 370, 5866, 5867 }, // 290 tc_d7718fbe
  { 1, 369, 370, 5867, 5869 }, // 291 tc_28e55c6f
  { 1, 366, 367, 5869, 5870 }, // 292 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 293 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV68[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 434, 435, 5870, 5873 }, // 1 tc_01d44cb2
  { 1, 435, 436, 5873, 5876 }, // 2 PSEUDO
  { 1, 435, 436, 5876, 5878 }, // 3 tc_c57d9f39
  { 1, 435, 436, 5878, 5882 }, // 4 tc_1c2c7a4a
  { 1, 435, 436, 5882, 5886 }, // 5 tc_442395f3
  { 1, 435, 436, 5886, 5889 }, // 6 tc_713b66bf
  { 1, 435, 436, 5889, 5892 }, // 7 tc_86173609
  { 1, 434, 435, 5892, 5895 }, // 8 tc_5da50c4b
  { 1, 434, 435, 5895, 5898 }, // 9 tc_4a55d03c
  { 1, 435, 436, 5898, 5901 }, // 10 tc_d33e5eee
  { 1, 434, 435, 5901, 5904 }, // 11 tc_651cbe02
  { 1, 436, 437, 5904, 5907 }, // 12 DUPLEX
  { 1, 437, 438, 5907, 5908 }, // 13 tc_ENDLOOP
  { 1, 435, 436, 0, 0 }, // 14 tc_23708a21
  { 1, 435, 436, 5908, 5910 }, // 15 tc_56a124a7
  { 1, 438, 439, 5910, 5912 }, // 16 tc_2f573607
  { 1, 438, 439, 5912, 5915 }, // 17 tc_53c851ab
  { 1, 439, 440, 5915, 5919 }, // 18 tc_fedb7e19
  { 1, 439, 440, 5919, 5922 }, // 19 tc_4222e6bf
  { 1, 439, 440, 5922, 5926 }, // 20 tc_075c8dd8
  { 1, 436, 437, 5926, 5929 }, // 21 tc_9bcfb2ee
  { 1, 436, 437, 5929, 5932 }, // 22 tc_158aa3f7
  { 1, 436, 437, 5932, 5935 }, // 23 tc_df5d53f9
  { 1, 436, 437, 5935, 5938 }, // 24 tc_14ab4f41
  { 1, 436, 437, 5938, 5939 }, // 25 tc_f38f92e1
  { 1, 436, 437, 5939, 5940 }, // 26 tc_1981450d
  { 1, 439, 440, 5940, 5942 }, // 27 tc_e9170fb7
  { 1, 436, 437, 5942, 5944 }, // 28 tc_40d64c94
  { 1, 439, 440, 5944, 5946 }, // 29 LD_tc_ld_SLOT01
  { 1, 434, 435, 5946, 5949 }, // 30 tc_38382228
  { 1, 434, 435, 5949, 5952 }, // 31 tc_c21d7447
  { 1, 434, 435, 5952, 5956 }, // 32 tc_7f8ae742
  { 1, 440, 441, 5956, 5959 }, // 33 tc_5a4b5e58
  { 1, 440, 441, 5959, 5963 }, // 34 tc_197dce51
  { 1, 434, 435, 5963, 5964 }, // 35 tc_44fffc58
  { 1, 439, 440, 5964, 5969 }, // 36 tc_5ceb2f9e
  { 1, 441, 443, 5969, 5972 }, // 37 tc_56c4f9fe
  { 1, 439, 440, 5972, 5977 }, // 38 tc_b4dc7630
  { 1, 439, 440, 5977, 5981 }, // 39 tc_a2b365d2
  { 1, 438, 439, 5981, 5982 }, // 40 tc_60e324ff
  { 1, 443, 445, 5982, 5985 }, // 41 tc_db5555f3
  { 1, 445, 448, 5985, 5988 }, // 42 tc_c0749f3c
  { 1, 448, 450, 5988, 5991 }, // 43 PSEUDOM
  { 1, 441, 443, 5991, 5994 }, // 44 tc_3aacf4a8
  { 1, 450, 453, 5994, 5997 }, // 45 tc_c5dba46e
  { 1, 443, 445, 5997, 6001 }, // 46 tc_af25efd9
  { 1, 434, 435, 6001, 6004 }, // 47 tc_0dfac0a7
  { 1, 439, 440, 6004, 6008 }, // 48 tc_8035e91f
  { 1, 436, 437, 6008, 6012 }, // 49 tc_011e0e9d
  { 1, 439, 440, 6012, 6015 }, // 50 tc_ae5babd7
  { 1, 436, 437, 6015, 6018 }, // 51 tc_5deb5e47
  { 1, 434, 435, 6018, 6023 }, // 52 tc_bb831a7c
  { 1, 436, 437, 6023, 6027 }, // 53 tc_92240447
  { 1, 439, 440, 6027, 6030 }, // 54 tc_7c31e19a
  { 1, 439, 440, 6030, 6034 }, // 55 tc_d03278fd
  { 1, 439, 440, 6034, 6038 }, // 56 tc_65cbd974
  { 1, 436, 437, 6038, 6041 }, // 57 tc_934753bb
  { 1, 439, 440, 6041, 6044 }, // 58 ST_tc_st_SLOT01
  { 1, 453, 455, 6044, 6048 }, // 59 CVI_VA
  { 1, 441, 443, 6048, 6050 }, // 60 tc_0ec46cf9
  { 1, 443, 445, 6050, 6051 }, // 61 tc_718b5c53
  { 1, 455, 459, 0, 0 }, // 62 CVI_GATHER_PSEUDO
  { 1, 436, 437, 6051, 6052 }, // 63 tc_d45ba9cd
  { 1, 435, 436, 6052, 6055 }, // 64 tc_388f9897
  { 1, 435, 436, 6055, 6057 }, // 65 tc_9124c04f
  { 1, 435, 436, 6057, 6060 }, // 66 tc_4ac61d92
  { 1, 439, 440, 6060, 6062 }, // 67 tc_aee6250c
  { 1, 439, 440, 6062, 6065 }, // 68 tc_eed07714
  { 1, 439, 440, 6065, 6068 }, // 69 tc_74a42bda
  { 1, 439, 440, 6068, 6071 }, // 70 tc_a9edeffa
  { 1, 439, 440, 6071, 6074 }, // 71 tc_838c4d7a
  { 1, 434, 435, 6074, 6076 }, // 72 tc_d61dfdc3
  { 1, 434, 435, 6076, 6079 }, // 73 tc_8a825db2
  { 1, 434, 435, 6079, 6082 }, // 74 tc_f34c1c21
  { 1, 435, 436, 6082, 6085 }, // 75 tc_95a33176
  { 1, 434, 435, 6085, 6087 }, // 76 tc_9f6cd987
  { 1, 435, 436, 0, 0 }, // 77 tc_b837298f
  { 1, 435, 436, 6087, 6090 }, // 78 tc_8b5bd4f5
  { 1, 435, 436, 6090, 6093 }, // 79 tc_84a7500d
  { 1, 440, 441, 6093, 6095 }, // 80 tc_7476d766
  { 1, 440, 441, 6095, 6097 }, // 81 tc_49fdfd4b
  { 1, 434, 435, 6097, 6100 }, // 82 tc_f098b237
  { 1, 434, 435, 6100, 6103 }, // 83 tc_20131976
  { 1, 434, 435, 6103, 6108 }, // 84 tc_1d41f8b7
  { 1, 434, 435, 6108, 6111 }, // 85 tc_a1297125
  { 1, 435, 436, 6111, 6112 }, // 86 tc_112d30d6
  { 1, 434, 435, 6112, 6115 }, // 87 tc_d68dca5c
  { 1, 434, 435, 6115, 6119 }, // 88 tc_788b1d09
  { 1, 434, 435, 6119, 6124 }, // 89 tc_38e0bae9
  { 1, 434, 435, 6124, 6127 }, // 90 tc_407e96f9
  { 1, 434, 435, 6127, 6131 }, // 91 tc_7401744f
  { 1, 434, 435, 6131, 6134 }, // 92 tc_9b3c0462
  { 1, 434, 435, 6134, 6136 }, // 93 tc_151bf368
  { 1, 435, 436, 6136, 6139 }, // 94 tc_9c52f549
  { 1, 434, 435, 6139, 6141 }, // 95 tc_55b33fda
  { 1, 434, 435, 6141, 6145 }, // 96 tc_6fc5dbea
  { 1, 440, 441, 6145, 6147 }, // 97 tc_3edca78f
  { 1, 434, 435, 6147, 6151 }, // 98 tc_a7a13fac
  { 1, 434, 435, 6151, 6153 }, // 99 tc_9783714b
  { 1, 434, 435, 6153, 6156 }, // 100 tc_f0e8e832
  { 1, 434, 435, 6156, 6158 }, // 101 tc_65279839
  { 1, 434, 435, 6158, 6162 }, // 102 tc_0a195f2c
  { 1, 434, 435, 6162, 6166 }, // 103 tc_01e1be3b
  { 1, 434, 435, 6166, 6169 }, // 104 tc_556f6577
  { 1, 434, 435, 6169, 6172 }, // 105 tc_02fe1c65
  { 1, 434, 435, 6172, 6176 }, // 106 tc_9e72dc89
  { 1, 434, 435, 6176, 6181 }, // 107 tc_9edb7c77
  { 1, 434, 435, 6181, 6184 }, // 108 tc_7f7f45f5
  { 1, 434, 435, 6184, 6187 }, // 109 tc_c20701f0
  { 1, 434, 435, 6187, 6191 }, // 110 tc_f7569068
  { 1, 440, 441, 6191, 6193 }, // 111 tc_fae9dfa5
  { 1, 440, 441, 6193, 6195 }, // 112 tc_6ae3426b
  { 1, 434, 435, 6195, 6197 }, // 113 tc_69bfb303
  { 1, 438, 439, 6197, 6198 }, // 114 tc_362b0be2
  { 1, 438, 439, 6198, 6200 }, // 115 tc_dc51281d
  { 1, 435, 436, 6200, 6201 }, // 116 tc_decdde8a
  { 1, 435, 436, 6201, 6203 }, // 117 tc_eeda4109
  { 1, 435, 436, 6203, 6205 }, // 118 tc_711c805f
  { 1, 438, 439, 6205, 6207 }, // 119 tc_ed03645c
  { 1, 438, 439, 6207, 6209 }, // 120 tc_42ff66ba
  { 1, 440, 441, 6209, 6211 }, // 121 tc_57a55b54
  { 1, 440, 441, 6211, 6213 }, // 122 tc_1248597c
  { 1, 440, 441, 6213, 6215 }, // 123 tc_9406230a
  { 1, 438, 439, 6215, 6216 }, // 124 tc_d57d649c
  { 1, 440, 441, 6216, 6218 }, // 125 tc_4abdbdc6
  { 1, 440, 441, 6218, 6220 }, // 126 tc_6d861a95
  { 1, 438, 439, 6220, 6221 }, // 127 tc_45f9d1be
  { 1, 436, 437, 6221, 6224 }, // 128 tc_24e109c7
  { 1, 435, 436, 6224, 6227 }, // 129 tc_9e27f2f9
  { 1, 436, 437, 6227, 6230 }, // 130 tc_f6e2aff9
  { 1, 435, 436, 6230, 6233 }, // 131 tc_24f426ab
  { 1, 436, 437, 6233, 6236 }, // 132 tc_975a4e54
  { 1, 434, 435, 6236, 6239 }, // 133 tc_5502c366
  { 1, 436, 437, 6239, 6241 }, // 134 tc_7b9187d3
  { 1, 435, 436, 6241, 6243 }, // 135 tc_f999c66e
  { 1, 439, 440, 6243, 6248 }, // 136 tc_1c7522a8
  { 1, 439, 440, 6248, 6254 }, // 137 tc_76bb5435
  { 1, 439, 440, 6254, 6256 }, // 138 tc_8a6d0d94
  { 1, 436, 437, 6256, 6258 }, // 139 tc_2471c1c8
  { 1, 436, 437, 6258, 6260 }, // 140 tc_64b00d8a
  { 1, 439, 440, 6260, 6265 }, // 141 tc_5f2afaf7
  { 1, 439, 440, 6265, 6269 }, // 142 tc_ac65613f
  { 1, 439, 440, 6269, 6274 }, // 143 tc_a32e03e7
  { 1, 439, 440, 6274, 6277 }, // 144 tc_822c3c68
  { 1, 439, 440, 6277, 6281 }, // 145 tc_abfd9a6d
  { 1, 439, 440, 6281, 6285 }, // 146 tc_bf2ffc0f
  { 1, 439, 440, 6285, 6288 }, // 147 tc_7c6d32e4
  { 1, 439, 440, 6288, 6293 }, // 148 tc_45791fb8
  { 1, 439, 440, 6293, 6298 }, // 149 tc_b7c4062a
  { 1, 439, 440, 6298, 6301 }, // 150 tc_5944960d
  { 1, 434, 435, 6301, 6305 }, // 151 tc_2c13e7f5
  { 1, 434, 435, 6305, 6309 }, // 152 tc_a154b476
  { 1, 434, 435, 6309, 6313 }, // 153 tc_a4e22bbd
  { 1, 434, 435, 6313, 6317 }, // 154 tc_503ce0f3
  { 1, 439, 440, 6317, 6319 }, // 155 tc_0655b949
  { 1, 436, 437, 6319, 6321 }, // 156 tc_6e20402a
  { 1, 436, 437, 6321, 6322 }, // 157 tc_db96aa6b
  { 1, 434, 435, 6322, 6324 }, // 158 tc_a7bdb22c
  { 1, 434, 435, 6324, 6327 }, // 159 tc_db596beb
  { 1, 434, 435, 6327, 6330 }, // 160 tc_a08b630b
  { 1, 434, 435, 6330, 6333 }, // 161 tc_1fcb8495
  { 1, 439, 440, 6333, 6338 }, // 162 tc_9edefe01
  { 1, 439, 440, 6338, 6343 }, // 163 tc_449acf79
  { 1, 436, 437, 6343, 6348 }, // 164 tc_ce59038e
  { 1, 436, 437, 6348, 6353 }, // 165 tc_f529831b
  { 1, 436, 437, 6353, 6358 }, // 166 tc_addc37a8
  { 1, 436, 437, 6358, 6361 }, // 167 tc_6f42bc60
  { 1, 436, 437, 6361, 6363 }, // 168 tc_7af3a37e
  { 1, 434, 435, 6363, 6365 }, // 169 tc_e3d699e3
  { 1, 439, 440, 6365, 6368 }, // 170 tc_ba9255a6
  { 1, 439, 440, 6368, 6373 }, // 171 tc_1fe4ab69
  { 1, 439, 440, 6373, 6376 }, // 172 tc_bb07f2c5
  { 1, 439, 440, 6376, 6381 }, // 173 tc_8e82e8ca
  { 1, 436, 437, 6381, 6384 }, // 174 tc_cfa0e29b
  { 1, 436, 437, 6384, 6389 }, // 175 tc_0a6c20ae
  { 1, 436, 437, 6389, 6392 }, // 176 tc_0fac1eb8
  { 1, 436, 437, 6392, 6397 }, // 177 tc_829d8a86
  { 1, 439, 440, 6397, 6401 }, // 178 tc_280f7fe1
  { 1, 439, 440, 6401, 6405 }, // 179 tc_887d1bb7
  { 1, 436, 437, 6405, 6409 }, // 180 tc_96ef76ef
  { 1, 436, 437, 6409, 6413 }, // 181 tc_55a9a350
  { 1, 434, 435, 6413, 6417 }, // 182 tc_f0cdeccf
  { 1, 434, 435, 6417, 6422 }, // 183 tc_a38c45dc
  { 1, 434, 435, 6422, 6424 }, // 184 tc_d3632d88
  { 1, 434, 435, 6424, 6428 }, // 185 tc_5e4cf0e8
  { 1, 434, 435, 6428, 6430 }, // 186 tc_ef921005
  { 1, 439, 440, 6430, 6433 }, // 187 tc_5b347363
  { 1, 439, 440, 6433, 6435 }, // 188 tc_3d14a17b
  { 1, 439, 440, 6435, 6436 }, // 189 tc_3fbf1042
  { 1, 439, 440, 6436, 6437 }, // 190 tc_63567288
  { 1, 439, 440, 6437, 6439 }, // 191 tc_59a7822c
  { 1, 439, 440, 0, 0 }, // 192 tc_937dd41c
  { 1, 436, 437, 0, 0 }, // 193 tc_a4ee89db
  { 1, 436, 437, 0, 0 }, // 194 tc_c818ff7f
  { 1, 436, 437, 6439, 6440 }, // 195 tc_1242dc2a
  { 1, 439, 440, 6440, 6442 }, // 196 tc_44d5a428
  { 1, 459, 461, 6442, 6445 }, // 197 tc_540c3da3
  { 1, 461, 463, 6445, 6447 }, // 198 tc_c4edf264
  { 1, 463, 465, 6447, 6449 }, // 199 tc_5bf8afbb
  { 1, 465, 467, 6449, 6453 }, // 200 tc_2b4c548e
  { 1, 465, 467, 6453, 6458 }, // 201 tc_bb599486
  { 1, 467, 471, 6458, 6461 }, // 202 tc_a7e6707d
  { 1, 467, 471, 6461, 6465 }, // 203 tc_3c56e5ce
  { 1, 445, 448, 6465, 6469 }, // 204 tc_abe8c3b2
  { 1, 445, 448, 6469, 6474 }, // 205 tc_453fe68d
  { 1, 445, 448, 6474, 6478 }, // 206 tc_1ba8a0cd
  { 1, 471, 473, 6478, 6481 }, // 207 tc_52447ecc
  { 1, 471, 473, 6481, 6485 }, // 208 tc_3904b926
  { 1, 471, 473, 6485, 6490 }, // 209 tc_b9db8205
  { 1, 471, 473, 6490, 6494 }, // 210 tc_663c80a7
  { 1, 473, 477, 6494, 6497 }, // 211 tc_f21e8abb
  { 1, 473, 477, 6497, 6501 }, // 212 tc_131f1c81
  { 1, 473, 477, 6501, 6506 }, // 213 tc_c7039829
  { 1, 473, 477, 6506, 6510 }, // 214 tc_e2d2e9e5
  { 1, 477, 479, 6510, 6513 }, // 215 tc_ab23f776
  { 1, 477, 479, 6513, 6517 }, // 216 tc_7177e272
  { 1, 477, 479, 6517, 6522 }, // 217 tc_e99d4c2e
  { 1, 477, 479, 6522, 6526 }, // 218 tc_6942b6e0
  { 1, 450, 453, 6526, 6530 }, // 219 tc_a02a10a8
  { 1, 450, 453, 6530, 6535 }, // 220 tc_54a0dc47
  { 1, 450, 453, 6535, 6539 }, // 221 tc_447d9895
  { 1, 450, 453, 6539, 6544 }, // 222 tc_191381c1
  { 1, 450, 453, 6544, 6548 }, // 223 tc_3e2aaafc
  { 1, 477, 479, 6548, 6550 }, // 224 tc_3ce09744
  { 1, 477, 479, 6550, 6553 }, // 225 tc_20a4bbec
  { 1, 461, 463, 6553, 6556 }, // 226 tc_c127de3a
  { 1, 441, 443, 6556, 6560 }, // 227 tc_257f6f7c
  { 1, 441, 443, 6560, 6565 }, // 228 tc_7e6a3e89
  { 1, 441, 443, 6565, 6569 }, // 229 tc_e35c1e93
  { 1, 479, 481, 6569, 6572 }, // 230 tc_05ca8cfd
  { 1, 465, 467, 6572, 6575 }, // 231 tc_d8287c14
  { 1, 465, 467, 6575, 6579 }, // 232 tc_08a4f1b6
  { 1, 463, 465, 6579, 6583 }, // 233 tc_56e64202
  { 1, 461, 463, 6583, 6586 }, // 234 tc_ac4046bc
  { 1, 461, 463, 6586, 6590 }, // 235 tc_2e8f5f6e
  { 1, 479, 481, 6590, 6593 }, // 236 tc_7417e785
  { 1, 479, 481, 6593, 6597 }, // 237 tc_309dbb4f
  { 1, 481, 483, 6597, 6601 }, // 238 tc_df80eeb0
  { 1, 479, 481, 6601, 6605 }, // 239 tc_16ff9ef8
  { 1, 479, 481, 6605, 6607 }, // 240 tc_51d0ecc3
  { 1, 481, 483, 6607, 6612 }, // 241 tc_561aaa58
  { 1, 463, 465, 6612, 6614 }, // 242 tc_946013d8
  { 1, 463, 465, 6614, 6617 }, // 243 tc_46d6c3e0
  { 1, 481, 483, 6617, 6621 }, // 244 tc_87adc037
  { 1, 461, 463, 6621, 6624 }, // 245 tc_649072c2
  { 1, 461, 463, 6624, 6628 }, // 246 tc_b091f1c6
  { 1, 465, 467, 6628, 6631 }, // 247 tc_0b04c6c7
  { 1, 465, 467, 6631, 6635 }, // 248 tc_660769f1
  { 1, 445, 448, 6635, 6638 }, // 249 tc_a28f32b5
  { 1, 445, 448, 6638, 6642 }, // 250 tc_7d68d5c2
  { 1, 483, 486, 6642, 6645 }, // 251 tc_7095ecba
  { 1, 483, 486, 6645, 6649 }, // 252 tc_a69eeee1
  { 1, 486, 488, 0, 0 }, // 253 tc_1381a97c
  { 1, 486, 488, 6649, 6650 }, // 254 tc_e3f68a46
  { 1, 488, 490, 6650, 6653 }, // 255 tc_f1de44ef
  { 1, 481, 483, 6653, 6658 }, // 256 tc_9d1dc972
  { 1, 488, 490, 6658, 6662 }, // 257 tc_90bcc1db
  { 1, 490, 493, 6662, 6665 }, // 258 tc_cd94bfe0
  { 1, 490, 493, 6665, 6669 }, // 259 tc_15fdf750
  { 1, 465, 467, 6669, 6673 }, // 260 tc_1ad8a370
  { 1, 465, 467, 6673, 6678 }, // 261 tc_e675c45a
  { 1, 493, 495, 6678, 6681 }, // 262 tc_61bf7c03
  { 1, 493, 495, 6681, 6685 }, // 263 tc_933f2b39
  { 1, 493, 495, 6685, 6689 }, // 264 tc_26a377fe
  { 1, 493, 495, 6689, 6694 }, // 265 tc_2d4051cd
  { 1, 463, 465, 6694, 6697 }, // 266 tc_6e7fa133
  { 1, 441, 443, 6697, 6700 }, // 267 tc_8772086c
  { 1, 443, 445, 6700, 6702 }, // 268 tc_b4416217
  { 1, 450, 453, 6702, 6706 }, // 269 tc_9f363d21
  { 1, 450, 453, 6706, 6711 }, // 270 tc_8e420e4d
  { 1, 495, 498, 6711, 6715 }, // 271 tc_7273323b
  { 1, 495, 498, 6715, 6720 }, // 272 tc_58d21193
  { 1, 443, 445, 6720, 6724 }, // 273 tc_71646d06
  { 1, 481, 483, 6724, 6726 }, // 274 tc_04da405a
  { 1, 481, 483, 6726, 6729 }, // 275 tc_2c745bb8
  { 1, 486, 488, 6729, 6730 }, // 276 tc_b28e51aa
  { 1, 486, 488, 6730, 6732 }, // 277 tc_767c4e9d
  { 1, 498, 500, 6732, 6734 }, // 278 tc_e699ae41
  { 1, 498, 500, 6734, 6737 }, // 279 tc_a0dbea28
  { 1, 498, 500, 6737, 6740 }, // 280 tc_dd5b0695
  { 1, 498, 500, 6740, 6744 }, // 281 tc_3ad719fb
  { 1, 436, 437, 0, 0 }, // 282 tc_77f94a5e
  { 1, 440, 441, 0, 0 }, // 283 tc_55255f2b
  { 1, 436, 437, 6744, 6745 }, // 284 tc_b1ae5f67
  { 1, 436, 437, 6745, 6747 }, // 285 tc_2237d952
  { 1, 438, 439, 6747, 6748 }, // 286 tc_0ba0d5da
  { 1, 438, 439, 0, 0 }, // 287 tc_9b34f5e0
  { 1, 440, 441, 6748, 6749 }, // 288 tc_2c3e17fc
  { 1, 436, 437, 6749, 6751 }, // 289 tc_a3070909
  { 1, 440, 441, 6751, 6752 }, // 290 tc_d7718fbe
  { 1, 440, 441, 6752, 6754 }, // 291 tc_28e55c6f
  { 1, 436, 437, 6754, 6755 }, // 292 tc_4bf903b0
  { 0, 0, 0, 0, 0 }, // 293 tc_invalid
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // HexagonReadAdvanceTable

#undef DBGFIELD

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV60 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV60,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV5 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV5,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV55 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV55,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV62 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  4, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV62,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV65 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  5, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV65,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV66 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  6, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV66,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV67 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  7, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV67,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV67T = {
  3, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  8, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV67T,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV68 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  9, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV68,
  nullptr // No extra processor descriptor
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetSubTypeKV HexagonSubTypeKV[] = {
 { "generic", { { { 0x5b980007ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV60 },
 { "hexagonv5", { { { 0x5b980001ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV5 },
 { "hexagonv55", { { { 0x5b980003ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV55 },
 { "hexagonv60", { { { 0x5b980007ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV60 },
 { "hexagonv62", { { { 0x5b98000fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV62 },
 { "hexagonv65", { { { 0x4bd8001fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV65 },
 { "hexagonv66", { { { 0x4bd8003fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV66 },
 { "hexagonv67", { { { 0x4bd8007fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV67 },
 { "hexagonv67t", { { { 0x14ac8017fULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV67T },
 { "hexagonv68", { { { 0x4bd800ffULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &HexagonModelV68 },
};

namespace Hexagon_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end namespace Hexagon_MC

struct HexagonGenMCSubtargetInfo : public MCSubtargetInfo {
  HexagonGenMCSubtargetInfo(const Triple &TT,
    StringRef CPU, StringRef TuneCPU, StringRef FS,
    ArrayRef<SubtargetFeatureKV> PF,
    ArrayRef<SubtargetSubTypeKV> PD,
    const MCWriteProcResEntry *WPR,
    const MCWriteLatencyEntry *WL,
    const MCReadAdvanceEntry *RA, const InstrStage *IS,
    const unsigned *OC, const unsigned *FP) :
      MCSubtargetInfo(TT, CPU, TuneCPU, FS, PF, PD,
                      WPR, WL, RA, IS, OC, FP) { }

  unsigned resolveVariantSchedClass(unsigned SchedClass,
      const MCInst *MI, const MCInstrInfo *MCII,
      unsigned CPUID) const override {
    return Hexagon_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, CPUID);
  }
  unsigned getHwMode() const override;
};
unsigned HexagonGenMCSubtargetInfo::getHwMode() const {
  if (checkFeatures("+hvx-length128b")) return 1;
  if (checkFeatures("+hvx-length64b")) return 2;
  return 0;
}

static inline MCSubtargetInfo *createHexagonMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS) {
  return new HexagonGenMCSubtargetInfo(TT, CPU, TuneCPU, FS, HexagonFeatureKV, HexagonSubTypeKV, 
                      HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::HexagonSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef TuneCPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU);
  LLVM_DEBUG(dbgs() << "\nTuneCPU:" << TuneCPU << "\n\n");
  InitMCProcessorInfo(CPU, TuneCPU, FS);
  const FeatureBitset &Bits = getFeatureBits();
  if (Bits[Hexagon::ArchV5] && HexagonArchVersion < Hexagon::ArchEnum::V5) HexagonArchVersion = Hexagon::ArchEnum::V5;
  if (Bits[Hexagon::ArchV55] && HexagonArchVersion < Hexagon::ArchEnum::V55) HexagonArchVersion = Hexagon::ArchEnum::V55;
  if (Bits[Hexagon::ArchV60] && HexagonArchVersion < Hexagon::ArchEnum::V60) HexagonArchVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ArchV62] && HexagonArchVersion < Hexagon::ArchEnum::V62) HexagonArchVersion = Hexagon::ArchEnum::V62;
  if (Bits[Hexagon::ArchV65] && HexagonArchVersion < Hexagon::ArchEnum::V65) HexagonArchVersion = Hexagon::ArchEnum::V65;
  if (Bits[Hexagon::ArchV66] && HexagonArchVersion < Hexagon::ArchEnum::V66) HexagonArchVersion = Hexagon::ArchEnum::V66;
  if (Bits[Hexagon::ArchV67] && HexagonArchVersion < Hexagon::ArchEnum::V67) HexagonArchVersion = Hexagon::ArchEnum::V67;
  if (Bits[Hexagon::ArchV68] && HexagonArchVersion < Hexagon::ArchEnum::V68) HexagonArchVersion = Hexagon::ArchEnum::V68;
  if (Bits[Hexagon::ExtensionAudio]) UseAudioOps = true;
  if (Bits[Hexagon::ExtensionHVX] && HexagonHVXVersion < Hexagon::ArchEnum::V60) HexagonHVXVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ExtensionHVX64B]) UseHVX64BOps = true;
  if (Bits[Hexagon::ExtensionHVX128B]) UseHVX128BOps = true;
  if (Bits[Hexagon::ExtensionHVXV60] && HexagonHVXVersion < Hexagon::ArchEnum::V60) HexagonHVXVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ExtensionHVXV62] && HexagonHVXVersion < Hexagon::ArchEnum::V62) HexagonHVXVersion = Hexagon::ArchEnum::V62;
  if (Bits[Hexagon::ExtensionHVXV65] && HexagonHVXVersion < Hexagon::ArchEnum::V65) HexagonHVXVersion = Hexagon::ArchEnum::V65;
  if (Bits[Hexagon::ExtensionHVXV66] && HexagonHVXVersion < Hexagon::ArchEnum::V66) HexagonHVXVersion = Hexagon::ArchEnum::V66;
  if (Bits[Hexagon::ExtensionHVXV67] && HexagonHVXVersion < Hexagon::ArchEnum::V67) HexagonHVXVersion = Hexagon::ArchEnum::V67;
  if (Bits[Hexagon::ExtensionHVXV68] && HexagonHVXVersion < Hexagon::ArchEnum::V68) HexagonHVXVersion = Hexagon::ArchEnum::V68;
  if (Bits[Hexagon::ExtensionZReg]) UseZRegOps = true;
  if (Bits[Hexagon::FeatureCompound]) UseCompound = true;
  if (Bits[Hexagon::FeatureDuplex]) EnableDuplex = true;
  if (Bits[Hexagon::FeatureLongCalls]) UseLongCalls = true;
  if (Bits[Hexagon::FeatureMemNoShuf]) HasMemNoShuf = false;
  if (Bits[Hexagon::FeatureMemops]) UseMemops = true;
  if (Bits[Hexagon::FeatureNVJ]) UseNewValueJumps = true;
  if (Bits[Hexagon::FeatureNVS]) UseNewValueStores = true;
  if (Bits[Hexagon::FeatureNoreturnStackElim]) NoreturnStackElim = true;
  if (Bits[Hexagon::FeaturePackets]) UsePackets = true;
  if (Bits[Hexagon::FeaturePreV65]) HasPreV65 = true;
  if (Bits[Hexagon::FeatureReservedR19]) ReservedR19 = true;
  if (Bits[Hexagon::FeatureSmallData]) UseSmallData = true;
  if (Bits[Hexagon::FeatureUnsafeFP]) UseUnsafeMath = true;
  if (Bits[Hexagon::ProcTinyCore] && HexagonProcFamily < TinyCore) HexagonProcFamily = TinyCore;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace Hexagon_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID);
} // end namespace Hexagon_MC

struct HexagonGenSubtargetInfo : public TargetSubtargetInfo {
  explicit HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  unsigned resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
  unsigned getHwMode() const override;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[];
extern const llvm::SubtargetSubTypeKV HexagonSubTypeKV[];
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[];
extern const llvm::InstrStage HexagonStages[];
extern const unsigned HexagonOperandCycles[];
extern const unsigned HexagonForwardingPaths[];
HexagonGenSubtargetInfo::HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, TuneCPU, FS, makeArrayRef(HexagonFeatureKV, 33), makeArrayRef(HexagonSubTypeKV, 10), 
                        HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                        HexagonStages, HexagonOperandCycles, HexagonForwardingPaths) {}

unsigned HexagonGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // HexagonGenSubtargetInfo::resolveSchedClass

unsigned HexagonGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) const {
  return Hexagon_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, CPUID);
} // HexagonGenSubtargetInfo::resolveVariantSchedClass

unsigned HexagonGenSubtargetInfo::getHwMode() const {
  if (checkFeatures("+hvx-length128b")) return 1;
  if (checkFeatures("+hvx-length64b")) return 2;
  return 0;
}
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

