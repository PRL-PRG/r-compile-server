#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3146477036_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3146477036_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3146477036_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3146477036_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner3146477036
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3146477036_, RHO, CCP);
  // st engineMatches = r
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
SEXP Rsh_Fir_user_function_inner3146477036_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3146477036 dynamic dispatch ([regengine, vigengine])

  return Rsh_Fir_user_version_inner3146477036_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3146477036_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3146477036 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3146477036/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_regengine;  // regengine
  SEXP Rsh_Fir_reg_vigengine;  // vigengine
  SEXP Rsh_Fir_reg_grepl;  // grepl
  SEXP Rsh_Fir_reg_vigengine1_;  // vigengine1
  SEXP Rsh_Fir_reg_vigengine2_;  // vigengine2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_regengine1_;  // regengine1
  SEXP Rsh_Fir_reg_regengine2_;  // regengine2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_regengine3_;  // regengine3
  SEXP Rsh_Fir_reg_regengine4_;  // regengine4
  SEXP Rsh_Fir_reg_vigengine3_;  // vigengine3
  SEXP Rsh_Fir_reg_vigengine4_;  // vigengine4
  SEXP Rsh_Fir_reg_r6_;  // r6

  // Bind parameters
  Rsh_Fir_reg_regengine = PARAMS[0];
  Rsh_Fir_reg_vigengine = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st regengine = regengine
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_regengine, RHO);
  (void)(Rsh_Fir_reg_regengine);
  // st vigengine = vigengine
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_vigengine, RHO);
  (void)(Rsh_Fir_reg_vigengine);
  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

L0_:;
  // goto L1()
  // L1()
  goto L1_;

L1_:;
  // regengine3 = ld regengine
  Rsh_Fir_reg_regengine3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   vigengine1 = ld vigengine;
  //   vigengine2 = force? vigengine1;
  //   checkMissing(vigengine2);
  //   return vigengine2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3146477036_, CCP, RHO);
  // r1 = dyn grepl("::", p)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 4 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L4() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L0()
    goto L0_;
  }

L4_:;
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p1 = prom<V +>{
  //   regengine1 = ld regengine;
  //   regengine2 = force? regengine1;
  //   checkMissing(regengine2);
  //   return regengine2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3146477036_1, CCP, RHO);
  // r4 = dyn sub("^.*::", "", p1)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // st regengine = r4
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // goto L1()
  // L1()
  goto L1_;

D4_:;
  // deopt 15 [regengine3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_regengine3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // regengine4 = force? regengine3
  Rsh_Fir_reg_regengine4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_regengine3_);
  // checkMissing(regengine4)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_regengine4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // vigengine3 = ld vigengine
  Rsh_Fir_reg_vigengine3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 16 [regengine4, vigengine3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_regengine4_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_vigengine3_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // vigengine4 = force? vigengine3
  Rsh_Fir_reg_vigengine4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vigengine3_);
  // checkMissing(vigengine4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_vigengine4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // r6 = `==`(regengine4, vigengine4)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_regengine4_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_vigengine4_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner3146477036_(SEXP CCP, SEXP RHO) {
  // vigengine1 = ld vigengine
  Rsh_Fir_reg_vigengine1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // vigengine2 = force? vigengine1
  Rsh_Fir_reg_vigengine2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vigengine1_);
  // checkMissing(vigengine2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_vigengine2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return vigengine2
  return Rsh_Fir_reg_vigengine2_;
}
SEXP Rsh_Fir_user_promise_inner3146477036_1(SEXP CCP, SEXP RHO) {
  // regengine1 = ld regengine
  Rsh_Fir_reg_regengine1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // regengine2 = force? regengine1
  Rsh_Fir_reg_regengine2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_regengine1_);
  // checkMissing(regengine2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_regengine2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return regengine2
  return Rsh_Fir_reg_regengine2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
