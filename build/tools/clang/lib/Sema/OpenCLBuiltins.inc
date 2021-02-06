/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* OpenCL Builtin handling                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/ADT/StringRef.h"
using namespace clang;

enum OpenCLTypeID {
  OCLT_atomic_double,
  OCLT_atomic_float,
  OCLT_atomic_int,
  OCLT_atomic_intptr_t,
  OCLT_atomic_long,
  OCLT_atomic_ptrdiff_t,
  OCLT_atomic_size_t,
  OCLT_atomic_uint,
  OCLT_atomic_uintptr_t,
  OCLT_atomic_ulong,
  OCLT_bool,
  OCLT_char,
  OCLT_clk_event_t,
  OCLT_double,
  OCLT_event_t,
  OCLT_float,
  OCLT_half,
  OCLT_image1d_t,
  OCLT_image1d_array_t,
  OCLT_image1d_buffer_t,
  OCLT_image2d_t,
  OCLT_image2d_array_t,
  OCLT_image2d_array_depth_t,
  OCLT_image2d_array_msaa_t,
  OCLT_image2d_array_msaa_depth_t,
  OCLT_image2d_depth_t,
  OCLT_image2d_msaa_t,
  OCLT_image2d_msaa_depth_t,
  OCLT_image3d_t,
  OCLT_int,
  OCLT_intptr_t,
  OCLT_long,
  OCLT_ptrdiff_t,
  OCLT_queue_t,
  OCLT_reserve_id_t,
  OCLT_sampler_t,
  OCLT_short,
  OCLT_size_t,
  OCLT_uchar,
  OCLT_uint,
  OCLT_uintptr_t,
  OCLT_ulong,
  OCLT_ushort,
  OCLT_void,
  OCLT_AGenType1,
  OCLT_AGenTypeN,
  OCLT_AGenTypeNNoScalar,
  OCLT_AI2UGenTypeN,
  OCLT_AIGenType1,
  OCLT_AIGenTypeN,
  OCLT_AIGenTypeNNoScalar,
  OCLT_FGenTypeN,
  OCLT_GenTypeCharVecAndScalar,
  OCLT_GenTypeCharVecNoScalar,
  OCLT_GenTypeDoubleVec1234,
  OCLT_GenTypeDoubleVecAndScalar,
  OCLT_GenTypeDoubleVecNoScalar,
  OCLT_GenTypeFloatVec1234,
  OCLT_GenTypeFloatVecAndScalar,
  OCLT_GenTypeFloatVecNoScalar,
  OCLT_GenTypeHalfVec1234,
  OCLT_GenTypeHalfVecAndScalar,
  OCLT_GenTypeHalfVecNoScalar,
  OCLT_GenTypeIntVecAndScalar,
  OCLT_GenTypeIntVecNoScalar,
  OCLT_GenTypeLongVecAndScalar,
  OCLT_GenTypeLongVecNoScalar,
  OCLT_GenTypeShortVecAndScalar,
  OCLT_GenTypeShortVecNoScalar,
  OCLT_GenTypeUCharVecAndScalar,
  OCLT_GenTypeUCharVecNoScalar,
  OCLT_GenTypeUIntVecAndScalar,
  OCLT_GenTypeUIntVecNoScalar,
  OCLT_GenTypeULongVecAndScalar,
  OCLT_GenTypeULongVecNoScalar,
  OCLT_GenTypeUShortVecAndScalar,
  OCLT_GenTypeUShortVecNoScalar,
  OCLT_IntLongFloatGenType1,
  OCLT_SGenTypeN,
  OCLT_UGenTypeN,
  OCLT_TLAllVec2,
  OCLT_TLAllUnsignedVec2,
  OCLT_TLAllVec4,
  OCLT_TLAllVec8,
  OCLT_TLAllVec16,
  OCLT_TLAllUnsignedVec4,
  OCLT_TLAllUnsignedVec8,
  OCLT_TLAllUnsignedVec16,
};

// Image access qualifier.
enum OpenCLAccessQual : unsigned char {
  OCLAQ_None,
  OCLAQ_ReadOnly,
  OCLAQ_WriteOnly,
  OCLAQ_ReadWrite
};

// Represents a return type or argument type.
struct OpenCLTypeStruct {
  // A type (e.g. float, int, ...).
  const OpenCLTypeID ID;
  // Vector size (if applicable; 0 for scalars and generic types).
  const unsigned VectorWidth;
  // 0 if the type is not a pointer.
  const bool IsPointer : 1;
  // 0 if the type is not const.
  const bool IsConst : 1;
  // 0 if the type is not volatile.
  const bool IsVolatile : 1;
  // Access qualifier.
  const OpenCLAccessQual AccessQualifier;
  // Address space of the pointer (if applicable).
  const LangAS AS;
};

// One overload of an OpenCL builtin function.
struct OpenCLBuiltinStruct {
  // Index of the signature in the OpenCLTypeStruct table.
  const unsigned SigTableIndex;
  // Entries between index SigTableIndex and (SigTableIndex + NumTypes - 1) in
  // the SignatureTable represent the complete signature.  The first type at
  // index SigTableIndex is the return type.
  const unsigned NumTypes;
  // Function attribute __attribute__((pure))
  const bool IsPure : 1;
  // Function attribute __attribute__((const))
  const bool IsConst : 1;
  // Function attribute __attribute__((convergent))
  const bool IsConv : 1;
  // OpenCL extension(s) required for this overload.
  const unsigned short Extension;
  // First OpenCL version in which this overload was introduced (e.g. CL20).
  const unsigned short MinVersion;
  // First OpenCL version in which this overload was removed (e.g. CL20).
  const unsigned short MaxVersion;
};

static const char *FunctionExtensionTable[] = {
  // 0: ArmIntegerDotProductAccumulateInt16
  "cl_arm_integer_dot_product_accumulate_int16",
  // 1: ArmIntegerDotProductAccumulateInt8
  "cl_arm_integer_dot_product_accumulate_int8",
  // 2: ArmIntegerDotProductAccumulateSaturateInt8
  "cl_arm_integer_dot_product_accumulate_saturate_int8",
  // 3: ArmIntegerDotProductInt8
  "cl_arm_integer_dot_product_int8",
  // 4: FuncExtKhrGlMsaaSharing
  "cl_khr_gl_msaa_sharing",
  // 5: FuncExtKhrGlobalInt32BaseAtomics
  "cl_khr_global_int32_base_atomics",
  // 6: FuncExtKhrGlobalInt32ExtendedAtomics
  "cl_khr_global_int32_extended_atomics",
  // 7: FuncExtKhrInt64BaseAtomics
  "cl_khr_int64_base_atomics",
  // 8: FuncExtKhrInt64ExtendedAtomics
  "cl_khr_int64_extended_atomics",
  // 9: FuncExtKhrLocalInt32BaseAtomics
  "cl_khr_local_int32_base_atomics",
  // 10: FuncExtKhrLocalInt32ExtendedAtomics
  "cl_khr_local_int32_extended_atomics",
  // 11: FuncExtKhrMipmapImage
  "cl_khr_mipmap_image",
  // 12: FuncExtKhrMipmapImageWrites
  "cl_khr_mipmap_image_writes",
  // 13: FuncExtKhrMipmapWritesAndWrite3d
  "cl_khr_mipmap_image_writes cl_khr_3d_image_writes",
  // 14: FuncExtKhrSubgroupBallot
  "cl_khr_subgroup_ballot",
  // 15: FuncExtKhrSubgroupNonUniformVote
  "cl_khr_subgroup_non_uniform_vote",
  // 16: FuncExtKhrSubgroupShuffle
  "cl_khr_subgroup_shuffle",
  // 17: FuncExtKhrSubgroupShuffleRelative
  "cl_khr_subgroup_shuffle_relative",
  // 18: FuncExtKhrSubgroups
  "cl_khr_subgroups",
  // 19: FuncExtNone
  "",
};

static const OpenCLTypeStruct TypeTable[] = {
  // 0
  {OCLT_AGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 1
  {OCLT_AGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 2
  {OCLT_AGenTypeNNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 3
  {OCLT_AI2UGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 4
  {OCLT_AIGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 5
  {OCLT_AIGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 6
  {OCLT_AIGenTypeNNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 7
  {OCLT_atomic_double, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 8
  {OCLT_atomic_float, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 9
  {OCLT_atomic_int, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 10
  {OCLT_atomic_intptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 11
  {OCLT_atomic_long, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 12
  {OCLT_atomic_ptrdiff_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 13
  {OCLT_atomic_size_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 14
  {OCLT_atomic_uint, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 15
  {OCLT_atomic_uintptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 16
  {OCLT_atomic_ulong, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 17
  {OCLT_bool, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 18
  {OCLT_char, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 19
  {OCLT_clk_event_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 20
  {OCLT_double, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 21
  {OCLT_event_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 22
  {OCLT_FGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 23
  {OCLT_float, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 24
  {OCLT_GenTypeCharVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 25
  {OCLT_GenTypeCharVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 26
  {OCLT_GenTypeDoubleVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 27
  {OCLT_GenTypeDoubleVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 28
  {OCLT_GenTypeDoubleVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 29
  {OCLT_GenTypeFloatVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 30
  {OCLT_GenTypeFloatVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 31
  {OCLT_GenTypeFloatVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 32
  {OCLT_GenTypeHalfVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 33
  {OCLT_GenTypeHalfVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 34
  {OCLT_GenTypeHalfVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 35
  {OCLT_GenTypeIntVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 36
  {OCLT_GenTypeIntVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 37
  {OCLT_GenTypeLongVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 38
  {OCLT_GenTypeLongVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 39
  {OCLT_GenTypeShortVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 40
  {OCLT_GenTypeShortVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 41
  {OCLT_GenTypeUCharVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 42
  {OCLT_GenTypeUCharVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 43
  {OCLT_GenTypeUIntVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 44
  {OCLT_GenTypeUIntVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 45
  {OCLT_GenTypeULongVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 46
  {OCLT_GenTypeULongVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 47
  {OCLT_GenTypeUShortVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 48
  {OCLT_GenTypeUShortVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 49
  {OCLT_half, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 50
  {OCLT_image1d_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 51
  {OCLT_image1d_array_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 52
  {OCLT_image1d_buffer_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 53
  {OCLT_image2d_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 54
  {OCLT_image2d_array_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 55
  {OCLT_image2d_array_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 56
  {OCLT_image2d_array_msaa_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 57
  {OCLT_image2d_array_msaa_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 58
  {OCLT_image2d_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 59
  {OCLT_image2d_msaa_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 60
  {OCLT_image2d_msaa_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 61
  {OCLT_image3d_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 62
  {OCLT_int, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 63
  {OCLT_IntLongFloatGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 64
  {OCLT_intptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 65
  {OCLT_long, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 66
  {OCLT_ptrdiff_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 67
  {OCLT_queue_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 68
  {OCLT_reserve_id_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 69
  {OCLT_SGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 70
  {OCLT_sampler_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 71
  {OCLT_short, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 72
  {OCLT_size_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 73
  {OCLT_uchar, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 74
  {OCLT_UGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 75
  {OCLT_uint, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 76
  {OCLT_uintptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 77
  {OCLT_ulong, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 78
  {OCLT_ushort, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 79
  {OCLT_void, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 80
  {OCLT_double, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 81
  {OCLT_half, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 82
  {OCLT_half, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 83
  {OCLT_half, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 84
  {OCLT_half, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 85
  {OCLT_half, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 86
  {OCLT_char, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 87
  {OCLT_char, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 88
  {OCLT_char, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 89
  {OCLT_char, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 90
  {OCLT_char, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 91
  {OCLT_uchar, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 92
  {OCLT_uchar, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 93
  {OCLT_uchar, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 94
  {OCLT_uchar, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 95
  {OCLT_uchar, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 96
  {OCLT_short, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 97
  {OCLT_short, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 98
  {OCLT_short, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 99
  {OCLT_short, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 100
  {OCLT_short, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 101
  {OCLT_ushort, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 102
  {OCLT_ushort, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 103
  {OCLT_ushort, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 104
  {OCLT_ushort, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 105
  {OCLT_ushort, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 106
  {OCLT_int, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 107
  {OCLT_int, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 108
  {OCLT_int, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 109
  {OCLT_int, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 110
  {OCLT_int, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 111
  {OCLT_uint, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 112
  {OCLT_uint, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 113
  {OCLT_uint, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 114
  {OCLT_uint, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 115
  {OCLT_uint, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 116
  {OCLT_long, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 117
  {OCLT_long, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 118
  {OCLT_long, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 119
  {OCLT_long, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 120
  {OCLT_long, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 121
  {OCLT_ulong, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 122
  {OCLT_ulong, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 123
  {OCLT_ulong, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 124
  {OCLT_ulong, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 125
  {OCLT_ulong, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 126
  {OCLT_float, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 127
  {OCLT_float, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 128
  {OCLT_float, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 129
  {OCLT_float, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 130
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 131
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 132
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 133
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 134
  {OCLT_float, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 135
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 136
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 137
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 138
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 139
  {OCLT_char, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 140
  {OCLT_uchar, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 141
  {OCLT_short, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 142
  {OCLT_ushort, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 143
  {OCLT_int, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 144
  {OCLT_uint, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 145
  {OCLT_long, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 146
  {OCLT_ulong, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 147
  {OCLT_float, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 148
  {OCLT_double, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 149
  {OCLT_half, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 150
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 151
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 152
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 153
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 154
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 155
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 156
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 157
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 158
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 159
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 160
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 161
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 162
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 163
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 164
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 165
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 166
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 167
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 168
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 169
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 170
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 171
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 172
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 173
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 174
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 175
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 176
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 177
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 178
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 179
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 180
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 181
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 182
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 183
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 184
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 185
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 186
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 187
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 188
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 189
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 190
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 191
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 192
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 193
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 194
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 195
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 196
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 197
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 198
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 199
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 200
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 201
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 202
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 203
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 204
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 205
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 206
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 207
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 208
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 209
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 210
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 211
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 212
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 213
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 214
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 215
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 216
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 217
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 218
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 219
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 220
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 221
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 222
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 223
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 224
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 225
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 226
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 227
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 228
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 229
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 230
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 231
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 232
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 233
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 234
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 235
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 236
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 237
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 238
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 239
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 240
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 241
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 242
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 243
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 244
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 245
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 246
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 247
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 248
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 249
  {OCLT_AGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 250
  {OCLT_AGenTypeN, 0, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 251
  {OCLT_AGenTypeN, 0, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 252
  {OCLT_AGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 253
  {OCLT_AGenTypeN, 0, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 254
  {OCLT_event_t, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 255
  {OCLT_int, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 256
  {OCLT_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 257
  {OCLT_uint, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 258
  {OCLT_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 259
  {OCLT_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 260
  {OCLT_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 261
  {OCLT_long, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 262
  {OCLT_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 263
  {OCLT_ulong, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 264
  {OCLT_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 265
  {OCLT_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 266
  {OCLT_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 267
  {OCLT_atomic_int, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 268
  {OCLT_atomic_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 269
  {OCLT_atomic_uint, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 270
  {OCLT_atomic_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 271
  {OCLT_atomic_long, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 272
  {OCLT_atomic_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 273
  {OCLT_atomic_ulong, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 274
  {OCLT_atomic_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 275
  {OCLT_atomic_float, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 276
  {OCLT_atomic_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 277
  {OCLT_atomic_double, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 278
  {OCLT_atomic_double, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 279
  {OCLT_atomic_intptr_t, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 280
  {OCLT_atomic_intptr_t, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 281
  {OCLT_atomic_uintptr_t, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 282
  {OCLT_atomic_uintptr_t, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 283
  {OCLT_TLAllVec2, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 284
  {OCLT_TLAllUnsignedVec2, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 285
  {OCLT_TLAllVec4, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 286
  {OCLT_TLAllVec8, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 287
  {OCLT_TLAllVec16, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 288
  {OCLT_TLAllUnsignedVec4, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 289
  {OCLT_TLAllUnsignedVec8, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 290
  {OCLT_TLAllUnsignedVec16, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 291
  {OCLT_image1d_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 292
  {OCLT_image2d_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 293
  {OCLT_image1d_array_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 294
  {OCLT_image3d_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 295
  {OCLT_image2d_array_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 296
  {OCLT_image2d_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 297
  {OCLT_image2d_array_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 298
  {OCLT_image1d_buffer_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 299
  {OCLT_image2d_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 300
  {OCLT_image1d_array_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 301
  {OCLT_image3d_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 302
  {OCLT_image2d_array_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 303
  {OCLT_image1d_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 304
  {OCLT_image1d_buffer_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 305
  {OCLT_image2d_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 306
  {OCLT_image2d_array_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 307
  {OCLT_image2d_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 308
  {OCLT_image2d_array_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 309
  {OCLT_image1d_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 310
  {OCLT_image1d_buffer_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 311
  {OCLT_image1d_array_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 312
  {OCLT_image3d_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 313
  {OCLT_image2d_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 314
  {OCLT_image2d_array_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 315
  {OCLT_clk_event_t, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 316
  {OCLT_clk_event_t, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 317
  {OCLT_clk_event_t, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 318
  {OCLT_image2d_msaa_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 319
  {OCLT_image2d_array_msaa_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 320
  {OCLT_image2d_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 321
  {OCLT_image2d_array_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 322
  {OCLT_image2d_msaa_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 323
  {OCLT_image2d_array_msaa_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 324
  {OCLT_image2d_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 325
  {OCLT_image2d_array_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 326
  {OCLT_image2d_msaa_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 327
  {OCLT_image2d_array_msaa_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 328
  {OCLT_image2d_msaa_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 329
  {OCLT_image2d_array_msaa_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 330
  {OCLT_double, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 331
  {OCLT_double, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 332
  {OCLT_double, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 333
  {OCLT_double, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
};

static const unsigned short SignatureTable[] = {
  // 0
  81, 106, 
  // 2
  82, 107, 
  // 4
  83, 108, 
  // 6
  84, 109, 
  // 8
  85, 110, 
  // 10
  49, 62, 
  // 12
  134, 80, 
  // 14
  49, 75, 
  // 16
  81, 111, 
  // 18
  82, 112, 
  // 20
  83, 113, 
  // 22
  84, 114, 
  // 24
  85, 115, 
  // 26
  23, 20, 
  // 28
  126, 330, 
  // 30
  127, 331, 
  // 32
  49, 65, 
  // 34
  81, 116, 
  // 36
  82, 117, 
  // 38
  83, 118, 
  // 40
  84, 119, 
  // 42
  85, 120, 
  // 44
  128, 332, 
  // 46
  129, 333, 
  // 48
  49, 77, 
  // 50
  81, 121, 
  // 52
  82, 122, 
  // 54
  83, 123, 
  // 56
  84, 124, 
  // 58
  85, 125, 
  // 60
  18, 23, 
  // 62
  86, 126, 
  // 64
  87, 127, 
  // 66
  88, 128, 
  // 68
  89, 129, 
  // 70
  90, 134, 
  // 72
  18, 20, 
  // 74
  86, 330, 
  // 76
  87, 331, 
  // 78
  88, 332, 
  // 80
  89, 333, 
  // 82
  90, 80, 
  // 84
  18, 49, 
  // 86
  86, 81, 
  // 88
  87, 82, 
  // 90
  88, 83, 
  // 92
  89, 84, 
  // 94
  90, 85, 
  // 96
  23, 49, 
  // 98
  126, 81, 
  // 100
  18, 18, 
  // 102
  86, 86, 
  // 104
  87, 87, 
  // 106
  88, 88, 
  // 108
  89, 89, 
  // 110
  90, 90, 
  // 112
  127, 82, 
  // 114
  128, 83, 
  // 116
  129, 84, 
  // 118
  18, 73, 
  // 120
  86, 91, 
  // 122
  87, 92, 
  // 124
  88, 93, 
  // 126
  89, 94, 
  // 128
  90, 95, 
  // 130
  134, 85, 
  // 132
  18, 71, 
  // 134
  86, 96, 
  // 136
  87, 97, 
  // 138
  88, 98, 
  // 140
  89, 99, 
  // 142
  90, 100, 
  // 144
  18, 78, 
  // 146
  86, 101, 
  // 148
  87, 102, 
  // 150
  88, 103, 
  // 152
  89, 104, 
  // 154
  90, 105, 
  // 156
  18, 62, 
  // 158
  86, 106, 
  // 160
  87, 107, 
  // 162
  88, 108, 
  // 164
  89, 109, 
  // 166
  90, 110, 
  // 168
  18, 75, 
  // 170
  86, 111, 
  // 172
  87, 112, 
  // 174
  88, 113, 
  // 176
  89, 114, 
  // 178
  90, 115, 
  // 180
  23, 18, 
  // 182
  126, 86, 
  // 184
  18, 65, 
  // 186
  86, 116, 
  // 188
  87, 117, 
  // 190
  88, 118, 
  // 192
  89, 119, 
  // 194
  90, 120, 
  // 196
  127, 87, 
  // 198
  128, 88, 
  // 200
  129, 89, 
  // 202
  18, 77, 
  // 204
  86, 121, 
  // 206
  87, 122, 
  // 208
  88, 123, 
  // 210
  89, 124, 
  // 212
  90, 125, 
  // 214
  134, 90, 
  // 216
  73, 23, 
  // 218
  91, 126, 
  // 220
  92, 127, 
  // 222
  93, 128, 
  // 224
  94, 129, 
  // 226
  95, 134, 
  // 228
  73, 20, 
  // 230
  91, 330, 
  // 232
  92, 331, 
  // 234
  93, 332, 
  // 236
  94, 333, 
  // 238
  95, 80, 
  // 240
  73, 49, 
  // 242
  91, 81, 
  // 244
  92, 82, 
  // 246
  93, 83, 
  // 248
  94, 84, 
  // 250
  95, 85, 
  // 252
  73, 18, 
  // 254
  91, 86, 
  // 256
  92, 87, 
  // 258
  93, 88, 
  // 260
  94, 89, 
  // 262
  95, 90, 
  // 264
  23, 73, 
  // 266
  126, 91, 
  // 268
  127, 92, 
  // 270
  73, 73, 
  // 272
  91, 91, 
  // 274
  92, 92, 
  // 276
  93, 93, 
  // 278
  94, 94, 
  // 280
  95, 95, 
  // 282
  128, 93, 
  // 284
  129, 94, 
  // 286
  134, 95, 
  // 288
  73, 71, 
  // 290
  91, 96, 
  // 292
  92, 97, 
  // 294
  93, 98, 
  // 296
  94, 99, 
  // 298
  95, 100, 
  // 300
  73, 78, 
  // 302
  91, 101, 
  // 304
  92, 102, 
  // 306
  93, 103, 
  // 308
  94, 104, 
  // 310
  95, 105, 
  // 312
  73, 62, 
  // 314
  91, 106, 
  // 316
  92, 107, 
  // 318
  93, 108, 
  // 320
  94, 109, 
  // 322
  95, 110, 
  // 324
  73, 75, 
  // 326
  91, 111, 
  // 328
  92, 112, 
  // 330
  93, 113, 
  // 332
  94, 114, 
  // 334
  95, 115, 
  // 336
  73, 65, 
  // 338
  91, 116, 
  // 340
  92, 117, 
  // 342
  93, 118, 
  // 344
  94, 119, 
  // 346
  95, 120, 
  // 348
  23, 71, 
  // 350
  126, 96, 
  // 352
  127, 97, 
  // 354
  73, 77, 
  // 356
  91, 121, 
  // 358
  92, 122, 
  // 360
  93, 123, 
  // 362
  94, 124, 
  // 364
  95, 125, 
  // 366
  128, 98, 
  // 368
  129, 99, 
  // 370
  134, 100, 
  // 372
  71, 23, 
  // 374
  96, 126, 
  // 376
  97, 127, 
  // 378
  98, 128, 
  // 380
  99, 129, 
  // 382
  100, 134, 
  // 384
  71, 20, 
  // 386
  96, 330, 
  // 388
  97, 331, 
  // 390
  98, 332, 
  // 392
  99, 333, 
  // 394
  100, 80, 
  // 396
  71, 49, 
  // 398
  96, 81, 
  // 400
  97, 82, 
  // 402
  98, 83, 
  // 404
  99, 84, 
  // 406
  100, 85, 
  // 408
  71, 18, 
  // 410
  96, 86, 
  // 412
  97, 87, 
  // 414
  98, 88, 
  // 416
  99, 89, 
  // 418
  100, 90, 
  // 420
  23, 78, 
  // 422
  71, 73, 
  // 424
  96, 91, 
  // 426
  97, 92, 
  // 428
  98, 93, 
  // 430
  99, 94, 
  // 432
  100, 95, 
  // 434
  126, 101, 
  // 436
  127, 102, 
  // 438
  128, 103, 
  // 440
  71, 71, 
  // 442
  96, 96, 
  // 444
  97, 97, 
  // 446
  98, 98, 
  // 448
  99, 99, 
  // 450
  100, 100, 
  // 452
  129, 104, 
  // 454
  134, 105, 
  // 456
  71, 78, 
  // 458
  96, 101, 
  // 460
  97, 102, 
  // 462
  98, 103, 
  // 464
  99, 104, 
  // 466
  100, 105, 
  // 468
  71, 62, 
  // 470
  96, 106, 
  // 472
  97, 107, 
  // 474
  98, 108, 
  // 476
  99, 109, 
  // 478
  100, 110, 
  // 480
  71, 75, 
  // 482
  96, 111, 
  // 484
  97, 112, 
  // 486
  98, 113, 
  // 488
  99, 114, 
  // 490
  100, 115, 
  // 492
  71, 65, 
  // 494
  96, 116, 
  // 496
  97, 117, 
  // 498
  98, 118, 
  // 500
  99, 119, 
  // 502
  100, 120, 
  // 504
  23, 62, 
  // 506
  71, 77, 
  // 508
  96, 121, 
  // 510
  97, 122, 
  // 512
  98, 123, 
  // 514
  99, 124, 
  // 516
  100, 125, 
  // 518
  126, 106, 
  // 520
  127, 107, 
  // 522
  128, 108, 
  // 524
  78, 23, 
  // 526
  101, 126, 
  // 528
  102, 127, 
  // 530
  103, 128, 
  // 532
  104, 129, 
  // 534
  105, 134, 
  // 536
  129, 109, 
  // 538
  134, 110, 
  // 540
  78, 20, 
  // 542
  101, 330, 
  // 544
  102, 331, 
  // 546
  103, 332, 
  // 548
  104, 333, 
  // 550
  105, 80, 
  // 552
  78, 49, 
  // 554
  101, 81, 
  // 556
  102, 82, 
  // 558
  103, 83, 
  // 560
  104, 84, 
  // 562
  105, 85, 
  // 564
  78, 18, 
  // 566
  101, 86, 
  // 568
  102, 87, 
  // 570
  103, 88, 
  // 572
  104, 89, 
  // 574
  105, 90, 
  // 576
  78, 73, 
  // 578
  101, 91, 
  // 580
  102, 92, 
  // 582
  103, 93, 
  // 584
  104, 94, 
  // 586
  105, 95, 
  // 588
  23, 75, 
  // 590
  126, 111, 
  // 592
  78, 71, 
  // 594
  101, 96, 
  // 596
  102, 97, 
  // 598
  103, 98, 
  // 600
  104, 99, 
  // 602
  105, 100, 
  // 604
  127, 112, 
  // 606
  128, 113, 
  // 608
  129, 114, 
  // 610
  78, 78, 
  // 612
  101, 101, 
  // 614
  102, 102, 
  // 616
  103, 103, 
  // 618
  104, 104, 
  // 620
  105, 105, 
  // 622
  134, 115, 
  // 624
  78, 62, 
  // 626
  101, 106, 
  // 628
  102, 107, 
  // 630
  103, 108, 
  // 632
  104, 109, 
  // 634
  105, 110, 
  // 636
  78, 75, 
  // 638
  101, 111, 
  // 640
  102, 112, 
  // 642
  103, 113, 
  // 644
  104, 114, 
  // 646
  105, 115, 
  // 648
  78, 65, 
  // 650
  101, 116, 
  // 652
  102, 117, 
  // 654
  103, 118, 
  // 656
  104, 119, 
  // 658
  105, 120, 
  // 660
  78, 77, 
  // 662
  101, 121, 
  // 664
  102, 122, 
  // 666
  103, 123, 
  // 668
  104, 124, 
  // 670
  105, 125, 
  // 672
  23, 65, 
  // 674
  126, 116, 
  // 676
  62, 23, 
  // 678
  106, 126, 
  // 680
  107, 127, 
  // 682
  108, 128, 
  // 684
  109, 129, 
  // 686
  110, 134, 
  // 688
  127, 117, 
  // 690
  128, 118, 
  // 692
  129, 119, 
  // 694
  62, 20, 
  // 696
  106, 330, 
  // 698
  107, 331, 
  // 700
  108, 332, 
  // 702
  109, 333, 
  // 704
  110, 80, 
  // 706
  134, 120, 
  // 708
  62, 49, 
  // 710
  106, 81, 
  // 712
  107, 82, 
  // 714
  108, 83, 
  // 716
  109, 84, 
  // 718
  110, 85, 
  // 720
  62, 18, 
  // 722
  106, 86, 
  // 724
  107, 87, 
  // 726
  108, 88, 
  // 728
  109, 89, 
  // 730
  110, 90, 
  // 732
  62, 73, 
  // 734
  106, 91, 
  // 736
  107, 92, 
  // 738
  108, 93, 
  // 740
  109, 94, 
  // 742
  110, 95, 
  // 744
  62, 71, 
  // 746
  106, 96, 
  // 748
  107, 97, 
  // 750
  108, 98, 
  // 752
  109, 99, 
  // 754
  110, 100, 
  // 756
  23, 77, 
  // 758
  126, 121, 
  // 760
  127, 122, 
  // 762
  62, 78, 
  // 764
  106, 101, 
  // 766
  107, 102, 
  // 768
  108, 103, 
  // 770
  109, 104, 
  // 772
  110, 105, 
  // 774
  128, 123, 
  // 776
  129, 124, 
  // 778
  134, 125, 
  // 780
  62, 62, 
  // 782
  106, 106, 
  // 784
  107, 107, 
  // 786
  108, 108, 
  // 788
  109, 109, 
  // 790
  110, 110, 
  // 792
  62, 75, 
  // 794
  106, 111, 
  // 796
  107, 112, 
  // 798
  108, 113, 
  // 800
  109, 114, 
  // 802
  110, 115, 
  // 804
  62, 65, 
  // 806
  106, 116, 
  // 808
  107, 117, 
  // 810
  108, 118, 
  // 812
  109, 119, 
  // 814
  110, 120, 
  // 816
  62, 77, 
  // 818
  106, 121, 
  // 820
  107, 122, 
  // 822
  108, 123, 
  // 824
  109, 124, 
  // 826
  110, 125, 
  // 828
  75, 23, 
  // 830
  111, 126, 
  // 832
  112, 127, 
  // 834
  113, 128, 
  // 836
  114, 129, 
  // 838
  115, 134, 
  // 840
  20, 23, 
  // 842
  330, 126, 
  // 844
  331, 127, 
  // 846
  332, 128, 
  // 848
  333, 129, 
  // 850
  80, 134, 
  // 852
  75, 20, 
  // 854
  111, 330, 
  // 856
  112, 331, 
  // 858
  113, 332, 
  // 860
  114, 333, 
  // 862
  115, 80, 
  // 864
  75, 49, 
  // 866
  111, 81, 
  // 868
  112, 82, 
  // 870
  113, 83, 
  // 872
  114, 84, 
  // 874
  115, 85, 
  // 876
  75, 18, 
  // 878
  111, 86, 
  // 880
  112, 87, 
  // 882
  113, 88, 
  // 884
  114, 89, 
  // 886
  115, 90, 
  // 888
  75, 73, 
  // 890
  111, 91, 
  // 892
  112, 92, 
  // 894
  113, 93, 
  // 896
  114, 94, 
  // 898
  115, 95, 
  // 900
  75, 71, 
  // 902
  111, 96, 
  // 904
  112, 97, 
  // 906
  113, 98, 
  // 908
  114, 99, 
  // 910
  115, 100, 
  // 912
  20, 20, 
  // 914
  330, 330, 
  // 916
  331, 331, 
  // 918
  332, 332, 
  // 920
  333, 333, 
  // 922
  80, 80, 
  // 924
  75, 78, 
  // 926
  111, 101, 
  // 928
  112, 102, 
  // 930
  113, 103, 
  // 932
  114, 104, 
  // 934
  115, 105, 
  // 936
  75, 62, 
  // 938
  111, 106, 
  // 940
  112, 107, 
  // 942
  113, 108, 
  // 944
  114, 109, 
  // 946
  115, 110, 
  // 948
  75, 75, 
  // 950
  111, 111, 
  // 952
  112, 112, 
  // 954
  113, 113, 
  // 956
  114, 114, 
  // 958
  115, 115, 
  // 960
  75, 65, 
  // 962
  111, 116, 
  // 964
  112, 117, 
  // 966
  113, 118, 
  // 968
  114, 119, 
  // 970
  115, 120, 
  // 972
  75, 77, 
  // 974
  111, 121, 
  // 976
  112, 122, 
  // 978
  113, 123, 
  // 980
  114, 124, 
  // 982
  115, 125, 
  // 984
  20, 49, 
  // 986
  330, 81, 
  // 988
  331, 82, 
  // 990
  332, 83, 
  // 992
  333, 84, 
  // 994
  80, 85, 
  // 996
  65, 23, 
  // 998
  116, 126, 
  // 1000
  117, 127, 
  // 1002
  118, 128, 
  // 1004
  119, 129, 
  // 1006
  120, 134, 
  // 1008
  65, 20, 
  // 1010
  116, 330, 
  // 1012
  117, 331, 
  // 1014
  118, 332, 
  // 1016
  119, 333, 
  // 1018
  120, 80, 
  // 1020
  65, 49, 
  // 1022
  116, 81, 
  // 1024
  117, 82, 
  // 1026
  118, 83, 
  // 1028
  119, 84, 
  // 1030
  120, 85, 
  // 1032
  65, 18, 
  // 1034
  116, 86, 
  // 1036
  117, 87, 
  // 1038
  118, 88, 
  // 1040
  119, 89, 
  // 1042
  120, 90, 
  // 1044
  65, 73, 
  // 1046
  116, 91, 
  // 1048
  117, 92, 
  // 1050
  118, 93, 
  // 1052
  119, 94, 
  // 1054
  120, 95, 
  // 1056
  20, 18, 
  // 1058
  330, 86, 
  // 1060
  331, 87, 
  // 1062
  332, 88, 
  // 1064
  333, 89, 
  // 1066
  80, 90, 
  // 1068
  65, 71, 
  // 1070
  116, 96, 
  // 1072
  117, 97, 
  // 1074
  118, 98, 
  // 1076
  119, 99, 
  // 1078
  120, 100, 
  // 1080
  65, 78, 
  // 1082
  116, 101, 
  // 1084
  117, 102, 
  // 1086
  118, 103, 
  // 1088
  119, 104, 
  // 1090
  120, 105, 
  // 1092
  65, 62, 
  // 1094
  116, 106, 
  // 1096
  117, 107, 
  // 1098
  118, 108, 
  // 1100
  119, 109, 
  // 1102
  120, 110, 
  // 1104
  65, 75, 
  // 1106
  116, 111, 
  // 1108
  117, 112, 
  // 1110
  118, 113, 
  // 1112
  119, 114, 
  // 1114
  120, 115, 
  // 1116
  23, 23, 
  // 1118
  65, 65, 
  // 1120
  116, 116, 
  // 1122
  117, 117, 
  // 1124
  118, 118, 
  // 1126
  119, 119, 
  // 1128
  120, 120, 
  // 1130
  20, 73, 
  // 1132
  330, 91, 
  // 1134
  331, 92, 
  // 1136
  332, 93, 
  // 1138
  333, 94, 
  // 1140
  80, 95, 
  // 1142
  65, 77, 
  // 1144
  116, 121, 
  // 1146
  117, 122, 
  // 1148
  118, 123, 
  // 1150
  119, 124, 
  // 1152
  120, 125, 
  // 1154
  126, 126, 
  // 1156
  77, 23, 
  // 1158
  121, 126, 
  // 1160
  122, 127, 
  // 1162
  123, 128, 
  // 1164
  124, 129, 
  // 1166
  125, 134, 
  // 1168
  77, 20, 
  // 1170
  121, 330, 
  // 1172
  122, 331, 
  // 1174
  123, 332, 
  // 1176
  124, 333, 
  // 1178
  125, 80, 
  // 1180
  77, 49, 
  // 1182
  121, 81, 
  // 1184
  122, 82, 
  // 1186
  123, 83, 
  // 1188
  124, 84, 
  // 1190
  125, 85, 
  // 1192
  77, 18, 
  // 1194
  121, 86, 
  // 1196
  122, 87, 
  // 1198
  123, 88, 
  // 1200
  124, 89, 
  // 1202
  125, 90, 
  // 1204
  20, 71, 
  // 1206
  330, 96, 
  // 1208
  331, 97, 
  // 1210
  332, 98, 
  // 1212
  333, 99, 
  // 1214
  80, 100, 
  // 1216
  77, 73, 
  // 1218
  121, 91, 
  // 1220
  122, 92, 
  // 1222
  123, 93, 
  // 1224
  124, 94, 
  // 1226
  125, 95, 
  // 1228
  127, 127, 
  // 1230
  77, 71, 
  // 1232
  121, 96, 
  // 1234
  122, 97, 
  // 1236
  123, 98, 
  // 1238
  124, 99, 
  // 1240
  125, 100, 
  // 1242
  77, 78, 
  // 1244
  121, 101, 
  // 1246
  122, 102, 
  // 1248
  123, 103, 
  // 1250
  124, 104, 
  // 1252
  125, 105, 
  // 1254
  77, 62, 
  // 1256
  121, 106, 
  // 1258
  122, 107, 
  // 1260
  123, 108, 
  // 1262
  124, 109, 
  // 1264
  125, 110, 
  // 1266
  128, 128, 
  // 1268
  77, 75, 
  // 1270
  121, 111, 
  // 1272
  122, 112, 
  // 1274
  123, 113, 
  // 1276
  124, 114, 
  // 1278
  125, 115, 
  // 1280
  20, 78, 
  // 1282
  330, 101, 
  // 1284
  331, 102, 
  // 1286
  332, 103, 
  // 1288
  333, 104, 
  // 1290
  80, 105, 
  // 1292
  77, 65, 
  // 1294
  121, 116, 
  // 1296
  122, 117, 
  // 1298
  123, 118, 
  // 1300
  124, 119, 
  // 1302
  125, 120, 
  // 1304
  77, 77, 
  // 1306
  121, 121, 
  // 1308
  122, 122, 
  // 1310
  123, 123, 
  // 1312
  124, 124, 
  // 1314
  125, 125, 
  // 1316
  75, 
  // 1317
  72, 75, 
  // 1319
  72, 
  // 1320
  22, 22, 
  // 1322
  129, 129, 
  // 1324
  30, 43, 
  // 1326
  27, 45, 
  // 1328
  33, 47, 
  // 1330
  22, 22, 22, 
  // 1333
  31, 31, 23, 
  // 1336
  28, 28, 20, 
  // 1339
  34, 34, 49, 
  // 1342
  35, 30, 
  // 1344
  35, 27, 
  // 1346
  35, 33, 
  // 1348
  30, 30, 35, 
  // 1351
  31, 31, 62, 
  // 1354
  27, 27, 35, 
  // 1357
  28, 28, 62, 
  // 1360
  33, 33, 35, 
  // 1363
  34, 34, 62, 
  // 1366
  22, 22, 22, 22, 
  // 1370
  22, 22, 130, 
  // 1373
  30, 30, 131, 
  // 1376
  30, 30, 30, 131, 
  // 1380
  27, 27, 131, 
  // 1383
  33, 33, 131, 
  // 1386
  27, 27, 27, 131, 
  // 1390
  33, 33, 33, 131, 
  // 1394
  22, 22, 132, 
  // 1397
  30, 30, 133, 
  // 1400
  27, 27, 133, 
  // 1403
  33, 33, 133, 
  // 1406
  30, 30, 30, 133, 
  // 1410
  27, 27, 27, 133, 
  // 1414
  33, 33, 33, 133, 
  // 1418
  22, 22, 135, 
  // 1421
  30, 30, 136, 
  // 1424
  27, 27, 136, 
  // 1427
  33, 33, 136, 
  // 1430
  20, 62, 
  // 1432
  30, 30, 30, 136, 
  // 1436
  27, 27, 27, 136, 
  // 1440
  33, 33, 33, 136, 
  // 1444
  22, 22, 137, 
  // 1447
  30, 30, 138, 
  // 1450
  330, 106, 
  // 1452
  27, 27, 138, 
  // 1455
  33, 33, 138, 
  // 1458
  30, 30, 30, 138, 
  // 1462
  27, 27, 27, 138, 
  // 1466
  33, 33, 33, 138, 
  // 1470
  30, 30, 
  // 1472
  331, 107, 
  // 1474
  332, 108, 
  // 1476
  333, 109, 
  // 1478
  30, 30, 30, 
  // 1481
  3, 5, 
  // 1483
  5, 5, 
  // 1485
  80, 110, 
  // 1487
  3, 5, 5, 
  // 1490
  5, 5, 5, 
  // 1493
  6, 6, 4, 
  // 1496
  39, 24, 41, 
  // 1499
  47, 41, 41, 
  // 1502
  35, 39, 47, 
  // 1505
  43, 47, 47, 
  // 1508
  37, 35, 43, 
  // 1511
  45, 43, 43, 
  // 1514
  5, 5, 5, 5, 
  // 1518
  6, 6, 4, 4, 
  // 1522
  35, 35, 35, 35, 
  // 1526
  43, 43, 43, 43, 
  // 1530
  35, 35, 35, 
  // 1533
  43, 43, 43, 
  // 1536
  31, 23, 31, 
  // 1539
  28, 20, 28, 
  // 1542
  34, 49, 34, 
  // 1545
  134, 134, 
  // 1547
  31, 31, 23, 23, 
  // 1551
  28, 28, 20, 20, 
  // 1555
  34, 34, 49, 49, 
  // 1559
  31, 23, 23, 31, 
  // 1563
  28, 20, 20, 28, 
  // 1567
  34, 49, 49, 34, 
  // 1571
  23, 29, 
  // 1573
  20, 26, 
  // 1575
  49, 32, 
  // 1577
  29, 29, 
  // 1579
  26, 26, 
  // 1581
  32, 32, 
  // 1583
  127, 127, 127, 
  // 1586
  331, 331, 331, 
  // 1589
  82, 82, 82, 
  // 1592
  128, 128, 128, 
  // 1595
  332, 332, 332, 
  // 1598
  83, 83, 83, 
  // 1601
  23, 29, 29, 
  // 1604
  20, 26, 26, 
  // 1607
  49, 32, 32, 
  // 1610
  38, 28, 
  // 1612
  40, 34, 
  // 1614
  62, 69, 
  // 1616
  35, 30, 30, 
  // 1619
  62, 20, 20, 
  // 1622
  38, 28, 28, 
  // 1625
  62, 49, 49, 
  // 1628
  40, 34, 34, 
  // 1631
  1, 1, 1, 1, 
  // 1635
  69, 69, 69, 69, 
  // 1639
  69, 69, 69, 74, 
  // 1643
  74, 74, 74, 74, 
  // 1647
  74, 74, 74, 69, 
  // 1651
  30, 30, 30, 35, 
  // 1655
  30, 30, 30, 43, 
  // 1659
  27, 27, 27, 37, 
  // 1663
  27, 27, 27, 45, 
  // 1667
  33, 33, 33, 39, 
  // 1671
  33, 33, 33, 47, 
  // 1675
  86, 72, 150, 
  // 1678
  91, 72, 151, 
  // 1681
  96, 72, 152, 
  // 1684
  101, 72, 153, 
  // 1687
  106, 72, 154, 
  // 1690
  111, 72, 155, 
  // 1693
  116, 72, 156, 
  // 1696
  121, 72, 157, 
  // 1699
  126, 72, 158, 
  // 1702
  330, 72, 159, 
  // 1705
  81, 72, 160, 
  // 1708
  79, 86, 72, 161, 
  // 1712
  79, 91, 72, 162, 
  // 1716
  79, 96, 72, 163, 
  // 1720
  79, 101, 72, 164, 
  // 1724
  79, 106, 72, 165, 
  // 1728
  79, 111, 72, 166, 
  // 1732
  79, 116, 72, 167, 
  // 1736
  79, 121, 72, 168, 
  // 1740
  79, 126, 72, 169, 
  // 1744
  79, 330, 72, 170, 
  // 1748
  79, 81, 72, 171, 
  // 1752
  126, 72, 160, 
  // 1755
  79, 126, 72, 171, 
  // 1759
  79, 330, 72, 171, 
  // 1763
  87, 72, 150, 
  // 1766
  92, 72, 151, 
  // 1769
  97, 72, 152, 
  // 1772
  102, 72, 153, 
  // 1775
  107, 72, 154, 
  // 1778
  112, 72, 155, 
  // 1781
  117, 72, 156, 
  // 1784
  122, 72, 157, 
  // 1787
  127, 72, 158, 
  // 1790
  331, 72, 159, 
  // 1793
  82, 72, 160, 
  // 1796
  79, 87, 72, 161, 
  // 1800
  79, 92, 72, 162, 
  // 1804
  79, 97, 72, 163, 
  // 1808
  79, 102, 72, 164, 
  // 1812
  79, 107, 72, 165, 
  // 1816
  79, 112, 72, 166, 
  // 1820
  79, 117, 72, 167, 
  // 1824
  79, 122, 72, 168, 
  // 1828
  79, 127, 72, 169, 
  // 1832
  79, 331, 72, 170, 
  // 1836
  79, 82, 72, 171, 
  // 1840
  127, 72, 160, 
  // 1843
  79, 127, 72, 171, 
  // 1847
  79, 331, 72, 171, 
  // 1851
  20, 75, 
  // 1853
  88, 72, 150, 
  // 1856
  93, 72, 151, 
  // 1859
  98, 72, 152, 
  // 1862
  103, 72, 153, 
  // 1865
  108, 72, 154, 
  // 1868
  330, 111, 
  // 1870
  113, 72, 155, 
  // 1873
  118, 72, 156, 
  // 1876
  123, 72, 157, 
  // 1879
  128, 72, 158, 
  // 1882
  332, 72, 159, 
  // 1885
  83, 72, 160, 
  // 1888
  79, 88, 72, 161, 
  // 1892
  79, 93, 72, 162, 
  // 1896
  79, 98, 72, 163, 
  // 1900
  79, 103, 72, 164, 
  // 1904
  331, 112, 
  // 1906
  79, 108, 72, 165, 
  // 1910
  79, 113, 72, 166, 
  // 1914
  79, 118, 72, 167, 
  // 1918
  79, 123, 72, 168, 
  // 1922
  79, 128, 72, 169, 
  // 1926
  79, 332, 72, 170, 
  // 1930
  79, 83, 72, 171, 
  // 1934
  128, 72, 160, 
  // 1937
  79, 128, 72, 171, 
  // 1941
  79, 332, 72, 171, 
  // 1945
  332, 113, 
  // 1947
  89, 72, 150, 
  // 1950
  94, 72, 151, 
  // 1953
  333, 114, 
  // 1955
  99, 72, 152, 
  // 1958
  104, 72, 153, 
  // 1961
  109, 72, 154, 
  // 1964
  114, 72, 155, 
  // 1967
  119, 72, 156, 
  // 1970
  124, 72, 157, 
  // 1973
  129, 72, 158, 
  // 1976
  333, 72, 159, 
  // 1979
  84, 72, 160, 
  // 1982
  79, 89, 72, 161, 
  // 1986
  80, 115, 
  // 1988
  79, 94, 72, 162, 
  // 1992
  79, 99, 72, 163, 
  // 1996
  79, 104, 72, 164, 
  // 2000
  79, 109, 72, 165, 
  // 2004
  79, 114, 72, 166, 
  // 2008
  79, 119, 72, 167, 
  // 2012
  79, 124, 72, 168, 
  // 2016
  79, 129, 72, 169, 
  // 2020
  79, 333, 72, 170, 
  // 2024
  79, 84, 72, 171, 
  // 2028
  129, 72, 160, 
  // 2031
  79, 129, 72, 171, 
  // 2035
  79, 333, 72, 171, 
  // 2039
  90, 72, 150, 
  // 2042
  95, 72, 151, 
  // 2045
  100, 72, 152, 
  // 2048
  105, 72, 153, 
  // 2051
  110, 72, 154, 
  // 2054
  115, 72, 155, 
  // 2057
  120, 72, 156, 
  // 2060
  125, 72, 157, 
  // 2063
  134, 72, 158, 
  // 2066
  80, 72, 159, 
  // 2069
  85, 72, 160, 
  // 2072
  79, 90, 72, 161, 
  // 2076
  79, 95, 72, 162, 
  // 2080
  79, 100, 72, 163, 
  // 2084
  79, 105, 72, 164, 
  // 2088
  79, 110, 72, 165, 
  // 2092
  79, 115, 72, 166, 
  // 2096
  79, 120, 72, 167, 
  // 2100
  79, 125, 72, 168, 
  // 2104
  79, 134, 72, 169, 
  // 2108
  79, 80, 72, 170, 
  // 2112
  79, 85, 72, 171, 
  // 2116
  134, 72, 160, 
  // 2119
  79, 134, 72, 171, 
  // 2123
  79, 80, 72, 171, 
  // 2127
  86, 72, 172, 
  // 2130
  91, 72, 173, 
  // 2133
  96, 72, 174, 
  // 2136
  101, 72, 175, 
  // 2139
  106, 72, 176, 
  // 2142
  111, 72, 177, 
  // 2145
  116, 72, 178, 
  // 2148
  121, 72, 179, 
  // 2151
  126, 72, 180, 
  // 2154
  330, 72, 181, 
  // 2157
  81, 72, 182, 
  // 2160
  79, 86, 72, 183, 
  // 2164
  79, 91, 72, 184, 
  // 2168
  79, 96, 72, 185, 
  // 2172
  79, 101, 72, 186, 
  // 2176
  79, 106, 72, 187, 
  // 2180
  79, 111, 72, 188, 
  // 2184
  79, 116, 72, 189, 
  // 2188
  79, 121, 72, 190, 
  // 2192
  79, 126, 72, 191, 
  // 2196
  79, 330, 72, 192, 
  // 2200
  79, 81, 72, 193, 
  // 2204
  126, 72, 182, 
  // 2207
  79, 126, 72, 193, 
  // 2211
  79, 330, 72, 193, 
  // 2215
  87, 72, 172, 
  // 2218
  92, 72, 173, 
  // 2221
  97, 72, 174, 
  // 2224
  102, 72, 175, 
  // 2227
  107, 72, 176, 
  // 2230
  112, 72, 177, 
  // 2233
  117, 72, 178, 
  // 2236
  122, 72, 179, 
  // 2239
  127, 72, 180, 
  // 2242
  331, 72, 181, 
  // 2245
  82, 72, 182, 
  // 2248
  79, 87, 72, 183, 
  // 2252
  79, 92, 72, 184, 
  // 2256
  79, 97, 72, 185, 
  // 2260
  79, 102, 72, 186, 
  // 2264
  79, 107, 72, 187, 
  // 2268
  79, 112, 72, 188, 
  // 2272
  79, 117, 72, 189, 
  // 2276
  79, 122, 72, 190, 
  // 2280
  79, 127, 72, 191, 
  // 2284
  79, 331, 72, 192, 
  // 2288
  79, 82, 72, 193, 
  // 2292
  127, 72, 182, 
  // 2295
  79, 127, 72, 193, 
  // 2299
  79, 331, 72, 193, 
  // 2303
  88, 72, 172, 
  // 2306
  93, 72, 173, 
  // 2309
  98, 72, 174, 
  // 2312
  103, 72, 175, 
  // 2315
  108, 72, 176, 
  // 2318
  113, 72, 177, 
  // 2321
  118, 72, 178, 
  // 2324
  123, 72, 179, 
  // 2327
  128, 72, 180, 
  // 2330
  332, 72, 181, 
  // 2333
  83, 72, 182, 
  // 2336
  79, 88, 72, 183, 
  // 2340
  79, 93, 72, 184, 
  // 2344
  79, 98, 72, 185, 
  // 2348
  79, 103, 72, 186, 
  // 2352
  79, 108, 72, 187, 
  // 2356
  79, 113, 72, 188, 
  // 2360
  79, 118, 72, 189, 
  // 2364
  79, 123, 72, 190, 
  // 2368
  79, 128, 72, 191, 
  // 2372
  79, 332, 72, 192, 
  // 2376
  79, 83, 72, 193, 
  // 2380
  128, 72, 182, 
  // 2383
  79, 128, 72, 193, 
  // 2387
  79, 332, 72, 193, 
  // 2391
  89, 72, 172, 
  // 2394
  94, 72, 173, 
  // 2397
  99, 72, 174, 
  // 2400
  104, 72, 175, 
  // 2403
  109, 72, 176, 
  // 2406
  114, 72, 177, 
  // 2409
  119, 72, 178, 
  // 2412
  124, 72, 179, 
  // 2415
  129, 72, 180, 
  // 2418
  333, 72, 181, 
  // 2421
  84, 72, 182, 
  // 2424
  79, 89, 72, 183, 
  // 2428
  79, 94, 72, 184, 
  // 2432
  79, 99, 72, 185, 
  // 2436
  79, 104, 72, 186, 
  // 2440
  79, 109, 72, 187, 
  // 2444
  79, 114, 72, 188, 
  // 2448
  79, 119, 72, 189, 
  // 2452
  79, 124, 72, 190, 
  // 2456
  79, 129, 72, 191, 
  // 2460
  79, 333, 72, 192, 
  // 2464
  79, 84, 72, 193, 
  // 2468
  129, 72, 182, 
  // 2471
  79, 129, 72, 193, 
  // 2475
  79, 333, 72, 193, 
  // 2479
  90, 72, 172, 
  // 2482
  95, 72, 173, 
  // 2485
  100, 72, 174, 
  // 2488
  105, 72, 175, 
  // 2491
  110, 72, 176, 
  // 2494
  115, 72, 177, 
  // 2497
  120, 72, 178, 
  // 2500
  125, 72, 179, 
  // 2503
  134, 72, 180, 
  // 2506
  80, 72, 181, 
  // 2509
  85, 72, 182, 
  // 2512
  79, 90, 72, 183, 
  // 2516
  79, 95, 72, 184, 
  // 2520
  79, 100, 72, 185, 
  // 2524
  79, 105, 72, 186, 
  // 2528
  79, 110, 72, 187, 
  // 2532
  79, 115, 72, 188, 
  // 2536
  79, 120, 72, 189, 
  // 2540
  79, 125, 72, 190, 
  // 2544
  79, 134, 72, 191, 
  // 2548
  79, 80, 72, 192, 
  // 2552
  79, 85, 72, 193, 
  // 2556
  134, 72, 182, 
  // 2559
  79, 134, 72, 193, 
  // 2563
  79, 80, 72, 193, 
  // 2567
  86, 72, 194, 
  // 2570
  91, 72, 195, 
  // 2573
  96, 72, 196, 
  // 2576
  101, 72, 197, 
  // 2579
  20, 65, 
  // 2581
  106, 72, 198, 
  // 2584
  111, 72, 199, 
  // 2587
  116, 72, 200, 
  // 2590
  121, 72, 201, 
  // 2593
  126, 72, 202, 
  // 2596
  330, 116, 
  // 2598
  330, 72, 203, 
  // 2601
  81, 72, 204, 
  // 2604
  79, 86, 72, 205, 
  // 2608
  79, 91, 72, 206, 
  // 2612
  79, 96, 72, 207, 
  // 2616
  331, 117, 
  // 2618
  79, 101, 72, 208, 
  // 2622
  79, 106, 72, 209, 
  // 2626
  79, 111, 72, 210, 
  // 2630
  79, 116, 72, 211, 
  // 2634
  79, 121, 72, 212, 
  // 2638
  332, 118, 
  // 2640
  79, 126, 72, 213, 
  // 2644
  79, 330, 72, 214, 
  // 2648
  79, 81, 72, 215, 
  // 2652
  126, 72, 204, 
  // 2655
  79, 126, 72, 215, 
  // 2659
  79, 330, 72, 215, 
  // 2663
  333, 119, 
  // 2665
  87, 72, 194, 
  // 2668
  92, 72, 195, 
  // 2671
  97, 72, 196, 
  // 2674
  102, 72, 197, 
  // 2677
  80, 120, 
  // 2679
  107, 72, 198, 
  // 2682
  112, 72, 199, 
  // 2685
  117, 72, 200, 
  // 2688
  122, 72, 201, 
  // 2691
  127, 72, 202, 
  // 2694
  331, 72, 203, 
  // 2697
  82, 72, 204, 
  // 2700
  79, 87, 72, 205, 
  // 2704
  79, 92, 72, 206, 
  // 2708
  79, 97, 72, 207, 
  // 2712
  79, 102, 72, 208, 
  // 2716
  79, 107, 72, 209, 
  // 2720
  79, 112, 72, 210, 
  // 2724
  79, 117, 72, 211, 
  // 2728
  79, 122, 72, 212, 
  // 2732
  79, 127, 72, 213, 
  // 2736
  79, 331, 72, 214, 
  // 2740
  79, 82, 72, 215, 
  // 2744
  127, 72, 204, 
  // 2747
  79, 127, 72, 215, 
  // 2751
  79, 331, 72, 215, 
  // 2755
  88, 72, 194, 
  // 2758
  93, 72, 195, 
  // 2761
  98, 72, 196, 
  // 2764
  103, 72, 197, 
  // 2767
  108, 72, 198, 
  // 2770
  113, 72, 199, 
  // 2773
  118, 72, 200, 
  // 2776
  123, 72, 201, 
  // 2779
  128, 72, 202, 
  // 2782
  332, 72, 203, 
  // 2785
  83, 72, 204, 
  // 2788
  79, 88, 72, 205, 
  // 2792
  79, 93, 72, 206, 
  // 2796
  79, 98, 72, 207, 
  // 2800
  79, 103, 72, 208, 
  // 2804
  79, 108, 72, 209, 
  // 2808
  79, 113, 72, 210, 
  // 2812
  79, 118, 72, 211, 
  // 2816
  79, 123, 72, 212, 
  // 2820
  79, 128, 72, 213, 
  // 2824
  79, 332, 72, 214, 
  // 2828
  79, 83, 72, 215, 
  // 2832
  128, 72, 204, 
  // 2835
  79, 128, 72, 215, 
  // 2839
  79, 332, 72, 215, 
  // 2843
  89, 72, 194, 
  // 2846
  94, 72, 195, 
  // 2849
  99, 72, 196, 
  // 2852
  104, 72, 197, 
  // 2855
  109, 72, 198, 
  // 2858
  114, 72, 199, 
  // 2861
  119, 72, 200, 
  // 2864
  124, 72, 201, 
  // 2867
  129, 72, 202, 
  // 2870
  333, 72, 203, 
  // 2873
  84, 72, 204, 
  // 2876
  79, 89, 72, 205, 
  // 2880
  79, 94, 72, 206, 
  // 2884
  79, 99, 72, 207, 
  // 2888
  79, 104, 72, 208, 
  // 2892
  79, 109, 72, 209, 
  // 2896
  79, 114, 72, 210, 
  // 2900
  79, 119, 72, 211, 
  // 2904
  79, 124, 72, 212, 
  // 2908
  79, 129, 72, 213, 
  // 2912
  79, 333, 72, 214, 
  // 2916
  79, 84, 72, 215, 
  // 2920
  129, 72, 204, 
  // 2923
  79, 129, 72, 215, 
  // 2927
  79, 333, 72, 215, 
  // 2931
  90, 72, 194, 
  // 2934
  95, 72, 195, 
  // 2937
  100, 72, 196, 
  // 2940
  105, 72, 197, 
  // 2943
  110, 72, 198, 
  // 2946
  115, 72, 199, 
  // 2949
  120, 72, 200, 
  // 2952
  125, 72, 201, 
  // 2955
  134, 72, 202, 
  // 2958
  80, 72, 203, 
  // 2961
  85, 72, 204, 
  // 2964
  79, 90, 72, 205, 
  // 2968
  79, 95, 72, 206, 
  // 2972
  79, 100, 72, 207, 
  // 2976
  79, 105, 72, 208, 
  // 2980
  79, 110, 72, 209, 
  // 2984
  79, 115, 72, 210, 
  // 2988
  79, 120, 72, 211, 
  // 2992
  79, 125, 72, 212, 
  // 2996
  79, 134, 72, 213, 
  // 3000
  79, 80, 72, 214, 
  // 3004
  79, 85, 72, 215, 
  // 3008
  134, 72, 204, 
  // 3011
  79, 134, 72, 215, 
  // 3015
  79, 80, 72, 215, 
  // 3019
  86, 72, 216, 
  // 3022
  91, 72, 217, 
  // 3025
  96, 72, 218, 
  // 3028
  101, 72, 219, 
  // 3031
  106, 72, 220, 
  // 3034
  111, 72, 221, 
  // 3037
  116, 72, 222, 
  // 3040
  121, 72, 223, 
  // 3043
  126, 72, 224, 
  // 3046
  330, 72, 225, 
  // 3049
  81, 72, 226, 
  // 3052
  79, 86, 72, 227, 
  // 3056
  79, 91, 72, 228, 
  // 3060
  79, 96, 72, 229, 
  // 3064
  79, 101, 72, 230, 
  // 3068
  79, 106, 72, 231, 
  // 3072
  79, 111, 72, 232, 
  // 3076
  79, 116, 72, 233, 
  // 3080
  79, 121, 72, 234, 
  // 3084
  79, 126, 72, 235, 
  // 3088
  79, 330, 72, 236, 
  // 3092
  79, 81, 72, 237, 
  // 3096
  126, 72, 226, 
  // 3099
  79, 126, 72, 237, 
  // 3103
  79, 330, 72, 237, 
  // 3107
  87, 72, 216, 
  // 3110
  92, 72, 217, 
  // 3113
  97, 72, 218, 
  // 3116
  102, 72, 219, 
  // 3119
  107, 72, 220, 
  // 3122
  112, 72, 221, 
  // 3125
  117, 72, 222, 
  // 3128
  122, 72, 223, 
  // 3131
  127, 72, 224, 
  // 3134
  331, 72, 225, 
  // 3137
  82, 72, 226, 
  // 3140
  79, 87, 72, 227, 
  // 3144
  79, 92, 72, 228, 
  // 3148
  79, 97, 72, 229, 
  // 3152
  79, 102, 72, 230, 
  // 3156
  79, 107, 72, 231, 
  // 3160
  79, 112, 72, 232, 
  // 3164
  79, 117, 72, 233, 
  // 3168
  79, 122, 72, 234, 
  // 3172
  79, 127, 72, 235, 
  // 3176
  79, 331, 72, 236, 
  // 3180
  79, 82, 72, 237, 
  // 3184
  127, 72, 226, 
  // 3187
  79, 127, 72, 237, 
  // 3191
  79, 331, 72, 237, 
  // 3195
  88, 72, 216, 
  // 3198
  93, 72, 217, 
  // 3201
  98, 72, 218, 
  // 3204
  103, 72, 219, 
  // 3207
  108, 72, 220, 
  // 3210
  113, 72, 221, 
  // 3213
  118, 72, 222, 
  // 3216
  123, 72, 223, 
  // 3219
  128, 72, 224, 
  // 3222
  332, 72, 225, 
  // 3225
  83, 72, 226, 
  // 3228
  79, 88, 72, 227, 
  // 3232
  79, 93, 72, 228, 
  // 3236
  79, 98, 72, 229, 
  // 3240
  79, 103, 72, 230, 
  // 3244
  79, 108, 72, 231, 
  // 3248
  79, 113, 72, 232, 
  // 3252
  79, 118, 72, 233, 
  // 3256
  79, 123, 72, 234, 
  // 3260
  79, 128, 72, 235, 
  // 3264
  79, 332, 72, 236, 
  // 3268
  79, 83, 72, 237, 
  // 3272
  128, 72, 226, 
  // 3275
  79, 128, 72, 237, 
  // 3279
  79, 332, 72, 237, 
  // 3283
  89, 72, 216, 
  // 3286
  20, 77, 
  // 3288
  94, 72, 217, 
  // 3291
  99, 72, 218, 
  // 3294
  104, 72, 219, 
  // 3297
  109, 72, 220, 
  // 3300
  114, 72, 221, 
  // 3303
  119, 72, 222, 
  // 3306
  124, 72, 223, 
  // 3309
  129, 72, 224, 
  // 3312
  333, 72, 225, 
  // 3315
  84, 72, 226, 
  // 3318
  330, 121, 
  // 3320
  79, 89, 72, 227, 
  // 3324
  79, 94, 72, 228, 
  // 3328
  79, 99, 72, 229, 
  // 3332
  79, 104, 72, 230, 
  // 3336
  79, 109, 72, 231, 
  // 3340
  79, 114, 72, 232, 
  // 3344
  79, 119, 72, 233, 
  // 3348
  79, 124, 72, 234, 
  // 3352
  79, 129, 72, 235, 
  // 3356
  79, 333, 72, 236, 
  // 3360
  331, 122, 
  // 3362
  79, 84, 72, 237, 
  // 3366
  129, 72, 226, 
  // 3369
  79, 129, 72, 237, 
  // 3373
  79, 333, 72, 237, 
  // 3377
  332, 123, 
  // 3379
  90, 72, 216, 
  // 3382
  95, 72, 217, 
  // 3385
  100, 72, 218, 
  // 3388
  105, 72, 219, 
  // 3391
  110, 72, 220, 
  // 3394
  115, 72, 221, 
  // 3397
  120, 72, 222, 
  // 3400
  125, 72, 223, 
  // 3403
  333, 124, 
  // 3405
  134, 72, 224, 
  // 3408
  80, 72, 225, 
  // 3411
  85, 72, 226, 
  // 3414
  79, 90, 72, 227, 
  // 3418
  79, 95, 72, 228, 
  // 3422
  79, 100, 72, 229, 
  // 3426
  79, 105, 72, 230, 
  // 3430
  79, 110, 72, 231, 
  // 3434
  79, 115, 72, 232, 
  // 3438
  79, 120, 72, 233, 
  // 3442
  80, 125, 
  // 3444
  79, 125, 72, 234, 
  // 3448
  79, 134, 72, 235, 
  // 3452
  79, 80, 72, 236, 
  // 3456
  79, 85, 72, 237, 
  // 3460
  134, 72, 226, 
  // 3463
  79, 134, 72, 237, 
  // 3467
  79, 80, 72, 237, 
  // 3471
  86, 72, 238, 
  // 3474
  91, 72, 239, 
  // 3477
  96, 72, 240, 
  // 3480
  101, 72, 241, 
  // 3483
  106, 72, 242, 
  // 3486
  111, 72, 243, 
  // 3489
  116, 72, 244, 
  // 3492
  121, 72, 245, 
  // 3495
  126, 72, 246, 
  // 3498
  330, 72, 247, 
  // 3501
  81, 72, 248, 
  // 3504
  126, 72, 248, 
  // 3507
  87, 72, 238, 
  // 3510
  92, 72, 239, 
  // 3513
  97, 72, 240, 
  // 3516
  102, 72, 241, 
  // 3519
  107, 72, 242, 
  // 3522
  112, 72, 243, 
  // 3525
  117, 72, 244, 
  // 3528
  122, 72, 245, 
  // 3531
  127, 72, 246, 
  // 3534
  331, 72, 247, 
  // 3537
  82, 72, 248, 
  // 3540
  127, 72, 248, 
  // 3543
  88, 72, 238, 
  // 3546
  93, 72, 239, 
  // 3549
  98, 72, 240, 
  // 3552
  103, 72, 241, 
  // 3555
  108, 72, 242, 
  // 3558
  113, 72, 243, 
  // 3561
  118, 72, 244, 
  // 3564
  123, 72, 245, 
  // 3567
  128, 72, 246, 
  // 3570
  332, 72, 247, 
  // 3573
  83, 72, 248, 
  // 3576
  128, 72, 248, 
  // 3579
  89, 72, 238, 
  // 3582
  94, 72, 239, 
  // 3585
  99, 72, 240, 
  // 3588
  104, 72, 241, 
  // 3591
  109, 72, 242, 
  // 3594
  114, 72, 243, 
  // 3597
  119, 72, 244, 
  // 3600
  124, 72, 245, 
  // 3603
  129, 72, 246, 
  // 3606
  333, 72, 247, 
  // 3609
  84, 72, 248, 
  // 3612
  129, 72, 248, 
  // 3615
  90, 72, 238, 
  // 3618
  95, 72, 239, 
  // 3621
  100, 72, 240, 
  // 3624
  105, 72, 241, 
  // 3627
  110, 72, 242, 
  // 3630
  115, 72, 243, 
  // 3633
  120, 72, 244, 
  // 3636
  125, 72, 245, 
  // 3639
  134, 72, 246, 
  // 3642
  80, 72, 247, 
  // 3645
  85, 72, 248, 
  // 3648
  134, 72, 248, 
  // 3651
  23, 72, 160, 
  // 3654
  79, 23, 72, 171, 
  // 3658
  79, 20, 72, 171, 
  // 3662
  23, 72, 182, 
  // 3665
  79, 23, 72, 193, 
  // 3669
  79, 20, 72, 193, 
  // 3673
  23, 72, 204, 
  // 3676
  79, 23, 72, 215, 
  // 3680
  79, 20, 72, 215, 
  // 3684
  49, 23, 
  // 3686
  81, 126, 
  // 3688
  82, 127, 
  // 3690
  83, 128, 
  // 3692
  84, 129, 
  // 3694
  85, 134, 
  // 3696
  23, 72, 226, 
  // 3699
  79, 23, 72, 237, 
  // 3703
  79, 20, 72, 237, 
  // 3707
  23, 72, 248, 
  // 3710
  21, 249, 251, 72, 21, 
  // 3715
  21, 252, 253, 72, 21, 
  // 3720
  21, 249, 251, 72, 72, 21, 
  // 3726
  21, 252, 253, 72, 72, 21, 
  // 3732
  79, 62, 254, 
  // 3735
  79, 251, 72, 
  // 3738
  62, 256, 62, 
  // 3741
  62, 256, 
  // 3743
  62, 256, 62, 62, 
  // 3747
  75, 258, 75, 
  // 3750
  75, 258, 
  // 3752
  75, 258, 75, 75, 
  // 3756
  62, 259, 62, 
  // 3759
  62, 259, 
  // 3761
  62, 259, 62, 62, 
  // 3765
  75, 260, 75, 
  // 3768
  75, 260, 
  // 3770
  75, 260, 75, 75, 
  // 3774
  65, 262, 65, 
  // 3777
  65, 262, 
  // 3779
  65, 262, 65, 65, 
  // 3783
  77, 264, 77, 
  // 3786
  77, 264, 
  // 3788
  77, 264, 77, 77, 
  // 3792
  65, 265, 65, 
  // 3795
  65, 265, 
  // 3797
  65, 265, 65, 65, 
  // 3801
  77, 266, 77, 
  // 3804
  77, 266, 
  // 3806
  77, 266, 77, 77, 
  // 3810
  49, 20, 
  // 3812
  79, 268, 62, 
  // 3815
  62, 268, 
  // 3817
  81, 330, 
  // 3819
  62, 268, 62, 
  // 3822
  17, 268, 231, 62, 
  // 3826
  79, 270, 75, 
  // 3829
  75, 270, 
  // 3831
  82, 331, 
  // 3833
  75, 270, 75, 
  // 3836
  17, 270, 232, 75, 
  // 3840
  79, 272, 65, 
  // 3843
  65, 272, 
  // 3845
  65, 272, 65, 
  // 3848
  17, 272, 233, 65, 
  // 3852
  83, 332, 
  // 3854
  79, 274, 77, 
  // 3857
  77, 274, 
  // 3859
  77, 274, 77, 
  // 3862
  17, 274, 234, 77, 
  // 3866
  84, 333, 
  // 3868
  79, 276, 23, 
  // 3871
  23, 276, 
  // 3873
  23, 276, 23, 
  // 3876
  17, 276, 235, 23, 
  // 3880
  79, 278, 20, 
  // 3883
  85, 80, 
  // 3885
  20, 278, 
  // 3887
  20, 278, 20, 
  // 3890
  17, 278, 236, 20, 
  // 3894
  64, 280, 66, 
  // 3897
  76, 282, 66, 
  // 3900
  64, 280, 64, 
  // 3903
  76, 282, 76, 
  // 3906
  283, 283, 284, 
  // 3909
  283, 285, 284, 
  // 3912
  283, 286, 284, 
  // 3915
  283, 287, 284, 
  // 3918
  285, 283, 288, 
  // 3921
  285, 285, 288, 
  // 3924
  285, 286, 288, 
  // 3927
  285, 287, 288, 
  // 3930
  286, 283, 289, 
  // 3933
  286, 285, 289, 
  // 3936
  286, 286, 289, 
  // 3939
  286, 287, 289, 
  // 3942
  287, 283, 290, 
  // 3945
  287, 285, 290, 
  // 3948
  287, 286, 290, 
  // 3951
  287, 287, 290, 
  // 3954
  283, 283, 283, 284, 
  // 3958
  283, 285, 285, 284, 
  // 3962
  283, 286, 286, 284, 
  // 3966
  283, 287, 287, 284, 
  // 3970
  285, 283, 283, 288, 
  // 3974
  285, 285, 285, 288, 
  // 3978
  285, 286, 286, 288, 
  // 3982
  285, 287, 287, 288, 
  // 3986
  286, 283, 283, 289, 
  // 3990
  286, 285, 285, 289, 
  // 3994
  286, 286, 286, 289, 
  // 3998
  286, 287, 287, 289, 
  // 4002
  287, 283, 283, 290, 
  // 4006
  287, 285, 285, 290, 
  // 4010
  287, 286, 286, 290, 
  // 4014
  287, 287, 287, 290, 
  // 4018
  128, 291, 70, 62, 
  // 4022
  108, 291, 70, 62, 
  // 4026
  113, 291, 70, 62, 
  // 4030
  128, 291, 70, 23, 
  // 4034
  108, 291, 70, 23, 
  // 4038
  113, 291, 70, 23, 
  // 4042
  128, 292, 70, 106, 
  // 4046
  108, 292, 70, 106, 
  // 4050
  113, 292, 70, 106, 
  // 4054
  128, 292, 70, 126, 
  // 4058
  108, 292, 70, 126, 
  // 4062
  113, 292, 70, 126, 
  // 4066
  128, 293, 70, 106, 
  // 4070
  108, 293, 70, 106, 
  // 4074
  113, 293, 70, 106, 
  // 4078
  128, 293, 70, 126, 
  // 4082
  108, 293, 70, 126, 
  // 4086
  113, 293, 70, 126, 
  // 4090
  128, 294, 70, 108, 
  // 4094
  108, 294, 70, 108, 
  // 4098
  113, 294, 70, 108, 
  // 4102
  128, 294, 70, 128, 
  // 4106
  108, 294, 70, 128, 
  // 4110
  113, 294, 70, 128, 
  // 4114
  128, 295, 70, 108, 
  // 4118
  108, 295, 70, 108, 
  // 4122
  113, 295, 70, 108, 
  // 4126
  128, 295, 70, 128, 
  // 4130
  108, 295, 70, 128, 
  // 4134
  113, 295, 70, 128, 
  // 4138
  23, 296, 70, 106, 
  // 4142
  23, 297, 70, 108, 
  // 4146
  23, 296, 70, 126, 
  // 4150
  23, 297, 70, 128, 
  // 4154
  128, 292, 106, 
  // 4157
  108, 292, 106, 
  // 4160
  113, 292, 106, 
  // 4163
  128, 294, 108, 
  // 4166
  108, 294, 108, 
  // 4169
  113, 294, 108, 
  // 4172
  128, 291, 62, 
  // 4175
  108, 291, 62, 
  // 4178
  113, 291, 62, 
  // 4181
  23, 296, 106, 
  // 4184
  23, 297, 108, 
  // 4187
  128, 293, 106, 
  // 4190
  108, 293, 106, 
  // 4193
  113, 293, 106, 
  // 4196
  128, 295, 108, 
  // 4199
  108, 295, 108, 
  // 4202
  113, 295, 108, 
  // 4205
  128, 298, 62, 
  // 4208
  108, 298, 62, 
  // 4211
  113, 298, 62, 
  // 4214
  128, 299, 106, 
  // 4217
  108, 299, 106, 
  // 4220
  113, 299, 106, 
  // 4223
  128, 300, 106, 
  // 4226
  108, 300, 106, 
  // 4229
  113, 300, 106, 
  // 4232
  128, 301, 108, 
  // 4235
  108, 301, 108, 
  // 4238
  113, 301, 108, 
  // 4241
  128, 302, 108, 
  // 4244
  108, 302, 108, 
  // 4247
  113, 302, 108, 
  // 4250
  128, 303, 62, 
  // 4253
  108, 303, 62, 
  // 4256
  113, 303, 62, 
  // 4259
  128, 304, 62, 
  // 4262
  108, 304, 62, 
  // 4265
  113, 304, 62, 
  // 4268
  23, 305, 106, 
  // 4271
  23, 306, 108, 
  // 4274
  79, 307, 106, 128, 
  // 4278
  79, 307, 106, 108, 
  // 4282
  79, 307, 106, 113, 
  // 4286
  79, 308, 108, 128, 
  // 4290
  79, 308, 108, 108, 
  // 4294
  79, 308, 108, 113, 
  // 4298
  79, 309, 62, 128, 
  // 4302
  79, 309, 62, 108, 
  // 4306
  79, 309, 62, 113, 
  // 4310
  79, 311, 106, 128, 
  // 4314
  79, 311, 106, 108, 
  // 4318
  79, 311, 106, 113, 
  // 4322
  79, 312, 108, 128, 
  // 4326
  79, 312, 108, 108, 
  // 4330
  79, 312, 108, 113, 
  // 4334
  79, 313, 106, 23, 
  // 4338
  79, 314, 108, 23, 
  // 4342
  79, 310, 62, 128, 
  // 4346
  79, 310, 62, 108, 
  // 4350
  79, 310, 62, 113, 
  // 4354
  79, 299, 106, 128, 
  // 4358
  79, 299, 106, 108, 
  // 4362
  79, 299, 106, 113, 
  // 4366
  79, 302, 108, 128, 
  // 4370
  79, 302, 108, 108, 
  // 4374
  79, 302, 108, 113, 
  // 4378
  79, 303, 62, 128, 
  // 4382
  79, 303, 62, 108, 
  // 4386
  79, 303, 62, 113, 
  // 4390
  79, 304, 62, 128, 
  // 4394
  79, 304, 62, 108, 
  // 4398
  79, 304, 62, 113, 
  // 4402
  79, 300, 106, 128, 
  // 4406
  79, 300, 106, 108, 
  // 4410
  79, 300, 106, 113, 
  // 4414
  79, 301, 108, 128, 
  // 4418
  79, 301, 108, 108, 
  // 4422
  49, 49, 
  // 4424
  79, 301, 108, 113, 
  // 4428
  79, 305, 106, 23, 
  // 4432
  79, 306, 108, 23, 
  // 4436
  62, 291, 
  // 4438
  62, 292, 
  // 4440
  62, 294, 
  // 4442
  106, 292, 
  // 4444
  108, 294, 
  // 4446
  72, 293, 
  // 4448
  81, 81, 
  // 4450
  62, 298, 
  // 4452
  82, 82, 
  // 4454
  62, 293, 
  // 4456
  62, 295, 
  // 4458
  62, 296, 
  // 4460
  62, 297, 
  // 4462
  83, 83, 
  // 4464
  106, 295, 
  // 4466
  106, 296, 
  // 4468
  106, 297, 
  // 4470
  72, 295, 
  // 4472
  84, 84, 
  // 4474
  72, 297, 
  // 4476
  62, 309, 
  // 4478
  62, 310, 
  // 4480
  62, 307, 
  // 4482
  85, 85, 
  // 4484
  62, 312, 
  // 4486
  62, 311, 
  // 4488
  62, 308, 
  // 4490
  62, 313, 
  // 4492
  62, 314, 
  // 4494
  106, 307, 
  // 4496
  106, 308, 
  // 4498
  106, 313, 
  // 4500
  106, 314, 
  // 4502
  108, 312, 
  // 4504
  72, 311, 
  // 4506
  72, 308, 
  // 4508
  72, 314, 
  // 4510
  62, 303, 
  // 4512
  62, 304, 
  // 4514
  62, 299, 
  // 4516
  62, 301, 
  // 4518
  62, 300, 
  // 4520
  62, 302, 
  // 4522
  62, 305, 
  // 4524
  62, 306, 
  // 4526
  106, 299, 
  // 4528
  106, 302, 
  // 4530
  106, 305, 
  // 4532
  106, 306, 
  // 4534
  108, 301, 
  // 4536
  72, 300, 
  // 4538
  72, 302, 
  // 4540
  72, 306, 
  // 4542
  83, 292, 70, 106, 
  // 4546
  83, 294, 70, 108, 
  // 4550
  83, 291, 70, 62, 
  // 4554
  83, 293, 70, 106, 
  // 4558
  83, 295, 70, 108, 
  // 4562
  83, 292, 70, 126, 
  // 4566
  83, 293, 70, 126, 
  // 4570
  83, 294, 70, 128, 
  // 4574
  83, 295, 70, 128, 
  // 4578
  83, 291, 70, 23, 
  // 4582
  83, 292, 106, 
  // 4585
  83, 294, 108, 
  // 4588
  83, 291, 62, 
  // 4591
  83, 293, 106, 
  // 4594
  83, 295, 108, 
  // 4597
  83, 298, 62, 
  // 4600
  83, 299, 106, 
  // 4603
  83, 300, 106, 
  // 4606
  83, 301, 108, 
  // 4609
  83, 302, 108, 
  // 4612
  83, 303, 62, 
  // 4615
  83, 304, 62, 
  // 4618
  79, 307, 106, 83, 
  // 4622
  79, 308, 108, 83, 
  // 4626
  79, 309, 62, 83, 
  // 4630
  79, 310, 62, 83, 
  // 4634
  79, 311, 106, 83, 
  // 4638
  79, 312, 108, 83, 
  // 4642
  79, 299, 106, 83, 
  // 4646
  79, 302, 108, 83, 
  // 4650
  79, 303, 62, 83, 
  // 4654
  79, 304, 62, 83, 
  // 4658
  79, 300, 106, 83, 
  // 4662
  79, 301, 108, 83, 
  // 4666
  63, 63, 72, 
  // 4669
  63, 63, 72, 72, 
  // 4673
  63, 63, 72, 72, 72, 
  // 4678
  63, 63, 
  // 4680
  17, 68, 
  // 4682
  62, 67, 75, 316, 317, 
  // 4687
  79, 19, 
  // 4689
  19, 
  // 4690
  17, 19, 
  // 4692
  79, 19, 62, 
  // 4695
  67, 
  // 4696
  128, 292, 70, 126, 23, 
  // 4701
  128, 292, 70, 126, 126, 126, 
  // 4707
  108, 292, 70, 126, 23, 
  // 4712
  108, 292, 70, 126, 126, 126, 
  // 4718
  113, 292, 70, 126, 23, 
  // 4723
  113, 292, 70, 126, 126, 126, 
  // 4729
  23, 296, 70, 126, 23, 
  // 4734
  23, 296, 70, 126, 126, 126, 
  // 4740
  128, 291, 70, 23, 23, 
  // 4745
  128, 291, 70, 23, 23, 23, 
  // 4751
  108, 291, 70, 23, 23, 
  // 4756
  108, 291, 70, 23, 23, 23, 
  // 4762
  113, 291, 70, 23, 23, 
  // 4767
  113, 291, 70, 23, 23, 23, 
  // 4773
  128, 294, 70, 128, 128, 128, 
  // 4779
  128, 294, 70, 128, 23, 
  // 4784
  108, 294, 70, 128, 128, 128, 
  // 4790
  113, 294, 70, 128, 128, 128, 
  // 4796
  128, 293, 70, 126, 23, 
  // 4801
  128, 293, 70, 126, 23, 23, 
  // 4807
  108, 293, 70, 126, 23, 
  // 4812
  108, 293, 70, 126, 23, 23, 
  // 4818
  113, 293, 70, 126, 23, 
  // 4823
  113, 293, 70, 126, 23, 23, 
  // 4829
  128, 295, 70, 128, 23, 
  // 4834
  128, 295, 70, 128, 126, 126, 
  // 4840
  108, 295, 70, 128, 23, 
  // 4845
  108, 295, 70, 128, 126, 126, 
  // 4851
  113, 295, 70, 128, 23, 
  // 4856
  113, 295, 70, 128, 126, 126, 
  // 4862
  113, 297, 70, 128, 23, 
  // 4867
  113, 297, 70, 128, 126, 126, 
  // 4873
  79, 307, 106, 62, 128, 
  // 4878
  79, 307, 106, 62, 108, 
  // 4883
  79, 307, 106, 62, 113, 
  // 4888
  79, 313, 106, 62, 23, 
  // 4893
  79, 309, 62, 62, 128, 
  // 4898
  79, 309, 62, 62, 108, 
  // 4903
  79, 309, 62, 62, 113, 
  // 4908
  79, 311, 106, 62, 128, 
  // 4913
  79, 311, 106, 62, 108, 
  // 4918
  79, 311, 106, 62, 113, 
  // 4923
  79, 308, 108, 62, 128, 
  // 4928
  79, 308, 108, 62, 108, 
  // 4933
  79, 308, 108, 62, 113, 
  // 4938
  79, 314, 108, 62, 23, 
  // 4943
  79, 312, 108, 62, 128, 
  // 4948
  79, 312, 108, 62, 108, 
  // 4953
  79, 312, 108, 62, 113, 
  // 4958
  128, 318, 106, 62, 
  // 4962
  108, 318, 106, 62, 
  // 4966
  113, 318, 106, 62, 
  // 4970
  128, 319, 108, 62, 
  // 4974
  108, 319, 108, 62, 
  // 4978
  113, 319, 108, 62, 
  // 4982
  23, 320, 106, 62, 
  // 4986
  23, 321, 108, 62, 
  // 4990
  128, 322, 106, 62, 
  // 4994
  108, 322, 106, 62, 
  // 4998
  113, 322, 106, 62, 
  // 5002
  128, 323, 108, 62, 
  // 5006
  108, 323, 108, 62, 
  // 5010
  113, 323, 108, 62, 
  // 5014
  23, 324, 106, 62, 
  // 5018
  23, 325, 108, 62, 
  // 5022
  62, 318, 
  // 5024
  106, 318, 
  // 5026
  72, 319, 
  // 5028
  62, 319, 
  // 5030
  106, 319, 
  // 5032
  62, 320, 
  // 5034
  106, 320, 
  // 5036
  62, 321, 
  // 5038
  49, 18, 
  // 5040
  106, 321, 
  // 5042
  72, 321, 
  // 5044
  62, 326, 
  // 5046
  81, 86, 
  // 5048
  106, 326, 
  // 5050
  62, 327, 
  // 5052
  82, 87, 
  // 5054
  106, 327, 
  // 5056
  62, 328, 
  // 5058
  106, 328, 
  // 5060
  83, 88, 
  // 5062
  62, 329, 
  // 5064
  106, 329, 
  // 5066
  72, 327, 
  // 5068
  72, 329, 
  // 5070
  84, 89, 
  // 5072
  62, 322, 
  // 5074
  106, 322, 
  // 5076
  62, 323, 
  // 5078
  85, 90, 
  // 5080
  106, 323, 
  // 5082
  62, 324, 
  // 5084
  106, 324, 
  // 5086
  62, 325, 
  // 5088
  106, 325, 
  // 5090
  72, 323, 
  // 5092
  72, 325, 
  // 5094
  63, 63, 75, 
  // 5097
  62, 
  // 5098
  62, 0, 
  // 5100
  1, 1, 75, 
  // 5103
  0, 0, 
  // 5105
  113, 62, 
  // 5107
  62, 113, 
  // 5109
  62, 113, 75, 
  // 5112
  75, 113, 
  // 5114
  113, 
  // 5115
  0, 0, 75, 
  // 5118
  75, 93, 93, 
  // 5121
  62, 88, 88, 
  // 5124
  75, 93, 93, 75, 
  // 5128
  62, 88, 88, 62, 
  // 5132
  75, 101, 101, 75, 
  // 5136
  62, 96, 96, 62, 
  // 5140
  49, 73, 
  // 5142
  81, 91, 
  // 5144
  82, 92, 
  // 5146
  83, 93, 
  // 5148
  84, 94, 
  // 5150
  85, 95, 
  // 5152
  49, 71, 
  // 5154
  81, 96, 
  // 5156
  82, 97, 
  // 5158
  83, 98, 
  // 5160
  84, 99, 
  // 5162
  85, 100, 
  // 5164
  49, 78, 
  // 5166
  81, 101, 
  // 5168
  82, 102, 
  // 5170
  83, 103, 
  // 5172
  84, 104, 
  // 5174
  85, 105, 
};

static const OpenCLBuiltinStruct BuiltinTable[] = {
  // 1: convert_half2_rtp, convert_half2_rtz, convert_half2, convert_half2_rte, convert_half2_rtn, 
  { 0, 2, 0, 1, 0, 19, 100, 0 },
  { 16, 2, 0, 1, 0, 19, 100, 0 },
  { 34, 2, 0, 1, 0, 19, 100, 0 },
  { 50, 2, 0, 1, 0, 19, 100, 0 },
  { 3686, 2, 0, 1, 0, 19, 100, 0 },
  { 3817, 2, 0, 1, 0, 19, 100, 0 },
  { 4448, 2, 0, 1, 0, 19, 100, 0 },
  { 5046, 2, 0, 1, 0, 19, 100, 0 },
  { 5142, 2, 0, 1, 0, 19, 100, 0 },
  { 5154, 2, 0, 1, 0, 19, 100, 0 },
  { 5166, 2, 0, 1, 0, 19, 100, 0 },
  // 12: convert_half3_rtp, convert_half3_rtz, convert_half3, convert_half3_rte, convert_half3_rtn, 
  { 2, 2, 0, 1, 0, 19, 100, 0 },
  { 18, 2, 0, 1, 0, 19, 100, 0 },
  { 36, 2, 0, 1, 0, 19, 100, 0 },
  { 52, 2, 0, 1, 0, 19, 100, 0 },
  { 3688, 2, 0, 1, 0, 19, 100, 0 },
  { 3831, 2, 0, 1, 0, 19, 100, 0 },
  { 4452, 2, 0, 1, 0, 19, 100, 0 },
  { 5052, 2, 0, 1, 0, 19, 100, 0 },
  { 5144, 2, 0, 1, 0, 19, 100, 0 },
  { 5156, 2, 0, 1, 0, 19, 100, 0 },
  { 5168, 2, 0, 1, 0, 19, 100, 0 },
  // 23: convert_half4_rtp, convert_half4_rtz, convert_half4, convert_half4_rte, convert_half4_rtn, 
  { 4, 2, 0, 1, 0, 19, 100, 0 },
  { 20, 2, 0, 1, 0, 19, 100, 0 },
  { 38, 2, 0, 1, 0, 19, 100, 0 },
  { 54, 2, 0, 1, 0, 19, 100, 0 },
  { 3690, 2, 0, 1, 0, 19, 100, 0 },
  { 3852, 2, 0, 1, 0, 19, 100, 0 },
  { 4462, 2, 0, 1, 0, 19, 100, 0 },
  { 5060, 2, 0, 1, 0, 19, 100, 0 },
  { 5146, 2, 0, 1, 0, 19, 100, 0 },
  { 5158, 2, 0, 1, 0, 19, 100, 0 },
  { 5170, 2, 0, 1, 0, 19, 100, 0 },
  // 34: convert_half8_rtp, convert_half8_rtz, convert_half8, convert_half8_rte, convert_half8_rtn, 
  { 6, 2, 0, 1, 0, 19, 100, 0 },
  { 22, 2, 0, 1, 0, 19, 100, 0 },
  { 40, 2, 0, 1, 0, 19, 100, 0 },
  { 56, 2, 0, 1, 0, 19, 100, 0 },
  { 3692, 2, 0, 1, 0, 19, 100, 0 },
  { 3866, 2, 0, 1, 0, 19, 100, 0 },
  { 4472, 2, 0, 1, 0, 19, 100, 0 },
  { 5070, 2, 0, 1, 0, 19, 100, 0 },
  { 5148, 2, 0, 1, 0, 19, 100, 0 },
  { 5160, 2, 0, 1, 0, 19, 100, 0 },
  { 5172, 2, 0, 1, 0, 19, 100, 0 },
  // 45: convert_half16_rtp, convert_half16_rtz, convert_half16, convert_half16_rte, convert_half16_rtn, 
  { 8, 2, 0, 1, 0, 19, 100, 0 },
  { 24, 2, 0, 1, 0, 19, 100, 0 },
  { 42, 2, 0, 1, 0, 19, 100, 0 },
  { 58, 2, 0, 1, 0, 19, 100, 0 },
  { 3694, 2, 0, 1, 0, 19, 100, 0 },
  { 3883, 2, 0, 1, 0, 19, 100, 0 },
  { 4482, 2, 0, 1, 0, 19, 100, 0 },
  { 5078, 2, 0, 1, 0, 19, 100, 0 },
  { 5150, 2, 0, 1, 0, 19, 100, 0 },
  { 5162, 2, 0, 1, 0, 19, 100, 0 },
  { 5174, 2, 0, 1, 0, 19, 100, 0 },
  // 56: convert_half_rtz, convert_half, convert_half_rte, convert_half_rtn, convert_half_rtp, 
  { 10, 2, 0, 1, 0, 19, 100, 0 },
  { 14, 2, 0, 1, 0, 19, 100, 0 },
  { 32, 2, 0, 1, 0, 19, 100, 0 },
  { 48, 2, 0, 1, 0, 19, 100, 0 },
  { 3684, 2, 0, 1, 0, 19, 100, 0 },
  { 3810, 2, 0, 1, 0, 19, 100, 0 },
  { 4422, 2, 0, 1, 0, 19, 100, 0 },
  { 5038, 2, 0, 1, 0, 19, 100, 0 },
  { 5140, 2, 0, 1, 0, 19, 100, 0 },
  { 5152, 2, 0, 1, 0, 19, 100, 0 },
  { 5164, 2, 0, 1, 0, 19, 100, 0 },
  // 67: convert_float16, convert_float16_rte, convert_float16_rtn, convert_float16_rtp, convert_float16_rtz, 
  { 12, 2, 0, 1, 0, 19, 100, 0 },
  { 130, 2, 0, 1, 0, 19, 100, 0 },
  { 214, 2, 0, 1, 0, 19, 100, 0 },
  { 286, 2, 0, 1, 0, 19, 100, 0 },
  { 370, 2, 0, 1, 0, 19, 100, 0 },
  { 454, 2, 0, 1, 0, 19, 100, 0 },
  { 538, 2, 0, 1, 0, 19, 100, 0 },
  { 622, 2, 0, 1, 0, 19, 100, 0 },
  { 706, 2, 0, 1, 0, 19, 100, 0 },
  { 778, 2, 0, 1, 0, 19, 100, 0 },
  { 1545, 2, 0, 1, 0, 19, 100, 0 },
  // 78: convert_float_rte, convert_float_rtn, convert_float_rtp, convert_float_rtz, convert_float, 
  { 26, 2, 0, 1, 0, 19, 100, 0 },
  { 96, 2, 0, 1, 0, 19, 100, 0 },
  { 180, 2, 0, 1, 0, 19, 100, 0 },
  { 264, 2, 0, 1, 0, 19, 100, 0 },
  { 348, 2, 0, 1, 0, 19, 100, 0 },
  { 420, 2, 0, 1, 0, 19, 100, 0 },
  { 504, 2, 0, 1, 0, 19, 100, 0 },
  { 588, 2, 0, 1, 0, 19, 100, 0 },
  { 672, 2, 0, 1, 0, 19, 100, 0 },
  { 756, 2, 0, 1, 0, 19, 100, 0 },
  { 1116, 2, 0, 1, 0, 19, 100, 0 },
  // 89: convert_float2_rte, convert_float2_rtn, convert_float2_rtp, convert_float2_rtz, convert_float2, 
  { 28, 2, 0, 1, 0, 19, 100, 0 },
  { 98, 2, 0, 1, 0, 19, 100, 0 },
  { 182, 2, 0, 1, 0, 19, 100, 0 },
  { 266, 2, 0, 1, 0, 19, 100, 0 },
  { 350, 2, 0, 1, 0, 19, 100, 0 },
  { 434, 2, 0, 1, 0, 19, 100, 0 },
  { 518, 2, 0, 1, 0, 19, 100, 0 },
  { 590, 2, 0, 1, 0, 19, 100, 0 },
  { 674, 2, 0, 1, 0, 19, 100, 0 },
  { 758, 2, 0, 1, 0, 19, 100, 0 },
  { 1154, 2, 0, 1, 0, 19, 100, 0 },
  // 100: convert_float3_rte, convert_float3_rtn, convert_float3_rtp, convert_float3_rtz, convert_float3, 
  { 30, 2, 0, 1, 0, 19, 100, 0 },
  { 112, 2, 0, 1, 0, 19, 100, 0 },
  { 196, 2, 0, 1, 0, 19, 100, 0 },
  { 268, 2, 0, 1, 0, 19, 100, 0 },
  { 352, 2, 0, 1, 0, 19, 100, 0 },
  { 436, 2, 0, 1, 0, 19, 100, 0 },
  { 520, 2, 0, 1, 0, 19, 100, 0 },
  { 604, 2, 0, 1, 0, 19, 100, 0 },
  { 688, 2, 0, 1, 0, 19, 100, 0 },
  { 760, 2, 0, 1, 0, 19, 100, 0 },
  { 1228, 2, 0, 1, 0, 19, 100, 0 },
  // 111: convert_float4_rte, convert_float4_rtn, convert_float4_rtp, convert_float4_rtz, convert_float4, 
  { 44, 2, 0, 1, 0, 19, 100, 0 },
  { 114, 2, 0, 1, 0, 19, 100, 0 },
  { 198, 2, 0, 1, 0, 19, 100, 0 },
  { 282, 2, 0, 1, 0, 19, 100, 0 },
  { 366, 2, 0, 1, 0, 19, 100, 0 },
  { 438, 2, 0, 1, 0, 19, 100, 0 },
  { 522, 2, 0, 1, 0, 19, 100, 0 },
  { 606, 2, 0, 1, 0, 19, 100, 0 },
  { 690, 2, 0, 1, 0, 19, 100, 0 },
  { 774, 2, 0, 1, 0, 19, 100, 0 },
  { 1266, 2, 0, 1, 0, 19, 100, 0 },
  // 122: convert_float8_rte, convert_float8_rtn, convert_float8_rtp, convert_float8_rtz, convert_float8, 
  { 46, 2, 0, 1, 0, 19, 100, 0 },
  { 116, 2, 0, 1, 0, 19, 100, 0 },
  { 200, 2, 0, 1, 0, 19, 100, 0 },
  { 284, 2, 0, 1, 0, 19, 100, 0 },
  { 368, 2, 0, 1, 0, 19, 100, 0 },
  { 452, 2, 0, 1, 0, 19, 100, 0 },
  { 536, 2, 0, 1, 0, 19, 100, 0 },
  { 608, 2, 0, 1, 0, 19, 100, 0 },
  { 692, 2, 0, 1, 0, 19, 100, 0 },
  { 776, 2, 0, 1, 0, 19, 100, 0 },
  { 1322, 2, 0, 1, 0, 19, 100, 0 },
  // 133: convert_char, convert_char_rte, convert_char_rtn, convert_char_rtp, convert_char_rtz, convert_char_sat, convert_char_sat_rte, convert_char_sat_rtn, convert_char_sat_rtp, convert_char_sat_rtz, 
  { 60, 2, 0, 1, 0, 19, 100, 0 },
  { 72, 2, 0, 1, 0, 19, 100, 0 },
  { 84, 2, 0, 1, 0, 19, 100, 0 },
  { 100, 2, 0, 1, 0, 19, 100, 0 },
  { 118, 2, 0, 1, 0, 19, 100, 0 },
  { 132, 2, 0, 1, 0, 19, 100, 0 },
  { 144, 2, 0, 1, 0, 19, 100, 0 },
  { 156, 2, 0, 1, 0, 19, 100, 0 },
  { 168, 2, 0, 1, 0, 19, 100, 0 },
  { 184, 2, 0, 1, 0, 19, 100, 0 },
  { 202, 2, 0, 1, 0, 19, 100, 0 },
  // 144: convert_char2, convert_char2_rte, convert_char2_rtn, convert_char2_rtp, convert_char2_rtz, convert_char2_sat, convert_char2_sat_rte, convert_char2_sat_rtn, convert_char2_sat_rtp, convert_char2_sat_rtz, 
  { 62, 2, 0, 1, 0, 19, 100, 0 },
  { 74, 2, 0, 1, 0, 19, 100, 0 },
  { 86, 2, 0, 1, 0, 19, 100, 0 },
  { 102, 2, 0, 1, 0, 19, 100, 0 },
  { 120, 2, 0, 1, 0, 19, 100, 0 },
  { 134, 2, 0, 1, 0, 19, 100, 0 },
  { 146, 2, 0, 1, 0, 19, 100, 0 },
  { 158, 2, 0, 1, 0, 19, 100, 0 },
  { 170, 2, 0, 1, 0, 19, 100, 0 },
  { 186, 2, 0, 1, 0, 19, 100, 0 },
  { 204, 2, 0, 1, 0, 19, 100, 0 },
  // 155: convert_char3, convert_char3_rte, convert_char3_rtn, convert_char3_rtp, convert_char3_rtz, convert_char3_sat, convert_char3_sat_rte, convert_char3_sat_rtn, convert_char3_sat_rtp, convert_char3_sat_rtz, 
  { 64, 2, 0, 1, 0, 19, 100, 0 },
  { 76, 2, 0, 1, 0, 19, 100, 0 },
  { 88, 2, 0, 1, 0, 19, 100, 0 },
  { 104, 2, 0, 1, 0, 19, 100, 0 },
  { 122, 2, 0, 1, 0, 19, 100, 0 },
  { 136, 2, 0, 1, 0, 19, 100, 0 },
  { 148, 2, 0, 1, 0, 19, 100, 0 },
  { 160, 2, 0, 1, 0, 19, 100, 0 },
  { 172, 2, 0, 1, 0, 19, 100, 0 },
  { 188, 2, 0, 1, 0, 19, 100, 0 },
  { 206, 2, 0, 1, 0, 19, 100, 0 },
  // 166: convert_char4, convert_char4_rte, convert_char4_rtn, convert_char4_rtp, convert_char4_rtz, convert_char4_sat, convert_char4_sat_rte, convert_char4_sat_rtn, convert_char4_sat_rtp, convert_char4_sat_rtz, 
  { 66, 2, 0, 1, 0, 19, 100, 0 },
  { 78, 2, 0, 1, 0, 19, 100, 0 },
  { 90, 2, 0, 1, 0, 19, 100, 0 },
  { 106, 2, 0, 1, 0, 19, 100, 0 },
  { 124, 2, 0, 1, 0, 19, 100, 0 },
  { 138, 2, 0, 1, 0, 19, 100, 0 },
  { 150, 2, 0, 1, 0, 19, 100, 0 },
  { 162, 2, 0, 1, 0, 19, 100, 0 },
  { 174, 2, 0, 1, 0, 19, 100, 0 },
  { 190, 2, 0, 1, 0, 19, 100, 0 },
  { 208, 2, 0, 1, 0, 19, 100, 0 },
  // 177: convert_char8, convert_char8_rte, convert_char8_rtn, convert_char8_rtp, convert_char8_rtz, convert_char8_sat, convert_char8_sat_rte, convert_char8_sat_rtn, convert_char8_sat_rtp, convert_char8_sat_rtz, 
  { 68, 2, 0, 1, 0, 19, 100, 0 },
  { 80, 2, 0, 1, 0, 19, 100, 0 },
  { 92, 2, 0, 1, 0, 19, 100, 0 },
  { 108, 2, 0, 1, 0, 19, 100, 0 },
  { 126, 2, 0, 1, 0, 19, 100, 0 },
  { 140, 2, 0, 1, 0, 19, 100, 0 },
  { 152, 2, 0, 1, 0, 19, 100, 0 },
  { 164, 2, 0, 1, 0, 19, 100, 0 },
  { 176, 2, 0, 1, 0, 19, 100, 0 },
  { 192, 2, 0, 1, 0, 19, 100, 0 },
  { 210, 2, 0, 1, 0, 19, 100, 0 },
  // 188: convert_char16, convert_char16_rte, convert_char16_rtn, convert_char16_rtp, convert_char16_rtz, convert_char16_sat, convert_char16_sat_rte, convert_char16_sat_rtn, convert_char16_sat_rtp, convert_char16_sat_rtz, 
  { 70, 2, 0, 1, 0, 19, 100, 0 },
  { 82, 2, 0, 1, 0, 19, 100, 0 },
  { 94, 2, 0, 1, 0, 19, 100, 0 },
  { 110, 2, 0, 1, 0, 19, 100, 0 },
  { 128, 2, 0, 1, 0, 19, 100, 0 },
  { 142, 2, 0, 1, 0, 19, 100, 0 },
  { 154, 2, 0, 1, 0, 19, 100, 0 },
  { 166, 2, 0, 1, 0, 19, 100, 0 },
  { 178, 2, 0, 1, 0, 19, 100, 0 },
  { 194, 2, 0, 1, 0, 19, 100, 0 },
  { 212, 2, 0, 1, 0, 19, 100, 0 },
  // 199: convert_uchar, convert_uchar_rte, convert_uchar_rtn, convert_uchar_rtp, convert_uchar_rtz, convert_uchar_sat, convert_uchar_sat_rte, convert_uchar_sat_rtn, convert_uchar_sat_rtp, convert_uchar_sat_rtz, 
  { 216, 2, 0, 1, 0, 19, 100, 0 },
  { 228, 2, 0, 1, 0, 19, 100, 0 },
  { 240, 2, 0, 1, 0, 19, 100, 0 },
  { 252, 2, 0, 1, 0, 19, 100, 0 },
  { 270, 2, 0, 1, 0, 19, 100, 0 },
  { 288, 2, 0, 1, 0, 19, 100, 0 },
  { 300, 2, 0, 1, 0, 19, 100, 0 },
  { 312, 2, 0, 1, 0, 19, 100, 0 },
  { 324, 2, 0, 1, 0, 19, 100, 0 },
  { 336, 2, 0, 1, 0, 19, 100, 0 },
  { 354, 2, 0, 1, 0, 19, 100, 0 },
  // 210: convert_uchar2, convert_uchar2_rte, convert_uchar2_rtn, convert_uchar2_rtp, convert_uchar2_rtz, convert_uchar2_sat, convert_uchar2_sat_rte, convert_uchar2_sat_rtn, convert_uchar2_sat_rtp, convert_uchar2_sat_rtz, 
  { 218, 2, 0, 1, 0, 19, 100, 0 },
  { 230, 2, 0, 1, 0, 19, 100, 0 },
  { 242, 2, 0, 1, 0, 19, 100, 0 },
  { 254, 2, 0, 1, 0, 19, 100, 0 },
  { 272, 2, 0, 1, 0, 19, 100, 0 },
  { 290, 2, 0, 1, 0, 19, 100, 0 },
  { 302, 2, 0, 1, 0, 19, 100, 0 },
  { 314, 2, 0, 1, 0, 19, 100, 0 },
  { 326, 2, 0, 1, 0, 19, 100, 0 },
  { 338, 2, 0, 1, 0, 19, 100, 0 },
  { 356, 2, 0, 1, 0, 19, 100, 0 },
  // 221: convert_uchar3, convert_uchar3_rte, convert_uchar3_rtn, convert_uchar3_rtp, convert_uchar3_rtz, convert_uchar3_sat, convert_uchar3_sat_rte, convert_uchar3_sat_rtn, convert_uchar3_sat_rtp, convert_uchar3_sat_rtz, 
  { 220, 2, 0, 1, 0, 19, 100, 0 },
  { 232, 2, 0, 1, 0, 19, 100, 0 },
  { 244, 2, 0, 1, 0, 19, 100, 0 },
  { 256, 2, 0, 1, 0, 19, 100, 0 },
  { 274, 2, 0, 1, 0, 19, 100, 0 },
  { 292, 2, 0, 1, 0, 19, 100, 0 },
  { 304, 2, 0, 1, 0, 19, 100, 0 },
  { 316, 2, 0, 1, 0, 19, 100, 0 },
  { 328, 2, 0, 1, 0, 19, 100, 0 },
  { 340, 2, 0, 1, 0, 19, 100, 0 },
  { 358, 2, 0, 1, 0, 19, 100, 0 },
  // 232: convert_uchar4, convert_uchar4_rte, convert_uchar4_rtn, convert_uchar4_rtp, convert_uchar4_rtz, convert_uchar4_sat, convert_uchar4_sat_rte, convert_uchar4_sat_rtn, convert_uchar4_sat_rtp, convert_uchar4_sat_rtz, 
  { 222, 2, 0, 1, 0, 19, 100, 0 },
  { 234, 2, 0, 1, 0, 19, 100, 0 },
  { 246, 2, 0, 1, 0, 19, 100, 0 },
  { 258, 2, 0, 1, 0, 19, 100, 0 },
  { 276, 2, 0, 1, 0, 19, 100, 0 },
  { 294, 2, 0, 1, 0, 19, 100, 0 },
  { 306, 2, 0, 1, 0, 19, 100, 0 },
  { 318, 2, 0, 1, 0, 19, 100, 0 },
  { 330, 2, 0, 1, 0, 19, 100, 0 },
  { 342, 2, 0, 1, 0, 19, 100, 0 },
  { 360, 2, 0, 1, 0, 19, 100, 0 },
  // 243: convert_uchar8, convert_uchar8_rte, convert_uchar8_rtn, convert_uchar8_rtp, convert_uchar8_rtz, convert_uchar8_sat, convert_uchar8_sat_rte, convert_uchar8_sat_rtn, convert_uchar8_sat_rtp, convert_uchar8_sat_rtz, 
  { 224, 2, 0, 1, 0, 19, 100, 0 },
  { 236, 2, 0, 1, 0, 19, 100, 0 },
  { 248, 2, 0, 1, 0, 19, 100, 0 },
  { 260, 2, 0, 1, 0, 19, 100, 0 },
  { 278, 2, 0, 1, 0, 19, 100, 0 },
  { 296, 2, 0, 1, 0, 19, 100, 0 },
  { 308, 2, 0, 1, 0, 19, 100, 0 },
  { 320, 2, 0, 1, 0, 19, 100, 0 },
  { 332, 2, 0, 1, 0, 19, 100, 0 },
  { 344, 2, 0, 1, 0, 19, 100, 0 },
  { 362, 2, 0, 1, 0, 19, 100, 0 },
  // 254: convert_uchar16, convert_uchar16_rte, convert_uchar16_rtn, convert_uchar16_rtp, convert_uchar16_rtz, convert_uchar16_sat, convert_uchar16_sat_rte, convert_uchar16_sat_rtn, convert_uchar16_sat_rtp, convert_uchar16_sat_rtz, 
  { 226, 2, 0, 1, 0, 19, 100, 0 },
  { 238, 2, 0, 1, 0, 19, 100, 0 },
  { 250, 2, 0, 1, 0, 19, 100, 0 },
  { 262, 2, 0, 1, 0, 19, 100, 0 },
  { 280, 2, 0, 1, 0, 19, 100, 0 },
  { 298, 2, 0, 1, 0, 19, 100, 0 },
  { 310, 2, 0, 1, 0, 19, 100, 0 },
  { 322, 2, 0, 1, 0, 19, 100, 0 },
  { 334, 2, 0, 1, 0, 19, 100, 0 },
  { 346, 2, 0, 1, 0, 19, 100, 0 },
  { 364, 2, 0, 1, 0, 19, 100, 0 },
  // 265: convert_short, convert_short_rte, convert_short_rtn, convert_short_rtp, convert_short_rtz, convert_short_sat, convert_short_sat_rte, convert_short_sat_rtn, convert_short_sat_rtp, convert_short_sat_rtz, 
  { 372, 2, 0, 1, 0, 19, 100, 0 },
  { 384, 2, 0, 1, 0, 19, 100, 0 },
  { 396, 2, 0, 1, 0, 19, 100, 0 },
  { 408, 2, 0, 1, 0, 19, 100, 0 },
  { 422, 2, 0, 1, 0, 19, 100, 0 },
  { 440, 2, 0, 1, 0, 19, 100, 0 },
  { 456, 2, 0, 1, 0, 19, 100, 0 },
  { 468, 2, 0, 1, 0, 19, 100, 0 },
  { 480, 2, 0, 1, 0, 19, 100, 0 },
  { 492, 2, 0, 1, 0, 19, 100, 0 },
  { 506, 2, 0, 1, 0, 19, 100, 0 },
  // 276: convert_short2, convert_short2_rte, convert_short2_rtn, convert_short2_rtp, convert_short2_rtz, convert_short2_sat, convert_short2_sat_rte, convert_short2_sat_rtn, convert_short2_sat_rtp, convert_short2_sat_rtz, 
  { 374, 2, 0, 1, 0, 19, 100, 0 },
  { 386, 2, 0, 1, 0, 19, 100, 0 },
  { 398, 2, 0, 1, 0, 19, 100, 0 },
  { 410, 2, 0, 1, 0, 19, 100, 0 },
  { 424, 2, 0, 1, 0, 19, 100, 0 },
  { 442, 2, 0, 1, 0, 19, 100, 0 },
  { 458, 2, 0, 1, 0, 19, 100, 0 },
  { 470, 2, 0, 1, 0, 19, 100, 0 },
  { 482, 2, 0, 1, 0, 19, 100, 0 },
  { 494, 2, 0, 1, 0, 19, 100, 0 },
  { 508, 2, 0, 1, 0, 19, 100, 0 },
  // 287: convert_short3, convert_short3_rte, convert_short3_rtn, convert_short3_rtp, convert_short3_rtz, convert_short3_sat, convert_short3_sat_rte, convert_short3_sat_rtn, convert_short3_sat_rtp, convert_short3_sat_rtz, 
  { 376, 2, 0, 1, 0, 19, 100, 0 },
  { 388, 2, 0, 1, 0, 19, 100, 0 },
  { 400, 2, 0, 1, 0, 19, 100, 0 },
  { 412, 2, 0, 1, 0, 19, 100, 0 },
  { 426, 2, 0, 1, 0, 19, 100, 0 },
  { 444, 2, 0, 1, 0, 19, 100, 0 },
  { 460, 2, 0, 1, 0, 19, 100, 0 },
  { 472, 2, 0, 1, 0, 19, 100, 0 },
  { 484, 2, 0, 1, 0, 19, 100, 0 },
  { 496, 2, 0, 1, 0, 19, 100, 0 },
  { 510, 2, 0, 1, 0, 19, 100, 0 },
  // 298: convert_short4, convert_short4_rte, convert_short4_rtn, convert_short4_rtp, convert_short4_rtz, convert_short4_sat, convert_short4_sat_rte, convert_short4_sat_rtn, convert_short4_sat_rtp, convert_short4_sat_rtz, 
  { 378, 2, 0, 1, 0, 19, 100, 0 },
  { 390, 2, 0, 1, 0, 19, 100, 0 },
  { 402, 2, 0, 1, 0, 19, 100, 0 },
  { 414, 2, 0, 1, 0, 19, 100, 0 },
  { 428, 2, 0, 1, 0, 19, 100, 0 },
  { 446, 2, 0, 1, 0, 19, 100, 0 },
  { 462, 2, 0, 1, 0, 19, 100, 0 },
  { 474, 2, 0, 1, 0, 19, 100, 0 },
  { 486, 2, 0, 1, 0, 19, 100, 0 },
  { 498, 2, 0, 1, 0, 19, 100, 0 },
  { 512, 2, 0, 1, 0, 19, 100, 0 },
  // 309: convert_short8, convert_short8_rte, convert_short8_rtn, convert_short8_rtp, convert_short8_rtz, convert_short8_sat, convert_short8_sat_rte, convert_short8_sat_rtn, convert_short8_sat_rtp, convert_short8_sat_rtz, 
  { 380, 2, 0, 1, 0, 19, 100, 0 },
  { 392, 2, 0, 1, 0, 19, 100, 0 },
  { 404, 2, 0, 1, 0, 19, 100, 0 },
  { 416, 2, 0, 1, 0, 19, 100, 0 },
  { 430, 2, 0, 1, 0, 19, 100, 0 },
  { 448, 2, 0, 1, 0, 19, 100, 0 },
  { 464, 2, 0, 1, 0, 19, 100, 0 },
  { 476, 2, 0, 1, 0, 19, 100, 0 },
  { 488, 2, 0, 1, 0, 19, 100, 0 },
  { 500, 2, 0, 1, 0, 19, 100, 0 },
  { 514, 2, 0, 1, 0, 19, 100, 0 },
  // 320: convert_short16, convert_short16_rte, convert_short16_rtn, convert_short16_rtp, convert_short16_rtz, convert_short16_sat, convert_short16_sat_rte, convert_short16_sat_rtn, convert_short16_sat_rtp, convert_short16_sat_rtz, 
  { 382, 2, 0, 1, 0, 19, 100, 0 },
  { 394, 2, 0, 1, 0, 19, 100, 0 },
  { 406, 2, 0, 1, 0, 19, 100, 0 },
  { 418, 2, 0, 1, 0, 19, 100, 0 },
  { 432, 2, 0, 1, 0, 19, 100, 0 },
  { 450, 2, 0, 1, 0, 19, 100, 0 },
  { 466, 2, 0, 1, 0, 19, 100, 0 },
  { 478, 2, 0, 1, 0, 19, 100, 0 },
  { 490, 2, 0, 1, 0, 19, 100, 0 },
  { 502, 2, 0, 1, 0, 19, 100, 0 },
  { 516, 2, 0, 1, 0, 19, 100, 0 },
  // 331: convert_ushort, convert_ushort_rte, convert_ushort_rtn, convert_ushort_rtp, convert_ushort_rtz, convert_ushort_sat, convert_ushort_sat_rte, convert_ushort_sat_rtn, convert_ushort_sat_rtp, convert_ushort_sat_rtz, 
  { 524, 2, 0, 1, 0, 19, 100, 0 },
  { 540, 2, 0, 1, 0, 19, 100, 0 },
  { 552, 2, 0, 1, 0, 19, 100, 0 },
  { 564, 2, 0, 1, 0, 19, 100, 0 },
  { 576, 2, 0, 1, 0, 19, 100, 0 },
  { 592, 2, 0, 1, 0, 19, 100, 0 },
  { 610, 2, 0, 1, 0, 19, 100, 0 },
  { 624, 2, 0, 1, 0, 19, 100, 0 },
  { 636, 2, 0, 1, 0, 19, 100, 0 },
  { 648, 2, 0, 1, 0, 19, 100, 0 },
  { 660, 2, 0, 1, 0, 19, 100, 0 },
  // 342: convert_ushort2, convert_ushort2_rte, convert_ushort2_rtn, convert_ushort2_rtp, convert_ushort2_rtz, convert_ushort2_sat, convert_ushort2_sat_rte, convert_ushort2_sat_rtn, convert_ushort2_sat_rtp, convert_ushort2_sat_rtz, 
  { 526, 2, 0, 1, 0, 19, 100, 0 },
  { 542, 2, 0, 1, 0, 19, 100, 0 },
  { 554, 2, 0, 1, 0, 19, 100, 0 },
  { 566, 2, 0, 1, 0, 19, 100, 0 },
  { 578, 2, 0, 1, 0, 19, 100, 0 },
  { 594, 2, 0, 1, 0, 19, 100, 0 },
  { 612, 2, 0, 1, 0, 19, 100, 0 },
  { 626, 2, 0, 1, 0, 19, 100, 0 },
  { 638, 2, 0, 1, 0, 19, 100, 0 },
  { 650, 2, 0, 1, 0, 19, 100, 0 },
  { 662, 2, 0, 1, 0, 19, 100, 0 },
  // 353: convert_ushort3, convert_ushort3_rte, convert_ushort3_rtn, convert_ushort3_rtp, convert_ushort3_rtz, convert_ushort3_sat, convert_ushort3_sat_rte, convert_ushort3_sat_rtn, convert_ushort3_sat_rtp, convert_ushort3_sat_rtz, 
  { 528, 2, 0, 1, 0, 19, 100, 0 },
  { 544, 2, 0, 1, 0, 19, 100, 0 },
  { 556, 2, 0, 1, 0, 19, 100, 0 },
  { 568, 2, 0, 1, 0, 19, 100, 0 },
  { 580, 2, 0, 1, 0, 19, 100, 0 },
  { 596, 2, 0, 1, 0, 19, 100, 0 },
  { 614, 2, 0, 1, 0, 19, 100, 0 },
  { 628, 2, 0, 1, 0, 19, 100, 0 },
  { 640, 2, 0, 1, 0, 19, 100, 0 },
  { 652, 2, 0, 1, 0, 19, 100, 0 },
  { 664, 2, 0, 1, 0, 19, 100, 0 },
  // 364: convert_ushort4, convert_ushort4_rte, convert_ushort4_rtn, convert_ushort4_rtp, convert_ushort4_rtz, convert_ushort4_sat, convert_ushort4_sat_rte, convert_ushort4_sat_rtn, convert_ushort4_sat_rtp, convert_ushort4_sat_rtz, 
  { 530, 2, 0, 1, 0, 19, 100, 0 },
  { 546, 2, 0, 1, 0, 19, 100, 0 },
  { 558, 2, 0, 1, 0, 19, 100, 0 },
  { 570, 2, 0, 1, 0, 19, 100, 0 },
  { 582, 2, 0, 1, 0, 19, 100, 0 },
  { 598, 2, 0, 1, 0, 19, 100, 0 },
  { 616, 2, 0, 1, 0, 19, 100, 0 },
  { 630, 2, 0, 1, 0, 19, 100, 0 },
  { 642, 2, 0, 1, 0, 19, 100, 0 },
  { 654, 2, 0, 1, 0, 19, 100, 0 },
  { 666, 2, 0, 1, 0, 19, 100, 0 },
  // 375: convert_ushort8, convert_ushort8_rte, convert_ushort8_rtn, convert_ushort8_rtp, convert_ushort8_rtz, convert_ushort8_sat, convert_ushort8_sat_rte, convert_ushort8_sat_rtn, convert_ushort8_sat_rtp, convert_ushort8_sat_rtz, 
  { 532, 2, 0, 1, 0, 19, 100, 0 },
  { 548, 2, 0, 1, 0, 19, 100, 0 },
  { 560, 2, 0, 1, 0, 19, 100, 0 },
  { 572, 2, 0, 1, 0, 19, 100, 0 },
  { 584, 2, 0, 1, 0, 19, 100, 0 },
  { 600, 2, 0, 1, 0, 19, 100, 0 },
  { 618, 2, 0, 1, 0, 19, 100, 0 },
  { 632, 2, 0, 1, 0, 19, 100, 0 },
  { 644, 2, 0, 1, 0, 19, 100, 0 },
  { 656, 2, 0, 1, 0, 19, 100, 0 },
  { 668, 2, 0, 1, 0, 19, 100, 0 },
  // 386: convert_ushort16, convert_ushort16_rte, convert_ushort16_rtn, convert_ushort16_rtp, convert_ushort16_rtz, convert_ushort16_sat, convert_ushort16_sat_rte, convert_ushort16_sat_rtn, convert_ushort16_sat_rtp, convert_ushort16_sat_rtz, 
  { 534, 2, 0, 1, 0, 19, 100, 0 },
  { 550, 2, 0, 1, 0, 19, 100, 0 },
  { 562, 2, 0, 1, 0, 19, 100, 0 },
  { 574, 2, 0, 1, 0, 19, 100, 0 },
  { 586, 2, 0, 1, 0, 19, 100, 0 },
  { 602, 2, 0, 1, 0, 19, 100, 0 },
  { 620, 2, 0, 1, 0, 19, 100, 0 },
  { 634, 2, 0, 1, 0, 19, 100, 0 },
  { 646, 2, 0, 1, 0, 19, 100, 0 },
  { 658, 2, 0, 1, 0, 19, 100, 0 },
  { 670, 2, 0, 1, 0, 19, 100, 0 },
  // 397: convert_int, convert_int_rte, convert_int_rtn, convert_int_rtp, convert_int_rtz, convert_int_sat, convert_int_sat_rte, convert_int_sat_rtn, convert_int_sat_rtp, convert_int_sat_rtz, 
  { 676, 2, 0, 1, 0, 19, 100, 0 },
  { 694, 2, 0, 1, 0, 19, 100, 0 },
  { 708, 2, 0, 1, 0, 19, 100, 0 },
  { 720, 2, 0, 1, 0, 19, 100, 0 },
  { 732, 2, 0, 1, 0, 19, 100, 0 },
  { 744, 2, 0, 1, 0, 19, 100, 0 },
  { 762, 2, 0, 1, 0, 19, 100, 0 },
  { 780, 2, 0, 1, 0, 19, 100, 0 },
  { 792, 2, 0, 1, 0, 19, 100, 0 },
  { 804, 2, 0, 1, 0, 19, 100, 0 },
  { 816, 2, 0, 1, 0, 19, 100, 0 },
  // 408: convert_int2, convert_int2_rte, convert_int2_rtn, convert_int2_rtp, convert_int2_rtz, convert_int2_sat, convert_int2_sat_rte, convert_int2_sat_rtn, convert_int2_sat_rtp, convert_int2_sat_rtz, 
  { 678, 2, 0, 1, 0, 19, 100, 0 },
  { 696, 2, 0, 1, 0, 19, 100, 0 },
  { 710, 2, 0, 1, 0, 19, 100, 0 },
  { 722, 2, 0, 1, 0, 19, 100, 0 },
  { 734, 2, 0, 1, 0, 19, 100, 0 },
  { 746, 2, 0, 1, 0, 19, 100, 0 },
  { 764, 2, 0, 1, 0, 19, 100, 0 },
  { 782, 2, 0, 1, 0, 19, 100, 0 },
  { 794, 2, 0, 1, 0, 19, 100, 0 },
  { 806, 2, 0, 1, 0, 19, 100, 0 },
  { 818, 2, 0, 1, 0, 19, 100, 0 },
  // 419: convert_int3, convert_int3_rte, convert_int3_rtn, convert_int3_rtp, convert_int3_rtz, convert_int3_sat, convert_int3_sat_rte, convert_int3_sat_rtn, convert_int3_sat_rtp, convert_int3_sat_rtz, 
  { 680, 2, 0, 1, 0, 19, 100, 0 },
  { 698, 2, 0, 1, 0, 19, 100, 0 },
  { 712, 2, 0, 1, 0, 19, 100, 0 },
  { 724, 2, 0, 1, 0, 19, 100, 0 },
  { 736, 2, 0, 1, 0, 19, 100, 0 },
  { 748, 2, 0, 1, 0, 19, 100, 0 },
  { 766, 2, 0, 1, 0, 19, 100, 0 },
  { 784, 2, 0, 1, 0, 19, 100, 0 },
  { 796, 2, 0, 1, 0, 19, 100, 0 },
  { 808, 2, 0, 1, 0, 19, 100, 0 },
  { 820, 2, 0, 1, 0, 19, 100, 0 },
  // 430: convert_int4, convert_int4_rte, convert_int4_rtn, convert_int4_rtp, convert_int4_rtz, convert_int4_sat, convert_int4_sat_rte, convert_int4_sat_rtn, convert_int4_sat_rtp, convert_int4_sat_rtz, 
  { 682, 2, 0, 1, 0, 19, 100, 0 },
  { 700, 2, 0, 1, 0, 19, 100, 0 },
  { 714, 2, 0, 1, 0, 19, 100, 0 },
  { 726, 2, 0, 1, 0, 19, 100, 0 },
  { 738, 2, 0, 1, 0, 19, 100, 0 },
  { 750, 2, 0, 1, 0, 19, 100, 0 },
  { 768, 2, 0, 1, 0, 19, 100, 0 },
  { 786, 2, 0, 1, 0, 19, 100, 0 },
  { 798, 2, 0, 1, 0, 19, 100, 0 },
  { 810, 2, 0, 1, 0, 19, 100, 0 },
  { 822, 2, 0, 1, 0, 19, 100, 0 },
  // 441: convert_int8, convert_int8_rte, convert_int8_rtn, convert_int8_rtp, convert_int8_rtz, convert_int8_sat, convert_int8_sat_rte, convert_int8_sat_rtn, convert_int8_sat_rtp, convert_int8_sat_rtz, 
  { 684, 2, 0, 1, 0, 19, 100, 0 },
  { 702, 2, 0, 1, 0, 19, 100, 0 },
  { 716, 2, 0, 1, 0, 19, 100, 0 },
  { 728, 2, 0, 1, 0, 19, 100, 0 },
  { 740, 2, 0, 1, 0, 19, 100, 0 },
  { 752, 2, 0, 1, 0, 19, 100, 0 },
  { 770, 2, 0, 1, 0, 19, 100, 0 },
  { 788, 2, 0, 1, 0, 19, 100, 0 },
  { 800, 2, 0, 1, 0, 19, 100, 0 },
  { 812, 2, 0, 1, 0, 19, 100, 0 },
  { 824, 2, 0, 1, 0, 19, 100, 0 },
  // 452: convert_int16, convert_int16_rte, convert_int16_rtn, convert_int16_rtp, convert_int16_rtz, convert_int16_sat, convert_int16_sat_rte, convert_int16_sat_rtn, convert_int16_sat_rtp, convert_int16_sat_rtz, 
  { 686, 2, 0, 1, 0, 19, 100, 0 },
  { 704, 2, 0, 1, 0, 19, 100, 0 },
  { 718, 2, 0, 1, 0, 19, 100, 0 },
  { 730, 2, 0, 1, 0, 19, 100, 0 },
  { 742, 2, 0, 1, 0, 19, 100, 0 },
  { 754, 2, 0, 1, 0, 19, 100, 0 },
  { 772, 2, 0, 1, 0, 19, 100, 0 },
  { 790, 2, 0, 1, 0, 19, 100, 0 },
  { 802, 2, 0, 1, 0, 19, 100, 0 },
  { 814, 2, 0, 1, 0, 19, 100, 0 },
  { 826, 2, 0, 1, 0, 19, 100, 0 },
  // 463: convert_uint, convert_uint_rte, convert_uint_rtn, convert_uint_rtp, convert_uint_rtz, convert_uint_sat, convert_uint_sat_rte, convert_uint_sat_rtn, convert_uint_sat_rtp, convert_uint_sat_rtz, 
  { 828, 2, 0, 1, 0, 19, 100, 0 },
  { 852, 2, 0, 1, 0, 19, 100, 0 },
  { 864, 2, 0, 1, 0, 19, 100, 0 },
  { 876, 2, 0, 1, 0, 19, 100, 0 },
  { 888, 2, 0, 1, 0, 19, 100, 0 },
  { 900, 2, 0, 1, 0, 19, 100, 0 },
  { 924, 2, 0, 1, 0, 19, 100, 0 },
  { 936, 2, 0, 1, 0, 19, 100, 0 },
  { 948, 2, 0, 1, 0, 19, 100, 0 },
  { 960, 2, 0, 1, 0, 19, 100, 0 },
  { 972, 2, 0, 1, 0, 19, 100, 0 },
  // 474: convert_uint2, convert_uint2_rte, convert_uint2_rtn, convert_uint2_rtp, convert_uint2_rtz, convert_uint2_sat, convert_uint2_sat_rte, convert_uint2_sat_rtn, convert_uint2_sat_rtp, convert_uint2_sat_rtz, 
  { 830, 2, 0, 1, 0, 19, 100, 0 },
  { 854, 2, 0, 1, 0, 19, 100, 0 },
  { 866, 2, 0, 1, 0, 19, 100, 0 },
  { 878, 2, 0, 1, 0, 19, 100, 0 },
  { 890, 2, 0, 1, 0, 19, 100, 0 },
  { 902, 2, 0, 1, 0, 19, 100, 0 },
  { 926, 2, 0, 1, 0, 19, 100, 0 },
  { 938, 2, 0, 1, 0, 19, 100, 0 },
  { 950, 2, 0, 1, 0, 19, 100, 0 },
  { 962, 2, 0, 1, 0, 19, 100, 0 },
  { 974, 2, 0, 1, 0, 19, 100, 0 },
  // 485: convert_uint3, convert_uint3_rte, convert_uint3_rtn, convert_uint3_rtp, convert_uint3_rtz, convert_uint3_sat, convert_uint3_sat_rte, convert_uint3_sat_rtn, convert_uint3_sat_rtp, convert_uint3_sat_rtz, 
  { 832, 2, 0, 1, 0, 19, 100, 0 },
  { 856, 2, 0, 1, 0, 19, 100, 0 },
  { 868, 2, 0, 1, 0, 19, 100, 0 },
  { 880, 2, 0, 1, 0, 19, 100, 0 },
  { 892, 2, 0, 1, 0, 19, 100, 0 },
  { 904, 2, 0, 1, 0, 19, 100, 0 },
  { 928, 2, 0, 1, 0, 19, 100, 0 },
  { 940, 2, 0, 1, 0, 19, 100, 0 },
  { 952, 2, 0, 1, 0, 19, 100, 0 },
  { 964, 2, 0, 1, 0, 19, 100, 0 },
  { 976, 2, 0, 1, 0, 19, 100, 0 },
  // 496: convert_uint4, convert_uint4_rte, convert_uint4_rtn, convert_uint4_rtp, convert_uint4_rtz, convert_uint4_sat, convert_uint4_sat_rte, convert_uint4_sat_rtn, convert_uint4_sat_rtp, convert_uint4_sat_rtz, 
  { 834, 2, 0, 1, 0, 19, 100, 0 },
  { 858, 2, 0, 1, 0, 19, 100, 0 },
  { 870, 2, 0, 1, 0, 19, 100, 0 },
  { 882, 2, 0, 1, 0, 19, 100, 0 },
  { 894, 2, 0, 1, 0, 19, 100, 0 },
  { 906, 2, 0, 1, 0, 19, 100, 0 },
  { 930, 2, 0, 1, 0, 19, 100, 0 },
  { 942, 2, 0, 1, 0, 19, 100, 0 },
  { 954, 2, 0, 1, 0, 19, 100, 0 },
  { 966, 2, 0, 1, 0, 19, 100, 0 },
  { 978, 2, 0, 1, 0, 19, 100, 0 },
  // 507: convert_uint8, convert_uint8_rte, convert_uint8_rtn, convert_uint8_rtp, convert_uint8_rtz, convert_uint8_sat, convert_uint8_sat_rte, convert_uint8_sat_rtn, convert_uint8_sat_rtp, convert_uint8_sat_rtz, 
  { 836, 2, 0, 1, 0, 19, 100, 0 },
  { 860, 2, 0, 1, 0, 19, 100, 0 },
  { 872, 2, 0, 1, 0, 19, 100, 0 },
  { 884, 2, 0, 1, 0, 19, 100, 0 },
  { 896, 2, 0, 1, 0, 19, 100, 0 },
  { 908, 2, 0, 1, 0, 19, 100, 0 },
  { 932, 2, 0, 1, 0, 19, 100, 0 },
  { 944, 2, 0, 1, 0, 19, 100, 0 },
  { 956, 2, 0, 1, 0, 19, 100, 0 },
  { 968, 2, 0, 1, 0, 19, 100, 0 },
  { 980, 2, 0, 1, 0, 19, 100, 0 },
  // 518: convert_uint16, convert_uint16_rte, convert_uint16_rtn, convert_uint16_rtp, convert_uint16_rtz, convert_uint16_sat, convert_uint16_sat_rte, convert_uint16_sat_rtn, convert_uint16_sat_rtp, convert_uint16_sat_rtz, 
  { 838, 2, 0, 1, 0, 19, 100, 0 },
  { 862, 2, 0, 1, 0, 19, 100, 0 },
  { 874, 2, 0, 1, 0, 19, 100, 0 },
  { 886, 2, 0, 1, 0, 19, 100, 0 },
  { 898, 2, 0, 1, 0, 19, 100, 0 },
  { 910, 2, 0, 1, 0, 19, 100, 0 },
  { 934, 2, 0, 1, 0, 19, 100, 0 },
  { 946, 2, 0, 1, 0, 19, 100, 0 },
  { 958, 2, 0, 1, 0, 19, 100, 0 },
  { 970, 2, 0, 1, 0, 19, 100, 0 },
  { 982, 2, 0, 1, 0, 19, 100, 0 },
  // 529: convert_double, convert_double_rte, convert_double_rtn, convert_double_rtp, convert_double_rtz, 
  { 840, 2, 0, 1, 0, 19, 100, 0 },
  { 912, 2, 0, 1, 0, 19, 100, 0 },
  { 984, 2, 0, 1, 0, 19, 100, 0 },
  { 1056, 2, 0, 1, 0, 19, 100, 0 },
  { 1130, 2, 0, 1, 0, 19, 100, 0 },
  { 1204, 2, 0, 1, 0, 19, 100, 0 },
  { 1280, 2, 0, 1, 0, 19, 100, 0 },
  { 1430, 2, 0, 1, 0, 19, 100, 0 },
  { 1851, 2, 0, 1, 0, 19, 100, 0 },
  { 2579, 2, 0, 1, 0, 19, 100, 0 },
  { 3286, 2, 0, 1, 0, 19, 100, 0 },
  // 540: convert_double2, convert_double2_rte, convert_double2_rtn, convert_double2_rtp, convert_double2_rtz, 
  { 842, 2, 0, 1, 0, 19, 100, 0 },
  { 914, 2, 0, 1, 0, 19, 100, 0 },
  { 986, 2, 0, 1, 0, 19, 100, 0 },
  { 1058, 2, 0, 1, 0, 19, 100, 0 },
  { 1132, 2, 0, 1, 0, 19, 100, 0 },
  { 1206, 2, 0, 1, 0, 19, 100, 0 },
  { 1282, 2, 0, 1, 0, 19, 100, 0 },
  { 1450, 2, 0, 1, 0, 19, 100, 0 },
  { 1868, 2, 0, 1, 0, 19, 100, 0 },
  { 2596, 2, 0, 1, 0, 19, 100, 0 },
  { 3318, 2, 0, 1, 0, 19, 100, 0 },
  // 551: convert_double3, convert_double3_rte, convert_double3_rtn, convert_double3_rtp, convert_double3_rtz, 
  { 844, 2, 0, 1, 0, 19, 100, 0 },
  { 916, 2, 0, 1, 0, 19, 100, 0 },
  { 988, 2, 0, 1, 0, 19, 100, 0 },
  { 1060, 2, 0, 1, 0, 19, 100, 0 },
  { 1134, 2, 0, 1, 0, 19, 100, 0 },
  { 1208, 2, 0, 1, 0, 19, 100, 0 },
  { 1284, 2, 0, 1, 0, 19, 100, 0 },
  { 1472, 2, 0, 1, 0, 19, 100, 0 },
  { 1904, 2, 0, 1, 0, 19, 100, 0 },
  { 2616, 2, 0, 1, 0, 19, 100, 0 },
  { 3360, 2, 0, 1, 0, 19, 100, 0 },
  // 562: convert_double4, convert_double4_rte, convert_double4_rtn, convert_double4_rtp, convert_double4_rtz, 
  { 846, 2, 0, 1, 0, 19, 100, 0 },
  { 918, 2, 0, 1, 0, 19, 100, 0 },
  { 990, 2, 0, 1, 0, 19, 100, 0 },
  { 1062, 2, 0, 1, 0, 19, 100, 0 },
  { 1136, 2, 0, 1, 0, 19, 100, 0 },
  { 1210, 2, 0, 1, 0, 19, 100, 0 },
  { 1286, 2, 0, 1, 0, 19, 100, 0 },
  { 1474, 2, 0, 1, 0, 19, 100, 0 },
  { 1945, 2, 0, 1, 0, 19, 100, 0 },
  { 2638, 2, 0, 1, 0, 19, 100, 0 },
  { 3377, 2, 0, 1, 0, 19, 100, 0 },
  // 573: convert_double8, convert_double8_rte, convert_double8_rtn, convert_double8_rtp, convert_double8_rtz, 
  { 848, 2, 0, 1, 0, 19, 100, 0 },
  { 920, 2, 0, 1, 0, 19, 100, 0 },
  { 992, 2, 0, 1, 0, 19, 100, 0 },
  { 1064, 2, 0, 1, 0, 19, 100, 0 },
  { 1138, 2, 0, 1, 0, 19, 100, 0 },
  { 1212, 2, 0, 1, 0, 19, 100, 0 },
  { 1288, 2, 0, 1, 0, 19, 100, 0 },
  { 1476, 2, 0, 1, 0, 19, 100, 0 },
  { 1953, 2, 0, 1, 0, 19, 100, 0 },
  { 2663, 2, 0, 1, 0, 19, 100, 0 },
  { 3403, 2, 0, 1, 0, 19, 100, 0 },
  // 584: convert_double16, convert_double16_rte, convert_double16_rtn, convert_double16_rtp, convert_double16_rtz, 
  { 850, 2, 0, 1, 0, 19, 100, 0 },
  { 922, 2, 0, 1, 0, 19, 100, 0 },
  { 994, 2, 0, 1, 0, 19, 100, 0 },
  { 1066, 2, 0, 1, 0, 19, 100, 0 },
  { 1140, 2, 0, 1, 0, 19, 100, 0 },
  { 1214, 2, 0, 1, 0, 19, 100, 0 },
  { 1290, 2, 0, 1, 0, 19, 100, 0 },
  { 1485, 2, 0, 1, 0, 19, 100, 0 },
  { 1986, 2, 0, 1, 0, 19, 100, 0 },
  { 2677, 2, 0, 1, 0, 19, 100, 0 },
  { 3442, 2, 0, 1, 0, 19, 100, 0 },
  // 595: convert_long, convert_long_rte, convert_long_rtn, convert_long_rtp, convert_long_rtz, convert_long_sat, convert_long_sat_rte, convert_long_sat_rtn, convert_long_sat_rtp, convert_long_sat_rtz, 
  { 996, 2, 0, 1, 0, 19, 100, 0 },
  { 1008, 2, 0, 1, 0, 19, 100, 0 },
  { 1020, 2, 0, 1, 0, 19, 100, 0 },
  { 1032, 2, 0, 1, 0, 19, 100, 0 },
  { 1044, 2, 0, 1, 0, 19, 100, 0 },
  { 1068, 2, 0, 1, 0, 19, 100, 0 },
  { 1080, 2, 0, 1, 0, 19, 100, 0 },
  { 1092, 2, 0, 1, 0, 19, 100, 0 },
  { 1104, 2, 0, 1, 0, 19, 100, 0 },
  { 1118, 2, 0, 1, 0, 19, 100, 0 },
  { 1142, 2, 0, 1, 0, 19, 100, 0 },
  // 606: convert_long2, convert_long2_rte, convert_long2_rtn, convert_long2_rtp, convert_long2_rtz, convert_long2_sat, convert_long2_sat_rte, convert_long2_sat_rtn, convert_long2_sat_rtp, convert_long2_sat_rtz, 
  { 998, 2, 0, 1, 0, 19, 100, 0 },
  { 1010, 2, 0, 1, 0, 19, 100, 0 },
  { 1022, 2, 0, 1, 0, 19, 100, 0 },
  { 1034, 2, 0, 1, 0, 19, 100, 0 },
  { 1046, 2, 0, 1, 0, 19, 100, 0 },
  { 1070, 2, 0, 1, 0, 19, 100, 0 },
  { 1082, 2, 0, 1, 0, 19, 100, 0 },
  { 1094, 2, 0, 1, 0, 19, 100, 0 },
  { 1106, 2, 0, 1, 0, 19, 100, 0 },
  { 1120, 2, 0, 1, 0, 19, 100, 0 },
  { 1144, 2, 0, 1, 0, 19, 100, 0 },
  // 617: convert_long3, convert_long3_rte, convert_long3_rtn, convert_long3_rtp, convert_long3_rtz, convert_long3_sat, convert_long3_sat_rte, convert_long3_sat_rtn, convert_long3_sat_rtp, convert_long3_sat_rtz, 
  { 1000, 2, 0, 1, 0, 19, 100, 0 },
  { 1012, 2, 0, 1, 0, 19, 100, 0 },
  { 1024, 2, 0, 1, 0, 19, 100, 0 },
  { 1036, 2, 0, 1, 0, 19, 100, 0 },
  { 1048, 2, 0, 1, 0, 19, 100, 0 },
  { 1072, 2, 0, 1, 0, 19, 100, 0 },
  { 1084, 2, 0, 1, 0, 19, 100, 0 },
  { 1096, 2, 0, 1, 0, 19, 100, 0 },
  { 1108, 2, 0, 1, 0, 19, 100, 0 },
  { 1122, 2, 0, 1, 0, 19, 100, 0 },
  { 1146, 2, 0, 1, 0, 19, 100, 0 },
  // 628: convert_long4, convert_long4_rte, convert_long4_rtn, convert_long4_rtp, convert_long4_rtz, convert_long4_sat, convert_long4_sat_rte, convert_long4_sat_rtn, convert_long4_sat_rtp, convert_long4_sat_rtz, 
  { 1002, 2, 0, 1, 0, 19, 100, 0 },
  { 1014, 2, 0, 1, 0, 19, 100, 0 },
  { 1026, 2, 0, 1, 0, 19, 100, 0 },
  { 1038, 2, 0, 1, 0, 19, 100, 0 },
  { 1050, 2, 0, 1, 0, 19, 100, 0 },
  { 1074, 2, 0, 1, 0, 19, 100, 0 },
  { 1086, 2, 0, 1, 0, 19, 100, 0 },
  { 1098, 2, 0, 1, 0, 19, 100, 0 },
  { 1110, 2, 0, 1, 0, 19, 100, 0 },
  { 1124, 2, 0, 1, 0, 19, 100, 0 },
  { 1148, 2, 0, 1, 0, 19, 100, 0 },
  // 639: convert_long8, convert_long8_rte, convert_long8_rtn, convert_long8_rtp, convert_long8_rtz, convert_long8_sat, convert_long8_sat_rte, convert_long8_sat_rtn, convert_long8_sat_rtp, convert_long8_sat_rtz, 
  { 1004, 2, 0, 1, 0, 19, 100, 0 },
  { 1016, 2, 0, 1, 0, 19, 100, 0 },
  { 1028, 2, 0, 1, 0, 19, 100, 0 },
  { 1040, 2, 0, 1, 0, 19, 100, 0 },
  { 1052, 2, 0, 1, 0, 19, 100, 0 },
  { 1076, 2, 0, 1, 0, 19, 100, 0 },
  { 1088, 2, 0, 1, 0, 19, 100, 0 },
  { 1100, 2, 0, 1, 0, 19, 100, 0 },
  { 1112, 2, 0, 1, 0, 19, 100, 0 },
  { 1126, 2, 0, 1, 0, 19, 100, 0 },
  { 1150, 2, 0, 1, 0, 19, 100, 0 },
  // 650: convert_long16, convert_long16_rte, convert_long16_rtn, convert_long16_rtp, convert_long16_rtz, convert_long16_sat, convert_long16_sat_rte, convert_long16_sat_rtn, convert_long16_sat_rtp, convert_long16_sat_rtz, 
  { 1006, 2, 0, 1, 0, 19, 100, 0 },
  { 1018, 2, 0, 1, 0, 19, 100, 0 },
  { 1030, 2, 0, 1, 0, 19, 100, 0 },
  { 1042, 2, 0, 1, 0, 19, 100, 0 },
  { 1054, 2, 0, 1, 0, 19, 100, 0 },
  { 1078, 2, 0, 1, 0, 19, 100, 0 },
  { 1090, 2, 0, 1, 0, 19, 100, 0 },
  { 1102, 2, 0, 1, 0, 19, 100, 0 },
  { 1114, 2, 0, 1, 0, 19, 100, 0 },
  { 1128, 2, 0, 1, 0, 19, 100, 0 },
  { 1152, 2, 0, 1, 0, 19, 100, 0 },
  // 661: convert_ulong, convert_ulong_rte, convert_ulong_rtn, convert_ulong_rtp, convert_ulong_rtz, convert_ulong_sat, convert_ulong_sat_rte, convert_ulong_sat_rtn, convert_ulong_sat_rtp, convert_ulong_sat_rtz, 
  { 1156, 2, 0, 1, 0, 19, 100, 0 },
  { 1168, 2, 0, 1, 0, 19, 100, 0 },
  { 1180, 2, 0, 1, 0, 19, 100, 0 },
  { 1192, 2, 0, 1, 0, 19, 100, 0 },
  { 1216, 2, 0, 1, 0, 19, 100, 0 },
  { 1230, 2, 0, 1, 0, 19, 100, 0 },
  { 1242, 2, 0, 1, 0, 19, 100, 0 },
  { 1254, 2, 0, 1, 0, 19, 100, 0 },
  { 1268, 2, 0, 1, 0, 19, 100, 0 },
  { 1292, 2, 0, 1, 0, 19, 100, 0 },
  { 1304, 2, 0, 1, 0, 19, 100, 0 },
  // 672: convert_ulong2, convert_ulong2_rte, convert_ulong2_rtn, convert_ulong2_rtp, convert_ulong2_rtz, convert_ulong2_sat, convert_ulong2_sat_rte, convert_ulong2_sat_rtn, convert_ulong2_sat_rtp, convert_ulong2_sat_rtz, 
  { 1158, 2, 0, 1, 0, 19, 100, 0 },
  { 1170, 2, 0, 1, 0, 19, 100, 0 },
  { 1182, 2, 0, 1, 0, 19, 100, 0 },
  { 1194, 2, 0, 1, 0, 19, 100, 0 },
  { 1218, 2, 0, 1, 0, 19, 100, 0 },
  { 1232, 2, 0, 1, 0, 19, 100, 0 },
  { 1244, 2, 0, 1, 0, 19, 100, 0 },
  { 1256, 2, 0, 1, 0, 19, 100, 0 },
  { 1270, 2, 0, 1, 0, 19, 100, 0 },
  { 1294, 2, 0, 1, 0, 19, 100, 0 },
  { 1306, 2, 0, 1, 0, 19, 100, 0 },
  // 683: convert_ulong3, convert_ulong3_rte, convert_ulong3_rtn, convert_ulong3_rtp, convert_ulong3_rtz, convert_ulong3_sat, convert_ulong3_sat_rte, convert_ulong3_sat_rtn, convert_ulong3_sat_rtp, convert_ulong3_sat_rtz, 
  { 1160, 2, 0, 1, 0, 19, 100, 0 },
  { 1172, 2, 0, 1, 0, 19, 100, 0 },
  { 1184, 2, 0, 1, 0, 19, 100, 0 },
  { 1196, 2, 0, 1, 0, 19, 100, 0 },
  { 1220, 2, 0, 1, 0, 19, 100, 0 },
  { 1234, 2, 0, 1, 0, 19, 100, 0 },
  { 1246, 2, 0, 1, 0, 19, 100, 0 },
  { 1258, 2, 0, 1, 0, 19, 100, 0 },
  { 1272, 2, 0, 1, 0, 19, 100, 0 },
  { 1296, 2, 0, 1, 0, 19, 100, 0 },
  { 1308, 2, 0, 1, 0, 19, 100, 0 },
  // 694: convert_ulong4, convert_ulong4_rte, convert_ulong4_rtn, convert_ulong4_rtp, convert_ulong4_rtz, convert_ulong4_sat, convert_ulong4_sat_rte, convert_ulong4_sat_rtn, convert_ulong4_sat_rtp, convert_ulong4_sat_rtz, 
  { 1162, 2, 0, 1, 0, 19, 100, 0 },
  { 1174, 2, 0, 1, 0, 19, 100, 0 },
  { 1186, 2, 0, 1, 0, 19, 100, 0 },
  { 1198, 2, 0, 1, 0, 19, 100, 0 },
  { 1222, 2, 0, 1, 0, 19, 100, 0 },
  { 1236, 2, 0, 1, 0, 19, 100, 0 },
  { 1248, 2, 0, 1, 0, 19, 100, 0 },
  { 1260, 2, 0, 1, 0, 19, 100, 0 },
  { 1274, 2, 0, 1, 0, 19, 100, 0 },
  { 1298, 2, 0, 1, 0, 19, 100, 0 },
  { 1310, 2, 0, 1, 0, 19, 100, 0 },
  // 705: convert_ulong8, convert_ulong8_rte, convert_ulong8_rtn, convert_ulong8_rtp, convert_ulong8_rtz, convert_ulong8_sat, convert_ulong8_sat_rte, convert_ulong8_sat_rtn, convert_ulong8_sat_rtp, convert_ulong8_sat_rtz, 
  { 1164, 2, 0, 1, 0, 19, 100, 0 },
  { 1176, 2, 0, 1, 0, 19, 100, 0 },
  { 1188, 2, 0, 1, 0, 19, 100, 0 },
  { 1200, 2, 0, 1, 0, 19, 100, 0 },
  { 1224, 2, 0, 1, 0, 19, 100, 0 },
  { 1238, 2, 0, 1, 0, 19, 100, 0 },
  { 1250, 2, 0, 1, 0, 19, 100, 0 },
  { 1262, 2, 0, 1, 0, 19, 100, 0 },
  { 1276, 2, 0, 1, 0, 19, 100, 0 },
  { 1300, 2, 0, 1, 0, 19, 100, 0 },
  { 1312, 2, 0, 1, 0, 19, 100, 0 },
  // 716: convert_ulong16, convert_ulong16_rte, convert_ulong16_rtn, convert_ulong16_rtp, convert_ulong16_rtz, convert_ulong16_sat, convert_ulong16_sat_rte, convert_ulong16_sat_rtn, convert_ulong16_sat_rtp, convert_ulong16_sat_rtz, 
  { 1166, 2, 0, 1, 0, 19, 100, 0 },
  { 1178, 2, 0, 1, 0, 19, 100, 0 },
  { 1190, 2, 0, 1, 0, 19, 100, 0 },
  { 1202, 2, 0, 1, 0, 19, 100, 0 },
  { 1226, 2, 0, 1, 0, 19, 100, 0 },
  { 1240, 2, 0, 1, 0, 19, 100, 0 },
  { 1252, 2, 0, 1, 0, 19, 100, 0 },
  { 1264, 2, 0, 1, 0, 19, 100, 0 },
  { 1278, 2, 0, 1, 0, 19, 100, 0 },
  { 1302, 2, 0, 1, 0, 19, 100, 0 },
  { 1314, 2, 0, 1, 0, 19, 100, 0 },
  // 727: get_work_dim, 
  { 1316, 1, 0, 1, 0, 19, 100, 0 },
  // 728: get_global_size, get_global_id, get_local_size, get_local_id, get_num_groups, get_group_id, get_global_offset, 
  { 1317, 2, 0, 1, 0, 19, 100, 0 },
  // 729: get_enqueued_local_size, 
  { 1317, 2, 0, 0, 0, 19, 200, 0 },
  // 730: get_global_linear_id, get_local_linear_id, 
  { 1319, 1, 0, 0, 0, 19, 200, 0 },
  // 731: acos, acosh, acospi, asin, asinh, asinpi, atan, atanh, atanpi, cbrt, ceil, cos, cosh, cospi, erfc, erf, exp, exp2, exp10, expm1, fabs, floor, log, log2, log10, log1p, logb, rint, round, rsqrt, sin, sinh, sinpi, sqrt, tan, tanh, tanpi, tgamma, trunc, lgamma, degrees, radians, sign, 
  { 1320, 2, 0, 1, 0, 19, 100, 0 },
  // 732: nan, 
  { 1324, 2, 0, 1, 0, 19, 100, 0 },
  { 1326, 2, 0, 1, 0, 19, 100, 0 },
  { 1328, 2, 0, 1, 0, 19, 100, 0 },
  // 735: atan2, atan2pi, copysign, fdim, fmod, hypot, maxmag, minmag, nextafter, pow, powr, remainder, 
  { 1330, 3, 0, 1, 0, 19, 100, 0 },
  // 736: fmax, fmin, 
  { 1330, 3, 0, 1, 0, 19, 100, 0 },
  { 1333, 3, 0, 1, 0, 19, 100, 0 },
  { 1336, 3, 0, 1, 0, 19, 100, 0 },
  { 1339, 3, 0, 1, 0, 19, 100, 0 },
  // 740: ilogb, 
  { 1342, 2, 0, 1, 0, 19, 100, 0 },
  { 1344, 2, 0, 1, 0, 19, 100, 0 },
  { 1346, 2, 0, 1, 0, 19, 100, 0 },
  // 743: ldexp, 
  { 1348, 3, 0, 1, 0, 19, 100, 0 },
  { 1351, 3, 0, 1, 0, 19, 100, 0 },
  { 1354, 3, 0, 1, 0, 19, 100, 0 },
  { 1357, 3, 0, 1, 0, 19, 100, 0 },
  { 1360, 3, 0, 1, 0, 19, 100, 0 },
  { 1363, 3, 0, 1, 0, 19, 100, 0 },
  // 749: pown, rootn, 
  { 1348, 3, 0, 1, 0, 19, 100, 0 },
  { 1354, 3, 0, 1, 0, 19, 100, 0 },
  { 1360, 3, 0, 1, 0, 19, 100, 0 },
  // 752: fma, mad, 
  { 1366, 4, 0, 1, 0, 19, 100, 0 },
  // 753: fract, modf, sincos, 
  { 1370, 3, 0, 0, 0, 19, 100, 200 },
  { 1394, 3, 0, 0, 0, 19, 100, 200 },
  { 1418, 3, 0, 0, 0, 19, 100, 200 },
  { 1444, 3, 0, 0, 0, 19, 200, 0 },
  // 757: frexp, lgamma_r, 
  { 1373, 3, 0, 0, 0, 19, 100, 200 },
  { 1380, 3, 0, 0, 0, 19, 100, 200 },
  { 1383, 3, 0, 0, 0, 19, 100, 200 },
  { 1397, 3, 0, 0, 0, 19, 100, 200 },
  { 1400, 3, 0, 0, 0, 19, 100, 200 },
  { 1403, 3, 0, 0, 0, 19, 100, 200 },
  { 1421, 3, 0, 0, 0, 19, 100, 200 },
  { 1424, 3, 0, 0, 0, 19, 100, 200 },
  { 1427, 3, 0, 0, 0, 19, 100, 200 },
  { 1447, 3, 0, 0, 0, 19, 200, 0 },
  { 1452, 3, 0, 0, 0, 19, 200, 0 },
  { 1455, 3, 0, 0, 0, 19, 200, 0 },
  // 769: remquo, 
  { 1376, 4, 0, 0, 0, 19, 100, 200 },
  { 1386, 4, 0, 0, 0, 19, 100, 200 },
  { 1390, 4, 0, 0, 0, 19, 100, 200 },
  { 1406, 4, 0, 0, 0, 19, 100, 200 },
  { 1410, 4, 0, 0, 0, 19, 100, 200 },
  { 1414, 4, 0, 0, 0, 19, 100, 200 },
  { 1432, 4, 0, 0, 0, 19, 100, 200 },
  { 1436, 4, 0, 0, 0, 19, 100, 200 },
  { 1440, 4, 0, 0, 0, 19, 100, 200 },
  { 1458, 4, 0, 0, 0, 19, 200, 0 },
  { 1462, 4, 0, 0, 0, 19, 200, 0 },
  { 1466, 4, 0, 0, 0, 19, 200, 0 },
  // 781: half_cos, half_exp, half_exp2, half_exp10, half_log, half_log2, half_log10, half_recip, half_rsqrt, half_sin, half_sqrt, half_tan, native_cos, native_exp, native_exp2, native_exp10, native_log, native_log2, native_log10, native_recip, native_rsqrt, native_sin, native_sqrt, native_tan, 
  { 1470, 2, 0, 1, 0, 19, 100, 0 },
  // 782: half_divide, half_powr, native_divide, native_powr, 
  { 1478, 3, 0, 1, 0, 19, 100, 0 },
  // 783: abs, 
  { 1481, 2, 0, 1, 0, 19, 100, 0 },
  // 784: clz, popcount, 
  { 1483, 2, 0, 1, 0, 19, 100, 0 },
  // 785: ctz, 
  { 1483, 2, 0, 0, 0, 19, 200, 0 },
  // 786: abs_diff, 
  { 1487, 3, 0, 1, 0, 19, 100, 0 },
  // 787: add_sat, hadd, rhadd, mul_hi, rotate, sub_sat, 
  { 1490, 3, 0, 1, 0, 19, 100, 0 },
  // 788: max, min, 
  { 1490, 3, 0, 1, 0, 19, 100, 0 },
  { 1493, 3, 0, 1, 0, 19, 100, 0 },
  { 1330, 3, 0, 1, 0, 19, 100, 0 },
  { 1333, 3, 0, 1, 0, 19, 100, 0 },
  { 1336, 3, 0, 1, 0, 19, 100, 0 },
  { 1339, 3, 0, 1, 0, 19, 100, 0 },
  // 794: upsample, 
  { 1496, 3, 0, 1, 0, 19, 100, 0 },
  { 1499, 3, 0, 1, 0, 19, 100, 0 },
  { 1502, 3, 0, 1, 0, 19, 100, 0 },
  { 1505, 3, 0, 1, 0, 19, 100, 0 },
  { 1508, 3, 0, 1, 0, 19, 100, 0 },
  { 1511, 3, 0, 1, 0, 19, 100, 0 },
  // 800: clamp, 
  { 1514, 4, 0, 1, 0, 19, 100, 0 },
  { 1518, 4, 0, 1, 0, 19, 100, 0 },
  { 1366, 4, 0, 1, 0, 19, 100, 0 },
  { 1547, 4, 0, 1, 0, 19, 100, 0 },
  { 1551, 4, 0, 1, 0, 19, 100, 0 },
  { 1555, 4, 0, 1, 0, 19, 100, 0 },
  // 806: mad_hi, mad_sat, 
  { 1514, 4, 0, 1, 0, 19, 100, 0 },
  // 807: mad24, 
  { 1522, 4, 0, 1, 0, 19, 100, 0 },
  { 1526, 4, 0, 1, 0, 19, 100, 0 },
  // 809: mul24, 
  { 1530, 3, 0, 1, 0, 19, 100, 0 },
  { 1533, 3, 0, 1, 0, 19, 100, 0 },
  // 811: step, 
  { 1330, 3, 0, 1, 0, 19, 100, 0 },
  { 1536, 3, 0, 1, 0, 19, 100, 0 },
  { 1539, 3, 0, 1, 0, 19, 100, 0 },
  { 1542, 3, 0, 1, 0, 19, 100, 0 },
  // 815: mix, 
  { 1366, 4, 0, 1, 0, 19, 100, 0 },
  { 1547, 4, 0, 1, 0, 19, 100, 0 },
  { 1551, 4, 0, 1, 0, 19, 100, 0 },
  { 1555, 4, 0, 1, 0, 19, 100, 0 },
  // 819: smoothstep, 
  { 1366, 4, 0, 1, 0, 19, 100, 0 },
  { 1559, 4, 0, 1, 0, 19, 100, 0 },
  { 1563, 4, 0, 1, 0, 19, 100, 0 },
  { 1567, 4, 0, 1, 0, 19, 100, 0 },
  // 823: length, 
  { 1571, 2, 0, 1, 0, 19, 100, 0 },
  { 1573, 2, 0, 1, 0, 19, 100, 0 },
  { 1575, 2, 0, 1, 0, 19, 100, 0 },
  // 826: normalize, 
  { 1577, 2, 0, 1, 0, 19, 100, 0 },
  { 1579, 2, 0, 1, 0, 19, 100, 0 },
  { 1581, 2, 0, 1, 0, 19, 100, 0 },
  // 829: fast_length, 
  { 1571, 2, 0, 1, 0, 19, 100, 0 },
  // 830: fast_normalize, 
  { 1577, 2, 0, 1, 0, 19, 100, 0 },
  // 831: cross, 
  { 1583, 3, 0, 1, 0, 19, 100, 0 },
  { 1586, 3, 0, 1, 0, 19, 100, 0 },
  { 1589, 3, 0, 1, 0, 19, 100, 0 },
  { 1592, 3, 0, 1, 0, 19, 100, 0 },
  { 1595, 3, 0, 1, 0, 19, 100, 0 },
  { 1598, 3, 0, 1, 0, 19, 100, 0 },
  // 837: dot, distance, 
  { 1601, 3, 0, 1, 0, 19, 100, 0 },
  { 1604, 3, 0, 1, 0, 19, 100, 0 },
  { 1607, 3, 0, 1, 0, 19, 100, 0 },
  // 840: fast_distance, 
  { 1601, 3, 0, 1, 0, 19, 100, 0 },
  // 841: isfinite, isinf, isnan, isnormal, signbit, 
  { 1342, 2, 0, 1, 0, 19, 100, 0 },
  { 694, 2, 0, 1, 0, 19, 100, 0 },
  { 1610, 2, 0, 1, 0, 19, 100, 0 },
  { 708, 2, 0, 1, 0, 19, 100, 0 },
  { 1612, 2, 0, 1, 0, 19, 100, 0 },
  // 846: any, all, 
  { 1614, 2, 0, 1, 0, 19, 100, 0 },
  // 847: isequal, isnotequal, isgreater, isgreaterequal, isless, islessequal, islessgreater, isordered, isunordered, 
  { 1616, 3, 0, 1, 0, 19, 100, 0 },
  { 1619, 3, 0, 1, 0, 19, 100, 0 },
  { 1622, 3, 0, 1, 0, 19, 100, 0 },
  { 1625, 3, 0, 1, 0, 19, 100, 0 },
  { 1628, 3, 0, 1, 0, 19, 100, 0 },
  // 852: bitselect, 
  { 1631, 4, 0, 1, 0, 19, 100, 0 },
  // 853: select, 
  { 1635, 4, 0, 1, 0, 19, 100, 0 },
  { 1639, 4, 0, 1, 0, 19, 100, 0 },
  { 1643, 4, 0, 1, 0, 19, 100, 0 },
  { 1647, 4, 0, 1, 0, 19, 100, 0 },
  { 1651, 4, 0, 1, 0, 19, 100, 0 },
  { 1655, 4, 0, 1, 0, 19, 100, 0 },
  { 1659, 4, 0, 1, 0, 19, 100, 0 },
  { 1663, 4, 0, 1, 0, 19, 100, 0 },
  { 1667, 4, 0, 1, 0, 19, 100, 0 },
  { 1671, 4, 0, 1, 0, 19, 100, 0 },
  // 863: vload2, 
  { 1675, 3, 0, 0, 0, 19, 100, 200 },
  { 1678, 3, 0, 0, 0, 19, 100, 200 },
  { 1681, 3, 0, 0, 0, 19, 100, 200 },
  { 1684, 3, 0, 0, 0, 19, 100, 200 },
  { 1687, 3, 0, 0, 0, 19, 100, 200 },
  { 1690, 3, 0, 0, 0, 19, 100, 200 },
  { 1693, 3, 0, 0, 0, 19, 100, 200 },
  { 1696, 3, 0, 0, 0, 19, 100, 200 },
  { 1699, 3, 0, 0, 0, 19, 100, 200 },
  { 1702, 3, 0, 0, 0, 19, 100, 200 },
  { 1705, 3, 0, 0, 0, 19, 100, 200 },
  { 2127, 3, 0, 0, 0, 19, 100, 200 },
  { 2130, 3, 0, 0, 0, 19, 100, 200 },
  { 2133, 3, 0, 0, 0, 19, 100, 200 },
  { 2136, 3, 0, 0, 0, 19, 100, 200 },
  { 2139, 3, 0, 0, 0, 19, 100, 200 },
  { 2142, 3, 0, 0, 0, 19, 100, 200 },
  { 2145, 3, 0, 0, 0, 19, 100, 200 },
  { 2148, 3, 0, 0, 0, 19, 100, 200 },
  { 2151, 3, 0, 0, 0, 19, 100, 200 },
  { 2154, 3, 0, 0, 0, 19, 100, 200 },
  { 2157, 3, 0, 0, 0, 19, 100, 200 },
  { 2567, 3, 0, 0, 0, 19, 100, 200 },
  { 2570, 3, 0, 0, 0, 19, 100, 200 },
  { 2573, 3, 0, 0, 0, 19, 100, 200 },
  { 2576, 3, 0, 0, 0, 19, 100, 200 },
  { 2581, 3, 0, 0, 0, 19, 100, 200 },
  { 2584, 3, 0, 0, 0, 19, 100, 200 },
  { 2587, 3, 0, 0, 0, 19, 100, 200 },
  { 2590, 3, 0, 0, 0, 19, 100, 200 },
  { 2593, 3, 0, 0, 0, 19, 100, 200 },
  { 2598, 3, 0, 0, 0, 19, 100, 200 },
  { 2601, 3, 0, 0, 0, 19, 100, 200 },
  { 3019, 3, 0, 0, 0, 19, 200, 0 },
  { 3022, 3, 0, 0, 0, 19, 200, 0 },
  { 3025, 3, 0, 0, 0, 19, 200, 0 },
  { 3028, 3, 0, 0, 0, 19, 200, 0 },
  { 3031, 3, 0, 0, 0, 19, 200, 0 },
  { 3034, 3, 0, 0, 0, 19, 200, 0 },
  { 3037, 3, 0, 0, 0, 19, 200, 0 },
  { 3040, 3, 0, 0, 0, 19, 200, 0 },
  { 3043, 3, 0, 0, 0, 19, 200, 0 },
  { 3046, 3, 0, 0, 0, 19, 200, 0 },
  { 3049, 3, 0, 0, 0, 19, 200, 0 },
  { 3471, 3, 0, 0, 0, 19, 100, 0 },
  { 3474, 3, 0, 0, 0, 19, 100, 0 },
  { 3477, 3, 0, 0, 0, 19, 100, 0 },
  { 3480, 3, 0, 0, 0, 19, 100, 0 },
  { 3483, 3, 0, 0, 0, 19, 100, 0 },
  { 3486, 3, 0, 0, 0, 19, 100, 0 },
  { 3489, 3, 0, 0, 0, 19, 100, 0 },
  { 3492, 3, 0, 0, 0, 19, 100, 0 },
  { 3495, 3, 0, 0, 0, 19, 100, 0 },
  { 3498, 3, 0, 0, 0, 19, 100, 0 },
  { 3501, 3, 0, 0, 0, 19, 100, 0 },
  // 918: vstore2, 
  { 1708, 4, 0, 0, 0, 19, 100, 200 },
  { 1712, 4, 0, 0, 0, 19, 100, 200 },
  { 1716, 4, 0, 0, 0, 19, 100, 200 },
  { 1720, 4, 0, 0, 0, 19, 100, 200 },
  { 1724, 4, 0, 0, 0, 19, 100, 200 },
  { 1728, 4, 0, 0, 0, 19, 100, 200 },
  { 1732, 4, 0, 0, 0, 19, 100, 200 },
  { 1736, 4, 0, 0, 0, 19, 100, 200 },
  { 1740, 4, 0, 0, 0, 19, 100, 200 },
  { 1744, 4, 0, 0, 0, 19, 100, 200 },
  { 1748, 4, 0, 0, 0, 19, 100, 200 },
  { 2160, 4, 0, 0, 0, 19, 100, 200 },
  { 2164, 4, 0, 0, 0, 19, 100, 200 },
  { 2168, 4, 0, 0, 0, 19, 100, 200 },
  { 2172, 4, 0, 0, 0, 19, 100, 200 },
  { 2176, 4, 0, 0, 0, 19, 100, 200 },
  { 2180, 4, 0, 0, 0, 19, 100, 200 },
  { 2184, 4, 0, 0, 0, 19, 100, 200 },
  { 2188, 4, 0, 0, 0, 19, 100, 200 },
  { 2192, 4, 0, 0, 0, 19, 100, 200 },
  { 2196, 4, 0, 0, 0, 19, 100, 200 },
  { 2200, 4, 0, 0, 0, 19, 100, 200 },
  { 2604, 4, 0, 0, 0, 19, 100, 200 },
  { 2608, 4, 0, 0, 0, 19, 100, 200 },
  { 2612, 4, 0, 0, 0, 19, 100, 200 },
  { 2618, 4, 0, 0, 0, 19, 100, 200 },
  { 2622, 4, 0, 0, 0, 19, 100, 200 },
  { 2626, 4, 0, 0, 0, 19, 100, 200 },
  { 2630, 4, 0, 0, 0, 19, 100, 200 },
  { 2634, 4, 0, 0, 0, 19, 100, 200 },
  { 2640, 4, 0, 0, 0, 19, 100, 200 },
  { 2644, 4, 0, 0, 0, 19, 100, 200 },
  { 2648, 4, 0, 0, 0, 19, 100, 200 },
  { 3052, 4, 0, 0, 0, 19, 200, 0 },
  { 3056, 4, 0, 0, 0, 19, 200, 0 },
  { 3060, 4, 0, 0, 0, 19, 200, 0 },
  { 3064, 4, 0, 0, 0, 19, 200, 0 },
  { 3068, 4, 0, 0, 0, 19, 200, 0 },
  { 3072, 4, 0, 0, 0, 19, 200, 0 },
  { 3076, 4, 0, 0, 0, 19, 200, 0 },
  { 3080, 4, 0, 0, 0, 19, 200, 0 },
  { 3084, 4, 0, 0, 0, 19, 200, 0 },
  { 3088, 4, 0, 0, 0, 19, 200, 0 },
  { 3092, 4, 0, 0, 0, 19, 200, 0 },
  // 962: vloada_half2, vload_half2, 
  { 1752, 3, 0, 0, 0, 19, 100, 200 },
  { 2204, 3, 0, 0, 0, 19, 100, 200 },
  { 2652, 3, 0, 0, 0, 19, 100, 200 },
  { 3096, 3, 0, 0, 0, 19, 200, 0 },
  { 3504, 3, 0, 0, 0, 19, 100, 0 },
  // 967: vstorea_half2, vstorea_half2_rte, vstorea_half2_rtz, vstorea_half2_rtp, vstorea_half2_rtn, vstore_half2, vstore_half2_rte, vstore_half2_rtz, vstore_half2_rtp, vstore_half2_rtn, 
  { 1755, 4, 0, 0, 0, 19, 100, 200 },
  { 1759, 4, 0, 0, 0, 19, 100, 200 },
  { 2207, 4, 0, 0, 0, 19, 100, 200 },
  { 2211, 4, 0, 0, 0, 19, 100, 200 },
  { 2655, 4, 0, 0, 0, 19, 100, 200 },
  { 2659, 4, 0, 0, 0, 19, 100, 200 },
  { 3099, 4, 0, 0, 0, 19, 200, 0 },
  { 3103, 4, 0, 0, 0, 19, 200, 0 },
  // 975: vload3, 
  { 1763, 3, 0, 0, 0, 19, 100, 200 },
  { 1766, 3, 0, 0, 0, 19, 100, 200 },
  { 1769, 3, 0, 0, 0, 19, 100, 200 },
  { 1772, 3, 0, 0, 0, 19, 100, 200 },
  { 1775, 3, 0, 0, 0, 19, 100, 200 },
  { 1778, 3, 0, 0, 0, 19, 100, 200 },
  { 1781, 3, 0, 0, 0, 19, 100, 200 },
  { 1784, 3, 0, 0, 0, 19, 100, 200 },
  { 1787, 3, 0, 0, 0, 19, 100, 200 },
  { 1790, 3, 0, 0, 0, 19, 100, 200 },
  { 1793, 3, 0, 0, 0, 19, 100, 200 },
  { 2215, 3, 0, 0, 0, 19, 100, 200 },
  { 2218, 3, 0, 0, 0, 19, 100, 200 },
  { 2221, 3, 0, 0, 0, 19, 100, 200 },
  { 2224, 3, 0, 0, 0, 19, 100, 200 },
  { 2227, 3, 0, 0, 0, 19, 100, 200 },
  { 2230, 3, 0, 0, 0, 19, 100, 200 },
  { 2233, 3, 0, 0, 0, 19, 100, 200 },
  { 2236, 3, 0, 0, 0, 19, 100, 200 },
  { 2239, 3, 0, 0, 0, 19, 100, 200 },
  { 2242, 3, 0, 0, 0, 19, 100, 200 },
  { 2245, 3, 0, 0, 0, 19, 100, 200 },
  { 2665, 3, 0, 0, 0, 19, 100, 200 },
  { 2668, 3, 0, 0, 0, 19, 100, 200 },
  { 2671, 3, 0, 0, 0, 19, 100, 200 },
  { 2674, 3, 0, 0, 0, 19, 100, 200 },
  { 2679, 3, 0, 0, 0, 19, 100, 200 },
  { 2682, 3, 0, 0, 0, 19, 100, 200 },
  { 2685, 3, 0, 0, 0, 19, 100, 200 },
  { 2688, 3, 0, 0, 0, 19, 100, 200 },
  { 2691, 3, 0, 0, 0, 19, 100, 200 },
  { 2694, 3, 0, 0, 0, 19, 100, 200 },
  { 2697, 3, 0, 0, 0, 19, 100, 200 },
  { 3107, 3, 0, 0, 0, 19, 200, 0 },
  { 3110, 3, 0, 0, 0, 19, 200, 0 },
  { 3113, 3, 0, 0, 0, 19, 200, 0 },
  { 3116, 3, 0, 0, 0, 19, 200, 0 },
  { 3119, 3, 0, 0, 0, 19, 200, 0 },
  { 3122, 3, 0, 0, 0, 19, 200, 0 },
  { 3125, 3, 0, 0, 0, 19, 200, 0 },
  { 3128, 3, 0, 0, 0, 19, 200, 0 },
  { 3131, 3, 0, 0, 0, 19, 200, 0 },
  { 3134, 3, 0, 0, 0, 19, 200, 0 },
  { 3137, 3, 0, 0, 0, 19, 200, 0 },
  { 3507, 3, 0, 0, 0, 19, 100, 0 },
  { 3510, 3, 0, 0, 0, 19, 100, 0 },
  { 3513, 3, 0, 0, 0, 19, 100, 0 },
  { 3516, 3, 0, 0, 0, 19, 100, 0 },
  { 3519, 3, 0, 0, 0, 19, 100, 0 },
  { 3522, 3, 0, 0, 0, 19, 100, 0 },
  { 3525, 3, 0, 0, 0, 19, 100, 0 },
  { 3528, 3, 0, 0, 0, 19, 100, 0 },
  { 3531, 3, 0, 0, 0, 19, 100, 0 },
  { 3534, 3, 0, 0, 0, 19, 100, 0 },
  { 3537, 3, 0, 0, 0, 19, 100, 0 },
  // 1030: vstore3, 
  { 1796, 4, 0, 0, 0, 19, 100, 200 },
  { 1800, 4, 0, 0, 0, 19, 100, 200 },
  { 1804, 4, 0, 0, 0, 19, 100, 200 },
  { 1808, 4, 0, 0, 0, 19, 100, 200 },
  { 1812, 4, 0, 0, 0, 19, 100, 200 },
  { 1816, 4, 0, 0, 0, 19, 100, 200 },
  { 1820, 4, 0, 0, 0, 19, 100, 200 },
  { 1824, 4, 0, 0, 0, 19, 100, 200 },
  { 1828, 4, 0, 0, 0, 19, 100, 200 },
  { 1832, 4, 0, 0, 0, 19, 100, 200 },
  { 1836, 4, 0, 0, 0, 19, 100, 200 },
  { 2248, 4, 0, 0, 0, 19, 100, 200 },
  { 2252, 4, 0, 0, 0, 19, 100, 200 },
  { 2256, 4, 0, 0, 0, 19, 100, 200 },
  { 2260, 4, 0, 0, 0, 19, 100, 200 },
  { 2264, 4, 0, 0, 0, 19, 100, 200 },
  { 2268, 4, 0, 0, 0, 19, 100, 200 },
  { 2272, 4, 0, 0, 0, 19, 100, 200 },
  { 2276, 4, 0, 0, 0, 19, 100, 200 },
  { 2280, 4, 0, 0, 0, 19, 100, 200 },
  { 2284, 4, 0, 0, 0, 19, 100, 200 },
  { 2288, 4, 0, 0, 0, 19, 100, 200 },
  { 2700, 4, 0, 0, 0, 19, 100, 200 },
  { 2704, 4, 0, 0, 0, 19, 100, 200 },
  { 2708, 4, 0, 0, 0, 19, 100, 200 },
  { 2712, 4, 0, 0, 0, 19, 100, 200 },
  { 2716, 4, 0, 0, 0, 19, 100, 200 },
  { 2720, 4, 0, 0, 0, 19, 100, 200 },
  { 2724, 4, 0, 0, 0, 19, 100, 200 },
  { 2728, 4, 0, 0, 0, 19, 100, 200 },
  { 2732, 4, 0, 0, 0, 19, 100, 200 },
  { 2736, 4, 0, 0, 0, 19, 100, 200 },
  { 2740, 4, 0, 0, 0, 19, 100, 200 },
  { 3140, 4, 0, 0, 0, 19, 200, 0 },
  { 3144, 4, 0, 0, 0, 19, 200, 0 },
  { 3148, 4, 0, 0, 0, 19, 200, 0 },
  { 3152, 4, 0, 0, 0, 19, 200, 0 },
  { 3156, 4, 0, 0, 0, 19, 200, 0 },
  { 3160, 4, 0, 0, 0, 19, 200, 0 },
  { 3164, 4, 0, 0, 0, 19, 200, 0 },
  { 3168, 4, 0, 0, 0, 19, 200, 0 },
  { 3172, 4, 0, 0, 0, 19, 200, 0 },
  { 3176, 4, 0, 0, 0, 19, 200, 0 },
  { 3180, 4, 0, 0, 0, 19, 200, 0 },
  // 1074: vloada_half3, vload_half3, 
  { 1840, 3, 0, 0, 0, 19, 100, 200 },
  { 2292, 3, 0, 0, 0, 19, 100, 200 },
  { 2744, 3, 0, 0, 0, 19, 100, 200 },
  { 3184, 3, 0, 0, 0, 19, 200, 0 },
  { 3540, 3, 0, 0, 0, 19, 100, 0 },
  // 1079: vstorea_half3, vstorea_half3_rte, vstorea_half3_rtz, vstorea_half3_rtp, vstorea_half3_rtn, vstore_half3, vstore_half3_rte, vstore_half3_rtz, vstore_half3_rtp, vstore_half3_rtn, 
  { 1843, 4, 0, 0, 0, 19, 100, 200 },
  { 1847, 4, 0, 0, 0, 19, 100, 200 },
  { 2295, 4, 0, 0, 0, 19, 100, 200 },
  { 2299, 4, 0, 0, 0, 19, 100, 200 },
  { 2747, 4, 0, 0, 0, 19, 100, 200 },
  { 2751, 4, 0, 0, 0, 19, 100, 200 },
  { 3187, 4, 0, 0, 0, 19, 200, 0 },
  { 3191, 4, 0, 0, 0, 19, 200, 0 },
  // 1087: vload4, 
  { 1853, 3, 0, 0, 0, 19, 100, 200 },
  { 1856, 3, 0, 0, 0, 19, 100, 200 },
  { 1859, 3, 0, 0, 0, 19, 100, 200 },
  { 1862, 3, 0, 0, 0, 19, 100, 200 },
  { 1865, 3, 0, 0, 0, 19, 100, 200 },
  { 1870, 3, 0, 0, 0, 19, 100, 200 },
  { 1873, 3, 0, 0, 0, 19, 100, 200 },
  { 1876, 3, 0, 0, 0, 19, 100, 200 },
  { 1879, 3, 0, 0, 0, 19, 100, 200 },
  { 1882, 3, 0, 0, 0, 19, 100, 200 },
  { 1885, 3, 0, 0, 0, 19, 100, 200 },
  { 2303, 3, 0, 0, 0, 19, 100, 200 },
  { 2306, 3, 0, 0, 0, 19, 100, 200 },
  { 2309, 3, 0, 0, 0, 19, 100, 200 },
  { 2312, 3, 0, 0, 0, 19, 100, 200 },
  { 2315, 3, 0, 0, 0, 19, 100, 200 },
  { 2318, 3, 0, 0, 0, 19, 100, 200 },
  { 2321, 3, 0, 0, 0, 19, 100, 200 },
  { 2324, 3, 0, 0, 0, 19, 100, 200 },
  { 2327, 3, 0, 0, 0, 19, 100, 200 },
  { 2330, 3, 0, 0, 0, 19, 100, 200 },
  { 2333, 3, 0, 0, 0, 19, 100, 200 },
  { 2755, 3, 0, 0, 0, 19, 100, 200 },
  { 2758, 3, 0, 0, 0, 19, 100, 200 },
  { 2761, 3, 0, 0, 0, 19, 100, 200 },
  { 2764, 3, 0, 0, 0, 19, 100, 200 },
  { 2767, 3, 0, 0, 0, 19, 100, 200 },
  { 2770, 3, 0, 0, 0, 19, 100, 200 },
  { 2773, 3, 0, 0, 0, 19, 100, 200 },
  { 2776, 3, 0, 0, 0, 19, 100, 200 },
  { 2779, 3, 0, 0, 0, 19, 100, 200 },
  { 2782, 3, 0, 0, 0, 19, 100, 200 },
  { 2785, 3, 0, 0, 0, 19, 100, 200 },
  { 3195, 3, 0, 0, 0, 19, 200, 0 },
  { 3198, 3, 0, 0, 0, 19, 200, 0 },
  { 3201, 3, 0, 0, 0, 19, 200, 0 },
  { 3204, 3, 0, 0, 0, 19, 200, 0 },
  { 3207, 3, 0, 0, 0, 19, 200, 0 },
  { 3210, 3, 0, 0, 0, 19, 200, 0 },
  { 3213, 3, 0, 0, 0, 19, 200, 0 },
  { 3216, 3, 0, 0, 0, 19, 200, 0 },
  { 3219, 3, 0, 0, 0, 19, 200, 0 },
  { 3222, 3, 0, 0, 0, 19, 200, 0 },
  { 3225, 3, 0, 0, 0, 19, 200, 0 },
  { 3543, 3, 0, 0, 0, 19, 100, 0 },
  { 3546, 3, 0, 0, 0, 19, 100, 0 },
  { 3549, 3, 0, 0, 0, 19, 100, 0 },
  { 3552, 3, 0, 0, 0, 19, 100, 0 },
  { 3555, 3, 0, 0, 0, 19, 100, 0 },
  { 3558, 3, 0, 0, 0, 19, 100, 0 },
  { 3561, 3, 0, 0, 0, 19, 100, 0 },
  { 3564, 3, 0, 0, 0, 19, 100, 0 },
  { 3567, 3, 0, 0, 0, 19, 100, 0 },
  { 3570, 3, 0, 0, 0, 19, 100, 0 },
  { 3573, 3, 0, 0, 0, 19, 100, 0 },
  // 1142: vstore4, 
  { 1888, 4, 0, 0, 0, 19, 100, 200 },
  { 1892, 4, 0, 0, 0, 19, 100, 200 },
  { 1896, 4, 0, 0, 0, 19, 100, 200 },
  { 1900, 4, 0, 0, 0, 19, 100, 200 },
  { 1906, 4, 0, 0, 0, 19, 100, 200 },
  { 1910, 4, 0, 0, 0, 19, 100, 200 },
  { 1914, 4, 0, 0, 0, 19, 100, 200 },
  { 1918, 4, 0, 0, 0, 19, 100, 200 },
  { 1922, 4, 0, 0, 0, 19, 100, 200 },
  { 1926, 4, 0, 0, 0, 19, 100, 200 },
  { 1930, 4, 0, 0, 0, 19, 100, 200 },
  { 2336, 4, 0, 0, 0, 19, 100, 200 },
  { 2340, 4, 0, 0, 0, 19, 100, 200 },
  { 2344, 4, 0, 0, 0, 19, 100, 200 },
  { 2348, 4, 0, 0, 0, 19, 100, 200 },
  { 2352, 4, 0, 0, 0, 19, 100, 200 },
  { 2356, 4, 0, 0, 0, 19, 100, 200 },
  { 2360, 4, 0, 0, 0, 19, 100, 200 },
  { 2364, 4, 0, 0, 0, 19, 100, 200 },
  { 2368, 4, 0, 0, 0, 19, 100, 200 },
  { 2372, 4, 0, 0, 0, 19, 100, 200 },
  { 2376, 4, 0, 0, 0, 19, 100, 200 },
  { 2788, 4, 0, 0, 0, 19, 100, 200 },
  { 2792, 4, 0, 0, 0, 19, 100, 200 },
  { 2796, 4, 0, 0, 0, 19, 100, 200 },
  { 2800, 4, 0, 0, 0, 19, 100, 200 },
  { 2804, 4, 0, 0, 0, 19, 100, 200 },
  { 2808, 4, 0, 0, 0, 19, 100, 200 },
  { 2812, 4, 0, 0, 0, 19, 100, 200 },
  { 2816, 4, 0, 0, 0, 19, 100, 200 },
  { 2820, 4, 0, 0, 0, 19, 100, 200 },
  { 2824, 4, 0, 0, 0, 19, 100, 200 },
  { 2828, 4, 0, 0, 0, 19, 100, 200 },
  { 3228, 4, 0, 0, 0, 19, 200, 0 },
  { 3232, 4, 0, 0, 0, 19, 200, 0 },
  { 3236, 4, 0, 0, 0, 19, 200, 0 },
  { 3240, 4, 0, 0, 0, 19, 200, 0 },
  { 3244, 4, 0, 0, 0, 19, 200, 0 },
  { 3248, 4, 0, 0, 0, 19, 200, 0 },
  { 3252, 4, 0, 0, 0, 19, 200, 0 },
  { 3256, 4, 0, 0, 0, 19, 200, 0 },
  { 3260, 4, 0, 0, 0, 19, 200, 0 },
  { 3264, 4, 0, 0, 0, 19, 200, 0 },
  { 3268, 4, 0, 0, 0, 19, 200, 0 },
  // 1186: vloada_half4, vload_half4, 
  { 1934, 3, 0, 0, 0, 19, 100, 200 },
  { 2380, 3, 0, 0, 0, 19, 100, 200 },
  { 2832, 3, 0, 0, 0, 19, 100, 200 },
  { 3272, 3, 0, 0, 0, 19, 200, 0 },
  { 3576, 3, 0, 0, 0, 19, 100, 0 },
  // 1191: vstorea_half4, vstorea_half4_rte, vstorea_half4_rtz, vstorea_half4_rtp, vstorea_half4_rtn, vstore_half4, vstore_half4_rte, vstore_half4_rtz, vstore_half4_rtp, vstore_half4_rtn, 
  { 1937, 4, 0, 0, 0, 19, 100, 200 },
  { 1941, 4, 0, 0, 0, 19, 100, 200 },
  { 2383, 4, 0, 0, 0, 19, 100, 200 },
  { 2387, 4, 0, 0, 0, 19, 100, 200 },
  { 2835, 4, 0, 0, 0, 19, 100, 200 },
  { 2839, 4, 0, 0, 0, 19, 100, 200 },
  { 3275, 4, 0, 0, 0, 19, 200, 0 },
  { 3279, 4, 0, 0, 0, 19, 200, 0 },
  // 1199: vload8, 
  { 1947, 3, 0, 0, 0, 19, 100, 200 },
  { 1950, 3, 0, 0, 0, 19, 100, 200 },
  { 1955, 3, 0, 0, 0, 19, 100, 200 },
  { 1958, 3, 0, 0, 0, 19, 100, 200 },
  { 1961, 3, 0, 0, 0, 19, 100, 200 },
  { 1964, 3, 0, 0, 0, 19, 100, 200 },
  { 1967, 3, 0, 0, 0, 19, 100, 200 },
  { 1970, 3, 0, 0, 0, 19, 100, 200 },
  { 1973, 3, 0, 0, 0, 19, 100, 200 },
  { 1976, 3, 0, 0, 0, 19, 100, 200 },
  { 1979, 3, 0, 0, 0, 19, 100, 200 },
  { 2391, 3, 0, 0, 0, 19, 100, 200 },
  { 2394, 3, 0, 0, 0, 19, 100, 200 },
  { 2397, 3, 0, 0, 0, 19, 100, 200 },
  { 2400, 3, 0, 0, 0, 19, 100, 200 },
  { 2403, 3, 0, 0, 0, 19, 100, 200 },
  { 2406, 3, 0, 0, 0, 19, 100, 200 },
  { 2409, 3, 0, 0, 0, 19, 100, 200 },
  { 2412, 3, 0, 0, 0, 19, 100, 200 },
  { 2415, 3, 0, 0, 0, 19, 100, 200 },
  { 2418, 3, 0, 0, 0, 19, 100, 200 },
  { 2421, 3, 0, 0, 0, 19, 100, 200 },
  { 2843, 3, 0, 0, 0, 19, 100, 200 },
  { 2846, 3, 0, 0, 0, 19, 100, 200 },
  { 2849, 3, 0, 0, 0, 19, 100, 200 },
  { 2852, 3, 0, 0, 0, 19, 100, 200 },
  { 2855, 3, 0, 0, 0, 19, 100, 200 },
  { 2858, 3, 0, 0, 0, 19, 100, 200 },
  { 2861, 3, 0, 0, 0, 19, 100, 200 },
  { 2864, 3, 0, 0, 0, 19, 100, 200 },
  { 2867, 3, 0, 0, 0, 19, 100, 200 },
  { 2870, 3, 0, 0, 0, 19, 100, 200 },
  { 2873, 3, 0, 0, 0, 19, 100, 200 },
  { 3283, 3, 0, 0, 0, 19, 200, 0 },
  { 3288, 3, 0, 0, 0, 19, 200, 0 },
  { 3291, 3, 0, 0, 0, 19, 200, 0 },
  { 3294, 3, 0, 0, 0, 19, 200, 0 },
  { 3297, 3, 0, 0, 0, 19, 200, 0 },
  { 3300, 3, 0, 0, 0, 19, 200, 0 },
  { 3303, 3, 0, 0, 0, 19, 200, 0 },
  { 3306, 3, 0, 0, 0, 19, 200, 0 },
  { 3309, 3, 0, 0, 0, 19, 200, 0 },
  { 3312, 3, 0, 0, 0, 19, 200, 0 },
  { 3315, 3, 0, 0, 0, 19, 200, 0 },
  { 3579, 3, 0, 0, 0, 19, 100, 0 },
  { 3582, 3, 0, 0, 0, 19, 100, 0 },
  { 3585, 3, 0, 0, 0, 19, 100, 0 },
  { 3588, 3, 0, 0, 0, 19, 100, 0 },
  { 3591, 3, 0, 0, 0, 19, 100, 0 },
  { 3594, 3, 0, 0, 0, 19, 100, 0 },
  { 3597, 3, 0, 0, 0, 19, 100, 0 },
  { 3600, 3, 0, 0, 0, 19, 100, 0 },
  { 3603, 3, 0, 0, 0, 19, 100, 0 },
  { 3606, 3, 0, 0, 0, 19, 100, 0 },
  { 3609, 3, 0, 0, 0, 19, 100, 0 },
  // 1254: vstore8, 
  { 1982, 4, 0, 0, 0, 19, 100, 200 },
  { 1988, 4, 0, 0, 0, 19, 100, 200 },
  { 1992, 4, 0, 0, 0, 19, 100, 200 },
  { 1996, 4, 0, 0, 0, 19, 100, 200 },
  { 2000, 4, 0, 0, 0, 19, 100, 200 },
  { 2004, 4, 0, 0, 0, 19, 100, 200 },
  { 2008, 4, 0, 0, 0, 19, 100, 200 },
  { 2012, 4, 0, 0, 0, 19, 100, 200 },
  { 2016, 4, 0, 0, 0, 19, 100, 200 },
  { 2020, 4, 0, 0, 0, 19, 100, 200 },
  { 2024, 4, 0, 0, 0, 19, 100, 200 },
  { 2424, 4, 0, 0, 0, 19, 100, 200 },
  { 2428, 4, 0, 0, 0, 19, 100, 200 },
  { 2432, 4, 0, 0, 0, 19, 100, 200 },
  { 2436, 4, 0, 0, 0, 19, 100, 200 },
  { 2440, 4, 0, 0, 0, 19, 100, 200 },
  { 2444, 4, 0, 0, 0, 19, 100, 200 },
  { 2448, 4, 0, 0, 0, 19, 100, 200 },
  { 2452, 4, 0, 0, 0, 19, 100, 200 },
  { 2456, 4, 0, 0, 0, 19, 100, 200 },
  { 2460, 4, 0, 0, 0, 19, 100, 200 },
  { 2464, 4, 0, 0, 0, 19, 100, 200 },
  { 2876, 4, 0, 0, 0, 19, 100, 200 },
  { 2880, 4, 0, 0, 0, 19, 100, 200 },
  { 2884, 4, 0, 0, 0, 19, 100, 200 },
  { 2888, 4, 0, 0, 0, 19, 100, 200 },
  { 2892, 4, 0, 0, 0, 19, 100, 200 },
  { 2896, 4, 0, 0, 0, 19, 100, 200 },
  { 2900, 4, 0, 0, 0, 19, 100, 200 },
  { 2904, 4, 0, 0, 0, 19, 100, 200 },
  { 2908, 4, 0, 0, 0, 19, 100, 200 },
  { 2912, 4, 0, 0, 0, 19, 100, 200 },
  { 2916, 4, 0, 0, 0, 19, 100, 200 },
  { 3320, 4, 0, 0, 0, 19, 200, 0 },
  { 3324, 4, 0, 0, 0, 19, 200, 0 },
  { 3328, 4, 0, 0, 0, 19, 200, 0 },
  { 3332, 4, 0, 0, 0, 19, 200, 0 },
  { 3336, 4, 0, 0, 0, 19, 200, 0 },
  { 3340, 4, 0, 0, 0, 19, 200, 0 },
  { 3344, 4, 0, 0, 0, 19, 200, 0 },
  { 3348, 4, 0, 0, 0, 19, 200, 0 },
  { 3352, 4, 0, 0, 0, 19, 200, 0 },
  { 3356, 4, 0, 0, 0, 19, 200, 0 },
  { 3362, 4, 0, 0, 0, 19, 200, 0 },
  // 1298: vloada_half8, vload_half8, 
  { 2028, 3, 0, 0, 0, 19, 100, 200 },
  { 2468, 3, 0, 0, 0, 19, 100, 200 },
  { 2920, 3, 0, 0, 0, 19, 100, 200 },
  { 3366, 3, 0, 0, 0, 19, 200, 0 },
  { 3612, 3, 0, 0, 0, 19, 100, 0 },
  // 1303: vstorea_half8, vstorea_half8_rte, vstorea_half8_rtz, vstorea_half8_rtp, vstorea_half8_rtn, vstore_half8, vstore_half8_rte, vstore_half8_rtz, vstore_half8_rtp, vstore_half8_rtn, 
  { 2031, 4, 0, 0, 0, 19, 100, 200 },
  { 2035, 4, 0, 0, 0, 19, 100, 200 },
  { 2471, 4, 0, 0, 0, 19, 100, 200 },
  { 2475, 4, 0, 0, 0, 19, 100, 200 },
  { 2923, 4, 0, 0, 0, 19, 100, 200 },
  { 2927, 4, 0, 0, 0, 19, 100, 200 },
  { 3369, 4, 0, 0, 0, 19, 200, 0 },
  { 3373, 4, 0, 0, 0, 19, 200, 0 },
  // 1311: vload16, 
  { 2039, 3, 0, 0, 0, 19, 100, 200 },
  { 2042, 3, 0, 0, 0, 19, 100, 200 },
  { 2045, 3, 0, 0, 0, 19, 100, 200 },
  { 2048, 3, 0, 0, 0, 19, 100, 200 },
  { 2051, 3, 0, 0, 0, 19, 100, 200 },
  { 2054, 3, 0, 0, 0, 19, 100, 200 },
  { 2057, 3, 0, 0, 0, 19, 100, 200 },
  { 2060, 3, 0, 0, 0, 19, 100, 200 },
  { 2063, 3, 0, 0, 0, 19, 100, 200 },
  { 2066, 3, 0, 0, 0, 19, 100, 200 },
  { 2069, 3, 0, 0, 0, 19, 100, 200 },
  { 2479, 3, 0, 0, 0, 19, 100, 200 },
  { 2482, 3, 0, 0, 0, 19, 100, 200 },
  { 2485, 3, 0, 0, 0, 19, 100, 200 },
  { 2488, 3, 0, 0, 0, 19, 100, 200 },
  { 2491, 3, 0, 0, 0, 19, 100, 200 },
  { 2494, 3, 0, 0, 0, 19, 100, 200 },
  { 2497, 3, 0, 0, 0, 19, 100, 200 },
  { 2500, 3, 0, 0, 0, 19, 100, 200 },
  { 2503, 3, 0, 0, 0, 19, 100, 200 },
  { 2506, 3, 0, 0, 0, 19, 100, 200 },
  { 2509, 3, 0, 0, 0, 19, 100, 200 },
  { 2931, 3, 0, 0, 0, 19, 100, 200 },
  { 2934, 3, 0, 0, 0, 19, 100, 200 },
  { 2937, 3, 0, 0, 0, 19, 100, 200 },
  { 2940, 3, 0, 0, 0, 19, 100, 200 },
  { 2943, 3, 0, 0, 0, 19, 100, 200 },
  { 2946, 3, 0, 0, 0, 19, 100, 200 },
  { 2949, 3, 0, 0, 0, 19, 100, 200 },
  { 2952, 3, 0, 0, 0, 19, 100, 200 },
  { 2955, 3, 0, 0, 0, 19, 100, 200 },
  { 2958, 3, 0, 0, 0, 19, 100, 200 },
  { 2961, 3, 0, 0, 0, 19, 100, 200 },
  { 3379, 3, 0, 0, 0, 19, 200, 0 },
  { 3382, 3, 0, 0, 0, 19, 200, 0 },
  { 3385, 3, 0, 0, 0, 19, 200, 0 },
  { 3388, 3, 0, 0, 0, 19, 200, 0 },
  { 3391, 3, 0, 0, 0, 19, 200, 0 },
  { 3394, 3, 0, 0, 0, 19, 200, 0 },
  { 3397, 3, 0, 0, 0, 19, 200, 0 },
  { 3400, 3, 0, 0, 0, 19, 200, 0 },
  { 3405, 3, 0, 0, 0, 19, 200, 0 },
  { 3408, 3, 0, 0, 0, 19, 200, 0 },
  { 3411, 3, 0, 0, 0, 19, 200, 0 },
  { 3615, 3, 0, 0, 0, 19, 100, 0 },
  { 3618, 3, 0, 0, 0, 19, 100, 0 },
  { 3621, 3, 0, 0, 0, 19, 100, 0 },
  { 3624, 3, 0, 0, 0, 19, 100, 0 },
  { 3627, 3, 0, 0, 0, 19, 100, 0 },
  { 3630, 3, 0, 0, 0, 19, 100, 0 },
  { 3633, 3, 0, 0, 0, 19, 100, 0 },
  { 3636, 3, 0, 0, 0, 19, 100, 0 },
  { 3639, 3, 0, 0, 0, 19, 100, 0 },
  { 3642, 3, 0, 0, 0, 19, 100, 0 },
  { 3645, 3, 0, 0, 0, 19, 100, 0 },
  // 1366: vstore16, 
  { 2072, 4, 0, 0, 0, 19, 100, 200 },
  { 2076, 4, 0, 0, 0, 19, 100, 200 },
  { 2080, 4, 0, 0, 0, 19, 100, 200 },
  { 2084, 4, 0, 0, 0, 19, 100, 200 },
  { 2088, 4, 0, 0, 0, 19, 100, 200 },
  { 2092, 4, 0, 0, 0, 19, 100, 200 },
  { 2096, 4, 0, 0, 0, 19, 100, 200 },
  { 2100, 4, 0, 0, 0, 19, 100, 200 },
  { 2104, 4, 0, 0, 0, 19, 100, 200 },
  { 2108, 4, 0, 0, 0, 19, 100, 200 },
  { 2112, 4, 0, 0, 0, 19, 100, 200 },
  { 2512, 4, 0, 0, 0, 19, 100, 200 },
  { 2516, 4, 0, 0, 0, 19, 100, 200 },
  { 2520, 4, 0, 0, 0, 19, 100, 200 },
  { 2524, 4, 0, 0, 0, 19, 100, 200 },
  { 2528, 4, 0, 0, 0, 19, 100, 200 },
  { 2532, 4, 0, 0, 0, 19, 100, 200 },
  { 2536, 4, 0, 0, 0, 19, 100, 200 },
  { 2540, 4, 0, 0, 0, 19, 100, 200 },
  { 2544, 4, 0, 0, 0, 19, 100, 200 },
  { 2548, 4, 0, 0, 0, 19, 100, 200 },
  { 2552, 4, 0, 0, 0, 19, 100, 200 },
  { 2964, 4, 0, 0, 0, 19, 100, 200 },
  { 2968, 4, 0, 0, 0, 19, 100, 200 },
  { 2972, 4, 0, 0, 0, 19, 100, 200 },
  { 2976, 4, 0, 0, 0, 19, 100, 200 },
  { 2980, 4, 0, 0, 0, 19, 100, 200 },
  { 2984, 4, 0, 0, 0, 19, 100, 200 },
  { 2988, 4, 0, 0, 0, 19, 100, 200 },
  { 2992, 4, 0, 0, 0, 19, 100, 200 },
  { 2996, 4, 0, 0, 0, 19, 100, 200 },
  { 3000, 4, 0, 0, 0, 19, 100, 200 },
  { 3004, 4, 0, 0, 0, 19, 100, 200 },
  { 3414, 4, 0, 0, 0, 19, 200, 0 },
  { 3418, 4, 0, 0, 0, 19, 200, 0 },
  { 3422, 4, 0, 0, 0, 19, 200, 0 },
  { 3426, 4, 0, 0, 0, 19, 200, 0 },
  { 3430, 4, 0, 0, 0, 19, 200, 0 },
  { 3434, 4, 0, 0, 0, 19, 200, 0 },
  { 3438, 4, 0, 0, 0, 19, 200, 0 },
  { 3444, 4, 0, 0, 0, 19, 200, 0 },
  { 3448, 4, 0, 0, 0, 19, 200, 0 },
  { 3452, 4, 0, 0, 0, 19, 200, 0 },
  { 3456, 4, 0, 0, 0, 19, 200, 0 },
  // 1410: vloada_half16, vload_half16, 
  { 2116, 3, 0, 0, 0, 19, 100, 200 },
  { 2556, 3, 0, 0, 0, 19, 100, 200 },
  { 3008, 3, 0, 0, 0, 19, 100, 200 },
  { 3460, 3, 0, 0, 0, 19, 200, 0 },
  { 3648, 3, 0, 0, 0, 19, 100, 0 },
  // 1415: vstorea_half16, vstorea_half16_rte, vstorea_half16_rtz, vstorea_half16_rtp, vstorea_half16_rtn, vstore_half16, vstore_half16_rte, vstore_half16_rtz, vstore_half16_rtp, vstore_half16_rtn, 
  { 2119, 4, 0, 0, 0, 19, 100, 200 },
  { 2123, 4, 0, 0, 0, 19, 100, 200 },
  { 2559, 4, 0, 0, 0, 19, 100, 200 },
  { 2563, 4, 0, 0, 0, 19, 100, 200 },
  { 3011, 4, 0, 0, 0, 19, 100, 200 },
  { 3015, 4, 0, 0, 0, 19, 100, 200 },
  { 3463, 4, 0, 0, 0, 19, 200, 0 },
  { 3467, 4, 0, 0, 0, 19, 200, 0 },
  // 1423: vload_half, vloada_half, 
  { 3651, 3, 0, 0, 0, 19, 100, 200 },
  { 3662, 3, 0, 0, 0, 19, 100, 200 },
  { 3673, 3, 0, 0, 0, 19, 100, 200 },
  { 3696, 3, 0, 0, 0, 19, 200, 0 },
  { 3707, 3, 0, 0, 0, 19, 100, 0 },
  // 1428: vstore_half, vstorea_half, vstore_half_rte, vstorea_half_rte, vstore_half_rtz, vstorea_half_rtz, vstore_half_rtp, vstorea_half_rtp, vstore_half_rtn, vstorea_half_rtn, 
  { 3654, 4, 0, 0, 0, 19, 100, 200 },
  { 3658, 4, 0, 0, 0, 19, 100, 200 },
  { 3665, 4, 0, 0, 0, 19, 100, 200 },
  { 3669, 4, 0, 0, 0, 19, 100, 200 },
  { 3676, 4, 0, 0, 0, 19, 100, 200 },
  { 3680, 4, 0, 0, 0, 19, 100, 200 },
  { 3699, 4, 0, 0, 0, 19, 200, 0 },
  { 3703, 4, 0, 0, 0, 19, 200, 0 },
  // 1436: async_work_group_copy, 
  { 3710, 5, 0, 0, 0, 19, 100, 0 },
  { 3715, 5, 0, 0, 0, 19, 100, 0 },
  // 1438: async_work_group_strided_copy, 
  { 3720, 6, 0, 0, 0, 19, 100, 0 },
  { 3726, 6, 0, 0, 0, 19, 100, 0 },
  // 1440: wait_group_events, 
  { 3732, 3, 0, 0, 0, 19, 100, 0 },
  // 1441: prefetch, 
  { 3735, 3, 0, 0, 0, 19, 100, 0 },
  // 1442: atom_add, atom_sub, atom_xchg, 
  { 3738, 3, 0, 0, 0, 5, 100, 0 },
  { 3747, 3, 0, 0, 0, 5, 100, 0 },
  { 3756, 3, 0, 0, 0, 9, 100, 0 },
  { 3765, 3, 0, 0, 0, 9, 100, 0 },
  { 3774, 3, 0, 0, 0, 7, 100, 0 },
  { 3783, 3, 0, 0, 0, 7, 100, 0 },
  { 3792, 3, 0, 0, 0, 7, 100, 0 },
  { 3801, 3, 0, 0, 0, 7, 100, 0 },
  // 1450: atom_inc, atom_dec, 
  { 3741, 2, 0, 0, 0, 5, 100, 0 },
  { 3750, 2, 0, 0, 0, 5, 100, 0 },
  { 3759, 2, 0, 0, 0, 9, 100, 0 },
  { 3768, 2, 0, 0, 0, 9, 100, 0 },
  { 3777, 2, 0, 0, 0, 7, 100, 0 },
  { 3786, 2, 0, 0, 0, 7, 100, 0 },
  { 3795, 2, 0, 0, 0, 7, 100, 0 },
  { 3804, 2, 0, 0, 0, 7, 100, 0 },
  // 1458: atom_cmpxchg, 
  { 3743, 4, 0, 0, 0, 5, 100, 0 },
  { 3752, 4, 0, 0, 0, 5, 100, 0 },
  { 3761, 4, 0, 0, 0, 9, 100, 0 },
  { 3770, 4, 0, 0, 0, 9, 100, 0 },
  { 3779, 4, 0, 0, 0, 7, 100, 0 },
  { 3788, 4, 0, 0, 0, 7, 100, 0 },
  { 3797, 4, 0, 0, 0, 7, 100, 0 },
  { 3806, 4, 0, 0, 0, 7, 100, 0 },
  // 1466: atom_min, atom_max, atom_and, atom_or, atom_xor, 
  { 3738, 3, 0, 0, 0, 6, 100, 0 },
  { 3747, 3, 0, 0, 0, 6, 100, 0 },
  { 3756, 3, 0, 0, 0, 10, 100, 0 },
  { 3765, 3, 0, 0, 0, 10, 100, 0 },
  { 3774, 3, 0, 0, 0, 8, 100, 0 },
  { 3783, 3, 0, 0, 0, 8, 100, 0 },
  { 3792, 3, 0, 0, 0, 8, 100, 0 },
  { 3801, 3, 0, 0, 0, 8, 100, 0 },
  // 1474: atomic_add, atomic_sub, atomic_xchg, atomic_min, atomic_max, atomic_and, atomic_or, atomic_xor, 
  { 3738, 3, 0, 0, 0, 19, 100, 0 },
  { 3747, 3, 0, 0, 0, 19, 100, 0 },
  { 3756, 3, 0, 0, 0, 19, 100, 0 },
  { 3765, 3, 0, 0, 0, 19, 100, 0 },
  // 1478: atomic_inc, atomic_dec, 
  { 3741, 2, 0, 0, 0, 19, 100, 0 },
  { 3750, 2, 0, 0, 0, 19, 100, 0 },
  { 3759, 2, 0, 0, 0, 19, 100, 0 },
  { 3768, 2, 0, 0, 0, 19, 100, 0 },
  // 1482: atomic_cmpxchg, 
  { 3743, 4, 0, 0, 0, 19, 100, 0 },
  { 3752, 4, 0, 0, 0, 19, 100, 0 },
  { 3761, 4, 0, 0, 0, 19, 100, 0 },
  { 3770, 4, 0, 0, 0, 19, 100, 0 },
  // 1486: atomic_init, atomic_store, 
  { 3812, 3, 0, 0, 0, 19, 200, 0 },
  { 3826, 3, 0, 0, 0, 19, 200, 0 },
  { 3840, 3, 0, 0, 0, 19, 200, 0 },
  { 3854, 3, 0, 0, 0, 19, 200, 0 },
  { 3868, 3, 0, 0, 0, 19, 200, 0 },
  { 3880, 3, 0, 0, 0, 19, 200, 0 },
  // 1492: atomic_load, 
  { 3815, 2, 0, 0, 0, 19, 200, 0 },
  { 3829, 2, 0, 0, 0, 19, 200, 0 },
  { 3843, 2, 0, 0, 0, 19, 200, 0 },
  { 3857, 2, 0, 0, 0, 19, 200, 0 },
  { 3871, 2, 0, 0, 0, 19, 200, 0 },
  { 3885, 2, 0, 0, 0, 19, 200, 0 },
  // 1498: atomic_exchange, 
  { 3819, 3, 0, 0, 0, 19, 200, 0 },
  { 3833, 3, 0, 0, 0, 19, 200, 0 },
  { 3845, 3, 0, 0, 0, 19, 200, 0 },
  { 3859, 3, 0, 0, 0, 19, 200, 0 },
  { 3873, 3, 0, 0, 0, 19, 200, 0 },
  { 3887, 3, 0, 0, 0, 19, 200, 0 },
  // 1504: atomic_compare_exchange_weak, atomic_compare_exchange_strong, 
  { 3822, 4, 0, 0, 0, 19, 200, 0 },
  { 3836, 4, 0, 0, 0, 19, 200, 0 },
  { 3848, 4, 0, 0, 0, 19, 200, 0 },
  { 3862, 4, 0, 0, 0, 19, 200, 0 },
  { 3876, 4, 0, 0, 0, 19, 200, 0 },
  { 3890, 4, 0, 0, 0, 19, 200, 0 },
  // 1510: atomic_fetch_add, atomic_fetch_sub, 
  { 3819, 3, 0, 0, 0, 19, 200, 0 },
  { 3833, 3, 0, 0, 0, 19, 200, 0 },
  { 3845, 3, 0, 0, 0, 19, 200, 0 },
  { 3859, 3, 0, 0, 0, 19, 200, 0 },
  { 3894, 3, 0, 0, 0, 19, 200, 0 },
  { 3897, 3, 0, 0, 0, 19, 200, 0 },
  // 1516: atomic_fetch_or, atomic_fetch_xor, atomic_fetch_and, atomic_fetch_min, atomic_fetch_max, 
  { 3819, 3, 0, 0, 0, 19, 200, 0 },
  { 3833, 3, 0, 0, 0, 19, 200, 0 },
  { 3845, 3, 0, 0, 0, 19, 200, 0 },
  { 3859, 3, 0, 0, 0, 19, 200, 0 },
  { 3900, 3, 0, 0, 0, 19, 200, 0 },
  { 3903, 3, 0, 0, 0, 19, 200, 0 },
  // 1522: shuffle, 
  { 3906, 3, 0, 1, 0, 19, 100, 0 },
  { 3909, 3, 0, 1, 0, 19, 100, 0 },
  { 3912, 3, 0, 1, 0, 19, 100, 0 },
  { 3915, 3, 0, 1, 0, 19, 100, 0 },
  { 3918, 3, 0, 1, 0, 19, 100, 0 },
  { 3921, 3, 0, 1, 0, 19, 100, 0 },
  { 3924, 3, 0, 1, 0, 19, 100, 0 },
  { 3927, 3, 0, 1, 0, 19, 100, 0 },
  { 3930, 3, 0, 1, 0, 19, 100, 0 },
  { 3933, 3, 0, 1, 0, 19, 100, 0 },
  { 3936, 3, 0, 1, 0, 19, 100, 0 },
  { 3939, 3, 0, 1, 0, 19, 100, 0 },
  { 3942, 3, 0, 1, 0, 19, 100, 0 },
  { 3945, 3, 0, 1, 0, 19, 100, 0 },
  { 3948, 3, 0, 1, 0, 19, 100, 0 },
  { 3951, 3, 0, 1, 0, 19, 100, 0 },
  // 1538: shuffle2, 
  { 3954, 4, 0, 1, 0, 19, 100, 0 },
  { 3958, 4, 0, 1, 0, 19, 100, 0 },
  { 3962, 4, 0, 1, 0, 19, 100, 0 },
  { 3966, 4, 0, 1, 0, 19, 100, 0 },
  { 3970, 4, 0, 1, 0, 19, 100, 0 },
  { 3974, 4, 0, 1, 0, 19, 100, 0 },
  { 3978, 4, 0, 1, 0, 19, 100, 0 },
  { 3982, 4, 0, 1, 0, 19, 100, 0 },
  { 3986, 4, 0, 1, 0, 19, 100, 0 },
  { 3990, 4, 0, 1, 0, 19, 100, 0 },
  { 3994, 4, 0, 1, 0, 19, 100, 0 },
  { 3998, 4, 0, 1, 0, 19, 100, 0 },
  { 4002, 4, 0, 1, 0, 19, 100, 0 },
  { 4006, 4, 0, 1, 0, 19, 100, 0 },
  { 4010, 4, 0, 1, 0, 19, 100, 0 },
  { 4014, 4, 0, 1, 0, 19, 100, 0 },
  // 1554: read_imagef, 
  { 4018, 4, 1, 0, 0, 19, 100, 0 },
  { 4030, 4, 1, 0, 0, 19, 100, 0 },
  { 4042, 4, 1, 0, 0, 19, 100, 0 },
  { 4054, 4, 1, 0, 0, 19, 100, 0 },
  { 4066, 4, 1, 0, 0, 19, 100, 0 },
  { 4078, 4, 1, 0, 0, 19, 100, 0 },
  { 4090, 4, 1, 0, 0, 19, 100, 0 },
  { 4102, 4, 1, 0, 0, 19, 100, 0 },
  { 4114, 4, 1, 0, 0, 19, 100, 0 },
  { 4126, 4, 1, 0, 0, 19, 100, 0 },
  { 4138, 4, 1, 0, 0, 19, 100, 0 },
  { 4142, 4, 1, 0, 0, 19, 100, 0 },
  { 4146, 4, 1, 0, 0, 19, 100, 0 },
  { 4150, 4, 1, 0, 0, 19, 100, 0 },
  { 4154, 3, 1, 0, 0, 19, 120, 0 },
  { 4163, 3, 1, 0, 0, 19, 120, 0 },
  { 4172, 3, 1, 0, 0, 19, 120, 0 },
  { 4181, 3, 1, 0, 0, 19, 120, 0 },
  { 4184, 3, 1, 0, 0, 19, 120, 0 },
  { 4187, 3, 1, 0, 0, 19, 120, 0 },
  { 4196, 3, 1, 0, 0, 19, 120, 0 },
  { 4205, 3, 1, 0, 0, 19, 120, 0 },
  { 4214, 3, 1, 0, 0, 19, 120, 0 },
  { 4223, 3, 1, 0, 0, 19, 120, 0 },
  { 4232, 3, 1, 0, 0, 19, 120, 0 },
  { 4241, 3, 1, 0, 0, 19, 120, 0 },
  { 4250, 3, 1, 0, 0, 19, 120, 0 },
  { 4259, 3, 1, 0, 0, 19, 120, 0 },
  { 4268, 3, 1, 0, 0, 19, 120, 0 },
  { 4271, 3, 1, 0, 0, 19, 120, 0 },
  { 4696, 5, 1, 0, 0, 11, 100, 0 },
  { 4701, 6, 1, 0, 0, 11, 100, 0 },
  { 4729, 5, 1, 0, 0, 11, 100, 0 },
  { 4734, 6, 1, 0, 0, 11, 100, 0 },
  { 4740, 5, 1, 0, 0, 11, 100, 0 },
  { 4745, 6, 1, 0, 0, 11, 100, 0 },
  { 4773, 6, 1, 0, 0, 11, 100, 0 },
  { 4779, 5, 1, 0, 0, 11, 100, 0 },
  { 4796, 5, 1, 0, 0, 11, 100, 0 },
  { 4801, 6, 1, 0, 0, 11, 100, 0 },
  { 4829, 5, 1, 0, 0, 11, 100, 0 },
  { 4834, 6, 1, 0, 0, 11, 100, 0 },
  { 4862, 5, 1, 0, 0, 11, 100, 0 },
  { 4867, 6, 1, 0, 0, 11, 100, 0 },
  { 4958, 4, 1, 0, 0, 4, 100, 0 },
  { 4970, 4, 1, 0, 0, 4, 100, 0 },
  { 4982, 4, 1, 0, 0, 4, 100, 0 },
  { 4986, 4, 1, 0, 0, 4, 100, 0 },
  { 4990, 4, 1, 0, 0, 4, 100, 0 },
  { 5002, 4, 1, 0, 0, 4, 100, 0 },
  { 5014, 4, 1, 0, 0, 4, 100, 0 },
  { 5018, 4, 1, 0, 0, 4, 100, 0 },
  // 1606: read_imagei, 
  { 4022, 4, 1, 0, 0, 19, 100, 0 },
  { 4034, 4, 1, 0, 0, 19, 100, 0 },
  { 4046, 4, 1, 0, 0, 19, 100, 0 },
  { 4058, 4, 1, 0, 0, 19, 100, 0 },
  { 4070, 4, 1, 0, 0, 19, 100, 0 },
  { 4082, 4, 1, 0, 0, 19, 100, 0 },
  { 4094, 4, 1, 0, 0, 19, 100, 0 },
  { 4106, 4, 1, 0, 0, 19, 100, 0 },
  { 4118, 4, 1, 0, 0, 19, 100, 0 },
  { 4130, 4, 1, 0, 0, 19, 100, 0 },
  { 4157, 3, 1, 0, 0, 19, 120, 0 },
  { 4166, 3, 1, 0, 0, 19, 120, 0 },
  { 4175, 3, 1, 0, 0, 19, 120, 0 },
  { 4190, 3, 1, 0, 0, 19, 120, 0 },
  { 4199, 3, 1, 0, 0, 19, 120, 0 },
  { 4208, 3, 1, 0, 0, 19, 120, 0 },
  { 4217, 3, 1, 0, 0, 19, 120, 0 },
  { 4226, 3, 1, 0, 0, 19, 120, 0 },
  { 4235, 3, 1, 0, 0, 19, 120, 0 },
  { 4244, 3, 1, 0, 0, 19, 120, 0 },
  { 4253, 3, 1, 0, 0, 19, 120, 0 },
  { 4262, 3, 1, 0, 0, 19, 120, 0 },
  { 4707, 5, 1, 0, 0, 11, 100, 0 },
  { 4712, 6, 1, 0, 0, 11, 100, 0 },
  { 4751, 5, 1, 0, 0, 11, 100, 0 },
  { 4756, 6, 1, 0, 0, 11, 100, 0 },
  { 4784, 6, 1, 0, 0, 11, 100, 0 },
  { 4779, 5, 1, 0, 0, 11, 100, 0 },
  { 4807, 5, 1, 0, 0, 11, 100, 0 },
  { 4812, 6, 1, 0, 0, 11, 100, 0 },
  { 4840, 5, 1, 0, 0, 11, 100, 0 },
  { 4845, 6, 1, 0, 0, 11, 100, 0 },
  { 4962, 4, 1, 0, 0, 4, 100, 0 },
  { 4974, 4, 1, 0, 0, 4, 100, 0 },
  { 4994, 4, 1, 0, 0, 4, 100, 0 },
  { 5006, 4, 1, 0, 0, 4, 100, 0 },
  // 1642: read_imageui, 
  { 4026, 4, 1, 0, 0, 19, 100, 0 },
  { 4038, 4, 1, 0, 0, 19, 100, 0 },
  { 4050, 4, 1, 0, 0, 19, 100, 0 },
  { 4062, 4, 1, 0, 0, 19, 100, 0 },
  { 4074, 4, 1, 0, 0, 19, 100, 0 },
  { 4086, 4, 1, 0, 0, 19, 100, 0 },
  { 4098, 4, 1, 0, 0, 19, 100, 0 },
  { 4110, 4, 1, 0, 0, 19, 100, 0 },
  { 4122, 4, 1, 0, 0, 19, 100, 0 },
  { 4134, 4, 1, 0, 0, 19, 100, 0 },
  { 4160, 3, 1, 0, 0, 19, 120, 0 },
  { 4169, 3, 1, 0, 0, 19, 120, 0 },
  { 4178, 3, 1, 0, 0, 19, 120, 0 },
  { 4193, 3, 1, 0, 0, 19, 120, 0 },
  { 4202, 3, 1, 0, 0, 19, 120, 0 },
  { 4211, 3, 1, 0, 0, 19, 120, 0 },
  { 4220, 3, 1, 0, 0, 19, 120, 0 },
  { 4229, 3, 1, 0, 0, 19, 120, 0 },
  { 4238, 3, 1, 0, 0, 19, 120, 0 },
  { 4247, 3, 1, 0, 0, 19, 120, 0 },
  { 4256, 3, 1, 0, 0, 19, 120, 0 },
  { 4265, 3, 1, 0, 0, 19, 120, 0 },
  { 4718, 5, 1, 0, 0, 11, 100, 0 },
  { 4723, 6, 1, 0, 0, 11, 100, 0 },
  { 4762, 5, 1, 0, 0, 11, 100, 0 },
  { 4767, 6, 1, 0, 0, 11, 100, 0 },
  { 4790, 6, 1, 0, 0, 11, 100, 0 },
  { 4779, 5, 1, 0, 0, 11, 100, 0 },
  { 4818, 5, 1, 0, 0, 11, 100, 0 },
  { 4823, 6, 1, 0, 0, 11, 100, 0 },
  { 4851, 5, 1, 0, 0, 11, 100, 0 },
  { 4856, 6, 1, 0, 0, 11, 100, 0 },
  { 4966, 4, 1, 0, 0, 4, 100, 0 },
  { 4978, 4, 1, 0, 0, 4, 100, 0 },
  { 4998, 4, 1, 0, 0, 4, 100, 0 },
  { 5010, 4, 1, 0, 0, 4, 100, 0 },
  // 1678: write_imagef, 
  { 4274, 4, 0, 0, 0, 19, 100, 0 },
  { 4286, 4, 0, 0, 0, 19, 100, 0 },
  { 4298, 4, 0, 0, 0, 19, 100, 0 },
  { 4310, 4, 0, 0, 0, 19, 100, 0 },
  { 4322, 4, 0, 0, 0, 19, 100, 0 },
  { 4334, 4, 0, 0, 0, 19, 100, 0 },
  { 4338, 4, 0, 0, 0, 19, 100, 0 },
  { 4342, 4, 0, 0, 0, 19, 100, 0 },
  { 4354, 4, 0, 0, 0, 19, 100, 0 },
  { 4366, 4, 0, 0, 0, 19, 100, 0 },
  { 4378, 4, 0, 0, 0, 19, 100, 0 },
  { 4390, 4, 0, 0, 0, 19, 100, 0 },
  { 4402, 4, 0, 0, 0, 19, 100, 0 },
  { 4414, 4, 0, 0, 0, 19, 100, 0 },
  { 4428, 4, 0, 0, 0, 19, 100, 0 },
  { 4432, 4, 0, 0, 0, 19, 100, 0 },
  { 4873, 5, 0, 0, 0, 12, 100, 0 },
  { 4888, 5, 0, 0, 0, 12, 100, 0 },
  { 4893, 5, 0, 0, 0, 12, 100, 0 },
  { 4908, 5, 0, 0, 0, 12, 100, 0 },
  { 4923, 5, 0, 0, 0, 12, 100, 0 },
  { 4938, 5, 0, 0, 0, 12, 100, 0 },
  { 4943, 5, 0, 0, 0, 13, 100, 0 },
  // 1701: write_imagei, 
  { 4278, 4, 0, 0, 0, 19, 100, 0 },
  { 4290, 4, 0, 0, 0, 19, 100, 0 },
  { 4302, 4, 0, 0, 0, 19, 100, 0 },
  { 4314, 4, 0, 0, 0, 19, 100, 0 },
  { 4326, 4, 0, 0, 0, 19, 100, 0 },
  { 4346, 4, 0, 0, 0, 19, 100, 0 },
  { 4358, 4, 0, 0, 0, 19, 100, 0 },
  { 4370, 4, 0, 0, 0, 19, 100, 0 },
  { 4382, 4, 0, 0, 0, 19, 100, 0 },
  { 4394, 4, 0, 0, 0, 19, 100, 0 },
  { 4406, 4, 0, 0, 0, 19, 100, 0 },
  { 4418, 4, 0, 0, 0, 19, 100, 0 },
  { 4878, 5, 0, 0, 0, 12, 100, 0 },
  { 4898, 5, 0, 0, 0, 12, 100, 0 },
  { 4913, 5, 0, 0, 0, 12, 100, 0 },
  { 4928, 5, 0, 0, 0, 12, 100, 0 },
  { 4948, 5, 0, 0, 0, 13, 100, 0 },
  // 1718: write_imageui, 
  { 4282, 4, 0, 0, 0, 19, 100, 0 },
  { 4294, 4, 0, 0, 0, 19, 100, 0 },
  { 4306, 4, 0, 0, 0, 19, 100, 0 },
  { 4318, 4, 0, 0, 0, 19, 100, 0 },
  { 4330, 4, 0, 0, 0, 19, 100, 0 },
  { 4350, 4, 0, 0, 0, 19, 100, 0 },
  { 4362, 4, 0, 0, 0, 19, 100, 0 },
  { 4374, 4, 0, 0, 0, 19, 100, 0 },
  { 4386, 4, 0, 0, 0, 19, 100, 0 },
  { 4398, 4, 0, 0, 0, 19, 100, 0 },
  { 4410, 4, 0, 0, 0, 19, 100, 0 },
  { 4424, 4, 0, 0, 0, 19, 100, 0 },
  { 4883, 5, 0, 0, 0, 12, 100, 0 },
  { 4903, 5, 0, 0, 0, 12, 100, 0 },
  { 4918, 5, 0, 0, 0, 12, 100, 0 },
  { 4933, 5, 0, 0, 0, 12, 100, 0 },
  { 4953, 5, 0, 0, 0, 13, 100, 0 },
  // 1735: get_image_width, get_image_channel_data_type, get_image_channel_order, 
  { 4436, 2, 0, 0, 0, 19, 100, 0 },
  { 4450, 2, 0, 0, 0, 19, 100, 0 },
  { 4438, 2, 0, 0, 0, 19, 100, 0 },
  { 4440, 2, 0, 0, 0, 19, 100, 0 },
  { 4454, 2, 0, 0, 0, 19, 100, 0 },
  { 4456, 2, 0, 0, 0, 19, 100, 0 },
  { 4458, 2, 0, 0, 0, 19, 100, 0 },
  { 4460, 2, 0, 0, 0, 19, 100, 0 },
  { 4476, 2, 0, 0, 0, 19, 100, 0 },
  { 4478, 2, 0, 0, 0, 19, 100, 0 },
  { 4480, 2, 0, 0, 0, 19, 100, 0 },
  { 4484, 2, 0, 0, 0, 19, 100, 0 },
  { 4486, 2, 0, 0, 0, 19, 100, 0 },
  { 4488, 2, 0, 0, 0, 19, 100, 0 },
  { 4490, 2, 0, 0, 0, 19, 100, 0 },
  { 4492, 2, 0, 0, 0, 19, 100, 0 },
  { 4510, 2, 0, 0, 0, 19, 100, 0 },
  { 4512, 2, 0, 0, 0, 19, 100, 0 },
  { 4514, 2, 0, 0, 0, 19, 100, 0 },
  { 4516, 2, 0, 0, 0, 19, 100, 0 },
  { 4518, 2, 0, 0, 0, 19, 100, 0 },
  { 4520, 2, 0, 0, 0, 19, 100, 0 },
  { 4522, 2, 0, 0, 0, 19, 100, 0 },
  { 4524, 2, 0, 0, 0, 19, 100, 0 },
  { 5022, 2, 0, 1, 0, 4, 100, 0 },
  { 5028, 2, 0, 1, 0, 4, 100, 0 },
  { 5032, 2, 0, 1, 0, 4, 100, 0 },
  { 5036, 2, 0, 1, 0, 4, 100, 0 },
  { 5044, 2, 0, 1, 0, 4, 100, 0 },
  { 5050, 2, 0, 1, 0, 4, 100, 0 },
  { 5056, 2, 0, 1, 0, 4, 100, 0 },
  { 5062, 2, 0, 1, 0, 4, 100, 0 },
  { 5072, 2, 0, 1, 0, 4, 100, 0 },
  { 5076, 2, 0, 1, 0, 4, 100, 0 },
  { 5082, 2, 0, 1, 0, 4, 100, 0 },
  { 5086, 2, 0, 1, 0, 4, 100, 0 },
  // 1771: get_image_height, 
  { 4438, 2, 0, 0, 0, 19, 100, 0 },
  { 4440, 2, 0, 0, 0, 19, 100, 0 },
  { 4456, 2, 0, 0, 0, 19, 100, 0 },
  { 4458, 2, 0, 0, 0, 19, 100, 0 },
  { 4460, 2, 0, 0, 0, 19, 100, 0 },
  { 4480, 2, 0, 0, 0, 19, 100, 0 },
  { 4484, 2, 0, 0, 0, 19, 100, 0 },
  { 4488, 2, 0, 0, 0, 19, 100, 0 },
  { 4490, 2, 0, 0, 0, 19, 100, 0 },
  { 4492, 2, 0, 0, 0, 19, 100, 0 },
  { 4514, 2, 0, 0, 0, 19, 100, 0 },
  { 4516, 2, 0, 0, 0, 19, 100, 0 },
  { 4520, 2, 0, 0, 0, 19, 100, 0 },
  { 4522, 2, 0, 0, 0, 19, 100, 0 },
  { 4524, 2, 0, 0, 0, 19, 100, 0 },
  { 5022, 2, 0, 1, 0, 4, 100, 0 },
  { 5028, 2, 0, 1, 0, 4, 100, 0 },
  { 5032, 2, 0, 1, 0, 4, 100, 0 },
  { 5036, 2, 0, 1, 0, 4, 100, 0 },
  { 5044, 2, 0, 1, 0, 4, 100, 0 },
  { 5050, 2, 0, 1, 0, 4, 100, 0 },
  { 5056, 2, 0, 1, 0, 4, 100, 0 },
  { 5062, 2, 0, 1, 0, 4, 100, 0 },
  { 5072, 2, 0, 1, 0, 4, 100, 0 },
  { 5076, 2, 0, 1, 0, 4, 100, 0 },
  { 5082, 2, 0, 1, 0, 4, 100, 0 },
  { 5086, 2, 0, 1, 0, 4, 100, 0 },
  // 1798: get_image_depth, 
  { 4440, 2, 0, 0, 0, 19, 100, 0 },
  { 4484, 2, 0, 0, 0, 19, 100, 0 },
  { 4516, 2, 0, 0, 0, 19, 100, 0 },
  // 1801: get_image_dim, 
  { 4442, 2, 0, 0, 0, 19, 100, 0 },
  { 4444, 2, 0, 0, 0, 19, 100, 0 },
  { 4464, 2, 0, 0, 0, 19, 100, 0 },
  { 4466, 2, 0, 0, 0, 19, 100, 0 },
  { 4468, 2, 0, 0, 0, 19, 100, 0 },
  { 4494, 2, 0, 0, 0, 19, 100, 0 },
  { 4496, 2, 0, 0, 0, 19, 100, 0 },
  { 4498, 2, 0, 0, 0, 19, 100, 0 },
  { 4500, 2, 0, 0, 0, 19, 100, 0 },
  { 4502, 2, 0, 0, 0, 19, 100, 0 },
  { 4526, 2, 0, 0, 0, 19, 100, 0 },
  { 4528, 2, 0, 0, 0, 19, 100, 0 },
  { 4530, 2, 0, 0, 0, 19, 100, 0 },
  { 4532, 2, 0, 0, 0, 19, 100, 0 },
  { 4534, 2, 0, 0, 0, 19, 100, 0 },
  { 5024, 2, 0, 1, 0, 4, 100, 0 },
  { 5030, 2, 0, 1, 0, 4, 100, 0 },
  { 5034, 2, 0, 1, 0, 4, 100, 0 },
  { 5040, 2, 0, 1, 0, 4, 100, 0 },
  { 5048, 2, 0, 1, 0, 4, 100, 0 },
  { 5054, 2, 0, 1, 0, 4, 100, 0 },
  { 5058, 2, 0, 1, 0, 4, 100, 0 },
  { 5064, 2, 0, 1, 0, 4, 100, 0 },
  { 5074, 2, 0, 1, 0, 4, 100, 0 },
  { 5080, 2, 0, 1, 0, 4, 100, 0 },
  { 5084, 2, 0, 1, 0, 4, 100, 0 },
  { 5088, 2, 0, 1, 0, 4, 100, 0 },
  // 1828: get_image_array_size, 
  { 4446, 2, 0, 0, 0, 19, 100, 0 },
  { 4470, 2, 0, 0, 0, 19, 100, 0 },
  { 4474, 2, 0, 0, 0, 19, 100, 0 },
  { 4504, 2, 0, 0, 0, 19, 100, 0 },
  { 4506, 2, 0, 0, 0, 19, 100, 0 },
  { 4508, 2, 0, 0, 0, 19, 100, 0 },
  { 4536, 2, 0, 0, 0, 19, 100, 0 },
  { 4538, 2, 0, 0, 0, 19, 100, 0 },
  { 4540, 2, 0, 0, 0, 19, 100, 0 },
  { 5026, 2, 0, 1, 0, 4, 100, 0 },
  { 5042, 2, 0, 1, 0, 4, 100, 0 },
  { 5066, 2, 0, 1, 0, 4, 100, 0 },
  { 5068, 2, 0, 1, 0, 4, 100, 0 },
  { 5090, 2, 0, 1, 0, 4, 100, 0 },
  { 5092, 2, 0, 1, 0, 4, 100, 0 },
  // 1843: read_imageh, 
  { 4542, 4, 1, 0, 0, 19, 100, 0 },
  { 4546, 4, 1, 0, 0, 19, 100, 0 },
  { 4550, 4, 1, 0, 0, 19, 100, 0 },
  { 4554, 4, 1, 0, 0, 19, 100, 0 },
  { 4558, 4, 1, 0, 0, 19, 100, 0 },
  { 4562, 4, 1, 0, 0, 19, 100, 0 },
  { 4566, 4, 1, 0, 0, 19, 100, 0 },
  { 4570, 4, 1, 0, 0, 19, 100, 0 },
  { 4574, 4, 1, 0, 0, 19, 100, 0 },
  { 4578, 4, 1, 0, 0, 19, 100, 0 },
  { 4582, 3, 1, 0, 0, 19, 120, 0 },
  { 4585, 3, 1, 0, 0, 19, 120, 0 },
  { 4588, 3, 1, 0, 0, 19, 120, 0 },
  { 4591, 3, 1, 0, 0, 19, 120, 0 },
  { 4594, 3, 1, 0, 0, 19, 120, 0 },
  { 4597, 3, 1, 0, 0, 19, 120, 0 },
  { 4600, 3, 1, 0, 0, 19, 120, 0 },
  { 4603, 3, 1, 0, 0, 19, 120, 0 },
  { 4606, 3, 1, 0, 0, 19, 120, 0 },
  { 4609, 3, 1, 0, 0, 19, 120, 0 },
  { 4612, 3, 1, 0, 0, 19, 120, 0 },
  { 4615, 3, 1, 0, 0, 19, 120, 0 },
  // 1865: write_imageh, 
  { 4618, 4, 0, 0, 0, 19, 100, 0 },
  { 4622, 4, 0, 0, 0, 19, 100, 0 },
  { 4626, 4, 0, 0, 0, 19, 100, 0 },
  { 4630, 4, 0, 0, 0, 19, 100, 0 },
  { 4634, 4, 0, 0, 0, 19, 100, 0 },
  { 4638, 4, 0, 0, 0, 19, 100, 0 },
  { 4642, 4, 0, 0, 0, 19, 100, 0 },
  { 4646, 4, 0, 0, 0, 19, 100, 0 },
  { 4650, 4, 0, 0, 0, 19, 100, 0 },
  { 4654, 4, 0, 0, 0, 19, 100, 0 },
  { 4658, 4, 0, 0, 0, 19, 100, 0 },
  { 4662, 4, 0, 0, 0, 19, 100, 0 },
  // 1877: work_group_all, work_group_any, 
  { 780, 2, 0, 0, 1, 19, 200, 0 },
  // 1878: work_group_broadcast, 
  { 4666, 3, 0, 0, 1, 19, 200, 0 },
  { 4669, 4, 0, 0, 1, 19, 200, 0 },
  { 4673, 5, 0, 0, 1, 19, 200, 0 },
  // 1881: work_group_reduce_add, work_group_scan_exclusive_add, work_group_scan_inclusive_add, work_group_reduce_min, work_group_scan_exclusive_min, work_group_scan_inclusive_min, work_group_reduce_max, work_group_scan_exclusive_max, work_group_scan_inclusive_max, 
  { 4678, 2, 0, 0, 1, 19, 200, 0 },
  // 1882: is_valid_reserve_id, 
  { 4680, 2, 0, 0, 0, 19, 100, 0 },
  // 1883: enqueue_marker, 
  { 4682, 5, 0, 0, 0, 19, 100, 0 },
  // 1884: retain_event, release_event, 
  { 4687, 2, 0, 0, 0, 19, 100, 0 },
  // 1885: create_user_event, 
  { 4689, 1, 0, 0, 0, 19, 100, 0 },
  // 1886: is_valid_event, 
  { 4690, 2, 0, 0, 0, 19, 100, 0 },
  // 1887: set_user_event_status, 
  { 4692, 3, 0, 0, 0, 19, 100, 0 },
  // 1888: get_default_queue, 
  { 4695, 1, 0, 0, 0, 19, 100, 0 },
  // 1889: get_image_num_mip_levels, 
  { 4436, 2, 0, 0, 0, 11, 100, 0 },
  { 4438, 2, 0, 0, 0, 11, 100, 0 },
  { 4440, 2, 0, 0, 0, 11, 100, 0 },
  { 4454, 2, 0, 0, 0, 11, 100, 0 },
  { 4456, 2, 0, 0, 0, 11, 100, 0 },
  { 4458, 2, 0, 0, 0, 11, 100, 0 },
  { 4460, 2, 0, 0, 0, 11, 100, 0 },
  { 4476, 2, 0, 0, 0, 11, 100, 0 },
  { 4480, 2, 0, 0, 0, 11, 100, 0 },
  { 4484, 2, 0, 0, 0, 11, 100, 0 },
  { 4486, 2, 0, 0, 0, 11, 100, 0 },
  { 4488, 2, 0, 0, 0, 11, 100, 0 },
  { 4490, 2, 0, 0, 0, 11, 100, 0 },
  { 4492, 2, 0, 0, 0, 11, 100, 0 },
  { 4510, 2, 0, 0, 0, 11, 100, 0 },
  { 4514, 2, 0, 0, 0, 11, 100, 0 },
  { 4516, 2, 0, 0, 0, 11, 100, 0 },
  { 4518, 2, 0, 0, 0, 11, 100, 0 },
  { 4520, 2, 0, 0, 0, 11, 100, 0 },
  { 4522, 2, 0, 0, 0, 11, 100, 0 },
  { 4524, 2, 0, 0, 0, 11, 100, 0 },
  // 1910: get_image_num_samples, 
  { 5022, 2, 0, 1, 0, 4, 100, 0 },
  { 5028, 2, 0, 1, 0, 4, 100, 0 },
  { 5032, 2, 0, 1, 0, 4, 100, 0 },
  { 5036, 2, 0, 1, 0, 4, 100, 0 },
  { 5044, 2, 0, 1, 0, 4, 100, 0 },
  { 5050, 2, 0, 1, 0, 4, 100, 0 },
  { 5056, 2, 0, 1, 0, 4, 100, 0 },
  { 5062, 2, 0, 1, 0, 4, 100, 0 },
  { 5072, 2, 0, 1, 0, 4, 100, 0 },
  { 5076, 2, 0, 1, 0, 4, 100, 0 },
  { 5082, 2, 0, 1, 0, 4, 100, 0 },
  { 5086, 2, 0, 1, 0, 4, 100, 0 },
  // 1922: get_sub_group_size, get_max_sub_group_size, get_num_sub_groups, get_sub_group_id, get_sub_group_local_id, 
  { 1316, 1, 0, 0, 0, 18, 100, 0 },
  // 1923: get_enqueued_num_sub_groups, 
  { 1316, 1, 0, 0, 0, 18, 200, 0 },
  // 1924: sub_group_all, sub_group_any, 
  { 780, 2, 0, 0, 1, 18, 100, 0 },
  // 1925: sub_group_broadcast, 
  { 5094, 3, 0, 0, 1, 18, 100, 0 },
  // 1926: sub_group_reduce_add, sub_group_reduce_min, sub_group_reduce_max, sub_group_scan_exclusive_add, sub_group_scan_exclusive_min, sub_group_scan_exclusive_max, sub_group_scan_inclusive_add, sub_group_scan_inclusive_min, sub_group_scan_inclusive_max, 
  { 4678, 2, 0, 0, 1, 18, 100, 0 },
  // 1927: sub_group_elect, 
  { 5097, 1, 0, 0, 0, 15, 100, 0 },
  // 1928: sub_group_non_uniform_all, sub_group_non_uniform_any, 
  { 780, 2, 0, 0, 0, 15, 100, 0 },
  // 1929: sub_group_non_uniform_all_equal, 
  { 5098, 2, 0, 0, 0, 15, 100, 0 },
  // 1930: sub_group_non_uniform_broadcast, 
  { 5100, 3, 0, 0, 0, 14, 100, 0 },
  // 1931: sub_group_broadcast_first, 
  { 5103, 2, 0, 0, 0, 14, 100, 0 },
  // 1932: sub_group_ballot, 
  { 5105, 2, 0, 0, 0, 14, 100, 0 },
  // 1933: sub_group_inverse_ballot, 
  { 5107, 2, 0, 1, 0, 14, 100, 0 },
  // 1934: sub_group_ballot_bit_extract, 
  { 5109, 3, 0, 1, 0, 14, 100, 0 },
  // 1935: sub_group_ballot_bit_count, 
  { 5112, 2, 0, 1, 0, 14, 100, 0 },
  // 1936: sub_group_ballot_inclusive_scan, sub_group_ballot_exclusive_scan, sub_group_ballot_find_lsb, sub_group_ballot_find_msb, 
  { 5112, 2, 0, 0, 0, 14, 100, 0 },
  // 1937: get_sub_group_eq_mask, get_sub_group_ge_mask, get_sub_group_gt_mask, get_sub_group_le_mask, get_sub_group_lt_mask, 
  { 5114, 1, 0, 1, 0, 14, 100, 0 },
  // 1938: sub_group_shuffle, sub_group_shuffle_xor, 
  { 5115, 3, 0, 0, 0, 16, 100, 0 },
  // 1939: sub_group_shuffle_up, sub_group_shuffle_down, 
  { 5115, 3, 0, 0, 0, 17, 100, 0 },
  // 1940: arm_dot, 
  { 5118, 3, 0, 0, 0, 3, 100, 0 },
  { 5121, 3, 0, 0, 0, 3, 100, 0 },
  // 1942: arm_dot_acc, 
  { 5124, 4, 0, 0, 0, 1, 100, 0 },
  { 5128, 4, 0, 0, 0, 1, 100, 0 },
  { 5132, 4, 0, 0, 0, 0, 100, 0 },
  { 5136, 4, 0, 0, 0, 0, 100, 0 },
  // 1946: arm_dot_acc_sat, 
  { 5124, 4, 0, 0, 0, 2, 100, 0 },
  { 5128, 4, 0, 0, 0, 2, 100, 0 },
};


// Find out whether a string matches an existing OpenCL builtin function name.
// Returns: A pair <0, 0> if no name matches.
//          A pair <Index, Len> indexing the BuiltinTable if the name is
//          matching an OpenCL builtin function.
static std::pair<unsigned, unsigned> isOpenCLBuiltin(llvm::StringRef Name) {

  switch (Name.size()) {
  default: break;
  case 3:	 // 19 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (Name[2] != 's')
          break;
        return std::make_pair(783, 1);	 // "abs"
      case 'l':	 // 1 string to match.
        if (Name[2] != 'l')
          break;
        return std::make_pair(846, 1);	 // "all"
      case 'n':	 // 1 string to match.
        if (Name[2] != 'y')
          break;
        return std::make_pair(846, 1);	 // "any"
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[2] != 'z')
          break;
        return std::make_pair(784, 1);	 // "clz"
      case 'o':	 // 1 string to match.
        if (Name[2] != 's')
          break;
        return std::make_pair(731, 1);	 // "cos"
      case 't':	 // 1 string to match.
        if (Name[2] != 'z')
          break;
        return std::make_pair(785, 1);	 // "ctz"
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ot", 2) != 0)
        break;
      return std::make_pair(837, 3);	 // "dot"
    case 'e':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (Name[2] != 'f')
          break;
        return std::make_pair(731, 1);	 // "erf"
      case 'x':	 // 1 string to match.
        if (Name[2] != 'p')
          break;
        return std::make_pair(731, 1);	 // "exp"
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ma", 2) != 0)
        break;
      return std::make_pair(752, 1);	 // "fma"
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "og", 2) != 0)
        break;
      return std::make_pair(731, 1);	 // "log"
    case 'm':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'd':	 // 1 string to match.
          return std::make_pair(752, 1);	 // "mad"
        case 'x':	 // 1 string to match.
          return std::make_pair(788, 6);	 // "max"
        }
        break;
      case 'i':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'n':	 // 1 string to match.
          return std::make_pair(788, 6);	 // "min"
        case 'x':	 // 1 string to match.
          return std::make_pair(815, 4);	 // "mix"
        }
        break;
      }
      break;
    case 'n':	 // 1 string to match.
      if (memcmp(Name.data()+1, "an", 2) != 0)
        break;
      return std::make_pair(732, 3);	 // "nan"
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ow", 2) != 0)
        break;
      return std::make_pair(735, 1);	 // "pow"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "in", 2) != 0)
        break;
      return std::make_pair(731, 1);	 // "sin"
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "an", 2) != 0)
        break;
      return std::make_pair(731, 1);	 // "tan"
    }
    break;
  case 4:	 // 25 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "os", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "acos"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "in", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "asin"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "an", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "atan"
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rt", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "cbrt"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "il", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "ceil"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "sh", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "cosh"
      }
      break;
    case 'e':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "fc", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "erfc"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+2, "p2", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "exp2"
      }
      break;
    case 'f':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "bs", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "fabs"
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "im", 2) != 0)
          break;
        return std::make_pair(735, 1);	 // "fdim"
      case 'm':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[3] != 'x')
            break;
          return std::make_pair(736, 4);	 // "fmax"
        case 'i':	 // 1 string to match.
          if (Name[3] != 'n')
            break;
          return std::make_pair(736, 4);	 // "fmin"
        case 'o':	 // 1 string to match.
          if (Name[3] != 'd')
            break;
          return std::make_pair(735, 1);	 // "fmod"
        }
        break;
      }
      break;
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "add", 3) != 0)
        break;
      return std::make_pair(787, 1);	 // "hadd"
    case 'l':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "og", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case '2':	 // 1 string to match.
        return std::make_pair(731, 1);	 // "log2"
      case 'b':	 // 1 string to match.
        return std::make_pair(731, 1);	 // "logb"
      }
      break;
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "odf", 3) != 0)
        break;
      return std::make_pair(753, 4);	 // "modf"
    case 'p':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ow", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case 'n':	 // 1 string to match.
        return std::make_pair(749, 3);	 // "pown"
      case 'r':	 // 1 string to match.
        return std::make_pair(735, 1);	 // "powr"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "int", 3) != 0)
        break;
      return std::make_pair(731, 1);	 // "rint"
    case 's':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'i':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (Name[3] != 'n')
            break;
          return std::make_pair(731, 1);	 // "sign"
        case 'n':	 // 1 string to match.
          if (Name[3] != 'h')
            break;
          return std::make_pair(731, 1);	 // "sinh"
        }
        break;
      case 'q':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rt", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "sqrt"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ep", 2) != 0)
          break;
        return std::make_pair(811, 4);	 // "step"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "anh", 3) != 0)
        break;
      return std::make_pair(731, 1);	 // "tanh"
    }
    break;
  case 5:	 // 28 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "osh", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "acosh"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "inh", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "asinh"
      case 't':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "an", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(735, 1);	 // "atan2"
        case 'h':	 // 1 string to match.
          return std::make_pair(731, 1);	 // "atanh"
        }
        break;
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "amp", 3) != 0)
          break;
        return std::make_pair(800, 6);	 // "clamp"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "spi", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "cospi"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oss", 3) != 0)
          break;
        return std::make_pair(831, 6);	 // "cross"
      }
      break;
    case 'e':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "xp", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[4] != '0')
          break;
        return std::make_pair(731, 1);	 // "exp10"
      case 'm':	 // 1 string to match.
        if (Name[4] != '1')
          break;
        return std::make_pair(731, 1);	 // "expm1"
      }
      break;
    case 'f':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oor", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "floor"
      case 'r':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ct", 2) != 0)
            break;
          return std::make_pair(753, 4);	 // "fract"
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+3, "xp", 2) != 0)
            break;
          return std::make_pair(757, 12);	 // "frexp"
        }
        break;
      }
      break;
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ypot", 4) != 0)
        break;
      return std::make_pair(735, 1);	 // "hypot"
    case 'i':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ogb", 3) != 0)
          break;
        return std::make_pair(740, 3);	 // "ilogb"
      case 's':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+3, "nf", 2) != 0)
            break;
          return std::make_pair(841, 5);	 // "isinf"
        case 'n':	 // 1 string to match.
          if (memcmp(Name.data()+3, "an", 2) != 0)
            break;
          return std::make_pair(841, 5);	 // "isnan"
        }
        break;
      }
      break;
    case 'l':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "exp", 3) != 0)
          break;
        return std::make_pair(743, 6);	 // "ldexp"
      case 'o':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "g1", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case '0':	 // 1 string to match.
          return std::make_pair(731, 1);	 // "log10"
        case 'p':	 // 1 string to match.
          return std::make_pair(731, 1);	 // "log1p"
        }
        break;
      }
      break;
    case 'm':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "d24", 3) != 0)
          break;
        return std::make_pair(807, 2);	 // "mad24"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "l24", 3) != 0)
          break;
        return std::make_pair(809, 2);	 // "mul24"
      }
      break;
    case 'r':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+2, "add", 3) != 0)
          break;
        return std::make_pair(787, 1);	 // "rhadd"
      case 'o':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "tn", 2) != 0)
            break;
          return std::make_pair(749, 3);	 // "rootn"
        case 'u':	 // 1 string to match.
          if (memcmp(Name.data()+3, "nd", 2) != 0)
            break;
          return std::make_pair(731, 1);	 // "round"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "qrt", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "rsqrt"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "inpi", 4) != 0)
        break;
      return std::make_pair(731, 1);	 // "sinpi"
    case 't':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "npi", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "tanpi"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "unc", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "trunc"
      }
      break;
    }
    break;
  case 6:	 // 19 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ospi", 4) != 0)
          break;
        return std::make_pair(731, 1);	 // "acospi"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "inpi", 4) != 0)
          break;
        return std::make_pair(731, 1);	 // "asinpi"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "anpi", 4) != 0)
          break;
        return std::make_pair(731, 1);	 // "atanpi"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sless", 5) != 0)
        break;
      return std::make_pair(847, 5);	 // "isless"
    case 'l':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ngth", 4) != 0)
          break;
        return std::make_pair(823, 3);	 // "length"
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+2, "amma", 4) != 0)
          break;
        return std::make_pair(731, 1);	 // "lgamma"
      }
      break;
    case 'm':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+3, "_hi", 3) != 0)
            break;
          return std::make_pair(806, 1);	 // "mad_hi"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+3, "mag", 3) != 0)
            break;
          return std::make_pair(735, 1);	 // "maxmag"
        }
        break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "nmag", 4) != 0)
          break;
        return std::make_pair(735, 1);	 // "minmag"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "l_hi", 4) != 0)
          break;
        return std::make_pair(787, 1);	 // "mul_hi"
      }
      break;
    case 'r':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "mquo", 4) != 0)
          break;
        return std::make_pair(769, 12);	 // "remquo"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "tate", 4) != 0)
          break;
        return std::make_pair(787, 1);	 // "rotate"
      }
      break;
    case 's':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "lect", 4) != 0)
          break;
        return std::make_pair(853, 10);	 // "select"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ncos", 4) != 0)
          break;
        return std::make_pair(753, 4);	 // "sincos"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "gamma", 5) != 0)
        break;
      return std::make_pair(731, 1);	 // "tgamma"
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "load", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case '2':	 // 1 string to match.
        return std::make_pair(863, 55);	 // "vload2"
      case '3':	 // 1 string to match.
        return std::make_pair(975, 55);	 // "vload3"
      case '4':	 // 1 string to match.
        return std::make_pair(1087, 55);	 // "vload4"
      case '8':	 // 1 string to match.
        return std::make_pair(1199, 55);	 // "vload8"
      }
      break;
    }
    break;
  case 7:	 // 16 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "d_sat", 5) != 0)
          break;
        return std::make_pair(787, 1);	 // "add_sat"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "m_dot", 5) != 0)
          break;
        return std::make_pair(1940, 2);	 // "arm_dot"
      case 't':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+3, "n2pi", 4) != 0)
            break;
          return std::make_pair(735, 1);	 // "atan2pi"
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "m_or", 4) != 0)
            break;
          return std::make_pair(1466, 8);	 // "atom_or"
        }
        break;
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "egrees", 6) != 0)
        break;
      return std::make_pair(731, 1);	 // "degrees"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sequal", 6) != 0)
        break;
      return std::make_pair(847, 5);	 // "isequal"
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ad_sat", 6) != 0)
        break;
      return std::make_pair(806, 1);	 // "mad_sat"
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "adians", 6) != 0)
        break;
      return std::make_pair(731, 1);	 // "radians"
    case 's':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+2, "uffle", 5) != 0)
          break;
        return std::make_pair(1522, 16);	 // "shuffle"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "gnbit", 5) != 0)
          break;
        return std::make_pair(841, 5);	 // "signbit"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "b_sat", 5) != 0)
          break;
        return std::make_pair(787, 1);	 // "sub_sat"
      }
      break;
    case 'v':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oad16", 5) != 0)
          break;
        return std::make_pair(1311, 55);	 // "vload16"
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+2, "tore", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(918, 44);	 // "vstore2"
        case '3':	 // 1 string to match.
          return std::make_pair(1030, 44);	 // "vstore3"
        case '4':	 // 1 string to match.
          return std::make_pair(1142, 44);	 // "vstore4"
        case '8':	 // 1 string to match.
          return std::make_pair(1254, 44);	 // "vstore8"
        }
        break;
      }
      break;
    }
    break;
  case 8:	 // 24 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 9 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+2, "s_diff", 6) != 0)
          break;
        return std::make_pair(786, 1);	 // "abs_diff"
      case 't':	 // 8 strings to match.
        if (memcmp(Name.data()+2, "om_", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'd':	 // 1 string to match.
            if (Name[7] != 'd')
              break;
            return std::make_pair(1442, 8);	 // "atom_add"
          case 'n':	 // 1 string to match.
            if (Name[7] != 'd')
              break;
            return std::make_pair(1466, 8);	 // "atom_and"
          }
          break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+6, "ec", 2) != 0)
            break;
          return std::make_pair(1450, 8);	 // "atom_dec"
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+6, "nc", 2) != 0)
            break;
          return std::make_pair(1450, 8);	 // "atom_inc"
        case 'm':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[7] != 'x')
              break;
            return std::make_pair(1466, 8);	 // "atom_max"
          case 'i':	 // 1 string to match.
            if (Name[7] != 'n')
              break;
            return std::make_pair(1466, 8);	 // "atom_min"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+6, "ub", 2) != 0)
            break;
          return std::make_pair(1442, 8);	 // "atom_sub"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+6, "or", 2) != 0)
            break;
          return std::make_pair(1466, 8);	 // "atom_xor"
        }
        break;
      }
      break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "opysign", 7) != 0)
        break;
      return std::make_pair(735, 1);	 // "copysign"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "istance", 7) != 0)
        break;
      return std::make_pair(837, 3);	 // "distance"
    case 'h':	 // 5 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+6, "os", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_cos"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_exp"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_log"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+6, "in", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_sin"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+6, "an", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_tan"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+3, "inite", 5) != 0)
          break;
        return std::make_pair(841, 5);	 // "isfinite"
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+3, "ormal", 5) != 0)
          break;
        return std::make_pair(841, 5);	 // "isnormal"
      }
      break;
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "gamma_r", 7) != 0)
        break;
      return std::make_pair(757, 12);	 // "lgamma_r"
    case 'p':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "pcount", 6) != 0)
          break;
        return std::make_pair(784, 1);	 // "popcount"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "efetch", 6) != 0)
          break;
        return std::make_pair(1441, 1);	 // "prefetch"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "huffle2", 7) != 0)
        break;
      return std::make_pair(1538, 16);	 // "shuffle2"
    case 'u':	 // 1 string to match.
      if (memcmp(Name.data()+1, "psample", 7) != 0)
        break;
      return std::make_pair(794, 6);	 // "upsample"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "store16", 7) != 0)
        break;
      return std::make_pair(1366, 44);	 // "vstore16"
    }
    break;
  case 9:	 // 12 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "tom", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(Name.data()+5, "xchg", 4) != 0)
          break;
        return std::make_pair(1442, 8);	 // "atom_xchg"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "c_or", 4) != 0)
          break;
        return std::make_pair(1474, 4);	 // "atomic_or"
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "itselect", 8) != 0)
        break;
      return std::make_pair(852, 1);	 // "bitselect"
    case 'h':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp2", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_exp2"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og2", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_log2"
      case 'p':	 // 1 string to match.
        if (memcmp(Name.data()+6, "owr", 3) != 0)
          break;
        return std::make_pair(782, 1);	 // "half_powr"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+6, "qrt", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_sqrt"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+3, "reater", 6) != 0)
          break;
        return std::make_pair(847, 5);	 // "isgreater"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+3, "rdered", 6) != 0)
          break;
        return std::make_pair(847, 5);	 // "isordered"
      }
      break;
    case 'n':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "xtafter", 7) != 0)
          break;
        return std::make_pair(735, 1);	 // "nextafter"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rmalize", 7) != 0)
          break;
        return std::make_pair(826, 3);	 // "normalize"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "emainder", 8) != 0)
        break;
      return std::make_pair(735, 1);	 // "remainder"
    }
    break;
  case 10:	 // 20 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 8 strings to match.
      if (memcmp(Name.data()+1, "tomic_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (Name[9] != 'd')
            break;
          return std::make_pair(1474, 4);	 // "atomic_add"
        case 'n':	 // 1 string to match.
          if (Name[9] != 'd')
            break;
          return std::make_pair(1474, 4);	 // "atomic_and"
        }
        break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+8, "ec", 2) != 0)
          break;
        return std::make_pair(1478, 4);	 // "atomic_dec"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+8, "nc", 2) != 0)
          break;
        return std::make_pair(1478, 4);	 // "atomic_inc"
      case 'm':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[9] != 'x')
            break;
          return std::make_pair(1474, 4);	 // "atomic_max"
        case 'i':	 // 1 string to match.
          if (Name[9] != 'n')
            break;
          return std::make_pair(1474, 4);	 // "atomic_min"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+8, "ub", 2) != 0)
          break;
        return std::make_pair(1474, 4);	 // "atomic_sub"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+8, "or", 2) != 0)
          break;
        return std::make_pair(1474, 4);	 // "atomic_xor"
      }
      break;
    case 'h':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp10", 4) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_exp10"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og10", 4) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_log10"
      case 'r':	 // 2 strings to match.
        switch (Name[6]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+7, "cip", 3) != 0)
            break;
          return std::make_pair(781, 1);	 // "half_recip"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+7, "qrt", 3) != 0)
            break;
          return std::make_pair(781, 1);	 // "half_rsqrt"
        }
        break;
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "snotequal", 9) != 0)
        break;
      return std::make_pair(847, 5);	 // "isnotequal"
    case 'n':	 // 5 strings to match.
      if (memcmp(Name.data()+1, "ative_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+8, "os", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_cos"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xp", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_exp"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+8, "og", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_log"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+8, "in", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_sin"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+8, "an", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_tan"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "moothstep", 9) != 0)
        break;
      return std::make_pair(819, 4);	 // "smoothstep"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "load_half", 9) != 0)
        break;
      return std::make_pair(1423, 5);	 // "vload_half"
    }
    break;
  case 11:	 // 22 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "m_dot_acc", 9) != 0)
          break;
        return std::make_pair(1942, 4);	 // "arm_dot_acc"
      case 't':	 // 3 strings to match.
        if (memcmp(Name.data()+2, "omic_", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+8, "nit", 3) != 0)
            break;
          return std::make_pair(1486, 6);	 // "atomic_init"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+8, "oad", 3) != 0)
            break;
          return std::make_pair(1492, 6);	 // "atomic_load"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+8, "chg", 3) != 0)
            break;
          return std::make_pair(1474, 4);	 // "atomic_xchg"
        }
        break;
      }
      break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "onvert_int", 10) != 0)
        break;
      return std::make_pair(397, 11);	 // "convert_int"
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_length", 10) != 0)
        break;
      return std::make_pair(829, 1);	 // "fast_length"
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "alf_divide", 10) != 0)
        break;
      return std::make_pair(782, 1);	 // "half_divide"
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+3, "essequal", 8) != 0)
          break;
        return std::make_pair(847, 5);	 // "islessequal"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+3, "nordered", 8) != 0)
          break;
        return std::make_pair(847, 5);	 // "isunordered"
      }
      break;
    case 'n':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "ative_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xp2", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_exp2"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+8, "og2", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_log2"
      case 'p':	 // 1 string to match.
        if (memcmp(Name.data()+8, "owr", 3) != 0)
          break;
        return std::make_pair(782, 1);	 // "native_powr"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+8, "qrt", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_sqrt"
      }
      break;
    case 'r':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ead_image", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'f':	 // 1 string to match.
        return std::make_pair(1554, 52);	 // "read_imagef"
      case 'h':	 // 1 string to match.
        return std::make_pair(1843, 22);	 // "read_imageh"
      case 'i':	 // 1 string to match.
        return std::make_pair(1606, 36);	 // "read_imagei"
      }
      break;
    case 'v':	 // 6 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "oad", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case '_':	 // 4 strings to match.
          if (memcmp(Name.data()+6, "half", 4) != 0)
            break;
          switch (Name[10]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(962, 5);	 // "vload_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(1074, 5);	 // "vload_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(1186, 5);	 // "vload_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(1298, 5);	 // "vload_half8"
          }
          break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+6, "_half", 5) != 0)
            break;
          return std::make_pair(1423, 5);	 // "vloada_half"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "tore_half", 9) != 0)
          break;
        return std::make_pair(1428, 8);	 // "vstore_half"
      }
      break;
    }
    break;
  case 12:	 // 32 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "tom", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(Name.data()+5, "cmpxchg", 7) != 0)
          break;
        return std::make_pair(1458, 8);	 // "atom_cmpxchg"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "c_store", 7) != 0)
          break;
        return std::make_pair(1486, 6);	 // "atomic_store"
      }
      break;
    case 'c':	 // 8 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        return std::make_pair(133, 11);	 // "convert_char"
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+9, "alf", 3) != 0)
          break;
        return std::make_pair(56, 11);	 // "convert_half"
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(408, 11);	 // "convert_int2"
        case '3':	 // 1 string to match.
          return std::make_pair(419, 11);	 // "convert_int3"
        case '4':	 // 1 string to match.
          return std::make_pair(430, 11);	 // "convert_int4"
        case '8':	 // 1 string to match.
          return std::make_pair(441, 11);	 // "convert_int8"
        }
        break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        return std::make_pair(595, 11);	 // "convert_long"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+9, "int", 3) != 0)
          break;
        return std::make_pair(463, 11);	 // "convert_uint"
      }
      break;
    case 'g':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "roup_id", 7) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_group_id"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ocal_id", 7) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_local_id"
      case 'w':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ork_dim", 7) != 0)
          break;
        return std::make_pair(727, 1);	 // "get_work_dim"
      }
      break;
    case 'n':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "ative_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xp10", 4) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_exp10"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+8, "og10", 4) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_log10"
      case 'r':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+9, "cip", 3) != 0)
            break;
          return std::make_pair(781, 1);	 // "native_recip"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+9, "qrt", 3) != 0)
            break;
          return std::make_pair(781, 1);	 // "native_rsqrt"
        }
        break;
      }
      break;
    case 'r':	 // 2 strings to match.
      if (Name[1] != 'e')
        break;
      switch (Name[2]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+3, "d_imageui", 9) != 0)
          break;
        return std::make_pair(1642, 36);	 // "read_imageui"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+3, "ain_event", 9) != 0)
          break;
        return std::make_pair(1884, 1);	 // "retain_event"
      }
      break;
    case 'v':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "oad", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case '_':	 // 1 string to match.
          if (memcmp(Name.data()+6, "half16", 6) != 0)
            break;
          return std::make_pair(1410, 5);	 // "vload_half16"
        case 'a':	 // 4 strings to match.
          if (memcmp(Name.data()+6, "_half", 5) != 0)
            break;
          switch (Name[11]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(962, 5);	 // "vloada_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(1074, 5);	 // "vloada_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(1186, 5);	 // "vloada_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(1298, 5);	 // "vloada_half8"
          }
          break;
        }
        break;
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "tore", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '_':	 // 4 strings to match.
          if (memcmp(Name.data()+7, "half", 4) != 0)
            break;
          switch (Name[11]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstore_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstore_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstore_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstore_half8"
          }
          break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+7, "_half", 5) != 0)
            break;
          return std::make_pair(1428, 8);	 // "vstorea_half"
        }
        break;
      }
      break;
    case 'w':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "rite_image", 10) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case 'f':	 // 1 string to match.
        return std::make_pair(1678, 23);	 // "write_imagef"
      case 'h':	 // 1 string to match.
        return std::make_pair(1865, 12);	 // "write_imageh"
      case 'i':	 // 1 string to match.
        return std::make_pair(1701, 17);	 // "write_imagei"
      }
      break;
    }
    break;
  case 13:	 // 36 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 21 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(144, 11);	 // "convert_char2"
        case '3':	 // 1 string to match.
          return std::make_pair(155, 11);	 // "convert_char3"
        case '4':	 // 1 string to match.
          return std::make_pair(166, 11);	 // "convert_char4"
        case '8':	 // 1 string to match.
          return std::make_pair(177, 11);	 // "convert_char8"
        }
        break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        return std::make_pair(78, 11);	 // "convert_float"
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(1, 11);	 // "convert_half2"
        case '3':	 // 1 string to match.
          return std::make_pair(12, 11);	 // "convert_half3"
        case '4':	 // 1 string to match.
          return std::make_pair(23, 11);	 // "convert_half4"
        case '8':	 // 1 string to match.
          return std::make_pair(34, 11);	 // "convert_half8"
        }
        break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+9, "nt16", 4) != 0)
          break;
        return std::make_pair(452, 11);	 // "convert_int16"
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(606, 11);	 // "convert_long2"
        case '3':	 // 1 string to match.
          return std::make_pair(617, 11);	 // "convert_long3"
        case '4':	 // 1 string to match.
          return std::make_pair(628, 11);	 // "convert_long4"
        case '8':	 // 1 string to match.
          return std::make_pair(639, 11);	 // "convert_long8"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        return std::make_pair(265, 11);	 // "convert_short"
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          return std::make_pair(199, 11);	 // "convert_uchar"
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt", 2) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(474, 11);	 // "convert_uint2"
          case '3':	 // 1 string to match.
            return std::make_pair(485, 11);	 // "convert_uint3"
          case '4':	 // 1 string to match.
            return std::make_pair(496, 11);	 // "convert_uint4"
          case '8':	 // 1 string to match.
            return std::make_pair(507, 11);	 // "convert_uint8"
          }
          break;
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          return std::make_pair(661, 11);	 // "convert_ulong"
        }
        break;
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_distance", 12) != 0)
        break;
      return std::make_pair(840, 1);	 // "fast_distance"
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_id", 8) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_global_id"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_dim", 8) != 0)
          break;
        return std::make_pair(1801, 27);	 // "get_image_dim"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "slessgreater", 12) != 0)
        break;
      return std::make_pair(847, 5);	 // "islessgreater"
    case 'n':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ative_divide", 12) != 0)
        break;
      return std::make_pair(782, 1);	 // "native_divide"
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "elease_event", 12) != 0)
        break;
      return std::make_pair(1884, 1);	 // "release_event"
    case 's':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ub_group_a", 10) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[12] != 'l')
          break;
        return std::make_pair(1924, 1);	 // "sub_group_all"
      case 'n':	 // 1 string to match.
        if (Name[12] != 'y')
          break;
        return std::make_pair(1924, 1);	 // "sub_group_any"
      }
      break;
    case 'v':	 // 6 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oada_half16", 11) != 0)
          break;
        return std::make_pair(1410, 5);	 // "vloada_half16"
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "tore", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '_':	 // 1 string to match.
          if (memcmp(Name.data()+7, "half16", 6) != 0)
            break;
          return std::make_pair(1415, 8);	 // "vstore_half16"
        case 'a':	 // 4 strings to match.
          if (memcmp(Name.data()+7, "_half", 5) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstorea_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstorea_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstorea_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstorea_half8"
          }
          break;
        }
        break;
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "rite_imageui", 12) != 0)
        break;
      return std::make_pair(1718, 17);	 // "write_imageui"
    }
    break;
  case 14:	 // 32 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_cmpxchg", 13) != 0)
        break;
      return std::make_pair(1482, 4);	 // "atomic_cmpxchg"
    case 'c':	 // 22 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+9, "har16", 5) != 0)
          break;
        return std::make_pair(188, 11);	 // "convert_char16"
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        return std::make_pair(529, 11);	 // "convert_double"
      case 'f':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(89, 11);	 // "convert_float2"
        case '3':	 // 1 string to match.
          return std::make_pair(100, 11);	 // "convert_float3"
        case '4':	 // 1 string to match.
          return std::make_pair(111, 11);	 // "convert_float4"
        case '8':	 // 1 string to match.
          return std::make_pair(122, 11);	 // "convert_float8"
        }
        break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+9, "alf16", 5) != 0)
          break;
        return std::make_pair(45, 11);	 // "convert_half16"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ong16", 5) != 0)
          break;
        return std::make_pair(650, 11);	 // "convert_long16"
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(276, 11);	 // "convert_short2"
        case '3':	 // 1 string to match.
          return std::make_pair(287, 11);	 // "convert_short3"
        case '4':	 // 1 string to match.
          return std::make_pair(298, 11);	 // "convert_short4"
        case '8':	 // 1 string to match.
          return std::make_pair(309, 11);	 // "convert_short8"
        }
        break;
      case 'u':	 // 10 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(210, 11);	 // "convert_uchar2"
          case '3':	 // 1 string to match.
            return std::make_pair(221, 11);	 // "convert_uchar3"
          case '4':	 // 1 string to match.
            return std::make_pair(232, 11);	 // "convert_uchar4"
          case '8':	 // 1 string to match.
            return std::make_pair(243, 11);	 // "convert_uchar8"
          }
          break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+10, "nt16", 4) != 0)
            break;
          return std::make_pair(518, 11);	 // "convert_uint16"
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(672, 11);	 // "convert_ulong2"
          case '3':	 // 1 string to match.
            return std::make_pair(683, 11);	 // "convert_ulong3"
          case '4':	 // 1 string to match.
            return std::make_pair(694, 11);	 // "convert_ulong4"
          case '8':	 // 1 string to match.
            return std::make_pair(705, 11);	 // "convert_ulong8"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          return std::make_pair(331, 11);	 // "convert_ushort"
        }
        break;
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+1, "nqueue_marker", 13) != 0)
        break;
      return std::make_pair(1883, 1);	 // "enqueue_marker"
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_normalize", 13) != 0)
        break;
      return std::make_pair(830, 1);	 // "fast_normalize"
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ocal_size", 9) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_local_size"
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+5, "um_groups", 9) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_num_groups"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(Name.data()+3, "valid_event", 11) != 0)
          break;
        return std::make_pair(1886, 1);	 // "is_valid_event"
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+3, "reaterequal", 11) != 0)
          break;
        return std::make_pair(847, 5);	 // "isgreaterequal"
      }
      break;
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "storea_half16", 13) != 0)
        break;
      return std::make_pair(1415, 8);	 // "vstorea_half16"
    case 'w':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ork_group_a", 11) != 0)
        break;
      switch (Name[12]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[13] != 'l')
          break;
        return std::make_pair(1877, 1);	 // "work_group_all"
      case 'n':	 // 1 string to match.
        if (Name[13] != 'y')
          break;
        return std::make_pair(1877, 1);	 // "work_group_any"
      }
      break;
    }
    break;
  case 15:	 // 28 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "m_dot_acc_sat", 13) != 0)
          break;
        return std::make_pair(1946, 2);	 // "arm_dot_acc_sat"
      case 't':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "omic_", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+8, "xchange", 7) != 0)
            break;
          return std::make_pair(1498, 6);	 // "atomic_exchange"
        case 'f':	 // 1 string to match.
          if (memcmp(Name.data()+8, "etch_or", 7) != 0)
            break;
          return std::make_pair(1516, 6);	 // "atomic_fetch_or"
        }
        break;
      }
      break;
    case 'c':	 // 17 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(540, 11);	 // "convert_double2"
        case '3':	 // 1 string to match.
          return std::make_pair(551, 11);	 // "convert_double3"
        case '4':	 // 1 string to match.
          return std::make_pair(562, 11);	 // "convert_double4"
        case '8':	 // 1 string to match.
          return std::make_pair(573, 11);	 // "convert_double8"
        }
        break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+9, "loat16", 6) != 0)
          break;
        return std::make_pair(67, 11);	 // "convert_float16"
      case 'i':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "nt_", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[13] != 't')
            break;
          switch (Name[14]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(397, 11);	 // "convert_int_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(397, 11);	 // "convert_int_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(397, 11);	 // "convert_int_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(397, 11);	 // "convert_int_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+13, "at", 2) != 0)
            break;
          return std::make_pair(397, 11);	 // "convert_int_sat"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+9, "hort16", 6) != 0)
          break;
        return std::make_pair(320, 11);	 // "convert_short16"
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+10, "har16", 5) != 0)
            break;
          return std::make_pair(254, 11);	 // "convert_uchar16"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+10, "ong16", 5) != 0)
            break;
          return std::make_pair(716, 11);	 // "convert_ulong16"
        case 's':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(342, 11);	 // "convert_ushort2"
          case '3':	 // 1 string to match.
            return std::make_pair(353, 11);	 // "convert_ushort3"
          case '4':	 // 1 string to match.
            return std::make_pair(364, 11);	 // "convert_ushort4"
          case '8':	 // 1 string to match.
            return std::make_pair(375, 11);	 // "convert_ushort8"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_size", 10) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_global_size"
      case 'i':	 // 2 strings to match.
        if (memcmp(Name.data()+5, "mage_", 5) != 0)
          break;
        switch (Name[10]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+11, "epth", 4) != 0)
            break;
          return std::make_pair(1798, 3);	 // "get_image_depth"
        case 'w':	 // 1 string to match.
          if (memcmp(Name.data()+11, "idth", 4) != 0)
            break;
          return std::make_pair(1735, 36);	 // "get_image_width"
        }
        break;
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_elect", 14) != 0)
        break;
      return std::make_pair(1927, 1);	 // "sub_group_elect"
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "store_half_rt", 13) != 0)
        break;
      switch (Name[14]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(1428, 8);	 // "vstore_half_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(1428, 8);	 // "vstore_half_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(1428, 8);	 // "vstore_half_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(1428, 8);	 // "vstore_half_rtz"
      }
      break;
    }
    break;
  case 16:	 // 70 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "tomic_fetch_", 12) != 0)
        break;
      switch (Name[13]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[14]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (Name[15] != 'd')
            break;
          return std::make_pair(1510, 6);	 // "atomic_fetch_add"
        case 'n':	 // 1 string to match.
          if (Name[15] != 'd')
            break;
          return std::make_pair(1516, 6);	 // "atomic_fetch_and"
        }
        break;
      case 'm':	 // 2 strings to match.
        switch (Name[14]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[15] != 'x')
            break;
          return std::make_pair(1516, 6);	 // "atomic_fetch_max"
        case 'i':	 // 1 string to match.
          if (Name[15] != 'n')
            break;
          return std::make_pair(1516, 6);	 // "atomic_fetch_min"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+14, "ub", 2) != 0)
          break;
        return std::make_pair(1510, 6);	 // "atomic_fetch_sub"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+14, "or", 2) != 0)
          break;
        return std::make_pair(1516, 6);	 // "atomic_fetch_xor"
      }
      break;
    case 'c':	 // 41 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "har_", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[14] != 't')
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(133, 11);	 // "convert_char_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(133, 11);	 // "convert_char_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(133, 11);	 // "convert_char_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(133, 11);	 // "convert_char_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(133, 11);	 // "convert_char_sat"
        }
        break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ouble16", 7) != 0)
          break;
        return std::make_pair(584, 11);	 // "convert_double16"
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf_rt", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(56, 11);	 // "convert_half_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(56, 11);	 // "convert_half_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(56, 11);	 // "convert_half_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(56, 11);	 // "convert_half_rtz"
        }
        break;
      case 'i':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(408, 11);	 // "convert_int2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(408, 11);	 // "convert_int2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(408, 11);	 // "convert_int2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(408, 11);	 // "convert_int2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(408, 11);	 // "convert_int2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(419, 11);	 // "convert_int3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(419, 11);	 // "convert_int3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(419, 11);	 // "convert_int3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(419, 11);	 // "convert_int3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(419, 11);	 // "convert_int3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(430, 11);	 // "convert_int4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(430, 11);	 // "convert_int4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(430, 11);	 // "convert_int4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(430, 11);	 // "convert_int4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(430, 11);	 // "convert_int4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(441, 11);	 // "convert_int8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(441, 11);	 // "convert_int8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(441, 11);	 // "convert_int8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(441, 11);	 // "convert_int8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(441, 11);	 // "convert_int8_sat"
          }
          break;
        }
        break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "ong_", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[14] != 't')
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(595, 11);	 // "convert_long_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(595, 11);	 // "convert_long_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(595, 11);	 // "convert_long_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(595, 11);	 // "convert_long_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(595, 11);	 // "convert_long_sat"
        }
        break;
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "nt_", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(463, 11);	 // "convert_uint_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(463, 11);	 // "convert_uint_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(463, 11);	 // "convert_uint_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(463, 11);	 // "convert_uint_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(463, 11);	 // "convert_uint_sat"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+10, "hort16", 6) != 0)
            break;
          return std::make_pair(386, 11);	 // "convert_ushort16"
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_height", 11) != 0)
          break;
        return std::make_pair(1771, 27);	 // "get_image_height"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_id", 11) != 0)
          break;
        return std::make_pair(1922, 1);	 // "get_sub_group_id"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_ballot", 15) != 0)
        break;
      return std::make_pair(1932, 1);	 // "sub_group_ballot"
    case 'v':	 // 20 strings to match.
      if (memcmp(Name.data()+1, "store", 5) != 0)
        break;
      switch (Name[6]) {
      default: break;
      case '_':	 // 16 strings to match.
        if (memcmp(Name.data()+7, "half", 4) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_rt", 3) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstore_half2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstore_half2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstore_half2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstore_half2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_rt", 3) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstore_half3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstore_half3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstore_half3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstore_half3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_rt", 3) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstore_half4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstore_half4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstore_half4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstore_half4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_rt", 3) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstore_half8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstore_half8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstore_half8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstore_half8_rtz"
          }
          break;
        }
        break;
      case 'a':	 // 4 strings to match.
        if (memcmp(Name.data()+7, "_half_rt", 8) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1428, 8);	 // "vstorea_half_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1428, 8);	 // "vstorea_half_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1428, 8);	 // "vstorea_half_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1428, 8);	 // "vstorea_half_rtz"
        }
        break;
      }
      break;
    }
    break;
  case 17:	 // 125 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 101 strings to match.
      switch (Name[1]) {
      default: break;
      case 'o':	 // 100 strings to match.
        if (memcmp(Name.data()+2, "nvert_", 6) != 0)
          break;
        switch (Name[8]) {
        default: break;
        case 'c':	 // 20 strings to match.
          if (memcmp(Name.data()+9, "har", 3) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(144, 11);	 // "convert_char2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(144, 11);	 // "convert_char2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(144, 11);	 // "convert_char2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(144, 11);	 // "convert_char2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(144, 11);	 // "convert_char2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(155, 11);	 // "convert_char3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(155, 11);	 // "convert_char3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(155, 11);	 // "convert_char3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(155, 11);	 // "convert_char3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(155, 11);	 // "convert_char3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(166, 11);	 // "convert_char4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(166, 11);	 // "convert_char4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(166, 11);	 // "convert_char4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(166, 11);	 // "convert_char4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(166, 11);	 // "convert_char4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(177, 11);	 // "convert_char8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(177, 11);	 // "convert_char8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(177, 11);	 // "convert_char8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(177, 11);	 // "convert_char8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(177, 11);	 // "convert_char8_sat"
            }
            break;
          }
          break;
        case 'f':	 // 4 strings to match.
          if (memcmp(Name.data()+9, "loat_rt", 7) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(78, 11);	 // "convert_float_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(78, 11);	 // "convert_float_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(78, 11);	 // "convert_float_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(78, 11);	 // "convert_float_rtz"
          }
          break;
        case 'h':	 // 16 strings to match.
          if (memcmp(Name.data()+9, "alf", 3) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(1, 11);	 // "convert_half2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(1, 11);	 // "convert_half2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(1, 11);	 // "convert_half2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(1, 11);	 // "convert_half2_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(12, 11);	 // "convert_half3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(12, 11);	 // "convert_half3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(12, 11);	 // "convert_half3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(12, 11);	 // "convert_half3_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(23, 11);	 // "convert_half4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(23, 11);	 // "convert_half4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(23, 11);	 // "convert_half4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(23, 11);	 // "convert_half4_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(34, 11);	 // "convert_half8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(34, 11);	 // "convert_half8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(34, 11);	 // "convert_half8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(34, 11);	 // "convert_half8_rtz"
            }
            break;
          }
          break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+9, "nt16_", 5) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(452, 11);	 // "convert_int16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(452, 11);	 // "convert_int16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(452, 11);	 // "convert_int16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(452, 11);	 // "convert_int16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(452, 11);	 // "convert_int16_sat"
          }
          break;
        case 'l':	 // 20 strings to match.
          if (memcmp(Name.data()+9, "ong", 3) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(606, 11);	 // "convert_long2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(606, 11);	 // "convert_long2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(606, 11);	 // "convert_long2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(606, 11);	 // "convert_long2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(606, 11);	 // "convert_long2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(617, 11);	 // "convert_long3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(617, 11);	 // "convert_long3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(617, 11);	 // "convert_long3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(617, 11);	 // "convert_long3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(617, 11);	 // "convert_long3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(628, 11);	 // "convert_long4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(628, 11);	 // "convert_long4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(628, 11);	 // "convert_long4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(628, 11);	 // "convert_long4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(628, 11);	 // "convert_long4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(639, 11);	 // "convert_long8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(639, 11);	 // "convert_long8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(639, 11);	 // "convert_long8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(639, 11);	 // "convert_long8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(639, 11);	 // "convert_long8_sat"
            }
            break;
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+9, "hort_", 5) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(265, 11);	 // "convert_short_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(265, 11);	 // "convert_short_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(265, 11);	 // "convert_short_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(265, 11);	 // "convert_short_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(265, 11);	 // "convert_short_sat"
          }
          break;
        case 'u':	 // 30 strings to match.
          switch (Name[9]) {
          default: break;
          case 'c':	 // 5 strings to match.
            if (memcmp(Name.data()+10, "har_", 4) != 0)
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(199, 11);	 // "convert_uchar_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(199, 11);	 // "convert_uchar_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(199, 11);	 // "convert_uchar_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(199, 11);	 // "convert_uchar_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(199, 11);	 // "convert_uchar_sat"
            }
            break;
          case 'i':	 // 20 strings to match.
            if (memcmp(Name.data()+10, "nt", 2) != 0)
              break;
            switch (Name[12]) {
            default: break;
            case '2':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(474, 11);	 // "convert_uint2_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(474, 11);	 // "convert_uint2_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(474, 11);	 // "convert_uint2_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(474, 11);	 // "convert_uint2_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(474, 11);	 // "convert_uint2_sat"
              }
              break;
            case '3':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(485, 11);	 // "convert_uint3_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(485, 11);	 // "convert_uint3_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(485, 11);	 // "convert_uint3_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(485, 11);	 // "convert_uint3_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(485, 11);	 // "convert_uint3_sat"
              }
              break;
            case '4':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(496, 11);	 // "convert_uint4_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(496, 11);	 // "convert_uint4_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(496, 11);	 // "convert_uint4_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(496, 11);	 // "convert_uint4_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(496, 11);	 // "convert_uint4_sat"
              }
              break;
            case '8':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(507, 11);	 // "convert_uint8_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(507, 11);	 // "convert_uint8_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(507, 11);	 // "convert_uint8_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(507, 11);	 // "convert_uint8_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(507, 11);	 // "convert_uint8_sat"
              }
              break;
            }
            break;
          case 'l':	 // 5 strings to match.
            if (memcmp(Name.data()+10, "ong_", 4) != 0)
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(661, 11);	 // "convert_ulong_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(661, 11);	 // "convert_ulong_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(661, 11);	 // "convert_ulong_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(661, 11);	 // "convert_ulong_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(661, 11);	 // "convert_ulong_sat"
            }
            break;
          }
          break;
        }
        break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "eate_user_event", 15) != 0)
          break;
        return std::make_pair(1885, 1);	 // "create_user_event"
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+5, "efault_queue", 12) != 0)
          break;
        return std::make_pair(1888, 1);	 // "get_default_queue"
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_offset", 12) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_global_offset"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_shuffle", 16) != 0)
        break;
      return std::make_pair(1938, 1);	 // "sub_group_shuffle"
    case 'v':	 // 20 strings to match.
      if (memcmp(Name.data()+1, "store", 5) != 0)
        break;
      switch (Name[6]) {
      default: break;
      case '_':	 // 4 strings to match.
        if (memcmp(Name.data()+7, "half16_rt", 9) != 0)
          break;
        switch (Name[16]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1415, 8);	 // "vstore_half16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1415, 8);	 // "vstore_half16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1415, 8);	 // "vstore_half16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1415, 8);	 // "vstore_half16_rtz"
        }
        break;
      case 'a':	 // 16 strings to match.
        if (memcmp(Name.data()+7, "_half", 5) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstorea_half2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstorea_half2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstorea_half2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(967, 8);	 // "vstorea_half2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstorea_half3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstorea_half3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstorea_half3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1079, 8);	 // "vstorea_half3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstorea_half4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstorea_half4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstorea_half4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1191, 8);	 // "vstorea_half4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstorea_half8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstorea_half8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstorea_half8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1303, 8);	 // "vstorea_half8_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ait_group_events", 16) != 0)
        break;
      return std::make_pair(1440, 1);	 // "wait_group_events"
    }
    break;
  case 18:	 // 110 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 104 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "har16_", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[16] != 't')
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(188, 11);	 // "convert_char16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(188, 11);	 // "convert_char16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(188, 11);	 // "convert_char16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(188, 11);	 // "convert_char16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(188, 11);	 // "convert_char16_sat"
        }
        break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble_rt", 8) != 0)
          break;
        switch (Name[17]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(529, 11);	 // "convert_double_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(529, 11);	 // "convert_double_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(529, 11);	 // "convert_double_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(529, 11);	 // "convert_double_rtz"
        }
        break;
      case 'f':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(89, 11);	 // "convert_float2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(89, 11);	 // "convert_float2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(89, 11);	 // "convert_float2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(89, 11);	 // "convert_float2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(100, 11);	 // "convert_float3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(100, 11);	 // "convert_float3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(100, 11);	 // "convert_float3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(100, 11);	 // "convert_float3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(111, 11);	 // "convert_float4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(111, 11);	 // "convert_float4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(111, 11);	 // "convert_float4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(111, 11);	 // "convert_float4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(122, 11);	 // "convert_float8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(122, 11);	 // "convert_float8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(122, 11);	 // "convert_float8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(122, 11);	 // "convert_float8_rtz"
          }
          break;
        }
        break;
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf16_rt", 8) != 0)
          break;
        switch (Name[17]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(45, 11);	 // "convert_half16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(45, 11);	 // "convert_half16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(45, 11);	 // "convert_half16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(45, 11);	 // "convert_half16_rtz"
        }
        break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "ong16_", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[16] != 't')
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(650, 11);	 // "convert_long16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(650, 11);	 // "convert_long16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(650, 11);	 // "convert_long16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(650, 11);	 // "convert_long16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(650, 11);	 // "convert_long16_sat"
        }
        break;
      case 's':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(276, 11);	 // "convert_short2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(276, 11);	 // "convert_short2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(276, 11);	 // "convert_short2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(276, 11);	 // "convert_short2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(276, 11);	 // "convert_short2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(287, 11);	 // "convert_short3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(287, 11);	 // "convert_short3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(287, 11);	 // "convert_short3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(287, 11);	 // "convert_short3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(287, 11);	 // "convert_short3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(298, 11);	 // "convert_short4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(298, 11);	 // "convert_short4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(298, 11);	 // "convert_short4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(298, 11);	 // "convert_short4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(298, 11);	 // "convert_short4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(309, 11);	 // "convert_short8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(309, 11);	 // "convert_short8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(309, 11);	 // "convert_short8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(309, 11);	 // "convert_short8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(309, 11);	 // "convert_short8_sat"
          }
          break;
        }
        break;
      case 'u':	 // 50 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(210, 11);	 // "convert_uchar2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(210, 11);	 // "convert_uchar2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(210, 11);	 // "convert_uchar2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(210, 11);	 // "convert_uchar2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(210, 11);	 // "convert_uchar2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(221, 11);	 // "convert_uchar3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(221, 11);	 // "convert_uchar3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(221, 11);	 // "convert_uchar3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(221, 11);	 // "convert_uchar3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(221, 11);	 // "convert_uchar3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(232, 11);	 // "convert_uchar4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(232, 11);	 // "convert_uchar4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(232, 11);	 // "convert_uchar4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(232, 11);	 // "convert_uchar4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(232, 11);	 // "convert_uchar4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(243, 11);	 // "convert_uchar8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(243, 11);	 // "convert_uchar8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(243, 11);	 // "convert_uchar8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(243, 11);	 // "convert_uchar8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(243, 11);	 // "convert_uchar8_sat"
            }
            break;
          }
          break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "nt16_", 5) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(518, 11);	 // "convert_uint16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(518, 11);	 // "convert_uint16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(518, 11);	 // "convert_uint16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(518, 11);	 // "convert_uint16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(518, 11);	 // "convert_uint16_sat"
          }
          break;
        case 'l':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(672, 11);	 // "convert_ulong2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(672, 11);	 // "convert_ulong2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(672, 11);	 // "convert_ulong2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(672, 11);	 // "convert_ulong2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(672, 11);	 // "convert_ulong2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(683, 11);	 // "convert_ulong3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(683, 11);	 // "convert_ulong3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(683, 11);	 // "convert_ulong3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(683, 11);	 // "convert_ulong3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(683, 11);	 // "convert_ulong3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(694, 11);	 // "convert_ulong4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(694, 11);	 // "convert_ulong4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(694, 11);	 // "convert_ulong4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(694, 11);	 // "convert_ulong4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(694, 11);	 // "convert_ulong4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(705, 11);	 // "convert_ulong8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(705, 11);	 // "convert_ulong8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(705, 11);	 // "convert_ulong8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(705, 11);	 // "convert_ulong8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(705, 11);	 // "convert_ulong8_sat"
            }
            break;
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "hort_", 5) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(331, 11);	 // "convert_ushort_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(331, 11);	 // "convert_ushort_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(331, 11);	 // "convert_ushort_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(331, 11);	 // "convert_ushort_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(331, 11);	 // "convert_ushort_sat"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+5, "um_sub_groups", 13) != 0)
          break;
        return std::make_pair(1922, 1);	 // "get_num_sub_groups"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_size", 13) != 0)
          break;
        return std::make_pair(1922, 1);	 // "get_sub_group_size"
      }
      break;
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "storea_half16_rt", 16) != 0)
        break;
      switch (Name[17]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(1415, 8);	 // "vstorea_half16_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(1415, 8);	 // "vstorea_half16_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(1415, 8);	 // "vstorea_half16_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(1415, 8);	 // "vstorea_half16_rtz"
      }
      break;
    }
    break;
  case 19:	 // 62 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 59 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'd':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(540, 11);	 // "convert_double2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(540, 11);	 // "convert_double2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(540, 11);	 // "convert_double2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(540, 11);	 // "convert_double2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(551, 11);	 // "convert_double3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(551, 11);	 // "convert_double3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(551, 11);	 // "convert_double3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(551, 11);	 // "convert_double3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(562, 11);	 // "convert_double4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(562, 11);	 // "convert_double4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(562, 11);	 // "convert_double4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(562, 11);	 // "convert_double4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(573, 11);	 // "convert_double8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(573, 11);	 // "convert_double8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(573, 11);	 // "convert_double8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(573, 11);	 // "convert_double8_rtz"
          }
          break;
        }
        break;
      case 'f':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "loat16_rt", 9) != 0)
          break;
        switch (Name[18]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(67, 11);	 // "convert_float16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(67, 11);	 // "convert_float16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(67, 11);	 // "convert_float16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(67, 11);	 // "convert_float16_rtz"
        }
        break;
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt_sat_rt", 9) != 0)
          break;
        switch (Name[18]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(397, 11);	 // "convert_int_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(397, 11);	 // "convert_int_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(397, 11);	 // "convert_int_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(397, 11);	 // "convert_int_sat_rtz"
        }
        break;
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "hort16_", 7) != 0)
          break;
        switch (Name[16]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[17] != 't')
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(320, 11);	 // "convert_short16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(320, 11);	 // "convert_short16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(320, 11);	 // "convert_short16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(320, 11);	 // "convert_short16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+17, "at", 2) != 0)
            break;
          return std::make_pair(320, 11);	 // "convert_short16_sat"
        }
        break;
      case 'u':	 // 30 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "har16_", 6) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(254, 11);	 // "convert_uchar16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(254, 11);	 // "convert_uchar16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(254, 11);	 // "convert_uchar16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(254, 11);	 // "convert_uchar16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(254, 11);	 // "convert_uchar16_sat"
          }
          break;
        case 'l':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "ong16_", 6) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(716, 11);	 // "convert_ulong16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(716, 11);	 // "convert_ulong16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(716, 11);	 // "convert_ulong16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(716, 11);	 // "convert_ulong16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(716, 11);	 // "convert_ulong16_sat"
          }
          break;
        case 's':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(342, 11);	 // "convert_ushort2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(342, 11);	 // "convert_ushort2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(342, 11);	 // "convert_ushort2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(342, 11);	 // "convert_ushort2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(342, 11);	 // "convert_ushort2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(353, 11);	 // "convert_ushort3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(353, 11);	 // "convert_ushort3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(353, 11);	 // "convert_ushort3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(353, 11);	 // "convert_ushort3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(353, 11);	 // "convert_ushort3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(364, 11);	 // "convert_ushort4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(364, 11);	 // "convert_ushort4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(364, 11);	 // "convert_ushort4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(364, 11);	 // "convert_ushort4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(364, 11);	 // "convert_ushort4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(375, 11);	 // "convert_ushort8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(375, 11);	 // "convert_ushort8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(375, 11);	 // "convert_ushort8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(375, 11);	 // "convert_ushort8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(375, 11);	 // "convert_ushort8_sat"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_local_linear_id", 18) != 0)
        break;
      return std::make_pair(730, 1);	 // "get_local_linear_id"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "s_valid_reserve_id", 18) != 0)
        break;
      return std::make_pair(1882, 1);	 // "is_valid_reserve_id"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_broadcast", 18) != 0)
        break;
      return std::make_pair(1925, 1);	 // "sub_group_broadcast"
    }
    break;
  case 20:	 // 44 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 37 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har_sat_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(133, 11);	 // "convert_char_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(133, 11);	 // "convert_char_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(133, 11);	 // "convert_char_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(133, 11);	 // "convert_char_sat_rtz"
        }
        break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble16_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(584, 11);	 // "convert_double16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(584, 11);	 // "convert_double16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(584, 11);	 // "convert_double16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(584, 11);	 // "convert_double16_rtz"
        }
        break;
      case 'i':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(408, 11);	 // "convert_int2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(408, 11);	 // "convert_int2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(408, 11);	 // "convert_int2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(408, 11);	 // "convert_int2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(419, 11);	 // "convert_int3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(419, 11);	 // "convert_int3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(419, 11);	 // "convert_int3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(419, 11);	 // "convert_int3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(430, 11);	 // "convert_int4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(430, 11);	 // "convert_int4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(430, 11);	 // "convert_int4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(430, 11);	 // "convert_int4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(441, 11);	 // "convert_int8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(441, 11);	 // "convert_int8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(441, 11);	 // "convert_int8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(441, 11);	 // "convert_int8_sat_rtz"
          }
          break;
        }
        break;
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong_sat_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(595, 11);	 // "convert_long_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(595, 11);	 // "convert_long_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(595, 11);	 // "convert_long_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(595, 11);	 // "convert_long_sat_rtz"
        }
        break;
      case 'u':	 // 9 strings to match.
        switch (Name[9]) {
        default: break;
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt_sat_rt", 9) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(463, 11);	 // "convert_uint_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(463, 11);	 // "convert_uint_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(463, 11);	 // "convert_uint_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(463, 11);	 // "convert_uint_sat_rtz"
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "hort16_", 7) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[18] != 't')
              break;
            switch (Name[19]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(386, 11);	 // "convert_ushort16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(386, 11);	 // "convert_ushort16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(386, 11);	 // "convert_ushort16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(386, 11);	 // "convert_ushort16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+18, "at", 2) != 0)
              break;
            return std::make_pair(386, 11);	 // "convert_ushort16_sat"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_linear_id", 15) != 0)
          break;
        return std::make_pair(730, 1);	 // "get_global_linear_id"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_array_size", 15) != 0)
          break;
        return std::make_pair(1828, 15);	 // "get_image_array_size"
      }
      break;
    case 's':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "ub_group_", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'r':	 // 3 strings to match.
        if (memcmp(Name.data()+11, "educe_", 6) != 0)
          break;
        switch (Name[17]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+18, "dd", 2) != 0)
            break;
          return std::make_pair(1926, 1);	 // "sub_group_reduce_add"
        case 'm':	 // 2 strings to match.
          switch (Name[18]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[19] != 'x')
              break;
            return std::make_pair(1926, 1);	 // "sub_group_reduce_max"
          case 'i':	 // 1 string to match.
            if (Name[19] != 'n')
              break;
            return std::make_pair(1926, 1);	 // "sub_group_reduce_min"
          }
          break;
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+11, "huffle_up", 9) != 0)
          break;
        return std::make_pair(1939, 1);	 // "sub_group_shuffle_up"
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ork_group_broadcast", 19) != 0)
        break;
      return std::make_pair(1878, 3);	 // "work_group_broadcast"
    }
    break;
  case 21:	 // 76 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sync_work_group_copy", 20) != 0)
        break;
      return std::make_pair(1436, 2);	 // "async_work_group_copy"
    case 'c':	 // 64 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(144, 11);	 // "convert_char2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(144, 11);	 // "convert_char2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(144, 11);	 // "convert_char2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(144, 11);	 // "convert_char2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(155, 11);	 // "convert_char3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(155, 11);	 // "convert_char3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(155, 11);	 // "convert_char3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(155, 11);	 // "convert_char3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(166, 11);	 // "convert_char4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(166, 11);	 // "convert_char4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(166, 11);	 // "convert_char4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(166, 11);	 // "convert_char4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(177, 11);	 // "convert_char8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(177, 11);	 // "convert_char8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(177, 11);	 // "convert_char8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(177, 11);	 // "convert_char8_sat_rtz"
          }
          break;
        }
        break;
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt16_sat_rt", 11) != 0)
          break;
        switch (Name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(452, 11);	 // "convert_int16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(452, 11);	 // "convert_int16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(452, 11);	 // "convert_int16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(452, 11);	 // "convert_int16_sat_rtz"
        }
        break;
      case 'l':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(606, 11);	 // "convert_long2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(606, 11);	 // "convert_long2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(606, 11);	 // "convert_long2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(606, 11);	 // "convert_long2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(617, 11);	 // "convert_long3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(617, 11);	 // "convert_long3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(617, 11);	 // "convert_long3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(617, 11);	 // "convert_long3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(628, 11);	 // "convert_long4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(628, 11);	 // "convert_long4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(628, 11);	 // "convert_long4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(628, 11);	 // "convert_long4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(639, 11);	 // "convert_long8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(639, 11);	 // "convert_long8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(639, 11);	 // "convert_long8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(639, 11);	 // "convert_long8_sat_rtz"
          }
          break;
        }
        break;
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort_sat_rt", 11) != 0)
          break;
        switch (Name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(265, 11);	 // "convert_short_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(265, 11);	 // "convert_short_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(265, 11);	 // "convert_short_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(265, 11);	 // "convert_short_sat_rtz"
        }
        break;
      case 'u':	 // 24 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har_sat_rt", 10) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(199, 11);	 // "convert_uchar_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(199, 11);	 // "convert_uchar_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(199, 11);	 // "convert_uchar_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(199, 11);	 // "convert_uchar_sat_rtz"
          }
          break;
        case 'i':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "nt", 2) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(474, 11);	 // "convert_uint2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(474, 11);	 // "convert_uint2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(474, 11);	 // "convert_uint2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(474, 11);	 // "convert_uint2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(485, 11);	 // "convert_uint3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(485, 11);	 // "convert_uint3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(485, 11);	 // "convert_uint3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(485, 11);	 // "convert_uint3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(496, 11);	 // "convert_uint4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(496, 11);	 // "convert_uint4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(496, 11);	 // "convert_uint4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(496, 11);	 // "convert_uint4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(507, 11);	 // "convert_uint8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(507, 11);	 // "convert_uint8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(507, 11);	 // "convert_uint8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(507, 11);	 // "convert_uint8_sat_rtz"
            }
            break;
          }
          break;
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong_sat_rt", 10) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(661, 11);	 // "convert_ulong_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(661, 11);	 // "convert_ulong_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(661, 11);	 // "convert_ulong_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(661, 11);	 // "convert_ulong_sat_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_num_samples", 16) != 0)
          break;
        return std::make_pair(1910, 12);	 // "get_image_num_samples"
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+5, "ub_group_", 9) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+15, "q_mask", 6) != 0)
            break;
          return std::make_pair(1937, 1);	 // "get_sub_group_eq_mask"
        case 'g':	 // 2 strings to match.
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            if (memcmp(Name.data()+16, "_mask", 5) != 0)
              break;
            return std::make_pair(1937, 1);	 // "get_sub_group_ge_mask"
          case 't':	 // 1 string to match.
            if (memcmp(Name.data()+16, "_mask", 5) != 0)
              break;
            return std::make_pair(1937, 1);	 // "get_sub_group_gt_mask"
          }
          break;
        case 'l':	 // 2 strings to match.
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            if (memcmp(Name.data()+16, "_mask", 5) != 0)
              break;
            return std::make_pair(1937, 1);	 // "get_sub_group_le_mask"
          case 't':	 // 1 string to match.
            if (memcmp(Name.data()+16, "_mask", 5) != 0)
              break;
            return std::make_pair(1937, 1);	 // "get_sub_group_lt_mask"
          }
          break;
        }
        break;
      }
      break;
    case 's':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "t_user_event_status", 19) != 0)
          break;
        return std::make_pair(1887, 1);	 // "set_user_event_status"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "b_group_shuffle_xor", 19) != 0)
          break;
        return std::make_pair(1938, 1);	 // "sub_group_shuffle_xor"
      }
      break;
    case 'w':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ork_group_reduce_", 17) != 0)
        break;
      switch (Name[18]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+19, "dd", 2) != 0)
          break;
        return std::make_pair(1881, 1);	 // "work_group_reduce_add"
      case 'm':	 // 2 strings to match.
        switch (Name[19]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[20] != 'x')
            break;
          return std::make_pair(1881, 1);	 // "work_group_reduce_max"
        case 'i':	 // 1 string to match.
          if (Name[20] != 'n')
            break;
          return std::make_pair(1881, 1);	 // "work_group_reduce_min"
        }
        break;
      }
      break;
    }
    break;
  case 22:	 // 67 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 64 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har16_sat_rt", 12) != 0)
          break;
        switch (Name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(188, 11);	 // "convert_char16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(188, 11);	 // "convert_char16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(188, 11);	 // "convert_char16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(188, 11);	 // "convert_char16_sat_rtz"
        }
        break;
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong16_sat_rt", 12) != 0)
          break;
        switch (Name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(650, 11);	 // "convert_long16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(650, 11);	 // "convert_long16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(650, 11);	 // "convert_long16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(650, 11);	 // "convert_long16_sat_rtz"
        }
        break;
      case 's':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(276, 11);	 // "convert_short2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(276, 11);	 // "convert_short2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(276, 11);	 // "convert_short2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(276, 11);	 // "convert_short2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(287, 11);	 // "convert_short3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(287, 11);	 // "convert_short3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(287, 11);	 // "convert_short3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(287, 11);	 // "convert_short3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(298, 11);	 // "convert_short4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(298, 11);	 // "convert_short4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(298, 11);	 // "convert_short4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(298, 11);	 // "convert_short4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(309, 11);	 // "convert_short8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(309, 11);	 // "convert_short8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(309, 11);	 // "convert_short8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(309, 11);	 // "convert_short8_sat_rtz"
          }
          break;
        }
        break;
      case 'u':	 // 40 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(210, 11);	 // "convert_uchar2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(210, 11);	 // "convert_uchar2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(210, 11);	 // "convert_uchar2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(210, 11);	 // "convert_uchar2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(221, 11);	 // "convert_uchar3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(221, 11);	 // "convert_uchar3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(221, 11);	 // "convert_uchar3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(221, 11);	 // "convert_uchar3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(232, 11);	 // "convert_uchar4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(232, 11);	 // "convert_uchar4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(232, 11);	 // "convert_uchar4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(232, 11);	 // "convert_uchar4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(243, 11);	 // "convert_uchar8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(243, 11);	 // "convert_uchar8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(243, 11);	 // "convert_uchar8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(243, 11);	 // "convert_uchar8_sat_rtz"
            }
            break;
          }
          break;
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt16_sat_rt", 11) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(518, 11);	 // "convert_uint16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(518, 11);	 // "convert_uint16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(518, 11);	 // "convert_uint16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(518, 11);	 // "convert_uint16_sat_rtz"
          }
          break;
        case 'l':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(672, 11);	 // "convert_ulong2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(672, 11);	 // "convert_ulong2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(672, 11);	 // "convert_ulong2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(672, 11);	 // "convert_ulong2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(683, 11);	 // "convert_ulong3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(683, 11);	 // "convert_ulong3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(683, 11);	 // "convert_ulong3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(683, 11);	 // "convert_ulong3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(694, 11);	 // "convert_ulong4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(694, 11);	 // "convert_ulong4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(694, 11);	 // "convert_ulong4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(694, 11);	 // "convert_ulong4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(705, 11);	 // "convert_ulong8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(705, 11);	 // "convert_ulong8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(705, 11);	 // "convert_ulong8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(705, 11);	 // "convert_ulong8_sat_rtz"
            }
            break;
          }
          break;
        case 's':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "hort_sat_rt", 11) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(331, 11);	 // "convert_ushort_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(331, 11);	 // "convert_ushort_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(331, 11);	 // "convert_ushort_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(331, 11);	 // "convert_ushort_sat_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ax_sub_group_size", 17) != 0)
          break;
        return std::make_pair(1922, 1);	 // "get_max_sub_group_size"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_local_id", 17) != 0)
          break;
        return std::make_pair(1922, 1);	 // "get_sub_group_local_id"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_shuffle_down", 21) != 0)
        break;
      return std::make_pair(1939, 1);	 // "sub_group_shuffle_down"
    }
    break;
  case 23:	 // 30 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 28 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort16_sat_rt", 13) != 0)
          break;
        switch (Name[22]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(320, 11);	 // "convert_short16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(320, 11);	 // "convert_short16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(320, 11);	 // "convert_short16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(320, 11);	 // "convert_short16_sat_rtz"
        }
        break;
      case 'u':	 // 24 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har16_sat_rt", 12) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(254, 11);	 // "convert_uchar16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(254, 11);	 // "convert_uchar16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(254, 11);	 // "convert_uchar16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(254, 11);	 // "convert_uchar16_sat_rtz"
          }
          break;
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong16_sat_rt", 12) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(716, 11);	 // "convert_ulong16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(716, 11);	 // "convert_ulong16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(716, 11);	 // "convert_ulong16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(716, 11);	 // "convert_ulong16_sat_rtz"
          }
          break;
        case 's':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(342, 11);	 // "convert_ushort2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(342, 11);	 // "convert_ushort2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(342, 11);	 // "convert_ushort2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(342, 11);	 // "convert_ushort2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(353, 11);	 // "convert_ushort3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(353, 11);	 // "convert_ushort3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(353, 11);	 // "convert_ushort3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(353, 11);	 // "convert_ushort3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(364, 11);	 // "convert_ushort4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(364, 11);	 // "convert_ushort4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(364, 11);	 // "convert_ushort4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(364, 11);	 // "convert_ushort4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(375, 11);	 // "convert_ushort8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(375, 11);	 // "convert_ushort8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(375, 11);	 // "convert_ushort8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(375, 11);	 // "convert_ushort8_sat_rtz"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+5, "nqueued_local_size", 18) != 0)
          break;
        return std::make_pair(729, 1);	 // "get_enqueued_local_size"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_channel_order", 18) != 0)
          break;
        return std::make_pair(1735, 36);	 // "get_image_channel_order"
      }
      break;
    }
    break;
  case 24:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "onvert_ushort16_sat_rt", 22) != 0)
        break;
      switch (Name[23]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(386, 11);	 // "convert_ushort16_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(386, 11);	 // "convert_ushort16_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(386, 11);	 // "convert_ushort16_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(386, 11);	 // "convert_ushort16_sat_rtz"
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_image_num_mip_levels", 23) != 0)
        break;
      return std::make_pair(1889, 21);	 // "get_image_num_mip_levels"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_inverse_ballot", 23) != 0)
        break;
      return std::make_pair(1933, 1);	 // "sub_group_inverse_ballot"
    }
    break;
  case 25:	 // 5 strings to match.
    if (memcmp(Name.data()+0, "sub_group_", 10) != 0)
      break;
    switch (Name[10]) {
    default: break;
    case 'b':	 // 3 strings to match.
      switch (Name[11]) {
      default: break;
      case 'a':	 // 2 strings to match.
        if (memcmp(Name.data()+12, "llot_find_", 10) != 0)
          break;
        switch (Name[22]) {
        default: break;
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+23, "sb", 2) != 0)
            break;
          return std::make_pair(1936, 1);	 // "sub_group_ballot_find_lsb"
        case 'm':	 // 1 string to match.
          if (memcmp(Name.data()+23, "sb", 2) != 0)
            break;
          return std::make_pair(1936, 1);	 // "sub_group_ballot_find_msb"
        }
        break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+12, "oadcast_first", 13) != 0)
          break;
        return std::make_pair(1931, 1);	 // "sub_group_broadcast_first"
      }
      break;
    case 'n':	 // 2 strings to match.
      if (memcmp(Name.data()+11, "on_uniform_a", 12) != 0)
        break;
      switch (Name[23]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[24] != 'l')
          break;
        return std::make_pair(1928, 1);	 // "sub_group_non_uniform_all"
      case 'n':	 // 1 string to match.
        if (Name[24] != 'y')
          break;
        return std::make_pair(1928, 1);	 // "sub_group_non_uniform_any"
      }
      break;
    }
    break;
  case 26:	 // 1 string to match.
    if (memcmp(Name.data()+0, "sub_group_ballot_bit_count", 26) != 0)
      break;
    return std::make_pair(1935, 1);	 // "sub_group_ballot_bit_count"
  case 27:	 // 2 strings to match.
    if (memcmp(Name.data()+0, "get_", 4) != 0)
      break;
    switch (Name[4]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+5, "nqueued_num_sub_groups", 22) != 0)
        break;
      return std::make_pair(1923, 1);	 // "get_enqueued_num_sub_groups"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+5, "mage_channel_data_type", 22) != 0)
        break;
      return std::make_pair(1735, 36);	 // "get_image_channel_data_type"
    }
    break;
  case 28:	 // 8 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_compare_exchange_weak", 27) != 0)
        break;
      return std::make_pair(1504, 6);	 // "atomic_compare_exchange_weak"
    case 's':	 // 7 strings to match.
      if (memcmp(Name.data()+1, "ub_group_", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+11, "allot_bit_extract", 17) != 0)
          break;
        return std::make_pair(1934, 1);	 // "sub_group_ballot_bit_extract"
      case 's':	 // 6 strings to match.
        if (memcmp(Name.data()+11, "can_", 4) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 3 strings to match.
          if (memcmp(Name.data()+16, "xclusive_", 9) != 0)
            break;
          switch (Name[25]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (memcmp(Name.data()+26, "dd", 2) != 0)
              break;
            return std::make_pair(1926, 1);	 // "sub_group_scan_exclusive_add"
          case 'm':	 // 2 strings to match.
            switch (Name[26]) {
            default: break;
            case 'a':	 // 1 string to match.
              if (Name[27] != 'x')
                break;
              return std::make_pair(1926, 1);	 // "sub_group_scan_exclusive_max"
            case 'i':	 // 1 string to match.
              if (Name[27] != 'n')
                break;
              return std::make_pair(1926, 1);	 // "sub_group_scan_exclusive_min"
            }
            break;
          }
          break;
        case 'i':	 // 3 strings to match.
          if (memcmp(Name.data()+16, "nclusive_", 9) != 0)
            break;
          switch (Name[25]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (memcmp(Name.data()+26, "dd", 2) != 0)
              break;
            return std::make_pair(1926, 1);	 // "sub_group_scan_inclusive_add"
          case 'm':	 // 2 strings to match.
            switch (Name[26]) {
            default: break;
            case 'a':	 // 1 string to match.
              if (Name[27] != 'x')
                break;
              return std::make_pair(1926, 1);	 // "sub_group_scan_inclusive_max"
            case 'i':	 // 1 string to match.
              if (Name[27] != 'n')
                break;
              return std::make_pair(1926, 1);	 // "sub_group_scan_inclusive_min"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  case 29:	 // 7 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sync_work_group_strided_copy", 28) != 0)
        break;
      return std::make_pair(1438, 2);	 // "async_work_group_strided_copy"
    case 'w':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "ork_group_scan_", 15) != 0)
        break;
      switch (Name[16]) {
      default: break;
      case 'e':	 // 3 strings to match.
        if (memcmp(Name.data()+17, "xclusive_", 9) != 0)
          break;
        switch (Name[26]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+27, "dd", 2) != 0)
            break;
          return std::make_pair(1881, 1);	 // "work_group_scan_exclusive_add"
        case 'm':	 // 2 strings to match.
          switch (Name[27]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[28] != 'x')
              break;
            return std::make_pair(1881, 1);	 // "work_group_scan_exclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[28] != 'n')
              break;
            return std::make_pair(1881, 1);	 // "work_group_scan_exclusive_min"
          }
          break;
        }
        break;
      case 'i':	 // 3 strings to match.
        if (memcmp(Name.data()+17, "nclusive_", 9) != 0)
          break;
        switch (Name[26]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+27, "dd", 2) != 0)
            break;
          return std::make_pair(1881, 1);	 // "work_group_scan_inclusive_add"
        case 'm':	 // 2 strings to match.
          switch (Name[27]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[28] != 'x')
              break;
            return std::make_pair(1881, 1);	 // "work_group_scan_inclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[28] != 'n')
              break;
            return std::make_pair(1881, 1);	 // "work_group_scan_inclusive_min"
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  case 30:	 // 1 string to match.
    if (memcmp(Name.data()+0, "atomic_compare_exchange_strong", 30) != 0)
      break;
    return std::make_pair(1504, 6);	 // "atomic_compare_exchange_strong"
  case 31:	 // 4 strings to match.
    if (memcmp(Name.data()+0, "sub_group_", 10) != 0)
      break;
    switch (Name[10]) {
    default: break;
    case 'b':	 // 2 strings to match.
      if (memcmp(Name.data()+11, "allot_", 6) != 0)
        break;
      switch (Name[17]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+18, "xclusive_scan", 13) != 0)
          break;
        return std::make_pair(1936, 1);	 // "sub_group_ballot_exclusive_scan"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+18, "nclusive_scan", 13) != 0)
          break;
        return std::make_pair(1936, 1);	 // "sub_group_ballot_inclusive_scan"
      }
      break;
    case 'n':	 // 2 strings to match.
      if (memcmp(Name.data()+11, "on_uniform_", 11) != 0)
        break;
      switch (Name[22]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+23, "ll_equal", 8) != 0)
          break;
        return std::make_pair(1929, 1);	 // "sub_group_non_uniform_all_equal"
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+23, "roadcast", 8) != 0)
          break;
        return std::make_pair(1930, 1);	 // "sub_group_non_uniform_broadcast"
      }
      break;
    }
    break;
  }
  return std::make_pair(0, 0);
} // isOpenCLBuiltin


// Convert an OpenCLTypeStruct type to a list of QualTypes.
// Generic types represent multiple types and vector sizes, thus a vector
// is returned. The conversion is done in two steps:
// Step 1: A switch statement fills a vector with scalar base types for the
//         Cartesian product of (vector sizes) x (types) for generic types,
//         or a single scalar type for non generic types.
// Step 2: Qualifiers and other type properties such as vector size are
//         applied.
static void OCL2Qual(ASTContext &Context, const OpenCLTypeStruct &Ty,
                     llvm::SmallVectorImpl<QualType> &QT) {
  // Number of scalar types in the GenType.
  unsigned GenTypeNumTypes;
  // Pointer to the list of vector sizes for the GenType.
  llvm::ArrayRef<unsigned> GenVectorSizes;
  constexpr unsigned ListVec1[] = {1, };
  constexpr unsigned ListVec1234[] = {1, 2, 3, 4, };
  constexpr unsigned ListVec16[] = {16, };
  constexpr unsigned ListVec2[] = {2, };
  constexpr unsigned ListVec4[] = {4, };
  constexpr unsigned ListVec8[] = {8, };
  constexpr unsigned ListVecAndScalar[] = {1, 2, 3, 4, 8, 16, };
  constexpr unsigned ListVecNoScalar[] = {2, 3, 4, 8, 16, };

  switch (Ty.ID) {
    case OCLT_image1d_array_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dArrayROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dArrayRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dArrayWOTy);
          break;
      }
      break;
    case OCLT_image1d_buffer_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dBufferROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dBufferRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dBufferWOTy);
          break;
      }
      break;
    case OCLT_image1d_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayDepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayDepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayDepthWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_msaa_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayMSAADepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayMSAADepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayMSAADepthWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_msaa_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayMSAAROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayMSAARWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayMSAAWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayWOTy);
          break;
      }
      break;
    case OCLT_image2d_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dDepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dDepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dDepthWOTy);
          break;
      }
      break;
    case OCLT_image2d_msaa_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dMSAADepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dMSAADepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dMSAADepthWOTy);
          break;
      }
      break;
    case OCLT_image2d_msaa_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dMSAAROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dMSAARWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dMSAAWOTy);
          break;
      }
      break;
    case OCLT_image2d_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dWOTy);
          break;
      }
      break;
    case OCLT_image3d_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage3dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage3dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage3dWOTy);
          break;
      }
      break;
    case OCLT_AGenType1:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec1;
      break;
    case OCLT_AGenTypeN:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_AGenTypeNNoScalar:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_AI2UGenTypeN:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 8;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_AIGenType1:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 8;
      GenVectorSizes = ListVec1;
      break;
    case OCLT_AIGenTypeN:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 8;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_AIGenTypeNNoScalar:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 8;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_FGenTypeN:
      QT.append({Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 3;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeCharVecAndScalar:
      QT.append({Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeCharVecNoScalar:
      QT.append({Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeDoubleVec1234:
      QT.append({Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVec1234;
      break;
    case OCLT_GenTypeDoubleVecAndScalar:
      QT.append({Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeDoubleVecNoScalar:
      QT.append({Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeFloatVec1234:
      QT.append({Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVec1234;
      break;
    case OCLT_GenTypeFloatVecAndScalar:
      QT.append({Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeFloatVecNoScalar:
      QT.append({Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeHalfVec1234:
      QT.append({Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVec1234;
      break;
    case OCLT_GenTypeHalfVecAndScalar:
      QT.append({Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeHalfVecNoScalar:
      QT.append({Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeIntVecAndScalar:
      QT.append({Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeIntVecNoScalar:
      QT.append({Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeLongVecAndScalar:
      QT.append({Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeLongVecNoScalar:
      QT.append({Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeShortVecAndScalar:
      QT.append({Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeShortVecNoScalar:
      QT.append({Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeUCharVecAndScalar:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeUCharVecNoScalar:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeUIntVecAndScalar:
      QT.append({Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeUIntVecNoScalar:
      QT.append({Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeULongVecAndScalar:
      QT.append({Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeULongVecNoScalar:
      QT.append({Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeUShortVecAndScalar:
      QT.append({Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeUShortVecNoScalar:
      QT.append({Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, });
      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_IntLongFloatGenType1:
      QT.append({Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 7;
      GenVectorSizes = ListVec1;
      break;
    case OCLT_SGenTypeN:
      QT.append({Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, });
      GenTypeNumTypes = 4;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_UGenTypeN:
      QT.append({Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, });
      GenTypeNumTypes = 4;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_TLAllVec2:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec2;
      break;
    case OCLT_TLAllUnsignedVec2:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedShortTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec2;
      break;
    case OCLT_TLAllVec4:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec4;
      break;
    case OCLT_TLAllVec8:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec8;
      break;
    case OCLT_TLAllVec16:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec16;
      break;
    case OCLT_TLAllUnsignedVec4:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedShortTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec4;
      break;
    case OCLT_TLAllUnsignedVec8:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedShortTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec8;
      break;
    case OCLT_TLAllUnsignedVec16:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedShortTy, });
      GenTypeNumTypes = 11;
      GenVectorSizes = ListVec16;
      break;
    case OCLT_atomic_double:
      QT.push_back(Context.getAtomicType(Context.DoubleTy));
      break;
    case OCLT_atomic_float:
      QT.push_back(Context.getAtomicType(Context.FloatTy));
      break;
    case OCLT_atomic_int:
      QT.push_back(Context.getAtomicType(Context.IntTy));
      break;
    case OCLT_atomic_intptr_t:
      QT.push_back(Context.getAtomicType(Context.getIntPtrType()));
      break;
    case OCLT_atomic_long:
      QT.push_back(Context.getAtomicType(Context.LongTy));
      break;
    case OCLT_atomic_ptrdiff_t:
      QT.push_back(Context.getAtomicType(Context.getPointerDiffType()));
      break;
    case OCLT_atomic_size_t:
      QT.push_back(Context.getAtomicType(Context.getSizeType()));
      break;
    case OCLT_atomic_uint:
      QT.push_back(Context.getAtomicType(Context.UnsignedIntTy));
      break;
    case OCLT_atomic_uintptr_t:
      QT.push_back(Context.getAtomicType(Context.getUIntPtrType()));
      break;
    case OCLT_atomic_ulong:
      QT.push_back(Context.getAtomicType(Context.UnsignedLongTy));
      break;
    case OCLT_bool:
      QT.push_back(Context.BoolTy);
      break;
    case OCLT_char:
      QT.push_back(Context.CharTy);
      break;
    case OCLT_clk_event_t:
      QT.push_back(Context.OCLClkEventTy);
      break;
    case OCLT_double:
      QT.push_back(Context.DoubleTy);
      break;
    case OCLT_event_t:
      QT.push_back(Context.OCLEventTy);
      break;
    case OCLT_float:
      QT.push_back(Context.FloatTy);
      break;
    case OCLT_half:
      QT.push_back(Context.HalfTy);
      break;
    case OCLT_int:
      QT.push_back(Context.IntTy);
      break;
    case OCLT_intptr_t:
      QT.push_back(Context.getIntPtrType());
      break;
    case OCLT_long:
      QT.push_back(Context.LongTy);
      break;
    case OCLT_ptrdiff_t:
      QT.push_back(Context.getPointerDiffType());
      break;
    case OCLT_queue_t:
      QT.push_back(Context.OCLQueueTy);
      break;
    case OCLT_reserve_id_t:
      QT.push_back(Context.OCLReserveIDTy);
      break;
    case OCLT_sampler_t:
      QT.push_back(Context.OCLSamplerTy);
      break;
    case OCLT_short:
      QT.push_back(Context.ShortTy);
      break;
    case OCLT_size_t:
      QT.push_back(Context.getSizeType());
      break;
    case OCLT_uchar:
      QT.push_back(Context.UnsignedCharTy);
      break;
    case OCLT_uint:
      QT.push_back(Context.UnsignedIntTy);
      break;
    case OCLT_uintptr_t:
      QT.push_back(Context.getUIntPtrType());
      break;
    case OCLT_ulong:
      QT.push_back(Context.UnsignedLongTy);
      break;
    case OCLT_ushort:
      QT.push_back(Context.UnsignedShortTy);
      break;
    case OCLT_void:
      QT.push_back(Context.VoidTy);
      break;
  } // end of switch (Ty.ID)

  // Construct the different vector types for each generic type.
  if (Ty.ID >= 44) {
    for (unsigned I = 0; I < QT.size(); I++) {
      // For scalars, size is 1.
      if (GenVectorSizes[I / GenTypeNumTypes] != 1) {
        QT[I] = Context.getExtVectorType(QT[I],
                          GenVectorSizes[I / GenTypeNumTypes]);
      }
    }
  }

  // Set vector size for non-generic vector types.
  if (Ty.VectorWidth > 1) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getExtVectorType(QT[Index], Ty.VectorWidth);
    }
  }

  if (Ty.IsVolatile != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getVolatileType(QT[Index]);
    }
  }

  if (Ty.IsConst != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getConstType(QT[Index]);
    }
  }

  // Transform the type to a pointer as the last step, if necessary.
  // Builtin functions only have pointers on [const|volatile], no
  // [const|volatile] pointers, so this is ok to do it as a last step.
  if (Ty.IsPointer != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getAddrSpaceQualType(QT[Index], Ty.AS);
      QT[Index] = Context.getPointerType(QT[Index]);
    }
  }

} // OCL2Qual
