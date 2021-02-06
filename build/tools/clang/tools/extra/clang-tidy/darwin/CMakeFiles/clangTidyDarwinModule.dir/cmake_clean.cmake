file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyDarwinModule.a"
  "../../../../../../lib/libclangTidyDarwinModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyDarwinModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
