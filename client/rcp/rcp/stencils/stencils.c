#define RSH_INLINE
#define RCP
//#define ASSERTS

#define RSH
#ifndef USE_RINTERNALS
#define USE_RINTERNALS
#endif
#include <Rinternals.h>
#undef USE_RINTERNALS
#undef RSH

#include "../rcp_bc_info.h"

#define CONST_RUNTIME_VAR(symbol, type) ((type const)(void* const)(&_RCP_CRUNTIME0_##symbol))

extern const void* const _RCP_CRUNTIME0_R_NilValue[];
#define R_NilValue CONST_RUNTIME_VAR(R_NilValue, SEXP)

extern const void* const _RCP_CRUNTIME0_R_UnboundValue[];
#define R_UnboundValue CONST_RUNTIME_VAR(R_UnboundValue, SEXP)

extern const void* const _RCP_CRUNTIME0_R_MissingArg[];
#define R_MissingArg CONST_RUNTIME_VAR(R_MissingArg, SEXP)

extern const void* const _RCP_CRUNTIME0_R_TrueValue[];
#define R_TrueValue CONST_RUNTIME_VAR(R_TrueValue, SEXP)

extern const void* const _RCP_CRUNTIME0_R_FalseValue[];
#define R_FalseValue CONST_RUNTIME_VAR(R_FalseValue, SEXP)

extern const void* const _RCP_CRUNTIME0_R_LogicalNAValue[];
#define R_LogicalNAValue CONST_RUNTIME_VAR(R_LogicalNAValue, SEXP)

extern const void* const _RCP_CRUNTIME0_R_DotsSymbol[];
#define R_DotsSymbol CONST_RUNTIME_VAR(R_DotsSymbol, SEXP)

extern const void* const _RCP_CRUNTIME0_R_DimSymbol[];
#define R_DimSymbol CONST_RUNTIME_VAR(R_DimSymbol, SEXP)

extern const void* const _RCP_CRUNTIME0_R_BaseEnv[];
#define R_BaseEnv CONST_RUNTIME_VAR(R_BaseEnv, SEXP)

extern const void* const _RCP_CRUNTIME0_R_BaseNamespace[];
#define R_BaseNamespace CONST_RUNTIME_VAR(R_BaseNamespace, SEXP)

//#define NO_STACK_OVERFLOW_CHECK
#include <runtime.h>


#if __GNUC__ >= 14
  #define STENCIL_ATTRIBUTES __attribute__((no_callee_saved_registers))
#else
  #warning "Compiler does not support no_callee_saved_registers directive. Generated code will be slower."
  #define STENCIL_ATTRIBUTES 
#endif

#if RCP_TRACE
    #define TRACE_PRINT(...) fprintf(stderr, __VA_ARGS__ )
#else
    #define TRACE_PRINT(...) ((void)0)
#endif

#undef PUSH_VAL
#define PUSH_VAL(n)                                                            \
  do {                                                                         \
    stack += (n);                                                              \
    assert(stack - 1 < R_BCNodeStackTop);                                      \
  } while (0)

#undef POP_VAL
#define POP_VAL(n)                                                             \
  do {                                                                         \
    stack -= (n);                                                              \
  } while (0)

// Macros to define stencil functions
#define RCP_STENCIL_FUNCTION(name) __attribute__ ((noinline)) STENCIL_ATTRIBUTES SEXP name (Value* restrict stack, rcpEval_locals* restrict locals)
#define RCP_OP_EX(op, ex) RCP_STENCIL_FUNCTION(_RCP_##op##_OP_##ex)
#define RCP_STENCIL(op) RCP_STENCIL_FUNCTION(_RCP_##op##_OP)

