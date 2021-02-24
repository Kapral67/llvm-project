file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyConcurrencyModule.a"
  "../../../../../../lib/libclangTidyConcurrencyModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyConcurrencyModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
