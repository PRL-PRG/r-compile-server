#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1022023629_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1022023629_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1022023629_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1022023629_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1022023629_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1022023629_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1022023629_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1022023629_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1022023629_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1022023629_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_options1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_options2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_cat1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_options3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_cat2_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_l10n_info;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_options4_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_cat3_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_l10n_info1_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_options5_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_cat4_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_options6_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r53_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1022023629
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1022023629_, RHO, CCP);
  // st sQuote = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // r1 = dyn options("useFancyQuotes")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // st op = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p = prom<V +>{
  //   sQuote = ldf sQuote;
  //   r2 = dyn sQuote("x");
  //   return r2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn paste("argument", p, "must be non-zero")
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 13 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // options1 = ldf options
  Rsh_Fir_reg_options1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // r5 = dyn options1[useFancyQuotes](FALSE)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options1_, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 18 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   sQuote1 = ldf sQuote;
  //   r6 = dyn sQuote1("single");
  //   return r6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   dQuote = ldf dQuote;
  //   r8 = dyn dQuote("double");
  //   return r8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r10 = dyn cat("\ndistinguish plain", p1, "and", p2, "quotes\n")
  SEXP Rsh_Fir_array_args6[5];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args6[3] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args6[4] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[5];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_array_arg_names6[4] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 5, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 26 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // options2 = ldf options
  Rsh_Fir_reg_options2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // r11 = dyn options2[useFancyQuotes](TRUE)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options2_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 31 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // cat1 = ldf cat
  Rsh_Fir_reg_cat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p3 = prom<V +>{
  //   sQuote2 = ldf sQuote;
  //   r12 = dyn sQuote2("single");
  //   return r12;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   dQuote1 = ldf dQuote;
  //   r14 = dyn dQuote1("double");
  //   return r14;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r16 = dyn cat1("\ndistinguish fancy", p3, "and", p4, "quotes\n")
  SEXP Rsh_Fir_array_args10[5];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args10[3] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args10[4] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names10[5];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat1_, 5, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 39 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // options3 = ldf options
  Rsh_Fir_reg_options3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // r17 = dyn options3[useFancyQuotes]("TeX")
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options3_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 44 [r17]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // cat2 = ldf cat
  Rsh_Fir_reg_cat2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p5 = prom<V +>{
  //   sQuote3 = ldf sQuote;
  //   r18 = dyn sQuote3("single");
  //   return r18;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   dQuote2 = ldf dQuote;
  //   r20 = dyn dQuote2("double");
  //   return r20;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r22 = dyn cat2("\ndistinguish TeX", p5, "and", p6, "quotes\n")
  SEXP Rsh_Fir_array_args14[5];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args14[3] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args14[4] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names14[5];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_array_arg_names14[4] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat2_, 5, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 52 [r22]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // l10n_info = ldf l10n_info
  Rsh_Fir_reg_l10n_info = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L19() else D16()
  // L19()
  goto L19_;

D16_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // r23 = dyn l10n_info()
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_l10n_info, 0, NULL, NULL, CCP, RHO);
  // check L20() else D17()
  // L20()
  goto L20_;

D17_:;
  // deopt 55 [r23]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L20_:;
  // c = `is.object`(r23)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args15);
  // if c then L22() else L23(r23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L22()
    goto L22_;
  } else {
  // L23(r23)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r23_;
    goto L23_;
  }

L21_:;
  // c1 = `as.logical`(dx1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // if c1 then L25() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L25()
    goto L25_;
  } else {
  // L0()
    goto L0_;
  }

L22_:;
  // dr = tryDispatchBuiltin.1("$", r23)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc then L24() else L23(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L24()
    goto L24_;
  } else {
  // L23(dr)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_dr;
    goto L23_;
  }

L23_:;
  // r26 = `$`(r25, <sym `Latin-1`>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args19);
  // goto L21(r26)
  // L21(r26)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r26_;
  goto L21_;

L0_:;
  // l10n_info1 = ldf l10n_info
  Rsh_Fir_reg_l10n_info1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L31() else D22()
  // L31()
  goto L31_;

L1_:;
  // options6 = ldf options
  Rsh_Fir_reg_options6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L43() else D28()
  // L43()
  goto L43_;

L24_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L21(dx)
  // L21(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L21_;

L25_:;
  // options4 = ldf options
  Rsh_Fir_reg_options4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L26() else D18()
  // L26()
  goto L26_;

D18_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 90 []
  Rsh_Fir_deopt(90, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p7 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r28):
  //   return r28;
  // L1():
  //   c2 = ldf c in base;
  //   r29 = dyn c2("\ufffd", "\ufffd", "\ufffd", "?");
  //   goto L0(r29);
  // L2():
  //   r27 = dyn base("\ufffd", "\ufffd", "\ufffd", "?");
  //   goto L0(r27);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r31 = dyn options4[useFancyQuotes](p7)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options4_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L27() else D19()
  // L27()
  goto L27_;

L31_:;
  // r38 = dyn l10n_info1()
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_l10n_info1_, 0, NULL, NULL, CCP, RHO);
  // check L32() else D23()
  // L32()
  goto L32_;

L43_:;
  // p13 = prom<V +>{
  //   op = ld op;
  //   op1 = force? op;
  //   checkMissing(op1);
  //   return op1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r53 = dyn options6(p13)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options6_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L44() else D29()
  // L44()
  goto L44_;

D19_:;
  // deopt 61 [r31]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 72 [r38]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 92 [r53]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L27_:;
  // cat3 = ldf cat
  Rsh_Fir_reg_cat3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L28() else D20()
  // L28()
  goto L28_;

L32_:;
  // c3 = `is.object`(r38)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args27);
  // if c3 then L34() else L35(r38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L34()
    goto L34_;
  } else {
  // L35(r38)
    Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r38_;
    goto L35_;
  }

