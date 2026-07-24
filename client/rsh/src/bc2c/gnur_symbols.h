#pragma once

extern FUNTAB R_FunTab[];
extern Rboolean R_Visible; /* Value visibility flag */
extern SEXP R_valueSym;
extern R_bcstack_t *R_BCNodeStackTop, *R_BCNodeStackEnd, *R_BCNodeStackBase,
    *R_BCProtTop;
#if !defined(RCP) || !defined(COMPILING_STENCILS)
extern SEXP R_TrueValue;
extern SEXP R_LogicalNAValue;
extern SEXP R_FalseValue;
#endif

#define R_MSG_NA "NaNs produced"

void forcePromise(SEXP e);
SEXP Rf_mkPROMISE(SEXP expr, SEXP rho);
SEXP bcEval(SEXP call, SEXP rho);
double R_pow(double x, double y);
SEXP R_bcDecode(SEXP);
SEXP R_bcEncode(SEXP);
SEXP R_Primitive(const char *primname);
Rboolean asLogicalNoNA(SEXP s, SEXP call, SEXP rho);
NORET void MISSING_ARGUMENT_ERROR(SEXP symbol, SEXP rho);
NORET void UNBOUND_VARIABLE_ERROR(SEXP symbol, SEXP rho);
void checkForMissings(SEXP args, SEXP call);
SEXP markSpecialArgs(SEXP args);
Rboolean asLogicalNoNA(SEXP s, SEXP call, SEXP rho);
int DispatchGroup(const char *group, SEXP call, SEXP op, SEXP args, SEXP rho,
                  SEXP *ans);
SEXP CONS_NR(SEXP car, SEXP cdr);
SEXP R_binary(SEXP call, SEXP op, SEXP x, SEXP y);
SEXP do_relop_dflt(SEXP call, SEXP op, SEXP x, SEXP y);
SEXP do_math1(SEXP call, SEXP op, SEXP args, SEXP env);
DL_FUNC R_dotCallFn(SEXP op, SEXP call, int nargs);
SEXP R_doDotCall(DL_FUNC fun, int nargs, SEXP *cargs, SEXP call);
SEXP do_dotcall(SEXP call, SEXP op, SEXP args, SEXP env);
SEXP R_unary(SEXP call, SEXP op, SEXP s1);
SEXP do_logic(SEXP call, SEXP op, SEXP args, SEXP env);
int tryDispatch(const char *generic, SEXP call, SEXP x, SEXP rho, SEXP *pv);
SEXP R_subset3_dflt(SEXP x, SEXP input, SEXP call);
SEXP R_subassign3_dflt(SEXP call, SEXP x, SEXP nlist, SEXP val);
SEXP Rf_CreateTag(SEXP x);
SEXP do_subset2_dflt(SEXP call, SEXP op, SEXP args, SEXP rho);
SEXP do_subset_dflt(SEXP call, SEXP op, SEXP args, SEXP rho);
SEXP EnsureLocal(SEXP symbol, SEXP rho, R_varloc_t *ploc);
int tryAssignDispatch(const char *generic, SEXP call, SEXP lhs, SEXP rhs,
                      SEXP rho, SEXP *pv);
SEXP do_subassign_dflt(SEXP call, SEXP op, SEXP args, SEXP rho);
SEXP do_subassign2_dflt(SEXP call, SEXP op, SEXP args, SEXP rho);
// creates a new evaluated promise without reference counting
SEXP R_mkEVPROMISE_NR(SEXP expr, SEXP val);
// creates a new evaluated promise with reference counting
SEXP R_mkEVPROMISE(SEXP expr, SEXP val);
SEXP do_colon(SEXP call, SEXP op, SEXP args, SEXP rho);
SEXP R_compact_intrange(R_xlen_t n1, R_xlen_t n2);
SEXP do_seq_along(SEXP call, SEXP op, SEXP args, SEXP rho);
SEXP do_seq_len(SEXP call, SEXP op, SEXP args, SEXP rho);
R_varloc_t R_findVarLoc(SEXP rho, SEXP symbol);
SEXP R_GetVarLocValue(R_varloc_t vl);
SEXP findVarLoc(SEXP symbol, SEXP rho);
SEXP findVarLocInFrame(SEXP rho, SEXP symbol, Rboolean *canCache);
SEXP do_log_builtin(SEXP call, SEXP op, SEXP args, SEXP env);
NORET void nodeStackOverflow(void);
SEXP R_findVar(SEXP symbol, SEXP rho);
SEXP getPrimitive(SEXP symbol, SEXPTYPE type);
SEXP R_tryUnwrap(SEXP value);

SEXP make_applyClosure_env(SEXP call, SEXP op, SEXP arglist, SEXP rho,
                           SEXP suppliedvars);
void Rf_begincontext(RCNTXT *cptr, int flags, SEXP syscall, SEXP env, SEXP sysp,
                     SEXP promargs, SEXP callfun);
void Rf_endcontext(RCNTXT *cptr);
void NORET Rf_findcontext(int mask, SEXP env, SEXP val);
Rboolean Rf_pmatch(SEXP, SEXP, Rboolean);

extern int R_EvalDepth;
extern int R_Expressions;

#define BCODE_CODE(x) CAR(x)
#define BCODE_CONSTS(x) CDR(x)
#define IS_BYTECODE(x) (TYPEOF(x) == BCODESXP)
