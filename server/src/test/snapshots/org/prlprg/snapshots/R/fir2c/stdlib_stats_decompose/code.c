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
SEXP Rsh_Fir_user_function_inner1170828029_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1170828029_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1170828029_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1170828029_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_require;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_decompose;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_ts;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_decompose1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_round;
  SEXP Rsh_Fir_reg_r27_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1170828029
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1170828029_, RHO, CCP);
  // st decompose = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf require
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf require in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // decompose = ldf decompose
  Rsh_Fir_reg_decompose = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

L3_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // r1 = dyn base(<sym graphics>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p = prom<V +>{
  //   graphics = ld graphics;
  //   graphics1 = force? graphics;
  //   checkMissing(graphics1);
  //   return graphics1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn require(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

L7_:;
  // p1 = prom<V +>{
  //   co2 = ld co2;
  //   co3 = force? co2;
  //   checkMissing(co3);
  //   return co3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r6 = dyn decompose(p1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_decompose, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 11 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L0()
  // L0()
  goto L0_;

L8_:;
  // st m = r6
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

D4_:;
  // deopt 13 [m]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_m;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c = `is.object`(m1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args7);
  // if c then L11() else L12(m1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L11()
    goto L11_;
  } else {
  // L12(m1)
    Rsh_Fir_reg_m3_ = Rsh_Fir_reg_m1_;
    goto L12_;
  }

L10_:;
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

L11_:;
  // dr = tryDispatchBuiltin.1("$", m1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if dc then L13() else L12(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L13()
    goto L13_;
  } else {
  // L12(dr)
    Rsh_Fir_reg_m3_ = Rsh_Fir_reg_dr;
    goto L12_;
  }

L12_:;
  // r7 = `$`(m3, <sym figure>)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args10);
  // goto L10()
  // L10()
  goto L10_;

D5_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L10()
  // L10()
  goto L10_;

L14_:;
  // p2 = prom<V +>{
  //   m4 = ld m;
  //   m5 = force? m4;
  //   checkMissing(m5);
  //   return m5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r9 = dyn plot(p2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L15() else D6()
  // L15()
  goto L15_;

D6_:;
  // deopt 19 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L1_:;
  // st x = r11
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // ts = ldf ts
  Rsh_Fir_reg_ts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

