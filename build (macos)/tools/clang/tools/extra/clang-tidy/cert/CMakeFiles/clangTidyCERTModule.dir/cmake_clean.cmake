file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyCERTModule.a"
  "../../../../../../lib/libclangTidyCERTModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyCERTModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
