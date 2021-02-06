file(REMOVE_RECURSE
  "../../../../../lib/libclangIncludeFixer.a"
  "../../../../../lib/libclangIncludeFixer.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangIncludeFixer.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