L16_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r12 = dyn c1(-50.0, 175.0, 149.0, 214.0, 247.0, 237.0, 225.0, 329.0, 729.0, 809.0, 530.0, 489.0, 540.0, 457.0, 195.0, 176.0, 337.0, 239.0, 128.0, 102.0, 232.0, 429.0, 3.0, 98.0, 43.0, -141.0, -77.0, -13.0, 125.0, 361.0, -45.0, 184.0)
  SEXP Rsh_Fir_array_args15[32];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args15[4] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args15[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args15[7] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args15[8] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args15[9] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args15[10] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args15[11] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args15[12] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args15[13] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args15[14] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args15[15] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args15[16] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args15[17] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args15[18] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args15[19] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args15[20] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args15[21] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args15[22] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args15[23] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args15[24] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args15[25] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args15[26] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args15[27] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args15[28] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args15[29] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args15[30] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args15[31] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names4[32];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_array_arg_names4[4] = R_MissingArg;
  Rsh_Fir_array_arg_names4[5] = R_MissingArg;
  Rsh_Fir_array_arg_names4[6] = R_MissingArg;
  Rsh_Fir_array_arg_names4[7] = R_MissingArg;
  Rsh_Fir_array_arg_names4[8] = R_MissingArg;
  Rsh_Fir_array_arg_names4[9] = R_MissingArg;
  Rsh_Fir_array_arg_names4[10] = R_MissingArg;
  Rsh_Fir_array_arg_names4[11] = R_MissingArg;
  Rsh_Fir_array_arg_names4[12] = R_MissingArg;
  Rsh_Fir_array_arg_names4[13] = R_MissingArg;
  Rsh_Fir_array_arg_names4[14] = R_MissingArg;
  Rsh_Fir_array_arg_names4[15] = R_MissingArg;
  Rsh_Fir_array_arg_names4[16] = R_MissingArg;
  Rsh_Fir_array_arg_names4[17] = R_MissingArg;
  Rsh_Fir_array_arg_names4[18] = R_MissingArg;
  Rsh_Fir_array_arg_names4[19] = R_MissingArg;
  Rsh_Fir_array_arg_names4[20] = R_MissingArg;
  Rsh_Fir_array_arg_names4[21] = R_MissingArg;
  Rsh_Fir_array_arg_names4[22] = R_MissingArg;
  Rsh_Fir_array_arg_names4[23] = R_MissingArg;
  Rsh_Fir_array_arg_names4[24] = R_MissingArg;
  Rsh_Fir_array_arg_names4[25] = R_MissingArg;
  Rsh_Fir_array_arg_names4[26] = R_MissingArg;
  Rsh_Fir_array_arg_names4[27] = R_MissingArg;
  Rsh_Fir_array_arg_names4[28] = R_MissingArg;
  Rsh_Fir_array_arg_names4[29] = R_MissingArg;
  Rsh_Fir_array_arg_names4[30] = R_MissingArg;
  Rsh_Fir_array_arg_names4[31] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 32, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

L17_:;
  // r10 = dyn base1(<lang `-`(50.0)>, 175.0, 149.0, 214.0, 247.0, 237.0, 225.0, 329.0, 729.0, 809.0, 530.0, 489.0, 540.0, 457.0, 195.0, 176.0, 337.0, 239.0, 128.0, 102.0, 232.0, 429.0, 3.0, 98.0, 43.0, <lang `-`(141.0)>, <lang `-`(77.0)>, <lang `-`(13.0)>, 125.0, 361.0, <lang `-`(45.0)>, 184.0)
  SEXP Rsh_Fir_array_args16[32];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args16[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args16[4] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args16[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args16[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args16[7] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args16[8] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args16[9] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args16[10] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args16[11] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args16[12] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args16[13] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args16[14] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args16[15] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args16[16] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args16[17] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args16[18] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args16[19] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args16[20] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args16[21] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args16[22] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args16[23] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args16[24] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args16[25] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args16[26] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args16[27] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args16[28] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args16[29] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args16[30] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args16[31] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names5[32];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_array_arg_names5[6] = R_MissingArg;
  Rsh_Fir_array_arg_names5[7] = R_MissingArg;
  Rsh_Fir_array_arg_names5[8] = R_MissingArg;
  Rsh_Fir_array_arg_names5[9] = R_MissingArg;
  Rsh_Fir_array_arg_names5[10] = R_MissingArg;
  Rsh_Fir_array_arg_names5[11] = R_MissingArg;
  Rsh_Fir_array_arg_names5[12] = R_MissingArg;
  Rsh_Fir_array_arg_names5[13] = R_MissingArg;
  Rsh_Fir_array_arg_names5[14] = R_MissingArg;
  Rsh_Fir_array_arg_names5[15] = R_MissingArg;
  Rsh_Fir_array_arg_names5[16] = R_MissingArg;
  Rsh_Fir_array_arg_names5[17] = R_MissingArg;
  Rsh_Fir_array_arg_names5[18] = R_MissingArg;
  Rsh_Fir_array_arg_names5[19] = R_MissingArg;
  Rsh_Fir_array_arg_names5[20] = R_MissingArg;
  Rsh_Fir_array_arg_names5[21] = R_MissingArg;
  Rsh_Fir_array_arg_names5[22] = R_MissingArg;
  Rsh_Fir_array_arg_names5[23] = R_MissingArg;
  Rsh_Fir_array_arg_names5[24] = R_MissingArg;
  Rsh_Fir_array_arg_names5[25] = R_MissingArg;
  Rsh_Fir_array_arg_names5[26] = R_MissingArg;
  Rsh_Fir_array_arg_names5[27] = R_MissingArg;
  Rsh_Fir_array_arg_names5[28] = R_MissingArg;
  Rsh_Fir_array_arg_names5[29] = R_MissingArg;
  Rsh_Fir_array_arg_names5[30] = R_MissingArg;
  Rsh_Fir_array_arg_names5[31] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 32, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r10)
  // L1(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L1_;

D7_:;
  // deopt 60 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L1(r12)
  // L1(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L1_;

L19_:;
  // p3 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r15):
  //   return r15;
  // L1():
  //   c2 = ldf c in base;
  //   r16 = dyn c2(1951.0, 1.0);
  //   goto L0(r16);
  // L2():
  //   r14 = dyn base2(1951.0, 1.0);
  //   goto L0(r14);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r19):
  //   return r19;
  // L1():
  //   c3 = ldf c in base;
  //   r20 = dyn c3(1958.0, 4.0);
  //   goto L0(r20);
  // L2():
  //   r18 = dyn base3(1958.0, 4.0);
  //   goto L0(r18);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r22 = dyn ts[, start, end, frequency](p3, p4, p5, 4.0)
  SEXP Rsh_Fir_array_args24[4];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args24[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 53);
  Rsh_Fir_array_arg_names10[3] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts, 4, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L20() else D9()
  // L20()
  goto L20_;

D9_:;
  // deopt 71 [r22]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // st x = r22
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // decompose1 = ldf decompose
  Rsh_Fir_reg_decompose1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L21() else D10()
  // L21()
  goto L21_;

D10_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p6 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r24 = dyn decompose1(p6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_decompose1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L22() else D11()
  // L22()
  goto L22_;

D11_:;
  // deopt 76 [r24]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // st m = r24
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // sym4 = ldf round
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base4 = ldf round in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard4 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r26
  return Rsh_Fir_reg_r26_;

L23_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r27 = dyn round(<lang `/`(`$`(decompose(x), figure), 10.0)>, 2.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L2(r27)
  // L2(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L2_;

L24_:;
  // r25 = dyn base4(<lang `/`(`$`(decompose(x), figure), 10.0)>, 2.0)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L2(r25)
  // L2(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_graphics;
  SEXP Rsh_Fir_reg_graphics1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // graphics = ld graphics
  Rsh_Fir_reg_graphics = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // graphics1 = force? graphics
  Rsh_Fir_reg_graphics1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_graphics);
  // checkMissing(graphics1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_graphics1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return graphics1
  return Rsh_Fir_reg_graphics1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_co2_;
  SEXP Rsh_Fir_reg_co3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // co2 = ld co2
  Rsh_Fir_reg_co2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // co3 = force? co2
  Rsh_Fir_reg_co3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_co2_);
  // checkMissing(co3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_co3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return co3
  return Rsh_Fir_reg_co3_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m4_;
  SEXP Rsh_Fir_reg_m5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return m5
  return Rsh_Fir_reg_m5_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r15
  return Rsh_Fir_reg_r15_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r16 = dyn c2(1951.0, 1.0)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L2_:;
  // r14 = dyn base2(1951.0, 1.0)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r19
  return Rsh_Fir_reg_r19_;

L1_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r20 = dyn c3(1958.0, 4.0)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L0_;

L2_:;
  // r18 = dyn base3(1958.0, 4.0)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_function_inner1170828029_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1170828029 dynamic dispatch ([x, type, filter])

  return Rsh_Fir_user_version_inner1170828029_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1170828029_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1170828029 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1170828029/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_type;
  SEXP Rsh_Fir_reg_filter;
  SEXP Rsh_Fir_reg_type_isMissing;
  SEXP Rsh_Fir_reg_type_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_filter_isMissing;
  SEXP Rsh_Fir_reg_filter_orDefault;
  SEXP Rsh_Fir_reg_match_arg;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_frequency;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_na_omit;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_reg_f3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_filter1_;
  SEXP Rsh_Fir_reg_filter2_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_f4_;
  SEXP Rsh_Fir_reg_f5_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_r26_1;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_f6_;
  SEXP Rsh_Fir_reg_f7_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_rep_len;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_f8_;
  SEXP Rsh_Fir_reg_f9_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_f10_;
  SEXP Rsh_Fir_reg_f11_;
  SEXP Rsh_Fir_reg_rep_len1_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_f12_;
  SEXP Rsh_Fir_reg_f13_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_filter3_;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_type3_;
  SEXP Rsh_Fir_reg_type4_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_trend;
  SEXP Rsh_Fir_reg_trend1_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_trend2_;
  SEXP Rsh_Fir_reg_trend3_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_f14_;
  SEXP Rsh_Fir_reg_f15_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_f16_;
  SEXP Rsh_Fir_reg_f17_;
  SEXP Rsh_Fir_reg_seq_int;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_numeric;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_f20_;
  SEXP Rsh_Fir_reg_f21_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_mean;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_type5_;
  SEXP Rsh_Fir_reg_type6_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_figure;
  SEXP Rsh_Fir_reg_figure1_;
  SEXP Rsh_Fir_reg_mean1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_figure4_;
  SEXP Rsh_Fir_reg_figure5_;
  SEXP Rsh_Fir_reg_mean2_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_ts1;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r99_;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_type = PARAMS[1];
  Rsh_Fir_reg_filter = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // type_isMissing = missing.0(type)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_type;
  Rsh_Fir_reg_type_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args30);
  // if type_isMissing then L0() else L1(type)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_type_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(type)
    Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_type;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("additive", "multiplicative");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("additive", "multiplicative");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st type = type_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 60), Rsh_Fir_reg_type_orDefault, RHO);
  (void)(Rsh_Fir_reg_type_orDefault);
  // filter_isMissing = missing.0(filter)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_filter;
  Rsh_Fir_reg_filter_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args34);
  // if filter_isMissing then L2(NULL) else L2(filter)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_filter_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_filter_orDefault = Rsh_const(CCP, 61);
    goto L2_;
  } else {
  // L2(filter)
    Rsh_Fir_reg_filter_orDefault = Rsh_Fir_reg_filter;
    goto L2_;
  }

