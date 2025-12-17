#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2296048169_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2296048169_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2296048169_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2296048169_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2296048169_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner2296048169
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2296048169_, RHO, CCP);
  // st `.asSparse` = r
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
SEXP Rsh_Fir_user_function_inner2296048169_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2296048169 dynamic dispatch ([m])

  return Rsh_Fir_user_version_inner2296048169_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2296048169_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2296048169 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2296048169/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_suppressPackageStartupMessages;  // suppressPackageStartupMessages
  SEXP Rsh_Fir_reg_requireNamespace;  // requireNamespace
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_gettextf;  // gettextf
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r11_;  // r11

  // Bind parameters
  Rsh_Fir_reg_m = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st m = m
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_m, RHO);
  (void)(Rsh_Fir_reg_m);
  // suppressPackageStartupMessages = ldf suppressPackageStartupMessages
  Rsh_Fir_reg_suppressPackageStartupMessages = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

L0_:;
  // goto L1()
  // L1()
  goto L1_;

L1_:;
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   requireNamespace = ldf requireNamespace;
  //   r = dyn requireNamespace("Matrix");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2296048169_, CCP, RHO);
  // r2 = dyn suppressPackageStartupMessages(p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_suppressPackageStartupMessages, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // r3 = `!`(r2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
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
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p1 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   r4 = dyn gettextf("%s needs package 'Matrix' correctly installed", "contr*(.., sparse=TRUE)");
  //   return r4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2296048169_1, CCP, RHO);
  // r6 = dyn stop[, domain](p1, NA_LGL)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 10 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L1()
  // L1()
  goto L1_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r8 = dyn __("methods", "as")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // checkFun.0(r8)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r8_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args7));
  // r9 = r8 as cls
  Rsh_Fir_reg_r9_ = Rsh_Fir_cast(Rsh_Fir_reg_r8_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p2 = prom<V +>{
  //   m1 = ld m;
  //   m2 = force? m1;
  //   checkMissing(m2);
  //   return m2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2296048169_2, CCP, RHO);
  // r11 = dyn r9(p2, "sparseMatrix")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r9_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

D6_:;
  // deopt 21 [r11]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_inner2296048169_(SEXP CCP, SEXP RHO) {
  // requireNamespace = ldf requireNamespace
  Rsh_Fir_reg_requireNamespace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // r = dyn requireNamespace("Matrix")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_requireNamespace, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2296048169_1(SEXP CCP, SEXP RHO) {
  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // r4 = dyn gettextf("%s needs package 'Matrix' correctly installed", "contr*(.., sparse=TRUE)")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner2296048169_2(SEXP CCP, SEXP RHO) {
  // m1 = ld m
  Rsh_Fir_reg_m1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m2 = force? m1
  Rsh_Fir_reg_m2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m1_);
  // checkMissing(m2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_m2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return m2
  return Rsh_Fir_reg_m2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
