#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1070269489_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1070269489_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1070269489_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1070269489_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1070269489_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1070269489_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1070269489_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1070269489_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1070269489_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_options;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_testit;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_testit1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_suppressWarnings;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_eigenval;
  SEXP Rsh_Fir_reg_eigenval1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_warning1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_options1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r18_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1070269489
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1070269489_, RHO, CCP);
  // st warning = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r1 = dyn options[warn](1.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // st oldopt = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // r2 = clos inner2708337952
  Rsh_Fir_reg_r2_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st testit = r2
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // testit = ldf testit
  Rsh_Fir_reg_testit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

D2_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r3 = dyn testit()
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_testit, 0, NULL, NULL, CCP, RHO);
  // check L5() else D3()
  // L5()
  goto L5_;

D3_:;
  // deopt 14 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // r4 = clos inner2708337952
  Rsh_Fir_reg_r4_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st testit = r4
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // testit1 = ldf testit
  Rsh_Fir_reg_testit1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L6() else D4()
  // L6()
  goto L6_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r5 = dyn testit1()
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_testit1_, 0, NULL, NULL, CCP, RHO);
  // check L7() else D5()
  // L7()
  goto L7_;

D5_:;
  // deopt 20 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // suppressWarnings = ldf suppressWarnings
  Rsh_Fir_reg_suppressWarnings = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L8() else D6()
  // L8()
  goto L8_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p = prom<V +>{
  //   warning = ldf warning;
  //   r6 = dyn warning("testit");
  //   return r6;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r8 = dyn suppressWarnings(p)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_suppressWarnings, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L9() else D7()
  // L9()
  goto L9_;

D7_:;
  // deopt 24 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L10() else D8()
  // L10()
  goto L10_;

D8_:;
  // deopt 27 [10.0]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_const(CCP, 9);
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L10_:;
  // r9 = dyn __("stats", "rnorm")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L11() else D9()
  // L11()
  goto L11_;

D9_:;
  // deopt 30 [10.0, r9]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // checkFun.0(r9)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r9_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args4));
  // r10 = r9 as cls
  Rsh_Fir_reg_r10_ = Rsh_Fir_cast(Rsh_Fir_reg_r9_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r11 = dyn r10[, mean](1.0, 6.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r10_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L12() else D10()
  // L12()
  goto L12_;

D10_:;
  // deopt 35 [10.0, r11]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L12_:;
  // r12 = `-`(<missing>, r11)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args6);
  // r13 = `^`(10.0, r12)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args7);
  // st eigenval = r13
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // eigenval = ld eigenval
  Rsh_Fir_reg_eigenval = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L13() else D11()
  // L13()
  goto L13_;

D11_:;
  // deopt 39 [eigenval]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_eigenval;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L13_:;
  // eigenval1 = force? eigenval
  Rsh_Fir_reg_eigenval1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eigenval);
  // checkMissing(eigenval1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_eigenval1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // r14 = `<`(eigenval1, 1.0E-7)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_eigenval1_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args9);
  // c = `as.logical`(r14)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c then L14() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L14()
    goto L14_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // goto L1()
  // L1()
  goto L1_;

L1_:;
  // options1 = ldf options
  Rsh_Fir_reg_options1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L18() else D14()
  // L18()
  goto L18_;

L14_:;
  // warning1 = ldf warning
  Rsh_Fir_reg_warning1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // r15 = dyn warning1("system near singular")
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

L18_:;
  // p1 = prom<V +>{
  //   oldopt = ld oldopt;
  //   oldopt1 = force? oldopt;
  //   checkMissing(oldopt1);
  //   return oldopt1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r18 = dyn options1(p1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L19() else D15()
  // L19()
  goto L19_;

D13_:;
  // deopt 46 [r15]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 52 [r18]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L1()
  // L1()
  goto L1_;

L19_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r6 = dyn warning("testit")
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_oldopt;
  SEXP Rsh_Fir_reg_oldopt1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // oldopt = ld oldopt
  Rsh_Fir_reg_oldopt = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // oldopt1 = force? oldopt
  Rsh_Fir_reg_oldopt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_oldopt);
  // checkMissing(oldopt1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_oldopt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return oldopt1
  return Rsh_Fir_reg_oldopt1_;
}
SEXP Rsh_Fir_user_function_inner1070269489_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1070269489 dynamic dispatch ([`...`, `call.`, `immediate.`, `noBreaks.`, domain])

  return Rsh_Fir_user_version_inner1070269489_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1070269489_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1070269489 version 0 (dots, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1070269489/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_call_;
  SEXP Rsh_Fir_reg_immediate_;
  SEXP Rsh_Fir_reg_noBreaks_;
  SEXP Rsh_Fir_reg_domain;
  SEXP Rsh_Fir_reg_call__isMissing;
  SEXP Rsh_Fir_reg_call__orDefault;
  SEXP Rsh_Fir_reg_immediate__isMissing;
  SEXP Rsh_Fir_reg_immediate__orDefault;
  SEXP Rsh_Fir_reg_noBreaks__isMissing;
  SEXP Rsh_Fir_reg_noBreaks__orDefault;
  SEXP Rsh_Fir_reg_domain_isMissing;
  SEXP Rsh_Fir_reg_domain_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg____length;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_nargs;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_conditionMessage;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_conditionCall;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_withRestarts;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_message4_;
  SEXP Rsh_Fir_reg_message5_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_call_1_;
  SEXP Rsh_Fir_reg_call_2_;
  SEXP Rsh_Fir_reg_immediate_1_;
  SEXP Rsh_Fir_reg_immediate_2_;
  SEXP Rsh_Fir_reg_noBreaks_1_;
  SEXP Rsh_Fir_reg_noBreaks_2_;
  SEXP Rsh_Fir_reg__makeMessage;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_warning1;
  SEXP Rsh_Fir_reg_r38_;

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];
  Rsh_Fir_reg_call_ = PARAMS[1];
  Rsh_Fir_reg_immediate_ = PARAMS[2];
  Rsh_Fir_reg_noBreaks_ = PARAMS[3];
  Rsh_Fir_reg_domain = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // call__isMissing = missing.0(call_)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_call_;
  Rsh_Fir_reg_call__isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args14);
  // if call__isMissing then L0(TRUE) else L0(call_)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_call__isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_call__orDefault = Rsh_const(CCP, 19);
    goto L0_;
  } else {
  // L0(call_)
    Rsh_Fir_reg_call__orDefault = Rsh_Fir_reg_call_;
    goto L0_;
  }

