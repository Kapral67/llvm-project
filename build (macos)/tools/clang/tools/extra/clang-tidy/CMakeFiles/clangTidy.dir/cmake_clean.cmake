file(REMOVE_RECURSE
  "../../../../../lib/libclangTidy.a"
  "../../../../../lib/libclangTidy.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidy.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
