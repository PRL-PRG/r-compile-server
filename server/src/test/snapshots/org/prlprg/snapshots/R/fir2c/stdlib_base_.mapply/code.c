#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2677615807_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2677615807_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2677615807_(SEXP CCP, SEXP RHO);
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
  // r = clos inner2677615807
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2677615807_, RHO, CCP);
  // st `.mapply` = r
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
SEXP Rsh_Fir_user_function_inner2677615807_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2677615807 dynamic dispatch ([FUN, dots, MoreArgs])

  return Rsh_Fir_user_version_inner2677615807_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2677615807_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2677615807 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2677615807/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_FUN;  // FUN
  SEXP Rsh_Fir_reg_dots;  // dots
  SEXP Rsh_Fir_reg_MoreArgs;  // MoreArgs
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_match_fun;  // match_fun
  SEXP Rsh_Fir_reg_FUN1_;  // FUN1
  SEXP Rsh_Fir_reg_FUN2_;  // FUN2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_dots1_;  // dots1
  SEXP Rsh_Fir_reg_dots2_;  // dots2
  SEXP Rsh_Fir_reg_MoreArgs1_;  // MoreArgs1
  SEXP Rsh_Fir_reg_MoreArgs2_;  // MoreArgs2
  SEXP Rsh_Fir_reg_mapply;  // mapply
  SEXP Rsh_Fir_reg_r4_;  // r4

  // Bind parameters
  Rsh_Fir_reg_FUN = PARAMS[0];
  Rsh_Fir_reg_dots = PARAMS[1];
  Rsh_Fir_reg_MoreArgs = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st FUN = FUN
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_FUN, RHO);
  (void)(Rsh_Fir_reg_FUN);
  // st dots = dots
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dots, RHO);
  (void)(Rsh_Fir_reg_dots);
  // st MoreArgs = MoreArgs
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_MoreArgs, RHO);
  (void)(Rsh_Fir_reg_MoreArgs);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
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
  // match_fun = ldf `match.fun`
  Rsh_Fir_reg_match_fun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<lang mapply(match.fun(FUN), dots, MoreArgs)>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   FUN1 = ld FUN;
  //   FUN2 = force? FUN1;
  //   checkMissing(FUN2);
  //   return FUN2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2677615807_, CCP, RHO);
  // r3 = dyn match_fun(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_fun, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // dots1 = ld dots
  Rsh_Fir_reg_dots1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 6 [dots1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_dots1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // dots2 = force? dots1
  Rsh_Fir_reg_dots2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dots1_);
  // checkMissing(dots2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dots2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // MoreArgs1 = ld MoreArgs
  Rsh_Fir_reg_MoreArgs1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 8 [MoreArgs1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_MoreArgs1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // MoreArgs2 = force? MoreArgs1
  Rsh_Fir_reg_MoreArgs2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MoreArgs1_);
  // checkMissing(MoreArgs2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_MoreArgs2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // mapply = ldf mapply in base
  Rsh_Fir_reg_mapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r4 = dyn mapply(r3, dots2, MoreArgs2)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_dots2_;
  Rsh_Fir_array_args6[2] = Rsh_Fir_reg_MoreArgs2_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mapply, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2677615807_(SEXP CCP, SEXP RHO) {
  // FUN1 = ld FUN
  Rsh_Fir_reg_FUN1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // FUN2 = force? FUN1
  Rsh_Fir_reg_FUN2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN1_);
  // checkMissing(FUN2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_FUN2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return FUN2
  return Rsh_Fir_reg_FUN2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
