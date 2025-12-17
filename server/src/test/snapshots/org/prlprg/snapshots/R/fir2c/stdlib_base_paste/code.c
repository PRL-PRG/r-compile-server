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
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3837407667_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3837407667_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_paste2_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_paste3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_paste4_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_paste5_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_paste6_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_paste7_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_paste8_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_paste9_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_paste10_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_paste11_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_paste12_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_paste13_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_paste14_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_paste15_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_paste16_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_paste17_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_paste18_;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_paste19_;
  SEXP Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_reg_r63_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3837407667
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3837407667_, RHO, CCP);
  // st paste = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   r1 = `:`(1.0, 12.0);
  //   return r1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r3 = dyn paste0(p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p1 = prom<V +>{
  //   r4 = `:`(1.0, 12.0);
  //   return r4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r6 = dyn paste1(p1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 10 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // sym = ldf `as.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `as.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // paste2 = ldf paste0
  Rsh_Fir_reg_paste2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

L5_:;
  // r9 = `:`(1.0, 12.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args5);
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r10 = dyn as_character(r9)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

L6_:;
  // r7 = dyn base(<lang `:`(1.0, 12.0)>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D4_:;
  // deopt 18 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0()
  // L0()
  goto L0_;

L8_:;
  // p2 = prom<V +>{
  //   r11 = `:`(1.0, 12.0);
  //   return r11;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L2() else L3();
  // L0(r14):
  //   return r14;
  // L2():
  //   sym2 = ldf rep;
  //   base2 = ldf rep in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L4() else L5();
  // L3():
  //   r13 = dyn base1("st", "nd", "rd", <lang rep("th", 9.0)>);
  //   goto L0(r13);
  // L1(r16):
  //   c = ldf c in base;
  //   r18 = dyn c("st", "nd", "rd", r16);
  //   goto L0(r18);
  // L4():
  //   rep = ldf rep in base;
  //   r17 = dyn rep("th", 9.0);
  //   goto L1(r17);
  // L5():
  //   r15 = dyn base2("th", 9.0);
  //   goto L1(r15);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r20 = dyn paste2(p2, p3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste2_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 23 [r20]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // st nth = r20
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // paste3 = ldf paste
  Rsh_Fir_reg_paste3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p4 = prom<V +>{
  //   month_abb = ld `month.abb`;
  //   month_abb1 = force? month_abb;
  //   checkMissing(month_abb1);
  //   return month_abb1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   nth = ld nth;
  //   nth1 = force? nth;
  //   checkMissing(nth1);
  //   return nth1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r23 = dyn paste3(p4, "is the", p5, "month of the year.")
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args18[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste3_, 4, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 31 [r23]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // paste4 = ldf paste
  Rsh_Fir_reg_paste4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p6 = prom<V +>{
  //   month_abb2 = ld `month.abb`;
  //   month_abb3 = force? month_abb2;
  //   checkMissing(month_abb3);
  //   return month_abb3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   letters = ld letters;
  //   letters1 = force? letters;
  //   checkMissing(letters1);
  //   return letters1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r26 = dyn paste4(p6, p7)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste4_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 36 [r26]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // paste5 = ldf paste
  Rsh_Fir_reg_paste5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p8 = prom<V +>{
  //   month_abb4 = ld `month.abb`;
  //   month_abb5 = force? month_abb4;
  //   checkMissing(month_abb5);
  //   return month_abb5;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   nth2 = ld nth;
  //   nth3 = force? nth2;
  //   checkMissing(nth3);
  //   return nth3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r29 = dyn paste5[, , , , sep](p8, "is the", p9, "month of the year.", "_*_")
  SEXP Rsh_Fir_array_args24[5];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args24[2] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args24[4] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names11[5];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste5_, 5, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 45 [r29]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // paste6 = ldf paste0
  Rsh_Fir_reg_paste6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p10 = prom<V +>{
  //   nth4 = ld nth;
  //   nth5 = force? nth4;
  //   checkMissing(nth5);
  //   return nth5;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r31 = dyn paste6[, collapse](p10, ", ")
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste6_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 51 [r31]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // paste7 = ldf paste
  Rsh_Fir_reg_paste7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // r32 = dyn paste7[, , , collapse]("1st", "2nd", "3rd", ", ")
  SEXP Rsh_Fir_array_args27[4];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args27[3] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste7_, 4, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L19() else D16()
  // L19()
  goto L19_;

D16_:;
  // deopt 59 [r32]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // paste8 = ldf paste
  Rsh_Fir_reg_paste8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L20() else D17()
  // L20()
  goto L20_;

D17_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // r33 = dyn paste8[, , , sep]("1st", "2nd", "3rd", ", ")
  SEXP Rsh_Fir_array_args28[4];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args28[3] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste8_, 4, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L21() else D18()
  // L21()
  goto L21_;

D18_:;
  // deopt 67 [r33]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L21_:;
  // paste9 = ldf paste
  Rsh_Fir_reg_paste9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L22() else D19()
  // L22()
  goto L22_;

D19_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p11 = prom<V +>{
  //   month_abb6 = ld `month.abb`;
  //   month_abb7 = force? month_abb6;
  //   checkMissing(month_abb7);
  //   return month_abb7;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   nth6 = ld nth;
  //   nth7 = force? nth6;
  //   checkMissing(nth7);
  //   return nth7;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r36 = dyn paste9[, , sep, collapse](p11, p12, ": ", "; ")
  SEXP Rsh_Fir_array_args31[4];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args31[3] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names15[3] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste9_, 4, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L23() else D20()
  // L23()
  goto L23_;

D20_:;
  // deopt 76 [r36]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L23_:;
  // paste10 = ldf paste
  Rsh_Fir_reg_paste10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L24() else D21()
  // L24()
  goto L24_;

D21_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p13 = prom<V +>{
  //   strwrap = ldf strwrap;
  //   r37 = dyn strwrap[, width]("Stopping distance of cars (ft) vs. speed (mph) from Ezekiel (1930)", 30.0);
  //   return r37;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r39 = dyn paste10[, collapse](p13, "\n")
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste10_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L25() else D22()
  // L25()
  goto L25_;

D22_:;
  // deopt 82 [r39]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L25_:;
  // st title = r39
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L26() else D23()
  // L26()
  goto L26_;

D23_:;
  // deopt 85 []
  Rsh_Fir_deopt(85, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p14 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r40 = dyn __(<sym dist>, <sym speed>);
  //   return r40;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   cars = ld cars;
  //   cars1 = force? cars;
  //   checkMissing(cars1);
  //   return cars1;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   title = ld title;
  //   title1 = force? title;
  //   checkMissing(title1);
  //   return title1;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r44 = dyn plot[, , main](p14, p15, p16)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args37[2] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L27() else D24()
  // L27()
  goto L27_;

D24_:;
  // deopt 90 [r44]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L27_:;
  // paste11 = ldf paste
  Rsh_Fir_reg_paste11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L28() else D25()
  // L28()
  goto L28_;

D25_:;
  // deopt 92 []
  Rsh_Fir_deopt(92, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p17 = prom<V +>{
  //   return NULL;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // p18 = prom<V +>{
  //   return <int 1, 2>;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main18, 0, NULL, CCP, RHO);
  // r47 = dyn paste11(p17, p18)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste11_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L29() else D26()
  // L29()
  goto L29_;

D26_:;
  // deopt 95 [r47]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L29_:;
  // st valid = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_const(CCP, 42), RHO);
  (void)(Rsh_const(CCP, 42));
  // st val = 3.141592653589793
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_const(CCP, 44), RHO);
  (void)(Rsh_const(CCP, 44));
  // paste12 = ldf paste
  Rsh_Fir_reg_paste12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L30() else D27()
  // L30()
  goto L30_;

D27_:;
  // deopt 103 []
  Rsh_Fir_deopt(103, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p19 = prom<V +>{
  //   val = ld val;
  //   val1 = force? val;
  //   checkMissing(val1);
  //   c1 = `is.object`(val1);
  //   if c1 then L1() else L2(val1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", val1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(val3):
  //   valid = ld valid;
  //   valid1 = force? valid;
  //   __1 = ldf `[` in base;
  //   r48 = dyn __1(val3, valid1);
  //   goto L0(r48);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main19, 0, NULL, CCP, RHO);
  // r50 = dyn paste12("The value is", p19, "-- not so good!")
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste12_, 3, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L31() else D28()
  // L31()
  goto L31_;

D28_:;
  // deopt 107 [r50]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L31_:;
  // paste13 = ldf paste
  Rsh_Fir_reg_paste13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L32() else D29()
  // L32()
  goto L32_;

D29_:;
  // deopt 109 []
  Rsh_Fir_deopt(109, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p20 = prom<V +>{
  //   val4 = ld val;
  //   val5 = force? val4;
  //   checkMissing(val5);
  //   c2 = `is.object`(val5);
  //   if c2 then L1() else L2(val5);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", val5);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(val7):
  //   valid2 = ld valid;
  //   valid3 = force? valid2;
  //   __2 = ldf `[` in base;
  //   r51 = dyn __2(val7, valid3);
  //   goto L0(r51);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main20, 0, NULL, CCP, RHO);
  // r53 = dyn paste13[, , , recycle0]("The value is", p20, "-- good: empty!", TRUE)
  SEXP Rsh_Fir_array_args52[4];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_p20_;
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args52[3] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names24[4];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste13_, 4, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L33() else D30()
  // L33()
  goto L33_;

D30_:;
  // deopt 115 [r53]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L33_:;
  // paste14 = ldf paste
  Rsh_Fir_reg_paste14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L34() else D31()
  // L34()
  goto L34_;

D31_:;
  // deopt 117 []
  Rsh_Fir_deopt(117, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p21 = prom<V +>{
  //   return NULL;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main21, 0, NULL, CCP, RHO);
  // r55 = dyn paste14[, , , collapse]("foo", p21, "bar", "|")
  SEXP Rsh_Fir_array_args53[4];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args53[3] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names25[4];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste14_, 4, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L35() else D32()
  // L35()
  goto L35_;

D32_:;
  // deopt 123 [r55]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L35_:;
  // paste15 = ldf paste
  Rsh_Fir_reg_paste15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L36() else D33()
  // L36()
  goto L36_;

D33_:;
  // deopt 125 []
  Rsh_Fir_deopt(125, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p22 = prom<V +>{
  //   return NULL;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main22, 0, NULL, CCP, RHO);
  // r57 = dyn paste15[, , collapse, recycle0]("foo", p22, "|", TRUE)
  SEXP Rsh_Fir_array_args54[4];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args54[2] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args54[3] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names26[3] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste15_, 4, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L37() else D34()
  // L37()
  goto L37_;

D34_:;
  // deopt 132 [r57]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L37_:;
  // paste16 = ldf paste
  Rsh_Fir_reg_paste16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L38() else D35()
  // L38()
  goto L38_;

D35_:;
  // deopt 134 []
  Rsh_Fir_deopt(134, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // r58 = dyn paste16[collapse]("|")
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste16_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L39() else D36()
  // L39()
  goto L39_;

D36_:;
  // deopt 137 [r58]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L39_:;
  // paste17 = ldf paste
  Rsh_Fir_reg_paste17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L40() else D37()
  // L40()
  goto L40_;

D37_:;
  // deopt 139 []
  Rsh_Fir_deopt(139, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // r59 = dyn paste17[collapse, recycle0]("|", TRUE)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names28[1] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste17_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L41() else D38()
  // L41()
  goto L41_;

D38_:;
  // deopt 144 [r59]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L41_:;
  // paste18 = ldf paste
  Rsh_Fir_reg_paste18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L42() else D39()
  // L42()
  goto L42_;

D39_:;
  // deopt 146 []
  Rsh_Fir_deopt(146, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p23 = prom<V +>{
  //   return NULL;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main23, 0, NULL, CCP, RHO);
  // r61 = dyn paste18[, collapse](p23, "|")
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p23_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste18_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L43() else D40()
  // L43()
  goto L43_;

D40_:;
  // deopt 150 [r61]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L43_:;
  // paste19 = ldf paste
  Rsh_Fir_reg_paste19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L44() else D41()
  // L44()
  goto L44_;

D41_:;
  // deopt 152 []
  Rsh_Fir_deopt(152, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p24 = prom<V +>{
  //   return NULL;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main24, 0, NULL, CCP, RHO);
  // r63 = dyn paste19[, collapse, recycle0](p24, "|", TRUE)
  SEXP Rsh_Fir_array_args58[3];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p24_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args58[2] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names30[2] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste19_, 3, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L45() else D42()
  // L45()
  goto L45_;

D42_:;
  // deopt 158 [r63]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L45_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r63
  return Rsh_Fir_reg_r63_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r1 = `:`(1.0, 12.0)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r4 = `:`(1.0, 12.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args2);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r11 = `:`(1.0, 12.0)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args8);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r14
  return Rsh_Fir_reg_r14_;

L2_:;
  // sym2 = ldf rep
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf rep in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard2 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r13 = dyn base1("st", "nd", "rd", <lang rep("th", 9.0)>)
  SEXP Rsh_Fir_array_args11[4];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args11[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 4, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L0_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r18 = dyn c("st", "nd", "rd", r16)
  SEXP Rsh_Fir_array_args12[4];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args12[3] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r18_;
  goto L0_;

L4_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r17 = dyn rep("th", 9.0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L1(r17)
  // L1(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L1_;

L5_:;
  // r15 = dyn base2("th", 9.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r15)
  // L1(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_month_abb;
  SEXP Rsh_Fir_reg_month_abb1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // month_abb = ld `month.abb`
  Rsh_Fir_reg_month_abb = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // month_abb1 = force? month_abb
  Rsh_Fir_reg_month_abb1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_month_abb);
  // checkMissing(month_abb1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_month_abb1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return month_abb1
  return Rsh_Fir_reg_month_abb1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nth;
  SEXP Rsh_Fir_reg_nth1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nth = ld nth
  Rsh_Fir_reg_nth = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // nth1 = force? nth
  Rsh_Fir_reg_nth1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nth);
  // checkMissing(nth1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_nth1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return nth1
  return Rsh_Fir_reg_nth1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_month_abb2_;
  SEXP Rsh_Fir_reg_month_abb3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // month_abb2 = ld `month.abb`
  Rsh_Fir_reg_month_abb2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // month_abb3 = force? month_abb2
  Rsh_Fir_reg_month_abb3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_month_abb2_);
  // checkMissing(month_abb3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_month_abb3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return month_abb3
  return Rsh_Fir_reg_month_abb3_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_letters;
  SEXP Rsh_Fir_reg_letters1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // letters = ld letters
  Rsh_Fir_reg_letters = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // letters1 = force? letters
  Rsh_Fir_reg_letters1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_letters);
  // checkMissing(letters1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_letters1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return letters1
  return Rsh_Fir_reg_letters1_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_month_abb4_;
  SEXP Rsh_Fir_reg_month_abb5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // month_abb4 = ld `month.abb`
  Rsh_Fir_reg_month_abb4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // month_abb5 = force? month_abb4
  Rsh_Fir_reg_month_abb5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_month_abb4_);
  // checkMissing(month_abb5)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_month_abb5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return month_abb5
  return Rsh_Fir_reg_month_abb5_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nth2_;
  SEXP Rsh_Fir_reg_nth3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nth2 = ld nth
  Rsh_Fir_reg_nth2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // nth3 = force? nth2
  Rsh_Fir_reg_nth3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nth2_);
  // checkMissing(nth3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_nth3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return nth3
  return Rsh_Fir_reg_nth3_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nth4_;
  SEXP Rsh_Fir_reg_nth5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nth4 = ld nth
  Rsh_Fir_reg_nth4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // nth5 = force? nth4
  Rsh_Fir_reg_nth5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nth4_);
  // checkMissing(nth5)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_nth5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return nth5
  return Rsh_Fir_reg_nth5_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_month_abb6_;
  SEXP Rsh_Fir_reg_month_abb7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // month_abb6 = ld `month.abb`
  Rsh_Fir_reg_month_abb6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // month_abb7 = force? month_abb6
  Rsh_Fir_reg_month_abb7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_month_abb6_);
  // checkMissing(month_abb7)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_month_abb7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return month_abb7
  return Rsh_Fir_reg_month_abb7_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nth6_;
  SEXP Rsh_Fir_reg_nth7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nth6 = ld nth
  Rsh_Fir_reg_nth6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // nth7 = force? nth6
  Rsh_Fir_reg_nth7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nth6_);
  // checkMissing(nth7)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_nth7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return nth7
  return Rsh_Fir_reg_nth7_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_strwrap;
  SEXP Rsh_Fir_reg_r37_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // strwrap = ldf strwrap
  Rsh_Fir_reg_strwrap = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // r37 = dyn strwrap[, width]("Stopping distance of cars (ft) vs. speed (mph) from Ezekiel (1930)", 30.0)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwrap, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names16, CCP, RHO);
  // return r37
  return Rsh_Fir_reg_r37_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r40_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r40 = dyn __(<sym dist>, <sym speed>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r40
  return Rsh_Fir_reg_r40_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cars;
  SEXP Rsh_Fir_reg_cars1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cars = ld cars
  Rsh_Fir_reg_cars = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // cars1 = force? cars
  Rsh_Fir_reg_cars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cars);
  // checkMissing(cars1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_cars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return cars1
  return Rsh_Fir_reg_cars1_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_title;
  SEXP Rsh_Fir_reg_title1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // title = ld title
  Rsh_Fir_reg_title = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // title1 = force? title
  Rsh_Fir_reg_title1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_title);
  // checkMissing(title1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_title1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return title1
  return Rsh_Fir_reg_title1_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return NULL
  return Rsh_const(CCP, 40);
}
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2>
  return Rsh_const(CCP, 41);
}
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_val;
  SEXP Rsh_Fir_reg_val1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_val3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_valid;
  SEXP Rsh_Fir_reg_valid1_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // val = ld val
  Rsh_Fir_reg_val = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // val1 = force? val
  Rsh_Fir_reg_val1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val);
  // checkMissing(val1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_val1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(val1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_val1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args40);
  // if c1 then L1() else L2(val1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(val1)
    Rsh_Fir_reg_val3_ = Rsh_Fir_reg_val1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", val1)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_val1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_val3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // valid = ld valid
  Rsh_Fir_reg_valid = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // valid1 = force? valid
  Rsh_Fir_reg_valid1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_valid);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r48 = dyn __1(val3, valid1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_val3_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_valid1_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r48_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_val4_;
  SEXP Rsh_Fir_reg_val5_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_val7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_valid2_;
  SEXP Rsh_Fir_reg_valid3_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r51_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // val4 = ld val
  Rsh_Fir_reg_val4_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // val5 = force? val4
  Rsh_Fir_reg_val5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val4_);
  // checkMissing(val5)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_val5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(val5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_val5_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args47);
  // if c2 then L1() else L2(val5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(val5)
    Rsh_Fir_reg_val7_ = Rsh_Fir_reg_val5_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", val5)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_val5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_val7_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // valid2 = ld valid
  Rsh_Fir_reg_valid2_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // valid3 = force? valid2
  Rsh_Fir_reg_valid3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_valid2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r51 = dyn __2(val7, valid3)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_val7_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_valid3_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r51)
  // L0(r51)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r51_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return NULL
  return Rsh_const(CCP, 40);
}
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return NULL
  return Rsh_const(CCP, 40);
}
SEXP Rsh_Fir_user_promise_main23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return NULL
  return Rsh_const(CCP, 40);
}
SEXP Rsh_Fir_user_promise_main24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return NULL
  return Rsh_const(CCP, 40);
}
SEXP Rsh_Fir_user_function_inner3837407667_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3837407667 dynamic dispatch ([`...`, sep, collapse, recycle0])

  return Rsh_Fir_user_version_inner3837407667_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3837407667_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3837407667 version 0 (dots, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3837407667/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sep;
  SEXP Rsh_Fir_reg_collapse;
  SEXP Rsh_Fir_reg_recycle0_;
  SEXP Rsh_Fir_reg_sep_isMissing;
  SEXP Rsh_Fir_reg_sep_orDefault;
  SEXP Rsh_Fir_reg_collapse_isMissing;
  SEXP Rsh_Fir_reg_collapse_orDefault;
  SEXP Rsh_Fir_reg_recycle0_isMissing;
  SEXP Rsh_Fir_reg_recycle0_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_sep1_;
  SEXP Rsh_Fir_reg_sep2_;
  SEXP Rsh_Fir_reg_collapse1_;
  SEXP Rsh_Fir_reg_collapse2_;
  SEXP Rsh_Fir_reg_recycle1_;
  SEXP Rsh_Fir_reg_recycle2_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_r5_;

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];
  Rsh_Fir_reg_sep = PARAMS[1];
  Rsh_Fir_reg_collapse = PARAMS[2];
  Rsh_Fir_reg_recycle0_ = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sep_isMissing = missing.0(sep)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sep;
  Rsh_Fir_reg_sep_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args59);
  // if sep_isMissing then L0(" ") else L0(sep)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sep_isMissing)) {
  // L0(" ")
    Rsh_Fir_reg_sep_orDefault = Rsh_const(CCP, 57);
    goto L0_;
  } else {
  // L0(sep)
    Rsh_Fir_reg_sep_orDefault = Rsh_Fir_reg_sep;
    goto L0_;
  }

L0_:;
  // st sep = sep_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_sep_orDefault, RHO);
  (void)(Rsh_Fir_reg_sep_orDefault);
  // collapse_isMissing = missing.0(collapse)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_collapse;
  Rsh_Fir_reg_collapse_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args60);
  // if collapse_isMissing then L1(NULL) else L1(collapse)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_collapse_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_collapse_orDefault = Rsh_const(CCP, 40);
    goto L1_;
  } else {
  // L1(collapse)
    Rsh_Fir_reg_collapse_orDefault = Rsh_Fir_reg_collapse;
    goto L1_;
  }

L1_:;
  // st collapse = collapse_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_collapse_orDefault, RHO);
  (void)(Rsh_Fir_reg_collapse_orDefault);
  // recycle0_isMissing = missing.0(recycle0)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_recycle0_;
  Rsh_Fir_reg_recycle0_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args61);
  // if recycle0_isMissing then L2(FALSE) else L2(recycle0)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_recycle0_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_recycle0_orDefault = Rsh_const(CCP, 42);
    goto L2_;
  } else {
  // L2(recycle0)
    Rsh_Fir_reg_recycle0_orDefault = Rsh_Fir_reg_recycle0_;
    goto L2_;
  }

