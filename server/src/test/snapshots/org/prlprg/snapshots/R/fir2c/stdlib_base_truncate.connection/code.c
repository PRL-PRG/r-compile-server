#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3958450520_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3958450520_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3958450520_(SEXP CCP, SEXP RHO);
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
  // r = clos inner3958450520
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3958450520_, RHO, CCP);
  // st `truncate.connection` = r
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
SEXP Rsh_Fir_user_function_inner3958450520_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3958450520 dynamic dispatch ([con, `...`])

  return Rsh_Fir_user_version_inner3958450520_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3958450520_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3958450520 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3958450520/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_con;  // con
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_isOpen;  // isOpen
  SEXP Rsh_Fir_reg_con1_;  // con1
  SEXP Rsh_Fir_reg_con2_;  // con2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_con3_;  // con3
  SEXP Rsh_Fir_reg_con4_;  // con4
  SEXP Rsh_Fir_reg_truncate;  // truncate
  SEXP Rsh_Fir_reg_r7_;  // r7

  // Bind parameters
  Rsh_Fir_reg_con = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st con = con
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_con, RHO);
  (void)(Rsh_Fir_reg_con);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // isOpen = ldf isOpen
  Rsh_Fir_reg_isOpen = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // goto L1()
  // L1()
  goto L1_;

L1_:;
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   con1 = ld con;
  //   con2 = force? con1;
  //   checkMissing(con2);
  //   return con2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3958450520_, CCP, RHO);
  // r1 = dyn isOpen(p)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isOpen, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L5() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5()
    goto L5_;
  } else {
  // L0()
    goto L0_;
  }

L5_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r3 = dyn stop("can only truncate an open connection")
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L1()
  // L1()
  goto L1_;

L9_:;
  // con3 = ld con
  Rsh_Fir_reg_con3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

L10_:;
  // r5 = dyn base(<lang truncate(con)>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L2_;

D4_:;
  // deopt 13 [con3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_con3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // con4 = force? con3
  Rsh_Fir_reg_con4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con3_);
  // checkMissing(con4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_con4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // truncate = ldf truncate in base
  Rsh_Fir_reg_truncate = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r7 = dyn truncate(con4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_con4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_truncate, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

D5_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner3958450520_(SEXP CCP, SEXP RHO) {
  // con1 = ld con
  Rsh_Fir_reg_con1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // con2 = force? con1
  Rsh_Fir_reg_con2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con1_);
  // checkMissing(con2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_con2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return con2
  return Rsh_Fir_reg_con2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
