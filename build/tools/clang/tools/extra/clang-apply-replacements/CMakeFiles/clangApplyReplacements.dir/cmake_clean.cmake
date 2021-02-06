file(REMOVE_RECURSE
  "../../../../../lib/libclangApplyReplacements.a"
  "../../../../../lib/libclangApplyReplacements.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangApplyReplacements.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