L0_:;
  // st `call.` = call__orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_call__orDefault, RHO);
  (void)(Rsh_Fir_reg_call__orDefault);
  // immediate__isMissing = missing.0(immediate_)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_immediate_;
  Rsh_Fir_reg_immediate__isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args15);
  // if immediate__isMissing then L1(FALSE) else L1(immediate_)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_immediate__isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_immediate__orDefault = Rsh_const(CCP, 21);
    goto L1_;
  } else {
  // L1(immediate_)
    Rsh_Fir_reg_immediate__orDefault = Rsh_Fir_reg_immediate_;
    goto L1_;
  }

L1_:;
  // st `immediate.` = immediate__orDefault
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_immediate__orDefault, RHO);
  (void)(Rsh_Fir_reg_immediate__orDefault);
  // noBreaks__isMissing = missing.0(noBreaks_)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_noBreaks_;
  Rsh_Fir_reg_noBreaks__isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args16);
  // if noBreaks__isMissing then L2(FALSE) else L2(noBreaks_)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_noBreaks__isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_noBreaks__orDefault = Rsh_const(CCP, 21);
    goto L2_;
  } else {
  // L2(noBreaks_)
    Rsh_Fir_reg_noBreaks__orDefault = Rsh_Fir_reg_noBreaks_;
    goto L2_;
  }

