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
SEXP Rsh_Fir_user_function_inner4293785269_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4293785269_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4293785269_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4293785269_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4293785269_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4293785269_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4293785269_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3728284299_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3728284299_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3728284299_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3728284299_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3728284299_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_line;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_abline;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_plot1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_data_frame;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_with;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_dimnames__;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_cAS;
  SEXP Rsh_Fir_reg_cAS1_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4293785269
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4293785269_, RHO, CCP);
  // st line = r
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
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L4_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r1 = dyn base(<sym graphics>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
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

L6_:;
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
  // check L7() else D1()
  // L7()
  goto L7_;

L8_:;
  // p1 = prom<V +>{
  //   cars = ld cars;
  //   cars1 = force? cars;
  //   checkMissing(cars1);
  //   return cars1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r6 = dyn plot(p1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

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

L7_:;
  // goto L0()
  // L0()
  goto L0_;

L9_:;
  // line = ldf line
  Rsh_Fir_reg_line = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p2 = prom<V +>{
  //   cars2 = ld cars;
  //   cars3 = force? cars2;
  //   checkMissing(cars3);
  //   return cars3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r8 = dyn line(p2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_line, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D5_:;
  // deopt 15 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // st z = r8
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // abline = ldf abline
  Rsh_Fir_reg_abline = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

D6_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p4 = prom<V +>{
  //   coef = ldf coef;
  //   p3 = prom<V +>{
  //     z = ld z;
  //     z1 = force? z;
  //     checkMissing(z1);
  //     return z1;
  //   };
  //   r10 = dyn coef(p3);
  //   return r10;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r12 = dyn abline(p4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abline, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L13() else D7()
  // L13()
  goto L13_;

D7_:;
  // deopt 20 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // plot1 = ldf plot
  Rsh_Fir_reg_plot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L14() else D8()
  // L14()
  goto L14_;

D8_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p5 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r13 = dyn __(<lang residuals(z)>, <lang fitted(z)>);
  //   return r13;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   deparse = ldf deparse;
  //   p6 = prom<V +>{
  //     z2 = ld z;
  //     z3 = force? z2;
  //     checkMissing(z3);
  //     c = `is.object`(z3);
  //     if c then L1() else L2(z3);
  //   L0(dx1):
  //     return dx1;
  //   L1():
  //     dr = tryDispatchBuiltin.1("$", z3);
  //     dc = getTryDispatchBuiltinDispatched(dr);
  //     if dc then L3() else L2(dr);
  //   L2(z5):
  //     r15 = `$`(z5, <sym call>);
  //     goto L0(r15);
  //   L3():
  //     dx = getTryDispatchBuiltinValue(dr);
  //     goto L0(dx);
  //   };
  //   r17 = dyn deparse(p6);
  //   return r17;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r19 = dyn plot1[, main](p5, p7)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L15() else D9()
  // L15()
  goto L15_;

D9_:;
  // deopt 26 [r19]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // data_frame = ldf `data.frame`
  Rsh_Fir_reg_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L16() else D10()
  // L16()
  goto L16_;

D10_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p8 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r21):
  //   return r21;
  // L1():
  //   c1 = ldf c in base;
  //   r22 = dyn c1(<int -4, -3, -2, -1, 0, 1, 2, 3>, 12.0);
  //   goto L0(r22);
  // L2():
  //   r20 = dyn base1(<lang `:`(`-`(4.0), 3.0)>, 12.0);
  //   goto L0(r20);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r27, r28):
  //   r36 = `*`(r27, r28);
  //   return r36;
  // L2():
  //   sym3 = ldf rep;
  //   base3 = ldf rep in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L4() else L5();
  // L3():
  //   r26 = dyn base2(<lang rep(0.0, 6.0)>, <lang `-`(5.0)>, 5.0, 1.0);
  //   goto L0(3.0, r26);
  // L1(r32, r33):
  //   c2 = ldf c in base;
  //   r35 = dyn c2(r33, -5.0, 5.0, 1.0);
  //   goto L0(r32, r35);
  // L4():
  //   rep = ldf rep in base;
  //   r34 = dyn rep(0.0, 6.0);
  //   goto L1(3.0, r34);
  // L5():
  //   r31 = dyn base3(0.0, 6.0);
  //   goto L1(3.0, r31);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r38 = dyn data_frame[x, y](p8, p9)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_frame, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L17() else D11()
  // L17()
  goto L17_;

D11_:;
  // deopt 33 [r38]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L17_:;
  // st `d.AS` = r38
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // sym4 = ldf with
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base4 = ldf with in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard4 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L1_:;
  // st cAS = r40
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // sym5 = ldf list
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base5 = ldf list in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard5 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L18_:;
  // with = ldf with
  Rsh_Fir_reg_with = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L20() else D12()
  // L20()
  goto L20_;

L19_:;
  // r39 = dyn base4(<sym d.AS>, <lang t(sapply(`:`(1.0, 10.0), function((it=), `$`(line(x, y, iter=it), coefficients), NULL)))>)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L1(r39)
  // L1(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L1_;

D12_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // l = ld cAS
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L30() else D18()
  // L30()
  goto L30_;

L20_:;
  // p10 = prom<V +>{
  //   d_AS = ld `d.AS`;
  //   d_AS1 = force? d_AS;
  //   checkMissing(d_AS1);
  //   return d_AS1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   t = ldf t;
  //   p13 = prom<V +>{
  //     sapply = ldf sapply;
  //     p11 = prom<V +>{
  //       return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
  //     };
  //     p12 = prom<V +>{
  //       r43 = clos inner3728284299;
  //       return r43;
  //     };
  //     r45 = dyn sapply(p11, p12);
  //     return r45;
  //   };
  //   r47 = dyn t(p13);
  //   return r47;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r49 = dyn with(p10, p14)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_with, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L21() else D13()
  // L21()
  goto L21_;

L22_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L24() else D14()
  // L24()
  goto L24_;

L23_:;
  // r50 = dyn base5(<lang paste("it =", format(`:`(1.0, 10.0)))>, <lang c("intercept", "slope")>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L2(r50)
  // L2(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L2_;

D13_:;
  // deopt 40 [r49]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 58 [r51, l, r51]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(58, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L1(r49)
  // L1(r49)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r49_;
  goto L1_;

L24_:;
  // p16 = prom<V +>{
  //   format = ldf format;
  //   p15 = prom<V +>{
  //     return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
  //   };
  //   r53 = dyn format(p15);
  //   return r53;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r55 = dyn paste("it =", p16)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L25() else D15()
  // L25()
  goto L25_;

L30_:;
  // r60 = dyn dimnames__(l, NULL, r51)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L31() else D19()
  // L31()
  goto L31_;

D15_:;
  // deopt 48 [r55]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 60 [r51, r60]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L25_:;
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard6 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L31_:;
  // st cAS = r60
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // cAS = ld cAS
  Rsh_Fir_reg_cAS = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L32() else D20()
  // L32()
  goto L32_;

D20_:;
  // deopt 62 [cAS]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_cAS;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L3_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r59 = dyn list(r55, r57)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L29() else D17()
  // L29()
  goto L29_;

L26_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r58 = dyn c3("intercept", "slope")
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L28() else D16()
  // L28()
  goto L28_;

L27_:;
  // r56 = dyn base6("intercept", "slope")
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L3(r56)
  // L3(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L3_;

L32_:;
  // cAS1 = force? cAS
  Rsh_Fir_reg_cAS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cAS);
  // checkMissing(cAS1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_cAS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return cAS1
  return Rsh_Fir_reg_cAS1_;

D16_:;
  // deopt 54 [r58]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 56 [r59]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L3(r58)
  // L3(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L3_;

L29_:;
  // goto L2(r59)
  // L2(r59)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r59_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_graphics;
  SEXP Rsh_Fir_reg_graphics1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // graphics = ld graphics
  Rsh_Fir_reg_graphics = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
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
  SEXP Rsh_Fir_reg_cars;
  SEXP Rsh_Fir_reg_cars1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cars = ld cars
  Rsh_Fir_reg_cars = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // cars1 = force? cars
  Rsh_Fir_reg_cars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cars);
  // checkMissing(cars1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_cars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return cars1
  return Rsh_Fir_reg_cars1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cars2_;
  SEXP Rsh_Fir_reg_cars3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cars2 = ld cars
  Rsh_Fir_reg_cars2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // cars3 = force? cars2
  Rsh_Fir_reg_cars3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cars2_);
  // checkMissing(cars3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_cars3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return cars3
  return Rsh_Fir_reg_cars3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_coef;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // coef = ldf coef
  Rsh_Fir_reg_coef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // p3 = prom<V +>{
  //   z = ld z;
  //   z1 = force? z;
  //   checkMissing(z1);
  //   return z1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r10 = dyn coef(p3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_coef, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_z1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return z1
  return Rsh_Fir_reg_z1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r13 = dyn __(<lang residuals(z)>, <lang fitted(z)>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // deparse = ldf deparse
  Rsh_Fir_reg_deparse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // p6 = prom<V +>{
  //   z2 = ld z;
  //   z3 = force? z2;
  //   checkMissing(z3);
  //   c = `is.object`(z3);
  //   if c then L1() else L2(z3);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", z3);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(z5):
  //   r15 = `$`(z5, <sym call>);
  //   goto L0(r15);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r17 = dyn deparse(p6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z2_;
  SEXP Rsh_Fir_reg_z3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_z5_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // z2 = ld z
  Rsh_Fir_reg_z2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // z3 = force? z2
  Rsh_Fir_reg_z3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z2_);
  // checkMissing(z3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_z3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c = `is.object`(z3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args13);
  // if c then L1() else L2(z3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(z3)
    Rsh_Fir_reg_z5_ = Rsh_Fir_reg_z3_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", z3)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_z3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_z5_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r15 = `$`(z5, <sym call>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args16);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r15_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r21
  return Rsh_Fir_reg_r21_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r22 = dyn c1(<int -4, -3, -2, -1, 0, 1, 2, 3>, 12.0)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // r20 = dyn base1(<lang `:`(`-`(4.0), 3.0)>, 12.0)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // r36 = `*`(r27, r28)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args24);
  // return r36
  return Rsh_Fir_reg_r36_;

