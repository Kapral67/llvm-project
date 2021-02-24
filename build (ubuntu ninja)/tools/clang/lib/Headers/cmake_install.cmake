# Install script for directory: /home/max/GitHub/llvm-project/clang/lib/Headers

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/13.0.0/include" TYPE FILE FILES
    "/home/max/GitHub/llvm-project/clang/lib/Headers/adxintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/altivec.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/ammintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/amxintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/arm_acle.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/arm_cmse.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/armintr.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/arm64intr.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx2intrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512bf16intrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512bwintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512bitalgintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vlbitalgintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512cdintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vpopcntdqintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512dqintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512erintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512fintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512ifmaintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512ifmavlintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512pfintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vbmiintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vbmivlintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vbmi2intrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vlvbmi2intrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vlbf16intrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vlbwintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vlcdintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vldqintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vlintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vp2intersectintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vlvp2intersectintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vpopcntdqvlintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vnniintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avx512vlvnniintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avxintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/avxvnniintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/bmi2intrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/bmiintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__clang_cuda_builtin_vars.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__clang_cuda_math.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__clang_cuda_cmath.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__clang_cuda_complex_builtins.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__clang_cuda_device_functions.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__clang_cuda_intrinsics.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__clang_cuda_libdevice_declares.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__clang_cuda_math_forward_declares.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__clang_cuda_runtime_wrapper.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__clang_hip_libdevice_declares.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__clang_hip_cmath.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__clang_hip_math.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__clang_hip_runtime_wrapper.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/cetintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/cet.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/cldemoteintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/clzerointrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/cpuid.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/clflushoptintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/clwbintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/emmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/enqcmdintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/f16cintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/float.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/fma4intrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/fmaintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/fxsrintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/gfniintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/hresetintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/htmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/htmxlintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/ia32intrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/immintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/intrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/inttypes.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/invpcidintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/iso646.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/keylockerintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/limits.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/lwpintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/lzcntintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/mm3dnow.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/mmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/mm_malloc.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/module.modulemap"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/movdirintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/msa.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/mwaitxintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/nmmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/opencl-c.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/opencl-c-base.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/pkuintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/pmmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/pconfigintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/popcntintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/prfchwintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/ptwriteintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/rdseedintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/rtmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/serializeintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/sgxintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/s390intrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/shaintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/smmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/stdalign.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/stdarg.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/stdatomic.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/stdbool.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/stddef.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__stddef_max_align_t.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/stdint.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/stdnoreturn.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/tbmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/tgmath.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/tmmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/tsxldtrkintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/uintrintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/unwind.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/vadefs.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/vaesintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/varargs.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/vecintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/vpclmulqdqintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/waitpkgintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/wasm_simd128.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/wbnoinvdintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/wmmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__wmmintrin_aes.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/__wmmintrin_pclmul.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/x86gprintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/x86intrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/xmmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/xopintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/xsavecintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/xsaveintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/xsaveoptintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/xsavesintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/xtestintrin.h"
    "/home/max/GitHub/llvm-project/build/tools/clang/lib/Headers/arm_neon.h"
    "/home/max/GitHub/llvm-project/build/tools/clang/lib/Headers/arm_fp16.h"
    "/home/max/GitHub/llvm-project/build/tools/clang/lib/Headers/arm_sve.h"
    "/home/max/GitHub/llvm-project/build/tools/clang/lib/Headers/arm_bf16.h"
    "/home/max/GitHub/llvm-project/build/tools/clang/lib/Headers/arm_mve.h"
    "/home/max/GitHub/llvm-project/build/tools/clang/lib/Headers/arm_cde.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/13.0.0/include/cuda_wrappers" TYPE FILE FILES
    "/home/max/GitHub/llvm-project/clang/lib/Headers/cuda_wrappers/algorithm"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/cuda_wrappers/complex"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/cuda_wrappers/new"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/13.0.0/include/ppc_wrappers" TYPE FILE FILES
    "/home/max/GitHub/llvm-project/clang/lib/Headers/ppc_wrappers/mmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/ppc_wrappers/xmmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/ppc_wrappers/mm_malloc.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/ppc_wrappers/emmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/ppc_wrappers/pmmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/ppc_wrappers/tmmintrin.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/ppc_wrappers/smmintrin.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/13.0.0/include/openmp_wrappers" TYPE FILE FILES
    "/home/max/GitHub/llvm-project/clang/lib/Headers/openmp_wrappers/math.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/openmp_wrappers/cmath"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/openmp_wrappers/complex.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/openmp_wrappers/complex"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/openmp_wrappers/__clang_openmp_device_functions.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/openmp_wrappers/complex_cmath.h"
    "/home/max/GitHub/llvm-project/clang/lib/Headers/openmp_wrappers/new"
    )
endif()

