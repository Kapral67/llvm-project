file(REMOVE_RECURSE
  "../../../../../lib/libclangMove.a"
  "../../../../../lib/libclangMove.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangMove.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