L2_:;
  // st filter = filter_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 62), Rsh_Fir_reg_filter_orDefault, RHO);
  (void)(Rsh_Fir_reg_filter_orDefault);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // check L24() else D0()
  // L24()
  goto L24_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p1 = prom<V +>{
  //   type1 = ld type;
  //   type2 = force? type1;
  //   checkMissing(type2);
  //   return type2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_1, 0, NULL, CCP, RHO);
  // r5 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L25() else D1()
  // L25()
  goto L25_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L25_:;
  // st type = r5
  Rsh_Fir_store(Rsh_const(CCP, 60), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard1 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L3_:;
  // st l = r7
  Rsh_Fir_store(Rsh_const(CCP, 65), Rsh_Fir_reg_r7_1, RHO);
  (void)(Rsh_Fir_reg_r7_1);
  // frequency = ldf frequency
  Rsh_Fir_reg_frequency = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

L26_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L28() else D2()
  // L28()
  goto L28_;

L27_:;
  // r6 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_1;
  goto L3_;

D2_:;
  // deopt 7 [x1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r8 = dyn length(x2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L29() else D3()
  // L29()
  goto L29_;

L30_:;
  // p2 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_2, 0, NULL, CCP, RHO);
  // r10 = dyn frequency(p2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_frequency, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

D3_:;
  // deopt 10 [r8]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 15 [r10]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r8_;
  goto L3_;

L31_:;
  // st f = r10
  Rsh_Fir_store(Rsh_const(CCP, 66), Rsh_Fir_reg_r10_1, RHO);
  (void)(Rsh_Fir_reg_r10_1);
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

D6_:;
  // deopt 17 [f]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_f;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // r11 = `<=`(f1, 1.0)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_f1_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args44);
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c1 then L4(c1) else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L4(c1)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1_1;
    goto L4_;
  } else {
  // L33()
    goto L33_;
  }

L4_:;
  // c10 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args46);
  // if c10 then L41() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L41()
    goto L41_;
  } else {
  // L6()
    goto L6_;
  }

L33_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard2 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L5_:;
  // f2 = ld f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L39() else D10()
  // L39()
  goto L39_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard3 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L34_:;
  // na_omit = ldf `na.omit`
  Rsh_Fir_reg_na_omit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

L35_:;
  // r12 = dyn base2(<lang na.omit(x)>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L5(c1, r12)
  // L5(c1, r12)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_1;
  goto L5_;

L41_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // check L42() else D11()
  // L42()
  goto L42_;

D7_:;
  // deopt 24 [c1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 29 [c6, r13, 2.0, f2]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_const(CCP, 57);
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_f2_;
  Rsh_Fir_deopt(29, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // c12 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r22_1;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args50);
  // if c12 then L48() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L48()
    goto L48_;
  } else {
  // L9()
    goto L9_;
  }

L36_:;
  // p3 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_3, 0, NULL, CCP, RHO);
  // r15 = dyn na_omit(p3)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_na_omit, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

L39_:;
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // r17 = `*`(2.0, f3)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_f3_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args54);
  // r18 = `<`(r13, r17)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args55);
  // c7 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args56);
  // c8 = `||`(c6, c7)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args57);
  // goto L4(c8)
  // L4(c8)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c8_;
  goto L4_;

L42_:;
  // r19 = dyn stop("time series has no or less than 2 periods")
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L43() else D12()
  // L43()
  goto L43_;

L45_:;
  // filter1 = ld filter
  Rsh_Fir_reg_filter1_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L47() else D13()
  // L47()
  goto L47_;

L46_:;
  // r21 = dyn base3(<sym filter>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L8(r21)
  // L8(r21)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r21_;
  goto L8_;

D8_:;
  // deopt 26 [c1, r15]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 37 [r19]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 41 [filter1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_filter1_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // filter3 = ldf filter
  Rsh_Fir_reg_filter3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L67() else D23()
  // L67()
  goto L67_;

L37_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r16 = dyn length1(r15)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

L43_:;
  // goto L7()
  // L7()
  goto L7_;

L47_:;
  // filter2 = force? filter1
  Rsh_Fir_reg_filter2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filter1_);
  // checkMissing(filter2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_filter2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c11 = `==`(filter2, NULL)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_filter2_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args62);
  // goto L8(c11)
  // L8(c11)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_c11_;
  goto L8_;

L48_:;
  // f4 = ld f
  Rsh_Fir_reg_f4_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L49() else D14()
  // L49()
  goto L49_;

D9_:;
  // deopt 28 [c1, r16]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 45 [f4]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_f4_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 81 []
  Rsh_Fir_deopt(81, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L5(c1, r16)
  // L5(c1, r16)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r16_1;
  goto L5_;

L49_:;
  // f5 = force? f4
  Rsh_Fir_reg_f5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f4_);
  // checkMissing(f5)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_f5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // __ = ldf `%%` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 72), RHO);
  // r23 = dyn __(f5, 2.0)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_f5_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L50() else D15()
  // L50()
  goto L50_;

L67_:;
  // p4 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   filter4 = ld filter;
  //   filter5 = force? filter4;
  //   checkMissing(filter5);
  //   return filter5;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_5, 0, NULL, CCP, RHO);
  // r41 = dyn filter3(p4, p5)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_filter3_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L68() else D24()
  // L68()
  goto L68_;

