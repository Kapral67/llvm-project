file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyLLVMLibcModule.a"
  "../../../../../../lib/libclangTidyLLVMLibcModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyLLVMLibcModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
