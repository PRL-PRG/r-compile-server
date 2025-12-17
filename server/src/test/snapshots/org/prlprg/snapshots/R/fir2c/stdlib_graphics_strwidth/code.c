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
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3674721102_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3674721102_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3674721102_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3674721102_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3674721102_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3674721102_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3674721102_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3674721102_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3674721102_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3674721102_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3674721102_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3674721102_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3674721102_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3674721102_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3674721102_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_par;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_strwidth;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_sw;
  SEXP Rsh_Fir_reg_sw1_;
  SEXP Rsh_Fir_reg_all_equal;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_strwidth1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sw_i;
  SEXP Rsh_Fir_reg_sw_i1_;
  SEXP Rsh_Fir_reg_unique;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_mean;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_par1_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_letters;
  SEXP Rsh_Fir_reg_letters1_;
  SEXP Rsh_Fir_reg_LETTERS;
  SEXP Rsh_Fir_reg_LETTERS1_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_strheight;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_table;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_mean1_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_par2_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_strwidth3_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_split;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_expression;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_strwidth4_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_strheight1_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_par3_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r78_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3674721102
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3674721102_, RHO, CCP);
  // st strwidth = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // st `str.ex` = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

L5_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c("W", "w", "I", ".", "WwI.")
  SEXP Rsh_Fir_array_args1[5];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[4] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[5];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 5, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r1 = dyn base("W", "w", "I", ".", "WwI.")
  SEXP Rsh_Fir_array_args2[5];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[4] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[5];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 5, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 11 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D1_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L8_:;
  // r4 = dyn par[pty]("s")
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 17 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // st op = r4
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p = prom<V +>{
  //   r5 = `:`(1.0, 100.0);
  //   return r5;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   r7 = `:`(1.0, 100.0);
  //   return r7;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r9 = dyn plot[, , type](p, p1, "n")
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

D4_:;
  // deopt 25 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // strwidth = ldf strwidth
  Rsh_Fir_reg_strwidth = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

D5_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p2 = prom<V +>{
  //   str_ex = ld `str.ex`;
  //   str_ex1 = force? str_ex;
  //   checkMissing(str_ex1);
  //   return str_ex1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r11 = dyn strwidth(p2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwidth, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L13() else D6()
  // L13()
  goto L13_;

D6_:;
  // deopt 29 [r11]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // st sw = r11
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sw = ld sw
  Rsh_Fir_reg_sw = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L14() else D7()
  // L14()
  goto L14_;

D7_:;
  // deopt 31 [sw]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_sw;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // sw1 = force? sw
  Rsh_Fir_reg_sw1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sw);
  // checkMissing(sw1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sw1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // all_equal = ldf `all.equal`
  Rsh_Fir_reg_all_equal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L15() else D8()
  // L15()
  goto L15_;

D8_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p3 = prom<V +>{
  //   sym1 = ldf sum;
  //   base1 = ldf sum in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L2() else L3();
  // L0(r13):
  //   return r13;
  // L2():
  //   sw2 = ld sw;
  //   sw3 = force? sw2;
  //   checkMissing(sw3);
  //   c1 = `is.object`(sw3);
  //   if c1 then L4() else L5(sw3);
  // L3():
  //   r12 = dyn base1(<lang `[`(sw, `:`(1.0, 4.0))>);
  //   goto L0(r12);
  // L1(dx1):
  //   sum = ldf sum in base;
  //   r15 = dyn sum(dx1);
  //   goto L0(r15);
  // L4():
  //   dr = tryDispatchBuiltin.1("[", sw3);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(dr);
  // L5(sw5):
  //   __ = ldf `[` in base;
  //   r14 = dyn __(sw5, <int 1, 2, 3, 4>);
  //   goto L1(r14);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sw6 = ld sw;
  //   sw7 = force? sw6;
  //   checkMissing(sw7);
  //   c2 = `is.object`(sw7);
  //   if c2 then L1() else L2(sw7);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", sw7);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(sw9):
  //   __1 = ldf `[` in base;
  //   r17 = dyn __1(sw9, 5.0);
  //   goto L0(r17);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r19 = dyn all_equal(p3, p4)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L16() else D9()
  // L16()
  goto L16_;

D9_:;
  // deopt 37 [r19]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // strwidth1 = ldf strwidth
  Rsh_Fir_reg_strwidth1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L17() else D10()
  // L17()
  goto L17_;

D10_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p5 = prom<V +>{
  //   str_ex2 = ld `str.ex`;
  //   str_ex3 = force? str_ex2;
  //   checkMissing(str_ex3);
  //   return str_ex3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r21 = dyn strwidth1(p5, "inches")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwidth1_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L18() else D11()
  // L18()
  goto L18_;

D11_:;
  // deopt 42 [r21]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L18_:;
  // st `sw.i` = r21
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // sw_i = ld `sw.i`
  Rsh_Fir_reg_sw_i = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L19() else D12()
  // L19()
  goto L19_;

D12_:;
  // deopt 45 [25.4, sw_i]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_sw_i;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L19_:;
  // sw_i1 = force? sw_i
  Rsh_Fir_reg_sw_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sw_i);
  // checkMissing(sw_i1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sw_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // `*`(25.4, sw_i1)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_sw_i1_;
  (void)(Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args29));
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L20() else D13()
  // L20()
  goto L20_;

D13_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p6 = prom<V +>{
  //   sw10 = ld sw;
  //   sw11 = force? sw10;
  //   checkMissing(sw11);
  //   sw_i2 = ld `sw.i`;
  //   sw_i3 = force? sw_i2;
  //   checkMissing(sw_i3);
  //   r23 = `/`(sw11, sw_i3);
  //   return r23;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r25 = dyn unique(p6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L21() else D14()
  // L21()
  goto L21_;

D14_:;
  // deopt 51 [r25]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // mean = ldf mean
  Rsh_Fir_reg_mean = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L22() else D15()
  // L22()
  goto L22_;

D15_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p8 = prom<V +>{
  //   sw_i4 = ld `sw.i`;
  //   sw_i5 = force? sw_i4;
  //   checkMissing(sw_i5);
  //   strwidth2 = ldf strwidth;
  //   p7 = prom<V +>{
  //     str_ex4 = ld `str.ex`;
  //     str_ex5 = force? str_ex4;
  //     checkMissing(str_ex5);
  //     return str_ex5;
  //   };
  //   r27 = dyn strwidth2(p7, "fig");
  //   r28 = `/`(sw_i5, r27);
  //   return r28;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r30 = dyn mean(p8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mean, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L23() else D16()
  // L23()
  goto L23_;

D16_:;
  // deopt 55 [r30]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L23_:;
  // par1 = ldf par
  Rsh_Fir_reg_par1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L24() else D17()
  // L24()
  goto L24_;

D17_:;
  // deopt 56 [r30]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L24_:;
  // r31 = dyn par1("fin")
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par1_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L25() else D18()
  // L25()
  goto L25_;

D18_:;
  // deopt 58 [r30, r31]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L25_:;
  // c3 = `is.object`(r31)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args40);
  // if c3 then L26() else L27(r30, r31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L26()
    goto L26_;
  } else {
  // L27(r30, r31)
    Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r30_;
    Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r31_;
    goto L27_;
  }

L1_:;
  // `/`(r37, dx5)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_dx5_;
  (void)(Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args41));
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard2 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L26_:;
  // dr4 = tryDispatchBuiltin.1("[", r31)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc2 then L28() else L27(r30, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L28()
    goto L28_;
  } else {
  // L27(r30, dr4)
    Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r30_;
    Rsh_Fir_reg_r35_ = Rsh_Fir_reg_dr4_;
    goto L27_;
  }

