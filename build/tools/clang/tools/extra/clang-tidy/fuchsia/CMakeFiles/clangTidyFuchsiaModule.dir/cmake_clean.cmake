file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyFuchsiaModule.a"
  "../../../../../../lib/libclangTidyFuchsiaModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyFuchsiaModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
