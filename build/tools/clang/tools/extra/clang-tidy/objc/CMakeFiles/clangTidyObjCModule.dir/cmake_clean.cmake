file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyObjCModule.a"
  "../../../../../../lib/libclangTidyObjCModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyObjCModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
