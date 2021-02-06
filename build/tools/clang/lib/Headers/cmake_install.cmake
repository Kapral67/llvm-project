# Install script for directory: /Users/maxwellkapral/llvm-project/clang/lib/Headers

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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/13.0.0/include" TYPE FILE FILES
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/adxintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/altivec.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/ammintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/amxintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/arm_acle.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/arm_cmse.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/armintr.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/arm64intr.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx2intrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512bf16intrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512bwintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512bitalgintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vlbitalgintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512cdintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vpopcntdqintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512dqintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512erintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512fintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512ifmaintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512ifmavlintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512pfintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vbmiintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vbmivlintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vbmi2intrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vlvbmi2intrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vlbf16intrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vlbwintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vlcdintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vldqintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vlintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vp2intersectintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vlvp2intersectintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vpopcntdqvlintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vnniintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avx512vlvnniintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avxintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/avxvnniintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/bmi2intrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/bmiintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__clang_cuda_builtin_vars.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__clang_cuda_math.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__clang_cuda_cmath.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__clang_cuda_complex_builtins.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__clang_cuda_device_functions.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__clang_cuda_intrinsics.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__clang_cuda_libdevice_declares.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__clang_cuda_math_forward_declares.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__clang_cuda_runtime_wrapper.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__clang_hip_libdevice_declares.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__clang_hip_cmath.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__clang_hip_math.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__clang_hip_runtime_wrapper.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/cetintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/cet.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/cldemoteintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/clzerointrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/cpuid.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/clflushoptintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/clwbintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/emmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/enqcmdintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/f16cintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/float.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/fma4intrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/fmaintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/fxsrintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/gfniintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/hresetintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/htmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/htmxlintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/ia32intrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/immintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/intrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/inttypes.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/invpcidintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/iso646.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/keylockerintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/limits.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/lwpintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/lzcntintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/mm3dnow.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/mmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/mm_malloc.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/module.modulemap"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/movdirintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/msa.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/mwaitxintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/nmmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/opencl-c.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/opencl-c-base.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/pkuintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/pmmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/pconfigintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/popcntintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/prfchwintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/ptwriteintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/rdseedintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/rtmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/serializeintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/sgxintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/s390intrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/shaintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/smmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/stdalign.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/stdarg.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/stdatomic.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/stdbool.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/stddef.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__stddef_max_align_t.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/stdint.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/stdnoreturn.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/tbmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/tgmath.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/tmmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/tsxldtrkintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/uintrintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/unwind.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/vadefs.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/vaesintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/varargs.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/vecintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/vpclmulqdqintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/waitpkgintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/wasm_simd128.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/wbnoinvdintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/wmmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__wmmintrin_aes.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/__wmmintrin_pclmul.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/x86gprintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/x86intrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/xmmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/xopintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/xsavecintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/xsaveintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/xsaveoptintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/xsavesintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/xtestintrin.h"
    "/Users/maxwellkapral/llvm-project/build/tools/clang/lib/Headers/arm_neon.h"
    "/Users/maxwellkapral/llvm-project/build/tools/clang/lib/Headers/arm_fp16.h"
    "/Users/maxwellkapral/llvm-project/build/tools/clang/lib/Headers/arm_sve.h"
    "/Users/maxwellkapral/llvm-project/build/tools/clang/lib/Headers/arm_bf16.h"
    "/Users/maxwellkapral/llvm-project/build/tools/clang/lib/Headers/arm_mve.h"
    "/Users/maxwellkapral/llvm-project/build/tools/clang/lib/Headers/arm_cde.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/13.0.0/include/cuda_wrappers" TYPE FILE FILES
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/cuda_wrappers/algorithm"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/cuda_wrappers/complex"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/cuda_wrappers/new"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/13.0.0/include/ppc_wrappers" TYPE FILE FILES
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/ppc_wrappers/mmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/ppc_wrappers/xmmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/ppc_wrappers/mm_malloc.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/ppc_wrappers/emmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/ppc_wrappers/pmmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/ppc_wrappers/tmmintrin.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/ppc_wrappers/smmintrin.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/13.0.0/include/openmp_wrappers" TYPE FILE FILES
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/openmp_wrappers/math.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/openmp_wrappers/cmath"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/openmp_wrappers/complex.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/openmp_wrappers/complex"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/openmp_wrappers/__clang_openmp_device_functions.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/openmp_wrappers/complex_cmath.h"
    "/Users/maxwellkapral/llvm-project/clang/lib/Headers/openmp_wrappers/new"
    )
endif()

