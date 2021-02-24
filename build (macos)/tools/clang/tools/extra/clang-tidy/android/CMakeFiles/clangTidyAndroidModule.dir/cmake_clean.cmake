file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyAndroidModule.a"
  "../../../../../../lib/libclangTidyAndroidModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyAndroidModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
