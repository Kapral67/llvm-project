file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyBugproneModule.a"
  "../../../../../../lib/libclangTidyBugproneModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyBugproneModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
