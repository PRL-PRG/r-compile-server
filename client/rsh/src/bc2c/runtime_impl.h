#include "R_ext/Error.h"
#include "Rinternals.h"
#include "runtime.h"

#ifdef RSH_PC
static Rsh_PerfCounters Rsh_GPC;

SEXP Rsh_pc_get(void) {
  u32 size = sizeof(Rsh_PerfCounters) / sizeof(int);
  SEXP pc = PROTECT(Rf_allocVector(INTSXP, size));

  memcpy(INTEGER(pc), &Rsh_GPC, sizeof(Rsh_PerfCounters));

  SEXP names = PROTECT(allocVector(STRSXP, size));
  int i = 0;
  SET_STRING_ELT(names, i++, mkChar("slow_arith"));
  SET_STRING_ELT(names, i++, mkChar("slow_math1"));
  SET_STRING_ELT(names, i++, mkChar("slow_unary"));
  SET_STRING_ELT(names, i++, mkChar("slow_relop"));
  SET_STRING_ELT(names, i++, mkChar("slow_subset"));
  SET_STRING_ELT(names, i++, mkChar("slow_subassign"));
  SET_STRING_ELT(names, i++, mkChar("dispatched_subset"));
  SET_STRING_ELT(names, i++, mkChar("dispatched_subassign"));
  SET_STRING_ELT(names, i++, mkChar("isq"));
  SET_STRING_ELT(names, i++, mkChar("isq_for"));
  setAttrib(pc, R_NamesSymbol, names);

  UNPROTECT(2);
  return pc;
}

SEXP Rsh_pc_reset() {
  SEXP s = Rsh_pc_get();
  memset(&Rsh_GPC, 0, sizeof(Rsh_GPC));
  return s;
}
#endif

// TODO: is the preserving needed?
#define LOAD_R_BUILTIN(target, name)                                           \
  do {                                                                         \
    target = PROTECT(R_Primitive(name));                                       \
    R_PreserveObject(target);                                                  \
    UNPROTECT(1);                                                              \
  } while (0)

#define X(a, b)                                                                \
  SEXP b##Sym;                                                                 \
  SEXP b##Op;

RSH_R_SYMBOLS
#undef X

JIT_DEF SEXP Rsh_initialize_runtime(void) {

#ifdef RSH_PC
  Rsh_pc_reset();
#endif

#define X(a, b, c) LOAD_R_BUILTIN(R_ARITH_OPS[b], #a);
  X_ARITH_OPS
#undef X
#define X(a, b, c) LOAD_R_BUILTIN(R_REL_OPS[b], #a);
  X_REL_OPS
#undef X
#define X(a, b, c) LOAD_R_BUILTIN(R_MATH1_OPS[b], #a);
  X_MATH1_OPS
#undef X
#define X(a, b, c) LOAD_R_BUILTIN(R_UNARY_OPS[b], #a);
  X_UNARY_OPS
#undef X
#define X(a, b, c) LOAD_R_BUILTIN(R_LOGIC2_OPS[b], #a);
  X_LOGIC2_OPS
#undef X
#define X(a, b, c) LOAD_R_BUILTIN(R_MATH1_EXT_OPS[b], #a);
  X_MATH1_EXT_OPS
#undef X

#define X(a, b, c) R_ARITH_OP_SYMS[b] = Rf_install(#a);
  X_ARITH_OPS
#undef X
#define X(a, b, c) R_REL_OP_SYMS[b] = Rf_install(#a);
  X_REL_OPS
#undef X
#define X(a, b, c) R_UNARY_OP_SYMS[b] = Rf_install(#a);
  X_UNARY_OPS
#undef X
#define X(a, b, c) R_MATH1_EXT_SYMS[b] = Rf_install(#a);
  X_MATH1_EXT_OPS
#undef X

#define X(a, b)                                                                \
  b##Sym = Rf_install(#a);                                                     \
  LOAD_R_BUILTIN(b##Op, #a);

  RSH_R_SYMBOLS
#undef X

#include <Rmath.h>
#define X(a, b, c) R_MATH1_EXT_FUNS[b] = &c;
  X_MATH1_EXT_OPS
#undef X

  LOAD_R_BUILTIN(NOT_OP, "!");
  LOAD_R_BUILTIN(LOG_OP, "log");

#ifdef RSH_TESTS
  BC2C_CALL_TRAMPOLINE_SXP = Rf_mkString("Rsh_call_trampoline");
  R_PreserveObject(BC2C_CALL_TRAMPOLINE_SXP);
#else
// it is initialized in the rsh::initialize method in the package
#endif

  return R_NilValue;
}

JIT_DEF SEXP Rsh_call_trampoline(SEXP call, SEXP op, SEXP args, SEXP rho) {
  SEXP fun_ptr = CADR(args);
  if (TYPEOF(fun_ptr) != EXTPTRSXP) {
    Rf_error("Expected an external pointer, got: %d", TYPEOF(fun_ptr));
  }

  SEXP c_cp = CADDR(args);
  if (TYPEOF(c_cp) != VECSXP) {
    Rf_error("Expected a vector, got: %d", TYPEOF(c_cp));
  }

  // seems like unnecesary complicated casting, but otherwise C complains
  // cf. https://stackoverflow.com/a/19487645
  Rsh_closure fun;
  *(void **)(&fun) = R_ExternalPtrAddr(fun_ptr);
  SEXP res = fun(rho, c_cp);

  return res;
}

#define PUSHCONSTARG_OP 34
#define BASEGUARD_OP 123
#define GETBUILTIN_OP 26
#define CALLBUILTIN_OP 39
#define RETURN_OP 1

JIT_DEF SEXP create_wrapper_body(SEXP original_body, Rsh_closure fun_ptr,
                                 SEXP c_cp) {
  PROTECT(c_cp);
  SEXP body = R_MakeExternalPtr((void *)fun_ptr, Rsh_ClosureBodyTag, c_cp);
  UNPROTECT(1);
  return body;
}