L2_:;
  // st `noBreaks.` = noBreaks__orDefault
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_noBreaks__orDefault, RHO);
  (void)(Rsh_Fir_reg_noBreaks__orDefault);
  // domain_isMissing = missing.0(domain)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_domain;
  Rsh_Fir_reg_domain_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args17);
  // if domain_isMissing then L3(NULL) else L3(domain)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_domain_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_domain_orDefault = Rsh_const(CCP, 24);
    goto L3_;
  } else {
  // L3(domain)
    Rsh_Fir_reg_domain_orDefault = Rsh_Fir_reg_domain;
    goto L3_;
  }

L3_:;
  // st domain = domain_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_domain_orDefault, RHO);
  (void)(Rsh_Fir_reg_domain_orDefault);
  // sym = ldf `...length`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base = ldf `...length` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L4_:;
  // r3 = `==`(r1, 1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args19);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args20);
  // if c then L16() else L5(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L16()
    goto L16_;
  } else {
  // L5(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1;
    goto L5_;
  }

L13_:;
  // ___length = ldf `...length` in base
  Rsh_Fir_reg____length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r2 = dyn ___length()
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____length, 0, NULL, NULL, CCP, RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L14_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L4(r)
  // L4(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L4_;

D0_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L5_:;
  // c9 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c9 then L22() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L22()
    goto L22_;
  } else {
  // L7()
    goto L7_;
  }

L15_:;
  // goto L4(r2)
  // L4(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L4_;

L16_:;
  // sym1 = ldf inherits
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base1 = ldf inherits in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L6_:;
  // c6 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args23);
  // c7 = `&&`(c5, c6)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args24);
  // goto L5(c7)
  // L5(c7)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c7_;
  goto L5_;

L7_:;
  // sym6 = ldf `.Internal`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base6 = ldf `.Internal` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard6 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L17_:;
  // __1 = ld `..1`
  Rsh_Fir_reg___1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

L18_:;
  // r4 = dyn base1(<sym ..1>, "condition")
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L6(c, r4)
  // L6(c, r4)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L6_;

L22_:;
  // __3 = ld `..1`
  Rsh_Fir_reg___3_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

D1_:;
  // deopt 8 [c, __1]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg___1_;
  Rsh_Fir_deopt(8, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 15 [__3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg___3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r35
  return Rsh_Fir_reg_r35_;

L19_:;
  // __2 = force? __1
  Rsh_Fir_reg___2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___1_);
  // checkMissing(__2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg___2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r6 = dyn inherits(__2, "condition", FALSE)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg___2_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L23_:;
  // __4 = force? __3
  Rsh_Fir_reg___4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___3_);
  // checkMissing(__4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg___4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // st cond = __4
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg___4_, RHO);
  (void)(Rsh_Fir_reg___4_);
  // sym2 = ldf nargs
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base2 = ldf nargs in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard2 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L42_:;
  // call_1 = ld `call.`
  Rsh_Fir_reg_call_1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L44() else D15()
  // L44()
  goto L44_;

L43_:;
  // r34 = dyn base6(<lang warning(call., immediate., noBreaks., .makeMessage(..., domain=domain))>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L12(r34)
  // L12(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L12_;

D2_:;
  // deopt 13 [c, r6]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 59 [call_1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_call_1_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L8_:;
  // r10 = `>`(r8, 1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args32);
  // c10 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // if c10 then L27() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L27()
    goto L27_;
  } else {
  // L9()
    goto L9_;
  }

L20_:;
  // goto L6(c, r6)
  // L6(c, r6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_1;
  goto L6_;

L24_:;
  // nargs = ldf nargs in base
  Rsh_Fir_reg_nargs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r9 = dyn nargs()
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nargs, 0, NULL, NULL, CCP, RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

L25_:;
  // r7 = dyn base2()
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 0, NULL, NULL, CCP, RHO);
  // goto L8(r7)
  // L8(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_;
  goto L8_;

