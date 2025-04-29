#define RSH_INLINE
#define RCP
//#define ASSERTS

#include <runtime.h>

/*
#undef PUSH_VAL
#define PUSH_VAL(n)                                                            \
  do {                                                                         \
    int __n__ = (n);                                                           \
    while (__n__-- > 0) {                                                      \
      (R_BCNodeStackTop++)->tag = -1;                                          \
    }                                                                          \
  } while (0)
*/


#if __GNUC__ >= 14
  #define NO_CALLEE_SAVED_REGISTERS __attribute__((no_callee_saved_registers))
#else
  #warning "Compiler does not support no_callee_saved_registers directive. Generated code will be slower."
  #define NO_CALLEE_SAVED_REGISTERS
#endif

#define RCP_OP(op) NO_CALLEE_SAVED_REGISTERS __attribute__ ((noinline)) SEXP _RCP_##op##_OP (void)

/* PATCHING SYMBOLS */
extern NO_CALLEE_SAVED_REGISTERS SEXP _RCP_GOTO_NEXT(void);
#define RETURN return _RCP_GOTO_NEXT()

extern NO_CALLEE_SAVED_REGISTERS SEXP _RCP_GOTO_IMM0(void);
extern NO_CALLEE_SAVED_REGISTERS SEXP _RCP_GOTO_IMM1(void);
extern NO_CALLEE_SAVED_REGISTERS SEXP _RCP_GOTO_IMM2(void);
extern NO_CALLEE_SAVED_REGISTERS SEXP _RCP_GOTO_IMM3(void);
#define GOTO_IMM(i) return _RCP_GOTO_IMM##i()
//__attribute__((musttail))
//[[gnu::musttail]] 


EXTERN_ATTRIBUTES extern const SEXP const _RCP_RHO;
#define GET_RHO() _RCP_RHO

extern const void* const _RCP_IMM0[];
extern const void* const _RCP_IMM1[];
extern const void* const _RCP_IMM2[];
extern const void* const _RCP_IMM3[];
#define GET_IMM(index) (unsigned)(int64_t)&_RCP_IMM##index

extern const void* const _RCP_CONSTANT_AT_IMM0[];
extern const void* const _RCP_CONSTANT_AT_IMM1[];
extern const void* const _RCP_CONSTANT_AT_IMM2[];
extern const void* const _RCP_CONSTANT_AT_IMM3[];
#define GETCONST_IMM(i) (const SEXP const)(&_RCP_CONSTANT_AT_IMM##i)

extern const void* const _RCP_CONSTANT_STR_AT_IMM0[];
extern const void* const _RCP_CONSTANT_STR_AT_IMM1[];
extern const void* const _RCP_CONSTANT_STR_AT_IMM2[];
extern const void* const _RCP_CONSTANT_STR_AT_IMM3[];
#define GETCONST_STR_IMM(i) (const char* const)&_RCP_CONSTANT_STR_AT_IMM##i

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


/**************************************************************************/


SEXP _RCP_INIT () {
  RETURN;
}

/*RCP_OP(BCMISMATCH) {
  error("byte code version mismatch");
  RETURN;
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
    RETURN;
}

RCP_OP(POP) {
  Rsh_Pop(*GET_VAL(1));
  POP_VAL(1);
  RETURN;
}

RCP_OP(DUP) {
  PUSH_VAL(1);
  Rsh_Dup(GET_VAL(2), GET_VAL(1));
  RETURN;
}

/*RCP_OP(PRINTVALUE) {
  PrintValue(val_as_sexp(*GET_VAL(1)));
  POP_VAL(1);
  RETURN;
}*/

//RCP_OP(STARTLOOPCNTXT)

//RCP_OP(ENDLOOPCNTXT)

//RCP_OP(DOLOOPNEXT)

//RCP_OP(DOLOOPBREAK)

RCP_OP(STARTFOR) {
  PUSH_VAL(2);

  Rsh_StartFor(GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GETCONST_IMM(1), GETCONSTCELL_IMM(1), GET_RHO());

  GOTO_IMM(2);
}

RCP_OP(STEPFOR) {
  if(Rsh_StepFor(GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONSTCELL_LABEL_IMM(0), GET_RHO()))
    GOTO_IMM(0);
  else
    RETURN;
}

RCP_OP(ENDFOR) {
  Rsh_EndFor(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GET_RHO());
  POP_VAL(2);
  RETURN;
}

//RCP_OP(SETLOOPVAL)

RCP_OP(INVISIBLE) {
  Rsh_Invisible();
  RETURN;
}

