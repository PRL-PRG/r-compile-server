#include "bc2c/runtime.h"

#ifdef RSH_TESTS
#error "RSH_TESTS cannot be set"
#endif

#define X(a, b) NULL,
SEXP R_ARITH_OPS[] = {X_ARITH_OPS};
SEXP R_ARITH_OP_SYMS[] = {X_ARITH_OPS};
SEXP R_REL_OPS[] = {X_REL_OPS};
SEXP R_REL_OP_SYMS[] = {X_REL_OPS};

SEXP R_MATH1_OPS[] = {X_MATH1_OPS};
SEXP R_UNARY_OPS[] = {X_UNARY_OPS};
SEXP R_UNARY_OP_SYMS[] = {X_UNARY_OPS};
SEXP R_LOGIC2_OPS[] = {X_LOGIC2_OPS};
#undef X

Value Rsh_NilValue;
SEXP NOT_OP;
SEXP DOTEXTERNAL2_SYM;
SEXP RSH_CALL_TRAMPOLINE_SXP;

#include "bc2c/runtime_impl.h"