L44_:;
  // call_2 = force? call_1
  Rsh_Fir_reg_call_2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call_1_);
  // checkMissing(call_2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_call_2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // immediate_1 = ld `immediate.`
  Rsh_Fir_reg_immediate_1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L45() else D16()
  // L45()
  goto L45_;

D4_:;
  // deopt 21 [r9]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 61 [immediate_1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_immediate_1_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // conditionMessage = ldf conditionMessage
  Rsh_Fir_reg_conditionMessage = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

L26_:;
  // goto L8(r9)
  // L8(r9)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_1;
  goto L8_;

L27_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L45_:;
  // immediate_2 = force? immediate_1
  Rsh_Fir_reg_immediate_2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_immediate_1_);
  // checkMissing(immediate_2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_immediate_2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // noBreaks_1 = ld `noBreaks.`
  Rsh_Fir_reg_noBreaks_1_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L46() else D17()
  // L46()
  goto L46_;

D5_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 63 [noBreaks_1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_noBreaks_1_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L28_:;
  // p = prom<V +>{
  //   gettext = ldf gettext;
  //   r11 = dyn gettext("additional arguments ignored in warning()");
  //   return r11;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1070269489_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   stderr = ldf stderr;
  //   r13 = dyn stderr();
  //   return r13;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1070269489_1, 0, NULL, CCP, RHO);
  // r15 = dyn cat[, , sep, file](p, "\n", "", p1)
  SEXP Rsh_Fir_array_args37[4];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args37[3] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 42);
  Rsh_Fir_array_arg_names11[3] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 4, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

L31_:;
  // p2 = prom<V +>{
  //   cond = ld cond;
  //   cond1 = force? cond;
  //   checkMissing(cond1);
  //   return cond1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1070269489_2, 0, NULL, CCP, RHO);
  // r18 = dyn conditionMessage(p2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_conditionMessage, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

L46_:;
  // noBreaks_2 = force? noBreaks_1
  Rsh_Fir_reg_noBreaks_2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_noBreaks_1_);
  // checkMissing(noBreaks_2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_noBreaks_2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // _makeMessage = ldf `.makeMessage`
  Rsh_Fir_reg__makeMessage = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L47() else D18()
  // L47()
  goto L47_;

D6_:;
  // deopt 32 [r15]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 38 [r18]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L10()
  // L10()
  goto L10_;

L32_:;
  // st message = r18
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_r18_1, RHO);
  (void)(Rsh_Fir_reg_r18_1);
  // conditionCall = ldf conditionCall
  Rsh_Fir_reg_conditionCall = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L33() else D9()
  // L33()
  goto L33_;

L47_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // p6 = prom<V +>{
  //   domain1 = ld domain;
  //   domain2 = force? domain1;
  //   checkMissing(domain2);
  //   return domain2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1070269489_3, 0, NULL, CCP, RHO);
  // r37 = dyn _makeMessage[`...`, domain](ddd1, p6)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_ddd1_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__makeMessage, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L48() else D19()
  // L48()
  goto L48_;

D9_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 70 [r37]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L33_:;
  // p3 = prom<V +>{
  //   cond2 = ld cond;
  //   cond3 = force? cond2;
  //   checkMissing(cond3);
  //   return cond3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1070269489_4, 0, NULL, CCP, RHO);
  // r20 = dyn conditionCall(p3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_conditionCall, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L34() else D10()
  // L34()
  goto L34_;

L48_:;
  // warning = ldf warning in base
  Rsh_Fir_reg_warning1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r38 = dyn warning(call_2, immediate_2, noBreaks_2, r37)
  SEXP Rsh_Fir_array_args45[4];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_call_2_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_immediate_2_;
  Rsh_Fir_array_args45[2] = Rsh_Fir_reg_noBreaks_2_;
  Rsh_Fir_array_args45[3] = Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning1, 4, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L49() else D20()
  // L49()
  goto L49_;

