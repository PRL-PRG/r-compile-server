#ifndef STENCILS_H
#define STENCILS_H
#include "rcp_common.h"

#include <stddef.h>

#ifdef GDB_JIT_SUPPORT
#define RCP_INIT_CFA_OFFSET 64
#endif

#define stepfor_variant_count 11
#define stepfor_max_size	  617
#define stepfor_sum_size	  5136

extern const Stencil RETURN_OP_stencils[];
extern const Stencil GOTO_OP_stencils[];
extern const Stencil BRIFNOT_OP_stencils[];
extern const Stencil POP_OP_stencils[];
extern const Stencil DUP_OP_stencils[];
extern const Stencil STARTLOOPCNTXT_OP_stencils[];
extern const Stencil ENDLOOPCNTXT_OP_stencils[];
extern const Stencil STARTFOR_OP_stencils[];
extern const Stencil STEPFOR_OP_stencils[];
extern const Stencil ENDFOR_OP_stencils[];
extern const Stencil INVISIBLE_OP_stencils[];
extern const Stencil LDCONST_OP_stencils[];
extern const Stencil LDNULL_OP_stencils[];
extern const Stencil LDTRUE_OP_stencils[];
extern const Stencil LDFALSE_OP_stencils[];
extern const Stencil GETVAR_OP_stencils[];
extern const Stencil DDVAL_OP_stencils[];
extern const Stencil SETVAR_OP_stencils[];
extern const Stencil GETFUN_OP_stencils[];
extern const Stencil GETBUILTIN_OP_stencils[];
extern const Stencil GETINTLBUILTIN_OP_stencils[];
extern const Stencil CHECKFUN_OP_stencils[];
extern const Stencil MAKEPROM_OP_stencils[];
extern const Stencil DOMISSING_OP_stencils[];
extern const Stencil SETTAG_OP_stencils[];
extern const Stencil DODOTS_OP_stencils[];
extern const Stencil PUSHARG_OP_stencils[];
extern const Stencil PUSHCONSTARG_OP_stencils[];
extern const Stencil PUSHNULLARG_OP_stencils[];
extern const Stencil PUSHTRUEARG_OP_stencils[];
extern const Stencil PUSHFALSEARG_OP_stencils[];
extern const Stencil CALL_OP_stencils[];
extern const Stencil CALLBUILTIN_OP_stencils[];
extern const Stencil CALLSPECIAL_OP_stencils[];
extern const Stencil MAKECLOSURE_OP_stencils[];
extern const Stencil UMINUS_OP_stencils[];
extern const Stencil UPLUS_OP_stencils[];
extern const Stencil ADD_OP_stencils[];
extern const Stencil SUB_OP_stencils[];
extern const Stencil MUL_OP_stencils[];
extern const Stencil DIV_OP_stencils[];
extern const Stencil EXPT_OP_stencils[];
extern const Stencil SQRT_OP_stencils[];
extern const Stencil EXP_OP_stencils[];
extern const Stencil EQ_OP_stencils[];
extern const Stencil NE_OP_stencils[];
extern const Stencil LT_OP_stencils[];
extern const Stencil LE_OP_stencils[];
extern const Stencil GE_OP_stencils[];
extern const Stencil GT_OP_stencils[];
extern const Stencil AND_OP_stencils[];
extern const Stencil OR_OP_stencils[];
extern const Stencil NOT_OP_stencils[];
extern const Stencil DOTSERR_OP_stencils[];
extern const Stencil STARTASSIGN_OP_stencils[];
extern const Stencil ENDASSIGN_OP_stencils[];
extern const Stencil STARTSUBSET_OP_stencils[];
extern const Stencil DFLTSUBSET_OP_stencils[];
extern const Stencil STARTSUBASSIGN_OP_stencils[];
extern const Stencil DFLTSUBASSIGN_OP_stencils[];
extern const Stencil STARTSUBSET2_OP_stencils[];
extern const Stencil DFLTSUBSET2_OP_stencils[];
extern const Stencil STARTSUBASSIGN2_OP_stencils[];
extern const Stencil DFLTSUBASSIGN2_OP_stencils[];
extern const Stencil DOLLAR_OP_stencils[];
extern const Stencil DOLLARGETS_OP_stencils[];
extern const Stencil ISNULL_OP_stencils[];
extern const Stencil ISLOGICAL_OP_stencils[];
extern const Stencil ISINTEGER_OP_stencils[];
extern const Stencil ISDOUBLE_OP_stencils[];
extern const Stencil ISCOMPLEX_OP_stencils[];
extern const Stencil ISCHARACTER_OP_stencils[];
extern const Stencil ISSYMBOL_OP_stencils[];
extern const Stencil ISOBJECT_OP_stencils[];
extern const Stencil ISNUMERIC_OP_stencils[];
extern const Stencil VECSUBSET_OP_stencils[];
extern const Stencil MATSUBSET_OP_stencils[];
extern const Stencil VECSUBASSIGN_OP_stencils[];
extern const Stencil MATSUBASSIGN_OP_stencils[];
extern const Stencil AND1ST_OP_stencils[];
extern const Stencil AND2ND_OP_stencils[];
extern const Stencil OR1ST_OP_stencils[];
extern const Stencil OR2ND_OP_stencils[];
extern const Stencil GETVAR_MISSOK_OP_stencils[];
extern const Stencil DDVAL_MISSOK_OP_stencils[];
extern const Stencil VISIBLE_OP_stencils[];
extern const Stencil SETVAR2_OP_stencils[];
extern const Stencil STARTASSIGN2_OP_stencils[];
extern const Stencil ENDASSIGN2_OP_stencils[];
extern const Stencil SETTER_CALL_OP_stencils[];
extern const Stencil GETTER_CALL_OP_stencils[];
extern const Stencil SWAP_OP_stencils[];
extern const Stencil DUP2ND_OP_stencils[];
extern const Stencil SWITCH_OP_stencils[];
extern const Stencil RETURNJMP_OP_stencils[];
extern const Stencil STARTSUBSET_N_OP_stencils[];
extern const Stencil STARTSUBASSIGN_N_OP_stencils[];
extern const Stencil VECSUBSET2_OP_stencils[];
extern const Stencil MATSUBSET2_OP_stencils[];
extern const Stencil VECSUBASSIGN2_OP_stencils[];
extern const Stencil MATSUBASSIGN2_OP_stencils[];
extern const Stencil STARTSUBSET2_N_OP_stencils[];
extern const Stencil STARTSUBASSIGN2_N_OP_stencils[];
extern const Stencil SUBSET_N_OP_stencils[];
extern const Stencil SUBSET2_N_OP_stencils[];
extern const Stencil SUBASSIGN_N_OP_stencils[];
extern const Stencil SUBASSIGN2_N_OP_stencils[];
extern const Stencil LOG_OP_stencils[];
extern const Stencil LOGBASE_OP_stencils[];
extern const Stencil MATH1_OP_stencils[];
extern const Stencil DOTCALL_OP_stencils[];
extern const Stencil COLON_OP_stencils[];
extern const Stencil SEQALONG_OP_stencils[];
extern const Stencil SEQLEN_OP_stencils[];
extern const Stencil BASEGUARD_OP_stencils[];
extern const Stencil INCLNKSTK_OP_stencils[];
extern const Stencil DECLNKSTK_OP_stencils[];
extern const Stencil _RCP_INIT;
extern const Stencil notinlined_stencils[];
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *notinlined_debug_frames[];
#endif
#define notinlined_count 3
#define notinlined_size	 2365
#ifdef GDB_JIT_SUPPORT
extern uint8_t __CIE[];
#endif
extern const uint8_t rodata[];
#define rodata_size 1016
extern const Stencil *stencils[];
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *RETURN_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *GOTO_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *BRIFNOT_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *POP_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DUP_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *STARTLOOPCNTXT_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ENDLOOPCNTXT_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *STARTFOR_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *STEPFOR_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ENDFOR_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *INVISIBLE_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *LDCONST_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *LDNULL_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *LDTRUE_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *LDFALSE_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *GETVAR_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DDVAL_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SETVAR_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *GETFUN_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *GETBUILTIN_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *GETINTLBUILTIN_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *CHECKFUN_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *MAKEPROM_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DOMISSING_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SETTAG_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DODOTS_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *PUSHARG_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *PUSHCONSTARG_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *PUSHNULLARG_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *PUSHTRUEARG_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *PUSHFALSEARG_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *CALL_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *CALLBUILTIN_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *CALLSPECIAL_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *MAKECLOSURE_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *UMINUS_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *UPLUS_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ADD_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SUB_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *MUL_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DIV_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *EXPT_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SQRT_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *EXP_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *EQ_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *NE_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *LT_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *LE_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *GE_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *GT_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *AND_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *OR_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *NOT_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DOTSERR_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *STARTASSIGN_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ENDASSIGN_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *STARTSUBSET_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DFLTSUBSET_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *STARTSUBASSIGN_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DFLTSUBASSIGN_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *STARTSUBSET2_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DFLTSUBSET2_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *STARTSUBASSIGN2_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DFLTSUBASSIGN2_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DOLLAR_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DOLLARGETS_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ISNULL_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ISLOGICAL_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ISINTEGER_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ISDOUBLE_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ISCOMPLEX_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ISCHARACTER_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ISSYMBOL_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ISOBJECT_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ISNUMERIC_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *VECSUBSET_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *MATSUBSET_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *VECSUBASSIGN_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *MATSUBASSIGN_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *AND1ST_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *AND2ND_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *OR1ST_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *OR2ND_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *GETVAR_MISSOK_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DDVAL_MISSOK_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *VISIBLE_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SETVAR2_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *STARTASSIGN2_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *ENDASSIGN2_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SETTER_CALL_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *GETTER_CALL_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SWAP_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DUP2ND_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SWITCH_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *RETURNJMP_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *STARTSUBSET_N_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *STARTSUBASSIGN_N_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *VECSUBSET2_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *MATSUBSET2_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *VECSUBASSIGN2_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *MATSUBASSIGN2_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *STARTSUBSET2_N_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *STARTSUBASSIGN2_N_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SUBSET_N_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SUBSET2_N_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SUBASSIGN_N_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SUBASSIGN2_N_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *LOG_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *LOGBASE_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *MATH1_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DOTCALL_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *COLON_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SEQALONG_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *SEQLEN_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *BASEGUARD_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *INCLNKSTK_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t *DECLNKSTK_OP_debug_frames[];
#endif
#ifdef GDB_JIT_SUPPORT
extern const uint8_t **debug_frames[];
#endif
extern const Stencil *stencils_all[];
#define stencils_all_count 162
#ifdef GDB_JIT_SUPPORT
extern uint8_t __RCP_INIT_debug_frame[];
#endif
#endif
