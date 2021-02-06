file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyCppCoreGuidelinesModule.a"
  "../../../../../../lib/libclangTidyCppCoreGuidelinesModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyCppCoreGuidelinesModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