L27_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r38 = dyn __2(r35, 1.0)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L1(r34, r38)
  // L1(r34, r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r38_;
  goto L1_;

L2_:;
  // st `all.lett` = r41
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // strheight = ldf strheight
  Rsh_Fir_reg_strheight = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L34() else D22()
  // L34()
  goto L34_;

L28_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L1(r30, dx4)
  // L1(r30, dx4)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L1_;

L29_:;
  // letters = ld letters
  Rsh_Fir_reg_letters = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L31() else D19()
  // L31()
  goto L31_;

L30_:;
  // r40 = dyn base2(<sym letters>, <sym LETTERS>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L2(r40)
  // L2(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L2_;

D19_:;
  // deopt 65 [letters]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_letters;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 73 []
  Rsh_Fir_deopt(73, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // letters1 = force? letters
  Rsh_Fir_reg_letters1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_letters);
  // checkMissing(letters1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_letters1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // LETTERS = ld LETTERS
  Rsh_Fir_reg_LETTERS = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L32() else D20()
  // L32()
  goto L32_;

L34_:;
  // p9 = prom<V +>{
  //   all_lett = ld `all.lett`;
  //   all_lett1 = force? all_lett;
  //   checkMissing(all_lett1);
  //   return all_lett1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r44 = dyn strheight[, units](p9, "inches")
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strheight, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L35() else D23()
  // L35()
  goto L35_;

D20_:;
  // deopt 67 [LETTERS]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_LETTERS;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 77 [r44]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L32_:;
  // LETTERS1 = force? LETTERS
  Rsh_Fir_reg_LETTERS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LETTERS);
  // checkMissing(LETTERS1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_LETTERS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r42 = dyn c4(letters1, LETTERS1)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_letters1_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_LETTERS1_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L33() else D21()
  // L33()
  goto L33_;

L35_:;
  // r45 = `*`(r44, 72.0)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args53);
  // st shL = r45
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // table = ldf table
  Rsh_Fir_reg_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L36() else D24()
  // L36()
  goto L36_;

D21_:;
  // deopt 70 [r42]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L2(r42)
  // L2(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L2_;

L36_:;
  // p10 = prom<V +>{
  //   shL = ld shL;
  //   shL1 = force? shL;
  //   checkMissing(shL1);
  //   return shL1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r47 = dyn table(p10)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_table, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L37() else D25()
  // L37()
  goto L37_;

D25_:;
  // deopt 84 [r47]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L37_:;
  // mean1 = ldf mean
  Rsh_Fir_reg_mean1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L38() else D26()
  // L38()
  goto L38_;

D26_:;
  // deopt 86 []
  Rsh_Fir_deopt(86, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p11 = prom<V +>{
  //   shL2 = ld shL;
  //   shL3 = force? shL2;
  //   checkMissing(shL3);
  //   return shL3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r49 = dyn mean1(p11)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mean1_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L39() else D27()
  // L39()
  goto L39_;

D27_:;
  // deopt 88 [r49]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L39_:;
  // par2 = ldf par
  Rsh_Fir_reg_par2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L40() else D28()
  // L40()
  goto L40_;

D28_:;
  // deopt 89 [r49]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L40_:;
  // r50 = dyn par2("cin")
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par2_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L41() else D29()
  // L41()
  goto L41_;

D29_:;
  // deopt 91 [r49, r50]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(91, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L41_:;
  // c5 = `is.object`(r50)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args59);
  // if c5 then L42() else L43(r49, r50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L42()
    goto L42_;
  } else {
  // L43(r49, r50)
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r49_;
    Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r50_;
    goto L43_;
  }

L3_:;
  // `/`(r56, dx7)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_dx7_;
  (void)(Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args60));
  // strwidth3 = ldf strwidth
  Rsh_Fir_reg_strwidth3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L45() else D30()
  // L45()
  goto L45_;

L42_:;
  // dr6 = tryDispatchBuiltin.1("[", r50)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc3 then L44() else L43(r49, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L44()
    goto L44_;
  } else {
  // L43(r49, dr6)
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r49_;
    Rsh_Fir_reg_r54_ = Rsh_Fir_reg_dr6_;
    goto L43_;
  }

