#include "R_ext/Error.h"
#include "Rinternals.h"
#include "runtime.h"

#ifdef RSH_PC
static Rsh_PerfCounters Rsh_GPC;

SEXP Rsh_pc_get(void) {
  u32 size = sizeof(Rsh_PerfCounters) / sizeof(u32);
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
  SET_STRING_ELT(names, i++, mkChar("r_primitive"));
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

  return R_NilValue;
}
