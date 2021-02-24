file(REMOVE_RECURSE
  "../../../../../lib/libclangDaemon.a"
  "../../../../../lib/libclangDaemon.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangDaemon.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