L44_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r53
  return Rsh_Fir_reg_r53_;

D20_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p8 = prom<V +>{
  //   sQuote4 = ldf sQuote;
  //   r32 = dyn sQuote4("guillemet");
  //   return r32;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   dQuote3 = ldf dQuote;
  //   r34 = dyn dQuote3("Spanish question");
  //   return r34;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r36 = dyn cat3("\n", p8, "and", p9, "styles\n")
  SEXP Rsh_Fir_array_args30[5];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args30[3] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args30[4] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names21[5];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_array_arg_names21[4] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat3_, 5, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L29() else D21()
  // L29()
  goto L29_;

L33_:;
  // c4 = `as.logical`(dx3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c4 then L37() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L37()
    goto L37_;
  } else {
  // L2()
    goto L2_;
  }

L34_:;
  // dr2 = tryDispatchBuiltin.1("$", r38)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc1 then L36() else L35(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L36()
    goto L36_;
  } else {
  // L35(dr2)
    Rsh_Fir_reg_r40_ = Rsh_Fir_reg_dr2_;
    goto L35_;
  }

L35_:;
  // r41 = `$`(r40, <sym `UTF-8`>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args34);
  // goto L33(r41)
  // L33(r41)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r41_;
  goto L33_;

D21_:;
  // deopt 69 [r36]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L2_:;
  // goto L1()
  // L1()
  goto L1_;

L29_:;
  // goto L1()
  // L1()
  goto L1_;

L36_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L33(dx2)
  // L33(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L33_;

L37_:;
  // options5 = ldf options
  Rsh_Fir_reg_options5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L38() else D24()
  // L38()
  goto L38_;

D24_:;
  // deopt 75 []
  Rsh_Fir_deopt(75, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p10 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r43):
  //   return r43;
  // L1():
  //   c5 = ldf c in base;
  //   r44 = dyn c5("\u00ab", "\u00bb", "\u00bf", "?");
  //   goto L0(r44);
  // L2():
  //   r42 = dyn base1("\u00ab", "\u00bb", "\u00bf", "?");
  //   goto L0(r42);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r46 = dyn options5[useFancyQuotes](p10)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options5_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L39() else D25()
  // L39()
  goto L39_;

D25_:;
  // deopt 78 [r46]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L39_:;
  // cat4 = ldf cat
  Rsh_Fir_reg_cat4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L40() else D26()
  // L40()
  goto L40_;

D26_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p11 = prom<V +>{
  //   sQuote5 = ldf sQuote;
  //   r47 = dyn sQuote5("guillemet");
  //   return r47;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   dQuote4 = ldf dQuote;
  //   r49 = dyn dQuote4("Spanish question");
  //   return r49;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r51 = dyn cat4("\n", p11, "and", p12, "styles\n")
  SEXP Rsh_Fir_array_args42[5];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args42[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args42[3] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args42[4] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names27[5];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_array_arg_names27[4] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat4_, 5, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L41() else D27()
  // L41()
  goto L41_;

D27_:;
  // deopt 86 [r51]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L1()
  // L1()
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sQuote;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sQuote = ldf sQuote
  Rsh_Fir_reg_sQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r2 = dyn sQuote("x")
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sQuote1_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sQuote1 = ldf sQuote
  Rsh_Fir_reg_sQuote1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r6 = dyn sQuote1("single")
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote1_, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dQuote;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dQuote = ldf dQuote
  Rsh_Fir_reg_dQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // r8 = dyn dQuote("double")
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dQuote, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sQuote2_;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sQuote2 = ldf sQuote
  Rsh_Fir_reg_sQuote2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r12 = dyn sQuote2("single")
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote2_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names8, CCP, RHO);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dQuote1_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dQuote1 = ldf dQuote
  Rsh_Fir_reg_dQuote1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // r14 = dyn dQuote1("double")
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dQuote1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sQuote3_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sQuote3 = ldf sQuote
  Rsh_Fir_reg_sQuote3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r18 = dyn sQuote3("single")
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote3_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dQuote2_;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dQuote2 = ldf dQuote
  Rsh_Fir_reg_dQuote2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // r20 = dyn dQuote2("double")
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dQuote2_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r20
  return Rsh_Fir_reg_r20_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r29_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r28
  return Rsh_Fir_reg_r28_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r29 = dyn c2("\ufffd", "\ufffd", "\ufffd", "?")
  SEXP Rsh_Fir_array_args22[4];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args22[3] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 4, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L0_;

L2_:;
  // r27 = dyn base("\ufffd", "\ufffd", "\ufffd", "?")
  SEXP Rsh_Fir_array_args23[4];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_op;
  SEXP Rsh_Fir_reg_op1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // op = ld op
  Rsh_Fir_reg_op = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // op1 = force? op
  Rsh_Fir_reg_op1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_op);
  // checkMissing(op1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_op1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return op1
  return Rsh_Fir_reg_op1_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sQuote4_;
  SEXP Rsh_Fir_reg_r32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sQuote4 = ldf sQuote
  Rsh_Fir_reg_sQuote4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r32 = dyn sQuote4("guillemet")
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote4_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names19, CCP, RHO);
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dQuote3_;
  SEXP Rsh_Fir_reg_r34_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dQuote3 = ldf dQuote
  Rsh_Fir_reg_dQuote3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // r34 = dyn dQuote3("Spanish question")
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dQuote3_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names20, CCP, RHO);
  // return r34
  return Rsh_Fir_reg_r34_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r44_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r43
  return Rsh_Fir_reg_r43_;

L1_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r44 = dyn c5("\u00ab", "\u00bb", "\u00bf", "?")
  SEXP Rsh_Fir_array_args37[4];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args37[3] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names22[4];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 4, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r44)
  // L0(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L0_;

