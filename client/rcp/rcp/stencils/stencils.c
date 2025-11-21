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


#define CONST_RUNTIME_VAR(symbol) (const SEXP const)(&_RCP_CRUNTIME0_##symbol)

extern const void* const _RCP_CRUNTIME0_R_NilValue[];
#define R_NilValue CONST_RUNTIME_VAR(R_NilValue)

extern const void* const _RCP_CRUNTIME0_R_TrueValue[];
#define R_TrueValue CONST_RUNTIME_VAR(R_TrueValue)

extern const void* const _RCP_CRUNTIME0_R_FalseValue[];
#define R_FalseValue CONST_RUNTIME_VAR(R_FalseValue)

extern const void* const _RCP_CRUNTIME0_R_LogicalNAValue[];
#define R_LogicalNAValue CONST_RUNTIME_VAR(R_LogicalNAValue)

//#define NO_STACK_OVERFLOW_CHECK
#include <runtime.h>


#if __GNUC__ >= 14
  #define STENCIL_ATTRIBUTES __attribute__((no_callee_saved_registers))
#else
  #warning "Compiler does not support no_callee_saved_registers directive. Generated code will be slower."
  #define STENCIL_ATTRIBUTES 
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

#define RCP_OP(op) __attribute__ ((noinline)) STENCIL_ATTRIBUTES SEXP _RCP_##op##_OP (Value* stack)

/* PATCHING SYMBOLS */
extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_NEXT(Value* stack);
#define NEXT return _RCP_EXEC_NEXT(stack)

extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_IMM0(Value* stack);
extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_IMM1(Value* stack);
extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_IMM2(Value* stack);
extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_IMM3(Value* stack);
#define GOTO_IMM(i) return _RCP_EXEC_IMM##i(stack)
//__attribute__((musttail))
//[[gnu::musttail]] 


EXTERN_ATTRIBUTES extern SEXP const _RCP_RHO;
#define GET_RHO() _RCP_RHO

extern const void* const _RCP_RAW_IMM0[];
extern const void* const _RCP_RAW_IMM1[];
extern const void* const _RCP_RAW_IMM2[];
extern const void* const _RCP_RAW_IMM3[];
#define GET_IMM(index) (unsigned)(int64_t)&_RCP_RAW_IMM##index

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

EXTERN_ATTRIBUTES extern BCell _RCP_CONSTCELL_AT_IMM0;
EXTERN_ATTRIBUTES extern BCell _RCP_CONSTCELL_AT_IMM1;
EXTERN_ATTRIBUTES extern BCell _RCP_CONSTCELL_AT_IMM2;
EXTERN_ATTRIBUTES extern BCell _RCP_CONSTCELL_AT_IMM3;
#define GETCONSTCELL_IMM(i) &_RCP_CONSTCELL_AT_IMM##i

EXTERN_ATTRIBUTES extern BCell _RCP_CONSTCELL_AT_LABEL_IMM0;
EXTERN_ATTRIBUTES extern BCell _RCP_CONSTCELL_AT_LABEL_IMM1;
EXTERN_ATTRIBUTES extern BCell _RCP_CONSTCELL_AT_LABEL_IMM2;
EXTERN_ATTRIBUTES extern BCell _RCP_CONSTCELL_AT_LABEL_IMM3;
#define GETCONSTCELL_LABEL_IMM(i) &_RCP_CONSTCELL_AT_LABEL_IMM##i

extern const void* const _RCP_PATCHED_VARIANTS[];
#define GETVARIANTS() (const void*)&_RCP_PATCHED_VARIANTS

extern const void* const _RCP_EXECUTABLE[];
#define GETEXECUTABLE() (const void* const)&_RCP_EXECUTABLE
#define GOTO_VAL(i) { STENCIL_ATTRIBUTES SEXP (*call)() = (const void* const)(((uint8_t*)GETEXECUTABLE()) + i); return call(); } 

/**************************************************************************/


SEXP _RCP_INIT (Value* stack) {
  PUSH_VAL(0);
  NEXT;
}

/*RCP_OP(BCMISMATCH) {
  error("byte code version mismatch");
  NEXT;
}*/

RCP_OP(RETURN) {
  SEXP res = val_as_sexp(*GET_VAL(-1));
  POP_VAL(1);
  return res;
}

