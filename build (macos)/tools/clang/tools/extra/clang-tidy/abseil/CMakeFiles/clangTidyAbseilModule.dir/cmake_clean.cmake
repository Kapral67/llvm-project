file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyAbseilModule.a"
  "../../../../../../lib/libclangTidyAbseilModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyAbseilModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