L2_:;
  // r42 = dyn base1("\u00ab", "\u00bb", "\u00bf", "?")
  SEXP Rsh_Fir_array_args38[4];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args38[3] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names23[4];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 4, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sQuote5_;
  SEXP Rsh_Fir_reg_r47_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sQuote5 = ldf sQuote
  Rsh_Fir_reg_sQuote5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r47 = dyn sQuote5("guillemet")
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote5_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names25, CCP, RHO);
  // return r47
  return Rsh_Fir_reg_r47_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dQuote4_;
  SEXP Rsh_Fir_reg_r49_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dQuote4 = ldf dQuote
  Rsh_Fir_reg_dQuote4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // r49 = dyn dQuote4("Spanish question")
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dQuote4_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names26, CCP, RHO);
  // return r49
  return Rsh_Fir_reg_r49_;
}
SEXP Rsh_Fir_user_function_inner1022023629_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1022023629 dynamic dispatch ([x, q])

  return Rsh_Fir_user_version_inner1022023629_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1022023629_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1022023629 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1022023629/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_q;
  SEXP Rsh_Fir_reg_q_isMissing;
  SEXP Rsh_Fir_reg_q_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_character;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_q1_;
  SEXP Rsh_Fir_reg_q2_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_isTRUE;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_l10n_info1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_li;
  SEXP Rsh_Fir_reg_li1_;
  SEXP Rsh_Fir_reg_c4_1;
  SEXP Rsh_Fir_reg_li3_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c5_1;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_li4_;
  SEXP Rsh_Fir_reg_li5_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_li7_;
  SEXP Rsh_Fir_reg_dr2_1;
  SEXP Rsh_Fir_reg_dc1_1;
  SEXP Rsh_Fir_reg_dx2_1;
  SEXP Rsh_Fir_reg_dx3_1;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_li8_;
  SEXP Rsh_Fir_reg_li9_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_li11_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_li12_;
  SEXP Rsh_Fir_reg_li13_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_li15_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r23_1;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_li16_;
  SEXP Rsh_Fir_reg_li17_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_li19_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_r26_1;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_li20_;
  SEXP Rsh_Fir_reg_li21_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_li23_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_r28_1;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_rawToChar;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_rawToChar1_;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r38_1;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_iconv;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r44_1;
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_z3_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_z4_;
  SEXP Rsh_Fir_reg_z5_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_z7_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r46_1;
  SEXP Rsh_Fir_reg_r47_1;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r49_1;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_q5_;
  SEXP Rsh_Fir_reg_q6_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r51_1;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r53_1;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_q7_;
  SEXP Rsh_Fir_reg_q8_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_c48_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_q9_;
  SEXP Rsh_Fir_reg_q10_;
  SEXP Rsh_Fir_reg_c49_;
  SEXP Rsh_Fir_reg_c50_;
  SEXP Rsh_Fir_reg_c52_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_c55_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_q11_;
  SEXP Rsh_Fir_reg_q12_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_c56_;
  SEXP Rsh_Fir_reg_c57_;
  SEXP Rsh_Fir_reg_c59_;
  SEXP Rsh_Fir_reg_q13_;
  SEXP Rsh_Fir_reg_q14_;
  SEXP Rsh_Fir_reg_c60_;
  SEXP Rsh_Fir_reg_q16_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_q17_;
  SEXP Rsh_Fir_reg_q18_;
  SEXP Rsh_Fir_reg_c61_;
  SEXP Rsh_Fir_reg_q20_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_r68_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_q = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // q_isMissing = missing.0(q)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_q;
  Rsh_Fir_reg_q_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args43);
  // if q_isMissing then L0() else L1(q)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_q_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(q)
    Rsh_Fir_reg_q_orDefault = Rsh_Fir_reg_q;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   getOption = ldf getOption;
  //   r = dyn getOption("useFancyQuotes");
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1022023629_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_q_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st q = q_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_q_orDefault, RHO);
  (void)(Rsh_Fir_reg_q_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L2_:;
  // r5 = `!`(r3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args46);
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args47);
  // if c then L39() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L39()
    goto L39_;
  } else {
  // L3()
    goto L3_;
  }

L35_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L37() else D0()
  // L37()
  goto L37_;

L36_:;
  // r2 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_1;
  goto L2_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L3_:;
  // st after = "'"
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_const(CCP, 39), RHO);
  (void)(Rsh_const(CCP, 39));
  // st before = "'"
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_const(CCP, 39), RHO);
  (void)(Rsh_const(CCP, 39));
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard1 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L37_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r4 = dyn length(x2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L38() else D1()
  // L38()
  goto L38_;

L39_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L40() else D2()
  // L40()
  goto L40_;

D1_:;
  // deopt 5 [r4]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // r11 = `!`(r10)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args52);
  // c2 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args53);
  // if c2 then L47() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L47()
    goto L47_;
  } else {
  // L6()
    goto L6_;
  }

L38_:;
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_1;
  goto L2_;

L40_:;
  // r6 = dyn character()
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L41() else D3()
  // L41()
  goto L41_;

L44_:;
  // q1 = ld q
  Rsh_Fir_reg_q1_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L46() else D4()
  // L46()
  goto L46_;

L45_:;
  // r9 = dyn base1(<sym q>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_;
  goto L5_;

D3_:;
  // deopt 9 [r6]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 18 [q1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_q1_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L34()
  // L34()
  goto L34_;

L34_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L144() else D32()
  // L144()
  goto L144_;

L41_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_1;

L46_:;
  // q2 = force? q1
  Rsh_Fir_reg_q2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q1_);
  // checkMissing(q2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_q2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c1 = `==`(q2, NULL)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_q2_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args56);
  // goto L5(c1)
  // L5(c1)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_c1_1;
  goto L5_;

L47_:;
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L48() else D5()
  // L48()
  goto L48_;

