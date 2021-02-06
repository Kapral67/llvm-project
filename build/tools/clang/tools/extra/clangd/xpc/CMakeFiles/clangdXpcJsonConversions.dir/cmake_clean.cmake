file(REMOVE_RECURSE
  "../../../../../../lib/libclangdXpcJsonConversions.a"
  "../../../../../../lib/libclangdXpcJsonConversions.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangdXpcJsonConversions.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
