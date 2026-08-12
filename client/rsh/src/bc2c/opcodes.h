#pragma once

// THIS HEADER NEEDS TO BE A C-compatible HEADER

#define RSH

// MAKE SURE Rinternals.h is not listed! It is pulled in (together with
// gnur_symbols.h) by opcodes_internals.h, which must come first.
#include "opcodes_internals.h"
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <setjmp.h>
#include <string.h>

// INSTRUCTIONS
// ------------

#define Rsh_Pop(x)

#define Rsh_GetVar(stack, symbol, cell, rho)                                   \
  Rsh_get_var(GET_VAL_EX(stack, -1), symbol, cell, FALSE, rho)
#define Rsh_GetVarMissOk(stack, symbol, cell, rho)                             \
  Rsh_get_var(GET_VAL_EX(stack, -1), symbol, cell, TRUE, rho)
#define Rsh_DdVal(stack, symbol, cell, rho)                                    \
  Rsh_get_ddval(GET_VAL_EX(stack, -1), symbol, cell, FALSE, rho)
#define Rsh_DdValMissOk(stack, symbol, cell, rho)                              \
  Rsh_get_ddval(GET_VAL_EX(stack, -1), symbol, cell, TRUE, rho)

static ALWAYS_INLINE void Rsh_get_ddval(Value *res, SEXP symbol, BCell *cell,
                                        Rboolean keepmiss, SEXP rho) {
  RSH_PC_INC(getvar);

  R_Visible = TRUE;

  assert(cell != NULL);

  if (BCELL_TAG(*cell) != 0) {
    res->tag = BCELL_TAG(*cell);
    memcpy(&res->u, &CAR0(*cell), sizeof(res->u));
    return;
  }

  SEXP value = ddfindVar(symbol, rho);
  Rsh_do_get_var(res, symbol, value, keepmiss, rho);
}

static ALWAYS_INLINE void Rsh_get_var(Value *res, SEXP symbol, BCell *cell,
                                      Rboolean keepmiss, SEXP rho) {
  RSH_PC_INC(getvar);
  assert(*cell != NULL);

  R_Visible = TRUE;

  if (*cell == R_NilValue) {
    bcell_ensure_cached(symbol, rho, cell);
    //*cell = findVarLocInFrame(rho, symbol, NULL);
  }

  // Since the format of BCells and unboxed stack is the same,
  // we can directly assign the value no matter its type
  if (BCELL_TAG(*cell) != 0) {
    res->tag = BCELL_TAG(*cell);
    //*((BCellVal *)&(res->u)) = *((BCellVal *)&CAR0(cell));
    // memcpy does not throw warning and compiles in the same code
    static_assert(sizeof(res->u) == sizeof(CAR0(*cell)),
                  "BCellVal and Value union should be the same size");
    memcpy(&res->u, &CAR0(*cell), sizeof(res->u));
    return;
  }
  SEXP value = CAR0(*cell);

  if (TYPEOF(value) == PROMSXP && PROMISE_IS_EVALUATED(value)) {
    Rsh_evaluated_promise_to_value(res, value);
    return;
  }

  // Active bindings are set to R_NilValue by bcell_ensure_cached,
  // if cell was R_NilValue. They should never be cached.
  assert(!IS_ACTIVE_BINDING(*cell));
  if (*cell != R_NilValue) {
    switch (TYPEOF(value)) {
    default:
    case REALSXP:
    case INTSXP:
    case LGLSXP:
    case CPLXSXP:
    case STRSXP:
    case VECSXP:
    case RAWSXP:
      SET_SXP_VAL(res, value);
      return;
    case PROMSXP:
    case SYMSXP:
      break;
    }
  } else {
    // This is what remains of BINDING_VALUE/bcell_value that matters here.
    // 'value' would be set to R_UnboundValue and overwritten right after.
    assert(BCELL_TAG(*cell) != ISQSXP); // Custom ISQSXP not supported
    // value = R_GetVarLocValue(R_findVarLoc(symbol, rho));
    // TODO thorough check whether this is an equivalent to the version
    // commented above
    value = R_findVar(symbol, rho);
  }

  Rsh_do_get_var(res, symbol, value, keepmiss, rho);
}

static ALWAYS_INLINE void Rsh_SetVar(Value *stack, SEXP symbol, BCell *cell,
                                     SEXP rho) {
  Value value = *GET_VAL(-1);
  int tag = VAL_TAG(value);

  assert(cell != NULL);

  // Fast path for updating already cached variables
  if (LIKELY(!BINDING_IS_LOCKED(*cell) && *cell != R_NilValue)) {
    // Active bindings should never be cached (?)
    assert(!IS_ACTIVE_BINDING(*cell));
    // assert(*cell == R_findVarLocInFrame(rho, symbol).cell);
    assert(!BCELL_IS_UNBOUND(*cell));
    assert(TAG(*cell) == symbol);
    SEXP val_sxp;
    switch (tag) {
    case 0: {
      // Value is a SEXP, we need to update REFCOUNT for new values
      val_sxp = VAL_SXP(value);
      if (!BCELL_TAG(*cell) && CAR0(*cell) == val_sxp) {
        return;
      }
      break;
    }
    default: {
      // Value is unboxed, so we can directly update the cell (fastest case)
      if (tag != BCELL_TAG(*cell)) {
        BCELL_INIT(*cell, tag);
      }

      static_assert(sizeof(value.u) == sizeof(CAR0(*cell)),
                    "BCellVal and Value union should be the same size");
      memcpy(&((*cell)->u.listsxp.carval), &value.u, sizeof(value.u));
      return;
    }
#ifndef UNBOXED_ISQ_CELL
    case ISQSXP: {
      // Unfortunately, GNU R runtime does not support ISQSXP in BCells
      Rsh_isqinfo_t isqinfo = VAL_ISQ(value);
      val_sxp = R_compact_intrange(isqinfo.n1, isqinfo.n2);
      break;
    }
#endif
    }
    BCELL_SET(*cell, val_sxp);
    SET_MISSING(*cell, 0);
    return;
  }

  // Slow path (initial assignment and rare binding behaviour)
  SEXP define_val;
  switch (tag) {
  case 0: {
    define_val = VAL_SXP(value);
    INCREMENT_NAMED(define_val);
    break;
  }
  default: {
    // Don't convert to SEXP if the value is unboxed,
    // we can directly store it in the cell later.
    define_val = R_NilValue;
    break;
  }
#ifndef UNBOXED_ISQ_CELL
  case ISQSXP: {
    Rsh_isqinfo_t isqinfo = VAL_ISQ(value);
    define_val = R_compact_intrange(isqinfo.n1, isqinfo.n2);
    tag = 0;
    break;
  }
#endif
  }
  Rf_defineVar(symbol, define_val, rho);

  if (LIKELY(*cell == R_NilValue || BCELL_IS_UNBOUND(*cell))) {
    // Path for the first assignment (happens once)
    // and for case the variable was unassigned (rare)

    assert(rho != R_BaseEnv && rho != R_BaseNamespace &&
           !IS_USER_DATABASE(rho));

    bcell_ensure_cached(symbol, rho, cell);
    //*cell = findVarLocInFrame(rho, symbol, NULL);

    // Save the unboxed value (not done in GNU R)
    // may be good for variables only assigned once?
    if (tag != 0) {
      assert(*cell != R_NilValue);
      assert(TAG(*cell) == symbol);

      assert(!MISSING(*cell));
      BCELL_TAG_SET(*cell, tag);
      memcpy(&((*cell)->u.listsxp.carval), &value.u, sizeof(value.u));
    } else {
#ifdef RSH_AGGRESSIVE_UNBOXING
      BCELL_INLINE(*cell, VAL_SXP(value));
#endif
    }
  } else {
    // Path for locked and active bindings (very rare)
    assert(!IS_SIMPLE_BINDING(*cell));

    SEXP value_sxp = val_as_sexp(value);
    INCREMENT_NAMED(value_sxp);

    // No need to PROTECT, will be done in defineVar
    Rf_defineVar(symbol, value_sxp, rho);
  }
}

static INLINE void Rsh_SetVar2(Value *stack, SEXP symbol, SEXP rho) {
  Value *r0 = GET_VAL(-1);
  SEXP value = val_as_sexp(*r0);
  INCREMENT_NAMED(value);
  Rf_setVar(symbol, value, ENCLOS(rho));
}

#ifdef RCP_STENCILS
// A stencil has no enclosing C function to hang the saved pointers on, so the
// BCProt bracket would have to live in the RCP prologue/epilogue instead. Left
// as it was -- RCP is not what this fixes.
static INLINE NODISCARD Value Rsh_Return(Value *stack) { return *(stack - 1); }
#else
static INLINE NODISCARD Value Rsh_Return(Value *stack, RshBCProt bcprot) {
  Value *s = stack - 1;
  // Read the result before restoring, as `bcEval` does at `done:`: the restore
  // decrements links on the slots this frame committed, `s` among them.
  Value ret = *s;
  Rsh_bcprot_restore(bcprot);
  R_BCNodeStackTop = s;
  return ret;
}
#endif

#define Rsh_ReturnJmp(/* Value* */ stack, rho)                                 \
  do {                                                                         \
    Value *__stack__ = (stack - 1);                                            \
    SEXP __ret__ = val_as_sexp(*__stack__);                                    \
    R_BCNodeStackTop = __stack__;                                              \
    Rf_findcontext(CTXT_BROWSER | CTXT_FUNCTION, rho, __ret__);                \
  } while (0);

static INLINE void Rsh_GetBuiltin(Value *stack, SEXP symbol) {
  Value *call = GET_VAL(-3);
  Value *args_head = GET_VAL(-2);
  Value *args_tail = GET_VAL(-1);
  SEXP value = SYMVALUE(symbol);

  if (TYPEOF(value) == PROMSXP && !PROMISE_IS_EVALUATED(value)) {
    forcePromise(value);
    value = PRVALUE(value);
  }

  if (TYPEOF(value) != BUILTINSXP) {
    value = R_Primitive(CHAR(PRINTNAME(symbol)));
    if (TYPEOF(value) != BUILTINSXP) {
      Rf_error("\"%s\" is not a BUILTIN function", CHAR(PRINTNAME(symbol)));
    }
    RSH_PC_INC(r_primitive);
  }

  SET_SXP_VAL(call, value);

#ifdef RSH_RTRACE_SUPPORT
  if (RTRACE(value)) {
    Rprintf("trace: ");
    PrintValue(symbol);
  }
#else
  assert(!RTRACE(value) && "Tracing is not supported in this build of Rsh");
#endif

  INIT_CALL_FRAME(args_head, args_tail);
}

static INLINE void Rsh_GetFun(Value *stack, SEXP symbol, SEXP rho) {
  Value *fun = GET_VAL(-3);
  Value *args_head = GET_VAL(-2);
  Value *args_tail = GET_VAL(-1);
  // TODO: optimize with bcell
  SEXP fun_sxp = Rf_findFun(symbol, rho);
  SET_SXP_VAL(fun, fun_sxp);
  INIT_CALL_FRAME(args_head, args_tail);
#ifdef RSH_RTRACE_SUPPORT
  if (RTRACE(fun_sxp)) {
    Rprintf("trace: ");
    PrintValue(symbol);
  }
#else
  assert(!RTRACE(fun_sxp) && "Tracing is not supported in this build of Rsh");
#endif
}

#define Rsh_PushArg(stack)                                                     \
  do {                                                                         \
    Value *__s__ = (stack);                                                    \
    RSH_PUSH_ARG(GET_VAL_EX(__s__, -3), GET_VAL_EX(__s__, -2),                 \
                 val_as_sexp(*GET_VAL_EX(__s__, -1)));                         \
  } while (0)

#define Rsh_PushConstArg(stack, val)                                           \
  do {                                                                         \
    Value *__s__ = (stack);                                                    \
    RSH_PUSH_ARG(GET_VAL_EX(__s__, -2), GET_VAL_EX(__s__, -1), (val));         \
  } while (0)

#define Rsh_pusharg_norefcount(stack, val)                                     \
  do {                                                                         \
    Value *__s__ = (stack);                                                    \
    assert(REFCNT((val)) == REFCNTMAX);                                        \
    RSH_LIST_APPEND_EX(GET_VAL_EX(__s__, -2), GET_VAL_EX(__s__, -1), (val),    \
                       FALSE, FALSE, FALSE);                                   \
  } while (0)

#define Rsh_PushNullArg(stack) Rsh_pusharg_norefcount(stack, R_NilValue)
#define Rsh_PushTrueArg(stack) Rsh_pusharg_norefcount(stack, R_TrueValue)
#define Rsh_PushFalseArg(stack) Rsh_pusharg_norefcount(stack, R_FalseValue)

static INLINE void Rsh_LdTrue(Value *stack) {
  R_Visible = TRUE;
  SET_LGL_VAL(GET_VAL_EX(stack, -1), TRUE);
}
static INLINE void Rsh_LdFalse(Value *stack) {
  R_Visible = TRUE;
  SET_LGL_VAL(GET_VAL_EX(stack, -1), FALSE);
}
static INLINE void Rsh_LdNull(Value *stack) {
  R_Visible = TRUE;
  SET_SXP_VAL(GET_VAL_EX(stack, -1), R_NilValue);
}

#define Rsh_LdConstInt(stack, s)                                               \
  do {                                                                         \
    R_Visible = TRUE;                                                          \
    SET_INT_VAL(GET_VAL_EX(stack, -1), SCALAR_IVAL(s));                        \
  } while (0);
#define Rsh_LdConstDbl(stack, s)                                               \
  do {                                                                         \
    R_Visible = TRUE;                                                          \
    SET_DBL_VAL(GET_VAL_EX(stack, -1), SCALAR_DVAL(s));                        \
  } while (0);