D5_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 174 []
  Rsh_Fir_deopt(174, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // p1 = prom<V +>{
  //   q3 = ld q;
  //   q4 = force? q3;
  //   checkMissing(q4);
  //   return q4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1022023629_1, 0, NULL, CCP, RHO);
  // r13 = dyn isTRUE(p1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L49() else D6()
  // L49()
  goto L49_;

L144_:;
  // p5 = prom<V +>{
  //   before = ld before;
  //   before1 = force? before;
  //   checkMissing(before1);
  //   return before1;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1022023629_2, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1022023629_3, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   after = ld after;
  //   after1 = force? after;
  //   checkMissing(after1);
  //   return after1;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1022023629_4, 0, NULL, CCP, RHO);
  // r68 = dyn paste0(p5, p6, p7)
  SEXP Rsh_Fir_array_args62[3];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args62[2] = Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 3, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L145() else D33()
  // L145()
  goto L145_;

D6_:;
  // deopt 25 [r13]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 178 [r68]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(178, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L49_:;
  // c3 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args63);
  // if c3 then L50() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_1)) {
  // L50()
    goto L50_;
  } else {
  // L7()
    goto L7_;
  }

L145_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r68
  return Rsh_Fir_reg_r68_;

L7_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // sym6 = ldf identical
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base6 = ldf identical in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard6 then L112() else L113()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L112()
    goto L112_;
  } else {
  // L113()
    goto L113_;
  }

L50_:;
  // l10n_info = ldf l10n_info
  Rsh_Fir_reg_l10n_info1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L51() else D7()
  // L51()
  goto L51_;

D7_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // c47 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args65);
  // if c47 then L116() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L116()
    goto L116_;
  } else {
  // L22()
    goto L22_;
  }

L51_:;
  // r14 = dyn l10n_info()
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_l10n_info1, 0, NULL, NULL, CCP, RHO);
  // check L52() else D8()
  // L52()
  goto L52_;

L112_:;
  // q5 = ld q
  Rsh_Fir_reg_q5_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L114() else D23()
  // L114()
  goto L114_;

L113_:;
  // r49 = dyn base6(<sym q>, "TeX")
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r49_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L21(r49)
  // L21(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_1;
  goto L21_;

D8_:;
  // deopt 28 [r14]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 102 [q5]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_q5_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L23()
  // L23()
  goto L23_;

L23_:;
  // sym7 = ldf identical
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base7 = ldf identical in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard7 then L118() else L119()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L118()
    goto L118_;
  } else {
  // L119()
    goto L119_;
  }

L52_:;
  // st li = r14
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r14_1, RHO);
  (void)(Rsh_Fir_reg_r14_1);
  // li = ld li
  Rsh_Fir_reg_li = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L53() else D9()
  // L53()
  goto L53_;

L114_:;
  // q6 = force? q5
  Rsh_Fir_reg_q6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q5_);
  // checkMissing(q6)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_q6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r51 = dyn identical(q6, "TeX", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args69[9];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_q6_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args69[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args69[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args69[4] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args69[5] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args69[6] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args69[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args69[8] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names35[9];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_array_arg_names35[3] = R_MissingArg;
  Rsh_Fir_array_arg_names35[4] = R_MissingArg;
  Rsh_Fir_array_arg_names35[5] = R_MissingArg;
  Rsh_Fir_array_arg_names35[6] = R_MissingArg;
  Rsh_Fir_array_arg_names35[7] = R_MissingArg;
  Rsh_Fir_array_arg_names35[8] = R_MissingArg;
  Rsh_Fir_reg_r51_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L115() else D24()
  // L115()
  goto L115_;

L116_:;
  // st before = "`"
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_const(CCP, 49), RHO);
  (void)(Rsh_const(CCP, 49));
  // st after = "'"
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_const(CCP, 39), RHO);
  (void)(Rsh_const(CCP, 39));
  // goto L23()
  // L23()
  goto L23_;

D9_:;
  // deopt 30 [li]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_li;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 113 [r51]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r51_1;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L24_:;
  // c48 = `as.logical`(r54)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args70);
  // if c48 then L122() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L122()
    goto L122_;
  } else {
  // L25()
    goto L25_;
  }

L53_:;
  // li1 = force? li
  Rsh_Fir_reg_li1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_li);
  // checkMissing(li1)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_li1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(li1)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_li1_;
  Rsh_Fir_reg_c4_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args72);
  // if c4 then L55() else L56(li1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_1)) {
  // L55()
    goto L55_;
  } else {
  // L56(li1)
    Rsh_Fir_reg_li3_ = Rsh_Fir_reg_li1_;
    goto L56_;
  }

L115_:;
  // goto L21(r51)
  // L21(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_1;
  goto L21_;

L118_:;
  // q7 = ld q
  Rsh_Fir_reg_q7_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L120() else D25()
  // L120()
  goto L120_;

L119_:;
  // r53 = dyn base7(<sym q>, "UTF-8")
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r53_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L24(r53)
  // L24(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_1;
  goto L24_;

D25_:;
  // deopt 124 [q7]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_q7_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // sym8 = ldf `is.character`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // base8 = ldf `is.character` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard8 then L124() else L125()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L124()
    goto L124_;
  } else {
  // L125()
    goto L125_;
  }

L54_:;
  // c5 = `as.logical`(dx1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_reg_c5_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args75);
  // if c5 then L58() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_1)) {
  // L58()
    goto L58_;
  } else {
  // L8()
    goto L8_;
  }

L55_:;
  // dr = tryDispatchBuiltin.1("$", li1)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_li1_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args76);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if dc then L57() else L56(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L57()
    goto L57_;
  } else {
  // L56(dr)
    Rsh_Fir_reg_li3_ = Rsh_Fir_reg_dr1;
    goto L56_;
  }

L56_:;
  // r15 = `$`(li3, <sym `UTF-8`>)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_li3_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args78);
  // goto L54(r15)
  // L54(r15)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r15_;
  goto L54_;

