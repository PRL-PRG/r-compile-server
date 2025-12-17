#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner110175470_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner110175470_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner110175470_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner110175470_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner110175470_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner110175470
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner110175470_, RHO, CCP);
  // st getHook = r
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
SEXP Rsh_Fir_user_function_inner110175470_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner110175470 dynamic dispatch ([hookName])

  return Rsh_Fir_user_version_inner110175470_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner110175470_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner110175470 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner110175470/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_hookName;  // hookName
  SEXP Rsh_Fir_reg_get0_;  // get0
  SEXP Rsh_Fir_reg_hookName1_;  // hookName1
  SEXP Rsh_Fir_reg_hookName2_;  // hookName2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg__userHooksEnv;  // _userHooksEnv
  SEXP Rsh_Fir_reg__userHooksEnv1_;  // _userHooksEnv1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r6_;  // r6

  // Bind parameters
  Rsh_Fir_reg_hookName = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st hookName = hookName
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_hookName, RHO);
  (void)(Rsh_Fir_reg_hookName);
  // get0 = ldf get0
  Rsh_Fir_reg_get0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   hookName1 = ld hookName;
  //   hookName2 = force? hookName1;
  //   checkMissing(hookName2);
  //   return hookName2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner110175470_, CCP, RHO);
  // p1 = prom<V +>{
  //   _userHooksEnv = ld `.userHooksEnv`;
  //   _userHooksEnv1 = force? _userHooksEnv;
  //   checkMissing(_userHooksEnv1);
  //   return _userHooksEnv1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner110175470_1, CCP, RHO);
  // p2 = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   list = ldf list in base;
  //   r4 = dyn list();
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base();
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner110175470_2, CCP, RHO);
  // r6 = dyn get0[, envir, inherits, ifnotfound](p, p1, FALSE, p2)
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[3] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get0_, 4, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 9 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner110175470_(SEXP CCP, SEXP RHO) {
  // hookName1 = ld hookName
  Rsh_Fir_reg_hookName1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // hookName2 = force? hookName1
  Rsh_Fir_reg_hookName2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hookName1_);
  // checkMissing(hookName2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_hookName2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return hookName2
  return Rsh_Fir_reg_hookName2_;
}
SEXP Rsh_Fir_user_promise_inner110175470_1(SEXP CCP, SEXP RHO) {
  // _userHooksEnv = ld `.userHooksEnv`
  Rsh_Fir_reg__userHooksEnv = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // _userHooksEnv1 = force? _userHooksEnv
  Rsh_Fir_reg__userHooksEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__userHooksEnv);
  // checkMissing(_userHooksEnv1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg__userHooksEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return _userHooksEnv1
  return Rsh_Fir_reg__userHooksEnv1_;
}
SEXP Rsh_Fir_user_promise_inner110175470_2(SEXP CCP, SEXP RHO) {
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r4 = dyn list()
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
