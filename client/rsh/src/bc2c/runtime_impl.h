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

#define LOAD_R_BUILTIN(target, name)                                           \
  do {                                                                         \
    target = PROTECT(R_Primitive(name));                                       \
    R_PreserveObject(target);                                                  \
    UNPROTECT(1);                                                              \
  } while (0)

#define X(a, b) SEXP b;
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

#define X(a, b, c) R_ARITH_OP_SYMS[b] = Rf_install(#a);
  X_ARITH_OPS
#undef X
#define X(a, b, c) R_REL_OP_SYMS[b] = Rf_install(#a);
  X_REL_OPS
#undef X
#define X(a, b, c) R_UNARY_OP_SYMS[b] = Rf_install(#a);
  X_UNARY_OPS
#undef X

#define X(a, b) b = Rf_install(#a);
  RSH_R_SYMBOLS
#undef X

  Rsh_NilValue = SXP_TO_VAL(R_NilValue);
  Rsh_UnboundValue = SXP_TO_VAL(Rsh_UnboundValue);
  LOAD_R_BUILTIN(NOT_OP, "!");

#ifdef RSH_TESTS
  BC2C_CALL_TRAMPOLINE_SXP = Rf_mkString("Rsh_call_trampoline");
  R_PreserveObject(BC2C_CALL_TRAMPOLINE_SXP);
#else
// it is initialized in the rsh::initialize method in the package
#endif

  return R_NilValue;
}

JIT_DEF SEXP Rsh_call_trampoline(SEXP call, SEXP op, SEXP args, SEXP rho) {
  SEXP closure = CADR(args);
  if (TYPEOF(closure) != CLOSXP) {
    Rf_error("Expected a closure");
  }

  SEXP body = BODY(closure);
  if (TYPEOF(body) != BCODESXP) {
    Rf_error("Expected a compiled closure");
  }

  SEXP cp = BCODE_CONSTS(body);
  if (XLENGTH(cp) != 6) {
    Rf_error("Expected a constant pool with 6 elements");
  }

  SEXP c_cp = VECTOR_ELT(cp, LENGTH(cp) - 2);
  // cf. https://stackoverflow.com/a/19487645
  Rsh_closure fun;
  *(void **)(&fun) = R_ExternalPtrAddr(VECTOR_ELT(c_cp, 0));
  SEXP res = fun(rho, VECTOR_ELT(c_cp, 1));

  return res;
}