L2_:;
  // sym3 = ldf rep
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf rep in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard3 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r26 = dyn base2(<lang rep(0.0, 6.0)>, <lang `-`(5.0)>, 5.0, 1.0)
  SEXP Rsh_Fir_array_args26[4];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args26[3] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 4, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(3.0, r26)
  // L0(3.0, r26)
  Rsh_Fir_reg_r27_ = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r26_;
  goto L0_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r35 = dyn c2(r33, -5.0, 5.0, 1.0)
  SEXP Rsh_Fir_array_args27[4];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args27[3] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 4, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r32, r35)
  // L0(r32, r35)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r35_;
  goto L0_;

L4_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r34 = dyn rep(0.0, 6.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L1(3.0, r34)
  // L1(3.0, r34)
  Rsh_Fir_reg_r32_ = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L1_;

L5_:;
  // r31 = dyn base3(0.0, 6.0)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L1(3.0, r31)
  // L1(3.0, r31)
  Rsh_Fir_reg_r32_ = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r31_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d_AS;
  SEXP Rsh_Fir_reg_d_AS1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // d_AS = ld `d.AS`
  Rsh_Fir_reg_d_AS = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // d_AS1 = force? d_AS
  Rsh_Fir_reg_d_AS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d_AS);
  // checkMissing(d_AS1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_d_AS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return d_AS1
  return Rsh_Fir_reg_d_AS1_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r47_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // t = ldf t
  Rsh_Fir_reg_t = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // p13 = prom<V +>{
  //   sapply = ldf sapply;
  //   p11 = prom<V +>{
  //     return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
  //   };
  //   p12 = prom<V +>{
  //     r43 = clos inner3728284299;
  //     return r43;
  //   };
  //   r45 = dyn sapply(p11, p12);
  //   return r45;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r47 = dyn t(p13)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r47
  return Rsh_Fir_reg_r47_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sapply;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r45_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sapply = ldf sapply
  Rsh_Fir_reg_sapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // p11 = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   r43 = clos inner3728284299;
  //   return r43;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r45 = dyn sapply(p11, p12)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names17, CCP, RHO);
  // return r45
  return Rsh_Fir_reg_r45_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  return Rsh_const(CCP, 39);
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r43_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r43 = clos inner3728284299
  Rsh_Fir_reg_r43_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3728284299_, RHO, CCP);
  // return r43
  return Rsh_Fir_reg_r43_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_format;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r53_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // format = ldf format
  Rsh_Fir_reg_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // p15 = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r53 = dyn format(p15)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names21, CCP, RHO);
  // return r53
  return Rsh_Fir_reg_r53_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  return Rsh_const(CCP, 39);
}
SEXP Rsh_Fir_user_function_inner4293785269_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4293785269 dynamic dispatch ([x, y, iter])

  return Rsh_Fir_user_version_inner4293785269_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4293785269_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4293785269 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner4293785269/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_iter;
  SEXP Rsh_Fir_reg_y_isMissing;
  SEXP Rsh_Fir_reg_y_orDefault;
  SEXP Rsh_Fir_reg_iter_isMissing;
  SEXP Rsh_Fir_reg_iter_orDefault;
  SEXP Rsh_Fir_reg_xy_coords;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_complete_cases;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sys_call;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r43_1;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_iter = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // y_isMissing = missing.0(y)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_y;
  Rsh_Fir_reg_y_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args47);
  // if y_isMissing then L0(NULL) else L0(y)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_y_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_y_orDefault = Rsh_const(CCP, 45);
    goto L0_;
  } else {
  // L0(y)
    Rsh_Fir_reg_y_orDefault = Rsh_Fir_reg_y;
    goto L0_;
  }

