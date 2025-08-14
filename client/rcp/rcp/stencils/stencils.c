#define RSH_INLINE
#define RCP
//#define ASSERTS

/*************MATH1 specialization*****************/
typedef double (*Rsh_Math1Fun)(double);

#ifdef MATH1_SPECIALIZE
#include <Rmath.h>
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

#define X(a, b, c) &c,
static Rsh_Math1Fun R_MATH1_EXT_FUNS[] = {
  X_MATH1_EXT_OPS
};
#undef X
#undef X_MATH1_EXT_OPS

#else
__attribute__((section(".data"), visibility("hidden"))) extern Rsh_Math1Fun R_MATH1_EXT_FUNS[];

#endif


/**************************************************/

//#define NO_STACK_OVERFLOW_CHECK
#include <runtime.h>


#if __GNUC__ >= 14
  #define STENCIL_ATTRIBUTES __attribute__((no_callee_saved_registers)) __attribute__ ((noinline))
#else
  #warning "Compiler does not support no_callee_saved_registers directive. Generated code will be slower."
  #define STENCIL_ATTRIBUTES __attribute__ ((noinline))
#endif

#define RCP_OP(op) STENCIL_ATTRIBUTES SEXP _RCP_##op##_OP (void)

/* PATCHING SYMBOLS */
extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_NEXT(void);
#define NEXT return _RCP_EXEC_NEXT()

extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_IMM0(void);
extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_IMM1(void);
extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_IMM2(void);
extern STENCIL_ATTRIBUTES SEXP _RCP_EXEC_IMM3(void);
#define GOTO_IMM(i) return _RCP_EXEC_IMM##i()
//__attribute__((musttail))
//[[gnu::musttail]] 


EXTERN_ATTRIBUTES extern const SEXP const _RCP_RHO;
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


/**************************************************************************/


SEXP _RCP_INIT () {
  NEXT;
}

/*RCP_OP(BCMISMATCH) {
  error("byte code version mismatch");
  NEXT;
}*/

RCP_OP(RETURN) {
  SEXP res = Rsh_Return(*GET_VAL(1));
  POP_VAL(1);
  return res;
}

RCP_OP(GOTO) {
  GOTO_IMM(0);
}

