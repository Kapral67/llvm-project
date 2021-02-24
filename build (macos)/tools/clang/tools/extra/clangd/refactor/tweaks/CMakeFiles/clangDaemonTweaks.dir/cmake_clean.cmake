file(REMOVE_RECURSE
  "../../../../../../../lib/libclangDaemonTweaks.a"
  "../../../../../../../lib/libclangDaemonTweaks.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangDaemonTweaks.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