L43_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r57 = dyn __3(r54, 2.0)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L3(r53, r57)
  // L3(r53, r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r57_;
  goto L3_;

D30_:;
  // deopt 97 []
  Rsh_Fir_deopt(97, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L3(r49, dx6)
  // L3(r49, dx6)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L3_;

L45_:;
  // p12 = prom<V +>{
  //   all_lett2 = ld `all.lett`;
  //   all_lett3 = force? all_lett2;
  //   checkMissing(all_lett3);
  //   return all_lett3;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r60 = dyn strwidth3[, units](p12, "inches")
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwidth3_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L46() else D31()
  // L46()
  goto L46_;

D31_:;
  // deopt 101 [r60]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L46_:;
  // r61 = `*`(r60, 72.0)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args67);
  // st swL = r61
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // split = ldf split
  Rsh_Fir_reg_split = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L47() else D32()
  // L47()
  goto L47_;

D32_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p13 = prom<V +>{
  //   all_lett4 = ld `all.lett`;
  //   all_lett5 = force? all_lett4;
  //   checkMissing(all_lett5);
  //   return all_lett5;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   factor = ldf factor;
  //   p14 = prom<V +>{
  //     sym3 = ldf round;
  //     base3 = ldf round in base;
  //     guard3 = `==`.4(sym3, base3);
  //     if guard3 then L1() else L2();
  //   L0(r64):
  //     return r64;
  //   L1():
  //     round = ldf round in base;
  //     r65 = dyn round(<sym swL>, 2.0);
  //     goto L0(r65);
  //   L2():
  //     r63 = dyn base3(<sym swL>, 2.0);
  //     goto L0(r63);
  //   };
  //   r67 = dyn factor(p14);
  //   return r67;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r69 = dyn split(p13, p15)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L48() else D33()
  // L48()
  goto L48_;

D33_:;
  // deopt 109 [r69]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L48_:;
  // sym4 = ldf expression
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base4 = ldf expression in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard4 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L4_:;
  // st sumex = r71
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r71_, RHO);
  (void)(Rsh_Fir_reg_r71_);
  // strwidth4 = ldf strwidth
  Rsh_Fir_reg_strwidth4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L51() else D34()
  // L51()
  goto L51_;

L49_:;
  // expression = ldf expression in base
  Rsh_Fir_reg_expression = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r72 = dyn expression(<lang sum(`[`(x, i), i=1.0, n)>, <lang `==`(`^`(e, {
  //       `*`(i, pi)
  //     }), `-`(1.0))>)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L4(r72)
  // L4(r72)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r72_;
  goto L4_;

L50_:;
  // r70 = dyn base4(<lang sum(`[`(x, i), i=1.0, n)>, <lang `==`(`^`(e, {
  //       `*`(i, pi)
  //     }), `-`(1.0))>)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L4(r70)
  // L4(r70)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r70_;
  goto L4_;

D34_:;
  // deopt 115 []
  Rsh_Fir_deopt(115, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // p16 = prom<V +>{
  //   sumex = ld sumex;
  //   sumex1 = force? sumex;
  //   checkMissing(sumex1);
  //   return sumex1;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r74 = dyn strwidth4(p16)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwidth4_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L52() else D35()
  // L52()
  goto L52_;

D35_:;
  // deopt 117 [r74]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L52_:;
  // strheight1 = ldf strheight
  Rsh_Fir_reg_strheight1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L53() else D36()
  // L53()
  goto L53_;

D36_:;
  // deopt 119 []
  Rsh_Fir_deopt(119, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // p17 = prom<V +>{
  //   sumex2 = ld sumex;
  //   sumex3 = force? sumex2;
  //   checkMissing(sumex3);
  //   return sumex3;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // r76 = dyn strheight1(p17)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strheight1_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L54() else D37()
  // L54()
  goto L54_;

D37_:;
  // deopt 121 [r76]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L54_:;
  // par3 = ldf par
  Rsh_Fir_reg_par3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L55() else D38()
  // L55()
  goto L55_;

D38_:;
  // deopt 123 []
  Rsh_Fir_deopt(123, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // p18 = prom<V +>{
  //   op = ld op;
  //   op1 = force? op;
  //   checkMissing(op1);
  //   return op1;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main18, 0, NULL, CCP, RHO);
  // r78 = dyn par3(p18)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par3_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L56() else D39()
  // L56()
  goto L56_;

D39_:;
  // deopt 125 [r78]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L56_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r78
  return Rsh_Fir_reg_r78_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r5 = `:`(1.0, 100.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args4);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r7 = `:`(1.0, 100.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args5);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_str_ex;
  SEXP Rsh_Fir_reg_str_ex1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // str_ex = ld `str.ex`
  Rsh_Fir_reg_str_ex = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // str_ex1 = force? str_ex
  Rsh_Fir_reg_str_ex1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_str_ex);
  // checkMissing(str_ex1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_str_ex1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return str_ex1
  return Rsh_Fir_reg_str_ex1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sw2_;
  SEXP Rsh_Fir_reg_sw3_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sw5_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf sum
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf sum in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r13
  return Rsh_Fir_reg_r13_;

L2_:;
  // sw2 = ld sw
  Rsh_Fir_reg_sw2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // sw3 = force? sw2
  Rsh_Fir_reg_sw3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sw2_);
  // checkMissing(sw3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sw3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(sw3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sw3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args12);
  // if c1 then L4() else L5(sw3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L4()
    goto L4_;
  } else {
  // L5(sw3)
    Rsh_Fir_reg_sw5_ = Rsh_Fir_reg_sw3_;
    goto L5_;
  }

L3_:;
  // r12 = dyn base1(<lang `[`(sw, `:`(1.0, 4.0))>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;

L1_:;
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r15 = dyn sum(dx1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r15_;
  goto L0_;

L4_:;
  // dr = tryDispatchBuiltin.1("[", sw3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_sw3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_sw5_ = Rsh_Fir_reg_dr;
    goto L5_;
  }

L5_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r14 = dyn __(sw5, <int 1, 2, 3, 4>)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sw5_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r14)
  // L1(r14)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r14_;
  goto L1_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sw6_;
  SEXP Rsh_Fir_reg_sw7_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sw9_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sw6 = ld sw
  Rsh_Fir_reg_sw6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // sw7 = force? sw6
  Rsh_Fir_reg_sw7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sw6_);
  // checkMissing(sw7)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sw7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(sw7)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sw7_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args20);
  // if c2 then L1() else L2(sw7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(sw7)
    Rsh_Fir_reg_sw9_ = Rsh_Fir_reg_sw7_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", sw7)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_sw7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_sw9_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r17 = dyn __1(sw9, 5.0)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sw9_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r17_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_str_ex2_;
  SEXP Rsh_Fir_reg_str_ex3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // str_ex2 = ld `str.ex`
  Rsh_Fir_reg_str_ex2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // str_ex3 = force? str_ex2
  Rsh_Fir_reg_str_ex3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_str_ex2_);
  // checkMissing(str_ex3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_str_ex3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return str_ex3
  return Rsh_Fir_reg_str_ex3_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sw10_;
  SEXP Rsh_Fir_reg_sw11_;
  SEXP Rsh_Fir_reg_sw_i2_;
  SEXP Rsh_Fir_reg_sw_i3_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sw10 = ld sw
  Rsh_Fir_reg_sw10_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // sw11 = force? sw10
  Rsh_Fir_reg_sw11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sw10_);
  // checkMissing(sw11)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sw11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // sw_i2 = ld `sw.i`
  Rsh_Fir_reg_sw_i2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // sw_i3 = force? sw_i2
  Rsh_Fir_reg_sw_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sw_i2_);
  // checkMissing(sw_i3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sw_i3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // r23 = `/`(sw11, sw_i3)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sw11_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_sw_i3_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args32);
  // return r23
  return Rsh_Fir_reg_r23_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sw_i4_;
  SEXP Rsh_Fir_reg_sw_i5_;
  SEXP Rsh_Fir_reg_strwidth2_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sw_i4 = ld `sw.i`
  Rsh_Fir_reg_sw_i4_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // sw_i5 = force? sw_i4
  Rsh_Fir_reg_sw_i5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sw_i4_);
  // checkMissing(sw_i5)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sw_i5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // strwidth2 = ldf strwidth
  Rsh_Fir_reg_strwidth2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p7 = prom<V +>{
  //   str_ex4 = ld `str.ex`;
  //   str_ex5 = force? str_ex4;
  //   checkMissing(str_ex5);
  //   return str_ex5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r27 = dyn strwidth2(p7, "fig")
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwidth2_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // r28 = `/`(sw_i5, r27)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sw_i5_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args37);
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_str_ex4_;
  SEXP Rsh_Fir_reg_str_ex5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // str_ex4 = ld `str.ex`
  Rsh_Fir_reg_str_ex4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // str_ex5 = force? str_ex4
  Rsh_Fir_reg_str_ex5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_str_ex4_);
  // checkMissing(str_ex5)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_str_ex5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return str_ex5
  return Rsh_Fir_reg_str_ex5_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_all_lett;
  SEXP Rsh_Fir_reg_all_lett1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // all_lett = ld `all.lett`
  Rsh_Fir_reg_all_lett = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // all_lett1 = force? all_lett
  Rsh_Fir_reg_all_lett1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_lett);
  // checkMissing(all_lett1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_all_lett1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return all_lett1
  return Rsh_Fir_reg_all_lett1_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_shL;
  SEXP Rsh_Fir_reg_shL1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // shL = ld shL
  Rsh_Fir_reg_shL = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // shL1 = force? shL
  Rsh_Fir_reg_shL1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_shL);
  // checkMissing(shL1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_shL1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return shL1
  return Rsh_Fir_reg_shL1_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_shL2_;
  SEXP Rsh_Fir_reg_shL3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // shL2 = ld shL
  Rsh_Fir_reg_shL2_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // shL3 = force? shL2
  Rsh_Fir_reg_shL3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_shL2_);
  // checkMissing(shL3)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_shL3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return shL3
  return Rsh_Fir_reg_shL3_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_all_lett2_;
  SEXP Rsh_Fir_reg_all_lett3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // all_lett2 = ld `all.lett`
  Rsh_Fir_reg_all_lett2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // all_lett3 = force? all_lett2
  Rsh_Fir_reg_all_lett3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_lett2_);
  // checkMissing(all_lett3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_all_lett3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return all_lett3
  return Rsh_Fir_reg_all_lett3_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_all_lett4_;
  SEXP Rsh_Fir_reg_all_lett5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // all_lett4 = ld `all.lett`
  Rsh_Fir_reg_all_lett4_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // all_lett5 = force? all_lett4
  Rsh_Fir_reg_all_lett5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_lett4_);
  // checkMissing(all_lett5)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_all_lett5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return all_lett5
  return Rsh_Fir_reg_all_lett5_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_factor;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r67_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // p14 = prom<V +>{
  //   sym3 = ldf round;
  //   base3 = ldf round in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r64):
  //   return r64;
  // L1():
  //   round = ldf round in base;
  //   r65 = dyn round(<sym swL>, 2.0);
  //   goto L0(r65);
  // L2():
  //   r63 = dyn base3(<sym swL>, 2.0);
  //   goto L0(r63);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r67 = dyn factor(p14)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names26, CCP, RHO);
  // return r67
  return Rsh_Fir_reg_r67_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_round;
  SEXP Rsh_Fir_reg_r65_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf round
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base3 = ldf round in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r64
  return Rsh_Fir_reg_r64_;

