file(REMOVE_RECURSE
  "SystemZGenAsmMatcher.inc"
  "SystemZGenAsmWriter.inc"
  "SystemZGenCallingConv.inc"
  "SystemZGenDAGISel.inc"
  "SystemZGenDisassemblerTables.inc"
  "SystemZGenInstrInfo.inc"
  "SystemZGenMCCodeEmitter.inc"
  "SystemZGenRegisterInfo.inc"
  "SystemZGenSubtargetInfo.inc"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/SystemZ.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