D10_:;
  // deopt 43 [r20]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 72 [r38]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L34_:;
  // st call = r20
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // withRestarts = ldf withRestarts
  Rsh_Fir_reg_withRestarts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L35() else D11()
  // L35()
  goto L35_;

L49_:;
  // goto L12(r38)
  // L12(r38)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r38_;
  goto L12_;

D11_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p4 = prom<V +>{
  //   sym3 = ldf `.Internal`;
  //   base3 = ldf `.Internal` in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L2() else L3();
  // L0():
  //   sym4 = ldf `.Internal`;
  //   base4 = ldf `.Internal` in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L4() else L5();
  // L2():
  //   cond4 = ld cond;
  //   cond5 = force? cond4;
  //   checkMissing(cond5);
  //   message = ld message;
  //   message1 = force? message;
  //   checkMissing(message1);
  //   call = ld call;
  //   call1 = force? call;
  //   checkMissing(call1);
  //   _signalCondition = ldf `.signalCondition` in base;
  //   r23 = dyn _signalCondition(cond5, message1, call1);
  //   goto L0();
  // L3():
  //   r21 = dyn base3(<lang .signalCondition(cond, message, call)>);
  //   goto L0();
  // L1(r25):
  //   return r25;
  // L4():
  //   message2 = ld message;
  //   message3 = force? message2;
  //   checkMissing(message3);
  //   call2 = ld call;
  //   call3 = force? call2;
  //   checkMissing(call3);
  //   _dfltWarn = ldf `.dfltWarn` in base;
  //   r26 = dyn _dfltWarn(message3, call3);
  //   goto L1(r26);
  // L5():
  //   r24 = dyn base4(<lang .dfltWarn(message, call)>);
  //   goto L1(r24);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1070269489_5, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   r28 = clos inner2708337952;
  //   return r28;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1070269489_6, 0, NULL, CCP, RHO);
  // r30 = dyn withRestarts[, muffleWarning](p4, p5)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_withRestarts, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L36() else D12()
  // L36()
  goto L36_;

D12_:;
  // deopt 50 [r30]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L36_:;
  // sym5 = ldf invisible
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base5 = ldf invisible in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard5 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r32
  return Rsh_Fir_reg_r32_;

L37_:;
  // message4 = ld message
  Rsh_Fir_reg_message4_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L39() else D13()
  // L39()
  goto L39_;

L38_:;
  // r31 = dyn base5(<sym message>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L11(r31)
  // L11(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L11_;

D13_:;
  // deopt 53 [message4]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_message4_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L39_:;
  // message5 = force? message4
  Rsh_Fir_reg_message5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_message4_);
  // checkMissing(message5)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_message5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r33 = dyn invisible(message5)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_message5_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L40() else D14()
  // L40()
  goto L40_;

