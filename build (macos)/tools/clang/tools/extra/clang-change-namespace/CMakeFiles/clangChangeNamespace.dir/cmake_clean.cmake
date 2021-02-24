file(REMOVE_RECURSE
  "../../../../../lib/libclangChangeNamespace.a"
  "../../../../../lib/libclangChangeNamespace.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangChangeNamespace.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
