file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyLLVMModule.a"
  "../../../../../../lib/libclangTidyLLVMModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyLLVMModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
