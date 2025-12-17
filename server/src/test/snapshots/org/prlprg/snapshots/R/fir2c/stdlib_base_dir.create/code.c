#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2280020149_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2280020149_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2280020149_(SEXP CCP, SEXP RHO);
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
  // r = clos inner2280020149
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2280020149_, RHO, CCP);
  // st `dir.create` = r
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
SEXP Rsh_Fir_user_function_inner2280020149_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2280020149 dynamic dispatch ([path, showWarnings, recursive, mode])

  return Rsh_Fir_user_version_inner2280020149_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2280020149_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2280020149 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2280020149/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_path;  // path
  SEXP Rsh_Fir_reg_showWarnings;  // showWarnings
  SEXP Rsh_Fir_reg_recursive;  // recursive
  SEXP Rsh_Fir_reg_mode;  // mode
  SEXP Rsh_Fir_reg_showWarnings_isMissing;  // showWarnings_isMissing
  SEXP Rsh_Fir_reg_showWarnings_orDefault;  // showWarnings_orDefault
  SEXP Rsh_Fir_reg_recursive_isMissing;  // recursive_isMissing
  SEXP Rsh_Fir_reg_recursive_orDefault;  // recursive_orDefault
  SEXP Rsh_Fir_reg_mode_isMissing;  // mode_isMissing
  SEXP Rsh_Fir_reg_mode_orDefault;  // mode_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_path1_;  // path1
  SEXP Rsh_Fir_reg_path2_;  // path2
  SEXP Rsh_Fir_reg_showWarnings1_;  // showWarnings1
  SEXP Rsh_Fir_reg_showWarnings2_;  // showWarnings2
  SEXP Rsh_Fir_reg_recursive1_;  // recursive1
  SEXP Rsh_Fir_reg_recursive2_;  // recursive2
  SEXP Rsh_Fir_reg_as_octmode;  // as_octmode
  SEXP Rsh_Fir_reg_mode1_;  // mode1
  SEXP Rsh_Fir_reg_mode2_;  // mode2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_dir_create;  // dir_create
  SEXP Rsh_Fir_reg_r4_;  // r4

  // Bind parameters
  Rsh_Fir_reg_path = PARAMS[0];
  Rsh_Fir_reg_showWarnings = PARAMS[1];
  Rsh_Fir_reg_recursive = PARAMS[2];
  Rsh_Fir_reg_mode = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st path = path
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_path, RHO);
  (void)(Rsh_Fir_reg_path);
  // showWarnings_isMissing = missing.0(showWarnings)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_showWarnings;
  Rsh_Fir_reg_showWarnings_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if showWarnings_isMissing then L0(TRUE) else L0(showWarnings)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_showWarnings_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_showWarnings_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(showWarnings)
    Rsh_Fir_reg_showWarnings_orDefault = Rsh_Fir_reg_showWarnings;
    goto L0_;
  }

L0_:;
  // st showWarnings = showWarnings_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_showWarnings_orDefault, RHO);
  (void)(Rsh_Fir_reg_showWarnings_orDefault);
  // recursive_isMissing = missing.0(recursive)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_recursive;
  Rsh_Fir_reg_recursive_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if recursive_isMissing then L1(FALSE) else L1(recursive)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_recursive_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_recursive_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(recursive)
    Rsh_Fir_reg_recursive_orDefault = Rsh_Fir_reg_recursive;
    goto L1_;
  }

L1_:;
  // st recursive = recursive_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_recursive_orDefault, RHO);
  (void)(Rsh_Fir_reg_recursive_orDefault);
  // mode_isMissing = missing.0(mode)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_mode;
  Rsh_Fir_reg_mode_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if mode_isMissing then L2("0777") else L2(mode)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_mode_isMissing)) {
  // L2("0777")
    Rsh_Fir_reg_mode_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(mode)
    Rsh_Fir_reg_mode_orDefault = Rsh_Fir_reg_mode;
    goto L2_;
  }

L2_:;
  // st mode = mode_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_mode_orDefault, RHO);
  (void)(Rsh_Fir_reg_mode_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
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
  // path1 = ld path
  Rsh_Fir_reg_path1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<lang dir.create(path, showWarnings, recursive, as.octmode(mode))>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 2 [path1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_path1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // path2 = force? path1
  Rsh_Fir_reg_path2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_path1_);
  // checkMissing(path2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_path2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // showWarnings1 = ld showWarnings
  Rsh_Fir_reg_showWarnings1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 4 [showWarnings1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_showWarnings1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // showWarnings2 = force? showWarnings1
  Rsh_Fir_reg_showWarnings2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_showWarnings1_);
  // checkMissing(showWarnings2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_showWarnings2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // recursive1 = ld recursive
  Rsh_Fir_reg_recursive1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 6 [recursive1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_recursive1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // recursive2 = force? recursive1
  Rsh_Fir_reg_recursive2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recursive1_);
  // checkMissing(recursive2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_recursive2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // as_octmode = ldf `as.octmode`
  Rsh_Fir_reg_as_octmode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p = prom<V +>{
  //   mode1 = ld mode;
  //   mode2 = force? mode1;
  //   checkMissing(mode2);
  //   return mode2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2280020149_, CCP, RHO);
  // r3 = dyn as_octmode(p)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_octmode, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 11 [r3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // dir_create = ldf `dir.create` in base
  Rsh_Fir_reg_dir_create = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r4 = dyn dir_create(path2, showWarnings2, recursive2, r3)
  SEXP Rsh_Fir_array_args10[4];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_path2_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_showWarnings2_;
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_recursive2_;
  Rsh_Fir_array_args10[3] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dir_create, 4, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D5_:;
  // deopt 13 [r4]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r4_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner2280020149_(SEXP CCP, SEXP RHO) {
  // mode1 = ld mode
  Rsh_Fir_reg_mode1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // mode2 = force? mode1
  Rsh_Fir_reg_mode2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mode1_);
  // checkMissing(mode2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_mode2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return mode2
  return Rsh_Fir_reg_mode2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