L1_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r65 = dyn round(<sym swL>, 2.0)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r65)
  // L0(r65)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r65_;
  goto L0_;

L2_:;
  // r63 = dyn base3(<sym swL>, 2.0)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r63)
  // L0(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sumex;
  SEXP Rsh_Fir_reg_sumex1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sumex = ld sumex
  Rsh_Fir_reg_sumex = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // sumex1 = force? sumex
  Rsh_Fir_reg_sumex1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sumex);
  // checkMissing(sumex1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sumex1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return sumex1
  return Rsh_Fir_reg_sumex1_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sumex2_;
  SEXP Rsh_Fir_reg_sumex3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sumex2 = ld sumex
  Rsh_Fir_reg_sumex2_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // sumex3 = force? sumex2
  Rsh_Fir_reg_sumex3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sumex2_);
  // checkMissing(sumex3)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sumex3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return sumex3
  return Rsh_Fir_reg_sumex3_;
}
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_op;
  SEXP Rsh_Fir_reg_op1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // op = ld op
  Rsh_Fir_reg_op = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // op1 = force? op
  Rsh_Fir_reg_op1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_op);
  // checkMissing(op1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_op1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return op1
  return Rsh_Fir_reg_op1_;
}
SEXP Rsh_Fir_user_function_inner3674721102_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3674721102 dynamic dispatch ([s, units, cex, font, vfont, `...`])

  return Rsh_Fir_user_version_inner3674721102_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3674721102_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3674721102 version 0 (*, *, *, *, *, dots -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner3674721102/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_units;
  SEXP Rsh_Fir_reg_cex;
  SEXP Rsh_Fir_reg_font;
  SEXP Rsh_Fir_reg_vfont;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_units_isMissing;
  SEXP Rsh_Fir_reg_units_orDefault;
  SEXP Rsh_Fir_reg_cex_isMissing;
  SEXP Rsh_Fir_reg_cex_orDefault;
  SEXP Rsh_Fir_reg_font_isMissing;
  SEXP Rsh_Fir_reg_font_orDefault;
  SEXP Rsh_Fir_reg_vfont_isMissing;
  SEXP Rsh_Fir_reg_vfont_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_vfont1_;
  SEXP Rsh_Fir_reg_vfont2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_pmatch;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_pmatch1_;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg__External_graphics;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_reg_p10_1;
  SEXP Rsh_Fir_reg_p11_1;
  SEXP Rsh_Fir_reg_p12_1;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r33_;

  // Bind parameters
  Rsh_Fir_reg_s = PARAMS[0];
  Rsh_Fir_reg_units = PARAMS[1];
  Rsh_Fir_reg_cex = PARAMS[2];
  Rsh_Fir_reg_font = PARAMS[3];
  Rsh_Fir_reg_vfont = PARAMS[4];
  Rsh_Fir_reg_ddd = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st s = s
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_s, RHO);
  (void)(Rsh_Fir_reg_s);
  // units_isMissing = missing.0(units)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_units;
  Rsh_Fir_reg_units_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args83);
  // if units_isMissing then L0("user") else L0(units)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_units_isMissing)) {
  // L0("user")
    Rsh_Fir_reg_units_orDefault = Rsh_const(CCP, 51);
    goto L0_;
  } else {
  // L0(units)
    Rsh_Fir_reg_units_orDefault = Rsh_Fir_reg_units;
    goto L0_;
  }

