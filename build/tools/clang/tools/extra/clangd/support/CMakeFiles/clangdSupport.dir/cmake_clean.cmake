file(REMOVE_RECURSE
  "../../../../../../lib/libclangdSupport.a"
  "../../../../../../lib/libclangdSupport.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangdSupport.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