D14_:;
  // deopt 56 [r33]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L11(r33)
  // L11(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L11_;
}
SEXP Rsh_Fir_user_promise_inner1070269489_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettext;
  SEXP Rsh_Fir_reg_r11_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1070269489/0: expected 0, got %d", NCAPTURES);

  // gettext = ldf gettext
  Rsh_Fir_reg_gettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // r11 = dyn gettext("additional arguments ignored in warning()")
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r11
  return Rsh_Fir_reg_r11_1;
}
SEXP Rsh_Fir_user_promise_inner1070269489_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stderr;
  SEXP Rsh_Fir_reg_r13_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1070269489/0: expected 0, got %d", NCAPTURES);

  // stderr = ldf stderr
  Rsh_Fir_reg_stderr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // r13 = dyn stderr()
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stderr, 0, NULL, NULL, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_1;
}
SEXP Rsh_Fir_user_promise_inner1070269489_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cond;
  SEXP Rsh_Fir_reg_cond1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1070269489/0: expected 0, got %d", NCAPTURES);

  // cond = ld cond
  Rsh_Fir_reg_cond = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // cond1 = force? cond
  Rsh_Fir_reg_cond1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cond);
  // checkMissing(cond1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_cond1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return cond1
  return Rsh_Fir_reg_cond1_;
}
SEXP Rsh_Fir_user_promise_inner1070269489_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_domain1_;
  SEXP Rsh_Fir_reg_domain2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1070269489/0: expected 0, got %d", NCAPTURES);

  // domain1 = ld domain
  Rsh_Fir_reg_domain1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // domain2 = force? domain1
  Rsh_Fir_reg_domain2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_domain1_);
  // checkMissing(domain2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_domain2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return domain2
  return Rsh_Fir_reg_domain2_;
}
SEXP Rsh_Fir_user_promise_inner1070269489_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cond2_;
  SEXP Rsh_Fir_reg_cond3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1070269489/0: expected 0, got %d", NCAPTURES);

  // cond2 = ld cond
  Rsh_Fir_reg_cond2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // cond3 = force? cond2
  Rsh_Fir_reg_cond3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cond2_);
  // checkMissing(cond3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_cond3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return cond3
  return Rsh_Fir_reg_cond3_;
}
SEXP Rsh_Fir_user_promise_inner1070269489_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_cond4_;
  SEXP Rsh_Fir_reg_cond5_;
  SEXP Rsh_Fir_reg_message;
  SEXP Rsh_Fir_reg_message1_;
  SEXP Rsh_Fir_reg_call;
  SEXP Rsh_Fir_reg_call1_;
  SEXP Rsh_Fir_reg__signalCondition;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_message2_;
  SEXP Rsh_Fir_reg_message3_;
  SEXP Rsh_Fir_reg_call2_;
  SEXP Rsh_Fir_reg_call3_;
  SEXP Rsh_Fir_reg__dfltWarn;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1070269489/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf `.Internal`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base3 = ldf `.Internal` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard3 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // sym4 = ldf `.Internal`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base4 = ldf `.Internal` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard4 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L2_:;
  // cond4 = ld cond
  Rsh_Fir_reg_cond4_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // cond5 = force? cond4
  Rsh_Fir_reg_cond5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cond4_);
  // checkMissing(cond5)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_cond5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // message = ld message
  Rsh_Fir_reg_message = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // message1 = force? message
  Rsh_Fir_reg_message1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_message);
  // checkMissing(message1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_message1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // call = ld call
  Rsh_Fir_reg_call = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // call1 = force? call
  Rsh_Fir_reg_call1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call);
  // checkMissing(call1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_call1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // _signalCondition = ldf `.signalCondition` in base
  Rsh_Fir_reg__signalCondition = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // r23 = dyn _signalCondition(cond5, message1, call1)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_cond5_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_message1_;
  Rsh_Fir_array_args51[2] = Rsh_Fir_reg_call1_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__signalCondition, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L3_:;
  // r21 = dyn base3(<lang .signalCondition(cond, message, call)>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L1_:;
  // return r25
  return Rsh_Fir_reg_r25_;

L4_:;
  // message2 = ld message
  Rsh_Fir_reg_message2_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // message3 = force? message2
  Rsh_Fir_reg_message3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_message2_);
  // checkMissing(message3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_message3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // call2 = ld call
  Rsh_Fir_reg_call2_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // call3 = force? call2
  Rsh_Fir_reg_call3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call2_);
  // checkMissing(call3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_call3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // _dfltWarn = ldf `.dfltWarn` in base
  Rsh_Fir_reg__dfltWarn = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r26 = dyn _dfltWarn(message3, call3)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_message3_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_call3_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__dfltWarn, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L1(r26)
  // L1(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L1_;

L5_:;
  // r24 = dyn base4(<lang .dfltWarn(message, call)>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L1(r24)
  // L1(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner1070269489_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1070269489/0: expected 0, got %d", NCAPTURES);

  // r28 = clos inner2708337952
  Rsh_Fir_reg_r28_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 24);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