L0_:;
  // st units = units_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_units_orDefault, RHO);
  (void)(Rsh_Fir_reg_units_orDefault);
  // cex_isMissing = missing.0(cex)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_cex;
  Rsh_Fir_reg_cex_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args84);
  // if cex_isMissing then L1(NULL) else L1(cex)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_cex_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_cex_orDefault = Rsh_const(CCP, 52);
    goto L1_;
  } else {
  // L1(cex)
    Rsh_Fir_reg_cex_orDefault = Rsh_Fir_reg_cex;
    goto L1_;
  }

L1_:;
  // st cex = cex_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_cex_orDefault, RHO);
  (void)(Rsh_Fir_reg_cex_orDefault);
  // font_isMissing = missing.0(font)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_font;
  Rsh_Fir_reg_font_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args85);
  // if font_isMissing then L2(NULL) else L2(font)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_font_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_font_orDefault = Rsh_const(CCP, 52);
    goto L2_;
  } else {
  // L2(font)
    Rsh_Fir_reg_font_orDefault = Rsh_Fir_reg_font;
    goto L2_;
  }

L2_:;
  // st font = font_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_font_orDefault, RHO);
  (void)(Rsh_Fir_reg_font_orDefault);
  // vfont_isMissing = missing.0(vfont)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_vfont;
  Rsh_Fir_reg_vfont_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args86);
  // if vfont_isMissing then L3(NULL) else L3(vfont)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_vfont_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_vfont_orDefault = Rsh_const(CCP, 52);
    goto L3_;
  } else {
  // L3(vfont)
    Rsh_Fir_reg_vfont_orDefault = Rsh_Fir_reg_vfont;
    goto L3_;
  }

L3_:;
  // st vfont = vfont_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_vfont_orDefault, RHO);
  (void)(Rsh_Fir_reg_vfont_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L4_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args88);
  // c1 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args89);
  // if c1 then L12() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L12()
    goto L12_;
  } else {
  // L5()
    goto L5_;
  }

L9_:;
  // vfont1 = ld vfont
  Rsh_Fir_reg_vfont1_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r = dyn base(<sym vfont>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L4(r)
  // L4(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L4_;

D0_:;
  // deopt 1 [vfont1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_vfont1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym2 = ldf `.External.graphics`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base2 = ldf `.External.graphics` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard2 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L11_:;
  // vfont2 = force? vfont1
  Rsh_Fir_reg_vfont2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vfont1_);
  // checkMissing(vfont2)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_vfont2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // c = `==`(vfont2, NULL)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_vfont2_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args93);
  // goto L4(c)
  // L4(c)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_c1;
  goto L4_;

