file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyBoostModule.a"
  "../../../../../../lib/libclangTidyBoostModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyBoostModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
