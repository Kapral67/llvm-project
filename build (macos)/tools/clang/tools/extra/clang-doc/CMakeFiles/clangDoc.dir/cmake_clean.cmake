file(REMOVE_RECURSE
  "../../../../../lib/libclangDoc.a"
  "../../../../../lib/libclangDoc.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangDoc.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
