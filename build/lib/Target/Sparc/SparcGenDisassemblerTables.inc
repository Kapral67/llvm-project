/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Sparc Disassembler                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper functions for extracting fields from encoded instructions.
// InsnType must either be integral or an APInt-like object that must:
// * Have a static const max_size_in_bits equal to the number of bits in the
//   encoding.
// * be default-constructible and copy-constructible
// * be constructible from a uint64_t
// * be constructible from an APInt (this can be private)
// * Support getBitsSet(loBit, hiBit)
// * be convertible to uint64_t
// * Support the ~, &, ==, !=, and |= operators with other objects of the same type
// * Support shift (<<, >>) with signed and unsigned integers on the RHS
// * Support put (<<) to raw_ostream&
template <typename InsnType>
#if defined(_MSC_VER) && !defined(__clang__)
__declspec(noinline)
#endif
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits, std::true_type) {
  assert(startBit + numBits <= 64 && "Cannot support >64-bit extractions!");
  assert(startBit + numBits <= (sizeof(InsnType) * 8) &&
         "Instruction field out of bounds!");
  InsnType fieldMask;
  if (numBits == sizeof(InsnType) * 8)
    fieldMask = (InsnType)(-1LL);
  else
    fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
  return (insn & fieldMask) >> startBit;
}

template <typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits, std::false_type) {
  assert(startBit + numBits <= InsnType::max_size_in_bits && "Instruction field out of bounds!");
  InsnType fieldMask = InsnType::getBitsSet(0, numBits);
  return (insn >> startBit) & fieldMask;
}

template <typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
  return fieldFromInstruction(insn, startBit, numBits, std::is_integral<InsnType>());
}