D15_:;
  // deopt 49 [r23]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 84 [r41]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L50_:;
  // r24 = `!`(r23)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args68);
  // c13 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args69);
  // if c13 then L51() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L51()
    goto L51_;
  } else {
  // L10()
    goto L10_;
  }

L68_:;
  // st trend = r41
  Rsh_Fir_store(Rsh_const(CCP, 73), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // type3 = ld type
  Rsh_Fir_reg_type3_ = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // check L69() else D25()
  // L69()
  goto L69_;

D25_:;
  // deopt 86 [type3]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_type3_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L10_:;
  // sym6 = ldf rep_len
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // base6 = ldf rep_len in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard6 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L13_:;
  // st filter = r33
  Rsh_Fir_store(Rsh_const(CCP, 62), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // goto L15()
  // L15()
  goto L15_;

L51_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard4 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L69_:;
  // type4 = force? type3
  Rsh_Fir_reg_type4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type3_);
  // checkMissing(type4)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_type4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // r42 = `==`(type4, "additive")
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_type4_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args73);
  // c15 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args74);
  // if c15 then L70() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L70()
    goto L70_;
  } else {
  // L16()
    goto L16_;
  }

L11_:;
  // f8 = ld f
  Rsh_Fir_reg_f8_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L59() else D19()
  // L59()
  goto L59_;

L14_:;
  // f12 = ld f
  Rsh_Fir_reg_f12_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L65() else D22()
  // L65()
  goto L65_;

L16_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L74() else D28()
  // L74()
  goto L74_;

L17_:;
  // st season = r44
  Rsh_Fir_store(Rsh_const(CCP, 75), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // l = ld l
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // check L76() else D30()
  // L76()
  goto L76_;

L52_:;
  // sym5 = ldf rep_len
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // base5 = ldf rep_len in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard5 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L53_:;
  // r25 = dyn base4(0.5, <lang rep_len(1.0, `-`(f, 1.0))>, 0.5)
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 77);
  Rsh_Fir_array_args76[2] = Rsh_const(CCP, 76);
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r25_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L11(r25)
  // L11(r25)
  Rsh_Fir_reg_r26_1 = Rsh_Fir_reg_r25_1;
  goto L11_;

L61_:;
  // f10 = ld f
  Rsh_Fir_reg_f10_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L63() else D20()
  // L63()
  goto L63_;

L62_:;
  // r34 = dyn base6(1.0, <sym f>)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L14(r34)
  // L14(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L14_;

L70_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L71() else D26()
  // L71()
  goto L71_;

D19_:;
  // deopt 65 [r26, f8]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_f8_;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 71 [f10]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_f10_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 74 [r35, f12]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_f12_;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 90 [x9]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 94 [x11]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 100 [l]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_l;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L12_:;
  // c14 = ldf c in base
  Rsh_Fir_reg_c14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r31 = dyn c14(0.5, r28, 0.5)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args78[2] = Rsh_const(CCP, 76);
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c14_, 3, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L58() else D18()
  // L58()
  goto L58_;

L54_:;
  // f6 = ld f
  Rsh_Fir_reg_f6_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L56() else D16()
  // L56()
  goto L56_;

L55_:;
  // r27 = dyn base5(1.0, <lang `-`(f, 1.0)>)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 78);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_1;
  goto L12_;

L59_:;
  // f9 = force? f8
  Rsh_Fir_reg_f9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f8_);
  // checkMissing(f9)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_f9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // r32 = `/`(r26, f9)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_f9_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args81);
  // goto L13(r32)
  // L13(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L13_;

L63_:;
  // f11 = force? f10
  Rsh_Fir_reg_f11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f10_);
  // checkMissing(f11)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_f11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // rep_len1 = ldf rep_len in base
  Rsh_Fir_reg_rep_len1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // r36 = dyn rep_len1(1.0, f11)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_f11_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len1_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L64() else D21()
  // L64()
  goto L64_;

L65_:;
  // f13 = force? f12
  Rsh_Fir_reg_f13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f12_);
  // checkMissing(f13)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_f13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // r37 = `/`(r35, f13)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_f13_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args85);
  // goto L13(r37)
  // L13(r37)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r37_;
  goto L13_;

L71_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // trend = ld trend
  Rsh_Fir_reg_trend = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // check L72() else D27()
  // L72()
  goto L72_;

L74_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // trend2 = ld trend
  Rsh_Fir_reg_trend2_ = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // check L75() else D29()
  // L75()
  goto L75_;

L76_:;
  // l1 = force? l
  Rsh_Fir_reg_l1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l);
  // checkMissing(l1)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_l1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // f14 = ld f
  Rsh_Fir_reg_f14_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L77() else D31()
  // L77()
  goto L77_;

D16_:;
  // deopt 57 [f6]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_f6_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 65 [r31]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 74 [r36]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 91 [x10, trend]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_trend;
  Rsh_Fir_deopt(91, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 95 [x12, trend2]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_trend2_;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 102 [f14]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_f14_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L56_:;
  // f7 = force? f6
  Rsh_Fir_reg_f7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f6_);
  // checkMissing(f7)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_f7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // r29 = `-`(f7, 1.0)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_f7_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args90);
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // r30 = dyn rep_len(1.0, r29)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L57() else D17()
  // L57()
  goto L57_;

L58_:;
  // goto L11(r31)
  // L11(r31)
  Rsh_Fir_reg_r26_1 = Rsh_Fir_reg_r31_;
  goto L11_;

L64_:;
  // goto L14(r36)
  // L14(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L14_;

L72_:;
  // trend1 = force? trend
  Rsh_Fir_reg_trend1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trend);
  // checkMissing(trend1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_trend1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // r43 = `-`(x10, trend1)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_trend1_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args93);
  // goto L17(r43)
  // L17(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L17_;

L75_:;
  // trend3 = force? trend2
  Rsh_Fir_reg_trend3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trend2_);
  // checkMissing(trend3)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_trend3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // r45 = `/`(x12, trend3)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_trend3_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args95);
  // goto L17(r45)
  // L17(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L17_;

L77_:;
  // f15 = force? f14
  Rsh_Fir_reg_f15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f14_);
  // checkMissing(f15)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_f15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // ___ = ldf `%/%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r46 = dyn ___(l1, f15)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_f15_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L78() else D32()
  // L78()
  goto L78_;

D17_:;
  // deopt 62 [r30]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 105 [r46]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L12(r30)
  // L12(r30)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r30_;
  goto L12_;