L0_:;
  // st y = y_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_y_orDefault, RHO);
  (void)(Rsh_Fir_reg_y_orDefault);
  // iter_isMissing = missing.0(iter)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_iter;
  Rsh_Fir_reg_iter_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args48);
  // if iter_isMissing then L1(1.0) else L1(iter)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_iter_isMissing)) {
  // L1(1.0)
    Rsh_Fir_reg_iter_orDefault = Rsh_const(CCP, 24);
    goto L1_;
  } else {
  // L1(iter)
    Rsh_Fir_reg_iter_orDefault = Rsh_Fir_reg_iter;
    goto L1_;
  }

L1_:;
  // st iter = iter_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_iter_orDefault, RHO);
  (void)(Rsh_Fir_reg_iter_orDefault);
  // xy_coords = ldf `xy.coords`
  Rsh_Fir_reg_xy_coords = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4293785269_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   y1 = ld y;
  //   y2 = force? y1;
  //   checkMissing(y2);
  //   return y2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4293785269_1, 0, NULL, CCP, RHO);
  // r2 = dyn xy_coords[, , setLab](p, p1, FALSE)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_xy_coords, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L3_:;
  // st xy = r2
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // complete_cases = ldf `complete.cases`
  Rsh_Fir_reg_complete_cases = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   xy = ld xy;
  //   xy1 = force? xy;
  //   checkMissing(xy1);
  //   c = `is.object`(xy1);
  //   if c then L1() else L2(xy1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", xy1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(xy3):
  //   r3 = `$`(xy3, <sym x>);
  //   goto L0(r3);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4293785269_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   xy4 = ld xy;
  //   xy5 = force? xy4;
  //   checkMissing(xy5);
  //   c1 = `is.object`(xy5);
  //   if c1 then L1() else L2(xy5);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", xy5);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(xy7):
  //   r5 = `$`(xy7, <sym y>);
  //   goto L0(r5);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4293785269_3, 0, NULL, CCP, RHO);
  // r7 = dyn complete_cases(p2, p3)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_complete_cases, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L5() else D3()
  // L5()
  goto L5_;

