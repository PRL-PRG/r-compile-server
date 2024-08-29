#include "runtime.h"

#define LOAD_R_BUILTIN(target, name)                                           \
  do {                                                                         \
    target = PROTECT(R_Primitive(name));                                       \
    R_PreserveObject(target);                                                  \
    UNPROTECT(1);                                                              \
  } while (0)

JIT_DEF SEXP Rsh_initialize_runtime(void) {
#define X(a, b) LOAD_R_BUILTIN(R_ARITH_OPS[b], #a);
  X_ARITH_OPS
#undef X
#define X(a, b) LOAD_R_BUILTIN(R_REL_OPS[b], #a);
  X_REL_OPS
#undef X
#define X(a, b) LOAD_R_BUILTIN(R_MATH1_OPS[b], #a);
  X_MATH1_OPS
#undef X
#define X(a, b) LOAD_R_BUILTIN(R_UNARY_OPS[b], #a);
  X_UNARY_OPS
#undef X
#define X(a, b) LOAD_R_BUILTIN(R_LOGIC2_OPS[b], #a);
  X_LOGIC2_OPS
#undef X

#define X(a, b) R_ARITH_OP_SYMS[b] = Rf_install(#a);
  X_ARITH_OPS
#undef X
#define X(a, b) R_REL_OP_SYMS[b] = Rf_install(#a);
  X_REL_OPS
#undef X
#define X(a, b) R_UNARY_OP_SYMS[b] = Rf_install(#a);
  X_UNARY_OPS
#undef X

  Rsh_NilValue = SXP_TO_VAL(R_NilValue);
  Rsh_UnboundValue = SXP_TO_VAL(Rsh_UnboundValue);
  LOAD_R_BUILTIN(NOT_OP, "!");
  DOTEXTERNAL2_SYM = Rf_install(".External2");

  RSH_CALL_TRAMPOLINE_SXP = Rf_mkString("Rsh_call_trampoline");
  R_PreserveObject(RSH_CALL_TRAMPOLINE_SXP);

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