L78_:;
  // st periods = r46
  Rsh_Fir_store(Rsh_const(CCP, 80), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // sym7 = ldf `seq.int`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 81), RHO);
  // base7 = ldf `seq.int` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 81), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard7 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L18_:;
  // r50 = `-`(r48, 1)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 82);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args99);
  // st index = r50
  Rsh_Fir_store(Rsh_const(CCP, 83), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 84), RHO);
  // check L84() else D36()
  // L84()
  goto L84_;

L79_:;
  // l2 = ld l
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // check L81() else D33()
  // L81()
  goto L81_;

L80_:;
  // r47 = dyn base7[, , by](1, <sym l>, <sym f>)
  SEXP Rsh_Fir_array_args100[3];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 82);
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args100[2] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = Rsh_const(CCP, 85);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 3, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L18(r47)
  // L18(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L18_;

D33_:;
  // deopt 110 [l2]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 121 []
  Rsh_Fir_deopt(121, 0, NULL, CCP, RHO);
  return R_NilValue;

L81_:;
  // l3 = force? l2
  Rsh_Fir_reg_l3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l2_);
  // checkMissing(l3)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_l3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // f16 = ld f
  Rsh_Fir_reg_f16_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L82() else D34()
  // L82()
  goto L82_;

L84_:;
  // p6 = prom<V +>{
  //   f18 = ld f;
  //   f19 = force? f18;
  //   checkMissing(f19);
  //   return f19;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_6, 0, NULL, CCP, RHO);
  // r52 = dyn numeric(p6)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L85() else D37()
  // L85()
  goto L85_;

D34_:;
  // deopt 112 [f16]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_f16_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 123 [r52]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L82_:;
  // f17 = force? f16
  Rsh_Fir_reg_f17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f16_);
  // checkMissing(f17)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_f17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 81), RHO);
  // r49 = dyn seq_int(1, l3, f17)
  SEXP Rsh_Fir_array_args105[3];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 82);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args105[2] = Rsh_Fir_reg_f17_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 3, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L83() else D35()
  // L83()
  goto L83_;

L85_:;
  // st figure = r52
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // f20 = ld f
  Rsh_Fir_reg_f20_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // check L86() else D38()
  // L86()
  goto L86_;

D35_:;
  // deopt 116 [r49]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 126 [1, f20]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_const(CCP, 82);
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_f20_;
  Rsh_Fir_deopt(126, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L18(r49)
  // L18(r49)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L18_;

L86_:;
  // f21 = force? f20
  Rsh_Fir_reg_f21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f20_);
  // checkMissing(f21)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_f21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // r53 = `:`(1, f21)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 82);
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_f21_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args107);
  // s = toForSeq(r53)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // l4 = length(s)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l4_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args109);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 86);
  // goto L19(i)
  // L19(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L19_;

L19_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 82);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args110);
  // c16 = `<`.1(l4, i2)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if c16 then L87() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L87()
    goto L87_;
  } else {
  // L21()
    goto L21_;
  }

L21_:;
  // x13 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args112[4];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args112[2] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args112[3] = Rsh_const(CCP, 87);
  Rsh_Fir_reg_x13_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args112);
  // st i = x13
  Rsh_Fir_store(Rsh_const(CCP, 88), Rsh_Fir_reg_x13_, RHO);
  (void)(Rsh_Fir_reg_x13_);
  // mean = ldf mean
  Rsh_Fir_reg_mean = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 89), RHO);
  // check L88() else D39()
  // L88()
  goto L88_;

L87_:;
  // type5 = ld type
  Rsh_Fir_reg_type5_ = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // check L94() else D42()
  // L94()
  goto L94_;

D39_:;
  // deopt 130 [i2]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 143 [type5]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_type5_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L88_:;
  // p7 = prom<V +>{
  //   season = ld season;
  //   season1 = force? season;
  //   checkMissing(season1);
  //   c17 = `is.object`(season1);
  //   if c17 then L1() else L2(season1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", season1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(season3):
  //   index = ld index;
  //   index1 = force? index;
  //   checkMissing(index1);
  //   i5 = ld i;
  //   i6 = force? i5;
  //   checkMissing(i6);
  //   r54 = `+`(index1, i6);
  //   __1 = ldf `[` in base;
  //   r55 = dyn __1(season3, r54);
  //   goto L0(r55);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_7, 0, NULL, CCP, RHO);
  // r57 = dyn mean[, `na.rm`](p7, TRUE)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args122[1] = Rsh_const(CCP, 87);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = Rsh_const(CCP, 92);
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mean, 2, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L89() else D40()
  // L89()
  goto L89_;

L94_:;
  // type6 = force? type5
  Rsh_Fir_reg_type6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type5_);
  // checkMissing(type6)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_type6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // r63 = `==`(type6, "additive")
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_type6_;
  Rsh_Fir_array_args124[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args124);
  // c19 = `as.logical`(r63)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args125);
  // if c19 then L95() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L95()
    goto L95_;
  } else {
  // L22()
    goto L22_;
  }

D40_:;
  // deopt 134 [i2, r57]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(134, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L22_:;
  // figure4 = ld figure
  Rsh_Fir_reg_figure4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L100() else D46()
  // L100()
  goto L100_;

L23_:;
  // st figure = r67
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // ts = ldf ts
  Rsh_Fir_reg_ts1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L103() else D49()
  // L103()
  goto L103_;

L89_:;
  // l5 = ld figure
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c18 = `is.object`(l5)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args126);
  // if c18 then L90() else L91(i2, r57, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L90()
    goto L90_;
  } else {
  // L91(i2, r57, l5)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r57_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L91_;
  }

L95_:;
  // figure = ld figure
  Rsh_Fir_reg_figure = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L96() else D43()
  // L96()
  goto L96_;

D43_:;
  // deopt 147 [figure]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_figure;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 153 [figure4]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_figure4_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 161 []
  Rsh_Fir_deopt(161, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // st figure = dx3
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L19(i10)
  // L19(i10)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i10_;
  goto L19_;

L90_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l5, r57)
  SEXP Rsh_Fir_array_args127[3];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 93);
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args127[2] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args127);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if dc1 then L92() else L91(i2, r57, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L92()
    goto L92_;
  } else {
  // L91(i2, r57, dr2)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r57_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr2_;
    goto L91_;
  }

L91_:;
  // i11 = ld i
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L93() else D41()
  // L93()
  goto L93_;