L2_:;
  // st recycle0 = recycle0_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_recycle0_orDefault, RHO);
  (void)(Rsh_Fir_reg_recycle0_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L5_:;
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // r = dyn base(<lang paste(list(...), sep, collapse, recycle0)>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L3_;

L4_:;
  // sep1 = ld sep
  Rsh_Fir_reg_sep1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L7_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r2 = dyn base1(<sym ...>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L4(r2)
  // L4(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_;
  goto L4_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 7 [sep1]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_sep1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L9_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // r4 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

L11_:;
  // sep2 = force? sep1
  Rsh_Fir_reg_sep2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sep1_);
  // checkMissing(sep2)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sep2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // collapse1 = ld collapse
  Rsh_Fir_reg_collapse1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

D1_:;
  // deopt 6 [r4]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 9 [collapse1]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_collapse1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L4(r4)
  // L4(r4)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r4_1;
  goto L4_;

L12_:;
  // collapse2 = force? collapse1
  Rsh_Fir_reg_collapse2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_collapse1_);
  // checkMissing(collapse2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_collapse2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // recycle1 = ld recycle0
  Rsh_Fir_reg_recycle1_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

D4_:;
  // deopt 11 [recycle1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_recycle1_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L13_:;
  // recycle2 = force? recycle1
  Rsh_Fir_reg_recycle2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recycle1_);
  // checkMissing(recycle2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_recycle2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // paste = ldf paste in base
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r5 = dyn paste(r3, sep2, collapse2, recycle2)
  SEXP Rsh_Fir_array_args70[4];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_sep2_;
  Rsh_Fir_array_args70[2] = Rsh_Fir_reg_collapse2_;
  Rsh_Fir_array_args70[3] = Rsh_Fir_reg_recycle2_;
  SEXP Rsh_Fir_array_arg_names34[4];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_array_arg_names34[3] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 4, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

D5_:;
  // deopt 14 [r5]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r5_;
  goto L3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
