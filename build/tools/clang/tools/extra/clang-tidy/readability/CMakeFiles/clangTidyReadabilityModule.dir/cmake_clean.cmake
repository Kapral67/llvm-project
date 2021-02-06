file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyReadabilityModule.a"
  "../../../../../../lib/libclangTidyReadabilityModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyReadabilityModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
