#include "runtime.h"

#ifdef RSH_TESTS
#error "RSH_TESTS cannot be set"
#endif

#define X(a, b, c) NULL,
SEXP R_ARITH_OPS[] = {X_ARITH_OPS};
SEXP R_ARITH_OP_SYMS[] = {X_ARITH_OPS};
SEXP R_REL_OPS[] = {X_REL_OPS};
SEXP R_REL_OP_SYMS[] = {X_REL_OPS};

SEXP R_MATH1_OPS[] = {X_MATH1_OPS};
SEXP R_UNARY_OPS[] = {X_UNARY_OPS};
SEXP R_UNARY_OP_SYMS[] = {X_UNARY_OPS};
SEXP R_LOGIC2_OPS[] = {X_LOGIC2_OPS};

SEXP R_MATH1_EXT_OPS[] = {X_MATH1_EXT_OPS};
SEXP R_MATH1_EXT_SYMS[] = {X_MATH1_EXT_OPS};
Rsh_Math1Fun R_MATH1_EXT_FUNS[] = {X_MATH1_EXT_OPS};
#undef X

// FIXME: remove
SEXP NOT_OP;
SEXP LOG_OP;

#include "runtime_impl.h"