D3_:;
  // deopt 12 [r7]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L5_:;
  // st ok = r7
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sys_call = ldf `sys.call`
  Rsh_Fir_reg_sys_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L6() else D4()
  // L6()
  goto L6_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r8 = dyn sys_call()
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call, 0, NULL, NULL, CCP, RHO);
  // check L7() else D5()
  // L7()
  goto L7_;

D5_:;
  // deopt 16 [r8]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L7_:;
  // st Call = r8
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_r8_1, RHO);
  (void)(Rsh_Fir_reg_r8_1);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // check L8() else D6()
  // L8()
  goto L8_;

D6_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p4 = prom<V +>{
  //   sym = ldf `.Call`;
  //   base = ldf `.Call` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L6() else L7();
  // L0(r10):
  //   return r10;
  // L6():
  //   C_tukeyline = ld C_tukeyline;
  //   C_tukeyline1 = force? C_tukeyline;
  //   checkMissing(C_tukeyline1);
  //   sym1 = ldf `as.double`;
  //   base1 = ldf `as.double` in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L8() else L9();
  // L7():
  //   r9 = dyn base(<sym C_tukeyline>, <lang as.double(`[`(`$`(xy, x), ok))>, <lang as.double(`[`(`$`(xy, y), ok))>, <lang as.integer(iter)>, <sym Call>);
  //   goto L0(r9);
  // L1(C_tukeyline4, r12):
  //   sym2 = ldf `as.double`;
  //   base2 = ldf `as.double` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L17() else L18();
  // L8():
  //   xy8 = ld xy;
  //   xy9 = force? xy8;
  //   checkMissing(xy9);
  //   c2 = `is.object`(xy9);
  //   if c2 then L11() else L12(C_tukeyline1, xy9);
  // L9():
  //   r11 = dyn base1(<lang `[`(`$`(xy, x), ok)>);
  //   goto L1(C_tukeyline1, r11);
  // L3(C_tukeyline15, r19, r20):
  //   sym3 = ldf `as.integer`;
  //   base3 = ldf `as.integer` in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L26() else L27();
  // L10(C_tukeyline8, dx5):
  //   c3 = `is.object`(dx5);
  //   if c3 then L14() else L15(C_tukeyline8, dx5);
  // L11():
  //   dr4 = tryDispatchBuiltin.1("$", xy9);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L13() else L12(C_tukeyline1, dr4);
  // L12(C_tukeyline6, xy11):
  //   r13 = `$`(xy11, <sym x>);
  //   goto L10(C_tukeyline6, r13);
  // L17():
  //   xy12 = ld xy;
  //   xy13 = force? xy12;
  //   checkMissing(xy13);
  //   c4 = `is.object`(xy13);
  //   if c4 then L20() else L21(C_tukeyline4, r12, xy13);
  // L18():
  //   r18 = dyn base2(<lang `[`(`$`(xy, y), ok)>);
  //   goto L3(C_tukeyline4, r12, r18);
  // L2(C_tukeyline12, dx9):
  //   as_double = ldf `as.double` in base;
  //   r15 = dyn as_double(dx9);
  //   goto L1(C_tukeyline12, r15);
  // L5(C_tukeyline26, r37, r38, r39):
  //   Call = ld Call;
  //   Call1 = force? Call;
  //   checkMissing(Call1);
  //   vargs = dots[r37, r38, r39, Call1];
  //   r41 = `.Call`(C_tukeyline26, vargs, <missing>);
  //   goto L0(r41);
  // L13():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L10(C_tukeyline1, dx4);
  // L14():
  //   dr6 = tryDispatchBuiltin.1("[", dx5);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L16() else L15(C_tukeyline8, dr6);
  // L15(C_tukeyline10, dx7):
  //   ok = ld ok;
  //   ok1 = force? ok;
  //   __ = ldf `[` in base;
  //   r14 = dyn __(dx7, ok1);
  //   goto L2(C_tukeyline10, r14);
  // L19(C_tukeyline19, r24, dx11):
  //   c5 = `is.object`(dx11);
  //   if c5 then L23() else L24(C_tukeyline19, r24, dx11);
  // L20():
  //   dr8 = tryDispatchBuiltin.1("$", xy13);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L22() else L21(C_tukeyline4, r12, dr8);
  // L21(C_tukeyline17, r22, xy15):
  //   r25 = `$`(xy15, <sym y>);
  //   goto L19(C_tukeyline17, r22, r25);
  // L26():
  //   iter1 = ld iter;
  //   iter2 = force? iter1;
  //   checkMissing(iter2);
  //   as_integer = ldf `as.integer` in base;
  //   r40 = dyn as_integer(iter2);
  //   goto L5(C_tukeyline15, r19, r20, r40);
  // L27():
  //   r36 = dyn base3(<sym iter>);
  //   goto L5(C_tukeyline15, r19, r20, r36);
  // L4(C_tukeyline23, r29, dx15):
  //   as_double1 = ldf `as.double` in base;
  //   r31 = dyn as_double1(dx15);
  //   goto L3(C_tukeyline23, r29, r31);
  // L16():
  //   dx8 = getTryDispatchBuiltinValue(dr6);
  //   goto L2(C_tukeyline8, dx8);
  // L22():
  //   dx10 = getTryDispatchBuiltinValue(dr8);
  //   goto L19(C_tukeyline4, r12, dx10);
  // L23():
  //   dr10 = tryDispatchBuiltin.1("[", dx11);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L25() else L24(C_tukeyline19, r24, dr10);
  // L24(C_tukeyline21, r27, dx13):
  //   ok2 = ld ok;
  //   ok3 = force? ok2;
  //   __1 = ldf `[` in base;
  //   r30 = dyn __1(dx13, ok3);
  //   goto L4(C_tukeyline21, r27, r30);
  // L25():
  //   dx14 = getTryDispatchBuiltinValue(dr10);
  //   goto L4(C_tukeyline19, r24, dx14);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4293785269_4, 0, NULL, CCP, RHO);
  // r43 = dyn structure[, class](p4, "tukeyline")
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_r43_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L9() else D7()
  // L9()
  goto L9_;

D7_:;
  // deopt 23 [r43]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r43_1;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r43
  return Rsh_Fir_reg_r43_1;
}
SEXP Rsh_Fir_user_promise_inner4293785269_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4293785269/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner4293785269_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_y2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4293785269/0: expected 0, got %d", NCAPTURES);

  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return y2
  return Rsh_Fir_reg_y2_;
}
SEXP Rsh_Fir_user_promise_inner4293785269_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xy;
  SEXP Rsh_Fir_reg_xy1_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_xy3_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4293785269/0: expected 0, got %d", NCAPTURES);

  // xy = ld xy
  Rsh_Fir_reg_xy = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // xy1 = force? xy
  Rsh_Fir_reg_xy1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy);
  // checkMissing(xy1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_xy1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c = `is.object`(xy1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_xy1_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args53);
  // if c then L1() else L2(xy1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L1()
    goto L1_;
  } else {
  // L2(xy1)
    Rsh_Fir_reg_xy3_ = Rsh_Fir_reg_xy1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L1_:;
  // dr = tryDispatchBuiltin.1("$", xy1)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_xy1_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args54);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_xy3_ = Rsh_Fir_reg_dr1;
    goto L2_;
  }

