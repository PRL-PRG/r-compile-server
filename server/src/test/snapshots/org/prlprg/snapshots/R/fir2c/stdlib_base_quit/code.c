#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3798835836_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3798835836_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3798835836
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3798835836_, RHO, CCP);
  // st quit = r
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
SEXP Rsh_Fir_user_function_inner3798835836_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3798835836 dynamic dispatch ([save, status, runLast])

  return Rsh_Fir_user_version_inner3798835836_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3798835836_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3798835836 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3798835836/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_save;  // save
  SEXP Rsh_Fir_reg_status;  // status
  SEXP Rsh_Fir_reg_runLast;  // runLast
  SEXP Rsh_Fir_reg_save_isMissing;  // save_isMissing
  SEXP Rsh_Fir_reg_save_orDefault;  // save_orDefault
  SEXP Rsh_Fir_reg_status_isMissing;  // status_isMissing
  SEXP Rsh_Fir_reg_status_orDefault;  // status_orDefault
  SEXP Rsh_Fir_reg_runLast_isMissing;  // runLast_isMissing
  SEXP Rsh_Fir_reg_runLast_orDefault;  // runLast_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_save1_;  // save1
  SEXP Rsh_Fir_reg_save2_;  // save2
  SEXP Rsh_Fir_reg_status1_;  // status1
  SEXP Rsh_Fir_reg_status2_;  // status2
  SEXP Rsh_Fir_reg_runLast1_;  // runLast1
  SEXP Rsh_Fir_reg_runLast2_;  // runLast2
  SEXP Rsh_Fir_reg_quit;  // quit
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_save = PARAMS[0];
  Rsh_Fir_reg_status = PARAMS[1];
  Rsh_Fir_reg_runLast = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // save_isMissing = missing.0(save)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_save;
  Rsh_Fir_reg_save_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if save_isMissing then L0("default") else L0(save)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_save_isMissing)) {
  // L0("default")
    Rsh_Fir_reg_save_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(save)
    Rsh_Fir_reg_save_orDefault = Rsh_Fir_reg_save;
    goto L0_;
  }

L0_:;
  // st save = save_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_save_orDefault, RHO);
  (void)(Rsh_Fir_reg_save_orDefault);
  // status_isMissing = missing.0(status)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_status;
  Rsh_Fir_reg_status_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if status_isMissing then L1(0.0) else L1(status)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_status_isMissing)) {
  // L1(0.0)
    Rsh_Fir_reg_status_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(status)
    Rsh_Fir_reg_status_orDefault = Rsh_Fir_reg_status;
    goto L1_;
  }

L1_:;
  // st status = status_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_status_orDefault, RHO);
  (void)(Rsh_Fir_reg_status_orDefault);
  // runLast_isMissing = missing.0(runLast)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_runLast;
  Rsh_Fir_reg_runLast_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if runLast_isMissing then L2(TRUE) else L2(runLast)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_runLast_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_runLast_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(runLast)
    Rsh_Fir_reg_runLast_orDefault = Rsh_Fir_reg_runLast;
    goto L2_;
  }

L2_:;
  // st runLast = runLast_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_runLast_orDefault, RHO);
  (void)(Rsh_Fir_reg_runLast_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L4_:;
  // save1 = ld save
  Rsh_Fir_reg_save1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<lang quit(save, status, runLast)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 2 [save1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_save1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // save2 = force? save1
  Rsh_Fir_reg_save2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_save1_);
  // checkMissing(save2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_save2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // status1 = ld status
  Rsh_Fir_reg_status1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 4 [status1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_status1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // status2 = force? status1
  Rsh_Fir_reg_status2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_status1_);
  // checkMissing(status2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_status2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // runLast1 = ld runLast
  Rsh_Fir_reg_runLast1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 6 [runLast1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_runLast1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // runLast2 = force? runLast1
  Rsh_Fir_reg_runLast2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_runLast1_);
  // checkMissing(runLast2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_runLast2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // quit = ldf quit in base
  Rsh_Fir_reg_quit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r2 = dyn quit(save2, status2, runLast2)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_save2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_status2_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_runLast2_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quit, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 9 [r2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