static const uint8_t DecoderTableSparc32[] = {
/* 0 */       MCD::OPC_ExtractField, 30, 2,  // Inst{31-30} ...
/* 3 */       MCD::OPC_FilterValue, 0, 155, 2, 0, // Skip to: 675
/* 8 */       MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 11 */      MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 27
/* 16 */      MCD::OPC_CheckField, 25, 5, 0, 16, 31, 0, // Skip to: 7975
/* 23 */      MCD::OPC_Decode, 211, 5, 0, // Opcode: UNIMP
/* 27 */      MCD::OPC_FilterValue, 1, 127, 0, 0, // Skip to: 159
/* 32 */      MCD::OPC_ExtractField, 19, 3,  // Inst{21-19} ...
/* 35 */      MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 71
/* 40 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 43 */      MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 57
/* 48 */      MCD::OPC_CheckPredicate, 0, 242, 30, 0, // Skip to: 7975
/* 53 */      MCD::OPC_Decode, 161, 2, 1, // Opcode: BPICCNT
/* 57 */      MCD::OPC_FilterValue, 1, 233, 30, 0, // Skip to: 7975
/* 62 */      MCD::OPC_CheckPredicate, 0, 228, 30, 0, // Skip to: 7975
/* 67 */      MCD::OPC_Decode, 160, 2, 1, // Opcode: BPICCANT
/* 71 */      MCD::OPC_FilterValue, 1, 31, 0, 0, // Skip to: 107
/* 76 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 79 */      MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 93
/* 84 */      MCD::OPC_CheckPredicate, 0, 206, 30, 0, // Skip to: 7975
/* 89 */      MCD::OPC_Decode, 158, 2, 1, // Opcode: BPICC
/* 93 */      MCD::OPC_FilterValue, 1, 197, 30, 0, // Skip to: 7975
/* 98 */      MCD::OPC_CheckPredicate, 0, 192, 30, 0, // Skip to: 7975
/* 103 */     MCD::OPC_Decode, 159, 2, 1, // Opcode: BPICCA
/* 107 */     MCD::OPC_FilterValue, 4, 21, 0, 0, // Skip to: 133
/* 112 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 115 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 124
/* 120 */     MCD::OPC_Decode, 177, 2, 1, // Opcode: BPXCCNT
/* 124 */     MCD::OPC_FilterValue, 1, 166, 30, 0, // Skip to: 7975
/* 129 */     MCD::OPC_Decode, 176, 2, 1, // Opcode: BPXCCANT
/* 133 */     MCD::OPC_FilterValue, 5, 157, 30, 0, // Skip to: 7975
/* 138 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 141 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 150
/* 146 */     MCD::OPC_Decode, 174, 2, 1, // Opcode: BPXCC
/* 150 */     MCD::OPC_FilterValue, 1, 140, 30, 0, // Skip to: 7975
/* 155 */     MCD::OPC_Decode, 175, 2, 1, // Opcode: BPXCCA
/* 159 */     MCD::OPC_FilterValue, 2, 32, 0, 0, // Skip to: 196
/* 164 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 167 */     MCD::OPC_FilterValue, 0, 15, 0, 0, // Skip to: 187
/* 172 */     MCD::OPC_CheckField, 25, 4, 8, 4, 0, 0, // Skip to: 183
/* 179 */     MCD::OPC_Decode, 140, 2, 0, // Opcode: BA
/* 183 */     MCD::OPC_Decode, 141, 2, 2, // Opcode: BCOND
/* 187 */     MCD::OPC_FilterValue, 1, 103, 30, 0, // Skip to: 7975
/* 192 */     MCD::OPC_Decode, 142, 2, 2, // Opcode: BCONDA
/* 196 */     MCD::OPC_FilterValue, 3, 59, 1, 0, // Skip to: 516
/* 201 */     MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 204 */     MCD::OPC_FilterValue, 1, 21, 0, 0, // Skip to: 230
/* 209 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 212 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 221
/* 217 */     MCD::OPC_Decode, 180, 2, 3, // Opcode: BPZnapn
/* 221 */     MCD::OPC_FilterValue, 1, 69, 30, 0, // Skip to: 7975
/* 226 */     MCD::OPC_Decode, 181, 2, 3, // Opcode: BPZnapt
/* 230 */     MCD::OPC_FilterValue, 2, 21, 0, 0, // Skip to: 256
/* 235 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 238 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 247
/* 243 */     MCD::OPC_Decode, 164, 2, 3, // Opcode: BPLEZnapn
/* 247 */     MCD::OPC_FilterValue, 1, 43, 30, 0, // Skip to: 7975
/* 252 */     MCD::OPC_Decode, 165, 2, 3, // Opcode: BPLEZnapt
/* 256 */     MCD::OPC_FilterValue, 3, 21, 0, 0, // Skip to: 282
/* 261 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 264 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 273
/* 269 */     MCD::OPC_Decode, 168, 2, 3, // Opcode: BPLZnapn
/* 273 */     MCD::OPC_FilterValue, 1, 17, 30, 0, // Skip to: 7975
/* 278 */     MCD::OPC_Decode, 169, 2, 3, // Opcode: BPLZnapt
/* 282 */     MCD::OPC_FilterValue, 5, 21, 0, 0, // Skip to: 308
/* 287 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 290 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 299
/* 295 */     MCD::OPC_Decode, 172, 2, 3, // Opcode: BPNZnapn
/* 299 */     MCD::OPC_FilterValue, 1, 247, 29, 0, // Skip to: 7975
/* 304 */     MCD::OPC_Decode, 173, 2, 3, // Opcode: BPNZnapt
/* 308 */     MCD::OPC_FilterValue, 6, 21, 0, 0, // Skip to: 334
/* 313 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 316 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 325
/* 321 */     MCD::OPC_Decode, 156, 2, 3, // Opcode: BPGZnapn
/* 325 */     MCD::OPC_FilterValue, 1, 221, 29, 0, // Skip to: 7975
/* 330 */     MCD::OPC_Decode, 157, 2, 3, // Opcode: BPGZnapt
/* 334 */     MCD::OPC_FilterValue, 7, 21, 0, 0, // Skip to: 360
/* 339 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 342 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 351
/* 347 */     MCD::OPC_Decode, 152, 2, 3, // Opcode: BPGEZnapn
/* 351 */     MCD::OPC_FilterValue, 1, 195, 29, 0, // Skip to: 7975
/* 356 */     MCD::OPC_Decode, 153, 2, 3, // Opcode: BPGEZnapt
/* 360 */     MCD::OPC_FilterValue, 17, 21, 0, 0, // Skip to: 386
/* 365 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 368 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 377
/* 373 */     MCD::OPC_Decode, 178, 2, 3, // Opcode: BPZapn
/* 377 */     MCD::OPC_FilterValue, 1, 169, 29, 0, // Skip to: 7975
/* 382 */     MCD::OPC_Decode, 179, 2, 3, // Opcode: BPZapt
/* 386 */     MCD::OPC_FilterValue, 18, 21, 0, 0, // Skip to: 412
/* 391 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 394 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 403
/* 399 */     MCD::OPC_Decode, 162, 2, 3, // Opcode: BPLEZapn
/* 403 */     MCD::OPC_FilterValue, 1, 143, 29, 0, // Skip to: 7975
/* 408 */     MCD::OPC_Decode, 163, 2, 3, // Opcode: BPLEZapt
/* 412 */     MCD::OPC_FilterValue, 19, 21, 0, 0, // Skip to: 438
/* 417 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 420 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 429
/* 425 */     MCD::OPC_Decode, 166, 2, 3, // Opcode: BPLZapn
/* 429 */     MCD::OPC_FilterValue, 1, 117, 29, 0, // Skip to: 7975
/* 434 */     MCD::OPC_Decode, 167, 2, 3, // Opcode: BPLZapt
/* 438 */     MCD::OPC_FilterValue, 21, 21, 0, 0, // Skip to: 464
/* 443 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 446 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 455
/* 451 */     MCD::OPC_Decode, 170, 2, 3, // Opcode: BPNZapn
/* 455 */     MCD::OPC_FilterValue, 1, 91, 29, 0, // Skip to: 7975
/* 460 */     MCD::OPC_Decode, 171, 2, 3, // Opcode: BPNZapt
/* 464 */     MCD::OPC_FilterValue, 22, 21, 0, 0, // Skip to: 490
/* 469 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 472 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 481
/* 477 */     MCD::OPC_Decode, 154, 2, 3, // Opcode: BPGZapn
/* 481 */     MCD::OPC_FilterValue, 1, 65, 29, 0, // Skip to: 7975
/* 486 */     MCD::OPC_Decode, 155, 2, 3, // Opcode: BPGZapt
/* 490 */     MCD::OPC_FilterValue, 23, 56, 29, 0, // Skip to: 7975
/* 495 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 498 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 507
/* 503 */     MCD::OPC_Decode, 150, 2, 3, // Opcode: BPGEZapn
/* 507 */     MCD::OPC_FilterValue, 1, 39, 29, 0, // Skip to: 7975
/* 512 */     MCD::OPC_Decode, 151, 2, 3, // Opcode: BPGEZapt
/* 516 */     MCD::OPC_FilterValue, 4, 22, 0, 0, // Skip to: 543
/* 521 */     MCD::OPC_CheckField, 25, 5, 0, 11, 0, 0, // Skip to: 539
/* 528 */     MCD::OPC_CheckField, 0, 22, 0, 4, 0, 0, // Skip to: 539
/* 535 */     MCD::OPC_Decode, 195, 4, 4, // Opcode: NOP
/* 539 */     MCD::OPC_Decode, 232, 4, 5, // Opcode: SETHIi
/* 543 */     MCD::OPC_FilterValue, 5, 75, 0, 0, // Skip to: 623
/* 548 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 551 */     MCD::OPC_FilterValue, 0, 31, 0, 0, // Skip to: 587
/* 556 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 559 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 573
/* 564 */     MCD::OPC_CheckPredicate, 0, 238, 28, 0, // Skip to: 7975
/* 569 */     MCD::OPC_Decode, 149, 2, 6, // Opcode: BPFCCNT
/* 573 */     MCD::OPC_FilterValue, 1, 229, 28, 0, // Skip to: 7975
/* 578 */     MCD::OPC_CheckPredicate, 0, 224, 28, 0, // Skip to: 7975
/* 583 */     MCD::OPC_Decode, 148, 2, 6, // Opcode: BPFCCANT
/* 587 */     MCD::OPC_FilterValue, 1, 215, 28, 0, // Skip to: 7975
/* 592 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 595 */     MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 609
/* 600 */     MCD::OPC_CheckPredicate, 0, 202, 28, 0, // Skip to: 7975
/* 605 */     MCD::OPC_Decode, 146, 2, 6, // Opcode: BPFCC
/* 609 */     MCD::OPC_FilterValue, 1, 193, 28, 0, // Skip to: 7975
/* 614 */     MCD::OPC_CheckPredicate, 0, 188, 28, 0, // Skip to: 7975
/* 619 */     MCD::OPC_Decode, 147, 2, 6, // Opcode: BPFCCA
/* 623 */     MCD::OPC_FilterValue, 6, 21, 0, 0, // Skip to: 649
/* 628 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 631 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 640
/* 636 */     MCD::OPC_Decode, 222, 2, 2, // Opcode: FBCOND
/* 640 */     MCD::OPC_FilterValue, 1, 162, 28, 0, // Skip to: 7975
/* 645 */     MCD::OPC_Decode, 223, 2, 2, // Opcode: FBCONDA
/* 649 */     MCD::OPC_FilterValue, 7, 153, 28, 0, // Skip to: 7975
/* 654 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 657 */     MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 666
/* 662 */     MCD::OPC_Decode, 190, 2, 2, // Opcode: CBCOND
/* 666 */     MCD::OPC_FilterValue, 1, 136, 28, 0, // Skip to: 7975
/* 671 */     MCD::OPC_Decode, 191, 2, 2, // Opcode: CBCONDA
/* 675 */     MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 684
/* 680 */     MCD::OPC_Decode, 183, 2, 7, // Opcode: CALL
/* 684 */     MCD::OPC_FilterValue, 2, 150, 22, 0, // Skip to: 6471
/* 689 */     MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 692 */     MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 725
/* 697 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 700 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 716
/* 705 */     MCD::OPC_CheckField, 5, 8, 0, 95, 28, 0, // Skip to: 7975
/* 712 */     MCD::OPC_Decode, 251, 1, 8, // Opcode: ADDrr
/* 716 */     MCD::OPC_FilterValue, 1, 86, 28, 0, // Skip to: 7975
/* 721 */     MCD::OPC_Decode, 250, 1, 9, // Opcode: ADDri
/* 725 */     MCD::OPC_FilterValue, 1, 28, 0, 0, // Skip to: 758
/* 730 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 733 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 749
/* 738 */     MCD::OPC_CheckField, 5, 8, 0, 62, 28, 0, // Skip to: 7975
/* 745 */     MCD::OPC_Decode, 136, 2, 8, // Opcode: ANDrr
/* 749 */     MCD::OPC_FilterValue, 1, 53, 28, 0, // Skip to: 7975
/* 754 */     MCD::OPC_Decode, 135, 2, 9, // Opcode: ANDri
/* 758 */     MCD::OPC_FilterValue, 2, 28, 0, 0, // Skip to: 791
/* 763 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 766 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 782
/* 771 */     MCD::OPC_CheckField, 5, 8, 0, 29, 28, 0, // Skip to: 7975
/* 778 */     MCD::OPC_Decode, 206, 4, 8, // Opcode: ORrr
/* 782 */     MCD::OPC_FilterValue, 1, 20, 28, 0, // Skip to: 7975
/* 787 */     MCD::OPC_Decode, 205, 4, 9, // Opcode: ORri
/* 791 */     MCD::OPC_FilterValue, 3, 28, 0, 0, // Skip to: 824
/* 796 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 799 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 815
/* 804 */     MCD::OPC_CheckField, 5, 8, 0, 252, 27, 0, // Skip to: 7975
/* 811 */     MCD::OPC_Decode, 245, 5, 8, // Opcode: XORrr
/* 815 */     MCD::OPC_FilterValue, 1, 243, 27, 0, // Skip to: 7975
/* 820 */     MCD::OPC_Decode, 244, 5, 9, // Opcode: XORri
/* 824 */     MCD::OPC_FilterValue, 4, 28, 0, 0, // Skip to: 857
/* 829 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 832 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 848
/* 837 */     MCD::OPC_CheckField, 5, 8, 0, 219, 27, 0, // Skip to: 7975
/* 844 */     MCD::OPC_Decode, 172, 5, 8, // Opcode: SUBrr
/* 848 */     MCD::OPC_FilterValue, 1, 210, 27, 0, // Skip to: 7975
/* 853 */     MCD::OPC_Decode, 171, 5, 9, // Opcode: SUBri
/* 857 */     MCD::OPC_FilterValue, 5, 28, 0, 0, // Skip to: 890
/* 862 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 865 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 881
/* 870 */     MCD::OPC_CheckField, 5, 8, 0, 186, 27, 0, // Skip to: 7975
/* 877 */     MCD::OPC_Decode, 131, 2, 8, // Opcode: ANDNrr
/* 881 */     MCD::OPC_FilterValue, 1, 177, 27, 0, // Skip to: 7975
/* 886 */     MCD::OPC_Decode, 130, 2, 9, // Opcode: ANDNri
/* 890 */     MCD::OPC_FilterValue, 6, 28, 0, 0, // Skip to: 923
/* 895 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 898 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 914
/* 903 */     MCD::OPC_CheckField, 5, 8, 0, 153, 27, 0, // Skip to: 7975
/* 910 */     MCD::OPC_Decode, 201, 4, 8, // Opcode: ORNrr
/* 914 */     MCD::OPC_FilterValue, 1, 144, 27, 0, // Skip to: 7975
/* 919 */     MCD::OPC_Decode, 200, 4, 9, // Opcode: ORNri
/* 923 */     MCD::OPC_FilterValue, 7, 28, 0, 0, // Skip to: 956
/* 928 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 931 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 947
/* 936 */     MCD::OPC_CheckField, 5, 8, 0, 120, 27, 0, // Skip to: 7975
/* 943 */     MCD::OPC_Decode, 239, 5, 8, // Opcode: XNORrr
/* 947 */     MCD::OPC_FilterValue, 1, 111, 27, 0, // Skip to: 7975
/* 952 */     MCD::OPC_Decode, 238, 5, 9, // Opcode: XNORri
/* 956 */     MCD::OPC_FilterValue, 8, 28, 0, 0, // Skip to: 989
/* 961 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 964 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 980
/* 969 */     MCD::OPC_CheckField, 5, 8, 0, 87, 27, 0, // Skip to: 7975
/* 976 */     MCD::OPC_Decode, 243, 1, 8, // Opcode: ADDCrr
/* 980 */     MCD::OPC_FilterValue, 1, 78, 27, 0, // Skip to: 7975
/* 985 */     MCD::OPC_Decode, 242, 1, 9, // Opcode: ADDCri
/* 989 */     MCD::OPC_FilterValue, 9, 28, 0, 0, // Skip to: 1022
/* 994 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 997 */     MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1013
/* 1002 */    MCD::OPC_CheckField, 5, 8, 0, 54, 27, 0, // Skip to: 7975
/* 1009 */    MCD::OPC_Decode, 194, 4, 10, // Opcode: MULXrr
/* 1013 */    MCD::OPC_FilterValue, 1, 45, 27, 0, // Skip to: 7975
/* 1018 */    MCD::OPC_Decode, 193, 4, 11, // Opcode: MULXri
/* 1022 */    MCD::OPC_FilterValue, 10, 28, 0, 0, // Skip to: 1055
/* 1027 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1030 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1046
/* 1035 */    MCD::OPC_CheckField, 5, 8, 0, 21, 27, 0, // Skip to: 7975
/* 1042 */    MCD::OPC_Decode, 210, 5, 8, // Opcode: UMULrr
/* 1046 */    MCD::OPC_FilterValue, 1, 12, 27, 0, // Skip to: 7975
/* 1051 */    MCD::OPC_Decode, 209, 5, 9, // Opcode: UMULri
/* 1055 */    MCD::OPC_FilterValue, 11, 28, 0, 0, // Skip to: 1088
/* 1060 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1063 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1079
/* 1068 */    MCD::OPC_CheckField, 5, 8, 0, 244, 26, 0, // Skip to: 7975
/* 1075 */    MCD::OPC_Decode, 244, 4, 8, // Opcode: SMULrr
/* 1079 */    MCD::OPC_FilterValue, 1, 235, 26, 0, // Skip to: 7975
/* 1084 */    MCD::OPC_Decode, 243, 4, 9, // Opcode: SMULri
/* 1088 */    MCD::OPC_FilterValue, 12, 28, 0, 0, // Skip to: 1121
/* 1093 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1096 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1112
/* 1101 */    MCD::OPC_CheckField, 5, 8, 0, 211, 26, 0, // Skip to: 7975
/* 1108 */    MCD::OPC_Decode, 166, 5, 8, // Opcode: SUBCrr
/* 1112 */    MCD::OPC_FilterValue, 1, 202, 26, 0, // Skip to: 7975
/* 1117 */    MCD::OPC_Decode, 165, 5, 9, // Opcode: SUBCri
/* 1121 */    MCD::OPC_FilterValue, 13, 28, 0, 0, // Skip to: 1154
/* 1126 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1129 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1145
/* 1134 */    MCD::OPC_CheckField, 5, 8, 0, 178, 26, 0, // Skip to: 7975
/* 1141 */    MCD::OPC_Decode, 201, 5, 10, // Opcode: UDIVXrr
/* 1145 */    MCD::OPC_FilterValue, 1, 169, 26, 0, // Skip to: 7975
/* 1150 */    MCD::OPC_Decode, 200, 5, 11, // Opcode: UDIVXri
/* 1154 */    MCD::OPC_FilterValue, 14, 28, 0, 0, // Skip to: 1187
/* 1159 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1162 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1178
/* 1167 */    MCD::OPC_CheckField, 5, 8, 0, 145, 26, 0, // Skip to: 7975
/* 1174 */    MCD::OPC_Decode, 203, 5, 8, // Opcode: UDIVrr
/* 1178 */    MCD::OPC_FilterValue, 1, 136, 26, 0, // Skip to: 7975
/* 1183 */    MCD::OPC_Decode, 202, 5, 9, // Opcode: UDIVri
/* 1187 */    MCD::OPC_FilterValue, 15, 28, 0, 0, // Skip to: 1220
/* 1192 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1195 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1211
/* 1200 */    MCD::OPC_CheckField, 5, 8, 0, 112, 26, 0, // Skip to: 7975
/* 1207 */    MCD::OPC_Decode, 230, 4, 8, // Opcode: SDIVrr
/* 1211 */    MCD::OPC_FilterValue, 1, 103, 26, 0, // Skip to: 7975
/* 1216 */    MCD::OPC_Decode, 229, 4, 9, // Opcode: SDIVri
/* 1220 */    MCD::OPC_FilterValue, 16, 28, 0, 0, // Skip to: 1253
/* 1225 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1228 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1244
/* 1233 */    MCD::OPC_CheckField, 5, 8, 0, 79, 26, 0, // Skip to: 7975
/* 1240 */    MCD::OPC_Decode, 241, 1, 8, // Opcode: ADDCCrr
/* 1244 */    MCD::OPC_FilterValue, 1, 70, 26, 0, // Skip to: 7975
/* 1249 */    MCD::OPC_Decode, 240, 1, 9, // Opcode: ADDCCri
/* 1253 */    MCD::OPC_FilterValue, 17, 28, 0, 0, // Skip to: 1286
/* 1258 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1261 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1277
/* 1266 */    MCD::OPC_CheckField, 5, 8, 0, 46, 26, 0, // Skip to: 7975
/* 1273 */    MCD::OPC_Decode, 255, 1, 8, // Opcode: ANDCCrr
/* 1277 */    MCD::OPC_FilterValue, 1, 37, 26, 0, // Skip to: 7975
/* 1282 */    MCD::OPC_Decode, 254, 1, 9, // Opcode: ANDCCri
/* 1286 */    MCD::OPC_FilterValue, 18, 28, 0, 0, // Skip to: 1319
/* 1291 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1294 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1310
/* 1299 */    MCD::OPC_CheckField, 5, 8, 0, 13, 26, 0, // Skip to: 7975
/* 1306 */    MCD::OPC_Decode, 197, 4, 8, // Opcode: ORCCrr
/* 1310 */    MCD::OPC_FilterValue, 1, 4, 26, 0, // Skip to: 7975
/* 1315 */    MCD::OPC_Decode, 196, 4, 9, // Opcode: ORCCri
/* 1319 */    MCD::OPC_FilterValue, 19, 28, 0, 0, // Skip to: 1352
/* 1324 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1327 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1343
/* 1332 */    MCD::OPC_CheckField, 5, 8, 0, 236, 25, 0, // Skip to: 7975
/* 1339 */    MCD::OPC_Decode, 241, 5, 8, // Opcode: XORCCrr
/* 1343 */    MCD::OPC_FilterValue, 1, 227, 25, 0, // Skip to: 7975
/* 1348 */    MCD::OPC_Decode, 240, 5, 9, // Opcode: XORCCri
/* 1352 */    MCD::OPC_FilterValue, 20, 51, 0, 0, // Skip to: 1408
/* 1357 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1360 */    MCD::OPC_FilterValue, 0, 23, 0, 0, // Skip to: 1388
/* 1365 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 1368 */    MCD::OPC_FilterValue, 0, 202, 25, 0, // Skip to: 7975
/* 1373 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 1384
/* 1380 */    MCD::OPC_Decode, 196, 2, 12, // Opcode: CMPrr
/* 1384 */    MCD::OPC_Decode, 164, 5, 8, // Opcode: SUBCCrr
/* 1388 */    MCD::OPC_FilterValue, 1, 182, 25, 0, // Skip to: 7975
/* 1393 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 1404
/* 1400 */    MCD::OPC_Decode, 195, 2, 13, // Opcode: CMPri
/* 1404 */    MCD::OPC_Decode, 163, 5, 9, // Opcode: SUBCCri
/* 1408 */    MCD::OPC_FilterValue, 21, 28, 0, 0, // Skip to: 1441
/* 1413 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1416 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1432
/* 1421 */    MCD::OPC_CheckField, 5, 8, 0, 147, 25, 0, // Skip to: 7975
/* 1428 */    MCD::OPC_Decode, 129, 2, 8, // Opcode: ANDNCCrr
/* 1432 */    MCD::OPC_FilterValue, 1, 138, 25, 0, // Skip to: 7975
/* 1437 */    MCD::OPC_Decode, 128, 2, 9, // Opcode: ANDNCCri
/* 1441 */    MCD::OPC_FilterValue, 22, 28, 0, 0, // Skip to: 1474
/* 1446 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1449 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1465
/* 1454 */    MCD::OPC_CheckField, 5, 8, 0, 114, 25, 0, // Skip to: 7975
/* 1461 */    MCD::OPC_Decode, 199, 4, 8, // Opcode: ORNCCrr
/* 1465 */    MCD::OPC_FilterValue, 1, 105, 25, 0, // Skip to: 7975
/* 1470 */    MCD::OPC_Decode, 198, 4, 9, // Opcode: ORNCCri
/* 1474 */    MCD::OPC_FilterValue, 23, 28, 0, 0, // Skip to: 1507
/* 1479 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1482 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1498
/* 1487 */    MCD::OPC_CheckField, 5, 8, 0, 81, 25, 0, // Skip to: 7975
/* 1494 */    MCD::OPC_Decode, 236, 5, 8, // Opcode: XNORCCrr
/* 1498 */    MCD::OPC_FilterValue, 1, 72, 25, 0, // Skip to: 7975
/* 1503 */    MCD::OPC_Decode, 235, 5, 9, // Opcode: XNORCCri
/* 1507 */    MCD::OPC_FilterValue, 24, 28, 0, 0, // Skip to: 1540
/* 1512 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1515 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1531
/* 1520 */    MCD::OPC_CheckField, 5, 8, 0, 48, 25, 0, // Skip to: 7975
/* 1527 */    MCD::OPC_Decode, 245, 1, 8, // Opcode: ADDErr
/* 1531 */    MCD::OPC_FilterValue, 1, 39, 25, 0, // Skip to: 7975
/* 1536 */    MCD::OPC_Decode, 244, 1, 9, // Opcode: ADDEri
/* 1540 */    MCD::OPC_FilterValue, 26, 28, 0, 0, // Skip to: 1573
/* 1545 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1548 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1564
/* 1553 */    MCD::OPC_CheckField, 5, 8, 0, 15, 25, 0, // Skip to: 7975
/* 1560 */    MCD::OPC_Decode, 207, 5, 8, // Opcode: UMULCCrr
/* 1564 */    MCD::OPC_FilterValue, 1, 6, 25, 0, // Skip to: 7975
/* 1569 */    MCD::OPC_Decode, 206, 5, 9, // Opcode: UMULCCri
/* 1573 */    MCD::OPC_FilterValue, 27, 28, 0, 0, // Skip to: 1606
/* 1578 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1581 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1597
/* 1586 */    MCD::OPC_CheckField, 5, 8, 0, 238, 24, 0, // Skip to: 7975
/* 1593 */    MCD::OPC_Decode, 242, 4, 8, // Opcode: SMULCCrr
/* 1597 */    MCD::OPC_FilterValue, 1, 229, 24, 0, // Skip to: 7975
/* 1602 */    MCD::OPC_Decode, 241, 4, 9, // Opcode: SMULCCri
/* 1606 */    MCD::OPC_FilterValue, 28, 28, 0, 0, // Skip to: 1639
/* 1611 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1614 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1630
/* 1619 */    MCD::OPC_CheckField, 5, 8, 0, 205, 24, 0, // Skip to: 7975
/* 1626 */    MCD::OPC_Decode, 168, 5, 8, // Opcode: SUBErr
/* 1630 */    MCD::OPC_FilterValue, 1, 196, 24, 0, // Skip to: 7975
/* 1635 */    MCD::OPC_Decode, 167, 5, 9, // Opcode: SUBEri
/* 1639 */    MCD::OPC_FilterValue, 30, 28, 0, 0, // Skip to: 1672
/* 1644 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1647 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1663
/* 1652 */    MCD::OPC_CheckField, 5, 8, 0, 172, 24, 0, // Skip to: 7975
/* 1659 */    MCD::OPC_Decode, 199, 5, 8, // Opcode: UDIVCCrr
/* 1663 */    MCD::OPC_FilterValue, 1, 163, 24, 0, // Skip to: 7975
/* 1668 */    MCD::OPC_Decode, 198, 5, 9, // Opcode: UDIVCCri
/* 1672 */    MCD::OPC_FilterValue, 31, 28, 0, 0, // Skip to: 1705
/* 1677 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1680 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1696
/* 1685 */    MCD::OPC_CheckField, 5, 8, 0, 139, 24, 0, // Skip to: 7975
/* 1692 */    MCD::OPC_Decode, 226, 4, 8, // Opcode: SDIVCCrr
/* 1696 */    MCD::OPC_FilterValue, 1, 130, 24, 0, // Skip to: 7975
/* 1701 */    MCD::OPC_Decode, 225, 4, 9, // Opcode: SDIVCCri
/* 1705 */    MCD::OPC_FilterValue, 32, 28, 0, 0, // Skip to: 1738
/* 1710 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1713 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1729
/* 1718 */    MCD::OPC_CheckField, 5, 8, 0, 106, 24, 0, // Skip to: 7975
/* 1725 */    MCD::OPC_Decode, 182, 5, 8, // Opcode: TADDCCrr
/* 1729 */    MCD::OPC_FilterValue, 1, 97, 24, 0, // Skip to: 7975
/* 1734 */    MCD::OPC_Decode, 181, 5, 9, // Opcode: TADDCCri
/* 1738 */    MCD::OPC_FilterValue, 33, 28, 0, 0, // Skip to: 1771
/* 1743 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1746 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1762
/* 1751 */    MCD::OPC_CheckField, 5, 8, 0, 73, 24, 0, // Skip to: 7975
/* 1758 */    MCD::OPC_Decode, 195, 5, 8, // Opcode: TSUBCCrr
/* 1762 */    MCD::OPC_FilterValue, 1, 64, 24, 0, // Skip to: 7975
/* 1767 */    MCD::OPC_Decode, 194, 5, 9, // Opcode: TSUBCCri
/* 1771 */    MCD::OPC_FilterValue, 34, 28, 0, 0, // Skip to: 1804
/* 1776 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1779 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1795
/* 1784 */    MCD::OPC_CheckField, 5, 8, 0, 40, 24, 0, // Skip to: 7975
/* 1791 */    MCD::OPC_Decode, 180, 5, 8, // Opcode: TADDCCTVrr
/* 1795 */    MCD::OPC_FilterValue, 1, 31, 24, 0, // Skip to: 7975
/* 1800 */    MCD::OPC_Decode, 179, 5, 9, // Opcode: TADDCCTVri
/* 1804 */    MCD::OPC_FilterValue, 35, 28, 0, 0, // Skip to: 1837
/* 1809 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1812 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1828
/* 1817 */    MCD::OPC_CheckField, 5, 8, 0, 7, 24, 0, // Skip to: 7975
/* 1824 */    MCD::OPC_Decode, 193, 5, 8, // Opcode: TSUBCCTVrr
/* 1828 */    MCD::OPC_FilterValue, 1, 254, 23, 0, // Skip to: 7975
/* 1833 */    MCD::OPC_Decode, 192, 5, 9, // Opcode: TSUBCCTVri
/* 1837 */    MCD::OPC_FilterValue, 36, 28, 0, 0, // Skip to: 1870
/* 1842 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1845 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 1861
/* 1850 */    MCD::OPC_CheckField, 5, 8, 0, 230, 23, 0, // Skip to: 7975
/* 1857 */    MCD::OPC_Decode, 192, 4, 8, // Opcode: MULSCCrr
/* 1861 */    MCD::OPC_FilterValue, 1, 221, 23, 0, // Skip to: 7975
/* 1866 */    MCD::OPC_Decode, 191, 4, 9, // Opcode: MULSCCri
/* 1870 */    MCD::OPC_FilterValue, 37, 39, 0, 0, // Skip to: 1914
/* 1875 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1878 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1887
/* 1883 */    MCD::OPC_Decode, 238, 4, 8, // Opcode: SLLrr
/* 1887 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1896
/* 1892 */    MCD::OPC_Decode, 236, 4, 14, // Opcode: SLLXrr
/* 1896 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1905
/* 1901 */    MCD::OPC_Decode, 237, 4, 15, // Opcode: SLLri
/* 1905 */    MCD::OPC_FilterValue, 3, 177, 23, 0, // Skip to: 7975
/* 1910 */    MCD::OPC_Decode, 235, 4, 16, // Opcode: SLLXri
/* 1914 */    MCD::OPC_FilterValue, 38, 39, 0, 0, // Skip to: 1958
/* 1919 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1922 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1931
/* 1927 */    MCD::OPC_Decode, 252, 4, 8, // Opcode: SRLrr
/* 1931 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1940
/* 1936 */    MCD::OPC_Decode, 250, 4, 14, // Opcode: SRLXrr
/* 1940 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1949
/* 1945 */    MCD::OPC_Decode, 251, 4, 15, // Opcode: SRLri
/* 1949 */    MCD::OPC_FilterValue, 3, 133, 23, 0, // Skip to: 7975
/* 1954 */    MCD::OPC_Decode, 249, 4, 16, // Opcode: SRLXri
/* 1958 */    MCD::OPC_FilterValue, 39, 39, 0, 0, // Skip to: 2002
/* 1963 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1966 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 1975
/* 1971 */    MCD::OPC_Decode, 248, 4, 8, // Opcode: SRArr
/* 1975 */    MCD::OPC_FilterValue, 1, 4, 0, 0, // Skip to: 1984
/* 1980 */    MCD::OPC_Decode, 246, 4, 14, // Opcode: SRAXrr
/* 1984 */    MCD::OPC_FilterValue, 2, 4, 0, 0, // Skip to: 1993
/* 1989 */    MCD::OPC_Decode, 247, 4, 15, // Opcode: SRAri
/* 1993 */    MCD::OPC_FilterValue, 3, 89, 23, 0, // Skip to: 7975
/* 1998 */    MCD::OPC_Decode, 245, 4, 16, // Opcode: SRAXri
/* 2002 */    MCD::OPC_FilterValue, 40, 66, 0, 0, // Skip to: 2073
/* 2007 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2010 */    MCD::OPC_FilterValue, 0, 30, 0, 0, // Skip to: 2045
/* 2015 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 2018 */    MCD::OPC_FilterValue, 0, 64, 23, 0, // Skip to: 7975
/* 2023 */    MCD::OPC_CheckField, 25, 5, 0, 11, 0, 0, // Skip to: 2041
/* 2030 */    MCD::OPC_CheckField, 14, 5, 15, 4, 0, 0, // Skip to: 2041
/* 2037 */    MCD::OPC_Decode, 254, 4, 4, // Opcode: STBAR
/* 2041 */    MCD::OPC_Decode, 212, 4, 17, // Opcode: RDASR
/* 2045 */    MCD::OPC_FilterValue, 1, 37, 23, 0, // Skip to: 7975
/* 2050 */    MCD::OPC_CheckPredicate, 0, 32, 23, 0, // Skip to: 7975
/* 2055 */    MCD::OPC_CheckField, 25, 5, 0, 25, 23, 0, // Skip to: 7975
/* 2062 */    MCD::OPC_CheckField, 14, 5, 15, 18, 23, 0, // Skip to: 7975
/* 2069 */    MCD::OPC_Decode, 167, 4, 18, // Opcode: MEMBARi
/* 2073 */    MCD::OPC_FilterValue, 41, 11, 0, 0, // Skip to: 2089
/* 2078 */    MCD::OPC_CheckField, 0, 19, 0, 2, 23, 0, // Skip to: 7975
/* 2085 */    MCD::OPC_Decode, 214, 4, 19, // Opcode: RDPSR
/* 2089 */    MCD::OPC_FilterValue, 42, 28, 0, 0, // Skip to: 2122
/* 2094 */    MCD::OPC_ExtractField, 0, 14,  // Inst{13-0} ...
/* 2097 */    MCD::OPC_FilterValue, 0, 241, 22, 0, // Skip to: 7975
/* 2102 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, 0, // Skip to: 2113
/* 2109 */    MCD::OPC_Decode, 216, 4, 19, // Opcode: RDWIM
/* 2113 */    MCD::OPC_CheckPredicate, 0, 225, 22, 0, // Skip to: 7975
/* 2118 */    MCD::OPC_Decode, 213, 4, 20, // Opcode: RDPR
/* 2122 */    MCD::OPC_FilterValue, 43, 28, 0, 0, // Skip to: 2155
/* 2127 */    MCD::OPC_ExtractField, 0, 19,  // Inst{18-0} ...
/* 2130 */    MCD::OPC_FilterValue, 0, 208, 22, 0, // Skip to: 7975
/* 2135 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 2151
/* 2140 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2151
/* 2147 */    MCD::OPC_Decode, 255, 2, 4, // Opcode: FLUSHW
/* 2151 */    MCD::OPC_Decode, 215, 4, 19, // Opcode: RDTBR
/* 2155 */    MCD::OPC_FilterValue, 44, 141, 0, 0, // Skip to: 2301
/* 2160 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2163 */    MCD::OPC_FilterValue, 0, 64, 0, 0, // Skip to: 2232
/* 2168 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 2171 */    MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 2201
/* 2176 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 2192
/* 2181 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 2192
/* 2188 */    MCD::OPC_Decode, 170, 4, 21, // Opcode: MOVFCCrr
/* 2192 */    MCD::OPC_CheckPredicate, 0, 146, 22, 0, // Skip to: 7975
/* 2197 */    MCD::OPC_Decode, 222, 5, 22, // Opcode: V9MOVFCCrr
/* 2201 */    MCD::OPC_FilterValue, 1, 137, 22, 0, // Skip to: 7975
/* 2206 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2209 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 2223
/* 2214 */    MCD::OPC_CheckPredicate, 0, 124, 22, 0, // Skip to: 7975
/* 2219 */    MCD::OPC_Decode, 172, 4, 21, // Opcode: MOVICCrr
/* 2223 */    MCD::OPC_FilterValue, 2, 115, 22, 0, // Skip to: 7975
/* 2228 */    MCD::OPC_Decode, 189, 4, 21, // Opcode: MOVXCCrr
/* 2232 */    MCD::OPC_FilterValue, 1, 106, 22, 0, // Skip to: 7975
/* 2237 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 2240 */    MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 2270
/* 2245 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 2261
/* 2250 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 2261
/* 2257 */    MCD::OPC_Decode, 169, 4, 23, // Opcode: MOVFCCri
/* 2261 */    MCD::OPC_CheckPredicate, 0, 77, 22, 0, // Skip to: 7975
/* 2266 */    MCD::OPC_Decode, 221, 5, 24, // Opcode: V9MOVFCCri
/* 2270 */    MCD::OPC_FilterValue, 1, 68, 22, 0, // Skip to: 7975
/* 2275 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2278 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 2292
/* 2283 */    MCD::OPC_CheckPredicate, 0, 55, 22, 0, // Skip to: 7975
/* 2288 */    MCD::OPC_Decode, 171, 4, 23, // Opcode: MOVICCri
/* 2292 */    MCD::OPC_FilterValue, 2, 46, 22, 0, // Skip to: 7975
/* 2297 */    MCD::OPC_Decode, 188, 4, 23, // Opcode: MOVXCCri
/* 2301 */    MCD::OPC_FilterValue, 45, 28, 0, 0, // Skip to: 2334
/* 2306 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2309 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2325
/* 2314 */    MCD::OPC_CheckField, 5, 8, 0, 22, 22, 0, // Skip to: 7975
/* 2321 */    MCD::OPC_Decode, 228, 4, 10, // Opcode: SDIVXrr
/* 2325 */    MCD::OPC_FilterValue, 1, 13, 22, 0, // Skip to: 7975
/* 2330 */    MCD::OPC_Decode, 227, 4, 11, // Opcode: SDIVXri
/* 2334 */    MCD::OPC_FilterValue, 46, 16, 0, 0, // Skip to: 2355
/* 2339 */    MCD::OPC_CheckPredicate, 0, 255, 21, 0, // Skip to: 7975
/* 2344 */    MCD::OPC_CheckField, 5, 14, 0, 248, 21, 0, // Skip to: 7975
/* 2351 */    MCD::OPC_Decode, 209, 4, 25, // Opcode: POPCrr
/* 2355 */    MCD::OPC_FilterValue, 47, 153, 0, 0, // Skip to: 2513
/* 2360 */    MCD::OPC_ExtractField, 10, 4,  // Inst{13-10} ...
/* 2363 */    MCD::OPC_FilterValue, 1, 11, 0, 0, // Skip to: 2379
/* 2368 */    MCD::OPC_CheckField, 5, 5, 0, 224, 21, 0, // Skip to: 7975
/* 2375 */    MCD::OPC_Decode, 184, 4, 14, // Opcode: MOVRRZrr
/* 2379 */    MCD::OPC_FilterValue, 2, 11, 0, 0, // Skip to: 2395
/* 2384 */    MCD::OPC_CheckField, 5, 5, 0, 208, 21, 0, // Skip to: 7975
/* 2391 */    MCD::OPC_Decode, 178, 4, 14, // Opcode: MOVRLEZrr
/* 2395 */    MCD::OPC_FilterValue, 3, 11, 0, 0, // Skip to: 2411
/* 2400 */    MCD::OPC_CheckField, 5, 5, 0, 192, 21, 0, // Skip to: 7975
/* 2407 */    MCD::OPC_Decode, 180, 4, 14, // Opcode: MOVRLZrr
/* 2411 */    MCD::OPC_FilterValue, 5, 11, 0, 0, // Skip to: 2427
/* 2416 */    MCD::OPC_CheckField, 5, 5, 0, 176, 21, 0, // Skip to: 7975
/* 2423 */    MCD::OPC_Decode, 182, 4, 14, // Opcode: MOVRNZrr
/* 2427 */    MCD::OPC_FilterValue, 6, 11, 0, 0, // Skip to: 2443
/* 2432 */    MCD::OPC_CheckField, 5, 5, 0, 160, 21, 0, // Skip to: 7975
/* 2439 */    MCD::OPC_Decode, 176, 4, 14, // Opcode: MOVRGZrr
/* 2443 */    MCD::OPC_FilterValue, 7, 11, 0, 0, // Skip to: 2459
/* 2448 */    MCD::OPC_CheckField, 5, 5, 0, 144, 21, 0, // Skip to: 7975
/* 2455 */    MCD::OPC_Decode, 174, 4, 14, // Opcode: MOVRGEZrr
/* 2459 */    MCD::OPC_FilterValue, 9, 4, 0, 0, // Skip to: 2468
/* 2464 */    MCD::OPC_Decode, 183, 4, 26, // Opcode: MOVRRZri
/* 2468 */    MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 2477
/* 2473 */    MCD::OPC_Decode, 177, 4, 26, // Opcode: MOVRLEZri
/* 2477 */    MCD::OPC_FilterValue, 11, 4, 0, 0, // Skip to: 2486
/* 2482 */    MCD::OPC_Decode, 179, 4, 26, // Opcode: MOVRLZri
/* 2486 */    MCD::OPC_FilterValue, 13, 4, 0, 0, // Skip to: 2495
/* 2491 */    MCD::OPC_Decode, 181, 4, 26, // Opcode: MOVRNZri
/* 2495 */    MCD::OPC_FilterValue, 14, 4, 0, 0, // Skip to: 2504
/* 2500 */    MCD::OPC_Decode, 175, 4, 26, // Opcode: MOVRGZri
/* 2504 */    MCD::OPC_FilterValue, 15, 90, 21, 0, // Skip to: 7975
/* 2509 */    MCD::OPC_Decode, 173, 4, 26, // Opcode: MOVRGEZri
/* 2513 */    MCD::OPC_FilterValue, 48, 28, 0, 0, // Skip to: 2546
/* 2518 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2521 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2537
/* 2526 */    MCD::OPC_CheckField, 5, 8, 0, 66, 21, 0, // Skip to: 7975
/* 2533 */    MCD::OPC_Decode, 224, 5, 27, // Opcode: WRASRrr
/* 2537 */    MCD::OPC_FilterValue, 1, 57, 21, 0, // Skip to: 7975
/* 2542 */    MCD::OPC_Decode, 223, 5, 28, // Opcode: WRASRri
/* 2546 */    MCD::OPC_FilterValue, 49, 79, 0, 0, // Skip to: 2630
/* 2551 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2554 */    MCD::OPC_FilterValue, 0, 40, 0, 0, // Skip to: 2599
/* 2559 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 2562 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 2578
/* 2567 */    MCD::OPC_CheckField, 5, 8, 0, 25, 21, 0, // Skip to: 7975
/* 2574 */    MCD::OPC_Decode, 228, 5, 12, // Opcode: WRPSRrr
/* 2578 */    MCD::OPC_FilterValue, 1, 16, 21, 0, // Skip to: 7975
/* 2583 */    MCD::OPC_CheckPredicate, 1, 11, 21, 0, // Skip to: 7975
/* 2588 */    MCD::OPC_CheckField, 5, 8, 0, 4, 21, 0, // Skip to: 7975
/* 2595 */    MCD::OPC_Decode, 211, 4, 12, // Opcode: PWRPSRrr
/* 2599 */    MCD::OPC_FilterValue, 1, 251, 20, 0, // Skip to: 7975
/* 2604 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 2607 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 2616
/* 2612 */    MCD::OPC_Decode, 227, 5, 13, // Opcode: WRPSRri
/* 2616 */    MCD::OPC_FilterValue, 1, 234, 20, 0, // Skip to: 7975
/* 2621 */    MCD::OPC_CheckPredicate, 1, 229, 20, 0, // Skip to: 7975
/* 2626 */    MCD::OPC_Decode, 210, 4, 13, // Opcode: PWRPSRri
/* 2630 */    MCD::OPC_FilterValue, 50, 61, 0, 0, // Skip to: 2696
/* 2635 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2638 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 2671
/* 2643 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 2646 */    MCD::OPC_FilterValue, 0, 204, 20, 0, // Skip to: 7975
/* 2651 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2662
/* 2658 */    MCD::OPC_Decode, 232, 5, 12, // Opcode: WRWIMrr
/* 2662 */    MCD::OPC_CheckPredicate, 0, 188, 20, 0, // Skip to: 7975
/* 2667 */    MCD::OPC_Decode, 226, 5, 29, // Opcode: WRPRrr
/* 2671 */    MCD::OPC_FilterValue, 1, 179, 20, 0, // Skip to: 7975
/* 2676 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 2687
/* 2683 */    MCD::OPC_Decode, 231, 5, 13, // Opcode: WRWIMri
/* 2687 */    MCD::OPC_CheckPredicate, 0, 163, 20, 0, // Skip to: 7975
/* 2692 */    MCD::OPC_Decode, 225, 5, 30, // Opcode: WRPRri
/* 2696 */    MCD::OPC_FilterValue, 51, 42, 0, 0, // Skip to: 2743
/* 2701 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2704 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 2727
/* 2709 */    MCD::OPC_CheckField, 25, 5, 0, 139, 20, 0, // Skip to: 7975
/* 2716 */    MCD::OPC_CheckField, 5, 8, 0, 132, 20, 0, // Skip to: 7975
/* 2723 */    MCD::OPC_Decode, 230, 5, 12, // Opcode: WRTBRrr
/* 2727 */    MCD::OPC_FilterValue, 1, 123, 20, 0, // Skip to: 7975
/* 2732 */    MCD::OPC_CheckField, 25, 5, 0, 116, 20, 0, // Skip to: 7975
/* 2739 */    MCD::OPC_Decode, 229, 5, 13, // Opcode: WRTBRri
/* 2743 */    MCD::OPC_FilterValue, 52, 43, 3, 0, // Skip to: 3559
/* 2748 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 2751 */    MCD::OPC_FilterValue, 1, 11, 0, 0, // Skip to: 2767
/* 2756 */    MCD::OPC_CheckField, 14, 5, 0, 92, 20, 0, // Skip to: 7975
/* 2763 */    MCD::OPC_Decode, 157, 3, 31, // Opcode: FMOVS
/* 2767 */    MCD::OPC_FilterValue, 2, 16, 0, 0, // Skip to: 2788
/* 2772 */    MCD::OPC_CheckPredicate, 0, 78, 20, 0, // Skip to: 7975
/* 2777 */    MCD::OPC_CheckField, 14, 5, 0, 71, 20, 0, // Skip to: 7975
/* 2784 */    MCD::OPC_Decode, 131, 3, 32, // Opcode: FMOVD
/* 2788 */    MCD::OPC_FilterValue, 3, 16, 0, 0, // Skip to: 2809
/* 2793 */    MCD::OPC_CheckPredicate, 0, 57, 20, 0, // Skip to: 7975
/* 2798 */    MCD::OPC_CheckField, 14, 5, 0, 50, 20, 0, // Skip to: 7975
/* 2805 */    MCD::OPC_Decode, 135, 3, 33, // Opcode: FMOVQ
/* 2809 */    MCD::OPC_FilterValue, 5, 11, 0, 0, // Skip to: 2825
/* 2814 */    MCD::OPC_CheckField, 14, 5, 0, 34, 20, 0, // Skip to: 7975
/* 2821 */    MCD::OPC_Decode, 177, 3, 31, // Opcode: FNEGS
/* 2825 */    MCD::OPC_FilterValue, 6, 16, 0, 0, // Skip to: 2846
/* 2830 */    MCD::OPC_CheckPredicate, 0, 20, 20, 0, // Skip to: 7975
/* 2835 */    MCD::OPC_CheckField, 14, 5, 0, 13, 20, 0, // Skip to: 7975
/* 2842 */    MCD::OPC_Decode, 175, 3, 32, // Opcode: FNEGD
/* 2846 */    MCD::OPC_FilterValue, 7, 16, 0, 0, // Skip to: 2867
/* 2851 */    MCD::OPC_CheckPredicate, 0, 255, 19, 0, // Skip to: 7975
/* 2856 */    MCD::OPC_CheckField, 14, 5, 0, 248, 19, 0, // Skip to: 7975
/* 2863 */    MCD::OPC_Decode, 176, 3, 33, // Opcode: FNEGQ
/* 2867 */    MCD::OPC_FilterValue, 9, 11, 0, 0, // Skip to: 2883
/* 2872 */    MCD::OPC_CheckField, 14, 5, 0, 232, 19, 0, // Skip to: 7975
/* 2879 */    MCD::OPC_Decode, 211, 2, 31, // Opcode: FABSS
/* 2883 */    MCD::OPC_FilterValue, 10, 16, 0, 0, // Skip to: 2904
/* 2888 */    MCD::OPC_CheckPredicate, 0, 218, 19, 0, // Skip to: 7975
/* 2893 */    MCD::OPC_CheckField, 14, 5, 0, 211, 19, 0, // Skip to: 7975
/* 2900 */    MCD::OPC_Decode, 209, 2, 32, // Opcode: FABSD
/* 2904 */    MCD::OPC_FilterValue, 11, 16, 0, 0, // Skip to: 2925
/* 2909 */    MCD::OPC_CheckPredicate, 0, 197, 19, 0, // Skip to: 7975
/* 2914 */    MCD::OPC_CheckField, 14, 5, 0, 190, 19, 0, // Skip to: 7975
/* 2921 */    MCD::OPC_Decode, 210, 2, 33, // Opcode: FABSQ
/* 2925 */    MCD::OPC_FilterValue, 41, 11, 0, 0, // Skip to: 2941
/* 2930 */    MCD::OPC_CheckField, 14, 5, 0, 174, 19, 0, // Skip to: 7975
/* 2937 */    MCD::OPC_Decode, 221, 3, 31, // Opcode: FSQRTS
/* 2941 */    MCD::OPC_FilterValue, 42, 11, 0, 0, // Skip to: 2957
/* 2946 */    MCD::OPC_CheckField, 14, 5, 0, 158, 19, 0, // Skip to: 7975
/* 2953 */    MCD::OPC_Decode, 219, 3, 32, // Opcode: FSQRTD
/* 2957 */    MCD::OPC_FilterValue, 43, 11, 0, 0, // Skip to: 2973
/* 2962 */    MCD::OPC_CheckField, 14, 5, 0, 142, 19, 0, // Skip to: 7975
/* 2969 */    MCD::OPC_Decode, 220, 3, 33, // Opcode: FSQRTQ
/* 2973 */    MCD::OPC_FilterValue, 65, 4, 0, 0, // Skip to: 2982
/* 2978 */    MCD::OPC_Decode, 214, 2, 34, // Opcode: FADDS
/* 2982 */    MCD::OPC_FilterValue, 66, 4, 0, 0, // Skip to: 2991
/* 2987 */    MCD::OPC_Decode, 212, 2, 35, // Opcode: FADDD
/* 2991 */    MCD::OPC_FilterValue, 67, 4, 0, 0, // Skip to: 3000
/* 2996 */    MCD::OPC_Decode, 213, 2, 36, // Opcode: FADDQ
/* 3000 */    MCD::OPC_FilterValue, 69, 4, 0, 0, // Skip to: 3009
/* 3005 */    MCD::OPC_Decode, 236, 3, 34, // Opcode: FSUBS
/* 3009 */    MCD::OPC_FilterValue, 70, 4, 0, 0, // Skip to: 3018
/* 3014 */    MCD::OPC_Decode, 234, 3, 35, // Opcode: FSUBD
/* 3018 */    MCD::OPC_FilterValue, 71, 4, 0, 0, // Skip to: 3027
/* 3023 */    MCD::OPC_Decode, 235, 3, 36, // Opcode: FSUBQ
/* 3027 */    MCD::OPC_FilterValue, 73, 4, 0, 0, // Skip to: 3036
/* 3032 */    MCD::OPC_Decode, 170, 3, 34, // Opcode: FMULS
/* 3036 */    MCD::OPC_FilterValue, 74, 4, 0, 0, // Skip to: 3045
/* 3041 */    MCD::OPC_Decode, 166, 3, 35, // Opcode: FMULD
/* 3045 */    MCD::OPC_FilterValue, 75, 4, 0, 0, // Skip to: 3054
/* 3050 */    MCD::OPC_Decode, 169, 3, 36, // Opcode: FMULQ
/* 3054 */    MCD::OPC_FilterValue, 77, 4, 0, 0, // Skip to: 3063
/* 3059 */    MCD::OPC_Decode, 238, 2, 34, // Opcode: FDIVS
/* 3063 */    MCD::OPC_FilterValue, 78, 4, 0, 0, // Skip to: 3072
/* 3068 */    MCD::OPC_Decode, 236, 2, 35, // Opcode: FDIVD
/* 3072 */    MCD::OPC_FilterValue, 79, 4, 0, 0, // Skip to: 3081
/* 3077 */    MCD::OPC_Decode, 237, 2, 36, // Opcode: FDIVQ
/* 3081 */    MCD::OPC_FilterValue, 81, 9, 0, 0, // Skip to: 3095
/* 3086 */    MCD::OPC_CheckPredicate, 2, 20, 19, 0, // Skip to: 7975
/* 3091 */    MCD::OPC_Decode, 172, 3, 35, // Opcode: FNADDS
/* 3095 */    MCD::OPC_FilterValue, 82, 9, 0, 0, // Skip to: 3109
/* 3100 */    MCD::OPC_CheckPredicate, 2, 6, 19, 0, // Skip to: 7975
/* 3105 */    MCD::OPC_Decode, 171, 3, 35, // Opcode: FNADDD
/* 3109 */    MCD::OPC_FilterValue, 89, 9, 0, 0, // Skip to: 3123
/* 3114 */    MCD::OPC_CheckPredicate, 2, 248, 18, 0, // Skip to: 7975
/* 3119 */    MCD::OPC_Decode, 181, 3, 35, // Opcode: FNMULS
/* 3123 */    MCD::OPC_FilterValue, 90, 9, 0, 0, // Skip to: 3137
/* 3128 */    MCD::OPC_CheckPredicate, 2, 234, 18, 0, // Skip to: 7975
/* 3133 */    MCD::OPC_Decode, 180, 3, 35, // Opcode: FNMULD
/* 3137 */    MCD::OPC_FilterValue, 97, 9, 0, 0, // Skip to: 3151
/* 3142 */    MCD::OPC_CheckPredicate, 2, 220, 18, 0, // Skip to: 7975
/* 3147 */    MCD::OPC_Decode, 246, 2, 35, // Opcode: FHADDS
/* 3151 */    MCD::OPC_FilterValue, 98, 9, 0, 0, // Skip to: 3165
/* 3156 */    MCD::OPC_CheckPredicate, 2, 206, 18, 0, // Skip to: 7975
/* 3161 */    MCD::OPC_Decode, 245, 2, 35, // Opcode: FHADDD
/* 3165 */    MCD::OPC_FilterValue, 101, 9, 0, 0, // Skip to: 3179
/* 3170 */    MCD::OPC_CheckPredicate, 2, 192, 18, 0, // Skip to: 7975
/* 3175 */    MCD::OPC_Decode, 248, 2, 35, // Opcode: FHSUBS
/* 3179 */    MCD::OPC_FilterValue, 102, 9, 0, 0, // Skip to: 3193
/* 3184 */    MCD::OPC_CheckPredicate, 2, 178, 18, 0, // Skip to: 7975
/* 3189 */    MCD::OPC_Decode, 247, 2, 35, // Opcode: FHSUBD
/* 3193 */    MCD::OPC_FilterValue, 105, 4, 0, 0, // Skip to: 3202
/* 3198 */    MCD::OPC_Decode, 218, 3, 37, // Opcode: FSMULD
/* 3202 */    MCD::OPC_FilterValue, 110, 4, 0, 0, // Skip to: 3211
/* 3207 */    MCD::OPC_Decode, 239, 2, 38, // Opcode: FDMULQ
/* 3211 */    MCD::OPC_FilterValue, 113, 9, 0, 0, // Skip to: 3225
/* 3216 */    MCD::OPC_CheckPredicate, 2, 146, 18, 0, // Skip to: 7975
/* 3221 */    MCD::OPC_Decode, 179, 3, 35, // Opcode: FNHADDS
/* 3225 */    MCD::OPC_FilterValue, 114, 9, 0, 0, // Skip to: 3239
/* 3230 */    MCD::OPC_CheckPredicate, 2, 132, 18, 0, // Skip to: 7975
/* 3235 */    MCD::OPC_Decode, 178, 3, 35, // Opcode: FNHADDD
/* 3239 */    MCD::OPC_FilterValue, 121, 9, 0, 0, // Skip to: 3253
/* 3244 */    MCD::OPC_CheckPredicate, 2, 118, 18, 0, // Skip to: 7975
/* 3249 */    MCD::OPC_Decode, 188, 3, 35, // Opcode: FNSMULD
/* 3253 */    MCD::OPC_FilterValue, 129, 1, 11, 0, 0, // Skip to: 3270
/* 3259 */    MCD::OPC_CheckField, 14, 5, 0, 101, 18, 0, // Skip to: 7975
/* 3266 */    MCD::OPC_Decode, 233, 3, 39, // Opcode: FSTOX
/* 3270 */    MCD::OPC_FilterValue, 130, 1, 11, 0, 0, // Skip to: 3287
/* 3276 */    MCD::OPC_CheckField, 14, 5, 0, 84, 18, 0, // Skip to: 7975
/* 3283 */    MCD::OPC_Decode, 243, 2, 32, // Opcode: FDTOX
/* 3287 */    MCD::OPC_FilterValue, 131, 1, 11, 0, 0, // Skip to: 3304
/* 3293 */    MCD::OPC_CheckField, 14, 5, 0, 67, 18, 0, // Skip to: 7975
/* 3300 */    MCD::OPC_Decode, 213, 3, 40, // Opcode: FQTOX
/* 3304 */    MCD::OPC_FilterValue, 132, 1, 11, 0, 0, // Skip to: 3321
/* 3310 */    MCD::OPC_CheckField, 14, 5, 0, 50, 18, 0, // Skip to: 7975
/* 3317 */    MCD::OPC_Decode, 243, 3, 41, // Opcode: FXTOS
/* 3321 */    MCD::OPC_FilterValue, 136, 1, 11, 0, 0, // Skip to: 3338
/* 3327 */    MCD::OPC_CheckField, 14, 5, 0, 33, 18, 0, // Skip to: 7975
/* 3334 */    MCD::OPC_Decode, 241, 3, 32, // Opcode: FXTOD
/* 3338 */    MCD::OPC_FilterValue, 140, 1, 11, 0, 0, // Skip to: 3355
/* 3344 */    MCD::OPC_CheckField, 14, 5, 0, 16, 18, 0, // Skip to: 7975
/* 3351 */    MCD::OPC_Decode, 242, 3, 42, // Opcode: FXTOQ
/* 3355 */    MCD::OPC_FilterValue, 196, 1, 11, 0, 0, // Skip to: 3372
/* 3361 */    MCD::OPC_CheckField, 14, 5, 0, 255, 17, 0, // Skip to: 7975
/* 3368 */    MCD::OPC_Decode, 251, 2, 31, // Opcode: FITOS
/* 3372 */    MCD::OPC_FilterValue, 198, 1, 11, 0, 0, // Skip to: 3389
/* 3378 */    MCD::OPC_CheckField, 14, 5, 0, 238, 17, 0, // Skip to: 7975
/* 3385 */    MCD::OPC_Decode, 242, 2, 41, // Opcode: FDTOS
/* 3389 */    MCD::OPC_FilterValue, 199, 1, 11, 0, 0, // Skip to: 3406
/* 3395 */    MCD::OPC_CheckField, 14, 5, 0, 221, 17, 0, // Skip to: 7975
/* 3402 */    MCD::OPC_Decode, 212, 3, 43, // Opcode: FQTOS
/* 3406 */    MCD::OPC_FilterValue, 200, 1, 11, 0, 0, // Skip to: 3423
/* 3412 */    MCD::OPC_CheckField, 14, 5, 0, 204, 17, 0, // Skip to: 7975
/* 3419 */    MCD::OPC_Decode, 249, 2, 39, // Opcode: FITOD
/* 3423 */    MCD::OPC_FilterValue, 201, 1, 11, 0, 0, // Skip to: 3440
/* 3429 */    MCD::OPC_CheckField, 14, 5, 0, 187, 17, 0, // Skip to: 7975
/* 3436 */    MCD::OPC_Decode, 230, 3, 39, // Opcode: FSTOD
/* 3440 */    MCD::OPC_FilterValue, 203, 1, 11, 0, 0, // Skip to: 3457
/* 3446 */    MCD::OPC_CheckField, 14, 5, 0, 170, 17, 0, // Skip to: 7975
/* 3453 */    MCD::OPC_Decode, 210, 3, 40, // Opcode: FQTOD
/* 3457 */    MCD::OPC_FilterValue, 204, 1, 11, 0, 0, // Skip to: 3474
/* 3463 */    MCD::OPC_CheckField, 14, 5, 0, 153, 17, 0, // Skip to: 7975
/* 3470 */    MCD::OPC_Decode, 250, 2, 44, // Opcode: FITOQ
/* 3474 */    MCD::OPC_FilterValue, 205, 1, 11, 0, 0, // Skip to: 3491
/* 3480 */    MCD::OPC_CheckField, 14, 5, 0, 136, 17, 0, // Skip to: 7975
/* 3487 */    MCD::OPC_Decode, 232, 3, 44, // Opcode: FSTOQ
/* 3491 */    MCD::OPC_FilterValue, 206, 1, 11, 0, 0, // Skip to: 3508
/* 3497 */    MCD::OPC_CheckField, 14, 5, 0, 119, 17, 0, // Skip to: 7975
/* 3504 */    MCD::OPC_Decode, 241, 2, 42, // Opcode: FDTOQ
/* 3508 */    MCD::OPC_FilterValue, 209, 1, 11, 0, 0, // Skip to: 3525
/* 3514 */    MCD::OPC_CheckField, 14, 5, 0, 102, 17, 0, // Skip to: 7975
/* 3521 */    MCD::OPC_Decode, 231, 3, 31, // Opcode: FSTOI
/* 3525 */    MCD::OPC_FilterValue, 210, 1, 11, 0, 0, // Skip to: 3542
/* 3531 */    MCD::OPC_CheckField, 14, 5, 0, 85, 17, 0, // Skip to: 7975
/* 3538 */    MCD::OPC_Decode, 240, 2, 41, // Opcode: FDTOI
/* 3542 */    MCD::OPC_FilterValue, 211, 1, 75, 17, 0, // Skip to: 7975
/* 3548 */    MCD::OPC_CheckField, 14, 5, 0, 68, 17, 0, // Skip to: 7975
/* 3555 */    MCD::OPC_Decode, 211, 3, 43, // Opcode: FQTOI
/* 3559 */    MCD::OPC_FilterValue, 53, 160, 2, 0, // Skip to: 4236
/* 3564 */    MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 3567 */    MCD::OPC_FilterValue, 1, 86, 0, 0, // Skip to: 3658
/* 3572 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3575 */    MCD::OPC_FilterValue, 0, 33, 0, 0, // Skip to: 3613
/* 3580 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3583 */    MCD::OPC_FilterValue, 0, 35, 17, 0, // Skip to: 7975
/* 3588 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 3604
/* 3593 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 3604
/* 3600 */    MCD::OPC_Decode, 158, 3, 45, // Opcode: FMOVS_FCC
/* 3604 */    MCD::OPC_CheckPredicate, 0, 14, 17, 0, // Skip to: 7975
/* 3609 */    MCD::OPC_Decode, 220, 5, 46, // Opcode: V9FMOVS_FCC
/* 3613 */    MCD::OPC_FilterValue, 1, 5, 17, 0, // Skip to: 7975
/* 3618 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3621 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3642
/* 3626 */    MCD::OPC_CheckPredicate, 0, 248, 16, 0, // Skip to: 7975
/* 3631 */    MCD::OPC_CheckField, 18, 1, 0, 241, 16, 0, // Skip to: 7975
/* 3638 */    MCD::OPC_Decode, 159, 3, 45, // Opcode: FMOVS_ICC
/* 3642 */    MCD::OPC_FilterValue, 2, 232, 16, 0, // Skip to: 7975
/* 3647 */    MCD::OPC_CheckField, 18, 1, 0, 225, 16, 0, // Skip to: 7975
/* 3654 */    MCD::OPC_Decode, 160, 3, 45, // Opcode: FMOVS_XCC
/* 3658 */    MCD::OPC_FilterValue, 2, 86, 0, 0, // Skip to: 3749
/* 3663 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3666 */    MCD::OPC_FilterValue, 0, 33, 0, 0, // Skip to: 3704
/* 3671 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3674 */    MCD::OPC_FilterValue, 0, 200, 16, 0, // Skip to: 7975
/* 3679 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 3695
/* 3684 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 3695
/* 3691 */    MCD::OPC_Decode, 132, 3, 47, // Opcode: FMOVD_FCC
/* 3695 */    MCD::OPC_CheckPredicate, 0, 179, 16, 0, // Skip to: 7975
/* 3700 */    MCD::OPC_Decode, 218, 5, 48, // Opcode: V9FMOVD_FCC
/* 3704 */    MCD::OPC_FilterValue, 1, 170, 16, 0, // Skip to: 7975
/* 3709 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3712 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3733
/* 3717 */    MCD::OPC_CheckPredicate, 0, 157, 16, 0, // Skip to: 7975
/* 3722 */    MCD::OPC_CheckField, 18, 1, 0, 150, 16, 0, // Skip to: 7975
/* 3729 */    MCD::OPC_Decode, 133, 3, 47, // Opcode: FMOVD_ICC
/* 3733 */    MCD::OPC_FilterValue, 2, 141, 16, 0, // Skip to: 7975
/* 3738 */    MCD::OPC_CheckField, 18, 1, 0, 134, 16, 0, // Skip to: 7975
/* 3745 */    MCD::OPC_Decode, 134, 3, 47, // Opcode: FMOVD_XCC
/* 3749 */    MCD::OPC_FilterValue, 3, 86, 0, 0, // Skip to: 3840
/* 3754 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3757 */    MCD::OPC_FilterValue, 0, 33, 0, 0, // Skip to: 3795
/* 3762 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3765 */    MCD::OPC_FilterValue, 0, 109, 16, 0, // Skip to: 7975
/* 3770 */    MCD::OPC_CheckPredicate, 0, 11, 0, 0, // Skip to: 3786
/* 3775 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, 0, // Skip to: 3786
/* 3782 */    MCD::OPC_Decode, 136, 3, 49, // Opcode: FMOVQ_FCC
/* 3786 */    MCD::OPC_CheckPredicate, 0, 88, 16, 0, // Skip to: 7975
/* 3791 */    MCD::OPC_Decode, 219, 5, 50, // Opcode: V9FMOVQ_FCC
/* 3795 */    MCD::OPC_FilterValue, 1, 79, 16, 0, // Skip to: 7975
/* 3800 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3803 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 3824
/* 3808 */    MCD::OPC_CheckPredicate, 0, 66, 16, 0, // Skip to: 7975
/* 3813 */    MCD::OPC_CheckField, 18, 1, 0, 59, 16, 0, // Skip to: 7975
/* 3820 */    MCD::OPC_Decode, 137, 3, 49, // Opcode: FMOVQ_ICC
/* 3824 */    MCD::OPC_FilterValue, 2, 50, 16, 0, // Skip to: 7975
/* 3829 */    MCD::OPC_CheckField, 18, 1, 0, 43, 16, 0, // Skip to: 7975
/* 3836 */    MCD::OPC_Decode, 138, 3, 49, // Opcode: FMOVQ_XCC
/* 3840 */    MCD::OPC_FilterValue, 5, 31, 0, 0, // Skip to: 3876
/* 3845 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3848 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3862
/* 3853 */    MCD::OPC_CheckPredicate, 0, 21, 16, 0, // Skip to: 7975
/* 3858 */    MCD::OPC_Decode, 147, 3, 51, // Opcode: FMOVRLEZS
/* 3862 */    MCD::OPC_FilterValue, 3, 12, 16, 0, // Skip to: 7975
/* 3867 */    MCD::OPC_CheckPredicate, 0, 7, 16, 0, // Skip to: 7975
/* 3872 */    MCD::OPC_Decode, 144, 3, 51, // Opcode: FMOVRGZS
/* 3876 */    MCD::OPC_FilterValue, 6, 31, 0, 0, // Skip to: 3912
/* 3881 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3884 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3898
/* 3889 */    MCD::OPC_CheckPredicate, 0, 241, 15, 0, // Skip to: 7975
/* 3894 */    MCD::OPC_Decode, 145, 3, 51, // Opcode: FMOVRLEZD
/* 3898 */    MCD::OPC_FilterValue, 3, 232, 15, 0, // Skip to: 7975
/* 3903 */    MCD::OPC_CheckPredicate, 0, 227, 15, 0, // Skip to: 7975
/* 3908 */    MCD::OPC_Decode, 142, 3, 51, // Opcode: FMOVRGZD
/* 3912 */    MCD::OPC_FilterValue, 7, 31, 0, 0, // Skip to: 3948
/* 3917 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3920 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 3934
/* 3925 */    MCD::OPC_CheckPredicate, 0, 205, 15, 0, // Skip to: 7975
/* 3930 */    MCD::OPC_Decode, 146, 3, 51, // Opcode: FMOVRLEZQ
/* 3934 */    MCD::OPC_FilterValue, 3, 196, 15, 0, // Skip to: 7975
/* 3939 */    MCD::OPC_CheckPredicate, 0, 191, 15, 0, // Skip to: 7975
/* 3944 */    MCD::OPC_Decode, 143, 3, 51, // Opcode: FMOVRGZQ
/* 3948 */    MCD::OPC_FilterValue, 17, 11, 0, 0, // Skip to: 3964
/* 3953 */    MCD::OPC_CheckField, 11, 3, 1, 175, 15, 0, // Skip to: 7975
/* 3960 */    MCD::OPC_Decode, 217, 5, 52, // Opcode: V9FCMPS
/* 3964 */    MCD::OPC_FilterValue, 18, 11, 0, 0, // Skip to: 3980
/* 3969 */    MCD::OPC_CheckField, 11, 3, 1, 159, 15, 0, // Skip to: 7975
/* 3976 */    MCD::OPC_Decode, 212, 5, 53, // Opcode: V9FCMPD
/* 3980 */    MCD::OPC_FilterValue, 19, 11, 0, 0, // Skip to: 3996
/* 3985 */    MCD::OPC_CheckField, 11, 3, 1, 143, 15, 0, // Skip to: 7975
/* 3992 */    MCD::OPC_Decode, 216, 5, 54, // Opcode: V9FCMPQ
/* 3996 */    MCD::OPC_FilterValue, 21, 11, 0, 0, // Skip to: 4012
/* 4001 */    MCD::OPC_CheckField, 11, 3, 1, 127, 15, 0, // Skip to: 7975
/* 4008 */    MCD::OPC_Decode, 215, 5, 52, // Opcode: V9FCMPES
/* 4012 */    MCD::OPC_FilterValue, 22, 11, 0, 0, // Skip to: 4028
/* 4017 */    MCD::OPC_CheckField, 11, 3, 1, 111, 15, 0, // Skip to: 7975
/* 4024 */    MCD::OPC_Decode, 213, 5, 53, // Opcode: V9FCMPED
/* 4028 */    MCD::OPC_FilterValue, 23, 11, 0, 0, // Skip to: 4044
/* 4033 */    MCD::OPC_CheckField, 11, 3, 1, 95, 15, 0, // Skip to: 7975
/* 4040 */    MCD::OPC_Decode, 214, 5, 54, // Opcode: V9FCMPEQ
/* 4044 */    MCD::OPC_FilterValue, 37, 59, 0, 0, // Skip to: 4108
/* 4049 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 4052 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4066
/* 4057 */    MCD::OPC_CheckPredicate, 0, 73, 15, 0, // Skip to: 7975
/* 4062 */    MCD::OPC_Decode, 156, 3, 51, // Opcode: FMOVRZS
/* 4066 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4080
/* 4071 */    MCD::OPC_CheckPredicate, 0, 59, 15, 0, // Skip to: 7975
/* 4076 */    MCD::OPC_Decode, 150, 3, 51, // Opcode: FMOVRLZS
/* 4080 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4094
/* 4085 */    MCD::OPC_CheckPredicate, 0, 45, 15, 0, // Skip to: 7975
/* 4090 */    MCD::OPC_Decode, 153, 3, 51, // Opcode: FMOVRNZS
/* 4094 */    MCD::OPC_FilterValue, 3, 36, 15, 0, // Skip to: 7975
/* 4099 */    MCD::OPC_CheckPredicate, 0, 31, 15, 0, // Skip to: 7975
/* 4104 */    MCD::OPC_Decode, 141, 3, 51, // Opcode: FMOVRGEZS
/* 4108 */    MCD::OPC_FilterValue, 38, 59, 0, 0, // Skip to: 4172
/* 4113 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 4116 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4130
/* 4121 */    MCD::OPC_CheckPredicate, 0, 9, 15, 0, // Skip to: 7975
/* 4126 */    MCD::OPC_Decode, 154, 3, 51, // Opcode: FMOVRZD
/* 4130 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4144
/* 4135 */    MCD::OPC_CheckPredicate, 0, 251, 14, 0, // Skip to: 7975
/* 4140 */    MCD::OPC_Decode, 148, 3, 51, // Opcode: FMOVRLZD
/* 4144 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4158
/* 4149 */    MCD::OPC_CheckPredicate, 0, 237, 14, 0, // Skip to: 7975
/* 4154 */    MCD::OPC_Decode, 151, 3, 51, // Opcode: FMOVRNZD
/* 4158 */    MCD::OPC_FilterValue, 3, 228, 14, 0, // Skip to: 7975
/* 4163 */    MCD::OPC_CheckPredicate, 0, 223, 14, 0, // Skip to: 7975
/* 4168 */    MCD::OPC_Decode, 139, 3, 51, // Opcode: FMOVRGEZD
/* 4172 */    MCD::OPC_FilterValue, 39, 214, 14, 0, // Skip to: 7975
/* 4177 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 4180 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4194
/* 4185 */    MCD::OPC_CheckPredicate, 0, 201, 14, 0, // Skip to: 7975
/* 4190 */    MCD::OPC_Decode, 155, 3, 51, // Opcode: FMOVRZQ
/* 4194 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4208
/* 4199 */    MCD::OPC_CheckPredicate, 0, 187, 14, 0, // Skip to: 7975
/* 4204 */    MCD::OPC_Decode, 149, 3, 51, // Opcode: FMOVRLZQ
/* 4208 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4222
/* 4213 */    MCD::OPC_CheckPredicate, 0, 173, 14, 0, // Skip to: 7975
/* 4218 */    MCD::OPC_Decode, 152, 3, 51, // Opcode: FMOVRNZQ
/* 4222 */    MCD::OPC_FilterValue, 3, 164, 14, 0, // Skip to: 7975
/* 4227 */    MCD::OPC_CheckPredicate, 0, 159, 14, 0, // Skip to: 7975
/* 4232 */    MCD::OPC_Decode, 140, 3, 51, // Opcode: FMOVRGEZQ
/* 4236 */    MCD::OPC_FilterValue, 54, 35, 7, 0, // Skip to: 6068
/* 4241 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 4244 */    MCD::OPC_FilterValue, 0, 9, 0, 0, // Skip to: 4258
/* 4249 */    MCD::OPC_CheckPredicate, 3, 137, 14, 0, // Skip to: 7975
/* 4254 */    MCD::OPC_Decode, 205, 2, 10, // Opcode: EDGE8
/* 4258 */    MCD::OPC_FilterValue, 1, 9, 0, 0, // Skip to: 4272
/* 4263 */    MCD::OPC_CheckPredicate, 4, 123, 14, 0, // Skip to: 7975
/* 4268 */    MCD::OPC_Decode, 208, 2, 10, // Opcode: EDGE8N
/* 4272 */    MCD::OPC_FilterValue, 2, 9, 0, 0, // Skip to: 4286
/* 4277 */    MCD::OPC_CheckPredicate, 3, 109, 14, 0, // Skip to: 7975
/* 4282 */    MCD::OPC_Decode, 206, 2, 10, // Opcode: EDGE8L
/* 4286 */    MCD::OPC_FilterValue, 3, 9, 0, 0, // Skip to: 4300
/* 4291 */    MCD::OPC_CheckPredicate, 4, 95, 14, 0, // Skip to: 7975
/* 4296 */    MCD::OPC_Decode, 207, 2, 10, // Opcode: EDGE8LN
/* 4300 */    MCD::OPC_FilterValue, 4, 9, 0, 0, // Skip to: 4314
/* 4305 */    MCD::OPC_CheckPredicate, 3, 81, 14, 0, // Skip to: 7975
/* 4310 */    MCD::OPC_Decode, 197, 2, 10, // Opcode: EDGE16
/* 4314 */    MCD::OPC_FilterValue, 5, 9, 0, 0, // Skip to: 4328
/* 4319 */    MCD::OPC_CheckPredicate, 4, 67, 14, 0, // Skip to: 7975
/* 4324 */    MCD::OPC_Decode, 200, 2, 10, // Opcode: EDGE16N
/* 4328 */    MCD::OPC_FilterValue, 6, 9, 0, 0, // Skip to: 4342
/* 4333 */    MCD::OPC_CheckPredicate, 3, 53, 14, 0, // Skip to: 7975
/* 4338 */    MCD::OPC_Decode, 198, 2, 10, // Opcode: EDGE16L
/* 4342 */    MCD::OPC_FilterValue, 7, 9, 0, 0, // Skip to: 4356
/* 4347 */    MCD::OPC_CheckPredicate, 4, 39, 14, 0, // Skip to: 7975
/* 4352 */    MCD::OPC_Decode, 199, 2, 10, // Opcode: EDGE16LN
/* 4356 */    MCD::OPC_FilterValue, 8, 9, 0, 0, // Skip to: 4370
/* 4361 */    MCD::OPC_CheckPredicate, 3, 25, 14, 0, // Skip to: 7975
/* 4366 */    MCD::OPC_Decode, 201, 2, 10, // Opcode: EDGE32
/* 4370 */    MCD::OPC_FilterValue, 9, 9, 0, 0, // Skip to: 4384
/* 4375 */    MCD::OPC_CheckPredicate, 4, 11, 14, 0, // Skip to: 7975
/* 4380 */    MCD::OPC_Decode, 204, 2, 10, // Opcode: EDGE32N
/* 4384 */    MCD::OPC_FilterValue, 10, 9, 0, 0, // Skip to: 4398
/* 4389 */    MCD::OPC_CheckPredicate, 3, 253, 13, 0, // Skip to: 7975
/* 4394 */    MCD::OPC_Decode, 202, 2, 10, // Opcode: EDGE32L
/* 4398 */    MCD::OPC_FilterValue, 11, 9, 0, 0, // Skip to: 4412
/* 4403 */    MCD::OPC_CheckPredicate, 4, 239, 13, 0, // Skip to: 7975
/* 4408 */    MCD::OPC_Decode, 203, 2, 10, // Opcode: EDGE32LN
/* 4412 */    MCD::OPC_FilterValue, 16, 9, 0, 0, // Skip to: 4426
/* 4417 */    MCD::OPC_CheckPredicate, 3, 225, 13, 0, // Skip to: 7975
/* 4422 */    MCD::OPC_Decode, 139, 2, 10, // Opcode: ARRAY8
/* 4426 */    MCD::OPC_FilterValue, 17, 9, 0, 0, // Skip to: 4440
/* 4431 */    MCD::OPC_CheckPredicate, 2, 211, 13, 0, // Skip to: 7975
/* 4436 */    MCD::OPC_Decode, 246, 1, 10, // Opcode: ADDXC
/* 4440 */    MCD::OPC_FilterValue, 18, 9, 0, 0, // Skip to: 4454
/* 4445 */    MCD::OPC_CheckPredicate, 3, 197, 13, 0, // Skip to: 7975
/* 4450 */    MCD::OPC_Decode, 137, 2, 10, // Opcode: ARRAY16
/* 4454 */    MCD::OPC_FilterValue, 19, 9, 0, 0, // Skip to: 4468
/* 4459 */    MCD::OPC_CheckPredicate, 2, 183, 13, 0, // Skip to: 7975
/* 4464 */    MCD::OPC_Decode, 247, 1, 10, // Opcode: ADDXCCC
/* 4468 */    MCD::OPC_FilterValue, 20, 9, 0, 0, // Skip to: 4482
/* 4473 */    MCD::OPC_CheckPredicate, 3, 169, 13, 0, // Skip to: 7975
/* 4478 */    MCD::OPC_Decode, 138, 2, 10, // Opcode: ARRAY32
/* 4482 */    MCD::OPC_FilterValue, 22, 9, 0, 0, // Skip to: 4496
/* 4487 */    MCD::OPC_CheckPredicate, 2, 155, 13, 0, // Skip to: 7975
/* 4492 */    MCD::OPC_Decode, 208, 5, 10, // Opcode: UMULXHI
/* 4496 */    MCD::OPC_FilterValue, 23, 16, 0, 0, // Skip to: 4517
/* 4501 */    MCD::OPC_CheckPredicate, 2, 141, 13, 0, // Skip to: 7975
/* 4506 */    MCD::OPC_CheckField, 14, 5, 0, 134, 13, 0, // Skip to: 7975
/* 4513 */    MCD::OPC_Decode, 166, 4, 55, // Opcode: LZCNT
/* 4517 */    MCD::OPC_FilterValue, 24, 9, 0, 0, // Skip to: 4531
/* 4522 */    MCD::OPC_CheckPredicate, 3, 120, 13, 0, // Skip to: 7975
/* 4527 */    MCD::OPC_Decode, 252, 1, 10, // Opcode: ALIGNADDR
/* 4531 */    MCD::OPC_FilterValue, 25, 9, 0, 0, // Skip to: 4545
/* 4536 */    MCD::OPC_CheckPredicate, 4, 106, 13, 0, // Skip to: 7975
/* 4541 */    MCD::OPC_Decode, 145, 2, 10, // Opcode: BMASK
/* 4545 */    MCD::OPC_FilterValue, 26, 9, 0, 0, // Skip to: 4559
/* 4550 */    MCD::OPC_CheckPredicate, 3, 92, 13, 0, // Skip to: 7975
/* 4555 */    MCD::OPC_Decode, 253, 1, 10, // Opcode: ALIGNADDRL
/* 4559 */    MCD::OPC_FilterValue, 27, 23, 0, 0, // Skip to: 4587
/* 4564 */    MCD::OPC_CheckPredicate, 2, 78, 13, 0, // Skip to: 7975
/* 4569 */    MCD::OPC_CheckField, 25, 5, 0, 71, 13, 0, // Skip to: 7975
/* 4576 */    MCD::OPC_CheckField, 14, 5, 0, 64, 13, 0, // Skip to: 7975
/* 4583 */    MCD::OPC_Decode, 194, 2, 56, // Opcode: CMASK8
/* 4587 */    MCD::OPC_FilterValue, 28, 9, 0, 0, // Skip to: 4601
/* 4592 */    MCD::OPC_CheckPredicate, 4, 50, 13, 0, // Skip to: 7975
/* 4597 */    MCD::OPC_Decode, 182, 2, 35, // Opcode: BSHUFFLE
/* 4601 */    MCD::OPC_FilterValue, 29, 23, 0, 0, // Skip to: 4629
/* 4606 */    MCD::OPC_CheckPredicate, 2, 36, 13, 0, // Skip to: 7975
/* 4611 */    MCD::OPC_CheckField, 25, 5, 0, 29, 13, 0, // Skip to: 7975
/* 4618 */    MCD::OPC_CheckField, 14, 5, 0, 22, 13, 0, // Skip to: 7975
/* 4625 */    MCD::OPC_Decode, 192, 2, 56, // Opcode: CMASK16
/* 4629 */    MCD::OPC_FilterValue, 31, 23, 0, 0, // Skip to: 4657
/* 4634 */    MCD::OPC_CheckPredicate, 2, 8, 13, 0, // Skip to: 7975
/* 4639 */    MCD::OPC_CheckField, 25, 5, 0, 1, 13, 0, // Skip to: 7975
/* 4646 */    MCD::OPC_CheckField, 14, 5, 0, 250, 12, 0, // Skip to: 7975
/* 4653 */    MCD::OPC_Decode, 193, 2, 56, // Opcode: CMASK32
/* 4657 */    MCD::OPC_FilterValue, 32, 9, 0, 0, // Skip to: 4671
/* 4662 */    MCD::OPC_CheckPredicate, 3, 236, 12, 0, // Skip to: 7975
/* 4667 */    MCD::OPC_Decode, 230, 2, 57, // Opcode: FCMPLE16
/* 4671 */    MCD::OPC_FilterValue, 33, 9, 0, 0, // Skip to: 4685
/* 4676 */    MCD::OPC_CheckPredicate, 2, 222, 12, 0, // Skip to: 7975
/* 4681 */    MCD::OPC_Decode, 216, 3, 35, // Opcode: FSLL16
/* 4685 */    MCD::OPC_FilterValue, 34, 9, 0, 0, // Skip to: 4699
/* 4690 */    MCD::OPC_CheckPredicate, 3, 208, 12, 0, // Skip to: 7975
/* 4695 */    MCD::OPC_Decode, 232, 2, 57, // Opcode: FCMPNE16
/* 4699 */    MCD::OPC_FilterValue, 35, 9, 0, 0, // Skip to: 4713
/* 4704 */    MCD::OPC_CheckPredicate, 2, 194, 12, 0, // Skip to: 7975
/* 4709 */    MCD::OPC_Decode, 228, 3, 35, // Opcode: FSRL16
/* 4713 */    MCD::OPC_FilterValue, 36, 9, 0, 0, // Skip to: 4727
/* 4718 */    MCD::OPC_CheckPredicate, 3, 180, 12, 0, // Skip to: 7975
/* 4723 */    MCD::OPC_Decode, 231, 2, 57, // Opcode: FCMPLE32
/* 4727 */    MCD::OPC_FilterValue, 37, 9, 0, 0, // Skip to: 4741
/* 4732 */    MCD::OPC_CheckPredicate, 2, 166, 12, 0, // Skip to: 7975
/* 4737 */    MCD::OPC_Decode, 217, 3, 35, // Opcode: FSLL32
/* 4741 */    MCD::OPC_FilterValue, 38, 9, 0, 0, // Skip to: 4755
/* 4746 */    MCD::OPC_CheckPredicate, 3, 152, 12, 0, // Skip to: 7975
/* 4751 */    MCD::OPC_Decode, 233, 2, 57, // Opcode: FCMPNE32
/* 4755 */    MCD::OPC_FilterValue, 39, 9, 0, 0, // Skip to: 4769
/* 4760 */    MCD::OPC_CheckPredicate, 2, 138, 12, 0, // Skip to: 7975
/* 4765 */    MCD::OPC_Decode, 229, 3, 35, // Opcode: FSRL32
/* 4769 */    MCD::OPC_FilterValue, 40, 9, 0, 0, // Skip to: 4783
/* 4774 */    MCD::OPC_CheckPredicate, 3, 124, 12, 0, // Skip to: 7975
/* 4779 */    MCD::OPC_Decode, 228, 2, 57, // Opcode: FCMPGT16
/* 4783 */    MCD::OPC_FilterValue, 41, 9, 0, 0, // Skip to: 4797
/* 4788 */    MCD::OPC_CheckPredicate, 2, 110, 12, 0, // Skip to: 7975
/* 4793 */    MCD::OPC_Decode, 214, 3, 35, // Opcode: FSLAS16
/* 4797 */    MCD::OPC_FilterValue, 42, 9, 0, 0, // Skip to: 4811
/* 4802 */    MCD::OPC_CheckPredicate, 3, 96, 12, 0, // Skip to: 7975
/* 4807 */    MCD::OPC_Decode, 226, 2, 57, // Opcode: FCMPEQ16
/* 4811 */    MCD::OPC_FilterValue, 43, 9, 0, 0, // Skip to: 4825
/* 4816 */    MCD::OPC_CheckPredicate, 2, 82, 12, 0, // Skip to: 7975
/* 4821 */    MCD::OPC_Decode, 222, 3, 35, // Opcode: FSRA16
/* 4825 */    MCD::OPC_FilterValue, 44, 9, 0, 0, // Skip to: 4839
/* 4830 */    MCD::OPC_CheckPredicate, 3, 68, 12, 0, // Skip to: 7975
/* 4835 */    MCD::OPC_Decode, 229, 2, 57, // Opcode: FCMPGT32
/* 4839 */    MCD::OPC_FilterValue, 45, 9, 0, 0, // Skip to: 4853
/* 4844 */    MCD::OPC_CheckPredicate, 2, 54, 12, 0, // Skip to: 7975
/* 4849 */    MCD::OPC_Decode, 215, 3, 35, // Opcode: FSLAS32
/* 4853 */    MCD::OPC_FilterValue, 46, 9, 0, 0, // Skip to: 4867
/* 4858 */    MCD::OPC_CheckPredicate, 3, 40, 12, 0, // Skip to: 7975
/* 4863 */    MCD::OPC_Decode, 227, 2, 57, // Opcode: FCMPEQ32
/* 4867 */    MCD::OPC_FilterValue, 47, 9, 0, 0, // Skip to: 4881
/* 4872 */    MCD::OPC_CheckPredicate, 2, 26, 12, 0, // Skip to: 7975
/* 4877 */    MCD::OPC_Decode, 223, 3, 35, // Opcode: FSRA32
/* 4881 */    MCD::OPC_FilterValue, 49, 9, 0, 0, // Skip to: 4895
/* 4886 */    MCD::OPC_CheckPredicate, 3, 12, 12, 0, // Skip to: 7975
/* 4891 */    MCD::OPC_Decode, 163, 3, 35, // Opcode: FMUL8X16
/* 4895 */    MCD::OPC_FilterValue, 51, 9, 0, 0, // Skip to: 4909
/* 4900 */    MCD::OPC_CheckPredicate, 3, 254, 11, 0, // Skip to: 7975
/* 4905 */    MCD::OPC_Decode, 165, 3, 35, // Opcode: FMUL8X16AU
/* 4909 */    MCD::OPC_FilterValue, 53, 9, 0, 0, // Skip to: 4923
/* 4914 */    MCD::OPC_CheckPredicate, 3, 240, 11, 0, // Skip to: 7975
/* 4919 */    MCD::OPC_Decode, 164, 3, 35, // Opcode: FMUL8X16AL
/* 4923 */    MCD::OPC_FilterValue, 54, 9, 0, 0, // Skip to: 4937
/* 4928 */    MCD::OPC_CheckPredicate, 3, 226, 11, 0, // Skip to: 7975
/* 4933 */    MCD::OPC_Decode, 161, 3, 35, // Opcode: FMUL8SUX16
/* 4937 */    MCD::OPC_FilterValue, 55, 9, 0, 0, // Skip to: 4951
/* 4942 */    MCD::OPC_CheckPredicate, 3, 212, 11, 0, // Skip to: 7975
/* 4947 */    MCD::OPC_Decode, 162, 3, 35, // Opcode: FMUL8ULX16
/* 4951 */    MCD::OPC_FilterValue, 56, 9, 0, 0, // Skip to: 4965
/* 4956 */    MCD::OPC_CheckPredicate, 3, 198, 11, 0, // Skip to: 7975
/* 4961 */    MCD::OPC_Decode, 167, 3, 35, // Opcode: FMULD8SUX16
/* 4965 */    MCD::OPC_FilterValue, 57, 9, 0, 0, // Skip to: 4979
/* 4970 */    MCD::OPC_CheckPredicate, 3, 184, 11, 0, // Skip to: 7975
/* 4975 */    MCD::OPC_Decode, 168, 3, 35, // Opcode: FMULD8ULX16
/* 4979 */    MCD::OPC_FilterValue, 58, 9, 0, 0, // Skip to: 4993
/* 4984 */    MCD::OPC_CheckPredicate, 3, 170, 11, 0, // Skip to: 7975
/* 4989 */    MCD::OPC_Decode, 198, 3, 35, // Opcode: FPACK32
/* 4993 */    MCD::OPC_FilterValue, 59, 16, 0, 0, // Skip to: 5014
/* 4998 */    MCD::OPC_CheckPredicate, 3, 156, 11, 0, // Skip to: 7975
/* 5003 */    MCD::OPC_CheckField, 14, 5, 0, 149, 11, 0, // Skip to: 7975
/* 5010 */    MCD::OPC_Decode, 197, 3, 32, // Opcode: FPACK16
/* 5014 */    MCD::OPC_FilterValue, 61, 16, 0, 0, // Skip to: 5035
/* 5019 */    MCD::OPC_CheckPredicate, 3, 135, 11, 0, // Skip to: 7975
/* 5024 */    MCD::OPC_CheckField, 14, 5, 0, 128, 11, 0, // Skip to: 7975
/* 5031 */    MCD::OPC_Decode, 199, 3, 32, // Opcode: FPACKFIX
/* 5035 */    MCD::OPC_FilterValue, 62, 9, 0, 0, // Skip to: 5049
/* 5040 */    MCD::OPC_CheckPredicate, 3, 114, 11, 0, // Skip to: 7975
/* 5045 */    MCD::OPC_Decode, 207, 4, 35, // Opcode: PDIST
/* 5049 */    MCD::OPC_FilterValue, 63, 9, 0, 0, // Skip to: 5063
/* 5054 */    MCD::OPC_CheckPredicate, 2, 100, 11, 0, // Skip to: 7975
/* 5059 */    MCD::OPC_Decode, 208, 4, 35, // Opcode: PDISTN
/* 5063 */    MCD::OPC_FilterValue, 64, 9, 0, 0, // Skip to: 5077
/* 5068 */    MCD::OPC_CheckPredicate, 2, 86, 11, 0, // Skip to: 7975
/* 5073 */    MCD::OPC_Decode, 130, 3, 35, // Opcode: FMEAN16
/* 5077 */    MCD::OPC_FilterValue, 66, 9, 0, 0, // Skip to: 5091
/* 5082 */    MCD::OPC_CheckPredicate, 2, 72, 11, 0, // Skip to: 7975
/* 5087 */    MCD::OPC_Decode, 204, 3, 35, // Opcode: FPADD64
/* 5091 */    MCD::OPC_FilterValue, 68, 9, 0, 0, // Skip to: 5105
/* 5096 */    MCD::OPC_CheckPredicate, 2, 58, 11, 0, // Skip to: 7975
/* 5101 */    MCD::OPC_Decode, 224, 2, 35, // Opcode: FCHKSM16
/* 5105 */    MCD::OPC_FilterValue, 72, 9, 0, 0, // Skip to: 5119
/* 5110 */    MCD::OPC_CheckPredicate, 3, 44, 11, 0, // Skip to: 7975
/* 5115 */    MCD::OPC_Decode, 215, 2, 35, // Opcode: FALIGNADATA
/* 5119 */    MCD::OPC_FilterValue, 75, 9, 0, 0, // Skip to: 5133
/* 5124 */    MCD::OPC_CheckPredicate, 3, 30, 11, 0, // Skip to: 7975
/* 5129 */    MCD::OPC_Decode, 205, 3, 35, // Opcode: FPMERGE
/* 5133 */    MCD::OPC_FilterValue, 77, 16, 0, 0, // Skip to: 5154
/* 5138 */    MCD::OPC_CheckPredicate, 3, 16, 11, 0, // Skip to: 7975
/* 5143 */    MCD::OPC_CheckField, 14, 5, 0, 9, 11, 0, // Skip to: 7975
/* 5150 */    MCD::OPC_Decode, 244, 2, 32, // Opcode: FEXPAND
/* 5154 */    MCD::OPC_FilterValue, 80, 9, 0, 0, // Skip to: 5168
/* 5159 */    MCD::OPC_CheckPredicate, 3, 251, 10, 0, // Skip to: 7975
/* 5164 */    MCD::OPC_Decode, 200, 3, 35, // Opcode: FPADD16
/* 5168 */    MCD::OPC_FilterValue, 81, 9, 0, 0, // Skip to: 5182
/* 5173 */    MCD::OPC_CheckPredicate, 3, 237, 10, 0, // Skip to: 7975
/* 5178 */    MCD::OPC_Decode, 201, 3, 35, // Opcode: FPADD16S
/* 5182 */    MCD::OPC_FilterValue, 82, 9, 0, 0, // Skip to: 5196
/* 5187 */    MCD::OPC_CheckPredicate, 3, 223, 10, 0, // Skip to: 7975
/* 5192 */    MCD::OPC_Decode, 202, 3, 35, // Opcode: FPADD32
/* 5196 */    MCD::OPC_FilterValue, 83, 9, 0, 0, // Skip to: 5210
/* 5201 */    MCD::OPC_CheckPredicate, 3, 209, 10, 0, // Skip to: 7975
/* 5206 */    MCD::OPC_Decode, 203, 3, 35, // Opcode: FPADD32S
/* 5210 */    MCD::OPC_FilterValue, 84, 9, 0, 0, // Skip to: 5224
/* 5215 */    MCD::OPC_CheckPredicate, 3, 195, 10, 0, // Skip to: 7975
/* 5220 */    MCD::OPC_Decode, 206, 3, 35, // Opcode: FPSUB16
/* 5224 */    MCD::OPC_FilterValue, 85, 9, 0, 0, // Skip to: 5238
/* 5229 */    MCD::OPC_CheckPredicate, 3, 181, 10, 0, // Skip to: 7975
/* 5234 */    MCD::OPC_Decode, 207, 3, 35, // Opcode: FPSUB16S
/* 5238 */    MCD::OPC_FilterValue, 86, 9, 0, 0, // Skip to: 5252
/* 5243 */    MCD::OPC_CheckPredicate, 3, 167, 10, 0, // Skip to: 7975
/* 5248 */    MCD::OPC_Decode, 208, 3, 35, // Opcode: FPSUB32
/* 5252 */    MCD::OPC_FilterValue, 87, 9, 0, 0, // Skip to: 5266
/* 5257 */    MCD::OPC_CheckPredicate, 3, 153, 10, 0, // Skip to: 7975
/* 5262 */    MCD::OPC_Decode, 209, 3, 35, // Opcode: FPSUB32S
/* 5266 */    MCD::OPC_FilterValue, 96, 23, 0, 0, // Skip to: 5294
/* 5271 */    MCD::OPC_CheckPredicate, 3, 139, 10, 0, // Skip to: 7975
/* 5276 */    MCD::OPC_CheckField, 14, 5, 0, 132, 10, 0, // Skip to: 7975
/* 5283 */    MCD::OPC_CheckField, 0, 5, 0, 125, 10, 0, // Skip to: 7975
/* 5290 */    MCD::OPC_Decode, 244, 3, 58, // Opcode: FZERO
/* 5294 */    MCD::OPC_FilterValue, 97, 23, 0, 0, // Skip to: 5322
/* 5299 */    MCD::OPC_CheckPredicate, 3, 111, 10, 0, // Skip to: 7975
/* 5304 */    MCD::OPC_CheckField, 14, 5, 0, 104, 10, 0, // Skip to: 7975
/* 5311 */    MCD::OPC_CheckField, 0, 5, 0, 97, 10, 0, // Skip to: 7975
/* 5318 */    MCD::OPC_Decode, 245, 3, 59, // Opcode: FZEROS
/* 5322 */    MCD::OPC_FilterValue, 98, 9, 0, 0, // Skip to: 5336
/* 5327 */    MCD::OPC_CheckPredicate, 3, 83, 10, 0, // Skip to: 7975
/* 5332 */    MCD::OPC_Decode, 182, 3, 35, // Opcode: FNOR
/* 5336 */    MCD::OPC_FilterValue, 99, 9, 0, 0, // Skip to: 5350
/* 5341 */    MCD::OPC_CheckPredicate, 3, 69, 10, 0, // Skip to: 7975
/* 5346 */    MCD::OPC_Decode, 183, 3, 34, // Opcode: FNORS
/* 5350 */    MCD::OPC_FilterValue, 100, 9, 0, 0, // Skip to: 5364
/* 5355 */    MCD::OPC_CheckPredicate, 3, 55, 10, 0, // Skip to: 7975
/* 5360 */    MCD::OPC_Decode, 219, 2, 35, // Opcode: FANDNOT2
/* 5364 */    MCD::OPC_FilterValue, 101, 9, 0, 0, // Skip to: 5378
/* 5369 */    MCD::OPC_CheckPredicate, 3, 41, 10, 0, // Skip to: 7975
/* 5374 */    MCD::OPC_Decode, 220, 2, 34, // Opcode: FANDNOT2S
/* 5378 */    MCD::OPC_FilterValue, 102, 16, 0, 0, // Skip to: 5399
/* 5383 */    MCD::OPC_CheckPredicate, 3, 27, 10, 0, // Skip to: 7975
/* 5388 */    MCD::OPC_CheckField, 14, 5, 0, 20, 10, 0, // Skip to: 7975
/* 5395 */    MCD::OPC_Decode, 186, 3, 32, // Opcode: FNOT2
/* 5399 */    MCD::OPC_FilterValue, 103, 16, 0, 0, // Skip to: 5420
/* 5404 */    MCD::OPC_CheckPredicate, 3, 6, 10, 0, // Skip to: 7975
/* 5409 */    MCD::OPC_CheckField, 14, 5, 0, 255, 9, 0, // Skip to: 7975
/* 5416 */    MCD::OPC_Decode, 187, 3, 31, // Opcode: FNOT2S
/* 5420 */    MCD::OPC_FilterValue, 104, 9, 0, 0, // Skip to: 5434
/* 5425 */    MCD::OPC_CheckPredicate, 3, 241, 9, 0, // Skip to: 7975
/* 5430 */    MCD::OPC_Decode, 217, 2, 35, // Opcode: FANDNOT1
/* 5434 */    MCD::OPC_FilterValue, 105, 9, 0, 0, // Skip to: 5448
/* 5439 */    MCD::OPC_CheckPredicate, 3, 227, 9, 0, // Skip to: 7975
/* 5444 */    MCD::OPC_Decode, 218, 2, 34, // Opcode: FANDNOT1S
/* 5448 */    MCD::OPC_FilterValue, 106, 16, 0, 0, // Skip to: 5469
/* 5453 */    MCD::OPC_CheckPredicate, 3, 213, 9, 0, // Skip to: 7975
/* 5458 */    MCD::OPC_CheckField, 0, 5, 0, 206, 9, 0, // Skip to: 7975
/* 5465 */    MCD::OPC_Decode, 184, 3, 60, // Opcode: FNOT1
/* 5469 */    MCD::OPC_FilterValue, 107, 16, 0, 0, // Skip to: 5490
/* 5474 */    MCD::OPC_CheckPredicate, 3, 192, 9, 0, // Skip to: 7975
/* 5479 */    MCD::OPC_CheckField, 0, 5, 0, 185, 9, 0, // Skip to: 7975
/* 5486 */    MCD::OPC_Decode, 185, 3, 61, // Opcode: FNOT1S
/* 5490 */    MCD::OPC_FilterValue, 108, 9, 0, 0, // Skip to: 5504
/* 5495 */    MCD::OPC_CheckPredicate, 3, 171, 9, 0, // Skip to: 7975
/* 5500 */    MCD::OPC_Decode, 239, 3, 35, // Opcode: FXOR
/* 5504 */    MCD::OPC_FilterValue, 109, 9, 0, 0, // Skip to: 5518
/* 5509 */    MCD::OPC_CheckPredicate, 3, 157, 9, 0, // Skip to: 7975
/* 5514 */    MCD::OPC_Decode, 240, 3, 34, // Opcode: FXORS
/* 5518 */    MCD::OPC_FilterValue, 110, 9, 0, 0, // Skip to: 5532
/* 5523 */    MCD::OPC_CheckPredicate, 3, 143, 9, 0, // Skip to: 7975
/* 5528 */    MCD::OPC_Decode, 173, 3, 35, // Opcode: FNAND
/* 5532 */    MCD::OPC_FilterValue, 111, 9, 0, 0, // Skip to: 5546
/* 5537 */    MCD::OPC_CheckPredicate, 3, 129, 9, 0, // Skip to: 7975
/* 5542 */    MCD::OPC_Decode, 174, 3, 34, // Opcode: FNANDS
/* 5546 */    MCD::OPC_FilterValue, 112, 9, 0, 0, // Skip to: 5560
/* 5551 */    MCD::OPC_CheckPredicate, 3, 115, 9, 0, // Skip to: 7975
/* 5556 */    MCD::OPC_Decode, 216, 2, 35, // Opcode: FAND
/* 5560 */    MCD::OPC_FilterValue, 113, 9, 0, 0, // Skip to: 5574
/* 5565 */    MCD::OPC_CheckPredicate, 3, 101, 9, 0, // Skip to: 7975
/* 5570 */    MCD::OPC_Decode, 221, 2, 34, // Opcode: FANDS
/* 5574 */    MCD::OPC_FilterValue, 114, 9, 0, 0, // Skip to: 5588
/* 5579 */    MCD::OPC_CheckPredicate, 3, 87, 9, 0, // Skip to: 7975
/* 5584 */    MCD::OPC_Decode, 237, 3, 35, // Opcode: FXNOR
/* 5588 */    MCD::OPC_FilterValue, 115, 9, 0, 0, // Skip to: 5602
/* 5593 */    MCD::OPC_CheckPredicate, 3, 73, 9, 0, // Skip to: 7975
/* 5598 */    MCD::OPC_Decode, 238, 3, 34, // Opcode: FXNORS
/* 5602 */    MCD::OPC_FilterValue, 116, 16, 0, 0, // Skip to: 5623
/* 5607 */    MCD::OPC_CheckPredicate, 3, 59, 9, 0, // Skip to: 7975
/* 5612 */    MCD::OPC_CheckField, 0, 5, 0, 52, 9, 0, // Skip to: 7975
/* 5619 */    MCD::OPC_Decode, 224, 3, 60, // Opcode: FSRC1
/* 5623 */    MCD::OPC_FilterValue, 117, 16, 0, 0, // Skip to: 5644
/* 5628 */    MCD::OPC_CheckPredicate, 3, 38, 9, 0, // Skip to: 7975
/* 5633 */    MCD::OPC_CheckField, 0, 5, 0, 31, 9, 0, // Skip to: 7975
/* 5640 */    MCD::OPC_Decode, 225, 3, 61, // Opcode: FSRC1S
/* 5644 */    MCD::OPC_FilterValue, 118, 9, 0, 0, // Skip to: 5658
/* 5649 */    MCD::OPC_CheckPredicate, 3, 17, 9, 0, // Skip to: 7975
/* 5654 */    MCD::OPC_Decode, 194, 3, 35, // Opcode: FORNOT2
/* 5658 */    MCD::OPC_FilterValue, 119, 9, 0, 0, // Skip to: 5672
/* 5663 */    MCD::OPC_CheckPredicate, 3, 3, 9, 0, // Skip to: 7975
/* 5668 */    MCD::OPC_Decode, 195, 3, 34, // Opcode: FORNOT2S
/* 5672 */    MCD::OPC_FilterValue, 120, 16, 0, 0, // Skip to: 5693
/* 5677 */    MCD::OPC_CheckPredicate, 3, 245, 8, 0, // Skip to: 7975
/* 5682 */    MCD::OPC_CheckField, 14, 5, 0, 238, 8, 0, // Skip to: 7975
/* 5689 */    MCD::OPC_Decode, 226, 3, 32, // Opcode: FSRC2
/* 5693 */    MCD::OPC_FilterValue, 121, 16, 0, 0, // Skip to: 5714
/* 5698 */    MCD::OPC_CheckPredicate, 3, 224, 8, 0, // Skip to: 7975
/* 5703 */    MCD::OPC_CheckField, 14, 5, 0, 217, 8, 0, // Skip to: 7975
/* 5710 */    MCD::OPC_Decode, 227, 3, 31, // Opcode: FSRC2S
/* 5714 */    MCD::OPC_FilterValue, 122, 9, 0, 0, // Skip to: 5728
/* 5719 */    MCD::OPC_CheckPredicate, 3, 203, 8, 0, // Skip to: 7975
/* 5724 */    MCD::OPC_Decode, 192, 3, 35, // Opcode: FORNOT1
/* 5728 */    MCD::OPC_FilterValue, 123, 9, 0, 0, // Skip to: 5742
/* 5733 */    MCD::OPC_CheckPredicate, 3, 189, 8, 0, // Skip to: 7975
/* 5738 */    MCD::OPC_Decode, 193, 3, 34, // Opcode: FORNOT1S
/* 5742 */    MCD::OPC_FilterValue, 124, 9, 0, 0, // Skip to: 5756
/* 5747 */    MCD::OPC_CheckPredicate, 3, 175, 8, 0, // Skip to: 7975
/* 5752 */    MCD::OPC_Decode, 191, 3, 35, // Opcode: FOR
/* 5756 */    MCD::OPC_FilterValue, 125, 9, 0, 0, // Skip to: 5770
/* 5761 */    MCD::OPC_CheckPredicate, 3, 161, 8, 0, // Skip to: 7975
/* 5766 */    MCD::OPC_Decode, 196, 3, 34, // Opcode: FORS
/* 5770 */    MCD::OPC_FilterValue, 126, 23, 0, 0, // Skip to: 5798
/* 5775 */    MCD::OPC_CheckPredicate, 3, 147, 8, 0, // Skip to: 7975
/* 5780 */    MCD::OPC_CheckField, 14, 5, 0, 140, 8, 0, // Skip to: 7975
/* 5787 */    MCD::OPC_CheckField, 0, 5, 0, 133, 8, 0, // Skip to: 7975
/* 5794 */    MCD::OPC_Decode, 189, 3, 58, // Opcode: FONE
/* 5798 */    MCD::OPC_FilterValue, 127, 23, 0, 0, // Skip to: 5826
/* 5803 */    MCD::OPC_CheckPredicate, 3, 119, 8, 0, // Skip to: 7975
/* 5808 */    MCD::OPC_CheckField, 14, 5, 0, 112, 8, 0, // Skip to: 7975
/* 5815 */    MCD::OPC_CheckField, 0, 5, 0, 105, 8, 0, // Skip to: 7975
/* 5822 */    MCD::OPC_Decode, 190, 3, 59, // Opcode: FONES
/* 5826 */    MCD::OPC_FilterValue, 128, 1, 30, 0, 0, // Skip to: 5862
/* 5832 */    MCD::OPC_CheckPredicate, 3, 90, 8, 0, // Skip to: 7975
/* 5837 */    MCD::OPC_CheckField, 25, 5, 0, 83, 8, 0, // Skip to: 7975
/* 5844 */    MCD::OPC_CheckField, 14, 5, 0, 76, 8, 0, // Skip to: 7975
/* 5851 */    MCD::OPC_CheckField, 0, 5, 0, 69, 8, 0, // Skip to: 7975
/* 5858 */    MCD::OPC_Decode, 233, 4, 4, // Opcode: SHUTDOWN
/* 5862 */    MCD::OPC_FilterValue, 129, 1, 30, 0, 0, // Skip to: 5898
/* 5868 */    MCD::OPC_CheckPredicate, 4, 54, 8, 0, // Skip to: 7975
/* 5873 */    MCD::OPC_CheckField, 25, 5, 0, 47, 8, 0, // Skip to: 7975
/* 5880 */    MCD::OPC_CheckField, 14, 5, 0, 40, 8, 0, // Skip to: 7975
/* 5887 */    MCD::OPC_CheckField, 0, 5, 0, 33, 8, 0, // Skip to: 7975
/* 5894 */    MCD::OPC_Decode, 234, 4, 4, // Opcode: SIAM
/* 5898 */    MCD::OPC_FilterValue, 144, 2, 16, 0, 0, // Skip to: 5920
/* 5904 */    MCD::OPC_CheckPredicate, 2, 18, 8, 0, // Skip to: 7975
/* 5909 */    MCD::OPC_CheckField, 14, 5, 0, 11, 8, 0, // Skip to: 7975
/* 5916 */    MCD::OPC_Decode, 168, 4, 62, // Opcode: MOVDTOX
/* 5920 */    MCD::OPC_FilterValue, 145, 2, 16, 0, 0, // Skip to: 5942
/* 5926 */    MCD::OPC_CheckPredicate, 2, 252, 7, 0, // Skip to: 7975
/* 5931 */    MCD::OPC_CheckField, 14, 5, 0, 245, 7, 0, // Skip to: 7975
/* 5938 */    MCD::OPC_Decode, 186, 4, 62, // Opcode: MOVSTOUW
/* 5942 */    MCD::OPC_FilterValue, 147, 2, 16, 0, 0, // Skip to: 5964
/* 5948 */    MCD::OPC_CheckPredicate, 2, 230, 7, 0, // Skip to: 7975
/* 5953 */    MCD::OPC_CheckField, 14, 5, 0, 223, 7, 0, // Skip to: 7975
/* 5960 */    MCD::OPC_Decode, 185, 4, 62, // Opcode: MOVSTOSW
/* 5964 */    MCD::OPC_FilterValue, 149, 2, 9, 0, 0, // Skip to: 5979
/* 5970 */    MCD::OPC_CheckPredicate, 2, 208, 7, 0, // Skip to: 7975
/* 5975 */    MCD::OPC_Decode, 233, 5, 10, // Opcode: XMULX
/* 5979 */    MCD::OPC_FilterValue, 151, 2, 9, 0, 0, // Skip to: 5994
/* 5985 */    MCD::OPC_CheckPredicate, 2, 193, 7, 0, // Skip to: 7975
/* 5990 */    MCD::OPC_Decode, 234, 5, 10, // Opcode: XMULXHI
/* 5994 */    MCD::OPC_FilterValue, 152, 2, 16, 0, 0, // Skip to: 6016
/* 6000 */    MCD::OPC_CheckPredicate, 2, 178, 7, 0, // Skip to: 7975
/* 6005 */    MCD::OPC_CheckField, 14, 5, 0, 171, 7, 0, // Skip to: 7975
/* 6012 */    MCD::OPC_Decode, 190, 4, 63, // Opcode: MOVXTOD
/* 6016 */    MCD::OPC_FilterValue, 153, 2, 16, 0, 0, // Skip to: 6038
/* 6022 */    MCD::OPC_CheckPredicate, 2, 156, 7, 0, // Skip to: 7975
/* 6027 */    MCD::OPC_CheckField, 14, 5, 0, 149, 7, 0, // Skip to: 7975
/* 6034 */    MCD::OPC_Decode, 187, 4, 63, // Opcode: MOVWTOS
/* 6038 */    MCD::OPC_FilterValue, 209, 2, 9, 0, 0, // Skip to: 6053
/* 6044 */    MCD::OPC_CheckPredicate, 2, 134, 7, 0, // Skip to: 7975
/* 6049 */    MCD::OPC_Decode, 253, 2, 53, // Opcode: FLCMPS
/* 6053 */    MCD::OPC_FilterValue, 210, 2, 124, 7, 0, // Skip to: 7975
/* 6059 */    MCD::OPC_CheckPredicate, 2, 119, 7, 0, // Skip to: 7975
/* 6064 */    MCD::OPC_Decode, 252, 2, 53, // Opcode: FLCMPD
/* 6068 */    MCD::OPC_FilterValue, 56, 28, 0, 0, // Skip to: 6101
/* 6073 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6076 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6092
/* 6081 */    MCD::OPC_CheckField, 5, 8, 0, 95, 7, 0, // Skip to: 7975
/* 6088 */    MCD::OPC_Decode, 247, 3, 64, // Opcode: JMPLrr
/* 6092 */    MCD::OPC_FilterValue, 1, 86, 7, 0, // Skip to: 7975
/* 6097 */    MCD::OPC_Decode, 246, 3, 64, // Opcode: JMPLri
/* 6101 */    MCD::OPC_FilterValue, 57, 42, 0, 0, // Skip to: 6148
/* 6106 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6109 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 6132
/* 6114 */    MCD::OPC_CheckField, 25, 5, 0, 62, 7, 0, // Skip to: 7975
/* 6121 */    MCD::OPC_CheckField, 5, 8, 0, 55, 7, 0, // Skip to: 7975
/* 6128 */    MCD::OPC_Decode, 222, 4, 65, // Opcode: RETTrr
/* 6132 */    MCD::OPC_FilterValue, 1, 46, 7, 0, // Skip to: 7975
/* 6137 */    MCD::OPC_CheckField, 25, 5, 0, 39, 7, 0, // Skip to: 7975
/* 6144 */    MCD::OPC_Decode, 221, 4, 65, // Opcode: RETTri
/* 6148 */    MCD::OPC_FilterValue, 58, 119, 0, 0, // Skip to: 6272
/* 6153 */    MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 6156 */    MCD::OPC_FilterValue, 16, 18, 0, 0, // Skip to: 6179
/* 6161 */    MCD::OPC_CheckField, 29, 1, 0, 15, 7, 0, // Skip to: 7975
/* 6168 */    MCD::OPC_CheckField, 5, 3, 0, 8, 7, 0, // Skip to: 7975
/* 6175 */    MCD::OPC_Decode, 197, 5, 66, // Opcode: TXCCrr
/* 6179 */    MCD::OPC_FilterValue, 32, 72, 0, 0, // Skip to: 6256
/* 6184 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 6187 */    MCD::OPC_FilterValue, 1, 18, 0, 0, // Skip to: 6210
/* 6192 */    MCD::OPC_CheckField, 25, 5, 8, 240, 6, 0, // Skip to: 7975
/* 6199 */    MCD::OPC_CheckField, 14, 5, 0, 233, 6, 0, // Skip to: 7975
/* 6206 */    MCD::OPC_Decode, 176, 5, 4, // Opcode: TA1
/* 6210 */    MCD::OPC_FilterValue, 3, 18, 0, 0, // Skip to: 6233
/* 6215 */    MCD::OPC_CheckField, 25, 5, 8, 217, 6, 0, // Skip to: 7975
/* 6222 */    MCD::OPC_CheckField, 14, 5, 0, 210, 6, 0, // Skip to: 7975
/* 6229 */    MCD::OPC_Decode, 177, 5, 4, // Opcode: TA3
/* 6233 */    MCD::OPC_FilterValue, 5, 201, 6, 0, // Skip to: 7975
/* 6238 */    MCD::OPC_CheckField, 25, 5, 8, 194, 6, 0, // Skip to: 7975
/* 6245 */    MCD::OPC_CheckField, 14, 5, 0, 187, 6, 0, // Skip to: 7975
/* 6252 */    MCD::OPC_Decode, 178, 5, 4, // Opcode: TA5
/* 6256 */    MCD::OPC_FilterValue, 48, 178, 6, 0, // Skip to: 7975
/* 6261 */    MCD::OPC_CheckField, 29, 1, 0, 171, 6, 0, // Skip to: 7975
/* 6268 */    MCD::OPC_Decode, 196, 5, 67, // Opcode: TXCCri
/* 6272 */    MCD::OPC_FilterValue, 59, 62, 0, 0, // Skip to: 6339
/* 6277 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6280 */    MCD::OPC_FilterValue, 0, 38, 0, 0, // Skip to: 6323
/* 6285 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6288 */    MCD::OPC_FilterValue, 0, 146, 6, 0, // Skip to: 7975
/* 6293 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6296 */    MCD::OPC_FilterValue, 0, 138, 6, 0, // Skip to: 7975
/* 6301 */    MCD::OPC_CheckField, 14, 5, 0, 11, 0, 0, // Skip to: 6319
/* 6308 */    MCD::OPC_CheckField, 0, 5, 0, 4, 0, 0, // Skip to: 6319
/* 6315 */    MCD::OPC_Decode, 254, 2, 4, // Opcode: FLUSH
/* 6319 */    MCD::OPC_Decode, 129, 3, 4, // Opcode: FLUSHrr
/* 6323 */    MCD::OPC_FilterValue, 1, 111, 6, 0, // Skip to: 7975
/* 6328 */    MCD::OPC_CheckField, 25, 5, 0, 104, 6, 0, // Skip to: 7975
/* 6335 */    MCD::OPC_Decode, 128, 3, 4, // Opcode: FLUSHri
/* 6339 */    MCD::OPC_FilterValue, 60, 28, 0, 0, // Skip to: 6372
/* 6344 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6347 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6363
/* 6352 */    MCD::OPC_CheckField, 5, 8, 0, 80, 6, 0, // Skip to: 7975
/* 6359 */    MCD::OPC_Decode, 224, 4, 8, // Opcode: SAVErr
/* 6363 */    MCD::OPC_FilterValue, 1, 71, 6, 0, // Skip to: 7975
/* 6368 */    MCD::OPC_Decode, 223, 4, 9, // Opcode: SAVEri
/* 6372 */    MCD::OPC_FilterValue, 61, 28, 0, 0, // Skip to: 6405
/* 6377 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6380 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6396
/* 6385 */    MCD::OPC_CheckField, 5, 8, 0, 47, 6, 0, // Skip to: 7975
/* 6392 */    MCD::OPC_Decode, 218, 4, 8, // Opcode: RESTORErr
/* 6396 */    MCD::OPC_FilterValue, 1, 38, 6, 0, // Skip to: 7975
/* 6401 */    MCD::OPC_Decode, 217, 4, 9, // Opcode: RESTOREri
/* 6405 */    MCD::OPC_FilterValue, 62, 28, 0, 0, // Skip to: 6438
/* 6410 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6413 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6429
/* 6418 */    MCD::OPC_CheckField, 5, 8, 0, 14, 6, 0, // Skip to: 7975
/* 6425 */    MCD::OPC_Decode, 205, 5, 8, // Opcode: UMACrr
/* 6429 */    MCD::OPC_FilterValue, 1, 5, 6, 0, // Skip to: 7975
/* 6434 */    MCD::OPC_Decode, 204, 5, 9, // Opcode: UMACri
/* 6438 */    MCD::OPC_FilterValue, 63, 252, 5, 0, // Skip to: 7975
/* 6443 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6446 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6462
/* 6451 */    MCD::OPC_CheckField, 5, 8, 0, 237, 5, 0, // Skip to: 7975
/* 6458 */    MCD::OPC_Decode, 240, 4, 8, // Opcode: SMACrr
/* 6462 */    MCD::OPC_FilterValue, 1, 228, 5, 0, // Skip to: 7975
/* 6467 */    MCD::OPC_Decode, 239, 4, 9, // Opcode: SMACri
/* 6471 */    MCD::OPC_FilterValue, 3, 219, 5, 0, // Skip to: 7975
/* 6476 */    MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 6479 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 6512
/* 6484 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6487 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6503
/* 6492 */    MCD::OPC_CheckField, 5, 8, 0, 196, 5, 0, // Skip to: 7975
/* 6499 */    MCD::OPC_Decode, 163, 4, 68, // Opcode: LDrr
/* 6503 */    MCD::OPC_FilterValue, 1, 187, 5, 0, // Skip to: 7975
/* 6508 */    MCD::OPC_Decode, 162, 4, 68, // Opcode: LDri
/* 6512 */    MCD::OPC_FilterValue, 1, 28, 0, 0, // Skip to: 6545
/* 6517 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6520 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6536
/* 6525 */    MCD::OPC_CheckField, 5, 8, 0, 163, 5, 0, // Skip to: 7975
/* 6532 */    MCD::OPC_Decode, 154, 4, 68, // Opcode: LDUBrr
/* 6536 */    MCD::OPC_FilterValue, 1, 154, 5, 0, // Skip to: 7975
/* 6541 */    MCD::OPC_Decode, 153, 4, 68, // Opcode: LDUBri
/* 6545 */    MCD::OPC_FilterValue, 2, 28, 0, 0, // Skip to: 6578
/* 6550 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6553 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6569
/* 6558 */    MCD::OPC_CheckField, 5, 8, 0, 130, 5, 0, // Skip to: 7975
/* 6565 */    MCD::OPC_Decode, 157, 4, 68, // Opcode: LDUHrr
/* 6569 */    MCD::OPC_FilterValue, 1, 121, 5, 0, // Skip to: 7975
/* 6574 */    MCD::OPC_Decode, 156, 4, 68, // Opcode: LDUHri
/* 6578 */    MCD::OPC_FilterValue, 3, 28, 0, 0, // Skip to: 6611
/* 6583 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6586 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6602
/* 6591 */    MCD::OPC_CheckField, 5, 8, 0, 97, 5, 0, // Skip to: 7975
/* 6598 */    MCD::OPC_Decode, 132, 4, 69, // Opcode: LDDrr
/* 6602 */    MCD::OPC_FilterValue, 1, 88, 5, 0, // Skip to: 7975
/* 6607 */    MCD::OPC_Decode, 131, 4, 69, // Opcode: LDDri
/* 6611 */    MCD::OPC_FilterValue, 4, 28, 0, 0, // Skip to: 6644
/* 6616 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6619 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6635
/* 6624 */    MCD::OPC_CheckField, 5, 8, 0, 64, 5, 0, // Skip to: 7975
/* 6631 */    MCD::OPC_Decode, 162, 5, 70, // Opcode: STrr
/* 6635 */    MCD::OPC_FilterValue, 1, 55, 5, 0, // Skip to: 7975
/* 6640 */    MCD::OPC_Decode, 161, 5, 70, // Opcode: STri
/* 6644 */    MCD::OPC_FilterValue, 5, 28, 0, 0, // Skip to: 6677
/* 6649 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6652 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6668
/* 6657 */    MCD::OPC_CheckField, 5, 8, 0, 31, 5, 0, // Skip to: 7975
/* 6664 */    MCD::OPC_Decode, 129, 5, 70, // Opcode: STBrr
/* 6668 */    MCD::OPC_FilterValue, 1, 22, 5, 0, // Skip to: 7975
/* 6673 */    MCD::OPC_Decode, 128, 5, 70, // Opcode: STBri
/* 6677 */    MCD::OPC_FilterValue, 6, 28, 0, 0, // Skip to: 6710
/* 6682 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6685 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6701
/* 6690 */    MCD::OPC_CheckField, 5, 8, 0, 254, 4, 0, // Skip to: 7975
/* 6697 */    MCD::OPC_Decode, 153, 5, 70, // Opcode: STHrr
/* 6701 */    MCD::OPC_FilterValue, 1, 245, 4, 0, // Skip to: 7975
/* 6706 */    MCD::OPC_Decode, 152, 5, 70, // Opcode: STHri
/* 6710 */    MCD::OPC_FilterValue, 7, 28, 0, 0, // Skip to: 6743
/* 6715 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6718 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6734
/* 6723 */    MCD::OPC_CheckField, 5, 8, 0, 221, 4, 0, // Skip to: 7975
/* 6730 */    MCD::OPC_Decode, 145, 5, 71, // Opcode: STDrr
/* 6734 */    MCD::OPC_FilterValue, 1, 212, 4, 0, // Skip to: 7975
/* 6739 */    MCD::OPC_Decode, 144, 5, 71, // Opcode: STDri
/* 6743 */    MCD::OPC_FilterValue, 8, 28, 0, 0, // Skip to: 6776
/* 6748 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6751 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6767
/* 6756 */    MCD::OPC_CheckField, 5, 8, 0, 188, 4, 0, // Skip to: 7975
/* 6763 */    MCD::OPC_Decode, 151, 4, 68, // Opcode: LDSWrr
/* 6767 */    MCD::OPC_FilterValue, 1, 179, 4, 0, // Skip to: 7975
/* 6772 */    MCD::OPC_Decode, 150, 4, 68, // Opcode: LDSWri
/* 6776 */    MCD::OPC_FilterValue, 9, 28, 0, 0, // Skip to: 6809
/* 6781 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6784 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6800
/* 6789 */    MCD::OPC_CheckField, 5, 8, 0, 155, 4, 0, // Skip to: 7975
/* 6796 */    MCD::OPC_Decode, 143, 4, 68, // Opcode: LDSBrr
/* 6800 */    MCD::OPC_FilterValue, 1, 146, 4, 0, // Skip to: 7975
/* 6805 */    MCD::OPC_Decode, 142, 4, 68, // Opcode: LDSBri
/* 6809 */    MCD::OPC_FilterValue, 10, 28, 0, 0, // Skip to: 6842
/* 6814 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6817 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6833
/* 6822 */    MCD::OPC_CheckField, 5, 8, 0, 122, 4, 0, // Skip to: 7975
/* 6829 */    MCD::OPC_Decode, 146, 4, 68, // Opcode: LDSHrr
/* 6833 */    MCD::OPC_FilterValue, 1, 113, 4, 0, // Skip to: 7975
/* 6838 */    MCD::OPC_Decode, 145, 4, 68, // Opcode: LDSHri
/* 6842 */    MCD::OPC_FilterValue, 11, 28, 0, 0, // Skip to: 6875
/* 6847 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6850 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6866
/* 6855 */    MCD::OPC_CheckField, 5, 8, 0, 89, 4, 0, // Skip to: 7975
/* 6862 */    MCD::OPC_Decode, 161, 4, 68, // Opcode: LDXrr
/* 6866 */    MCD::OPC_FilterValue, 1, 80, 4, 0, // Skip to: 7975
/* 6871 */    MCD::OPC_Decode, 160, 4, 68, // Opcode: LDXri
/* 6875 */    MCD::OPC_FilterValue, 13, 28, 0, 0, // Skip to: 6908
/* 6880 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6883 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6899
/* 6888 */    MCD::OPC_CheckField, 5, 8, 0, 56, 4, 0, // Skip to: 7975
/* 6895 */    MCD::OPC_Decode, 149, 4, 4, // Opcode: LDSTUBrr
/* 6899 */    MCD::OPC_FilterValue, 1, 47, 4, 0, // Skip to: 7975
/* 6904 */    MCD::OPC_Decode, 148, 4, 4, // Opcode: LDSTUBri
/* 6908 */    MCD::OPC_FilterValue, 14, 28, 0, 0, // Skip to: 6941
/* 6913 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6916 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6932
/* 6921 */    MCD::OPC_CheckField, 5, 8, 0, 23, 4, 0, // Skip to: 7975
/* 6928 */    MCD::OPC_Decode, 160, 5, 70, // Opcode: STXrr
/* 6932 */    MCD::OPC_FilterValue, 1, 14, 4, 0, // Skip to: 7975
/* 6937 */    MCD::OPC_Decode, 159, 5, 70, // Opcode: STXri
/* 6941 */    MCD::OPC_FilterValue, 15, 28, 0, 0, // Skip to: 6974
/* 6946 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6949 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 6965
/* 6954 */    MCD::OPC_CheckField, 5, 8, 0, 246, 3, 0, // Skip to: 7975
/* 6961 */    MCD::OPC_Decode, 175, 5, 72, // Opcode: SWAPrr
/* 6965 */    MCD::OPC_FilterValue, 1, 237, 3, 0, // Skip to: 7975
/* 6970 */    MCD::OPC_Decode, 174, 5, 72, // Opcode: SWAPri
/* 6974 */    MCD::OPC_FilterValue, 16, 11, 0, 0, // Skip to: 6990
/* 6979 */    MCD::OPC_CheckField, 13, 1, 0, 221, 3, 0, // Skip to: 7975
/* 6986 */    MCD::OPC_Decode, 248, 3, 68, // Opcode: LDArr
/* 6990 */    MCD::OPC_FilterValue, 17, 11, 0, 0, // Skip to: 7006
/* 6995 */    MCD::OPC_CheckField, 13, 1, 0, 205, 3, 0, // Skip to: 7975
/* 7002 */    MCD::OPC_Decode, 152, 4, 68, // Opcode: LDUBArr
/* 7006 */    MCD::OPC_FilterValue, 18, 11, 0, 0, // Skip to: 7022
/* 7011 */    MCD::OPC_CheckField, 13, 1, 0, 189, 3, 0, // Skip to: 7975
/* 7018 */    MCD::OPC_Decode, 155, 4, 68, // Opcode: LDUHArr
/* 7022 */    MCD::OPC_FilterValue, 19, 11, 0, 0, // Skip to: 7038
/* 7027 */    MCD::OPC_CheckField, 13, 1, 0, 173, 3, 0, // Skip to: 7975
/* 7034 */    MCD::OPC_Decode, 253, 3, 69, // Opcode: LDDArr
/* 7038 */    MCD::OPC_FilterValue, 20, 11, 0, 0, // Skip to: 7054
/* 7043 */    MCD::OPC_CheckField, 13, 1, 0, 157, 3, 0, // Skip to: 7975
/* 7050 */    MCD::OPC_Decode, 253, 4, 70, // Opcode: STArr
/* 7054 */    MCD::OPC_FilterValue, 21, 11, 0, 0, // Skip to: 7070
/* 7059 */    MCD::OPC_CheckField, 13, 1, 0, 141, 3, 0, // Skip to: 7975
/* 7066 */    MCD::OPC_Decode, 255, 4, 70, // Opcode: STBArr
/* 7070 */    MCD::OPC_FilterValue, 22, 11, 0, 0, // Skip to: 7086
/* 7075 */    MCD::OPC_CheckField, 13, 1, 0, 125, 3, 0, // Skip to: 7975
/* 7082 */    MCD::OPC_Decode, 151, 5, 70, // Opcode: STHArr
/* 7086 */    MCD::OPC_FilterValue, 23, 11, 0, 0, // Skip to: 7102
/* 7091 */    MCD::OPC_CheckField, 13, 1, 0, 109, 3, 0, // Skip to: 7975
/* 7098 */    MCD::OPC_Decode, 134, 5, 71, // Opcode: STDArr
/* 7102 */    MCD::OPC_FilterValue, 25, 11, 0, 0, // Skip to: 7118
/* 7107 */    MCD::OPC_CheckField, 13, 1, 0, 93, 3, 0, // Skip to: 7975
/* 7114 */    MCD::OPC_Decode, 141, 4, 68, // Opcode: LDSBArr
/* 7118 */    MCD::OPC_FilterValue, 26, 11, 0, 0, // Skip to: 7134
/* 7123 */    MCD::OPC_CheckField, 13, 1, 0, 77, 3, 0, // Skip to: 7975
/* 7130 */    MCD::OPC_Decode, 144, 4, 68, // Opcode: LDSHArr
/* 7134 */    MCD::OPC_FilterValue, 29, 11, 0, 0, // Skip to: 7150
/* 7139 */    MCD::OPC_CheckField, 13, 1, 0, 61, 3, 0, // Skip to: 7975
/* 7146 */    MCD::OPC_Decode, 147, 4, 73, // Opcode: LDSTUBArr
/* 7150 */    MCD::OPC_FilterValue, 31, 11, 0, 0, // Skip to: 7166
/* 7155 */    MCD::OPC_CheckField, 13, 1, 0, 45, 3, 0, // Skip to: 7975
/* 7162 */    MCD::OPC_Decode, 173, 5, 72, // Opcode: SWAPArr
/* 7166 */    MCD::OPC_FilterValue, 32, 28, 0, 0, // Skip to: 7199
/* 7171 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7174 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7190
/* 7179 */    MCD::OPC_CheckField, 5, 8, 0, 21, 3, 0, // Skip to: 7975
/* 7186 */    MCD::OPC_Decode, 137, 4, 74, // Opcode: LDFrr
/* 7190 */    MCD::OPC_FilterValue, 1, 12, 3, 0, // Skip to: 7975
/* 7195 */    MCD::OPC_Decode, 136, 4, 74, // Opcode: LDFri
/* 7199 */    MCD::OPC_FilterValue, 33, 79, 0, 0, // Skip to: 7283
/* 7204 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7207 */    MCD::OPC_FilterValue, 0, 40, 0, 0, // Skip to: 7252
/* 7212 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7215 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7231
/* 7220 */    MCD::OPC_CheckField, 5, 8, 0, 236, 2, 0, // Skip to: 7975
/* 7227 */    MCD::OPC_Decode, 135, 4, 74, // Opcode: LDFSRrr
/* 7231 */    MCD::OPC_FilterValue, 1, 227, 2, 0, // Skip to: 7975
/* 7236 */    MCD::OPC_CheckPredicate, 0, 222, 2, 0, // Skip to: 7975
/* 7241 */    MCD::OPC_CheckField, 5, 8, 0, 215, 2, 0, // Skip to: 7975
/* 7248 */    MCD::OPC_Decode, 159, 4, 74, // Opcode: LDXFSRrr
/* 7252 */    MCD::OPC_FilterValue, 1, 206, 2, 0, // Skip to: 7975
/* 7257 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7260 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 7269
/* 7265 */    MCD::OPC_Decode, 134, 4, 74, // Opcode: LDFSRri
/* 7269 */    MCD::OPC_FilterValue, 1, 189, 2, 0, // Skip to: 7975
/* 7274 */    MCD::OPC_CheckPredicate, 0, 184, 2, 0, // Skip to: 7975
/* 7279 */    MCD::OPC_Decode, 158, 4, 74, // Opcode: LDXFSRri
/* 7283 */    MCD::OPC_FilterValue, 34, 38, 0, 0, // Skip to: 7326
/* 7288 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7291 */    MCD::OPC_FilterValue, 0, 16, 0, 0, // Skip to: 7312
/* 7296 */    MCD::OPC_CheckPredicate, 0, 162, 2, 0, // Skip to: 7975
/* 7301 */    MCD::OPC_CheckField, 5, 8, 0, 155, 2, 0, // Skip to: 7975
/* 7308 */    MCD::OPC_Decode, 140, 4, 75, // Opcode: LDQFrr
/* 7312 */    MCD::OPC_FilterValue, 1, 146, 2, 0, // Skip to: 7975
/* 7317 */    MCD::OPC_CheckPredicate, 0, 141, 2, 0, // Skip to: 7975
/* 7322 */    MCD::OPC_Decode, 139, 4, 75, // Opcode: LDQFri
/* 7326 */    MCD::OPC_FilterValue, 35, 28, 0, 0, // Skip to: 7359
/* 7331 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7334 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7350
/* 7339 */    MCD::OPC_CheckField, 5, 8, 0, 117, 2, 0, // Skip to: 7975
/* 7346 */    MCD::OPC_Decode, 130, 4, 76, // Opcode: LDDFrr
/* 7350 */    MCD::OPC_FilterValue, 1, 108, 2, 0, // Skip to: 7975
/* 7355 */    MCD::OPC_Decode, 129, 4, 76, // Opcode: LDDFri
/* 7359 */    MCD::OPC_FilterValue, 36, 28, 0, 0, // Skip to: 7392
/* 7364 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7367 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7383
/* 7372 */    MCD::OPC_CheckField, 5, 8, 0, 84, 2, 0, // Skip to: 7975
/* 7379 */    MCD::OPC_Decode, 150, 5, 77, // Opcode: STFrr
/* 7383 */    MCD::OPC_FilterValue, 1, 75, 2, 0, // Skip to: 7975
/* 7388 */    MCD::OPC_Decode, 149, 5, 77, // Opcode: STFri
/* 7392 */    MCD::OPC_FilterValue, 37, 79, 0, 0, // Skip to: 7476
/* 7397 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7400 */    MCD::OPC_FilterValue, 0, 40, 0, 0, // Skip to: 7445
/* 7405 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7408 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7424
/* 7413 */    MCD::OPC_CheckField, 5, 8, 0, 43, 2, 0, // Skip to: 7975
/* 7420 */    MCD::OPC_Decode, 148, 5, 77, // Opcode: STFSRrr
/* 7424 */    MCD::OPC_FilterValue, 1, 34, 2, 0, // Skip to: 7975
/* 7429 */    MCD::OPC_CheckPredicate, 0, 29, 2, 0, // Skip to: 7975
/* 7434 */    MCD::OPC_CheckField, 5, 8, 0, 22, 2, 0, // Skip to: 7975
/* 7441 */    MCD::OPC_Decode, 158, 5, 77, // Opcode: STXFSRrr
/* 7445 */    MCD::OPC_FilterValue, 1, 13, 2, 0, // Skip to: 7975
/* 7450 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 7453 */    MCD::OPC_FilterValue, 0, 4, 0, 0, // Skip to: 7462
/* 7458 */    MCD::OPC_Decode, 147, 5, 77, // Opcode: STFSRri
/* 7462 */    MCD::OPC_FilterValue, 1, 252, 1, 0, // Skip to: 7975
/* 7467 */    MCD::OPC_CheckPredicate, 0, 247, 1, 0, // Skip to: 7975
/* 7472 */    MCD::OPC_Decode, 157, 5, 77, // Opcode: STXFSRri
/* 7476 */    MCD::OPC_FilterValue, 38, 61, 0, 0, // Skip to: 7542
/* 7481 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7484 */    MCD::OPC_FilterValue, 0, 28, 0, 0, // Skip to: 7517
/* 7489 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 7492 */    MCD::OPC_FilterValue, 0, 222, 1, 0, // Skip to: 7975
/* 7497 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 7508
/* 7504 */    MCD::OPC_Decode, 141, 5, 77, // Opcode: STDFQrr
/* 7508 */    MCD::OPC_CheckPredicate, 0, 206, 1, 0, // Skip to: 7975
/* 7513 */    MCD::OPC_Decode, 156, 5, 78, // Opcode: STQFrr
/* 7517 */    MCD::OPC_FilterValue, 1, 197, 1, 0, // Skip to: 7975
/* 7522 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, 0, // Skip to: 7533
/* 7529 */    MCD::OPC_Decode, 140, 5, 77, // Opcode: STDFQri
/* 7533 */    MCD::OPC_CheckPredicate, 0, 181, 1, 0, // Skip to: 7975
/* 7538 */    MCD::OPC_Decode, 155, 5, 78, // Opcode: STQFri
/* 7542 */    MCD::OPC_FilterValue, 39, 28, 0, 0, // Skip to: 7575
/* 7547 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7550 */    MCD::OPC_FilterValue, 0, 11, 0, 0, // Skip to: 7566
/* 7555 */    MCD::OPC_CheckField, 5, 8, 0, 157, 1, 0, // Skip to: 7975
/* 7562 */    MCD::OPC_Decode, 143, 5, 79, // Opcode: STDFrr
/* 7566 */    MCD::OPC_FilterValue, 1, 148, 1, 0, // Skip to: 7975
/* 7571 */    MCD::OPC_Decode, 142, 5, 79, // Opcode: STDFri
/* 7575 */    MCD::OPC_FilterValue, 48, 37, 0, 0, // Skip to: 7617
/* 7580 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7583 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7608
/* 7588 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7599
/* 7595 */    MCD::OPC_Decode, 252, 3, 80, // Opcode: LDCrr
/* 7599 */    MCD::OPC_CheckPredicate, 0, 115, 1, 0, // Skip to: 7975
/* 7604 */    MCD::OPC_Decode, 133, 4, 74, // Opcode: LDFArr
/* 7608 */    MCD::OPC_FilterValue, 1, 106, 1, 0, // Skip to: 7975
/* 7613 */    MCD::OPC_Decode, 251, 3, 80, // Opcode: LDCri
/* 7617 */    MCD::OPC_FilterValue, 49, 42, 0, 0, // Skip to: 7664
/* 7622 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7625 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 7648
/* 7630 */    MCD::OPC_CheckField, 25, 5, 0, 82, 1, 0, // Skip to: 7975
/* 7637 */    MCD::OPC_CheckField, 5, 8, 0, 75, 1, 0, // Skip to: 7975
/* 7644 */    MCD::OPC_Decode, 250, 3, 80, // Opcode: LDCSRrr
/* 7648 */    MCD::OPC_FilterValue, 1, 66, 1, 0, // Skip to: 7975
/* 7653 */    MCD::OPC_CheckField, 25, 5, 0, 59, 1, 0, // Skip to: 7975
/* 7660 */    MCD::OPC_Decode, 249, 3, 80, // Opcode: LDCSRri
/* 7664 */    MCD::OPC_FilterValue, 50, 16, 0, 0, // Skip to: 7685
/* 7669 */    MCD::OPC_CheckPredicate, 0, 45, 1, 0, // Skip to: 7975
/* 7674 */    MCD::OPC_CheckField, 13, 1, 0, 38, 1, 0, // Skip to: 7975
/* 7681 */    MCD::OPC_Decode, 138, 4, 75, // Opcode: LDQFArr
/* 7685 */    MCD::OPC_FilterValue, 51, 37, 0, 0, // Skip to: 7727
/* 7690 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7693 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7718
/* 7698 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7709
/* 7705 */    MCD::OPC_Decode, 255, 3, 81, // Opcode: LDDCrr
/* 7709 */    MCD::OPC_CheckPredicate, 0, 5, 1, 0, // Skip to: 7975
/* 7714 */    MCD::OPC_Decode, 128, 4, 76, // Opcode: LDDFArr
/* 7718 */    MCD::OPC_FilterValue, 1, 252, 0, 0, // Skip to: 7975
/* 7723 */    MCD::OPC_Decode, 254, 3, 81, // Opcode: LDDCri
/* 7727 */    MCD::OPC_FilterValue, 52, 37, 0, 0, // Skip to: 7769
/* 7732 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7735 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7760
/* 7740 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7751
/* 7747 */    MCD::OPC_Decode, 133, 5, 82, // Opcode: STCrr
/* 7751 */    MCD::OPC_CheckPredicate, 0, 219, 0, 0, // Skip to: 7975
/* 7756 */    MCD::OPC_Decode, 146, 5, 77, // Opcode: STFArr
/* 7760 */    MCD::OPC_FilterValue, 1, 210, 0, 0, // Skip to: 7975
/* 7765 */    MCD::OPC_Decode, 132, 5, 82, // Opcode: STCri
/* 7769 */    MCD::OPC_FilterValue, 53, 42, 0, 0, // Skip to: 7816
/* 7774 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7777 */    MCD::OPC_FilterValue, 0, 18, 0, 0, // Skip to: 7800
/* 7782 */    MCD::OPC_CheckField, 25, 5, 0, 186, 0, 0, // Skip to: 7975
/* 7789 */    MCD::OPC_CheckField, 5, 8, 0, 179, 0, 0, // Skip to: 7975
/* 7796 */    MCD::OPC_Decode, 131, 5, 82, // Opcode: STCSRrr
/* 7800 */    MCD::OPC_FilterValue, 1, 170, 0, 0, // Skip to: 7975
/* 7805 */    MCD::OPC_CheckField, 25, 5, 0, 163, 0, 0, // Skip to: 7975
/* 7812 */    MCD::OPC_Decode, 130, 5, 82, // Opcode: STCSRri
/* 7816 */    MCD::OPC_FilterValue, 54, 51, 0, 0, // Skip to: 7872
/* 7821 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7824 */    MCD::OPC_FilterValue, 0, 27, 0, 0, // Skip to: 7856
/* 7829 */    MCD::OPC_CheckField, 25, 5, 0, 11, 0, 0, // Skip to: 7847
/* 7836 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7847
/* 7843 */    MCD::OPC_Decode, 136, 5, 82, // Opcode: STDCQrr
/* 7847 */    MCD::OPC_CheckPredicate, 0, 123, 0, 0, // Skip to: 7975
/* 7852 */    MCD::OPC_Decode, 154, 5, 78, // Opcode: STQFArr
/* 7856 */    MCD::OPC_FilterValue, 1, 114, 0, 0, // Skip to: 7975
/* 7861 */    MCD::OPC_CheckField, 25, 5, 0, 107, 0, 0, // Skip to: 7975
/* 7868 */    MCD::OPC_Decode, 135, 5, 82, // Opcode: STDCQri
/* 7872 */    MCD::OPC_FilterValue, 55, 37, 0, 0, // Skip to: 7914
/* 7877 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7880 */    MCD::OPC_FilterValue, 0, 20, 0, 0, // Skip to: 7905
/* 7885 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, 0, // Skip to: 7896
/* 7892 */    MCD::OPC_Decode, 138, 5, 83, // Opcode: STDCrr
/* 7896 */    MCD::OPC_CheckPredicate, 0, 74, 0, 0, // Skip to: 7975
/* 7901 */    MCD::OPC_Decode, 139, 5, 79, // Opcode: STDFArr
/* 7905 */    MCD::OPC_FilterValue, 1, 65, 0, 0, // Skip to: 7975
/* 7910 */    MCD::OPC_Decode, 137, 5, 83, // Opcode: STDCri
/* 7914 */    MCD::OPC_FilterValue, 60, 39, 0, 0, // Skip to: 7958
/* 7919 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7922 */    MCD::OPC_FilterValue, 0, 48, 0, 0, // Skip to: 7975
/* 7927 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 7930 */    MCD::OPC_FilterValue, 10, 4, 0, 0, // Skip to: 7939
/* 7935 */    MCD::OPC_Decode, 186, 2, 84, // Opcode: CASAasi10
/* 7939 */    MCD::OPC_FilterValue, 128, 1, 9, 0, 0, // Skip to: 7954
/* 7945 */    MCD::OPC_CheckPredicate, 0, 4, 0, 0, // Skip to: 7954
/* 7950 */    MCD::OPC_Decode, 189, 2, 84, // Opcode: CASrr
/* 7954 */    MCD::OPC_Decode, 187, 2, 85, // Opcode: CASArr
/* 7958 */    MCD::OPC_FilterValue, 62, 12, 0, 0, // Skip to: 7975
/* 7963 */    MCD::OPC_CheckField, 5, 9, 128, 1, 4, 0, 0, // Skip to: 7975
/* 7971 */    MCD::OPC_Decode, 188, 2, 86, // Opcode: CASXrr
/* 7975 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV832[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 25, 0, 0, // Skip to: 33
/* 8 */       MCD::OPC_CheckField, 29, 3, 4, 41, 0, 0, // Skip to: 56
/* 15 */      MCD::OPC_CheckField, 19, 6, 58, 34, 0, 0, // Skip to: 56
/* 22 */      MCD::OPC_CheckField, 5, 3, 0, 27, 0, 0, // Skip to: 56
/* 29 */      MCD::OPC_Decode, 191, 5, 87, // Opcode: TRAPrr
/* 33 */      MCD::OPC_FilterValue, 32, 18, 0, 0, // Skip to: 56
/* 38 */      MCD::OPC_CheckField, 29, 3, 4, 11, 0, 0, // Skip to: 56
/* 45 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, 0, // Skip to: 56
/* 52 */      MCD::OPC_Decode, 190, 5, 87, // Opcode: TRAPri
/* 56 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV932[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 30, 0, 0, // Skip to: 38
/* 8 */       MCD::OPC_CheckPredicate, 0, 53, 0, 0, // Skip to: 66
/* 13 */      MCD::OPC_CheckField, 29, 3, 4, 46, 0, 0, // Skip to: 66
/* 20 */      MCD::OPC_CheckField, 19, 6, 58, 39, 0, 0, // Skip to: 66
/* 27 */      MCD::OPC_CheckField, 5, 3, 0, 32, 0, 0, // Skip to: 66
/* 34 */      MCD::OPC_Decode, 184, 5, 87, // Opcode: TICCrr
/* 38 */      MCD::OPC_FilterValue, 32, 23, 0, 0, // Skip to: 66
/* 43 */      MCD::OPC_CheckPredicate, 0, 18, 0, 0, // Skip to: 66
/* 48 */      MCD::OPC_CheckField, 29, 3, 4, 11, 0, 0, // Skip to: 66
/* 55 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 183, 5, 87, // Opcode: TICCri
/* 66 */      MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset &Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Sparc::FeatureV9]);
  case 1:
    return (Bits[Sparc::FeaturePWRPSR]);
  case 2:
    return (Bits[Sparc::FeatureVIS3]);
  case 3:
    return (Bits[Sparc::FeatureVIS]);
  case 4:
    return (Bits[Sparc::FeatureVIS2]);
  }
}

template <typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0x0;
    tmp |= fieldFromInstruction(insn, 0, 14) << 0;
    tmp |= fieldFromInstruction(insn, 20, 2) << 14;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 4:
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 20, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 0, 30);
    if (DecodeCall(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    if (DecodeJMPL(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    if (DecodeReturn(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 68:
    if (DecodeLoadInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    if (DecodeLoadIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 70:
    if (DecodeStoreInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 71:
    if (DecodeStoreIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 72:
    if (DecodeSWAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 74:
    if (DecodeLoadFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    if (DecodeLoadQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    if (DecodeLoadDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    if (DecodeStoreFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    if (DecodeStoreQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 79:
    if (DecodeStoreDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    if (DecodeLoadCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    if (DecodeLoadCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    if (DecodeStoreCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    if (DecodeStoreCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 87:
    if (DecodeTRAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  }
}

template <typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset &Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  InsnType CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  while (true) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      LLVM_DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      InsnType ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      LLVM_DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      LLVM_DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        LLVM_DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        LLVM_DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n" : "PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      LLVM_DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // end namespace llvm