L96_:;
  // figure1 = force? figure
  Rsh_Fir_reg_figure1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_figure);
  // checkMissing(figure1)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_figure1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // mean1 = ldf mean
  Rsh_Fir_reg_mean1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 89), RHO);
  // check L97() else D44()
  // L97()
  goto L97_;

L100_:;
  // figure5 = force? figure4
  Rsh_Fir_reg_figure5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_figure4_);
  // checkMissing(figure5)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_figure5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // mean2 = ldf mean
  Rsh_Fir_reg_mean2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 89), RHO);
  // check L101() else D47()
  // L101()
  goto L101_;

L103_:;
  // p10 = prom<V +>{
  //   sym8 = ldf rep;
  //   base8 = ldf rep in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L3() else L4();
  // L0(r72):
  //   c20 = `is.object`(r72);
  //   if c20 then L5() else L6(r72);
  // L3():
  //   rep = ldf rep in base;
  //   r73 = dyn rep(<sym figure>, <lang `+`(periods, 1.0)>);
  //   goto L0(r73);
  // L4():
  //   r71 = dyn base8(<sym figure>, <lang `+`(periods, 1.0)>);
  //   goto L0(r71);
  // L1(dx5):
  //   return dx5;
  // L5():
  //   dr4 = tryDispatchBuiltin.1("[", r72);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L7() else L6(dr4);
  // L6(r75):
  //   sym9 = ldf seq_len;
  //   base9 = ldf seq_len in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L8() else L9();
  // L2(r79, r80):
  //   __2 = ldf `[` in base;
  //   r82 = dyn __2(r79, r80);
  //   goto L1(r82);
  // L7():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L1(dx4);
  // L8():
  //   l8 = ld l;
  //   l9 = force? l8;
  //   checkMissing(l9);
  //   r81 = seq_len(l9);
  //   goto L2(r75, r81);
  // L9():
  //   r78 = dyn base9(<sym l>);
  //   goto L2(r75, r78);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_8, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   start = ldf start;
  //   p11 = prom<V +>{
  //     x14 = ld x;
  //     x15 = force? x14;
  //     checkMissing(x15);
  //     return x15;
  //   };
  //   r85 = dyn start(p11);
  //   return r85;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_9, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   f22 = ld f;
  //   f23 = force? f22;
  //   checkMissing(f23);
  //   return f23;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_11, 0, NULL, CCP, RHO);
  // r88 = dyn ts[, start, frequency](p10, p12, p13)
  SEXP Rsh_Fir_array_args146[3];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args146[2] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names44[3];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_arg_names44[2] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts1, 3, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L104() else D50()
  // L104()
  goto L104_;

D41_:;
  // deopt 136 [i8, r59, l7, r57, i11]
  SEXP Rsh_Fir_array_deopt_stack46[5];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack46[3] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_deopt_stack46[4] = Rsh_Fir_reg_i11_;
  Rsh_Fir_deopt(136, 5, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 149 [figure1]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_figure1_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 155 [figure5]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_figure5_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 167 [r88]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L92_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // goto L20(i2, dx2)
  // L20(i2, dx2)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L20_;

L93_:;
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 97), RHO);
  // r62 = dyn ___1(l7, r57, i12)
  SEXP Rsh_Fir_array_args148[3];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_args148[2] = Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_array_arg_names45[3];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_array_arg_names45[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L20(i8, r62)
  // L20(i8, r62)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r62_;
  goto L20_;

L97_:;
  // p8 = prom<V +>{
  //   figure2 = ld figure;
  //   figure3 = force? figure2;
  //   checkMissing(figure3);
  //   return figure3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_12, 0, NULL, CCP, RHO);
  // r65 = dyn mean1(p8)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mean1_, 1, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L98() else D45()
  // L98()
  goto L98_;

L101_:;
  // p9 = prom<V +>{
  //   figure6 = ld figure;
  //   figure7 = force? figure6;
  //   checkMissing(figure7);
  //   return figure7;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_13, 0, NULL, CCP, RHO);
  // r69 = dyn mean2(p9)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mean2_, 1, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L102() else D48()
  // L102()
  goto L102_;

L104_:;
  // st seasonal = r88
  Rsh_Fir_store(Rsh_const(CCP, 98), Rsh_Fir_reg_r88_, RHO);
  (void)(Rsh_Fir_reg_r88_);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 99), RHO);
  // check L105() else D51()
  // L105()
  goto L105_;

D45_:;
  // deopt 151 [figure1, r65]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_figure1_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(151, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 157 [figure5, r69]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_figure5_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(157, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 170 []
  Rsh_Fir_deopt(170, 0, NULL, CCP, RHO);
  return R_NilValue;

L98_:;
  // r66 = `-`(figure1, r65)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_figure1_;
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args153);
  // goto L23(r66)
  // L23(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L23_;

L102_:;
  // r70 = `/`(figure5, r69)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_figure5_;
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args154);
  // goto L23(r70)
  // L23(r70)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r70_;
  goto L23_;

L105_:;
  // p14 = prom<V +>{
  //   sym10 = ldf list;
  //   base10 = ldf list in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L3() else L4();
  // L0(r90):
  //   return r90;
  // L3():
  //   x16 = ld x;
  //   x17 = force? x16;
  //   checkMissing(x17);
  //   seasonal = ld seasonal;
  //   seasonal1 = force? seasonal;
  //   checkMissing(seasonal1);
  //   trend4 = ld trend;
  //   trend5 = force? trend4;
  //   checkMissing(trend5);
  //   type7 = ld type;
  //   type8 = force? type7;
  //   checkMissing(type8);
  //   r91 = `==`(type8, "additive");
  //   c21 = `as.logical`(r91);
  //   if c21 then L5() else L1();
  // L4():
  //   r89 = dyn base10[x, seasonal, trend, random, figure, type](<sym x>, <sym seasonal>, <sym trend>, <lang if(`==`(type, "additive"), `-`(`-`(x, seasonal), trend), `/`(`/`(x, seasonal), trend))>, <sym figure>, <sym type>);
  //   goto L0(r89);
  // L1():
  //   x20 = ld x;
  //   x21 = force? x20;
  //   checkMissing(x21);
  //   seasonal4 = ld seasonal;
  //   seasonal5 = force? seasonal4;
  //   checkMissing(seasonal5);
  //   r95 = `/`(x21, seasonal5);
  //   trend8 = ld trend;
  //   trend9 = force? trend8;
  //   checkMissing(trend9);
  //   r96 = `/`(r95, trend9);
  //   goto L2(r96);
  // L2(r94):
  //   figure8 = ld figure;
  //   figure9 = force? figure8;
  //   checkMissing(figure9);
  //   type9 = ld type;
  //   type10 = force? type9;
  //   checkMissing(type10);
  //   list = ldf list in base;
  //   r97 = dyn list(x17, seasonal1, trend5, r94, figure9, type10);
  //   goto L0(r97);
  // L5():
  //   x18 = ld x;
  //   x19 = force? x18;
  //   checkMissing(x19);
  //   seasonal2 = ld seasonal;
  //   seasonal3 = force? seasonal2;
  //   checkMissing(seasonal3);
  //   r92 = `-`(x19, seasonal3);
  //   trend6 = ld trend;
  //   trend7 = force? trend6;
  //   checkMissing(trend7);
  //   r93 = `-`(r92, trend7);
  //   goto L2(r93);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_14, 0, NULL, CCP, RHO);
  // r99 = dyn structure[, class](p14, "decomposed.ts")
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args176[1] = Rsh_const(CCP, 103);
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = Rsh_const(CCP, 104);
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L106() else D52()
  // L106()
  goto L106_;

