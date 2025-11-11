#pragma once
#include <stdint.h>
#include <stddef.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#ifdef DEBUG_MODE
#define DEBUG_PRINT(...) fprintf(stderr, __VA_ARGS__)
#else
#define DEBUG_PRINT(...) // No-op
#endif

typedef enum {
  RELOC_RUNTIME_SYMBOL,
  RELOC_RUNTIME_SYMBOL_GOT,
  RELOC_RUNTIME_SYMBOL_DEREF,
  RELOC_RUNTIME_CALL,
  RELOC_RODATA,
  RELOC_RHO,
  RELOC_RCP_EXEC_NEXT,
  RELOC_RCP_EXEC_IMM,
  RELOC_RCP_RAW_IMM,
  RELOC_RCP_CONST_AT_IMM,
  RELOC_RCP_CONST_STR_AT_IMM,
  RELOC_RCP_CONSTCELL_AT_IMM,
  RELOC_RCP_CONSTCELL_AT_LABEL_IMM,
  RELOC_RCP_PATCHED_VARIANTS
} RELOC_KIND;

struct HoleValueCall {
  const void* sym;
  const void* arg;
};

typedef struct {
  union Value {
    const void* symbol;
    char* symbol_name;
    size_t imm_pos;
    struct HoleValueCall call;
  } val;
  uintptr_t offset;
  ptrdiff_t addend;
  uint8_t kind;
  uint8_t size;
  uint8_t is_pc_relative;
  uint8_t got_pos;
} Hole; 

typedef struct {
  size_t body_size;
  uint8_t * body;
  size_t holes_size;
  Hole * holes;
  uint8_t alignment;
  const char* name;
} Stencil;

typedef struct {
  size_t body_size;
  uint8_t * body;
  size_t holes_size;
  Hole * holes;
  uint8_t alignment;
  const char* name;
} StencilMutable;

#define X_STEPFOR_TYPES                                                     \
  X(0, 0)                                                                   \
  X(1, INTSXP)                                                              \
  X(2, ISQSXP)                                                              \
  X(3, REALSXP)                                                             \
  X(4, LGLSXP)                                                              \
  X(5, CPLXSXP)                                                             \
  X(6, STRSXP)                                                              \
  X(7, RAWSXP)                                                              \
  X(8, EXPRSXP)                                                             \
  X(9, VECSXP)                                                              \
  X(10, LISTSXP)                                                            \



#define X_MATH1_OPS                                                            \
  X(sqrt, SQRT_OP, Sqrt)                                                       \
  X(exp, EXP_OP, Exp)

#define X_ARITH_OPS                                                            \
  X(+, ADD_OP, Add)                                                            \
  X(-, SUB_OP, Sub)                                                            \
  X(*, MUL_OP, Mul)                                                            \
  X(/, DIV_OP, Div)                                                            \
  X(^, EXPT_OP, Expt)

#define X_REL_OPS                                                              \
  X(==, EQ_OP, Eq)                                                             \
  X(!=, NE_OP, Ne)                                                             \
  X(<, LT_OP, Lt)                                                              \
  X(<=, LE_OP, Le)                                                             \
  X(>, GT_OP, Gt)                                                              \
  X(>=, GE_OP, Ge)

#define X_UNARY_OPS                                                            \
  X(+, UPLUS_OP, UPlus)                                                        \
  X(-, UMINUS_OP, UMinus)

#define X_LOGIC2_OPS                                                           \
  X(&, AND_OP, And)                                                            \
  X(|, OR_OP, Or)

// X(name, idx as in math1, C function name)
#define X_MATH1_EXT_OPS                                                        \
  X(floor, 0, floor)                                                           \
  X(ceiling, 1, ceil)                                                          \
  X(sign, 2, sign)                                                             \
  X(expm1, 3, expm1)                                                           \
  X(log1p, 4, log1p)                                                           \
  X(cos, 5, cos)                                                               \
  X(sin, 6, sin)                                                               \
  X(tan, 7, tan)                                                               \
  X(acos, 8, acos)                                                             \
  X(asin, 9, asin)                                                             \
  X(atan, 10, atan)                                                            \
  X(cosh, 11, cosh)                                                            \
  X(sinh, 12, sinh)                                                            \
  X(tanh, 13, tanh)                                                            \
  X(acosh, 14, acosh)                                                          \
  X(asinh, 15, asinh)                                                          \
  X(atanh, 16, atanh)                                                          \
  X(lgamma, 17, lgammafn)                                                      \
  X(gamma, 18, gammafn)                                                        \
  X(digamma, 19, digamma)                                                      \
  X(trigamma, 20, trigamma)                                                    \
  X(cospi, 21, cospi)                                                          \
  X(sinpi, 22, sinpi)                                                          \
  X(tanpi, 23, Rtanpi)

