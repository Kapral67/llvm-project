file(REMOVE_RECURSE
  "../../../../../lib/libclangReorderFields.a"
  "../../../../../lib/libclangReorderFields.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangReorderFields.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