D52_:;
  // deopt 174 [r99]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L106_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r99
  return Rsh_Fir_reg_r99_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r2 = dyn c("additive", "multiplicative")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("additive", "multiplicative")
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_type1_;
  SEXP Rsh_Fir_reg_type2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // type1 = ld type
  Rsh_Fir_reg_type1_ = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // type2 = force? type1
  Rsh_Fir_reg_type2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type1_);
  // checkMissing(type2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_type2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return type2
  return Rsh_Fir_reg_type2_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_filter4_;
  SEXP Rsh_Fir_reg_filter5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // filter4 = ld filter
  Rsh_Fir_reg_filter4_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // filter5 = force? filter4
  Rsh_Fir_reg_filter5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filter4_);
  // checkMissing(filter5)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_filter5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return filter5
  return Rsh_Fir_reg_filter5_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f18_;
  SEXP Rsh_Fir_reg_f19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // f18 = ld f
  Rsh_Fir_reg_f18_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // f19 = force? f18
  Rsh_Fir_reg_f19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f18_);
  // checkMissing(f19)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_f19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // return f19
  return Rsh_Fir_reg_f19_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_season;
  SEXP Rsh_Fir_reg_season1_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_season3_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_index;
  SEXP Rsh_Fir_reg_index1_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r55_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // season = ld season
  Rsh_Fir_reg_season = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // season1 = force? season
  Rsh_Fir_reg_season1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_season);
  // checkMissing(season1)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_season1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(season1)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_season1_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args114);
  // if c17 then L1() else L2(season1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L1()
    goto L1_;
  } else {
  // L2(season1)
    Rsh_Fir_reg_season3_ = Rsh_Fir_reg_season1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", season1)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_season1_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args115);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_season3_ = Rsh_Fir_reg_dr1;
    goto L2_;
  }

L2_:;
  // index = ld index
  Rsh_Fir_reg_index = Rsh_Fir_load(Rsh_const(CCP, 83), RHO);
  // index1 = force? index
  Rsh_Fir_reg_index1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_index);
  // checkMissing(index1)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_index1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // checkMissing(i6)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_i6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // r54 = `+`(index1, i6)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_index1_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args119);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // r55 = dyn __1(season3, r54)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_season3_;
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r55)
  // L0(r55)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r55_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r82_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // sym8 = ldf rep
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 94), RHO);
  // base8 = ldf rep in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 94), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args131);
  // if guard8 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // c20 = `is.object`(r72)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args132);
  // if c20 then L5() else L6(r72)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L5()
    goto L5_;
  } else {
  // L6(r72)
    Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r72_;
    goto L6_;
  }

L3_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 94), RHO);
  // r73 = dyn rep(<sym figure>, <lang `+`(periods, 1.0)>)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args133[1] = Rsh_const(CCP, 95);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L0(r73)
  // L0(r73)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r73_;
  goto L0_;

L4_:;
  // r71 = dyn base8(<sym figure>, <lang `+`(periods, 1.0)>)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 95);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L0(r71)
  // L0(r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r71_;
  goto L0_;

L1_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L5_:;
  // dr4 = tryDispatchBuiltin.1("[", r72)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args135);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if dc2 then L7() else L6(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr4)
    Rsh_Fir_reg_r75_ = Rsh_Fir_reg_dr4_;
    goto L6_;
  }

L6_:;
  // sym9 = ldf seq_len
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 96), RHO);
  // base9 = ldf seq_len in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 96), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args137);
  // if guard9 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L2_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // r82 = dyn __2(r79, r80)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L1(r82)
  // L1(r82)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r82_;
  goto L1_;

L7_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // goto L1(dx4)
  // L1(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L1_;

L8_:;
  // l8 = ld l
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // l9 = force? l8
  Rsh_Fir_reg_l9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l8_);
  // checkMissing(l9)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_l9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // r81 = seq_len(l9)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args141);
  // goto L2(r75, r81)
  // L2(r75, r81)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r81_;
  goto L2_;

