file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyOpenMPModule.a"
  "../../../../../../lib/libclangTidyOpenMPModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyOpenMPModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
