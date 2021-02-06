file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyPlugin.a"
  "../../../../../../lib/libclangTidyPlugin.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyPlugin.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