L2_:;
  // r3 = `$`(xy3, <sym x>)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_xy3_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args56);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r3_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4293785269_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xy4_;
  SEXP Rsh_Fir_reg_xy5_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_xy7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4293785269/0: expected 0, got %d", NCAPTURES);

  // xy4 = ld xy
  Rsh_Fir_reg_xy4_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // xy5 = force? xy4
  Rsh_Fir_reg_xy5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy4_);
  // checkMissing(xy5)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_xy5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(xy5)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_xy5_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args59);
  // if c1 then L1() else L2(xy5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L1()
    goto L1_;
  } else {
  // L2(xy5)
    Rsh_Fir_reg_xy7_ = Rsh_Fir_reg_xy5_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", xy5)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_xy5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_xy7_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r5 = `$`(xy7, <sym y>)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_xy7_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args62);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r5_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4293785269_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_C_tukeyline;
  SEXP Rsh_Fir_reg_C_tukeyline1_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_C_tukeyline4_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_xy8_;
  SEXP Rsh_Fir_reg_xy9_;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_C_tukeyline6_;
  SEXP Rsh_Fir_reg_xy11_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_C_tukeyline8_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_C_tukeyline10_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_C_tukeyline12_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_ok;
  SEXP Rsh_Fir_reg_ok1_;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_as_double;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_C_tukeyline15_;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_xy12_;
  SEXP Rsh_Fir_reg_xy13_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_C_tukeyline17_;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_xy15_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_C_tukeyline19_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_C_tukeyline21_;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_C_tukeyline23_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_ok2_;
  SEXP Rsh_Fir_reg_ok3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_as_double1_;
  SEXP Rsh_Fir_reg_r31_1;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r36_1;
  SEXP Rsh_Fir_reg_C_tukeyline26_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_1;
  SEXP Rsh_Fir_reg_r39_1;
  SEXP Rsh_Fir_reg_iter1_;
  SEXP Rsh_Fir_reg_iter2_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r40_1;
  SEXP Rsh_Fir_reg_Call;
  SEXP Rsh_Fir_reg_Call1_;
  SEXP Rsh_Fir_reg_vargs;
  SEXP Rsh_Fir_reg_r41_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4293785269/0: expected 0, got %d", NCAPTURES);

  // sym = ldf `.Call`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // return r10
  return Rsh_Fir_reg_r10_1;

L6_:;
  // C_tukeyline = ld C_tukeyline
  Rsh_Fir_reg_C_tukeyline = Rsh_Fir_load(Rsh_const(CCP, 59), RHO);
  // C_tukeyline1 = force? C_tukeyline
  Rsh_Fir_reg_C_tukeyline1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_tukeyline);
  // checkMissing(C_tukeyline1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_C_tukeyline1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // sym1 = ldf `as.double`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base1 = ldf `as.double` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L7_:;
  // r9 = dyn base(<sym C_tukeyline>, <lang as.double(`[`(`$`(xy, x), ok))>, <lang as.double(`[`(`$`(xy, y), ok))>, <lang as.integer(iter)>, <sym Call>)
  SEXP Rsh_Fir_array_args68[5];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args68[2] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args68[3] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args68[4] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names29[5];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_array_arg_names29[4] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 5, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_;
  goto L0_;