RCP_OP(GOTO) {
  GOTO_IMM(0);
}

RCP_OP(BRIFNOT) {
  Rboolean condition = Rsh_BrIfNot(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  if(condition)
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(POP) {
  Rsh_Pop(stack);
  POP_VAL(1);
  NEXT;
}

RCP_OP(DUP) {
  PUSH_VAL(1);
  Rsh_Dup(stack);
  NEXT;
}

/*RCP_OP(PRINTVALUE) {
  PrintValue(val_as_sexp(stack));
  POP_VAL(1);
  NEXT;
}*/

//RCP_OP(STARTLOOPCNTXT)

//RCP_OP(ENDLOOPCNTXT)

//RCP_OP(DOLOOPNEXT)

//RCP_OP(DOLOOPBREAK)

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

RCP_OP(STARTFOR) {
  PUSH_VAL(2);

  Rsh_StartFor(stack, GETCONST_IMM(0), GETCONST_IMM(1), GETCONSTCELL_IMM(1), GET_RHO());

#ifdef STEPFOR_SPECIALIZE
  StepFor_specialized *stepfor_mem = (StepFor_specialized *)GETVARIANTS();

  RshLoopInfo *info = (RshLoopInfo *)RAW0(VAL_SXP(*GET_VAL(-2)));

  int i;
  switch (info->type)
  {
#define X(a, b) \
  case b:       \
    i = a;      \
    break;
    X_STEPFOR_TYPES
#undef X
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

  GOTO_IMM(2);
}

#ifdef STEPFOR_SPECIALIZE
#define X(a, b)                                                                \
  static INLINE NODISCARD Rboolean Rsh_StepFor_Specialized_##a(                \
      Value *stack, BCell *cell, SEXP rho) {                                   \
    return Rsh_DoStepFor(GET_VAL(-3),                                          \
                         (RshLoopInfo *)RAW0(VAL_SXP(*GET_VAL(-2))),           \
                         GET_VAL(-1), cell, rho, b);                           \
  }
X_STEPFOR_TYPES
#undef X

#define X(a, b) \
RCP_OP(STEPFOR_##a) { \
  if(Rsh_StepFor_Specialized_##a(stack, GETCONSTCELL_LABEL_IMM(0), GET_RHO())) \
    GOTO_IMM(0); \
  else \
    NEXT; \
}
X_STEPFOR_TYPES
#undef X

#else

RCP_OP(STEPFOR) {
  if(Rsh_StepFor(stack, GETCONSTCELL_LABEL_IMM(0), GET_RHO()))
    GOTO_IMM(0);
  else
    NEXT;
}

#endif

RCP_OP(ENDFOR) {
  Rsh_EndFor(stack, GET_RHO());
  POP_VAL(2);
  NEXT;
}

//RCP_OP(SETLOOPVAL)

RCP_OP(INVISIBLE) {
  Rsh_Invisible(stack);
  NEXT;
}

// Generic version
//RCP_OP(LDCONST) {
//  PUSH_VAL(1);
//  R_Visible = TRUE;
//  SET_VAL(stack, GETCONST_IMM(0));
//  NEXT;
//}

// Specialized versions
RCP_OP(LDCONST_INT) {
  PUSH_VAL(1);
  Rsh_LdConstInt(stack, GETCONST_IMM(0));
  NEXT;
}
RCP_OP(LDCONST_DBL) {
  PUSH_VAL(1);
  Rsh_LdConstDbl(stack, GETCONST_IMM(0));
  NEXT;
}
RCP_OP(LDCONST_LGL) {
  PUSH_VAL(1);
  Rsh_LdConstLgl(stack, GETCONST_IMM(0));
  NEXT;
}
RCP_OP(LDCONST_SEXP) {
  PUSH_VAL(1);
  Rsh_LdConst(stack, GETCONST_IMM(0));
  NEXT;
}


RCP_OP(LDNULL) {
  PUSH_VAL(1);
  Rsh_LdNull(stack);
  NEXT;
}

RCP_OP(LDTRUE) {
  PUSH_VAL(1);
  Rsh_LdTrue(stack);
  NEXT;
}

RCP_OP(LDFALSE) {
  PUSH_VAL(1);
  Rsh_LdFalse(stack);
  NEXT;
}

RCP_OP(GETVAR) {
  PUSH_VAL(1);
  Rsh_GetVar(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(DDVAL) {
  PUSH_VAL(1);
  Rsh_DdVal(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(SETVAR) {
  Rsh_SetVar(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(GETFUN) {
  PUSH_VAL(3);
  Rsh_GetFun(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

//RCP_OP(GETGLOBFUN)

//RCP_OP(GETSYMFUN)

RCP_OP(GETBUILTIN) {
  PUSH_VAL(3);

  Rsh_GetBuiltin(stack, GETCONST_IMM(0));
  NEXT;
}

RCP_OP(GETINTLBUILTIN) {
  PUSH_VAL(3);

  Rsh_GetIntlBuiltin(stack, GETCONST_IMM(0));
  NEXT;
}

RCP_OP(CHECKFUN) {
  PUSH_VAL(2);
  Rsh_CheckFun(stack);
  NEXT;
}

RCP_OP(MAKEPROM)
{
  Rsh_MakeProm(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(DOMISSING) {
  Rsh_DoMissing(stack);
  NEXT;
}

RCP_OP(SETTAG) {
  Rsh_SetTag(stack, GETCONST_IMM(0));
  NEXT;
}

RCP_OP(DODOTS) {
  Rsh_DoDots(stack, GET_RHO());
  NEXT;
}

RCP_OP(PUSHARG)
{
  Rsh_PushArg(stack);
  POP_VAL(1);
  NEXT;
}

RCP_OP(PUSHCONSTARG)
{
  Rsh_PushConstArg(stack, GETCONST_IMM(0));
  NEXT;
}

RCP_OP(PUSHNULLARG)
{
  Rsh_PushNullArg(stack);
  NEXT;
}

RCP_OP(PUSHTRUEARG)
{
  Rsh_PushTrueArg(stack);
  NEXT;
}

RCP_OP(PUSHFALSEARG)
{
  Rsh_PushFalseArg(stack);
  NEXT;
}

RCP_OP(CALL)
{
  Rsh_Call(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(CALLBUILTIN)
{
  Rsh_CallBuiltin(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(CALLSPECIAL) {
  PUSH_VAL(1);
  Rsh_CallSpecial(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

static INLINE void Rcp_MakeClosure(Value *stack, SEXP mkclos_arg, SEXP rho) {
  Value *res = GET_VAL(-1);

  SEXP forms = VECTOR_ELT(mkclos_arg, 0);
  SEXP rcp_body = VECTOR_ELT(mkclos_arg, 1);
  SEXP closure = Rf_mkCLOSXP(forms, rcp_body, rho);

  if (LENGTH(mkclos_arg) > 2) {
    PROTECT(closure);
    SEXP srcref = VECTOR_ELT(mkclos_arg, 2);
    if (TYPEOF(srcref) != NILSXP)
      // FIXME: expose R_SrcrefSymbol
      Rf_setAttrib(closure, Rf_install("srcref"), srcref);
    UNPROTECT(1); /* closure */
  }
  R_Visible = TRUE;

  SET_SXP_VAL(res, closure);
}

RCP_OP(MAKECLOSURE) {
  PUSH_VAL(1);
  Rcp_MakeClosure(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(UMINUS) {
  Rsh_UMinus(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(UPLUS) {
  Rsh_UPlus(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(ADD) {
  Rsh_Add(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(SUB) {
  Rsh_Sub(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(MUL) {
  Rsh_Mul(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(DIV) {
  Rsh_Div(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(EXPT) {
  Rsh_Expt(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(SQRT) {
  Rsh_Sqrt(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(EXP) {
  Rsh_Exp(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(EQ) {
  Rsh_Eq(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(NE) {
  Rsh_Ne(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(LT) {
  Rsh_Lt(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(LE) {
  Rsh_Le(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(GE) {
  Rsh_Ge(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(GT) {
  Rsh_Gt(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(AND) {
  Rsh_And(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(OR) {
  Rsh_Or(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(NOT) {
  Rsh_Not(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

//RCP_OP(DOTSERR)

RCP_OP(STARTASSIGN) {
  PUSH_VAL(3);
  Rsh_StartAssign(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(ENDASSIGN) {
  Rsh_EndAssign(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(STARTSUBSET) {
  PUSH_VAL(3);
  Rboolean condition = Rsh_StartSubset(stack, GETCONST_IMM(0), GET_RHO());
  if(__builtin_expect(condition, FALSE))
  {
    POP_VAL(3);
    GOTO_IMM(1);
  }
  else
    NEXT;
}

RCP_OP(DFLTSUBSET) {
  Rsh_DfltSubset(stack, GET_RHO());
  POP_VAL(3);
  NEXT;
}

RCP_OP(STARTSUBASSIGN) {
  PUSH_VAL(3);
  Rboolean condition = Rsh_StartSubassign(stack, GETCONST_IMM(0), GET_RHO());
  if(__builtin_expect(condition, FALSE))
  {
    POP_VAL(4);
    GOTO_IMM(1);
  }
  else
    NEXT;
}

RCP_OP(DFLTSUBASSIGN) {
  Rsh_DfltSubassign(stack, GET_RHO());
  POP_VAL(4);
  NEXT;
}

//RCP_OP(STARTC)

//RCP_OP(DFLTC)

RCP_OP(STARTSUBSET2) {
  PUSH_VAL(3);
  Rboolean condition = Rsh_StartSubset2(stack, GETCONST_IMM(0), GET_RHO());
  if(__builtin_expect(condition, FALSE))
  {
    POP_VAL(3);
    GOTO_IMM(1);
  }
  else
    NEXT;
}

RCP_OP(DFLTSUBSET2) {
  Rsh_DfltSubset2(stack, GET_RHO());
  POP_VAL(3);
  NEXT;
}

RCP_OP(STARTSUBASSIGN2) {
  PUSH_VAL(3);
  Rboolean condition = Rsh_StartSubassign2(stack, GETCONST_IMM(0), GET_RHO());
  if(__builtin_expect(condition, FALSE))
  {
    POP_VAL(4);
    GOTO_IMM(1);
  }
  else
    NEXT;
}

RCP_OP(DFLTSUBASSIGN2) {
  Rsh_DfltSubassign2(stack, GET_RHO());
  POP_VAL(4);
  NEXT;
}

RCP_OP(DOLLAR) {
  Rsh_Dollar(stack, GETCONST_IMM(0), GETCONST_IMM(1), GET_RHO());
  NEXT;
}

RCP_OP(DOLLARGETS) {
  Rsh_DollarGets(stack, GETCONST_IMM(0), GETCONST_IMM(1), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(ISNULL) {
  Rsh_IsNull(stack);
  NEXT;
}

RCP_OP(ISLOGICAL) {
  Rsh_IsLogical(stack);
  NEXT;
}

RCP_OP(ISINTEGER) {
  Rsh_IsInteger(stack);
  NEXT;
}

RCP_OP(ISDOUBLE) {
  Rsh_IsDouble(stack);
  NEXT;
}

RCP_OP(ISCOMPLEX) {
  Rsh_IsComplex(stack);
  NEXT;
}

RCP_OP(ISCHARACTER) {
  Rsh_IsCharacter(stack);
  NEXT;
}

RCP_OP(ISSYMBOL) {
  Rsh_IsSymbol(stack);
  NEXT;
}

RCP_OP(ISOBJECT) {
  Rsh_IsObject(stack);
  NEXT;
}

RCP_OP(ISNUMERIC) {
  Rsh_IsNumeric(stack);
  NEXT;
}

RCP_OP(VECSUBSET) {
  Rsh_VecSubset(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(MATSUBSET) {
  Rsh_MatSubset(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(VECSUBASSIGN) {
  Rsh_VecSubassign(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(MATSUBASSIGN) {
  Rsh_MatSubassign(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(3);
  NEXT;
}

RCP_OP(AND1ST) {
  if(Rsh_And1st(stack, GETCONST_IMM(0)))
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(AND2ND) {
  Rsh_And2nd(stack, GETCONST_IMM(0));
  POP_VAL(1);
  NEXT;
}

RCP_OP(OR1ST) {
  if(Rsh_Or1st(stack, GETCONST_IMM(0)))
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(OR2ND) {
  Rsh_Or2nd(stack, GETCONST_IMM(0));
  POP_VAL(1);
  NEXT;
}

RCP_OP(GETVAR_MISSOK) {
  PUSH_VAL(1);
  Rsh_GetVarMissOk(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(DDVAL_MISSOK) {
  PUSH_VAL(1);
  Rsh_DdValMissOk(stack, GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(VISIBLE) {
  Rsh_Visible(stack);
  NEXT;
}

RCP_OP(SETVAR2) {
  Rsh_SetVar2(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(STARTASSIGN2) {
  PUSH_VAL(3);
  Rsh_StartAssign2(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(ENDASSIGN2) {
  Rsh_EndAssign2(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(SETTER_CALL) {
  Rsh_SetterCall(stack, GETCONST_IMM(0), GETCONST_IMM(1), GET_RHO());
  POP_VAL(4);
  NEXT;
}

RCP_OP(GETTER_CALL) {
  Rsh_GetterCall(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(SWAP) {
  Rsh_SpecialSwap(stack);
  NEXT;
}

RCP_OP(DUP2ND) {
  PUSH_VAL(1);
  Rsh_Dup2nd(stack);
  NEXT;
}

#ifndef SWITCH_SPECIALIZE
RCP_OP(SWITCH) {
  int dest = Rsh_Switch(stack, GETCONST_IMM(0), GETCONST_IMM(1), GETCONST_IMM(2), GETCONST_IMM(3));
  POP_VAL(1);
  GOTO_VAL(dest);
}
#else
RCP_OP(SWITCH_000) {
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

RCP_OP(SWITCH_001) {
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

RCP_OP(SWITCH_010) {
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

RCP_OP(SWITCH_011) {
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

RCP_OP(SWITCH_100) {
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

RCP_OP(SWITCH_101) {
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

//RCP_OP(RETURNJMP)

RCP_OP(STARTSUBSET_N) {
  Rboolean condition = Rsh_StartSubsetN(stack, GETCONST_IMM(0), GET_RHO());
  
  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(STARTSUBASSIGN_N) {
  Rboolean condition = Rsh_StartSubassignN(stack, GETCONST_IMM(0), GET_RHO());
  if(__builtin_expect(condition, FALSE))
  {
    POP_VAL(1);
    GOTO_IMM(1);
  }
  else
    NEXT;
}

RCP_OP(VECSUBSET2) {
  Rsh_VecSubset2(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(MATSUBSET2) {
  Rsh_MatSubset2(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(VECSUBASSIGN2) {
  Rsh_VecSubassign2(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(MATSUBASSIGN2) {
  Rsh_MatSubassign2(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(3);
  NEXT;
}

RCP_OP(STARTSUBSET2_N) {
  Rboolean condition = Rsh_StartSubset2N(stack, GETCONST_IMM(0), GET_RHO());
  
  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(STARTSUBASSIGN2_N) {
  Rboolean condition = Rsh_StartSubassign2N(stack, GETCONST_IMM(0), GET_RHO());
  if(__builtin_expect(condition, FALSE))
  {
    POP_VAL(1);
    GOTO_IMM(1);
  }
  else
    NEXT;
}

RCP_OP(SUBSET_N) {
  Rsh_SubsetN(stack, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
  NEXT;
}

RCP_OP(SUBSET2_N) {
  Rsh_Subset2N(stack, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
  NEXT;
}

RCP_OP(SUBASSIGN_N) {
  Rsh_SubassignN(stack, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1) + 1);
  NEXT;
}

RCP_OP(SUBASSIGN2_N) {
  Rsh_Subassign2N(stack, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1) + 1);
  NEXT;
}

RCP_OP(LOG) {
  Rsh_Log(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(LOGBASE) {
  Rsh_LogBase(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

// MATH1 specializations
#define X(a, b, c) \
  RCP_OP(MATH1_##b) { \
    Rsh_Math1(stack, GETCONST_IMM(0), b, GET_RHO()); \
    NEXT; \
  }

X_MATH1_EXT_OPS

#undef X

RCP_OP(DOTCALL) {
  Rsh_DotCall(stack, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(COLON) {
  Rsh_Colon(stack, GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(SEQALONG) {
  Rsh_SeqAlong(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(SEQLEN) {
  Rsh_SeqLen(stack, GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(BASEGUARD) {
  PUSH_VAL(1);
  Rboolean condition = Rsh_BaseGuard(stack, GETCONST_IMM(0), GET_RHO());
  if(__builtin_expect(condition, FALSE))
  {
    GOTO_IMM(1);
  }
  else
  {
    POP_VAL(1);
    NEXT;
  }
}