// Macros to help generate boilerplate for stencil functions
#define RCP_OP_TEMPLATE_JUMP(name, body, continuation)                         \
  RCP_STENCIL(name)                                                            \
  {                                                                            \
    TRACE_PRINT(__FUNCTION__);                                                 \
    TRACE_PRINT("\tSTART\n");                                                  \
    PUSH_VAL(RCP_BC_STACK_EFFECT_##name > 0 ? RCP_BC_STACK_EFFECT_##name : 0); \
    body                                                                       \
    POP_VAL(RCP_BC_STACK_EFFECT_##name < 0 ? -RCP_BC_STACK_EFFECT_##name : 0); \
    TRACE_PRINT(__FUNCTION__);                                                 \
    TRACE_PRINT("\tDONE\n");                                                   \
    continuation                                                               \
    NEXT;                                                                      \
  }

#define RCP_OP_TEMPLATE_CONTINUE(name, body) RCP_OP_TEMPLATE_JUMP(name, body, )

#define EXPAND(x)                           x
#define GET_MACRO(_1, _2, _3, name, ...)    name
#define RCP_OP(...)    EXPAND( GET_MACRO(__VA_ARGS__, RCP_OP_TEMPLATE_JUMP, RCP_OP_TEMPLATE_CONTINUE)(__VA_ARGS__) )

/* PATCHING SYMBOLS */
extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_NEXT(Value* stack, rcpEval_locals* locals);
#define NEXT return _RCP_EXEC_NEXT(stack, locals)

extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_IMM0(Value* stack, rcpEval_locals* locals);
extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_IMM1(Value* stack, rcpEval_locals* locals);
extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_IMM2(Value* stack, rcpEval_locals* locals);
extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_IMM3(Value* stack, rcpEval_locals* locals);
#define GOTO_IMM(i) return _RCP_EXEC_IMM##i(stack, locals)
//__attribute__((musttail))
//[[gnu::musttail]] 


#define GET_RHO() locals->rho

extern const void* const _RCP_RAW_IMM0;
extern const void* const _RCP_RAW_IMM1;
extern const void* const _RCP_RAW_IMM2;
extern const void* const _RCP_RAW_IMM3;
#define GET_IMM(index) (int)(int64_t)&_RCP_RAW_IMM##index

extern const void* const _RCP_CONST_AT_IMM0[];
extern const void* const _RCP_CONST_AT_IMM1[];
extern const void* const _RCP_CONST_AT_IMM2[];
extern const void* const _RCP_CONST_AT_IMM3[];
#define GETCONST_IMM(i) (const SEXP const)(&_RCP_CONST_AT_IMM##i)

extern const void* const _RCP_CONST_STR_AT_IMM0[];
extern const void* const _RCP_CONST_STR_AT_IMM1[];
extern const void* const _RCP_CONST_STR_AT_IMM2[];
extern const void* const _RCP_CONST_STR_AT_IMM3[];
#define GETCONST_STR_IMM(i) (const char* const)&_RCP_CONST_STR_AT_IMM##i

extern const void* const _RCP_CONSTCELL_AT_IMM0;
extern const void* const _RCP_CONSTCELL_AT_IMM1;
extern const void* const _RCP_CONSTCELL_AT_IMM2;
extern const void* const _RCP_CONSTCELL_AT_IMM3;
#define GETCONSTCELL_IMM(i) (__builtin_assume_aligned((SEXP*)(&((uint8_t*)locals)[(unsigned)(uint64_t)&_RCP_CONSTCELL_AT_IMM##i]), __alignof__(SEXP*)))

extern const void* const _RCP_CONSTCELL_AT_LABEL_IMM0;
extern const void* const _RCP_CONSTCELL_AT_LABEL_IMM1;
extern const void* const _RCP_CONSTCELL_AT_LABEL_IMM2;
extern const void* const _RCP_CONSTCELL_AT_LABEL_IMM3;
#define GETCONSTCELL_LABEL_IMM(i) (__builtin_assume_aligned((SEXP*)(&((uint8_t*)locals)[(unsigned)(uint64_t)&_RCP_CONSTCELL_AT_LABEL_IMM##i]), __alignof__(SEXP*)))

extern const void* const _RCP_PATCHED_VARIANTS[];
#define GETVARIANTS() (const void*)&_RCP_PATCHED_VARIANTS

extern const void* const _RCP_LOOPCNTXT;
#define GET_RCNTXT_INDEX() ((unsigned)(uint64_t)&_RCP_LOOPCNTXT - 1)
#define GET_LOCAL_RCNTXT() locals->rcntxts[GET_RCNTXT_INDEX()]

extern const void* const _RCP_EXECUTABLE[];
#define GETEXECUTABLE() (const void* const)&_RCP_EXECUTABLE
#define GOTO_VAL(i) { STENCIL_ATTRIBUTES SEXP (*call)(Value* stack, rcpEval_locals* locals) = (const void* const)(((uint8_t*)GETEXECUTABLE()) + i); return call(stack, locals); } 

/**************************************************************************/


SEXP _RCP_INIT (Value* restrict stack, rcpEval_locals* restrict locals) {
  NEXT;
}

RCP_OP(RETURN,
  ,
  PUSH_VAL(1); // to hold return value
  Rsh_Return(stack);
)

RCP_OP(GOTO,
  ,
  GOTO_IMM(0);
)

RCP_OP(BRIFNOT,
  Rboolean condition = Rsh_BrIfNot(stack, GETCONST_IMM(0), GET_RHO());
  ,
  if(condition)
    GOTO_IMM(1);
)

RCP_OP(POP,
  Rsh_Pop(stack);
)

RCP_OP(DUP,
  Rsh_Dup(stack);
)

RCP_OP(STARTLOOPCNTXT,
  Rboolean condition = Rsh_StartLoopCntxt(stack, (&GET_LOCAL_RCNTXT()), GET_RHO());
  ,
  if(condition)
    GOTO_IMM(1);
)

RCP_OP(ENDLOOPCNTXT,
  Rsh_EndLoopCntxt(stack, &GET_LOCAL_RCNTXT());
)

#ifdef STEPFOR_SPECIALIZE
typedef struct {
  int cached_type;
  uint8_t *dst;
  uint8_t *src[11];
  uint16_t sizes[11];
  uint8_t data[];
} StepFor_specialized;

#define X_STEPFOR_TYPES                                                        \
  X(0, 0)                                                                      \
  X(1, INTSXP)                                                                 \
  X(2, ISQSXP)                                                                 \
  X(3, REALSXP)                                                                \
  X(4, LGLSXP)                                                                 \
  X(5, CPLXSXP)                                                                \
  X(6, STRSXP)                                                                 \
  X(7, RAWSXP)                                                                 \
  X(8, EXPRSXP)                                                                \
  X(9, VECSXP)                                                                 \
  X(10, LISTSXP)
#endif

#define X(a, b) \
  case b:       \
    i = a;      \
    break;

RCP_OP(STARTFOR,
  Rsh_StartFor(stack, GETCONST_IMM(0), GETCONST_IMM(1), GETCONSTCELL_IMM(1), GET_RHO());

#ifdef STEPFOR_SPECIALIZE
  StepFor_specialized *stepfor_mem = (StepFor_specialized *)GETVARIANTS();

  RshLoopInfo *info = (RshLoopInfo *)RAW0(VAL_SXP(*GET_VAL(-2)));

  int i;
  switch (info->type)
  {
    X_STEPFOR_TYPES
  default:
    i = 0;
    break;
  }

  // Copy the specialized StepFor code if it is not already cached
  if (__builtin_expect(stepfor_mem->cached_type != i, FALSE))
  {
    memcpy(stepfor_mem->dst, stepfor_mem->src[i], stepfor_mem->sizes[i]);
    stepfor_mem->cached_type = i;
  }
#endif
  ,
  GOTO_IMM(2);
)
#undef X

#ifdef STEPFOR_SPECIALIZE

static __attribute__((noinline))
Rboolean RCP_STEPFOR_Fallback(Value *stack, BCell *cell, SEXP rho) {
  return Rsh_StepFor(stack, cell, rho);
}

#define X(a, b)                                                                \
  static INLINE NODISCARD Rboolean Rsh_StepFor_Specialized_##a(                \
      Value *stack, BCell *cell, SEXP rho) {                                   \
    RshLoopInfo *__info__ = (RshLoopInfo *)RAW0(VAL_SXP(*GET_VAL(-2)));        \
    /* If the loop was changed (in a recursive call) */                        \
    if (__builtin_expect(__info__->type != b, FALSE))                          \
      return RCP_STEPFOR_Fallback(stack, cell, rho);                           \
    return Rsh_DoStepFor(GET_VAL(-3), __info__, GET_VAL(-1), cell, rho, b);    \
  }
X_STEPFOR_TYPES
#undef X

#define X(a, b) \
RCP_OP_EX(STEPFOR, a) { \
  if(Rsh_StepFor_Specialized_##a(stack, GETCONSTCELL_LABEL_IMM(0), GET_RHO())) \
    GOTO_IMM(0); \
  else \
    NEXT; \
}
X_STEPFOR_TYPES
#undef X

#else

RCP_OP(STEPFOR,
  Rboolean condition = Rsh_StepFor(stack, GETCONSTCELL_LABEL_IMM(0), GET_RHO());
  ,
  if(condition)
    GOTO_IMM(0);
)

#endif

RCP_OP(ENDFOR,
  Rsh_EndFor(stack, GET_RHO());
)

RCP_OP(INVISIBLE,
  Rsh_Invisible(stack);
)

// Generic version
//RCP_OP(LDCONST) {
//  PUSH_VAL(1);
//  R_Visible = TRUE;
//  SET_VAL(stack, GETCONST_IMM(0));
//  NEXT;
//}

// Specialized versions
RCP_OP_EX(LDCONST, INT) {
  PUSH_VAL(1);
  Rsh_LdConstInt(stack, GETCONST_IMM(0));
  NEXT;
}
RCP_OP_EX(LDCONST, DBL) {
  PUSH_VAL(1);
  Rsh_LdConstDbl(stack, GETCONST_IMM(0));
  NEXT;
}
RCP_OP_EX(LDCONST, LGL) {
  PUSH_VAL(1);
  Rsh_LdConstLgl(stack, GETCONST_IMM(0));
  NEXT;
}
RCP_OP_EX(LDCONST, SEXP) {
  PUSH_VAL(1);
  Rsh_LdConst(stack, GETCONST_IMM(0));
  NEXT;
}


RCP_OP(LDNULL,
  Rsh_LdNull(stack);
)

RCP_OP(LDTRUE,
  Rsh_LdTrue(stack);
)

RCP_OP(LDFALSE,
  Rsh_LdFalse(stack);
)

RCP_OP(GETVAR,
  Rsh_GetVar(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
)

RCP_OP(DDVAL,
  Rsh_DdVal(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
)

RCP_OP(SETVAR,
  Rsh_SetVar(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
)

RCP_OP(GETFUN,
  Rsh_GetFun(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(GETBUILTIN,
  Rsh_GetBuiltin(stack, GETCONST_IMM(0));
)

RCP_OP(GETINTLBUILTIN,
  Rsh_GetIntlBuiltin(stack, GETCONST_IMM(0));
)

RCP_OP(CHECKFUN,
  Rsh_CheckFun(stack);
)

RCP_OP(MAKEPROM,
  Rsh_MakeProm(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(DOMISSING,
  Rsh_DoMissing(stack);
)

RCP_OP(SETTAG,
  Rsh_SetTag(stack, GETCONST_IMM(0));
)

RCP_OP(DODOTS,
  Rsh_DoDots(stack, GET_RHO());
)

RCP_OP(PUSHARG,
  Rsh_PushArg(stack);
)

RCP_OP(PUSHCONSTARG,
  Rsh_PushConstArg(stack, GETCONST_IMM(0));
)

RCP_OP(PUSHNULLARG,
  Rsh_PushNullArg(stack);
)

RCP_OP(PUSHTRUEARG,
  Rsh_PushTrueArg(stack);
)

RCP_OP(PUSHFALSEARG,
  Rsh_PushFalseArg(stack);
)

RCP_OP(CALL,
  Rsh_Call(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(CALLBUILTIN,
  Rsh_CallBuiltin(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(CALLSPECIAL,
  Rsh_CallSpecial(stack, GETCONST_IMM(0), GET_RHO());
)

static INLINE void Rcp_MakeClosure(Value *stack, SEXP mkclos_arg, SEXP rho) {
  Value *res = GET_VAL(-1);

  SEXP forms = VECTOR_ELT(mkclos_arg, 0);
  SEXP rcp_body = VECTOR_ELT(mkclos_arg, 1);
  SEXP closure = Rf_mkCLOSXP(forms, rcp_body, rho);

  /* The LENGTH check below allows for byte code object created
	   by older versions of the compiler that did not record a
	   source attribute. */
#ifdef RSH_LEGACY_COMPILER_SUPPORT
  if (LENGTH(mkclos_arg) > 2) {
    PROTECT(closure);
    SEXP srcref = VECTOR_ELT(mkclos_arg, 2);
    if (TYPEOF(srcref) != NILSXP)
      // FIXME: expose R_SrcrefSymbol
      Rf_setAttrib(closure, Rf_install("srcref"), srcref);
    UNPROTECT(1); /* closure */
  }
#endif
  R_Visible = TRUE;

  SET_SXP_VAL(res, closure);
}

RCP_OP(MAKECLOSURE,
  Rcp_MakeClosure(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(UMINUS,
  Rsh_UMinus(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(UPLUS,
  Rsh_UPlus(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(ADD,
  Rsh_Add(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(SUB,
  Rsh_Sub(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(MUL,
  Rsh_Mul(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(DIV,
  Rsh_Div(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(EXPT,
  Rsh_Expt(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(SQRT,
  Rsh_Sqrt(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(EXP,
  Rsh_Exp(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(EQ,
  Rsh_Eq(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(NE,
  Rsh_Ne(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(LT,
  Rsh_Lt(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(LE,
  Rsh_Le(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(GE,
  Rsh_Ge(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(GT,
  Rsh_Gt(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(AND,
  Rsh_And(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(OR,
  Rsh_Or(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(NOT,
  Rsh_Not(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(DOTSERR,
  Rsh_DotsErr(stack);
)

RCP_OP(STARTASSIGN,
  Rsh_StartAssign(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
)

RCP_OP(ENDASSIGN,
  Rsh_EndAssign(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
)

RCP_OP(STARTSUBSET,
  Rboolean condition = Rsh_StartSubset(stack, GETCONST_IMM(0), GET_RHO());
  ,
  if(__builtin_expect(condition, FALSE))
  {
    POP_VAL(3);
    GOTO_IMM(1);
  }
)

RCP_OP(DFLTSUBSET,
  Rsh_DfltSubset(stack, GET_RHO());
)

RCP_OP(STARTSUBASSIGN,
  Rboolean condition = Rsh_StartSubassign(stack, GETCONST_IMM(0), GET_RHO());
  ,
  if(__builtin_expect(condition, FALSE))
  {
    POP_VAL(4);
    GOTO_IMM(1);
  }
)

RCP_OP(DFLTSUBASSIGN,
  Rsh_DfltSubassign(stack, GET_RHO());
)

RCP_OP(STARTSUBSET2,
  Rboolean condition = Rsh_StartSubset2(stack, GETCONST_IMM(0), GET_RHO());
  ,
  if(__builtin_expect(condition, FALSE))
  {
    POP_VAL(3);
    GOTO_IMM(1);
  }
)

RCP_OP(DFLTSUBSET2,
  Rsh_DfltSubset2(stack, GET_RHO());
)

RCP_OP(STARTSUBASSIGN2,
  Rboolean condition = Rsh_StartSubassign2(stack, GETCONST_IMM(0), GET_RHO());
  ,
  if(__builtin_expect(condition, FALSE))
  {
    POP_VAL(4);
    GOTO_IMM(1);
  }
)

RCP_OP(DFLTSUBASSIGN2,
  Rsh_DfltSubassign2(stack, GET_RHO());
)

RCP_OP(DOLLAR,
  Rsh_Dollar(stack, GETCONST_IMM(0), GETCONST_IMM(1), GET_RHO());
)

RCP_OP(DOLLARGETS,
  Rsh_DollarGets(stack, GETCONST_IMM(0), GETCONST_IMM(1), GET_RHO());
)

RCP_OP(ISNULL,
  Rsh_IsNull(stack);
)

RCP_OP(ISLOGICAL,
  Rsh_IsLogical(stack);
)

RCP_OP(ISINTEGER,
  Rsh_IsInteger(stack);
)

RCP_OP(ISDOUBLE,
  Rsh_IsDouble(stack);
)

RCP_OP(ISCOMPLEX,
  Rsh_IsComplex(stack);
)

RCP_OP(ISCHARACTER,
  Rsh_IsCharacter(stack);
)

RCP_OP(ISSYMBOL,
  Rsh_IsSymbol(stack);
)

RCP_OP(ISOBJECT,
  Rsh_IsObject(stack);
)

RCP_OP(ISNUMERIC,
  Rsh_IsNumeric(stack);
)

RCP_OP(VECSUBSET,
  Rsh_VecSubset(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(MATSUBSET,
  Rsh_MatSubset(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(VECSUBASSIGN,
  Rsh_VecSubassign(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(MATSUBASSIGN,
  Rsh_MatSubassign(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(AND1ST,
  Rboolean condition = Rsh_And1st(stack, GETCONST_IMM(0));
  ,
  if(condition)
    GOTO_IMM(1);
)

RCP_OP(AND2ND,
  Rsh_And2nd(stack, GETCONST_IMM(0));
)

RCP_OP(OR1ST,
  Rboolean condition = Rsh_Or1st(stack, GETCONST_IMM(0));
  ,
  if(condition)
    GOTO_IMM(1);
)

RCP_OP(OR2ND,
  Rsh_Or2nd(stack, GETCONST_IMM(0));
)

RCP_OP(GETVAR_MISSOK,
  Rsh_GetVarMissOk(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
)

RCP_OP(DDVAL_MISSOK,
  Rsh_DdValMissOk(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
)

RCP_OP(VISIBLE,
  Rsh_Visible(stack);
)

RCP_OP(SETVAR2,
  Rsh_SetVar2(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(STARTASSIGN2,
  Rsh_StartAssign2(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(ENDASSIGN2,
  Rsh_EndAssign2(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(SETTER_CALL,
  Rsh_SetterCall(stack, GETCONST_IMM(0), GETCONST_IMM(1), GET_RHO());
)

RCP_OP(GETTER_CALL,
  Rsh_GetterCall(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(SWAP,
  Rsh_SpecialSwap(stack);
)

RCP_OP(DUP2ND,
  Rsh_Dup2nd(stack);
)

#ifndef SWITCH_SPECIALIZE
RCP_OP(SWITCH,
  int dest = Rsh_Switch(stack, GETCONST_IMM(0), GETCONST_IMM(1), GETCONST_IMM(2), GETCONST_IMM(3));
  ,
  GOTO_VAL(dest);
)
#else
RCP_OP_EX(SWITCH, 000) {
  SEXP call = GETCONST_IMM(0);
  SEXP names = GETCONST_IMM(1);
  SEXP coffsets = GETCONST_IMM(2);
  SEXP ioffsets = GETCONST_IMM(3);
  
  Rboolean is_names_null = FALSE;
  int names_length = LENGTH(names); __attribute__((__assume__(names_length != 1)));
  int ioffsets_length = LENGTH(ioffsets); __attribute__((__assume__(ioffsets_length != 1)));

  int dest = Rsh_do_switch(stack, call, names, coffsets, ioffsets,
    is_names_null, TYPEOF(names) == STRSXP, names_length,
    TYPEOF(ioffsets) == INTSXP, ioffsets_length,
    TYPEOF(coffsets) == INTSXP, LENGTH(coffsets) == LENGTH(names));

  POP_VAL(1);
  GOTO_VAL(dest);
}

RCP_OP_EX(SWITCH, 001) {
  SEXP call = GETCONST_IMM(0);
  SEXP names = GETCONST_IMM(1);
  SEXP coffsets = GETCONST_IMM(2);
  SEXP ioffsets = GETCONST_IMM(3);

  Rboolean is_names_null = FALSE;
  int names_length = LENGTH(names); __attribute__((__assume__(names_length != 1)));
  int ioffsets_length = 1;

  int dest = Rsh_do_switch(stack, call, names, coffsets, ioffsets,
    is_names_null, TYPEOF(names) == STRSXP, names_length,
    TYPEOF(ioffsets) == INTSXP, ioffsets_length,
    TYPEOF(coffsets) == INTSXP, LENGTH(coffsets) == LENGTH(names));

  POP_VAL(1);
  GOTO_VAL(dest);
}

RCP_OP_EX(SWITCH, 010) {
  SEXP call = GETCONST_IMM(0);
  SEXP names = GETCONST_IMM(1);
  SEXP coffsets = GETCONST_IMM(2);
  SEXP ioffsets = GETCONST_IMM(3);

  Rboolean is_names_null = FALSE;
  int names_length = 1;
  int ioffsets_length = LENGTH(ioffsets); __attribute__((__assume__(ioffsets_length != 1)));

  int dest = Rsh_do_switch(stack, call, names, coffsets, ioffsets,
    is_names_null, TYPEOF(names) == STRSXP, names_length,
    TYPEOF(ioffsets) == INTSXP, ioffsets_length,
    TYPEOF(coffsets) == INTSXP, LENGTH(coffsets) == LENGTH(names));

  POP_VAL(1);
  GOTO_VAL(dest);
}

RCP_OP_EX(SWITCH, 011) {
  SEXP call = GETCONST_IMM(0);
  SEXP names = GETCONST_IMM(1);
  SEXP coffsets = GETCONST_IMM(2);
  SEXP ioffsets = GETCONST_IMM(3);

  Rboolean is_names_null = FALSE;
  int names_length = 1;
  int ioffsets_length = 1;

  int dest = Rsh_do_switch(stack, call, names, coffsets, ioffsets,
    is_names_null, TYPEOF(names) == STRSXP, names_length,
    TYPEOF(ioffsets) == INTSXP, ioffsets_length,
    TYPEOF(coffsets) == INTSXP, LENGTH(coffsets) == LENGTH(names));

  POP_VAL(1);
  GOTO_VAL(dest);
}

RCP_OP_EX(SWITCH, 100) {
  SEXP call = GETCONST_IMM(0);
  SEXP names = GETCONST_IMM(1);
  SEXP coffsets = GETCONST_IMM(2);
  SEXP ioffsets = GETCONST_IMM(3);

  Rboolean is_names_null = TRUE;
  int names_length = 0;
  int ioffsets_length = LENGTH(ioffsets); __attribute__((__assume__(ioffsets_length != 1)));

  int dest = Rsh_do_switch(stack, call, names, coffsets, ioffsets,
    is_names_null, TYPEOF(names) == STRSXP, names_length,
    TYPEOF(ioffsets) == INTSXP, ioffsets_length,
    TYPEOF(coffsets) == INTSXP, LENGTH(coffsets) == LENGTH(names));

  POP_VAL(1);
  GOTO_VAL(dest);
}

RCP_OP_EX(SWITCH, 101) {
  SEXP call = GETCONST_IMM(0);
  SEXP names = GETCONST_IMM(1);
  SEXP coffsets = GETCONST_IMM(2);
  SEXP ioffsets = GETCONST_IMM(3);

  Rboolean is_names_null = TRUE;
  int names_length = 0;
  int ioffsets_length = 1;

  int dest = Rsh_do_switch(stack, call, names, coffsets, ioffsets,
    is_names_null, TYPEOF(names) == STRSXP, names_length,
    TYPEOF(ioffsets) == INTSXP, ioffsets_length,
    TYPEOF(coffsets) == INTSXP, LENGTH(coffsets) == LENGTH(names));

  POP_VAL(1);
  GOTO_VAL(dest);
}
#endif

RCP_OP(RETURNJMP,
  ,
  PUSH_VAL(1); // to hold return value
  Rsh_ReturnJmp(stack, GET_RHO());
)

RCP_OP(STARTSUBSET_N,
  Rboolean condition = Rsh_StartSubsetN(stack, GETCONST_IMM(0), GET_RHO());
  ,
  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
)

RCP_OP(STARTSUBASSIGN_N,
  Rboolean condition = Rsh_StartSubassignN(stack, GETCONST_IMM(0), GET_RHO());
  ,
  if(__builtin_expect(condition, FALSE))
  {
    POP_VAL(1);
    GOTO_IMM(1);
  }
)

RCP_OP(VECSUBSET2,
  Rsh_VecSubset2(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(MATSUBSET2,
  Rsh_MatSubset2(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(VECSUBASSIGN2,
  Rsh_VecSubassign2(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(MATSUBASSIGN2,
  Rsh_MatSubassign2(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(STARTSUBSET2_N,
  Rboolean condition = Rsh_StartSubset2N(stack, GETCONST_IMM(0), GET_RHO());
  ,
  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
)

RCP_OP(STARTSUBASSIGN2_N,
  Rboolean condition = Rsh_StartSubassign2N(stack, GETCONST_IMM(0), GET_RHO());
  ,
  if(__builtin_expect(condition, FALSE))
  {
    POP_VAL(1);
    GOTO_IMM(1);
  }
)

RCP_OP(SUBSET_N,
  Rsh_SubsetN(stack, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
)

RCP_OP(SUBSET2_N,
  Rsh_Subset2N(stack, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
)

RCP_OP(SUBASSIGN_N,
  Rsh_SubassignN(stack, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
)

RCP_OP(SUBASSIGN2_N,
  Rsh_Subassign2N(stack, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
)

RCP_OP(LOG,
  Rsh_Log(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(LOGBASE,
  Rsh_LogBase(stack, GETCONST_IMM(0), GET_RHO());
)

// MATH1 specializations
#define X(a, b, c) \
  RCP_OP_EX(MATH1, b) { \
    Rsh_Math1(stack, GETCONST_IMM(0), b, GET_RHO()); \
    NEXT; \
  }

X_MATH1_EXT_OPS

#undef X

RCP_OP(DOTCALL,
  Rsh_DotCall(stack, GET_IMM(1) - 1, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(COLON,
  Rsh_Colon(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(SEQALONG,
  Rsh_SeqAlong(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(SEQLEN,
  Rsh_SeqLen(stack, GETCONST_IMM(0), GET_RHO());
)

RCP_OP(BASEGUARD,
  PUSH_VAL(1);
  Rboolean condition = Rsh_BaseGuard(stack, GETCONST_IMM(0), GET_RHO());
  ,
  if(__builtin_expect(condition, FALSE))
  {
    GOTO_IMM(1);
  }
  else
  {
    POP_VAL(1);
    NEXT;
  }
)

RCP_OP(INCLNKSTK,
  Rsh_IncLnkStk(stack);
)

RCP_OP(DECLNKSTK,
  Rsh_DecLnkStk(stack);
)
