#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1661399015_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1661399015_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1661399015_(SEXP CCP, SEXP RHO);
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
  // r = clos inner1661399015
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1661399015_, RHO, CCP);
  // st `Sys.chmod` = r
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
SEXP Rsh_Fir_user_function_inner1661399015_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1661399015 dynamic dispatch ([paths, mode, use_umask])

  return Rsh_Fir_user_version_inner1661399015_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1661399015_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1661399015 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1661399015/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_paths;  // paths
  SEXP Rsh_Fir_reg_mode;  // mode
  SEXP Rsh_Fir_reg_use_umask;  // use_umask
  SEXP Rsh_Fir_reg_mode_isMissing;  // mode_isMissing
  SEXP Rsh_Fir_reg_mode_orDefault;  // mode_orDefault
  SEXP Rsh_Fir_reg_use_umask_isMissing;  // use_umask_isMissing
  SEXP Rsh_Fir_reg_use_umask_orDefault;  // use_umask_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_paths1_;  // paths1
  SEXP Rsh_Fir_reg_paths2_;  // paths2
  SEXP Rsh_Fir_reg_as_octmode;  // as_octmode
  SEXP Rsh_Fir_reg_mode1_;  // mode1
  SEXP Rsh_Fir_reg_mode2_;  // mode2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_use_umask1_;  // use_umask1
  SEXP Rsh_Fir_reg_use_umask2_;  // use_umask2
  SEXP Rsh_Fir_reg_Sys_chmod;  // Sys_chmod
  SEXP Rsh_Fir_reg_r4_;  // r4

  // Bind parameters
  Rsh_Fir_reg_paths = PARAMS[0];
  Rsh_Fir_reg_mode = PARAMS[1];
  Rsh_Fir_reg_use_umask = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st paths = paths
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_paths, RHO);
  (void)(Rsh_Fir_reg_paths);
  // mode_isMissing = missing.0(mode)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_mode;
  Rsh_Fir_reg_mode_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if mode_isMissing then L0("0777") else L0(mode)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_mode_isMissing)) {
  // L0("0777")
    Rsh_Fir_reg_mode_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(mode)
    Rsh_Fir_reg_mode_orDefault = Rsh_Fir_reg_mode;
    goto L0_;
  }

L0_:;
  // st mode = mode_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_mode_orDefault, RHO);
  (void)(Rsh_Fir_reg_mode_orDefault);
  // use_umask_isMissing = missing.0(use_umask)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_use_umask;
  Rsh_Fir_reg_use_umask_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if use_umask_isMissing then L1(TRUE) else L1(use_umask)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_use_umask_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_use_umask_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(use_umask)
    Rsh_Fir_reg_use_umask_orDefault = Rsh_Fir_reg_use_umask;
    goto L1_;
  }

L1_:;
  // st use_umask = use_umask_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_use_umask_orDefault, RHO);
  (void)(Rsh_Fir_reg_use_umask_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L3_:;
  // paths1 = ld paths
  Rsh_Fir_reg_paths1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // r = dyn base(<lang Sys.chmod(paths, as.octmode(mode), use_umask)>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [paths1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_paths1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // paths2 = force? paths1
  Rsh_Fir_reg_paths2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_paths1_);
  // checkMissing(paths2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_paths2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // as_octmode = ldf `as.octmode`
  Rsh_Fir_reg_as_octmode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   mode1 = ld mode;
  //   mode2 = force? mode1;
  //   checkMissing(mode2);
  //   return mode2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1661399015_, CCP, RHO);
  // r3 = dyn as_octmode(p)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_octmode, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // use_umask1 = ld use_umask
  Rsh_Fir_reg_use_umask1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 8 [use_umask1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_use_umask1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // use_umask2 = force? use_umask1
  Rsh_Fir_reg_use_umask2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_use_umask1_);
  // checkMissing(use_umask2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_use_umask2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // Sys_chmod = ldf `Sys.chmod` in base
  Rsh_Fir_reg_Sys_chmod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r4 = dyn Sys_chmod(paths2, r3, use_umask2)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_paths2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_use_umask2_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_chmod, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

D4_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r4_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner1661399015_(SEXP CCP, SEXP RHO) {
  // mode1 = ld mode
  Rsh_Fir_reg_mode1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // mode2 = force? mode1
  Rsh_Fir_reg_mode2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mode1_);
  // checkMissing(mode2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_mode2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return mode2
  return Rsh_Fir_reg_mode2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