L12_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args94);
  // if guard1 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L6_:;
  // st vfont = r4
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_r4_1, RHO);
  (void)(Rsh_Fir_reg_r4_1);
  // goto L7()
  // L7()
  goto L7_;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r18
  return Rsh_Fir_reg_r18_;

L13_:;
  // pmatch = ldf pmatch
  Rsh_Fir_reg_pmatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

L14_:;
  // r3 = dyn base1[typeface, fontindex](<lang pmatch(`[`(vfont, 1), `$`(Hershey, typeface))>, <lang pmatch(`[`(vfont, 2), `$`(Hershey, fontindex))>)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_arg_names34[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L6(r3)
  // L6(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L6_;

L21_:;
  // _External_graphics = ldf `.External.graphics`
  Rsh_Fir_reg__External_graphics = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

L22_:;
  // r17 = dyn base2(<sym C_strWidth>, <lang as.graphicsAnnot(s)>, <lang pmatch(units, c("user", "figure", "inches"))>, <sym cex>, <sym font>, <sym vfont>, <sym ...>)
  SEXP Rsh_Fir_array_args96[7];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args96[2] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args96[3] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args96[4] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args96[5] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args96[6] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names35[7];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_array_arg_names35[3] = R_MissingArg;
  Rsh_Fir_array_arg_names35[4] = R_MissingArg;
  Rsh_Fir_array_arg_names35[5] = R_MissingArg;
  Rsh_Fir_array_arg_names35[6] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 7, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L8(r17)
  // L8(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_1;
  goto L8_;

D1_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p = prom<V +>{
  //   vfont3 = ld vfont;
  //   vfont4 = force? vfont3;
  //   checkMissing(vfont4);
  //   c2 = `is.object`(vfont4);
  //   if c2 then L1() else L2(vfont4);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", vfont4);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(vfont6):
  //   __ = ldf `[` in base;
  //   r5 = dyn __(vfont6, 1);
  //   goto L0(r5);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3674721102_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   Hershey = ld Hershey;
  //   Hershey1 = force? Hershey;
  //   checkMissing(Hershey1);
  //   c3 = `is.object`(Hershey1);
  //   if c3 then L1() else L2(Hershey1);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", Hershey1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(Hershey3):
  //   r7 = `$`(Hershey3, <sym typeface>);
  //   goto L0(r7);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3674721102_1, 0, NULL, CCP, RHO);
  // r9 = dyn pmatch(p, p1)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch, 2, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L23_:;
  // p4 = prom<V +>{
  //   C_strWidth = ld C_strWidth;
  //   C_strWidth1 = force? C_strWidth;
  //   checkMissing(C_strWidth1);
  //   return C_strWidth1;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3674721102_2, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   as_graphicsAnnot = ldf `as.graphicsAnnot`;
  //   p5 = prom<V +>{
  //     s1 = ld s;
  //     s2 = force? s1;
  //     checkMissing(s2);
  //     return s2;
  //   };
  //   r21 = dyn as_graphicsAnnot(p5);
  //   return r21;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3674721102_3, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   pmatch2 = ldf pmatch;
  //   p7 = prom<V +>{
  //     units1 = ld units;
  //     units2 = force? units1;
  //     checkMissing(units2);
  //     return units2;
  //   };
  //   p8 = prom<V +>{
  //     sym3 = ldf c;
  //     base3 = ldf c in base;
  //     guard3 = `==`.4(sym3, base3);
  //     if guard3 then L1() else L2();
  //   L0(r25):
  //     return r25;
  //   L1():
  //     c7 = ldf c in base;
  //     r26 = dyn c7("user", "figure", "inches");
  //     goto L0(r26);
  //   L2():
  //     r24 = dyn base3("user", "figure", "inches");
  //     goto L0(r24);
  //   };
  //   r28 = dyn pmatch2(p7, p8);
  //   return r28;
  // }
  Rsh_Fir_reg_p9_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3674721102_5, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   cex1 = ld cex;
  //   cex2 = force? cex1;
  //   checkMissing(cex2);
  //   return cex2;
  // }
  Rsh_Fir_reg_p10_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3674721102_8, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   font1 = ld font;
  //   font2 = force? font1;
  //   checkMissing(font2);
  //   return font2;
  // }
  Rsh_Fir_reg_p11_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3674721102_9, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   vfont11 = ld vfont;
  //   vfont12 = force? vfont11;
  //   checkMissing(vfont12);
  //   return vfont12;
  // }
  Rsh_Fir_reg_p12_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3674721102_10, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // r33 = dyn _External_graphics[, , , , , , `...`](p4, p6, p9, p10, p11, p12, ddd1)
  SEXP Rsh_Fir_array_args121[7];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args121[2] = Rsh_Fir_reg_p9_1;
  Rsh_Fir_array_args121[3] = Rsh_Fir_reg_p10_1;
  Rsh_Fir_array_args121[4] = Rsh_Fir_reg_p11_1;
  Rsh_Fir_array_args121[5] = Rsh_Fir_reg_p12_1;
  Rsh_Fir_array_args121[6] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names42[7];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_array_arg_names42[3] = R_MissingArg;
  Rsh_Fir_array_arg_names42[4] = R_MissingArg;
  Rsh_Fir_array_arg_names42[5] = R_MissingArg;
  Rsh_Fir_array_arg_names42[6] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External_graphics, 7, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

D2_:;
  // deopt 11 [r9]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 34 [r33]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L16_:;
  // pmatch1 = ldf pmatch
  Rsh_Fir_reg_pmatch1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

L24_:;
  // goto L8(r33)
  // L8(r33)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r33_;
  goto L8_;

D3_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p2 = prom<V +>{
  //   vfont7 = ld vfont;
  //   vfont8 = force? vfont7;
  //   checkMissing(vfont8);
  //   c4 = `is.object`(vfont8);
  //   if c4 then L1() else L2(vfont8);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", vfont8);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(vfont10):
  //   __1 = ldf `[` in base;
  //   r10 = dyn __1(vfont10, 2);
  //   goto L0(r10);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3674721102_11, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   Hershey4 = ld Hershey;
  //   Hershey5 = force? Hershey4;
  //   checkMissing(Hershey5);
  //   c5 = `is.object`(Hershey5);
  //   if c5 then L1() else L2(Hershey5);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("$", Hershey5);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(Hershey7):
  //   r12 = `$`(Hershey7, <sym fontindex>);
  //   goto L0(r12);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3674721102_12, 0, NULL, CCP, RHO);
  // r14 = dyn pmatch1(p2, p3)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch1_, 2, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

D4_:;
  // deopt 17 [r14]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L18_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r15 = dyn c6(r9, r14)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L19() else D5()
  // L19()
  goto L19_;

D5_:;
  // deopt 20 [r15]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L6(r15)
  // L6(r15)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r15_1;
  goto L6_;
}
SEXP Rsh_Fir_user_promise_inner3674721102_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_vfont3_;
  SEXP Rsh_Fir_reg_vfont4_;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_vfont6_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r5_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3674721102/0: expected 0, got %d", NCAPTURES);

  // vfont3 = ld vfont
  Rsh_Fir_reg_vfont3_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // vfont4 = force? vfont3
  Rsh_Fir_reg_vfont4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vfont3_);
  // checkMissing(vfont4)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_vfont4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(vfont4)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_vfont4_;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args98);
  // if c2 then L1() else L2(vfont4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L1()
    goto L1_;
  } else {
  // L2(vfont4)
    Rsh_Fir_reg_vfont6_ = Rsh_Fir_reg_vfont4_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L1_:;
  // dr = tryDispatchBuiltin.1("[", vfont4)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_vfont4_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args99);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_vfont6_ = Rsh_Fir_reg_dr1;
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r5 = dyn __(vfont6, 1)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_vfont6_;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r5_1;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3674721102_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Hershey;
  SEXP Rsh_Fir_reg_Hershey1_;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_Hershey3_;
  SEXP Rsh_Fir_reg_dr2_1;
  SEXP Rsh_Fir_reg_dc1_1;
  SEXP Rsh_Fir_reg_dx2_1;
  SEXP Rsh_Fir_reg_dx3_1;
  SEXP Rsh_Fir_reg_r7_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3674721102/0: expected 0, got %d", NCAPTURES);

  // Hershey = ld Hershey
  Rsh_Fir_reg_Hershey = Rsh_Fir_load(Rsh_const(CCP, 68), RHO);
  // Hershey1 = force? Hershey
  Rsh_Fir_reg_Hershey1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Hershey);
  // checkMissing(Hershey1)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_Hershey1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(Hershey1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_Hershey1_;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args104);
  // if c3 then L1() else L2(Hershey1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_1)) {
  // L1()
    goto L1_;
  } else {
  // L2(Hershey1)
    Rsh_Fir_reg_Hershey3_ = Rsh_Fir_reg_Hershey1_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_1;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", Hershey1)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_Hershey1_;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args105);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_Hershey3_ = Rsh_Fir_reg_dr2_1;
    goto L2_;
  }

