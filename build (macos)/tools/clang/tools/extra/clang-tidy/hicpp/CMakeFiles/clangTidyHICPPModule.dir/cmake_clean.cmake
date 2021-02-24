file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyHICPPModule.a"
  "../../../../../../lib/libclangTidyHICPPModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyHICPPModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
