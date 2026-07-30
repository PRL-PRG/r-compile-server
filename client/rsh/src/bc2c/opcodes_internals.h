// INSTRUCTION HELPERS
// -------------------

static INLINE void Rsh_unbox_evaluated_promise(SEXP value) {
  assert(PROMISE_IS_EVALUATED(value));

  if (PROMISE_TAG(value) == 0 && IS_ANY_SIMPLE_SCALAR(PRVALUE0(value))) {
    int type = TYPEOF(PRVALUE0(value));
    switch (type) {
    case REALSXP:
      memcpy(&CAR0(value), &REAL(PRVALUE0(value))[0], sizeof(double));
      break;
    case INTSXP:
      memcpy(&CAR0(value), &INTEGER(PRVALUE0(value))[0], sizeof(int));
      break;
    case LGLSXP:
      memcpy(&CAR0(value), &LOGICAL(PRVALUE0(value))[0], sizeof(int));
      break;
    case 0:
    case ISQSXP:
      return;
    default:
      UNREACHABLE();
    }
    SET_PROMISE_TAG(value, type);
  }
}

static INLINE void Rsh_evaluated_promise_to_value(Value *res, SEXP value) {
  assert(PROMISE_IS_EVALUATED(value));

  assert(PROMISE_TAG(value) == REALSXP || PROMISE_TAG(value) == INTSXP ||
         PROMISE_TAG(value) == LGLSXP || PROMISE_TAG(value) == 0);

  res->tag = PROMISE_TAG(value);
  if (PROMISE_TAG(value) != 0) {
    memcpy(&res->u, &CAR0(value), sizeof(res->u));
  } else {
    res->u.sxpval = PRVALUE0(value);
  }
}

// cell could be null
static INLINE void Rsh_do_get_var(Value *res, SEXP symbol, SEXP value,
                                  Rboolean keepmiss, SEXP rho) {
  RSH_PC_INC(slow_getvar);

  if (value == R_UnboundValue) {
    UNBOUND_VARIABLE_ERROR(symbol, rho);
  } else if (value == R_MissingArg) {
    MAYBE_MISSING_ARGUMENT_ERROR(symbol, keepmiss, rho);
  } else if (TYPEOF(value) == PROMSXP) {
    if (!PROMISE_IS_EVALUATED(value)) {
      /**** R_isMissing is inefficient */
      if (keepmiss && R_isMissing(symbol, rho)) {
        value = R_MissingArg;
        SET_SXP_VAL(res, value);
        return;
      } else {
        forcePromise(value);
      }
    }
#ifdef RSH_AGGRESSIVE_UNBOXING
    Rsh_unbox_evaluated_promise(value);
#endif
    Rsh_evaluated_promise_to_value(res, value);
    return;
  } else {
    ENSURE_NAMEDMAX(value);
  }
  SET_SXP_VAL(res, value);
}

static INLINE SEXP Rsh_builtin_call_args(SEXP args) {
  for (SEXP a = args; a != R_NilValue; a = CDR(a)) {
    assert(!BNDCELL_TAG(a));
    DECREMENT_LINKS(CAR0(a));
  }
  return args;
}

static INLINE SEXP Rsh_closure_call_args(SEXP args) {
  for (SEXP a = args; a != R_NilValue; a = CDR(a)) {
    assert(!BNDCELL_TAG(a));
    DECREMENT_LINKS(CAR0(a));
    if (!TRACKREFS(a)) {
      ENABLE_REFCNT(a);
      INCREMENT_REFCNT(CAR0(a));
      INCREMENT_REFCNT(CDR(a));
    }
  }
  return args;
}

static INLINE void Rsh_inline_call(RCNTXT *pcntxt, Value *res, SEXP body, SEXP newrho)
#ifndef RSH_EXTERN_HELPERS
{
  if (sigsetjmp(pcntxt->cjmpbuf, 0)) {
    if (!pcntxt->jumptarget) {
      /* ignores intermediate jumps for on.exits */
      SET_VAL(res, R_ReturnedValue); // to protect
    } else {
      // FIXME: not sure what to do here, R does the following:
      //
      // pcntxt.returnValue = SEXP_TO_STACKVAL(NULL); /* undefined */
      //
      // with the following comment:
      // > might be better so use something less
      // > segfault-prone than NULL here and elsewhere
      UNREACHABLE();
    }
  } else {
    *res = rshEvalUnboxed(body, newrho);
  }
}
#else
    ;
#endif

#define DO_ARITH(op, a, b, r)                                                  \
  do {                                                                         \
    switch (op) {                                                              \
    case ADD_OP:                                                               \
      *(r) = (a) + (b);                                                        \
      break;                                                                   \
    case SUB_OP:                                                               \
      *(r) = (a) - (b);                                                        \
      break;                                                                   \
    case MUL_OP:                                                               \
      *(r) = (a) * (b);                                                        \
      break;                                                                   \
    case DIV_OP:                                                               \
      *(r) = (a) / (b);                                                        \
      break;                                                                   \
    case EXPT_OP:                                                              \
      *(r) = (b) == 2.0 ? (a) * (a) : R_pow((a), (b));                         \
      break;                                                                   \
    }                                                                          \
  } while (0)