// Generic version
RCP_OP(LDCONST) {
  PUSH_VAL(1);
  R_Visible = TRUE;
  SET_VAL(GET_VAL(1), GETCONST_IMM(0));
  RETURN;
}

// Specialized versions
RCP_OP(LDCONST_INT) {
  PUSH_VAL(1);
  Rsh_LdConstInt(GET_VAL(1), GETCONST_IMM(0));
  RETURN;
}
RCP_OP(LDCONST_DBL) {
  PUSH_VAL(1);
  Rsh_LdConstDbl(GET_VAL(1), GETCONST_IMM(0));
  RETURN;
}
RCP_OP(LDCONST_LGL) {
  PUSH_VAL(1);
  Rsh_LdConstLgl(GET_VAL(1), GETCONST_IMM(0));
  RETURN;
}
RCP_OP(LDCONST_SEXP) {
  PUSH_VAL(1);
  Rsh_LdConst(GET_VAL(1), GETCONST_IMM(0));
  RETURN;
}


RCP_OP(LDNULL) {
  PUSH_VAL(1);
  Rsh_LdNull(GET_VAL(1));
  RETURN;
}

RCP_OP(LDTRUE) {
  PUSH_VAL(1);
  Rsh_LdTrue(GET_VAL(1));
  RETURN;
}

RCP_OP(LDFALSE) {
  PUSH_VAL(1);
  Rsh_LdFalse(GET_VAL(1));
  RETURN;
}

