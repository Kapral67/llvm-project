file(REMOVE_RECURSE
  "../../../../../lib/libclangQuery.a"
  "../../../../../lib/libclangQuery.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangQuery.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