L1_:;
  // sym2 = ldf `as.double`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base2 = ldf `as.double` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard2 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L8_:;
  // xy8 = ld xy
  Rsh_Fir_reg_xy8_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // xy9 = force? xy8
  Rsh_Fir_reg_xy9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy8_);
  // checkMissing(xy9)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_xy9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(xy9)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_xy9_;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args71);
  // if c2 then L11() else L12(C_tukeyline1, xy9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L11()
    goto L11_;
  } else {
  // L12(C_tukeyline1, xy9)
    Rsh_Fir_reg_C_tukeyline6_ = Rsh_Fir_reg_C_tukeyline1_;
    Rsh_Fir_reg_xy11_ = Rsh_Fir_reg_xy9_;
    goto L12_;
  }

L9_:;
  // r11 = dyn base1(<lang `[`(`$`(xy, x), ok)>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L1(C_tukeyline1, r11)
  // L1(C_tukeyline1, r11)
  Rsh_Fir_reg_C_tukeyline4_ = Rsh_Fir_reg_C_tukeyline1_;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r11_;
  goto L1_;

L3_:;
  // sym3 = ldf `as.integer`
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // base3 = ldf `as.integer` in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 65), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard3 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L10_:;
  // c3 = `is.object`(dx5)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args74);
  // if c3 then L14() else L15(C_tukeyline8, dx5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_1)) {
  // L14()
    goto L14_;
  } else {
  // L15(C_tukeyline8, dx5)
    Rsh_Fir_reg_C_tukeyline10_ = Rsh_Fir_reg_C_tukeyline8_;
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
    goto L15_;
  }

L11_:;
  // dr4 = tryDispatchBuiltin.1("$", xy9)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_xy9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args75);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if dc2 then L13() else L12(C_tukeyline1, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L13()
    goto L13_;
  } else {
  // L12(C_tukeyline1, dr4)
    Rsh_Fir_reg_C_tukeyline6_ = Rsh_Fir_reg_C_tukeyline1_;
    Rsh_Fir_reg_xy11_ = Rsh_Fir_reg_dr4_;
    goto L12_;
  }

L12_:;
  // r13 = `$`(xy11, <sym x>)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_xy11_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args77);
  // goto L10(C_tukeyline6, r13)
  // L10(C_tukeyline6, r13)
  Rsh_Fir_reg_C_tukeyline8_ = Rsh_Fir_reg_C_tukeyline6_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r13_1;
  goto L10_;

L17_:;
  // xy12 = ld xy
  Rsh_Fir_reg_xy12_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // xy13 = force? xy12
  Rsh_Fir_reg_xy13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy12_);
  // checkMissing(xy13)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_xy13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(xy13)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_xy13_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args79);
  // if c4 then L20() else L21(C_tukeyline4, r12, xy13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L20()
    goto L20_;
  } else {
  // L21(C_tukeyline4, r12, xy13)
    Rsh_Fir_reg_C_tukeyline17_ = Rsh_Fir_reg_C_tukeyline4_;
    Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r12_1;
    Rsh_Fir_reg_xy15_ = Rsh_Fir_reg_xy13_;
    goto L21_;
  }

L18_:;
  // r18 = dyn base2(<lang `[`(`$`(xy, y), ok)>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L3(C_tukeyline4, r12, r18)
  // L3(C_tukeyline4, r12, r18)
  Rsh_Fir_reg_C_tukeyline15_ = Rsh_Fir_reg_C_tukeyline4_;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r12_1;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_reg_r18_;
  goto L3_;

