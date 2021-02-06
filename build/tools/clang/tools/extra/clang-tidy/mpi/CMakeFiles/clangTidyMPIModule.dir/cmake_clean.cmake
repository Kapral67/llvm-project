file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyMPIModule.a"
  "../../../../../../lib/libclangTidyMPIModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyMPIModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