#define RSH_R_SYMBOLS                                                          \
  X([, Rsh_Subset)                                                        \
  X([[, Rsh_Subset2)                                                      \
  X(value, Rsh_Value)                                                     \
  X([<-, Rsh_Subassign)                                                   \
  X([[<-, Rsh_Subassign2)                                                 \
  X(.External2, Rsh_DotExternal2)                                         \
  X(*tmp*, Rsh_Tmpval)                                                    \
  X(:, Rsh_Colon)                                                         \
  X(seq_along, Rsh_SeqAlong)                                              \
  X(seq_len, Rsh_SeqLen)                                                  \
  X(log, Rsh_Log)

typedef enum {
BCMISMATCH_OP = 0,
RETURN_OP = 1,
GOTO_OP = 2,
BRIFNOT_OP = 3,
POP_OP = 4,
DUP_OP = 5,
PRINTVALUE_OP = 6,
STARTLOOPCNTXT_OP = 7,
ENDLOOPCNTXT_OP = 8,
DOLOOPNEXT_OP = 9,
DOLOOPBREAK_OP = 10,
STARTFOR_OP = 11,
STEPFOR_OP = 12,
ENDFOR_OP = 13,
SETLOOPVAL_OP = 14,
INVISIBLE_OP = 15,
LDCONST_OP = 16,
LDNULL_OP = 17,
LDTRUE_OP = 18,
LDFALSE_OP = 19,
GETVAR_OP = 20,
DDVAL_OP = 21,
SETVAR_OP = 22,
GETFUN_OP = 23,
GETGLOBFUN_OP = 24,
GETSYMFUN_OP = 25,
GETBUILTIN_OP = 26,
GETINTLBUILTIN_OP = 27,
CHECKFUN_OP = 28,
MAKEPROM_OP = 29,
DOMISSING_OP = 30,
SETTAG_OP = 31,
DODOTS_OP = 32,
PUSHARG_OP = 33,
PUSHCONSTARG_OP = 34,
PUSHNULLARG_OP = 35,
PUSHTRUEARG_OP = 36,
PUSHFALSEARG_OP = 37,
CALL_OP = 38,
CALLBUILTIN_OP = 39,
CALLSPECIAL_OP = 40,
MAKECLOSURE_OP = 41,
UMINUS_OP = 42,
UPLUS_OP = 43,
ADD_OP = 44,
SUB_OP = 45,
MUL_OP = 46,
DIV_OP = 47,
EXPT_OP = 48,
SQRT_OP = 49,
EXP_OP = 50,
EQ_OP = 51,
NE_OP = 52,
LT_OP = 53,
LE_OP = 54,
GE_OP = 55,
GT_OP = 56,
AND_OP = 57,
OR_OP = 58,
NOT_OP = 59,
DOTSERR_OP = 60,
STARTASSIGN_OP = 61,
ENDASSIGN_OP = 62,
STARTSUBSET_OP = 63,
DFLTSUBSET_OP = 64,
STARTSUBASSIGN_OP = 65,
DFLTSUBASSIGN_OP = 66,
STARTC_OP = 67,
DFLTC_OP = 68,
STARTSUBSET2_OP = 69,
DFLTSUBSET2_OP = 70,
STARTSUBASSIGN2_OP = 71,
DFLTSUBASSIGN2_OP = 72,
DOLLAR_OP = 73,
DOLLARGETS_OP = 74,
ISNULL_OP = 75,
ISLOGICAL_OP = 76,
ISINTEGER_OP = 77,
ISDOUBLE_OP = 78,
ISCOMPLEX_OP = 79,
ISCHARACTER_OP = 80,
ISSYMBOL_OP = 81,
ISOBJECT_OP = 82,
ISNUMERIC_OP = 83,
VECSUBSET_OP = 84,
MATSUBSET_OP = 85,
VECSUBASSIGN_OP = 86,
MATSUBASSIGN_OP = 87,
AND1ST_OP = 88,
AND2ND_OP = 89,
OR1ST_OP = 90,
OR2ND_OP = 91,
GETVAR_MISSOK_OP = 92,
DDVAL_MISSOK_OP = 93,
VISIBLE_OP = 94,
SETVAR2_OP = 95,
STARTASSIGN2_OP = 96,
ENDASSIGN2_OP = 97,
SETTER_CALL_OP = 98,
GETTER_CALL_OP = 99,
SWAP_OP = 100,
DUP2ND_OP = 101,
SWITCH_OP = 102,
RETURNJMP_OP = 103,
STARTSUBSET_N_OP = 104,
STARTSUBASSIGN_N_OP = 105,
VECSUBSET2_OP = 106,
MATSUBSET2_OP = 107,
VECSUBASSIGN2_OP = 108,
MATSUBASSIGN2_OP = 109,
STARTSUBSET2_N_OP = 110,
STARTSUBASSIGN2_N_OP = 111,
SUBSET_N_OP = 112,
SUBSET2_N_OP = 113,
SUBASSIGN_N_OP = 114,
SUBASSIGN2_N_OP = 115,
LOG_OP = 116,
LOGBASE_OP = 117,
MATH1_OP = 118,
DOTCALL_OP = 119,
COLON_OP = 120,
SEQALONG_OP = 121,
SEQLEN_OP = 122,
BASEGUARD_OP = 123,
INCLNK_OP = 124,
DECLNK_OP = 125,
DECLNK_N_OP = 126,
INCLNKSTK_OP = 127,
DECLNKSTK_OP = 128
} R_OPCODE;

const char* const OPCODES_NAMES[] = {
"BCMISMATCH_OP",// <- 0
"RETURN_OP",// <- 1
"GOTO_OP",// <- 2
"BRIFNOT_OP",// <- 3
"POP_OP",// <- 4
"DUP_OP",// <- 5
"PRINTVALUE_OP",// <- 6
"STARTLOOPCNTXT_OP",// <- 7
"ENDLOOPCNTXT_OP",// <- 8
"DOLOOPNEXT_OP",// <- 9
"DOLOOPBREAK_OP",// <- 10
"STARTFOR_OP",// <- 11
"STEPFOR_OP",// <- 12
"ENDFOR_OP",// <- 13
"SETLOOPVAL_OP",// <- 14
"INVISIBLE_OP",// <- 15
"LDCONST_OP",// <- 16
"LDNULL_OP",// <- 17
"LDTRUE_OP",// <- 18
"LDFALSE_OP",// <- 19
"GETVAR_OP",// <- 20
"DDVAL_OP",// <- 21
"SETVAR_OP",// <- 22
"GETFUN_OP",// <- 23
"GETGLOBFUN_OP",// <- 24
"GETSYMFUN_OP",// <- 25
"GETBUILTIN_OP",// <- 26
"GETINTLBUILTIN_OP",// <- 27
"CHECKFUN_OP",// <- 28
"MAKEPROM_OP",// <- 29
"DOMISSING_OP",// <- 30
"SETTAG_OP",// <- 31
"DODOTS_OP",// <- 32
"PUSHARG_OP",// <- 33
"PUSHCONSTARG_OP",// <- 34
"PUSHNULLARG_OP",// <- 35
"PUSHTRUEARG_OP",// <- 36
"PUSHFALSEARG_OP",// <- 37
"CALL_OP",// <- 38
"CALLBUILTIN_OP",// <- 39
"CALLSPECIAL_OP",// <- 40
"MAKECLOSURE_OP",// <- 41
"UMINUS_OP",// <- 42
"UPLUS_OP",// <- 43
"ADD_OP",// <- 44
"SUB_OP",// <- 45
"MUL_OP",// <- 46
"DIV_OP",// <- 47
"EXPT_OP",// <- 48
"SQRT_OP",// <- 49
"EXP_OP",// <- 50
"EQ_OP",// <- 51
"NE_OP",// <- 52
"LT_OP",// <- 53
"LE_OP",// <- 54
"GE_OP",// <- 55
"GT_OP",// <- 56
"AND_OP",// <- 57
"OR_OP",// <- 58
"NOT_OP",// <- 59
"DOTSERR_OP",// <- 60
"STARTASSIGN_OP",// <- 61
"ENDASSIGN_OP",// <- 62
"STARTSUBSET_OP",// <- 63
"DFLTSUBSET_OP",// <- 64
"STARTSUBASSIGN_OP",// <- 65
"DFLTSUBASSIGN_OP",// <- 66
"STARTC_OP",// <- 67
"DFLTC_OP",// <- 68
"STARTSUBSET2_OP",// <- 69
"DFLTSUBSET2_OP",// <- 70
"STARTSUBASSIGN2_OP",// <- 71
"DFLTSUBASSIGN2_OP",// <- 72
"DOLLAR_OP",// <- 73
"DOLLARGETS_OP",// <- 74
"ISNULL_OP",// <- 75
"ISLOGICAL_OP",// <- 76
"ISINTEGER_OP",// <- 77
"ISDOUBLE_OP",// <- 78
"ISCOMPLEX_OP",// <- 79
"ISCHARACTER_OP",// <- 80
"ISSYMBOL_OP",// <- 81
"ISOBJECT_OP",// <- 82
"ISNUMERIC_OP",// <- 83
"VECSUBSET_OP",// <- 84
"MATSUBSET_OP",// <- 85
"VECSUBASSIGN_OP",// <- 86
"MATSUBASSIGN_OP",// <- 87
"AND1ST_OP",// <- 88
"AND2ND_OP",// <- 89
"OR1ST_OP",// <- 90
"OR2ND_OP",// <- 91
"GETVAR_MISSOK_OP",// <- 92
"DDVAL_MISSOK_OP",// <- 93
"VISIBLE_OP",// <- 94
"SETVAR2_OP",// <- 95
"STARTASSIGN2_OP",// <- 96
"ENDASSIGN2_OP",// <- 97
"SETTER_CALL_OP",// <- 98
"GETTER_CALL_OP",// <- 99
"SWAP_OP",// <- 100
"DUP2ND_OP",// <- 101
"SWITCH_OP",// <- 102
"RETURNJMP_OP",// <- 103
"STARTSUBSET_N_OP",// <- 104
"STARTSUBASSIGN_N_OP",// <- 105
"VECSUBSET2_OP",// <- 106
"MATSUBSET2_OP",// <- 107
"VECSUBASSIGN2_OP",// <- 108
"MATSUBASSIGN2_OP",// <- 109
"STARTSUBSET2_N_OP",// <- 110
"STARTSUBASSIGN2_N_OP",// <- 111
"SUBSET_N_OP",// <- 112
"SUBSET2_N_OP",// <- 113
"SUBASSIGN_N_OP",// <- 114
"SUBASSIGN2_N_OP",// <-115
"LOG_OP",// <- 116
"LOGBASE_OP",// <- 117
"MATH1_OP",// <- 118
"DOTCALL_OP",// <- 119
"COLON_OP",// <- 120
"SEQALONG_OP",// <- 121
"SEQLEN_OP",// <- 122
"BASEGUARD_OP",// <- 123
"INCLNK_OP",// <- 124
"DECLNK_OP",// <- 125
"DECLNK_N_OP",// <- 126
"INCLNKSTK_OP",// <- 127
"DECLNKSTK_OP"// <- 128
};


uint8_t imms_cnt[] = {
/*BCMISMATCH.OP*/ 0,
/*RETURN.OP*/ 0,
/*GOTO.OP*/ 1,
/*BRIFNOT.OP*/ 2,
/*POP.OP*/ 0,
/*DUP.OP*/ 0,
/*PRINTVALUE.OP*/ 0,
/*STARTLOOPCNTXT.OP*/ 2,
/*ENDLOOPCNTXT.OP*/ 1,
/*DOLOOPNEXT.OP*/ 0,
/*DOLOOPBREAK.OP*/ 0,
/*STARTFOR.OP*/ 3,
/*STEPFOR.OP*/ 1,
/*ENDFOR.OP*/ 0,
/*SETLOOPVAL.OP*/ 0,
/*INVISIBLE.OP*/ 0,
/*LDCONST.OP*/ 1,
/*LDNULL.OP*/ 0,
/*LDTRUE.OP*/ 0,
/*LDFALSE.OP*/ 0,
/*GETVAR.OP*/ 1,
/*DDVAL.OP*/ 1,
/*SETVAR.OP*/ 1,
/*GETFUN.OP*/ 1,
/*GETGLOBFUN.OP*/ 1,
/*GETSYMFUN.OP*/ 1,
/*GETBUILTIN.OP*/ 1,
/*GETINTLBUILTIN.OP*/ 1,
/*CHECKFUN.OP*/ 0,
/*MAKEPROM.OP*/ 1,
/*DOMISSING.OP*/ 0,
/*SETTAG.OP*/ 1,
/*DODOTS.OP*/ 0,
/*PUSHARG.OP*/ 0,
/*PUSHCONSTARG.OP*/ 1,
/*PUSHNULLARG.OP*/ 0,
/*PUSHTRUEARG.OP*/ 0,
/*PUSHFALSEARG.OP*/ 0,
/*CALL.OP*/ 1,
/*CALLBUILTIN.OP*/ 1,
/*CALLSPECIAL.OP*/ 1,
/*MAKECLOSURE.OP*/ 1,
/*UMINUS.OP*/ 1,
/*UPLUS.OP*/ 1,
/*ADD.OP*/ 1,
/*SUB.OP*/ 1,
/*MUL.OP*/ 1,
/*DIV.OP*/ 1,
/*EXPT.OP*/ 1,
/*SQRT.OP*/ 1,
/*EXP.OP*/ 1,
/*EQ.OP*/ 1,
/*NE.OP*/ 1,
/*LT.OP*/ 1,
/*LE.OP*/ 1,
/*GE.OP*/ 1,
/*GT.OP*/ 1,
/*AND.OP*/ 1,
/*OR.OP*/ 1,
/*NOT.OP*/ 1,
/*DOTSERR.OP*/ 0,
/*STARTASSIGN.OP*/ 1,
/*ENDASSIGN.OP*/ 1,
/*STARTSUBSET.OP*/ 2,
/*DFLTSUBSET.OP*/ 0,
/*STARTSUBASSIGN.OP*/ 2,
/*DFLTSUBASSIGN.OP*/ 0,
/*STARTC.OP*/ 2,
/*DFLTC.OP*/ 0,
/*STARTSUBSET2.OP*/ 2,
/*DFLTSUBSET2.OP*/ 0,
/*STARTSUBASSIGN2.OP*/ 2,
/*DFLTSUBASSIGN2.OP*/ 0,
/*DOLLAR.OP*/ 2,
/*DOLLARGETS.OP*/ 2,
/*ISNULL.OP*/ 0,
/*ISLOGICAL.OP*/ 0,
/*ISINTEGER.OP*/ 0,
/*ISDOUBLE.OP*/ 0,
/*ISCOMPLEX.OP*/ 0,
/*ISCHARACTER.OP*/ 0,
/*ISSYMBOL.OP*/ 0,
/*ISOBJECT.OP*/ 0,
/*ISNUMERIC.OP*/ 0,
/*VECSUBSET.OP*/ 1,
/*MATSUBSET.OP*/ 1,
/*VECSUBASSIGN.OP*/ 1,
/*MATSUBASSIGN.OP*/ 1,
/*AND1ST.OP*/ 2,
/*AND2ND.OP*/ 1,
/*OR1ST.OP*/ 2,
/*OR2ND.OP*/ 1,
/*GETVAR_MISSOK.OP*/ 1,
/*DDVAL_MISSOK.OP*/ 1,
/*VISIBLE.OP*/ 0,
/*SETVAR2.OP*/ 1,
/*STARTASSIGN2.OP*/ 1,
/*ENDASSIGN2.OP*/ 1,
/*SETTER_CALL.OP*/ 2,
/*GETTER_CALL.OP*/ 1,
/*SWAP.OP*/ 0,
/*DUP2ND.OP*/ 0,
/*SWITCH.OP*/ 4,
/*RETURNJMP.OP*/ 0,
/*STARTSUBSET_N.OP*/ 2,
/*STARTSUBASSIGN_N.OP*/ 2,
/*VECSUBSET2.OP*/ 1,
/*MATSUBSET2.OP*/ 1,
/*VECSUBASSIGN2.OP*/ 1,
/*MATSUBASSIGN2.OP*/ 1,
/*STARTSUBSET2_N.OP*/ 2,
/*STARTSUBASSIGN2_N.OP*/ 2,
/*SUBSET_N.OP*/ 2,
/*SUBSET2_N.OP*/ 2,
/*SUBASSIGN_N.OP*/ 2,
/*SUBASSIGN2_N.OP*/ 2,
/*LOG.OP*/ 1,
/*LOGBASE.OP*/ 1,
/*MATH1.OP*/ 2,
/*DOTCALL.OP*/ 2,
/*COLON.OP*/ 1,
/*SEQALONG.OP*/ 1,
/*SEQLEN.OP*/ 1,
/*BASEGUARD.OP*/ 2,
/*INCLNK.OP*/ 0,
/*DECLNK.OP*/ 0,
/*DECLNK_N.OP*/ 1,
/*INCLNKSTK.OP*/ 0,
/*DECLNKSTK.OP*/ 0
};
