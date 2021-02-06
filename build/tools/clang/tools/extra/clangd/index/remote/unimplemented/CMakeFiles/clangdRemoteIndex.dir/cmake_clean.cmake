file(REMOVE_RECURSE
  "../../../../../../../../lib/libclangdRemoteIndex.a"
  "../../../../../../../../lib/libclangdRemoteIndex.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangdRemoteIndex.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
