file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyMain.a"
  "../../../../../../lib/libclangTidyMain.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyMain.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