L2_:;
  // r7 = `$`(Hershey3, <sym typeface>)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_Hershey3_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 62);
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args107);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_r7_1;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx2_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3674721102_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_C_strWidth;
  SEXP Rsh_Fir_reg_C_strWidth1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3674721102/0: expected 0, got %d", NCAPTURES);

  // C_strWidth = ld C_strWidth
  Rsh_Fir_reg_C_strWidth = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // C_strWidth1 = force? C_strWidth
  Rsh_Fir_reg_C_strWidth1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_strWidth);
  // checkMissing(C_strWidth1)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_C_strWidth1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // return C_strWidth1
  return Rsh_Fir_reg_C_strWidth1_;
}
SEXP Rsh_Fir_user_promise_inner3674721102_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_graphicsAnnot;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r21_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3674721102/0: expected 0, got %d", NCAPTURES);

  // as_graphicsAnnot = ldf `as.graphicsAnnot`
  Rsh_Fir_reg_as_graphicsAnnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // p5 = prom<V +>{
  //   s1 = ld s;
  //   s2 = force? s1;
  //   checkMissing(s2);
  //   return s2;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3674721102_4, 0, NULL, CCP, RHO);
  // r21 = dyn as_graphicsAnnot(p5)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_graphicsAnnot, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names38, CCP, RHO);
  // return r21
  return Rsh_Fir_reg_r21_1;
}
SEXP Rsh_Fir_user_promise_inner3674721102_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_s2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3674721102/0: expected 0, got %d", NCAPTURES);

  // s1 = ld s
  Rsh_Fir_reg_s1_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // s2 = force? s1
  Rsh_Fir_reg_s2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s1_);
  // checkMissing(s2)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_s2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // return s2
  return Rsh_Fir_reg_s2_;
}
SEXP Rsh_Fir_user_promise_inner3674721102_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pmatch2_;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_reg_r28_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3674721102/0: expected 0, got %d", NCAPTURES);

  // pmatch2 = ldf pmatch
  Rsh_Fir_reg_pmatch2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // p7 = prom<V +>{
  //   units1 = ld units;
  //   units2 = force? units1;
  //   checkMissing(units2);
  //   return units2;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3674721102_6, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r25):
  //   return r25;
  // L1():
  //   c7 = ldf c in base;
  //   r26 = dyn c7("user", "figure", "inches");
  //   goto L0(r26);
  // L2():
  //   r24 = dyn base3("user", "figure", "inches");
  //   goto L0(r24);
  // }
  Rsh_Fir_reg_p8_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3674721102_7, 0, NULL, CCP, RHO);
  // r28 = dyn pmatch2(p7, p8)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r28_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch2_, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names41, CCP, RHO);
  // return r28
  return Rsh_Fir_reg_r28_1;
}
SEXP Rsh_Fir_user_promise_inner3674721102_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_units1_;
  SEXP Rsh_Fir_reg_units2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3674721102/0: expected 0, got %d", NCAPTURES);

  // units1 = ld units
  Rsh_Fir_reg_units1_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // units2 = force? units1
  Rsh_Fir_reg_units2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_units1_);
  // checkMissing(units2)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_units2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // return units2
  return Rsh_Fir_reg_units2_;
}
SEXP Rsh_Fir_user_promise_inner3674721102_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3674721102/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args114);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r25
  return Rsh_Fir_reg_r25_1;

