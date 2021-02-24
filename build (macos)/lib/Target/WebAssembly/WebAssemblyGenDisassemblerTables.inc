/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * WebAssembly Disassembler                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "MCTargetDesc/WebAssemblyMCTargetDesc.h"

namespace llvm {

static constexpr int WebAssemblyInstructionTableSize = 256;

enum EntryType : uint8_t { ET_Unused, ET_Prefix, ET_Instruction };

struct WebAssemblyInstruction {
  uint16_t Opcode;
  EntryType ET;
  uint8_t NumOperands;
  uint16_t OperandStart;
};

WebAssemblyInstruction InstructionTable0[] = {
  // 0x0: unreachable
  { 1609, ET_Instruction, 0, 0  },
  // 0x1: nop
  { 1323, ET_Instruction, 0, 0  },
  // 0x2: block   	$sig
  { 605, ET_Instruction, 1, 0  },
  // 0x3: loop    	$sig
  { 1173, ET_Instruction, 1, 0  },
  // 0x4: if    	$sig
  { 977, ET_Instruction, 1, 0  },
  // 0x5: else
  { 713, ET_Instruction, 0, 0  },
  // 0x6: try     	$sig
  { 1607, ET_Instruction, 1, 0  },
  // 0x7: catch   	$tag
  { 623, ET_Instruction, 1, 1  },
  // 0x8: throw   	$tag
  { 1597, ET_Instruction, 1, 1  },
  // 0x9: rethrow 	$depth
  { 1389, ET_Instruction, 1, 2  },
  { 0, ET_Unused, 0, 0  },
  // 0xb: end
  { 723, ET_Instruction, 0, 0  },
  // 0xc: br      	$dst
  { 609, ET_Instruction, 1, 3  },
  // 0xd: br_if   	$dst
  { 608, ET_Instruction, 1, 3  },
  // 0xe: br_table 	$brl
  { 611, ET_Instruction, 1, 4  },
  // 0xf: return
  { 1391, ET_Instruction, 0, 0  },
  // 0x10: call	$callee
  { 619, ET_Instruction, 1, 5  },
  // 0x11: call_indirect	$type
  { 618, ET_Instruction, 2, 6  },
  // 0x12: return_call	$callee
  { 1395, ET_Instruction, 1, 5  },
  // 0x13: return_call_indirect	$type
  { 1394, ET_Instruction, 2, 6  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x1a: drop
  { 699, ET_Instruction, 0, 0  },
  // 0x1b: f32.select
  { 1407, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x20: local.get	$local
  { 1131, ET_Instruction, 1, 8  },
  // 0x21: local.set	$local
  { 1145, ET_Instruction, 1, 8  },
  // 0x22: local.tee	$local
  { 1159, ET_Instruction, 1, 8  },
  // 0x23: global.get	$local
  { 869, ET_Instruction, 1, 9  },
  // 0x24: global.set	$local
  { 883, ET_Instruction, 1, 9  },
  // 0x25: table.get	$table
  { 1569, ET_Instruction, 1, 10  },
  // 0x26: table.set	$table
  { 1577, ET_Instruction, 1, 10  },
  { 0, ET_Unused, 0, 0  },
  // 0x28: i32.load	${off}${p2align}
  { 1095, ET_Instruction, 2, 11  },
  // 0x29: i64.load	${off}${p2align}
  { 1099, ET_Instruction, 2, 11  },
  // 0x2a: f32.load	${off}${p2align}
  { 1087, ET_Instruction, 2, 11  },
  // 0x2b: f64.load	${off}${p2align}
  { 1091, ET_Instruction, 2, 11  },
  // 0x2c: i32.load8_s	${off}${p2align}
  { 1047, ET_Instruction, 2, 11  },
  // 0x2d: i32.load8_u	${off}${p2align}
  { 1055, ET_Instruction, 2, 11  },
  // 0x2e: i32.load16_s	${off}${p2align}
  { 1011, ET_Instruction, 2, 11  },
  // 0x2f: i32.load16_u	${off}${p2align}
  { 1019, ET_Instruction, 2, 11  },
  // 0x30: i64.load8_s	${off}${p2align}
  { 1051, ET_Instruction, 2, 11  },
  // 0x31: i64.load8_u	${off}${p2align}
  { 1059, ET_Instruction, 2, 11  },
  // 0x32: i64.load16_s	${off}${p2align}
  { 1015, ET_Instruction, 2, 11  },
  // 0x33: i64.load16_u	${off}${p2align}
  { 1023, ET_Instruction, 2, 11  },
  // 0x34: i64.load32_s	${off}${p2align}
  { 1031, ET_Instruction, 2, 11  },
  // 0x35: i64.load32_u	${off}${p2align}
  { 1035, ET_Instruction, 2, 11  },
  // 0x36: i32.store	${off}${p2align}
  { 1505, ET_Instruction, 2, 11  },
  // 0x37: i64.store	${off}${p2align}
  { 1509, ET_Instruction, 2, 11  },
  // 0x38: f32.store	${off}${p2align}
  { 1497, ET_Instruction, 2, 11  },
  // 0x39: f64.store	${off}${p2align}
  { 1501, ET_Instruction, 2, 11  },
  // 0x3a: i32.store8	${off}${p2align}
  { 1489, ET_Instruction, 2, 11  },
  // 0x3b: i32.store16	${off}${p2align}
  { 1477, ET_Instruction, 2, 11  },
  // 0x3c: i64.store8	${off}${p2align}
  { 1493, ET_Instruction, 2, 11  },
  // 0x3d: i64.store16	${off}${p2align}
  { 1481, ET_Instruction, 2, 11  },
  // 0x3e: i64.store32	${off}${p2align}
  { 1485, ET_Instruction, 2, 11  },
  // 0x3f: memory.size	$flags
  { 1623, ET_Instruction, 1, 2  },
  // 0x40: memory.grow	$flags
  { 1621, ET_Instruction, 1, 2  },
  // 0x41: i32.const	$imm
  { 641, ET_Instruction, 1, 13  },
  // 0x42: i64.const	$imm
  { 643, ET_Instruction, 1, 14  },
  // 0x43: f32.const	$imm
  { 637, ET_Instruction, 1, 15  },
  // 0x44: f64.const	$imm
  { 639, ET_Instruction, 1, 16  },
  // 0x45: i32.eqz
  { 727, ET_Instruction, 0, 0  },
  // 0x46: i32.eq  
  { 741, ET_Instruction, 0, 0  },
  // 0x47: i32.ne  
  { 1315, ET_Instruction, 0, 0  },
  // 0x48: i32.lt_s
  { 1185, ET_Instruction, 0, 0  },
  // 0x49: i32.lt_u
  { 1195, ET_Instruction, 0, 0  },
  // 0x4a: i32.gt_s
  { 907, ET_Instruction, 0, 0  },
  // 0x4b: i32.gt_u
  { 917, ET_Instruction, 0, 0  },
  // 0x4c: i32.le_s
  { 989, ET_Instruction, 0, 0  },
  // 0x4d: i32.le_u
  { 999, ET_Instruction, 0, 0  },
  // 0x4e: i32.ge_s
  { 851, ET_Instruction, 0, 0  },
  // 0x4f: i32.ge_u
  { 861, ET_Instruction, 0, 0  },
  // 0x50: i64.eqz
  { 729, ET_Instruction, 0, 0  },
  // 0x51: i64.eq  
  { 745, ET_Instruction, 0, 0  },
  // 0x52: i64.ne  
  { 1319, ET_Instruction, 0, 0  },
  // 0x53: i64.lt_s
  { 1189, ET_Instruction, 0, 0  },
  // 0x54: i64.lt_u
  { 1199, ET_Instruction, 0, 0  },
  // 0x55: i64.gt_s
  { 911, ET_Instruction, 0, 0  },
  // 0x56: i64.gt_u
  { 921, ET_Instruction, 0, 0  },
  // 0x57: i64.le_s
  { 993, ET_Instruction, 0, 0  },
  // 0x58: i64.le_u
  { 1003, ET_Instruction, 0, 0  },
  // 0x59: i64.ge_s
  { 855, ET_Instruction, 0, 0  },
  // 0x5a: i64.ge_u
  { 865, ET_Instruction, 0, 0  },
  // 0x5b: f32.eq  
  { 731, ET_Instruction, 0, 0  },
  // 0x5c: f32.ne  
  { 1305, ET_Instruction, 0, 0  },
  // 0x5d: f32.lt  
  { 1175, ET_Instruction, 0, 0  },
  // 0x5e: f32.gt  
  { 897, ET_Instruction, 0, 0  },
  // 0x5f: f32.le  
  { 979, ET_Instruction, 0, 0  },
  // 0x60: f32.ge  
  { 841, ET_Instruction, 0, 0  },
  // 0x61: f64.eq  
  { 735, ET_Instruction, 0, 0  },
  // 0x62: f64.ne  
  { 1309, ET_Instruction, 0, 0  },
  // 0x63: f64.lt  
  { 1179, ET_Instruction, 0, 0  },
  // 0x64: f64.gt  
  { 901, ET_Instruction, 0, 0  },
  // 0x65: f64.le  
  { 983, ET_Instruction, 0, 0  },
  // 0x66: f64.ge  
  { 845, ET_Instruction, 0, 0  },
  // 0x67: i32.clz 
  { 633, ET_Instruction, 0, 0  },
  // 0x68: i32.ctz 
  { 675, ET_Instruction, 0, 0  },
  // 0x69: i32.popcnt
  { 1341, ET_Instruction, 0, 0  },
  // 0x6a: i32.add 
  { 267, ET_Instruction, 0, 0  },
  // 0x6b: i32.sub 
  { 1543, ET_Instruction, 0, 0  },
  // 0x6c: i32.mul 
  { 1265, ET_Instruction, 0, 0  },
  // 0x6d: i32.div_s
  { 689, ET_Instruction, 0, 0  },
  // 0x6e: i32.div_u
  { 693, ET_Instruction, 0, 0  },
  // 0x6f: i32.rem_s
  { 1369, ET_Instruction, 0, 0  },
  // 0x70: i32.rem_u
  { 1373, ET_Instruction, 0, 0  },
  // 0x71: i32.and 
  { 300, ET_Instruction, 0, 0  },
  // 0x72: i32.or  
  { 1328, ET_Instruction, 0, 0  },
  // 0x73: i32.xor 
  { 1616, ET_Instruction, 0, 0  },
  // 0x74: i32.shl 
  { 1421, ET_Instruction, 0, 0  },
  // 0x75: i32.shr_s
  { 1433, ET_Instruction, 0, 0  },
  // 0x76: i32.shr_u
  { 1445, ET_Instruction, 0, 0  },
  // 0x77: i32.rotl
  { 1397, ET_Instruction, 0, 0  },
  // 0x78: i32.rotr
  { 1401, ET_Instruction, 0, 0  },
  // 0x79: i64.clz 
  { 635, ET_Instruction, 0, 0  },
  // 0x7a: i64.ctz 
  { 677, ET_Instruction, 0, 0  },
  // 0x7b: i64.popcnt
  { 1343, ET_Instruction, 0, 0  },
  // 0x7c: i64.add 
  { 271, ET_Instruction, 0, 0  },
  // 0x7d: i64.sub 
  { 1547, ET_Instruction, 0, 0  },
  // 0x7e: i64.mul 
  { 1269, ET_Instruction, 0, 0  },
  // 0x7f: i64.div_s
  { 691, ET_Instruction, 0, 0  },
  // 0x80: i64.div_u
  { 695, ET_Instruction, 0, 0  },
  // 0x81: i64.rem_s
  { 1371, ET_Instruction, 0, 0  },
  // 0x82: i64.rem_u
  { 1375, ET_Instruction, 0, 0  },
  // 0x83: i64.and 
  { 302, ET_Instruction, 0, 0  },
  // 0x84: i64.or  
  { 1330, ET_Instruction, 0, 0  },
  // 0x85: i64.xor 
  { 1618, ET_Instruction, 0, 0  },
  // 0x86: i64.shl 
  { 1425, ET_Instruction, 0, 0  },
  // 0x87: i64.shr_s
  { 1437, ET_Instruction, 0, 0  },
  // 0x88: i64.shr_u
  { 1449, ET_Instruction, 0, 0  },
  // 0x89: i64.rotl
  { 1399, ET_Instruction, 0, 0  },
  // 0x8a: i64.rotr
  { 1403, ET_Instruction, 0, 0  },
  // 0x8b: f32.abs 
  { 241, ET_Instruction, 0, 0  },
  // 0x8c: f32.neg 
  { 1289, ET_Instruction, 0, 0  },
  // 0x8d: f32.ceil
  { 625, ET_Instruction, 0, 0  },
  // 0x8e: f32.floor
  { 817, ET_Instruction, 0, 0  },
  // 0x8f: f32.trunc
  { 1599, ET_Instruction, 0, 0  },
  // 0x90: f32.nearest
  { 1281, ET_Instruction, 0, 0  },
  // 0x91: f32.sqrt
  { 1469, ET_Instruction, 0, 0  },
  // 0x92: f32.add 
  { 257, ET_Instruction, 0, 0  },
  // 0x93: f32.sub 
  { 1533, ET_Instruction, 0, 0  },
  // 0x94: f32.mul 
  { 1255, ET_Instruction, 0, 0  },
  // 0x95: f32.div 
  { 681, ET_Instruction, 0, 0  },
  // 0x96: f32.min 
  { 1235, ET_Instruction, 0, 0  },
  // 0x97: f32.max 
  { 1203, ET_Instruction, 0, 0  },
  // 0x98: f32.copysign
  { 657, ET_Instruction, 0, 0  },
  // 0x99: f64.abs 
  { 245, ET_Instruction, 0, 0  },
  // 0x9a: f64.neg 
  { 1293, ET_Instruction, 0, 0  },
  // 0x9b: f64.ceil
  { 629, ET_Instruction, 0, 0  },
  // 0x9c: f64.floor
  { 821, ET_Instruction, 0, 0  },
  // 0x9d: f64.trunc
  { 1603, ET_Instruction, 0, 0  },
  // 0x9e: f64.nearest
  { 1285, ET_Instruction, 0, 0  },
  // 0x9f: f64.sqrt
  { 1473, ET_Instruction, 0, 0  },
  // 0xa0: f64.add 
  { 261, ET_Instruction, 0, 0  },
  // 0xa1: f64.sub 
  { 1537, ET_Instruction, 0, 0  },
  // 0xa2: f64.mul 
  { 1259, ET_Instruction, 0, 0  },
  // 0xa3: f64.div 
  { 685, ET_Instruction, 0, 0  },
  // 0xa4: f64.min 
  { 1239, ET_Instruction, 0, 0  },
  // 0xa5: f64.max 
  { 1207, ET_Instruction, 0, 0  },
  // 0xa6: f64.copysign
  { 659, ET_Instruction, 0, 0  },
  // 0xa7: i32.wrap_i64
  { 947, ET_Instruction, 0, 0  },
  // 0xa8: i32.trunc_f32_s
  { 931, ET_Instruction, 0, 0  },
  // 0xa9: i32.trunc_f32_u
  { 939, ET_Instruction, 0, 0  },
  // 0xaa: i32.trunc_f64_s
  { 933, ET_Instruction, 0, 0  },
  // 0xab: i32.trunc_f64_u
  { 941, ET_Instruction, 0, 0  },
  // 0xac: i64.extend_i32_s
  { 955, ET_Instruction, 0, 0  },
  // 0xad: i64.extend_i32_u
  { 957, ET_Instruction, 0, 0  },
  // 0xae: i64.trunc_f32_s
  { 961, ET_Instruction, 0, 0  },
  // 0xaf: i64.trunc_f32_u
  { 969, ET_Instruction, 0, 0  },
  // 0xb0: i64.trunc_f64_s
  { 963, ET_Instruction, 0, 0  },
  // 0xb1: i64.trunc_f64_u
  { 971, ET_Instruction, 0, 0  },
  // 0xb2: f32.convert_i32_s
  { 791, ET_Instruction, 0, 0  },
  // 0xb3: f32.convert_i32_u
  { 795, ET_Instruction, 0, 0  },
  // 0xb4: f32.convert_i64_s
  { 793, ET_Instruction, 0, 0  },
  // 0xb5: f32.convert_i64_u
  { 797, ET_Instruction, 0, 0  },
  // 0xb6: f32.demote_f64
  { 799, ET_Instruction, 0, 0  },
  // 0xb7: f64.convert_i32_s
  { 803, ET_Instruction, 0, 0  },
  // 0xb8: f64.convert_i32_u
  { 807, ET_Instruction, 0, 0  },
  // 0xb9: f64.convert_i64_s
  { 805, ET_Instruction, 0, 0  },
  // 0xba: f64.convert_i64_u
  { 809, ET_Instruction, 0, 0  },
  // 0xbb: f64.promote_f32
  { 811, ET_Instruction, 0, 0  },
  // 0xbc: i32.reinterpret_f32
  { 929, ET_Instruction, 0, 0  },
  // 0xbd: i64.reinterpret_f64
  { 959, ET_Instruction, 0, 0  },
  // 0xbe: f32.reinterpret_i32
  { 801, ET_Instruction, 0, 0  },
  // 0xbf: f64.reinterpret_i64
  { 813, ET_Instruction, 0, 0  },
  // 0xc0: i32.extend8_s
  { 927, ET_Instruction, 0, 0  },
  // 0xc1: i32.extend16_s
  { 925, ET_Instruction, 0, 0  },
  // 0xc2: i64.extend8_s
  { 953, ET_Instruction, 0, 0  },
  // 0xc3: i64.extend16_s
  { 949, ET_Instruction, 0, 0  },
  // 0xc4: i64.extend32_s
  { 951, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xd0: ref.null	$heaptype
  { 1365, ET_Instruction, 1, 17  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Prefix, 0, 0  },
  { 0, ET_Prefix, 0, 0  },
  { 0, ET_Prefix, 0, 0  },
  { 0, ET_Unused, 0, 0  },
};

WebAssemblyInstruction InstructionTable252[] = {
  // 0x0: i32.trunc_sat_f32_s
  { 935, ET_Instruction, 0, 0  },
  // 0x1: i32.trunc_sat_f32_u
  { 943, ET_Instruction, 0, 0  },
  // 0x2: i32.trunc_sat_f64_s
  { 937, ET_Instruction, 0, 0  },
  // 0x3: i32.trunc_sat_f64_u
  { 945, ET_Instruction, 0, 0  },
  // 0x4: i64.trunc_sat_f32_s
  { 965, ET_Instruction, 0, 0  },
  // 0x5: i64.trunc_sat_f32_u
  { 973, ET_Instruction, 0, 0  },
  // 0x6: i64.trunc_sat_f64_s
  { 967, ET_Instruction, 0, 0  },
  // 0x7: i64.trunc_sat_f64_u
  { 975, ET_Instruction, 0, 0  },
  // 0x8: memory.init	$seg, $idx
  { 1643, ET_Instruction, 2, 18  },
  // 0x9: data.drop	$seg
  { 1637, ET_Instruction, 1, 13  },
  // 0xa: memory.copy	$src_idx, $dst_idx
  { 1639, ET_Instruction, 2, 18  },
  // 0xb: memory.fill	$idx
  { 1641, ET_Instruction, 1, 13  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xe: table.copy	$table1, $table2
  { 1563, ET_Instruction, 2, 20  },
  // 0xf: table.grow	$table
  { 1573, ET_Instruction, 1, 10  },
  // 0x10: table.size	$table
  { 1581, ET_Instruction, 1, 10  },
  // 0x11: table.fill	$table
  { 1565, ET_Instruction, 1, 10  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
};

WebAssemblyInstruction InstructionTable253[] = {
  // 0x0: v128.load	$off$p2align
  { 1119, ET_Instruction, 2, 11  },
  // 0x1: i16x8.load8x8_s	$off$p2align
  { 1063, ET_Instruction, 2, 11  },
  // 0x2: i16x8.load8x8_u	$off$p2align
  { 1075, ET_Instruction, 2, 11  },
  // 0x3: i32x4.load16x4_s	$off$p2align
  { 1067, ET_Instruction, 2, 11  },
  // 0x4: i32x4.load16x4_u	$off$p2align
  { 1079, ET_Instruction, 2, 11  },
  // 0x5: i64x2.load32x2_s	$off$p2align
  { 1071, ET_Instruction, 2, 11  },
  // 0x6: i64x2.load32x2_u	$off$p2align
  { 1083, ET_Instruction, 2, 11  },
  // 0x7: v128.load8_splat	$off$p2align
  { 1043, ET_Instruction, 2, 11  },
  // 0x8: v128.load16_splat	$off$p2align
  { 1007, ET_Instruction, 2, 11  },
  // 0x9: v128.load32_splat	$off$p2align
  { 1027, ET_Instruction, 2, 11  },
  // 0xa: v128.load64_splat	$off$p2align
  { 1039, ET_Instruction, 2, 11  },
  // 0xb: v128.store	$off$p2align
  { 1529, ET_Instruction, 2, 11  },
  // 0xc: v128.const	$i0, $i1, $i2, $i3
  { 651, ET_Instruction, 4, 22  },
  // 0xd: i8x16.shuffle	$m0, $m1, $m2, $m3, $m4, $m5, $m6, $m7, $m8, $m9, $mA, $mB, $mC, $mD, $mE, $mF
  { 1455, ET_Instruction, 16, 26  },
  // 0xe: i8x16.swizzle
  { 1561, ET_Instruction, 0, 0  },
  // 0xf: i8x16.splat
  { 1467, ET_Instruction, 0, 0  },
  // 0x10: i16x8.splat
  { 1461, ET_Instruction, 0, 0  },
  // 0x11: i32x4.splat
  { 1463, ET_Instruction, 0, 0  },
  // 0x12: i64x2.splat
  { 1465, ET_Instruction, 0, 0  },
  // 0x13: f32x4.splat
  { 1457, ET_Instruction, 0, 0  },
  // 0x14: f64x2.splat
  { 1459, ET_Instruction, 0, 0  },
  // 0x15: i8x16.extract_lane_s	$idx
  { 787, ET_Instruction, 1, 26  },
  // 0x16: i8x16.extract_lane_u	$idx
  { 789, ET_Instruction, 1, 26  },
  // 0x17: i8x16.replace_lane	$idx
  { 1387, ET_Instruction, 1, 26  },
  // 0x18: i16x8.extract_lane_s	$idx
  { 779, ET_Instruction, 1, 26  },
  // 0x19: i16x8.extract_lane_u	$idx
  { 781, ET_Instruction, 1, 26  },
  // 0x1a: i16x8.replace_lane	$idx
  { 1381, ET_Instruction, 1, 26  },
  // 0x1b: i32x4.extract_lane	$idx
  { 783, ET_Instruction, 1, 26  },
  // 0x1c: i32x4.replace_lane	$idx
  { 1383, ET_Instruction, 1, 26  },
  // 0x1d: i64x2.extract_lane	$idx
  { 785, ET_Instruction, 1, 26  },
  // 0x1e: i64x2.replace_lane	$idx
  { 1385, ET_Instruction, 1, 26  },
  // 0x1f: f32x4.extract_lane	$idx
  { 775, ET_Instruction, 1, 26  },
  // 0x20: f32x4.replace_lane	$idx
  { 1377, ET_Instruction, 1, 26  },
  // 0x21: f64x2.extract_lane	$idx
  { 777, ET_Instruction, 1, 26  },
  // 0x22: f64x2.replace_lane	$idx
  { 1379, ET_Instruction, 1, 26  },
  // 0x23: i8x16.eq
  { 747, ET_Instruction, 0, 0  },
  // 0x24: i8x16.ne
  { 1321, ET_Instruction, 0, 0  },
  // 0x25: i8x16.lt_s
  { 1191, ET_Instruction, 0, 0  },
  // 0x26: i8x16.lt_u
  { 1201, ET_Instruction, 0, 0  },
  // 0x27: i8x16.gt_s
  { 913, ET_Instruction, 0, 0  },
  // 0x28: i8x16.gt_u
  { 923, ET_Instruction, 0, 0  },
  // 0x29: i8x16.le_s
  { 995, ET_Instruction, 0, 0  },
  // 0x2a: i8x16.le_u
  { 1005, ET_Instruction, 0, 0  },
  // 0x2b: i8x16.ge_s
  { 857, ET_Instruction, 0, 0  },
  // 0x2c: i8x16.ge_u
  { 867, ET_Instruction, 0, 0  },
  // 0x2d: i16x8.eq
  { 739, ET_Instruction, 0, 0  },
  // 0x2e: i16x8.ne
  { 1313, ET_Instruction, 0, 0  },
  // 0x2f: i16x8.lt_s
  { 1183, ET_Instruction, 0, 0  },
  // 0x30: i16x8.lt_u
  { 1193, ET_Instruction, 0, 0  },
  // 0x31: i16x8.gt_s
  { 905, ET_Instruction, 0, 0  },
  // 0x32: i16x8.gt_u
  { 915, ET_Instruction, 0, 0  },
  // 0x33: i16x8.le_s
  { 987, ET_Instruction, 0, 0  },
  // 0x34: i16x8.le_u
  { 997, ET_Instruction, 0, 0  },
  // 0x35: i16x8.ge_s
  { 849, ET_Instruction, 0, 0  },
  // 0x36: i16x8.ge_u
  { 859, ET_Instruction, 0, 0  },
  // 0x37: i32x4.eq
  { 743, ET_Instruction, 0, 0  },
  // 0x38: i32x4.ne
  { 1317, ET_Instruction, 0, 0  },
  // 0x39: i32x4.lt_s
  { 1187, ET_Instruction, 0, 0  },
  // 0x3a: i32x4.lt_u
  { 1197, ET_Instruction, 0, 0  },
  // 0x3b: i32x4.gt_s
  { 909, ET_Instruction, 0, 0  },
  // 0x3c: i32x4.gt_u
  { 919, ET_Instruction, 0, 0  },
  // 0x3d: i32x4.le_s
  { 991, ET_Instruction, 0, 0  },
  // 0x3e: i32x4.le_u
  { 1001, ET_Instruction, 0, 0  },
  // 0x3f: i32x4.ge_s
  { 853, ET_Instruction, 0, 0  },
  // 0x40: i32x4.ge_u
  { 863, ET_Instruction, 0, 0  },
  // 0x41: f32x4.eq
  { 733, ET_Instruction, 0, 0  },
  // 0x42: f32x4.ne
  { 1307, ET_Instruction, 0, 0  },
  // 0x43: f32x4.lt
  { 1177, ET_Instruction, 0, 0  },
  // 0x44: f32x4.gt
  { 899, ET_Instruction, 0, 0  },
  // 0x45: f32x4.le
  { 981, ET_Instruction, 0, 0  },
  // 0x46: f32x4.ge
  { 843, ET_Instruction, 0, 0  },
  // 0x47: f64x2.eq
  { 737, ET_Instruction, 0, 0  },
  // 0x48: f64x2.ne
  { 1311, ET_Instruction, 0, 0  },
  // 0x49: f64x2.lt
  { 1181, ET_Instruction, 0, 0  },
  // 0x4a: f64x2.gt
  { 903, ET_Instruction, 0, 0  },
  // 0x4b: f64x2.le
  { 985, ET_Instruction, 0, 0  },
  // 0x4c: f64x2.ge
  { 847, ET_Instruction, 0, 0  },
  // 0x4d: v128.not
  { 1325, ET_Instruction, 0, 0  },
  // 0x4e: v128.and
  { 303, ET_Instruction, 0, 0  },
  // 0x4f: v128.andnot
  { 298, ET_Instruction, 0, 0  },
  // 0x50: v128.or
  { 1331, ET_Instruction, 0, 0  },
  // 0x51: v128.xor
  { 1619, ET_Instruction, 0, 0  },
  // 0x52: v128.bitselect
  { 603, ET_Instruction, 0, 0  },
  // 0x53: f64x2.convert_low_i32x4_s
  { 1657, ET_Instruction, 0, 0  },
  // 0x54: f64x2.convert_low_i32x4_u
  { 1659, ET_Instruction, 0, 0  },
  // 0x55: i32x4.trunc_sat_zero_f64x2_s
  { 1673, ET_Instruction, 0, 0  },
  // 0x56: i32x4.trunc_sat_zero_f64x2_u
  { 1675, ET_Instruction, 0, 0  },
  // 0x57: f32x4.demote_zero_f64x2
  { 1661, ET_Instruction, 0, 0  },
  // 0x58: v128.load8_lane	$off$p2align, $idx
  { 1115, ET_Instruction, 3, 42  },
  // 0x59: v128.load16_lane	$off$p2align, $idx
  { 1103, ET_Instruction, 3, 42  },
  // 0x5a: v128.load32_lane	$off$p2align, $idx
  { 1107, ET_Instruction, 3, 42  },
  // 0x5b: v128.load64_lane	$off$p2align, $idx
  { 1111, ET_Instruction, 3, 42  },
  // 0x5c: v128.store8_lane	$off$p2align, $idx
  { 1525, ET_Instruction, 3, 42  },
  // 0x5d: v128.store16_lane	$off$p2align, $idx
  { 1513, ET_Instruction, 3, 42  },
  // 0x5e: v128.store32_lane	$off$p2align, $idx
  { 1517, ET_Instruction, 3, 42  },
  // 0x5f: v128.store64_lane	$off$p2align, $idx
  { 1521, ET_Instruction, 3, 42  },
  // 0x60: i8x16.abs
  { 255, ET_Instruction, 0, 0  },
  // 0x61: i8x16.neg
  { 1303, ET_Instruction, 0, 0  },
  // 0x62: i8x16.any_true
  { 311, ET_Instruction, 0, 0  },
  // 0x63: i8x16.all_true
  { 295, ET_Instruction, 0, 0  },
  // 0x64: i8x16.bitmask
  { 601, ET_Instruction, 0, 0  },
  // 0x65: i8x16.narrow_i16x8_s
  { 1275, ET_Instruction, 0, 0  },
  // 0x66: i8x16.narrow_i16x8_u
  { 1279, ET_Instruction, 0, 0  },
  // 0x67: i32x4.widen_i8x16_s	$idx
  { 1611, ET_Instruction, 1, 26  },
  // 0x68: i32x4.widen_i8x16_u	$idx
  { 1613, ET_Instruction, 1, 26  },
  // 0x69: f64x2.promote_low_f32x4
  { 1671, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x6b: i8x16.shl
  { 1429, ET_Instruction, 0, 0  },
  // 0x6c: i8x16.shr_s
  { 1441, ET_Instruction, 0, 0  },
  // 0x6d: i8x16.shr_u
  { 1453, ET_Instruction, 0, 0  },
  // 0x6e: i8x16.add
  { 275, ET_Instruction, 0, 0  },
  // 0x6f: i8x16.add_saturate_s
  { 279, ET_Instruction, 0, 0  },
  // 0x70: i8x16.add_saturate_u
  { 283, ET_Instruction, 0, 0  },
  // 0x71: i8x16.sub
  { 1551, ET_Instruction, 0, 0  },
  // 0x72: i8x16.sub_saturate_s
  { 1555, ET_Instruction, 0, 0  },
  // 0x73: i8x16.sub_saturate_u
  { 1559, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x76: i8x16.min_s
  { 1247, ET_Instruction, 0, 0  },
  // 0x77: i8x16.min_u
  { 1253, ET_Instruction, 0, 0  },
  // 0x78: i8x16.max_s
  { 1215, ET_Instruction, 0, 0  },
  // 0x79: i8x16.max_u
  { 1221, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x7b: i8x16.avgr_u
  { 593, ET_Instruction, 0, 0  },
  // 0x7c: i8x16.popcnt
  { 1345, ET_Instruction, 0, 0  },
  // 0x7d: i8x16.signselect
  { 1629, ET_Instruction, 0, 0  },
  // 0x7e: i16x8.signselect
  { 1631, ET_Instruction, 0, 0  },
  // 0x7f: i32x4.signselect
  { 1633, ET_Instruction, 0, 0  },
  // 0x80: i16x8.abs
  { 249, ET_Instruction, 0, 0  },
  // 0x81: i16x8.neg
  { 1297, ET_Instruction, 0, 0  },
  // 0x82: i16x8.any_true
  { 305, ET_Instruction, 0, 0  },
  // 0x83: i16x8.all_true
  { 289, ET_Instruction, 0, 0  },
  // 0x84: i16x8.bitmask
  { 595, ET_Instruction, 0, 0  },
  // 0x85: i16x8.narrow_i32x4_s
  { 1273, ET_Instruction, 0, 0  },
  // 0x86: i16x8.narrow_i32x4_u
  { 1277, ET_Instruction, 0, 0  },
  // 0x87: i16x8.widen_low_i8x16_s
  { 1697, ET_Instruction, 0, 0  },
  // 0x88: i16x8.widen_high_i8x16_s
  { 1689, ET_Instruction, 0, 0  },
  // 0x89: i16x8.widen_low_i8x16_u
  { 1701, ET_Instruction, 0, 0  },
  // 0x8a: i16x8.widen_high_i8x16_u
  { 1693, ET_Instruction, 0, 0  },
  // 0x8b: i16x8.shl
  { 1419, ET_Instruction, 0, 0  },
  // 0x8c: i16x8.shr_s
  { 1431, ET_Instruction, 0, 0  },
  // 0x8d: i16x8.shr_u
  { 1443, ET_Instruction, 0, 0  },
  // 0x8e: i16x8.add
  { 265, ET_Instruction, 0, 0  },
  // 0x8f: i16x8.add_saturate_s
  { 277, ET_Instruction, 0, 0  },
  // 0x90: i16x8.add_saturate_u
  { 281, ET_Instruction, 0, 0  },
  // 0x91: i16x8.sub
  { 1541, ET_Instruction, 0, 0  },
  // 0x92: i16x8.sub_saturate_s
  { 1553, ET_Instruction, 0, 0  },
  // 0x93: i16x8.sub_saturate_u
  { 1557, ET_Instruction, 0, 0  },
  // 0x94: i64x2.signselect
  { 1635, ET_Instruction, 0, 0  },
  // 0x95: i16x8.mul
  { 1263, ET_Instruction, 0, 0  },
  // 0x96: i16x8.min_s
  { 1243, ET_Instruction, 0, 0  },
  // 0x97: i16x8.min_u
  { 1249, ET_Instruction, 0, 0  },
  // 0x98: i16x8.max_s
  { 1211, ET_Instruction, 0, 0  },
  // 0x99: i16x8.max_u
  { 1217, ET_Instruction, 0, 0  },
  // 0x9a: i16x8.extmul_low_i8x16_s
  { 763, ET_Instruction, 0, 0  },
  // 0x9b: i16x8.avgr_u
  { 591, ET_Instruction, 0, 0  },
  // 0x9c: i16x8.q15mulr_sat_s
  { 1355, ET_Instruction, 0, 0  },
  // 0x9d: i16x8.extmul_high_i8x16_s
  { 751, ET_Instruction, 0, 0  },
  // 0x9e: i16x8.extmul_low_i8x16_u
  { 769, ET_Instruction, 0, 0  },
  // 0x9f: i16x8.extmul_high_i8x16_u
  { 757, ET_Instruction, 0, 0  },
  // 0xa0: i32x4.abs
  { 251, ET_Instruction, 0, 0  },
  // 0xa1: i32x4.neg
  { 1299, ET_Instruction, 0, 0  },
  // 0xa2: i32x4.any_true
  { 307, ET_Instruction, 0, 0  },
  // 0xa3: i32x4.all_true
  { 291, ET_Instruction, 0, 0  },
  // 0xa4: i32x4.bitmask
  { 597, ET_Instruction, 0, 0  },
  // 0xa5: i32x4.extadd_pairwise_i16x8_s
  { 1665, ET_Instruction, 0, 0  },
  // 0xa6: i32x4.extadd_pairwise_i16x8_u
  { 1669, ET_Instruction, 0, 0  },
  // 0xa7: i32x4.widen_low_i16x8_s
  { 1699, ET_Instruction, 0, 0  },
  // 0xa8: i32x4.widen_high_i16x8_s
  { 1691, ET_Instruction, 0, 0  },
  // 0xa9: i32x4.widen_low_i16x8_u
  { 1703, ET_Instruction, 0, 0  },
  // 0xaa: i32x4.widen_high_i16x8_u
  { 1695, ET_Instruction, 0, 0  },
  // 0xab: i32x4.shl
  { 1423, ET_Instruction, 0, 0  },
  // 0xac: i32x4.shr_s
  { 1435, ET_Instruction, 0, 0  },
  // 0xad: i32x4.shr_u
  { 1447, ET_Instruction, 0, 0  },
  // 0xae: i32x4.add
  { 269, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xb1: i32x4.sub
  { 1545, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xb4: f32x4.qfma
  { 1357, ET_Instruction, 0, 0  },
  // 0xb5: i32x4.mul
  { 1267, ET_Instruction, 0, 0  },
  // 0xb6: i32x4.min_s
  { 1245, ET_Instruction, 0, 0  },
  // 0xb7: i32x4.min_u
  { 1251, ET_Instruction, 0, 0  },
  // 0xb8: i32x4.max_s
  { 1213, ET_Instruction, 0, 0  },
  // 0xb9: i32x4.max_u
  { 1219, ET_Instruction, 0, 0  },
  // 0xba: i32x4.dot_i16x8_s
  { 697, ET_Instruction, 0, 0  },
  // 0xbb: i32x4.extmul_low_i16x8_s
  { 765, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xbd: i32x4.extmul_high_i16x8_s
  { 753, ET_Instruction, 0, 0  },
  // 0xbe: i32x4.extmul_low_i16x8_u
  { 771, ET_Instruction, 0, 0  },
  // 0xbf: i32x4.extmul_high_i16x8_u
  { 759, ET_Instruction, 0, 0  },
  // 0xc0: i64x2.eq
  { 749, ET_Instruction, 0, 0  },
  // 0xc1: i64x2.neg
  { 1301, ET_Instruction, 0, 0  },
  // 0xc2: i64x2.any_true
  { 309, ET_Instruction, 0, 0  },
  // 0xc3: i64x2.all_true
  { 293, ET_Instruction, 0, 0  },
  // 0xc4: i64x2.bitmask
  { 599, ET_Instruction, 0, 0  },
  // 0xc5: prefetch.t	$off$p2align
  { 1351, ET_Instruction, 2, 11  },
  // 0xc6: prefetch.nt	$off$p2align
  { 1347, ET_Instruction, 2, 11  },
  // 0xc7: i64x2.widen_low_i32x4_s
  { 1681, ET_Instruction, 0, 0  },
  // 0xc8: i64x2.widen_high_i32x4_s
  { 1677, ET_Instruction, 0, 0  },
  // 0xc9: i64x2.widen_low_i32x4_u
  { 1683, ET_Instruction, 0, 0  },
  // 0xca: i64x2.widen_high_i32x4_u
  { 1679, ET_Instruction, 0, 0  },
  // 0xcb: i64x2.shl
  { 1427, ET_Instruction, 0, 0  },
  // 0xcc: i64x2.shr_s
  { 1439, ET_Instruction, 0, 0  },
  // 0xcd: i64x2.shr_u
  { 1451, ET_Instruction, 0, 0  },
  // 0xce: i64x2.add
  { 273, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xd1: i64x2.sub
  { 1549, ET_Instruction, 0, 0  },
  // 0xd2: i64x2.extmul_low_i32x4_s
  { 767, ET_Instruction, 0, 0  },
  // 0xd3: i64x2.extmul_high_i32x4_s
  { 755, ET_Instruction, 0, 0  },
  // 0xd4: f32x4.qfms
  { 1361, ET_Instruction, 0, 0  },
  // 0xd5: i64x2.mul
  { 1271, ET_Instruction, 0, 0  },
  // 0xd6: i64x2.extmul_low_i32x4_u
  { 773, ET_Instruction, 0, 0  },
  // 0xd7: i64x2.extmul_high_i32x4_u
  { 761, ET_Instruction, 0, 0  },
  // 0xd8: f32x4.ceil
  { 627, ET_Instruction, 0, 0  },
  // 0xd9: f32x4.floor
  { 819, ET_Instruction, 0, 0  },
  // 0xda: f32x4.trunc
  { 1601, ET_Instruction, 0, 0  },
  // 0xdb: f32x4.nearest
  { 1283, ET_Instruction, 0, 0  },
  // 0xdc: f64x2.ceil
  { 631, ET_Instruction, 0, 0  },
  // 0xdd: f64x2.floor
  { 823, ET_Instruction, 0, 0  },
  // 0xde: f64x2.trunc
  { 1605, ET_Instruction, 0, 0  },
  // 0xdf: f64x2.nearest
  { 1287, ET_Instruction, 0, 0  },
  // 0xe0: f32x4.abs
  { 243, ET_Instruction, 0, 0  },
  // 0xe1: f32x4.neg
  { 1291, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xe3: f32x4.sqrt
  { 1471, ET_Instruction, 0, 0  },
  // 0xe4: f32x4.add
  { 259, ET_Instruction, 0, 0  },
  // 0xe5: f32x4.sub
  { 1535, ET_Instruction, 0, 0  },
  // 0xe6: f32x4.mul
  { 1257, ET_Instruction, 0, 0  },
  // 0xe7: f32x4.div
  { 683, ET_Instruction, 0, 0  },
  // 0xe8: f32x4.min
  { 1237, ET_Instruction, 0, 0  },
  // 0xe9: f32x4.max
  { 1205, ET_Instruction, 0, 0  },
  // 0xea: f32x4.pmin
  { 1337, ET_Instruction, 0, 0  },
  // 0xeb: f32x4.pmax
  { 1333, ET_Instruction, 0, 0  },
  // 0xec: f64x2.abs
  { 247, ET_Instruction, 0, 0  },
  // 0xed: f64x2.neg
  { 1295, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xef: f64x2.sqrt
  { 1475, ET_Instruction, 0, 0  },
  // 0xf0: f64x2.add
  { 263, ET_Instruction, 0, 0  },
  // 0xf1: f64x2.sub
  { 1539, ET_Instruction, 0, 0  },
  // 0xf2: f64x2.mul
  { 1261, ET_Instruction, 0, 0  },
  // 0xf3: f64x2.div
  { 687, ET_Instruction, 0, 0  },
  // 0xf4: f64x2.min
  { 1241, ET_Instruction, 0, 0  },
  // 0xf5: f64x2.max
  { 1209, ET_Instruction, 0, 0  },
  // 0xf6: f64x2.pmin
  { 1339, ET_Instruction, 0, 0  },
  // 0xf7: f64x2.pmax
  { 1335, ET_Instruction, 0, 0  },
  // 0xf8: i32x4.trunc_sat_f32x4_s
  { 1653, ET_Instruction, 0, 0  },
  // 0xf9: i32x4.trunc_sat_f32x4_u
  { 1655, ET_Instruction, 0, 0  },
  // 0xfa: f32x4.convert_i32x4_s
  { 1685, ET_Instruction, 0, 0  },
  // 0xfb: f32x4.convert_i32x4_u
  { 1687, ET_Instruction, 0, 0  },
  // 0xfc: v128.load32_zero	$off$p2align
  { 1123, ET_Instruction, 2, 11  },
  // 0xfd: v128.load64_zero	$off$p2align
  { 1127, ET_Instruction, 2, 11  },
  // 0xfe: f64x2.qfma
  { 1359, ET_Instruction, 0, 0  },
  // 0xff: f64x2.qfms
  { 1363, ET_Instruction, 0, 0  },
};

WebAssemblyInstruction InstructionTable254[] = {
  // 0x0: memory.atomic.notify 	${off}${p2align}
  { 1223, ET_Instruction, 2, 11  },
  // 0x1: memory.atomic.wait32 	${off}${p2align}
  { 1227, ET_Instruction, 2, 11  },
  // 0x2: memory.atomic.wait64 	${off}${p2align}
  { 1231, ET_Instruction, 2, 11  },
  // 0x3: atomic.fence
  { 337, ET_Instruction, 1, 2  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x10: i32.atomic.load	${off}${p2align}
  { 359, ET_Instruction, 2, 11  },
  // 0x11: i64.atomic.load	${off}${p2align}
  { 363, ET_Instruction, 2, 11  },
  // 0x12: i32.atomic.load8_u	${off}${p2align}
  { 351, ET_Instruction, 2, 11  },
  // 0x13: i32.atomic.load16_u	${off}${p2align}
  { 339, ET_Instruction, 2, 11  },
  // 0x14: i64.atomic.load8_u	${off}${p2align}
  { 355, ET_Instruction, 2, 11  },
  // 0x15: i64.atomic.load16_u	${off}${p2align}
  { 343, ET_Instruction, 2, 11  },
  // 0x16: i64.atomic.load32_u	${off}${p2align}
  { 347, ET_Instruction, 2, 11  },
  // 0x17: i32.atomic.store	${off}${p2align}
  { 583, ET_Instruction, 2, 11  },
  // 0x18: i64.atomic.store	${off}${p2align}
  { 587, ET_Instruction, 2, 11  },
  // 0x19: i32.atomic.store8	${off}${p2align}
  { 575, ET_Instruction, 2, 11  },
  // 0x1a: i32.atomic.store16	${off}${p2align}
  { 563, ET_Instruction, 2, 11  },
  // 0x1b: i64.atomic.store8	${off}${p2align}
  { 579, ET_Instruction, 2, 11  },
  // 0x1c: i64.atomic.store16	${off}${p2align}
  { 567, ET_Instruction, 2, 11  },
  // 0x1d: i64.atomic.store32	${off}${p2align}
  { 571, ET_Instruction, 2, 11  },
  // 0x1e: i32.atomic.rmw.add	${off}${p2align}
  { 507, ET_Instruction, 2, 11  },
  // 0x1f: i64.atomic.rmw.add	${off}${p2align}
  { 511, ET_Instruction, 2, 11  },
  // 0x20: i32.atomic.rmw8.add_u	${off}${p2align}
  { 451, ET_Instruction, 2, 11  },
  // 0x21: i32.atomic.rmw16.add_u	${off}${p2align}
  { 367, ET_Instruction, 2, 11  },
  // 0x22: i64.atomic.rmw8.add_u	${off}${p2align}
  { 455, ET_Instruction, 2, 11  },
  // 0x23: i64.atomic.rmw16.add_u	${off}${p2align}
  { 371, ET_Instruction, 2, 11  },
  // 0x24: i64.atomic.rmw32.add_u	${off}${p2align}
  { 423, ET_Instruction, 2, 11  },
  // 0x25: i32.atomic.rmw.sub	${off}${p2align}
  { 539, ET_Instruction, 2, 11  },
  // 0x26: i64.atomic.rmw.sub	${off}${p2align}
  { 543, ET_Instruction, 2, 11  },
  // 0x27: i32.atomic.rmw8.sub_u	${off}${p2align}
  { 483, ET_Instruction, 2, 11  },
  // 0x28: i32.atomic.rmw16.sub_u	${off}${p2align}
  { 399, ET_Instruction, 2, 11  },
  // 0x29: i64.atomic.rmw8.sub_u	${off}${p2align}
  { 487, ET_Instruction, 2, 11  },
  // 0x2a: i64.atomic.rmw16.sub_u	${off}${p2align}
  { 403, ET_Instruction, 2, 11  },
  // 0x2b: i64.atomic.rmw32.sub_u	${off}${p2align}
  { 439, ET_Instruction, 2, 11  },
  // 0x2c: i32.atomic.rmw.and	${off}${p2align}
  { 515, ET_Instruction, 2, 11  },
  // 0x2d: i64.atomic.rmw.and	${off}${p2align}
  { 519, ET_Instruction, 2, 11  },
  // 0x2e: i32.atomic.rmw8.and_u	${off}${p2align}
  { 459, ET_Instruction, 2, 11  },
  // 0x2f: i32.atomic.rmw16.and_u	${off}${p2align}
  { 375, ET_Instruction, 2, 11  },
  // 0x30: i64.atomic.rmw8.and_u	${off}${p2align}
  { 463, ET_Instruction, 2, 11  },
  // 0x31: i64.atomic.rmw16.and_u	${off}${p2align}
  { 379, ET_Instruction, 2, 11  },
  // 0x32: i64.atomic.rmw32.and_u	${off}${p2align}
  { 427, ET_Instruction, 2, 11  },
  // 0x33: i32.atomic.rmw.or	${off}${p2align}
  { 531, ET_Instruction, 2, 11  },
  // 0x34: i64.atomic.rmw.or	${off}${p2align}
  { 535, ET_Instruction, 2, 11  },
  // 0x35: i32.atomic.rmw8.or_u	${off}${p2align}
  { 475, ET_Instruction, 2, 11  },
  // 0x36: i32.atomic.rmw16.or_u	${off}${p2align}
  { 391, ET_Instruction, 2, 11  },
  // 0x37: i64.atomic.rmw8.or_u	${off}${p2align}
  { 479, ET_Instruction, 2, 11  },
  // 0x38: i64.atomic.rmw16.or_u	${off}${p2align}
  { 395, ET_Instruction, 2, 11  },
  // 0x39: i64.atomic.rmw32.or_u	${off}${p2align}
  { 435, ET_Instruction, 2, 11  },
  // 0x3a: i32.atomic.rmw.xor	${off}${p2align}
  { 555, ET_Instruction, 2, 11  },
  // 0x3b: i64.atomic.rmw.xor	${off}${p2align}
  { 559, ET_Instruction, 2, 11  },
  // 0x3c: i32.atomic.rmw8.xor_u	${off}${p2align}
  { 499, ET_Instruction, 2, 11  },
  // 0x3d: i32.atomic.rmw16.xor_u	${off}${p2align}
  { 415, ET_Instruction, 2, 11  },
  // 0x3e: i64.atomic.rmw8.xor_u	${off}${p2align}
  { 503, ET_Instruction, 2, 11  },
  // 0x3f: i64.atomic.rmw16.xor_u	${off}${p2align}
  { 419, ET_Instruction, 2, 11  },
  // 0x40: i64.atomic.rmw32.xor_u	${off}${p2align}
  { 447, ET_Instruction, 2, 11  },
  // 0x41: i32.atomic.rmw.xchg	${off}${p2align}
  { 547, ET_Instruction, 2, 11  },
  // 0x42: i64.atomic.rmw.xchg	${off}${p2align}
  { 551, ET_Instruction, 2, 11  },
  // 0x43: i32.atomic.rmw8.xchg_u	${off}${p2align}
  { 491, ET_Instruction, 2, 11  },
  // 0x44: i32.atomic.rmw16.xchg_u	${off}${p2align}
  { 407, ET_Instruction, 2, 11  },
  // 0x45: i64.atomic.rmw8.xchg_u	${off}${p2align}
  { 495, ET_Instruction, 2, 11  },
  // 0x46: i64.atomic.rmw16.xchg_u	${off}${p2align}
  { 411, ET_Instruction, 2, 11  },
  // 0x47: i64.atomic.rmw32.xchg_u	${off}${p2align}
  { 443, ET_Instruction, 2, 11  },
  // 0x48: i32.atomic.rmw.cmpxchg	${off}${p2align}
  { 523, ET_Instruction, 2, 11  },
  // 0x49: i64.atomic.rmw.cmpxchg	${off}${p2align}
  { 527, ET_Instruction, 2, 11  },
  // 0x4a: i32.atomic.rmw8.cmpxchg_u	${off}${p2align}
  { 467, ET_Instruction, 2, 11  },
  // 0x4b: i32.atomic.rmw16.cmpxchg_u	${off}${p2align}
  { 383, ET_Instruction, 2, 11  },
  // 0x4c: i64.atomic.rmw8.cmpxchg_u	${off}${p2align}
  { 471, ET_Instruction, 2, 11  },
  // 0x4d: i64.atomic.rmw16.cmpxchg_u	${off}${p2align}
  { 387, ET_Instruction, 2, 11  },
  // 0x4e: i64.atomic.rmw32.cmpxchg_u	${off}${p2align}
  { 431, ET_Instruction, 2, 11  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xff: compiler_fence
  { 237, ET_Instruction, 0, 0  },
};

const uint8_t OperandTable[] = {
  WebAssembly::OPERAND_SIGNATURE,
  WebAssembly::OPERAND_EVENT,
  MCOI::OPERAND_IMMEDIATE,
  WebAssembly::OPERAND_BASIC_BLOCK,
  WebAssembly::OPERAND_BRLIST,
  WebAssembly::OPERAND_FUNCTION32,
  WebAssembly::OPERAND_TYPEINDEX,
  MCOI::OPERAND_IMMEDIATE,
  WebAssembly::OPERAND_LOCAL,
  WebAssembly::OPERAND_GLOBAL,
  WebAssembly::OPERAND_TABLE,
  WebAssembly::OPERAND_P2ALIGN,
  WebAssembly::OPERAND_OFFSET32,
  WebAssembly::OPERAND_I32IMM,
  WebAssembly::OPERAND_I64IMM,
  WebAssembly::OPERAND_F32IMM,
  WebAssembly::OPERAND_F64IMM,
  WebAssembly::OPERAND_HEAPTYPE,
  WebAssembly::OPERAND_I32IMM,
  WebAssembly::OPERAND_I32IMM,
  WebAssembly::OPERAND_TABLE,
  WebAssembly::OPERAND_TABLE,
  WebAssembly::OPERAND_VEC_I32IMM,
  WebAssembly::OPERAND_VEC_I32IMM,
  WebAssembly::OPERAND_VEC_I32IMM,
  WebAssembly::OPERAND_VEC_I32IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_P2ALIGN,
  WebAssembly::OPERAND_OFFSET32,
  WebAssembly::OPERAND_VEC_I8IMM,
};

struct { uint8_t Prefix; const WebAssemblyInstruction *Table; }
PrefixTable[] = {
  { 252, InstructionTable252 },
  { 253, InstructionTable253 },
  { 254, InstructionTable254 },
  { 0, nullptr }
};

} // end namespace llvm
