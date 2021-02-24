file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyGoogleModule.a"
  "../../../../../../lib/libclangTidyGoogleModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyGoogleModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