#define Rsh_LdConstLgl(stack, s)                                               \
  do {                                                                         \
    R_Visible = TRUE;                                                          \
    SET_LGL_VAL(GET_VAL_EX(stack, -1), SCALAR_LVAL(s));                        \
  } while (0);
#define Rsh_LdConst(stack, s)                                                  \
  do {                                                                         \
    R_Visible = TRUE;                                                          \
    SET_SXP_VAL(GET_VAL_EX(stack, -1), s);                                     \
  } while (0);

static INLINE void Rsh_finish_inline_closure_call(SEXP fun, SEXP args,
                                                  SEXP call, Value *unboxed_val,
                                                  RCNTXT *pcntxt, SEXP newrho) {
  Rf_endcontext(pcntxt);

  if (!VAL_IS_SXP(*unboxed_val)) {
#ifdef ADJUST_ENVIR_REFCNTS
    R_CleanupEnvir(newrho, R_NilValue);
    unpromiseArgs(args);
#endif
  } else {
    SEXP value = VAL_SXP(*unboxed_val);
#ifdef ADJUST_ENVIR_REFCNTS
    assert(!BNDCELL_TAG(call));
    Rboolean is_getter_call = (Rboolean)(CADR(call) == Rsh_TmpvalSym &&
                                         !R_isReplaceSymbol(CAR0(call)));
    R_CleanupEnvir(newrho, value);
    if (is_getter_call && MAYBE_REFERENCED(value))
      value = Rf_shallow_duplicate(value);
    unpromiseArgs(args);
#endif
    // TODO support tailcall here?
    SET_SXP_VAL(unboxed_val, value);
  }
  UNPROTECT_SAFE(newrho);
}

static INLINE void Rsh_Call(Value *stack, SEXP call, SEXP rho) {
  // stack:
  //  fun
  //  args_head
  //  args_tail
  //  -> top
  SEXP fun = VAL_SXP(*GET_VAL(-3));
  SEXP args = VAL_SXP(*GET_VAL(-2));
  Value *res = GET_VAL(-3);
  int flag;

  switch (TYPEOF(fun)) {
  case BUILTINSXP:
    args = Rsh_builtin_call_args(args);
    checkForMissings(args, call);
    flag = PRIMPRINT(fun);
    R_Visible = (Rboolean)(flag != 1);
    SET_VAL(res, PRIMFUN(fun)(call, fun, args, rho));
    if (flag < 2) {
      R_Visible = (Rboolean)(flag != 1);
    }
    break;
  case SPECIALSXP:
    flag = PRIMPRINT(fun);
    R_Visible = (Rboolean)(flag != 1);
    SET_VAL(res, PRIMFUN(fun)(call, fun, markSpecialArgs(CDR(call)), rho));
    if (flag < 2) {
      R_Visible = (Rboolean)(flag != 1);
    }
    break;
  case CLOSXP: {
    args = Rsh_closure_call_args(args);
    if (RSH_INLINE_CLOSURE_CALL_OK(fun, rho)) {
      RSH_CHECK_SIGINT();
      SEXP newrho = make_applyClosure_env(call, fun, args, rho, R_NilValue);
      PROTECT(newrho);
      RCNTXT pcntxt;
      Rf_begincontext(&pcntxt, CTXT_RETURN, call, newrho, rho, args, fun);
      int current_depth = R_EvalDepth;
      INCREMENT_EVAL_DEPTH();
      R_Visible = TRUE;
      Rsh_inline_call(&pcntxt, res, BODY(fun), newrho);
      R_EvalDepth = current_depth;
      Rsh_finish_inline_closure_call(R_NilValue, R_NilValue, R_NilValue, res,
                                     &pcntxt, newrho);
      break;
    }

    // slow path
    SEXP value = Rf_applyClosure(call, fun, args, rho, R_NilValue, TRUE);
    SET_VAL(res, value);
    break;
  }
  default:
    Rf_error("bad function");
  }
}

static INLINE void Rsh_CallBuiltin(Value *stack, SEXP call, SEXP rho) {
  // stack:
  //  fun
  //  args_head
  //  args_tail
  //  -> top
  SEXP fun = VAL_SXP(*GET_VAL(-3));
  SEXP args = Rsh_builtin_call_args(VAL_SXP(*GET_VAL(-2)));
  const void *vmax = vmaxget();
  assert(TYPEOF(fun) == BUILTINSXP); // Expected a BUILTIN function
  int flag = PRIMPRINT(fun);
  R_Visible = (Rboolean)(flag != 1);
  // Profiling not supported in Rsh, skipping the profiling branch
  // TODO support profiling?
  SEXP value = PRIMFUN(fun)(call, fun, args, rho);
  if (flag < 2) {
    R_Visible = (Rboolean)(flag != 1);
  }
  vmaxset(vmax);

  SET_VAL_N(-3, value);
}

static INLINE NODISCARD Rboolean Rsh_BrIfNot(Value *stack, SEXP call) {
  Value value = *GET_VAL(-1);
  if (VAL_IS_LGL_NOT_NA(value)) {
    return (Rboolean)!VAL_INT(value);
  } else if (VAL_IS_INT_NOT_NA(value)) {
    return (Rboolean)(VAL_INT(value) == 0);
  } else if (VAL_IS_DBL_NOT_NAN(value)) {
    return (Rboolean)(VAL_DBL(value) == 0.0);
  }

  SEXP value_sxp;
  if (VAL_IS_SXP(value)) {
    value_sxp = VAL_SXP(value);
    if (IS_SCALAR(value_sxp, LGLSXP)) {
      int lval = LOGICAL0(value_sxp)[0];
      if (lval != NA_LOGICAL) {
        return (Rboolean)!lval;
      }
    }
  } else {
    // We can only get here if value is NAN, which throws an error
    value_sxp = R_LogicalNAValue;
  }

  Rboolean ans = asLogicalNoNA(value_sxp, call);
  return (Rboolean)!ans;
}

static ALWAYS_INLINE void Rsh_arith(Value *stack, SEXP call, RshArithOp op,
                                    SEXP rho, SEXP r_op, SEXP r_op_sym) {
  Value *res = GET_VAL(-2);
  Value *lhs_ptr = GET_VAL(-2);
  Value *rhs_ptr = GET_VAL(-1);
  double res_dbl;

  Value lhs = *lhs_ptr;
  val_unbox_inplace(&lhs, 1, 1, 1, 0);
  Value rhs = *rhs_ptr;
  val_unbox_inplace(&rhs, 1, 1, 1, 0);

  if (VAL_IS_DBL(lhs)) {
    double lhs_dbl = VAL_DBL(lhs);
    if (VAL_IS_DBL(rhs)) {
      DO_ARITH(op, lhs_dbl, VAL_DBL(rhs), &res_dbl);
      SET_DBL_VAL(res, res_dbl);
      R_Visible = TRUE;
      return;
    } else if (VAL_IS_INT_NOT_NA(rhs)) {
      DO_ARITH(op, lhs_dbl, VAL_INT(rhs), &res_dbl);
      SET_DBL_VAL(res, res_dbl);
      R_Visible = TRUE;
      return;
    }
  }

  if (VAL_IS_INT_NOT_NA(lhs)) {
    int lhs_int = VAL_INT(lhs);

    if (VAL_IS_DBL(rhs)) {
      DO_ARITH(op, lhs_int, VAL_DBL(rhs), &res_dbl);
      SET_DBL_VAL(res, res_dbl);
      R_Visible = TRUE;
      return;
    } else if (VAL_IS_INT_NOT_NA(rhs)) {
      if (op == DIV_OP || op == EXPT_OP) {
        DO_ARITH(op, (double)lhs_int, (double)VAL_INT(rhs), &res_dbl);
        SET_DBL_VAL(res, res_dbl);
        R_Visible = TRUE;
        return;
      } else {
        int res_int = 0;
        DO_ARITH(op, lhs_int, VAL_INT(rhs), &res_int);
        SET_INT_VAL(res, res_int);
        R_Visible = TRUE;
        return;
      }
    }
  }

  // Slow path!
  RSH_PC_INC(slow_arith);
  DO_BINARY_BUILTIN(arith2, call, r_op, r_op_sym, *lhs_ptr, *rhs_ptr, rho, res);
  R_Visible = TRUE;
}