L9_:;
  // r78 = dyn base9(<sym l>)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L2(r75, r78)
  // L2(r75, r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r78_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_start;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r85_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // start = ldf start
  Rsh_Fir_reg_start = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // p11 = prom<V +>{
  //   x14 = ld x;
  //   x15 = force? x14;
  //   checkMissing(x15);
  //   return x15;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1170828029_10, 0, NULL, CCP, RHO);
  // r85 = dyn start(p11)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_start, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names43, CCP, RHO);
  // return r85
  return Rsh_Fir_reg_r85_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_x15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // return x15
  return Rsh_Fir_reg_x15_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f22_;
  SEXP Rsh_Fir_reg_f23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // f22 = ld f
  Rsh_Fir_reg_f22_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // f23 = force? f22
  Rsh_Fir_reg_f23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f22_);
  // checkMissing(f23)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_f23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // return f23
  return Rsh_Fir_reg_f23_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_figure2_;
  SEXP Rsh_Fir_reg_figure3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // figure2 = ld figure
  Rsh_Fir_reg_figure2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // figure3 = force? figure2
  Rsh_Fir_reg_figure3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_figure2_);
  // checkMissing(figure3)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_figure3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // return figure3
  return Rsh_Fir_reg_figure3_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_figure6_;
  SEXP Rsh_Fir_reg_figure7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // figure6 = ld figure
  Rsh_Fir_reg_figure6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // figure7 = force? figure6
  Rsh_Fir_reg_figure7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_figure6_);
  // checkMissing(figure7)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_figure7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // return figure7
  return Rsh_Fir_reg_figure7_;
}
SEXP Rsh_Fir_user_promise_inner1170828029_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_seasonal;
  SEXP Rsh_Fir_reg_seasonal1_;
  SEXP Rsh_Fir_reg_trend4_;
  SEXP Rsh_Fir_reg_trend5_;
  SEXP Rsh_Fir_reg_type7_;
  SEXP Rsh_Fir_reg_type8_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_seasonal2_;
  SEXP Rsh_Fir_reg_seasonal3_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_trend6_;
  SEXP Rsh_Fir_reg_trend7_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_seasonal4_;
  SEXP Rsh_Fir_reg_seasonal5_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_trend8_;
  SEXP Rsh_Fir_reg_trend9_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_figure8_;
  SEXP Rsh_Fir_reg_figure9_;
  SEXP Rsh_Fir_reg_type9_;
  SEXP Rsh_Fir_reg_type10_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r97_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1170828029/0: expected 0, got %d", NCAPTURES);

  // sym10 = ldf list
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 100), RHO);
  // base10 = ldf list in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 100), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args155);
  // if guard10 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r90
  return Rsh_Fir_reg_r90_;

L3_:;
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // seasonal = ld seasonal
  Rsh_Fir_reg_seasonal = Rsh_Fir_load(Rsh_const(CCP, 98), RHO);
  // seasonal1 = force? seasonal
  Rsh_Fir_reg_seasonal1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_seasonal);
  // checkMissing(seasonal1)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_seasonal1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // trend4 = ld trend
  Rsh_Fir_reg_trend4_ = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // trend5 = force? trend4
  Rsh_Fir_reg_trend5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trend4_);
  // checkMissing(trend5)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_trend5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // type7 = ld type
  Rsh_Fir_reg_type7_ = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // type8 = force? type7
  Rsh_Fir_reg_type8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type7_);
  // checkMissing(type8)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_type8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // r91 = `==`(type8, "additive")
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_type8_;
  Rsh_Fir_array_args160[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args160);
  // c21 = `as.logical`(r91)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args161);
  // if c21 then L5() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L5()
    goto L5_;
  } else {
  // L1()
    goto L1_;
  }

L4_:;
  // r89 = dyn base10[x, seasonal, trend, random, figure, type](<sym x>, <sym seasonal>, <sym trend>, <lang if(`==`(type, "additive"), `-`(`-`(x, seasonal), trend), `/`(`/`(x, seasonal), trend))>, <sym figure>, <sym type>)
  SEXP Rsh_Fir_array_args162[6];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args162[1] = Rsh_const(CCP, 98);
  Rsh_Fir_array_args162[2] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args162[3] = Rsh_const(CCP, 101);
  Rsh_Fir_array_args162[4] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args162[5] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names48[6];
  Rsh_Fir_array_arg_names48[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names48[1] = Rsh_const(CCP, 98);
  Rsh_Fir_array_arg_names48[2] = Rsh_const(CCP, 73);
  Rsh_Fir_array_arg_names48[3] = Rsh_const(CCP, 102);
  Rsh_Fir_array_arg_names48[4] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names48[5] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 6, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r89)
  // L0(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L0_;

L1_:;
  // x20 = ld x
  Rsh_Fir_reg_x20_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x21 = force? x20
  Rsh_Fir_reg_x21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x20_);
  // checkMissing(x21)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_x21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // seasonal4 = ld seasonal
  Rsh_Fir_reg_seasonal4_ = Rsh_Fir_load(Rsh_const(CCP, 98), RHO);
  // seasonal5 = force? seasonal4
  Rsh_Fir_reg_seasonal5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_seasonal4_);
  // checkMissing(seasonal5)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_seasonal5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // r95 = `/`(x21, seasonal5)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_seasonal5_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args165);
  // trend8 = ld trend
  Rsh_Fir_reg_trend8_ = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // trend9 = force? trend8
  Rsh_Fir_reg_trend9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trend8_);
  // checkMissing(trend9)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_trend9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // r96 = `/`(r95, trend9)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_trend9_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args167);
  // goto L2(r96)
  // L2(r96)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r96_;
  goto L2_;

L2_:;
  // figure8 = ld figure
  Rsh_Fir_reg_figure8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // figure9 = force? figure8
  Rsh_Fir_reg_figure9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_figure8_);
  // checkMissing(figure9)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_figure9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // type9 = ld type
  Rsh_Fir_reg_type9_ = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // type10 = force? type9
  Rsh_Fir_reg_type10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type9_);
  // checkMissing(type10)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_type10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 100), RHO);
  // r97 = dyn list(x17, seasonal1, trend5, r94, figure9, type10)
  SEXP Rsh_Fir_array_args170[6];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_seasonal1_;
  Rsh_Fir_array_args170[2] = Rsh_Fir_reg_trend5_;
  Rsh_Fir_array_args170[3] = Rsh_Fir_reg_r94_;
  Rsh_Fir_array_args170[4] = Rsh_Fir_reg_figure9_;
  Rsh_Fir_array_args170[5] = Rsh_Fir_reg_type10_;
  SEXP Rsh_Fir_array_arg_names49[6];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_array_arg_names49[3] = R_MissingArg;
  Rsh_Fir_array_arg_names49[4] = R_MissingArg;
  Rsh_Fir_array_arg_names49[5] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 6, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L0(r97)
  // L0(r97)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r97_;
  goto L0_;

L5_:;
  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // seasonal2 = ld seasonal
  Rsh_Fir_reg_seasonal2_ = Rsh_Fir_load(Rsh_const(CCP, 98), RHO);
  // seasonal3 = force? seasonal2
  Rsh_Fir_reg_seasonal3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_seasonal2_);
  // checkMissing(seasonal3)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_seasonal3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // r92 = `-`(x19, seasonal3)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_array_args173[1] = Rsh_Fir_reg_seasonal3_;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args173);
  // trend6 = ld trend
  Rsh_Fir_reg_trend6_ = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // trend7 = force? trend6
  Rsh_Fir_reg_trend7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trend6_);
  // checkMissing(trend7)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_trend7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty()));
  // r93 = `-`(r92, trend7)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_trend7_;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args175);
  // goto L2(r93)
  // L2(r93)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r93_;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
