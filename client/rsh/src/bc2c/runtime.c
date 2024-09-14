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
#undef X

Value Rsh_NilValue;
Value Rsh_UnboundValue;
SEXP NOT_OP;
SEXP BC2C_CALL_TRAMPOLINE_SXP;

#include "runtime_impl.h"