L120_:;
  // q8 = force? q7
  Rsh_Fir_reg_q8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q7_);
  // checkMissing(q8)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_q8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r55 = dyn identical1(q8, "UTF-8", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args80[9];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_q8_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args80[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args80[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args80[4] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args80[5] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args80[6] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args80[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args80[8] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names37[9];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_array_arg_names37[3] = R_MissingArg;
  Rsh_Fir_array_arg_names37[4] = R_MissingArg;
  Rsh_Fir_array_arg_names37[5] = R_MissingArg;
  Rsh_Fir_array_arg_names37[6] = R_MissingArg;
  Rsh_Fir_array_arg_names37[7] = R_MissingArg;
  Rsh_Fir_array_arg_names37[8] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L121() else D26()
  // L121()
  goto L121_;

L122_:;
  // st before = "\u2018"
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_const(CCP, 52), RHO);
  (void)(Rsh_const(CCP, 52));
  // st after = "\u2019"
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_const(CCP, 53), RHO);
  (void)(Rsh_const(CCP, 53));
  // goto L26()
  // L26()
  goto L26_;

D26_:;
  // deopt 135 [r55]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard2 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L27_:;
  // c50 = `as.logical`(r58)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args82);
  // if c50 then L127() else L28(c50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L127()
    goto L127_;
  } else {
  // L28(c50)
    Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c50_;
    goto L28_;
  }

L57_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L54(dx)
  // L54(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L54_;

L58_:;
  // st q = "UTF-8"
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_const(CCP, 50), RHO);
  (void)(Rsh_const(CCP, 50));
  // goto L9()
  // L9()
  goto L9_;

L121_:;
  // goto L24(r55)
  // L24(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L24_;

L124_:;
  // q9 = ld q
  Rsh_Fir_reg_q9_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L126() else D27()
  // L126()
  goto L126_;

L125_:;
  // r57 = dyn base8(<sym q>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L27(r57)
  // L27(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L27_;

D27_:;
  // deopt 145 [q9]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_q9_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L10_:;
  // r20 = `!`(r18)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args85);
  // c8 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args86);
  // if c8 then L67() else L11(c8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L67()
    goto L67_;
  } else {
  // L11(c8)
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c8_;
    goto L11_;
  }

L28_:;
  // c59 = `as.logical`(c52)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_c52_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args87);
  // if c59 then L133() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L133()
    goto L133_;
  } else {
  // L30()
    goto L30_;
  }

L60_:;
  // li4 = ld li
  Rsh_Fir_reg_li4_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L62() else D10()
  // L62()
  goto L62_;

L61_:;
  // r17 = dyn base2(<lang `$`(li, codepage)>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L10(r17)
  // L10(r17)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r17_1;
  goto L10_;

L126_:;
  // q10 = force? q9
  Rsh_Fir_reg_q10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q9_);
  // checkMissing(q10)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_q10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // c49 = `is.character`(q10)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_q10_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args90);
  // goto L27(c49)
  // L27(c49)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_c49_;
  goto L27_;

L127_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard9 then L128() else L129()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L128()
    goto L128_;
  } else {
  // L129()
    goto L129_;
  }

D10_:;
  // deopt 39 [li4]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_li4_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L11_:;
  // c19 = `as.logical`(c10)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args92);
  // if c19 then L74() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L74()
    goto L74_;
  } else {
  // L12()
    goto L12_;
  }

L29_:;
  // r62 = `>=`(r60, 4)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args93);
  // c56 = `as.logical`(r62)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args94);
  // c57 = `&&`(c55, c56)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_c55_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_c56_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args95);
  // goto L28(c57)
  // L28(c57)
  Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c57_;
  goto L28_;

L30_:;
  // goto L33(NULL)
  // L33(NULL)
  Rsh_Fir_reg_dx20_ = Rsh_const(CCP, 45);
  goto L33_;

L33_:;
  // goto L34()
  // L34()
  goto L34_;

L62_:;
  // li5 = force? li4
  Rsh_Fir_reg_li5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_li4_);
  // checkMissing(li5)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_li5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(li5)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_li5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args97);
  // if c6 then L64() else L65(li5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L64()
    goto L64_;
  } else {
  // L65(li5)
    Rsh_Fir_reg_li7_ = Rsh_Fir_reg_li5_;
    goto L65_;
  }

L67_:;
  // li8 = ld li
  Rsh_Fir_reg_li8_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L68() else D11()
  // L68()
  goto L68_;

L128_:;
  // q11 = ld q
  Rsh_Fir_reg_q11_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L130() else D28()
  // L130()
  goto L130_;

L129_:;
  // r59 = dyn base9(<sym q>)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L29(c50, r59)
  // L29(c50, r59)
  Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c50_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L29_;

L133_:;
  // q13 = ld q
  Rsh_Fir_reg_q13_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L134() else D30()
  // L134()
  goto L134_;

D11_:;
  // deopt 44 [c8, li8]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_li8_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 150 [c50, q11]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c50_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_q11_;
  Rsh_Fir_deopt(150, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 157 [q13]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_q13_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L19(NULL)
  // L19(NULL)
  Rsh_Fir_reg_r47_1 = Rsh_const(CCP, 45);
  goto L19_;

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L63_:;
  // c7 = `==`(dx3, NULL)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dx3_1;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args99);
  // goto L10(c7)
  // L10(c7)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_c7_;
  goto L10_;

L64_:;
  // dr2 = tryDispatchBuiltin.1("$", li5)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_li5_;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args100);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc1 then L66() else L65(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L66()
    goto L66_;
  } else {
  // L65(dr2)
    Rsh_Fir_reg_li7_ = Rsh_Fir_reg_dr2_1;
    goto L65_;
  }

