/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t R600MCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
    SmallVectorImpl<MCFixup> &Fixups,
    const MCSubtargetInfo &STI) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),	// ADD
    UINT64_C(45079976738816),	// ADDC_UINT
    UINT64_C(28587302322176),	// ADD_INT
    UINT64_C(0),	// ALU_CLAUSE
    UINT64_C(26388279066624),	// AND_INT
    UINT64_C(11544872091648),	// ASHR_eg
    UINT64_C(61572651155456),	// ASHR_r600
    UINT64_C(93458488360960),	// BCNT_INT
    UINT64_C(175921860444160),	// BFE_INT_eg
    UINT64_C(140737488355328),	// BFE_UINT_eg
    UINT64_C(211106232532992),	// BFI_INT_eg
    UINT64_C(87960930222080),	// BFM_INT_eg
    UINT64_C(422212465065984),	// BIT_ALIGN_INT_eg
    UINT64_C(9895604649984),	// CEIL
    UINT64_C(11529215046068469760),	// CF_ALU
    UINT64_C(13258597302978740224),	// CF_ALU_BREAK
    UINT64_C(12970366926827028480),	// CF_ALU_CONTINUE
    UINT64_C(13546827679130451968),	// CF_ALU_ELSE_AFTER
    UINT64_C(12105675798371893248),	// CF_ALU_POP_AFTER
    UINT64_C(11817445422220181504),	// CF_ALU_PUSH_BEFORE
    UINT64_C(9565645608534933504),	// CF_CALL_FS_EG
    UINT64_C(9907919180215091200),	// CF_CALL_FS_R600
    UINT64_C(9367487224930631680),	// CF_CONTINUE_EG
    UINT64_C(9511602413006487552),	// CF_CONTINUE_R600
    UINT64_C(9457559217478041600),	// CF_ELSE_EG
    UINT64_C(9691746398101307392),	// CF_ELSE_R600
    UINT64_C(9799832789158199296),	// CF_END_CM
    UINT64_C(9232379236109516800),	// CF_END_EG
    UINT64_C(9232379236109516800),	// CF_END_R600
    UINT64_C(9403516021949595648),	// CF_JUMP_EG
    UINT64_C(9583660007044415488),	// CF_JUMP_R600
    UINT64_C(9421530420459077632),	// CF_PUSH_EG
    UINT64_C(9655717601082343424),	// CF_PUSH_ELSE_R600
    UINT64_C(9241386435364257792),	// CF_TC_EG
    UINT64_C(9259400833873739776),	// CF_TC_R600
    UINT64_C(9259400833873739776),	// CF_VC_EG
    UINT64_C(9295429630892703744),	// CF_VC_R600
    UINT64_C(985162418487296),	// CNDE_INT
    UINT64_C(879609302220800),	// CNDE_eg
    UINT64_C(844424930131968),	// CNDE_r600
    UINT64_C(1055531162664960),	// CNDGE_INT
    UINT64_C(949978046398464),	// CNDGE_eg
    UINT64_C(914793674309632),	// CNDGE_r600
    UINT64_C(1020346790576128),	// CNDGT_INT
    UINT64_C(914793674309632),	// CNDGT_eg
    UINT64_C(879609302220800),	// CNDGT_r600
    UINT64_C(78065325572096),	// COS_cm
    UINT64_C(78065325572096),	// COS_eg
    UINT64_C(61022895341568),	// COS_r600
    UINT64_C(61022895341568),	// COS_r700
    UINT64_C(105553116266496),	// CUBE_eg_real
    UINT64_C(45079976738816),	// CUBE_r600_real
    UINT64_C(104453604638720),	// DOT4_eg
    UINT64_C(43980465111040),	// DOT4_r600
    UINT64_C(9223372036854775808),	// EG_ExportBuf
    UINT64_C(9223372040076001280),	// EG_ExportSwz
    UINT64_C(9313444029402185728),	// END_LOOP_EG
    UINT64_C(9403516021949595648),	// END_LOOP_R600
    UINT64_C(70918499991552),	// EXP_IEEE_cm
    UINT64_C(70918499991552),	// EXP_IEEE_eg
    UINT64_C(53326313947136),	// EXP_IEEE_r600
    UINT64_C(0),	// FETCH_CLAUSE
    UINT64_C(94008244174848),	// FFBH_UINT
    UINT64_C(94557999988736),	// FFBL_INT
    UINT64_C(10995116277760),	// FLOOR
    UINT64_C(89610197663744),	// FLT16_TO_FLT32
    UINT64_C(89060441849856),	// FLT32_TO_FLT16
    UINT64_C(43980465111040),	// FLT_TO_INT_eg
    UINT64_C(58823872086016),	// FLT_TO_INT_r600
    UINT64_C(84662395338752),	// FLT_TO_UINT_eg
    UINT64_C(66520453480448),	// FLT_TO_UINT_r600
    UINT64_C(246290604621824),	// FMA_eg
    UINT64_C(8796093022208),	// FRACT
    UINT64_C(46181635850240),	// GROUP_BARRIER
    UINT64_C(123145302310912),	// INTERP_LOAD_P0
    UINT64_C(4294967295),	// INTERP_PAIR_XY
    UINT64_C(4294967295),	// INTERP_PAIR_ZW
    UINT64_C(4294967295),	// INTERP_VEC_LOAD
    UINT64_C(5747147278385152),	// INTERP_XY
    UINT64_C(5747697034199040),	// INTERP_ZW
    UINT64_C(85212151152640),	// INT_TO_FLT_eg
    UINT64_C(59373627899904),	// INT_TO_FLT_r600
    UINT64_C(24739011624960),	// KILLGT
    UINT64_C(598134325510144),	// LDS_ADD
    UINT64_C(288828510477221888),	// LDS_ADD_RET
    UINT64_C(81662927618179072),	// LDS_AND
    UINT64_C(369893303769890816),	// LDS_AND_RET
    UINT64_C(486986894081523712),	// LDS_BYTE_READ_RET
    UINT64_C(162727720910848000),	// LDS_BYTE_WRITE
    UINT64_C(144713322401366016),	// LDS_CMPST
    UINT64_C(432943698553077760),	// LDS_CMPST_RET
    UINT64_C(54641329853956096),	// LDS_MAX_INT
    UINT64_C(342871706005667840),	// LDS_MAX_INT_RET
    UINT64_C(72655728363438080),	// LDS_MAX_UINT
    UINT64_C(360886104515149824),	// LDS_MAX_UINT_RET
    UINT64_C(45634130599215104),	// LDS_MIN_INT
    UINT64_C(333864506750926848),	// LDS_MIN_INT_RET
    UINT64_C(63648529108697088),	// LDS_MIN_UINT
    UINT64_C(351878905260408832),	// LDS_MIN_UINT_RET
    UINT64_C(90670126872920064),	// LDS_OR
    UINT64_C(378900503024631808),	// LDS_OR_RET
    UINT64_C(450958097062559744),	// LDS_READ_RET
    UINT64_C(505001292591005696),	// LDS_SHORT_READ_RET
    UINT64_C(171734920165588992),	// LDS_SHORT_WRITE
    UINT64_C(9605333580251136),	// LDS_SUB
    UINT64_C(297835709731962880),	// LDS_SUB_RET
    UINT64_C(495994093336264704),	// LDS_UBYTE_READ_RET
    UINT64_C(514008491845746688),	// LDS_USHORT_READ_RET
    UINT64_C(117691724637143040),	// LDS_WRITE
    UINT64_C(117691724637143040),	// LDS_WRXCHG
    UINT64_C(405922100788854784),	// LDS_WRXCHG_RET
    UINT64_C(99677326127661056),	// LDS_XOR
    UINT64_C(387907702279372800),	// LDS_XOR_RET
    UINT64_C(0),	// LITERALS
    UINT64_C(71468255805440),	// LOG_CLAMPED_eg
    UINT64_C(53876069761024),	// LOG_CLAMPED_r600
    UINT64_C(72018011619328),	// LOG_IEEE_cm
    UINT64_C(72018011619328),	// LOG_IEEE_eg
    UINT64_C(54425825574912),	// LOG_IEEE_r600
    UINT64_C(9385501623440113664),	// LOOP_BREAK_EG
    UINT64_C(9547631210025451520),	// LOOP_BREAK_R600
    UINT64_C(12644383719424),	// LSHL_eg
    UINT64_C(62672162783232),	// LSHL_r600
    UINT64_C(12094627905536),	// LSHR_eg
    UINT64_C(62122406969344),	// LSHR_r600
    UINT64_C(1649267441664),	// MAX
    UINT64_C(2748779069440),	// MAX_DX10
    UINT64_C(29686813949952),	// MAX_INT
    UINT64_C(30786325577728),	// MAX_UINT
    UINT64_C(2199023255552),	// MIN
    UINT64_C(3298534883328),	// MIN_DX10
    UINT64_C(30236569763840),	// MIN_INT
    UINT64_C(31336081391616),	// MIN_UINT
    UINT64_C(13743895347200),	// MOV
    UINT64_C(112150186033152),	// MOVA_INT_eg
    UINT64_C(549755813888),	// MUL
    UINT64_C(844424930131968),	// MULADD_IEEE_eg
    UINT64_C(703687441776640),	// MULADD_IEEE_r600
    UINT64_C(281474976710656),	// MULADD_INT24_cm
    UINT64_C(562949953421312),	// MULADD_UINT24_eg
    UINT64_C(703687441776640),	// MULADD_eg
    UINT64_C(562949953421312),	// MULADD_r600
    UINT64_C(79164837199872),	// MULHI_INT_cm
    UINT64_C(50577534877696),	// MULHI_INT_cm24
    UINT64_C(79164837199872),	// MULHI_INT_eg
    UINT64_C(63771674411008),	// MULHI_INT_r600
    UINT64_C(97856534872064),	// MULHI_UINT24_eg
    UINT64_C(80264348827648),	// MULHI_UINT_cm
    UINT64_C(97856534872064),	// MULHI_UINT_cm24
    UINT64_C(80264348827648),	// MULHI_UINT_eg
    UINT64_C(64871186038784),	// MULHI_UINT_r600
    UINT64_C(78615081385984),	// MULLO_INT_cm
    UINT64_C(78615081385984),	// MULLO_INT_eg
    UINT64_C(63221918597120),	// MULLO_INT_r600
    UINT64_C(79714593013760),	// MULLO_UINT_cm
    UINT64_C(79714593013760),	// MULLO_UINT_eg
    UINT64_C(64321430224896),	// MULLO_UINT_r600
    UINT64_C(1099511627776),	// MUL_IEEE
    UINT64_C(50027779063808),	// MUL_INT24_cm
    UINT64_C(1090715534753792),	// MUL_LIT_eg
    UINT64_C(422212465065984),	// MUL_LIT_r600
    UINT64_C(99505802313728),	// MUL_UINT24_eg
    UINT64_C(28037546508288),	// NOT_INT
    UINT64_C(26938034880512),	// OR_INT
    UINT64_C(0),	// PAD
    UINT64_C(9475573615987523584),	// POP_EG
    UINT64_C(9727775195120271360),	// POP_R600
    UINT64_C(17592186044416),	// PRED_SETE
    UINT64_C(36283883716608),	// PRED_SETE_INT
    UINT64_C(18691697672192),	// PRED_SETGE
    UINT64_C(37383395344384),	// PRED_SETGE_INT
    UINT64_C(18141941858304),	// PRED_SETGT
    UINT64_C(36833639530496),	// PRED_SETGT_INT
    UINT64_C(19241453486080),	// PRED_SETNE
    UINT64_C(37933151158272),	// PRED_SETNE_INT
    UINT64_C(9223372036854775808),	// R600_ExportBuf
    UINT64_C(9223372040076001280),	// R600_ExportSwz
    UINT64_C(10772874191460901488),	// RAT_ATOMIC_ADD_NORET
    UINT64_C(10772874191460900976),	// RAT_ATOMIC_ADD_RTN
    UINT64_C(10772874191460901600),	// RAT_ATOMIC_AND_NORET
    UINT64_C(10772874191460901088),	// RAT_ATOMIC_AND_RTN
    UINT64_C(10772874191460901440),	// RAT_ATOMIC_CMPXCHG_INT_NORET
    UINT64_C(10772874191460900928),	// RAT_ATOMIC_CMPXCHG_INT_RTN
    UINT64_C(10772874191460901680),	// RAT_ATOMIC_DEC_UINT_NORET
    UINT64_C(10772874191460901168),	// RAT_ATOMIC_DEC_UINT_RTN
    UINT64_C(10772874191460901664),	// RAT_ATOMIC_INC_UINT_NORET
    UINT64_C(10772874191460901152),	// RAT_ATOMIC_INC_UINT_RTN
    UINT64_C(10772874191460901568),	// RAT_ATOMIC_MAX_INT_NORET
    UINT64_C(10772874191460901056),	// RAT_ATOMIC_MAX_INT_RTN
    UINT64_C(10772874191460901584),	// RAT_ATOMIC_MAX_UINT_NORET
    UINT64_C(10772874191460901072),	// RAT_ATOMIC_MAX_UINT_RTN
    UINT64_C(10772874191460901536),	// RAT_ATOMIC_MIN_INT_NORET
    UINT64_C(10772874191460901024),	// RAT_ATOMIC_MIN_INT_RTN
    UINT64_C(10772874191460901552),	// RAT_ATOMIC_MIN_UINT_NORET
    UINT64_C(10772874191460901040),	// RAT_ATOMIC_MIN_UINT_RTN
    UINT64_C(10772874191460901616),	// RAT_ATOMIC_OR_NORET
    UINT64_C(10772874191460901104),	// RAT_ATOMIC_OR_RTN
    UINT64_C(10772874191460901520),	// RAT_ATOMIC_RSUB_NORET
    UINT64_C(10772874191460901008),	// RAT_ATOMIC_RSUB_RTN
    UINT64_C(10772874191460901504),	// RAT_ATOMIC_SUB_NORET
    UINT64_C(10772874191460900992),	// RAT_ATOMIC_SUB_RTN
    UINT64_C(10772874191460901408),	// RAT_ATOMIC_XCHG_INT_NORET
    UINT64_C(10772874191460900880),	// RAT_ATOMIC_XCHG_INT_RTN
    UINT64_C(10772874191460901632),	// RAT_ATOMIC_XOR_NORET
    UINT64_C(10772874191460901120),	// RAT_ATOMIC_XOR_RTN
    UINT64_C(10772874191460901136),	// RAT_MSKOR
    UINT64_C(10790888589970383168),	// RAT_STORE_DWORD128
    UINT64_C(10790642299365761344),	// RAT_STORE_DWORD32
    UINT64_C(10790677483737850176),	// RAT_STORE_DWORD64
    UINT64_C(10772874191460900880),	// RAT_STORE_TYPED_cm
    UINT64_C(10772874191460900880),	// RAT_STORE_TYPED_eg
    UINT64_C(10790888589970382880),	// RAT_WRITE_CACHELESS_128_eg
    UINT64_C(10790642299365761056),	// RAT_WRITE_CACHELESS_32_eg
    UINT64_C(10790677483737849888),	// RAT_WRITE_CACHELESS_64_eg
    UINT64_C(74217034874880),	// RECIPSQRT_CLAMPED_cm
    UINT64_C(74217034874880),	// RECIPSQRT_CLAMPED_eg
    UINT64_C(56624848830464),	// RECIPSQRT_CLAMPED_r600
    UINT64_C(75316546502656),	// RECIPSQRT_IEEE_cm
    UINT64_C(75316546502656),	// RECIPSQRT_IEEE_eg
    UINT64_C(57724360458240),	// RECIPSQRT_IEEE_r600
    UINT64_C(72567767433216),	// RECIP_CLAMPED_cm
    UINT64_C(72567767433216),	// RECIP_CLAMPED_eg
    UINT64_C(54975581388800),	// RECIP_CLAMPED_r600
    UINT64_C(73667279060992),	// RECIP_IEEE_cm
    UINT64_C(73667279060992),	// RECIP_IEEE_eg
    UINT64_C(56075093016576),	// RECIP_IEEE_r600
    UINT64_C(81363860455424),	// RECIP_UINT_eg
    UINT64_C(65970697666560),	// RECIP_UINT_r600
    UINT64_C(10445360463872),	// RNDNE
    UINT64_C(4398046511104),	// SETE
    UINT64_C(6597069766656),	// SETE_DX10
    UINT64_C(31885837205504),	// SETE_INT
    UINT64_C(7696581394432),	// SETGE_DX10
    UINT64_C(32985348833280),	// SETGE_INT
    UINT64_C(34634616274944),	// SETGE_UINT
    UINT64_C(7146825580544),	// SETGT_DX10
    UINT64_C(32435593019392),	// SETGT_INT
    UINT64_C(34084860461056),	// SETGT_UINT
    UINT64_C(8246337208320),	// SETNE_DX10
    UINT64_C(33535104647168),	// SETNE_INT
    UINT64_C(5497558138880),	// SGE
    UINT64_C(4947802324992),	// SGT
    UINT64_C(77515569758208),	// SIN_cm
    UINT64_C(77515569758208),	// SIN_eg
    UINT64_C(60473139527680),	// SIN_r600
    UINT64_C(60473139527680),	// SIN_r700
    UINT64_C(6047313952768),	// SNE
    UINT64_C(45629732552704),	// SUBB_UINT
    UINT64_C(29137058136064),	// SUB_INT
    UINT64_C(7),	// TEX_GET_GRADIENTS_H
    UINT64_C(8),	// TEX_GET_GRADIENTS_V
    UINT64_C(4),	// TEX_GET_TEXTURE_RESINFO
    UINT64_C(3),	// TEX_LD
    UINT64_C(35),	// TEX_LDPTR
    UINT64_C(16),	// TEX_SAMPLE
    UINT64_C(24),	// TEX_SAMPLE_C
    UINT64_C(28),	// TEX_SAMPLE_C_G
    UINT64_C(25),	// TEX_SAMPLE_C_L
    UINT64_C(26),	// TEX_SAMPLE_C_LB
    UINT64_C(20),	// TEX_SAMPLE_G
    UINT64_C(17),	// TEX_SAMPLE_L
    UINT64_C(18),	// TEX_SAMPLE_LB
    UINT64_C(11),	// TEX_SET_GRADIENTS_H
    UINT64_C(12),	// TEX_SET_GRADIENTS_V
    UINT64_C(16775081780284751936),	// TEX_VTX_CONSTBUF
    UINT64_C(9236056004066541632),	// TEX_VTX_TEXBUF
    UINT64_C(9345848836096),	// TRUNC
    UINT64_C(85761906966528),	// UINT_TO_FLT_eg
    UINT64_C(59923383713792),	// UINT_TO_FLT_r600
    UINT64_C(1769087820812517440),	// VTX_READ_128_cm
    UINT64_C(1769087821886259264),	// VTX_READ_128_eg
    UINT64_C(1251983104222953536),	// VTX_READ_16_cm
    UINT64_C(1251983104357171264),	// VTX_READ_16_eg
    UINT64_C(1396098292298809408),	// VTX_READ_32_cm
    UINT64_C(1396098292567244864),	// VTX_READ_32_eg
    UINT64_C(1684223115334254656),	// VTX_READ_64_cm
    UINT64_C(1684223115871125568),	// VTX_READ_64_eg
    UINT64_C(1179925510185025600),	// VTX_READ_8_cm
    UINT64_C(1179925510252134464),	// VTX_READ_8_eg
    UINT64_C(9331458427911667712),	// WHILE_LOOP_EG
    UINT64_C(9439544818968559616),	// WHILE_LOOP_R600
    UINT64_C(27487790694400),	// XOR_INT
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case R600::CF_CALL_FS_EG:
    case R600::CF_CALL_FS_R600:
    case R600::CF_END_CM:
    case R600::CF_END_EG:
    case R600::CF_END_R600:
    case R600::GROUP_BARRIER:
    case R600::INTERP_PAIR_XY:
    case R600::INTERP_PAIR_ZW:
    case R600::INTERP_VEC_LOAD:
    case R600::PAD: {
      break;
    }
    case R600::CF_CONTINUE_EG:
    case R600::END_LOOP_EG:
    case R600::LOOP_BREAK_EG:
    case R600::WHILE_LOOP_EG: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(16777215);
      Value |= op;
      break;
    }
    case R600::CF_TC_EG:
    case R600::CF_VC_EG: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(16777215);
      Value |= op;
      // op: COUNT
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(63);
      op <<= 42;
      Value |= op;
      break;
    }
    case R600::CF_ELSE_EG:
    case R600::CF_JUMP_EG:
    case R600::CF_PUSH_EG:
    case R600::POP_EG: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(16777215);
      Value |= op;
      // op: POP_COUNT
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 32;
      Value |= op;
      break;
    }
    case R600::CF_ALU:
    case R600::CF_ALU_BREAK:
    case R600::CF_ALU_CONTINUE:
    case R600::CF_ALU_ELSE_AFTER:
    case R600::CF_ALU_POP_AFTER:
    case R600::CF_ALU_PUSH_BEFORE: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(4194303);
      Value |= op;
      // op: KCACHE_BANK0
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 22;
      Value |= op;
      // op: KCACHE_BANK1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 26;
      Value |= op;
      // op: KCACHE_MODE0
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 30;
      Value |= op;
      // op: KCACHE_MODE1
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 32;
      Value |= op;
      // op: KCACHE_ADDR0
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 34;
      Value |= op;
      // op: KCACHE_ADDR1
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 42;
      Value |= op;
      // op: COUNT
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 50;
      Value |= op;
      break;
    }
    case R600::CF_CONTINUE_R600:
    case R600::CF_PUSH_ELSE_R600:
    case R600::END_LOOP_R600:
    case R600::LOOP_BREAK_R600:
    case R600::WHILE_LOOP_R600: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      break;
    }
    case R600::CF_TC_R600:
    case R600::CF_VC_R600: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      // op: CNT
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(8)) << 48;
      Value |= (op & UINT64_C(7)) << 42;
      break;
    }
    case R600::CF_ELSE_R600:
    case R600::CF_JUMP_R600:
    case R600::POP_R600: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      // op: POP_COUNT
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 32;
      Value |= op;
      break;
    }
    case R600::TEX_GET_GRADIENTS_H:
    case R600::TEX_GET_GRADIENTS_V:
    case R600::TEX_GET_TEXTURE_RESINFO:
    case R600::TEX_LD:
    case R600::TEX_LDPTR:
    case R600::TEX_SAMPLE:
    case R600::TEX_SAMPLE_C:
    case R600::TEX_SAMPLE_C_G:
    case R600::TEX_SAMPLE_C_L:
    case R600::TEX_SAMPLE_C_LB:
    case R600::TEX_SAMPLE_G:
    case R600::TEX_SAMPLE_L:
    case R600::TEX_SAMPLE_LB:
    case R600::TEX_SET_GRADIENTS_H:
    case R600::TEX_SET_GRADIENTS_V: {
      // op: RESOURCE_ID
      op = getMachineOpValue(MI, MI.getOperand(13), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 8;
      Value |= op;
      // op: SRC_GPR
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 16;
      Value |= op;
      // op: DST_GPR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 32;
      Value |= op;
      // op: DST_SEL_X
      op = getMachineOpValue(MI, MI.getOperand(9), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 41;
      Value |= op;
      // op: DST_SEL_Y
      op = getMachineOpValue(MI, MI.getOperand(10), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 44;
      Value |= op;
      // op: DST_SEL_Z
      op = getMachineOpValue(MI, MI.getOperand(11), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 47;
      Value |= op;
      // op: DST_SEL_W
      op = getMachineOpValue(MI, MI.getOperand(12), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 50;
      Value |= op;
      // op: COORD_TYPE_X
      op = getMachineOpValue(MI, MI.getOperand(15), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 60;
      Value |= op;
      // op: COORD_TYPE_Y
      op = getMachineOpValue(MI, MI.getOperand(16), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 61;
      Value |= op;
      // op: COORD_TYPE_Z
      op = getMachineOpValue(MI, MI.getOperand(17), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 62;
      Value |= op;
      // op: COORD_TYPE_W
      op = getMachineOpValue(MI, MI.getOperand(18), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 63;
      Value |= op;
      break;
    }
    case R600::EG_ExportBuf: {
      // op: arraybase
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(8191);
      Value |= op;
      // op: type
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 13;
      Value |= op;
      // op: gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 15;
      Value |= op;
      // op: arraySize
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(4095);
      op <<= 32;
      Value |= op;
      // op: compMask
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 44;
      Value |= op;
      // op: eop
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 53;
      Value |= op;
      // op: inst
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 54;
      Value |= op;
      break;
    }
    case R600::R600_ExportBuf: {
      // op: arraybase
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(8191);
      Value |= op;
      // op: type
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 13;
      Value |= op;
      // op: gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 15;
      Value |= op;
      // op: arraySize
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(4095);
      op <<= 32;
      Value |= op;
      // op: compMask
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 44;
      Value |= op;
      // op: eop
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 53;
      Value |= op;
      // op: inst
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 55;
      Value |= op;
      break;
    }
    case R600::EG_ExportSwz: {
      // op: arraybase
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(8191);
      Value |= op;
      // op: type
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 13;
      Value |= op;
      // op: gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 15;
      Value |= op;
      // op: sw_x
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 32;
      Value |= op;
      // op: sw_y
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 35;
      Value |= op;
      // op: sw_z
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 38;
      Value |= op;
      // op: sw_w
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 41;
      Value |= op;
      // op: eop
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 53;
      Value |= op;
      // op: inst
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 54;
      Value |= op;
      break;
    }
    case R600::R600_ExportSwz: {
      // op: arraybase
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(8191);
      Value |= op;
      // op: type
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 13;
      Value |= op;
      // op: gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 15;
      Value |= op;
      // op: sw_x
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 32;
      Value |= op;
      // op: sw_y
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 35;
      Value |= op;
      // op: sw_z
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 38;
      Value |= op;
      // op: sw_w
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 41;
      Value |= op;
      // op: eop
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 53;
      Value |= op;
      // op: inst
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 55;
      Value |= op;
      break;
    }
    case R600::TEX_VTX_CONSTBUF:
    case R600::TEX_VTX_TEXBUF: {
      // op: dst_gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 32;
      Value |= op;
      // op: src_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 16;
      Value |= op;
      // op: buffer_id
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 8;
      Value |= op;
      break;
    }
    case R600::LITERALS: {
      // op: literal1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      // op: literal2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(4294967295);
      op <<= 32;
      Value |= op;
      break;
    }
    case R600::ALU_CLAUSE:
    case R600::FETCH_CLAUSE: {
      // op: num
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(255);
      Value |= op;
      break;
    }
    case R600::RAT_STORE_TYPED_cm: {
      // op: rat_id
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      // op: rw_gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 15;
      Value |= op;
      // op: index_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 23;
      Value |= op;
      break;
    }
    case R600::RAT_STORE_TYPED_eg: {
      // op: rat_id
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      Value |= op;
      // op: rw_gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 15;
      Value |= op;
      // op: index_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 23;
      Value |= op;
      // op: eop
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 53;
      Value |= op;
      break;
    }
    case R600::RAT_MSKOR:
    case R600::RAT_STORE_DWORD128:
    case R600::RAT_STORE_DWORD32:
    case R600::RAT_STORE_DWORD64: {
      // op: rw_gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 15;
      Value |= op;
      // op: index_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 23;
      Value |= op;
      break;
    }
    case R600::RAT_WRITE_CACHELESS_128_eg:
    case R600::RAT_WRITE_CACHELESS_32_eg:
    case R600::RAT_WRITE_CACHELESS_64_eg: {
      // op: rw_gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 15;
      Value |= op;
      // op: index_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 23;
      Value |= op;
      // op: eop
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 53;
      Value |= op;
      break;
    }
    case R600::RAT_ATOMIC_ADD_NORET:
    case R600::RAT_ATOMIC_ADD_RTN:
    case R600::RAT_ATOMIC_AND_NORET:
    case R600::RAT_ATOMIC_AND_RTN:
    case R600::RAT_ATOMIC_CMPXCHG_INT_NORET:
    case R600::RAT_ATOMIC_CMPXCHG_INT_RTN:
    case R600::RAT_ATOMIC_DEC_UINT_NORET:
    case R600::RAT_ATOMIC_DEC_UINT_RTN:
    case R600::RAT_ATOMIC_INC_UINT_NORET:
    case R600::RAT_ATOMIC_INC_UINT_RTN:
    case R600::RAT_ATOMIC_MAX_INT_NORET:
    case R600::RAT_ATOMIC_MAX_INT_RTN:
    case R600::RAT_ATOMIC_MAX_UINT_NORET:
    case R600::RAT_ATOMIC_MAX_UINT_RTN:
    case R600::RAT_ATOMIC_MIN_INT_NORET:
    case R600::RAT_ATOMIC_MIN_INT_RTN:
    case R600::RAT_ATOMIC_MIN_UINT_NORET:
    case R600::RAT_ATOMIC_MIN_UINT_RTN:
    case R600::RAT_ATOMIC_OR_NORET:
    case R600::RAT_ATOMIC_OR_RTN:
    case R600::RAT_ATOMIC_RSUB_NORET:
    case R600::RAT_ATOMIC_RSUB_RTN:
    case R600::RAT_ATOMIC_SUB_NORET:
    case R600::RAT_ATOMIC_SUB_RTN:
    case R600::RAT_ATOMIC_XCHG_INT_NORET:
    case R600::RAT_ATOMIC_XCHG_INT_RTN:
    case R600::RAT_ATOMIC_XOR_NORET:
    case R600::RAT_ATOMIC_XOR_RTN: {
      // op: rw_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 15;
      Value |= op;
      // op: index_gpr
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 23;
      Value |= op;
      break;
    }
    case R600::LDS_CMPST: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= (op & UINT64_C(511));
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 9;
      Value |= op;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 22;
      Value |= op;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(10), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 29;
      Value |= op;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(9), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 31;
      Value |= op;
      // op: src2
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 33;
      Value |= (op & UINT64_C(511)) << 32;
      // op: src2_rel
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 41;
      Value |= op;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(11), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 50;
      Value |= op;
      break;
    }
    case R600::LDS_ADD:
    case R600::LDS_AND:
    case R600::LDS_BYTE_WRITE:
    case R600::LDS_MAX_INT:
    case R600::LDS_MAX_UINT:
    case R600::LDS_MIN_INT:
    case R600::LDS_MIN_UINT:
    case R600::LDS_OR:
    case R600::LDS_SHORT_WRITE:
    case R600::LDS_SUB:
    case R600::LDS_WRITE:
    case R600::LDS_WRXCHG:
    case R600::LDS_XOR: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= (op & UINT64_C(511));
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 9;
      Value |= op;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 22;
      Value |= op;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 29;
      Value |= op;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 31;
      Value |= op;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 50;
      Value |= op;
      break;
    }
    case R600::LDS_BYTE_READ_RET:
    case R600::LDS_READ_RET:
    case R600::LDS_SHORT_READ_RET:
    case R600::LDS_UBYTE_READ_RET:
    case R600::LDS_USHORT_READ_RET: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= (op & UINT64_C(511));
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 9;
      Value |= op;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 29;
      Value |= op;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 31;
      Value |= op;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 50;
      Value |= op;
      break;
    }
    case R600::LDS_CMPST_RET: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= (op & UINT64_C(511));
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 9;
      Value |= op;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 22;
      Value |= op;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(11), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 29;
      Value |= op;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(10), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 31;
      Value |= op;
      // op: src2
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 33;
      Value |= (op & UINT64_C(511)) << 32;
      // op: src2_rel
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 41;
      Value |= op;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(12), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 50;
      Value |= op;
      break;
    }
    case R600::LDS_ADD_RET:
    case R600::LDS_AND_RET:
    case R600::LDS_MAX_INT_RET:
    case R600::LDS_MAX_UINT_RET:
    case R600::LDS_MIN_INT_RET:
    case R600::LDS_MIN_UINT_RET:
    case R600::LDS_OR_RET:
    case R600::LDS_SUB_RET:
    case R600::LDS_WRXCHG_RET:
    case R600::LDS_XOR_RET: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= (op & UINT64_C(511));
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 9;
      Value |= op;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 22;
      Value |= op;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 29;
      Value |= op;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 31;
      Value |= op;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(9), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 50;
      Value |= op;
      break;
    }
    case R600::BFE_INT_eg:
    case R600::BFE_UINT_eg:
    case R600::BFI_INT_eg:
    case R600::BIT_ALIGN_INT_eg:
    case R600::CNDE_INT:
    case R600::CNDE_eg:
    case R600::CNDE_r600:
    case R600::CNDGE_INT:
    case R600::CNDGE_eg:
    case R600::CNDGE_r600:
    case R600::CNDGT_INT:
    case R600::CNDGT_eg:
    case R600::CNDGT_r600:
    case R600::FMA_eg:
    case R600::MULADD_IEEE_eg:
    case R600::MULADD_IEEE_r600:
    case R600::MULADD_INT24_cm:
    case R600::MULADD_UINT24_eg:
    case R600::MULADD_eg:
    case R600::MULADD_r600:
    case R600::MUL_LIT_eg:
    case R600::MUL_LIT_r600: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= (op & UINT64_C(511));
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 9;
      Value |= op;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(9), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 22;
      Value |= op;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(16), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 29;
      Value |= op;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(15), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 31;
      Value |= op;
      // op: src0_neg
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 12;
      Value |= op;
      // op: src1_neg
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 52;
      Value |= (op & UINT64_C(127)) << 53;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(18), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 50;
      Value |= op;
      // op: dst_rel
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 60;
      Value |= op;
      // op: clamp
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 63;
      Value |= op;
      // op: src2
      op = getMachineOpValue(MI, MI.getOperand(11), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 33;
      Value |= (op & UINT64_C(511)) << 32;
      // op: src2_rel
      op = getMachineOpValue(MI, MI.getOperand(13), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 41;
      Value |= op;
      // op: src2_neg
      op = getMachineOpValue(MI, MI.getOperand(12), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 44;
      Value |= op;
      break;
    }
    case R600::BCNT_INT:
    case R600::CEIL:
    case R600::COS_cm:
    case R600::COS_eg:
    case R600::COS_r600:
    case R600::COS_r700:
    case R600::EXP_IEEE_cm:
    case R600::EXP_IEEE_eg:
    case R600::EXP_IEEE_r600:
    case R600::FFBH_UINT:
    case R600::FFBL_INT:
    case R600::FLOOR:
    case R600::FLT16_TO_FLT32:
    case R600::FLT32_TO_FLT16:
    case R600::FLT_TO_INT_eg:
    case R600::FLT_TO_INT_r600:
    case R600::FLT_TO_UINT_eg:
    case R600::FLT_TO_UINT_r600:
    case R600::FRACT:
    case R600::INTERP_LOAD_P0:
    case R600::INT_TO_FLT_eg:
    case R600::INT_TO_FLT_r600:
    case R600::LOG_CLAMPED_eg:
    case R600::LOG_CLAMPED_r600:
    case R600::LOG_IEEE_cm:
    case R600::LOG_IEEE_eg:
    case R600::LOG_IEEE_r600:
    case R600::MOV:
    case R600::MOVA_INT_eg:
    case R600::NOT_INT:
    case R600::RECIPSQRT_CLAMPED_cm:
    case R600::RECIPSQRT_CLAMPED_eg:
    case R600::RECIPSQRT_CLAMPED_r600:
    case R600::RECIPSQRT_IEEE_cm:
    case R600::RECIPSQRT_IEEE_eg:
    case R600::RECIPSQRT_IEEE_r600:
    case R600::RECIP_CLAMPED_cm:
    case R600::RECIP_CLAMPED_eg:
    case R600::RECIP_CLAMPED_r600:
    case R600::RECIP_IEEE_cm:
    case R600::RECIP_IEEE_eg:
    case R600::RECIP_IEEE_r600:
    case R600::RECIP_UINT_eg:
    case R600::RECIP_UINT_r600:
    case R600::RNDNE:
    case R600::SIN_cm:
    case R600::SIN_eg:
    case R600::SIN_r600:
    case R600::SIN_r700:
    case R600::TRUNC:
    case R600::UINT_TO_FLT_eg:
    case R600::UINT_TO_FLT_r600: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= (op & UINT64_C(511));
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 9;
      Value |= op;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(11), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 29;
      Value |= op;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(10), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 31;
      Value |= op;
      // op: src0_neg
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 12;
      Value |= op;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 52;
      Value |= (op & UINT64_C(127)) << 53;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(13), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 50;
      Value |= op;
      // op: dst_rel
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 60;
      Value |= op;
      // op: clamp
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 63;
      Value |= op;
      // op: src0_abs
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 32;
      Value |= op;
      // op: write
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 36;
      Value |= op;
      // op: omod
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 37;
      Value |= op;
      break;
    }
    case R600::ADD:
    case R600::ADDC_UINT:
    case R600::ADD_INT:
    case R600::AND_INT:
    case R600::ASHR_eg:
    case R600::ASHR_r600:
    case R600::BFM_INT_eg:
    case R600::CUBE_eg_real:
    case R600::CUBE_r600_real:
    case R600::DOT4_eg:
    case R600::DOT4_r600:
    case R600::KILLGT:
    case R600::LSHL_eg:
    case R600::LSHL_r600:
    case R600::LSHR_eg:
    case R600::LSHR_r600:
    case R600::MAX:
    case R600::MAX_DX10:
    case R600::MAX_INT:
    case R600::MAX_UINT:
    case R600::MIN:
    case R600::MIN_DX10:
    case R600::MIN_INT:
    case R600::MIN_UINT:
    case R600::MUL:
    case R600::MULHI_INT_cm:
    case R600::MULHI_INT_cm24:
    case R600::MULHI_INT_eg:
    case R600::MULHI_INT_r600:
    case R600::MULHI_UINT24_eg:
    case R600::MULHI_UINT_cm:
    case R600::MULHI_UINT_cm24:
    case R600::MULHI_UINT_eg:
    case R600::MULHI_UINT_r600:
    case R600::MULLO_INT_cm:
    case R600::MULLO_INT_eg:
    case R600::MULLO_INT_r600:
    case R600::MULLO_UINT_cm:
    case R600::MULLO_UINT_eg:
    case R600::MULLO_UINT_r600:
    case R600::MUL_IEEE:
    case R600::MUL_INT24_cm:
    case R600::MUL_UINT24_eg:
    case R600::OR_INT:
    case R600::PRED_SETE:
    case R600::PRED_SETE_INT:
    case R600::PRED_SETGE:
    case R600::PRED_SETGE_INT:
    case R600::PRED_SETGT:
    case R600::PRED_SETGT_INT:
    case R600::PRED_SETNE:
    case R600::PRED_SETNE_INT:
    case R600::SETE:
    case R600::SETE_DX10:
    case R600::SETE_INT:
    case R600::SETGE_DX10:
    case R600::SETGE_INT:
    case R600::SETGE_UINT:
    case R600::SETGT_DX10:
    case R600::SETGT_INT:
    case R600::SETGT_UINT:
    case R600::SETNE_DX10:
    case R600::SETNE_INT:
    case R600::SGE:
    case R600::SGT:
    case R600::SNE:
    case R600::SUBB_UINT:
    case R600::SUB_INT:
    case R600::XOR_INT: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= (op & UINT64_C(511));
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(9), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 9;
      Value |= op;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(12), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(14), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 22;
      Value |= op;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(18), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 29;
      Value |= op;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(17), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 31;
      Value |= op;
      // op: src0_neg
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 12;
      Value |= op;
      // op: src1_neg
      op = getMachineOpValue(MI, MI.getOperand(13), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 52;
      Value |= (op & UINT64_C(127)) << 53;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(20), Fixups, STI);
      op &= UINT64_C(7);
      op <<= 50;
      Value |= op;
      // op: dst_rel
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 60;
      Value |= op;
      // op: clamp
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 63;
      Value |= op;
      // op: src0_abs
      op = getMachineOpValue(MI, MI.getOperand(10), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 32;
      Value |= op;
      // op: src1_abs
      op = getMachineOpValue(MI, MI.getOperand(15), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 33;
      Value |= op;
      // op: update_exec_mask
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 34;
      Value |= op;
      // op: update_pred
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 35;
      Value |= op;
      // op: write
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 36;
      Value |= op;
      // op: omod
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 37;
      Value |= op;
      break;
    }
    case R600::INTERP_XY:
    case R600::INTERP_ZW: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= (op & UINT64_C(511));
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(9), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 9;
      Value |= op;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(12), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(14), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 22;
      Value |= op;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(18), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 29;
      Value |= op;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(17), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 31;
      Value |= op;
      // op: src0_neg
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 12;
      Value |= op;
      // op: src1_neg
      op = getMachineOpValue(MI, MI.getOperand(13), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 25;
      Value |= op;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 52;
      Value |= (op & UINT64_C(127)) << 53;
      // op: dst_rel
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 60;
      Value |= op;
      // op: clamp
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 63;
      Value |= op;
      // op: src0_abs
      op = getMachineOpValue(MI, MI.getOperand(10), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 32;
      Value |= op;
      // op: src1_abs
      op = getMachineOpValue(MI, MI.getOperand(15), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 33;
      Value |= op;
      // op: update_exec_mask
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 34;
      Value |= op;
      // op: update_pred
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 35;
      Value |= op;
      // op: write
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(1);
      op <<= 36;
      Value |= op;
      // op: omod
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      op &= UINT64_C(3);
      op <<= 37;
      Value |= op;
      break;
    }
    case R600::VTX_READ_128_cm:
    case R600::VTX_READ_128_eg:
    case R600::VTX_READ_16_cm:
    case R600::VTX_READ_16_eg:
    case R600::VTX_READ_32_cm:
    case R600::VTX_READ_32_eg:
    case R600::VTX_READ_64_cm:
    case R600::VTX_READ_64_eg:
    case R600::VTX_READ_8_cm:
    case R600::VTX_READ_8_eg: {
      // op: src_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 16;
      Value |= op;
      // op: buffer_id
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      op &= UINT64_C(255);
      op <<= 8;
      Value |= op;
      // op: dst_gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(127);
      op <<= 32;
      Value |= op;
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str());
  }
  return Value;
}

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  nullptr
};

#endif // NDEBUG
FeatureBitset R600MCCodeEmitter::
computeAvailableFeatures(const FeatureBitset &FB) const {
  FeatureBitset Features;
  return Features;
}

#ifndef NDEBUG
// Feature bitsets.
enum : uint8_t {
  CEFBS_None,
};

static constexpr FeatureBitset FeatureBitsets[] = {
  {}, // CEFBS_None
};
#endif // NDEBUG

void R600MCCodeEmitter::verifyInstructionPredicates(
    const MCInst &Inst, const FeatureBitset &AvailableFeatures) const {
#ifndef NDEBUG
  static uint8_t RequiredFeaturesRefs[] = {
    CEFBS_None, // PHI = 0
    CEFBS_None, // INLINEASM = 1
    CEFBS_None, // INLINEASM_BR = 2
    CEFBS_None, // CFI_INSTRUCTION = 3
    CEFBS_None, // EH_LABEL = 4
    CEFBS_None, // GC_LABEL = 5
    CEFBS_None, // ANNOTATION_LABEL = 6
    CEFBS_None, // KILL = 7
    CEFBS_None, // EXTRACT_SUBREG = 8
    CEFBS_None, // INSERT_SUBREG = 9
    CEFBS_None, // IMPLICIT_DEF = 10
    CEFBS_None, // SUBREG_TO_REG = 11
    CEFBS_None, // COPY_TO_REGCLASS = 12
    CEFBS_None, // DBG_VALUE = 13
    CEFBS_None, // DBG_INSTR_REF = 14
    CEFBS_None, // DBG_LABEL = 15
    CEFBS_None, // REG_SEQUENCE = 16
    CEFBS_None, // COPY = 17
    CEFBS_None, // BUNDLE = 18
    CEFBS_None, // LIFETIME_START = 19
    CEFBS_None, // LIFETIME_END = 20
    CEFBS_None, // PSEUDO_PROBE = 21
    CEFBS_None, // STACKMAP = 22
    CEFBS_None, // FENTRY_CALL = 23
    CEFBS_None, // PATCHPOINT = 24
    CEFBS_None, // LOAD_STACK_GUARD = 25
    CEFBS_None, // PREALLOCATED_SETUP = 26
    CEFBS_None, // PREALLOCATED_ARG = 27
    CEFBS_None, // STATEPOINT = 28
    CEFBS_None, // LOCAL_ESCAPE = 29
    CEFBS_None, // FAULTING_OP = 30
    CEFBS_None, // PATCHABLE_OP = 31
    CEFBS_None, // PATCHABLE_FUNCTION_ENTER = 32
    CEFBS_None, // PATCHABLE_RET = 33
    CEFBS_None, // PATCHABLE_FUNCTION_EXIT = 34
    CEFBS_None, // PATCHABLE_TAIL_CALL = 35
    CEFBS_None, // PATCHABLE_EVENT_CALL = 36
    CEFBS_None, // PATCHABLE_TYPED_EVENT_CALL = 37
    CEFBS_None, // ICALL_BRANCH_FUNNEL = 38
    CEFBS_None, // G_ASSERT_ZEXT = 39
    CEFBS_None, // G_ADD = 40
    CEFBS_None, // G_SUB = 41
    CEFBS_None, // G_MUL = 42
    CEFBS_None, // G_SDIV = 43
    CEFBS_None, // G_UDIV = 44
    CEFBS_None, // G_SREM = 45
    CEFBS_None, // G_UREM = 46
    CEFBS_None, // G_AND = 47
    CEFBS_None, // G_OR = 48
    CEFBS_None, // G_XOR = 49
    CEFBS_None, // G_IMPLICIT_DEF = 50
    CEFBS_None, // G_PHI = 51
    CEFBS_None, // G_FRAME_INDEX = 52
    CEFBS_None, // G_GLOBAL_VALUE = 53
    CEFBS_None, // G_EXTRACT = 54
    CEFBS_None, // G_UNMERGE_VALUES = 55
    CEFBS_None, // G_INSERT = 56
    CEFBS_None, // G_MERGE_VALUES = 57
    CEFBS_None, // G_BUILD_VECTOR = 58
    CEFBS_None, // G_BUILD_VECTOR_TRUNC = 59
    CEFBS_None, // G_CONCAT_VECTORS = 60
    CEFBS_None, // G_PTRTOINT = 61
    CEFBS_None, // G_INTTOPTR = 62
    CEFBS_None, // G_BITCAST = 63
    CEFBS_None, // G_FREEZE = 64
    CEFBS_None, // G_INTRINSIC_TRUNC = 65
    CEFBS_None, // G_INTRINSIC_ROUND = 66
    CEFBS_None, // G_INTRINSIC_LRINT = 67
    CEFBS_None, // G_INTRINSIC_ROUNDEVEN = 68
    CEFBS_None, // G_READCYCLECOUNTER = 69
    CEFBS_None, // G_LOAD = 70
    CEFBS_None, // G_SEXTLOAD = 71
    CEFBS_None, // G_ZEXTLOAD = 72
    CEFBS_None, // G_INDEXED_LOAD = 73
    CEFBS_None, // G_INDEXED_SEXTLOAD = 74
    CEFBS_None, // G_INDEXED_ZEXTLOAD = 75
    CEFBS_None, // G_STORE = 76
    CEFBS_None, // G_INDEXED_STORE = 77
    CEFBS_None, // G_ATOMIC_CMPXCHG_WITH_SUCCESS = 78
    CEFBS_None, // G_ATOMIC_CMPXCHG = 79
    CEFBS_None, // G_ATOMICRMW_XCHG = 80
    CEFBS_None, // G_ATOMICRMW_ADD = 81
    CEFBS_None, // G_ATOMICRMW_SUB = 82
    CEFBS_None, // G_ATOMICRMW_AND = 83
    CEFBS_None, // G_ATOMICRMW_NAND = 84
    CEFBS_None, // G_ATOMICRMW_OR = 85
    CEFBS_None, // G_ATOMICRMW_XOR = 86
    CEFBS_None, // G_ATOMICRMW_MAX = 87
    CEFBS_None, // G_ATOMICRMW_MIN = 88
    CEFBS_None, // G_ATOMICRMW_UMAX = 89
    CEFBS_None, // G_ATOMICRMW_UMIN = 90
    CEFBS_None, // G_ATOMICRMW_FADD = 91
    CEFBS_None, // G_ATOMICRMW_FSUB = 92
    CEFBS_None, // G_FENCE = 93
    CEFBS_None, // G_BRCOND = 94
    CEFBS_None, // G_BRINDIRECT = 95
    CEFBS_None, // G_INTRINSIC = 96
    CEFBS_None, // G_INTRINSIC_W_SIDE_EFFECTS = 97
    CEFBS_None, // G_ANYEXT = 98
    CEFBS_None, // G_TRUNC = 99
    CEFBS_None, // G_CONSTANT = 100
    CEFBS_None, // G_FCONSTANT = 101
    CEFBS_None, // G_VASTART = 102
    CEFBS_None, // G_VAARG = 103
    CEFBS_None, // G_SEXT = 104
    CEFBS_None, // G_SEXT_INREG = 105
    CEFBS_None, // G_ZEXT = 106
    CEFBS_None, // G_SHL = 107
    CEFBS_None, // G_LSHR = 108
    CEFBS_None, // G_ASHR = 109
    CEFBS_None, // G_FSHL = 110
    CEFBS_None, // G_FSHR = 111
    CEFBS_None, // G_ICMP = 112
    CEFBS_None, // G_FCMP = 113
    CEFBS_None, // G_SELECT = 114
    CEFBS_None, // G_UADDO = 115
    CEFBS_None, // G_UADDE = 116
    CEFBS_None, // G_USUBO = 117
    CEFBS_None, // G_USUBE = 118
    CEFBS_None, // G_SADDO = 119
    CEFBS_None, // G_SADDE = 120
    CEFBS_None, // G_SSUBO = 121
    CEFBS_None, // G_SSUBE = 122
    CEFBS_None, // G_UMULO = 123
    CEFBS_None, // G_SMULO = 124
    CEFBS_None, // G_UMULH = 125
    CEFBS_None, // G_SMULH = 126
    CEFBS_None, // G_UADDSAT = 127
    CEFBS_None, // G_SADDSAT = 128
    CEFBS_None, // G_USUBSAT = 129
    CEFBS_None, // G_SSUBSAT = 130
    CEFBS_None, // G_USHLSAT = 131
    CEFBS_None, // G_SSHLSAT = 132
    CEFBS_None, // G_SMULFIX = 133
    CEFBS_None, // G_UMULFIX = 134
    CEFBS_None, // G_SMULFIXSAT = 135
    CEFBS_None, // G_UMULFIXSAT = 136
    CEFBS_None, // G_SDIVFIX = 137
    CEFBS_None, // G_UDIVFIX = 138
    CEFBS_None, // G_SDIVFIXSAT = 139
    CEFBS_None, // G_UDIVFIXSAT = 140
    CEFBS_None, // G_FADD = 141
    CEFBS_None, // G_FSUB = 142
    CEFBS_None, // G_FMUL = 143
    CEFBS_None, // G_FMA = 144
    CEFBS_None, // G_FMAD = 145
    CEFBS_None, // G_FDIV = 146
    CEFBS_None, // G_FREM = 147
    CEFBS_None, // G_FPOW = 148
    CEFBS_None, // G_FPOWI = 149
    CEFBS_None, // G_FEXP = 150
    CEFBS_None, // G_FEXP2 = 151
    CEFBS_None, // G_FLOG = 152
    CEFBS_None, // G_FLOG2 = 153
    CEFBS_None, // G_FLOG10 = 154
    CEFBS_None, // G_FNEG = 155
    CEFBS_None, // G_FPEXT = 156
    CEFBS_None, // G_FPTRUNC = 157
    CEFBS_None, // G_FPTOSI = 158
    CEFBS_None, // G_FPTOUI = 159
    CEFBS_None, // G_SITOFP = 160
    CEFBS_None, // G_UITOFP = 161
    CEFBS_None, // G_FABS = 162
    CEFBS_None, // G_FCOPYSIGN = 163
    CEFBS_None, // G_FCANONICALIZE = 164
    CEFBS_None, // G_FMINNUM = 165
    CEFBS_None, // G_FMAXNUM = 166
    CEFBS_None, // G_FMINNUM_IEEE = 167
    CEFBS_None, // G_FMAXNUM_IEEE = 168
    CEFBS_None, // G_FMINIMUM = 169
    CEFBS_None, // G_FMAXIMUM = 170
    CEFBS_None, // G_PTR_ADD = 171
    CEFBS_None, // G_PTRMASK = 172
    CEFBS_None, // G_SMIN = 173
    CEFBS_None, // G_SMAX = 174
    CEFBS_None, // G_UMIN = 175
    CEFBS_None, // G_UMAX = 176
    CEFBS_None, // G_ABS = 177
    CEFBS_None, // G_BR = 178
    CEFBS_None, // G_BRJT = 179
    CEFBS_None, // G_INSERT_VECTOR_ELT = 180
    CEFBS_None, // G_EXTRACT_VECTOR_ELT = 181
    CEFBS_None, // G_SHUFFLE_VECTOR = 182
    CEFBS_None, // G_CTTZ = 183
    CEFBS_None, // G_CTTZ_ZERO_UNDEF = 184
    CEFBS_None, // G_CTLZ = 185
    CEFBS_None, // G_CTLZ_ZERO_UNDEF = 186
    CEFBS_None, // G_CTPOP = 187
    CEFBS_None, // G_BSWAP = 188
    CEFBS_None, // G_BITREVERSE = 189
    CEFBS_None, // G_FCEIL = 190
    CEFBS_None, // G_FCOS = 191
    CEFBS_None, // G_FSIN = 192
    CEFBS_None, // G_FSQRT = 193
    CEFBS_None, // G_FFLOOR = 194
    CEFBS_None, // G_FRINT = 195
    CEFBS_None, // G_FNEARBYINT = 196
    CEFBS_None, // G_ADDRSPACE_CAST = 197
    CEFBS_None, // G_BLOCK_ADDR = 198
    CEFBS_None, // G_JUMP_TABLE = 199
    CEFBS_None, // G_DYN_STACKALLOC = 200
    CEFBS_None, // G_STRICT_FADD = 201
    CEFBS_None, // G_STRICT_FSUB = 202
    CEFBS_None, // G_STRICT_FMUL = 203
    CEFBS_None, // G_STRICT_FDIV = 204
    CEFBS_None, // G_STRICT_FREM = 205
    CEFBS_None, // G_STRICT_FMA = 206
    CEFBS_None, // G_STRICT_FSQRT = 207
    CEFBS_None, // G_READ_REGISTER = 208
    CEFBS_None, // G_WRITE_REGISTER = 209
    CEFBS_None, // G_MEMCPY = 210
    CEFBS_None, // G_MEMMOVE = 211
    CEFBS_None, // G_MEMSET = 212
    CEFBS_None, // G_VECREDUCE_SEQ_FADD = 213
    CEFBS_None, // G_VECREDUCE_SEQ_FMUL = 214
    CEFBS_None, // G_VECREDUCE_FADD = 215
    CEFBS_None, // G_VECREDUCE_FMUL = 216
    CEFBS_None, // G_VECREDUCE_FMAX = 217
    CEFBS_None, // G_VECREDUCE_FMIN = 218
    CEFBS_None, // G_VECREDUCE_ADD = 219
    CEFBS_None, // G_VECREDUCE_MUL = 220
    CEFBS_None, // G_VECREDUCE_AND = 221
    CEFBS_None, // G_VECREDUCE_OR = 222
    CEFBS_None, // G_VECREDUCE_XOR = 223
    CEFBS_None, // G_VECREDUCE_SMAX = 224
    CEFBS_None, // G_VECREDUCE_SMIN = 225
    CEFBS_None, // G_VECREDUCE_UMAX = 226
    CEFBS_None, // G_VECREDUCE_UMIN = 227
    CEFBS_None, // BRANCH = 228
    CEFBS_None, // BRANCH_COND_f32 = 229
    CEFBS_None, // BRANCH_COND_i32 = 230
    CEFBS_None, // BREAK = 231
    CEFBS_None, // BREAKC_f32 = 232
    CEFBS_None, // BREAKC_i32 = 233
    CEFBS_None, // BREAK_LOGICALNZ_f32 = 234
    CEFBS_None, // BREAK_LOGICALNZ_i32 = 235
    CEFBS_None, // BREAK_LOGICALZ_f32 = 236
    CEFBS_None, // BREAK_LOGICALZ_i32 = 237
    CEFBS_None, // CONST_COPY = 238
    CEFBS_None, // CONTINUE = 239
    CEFBS_None, // CONTINUEC_f32 = 240
    CEFBS_None, // CONTINUEC_i32 = 241
    CEFBS_None, // CONTINUE_LOGICALNZ_f32 = 242
    CEFBS_None, // CONTINUE_LOGICALNZ_i32 = 243
    CEFBS_None, // CONTINUE_LOGICALZ_f32 = 244
    CEFBS_None, // CONTINUE_LOGICALZ_i32 = 245
    CEFBS_None, // CUBE_eg_pseudo = 246
    CEFBS_None, // CUBE_r600_pseudo = 247
    CEFBS_None, // DEFAULT = 248
    CEFBS_None, // DOT_4 = 249
    CEFBS_None, // DUMMY_CHAIN = 250
    CEFBS_None, // ELSE = 251
    CEFBS_None, // END = 252
    CEFBS_None, // ENDFUNC = 253
    CEFBS_None, // ENDIF = 254
    CEFBS_None, // ENDLOOP = 255
    CEFBS_None, // ENDMAIN = 256
    CEFBS_None, // ENDSWITCH = 257
    CEFBS_None, // FABS_R600 = 258
    CEFBS_None, // FNEG_R600 = 259
    CEFBS_None, // FUNC = 260
    CEFBS_None, // IFC_f32 = 261
    CEFBS_None, // IFC_i32 = 262
    CEFBS_None, // IF_LOGICALNZ_f32 = 263
    CEFBS_None, // IF_LOGICALNZ_i32 = 264
    CEFBS_None, // IF_LOGICALZ_f32 = 265
    CEFBS_None, // IF_LOGICALZ_i32 = 266
    CEFBS_None, // IF_PREDICATE_SET = 267
    CEFBS_None, // JUMP = 268
    CEFBS_None, // JUMP_COND = 269
    CEFBS_None, // MASK_WRITE = 270
    CEFBS_None, // MOV_IMM_F32 = 271
    CEFBS_None, // MOV_IMM_GLOBAL_ADDR = 272
    CEFBS_None, // MOV_IMM_I32 = 273
    CEFBS_None, // PRED_X = 274
    CEFBS_None, // R600_EXTRACT_ELT_V2 = 275
    CEFBS_None, // R600_EXTRACT_ELT_V4 = 276
    CEFBS_None, // R600_INSERT_ELT_V2 = 277
    CEFBS_None, // R600_INSERT_ELT_V4 = 278
    CEFBS_None, // R600_RegisterLoad = 279
    CEFBS_None, // R600_RegisterStore = 280
    CEFBS_None, // RETDYN = 281
    CEFBS_None, // RETURN = 282
    CEFBS_None, // TXD = 283
    CEFBS_None, // TXD_SHADOW = 284
    CEFBS_None, // WHILELOOP = 285
    CEFBS_None, // ADD = 286
    CEFBS_None, // ADDC_UINT = 287
    CEFBS_None, // ADD_INT = 288
    CEFBS_None, // ALU_CLAUSE = 289
    CEFBS_None, // AND_INT = 290
    CEFBS_None, // ASHR_eg = 291
    CEFBS_None, // ASHR_r600 = 292
    CEFBS_None, // BCNT_INT = 293
    CEFBS_None, // BFE_INT_eg = 294
    CEFBS_None, // BFE_UINT_eg = 295
    CEFBS_None, // BFI_INT_eg = 296
    CEFBS_None, // BFM_INT_eg = 297
    CEFBS_None, // BIT_ALIGN_INT_eg = 298
    CEFBS_None, // CEIL = 299
    CEFBS_None, // CF_ALU = 300
    CEFBS_None, // CF_ALU_BREAK = 301
    CEFBS_None, // CF_ALU_CONTINUE = 302
    CEFBS_None, // CF_ALU_ELSE_AFTER = 303
    CEFBS_None, // CF_ALU_POP_AFTER = 304
    CEFBS_None, // CF_ALU_PUSH_BEFORE = 305
    CEFBS_None, // CF_CALL_FS_EG = 306
    CEFBS_None, // CF_CALL_FS_R600 = 307
    CEFBS_None, // CF_CONTINUE_EG = 308
    CEFBS_None, // CF_CONTINUE_R600 = 309
    CEFBS_None, // CF_ELSE_EG = 310
    CEFBS_None, // CF_ELSE_R600 = 311
    CEFBS_None, // CF_END_CM = 312
    CEFBS_None, // CF_END_EG = 313
    CEFBS_None, // CF_END_R600 = 314
    CEFBS_None, // CF_JUMP_EG = 315
    CEFBS_None, // CF_JUMP_R600 = 316
    CEFBS_None, // CF_PUSH_EG = 317
    CEFBS_None, // CF_PUSH_ELSE_R600 = 318
    CEFBS_None, // CF_TC_EG = 319
    CEFBS_None, // CF_TC_R600 = 320
    CEFBS_None, // CF_VC_EG = 321
    CEFBS_None, // CF_VC_R600 = 322
    CEFBS_None, // CNDE_INT = 323
    CEFBS_None, // CNDE_eg = 324
    CEFBS_None, // CNDE_r600 = 325
    CEFBS_None, // CNDGE_INT = 326
    CEFBS_None, // CNDGE_eg = 327
    CEFBS_None, // CNDGE_r600 = 328
    CEFBS_None, // CNDGT_INT = 329
    CEFBS_None, // CNDGT_eg = 330
    CEFBS_None, // CNDGT_r600 = 331
    CEFBS_None, // COS_cm = 332
    CEFBS_None, // COS_eg = 333
    CEFBS_None, // COS_r600 = 334
    CEFBS_None, // COS_r700 = 335
    CEFBS_None, // CUBE_eg_real = 336
    CEFBS_None, // CUBE_r600_real = 337
    CEFBS_None, // DOT4_eg = 338
    CEFBS_None, // DOT4_r600 = 339
    CEFBS_None, // EG_ExportBuf = 340
    CEFBS_None, // EG_ExportSwz = 341
    CEFBS_None, // END_LOOP_EG = 342
    CEFBS_None, // END_LOOP_R600 = 343
    CEFBS_None, // EXP_IEEE_cm = 344
    CEFBS_None, // EXP_IEEE_eg = 345
    CEFBS_None, // EXP_IEEE_r600 = 346
    CEFBS_None, // FETCH_CLAUSE = 347
    CEFBS_None, // FFBH_UINT = 348
    CEFBS_None, // FFBL_INT = 349
    CEFBS_None, // FLOOR = 350
    CEFBS_None, // FLT16_TO_FLT32 = 351
    CEFBS_None, // FLT32_TO_FLT16 = 352
    CEFBS_None, // FLT_TO_INT_eg = 353
    CEFBS_None, // FLT_TO_INT_r600 = 354
    CEFBS_None, // FLT_TO_UINT_eg = 355
    CEFBS_None, // FLT_TO_UINT_r600 = 356
    CEFBS_None, // FMA_eg = 357
    CEFBS_None, // FRACT = 358
    CEFBS_None, // GROUP_BARRIER = 359
    CEFBS_None, // INTERP_LOAD_P0 = 360
    CEFBS_None, // INTERP_PAIR_XY = 361
    CEFBS_None, // INTERP_PAIR_ZW = 362
    CEFBS_None, // INTERP_VEC_LOAD = 363
    CEFBS_None, // INTERP_XY = 364
    CEFBS_None, // INTERP_ZW = 365
    CEFBS_None, // INT_TO_FLT_eg = 366
    CEFBS_None, // INT_TO_FLT_r600 = 367
    CEFBS_None, // KILLGT = 368
    CEFBS_None, // LDS_ADD = 369
    CEFBS_None, // LDS_ADD_RET = 370
    CEFBS_None, // LDS_AND = 371
    CEFBS_None, // LDS_AND_RET = 372
    CEFBS_None, // LDS_BYTE_READ_RET = 373
    CEFBS_None, // LDS_BYTE_WRITE = 374
    CEFBS_None, // LDS_CMPST = 375
    CEFBS_None, // LDS_CMPST_RET = 376
    CEFBS_None, // LDS_MAX_INT = 377
    CEFBS_None, // LDS_MAX_INT_RET = 378
    CEFBS_None, // LDS_MAX_UINT = 379
    CEFBS_None, // LDS_MAX_UINT_RET = 380
    CEFBS_None, // LDS_MIN_INT = 381
    CEFBS_None, // LDS_MIN_INT_RET = 382
    CEFBS_None, // LDS_MIN_UINT = 383
    CEFBS_None, // LDS_MIN_UINT_RET = 384
    CEFBS_None, // LDS_OR = 385
    CEFBS_None, // LDS_OR_RET = 386
    CEFBS_None, // LDS_READ_RET = 387
    CEFBS_None, // LDS_SHORT_READ_RET = 388
    CEFBS_None, // LDS_SHORT_WRITE = 389
    CEFBS_None, // LDS_SUB = 390
    CEFBS_None, // LDS_SUB_RET = 391
    CEFBS_None, // LDS_UBYTE_READ_RET = 392
    CEFBS_None, // LDS_USHORT_READ_RET = 393
    CEFBS_None, // LDS_WRITE = 394
    CEFBS_None, // LDS_WRXCHG = 395
    CEFBS_None, // LDS_WRXCHG_RET = 396
    CEFBS_None, // LDS_XOR = 397
    CEFBS_None, // LDS_XOR_RET = 398
    CEFBS_None, // LITERALS = 399
    CEFBS_None, // LOG_CLAMPED_eg = 400
    CEFBS_None, // LOG_CLAMPED_r600 = 401
    CEFBS_None, // LOG_IEEE_cm = 402
    CEFBS_None, // LOG_IEEE_eg = 403
    CEFBS_None, // LOG_IEEE_r600 = 404
    CEFBS_None, // LOOP_BREAK_EG = 405
    CEFBS_None, // LOOP_BREAK_R600 = 406
    CEFBS_None, // LSHL_eg = 407
    CEFBS_None, // LSHL_r600 = 408
    CEFBS_None, // LSHR_eg = 409
    CEFBS_None, // LSHR_r600 = 410
    CEFBS_None, // MAX = 411
    CEFBS_None, // MAX_DX10 = 412
    CEFBS_None, // MAX_INT = 413
    CEFBS_None, // MAX_UINT = 414
    CEFBS_None, // MIN = 415
    CEFBS_None, // MIN_DX10 = 416
    CEFBS_None, // MIN_INT = 417
    CEFBS_None, // MIN_UINT = 418
    CEFBS_None, // MOV = 419
    CEFBS_None, // MOVA_INT_eg = 420
    CEFBS_None, // MUL = 421
    CEFBS_None, // MULADD_IEEE_eg = 422
    CEFBS_None, // MULADD_IEEE_r600 = 423
    CEFBS_None, // MULADD_INT24_cm = 424
    CEFBS_None, // MULADD_UINT24_eg = 425
    CEFBS_None, // MULADD_eg = 426
    CEFBS_None, // MULADD_r600 = 427
    CEFBS_None, // MULHI_INT_cm = 428
    CEFBS_None, // MULHI_INT_cm24 = 429
    CEFBS_None, // MULHI_INT_eg = 430
    CEFBS_None, // MULHI_INT_r600 = 431
    CEFBS_None, // MULHI_UINT24_eg = 432
    CEFBS_None, // MULHI_UINT_cm = 433
    CEFBS_None, // MULHI_UINT_cm24 = 434
    CEFBS_None, // MULHI_UINT_eg = 435
    CEFBS_None, // MULHI_UINT_r600 = 436
    CEFBS_None, // MULLO_INT_cm = 437
    CEFBS_None, // MULLO_INT_eg = 438
    CEFBS_None, // MULLO_INT_r600 = 439
    CEFBS_None, // MULLO_UINT_cm = 440
    CEFBS_None, // MULLO_UINT_eg = 441
    CEFBS_None, // MULLO_UINT_r600 = 442
    CEFBS_None, // MUL_IEEE = 443
    CEFBS_None, // MUL_INT24_cm = 444
    CEFBS_None, // MUL_LIT_eg = 445
    CEFBS_None, // MUL_LIT_r600 = 446
    CEFBS_None, // MUL_UINT24_eg = 447
    CEFBS_None, // NOT_INT = 448
    CEFBS_None, // OR_INT = 449
    CEFBS_None, // PAD = 450
    CEFBS_None, // POP_EG = 451
    CEFBS_None, // POP_R600 = 452
    CEFBS_None, // PRED_SETE = 453
    CEFBS_None, // PRED_SETE_INT = 454
    CEFBS_None, // PRED_SETGE = 455
    CEFBS_None, // PRED_SETGE_INT = 456
    CEFBS_None, // PRED_SETGT = 457
    CEFBS_None, // PRED_SETGT_INT = 458
    CEFBS_None, // PRED_SETNE = 459
    CEFBS_None, // PRED_SETNE_INT = 460
    CEFBS_None, // R600_ExportBuf = 461
    CEFBS_None, // R600_ExportSwz = 462
    CEFBS_None, // RAT_ATOMIC_ADD_NORET = 463
    CEFBS_None, // RAT_ATOMIC_ADD_RTN = 464
    CEFBS_None, // RAT_ATOMIC_AND_NORET = 465
    CEFBS_None, // RAT_ATOMIC_AND_RTN = 466
    CEFBS_None, // RAT_ATOMIC_CMPXCHG_INT_NORET = 467
    CEFBS_None, // RAT_ATOMIC_CMPXCHG_INT_RTN = 468
    CEFBS_None, // RAT_ATOMIC_DEC_UINT_NORET = 469
    CEFBS_None, // RAT_ATOMIC_DEC_UINT_RTN = 470
    CEFBS_None, // RAT_ATOMIC_INC_UINT_NORET = 471
    CEFBS_None, // RAT_ATOMIC_INC_UINT_RTN = 472
    CEFBS_None, // RAT_ATOMIC_MAX_INT_NORET = 473
    CEFBS_None, // RAT_ATOMIC_MAX_INT_RTN = 474
    CEFBS_None, // RAT_ATOMIC_MAX_UINT_NORET = 475
    CEFBS_None, // RAT_ATOMIC_MAX_UINT_RTN = 476
    CEFBS_None, // RAT_ATOMIC_MIN_INT_NORET = 477
    CEFBS_None, // RAT_ATOMIC_MIN_INT_RTN = 478
    CEFBS_None, // RAT_ATOMIC_MIN_UINT_NORET = 479
    CEFBS_None, // RAT_ATOMIC_MIN_UINT_RTN = 480
    CEFBS_None, // RAT_ATOMIC_OR_NORET = 481
    CEFBS_None, // RAT_ATOMIC_OR_RTN = 482
    CEFBS_None, // RAT_ATOMIC_RSUB_NORET = 483
    CEFBS_None, // RAT_ATOMIC_RSUB_RTN = 484
    CEFBS_None, // RAT_ATOMIC_SUB_NORET = 485
    CEFBS_None, // RAT_ATOMIC_SUB_RTN = 486
    CEFBS_None, // RAT_ATOMIC_XCHG_INT_NORET = 487
    CEFBS_None, // RAT_ATOMIC_XCHG_INT_RTN = 488
    CEFBS_None, // RAT_ATOMIC_XOR_NORET = 489
    CEFBS_None, // RAT_ATOMIC_XOR_RTN = 490
    CEFBS_None, // RAT_MSKOR = 491
    CEFBS_None, // RAT_STORE_DWORD128 = 492
    CEFBS_None, // RAT_STORE_DWORD32 = 493
    CEFBS_None, // RAT_STORE_DWORD64 = 494
    CEFBS_None, // RAT_STORE_TYPED_cm = 495
    CEFBS_None, // RAT_STORE_TYPED_eg = 496
    CEFBS_None, // RAT_WRITE_CACHELESS_128_eg = 497
    CEFBS_None, // RAT_WRITE_CACHELESS_32_eg = 498
    CEFBS_None, // RAT_WRITE_CACHELESS_64_eg = 499
    CEFBS_None, // RECIPSQRT_CLAMPED_cm = 500
    CEFBS_None, // RECIPSQRT_CLAMPED_eg = 501
    CEFBS_None, // RECIPSQRT_CLAMPED_r600 = 502
    CEFBS_None, // RECIPSQRT_IEEE_cm = 503
    CEFBS_None, // RECIPSQRT_IEEE_eg = 504
    CEFBS_None, // RECIPSQRT_IEEE_r600 = 505
    CEFBS_None, // RECIP_CLAMPED_cm = 506
    CEFBS_None, // RECIP_CLAMPED_eg = 507
    CEFBS_None, // RECIP_CLAMPED_r600 = 508
    CEFBS_None, // RECIP_IEEE_cm = 509
    CEFBS_None, // RECIP_IEEE_eg = 510
    CEFBS_None, // RECIP_IEEE_r600 = 511
    CEFBS_None, // RECIP_UINT_eg = 512
    CEFBS_None, // RECIP_UINT_r600 = 513
    CEFBS_None, // RNDNE = 514
    CEFBS_None, // SETE = 515
    CEFBS_None, // SETE_DX10 = 516
    CEFBS_None, // SETE_INT = 517
    CEFBS_None, // SETGE_DX10 = 518
    CEFBS_None, // SETGE_INT = 519
    CEFBS_None, // SETGE_UINT = 520
    CEFBS_None, // SETGT_DX10 = 521
    CEFBS_None, // SETGT_INT = 522
    CEFBS_None, // SETGT_UINT = 523
    CEFBS_None, // SETNE_DX10 = 524
    CEFBS_None, // SETNE_INT = 525
    CEFBS_None, // SGE = 526
    CEFBS_None, // SGT = 527
    CEFBS_None, // SIN_cm = 528
    CEFBS_None, // SIN_eg = 529
    CEFBS_None, // SIN_r600 = 530
    CEFBS_None, // SIN_r700 = 531
    CEFBS_None, // SNE = 532
    CEFBS_None, // SUBB_UINT = 533
    CEFBS_None, // SUB_INT = 534
    CEFBS_None, // TEX_GET_GRADIENTS_H = 535
    CEFBS_None, // TEX_GET_GRADIENTS_V = 536
    CEFBS_None, // TEX_GET_TEXTURE_RESINFO = 537
    CEFBS_None, // TEX_LD = 538
    CEFBS_None, // TEX_LDPTR = 539
    CEFBS_None, // TEX_SAMPLE = 540
    CEFBS_None, // TEX_SAMPLE_C = 541
    CEFBS_None, // TEX_SAMPLE_C_G = 542
    CEFBS_None, // TEX_SAMPLE_C_L = 543
    CEFBS_None, // TEX_SAMPLE_C_LB = 544
    CEFBS_None, // TEX_SAMPLE_G = 545
    CEFBS_None, // TEX_SAMPLE_L = 546
    CEFBS_None, // TEX_SAMPLE_LB = 547
    CEFBS_None, // TEX_SET_GRADIENTS_H = 548
    CEFBS_None, // TEX_SET_GRADIENTS_V = 549
    CEFBS_None, // TEX_VTX_CONSTBUF = 550
    CEFBS_None, // TEX_VTX_TEXBUF = 551
    CEFBS_None, // TRUNC = 552
    CEFBS_None, // UINT_TO_FLT_eg = 553
    CEFBS_None, // UINT_TO_FLT_r600 = 554
    CEFBS_None, // VTX_READ_128_cm = 555
    CEFBS_None, // VTX_READ_128_eg = 556
    CEFBS_None, // VTX_READ_16_cm = 557
    CEFBS_None, // VTX_READ_16_eg = 558
    CEFBS_None, // VTX_READ_32_cm = 559
    CEFBS_None, // VTX_READ_32_eg = 560
    CEFBS_None, // VTX_READ_64_cm = 561
    CEFBS_None, // VTX_READ_64_eg = 562
    CEFBS_None, // VTX_READ_8_cm = 563
    CEFBS_None, // VTX_READ_8_eg = 564
    CEFBS_None, // WHILE_LOOP_EG = 565
    CEFBS_None, // WHILE_LOOP_R600 = 566
    CEFBS_None, // XOR_INT = 567
  };

  assert(Inst.getOpcode() < 568);
  const FeatureBitset &RequiredFeatures = FeatureBitsets[RequiredFeaturesRefs[Inst.getOpcode()]];
  FeatureBitset MissingFeatures =
      (AvailableFeatures & RequiredFeatures) ^
      RequiredFeatures;
  if (MissingFeatures.any()) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << MCII.getName(Inst.getOpcode()).str()
        << " instruction but the ";
    for (unsigned i = 0, e = MissingFeatures.size(); i != e; ++i)
      if (MissingFeatures.test(i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str());
  }
#else
  // Silence unused variable warning on targets that don't use MCII for other purposes (e.g. BPF).
  (void)MCII;
#endif // NDEBUG
}
#endif