L1_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r26 = dyn c7("user", "figure", "inches")
  SEXP Rsh_Fir_array_args115[3];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args115[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names39[3];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 3, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r25_1 = Rsh_Fir_reg_r26_;
  goto L0_;

L2_:;
  // r24 = dyn base3("user", "figure", "inches")
  SEXP Rsh_Fir_array_args116[3];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args116[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 3, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r25_1 = Rsh_Fir_reg_r24_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3674721102_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cex1_;
  SEXP Rsh_Fir_reg_cex2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3674721102/0: expected 0, got %d", NCAPTURES);

  // cex1 = ld cex
  Rsh_Fir_reg_cex1_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // cex2 = force? cex1
  Rsh_Fir_reg_cex2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cex1_);
  // checkMissing(cex2)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_cex2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // return cex2
  return Rsh_Fir_reg_cex2_;
}
SEXP Rsh_Fir_user_promise_inner3674721102_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_font1_;
  SEXP Rsh_Fir_reg_font2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3674721102/0: expected 0, got %d", NCAPTURES);

  // font1 = ld font
  Rsh_Fir_reg_font1_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // font2 = force? font1
  Rsh_Fir_reg_font2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_font1_);
  // checkMissing(font2)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_font2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // return font2
  return Rsh_Fir_reg_font2_;
}
SEXP Rsh_Fir_user_promise_inner3674721102_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_vfont11_;
  SEXP Rsh_Fir_reg_vfont12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3674721102/0: expected 0, got %d", NCAPTURES);

  // vfont11 = ld vfont
  Rsh_Fir_reg_vfont11_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // vfont12 = force? vfont11
  Rsh_Fir_reg_vfont12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vfont11_);
  // checkMissing(vfont12)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_vfont12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // return vfont12
  return Rsh_Fir_reg_vfont12_;
}
SEXP Rsh_Fir_user_promise_inner3674721102_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_vfont7_;
  SEXP Rsh_Fir_reg_vfont8_;
  SEXP Rsh_Fir_reg_c4_1;
  SEXP Rsh_Fir_reg_vfont10_;
  SEXP Rsh_Fir_reg_dr4_1;
  SEXP Rsh_Fir_reg_dc2_1;
  SEXP Rsh_Fir_reg_dx4_1;
  SEXP Rsh_Fir_reg_dx5_1;
  SEXP Rsh_Fir_reg___1_1;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3674721102/0: expected 0, got %d", NCAPTURES);

  // vfont7 = ld vfont
  Rsh_Fir_reg_vfont7_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // vfont8 = force? vfont7
  Rsh_Fir_reg_vfont8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vfont7_);
  // checkMissing(vfont8)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_vfont8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(vfont8)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_vfont8_;
  Rsh_Fir_reg_c4_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args123);
  // if c4 then L1() else L2(vfont8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_1)) {
  // L1()
    goto L1_;
  } else {
  // L2(vfont8)
    Rsh_Fir_reg_vfont10_ = Rsh_Fir_reg_vfont8_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_1;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", vfont8)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_vfont8_;
  Rsh_Fir_reg_dr4_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args124);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dc2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_vfont10_ = Rsh_Fir_reg_dr4_1;
    goto L2_;
  }

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r10 = dyn __1(vfont10, 2)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_vfont10_;
  Rsh_Fir_array_args126[1] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_r10_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dx4_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_dx4_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3674721102_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Hershey4_;
  SEXP Rsh_Fir_reg_Hershey5_;
  SEXP Rsh_Fir_reg_c5_1;
  SEXP Rsh_Fir_reg_Hershey7_;
  SEXP Rsh_Fir_reg_dr6_1;
  SEXP Rsh_Fir_reg_dc3_1;
  SEXP Rsh_Fir_reg_dx6_1;
  SEXP Rsh_Fir_reg_dx7_1;
  SEXP Rsh_Fir_reg_r12_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3674721102/0: expected 0, got %d", NCAPTURES);

  // Hershey4 = ld Hershey
  Rsh_Fir_reg_Hershey4_ = Rsh_Fir_load(Rsh_const(CCP, 68), RHO);
  // Hershey5 = force? Hershey4
  Rsh_Fir_reg_Hershey5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Hershey4_);
  // checkMissing(Hershey5)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_Hershey5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(Hershey5)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_Hershey5_;
  Rsh_Fir_reg_c5_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args129);
  // if c5 then L1() else L2(Hershey5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_1)) {
  // L1()
    goto L1_;
  } else {
  // L2(Hershey5)
    Rsh_Fir_reg_Hershey7_ = Rsh_Fir_reg_Hershey5_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_1;

L1_:;
  // dr6 = tryDispatchBuiltin.1("$", Hershey5)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_Hershey5_;
  Rsh_Fir_reg_dr6_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args130);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dr6_1;
  Rsh_Fir_reg_dc3_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_Hershey7_ = Rsh_Fir_reg_dr6_1;
    goto L2_;
  }

L2_:;
  // r12 = `$`(Hershey7, <sym fontindex>)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_Hershey7_;
  Rsh_Fir_array_args132[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args132);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_dx7_1 = Rsh_Fir_reg_r12_1;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr6_1;
  Rsh_Fir_reg_dx6_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_1 = Rsh_Fir_reg_dx6_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