#define X(a, b, c)                                                             \
  static ALWAYS_INLINE void Rsh_##c(Value *stack, SEXP call, SEXP rho) {       \
    assert(RSH_ARITH_OPS(b) == R_Primitive(#a));                               \
    assert(RSH_ARITH_OP_SYMS(b) == Rf_install(#a));                            \
    Rsh_arith(stack, call, b, rho, RSH_ARITH_OPS(b), RSH_ARITH_OP_SYMS(b));    \
  }
X_ARITH_OPS
#undef X

static ALWAYS_INLINE void Rsh_relop(Value *stack, SEXP call, RshRelOp op,
                                    SEXP rho, SEXP r_op, SEXP r_op_sym) {
  Value *res = GET_VAL(-2);
  Value *lhs_ptr = GET_VAL(-2);
  Value *rhs_ptr = GET_VAL(-1);

  Value lhs = *lhs_ptr;
  val_unbox_inplace(&lhs, 1, 1, 1, 0);
  Value rhs = *rhs_ptr;
  val_unbox_inplace(&rhs, 1, 1, 1, 0);

  if (VAL_IS_DBL_NOT_NAN(lhs)) {
    double lhs_dbl = VAL_DBL(lhs);
    if (VAL_IS_DBL_NOT_NAN(rhs)) {
      DO_RELOP(op, lhs_dbl, VAL_DBL(rhs), res);
      R_Visible = TRUE;
      return;
    } else if (VAL_IS_INT_NOT_NA(rhs)) {
      DO_RELOP(op, lhs_dbl, VAL_INT(rhs), res);
      R_Visible = TRUE;
      return;
    }
  }

  if (VAL_IS_INT_NOT_NA(lhs)) {
    int lhs_int = VAL_INT(lhs);

    if (VAL_IS_DBL_NOT_NAN(rhs)) {
      DO_RELOP(op, lhs_int, VAL_DBL(rhs), res);
      R_Visible = TRUE;
      return;
    } else if (VAL_IS_INT_NOT_NA(rhs)) {
      DO_RELOP(op, lhs_int, VAL_INT(rhs), res);
      R_Visible = TRUE;
      return;
    }
  }

  // Slow path!
  RSH_PC_INC(slow_relop);
  DO_BINARY_BUILTIN(relop, call, r_op, r_op_sym, *lhs_ptr, *rhs_ptr, rho, res);
  R_Visible = TRUE;
}

#define X(a, b, c)                                                             \
  static ALWAYS_INLINE void Rsh_##c(Value *stack, SEXP call, SEXP rho) {       \
    assert(RSH_REL_OPS(b) == R_Primitive(#a));                                 \
    assert(RSH_REL_OP_SYMS(b) == Rf_install(#a));                              \
    Rsh_relop(stack, call, b, rho, RSH_REL_OPS(b), RSH_REL_OP_SYMS(b));        \
  }
X_REL_OPS
#undef X

static INLINE void Rsh_math1(Value *stack, SEXP call, RshMath1Op op, SEXP rho,
                             SEXP r_op) {
  Value *res = GET_VAL(-1);
  Value *arg_ptr = GET_VAL(-1);
  Value arg = *arg_ptr;
  val_unbox_inplace(&arg, 1, 1, 1, 0);

  if (VAL_IS_DBL(arg)) {
    double d = VAL_DBL(arg);
    d = op == SQRT_OP ? sqrt(d) : exp(d);

    if (ISNAN(d)) {
      if (ISNAN(VAL_DBL(arg))) {
        d = VAL_DBL(arg);
      } else {
        Rf_warningcall(call, R_MSG_NA);
      }
    }

    SET_DBL_VAL(res, d);
  } else if (VAL_IS_INT_NOT_NA(arg)) {
    double d = (double)VAL_INT(arg);
    d = op == SQRT_OP ? sqrt(d) : exp(d);

    if (ISNAN(d)) {
      Rf_warningcall(call, R_MSG_NA);
    }

    SET_DBL_VAL(res, d);
  } else {
    // Slow path!
    RSH_PC_INC(slow_math1);
    DO_BUILTIN1(do_math1, call, r_op, val_as_sexp(*arg_ptr), rho, res);
  }
  R_Visible = TRUE;
}

#define X(a, b, c)                                                             \
  static INLINE void Rsh_##c(Value *stack, SEXP call, SEXP rho) {              \
    assert(RSH_MATH1_OPS(b) == R_Primitive(#a));                               \
    Rsh_math1(stack, call, b, rho, RSH_MATH1_OPS(b));                          \
  }
X_MATH1_OPS
#undef X

static INLINE void Rsh_unary(Value *stack, SEXP call, RshUnaryOp op, SEXP rho,
                             SEXP r_op, SEXP r_op_sym) {
  Value *res = GET_VAL(-1);
  Value *arg_ptr = GET_VAL(-1);
  Value arg = *arg_ptr;
  val_unbox_inplace(&arg, 1, 1, 1, 0);

  if (VAL_IS_DBL(arg)) {
    if (op == UMINUS_OP) {
      double d = VAL_DBL(arg);
      double e = -d;
      SET_DBL_VAL(res, e);
    }
  } else if (VAL_IS_INT_NOT_NA(arg)) {
    if (op == UMINUS_OP) {
      int i = VAL_INT(arg);
      int j = -i;
      SET_INT_VAL(res, j);
    }
  } else {
    // Slow path!
    RSH_PC_INC(slow_unary);
    SEXP s = arith1(call, r_op, r_op_sym, val_as_sexp(*arg_ptr), rho);
    SET_VAL(res, s);
  }

  R_Visible = TRUE;
}

#define X(a, b, c)                                                             \
  static INLINE void Rsh_##c(Value *stack, SEXP call, SEXP rho) {              \
    assert(RSH_UNARY_OPS(b) == R_Primitive(#a));                               \
    assert(RSH_UNARY_OP_SYMS(b) == Rf_install(#a));                            \
    Rsh_unary(stack, call, b, rho, RSH_UNARY_OPS(b), RSH_UNARY_OP_SYMS(b));    \
  }
X_UNARY_OPS
#undef X

static INLINE void Rsh_Not(Value *stack, SEXP call, SEXP rho) {
  Value *arg_ptr = GET_VAL(-1);
  Value *res = GET_VAL(-1);
  Value arg = *arg_ptr;
  val_unbox_inplace(&arg, 1, 0, 1, 1);

  R_Visible = TRUE;

  if (VAL_IS_LGL_NOT_NA(arg) || VAL_IS_INT_NOT_NA(arg)) {
    SET_LGL_VAL(res, VAL_INT(arg) ? FALSE : TRUE);
  } else {
    // Slow path!
    DO_BUILTIN1(do_logic, call, NOT_OP, val_as_sexp(*arg_ptr), rho, res);
    assert(R_Visible == TRUE);
  }
}

static INLINE void Rsh_logic(Value *stack, SEXP call, RshLogic2Op op, SEXP rho,
                             SEXP r_op) {
  Value *res = GET_VAL(-2);
  Value lhs = *GET_VAL(-2);
  Value rhs = *GET_VAL(-1);
  // TODO: not optimized
  // Slow path!
  DO_BUILTIN2(do_logic, call, r_op, lhs, rhs, rho, res);
  R_Visible = TRUE;
}

#define X(a, b, c)                                                             \
  static INLINE void Rsh_##c(Value *stack, SEXP call, SEXP rho) {              \
    assert(RSH_LOGIC2_OPS(b) == R_Primitive(#a));                              \
    Rsh_logic(stack, call, b, rho, RSH_LOGIC2_OPS(b));                         \
  }
X_LOGIC2_OPS
#undef X

// GNU-R reads a JIT body's constant pool as `VECTOR_ELT(EXTPTR_PROT(body), 0)` (`RSH_JIT_CONSTS`,
// and it rejects a `prot` that isn't a non-empty `VECSXP` with "missing constant pool"), so the
// pool has to be wrapped in a one-element list rather than being the `prot` itself. Storing it
// bare silently hands the compiled body the pool's *first constant* instead.
static INLINE SEXP Rsh_closure_body(Rsh_closure fun_ptr, SEXP c_cp) {
  SEXP prot = PROTECT(Rf_allocVector(VECSXP, 1));
  SET_VECTOR_ELT(prot, 0, c_cp);
  SEXP body = R_MakeExternalPtr(*(void **)&fun_ptr, Rsh_ClosureBodyTag, prot);
  UNPROTECT(1);
  return body;
}

static INLINE void Rsh_MakeClosure(Value *stack, SEXP mkclos_arg,
                                   Rsh_closure fun_ptr, SEXP c_cp, SEXP rho) {
  Value *res = GET_VAL(-1);

  assert(!ALTREP(mkclos_arg)); // This is never generated by the compiler
  SEXP forms = VECTOR_ELT_0(mkclos_arg, 0);

#ifdef RCP_STENCILS
  // In RCP, we store/replace the body directly in the constant pool
  SEXP body = VECTOR_ELT_0(mkclos_arg, 1);
#else
  SEXP body = Rsh_closure_body(fun_ptr, c_cp);
  SET_SXP_VAL(res, body); // To protect
#endif

#ifdef NDEBUG
  SEXP closure = Rf_mkCLOSXP(forms, body, rho);
#else
  SEXP closure = R_mkClosure(forms, body, rho);
#endif
  SET_SXP_VAL(res, closure);

/* The LENGTH check below allows for byte code object created
     by older versions of the compiler that did not record a
     source attribute. */
#ifdef RSH_LEGACY_COMPILER_SUPPORT
  if (STDVEC_LENGTH(mkclos_arg) > 2) {
    SEXP srcref = VECTOR_ELT_0(mkclos_arg, 2);
    if (TYPEOF(srcref) != NILSXP)
      // FIXME: expose R_SrcrefSymbol
      Rf_setAttrib(closure, Rf_install("srcref"), srcref);
  }
#endif

  R_Visible = TRUE;
}

static INLINE void Rsh_CheckFun(Value *stack) {
  Value *fun = GET_VAL(-3);
  Value *args_head = GET_VAL(-2);
  Value *args_tail = GET_VAL(-1);

  int is_fun = FALSE;

  if (VAL_IS_SXP(*fun)) {
    SEXP fun_sxp = VAL_SXP(*fun);
    is_fun = TYPEOF(fun_sxp) == CLOSXP || TYPEOF(fun_sxp) == BUILTINSXP ||
             TYPEOF(fun_sxp) == SPECIALSXP;
  }

  if (!is_fun) {
    Rf_error("attempt to apply non-function");
  }

  INIT_CALL_FRAME(args_head, args_tail);
}

static INLINE void Rsh_do_makeprom(Value *stack, SEXP code, SEXP rho,
                                   int code_type) {
  Value *fun = GET_VAL(-3);
  Value *args_head = GET_VAL(-2);
  Value *args_tail = GET_VAL(-1);

  switch (TYPEOF(VAL_SXP(*fun))) {
  case CLOSXP: {
    SEXP value = Rf_mkPROMISE(code, rho);
    RSH_PUSH_ARG(args_head, args_tail, value);
    break;
  }
  case BUILTINSXP:
    switch (code_type) {
    case EXTPTRSXP: {
      assert(RSH_IS_CLOSURE_BODY(code));
      SEXP value = rshEval(code, rho);
      RSH_PUSH_ARG(args_head, args_tail, value);
      break;
    }
    case BCODESXP: {
      SEXP value = bcEval(code, rho);
      RSH_PUSH_ARG(args_head, args_tail, value);
      break;
    }
    default: {
      /* uncommon but possible, the compiler may decide not
      to compile an argument expression */
      SEXP value = Rf_eval(code, rho);
      RSH_PUSH_ARG(args_head, args_tail, value);
      break;
    }
    }
    break;
  case SPECIALSXP:
    break;
  default:
    UNREACHABLE(); // Compiler can never generate this
  }
}
// `RCP` and not `RCP_STENCILS`: this calls `fun_ptr(rho, c_cp)`, which only typechecks with the
// non-RCP `Rsh_closure`, so it can't exist at all when `Rinternals.h` is the RCP one. The BC2C JIT
// and the copy-and-patch variant of GNU-R are mutually exclusive anyway: that R's `rshEval` runs
// copy-and-patched code, not a BC2C closure pointer.
#ifndef RCP
// FIXME: document
static INLINE void Rsh_MakeProm2(Value *stack, Rsh_closure fun_ptr, SEXP c_cp,
                                 SEXP rho) {
  Value *fun = GET_VAL(-3);
  Value *args_head = GET_VAL(-2);
  Value *args_tail = GET_VAL(-1);

  switch (TYPEOF(VAL_SXP(*fun))) {
  case CLOSXP: {
    SEXP code = PROTECT(Rsh_closure_body(fun_ptr, c_cp));
    SEXP value = Rf_mkPROMISE(code, rho);
    RSH_PUSH_ARG(args_head, args_tail, value);
    UNPROTECT(1);
    break;
  }
  case BUILTINSXP: {
    SEXP value = val_as_sexp(fun_ptr(rho, c_cp));
    RSH_PUSH_ARG(args_head, args_tail, value);
    break;
  }
  case SPECIALSXP:
    break;
  default:
    UNREACHABLE(); // Compiler can never generate this
  }
}
#endif
static INLINE void Rsh_MakeProm(Value *stack, SEXP code, SEXP rho) {
  return Rsh_do_makeprom(stack, code, rho, TYPEOF(code));
}

// Call of `x$symbol`
static INLINE void Rsh_Dollar(Value *stack, SEXP call, SEXP symbol, SEXP rho) {
  Value *x_val = GET_VAL(-1);
  SEXP value_sxp;
  SEXP x_sxp;
  int dispatched = FALSE;

  if (VAL_IS_SXP(*x_val)) {
    x_sxp = VAL_SXP(*x_val);
    if (isObject(x_sxp)) {
      SEXP ncall = PROTECT(Rf_duplicate(call));
      SETCAR(CDDR(ncall), Rf_ScalarString(PRINTNAME(symbol)));
      dispatched = tryDispatch("$", ncall, x_sxp, rho, &value_sxp);
      UNPROTECT(1);
    }
  } else {
    x_sxp = val_as_sexp(*x_val);
  }

  if (!dispatched) {
    value_sxp = R_subset3_dflt(x_sxp, PRINTNAME(symbol), call);
  }

  R_Visible = TRUE;
  SET_VAL(x_val, value_sxp);
}

// Call of `x$symbol <- rhs`
static INLINE void Rsh_DollarGets(Value *stack, SEXP call, SEXP symbol,
                                  SEXP rho) {
  SEXP value_sxp;
  Value *x_val = GET_VAL(-2);
  SEXP x_sxp;
  SEXP rhs_sxp = val_as_sexp(*GET_VAL(-1));
  int dispatched = FALSE;

  MARK_ASSIGNMENT_CALL(call);

  if (VAL_IS_SXP(*x_val)) {
    x_sxp = VAL_SXP(*x_val);
    if (MAYBE_SHARED(x_sxp)) {
      x_sxp = Rf_shallow_duplicate(x_sxp);
      SET_VAL_N(-2, x_sxp);
      ENSURE_NAMED(x_sxp);
    }

    if (isObject(x_sxp)) {
      SEXP ncall = PROTECT(Rf_duplicate(call));
      SETCAR(CDDR(ncall), Rf_ScalarString(PRINTNAME(symbol))); // TODO optimize
      SETCAR(CDDDR(ncall), rhs_sxp);
      dispatched = tryDispatch("$<-", ncall, x_sxp, rho, &value_sxp);
      UNPROTECT(1);
    }
  } else {
    x_sxp = val_as_sexp(*x_val);
  }

  if (!dispatched) {
    value_sxp = R_subassign3_dflt(call, x_sxp, symbol, rhs_sxp);
  }
  SET_VAL(x_val, value_sxp);
}

#define Rsh_StartSubsetN(stack, call, rho)                                     \
  Rsh_start_subset_dispatch_n("[", stack, call, rho)
#define Rsh_StartSubset2N(stack, call, rho)                                    \
  Rsh_start_subset_dispatch_n("[[", stack, call, rho)

static INLINE NODISCARD Rboolean Rsh_start_subset_dispatch_n(
    const char *generic, Value *stack, SEXP call, SEXP rho) {
  Value *value = GET_VAL(-1);
  SEXP value_sxp = val_as_sexp(*value);
  if (isObject(value_sxp) &&
      tryDispatch(generic, call, value_sxp, rho, &value_sxp)) {
    RSH_PC_INC(dispatched_subset);
    RSH_CHECK_SIGINT();
    SET_VAL(value, value_sxp);
    return TRUE;
  }

  return FALSE;
}

#define Rsh_StartSubset(stack, call, rho)                                      \
  Rsh_start_subset_dispatch("[", stack, call, rho)
#define Rsh_StartSubset2(stack, call, rho)                                     \
  Rsh_start_subset_dispatch("[[", stack, call, rho)

static INLINE NODISCARD Rboolean Rsh_start_subset_dispatch(const char *generic,
                                                           Value *stack,
                                                           SEXP call,
                                                           SEXP rho) {
  Value *value = GET_VAL(-4);
  Value *call_val = GET_VAL(-3);
  Value *args_head = GET_VAL(-2);
  Value *args_tail = GET_VAL(-1);

  if (UNLIKELY(VAL_IS_SXP(*value) && isObject(VAL_SXP(*value)) &&
               tryDispatch(generic, call, VAL_SXP(*value), rho,
                           &(value->u.sxpval)))) {
    RSH_PC_INC(dispatched_subset);
    RSH_CHECK_SIGINT();
    return TRUE;
  } else {
    SEXP arg = val_as_sexp(*value);
    RSH_INIT_PUSH_ARG(args_head, args_tail, arg);

    SET_SXP_VAL(call_val, call);

    assert(VAL_SXP(*args_tail) != R_NilValue);
    SEXP tag = TAG(CDR(call));
    if (tag != R_NilValue) {
      SET_TAG(VAL_SXP(*args_tail), Rf_CreateTag(tag));
    }

    // GNU-R keeps two distinct slots here: a function placeholder
    // (R_NilValue) at stack[-3] and the call expression at stack[-4].
    // We collapse them: stack[-3] holds the call (LANGSXP). The
    // DOMISSING/SETTAG/DODOTS opcodes that may run between STARTSUBSET
    // and DFLTSUBSET only branch on SPECIALSXP/BUILTINSXP, so LANGSXP
    // trips the same branches as GNU-R's NILSXP placeholder. The slot
    // is then consumed by Rsh_dflt_subset which reads call from -3.
    return FALSE;
  }
}

#define Rsh_VecSubset(stack, call, rho) Rsh_vec_subset(stack, call, FALSE, rho)
#define Rsh_VecSubset2(stack, call, rho) Rsh_vec_subset(stack, call, TRUE, rho)

// Need to benchmark which is faster (defined or not)
#define RSH_ENABLE_SUBSET_INT_PATH
static INLINE void Rsh_do_vec_subset(Value *stack, SEXP call, Rboolean subset2,
                                     SEXP rho) {
  Value *sx = GET_VAL(-2);
  Value *si = GET_VAL(-1);
  SEXP vec = val_as_sexp(*sx);

#if defined(RSH_ENABLE_SUBSET_INT_PATH)
  // fastest path for simple integer index
  if (VAL_TAG(*si) == INTSXP && (subset2 || FAST_VECELT_OK(vec))) {
    R_xlen_t i = VAL_INT(*si) - 1;
    DO_FAST_VECELT_THIN(vec, i, subset2, sx);
  }
#endif
  // fast path for all datatypes
  R_xlen_t i = as_index(*si) - 1;
  if ((subset2 || FAST_VECELT_OK(vec))) {
    DO_FAST_VECELT(vec, i, subset2, sx);
  }

  // slow path!
  RSH_PC_INC(slow_subset);
  SEXP args;
  args = CONS_NR(val_as_sexp(*si), R_NilValue);
  args = CONS_NR(vec, args);
  PROTECT(args);

  SEXP value;
  if (subset2) {
    value = do_subset2_dflt(call, Rsh_Subset2Sym, args, rho);
  } else {
    value = do_subset_dflt(call, Rsh_SubsetSym, args, rho);
  }

  UNPROTECT(1);

  SET_VAL(sx, value);
}

static INLINE void Rsh_vec_subset(Value *stack, SEXP call, Rboolean subset2,
                                  SEXP rho) {
  Rsh_do_vec_subset(stack, call, subset2, rho);
  R_Visible = TRUE;
}

#define Rsh_MatSubset(stack, call, rho) Rsh_mat_subset(stack, call, FALSE, rho)
#define Rsh_MatSubset2(stack, call, rho) Rsh_mat_subset(stack, call, TRUE, rho)

static INLINE void Rsh_do_mat_subset(Value *stack, SEXP call, Rboolean subset2,
                                     SEXP rho) {
  Value *sx = GET_VAL(-3);
  Value si = *GET_VAL(-2);
  Value sj = *GET_VAL(-1);

  SEXP mat = val_as_sexp(*sx);

  if (subset2 || FAST_VECELT_OK(mat)) {
    SEXP dim = Rsh_get_mat_dim_attr(mat);
    if (dim != R_NilValue) {
      R_xlen_t i = as_index(si);
      R_xlen_t j = as_index(sj);
      R_xlen_t nrow = INTEGER(dim)[0];
      R_xlen_t ncol = INTEGER(dim)[1];
      if (i > 0 && j > 0 && i <= nrow && j <= ncol) {
        R_xlen_t k = i - 1 + nrow * (j - 1);
        DO_FAST_VECELT(mat, k, subset2, sx);
      }
    }
  }

  // slow path!
  RSH_PC_INC(slow_subset);

  SEXP idx = val_as_sexp(si);
  SEXP jdx = val_as_sexp(sj);

  SEXP args;
  args = CONS_NR(jdx, R_NilValue);
  args = CONS_NR(idx, args);
  args = CONS_NR(mat, args);
  PROTECT(args);

  SEXP value;
  if (subset2) {
    value = do_subset2_dflt(call, Rsh_Subset2Sym, args, rho);
  } else {
    value = do_subset_dflt(call, Rsh_SubsetSym, args, rho);
  }
  UNPROTECT(1);
  SET_VAL(sx, value);
}

static INLINE void Rsh_mat_subset(Value *stack, SEXP call, Rboolean subset2,
                                  SEXP rho) {
  Rsh_do_mat_subset(stack, call, subset2, rho);
  R_Visible = TRUE;
}

static INLINE void Rsh_StartAssign(Value *stack, SEXP symbol, BCell *cell,
                                   SEXP rho) {
  Value *rhs = GET_VAL(-4);
  Value *lhs_cell = GET_VAL(-3);
  Value *lhs_val = GET_VAL(-2);
  Value *rhs_dup = GET_VAL(-1);

  // Must precede any mutation: this is what makes MAYBE_SHARED() below see
  // values live on the node stack as shared, so they get duplicated.
  INCLNK_stack_commit();
  assert((R_bcstack_t *)rhs >= R_BCProtTop);

  if (VAL_IS_SXP(*rhs)) {
    SEXP saverhs = VAL_SXP(*rhs);
    FIXUP_RHS_NAMED(saverhs);

    int refrhs = MAYBE_REFERENCED(saverhs);
    rhs->flags = refrhs;
    if (refrhs) {
      INCREMENT_REFCNT(saverhs);
    }
  }

  assert(cell != NULL);
  bcell_ensure_cached(symbol, rho, cell);
  SEXP value = bcell_value(*cell);
  R_varloc_t loc;
  if (value == R_UnboundValue || TYPEOF(value) == PROMSXP) {
    value = EnsureLocal(symbol, rho, &loc);
    if (loc.cell == NULL) {
      loc.cell = R_NilValue;
    }
  } else {
    loc.cell = *cell;
  }

  if (ASSIGNMENT_PENDING(loc.cell) || MAYBE_SHARED(value)) {
    value = Rf_shallow_duplicate(value);
  }
  SET_ASSIGNMENT_PENDING(loc.cell, TRUE);
  SET_SXP_VAL(lhs_cell, loc.cell);

  SET_SXP_VAL(lhs_val, value);
  *rhs_dup = *rhs;
}

static INLINE void Rsh_StartAssign2(Value *stack, SEXP symbol, SEXP rho) {
  Value *rhs = GET_VAL(-4);
  Value *lhs_cell = GET_VAL(-3);
  Value *lhs_val = GET_VAL(-2);
  Value *rhs_dup = GET_VAL(-1);

  INCLNK_stack_commit(); // see Rsh_StartAssign
  assert((R_bcstack_t *)rhs >= R_BCProtTop);

  // There is a bug in GNU R BC interpreter that is different
  // from AST interpeter: it sets the pending assignment flag
  // on a local cell, which can shadow the global cell we should
  // truly be looking at.

  BCell cell = findVarLoc(symbol, ENCLOS(rho));

  SEXP value_sxp;
  if (LIKELY(!BCELL_TAG(cell))) {
    SEXP value = bcell_value(cell);
    if (value == R_UnboundValue) {
      R_varloc_t loc;
      loc.cell = cell;
      value = R_GetVarLocValue(loc);
    }
    Rsh_do_get_var(lhs_val, symbol, value, FALSE, ENCLOS(rho));
    if (LIKELY(VAL_IS_SXP(*lhs_val))) {
      value_sxp = VAL_SXP(*lhs_val);
      if (ASSIGNMENT_PENDING(cell) || MAYBE_SHARED(value_sxp)) {
        value_sxp = Rf_shallow_duplicate(value_sxp);
      }
    } else {
      value_sxp = val_as_sexp(*lhs_val);
    }
  } else {
    bcell_expand(cell);
    value_sxp = CAR0(cell);
  }
  SET_SXP_VAL(lhs_val, value_sxp);

  SET_ASSIGNMENT_PENDING(cell, TRUE);
  SET_SXP_VAL(lhs_cell, cell);

  *rhs_dup = *rhs;
  if (VAL_IS_SXP(*rhs_dup)) {
    FIXUP_RHS_NAMED(VAL_SXP(*rhs_dup));
    INCREMENT_REFCNT(VAL_SXP(*rhs_dup));
  }
  // stack at the end:
  //         s3 - RHS value
  //         s2 - LHS cell
  //         s1 - LHS value
  //         s0 - RHS value
  // top -->
}

static INLINE void Rsh_EndAssign(Value *stack, SEXP symbol, BCell *cell_ptr,
                                 SEXP rho) {
  Value *rhs = GET_VAL(-3);
  BCell lhscell = VAL_SXP(*GET_VAL(-2));
  Value *val = GET_VAL(-1);

  SET_ASSIGNMENT_PENDING(lhscell, FALSE);

  BCell cell = bcell_ensure_cached(symbol, rho, cell_ptr);

  // Values should always be boxed here - all instructions produce boxed vectors
  assert(VAL_IS_SXP(*val));
  SEXP value_sxp = VAL_SXP(*val);

  if (UNLIKELY(ALTREP(value_sxp))) {
    SEXP v = try_assign_unwrap(value_sxp, symbol, rho, cell);
    val->u.sxpval = v;
    value_sxp = v;
    assert(VAL_IS_SXP(*val));
  }
  INCREMENT_NAMED(value_sxp);
  if (!bcell_set_value(cell, value_sxp)) {
    Rf_defineVar(symbol, value_sxp, rho);
  }

  if (VAL_IS_SXP(*rhs)) {
    SEXP saverhs = VAL_SXP(*rhs);
    INCREMENT_NAMED(saverhs);
    if (rhs->flags) {
      DECREMENT_REFCNT(saverhs);
    }
  }
}

static INLINE void Rsh_EndAssign2(Value *stack, SEXP symbol, SEXP rho) {
  Value *rhs = GET_VAL(-3);
  SEXP lhscell = VAL_SXP(*GET_VAL(-2));
  Value *val = GET_VAL(-1);

  SET_ASSIGNMENT_PENDING(lhscell, FALSE);

  assert(VAL_IS_SXP(*val));
  SEXP value_sxp = VAL_SXP(*val);
  INCREMENT_NAMED(value_sxp);

  // Write fast path: lhscell came from findVarLoc(ENCLOS(rho)) in
  // StartAssign2, so it's the cell Rf_setVar would update. bcell_set_value
  // succeeds for plain writable cells; for active/locked/unbound it returns
  // FALSE and we fall through to Rf_setVar, which invokes the active setter,
  // errors on locked bindings, or defineVar's into R_GlobalEnv as needed.
  if (!bcell_set_value(lhscell, value_sxp)) {
    Rf_setVar(symbol, value_sxp, ENCLOS(rho));
  }

  if (VAL_IS_SXP(*rhs)) {
    SEXP rhs_sxp = VAL_SXP(*rhs);
    INCREMENT_NAMED(rhs_sxp);
    DECREMENT_REFCNT(rhs_sxp);
  }
}

#define Rsh_StartSubassignN(stack, call, rho)                                  \
  Rsh_start_subassign_dispatch_n("[<-", stack, call, rho)
#define Rsh_StartSubassign2N(stack, call, rho)                                 \
  Rsh_start_subassign_dispatch_n("[[<-", stack, call, rho)

static INLINE NODISCARD Rboolean Rsh_start_subassign_dispatch_n(
    const char *generic, Value *stack, SEXP call, SEXP rho) {
  Value *lhs = GET_VAL(-2);
  Value *rhs = GET_VAL(-1);
  SEXP lhs_sxp = val_as_sexp(*lhs);

  if (isObject(lhs_sxp)) {
    MARK_ASSIGNMENT_CALL(call);
    SEXP rhs_sxp = val_as_sexp(*rhs);
    if (MAYBE_SHARED(lhs_sxp)) {
      lhs_sxp = Rf_shallow_duplicate(lhs_sxp);
      SET_SXP_VAL(lhs, lhs_sxp);
      ENSURE_NAMED(lhs_sxp);
    }

    SEXP value = NULL;
    if (tryAssignDispatch(generic, call, lhs_sxp, rhs_sxp, rho, &value)) {
      RSH_PC_INC(dispatched_subassign);
      RSH_CHECK_SIGINT();
      SET_SXP_VAL(lhs, value);
      return TRUE;
    }
  }

  return FALSE;
}

#define Rsh_VecSubassign(stack, call, rho)                                     \
  Rsh_vec_subassign(stack, call, FALSE, rho)
#define Rsh_VecSubassign2(stack, call, rho)                                    \
  Rsh_vec_subassign(stack, call, TRUE, rho)

static INLINE void Rsh_vec_subassign(Value *stack, SEXP call, Rboolean sub2,
                                     SEXP rho) {
  Value *sx = GET_VAL(-3);
  Value rhs = *GET_VAL(-2);
  Value i = *GET_VAL(-1);

  SEXP vec = val_as_sexp(*sx);

  if (MAYBE_SHARED(vec)) {
    vec = Rf_shallow_duplicate(vec);
    SET_SXP_VAL(sx, vec);
  }

  // Fast case - INT index and RHS is scalar of the right type
  if (VAL_TAG(rhs) && VAL_IS_INT(i) && VAL_TAG(rhs) == TYPEOF(vec)) {
    R_xlen_t idx = VAL_INT(i);
    if (idx > 0 && idx <= XLENGTH(vec)) {
      switch (TYPEOF(vec)) {
      case REALSXP:
        REAL(vec)[idx - 1] = VAL_DBL(rhs);
        SET_SXP_VAL(sx, vec);
        SETTER_CLEAR_NAMED(vec);
        return;
      case INTSXP:
        INTEGER(vec)[idx - 1] = VAL_INT(rhs);
        SET_SXP_VAL(sx, vec);
        SETTER_CLEAR_NAMED(vec);
        return;
      case LGLSXP:
        LOGICAL(vec)[idx - 1] = VAL_INT(rhs);
        SET_SXP_VAL(sx, vec);
        SETTER_CLEAR_NAMED(vec);
        return;
      default:
        UNREACHABLE();
      }
    }
  }
  R_xlen_t idx_i = as_index(i) - 1;
  DO_FAST_SETVECELT(sx, vec, idx_i, rhs, sub2);

  // slow path!
  RSH_PC_INC(slow_subassign);
  SEXP idx = val_as_sexp(i);
  SEXP value = val_as_sexp(rhs);

  SEXP args;
  args = CONS_NR(value, R_NilValue);
  SET_TAG(args, Rsh_ValueSym);
  args = CONS_NR(idx, args);
  args = CONS_NR(vec, args);
  PROTECT(args);

  MARK_ASSIGNMENT_CALL(call);
  if (sub2) {
    vec = do_subassign2_dflt(call, Rsh_Subassign2Sym, args, rho);
  } else {
    vec = do_subassign_dflt(call, Rsh_SubassignSym, args, rho);
  }
  UNPROTECT(1);

  SET_SXP_VAL(sx, vec);
}

#define Rsh_MatSubassign(stack, call, rho)                                     \
  Rsh_mat_subassign(stack, call, FALSE, rho)
#define Rsh_MatSubassign2(stack, call, rho)                                    \
  Rsh_mat_subassign(stack, call, TRUE, rho)

static INLINE void Rsh_mat_subassign(Value *stack, SEXP call,
                                     Rboolean subassign2, SEXP rho) {
  Value *sx = GET_VAL(-4);
  Value rhs = *GET_VAL(-3);
  Value si = *GET_VAL(-2);
  Value sj = *GET_VAL(-1);
  SEXP mat = val_as_sexp(*sx);

  if (MAYBE_SHARED(mat)) {
    mat = Rf_shallow_duplicate(mat);
    SET_SXP_VAL(sx, mat);
  }

  SEXP dim = Rsh_get_mat_dim_attr(mat);

  if (dim != R_NilValue) {
    R_xlen_t i = as_index(si);
    R_xlen_t j = as_index(sj);
    R_xlen_t nrow = INTEGER(dim)[0];
    R_xlen_t ncol = INTEGER(dim)[1];
    if (i > 0 && j > 0 && i <= nrow && j <= ncol) {
      R_xlen_t k = i - 1 + nrow * (j - 1);
      DO_FAST_SETVECELT(sx, mat, k, rhs, subassign2);
    }
  }

  // slow path!
  RSH_PC_INC(slow_subassign);

  SEXP value = val_as_sexp(rhs);
  SEXP idx = val_as_sexp(si);
  SEXP jdx = val_as_sexp(sj);

  SEXP args;
  args = CONS_NR(value, R_NilValue);
  SET_TAG(args, Rsh_ValueSym);
  args = CONS_NR(jdx, args);
  args = CONS_NR(idx, args);
  args = CONS_NR(mat, args);
  PROTECT(args);

  MARK_ASSIGNMENT_CALL(call);
  if (subassign2) {
    mat = do_subassign2_dflt(call, Rsh_Subassign2Sym, args, rho);
  } else {
    mat = do_subassign_dflt(call, Rsh_SubassignSym, args, rho);
  }
  UNPROTECT(1);

  SET_SXP_VAL(sx, mat);
}

static INLINE void Rsh_GetIntlBuiltin(Value *stack, SEXP symbol) {
  Value *call = GET_VAL(-3);
  Value *args_head = GET_VAL(-2);
  Value *args_tail = GET_VAL(-1);
  SEXP value = INTERNAL(symbol);

  assert(TYPEOF(value) == BUILTINSXP); // Compiler can never generate this
  // The only reason to check is for BC compiled for older R version where
  // some internal functions might be missing, but that should be already cought

  // if (TYPEOF(value) != BUILTINSXP) {
  //   Rf_error("there is no .Internal function '%s'", CHAR(PRINTNAME(symbol)));
  // }

  SET_SXP_VAL(call, value);
  INIT_CALL_FRAME(args_head, args_tail);
}

static INLINE void Rsh_SetTag(Value *stack, SEXP tag) {
  Value *fun = GET_VAL(-3);
  Value *args_tail = GET_VAL(-1);

  assert(tag != R_NilValue); // BC compiler never generates this

  // args_head is UNUSED
  if (LIKELY(TYPEOF(VAL_SXP(*fun)) != SPECIALSXP)) {
    SEXP val = VAL_SXP(*args_tail);
    assert(val != R_NilValue); // BC compiler never generates this
    SET_TAG(val, Rf_CreateTag(tag));
  }
}

static INLINE void Rsh_Invisible(Value *stack) { R_Visible = FALSE; }

static INLINE void Rsh_Visible(Value *stack) { R_Visible = TRUE; }

static INLINE void Rsh_SetterCall(Value *stack, SEXP call, SEXP vexpr,
                                  SEXP rho) {
  Value *lhs = GET_VAL(-5);
  Value rhs = *GET_VAL(-4);
  Value fun = *GET_VAL(-3);
  Value args_head = *GET_VAL(-2);
  Value args_tail = *GET_VAL(-1);

  SEXP lhs_sxp = VAL_SXP(*lhs);
  SEXP fun_sxp = VAL_SXP(fun);
  SEXP args = VAL_SXP(args_head);

  SEXP value;

  MARK_ASSIGNMENT_CALL(call);
  if (MAYBE_SHARED(lhs_sxp)) {
    lhs_sxp = Rf_shallow_duplicate(lhs_sxp);
    SET_SXP_VAL(lhs, lhs_sxp);
    ENSURE_NAMED(lhs_sxp);
  }

  SEXP rhs_sxp = val_as_sexp(rhs);

  switch (TYPEOF(fun_sxp)) {
  case BUILTINSXP:
    // append RHS top arguments with value tag
    RSH_PUSH_ARG(&args_head, &args_tail, rhs_sxp);
    RSH_CALL_ARGS_DECREMENT_LINKS(args);
    SET_TAG(VAL_SXP(args_tail), R_valueSym);
    // replace first argument with LHS value
    SETCAR(args, lhs_sxp);
    // call the builtin
    checkForMissings(args, call);
    value = PRIMFUN(fun_sxp)(call, fun_sxp, args, rho);
    break;
  case SPECIALSXP: {
    SET_SXP_VAL(GET_VAL(-4), rhs_sxp); // Protection
    args = Rf_duplicate(CDR(call));
    GET_VAL(-2)->u.sxpval = args; // Protection
    // replace the first argument with evaluated promise containing LHS
    // promise won't be captured so don't track references
    // that is why we have to use the _NR version of mkEVPROMISE
    SEXP prom = R_mkEVPROMISE_NR(Rsh_TmpvalSym, lhs_sxp);
    SETCAR(args, prom);
    // append the evalated promise for RHS as the last argument
    SEXP last = args;
    while (CDR(last) != R_NilValue) {
      last = CDR(last);
    }
    prom = R_mkEVPROMISE_NR(vexpr, rhs_sxp);
    SETCAR(last, prom);
    // call the special
    value = PRIMFUN(fun_sxp)(call, fun_sxp, args, rho);
    break;
  }
  case CLOSXP: {
    // unlike in SPECIALSXP case, we need to use a RC promise
    SEXP prom = R_mkEVPROMISE(vexpr, rhs_sxp);
    // append RHS to arguments with value tag
    RSH_PUSH_ARG(&args_head, &args_tail, prom);
    SET_TAG(VAL_SXP(args_tail), R_valueSym);
    // replace first argument with LHS value as *tmp*
    args = Rsh_closure_call_args(args);
    prom = R_mkEVPROMISE(Rsh_TmpvalSym, lhs_sxp);
    SETCAR(args, prom);
    // call the closure
    value = Rf_applyClosure(call, fun_sxp, args, rho, R_NilValue, TRUE);
    break;
  }
  default:
    UNREACHABLE();
  }

  SET_SXP_VAL(lhs, value);
}

// clang-format off
#define Rsh_StartSubassign(stack, call, rho)  \
  Rsh_start_subassign_dispatch("[<-", stack, call, rho)

#define Rsh_StartSubassign2(stack, call, rho) \
  Rsh_start_subassign_dispatch("[[<-", stack, call, rho)
// clang-format on

static INLINE NODISCARD Rboolean Rsh_start_subassign_dispatch(
    const char *generic, Value *stack, SEXP call, SEXP rho) {
  Value *lhs = GET_VAL(-5);
  Value *rhs = GET_VAL(-4);
  Value *call_val = GET_VAL(-3);
  Value *args_head = GET_VAL(-2);
  Value *args_tail = GET_VAL(-1);

  MARK_ASSIGNMENT_CALL(call);

  SEXP lhs_sxp;
  if (VAL_IS_SXP(*lhs)) {
    lhs_sxp = VAL_SXP(*lhs);
    if (MAYBE_SHARED(lhs_sxp)) {
      lhs_sxp = Rf_shallow_duplicate(lhs_sxp);
      lhs->u.sxpval = lhs_sxp;
      ENSURE_NAMED(lhs_sxp);
    }
    if (isObject(lhs_sxp) &&
        tryAssignDispatch(generic, call, lhs_sxp, val_as_sexp(*rhs), rho,
                          &(lhs->u.sxpval))) {
      RSH_PC_INC(dispatched_subassign);
      RSH_CHECK_SIGINT();
      return TRUE;
    }
  } else {
    lhs_sxp = val_as_sexp(*lhs);
  }

  RSH_INIT_PUSH_ARG(args_head, args_tail, lhs_sxp);

  SET_SXP_VAL(call_val, call);

  assert(VAL_SXP(*args_tail) != R_NilValue);
  SEXP tag = TAG(CDR(call));
  if (tag != R_NilValue) {
    SET_TAG(VAL_SXP(*args_tail), Rf_CreateTag(tag));
  }

  // stack at the end:
  //         s4 - lhs
  //         s3 - rhs
  //         s2 - call
  //         s1 - args head
  //         s0 - args tail
  // top -->
  return FALSE;
}

static INLINE void Rsh_DoMissing(Value *stack) {
  Value *call = GET_VAL(-3);
  Value *args_head = GET_VAL(-2);
  Value *args_tail = GET_VAL(-1);
  SEXP call_sxp = VAL_SXP(*call);
  if (LIKELY(TYPEOF(call_sxp) != SPECIALSXP)) {
    RSH_PUSH_ARG(args_head, args_tail, R_MissingArg);
  }
}

#define Rsh_DfltSubassign(stack, rho)                                          \
  Rsh_dflt_subassign_dispatch(do_subassign_dflt, Rsh_SubassignSym, stack, rho)
#define Rsh_DfltSubassign2(stack, rho)                                         \
  Rsh_dflt_subassign_dispatch(do_subassign2_dflt, Rsh_Subassign2Sym, stack, rho)

static INLINE void Rsh_dflt_subassign_dispatch(CCODE fun, SEXP symbol,
                                               Value *stack, SEXP rho) {
  Value rhs = *GET_VAL(-4);
  Value call = *GET_VAL(-3);
  Value args_head = *GET_VAL(-2);
  Value args_tail = *GET_VAL(-1);

  SEXP call_sxp = VAL_SXP(call);
  MARK_ASSIGNMENT_CALL(call_sxp);
  SEXP args = VAL_SXP(args_head);
  RSH_CALL_ARGS_DECREMENT_LINKS(args);
  RSH_PUSH_ARG(&args_head, &args_tail, val_as_sexp(rhs));
  SEXP value = fun(call_sxp, symbol, args, rho);
  SET_VAL_N(-5, value);
}

#define Rsh_DfltSubset(stack, rho)                                             \
  Rsh_dflt_subset(do_subset_dflt, Rsh_SubassignSym, stack, rho)
#define Rsh_DfltSubset2(stack, rho)                                            \
  Rsh_dflt_subset(do_subset2_dflt, Rsh_Subassign2Sym, stack, rho)

static INLINE void Rsh_dflt_subset(CCODE fun, SEXP symbol, Value *stack,
                                   SEXP rho) {
  Value *value = GET_VAL(-4);
  Value call_val = *GET_VAL(-3);
  Value args_head = *GET_VAL(-2);
  // args_tail is UNUSED
  SEXP call_sxp = VAL_SXP(call_val);
  SEXP args = VAL_SXP(args_head);
  RSH_CALL_ARGS_DECREMENT_LINKS(args);
  SEXP value_sxp = fun(call_sxp, symbol, args, rho);
  SET_VAL(value, value_sxp);
  R_Visible = TRUE;
}

#define Rsh_SubsetN(stack, n, call, rho)                                       \
  Rsh_subset_n(stack, n, call, FALSE, rho)
#define Rsh_Subset2N(stack, n, call, rho)                                      \
  Rsh_subset_n(stack, n, call, TRUE, rho)

static INLINE void Rsh_do_subset_n(Value *stack, int rank, SEXP call,
                                   Rboolean subset2, SEXP rho) {
  Value *sx = stack - rank - 1;
  Value *ix = stack - rank;
  SEXP vec = val_as_sexp(*sx);

  if (subset2 || FAST_VECELT_OK(vec)) {
    SEXP dim = Rsh_get_array_dim_attr(vec);
    if (dim != R_NilValue) {
      R_xlen_t k = Rsh_compute_index(dim, ix, rank);
      if (k >= 0) {
        DO_FAST_VECELT(vec, k, subset2, sx);
      }
    }
  }

  // slow path!
  RSH_PC_INC(slow_subset);

  SEXP args = PROTECT(
      CONS_NR(vec, Rsh_append_values_to_args(stack, ix, rank, R_NilValue)));
  SEXP value;

  if (subset2) {
    value = do_subset2_dflt(call, Rsh_Subset2Sym, args, rho);
  } else {
    value = do_subset_dflt(call, Rsh_SubsetSym, args, rho);
  }

  UNPROTECT(1);

  SET_VAL(sx, value);
}

static INLINE void Rsh_subset_n(Value *stack, int rank, SEXP call,
                                Rboolean subset2, SEXP rho) {
  Rsh_do_subset_n(stack, rank, call, subset2, rho);
  R_Visible = TRUE;
}

#define Rsh_SubassignN(stack, n, call, rho)                                    \
  Rsh_do_subassign_n(stack, n, call, FALSE, rho)
#define Rsh_Subassign2N(stack, n, call, rho)                                   \
  Rsh_do_subassign_n(stack, n, call, TRUE, rho)

static INLINE void Rsh_do_subassign_n(Value *stack, int rank, SEXP call,
                                      Rboolean subassign2, SEXP rho) {
  Value *sx = stack - rank - 2;
  Value *sv = stack - rank - 2;
  Value *rhs = stack - rank - 1;
  Value *ix = stack - rank;

  SEXP vec;

  if (VAL_IS_SXP(*sx)) {
    vec = VAL_SXP(*sx);
    if (MAYBE_SHARED(vec)) {
      vec = Rf_shallow_duplicate(vec);
      sx->u.sxpval = vec;
    }
  } else {
    vec = val_as_sexp(*sx);
  }

  SEXP dim = Rsh_get_array_dim_attr(vec);
  if (dim != R_NilValue) {
    R_xlen_t k = Rsh_compute_index(dim, ix, rank);
    if (k >= 0) {
      DO_FAST_SETVECELT(sv, vec, k, *rhs, subassign2);
    }
  }

  // slow path!
  RSH_PC_INC(slow_subassign);

  SEXP rhs_sxp = val_as_sexp(*rhs);
  SEXP args = CONS_NR(rhs_sxp, R_NilValue);
  SET_TAG(args, Rsh_ValueSym);
  args =
      PROTECT(CONS_NR(vec, Rsh_append_values_to_args(stack, ix, rank, args)));
  MARK_ASSIGNMENT_CALL(call);
  if (subassign2) {
    vec = do_subassign2_dflt(call, Rsh_Subassign2Sym, args, rho);
  } else {
    vec = do_subassign_dflt(call, Rsh_SubassignSym, args, rho);
  }

  UNPROTECT(1);

  SET_SXP_VAL(sv, vec);
}

static INLINE void Rsh_GetterCall(Value *stack, SEXP call, SEXP rho) {
  SEXP lhs_sxp = VAL_SXP(*GET_VAL(-5));
  SEXP fun_sxp = VAL_SXP(*GET_VAL(-3));
  SEXP args = VAL_SXP(*GET_VAL(-2));

  SEXP value;

  switch (TYPEOF(fun_sxp)) {
  case BUILTINSXP:
    RSH_CALL_ARGS_DECREMENT_LINKS(args);
    // replace first argument with LHS value
    SETCAR(args, lhs_sxp);
    // call the builtin
    checkForMissings(args, call);
    value = PRIMFUN(fun_sxp)(call, fun_sxp, args, rho);
    break;
  case SPECIALSXP: {
    /* duplicate arguments and put into stack for GC protection */
    args = Rf_duplicate(CDR(call));
    GET_VAL(-2)->u.sxpval = args;
    SEXP prom = R_mkEVPROMISE_NR(Rsh_TmpvalSym, lhs_sxp);
    SETCAR(args, prom);
    // call the special
    value = PRIMFUN(fun_sxp)(call, fun_sxp, args, rho);
    break;
  }
  case CLOSXP: {
    // unlike in SPECIALSXP case, we need to use a RC promise
    SEXP prom = R_mkEVPROMISE(Rsh_TmpvalSym, lhs_sxp);
    SETCAR(args, prom);
    // call the closure
    value = Rf_applyClosure(call, fun_sxp, args, rho, R_NilValue, TRUE);
    break;
  }
  default:
    UNREACHABLE();
  }

  SET_VAL_N(-3, value);
}

static INLINE void Rsh_SpecialSwap(Value *stack) {
  Value *s3 = GET_VAL(-3);
  Value *s2 = GET_VAL(-2);
  Value *s1 = GET_VAL(-1);

  if (VAL_MAYBE_REFERENCED(*s1) &&
      (VAL_MAYBE_SHARED(*s1) || VAL_MAYBE_SHARED(*s3))) {
    SET_SXP_VAL(s1, Rf_shallow_duplicate(VAL_SXP(*s1)));
  }

  Value tmp = *s1;
  *s1 = *s2;
  *s2 = tmp;
}

static INLINE void Rsh_StartFor(Value *stack, SEXP call, SEXP symbol,
                                BCell *cell, SEXP rho) {
  RSH_CHECK_BCPROT();
  SET_INT_VAL(GET_VAL(-3), (int)(R_BCProtTop - R_BCNodeStackBase));

  Value *initial = GET_VAL(-1);
  Value *seq = GET_VAL(-4);

  SEXP info_sxp = Rf_allocVector(RAWSXP, sizeof(RshLoopInfo));
  RshLoopInfo *info = (RshLoopInfo *)RAW0(info_sxp);
  SET_SXP_VAL_N(-2, info_sxp);

  int type;
  // Split the logic into separate cases. It is too different to have together.
  switch (VAL_TAG(*seq)) {
  case 0: {
    SEXP seq_sxp = VAL_SXP(*seq);

    /* if we are iterating over a factor, coerce to character first */
    if (UNLIKELY(Rf_inherits(seq_sxp, "factor"))) {
      seq_sxp = Rf_asCharacterFactor(seq_sxp);
      SET_SXP_VAL(seq, seq_sxp);
    }

    info->type = TYPEOF(seq_sxp);
    type = TYPEOF(seq_sxp);

    // bump up links count of seq to avoid modification by loop code
    INCREMENT_LINKS(seq_sxp);

    if (Rf_isVector(seq_sxp)) {
      info->len = XLENGTH(seq_sxp);
    } else if (Rf_isList(seq_sxp) || isNull(seq_sxp)) {
      info->len = Rf_length(seq_sxp);
      info->cursor = seq_sxp;
    } else {
      Rf_errorcall(call, "invalid for() loop sequence");
    }
    break;
  }
  case ISQSXP: {
    info->type = ISQSXP;
    Rsh_isqinfo_t isq_info = VAL_ISQ(*seq);
    int n1 = isq_info.n1;
    int n2 = isq_info.n2;
    info->len = n1 <= n2 ? n2 - n1 + 1 : n1 - n2 + 1;
    type = INTSXP;
    break;
  }
  default: {
    // Always a simple scalar here, can skip a lot of code
    info->type = VAL_TAG(*seq);
    type = VAL_TAG(*seq);
    SEXP seq_sxp = val_as_sexp(*seq);
    INCREMENT_LINKS(seq_sxp);
    SET_SXP_VAL(seq, seq_sxp);
    assert(XLENGTH(seq_sxp) == 1);
    info->len = 1;
    break;
  }
  }

  // place initial loop variable value object on stack
  switch (type) {
  case LGLSXP:
    // SET_LGL_VAL(initial, NA_LOGICAL);
    // break;
  case INTSXP:
    // SET_INT_VAL(initial, NA_INTEGER);
    // break;
  case REALSXP:
    // SET_DBL_VAL(initial, NA_REAL);
    // break;
  case CPLXSXP:
  case STRSXP:
  case RAWSXP:
  // The allocated value would be always overwritten anyway in the first
  // iteration of STEPFOR

  // SEXP value = Rf_allocVector(type, 1);
  // INCREMENT_NAMED(value);
  // SET_SXP_NLNK_VAL(initial, value);
  // break;
  default:
    SET_SXP_NLNK_VAL(initial, R_NilValue);
    break;
  }

  info->idx = -1;
  info->symbol = symbol;

  // Have to define NULL: the semantics say that if loop body never
  // iterates, the variable should be defined as NULL.
  // The first iteration of STEPFOR should set the value as intended.
  Rf_defineVar(symbol, R_NilValue, rho);
  assert(rho != R_BaseEnv && rho != R_BaseNamespace && !IS_USER_DATABASE(rho));
  // It sucks that we have to iterate again to get the cell after defining it.
  // TODO: Maybe change GNU R to return the cell from defineVar?
  *cell = findVarLocInFrame(rho, symbol, NULL);
  assert(*cell != R_NilValue);

  //  stack at the end:
  //          -4 - sequence (already there on entry; becomes ENDFOR's result)
  //          -3 - saved R_BCProtTop offset
  //          -2 - casted pointer for the RshLoopInfo
  //          -1 - the initial value (NLNKSXP)
  //
  // The raise must come after every write above, since only slots at or above
  // R_BCProtTop may be written. It parks R_BCProtCommitted over the loop state
  // for the whole loop, so commits in the body stop re-walking it; the value
  // slot is in range but carries NLNKSXP, so STEPFOR may still replace it.
  INCLNK_stack(stack);
}

static INLINE void GET_VEC_LOOP_VALUE(Value *val, BCell cell, int rtype) {
  if (BCELL_TAG(cell) || VAL_SXP_NLNK(*val) != CAR0(cell) ||
      MAYBE_SHARED(VAL_SXP_NLNK(*val)) ||
      ATTRIB(VAL_SXP_NLNK(*val)) != R_NilValue) {
    SEXP val_sxp = Rf_allocVector(rtype, 1);
    INCREMENT_NAMED(val_sxp);
    SET_SXP_NLNK_VAL(val, val_sxp);
  }
}

#define SET_FOR_LOOP_VAR(value, cell, symbol, rho)                             \
  do {                                                                         \
    if (LIKELY(IS_SIMPLE_BINDING(cell))) {                                     \
      BCELL_SET(cell, value);                                                  \
      SET_MISSING(cell, 0);                                                    \
    } else {                                                                   \
      Rf_defineVar(symbol, value, rho);                                        \
    }                                                                          \
  } while (0)

#define FAST_STEP_NEXT(cell, value, v, s, ctype, rtype, btype, symbol, rho)    \
  do {                                                                         \
    SEXP __c__ = *(cell);                                                      \
    ctype __v__ = (v);                                                         \
    assert(__c__ != R_NilValue);                                               \
    if (LIKELY(BCELL_TAG(__c__) != 0) || IS_SIMPLE_BINDING(__c__)) {           \
      BCELL_##btype##_NEW(__c__, __v__);                                       \
    } else {                                                                   \
      GET_VEC_LOOP_VALUE((s), __c__, rtype);                                   \
      value = VAL_SXP_NLNK(*(s));                                              \
      assert(!ALTREP(value));                                                  \
      SET_SCALAR_##btype##0((value), __v__);                                   \
      Rf_defineVar(symbol, value, (rho));                                      \
    }                                                                          \
    return TRUE;                                                               \
  } while (0)

// Element fetch specialized on ALTREP-ness. mode < 0: runtime dispatch (the
// generic accessor branches on ALTREP internally); 0: direct data pointer; 1:
// ALTREP element method. mode is a compile-time constant in every caller, so
// exactly one arm survives.
#define SF_ELT(mode, dispatch, alt, direct)                                    \
  ((mode) < 0 ? (dispatch) : ((mode) ? (alt) : (direct)))

// `spec` is a per-type specialization selector, a compile-time constant so the
// selected arm folds away. Each type uses at most one axis, so a single value
// serves both: for element types it is the ALTREP-ness (see SF_ELT), for ISQ it
// is the direction (0 = increasing, 1 = decreasing). The generic caller passes
// -1 to keep the original runtime dispatch.
static INLINE NODISCARD Rboolean Rsh_DoStepFor(Value *seq_val,
                                               RshLoopInfo *loopinfo,
                                               Value *initial, BCell *cell,
                                               SEXP rho, int type, int spec) {
  assert(VAL_TAG(*seq_val) == 0 || VAL_TAG(*seq_val) == ISQSXP);
  assert(type == ISQSXP || loopinfo->len == Rf_xlength(seq_val->u.sxpval));

  // The value slot is rewritten below and its SEXP mutated in place, so it must
  // carry no committed link count -- that is what its NLNKSXP tag buys.
  RSH_CHECK_BCPROT();
  RSH_CHECK_NLNK(initial);

  R_xlen_t i = ++(loopinfo->idx);

  if (UNLIKELY(i >= loopinfo->len)) {
    return FALSE;
  }

  RSH_CHECK_SIGINT();

  SEXP seq = seq_val->u.sxpval;

  assert(*cell != R_NilValue); // Should be always set by StartFor

  SEXP value;
  switch (type) {
  case INTSXP: {
    int v = SF_ELT(spec, INTEGER_ELT(seq, i), ALTINTEGER_ELT(seq, i),
                   INTEGER0(seq)[i]);
    FAST_STEP_NEXT(cell, value, v, initial, int, INTSXP, IVAL, loopinfo->symbol,
                   rho);
    return TRUE;
  }
  case ISQSXP: {
    Rsh_isqinfo_t info = VAL_ISQ(*seq_val);
    int n1 = info.n1;
    int n2 = info.n2;
    int ii = (int)i;
    int v =
        spec < 0 ? (n1 <= n2 ? n1 + ii : n1 - ii) : (spec ? n1 - ii : n1 + ii);
    RSH_PC_INC(isq_for);
    FAST_STEP_NEXT(cell, value, v, initial, int, INTSXP, IVAL, loopinfo->symbol,
                   rho);
    return TRUE;
  }
  case REALSXP: {
    double v =
        SF_ELT(spec, REAL_ELT(seq, i), ALTREAL_ELT(seq, i), REAL0(seq)[i]);
    FAST_STEP_NEXT(cell, value, v, initial, double, REALSXP, DVAL,
                   loopinfo->symbol, rho);
    return TRUE;
  }
  case LGLSXP: {
    int v = SF_ELT(spec, LOGICAL_ELT(seq, i), ALTLOGICAL_ELT(seq, i),
                   LOGICAL0(seq)[i]);
    FAST_STEP_NEXT(cell, value, v, initial, int, LGLSXP, LVAL, loopinfo->symbol,
                   rho);
    return TRUE;
  }
  case CPLXSXP: {
    GET_VEC_LOOP_VALUE(initial, *cell, type);
    value = VAL_SXP_NLNK(*initial);
    assert(!ALTREP(value));
    Rcomplex v = SF_ELT(spec, COMPLEX_ELT(seq, i), ALTCOMPLEX_ELT(seq, i),
                        COMPLEX0(seq)[i]);
    SET_SCALAR_CVAL0(value, v);
    break;
  }
  case STRSXP: {
    GET_VEC_LOOP_VALUE(initial, *cell, type);
    value = VAL_SXP_NLNK(*initial);
    SEXP v = SF_ELT(spec, STRING_ELT(seq, i), ALTSTRING_ELT(seq, i),
                    ((SEXP *)STDVEC_DATAPTR(seq))[i]);

    // SET_STRING_ELT(value, 0, STRING_ELT(seq, i));
    // Inline SET_STRING_ELT, trim dead code (should have the same effect)
    assert(!ALTREP(value));
    ASSUME(value != NULL);
    ASSUME(v != NULL);
    CHECK_OLD_TO_NEW(value, v);
    SEXP *ps = (SEXP *)STDVEC_DATAPTR(value);

    // Refcnts does not make sense for STRSXPs, because they should be
    // immutable. "CHARSXPs are read-only objects and must never be modified."
    // from R-exts manual. GNUR itself does not keep track of refcnts for
    // STRSXPs for some operations either. However, the original code here
    // tracks them and it is observable with an .Internal call.
#ifdef RSH_STRICT_COMPLIANCE
    assert(TRACKREFS(value));
    INCREMENT_REFCNT(v);
    DECREMENT_REFCNT(ps[0]);
#endif
    ps[0] = v;
    break;
  }
  case RAWSXP: {
    GET_VEC_LOOP_VALUE(initial, *cell, type);
    value = VAL_SXP_NLNK(*initial);
    assert(!ALTREP(value));
    Rbyte v = SF_ELT(spec, RAW(seq)[i], ALTRAW_ELT(seq, i), RAW0(seq)[i]);
    SET_SCALAR_BVAL0(value, v);
    break;
  }
  case EXPRSXP:
  case VECSXP: {
    value = SF_ELT(spec, VECTOR_ELT(seq, i), ALTLIST_ELT(seq, i),
                   ((SEXP *)STDVEC_DATAPTR(seq))[i]);
    ENSURE_NAMEDMAX(value);
    break;
  }
  case LISTSXP: {
    assert(!BNDCELL_TAG(loopinfo->cursor));
    value = CAR0(loopinfo->cursor);
    loopinfo->cursor = CDR(loopinfo->cursor);
    ENSURE_NAMEDMAX(value);
    break;
  }
  default:
    Rf_error("invalid sequence argument in for loop");
  }

  SET_FOR_LOOP_VAR(value, *cell, loopinfo->symbol, rho);
  return TRUE;
}

static INLINE NODISCARD Rboolean Rsh_StepFor(Value *stack, BCell *cell,
                                             SEXP rho) {
  Value *seq = GET_VAL(-4);
  RshLoopInfo *info = (RshLoopInfo *)RAW0(VAL_SXP(*GET_VAL(-2)));
  Value *initial = GET_VAL(-1);
  return Rsh_DoStepFor(seq, info, initial, cell, rho, info->type, -1);
}

static INLINE void Rsh_EndFor(Value *stack, SEXP rho) {
  RSH_CHECK_BCPROT();
  Value *seq = GET_VAL(-4);
  Value *res = GET_VAL(-4); // This will be on top of the stack after EndFor

  // Must run before the sequence slot is overwritten below: the walk has to see
  // the sequence still in place. DECREMENT_LINKS is a separate pair, matching
  // the INCREMENT_LINKS in Rsh_StartFor.
  DECLNK_stack(R_BCNodeStackBase + VAL_INT(*GET_VAL(-3)));

  if (VAL_IS_SXP(*seq)) {
    DECREMENT_LINKS(VAL_SXP(*seq));
  } else {
    assert(VAL_IS_ISQ(*seq)); // Should not be anything else
  }
  SET_SXP_VAL(res, R_NilValue);
}

static INLINE void Rsh_Colon(Value *stack, SEXP call, SEXP rho) {
  Value *res = GET_VAL(-2);
  Value *from_ptr = GET_VAL(-2);
  Value *to_ptr = GET_VAL(-1);

  Value from = *from_ptr;
  val_unbox_inplace(&from, 1, 1, 1, 0);

  if (VAL_IS_DBL(from) || VAL_IS_INT(from)) {
    Value to = *to_ptr;
    val_unbox_inplace(&to, 1, 1, 1, 0);

    if (VAL_IS_DBL(to) || VAL_IS_INT(to)) {
      unboxed_int_to_dbl(&from);
      double rn1 = VAL_DBL(from);
      unboxed_int_to_dbl(&to);
      double rn2 = VAL_DBL(to);

      if (R_FINITE(rn1) && R_FINITE(rn2) && INT_MIN <= rn1 && INT_MAX >= rn1 &&
          INT_MIN <= rn2 && INT_MAX >= rn2 && rn1 == (int)rn1 &&
          rn2 == (int)rn2) {
        ISQ_NEW(rn1, rn2, res);
        R_Visible = TRUE;
        return;
      }
    }
  }
  // slow path!
  DO_BUILTIN2(do_colon, call, Rsh_ColonOp, *from_ptr, *to_ptr, rho, res);
  R_Visible = TRUE;
}

static INLINE void Rsh_SeqAlong(Value *stack, SEXP call, SEXP rho) {
  Value *v = GET_VAL(-1);
  SEXP s;
  switch (VAL_TAG(*v)) {
  case 0: {
    s = VAL_SXP(*v);
    if (!isObject(s)) {
      int type = TYPEOF(s);
      ASSUME(type != DOTSXP);
      R_xlen_t len = Rf_xlength(s);
      if (len >= 1 && len <= INT_MAX) {
        ISQ_NEW(1, len, v);
        R_Visible = TRUE;
        return;
      }
    }
    break;
  }
  case ISQSXP: {
    Rsh_isqinfo_t isq_info = VAL_ISQ(*v);
    int n1 = isq_info.n1;
    int n2 = isq_info.n2;
    R_xlen_t n = n1 <= n2 ? n2 - n1 + 1 : n1 - n2 + 1;
    if (n >= 1 && n <= INT_MAX) {
      ISQ_NEW(1, n, v);
      R_Visible = TRUE;
      return;
    } else {
      s = R_compact_intrange(n1, n2);
      SET_SXP_VAL(v, s); // To protect
    }
    break;
  }
  default:
    ISQ_NEW(1, 1, v);
    R_Visible = TRUE;
    return;
  }

  assert(Rsh_SeqAlongOp == R_Primitive("seq_along"));
  DO_BUILTIN1(do_seq_along, call, Rsh_SeqAlongOp, s, rho, v);
  R_Visible = TRUE;
}

static INLINE void Rsh_SeqLen(Value *stack, SEXP call, SEXP rho) {
  Value *v = GET_VAL(-1);

  switch (VAL_TAG(*v)) {
  case REALSXP: {
    double len = VAL_DBL(*v);
    if (len > 0 && len < INT_MAX && len == (int)len) {
      ISQ_NEW(1, len, v);
      R_Visible = TRUE;
      return;
    }
    break;
  }
  case INTSXP: {
    double len = VAL_INT(*v);
    if (len > 0) {
      ISQ_NEW(1, len, v);
      R_Visible = TRUE;
      return;
    }
    break;
  }
  }

  assert(Rsh_SeqLenOp == R_Primitive("seq_len"));
  DO_BUILTIN1(do_seq_len, call, Rsh_SeqLenOp, val_as_sexp(*v), rho, v);
  R_Visible = TRUE;
}

static INLINE void Rsh_IsNull(Value *stack) {
  Value *v = GET_VAL(-1);

  RSH_IS_TYPE_UNBOXED(v, NILSXP);

  R_Visible = TRUE;
}

static INLINE void Rsh_IsObject(Value *stack) {
  Value *v = GET_VAL(-1);

  SET_LGL_VAL(v, VAL_IS_SXP(*v) && isObject(VAL_SXP(*v)));
  R_Visible = TRUE;
}

static INLINE void Rsh_IsNumeric(Value *stack) {
  Value *v = GET_VAL(-1);

  int res = VAL_TAG(*v) == REALSXP || VAL_TAG(*v) == INTSXP ||
            (VAL_TAG(*v) == 0 && (TYPEOF(VAL_SXP(*v)) == REALSXP ||
                                  (TYPEOF(VAL_SXP(*v)) == INTSXP &&
                                   !Rf_inherits(VAL_SXP(*v), "factor"))));

  SET_LGL_VAL(v, res);
  R_Visible = TRUE;
}

static INLINE void Rsh_IsLogical(Value *stack) {
  Value *v = GET_VAL(-1);
  RSH_IS_TYPE(v, LGLSXP);
  R_Visible = TRUE;
}

static INLINE void Rsh_IsDouble(Value *stack) {
  Value *v = GET_VAL(-1);
  RSH_IS_TYPE(v, REALSXP);
  R_Visible = TRUE;
}

static INLINE void Rsh_IsComplex(Value *stack) {
  Value *v = GET_VAL(-1);
  RSH_IS_TYPE_UNBOXED(v, CPLXSXP);
  R_Visible = TRUE;
}

static INLINE void Rsh_IsCharacter(Value *stack) {
  Value *v = GET_VAL(-1);
  RSH_IS_TYPE_UNBOXED(v, STRSXP);
  R_Visible = TRUE;
}

static INLINE void Rsh_IsSymbol(Value *stack) {
  Value *v = GET_VAL(-1);
  RSH_IS_TYPE_UNBOXED(v, SYMSXP);
  R_Visible = TRUE;
}

static INLINE void Rsh_IsInteger(Value *stack) {
  Value *v = GET_VAL(-1);
  switch (VAL_TAG(*v)) {
  case INTSXP:
  case ISQSXP:
    SET_LGL_VAL(v, TRUE);
    break;
  case 0: // some SEXP
  {
    SEXP s = VAL_SXP(*v);
    SET_LGL_VAL(v, (TYPEOF(s) == INTSXP) && !Rf_inherits(s, "factor"));
    break;
  }
  case LGLSXP:
  case REALSXP:
    SET_LGL_VAL(v, FALSE);
    break;
  default:
    UNREACHABLE();
  }
  R_Visible = TRUE;
}

static INLINE NODISCARD Rboolean Rsh_And1st(Value *stack, SEXP call) {
  Value *r0 = GET_VAL(-1);
  int val = fixup_scalar_logical(r0, call, "'x'", "&&");
  SET_LGL_VAL(r0, val);
  R_Visible = TRUE;
  return val == FALSE ? TRUE : FALSE;
}

static INLINE void Rsh_And2nd(Value *stack, SEXP call) {
  Value *r1 = GET_VAL(-2);
  Value v = *GET_VAL(-1);
  // r1 is the result of Rsh_And1St
  int val = fixup_scalar_logical(&v, call, "'y'", "&&");
  // No need to put val on stack - it would be popped anyway
  // Note: ‘NA’ is a valid logical object.  Where a component of ‘x’ or ‘y’
  //       is ‘NA’, the result will be ‘NA’ if the outcome is ambiguous.  In
  //       other words ‘NA & TRUE’ evaluates to ‘NA’, but ‘NA & FALSE’
  //       evaluates to ‘FALSE’.  See the examples below.
  //
  // Therefore:
  // The first argument is TRUE or NA.
  // If the second argument is not TRUE then its value is the result.
  // If the second argument is TRUE, then the first argument's value is the
  // result.
  if (val == FALSE || val == NA_LOGICAL) {
    SET_LGL_VAL(r1, val);
  }
  R_Visible = TRUE;
}

static INLINE NODISCARD Rboolean Rsh_Or1st(Value *stack, SEXP call) {
  Value *v = GET_VAL(-1);
  int val = fixup_scalar_logical(v, call, "'x'", "||");
  SET_LGL_VAL(v, val);
  R_Visible = TRUE;
  Rboolean r = (Rboolean)(val != FALSE && val != NA_LOGICAL);
  return r;
}

static INLINE void Rsh_Or2nd(Value *stack, SEXP call) {
  Value *r1 = GET_VAL(-2);
  Value v = *GET_VAL(-1);
  // r1 is the result of Rsh_And1St
  int val = fixup_scalar_logical(&v, call, "'y'", "||");
  // No need to put val on stack - it would be popped anyway
  // The first argument is FALSE or NA.
  // If the second argument is not FALSE then its value is the result.
  // If the second argument is FALSE, then the first argument's value is the
  // result.
  if (val != FALSE) {
    SET_LGL_VAL(r1, val);
  }
  R_Visible = TRUE;
}

static INLINE void Rsh_Log(Value *stack, SEXP call, SEXP rho) {
  Value *res = GET_VAL(-1);
  Value *val_ptr = GET_VAL(-1);
  Value val = *val_ptr;
  val_unbox_inplace(&val, 1, 1, 1, 0);
  unboxed_int_to_dbl(&val);

  if (VAL_IS_DBL(val)) {
    double d = VAL_DBL(val);
    double r = R_log(d);
    if (ISNAN(r)) {
      if (ISNAN(d)) {
        r = d;
      } else {
        Rf_warningcall(call, R_MSG_NA);
      }
    }
    SET_DBL_VAL(val_ptr, r);
    R_Visible = TRUE;
    return;
  }

  // slow path
  RSH_PC_INC(slow_math1);

  SEXP args = CONS_NR(val_as_sexp(*val_ptr), R_NilValue);
  SET_SXP_VAL(res, args); // to protect
  SET_VAL(res, do_log_builtin(call, LOG_OP, args, rho));
  R_Visible = TRUE;
}

static INLINE void Rsh_LogBase(Value *stack, SEXP call, SEXP rho) {
  Value *res = GET_VAL(-2);
  Value *val_ptr = GET_VAL(-2);
  Value *base_ptr = GET_VAL(-1);

  Value val = *val_ptr;
  val_unbox_inplace(&val, 1, 1, 1, 0);

  if (VAL_IS_DBL(val) || VAL_IS_INT(val)) {
    Value base = *base_ptr;
    val_unbox_inplace(&base, 1, 1, 1, 0);

    if (VAL_IS_DBL(base) || VAL_IS_INT(base)) {
      unboxed_int_to_dbl(&val);
      double d = VAL_DBL(val);
      unboxed_int_to_dbl(&base);
      double b = VAL_DBL(base);
      double r = R_logbase(d, b);
      if (ISNAN(r)) {
        if (ISNAN(d)) {
          r = d;
        } else if (ISNAN(b)) {
          r = b;
        } else {
          Rf_warningcall(call, R_MSG_NA);
        }
      }
      SET_DBL_VAL(res, r);
      R_Visible = TRUE;
      return;
    }
  }

  // slow path
  RSH_PC_INC(slow_math1);

  SEXP args = CONS_NR(val_as_sexp(*base_ptr), R_NilValue);
  args = CONS_NR(val_as_sexp(*val_ptr), args);
  SET_SXP_VAL(res, args); // to protect
  SET_SXP_VAL(res, do_log_builtin(call, LOG_OP, args, rho));
  R_Visible = TRUE;
}

static INLINE Rsh_Math1Fun Rsh_get_math1_fun(int i, SEXP call, SEXP r_op_sym) {
  assert(CAR(call) == r_op_sym && "math1 compiler/interpreter mismatch");
  // if (CAR(call) != r_op_sym) {
  //   Rf_error("math1 compiler/interpreter mismatch");
  // } else {
  return R_MATH1_EXT_FUNS[i];
  //}
}

static INLINE void Rsh_do_math1(Value *stack, SEXP call, int op, SEXP rho,
                                SEXP r_op, SEXP r_op_sym) {
  Value *res = GET_VAL(-1);
  Value *v_ptr = GET_VAL(-1);
  Value v = *v_ptr;
  val_unbox_inplace(&v, 1, 1, 1, 0);
  unboxed_int_to_dbl(&v);

  if (VAL_IS_DBL(v)) {
    Rsh_Math1Fun fun = Rsh_get_math1_fun(op, call, r_op_sym);
    double d = VAL_DBL(v);
    double r = fun(d);
    if (ISNAN(r)) {
      if (ISNAN(d)) {
        r = d;
      } else {
        Rf_warningcall(call, R_MSG_NA);
      }
    }
    SET_DBL_VAL(res, r);
    R_Visible = TRUE;
    return;
  }

  // slow path
  RSH_PC_INC(slow_math1);

  SEXP args = CONS_NR(val_as_sexp(*v_ptr), R_NilValue);
  SET_SXP_VAL(res, args); // to protect
  SET_VAL(res, do_math1(call, r_op, args, rho));
  R_Visible = TRUE;
}

#define Rsh_Math1(v, call, op, rho)                                            \
  Rsh_do_math1(v, call, op, rho, RSH_MATH1_EXT_OPS(op), RSH_MATH1_EXT_SYMS(op));

#define DOTCALL_MAX 16
static INLINE void Rsh_DotCall(Value *stack, int nargs, SEXP call, SEXP rho) {
  // stack organization:
  //           <- top
  // last arg
  // ...
  // first arg
  // op         <- the external symbol

  Value *dot_call_fun = stack - 1 - nargs;
  SEXP op = val_as_sexp(*dot_call_fun);

  DL_FUNC ofun = R_dotCallFn(op, call, nargs);

  if (ofun && nargs <= DOTCALL_MAX) {
    SEXP cargs[DOTCALL_MAX];
    for (int i = 0; i < nargs; i++) {
      cargs[i] = val_as_sexp(dot_call_fun[i + 1]);
    }

    void *vmax = vmaxget();
    SEXP val = R_doDotCall(ofun, nargs, cargs, call);
    vmaxset(vmax);

    SET_VAL(dot_call_fun, val);
    R_Visible = TRUE;
    return;
  }

  // 1. allocate a space on the stack to protect it
  SEXP args = R_NilValue;
  // 2. fill it from the args passed on the stack (nargs+1 items: op + args)
  for (int i = 0; i <= nargs; i++) {
    PROTECT(args);
    args = CONS_NR(val_as_sexp(*(stack - 1 - i)), args);
    UNPROTECT(1); /* old args */
  }
  PROTECT(args);

  // 3. call the builtin
  assert(!BNDCELL_TAG(call));
  SEXP sym = CAR0(call);
  SEXP opPrim = getPrimitive(sym, BUILTINSXP);
  SEXP val = do_dotcall(call, opPrim, args, rho);

  // 4. remove the temporary argument list
  UNPROTECT(1); /* args */

  // 5. set the result
  SET_VAL(dot_call_fun, val);
  R_Visible = TRUE;
  return;
}

static INLINE void Rsh_Dup(Value *stack) { *GET_VAL(-1) = *GET_VAL(-2); }

static INLINE void Rsh_Dup2nd(Value *stack) { *GET_VAL(-1) = *GET_VAL(-3); }

static INLINE void Rsh_DoDots(Value *stack, SEXP rho) {
  Value *call = GET_VAL(-3);
  Value *args_head = GET_VAL(-2);
  Value *args_tail = GET_VAL(-1);

  SEXPTYPE ftype = TYPEOF(VAL_SXP(*call));
  if (UNLIKELY(ftype == SPECIALSXP)) {
    return;
  }

  SEXP h = R_findVar(R_DotsSymbol, rho);
  // FIXME: the h == R_NilValue -- does it make sense? eval.c:8028
  if (TYPEOF(h) == DOTSXP) {
    PROTECT(h);
    for (; h != R_NilValue; h = CDR(h)) {
      SEXP val;
      assert(!BNDCELL_TAG(h));
      if (ftype == BUILTINSXP) {
        val = Rf_eval(CAR0(h), rho);
      } else if (CAR0(h) == R_MissingArg) {
        val = CAR0(h);
      } else {
        val = Rf_mkPROMISE(CAR0(h), rho);
      }
      RSH_PUSH_ARG(args_head, args_tail, val);
      RSH_SET_TAG(*args_tail, TAG(h));
    }
    UNPROTECT(1); /* h */
  } else if (h != R_NilValue && h != R_MissingArg) {
    Rf_error("'...' used in an incorrect context");
  }
}

static INLINE void Rsh_CallSpecial(Value *stack, SEXP call, SEXP rho) {
  Value *value = GET_VAL(-1);
  assert(!BNDCELL_TAG(call));
  SEXP symbol = CAR0(call);
  SEXP fun = getPrimitive(symbol, SPECIALSXP);

  const void *vmax = vmaxget();
#ifdef RSH_RTRACE_SUPPORT
  if (RTRACE(fun)) {
    Rprintf("trace: ");
    PrintValue(symbol);
  }
#else
  assert(!RTRACE(fun) && "Tracing is not supported in this build of Rsh");
#endif
  int flag = PRIMPRINT(fun);
  // FIXME: create a macro for the Rboolean -> bool conversion for C++
  R_Visible = (flag != 1) ? TRUE : FALSE;
  SEXP v = PRIMFUN(fun)(call, fun, markSpecialArgs(CDR(call)), rho);
  if (flag < 2) {
    R_Visible = (flag != 1) ? TRUE : FALSE;
  }
  vmaxset(vmax);
  SET_VAL(value, v);
}

// Loop contexts, bc2c only.
//
// Rsh_StartLoopCntxt is ONLY CORRECT WHEN INLINED into the function that runs
// the loop: the sigsetjmp records *this* frame, and break/next jump back into
// it long after it would have returned. bc2c generates one C function per
// closure, so the loop lives in the caller's frame and inlining makes that
// hold. Copy-and-patch cannot get there -- every stencil is a separate
// function, so out of line the resumed epilogue reads a frame the loop body has
// since overwritten: garbage in the node-stack register, a stale return
// address, SIGSEGV.
//
// So these are compiled out under RCP rather than left available to be called
// by mistake. The copy-and-patch backend uses the trampoline in rcp's
// src/stencils-runtime.c (Rsh_RunLoopCntxt / Rsh_EndLoopCntxtJmp), which keeps
// the setjmp frame alive for as long as the context is live.
#ifndef RCP
static NODISCARD Rboolean Rsh_StartLoopCntxt(UNUSED Value *stack, RCNTXT *cntxt,
                                             SEXP rho) {
  // Rf_begincontext snapshots R_BCProtTop, and a break/next longjmp runs
  // R_BCProtReset on it, so an INCLNKSTK window left open by the jump is
  // unwound for us. GNU R additionally duplicates the loop state here so that
  // recover_loop_locals can find it after the jump resets R_BCNodeStackTop; our
  // stack pointer is a callee register that siglongjmp restores.
  RSH_CHECK_BCPROT();
  Rf_begincontext(cntxt, CTXT_LOOP, R_NilValue, rho, R_BaseEnv, R_NilValue,
                  R_NilValue);
  return (Rboolean)(sigsetjmp(cntxt->cjmpbuf, 0) == CTXT_BREAK);
}

static INLINE void Rsh_EndLoopCntxt(UNUSED Value *stack, RCNTXT *ctntxt) {
  // No DECLNK_stack counterpart: we do not raise in Rsh_StartLoopCntxt, and
  // Rsh_EndFor undoes Rsh_StartFor's raise.
  RSH_CHECK_BCPROT();
  Rf_endcontext(ctntxt);
}
#endif // !RCP

// Check whether a call is to a base function; if not use AST interpreter
// TODO: need a faster guard check
static INLINE NODISCARD Rboolean Rsh_BaseGuard(Value *stack, SEXP expr,
                                               SEXP rho) {
  assert(!BNDCELL_TAG(expr));
  SEXP sym = CAR0(expr);
  if (Rf_findFun(sym, rho) != SymbolValue(sym)) {
    // function redefined -- bail out to R interpreter
    SET_SXP_VAL(GET_VAL(-1), Rf_eval(expr, rho));
    return TRUE;
  } else {
    return FALSE;
  }
}

static INLINE NORET void Rsh_DotsErr(UNUSED Value *stack) {
  Rf_error("'...' used in an incorrect context");
}

static INLINE void Rsh_IncLnkStk(Value *stack) {
  RSH_CHECK_BCPROT();
  Value *v = GET_VAL(-1);
  int offset = (int)(R_BCProtTop - R_BCNodeStackBase);
  assert((R_bcstack_t *)(R_BCNodeStackBase + offset) == R_BCProtTop);
  INCLNK_stack(v);
  SET_INT_VAL(v, offset);
}

static INLINE void Rsh_DecLnkStk(Value *stack) {
  RSH_CHECK_BCPROT();
  Value *v2 = GET_VAL(-2);
  Value v1 = *GET_VAL(-1);
  assert(VAL_TAG(*v2) == INTSXP); // the offset INCLNKSTK stored
  int offset = VAL_INT(*v2);
  R_bcstack_t *ptop = R_BCNodeStackBase + offset;
  DECLNK_stack(ptop);
  *v2 = v1;
}

static INLINE int
Rsh_do_switch(Value *stack, SEXP call, SEXP names, SEXP coffsets, SEXP ioffsets,
              Rboolean is_names_null, Rboolean names_is_strsxp,
              int names_length, Rboolean ioffsets_is_intsxp,
              int ioffsets_length, Rboolean coffsets_is_intsxp,
              Rboolean names_and_coffsets_same_length) {
  ASSUME(names_length >= 0);
  ASSUME(ioffsets_length >= 0);
  SEXP value = val_as_sexp(*GET_VAL(-1));
  if (!Rf_isVector(value) || Rf_length(value) != 1) {
    Rf_errorcall(call, "EXPR must be a length 1 vector");
  }
  if (Rf_isFactor(value)) {
    Rf_warningcall(call,
                   "EXPR is a \"factor\", treated as integer.\n"
                   " Consider using '%s' instead.",
                   "switch(as.character( * ), ...)");
  }
  if (TYPEOF(value) == STRSXP) {
    int i, n, which;
    if (is_names_null) {
      if (!ioffsets_is_intsxp) {
        Rf_errorcall(call, "bad numeric 'switch' offsets");
      }
      if (ioffsets_length == 1) {
        Rf_warningcall(call, "'switch' with no alternatives");
        return INTEGER0(ioffsets)[0];
      } else {
        Rf_errorcall(call, "numeric EXPR required for 'switch' "
                           "without named alternatives");
      }
    } else {
      if (!coffsets_is_intsxp) {
        Rf_errorcall(call, "bad character 'switch' offsets");
      }
      if (!names_is_strsxp || !names_and_coffsets_same_length) {
        Rf_errorcall(call, "bad 'switch' names");
      }
      n = names_length;
      which = n - 1;
      for (i = 0; i < n - 1; i++) {
        if (Rf_pmatch(STRING_ELT(value, 0), STRING_ELT_0(names, i),
                      TRUE /* exact */)) {
          which = i;
          break;
        }
      }
      return INTEGER0(coffsets)[which];
    }
  } else {
    if (!ioffsets_is_intsxp) {
      Rf_errorcall(call, "bad numeric 'switch' offsets");
    }
    int which = Rf_asInteger(value);
    if (which != NA_INTEGER) {
      which--;
    }
    if (which < 0 || which >= ioffsets_length) {
      which = ioffsets_length - 1;
    }
    if (ioffsets_length == 1) {
      Rf_warningcall(call, "'switch' with no alternatives");
    }
    ASSUME(which >= 0);
    return INTEGER0(ioffsets)[which];
  }
}

static INLINE int Rsh_Switch(Value *stack, SEXP call, SEXP names, SEXP coffsets,
                             SEXP ioffsets) {
  R_xlen_t names_length = names == R_NilValue ? 0 : XLENGTH_0(names);
  R_xlen_t ioffsets_length = XLENGTH_0(ioffsets); // Can never be NULL
  R_xlen_t coffsets_length = coffsets == R_NilValue ? 0 : XLENGTH_0(coffsets);

  assert(names_length <= R_SHORT_LEN_MAX);
  assert(ioffsets_length <= R_SHORT_LEN_MAX);

  return Rsh_do_switch(stack, call, names, coffsets, ioffsets,
                       (Rboolean)(names == R_NilValue),
                       (Rboolean)(TYPEOF(names) == STRSXP), names_length,
                       (Rboolean)(TYPEOF(ioffsets) == INTSXP), ioffsets_length,
                       (Rboolean)(TYPEOF(coffsets) == INTSXP),
                       (Rboolean)(coffsets_length == names_length));
}
