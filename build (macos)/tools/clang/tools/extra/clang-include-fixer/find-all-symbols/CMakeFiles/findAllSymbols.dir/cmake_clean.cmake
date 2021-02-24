file(REMOVE_RECURSE
  "../../../../../../lib/libfindAllSymbols.a"
  "../../../../../../lib/libfindAllSymbols.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/findAllSymbols.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
