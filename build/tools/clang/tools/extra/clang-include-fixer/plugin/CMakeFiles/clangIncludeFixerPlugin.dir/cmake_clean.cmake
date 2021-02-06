file(REMOVE_RECURSE
  "../../../../../../lib/libclangIncludeFixerPlugin.a"
  "../../../../../../lib/libclangIncludeFixerPlugin.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangIncludeFixerPlugin.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
