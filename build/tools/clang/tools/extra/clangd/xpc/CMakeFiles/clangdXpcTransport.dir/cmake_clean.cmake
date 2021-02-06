file(REMOVE_RECURSE
  "../../../../../../lib/libclangdXpcTransport.a"
  "../../../../../../lib/libclangdXpcTransport.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangdXpcTransport.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