L2_:;
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r15 = dyn as_double(dx9)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L1(C_tukeyline12, r15)
  // L1(C_tukeyline12, r15)
  Rsh_Fir_reg_C_tukeyline4_ = Rsh_Fir_reg_C_tukeyline12_;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r15_1;
  goto L1_;

L5_:;
  // Call = ld Call
  Rsh_Fir_reg_Call = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // Call1 = force? Call
  Rsh_Fir_reg_Call1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Call);
  // checkMissing(Call1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_Call1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // vargs = dots[r37, r38, r39, Call1]
  SEXP Rsh_Fir_array_vector_values[4];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_r38_1;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_r39_1;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_Call1_;
  SEXP Rsh_Fir_array_vector_names[4];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 4, Rsh_Fir_array_vector_values, NULL);
  // r41 = `.Call`(C_tukeyline26, vargs, <missing>)
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_C_tukeyline26_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args83[2] = Rsh_const(CCP, 67);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(438, RHO, 3, Rsh_Fir_array_args83);
  // goto L0(r41)
  // L0(r41)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r41_;
  goto L0_;

L13_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // goto L10(C_tukeyline1, dx4)
  // L10(C_tukeyline1, dx4)
  Rsh_Fir_reg_C_tukeyline8_ = Rsh_Fir_reg_C_tukeyline1_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L10_;

L14_:;
  // dr6 = tryDispatchBuiltin.1("[", dx5)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args85);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc3 then L16() else L15(C_tukeyline8, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L16()
    goto L16_;
  } else {
  // L15(C_tukeyline8, dr6)
    Rsh_Fir_reg_C_tukeyline10_ = Rsh_Fir_reg_C_tukeyline8_;
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dr6_;
    goto L15_;
  }

L15_:;
  // ok = ld ok
  Rsh_Fir_reg_ok = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // ok1 = force? ok
  Rsh_Fir_reg_ok1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok);
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r14 = dyn __(dx7, ok1)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_ok1_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L2(C_tukeyline10, r14)
  // L2(C_tukeyline10, r14)
  Rsh_Fir_reg_C_tukeyline12_ = Rsh_Fir_reg_C_tukeyline10_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r14_;
  goto L2_;

L19_:;
  // c5 = `is.object`(dx11)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args88);
  // if c5 then L23() else L24(C_tukeyline19, r24, dx11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L23()
    goto L23_;
  } else {
  // L24(C_tukeyline19, r24, dx11)
    Rsh_Fir_reg_C_tukeyline21_ = Rsh_Fir_reg_C_tukeyline19_;
    Rsh_Fir_reg_r27_1 = Rsh_Fir_reg_r24_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    goto L24_;
  }

L20_:;
  // dr8 = tryDispatchBuiltin.1("$", xy13)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_xy13_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args89);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // if dc4 then L22() else L21(C_tukeyline4, r12, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L22()
    goto L22_;
  } else {
  // L21(C_tukeyline4, r12, dr8)
    Rsh_Fir_reg_C_tukeyline17_ = Rsh_Fir_reg_C_tukeyline4_;
    Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r12_1;
    Rsh_Fir_reg_xy15_ = Rsh_Fir_reg_dr8_;
    goto L21_;
  }

L21_:;
  // r25 = `$`(xy15, <sym y>)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_xy15_;
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args91);
  // goto L19(C_tukeyline17, r22, r25)
  // L19(C_tukeyline17, r22, r25)
  Rsh_Fir_reg_C_tukeyline19_ = Rsh_Fir_reg_C_tukeyline17_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r22_1;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r25_;
  goto L19_;

L26_:;
  // iter1 = ld iter
  Rsh_Fir_reg_iter1_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // iter2 = force? iter1
  Rsh_Fir_reg_iter2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iter1_);
  // checkMissing(iter2)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_iter2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 65), RHO);
  // r40 = dyn as_integer(iter2)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_iter2_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r40_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L5(C_tukeyline15, r19, r20, r40)
  // L5(C_tukeyline15, r19, r20, r40)
  Rsh_Fir_reg_C_tukeyline26_ = Rsh_Fir_reg_C_tukeyline15_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r19_1;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_reg_r20_1;
  Rsh_Fir_reg_r39_1 = Rsh_Fir_reg_r40_1;
  goto L5_;

L27_:;
  // r36 = dyn base3(<sym iter>)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r36_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L5(C_tukeyline15, r19, r20, r36)
  // L5(C_tukeyline15, r19, r20, r36)
  Rsh_Fir_reg_C_tukeyline26_ = Rsh_Fir_reg_C_tukeyline15_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r19_1;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_reg_r20_1;
  Rsh_Fir_reg_r39_1 = Rsh_Fir_reg_r36_1;
  goto L5_;

