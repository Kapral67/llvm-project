file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyMiscModule.a"
  "../../../../../../lib/libclangTidyMiscModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyMiscModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
