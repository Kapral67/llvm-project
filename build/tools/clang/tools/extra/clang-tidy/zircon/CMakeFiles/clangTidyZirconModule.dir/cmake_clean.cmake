file(REMOVE_RECURSE
  "../../../../../../lib/libclangTidyZirconModule.a"
  "../../../../../../lib/libclangTidyZirconModule.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangTidyZirconModule.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