RCP_OP(BRIFNOT) {
  if(Rsh_BrIfNot(*GET_VAL(1), GETCONST_IMM(0), GET_RHO()))
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(POP) {
  Rsh_Pop(*GET_VAL(1));
  POP_VAL(1);
  NEXT;
}

RCP_OP(DUP) {
  PUSH_VAL(1);
  Rsh_Dup(GET_VAL(2), GET_VAL(1));
  NEXT;
}

/*RCP_OP(PRINTVALUE) {
  PrintValue(val_as_sexp(*GET_VAL(1)));
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
#endif

RCP_OP(STARTFOR) {
  PUSH_VAL(2);

  Rsh_StartFor(GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GETCONST_IMM(1), GETCONSTCELL_IMM(1), GET_RHO());

#ifdef STEPFOR_SPECIALIZE
  StepFor_specialized *stepfor_mem = (StepFor_specialized *)GETVARIANTS();

  RshLoopInfo *info = (RshLoopInfo *)RAW0(VAL_SXP(*GET_VAL(2)));

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

#define X(a, b) \
RCP_OP(STEPFOR_##a) { \
  if(Rsh_StepFor_Specialized_##a(GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONSTCELL_LABEL_IMM(0), GET_RHO())) \
    GOTO_IMM(0); \
  else \
    NEXT; \
}
X_STEPFOR_TYPES
#undef X

#else

RCP_OP(STEPFOR) {
  if(Rsh_StepFor(GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONSTCELL_LABEL_IMM(0), GET_RHO()))
    GOTO_IMM(0);
  else
    NEXT;
}

#endif

RCP_OP(ENDFOR) {
  Rsh_EndFor(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GET_RHO());
  POP_VAL(2);
  NEXT;
}

//RCP_OP(SETLOOPVAL)

RCP_OP(INVISIBLE) {
  Rsh_Invisible();
  NEXT;
}

// Generic version
//RCP_OP(LDCONST) {
//  PUSH_VAL(1);
//  R_Visible = TRUE;
//  SET_VAL(GET_VAL(1), GETCONST_IMM(0));
//  NEXT;
//}

// Specialized versions
RCP_OP(LDCONST_INT) {
  PUSH_VAL(1);
  Rsh_LdConstInt(GET_VAL(1), GETCONST_IMM(0));
  NEXT;
}
RCP_OP(LDCONST_DBL) {
  PUSH_VAL(1);
  Rsh_LdConstDbl(GET_VAL(1), GETCONST_IMM(0));
  NEXT;
}
RCP_OP(LDCONST_LGL) {
  PUSH_VAL(1);
  Rsh_LdConstLgl(GET_VAL(1), GETCONST_IMM(0));
  NEXT;
}
RCP_OP(LDCONST_SEXP) {
  PUSH_VAL(1);
  Rsh_LdConst(GET_VAL(1), GETCONST_IMM(0));
  NEXT;
}


RCP_OP(LDNULL) {
  PUSH_VAL(1);
  Rsh_LdNull(GET_VAL(1));
  NEXT;
}

RCP_OP(LDTRUE) {
  PUSH_VAL(1);
  Rsh_LdTrue(GET_VAL(1));
  NEXT;
}

RCP_OP(LDFALSE) {
  PUSH_VAL(1);
  Rsh_LdFalse(GET_VAL(1));
  NEXT;
}

RCP_OP(GETVAR) {
  PUSH_VAL(1);
  Rsh_GetVar(GET_VAL(1), GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  NEXT;
}

//RCP_OP(DDVAL)

RCP_OP(SETVAR) {
  Rsh_SetVar(GET_VAL(1), GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(GETFUN) {
  PUSH_VAL(3);
  Rsh_GetFun(GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

//RCP_OP(GETGLOBFUN)

//RCP_OP(GETSYMFUN)

RCP_OP(GETBUILTIN) {
  PUSH_VAL(3);

  Rsh_GetBuiltin(GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0));
  NEXT;
}

RCP_OP(GETINTLBUILTIN) {
  PUSH_VAL(3);

  Rsh_GetIntlBuiltin(GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0));
  NEXT;
}

RCP_OP(CHECKFUN) {
  PUSH_VAL(2);
  Rsh_CheckFun(GET_VAL(3), GET_VAL(2), GET_VAL(1));
  NEXT;
}

RCP_OP(MAKEPROM)
{
  Rsh_MakeProm(GET_VAL(3), GET_VAL(2),  GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(DOMISSING) {
  Rsh_DoMissing(GET_VAL(3), GET_VAL(2), GET_VAL(1));
  NEXT;
}

RCP_OP(SETTAG) {
  Rsh_SetTag(GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0));
  NEXT;
}

RCP_OP(DODOTS) {
  Rsh_DoDots(GET_VAL(3), GET_VAL(2), GET_VAL(1), GET_RHO());
  NEXT;
}

RCP_OP(PUSHARG)
{
  Rsh_PushArg(GET_VAL(3), GET_VAL(2), *GET_VAL(1));
  POP_VAL(1);
  NEXT;
}

RCP_OP(PUSHCONSTARG)
{
  Rsh_PushConstArg(GET_VAL(2), GET_VAL(1), GETCONST_IMM(0));
  NEXT;
}

RCP_OP(PUSHNULLARG)
{
  Rsh_PushNullArg(GET_VAL(2), GET_VAL(1));
  NEXT;
}

RCP_OP(PUSHTRUEARG)
{
  Rsh_PushTrueArg(GET_VAL(2), GET_VAL(1));
  NEXT;
}

RCP_OP(PUSHFALSEARG)
{
  Rsh_PushFalseArg(GET_VAL(2), GET_VAL(1));
  NEXT;
}

RCP_OP(CALL)
{
  Rsh_Call(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(CALLBUILTIN)
{
  Rsh_CallBuiltin(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(CALLSPECIAL) {
  PUSH_VAL(1);
  Rsh_CallSpecial(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

static INLINE void Rcp_MakeClosure(Value *res, SEXP mkclos_arg, SEXP rho) {
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
  Rcp_MakeClosure(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(UMINUS) {
  Rsh_UMinus(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(UPLUS) {
  Rsh_UPlus(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(ADD) {
  Rsh_Add(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(SUB) {
  Rsh_Sub(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(MUL) {
  Rsh_Mul(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(DIV) {
  Rsh_Div(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(EXPT) {
  Rsh_Expt(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(SQRT) {
  Rsh_Sqrt(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(EXP) {
  Rsh_Exp(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(EQ) {
  Rsh_Eq(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(NE) {
  Rsh_Ne(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(LT) {
  Rsh_Lt(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(LE) {
  Rsh_Le(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(GE) {
  Rsh_Ge(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(GT) {
  Rsh_Gt(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(AND) {
  Rsh_And(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(OR) {
  Rsh_Or(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(NOT) {
  Rsh_Not(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

//RCP_OP(DOTSERR)

RCP_OP(STARTASSIGN) {
  PUSH_VAL(3);
  Rsh_StartAssign(GET_VAL(4), GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(ENDASSIGN) {
  Rsh_EndAssign(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(STARTSUBSET) {
  PUSH_VAL(3);

  Rboolean condition = Rsh_StartSubset(GET_VAL(4), GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(DFLTSUBSET) {
  Rsh_DfltSubset(GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GET_RHO());
  POP_VAL(3);
  NEXT;
}

RCP_OP(STARTSUBASSIGN) {
  PUSH_VAL(3);
  Rsh_StartSubassign(GET_VAL(5), GET_VAL(4), GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(DFLTSUBASSIGN) {
  Rsh_DfltSubassign(GET_VAL(5), *GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GET_RHO());
  POP_VAL(4);
  NEXT;
}

//RCP_OP(STARTC)

//RCP_OP(DFLTC)

RCP_OP(STARTSUBSET2) {
  PUSH_VAL(3);

  Rboolean condition = Rsh_StartSubset2(GET_VAL(4), GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(DFLTSUBSET2) {
  Rsh_DfltSubset2(GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GET_RHO());
  POP_VAL(3);
  NEXT;
}

RCP_OP(STARTSUBASSIGN2) {
  PUSH_VAL(3);
  Rsh_StartSubassign2(GET_VAL(5), GET_VAL(4), GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(DFLTSUBASSIGN2) {
  Rsh_DfltSubassign2(GET_VAL(5), *GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GET_RHO());
  POP_VAL(4);
  NEXT;
}

RCP_OP(DOLLAR) {
  Rsh_Dollar(GET_VAL(1), GETCONST_IMM(0), GETCONST_IMM(1), GET_RHO());
  NEXT;
}

//RCP_OP(DOLLARGETS)

RCP_OP(ISNULL) {
  Rsh_IsNull(GET_VAL(1));
  NEXT;
}

RCP_OP(ISLOGICAL) {
  Rsh_IsLogical(GET_VAL(1));
  NEXT;
}

RCP_OP(ISINTEGER) {
  Rsh_IsInteger(GET_VAL(1));
  NEXT;
}

RCP_OP(ISDOUBLE) {
  Rsh_IsDouble(GET_VAL(1));
  NEXT;
}

RCP_OP(ISCOMPLEX) {
  Rsh_IsComplex(GET_VAL(1));
  NEXT;
}

RCP_OP(ISCHARACTER) {
  Rsh_IsCharacter(GET_VAL(1));
  NEXT;
}

RCP_OP(ISSYMBOL) {
  Rsh_IsSymbol(GET_VAL(1));
  NEXT;
}

RCP_OP(ISOBJECT) {
  Rsh_IsObject(GET_VAL(1));
  NEXT;
}

RCP_OP(ISNUMERIC) {
  Rsh_IsNumeric(GET_VAL(1));
  NEXT;
}

RCP_OP(VECSUBSET) {
  Rsh_VecSubset(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(MATSUBSET) {
  Rsh_MatSubset(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(VECSUBASSIGN) {
  Rsh_VecSubassign(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(MATSUBASSIGN) {
  Rsh_MatSubassign(GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(3);
  NEXT;
}

RCP_OP(AND1ST) {
  if(Rsh_And1st(GET_VAL(1), GETCONST_IMM(0)))
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(AND2ND) {
  Rsh_And2nd(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0));
  POP_VAL(1);
  NEXT;
}

RCP_OP(OR1ST) {
  if(Rsh_Or1st(GET_VAL(1), GETCONST_IMM(0)))
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(OR2ND) {
  Rsh_Or2nd(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0));
  POP_VAL(1);
  NEXT;
}

RCP_OP(GETVAR_MISSOK) {
  PUSH_VAL(1);
  Rsh_GetVarMissOk(GET_VAL(1), GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  NEXT;
}

//RCP_OP(DDVAL_MISSOK)

/*RCP_OP(VISIBLE) {
  R_Visible = TRUE;
  NEXT;
}*/

RCP_OP(SETVAR2) {
  Rsh_SetVar2(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(STARTASSIGN2) {
  PUSH_VAL(3);
  Rsh_StartAssign2(GET_VAL(4), GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(ENDASSIGN2) {
  Rsh_EndAssign2(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(SETTER_CALL) {
  Rsh_SetterCall(GET_VAL(5), *GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GETCONST_IMM(1), GET_RHO());
  POP_VAL(4);
  NEXT;
}

RCP_OP(GETTER_CALL) {
  Rsh_GetterCall(GET_VAL(4), GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(SWAP) {
  Rsh_SpecialSwap(GET_VAL(3), GET_VAL(2), GET_VAL(1));
  NEXT;
}

RCP_OP(DUP2ND) {
  PUSH_VAL(1);
  Rsh_Dup2nd(GET_VAL(3), GET_VAL(2), GET_VAL(1));
  NEXT;
}

//RCP_OP(SWITCH)

//RCP_OP(RETURNJMP)

RCP_OP(STARTSUBSET_N) {
  Rboolean condition = Rsh_StartSubsetN(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  
  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(STARTSUBASSIGN_N) {
  Rboolean condition = Rsh_StartSubassignN(GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());

  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(VECSUBSET2) {
  Rsh_VecSubset2(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(MATSUBSET2) {
  Rsh_MatSubset2(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(VECSUBASSIGN2) {
  Rsh_VecSubassign2(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  NEXT;
}

RCP_OP(MATSUBASSIGN2) {
  Rsh_MatSubassign2(GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(3);
  NEXT;
}

RCP_OP(STARTSUBSET2_N) {
  Rboolean condition = Rsh_StartSubset2N(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  
  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(STARTSUBASSIGN2_N) {
  Rboolean condition = Rsh_StartSubassign2N(GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());

  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    NEXT;
}

RCP_OP(SUBSET_N) {
  Rsh_SubsetN(R_BCNodeStackTop, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
  NEXT;
}

RCP_OP(SUBSET2_N) {
  Rsh_Subset2N(R_BCNodeStackTop, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
  NEXT;
}

RCP_OP(SUBASSIGN_N) {
  Rsh_SubassignN(R_BCNodeStackTop, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
  NEXT;
}

RCP_OP(SUBASSIGN2_N) {
  Rsh_Subassign2N(R_BCNodeStackTop, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
  NEXT;
}

RCP_OP(LOG) {
  Rsh_Log(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(LOGBASE) {
  Rsh_LogBase(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

#ifndef MATH1_SPECIALIZE
// MATH1 generic version
RCP_OP(MATH1) {
  Rsh_Math1(GET_VAL(1), GETCONST_IMM(0), GET_IMM(1), GET_RHO());
  NEXT;
}

#else
// MATH1 specializations
#define X(a, b, c) \
  RCP_OP(MATH1_##b) { \
    Rsh_Math1(GET_VAL(1), GETCONST_IMM(0), b, GET_RHO()); \
    NEXT; \
  }

X_MATH1_EXT_OPS

#undef X
#endif

//RCP_OP(DOTCALL)

RCP_OP(COLON) {
  Rsh_Colon(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  NEXT;
}

RCP_OP(SEQALONG) {
  Rsh_SeqAlong(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}

RCP_OP(SEQLEN) {
  Rsh_SeqLen(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  NEXT;
}