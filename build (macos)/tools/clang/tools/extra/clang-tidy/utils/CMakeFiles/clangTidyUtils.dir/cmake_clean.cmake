file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyUtils.a"
  "../../../../../../lib/libclangTidyUtils.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyUtils.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
