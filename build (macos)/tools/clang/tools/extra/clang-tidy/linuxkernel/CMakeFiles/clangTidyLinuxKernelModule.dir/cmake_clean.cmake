file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyLinuxKernelModule.a"
  "../../../../../../lib/libclangTidyLinuxKernelModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyLinuxKernelModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
