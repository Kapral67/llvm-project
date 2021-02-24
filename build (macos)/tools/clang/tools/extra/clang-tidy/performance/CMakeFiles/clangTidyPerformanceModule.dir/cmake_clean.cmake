file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyPerformanceModule.a"
  "../../../../../../lib/libclangTidyPerformanceModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyPerformanceModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
