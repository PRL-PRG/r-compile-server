#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner990356484_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner990356484_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner990356484
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner990356484_, RHO, CCP);
  // st binomInitialize = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner990356484_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner990356484 dynamic dispatch ([family])

  return Rsh_Fir_user_version_inner990356484_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner990356484_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner990356484 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner990356484/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_family;  // family
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_substitute;  // substitute
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_family = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st family = family
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_family, RHO);
  (void)(Rsh_Fir_reg_family);
  // sym = ldf substitute
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf substitute in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn substitute(<lang {
  //   if(`==`(NCOL(y), 1.0), {
  //       if(is.factor(y), `<-`(y, `!=`(y, `[`(levels(y), 1))));
  //       `<-`(n, rep.int(1.0, nobs));
  //       `<-`(`[`(y, `==`(weights, 0.0)), 0.0);
  //       if(any(`|`(`<`(y, 0.0), `>`(y, 1.0))), stop("y values must be 0 <= y <= 1"));
  //       `<-`(mustart, `/`(`(`(`+`(`*`(weights, y), 0.5)), `(`(`+`(weights, 1.0))));
  //       `<-`(m, `*`(weights, y));
  //       if(`&&`(`==`(FAMILY, "binomial"), any(`>`(abs(`-`(m, round(m))), 0.001))), warning(gettextf("non-integer #successes in a %s glm!", FAMILY), domain=NA_LGL))
  //     }, if(`==`(NCOL(y), 2.0), {
  //         if(`&&`(`==`(FAMILY, "binomial"), any(`>`(abs(`-`(y, round(y))), 0.001))), warning(gettextf("non-integer counts in a %s glm!", FAMILY), domain=NA_LGL));
  //         `<-`(n, `+`(`(`(`<-`(y1, `[`(y, , 1))), `[`(y, , 2)));
  //         `<-`(y, `/`(y1, n));
  //         if(any(`<-`(n0, `==`(n, 0.0))), `<-`(`[`(y, n0), 0.0));
  //         `<-`(weights, `*`(weights, n));
  //         `<-`(mustart, `/`(`(`(`+`(`*`(n, y), 0.5)), `(`(`+`(n, 1.0))))
  //       }, stop(gettextf("for the '%s' family, y must be a vector of 0 and 1's\nor a 2 column matrix where col 1 is no. successes and col 2 is no. failures", FAMILY), domain=NA_LGL)))
  // }>, <lang list(FAMILY=family)>)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<lang {
  //   if(`==`(NCOL(y), 1.0), {
  //       if(is.factor(y), `<-`(y, `!=`(y, `[`(levels(y), 1))));
  //       `<-`(n, rep.int(1.0, nobs));
  //       `<-`(`[`(y, `==`(weights, 0.0)), 0.0);
  //       if(any(`|`(`<`(y, 0.0), `>`(y, 1.0))), stop("y values must be 0 <= y <= 1"));
  //       `<-`(mustart, `/`(`(`(`+`(`*`(weights, y), 0.5)), `(`(`+`(weights, 1.0))));
  //       `<-`(m, `*`(weights, y));
  //       if(`&&`(`==`(FAMILY, "binomial"), any(`>`(abs(`-`(m, round(m))), 0.001))), warning(gettextf("non-integer #successes in a %s glm!", FAMILY), domain=NA_LGL))
  //     }, if(`==`(NCOL(y), 2.0), {
  //         if(`&&`(`==`(FAMILY, "binomial"), any(`>`(abs(`-`(y, round(y))), 0.001))), warning(gettextf("non-integer counts in a %s glm!", FAMILY), domain=NA_LGL));
  //         `<-`(n, `+`(`(`(`<-`(y1, `[`(y, , 1))), `[`(y, , 2)));
  //         `<-`(y, `/`(y1, n));
  //         if(any(`<-`(n0, `==`(n, 0.0))), `<-`(`[`(y, n0), 0.0));
  //         `<-`(weights, `*`(weights, n));
  //         `<-`(mustart, `/`(`(`(`+`(`*`(n, y), 0.5)), `(`(`+`(n, 1.0))))
  //       }, stop(gettextf("for the '%s' family, y must be a vector of 0 and 1's\nor a 2 column matrix where col 1 is no. successes and col 2 is no. failures", FAMILY), domain=NA_LGL)))
  // }>, <lang list(FAMILY=family)>)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
