file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyModernizeModule.a"
  "../../../../../../lib/libclangTidyModernizeModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyModernizeModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