L4_:;
  // as_double1 = ldf `as.double` in base
  Rsh_Fir_reg_as_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r31 = dyn as_double1(dx15)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r31_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double1_, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L3(C_tukeyline23, r29, r31)
  // L3(C_tukeyline23, r29, r31)
  Rsh_Fir_reg_C_tukeyline15_ = Rsh_Fir_reg_C_tukeyline23_;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_reg_r31_1;
  goto L3_;

L16_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L2(C_tukeyline8, dx8)
  // L2(C_tukeyline8, dx8)
  Rsh_Fir_reg_C_tukeyline12_ = Rsh_Fir_reg_C_tukeyline8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L2_;

L22_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L19(C_tukeyline4, r12, dx10)
  // L19(C_tukeyline4, r12, dx10)
  Rsh_Fir_reg_C_tukeyline19_ = Rsh_Fir_reg_C_tukeyline4_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r12_1;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L19_;

L23_:;
  // dr10 = tryDispatchBuiltin.1("[", dx11)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc5 then L25() else L24(C_tukeyline19, r24, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L25()
    goto L25_;
  } else {
  // L24(C_tukeyline19, r24, dr10)
    Rsh_Fir_reg_C_tukeyline21_ = Rsh_Fir_reg_C_tukeyline19_;
    Rsh_Fir_reg_r27_1 = Rsh_Fir_reg_r24_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dr10_;
    goto L24_;
  }

L24_:;
  // ok2 = ld ok
  Rsh_Fir_reg_ok2_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // ok3 = force? ok2
  Rsh_Fir_reg_ok3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r30 = dyn __1(dx13, ok3)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_ok3_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L4(C_tukeyline21, r27, r30)
  // L4(C_tukeyline21, r27, r30)
  Rsh_Fir_reg_C_tukeyline23_ = Rsh_Fir_reg_C_tukeyline21_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r27_1;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r30_;
  goto L4_;

L25_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // goto L4(C_tukeyline19, r24, dx14)
  // L4(C_tukeyline19, r24, dx14)
  Rsh_Fir_reg_C_tukeyline23_ = Rsh_Fir_reg_C_tukeyline19_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L4_;
}
SEXP Rsh_Fir_user_function_inner3728284299_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3728284299 dynamic dispatch ([it])

  return Rsh_Fir_user_version_inner3728284299_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3728284299_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3728284299 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3728284299/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_it;
  SEXP Rsh_Fir_reg_line1;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_c2;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_dr2;
  SEXP Rsh_Fir_reg_dc2;
  SEXP Rsh_Fir_reg_dx2;
  SEXP Rsh_Fir_reg_dx1_2;
  SEXP Rsh_Fir_reg_r6_1;

  // Bind parameters
  Rsh_Fir_reg_it = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st it = it
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_it, RHO);
  (void)(Rsh_Fir_reg_it);
  // line = ldf line
  Rsh_Fir_reg_line1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3728284299_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   return y1;
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3728284299_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   it1 = ld it;
  //   it2 = force? it1;
  //   checkMissing(it2);
  //   return it2;
  // }
  Rsh_Fir_reg_p2_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3728284299_2, 0, NULL, CCP, RHO);
  // r3 = dyn line[, , iter](p, p1, p2)
  SEXP Rsh_Fir_array_args106[3];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_p1_2;
  Rsh_Fir_array_args106[2] = Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_array_arg_names39[3];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_line1, 3, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L1_:;
  // c = `is.object`(r3)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_c2 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args107);
  // if c then L3() else L4(r3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2)) {
  // L3()
    goto L3_;
  } else {
  // L4(r3)
    Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r3_1;
    goto L4_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_2;

L3_:;
  // dr = tryDispatchBuiltin.1("$", r3)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_dr2 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args108);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr2;
  Rsh_Fir_reg_dc2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if dc then L5() else L4(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2)) {
  // L5()
    goto L5_;
  } else {
  // L4(dr)
    Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_dr2;
    goto L4_;
  }

L4_:;
  // r6 = `$`(r5, <sym coefficients>)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 73);
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args110);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_dx1_2 = Rsh_Fir_reg_r6_1;
  goto L2_;

L5_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr2;
  Rsh_Fir_reg_dx2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_2 = Rsh_Fir_reg_dx2;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner3728284299_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_x1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3728284299/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x1 = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_x1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_1;
}
SEXP Rsh_Fir_user_promise_inner3728284299_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y1;
  SEXP Rsh_Fir_reg_y1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3728284299/0: expected 0, got %d", NCAPTURES);

  // y = ld y
  Rsh_Fir_reg_y1 = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_y1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // return y1
  return Rsh_Fir_reg_y1_1;
}
SEXP Rsh_Fir_user_promise_inner3728284299_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_it1_;
  SEXP Rsh_Fir_reg_it2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3728284299/0: expected 0, got %d", NCAPTURES);

  // it1 = ld it
  Rsh_Fir_reg_it1_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // it2 = force? it1
  Rsh_Fir_reg_it2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_it1_);
  // checkMissing(it2)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_it2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // return it2
  return Rsh_Fir_reg_it2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