L65_:;
  // r19 = `$`(li7, <sym codepage>)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_li7_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args102);
  // goto L63(r19)
  // L63(r19)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_r19_;
  goto L63_;

L68_:;
  // li9 = force? li8
  Rsh_Fir_reg_li9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_li8_);
  // checkMissing(li9)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_li9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(li9)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_li9_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args104);
  // if c11 then L70() else L71(c8, li9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L70()
    goto L70_;
  } else {
  // L71(c8, li9)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c8_;
    Rsh_Fir_reg_li11_ = Rsh_Fir_reg_li9_;
    goto L71_;
  }

L74_:;
  // li12 = ld li
  Rsh_Fir_reg_li12_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L75() else D12()
  // L75()
  goto L75_;

L130_:;
  // q12 = force? q11
  Rsh_Fir_reg_q12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q11_);
  // checkMissing(q12)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_q12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r61 = dyn length1(q12)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_q12_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L131() else D29()
  // L131()
  goto L131_;

L134_:;
  // q14 = force? q13
  Rsh_Fir_reg_q14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q13_);
  // checkMissing(q14)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_q14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // c60 = `is.object`(q14)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_q14_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args108);
  // if c60 then L135() else L136(q14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L135()
    goto L135_;
  } else {
  // L136(q14)
    Rsh_Fir_reg_q16_ = Rsh_Fir_reg_q14_;
    goto L136_;
  }

D12_:;
  // deopt 50 [li12]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_li12_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 153 [c50, r61]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_c50_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(153, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L31_:;
  // st before = dx17
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // q17 = ld q
  Rsh_Fir_reg_q17_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L138() else D31()
  // L138()
  goto L138_;

L66_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L63(dx2)
  // L63(dx2)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx2_1;
  goto L63_;

L69_:;
  // r22 = `>`(dx5, 0)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args110);
  // c16 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_r22_1;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args111);
  // c17 = `&&`(c15, c16)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args112);
  // goto L11(c17)
  // L11(c17)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c17_;
  goto L11_;

L70_:;
  // dr4 = tryDispatchBuiltin.1("$", li9)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_li9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args113);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc2 then L72() else L71(c8, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L72()
    goto L72_;
  } else {
  // L71(c8, dr4)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c8_;
    Rsh_Fir_reg_li11_ = Rsh_Fir_reg_dr4_;
    goto L71_;
  }

L71_:;
  // r21 = `$`(li11, <sym codepage>)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_li11_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args115);
  // goto L69(c13, r21)
  // L69(c13, r21)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r21_;
  goto L69_;

L75_:;
  // li13 = force? li12
  Rsh_Fir_reg_li13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_li12_);
  // checkMissing(li13)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_li13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(li13)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_li13_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args117);
  // if c20 then L77() else L78(li13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L77()
    goto L77_;
  } else {
  // L78(li13)
    Rsh_Fir_reg_li15_ = Rsh_Fir_reg_li13_;
    goto L78_;
  }

L131_:;
  // goto L29(c50, r61)
  // L29(c50, r61)
  Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c50_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L29_;

L135_:;
  // dr16 = tryDispatchBuiltin.1("[", q14)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_q14_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args118);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if dc8 then L137() else L136(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L137()
    goto L137_;
  } else {
  // L136(dr16)
    Rsh_Fir_reg_q16_ = Rsh_Fir_reg_dr16_;
    goto L136_;
  }

L136_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r63 = dyn __2(q16, 1)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_q16_;
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L31(r63)
  // L31(r63)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r63_;
  goto L31_;

D31_:;
  // deopt 163 [q17]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_q17_;
  Rsh_Fir_deopt(163, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L72_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // goto L69(c8, dx4)
  // L69(c8, dx4)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L69_;

L76_:;
  // r24 = `>=`(dx7, 1250)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args122[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args122);
  // c21 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args123);
  // if c21 then L80() else L13(c21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L80()
    goto L80_;
  } else {
  // L13(c21)
    Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c21_;
    goto L13_;
  }

L77_:;
  // dr6 = tryDispatchBuiltin.1("$", li13)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_li13_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args124);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // if dc3 then L79() else L78(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L79()
    goto L79_;
  } else {
  // L78(dr6)
    Rsh_Fir_reg_li15_ = Rsh_Fir_reg_dr6_;
    goto L78_;
  }

L78_:;
  // r23 = `$`(li15, <sym codepage>)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_li15_;
  Rsh_Fir_array_args126[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args126);
  // goto L76(r23)
  // L76(r23)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r23_1;
  goto L76_;

L137_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // goto L31(dx16)
  // L31(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L31_;

L138_:;
  // q18 = force? q17
  Rsh_Fir_reg_q18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q17_);
  // checkMissing(q18)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_q18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // c61 = `is.object`(q18)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_q18_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args129);
  // if c61 then L139() else L140(q18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c61_)) {
  // L139()
    goto L139_;
  } else {
  // L140(q18)
    Rsh_Fir_reg_q20_ = Rsh_Fir_reg_q18_;
    goto L140_;
  }

L13_:;
  // c32 = `as.logical`(c23)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args130);
  // if c32 then L14(c32) else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L14(c32)
    Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c32_;
    goto L14_;
  } else {
  // L87()
    goto L87_;
  }

L32_:;
  // st after = dx19
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // goto L33(dx19)
  // L33(dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L33_;

L79_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // goto L76(dx6)
  // L76(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L76_;

L80_:;
  // li16 = ld li
  Rsh_Fir_reg_li16_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L81() else D13()
  // L81()
  goto L81_;

L139_:;
  // dr18 = tryDispatchBuiltin.1("[", q18)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_q18_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args132);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if dc9 then L141() else L140(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L141()
    goto L141_;
  } else {
  // L140(dr18)
    Rsh_Fir_reg_q20_ = Rsh_Fir_reg_dr18_;
    goto L140_;
  }