// Sets r to LGL_TO_VAL(a op b)
#define DO_RELOP(op, a, b, r)                                                  \
  do {                                                                         \
    int __res__;                                                               \
    switch (op) {                                                              \
    case EQ_OP:                                                                \
      __res__ = (a) == (b);                                                    \
      break;                                                                   \
    case NE_OP:                                                                \
      __res__ = (a) != (b);                                                    \
      break;                                                                   \
    case LT_OP:                                                                \
      __res__ = (a) < (b);                                                     \
      break;                                                                   \
    case LE_OP:                                                                \
      __res__ = (a) <= (b);                                                    \
      break;                                                                   \
    case GT_OP:                                                                \
      __res__ = (a) > (b);                                                     \
      break;                                                                   \
    case GE_OP:                                                                \
      __res__ = (a) >= (b);                                                    \
      break;                                                                   \
    }                                                                          \
    SET_LGL_VAL(r, __res__);                                                   \
  } while (0)

// calls R internal function which takes two arguments
// it is like a second level builtin - called itself from do_* functions
#define DO_BINARY_BUILTIN(fun, call, op, op_sym, lhs, rhs, rho, res)           \
  do {                                                                         \
    SEXP __res_sxp__ = fun((call), (op), (op_sym), val_as_sexp((lhs)),         \
                           val_as_sexp((rhs)), (rho));                         \
    SET_VAL(res, __res_sxp__);                                                 \
  } while (0)

// calls R builtin function do_* with 1 argument
#define DO_BUILTIN1(/* PRIMFUN */ fun, /* SEXP */ call, /* SEXP */ op,         \
                    /* SEXP */ arg, /* SEXP */ rho, /* Value* */ res)          \
  do {                                                                         \
    SEXP __tmp__ = CONS_NR((arg), R_NilValue);                                 \
    SET_SXP_VAL(res, __tmp__);                                                 \
    assert(TYPEOF((op)) == BUILTINSXP);                                        \
    SEXP __res_sxp__ = fun((call), (op), __tmp__, (rho));                      \
    SET_VAL(res, __res_sxp__);                                                 \
  } while (0)

// calls R builtin function do_* with 2 arguments
#define DO_BUILTIN2(/* PRIMFUN */ fun, /* SEXP */ call, /* SEXP */ op,         \
                    /* Value */ arg1, /* Value */ arg2, /* SEXP */ rho,        \
                    /* Value* */ res)                                          \
  do {                                                                         \
    SEXP __tmp__ = CONS_NR(val_as_sexp((arg1)),                                \
                           CONS_NR(val_as_sexp((arg2)), R_NilValue));          \
    SET_SXP_VAL(res, __tmp__);                                                 \
    assert(TYPEOF((op)) == BUILTINSXP);                                        \
    SEXP __res_sxp__ = fun((call), (op), __tmp__, (rho));                      \
    SET_VAL(res, __res_sxp__);                                                 \
  } while (0)

#define ISQ_NEW(/* int */ x, /* int */ y, /* Value* */ res)                    \
  do {                                                                         \
    Value *__r__ = (res);                                                      \
    Rsh_isqinfo_t __v__;                                                       \
    __v__.n1 = (int)(x);                                                       \
    __v__.n2 = (int)(y);                                                       \
    SET_ISQ_VAL(__r__, __v__);                                                 \
    RSH_PC_INC(isq);                                                           \
  } while (0)

#define RSH_IS_TYPE(v, t)                                                      \
  do {                                                                         \
    Value *__v__ = v;                                                          \
    int __tag__ = VAL_TAG(*__v__);                                             \
    int __type__ = (t);                                                        \
    int __res__ = (__tag__ == 0 ? (TYPEOF(VAL_SXP(*__v__)) == __type__)        \
                                : __tag__ == __type__);                        \
    SET_LGL_VAL(__v__, __res__);                                               \
  } while (0)

#define RSH_IS_TYPE_UNBOXED(v, t)                                              \
  do {                                                                         \
    Value *__v__ = v;                                                          \
    int __tag__ = VAL_TAG(*__v__);                                             \
    int __type__ = (t);                                                        \
    int __res__ = (__tag__ == 0 && (TYPEOF(VAL_SXP(*__v__)) == __type__));     \
    SET_LGL_VAL(__v__, __res__);                                               \
  } while (0)

static ALWAYS_INLINE int Rsh_val_as_logical(Value *v, SEXP call) {
  switch (VAL_TAG(*v)) {
  case LGLSXP:
    return VAL_INT(*v);
  case INTSXP:
    return INTEGER_TO_LOGICAL(VAL_INT(*v));
  case REALSXP:
    return REAL_TO_LOGICAL(VAL_DBL(*v));
  case ISQSXP: {
    Rsh_isqinfo_t isqinfo = VAL_ISQ(*v);
    SET_SXP_VAL(v, R_compact_intrange(isqinfo.n1, isqinfo.n2));
  }
  case 0: // some SEXP
    return Rf_asLogical2(VAL_SXP(*v), 1, call);
  default:
    UNREACHABLE();
  }
}

static INLINE int fixup_scalar_logical(Value *v, SEXP call, const char *arg,
                                       const char *op) {
  if (UNLIKELY(VAL_IS_SXP(*v))) {
    // FIXME: does it make sense to optimize LGL / DBL?
    if (!Rf_isNumber(VAL_SXP(*v))) {
      Rf_errorcall(call, "invalid %s type in 'x %s y'", arg, op);
    }
    return Rf_asLogical2(VAL_SXP(*v), 1, call);
  } else {
    return Rsh_val_as_logical(v, call);
  }
}

static INLINE SEXP SymbolValue(SEXP sym) {
  if (UNLIKELY(IS_ACTIVE_BINDING(sym)))
    return Rf_eval(sym, R_BaseEnv);
  else {
    SEXP value = SYMVALUE(sym);
    if (UNLIKELY(TYPEOF(value) == PROMSXP)) {
      if (LIKELY(PROMISE_IS_EVALUATED(value)))
        value = PRVALUE(value);
      else
        value = Rf_eval(sym, R_BaseEnv);
    }
    return value;
  }
}