RCP_OP(GETVAR) {
  PUSH_VAL(1);
  Rsh_GetVar(GET_VAL(1), GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  RETURN;
}

//RCP_OP(DDVAL)

RCP_OP(SETVAR) {
  Rsh_SetVar(GET_VAL(1), GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(GETFUN) {
  PUSH_VAL(3);
  Rsh_GetFun(GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

//RCP_OP(GETGLOBFUN)

//RCP_OP(GETSYMFUN)

RCP_OP(GETBUILTIN) {
  PUSH_VAL(3);

  Rsh_GetBuiltin(GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_STR_IMM(0));//todo more efficient symbol install
  RETURN;
}

RCP_OP(GETINTLBUILTIN) {
  PUSH_VAL(3);

  Rsh_GetIntlBuiltin(GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0));
  RETURN;
}

RCP_OP(CHECKFUN) {
  PUSH_VAL(2);
  Rsh_CheckFun(GET_VAL(3), GET_VAL(2), GET_VAL(1));
  RETURN;
}

RCP_OP(MAKEPROM)
{
  Rsh_MakeProm(GET_VAL(3), GET_VAL(2),  GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(DOMISSING) {
  Rsh_DoMissing(GET_VAL(3), GET_VAL(2), GET_VAL(1));
  RETURN;
}

RCP_OP(SETTAG) {
  Rsh_SetTag(GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0));
  RETURN;
}

RCP_OP(DODOTS) {
  Rsh_DoDots(GET_VAL(3), GET_VAL(2), GET_VAL(1), GET_RHO());
  RETURN;
}

RCP_OP(PUSHARG)
{
  Rsh_PushArg(GET_VAL(3), GET_VAL(2), *GET_VAL(1));
  POP_VAL(1);
  RETURN;
}

RCP_OP(PUSHCONSTARG)
{
  Rsh_PushConstArg(GET_VAL(2), GET_VAL(1), GETCONST_IMM(0));
  RETURN;
}

RCP_OP(PUSHNULLARG)
{
  Rsh_PushNullArg(GET_VAL(2), GET_VAL(1));
  RETURN;
}

RCP_OP(PUSHTRUEARG)
{
  Rsh_PushTrueArg(GET_VAL(2), GET_VAL(1));
  RETURN;
}

RCP_OP(PUSHFALSEARG)
{
  Rsh_PushFalseArg(GET_VAL(2), GET_VAL(1));
  RETURN;
}

RCP_OP(CALL)
{
  Rsh_Call(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  RETURN;
}

RCP_OP(CALLBUILTIN)
{
  Rsh_CallBuiltin(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  RETURN;
}

RCP_OP(CALLSPECIAL) {
  PUSH_VAL(1);
  Rsh_CallSpecial(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

static INLINE void Rcp_MakeClosure(Value *res, SEXP mkclos_arg, SEXP GET_RHO()) {
  SEXP forms = VECTOR_ELT(mkclos_arg, 0);
  SEXP rcp_body = VECTOR_ELT(mkclos_arg, 1);
  SEXP closure = Rf_mkCLOSXP(forms, rcp_body, GET_RHO());

  R_Visible = TRUE;

  SET_SXP_VAL(res, closure);
}

RCP_OP(MAKECLOSURE) {
  PUSH_VAL(1);
  Rcp_MakeClosure(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(UMINUS) {
  Rsh_UMinus(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(UPLUS) {
  Rsh_UPlus(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(ADD) {
  Rsh_Add(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(SUB) {
  Rsh_Sub(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(MUL) {
  Rsh_Mul(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(DIV) {
  Rsh_Div(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(EXPT) {
  Rsh_Expt(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(SQRT) {
  Rsh_Sqrt(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(EXP) {
  Rsh_Exp(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(EQ) {
  Rsh_Eq(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(NE) {
  Rsh_Ne(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(LT) {
  Rsh_Lt(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(LE) {
  Rsh_Le(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(GE) {
  Rsh_Ge(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(GT) {
  Rsh_Gt(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(AND) {
  Rsh_And(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(OR) {
  Rsh_Or(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(NOT) {
  Rsh_Not(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

//RCP_OP(DOTSERR)

RCP_OP(STARTASSIGN) {
  PUSH_VAL(3);
  Rsh_StartAssign(GET_VAL(4), GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(ENDASSIGN) {
  Rsh_EndAssign(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  POP_VAL(2);
  RETURN;
}

RCP_OP(STARTSUBSET) {
  PUSH_VAL(3);

  Rboolean condition = Rsh_StartSubset(GET_VAL(4), GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    RETURN;
}

RCP_OP(DFLTSUBSET) {
  Rsh_DfltSubset(GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GET_RHO());
  POP_VAL(3);
  RETURN;
}

RCP_OP(STARTSUBASSIGN) {
  PUSH_VAL(3);
  Rsh_StartSubassign(GET_VAL(5), GET_VAL(4), GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(DFLTSUBASSIGN) {
  Rsh_DfltSubassign(GET_VAL(5), *GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GET_RHO());
  POP_VAL(4);
  RETURN;
}

//RCP_OP(STARTC)

//RCP_OP(DFLTC)

RCP_OP(STARTSUBSET2) {
  PUSH_VAL(3);

  Rboolean condition = Rsh_StartSubset2(GET_VAL(4), GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    RETURN;
}

RCP_OP(DFLTSUBSET2) {
  Rsh_DfltSubset2(GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GET_RHO());
  POP_VAL(3);
  RETURN;
}

RCP_OP(STARTSUBASSIGN2) {
  PUSH_VAL(3);
  Rsh_StartSubassign2(GET_VAL(5), GET_VAL(4), GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(DFLTSUBASSIGN2) {
  Rsh_DfltSubassign2(GET_VAL(5), *GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GET_RHO());
  POP_VAL(4);
  RETURN;
}

RCP_OP(DOLLAR) {
  Rsh_Dollar(GET_VAL(1), GETCONST_IMM(0), GETCONST_IMM(1), GET_RHO());
  RETURN;
}

//RCP_OP(DOLLARGETS)

RCP_OP(ISNULL) {
  Rsh_IsNull(GET_VAL(1));
  RETURN;
}

RCP_OP(ISLOGICAL) {
  Rsh_IsLogical(GET_VAL(1));
  RETURN;
}

RCP_OP(ISINTEGER) {
  Rsh_IsInteger(GET_VAL(1));
  RETURN;
}

RCP_OP(ISDOUBLE) {
  Rsh_IsDouble(GET_VAL(1));
  RETURN;
}

RCP_OP(ISCOMPLEX) {
  Rsh_IsComplex(GET_VAL(1));
  RETURN;
}

RCP_OP(ISCHARACTER) {
  Rsh_IsCharacter(GET_VAL(1));
  RETURN;
}

RCP_OP(ISSYMBOL) {
  Rsh_IsSymbol(GET_VAL(1));
  RETURN;
}

RCP_OP(ISOBJECT) {
  Rsh_IsObject(GET_VAL(1));
  RETURN;
}

RCP_OP(ISNUMERIC) {
  Rsh_IsNumeric(GET_VAL(1));
  RETURN;
}

RCP_OP(VECSUBSET) {
  Rsh_VecSubset(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(MATSUBSET) {
  Rsh_MatSubset(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  RETURN;
}

RCP_OP(VECSUBASSIGN) {
  Rsh_VecSubassign(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  RETURN;
}

RCP_OP(MATSUBASSIGN) {
  Rsh_MatSubassign(GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(3);
  RETURN;
}

RCP_OP(AND1ST) {
  if(Rsh_And1st(GET_VAL(1), GETCONST_IMM(0)))
    GOTO_IMM(1);
  else
    RETURN;
}

RCP_OP(AND2ND) {
  Rsh_And2nd(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0));
  POP_VAL(1);
  RETURN;
}

RCP_OP(OR1ST) {
  if(Rsh_Or1st(GET_VAL(1), GETCONST_IMM(0)))
    GOTO_IMM(1);
  else
    RETURN;
}

RCP_OP(OR2ND) {
  Rsh_Or2nd(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0));
  POP_VAL(1);
  RETURN;
}

RCP_OP(GETVAR_MISSOK) {
  PUSH_VAL(1);
  Rsh_GetVarMissOk(GET_VAL(1), GETCONST_IMM(0), GETCONSTCELL_IMM(0), GET_RHO());
  RETURN;
}

//RCP_OP(DDVAL_MISSOK)

/*RCP_OP(VISIBLE) {
  R_Visible = TRUE;
  RETURN;
}*/

RCP_OP(SETVAR2) {
  Rsh_SetVar2(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(STARTASSIGN2) {
  PUSH_VAL(3);
  Rsh_StartAssign2(GET_VAL(4), GET_VAL(3), GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(ENDASSIGN2) {
  Rsh_EndAssign2(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  RETURN;
}

RCP_OP(SETTER_CALL) {
  Rsh_SetterCall(GET_VAL(5), *GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GETCONST_IMM(1), GET_RHO());
  POP_VAL(4);
  RETURN;
}

RCP_OP(GETTER_CALL) {
  Rsh_GetterCall(GET_VAL(4), GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  RETURN;
}

RCP_OP(SWAP) {
  Rsh_SpecialSwap(GET_VAL(3), GET_VAL(2), GET_VAL(1));
  RETURN;
}

RCP_OP(DUP2ND) {
  PUSH_VAL(1);
  Rsh_Dup2nd(GET_VAL(3), GET_VAL(2), GET_VAL(1));
  RETURN;
}

//RCP_OP(SWITCH)

//RCP_OP(RETURNJMP)

RCP_OP(STARTSUBSET_N) {
  Rboolean condition = Rsh_StartSubsetN(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  
  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    RETURN;
}

RCP_OP(STARTSUBASSIGN_N) {
  Rboolean condition = Rsh_StartSubassignN(GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());

  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    RETURN;
}

RCP_OP(VECSUBSET2) {
  Rsh_VecSubset2(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(MATSUBSET2) {
  Rsh_MatSubset2(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  RETURN;
}

RCP_OP(VECSUBASSIGN2) {
  Rsh_VecSubassign2(GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(2);
  RETURN;
}

RCP_OP(MATSUBASSIGN2) {
  Rsh_MatSubassign2(GET_VAL(4), *GET_VAL(3), *GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(3);
  RETURN;
}

RCP_OP(STARTSUBSET2_N) {
  Rboolean condition = Rsh_StartSubset2N(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  
  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    RETURN;
}

RCP_OP(STARTSUBASSIGN2_N) {
  Rboolean condition = Rsh_StartSubassign2N(GET_VAL(2), GET_VAL(1), GETCONST_IMM(0), GET_RHO());

  if(__builtin_expect(condition, FALSE))
    GOTO_IMM(1);
  else
    RETURN;
}

RCP_OP(SUBSET_N) {
  Rsh_SubsetN(R_BCNodeStackTop, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
  RETURN;
}

RCP_OP(SUBSET2_N) {
  Rsh_Subset2N(R_BCNodeStackTop, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
  RETURN;
}

RCP_OP(SUBASSIGN_N) {
  Rsh_SubassignN(R_BCNodeStackTop, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
  RETURN;
}

RCP_OP(SUBASSIGN2_N) {
  Rsh_Subassign2N(R_BCNodeStackTop, GET_IMM(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(GET_IMM(1));
  RETURN;
}

RCP_OP(LOG) {
  Rsh_Log(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(LOGBASE) {
  Rsh_LogBase(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

// MATH1 generic version
RCP_OP(MATH1) {
  Rsh_Math1(GET_VAL(1), GETCONST_IMM(0), GET_IMM(1), GET_RHO());
  RETURN;
}

// MATH1 specializations
#define X(a, b, c) \
  RCP_OP(MATH1_##b) { \
    Rsh_Math1(GET_VAL(1), GETCONST_IMM(0), b, GET_RHO()); \
    RETURN; \
  }

X_MATH1_EXT_OPS

#undef X

//RCP_OP(DOTCALL)

RCP_OP(COLON) {
  Rsh_Colon(GET_VAL(2), *GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  POP_VAL(1);
  RETURN;
}

RCP_OP(SEQALONG) {
  Rsh_SeqAlong(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}

RCP_OP(SEQLEN) {
  Rsh_SeqLen(GET_VAL(1), GETCONST_IMM(0), GET_RHO());
  RETURN;
}