L140_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r64 = dyn __3(q20, 2)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_q20_;
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L32(r64)
  // L32(r64)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r64_;
  goto L32_;

D13_:;
  // deopt 55 [c21, li16]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_li16_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L14_:;
  // c43 = `as.logical`(c33)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args135);
  // if c43 then L94() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L94()
    goto L94_;
  } else {
  // L15()
    goto L15_;
  }

L81_:;
  // li17 = force? li16
  Rsh_Fir_reg_li17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_li16_);
  // checkMissing(li17)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_li17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(li17)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_li17_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args137);
  // if c24 then L83() else L84(c21, li17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L83()
    goto L83_;
  } else {
  // L84(c21, li17)
    Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c21_;
    Rsh_Fir_reg_li19_ = Rsh_Fir_reg_li17_;
    goto L84_;
  }

L87_:;
  // li20 = ld li
  Rsh_Fir_reg_li20_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L88() else D14()
  // L88()
  goto L88_;

L141_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // goto L32(dx18)
  // L32(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L32_;

D14_:;
  // deopt 61 [c32, li20]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_li20_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L15_:;
  // iconv = ldf iconv
  Rsh_Fir_reg_iconv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // check L100() else D19()
  // L100()
  goto L100_;

L16_:;
  // goto L19(r39)
  // L19(r39)
  Rsh_Fir_reg_r47_1 = Rsh_Fir_reg_r39_;
  goto L19_;

L82_:;
  // r26 = `<=`(dx9, 1258)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args139[1] = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args139);
  // c29 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args140);
  // c30 = `&&`(c28, c29)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args141);
  // goto L13(c30)
  // L13(c30)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c30_;
  goto L13_;

L83_:;
  // dr8 = tryDispatchBuiltin.1("$", li17)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_li17_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args142);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // if dc4 then L85() else L84(c21, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L85()
    goto L85_;
  } else {
  // L84(c21, dr8)
    Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c21_;
    Rsh_Fir_reg_li19_ = Rsh_Fir_reg_dr8_;
    goto L84_;
  }

L84_:;
  // r25 = `$`(li19, <sym codepage>)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_li19_;
  Rsh_Fir_array_args144[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r25_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args144);
  // goto L82(c26, r25)
  // L82(c26, r25)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r25_1;
  goto L82_;

L88_:;
  // li21 = force? li20
  Rsh_Fir_reg_li21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_li20_);
  // checkMissing(li21)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_li21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(li21)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_li21_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args146);
  // if c35 then L90() else L91(c32, li21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L90()
    goto L90_;
  } else {
  // L91(c32, li21)
    Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c32_;
    Rsh_Fir_reg_li23_ = Rsh_Fir_reg_li21_;
    goto L91_;
  }

L94_:;
  // rawToChar = ldf rawToChar
  Rsh_Fir_reg_rawToChar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L95() else D15()
  // L95()
  goto L95_;

D15_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L85_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // goto L82(c21, dx8)
  // L82(c21, dx8)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L82_;

L89_:;
  // r28 = `==`(dx11, 874)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args148[1] = Rsh_const(CCP, 66);
  Rsh_Fir_reg_r28_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args148);
  // c40 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_r28_1;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args149);
  // c41 = `||`(c39, c40)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_c39_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args150);
  // goto L14(c41)
  // L14(c41)
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c41_;
  goto L14_;

L90_:;
  // dr10 = tryDispatchBuiltin.1("$", li21)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_li21_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args151);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if dc5 then L92() else L91(c32, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L92()
    goto L92_;
  } else {
  // L91(c32, dr10)
    Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c32_;
    Rsh_Fir_reg_li23_ = Rsh_Fir_reg_dr10_;
    goto L91_;
  }

L91_:;
  // r27 = `$`(li23, <sym codepage>)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_li23_;
  Rsh_Fir_array_args153[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args153);
  // goto L89(c37, r27)
  // L89(c37, r27)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r27_1;
  goto L89_;

L95_:;
  // p2 = prom<V +>{
  //   sym3 = ldf `as.raw`;
  //   base3 = ldf `as.raw` in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r30):
  //   return r30;
  // L1():
  //   as_raw = ldf `as.raw` in base;
  //   r31 = dyn as_raw(145.0);
  //   goto L0(r31);
  // L2():
  //   r29 = dyn base3(145.0);
  //   goto L0(r29);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1022023629_5, 0, NULL, CCP, RHO);
  // r33 = dyn rawToChar(p2)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rawToChar, 1, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L96() else D16()
  // L96()
  goto L96_;

L100_:;
  // p4 = prom<V +>{
  //   sym5 = ldf c;
  //   base5 = ldf c in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r41):
  //   return r41;
  // L1():
  //   c44 = ldf c in base;
  //   r42 = dyn c44("\u2018", "\u2019");
  //   goto L0(r42);
  // L2():
  //   r40 = dyn base5("\u2018", "\u2019");
  //   goto L0(r40);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1022023629_6, 0, NULL, CCP, RHO);
  // r44 = dyn iconv(p4, "UTF-8", "")
  SEXP Rsh_Fir_array_args161[3];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args161[1] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args161[2] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names49[3];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_reg_r44_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_iconv, 3, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L101() else D20()
  // L101()
  goto L101_;

D16_:;
  // deopt 70 [r33]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 82 [r44]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r44_1;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L92_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty());
  // goto L89(c32, dx10)
  // L89(c32, dx10)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L89_;

L96_:;
  // st before = r33
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // rawToChar1 = ldf rawToChar
  Rsh_Fir_reg_rawToChar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L97() else D17()
  // L97()
  goto L97_;

L101_:;
  // st z = r44
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r44_1, RHO);
  (void)(Rsh_Fir_reg_r44_1);
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L102() else D21()
  // L102()
  goto L102_;

D17_:;
  // deopt 73 []
  Rsh_Fir_deopt(73, 0, NULL, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 84 [z]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L97_:;
  // p3 = prom<V +>{
  //   sym4 = ldf `as.raw`;
  //   base4 = ldf `as.raw` in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r35):
  //   return r35;
  // L1():
  //   as_raw1 = ldf `as.raw` in base;
  //   r36 = dyn as_raw1(146.0);
  //   goto L0(r36);
  // L2():
  //   r34 = dyn base4(146.0);
  //   goto L0(r34);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1022023629_7, 0, NULL, CCP, RHO);
  // r38 = dyn rawToChar1(p3)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rawToChar1_, 1, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L98() else D18()
  // L98()
  goto L98_;

L102_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty()));
  // c45 = `is.object`(z1)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args168);
  // if c45 then L103() else L104(z1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L103()
    goto L103_;
  } else {
  // L104(z1)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    goto L104_;
  }

D18_:;
  // deopt 75 [r38]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r38_1;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L17_:;
  // st before = dx13
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L106() else D22()
  // L106()
  goto L106_;

L98_:;
  // st after = r38
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_r38_1, RHO);
  (void)(Rsh_Fir_reg_r38_1);
  // goto L16(r38)
  // L16(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_1;
  goto L16_;

L103_:;
  // dr12 = tryDispatchBuiltin.1("[", z1)
  SEXP Rsh_Fir_array_args169[2];
  Rsh_Fir_array_args169[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args169[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args169);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // if dc6 then L105() else L104(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L105()
    goto L105_;
  } else {
  // L104(dr12)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_dr12_;
    goto L104_;
  }

L104_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r45 = dyn __(z3, 1)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_args171[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args171, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L17(r45)
  // L17(r45)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r45_;
  goto L17_;

D22_:;
  // deopt 90 [z4]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_z4_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L105_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // goto L17(dx12)
  // L17(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L17_;

L106_:;
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty()));
  // c46 = `is.object`(z5)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args174);
  // if c46 then L107() else L108(z5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L107()
    goto L107_;
  } else {
  // L108(z5)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_z5_;
    goto L108_;
  }

L18_:;
  // st after = dx15
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // goto L16(dx15)
  // L16(dx15)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_dx15_;
  goto L16_;

L107_:;
  // dr14 = tryDispatchBuiltin.1("[", z5)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args175);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // if dc7 then L109() else L108(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L109()
    goto L109_;
  } else {
  // L108(dr14)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_dr14_;
    goto L108_;
  }

L108_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r46 = dyn __1(z7, 2)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_array_args177[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r46_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L18(r46)
  // L18(r46)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r46_1;
  goto L18_;

L109_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // goto L18(dx14)
  // L18(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L18_;
}
SEXP Rsh_Fir_user_promise_inner1022023629_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getOption;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1022023629/0: expected 0, got %d", NCAPTURES);

  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // r = dyn getOption("useFancyQuotes")
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names28, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner1022023629_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_q3_;
  SEXP Rsh_Fir_reg_q4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1022023629/0: expected 0, got %d", NCAPTURES);

  // q3 = ld q
  Rsh_Fir_reg_q3_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // q4 = force? q3
  Rsh_Fir_reg_q4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q3_);
  // checkMissing(q4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_q4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return q4
  return Rsh_Fir_reg_q4_;
}
SEXP Rsh_Fir_user_promise_inner1022023629_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_before;
  SEXP Rsh_Fir_reg_before1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1022023629/0: expected 0, got %d", NCAPTURES);

  // before = ld before
  Rsh_Fir_reg_before = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // before1 = force? before
  Rsh_Fir_reg_before1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_before);
  // checkMissing(before1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_before1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return before1
  return Rsh_Fir_reg_before1_;
}
SEXP Rsh_Fir_user_promise_inner1022023629_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1022023629/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner1022023629_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_after;
  SEXP Rsh_Fir_reg_after1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1022023629/0: expected 0, got %d", NCAPTURES);

  // after = ld after
  Rsh_Fir_reg_after = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // after1 = force? after
  Rsh_Fir_reg_after1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_after);
  // checkMissing(after1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_after1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return after1
  return Rsh_Fir_reg_after1_;
}
SEXP Rsh_Fir_user_promise_inner1022023629_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r29_1;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_as_raw;
  SEXP Rsh_Fir_reg_r31_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1022023629/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf `as.raw`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base3 = ldf `as.raw` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args154);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r30
  return Rsh_Fir_reg_r30_;

L1_:;
  // as_raw = ldf `as.raw` in base
  Rsh_Fir_reg_as_raw = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r31 = dyn as_raw(145.0)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r31_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_raw, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_1;
  goto L0_;

L2_:;
  // r29 = dyn base3(145.0)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r29_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1022023629_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r40_1;
  SEXP Rsh_Fir_reg_r41_1;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_r42_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1022023629/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args158);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r41
  return Rsh_Fir_reg_r41_1;

L1_:;
  // c44 = ldf c in base
  Rsh_Fir_reg_c44_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r42 = dyn c44("\u2018", "\u2019")
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args159[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r42_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c44_, 2, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r41_1 = Rsh_Fir_reg_r42_1;
  goto L0_;

L2_:;
  // r40 = dyn base5("\u2018", "\u2019")
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args160[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r40_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r41_1 = Rsh_Fir_reg_r40_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1022023629_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r34_1;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_as_raw1_;
  SEXP Rsh_Fir_reg_r36_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1022023629/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf `as.raw`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base4 = ldf `as.raw` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args163);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r35
  return Rsh_Fir_reg_r35_;

L1_:;
  // as_raw1 = ldf `as.raw` in base
  Rsh_Fir_reg_as_raw1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r36 = dyn as_raw1(146.0)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r36_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_raw1_, 1, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_1;
  goto L0_;

L2_:;
  // r34 = dyn base4(146.0)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r34_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
