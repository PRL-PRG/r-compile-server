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
SEXP Rsh_Fir_user_function_inner833810193_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner833810193_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner833810193_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner833810193_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner833810193_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner833810193_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner833810193_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_mad;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_print;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_mad2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sort;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_mad3_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_mad4_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_mad5_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r38_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner833810193
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner833810193_, RHO, CCP);
  // st mad = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // mad = ldf mad
  Rsh_Fir_reg_mad = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c(<int 1, 2, 3, 4, 5, 6, 7, 8, 9>);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(<lang `:`(1.0, 9.0)>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn mad(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mad, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 6 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   mad1 = ldf mad;
  //   p1 = prom<V +>{
  //     sym1 = ldf c;
  //     base1 = ldf c in base;
  //     guard1 = `==`.4(sym1, base1);
  //     if guard1 then L1() else L2();
  //   L0(r7):
  //     return r7;
  //   L1():
  //     c1 = ldf c in base;
  //     r8 = dyn c1(<int 1, 2, 3, 4, 5, 6, 7, 8, 9>);
  //     goto L0(r8);
  //   L2():
  //     r6 = dyn base1(<lang `:`(1.0, 9.0)>);
  //     goto L0(r6);
  //   };
  //   r10 = dyn mad1[, constant](p1, 1.0);
  //   return r10;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r12 = dyn print(p2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L5() else D3()
  // L5()
  goto L5_;

D3_:;
  // deopt 10 [r12]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // mad2 = ldf mad
  Rsh_Fir_reg_mad2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D4()
  // L6()
  goto L6_;

D4_:;
  // deopt 11 [r12]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // p3 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r14):
  //   return r14;
  // L1():
  //   c2 = ldf c in base;
  //   r15 = dyn c2(<int 1, 2, 3, 4, 5, 6, 7, 8>, 100.0);
  //   goto L0(r15);
  // L2():
  //   r13 = dyn base2(<lang `:`(1.0, 8.0)>, 100.0);
  //   goto L0(r13);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r17 = dyn mad2[, constant](p3, 1.0)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mad2_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L7() else D5()
  // L7()
  goto L7_;

D5_:;
  // deopt 15 [r12, r17]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // `==`(r12, r17)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r17_;
  (void)(Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args13));
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard3 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L0_:;
  // st x = r20
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L11() else D7()
  // L11()
  goto L11_;

L8_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r21 = dyn c3(1.0, 2.0, 3.0, 5.0, 7.0, 8.0)
  SEXP Rsh_Fir_array_args15[6];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args15[4] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[5] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names10[6];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_array_arg_names10[5] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 6, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

L9_:;
  // r19 = dyn base3(1.0, 2.0, 3.0, 5.0, 7.0, 8.0)
  SEXP Rsh_Fir_array_args16[6];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args16[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args16[4] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args16[5] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names11[6];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 6, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L0_;

D6_:;
  // deopt 26 [r21]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L0_;

L11_:;
  // p5 = prom<V +>{
  //   sym4 = ldf abs;
  //   base4 = ldf abs in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r23):
  //   return r23;
  // L1():
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   median = ldf median;
  //   p4 = prom<V +>{
  //     x2 = ld x;
  //     x3 = force? x2;
  //     checkMissing(x3);
  //     return x3;
  //   };
  //   r25 = dyn median(p4);
  //   r26 = `-`(x1, r25);
  //   abs = ldf abs in base;
  //   r27 = dyn abs(r26);
  //   goto L0(r27);
  // L2():
  //   r22 = dyn base4(<lang `-`(x, median(x))>);
  //   goto L0(r22);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r29 = dyn sort(p5)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L12() else D8()
  // L12()
  goto L12_;

D8_:;
  // deopt 31 [r29]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L12_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard5 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r31
  return Rsh_Fir_reg_r31_;

L13_:;
  // mad3 = ldf mad
  Rsh_Fir_reg_mad3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L15() else D9()
  // L15()
  goto L15_;

L14_:;
  // r30 = dyn base5(<lang mad(x, constant=1.0)>, <lang mad(x, constant=1.0, low=TRUE)>, <lang mad(x, constant=1.0, high=TRUE)>)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L1(r30)
  // L1(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L1_;

D9_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p6 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r33 = dyn mad3[, constant](p6, 1.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mad3_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L16() else D10()
  // L16()
  goto L16_;

D10_:;
  // deopt 39 [r33]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // mad4 = ldf mad
  Rsh_Fir_reg_mad4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L17() else D11()
  // L17()
  goto L17_;

D11_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p7 = prom<V +>{
  //   x6 = ld x;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   return x7;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r35 = dyn mad4[, constant, low](p7, 1.0, TRUE)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names18[2] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mad4_, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L18() else D12()
  // L18()
  goto L18_;

D12_:;
  // deopt 47 [r35]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // mad5 = ldf mad
  Rsh_Fir_reg_mad5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L19() else D13()
  // L19()
  goto L19_;

D13_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p8 = prom<V +>{
  //   x8 = ld x;
  //   x9 = force? x8;
  //   checkMissing(x9);
  //   return x9;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r37 = dyn mad5[, constant, high](p8, 1.0, TRUE)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mad5_, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L20() else D14()
  // L20()
  goto L20_;

D14_:;
  // deopt 55 [r37]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L20_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r38 = dyn c4(r33, r35, r37)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L21() else D15()
  // L21()
  goto L21_;

D15_:;
  // deopt 57 [r38]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L1(r38)
  // L1(r38)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r38_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c(<int 1, 2, 3, 4, 5, 6, 7, 8, 9>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(<lang `:`(1.0, 9.0)>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mad1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mad1 = ldf mad
  Rsh_Fir_reg_mad1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   c1 = ldf c in base;
  //   r8 = dyn c1(<int 1, 2, 3, 4, 5, 6, 7, 8, 9>);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1(<lang `:`(1.0, 9.0)>);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r10 = dyn mad1[, constant](p1, 1.0)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mad1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r8 = dyn c1(<int 1, 2, 3, 4, 5, 6, 7, 8, 9>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base1(<lang `:`(1.0, 9.0)>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r14
  return Rsh_Fir_reg_r14_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r15 = dyn c2(<int 1, 2, 3, 4, 5, 6, 7, 8>, 100.0)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L0_;

L2_:;
  // r13 = dyn base2(<lang `:`(1.0, 8.0)>, 100.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_median;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_abs;
  SEXP Rsh_Fir_reg_r27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf abs
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base4 = ldf abs in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r23
  return Rsh_Fir_reg_r23_;

L1_:;
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // median = ldf median
  Rsh_Fir_reg_median = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // p4 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r25 = dyn median(p4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_median, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names12, CCP, RHO);
  // r26 = `-`(x1, r25)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args21);
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r27 = dyn abs(r26)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r27_;
  goto L0_;

L2_:;
  // r22 = dyn base4(<lang `-`(x, median(x))>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return x7
  return Rsh_Fir_reg_x7_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return x9
  return Rsh_Fir_reg_x9_;
}
SEXP Rsh_Fir_user_function_inner833810193_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner833810193 dynamic dispatch ([x, center, constant, `na.rm`, low, high])

  return Rsh_Fir_user_version_inner833810193_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner833810193_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner833810193 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner833810193/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_center;
  SEXP Rsh_Fir_reg_constant;
  SEXP Rsh_Fir_reg_na_rm;
  SEXP Rsh_Fir_reg_low;
  SEXP Rsh_Fir_reg_high;
  SEXP Rsh_Fir_reg_center_isMissing;
  SEXP Rsh_Fir_reg_center_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_constant_isMissing;
  SEXP Rsh_Fir_reg_constant_orDefault;
  SEXP Rsh_Fir_reg_na_rm_isMissing;
  SEXP Rsh_Fir_reg_na_rm_orDefault;
  SEXP Rsh_Fir_reg_low_isMissing;
  SEXP Rsh_Fir_reg_low_orDefault;
  SEXP Rsh_Fir_reg_high_isMissing;
  SEXP Rsh_Fir_reg_high_orDefault;
  SEXP Rsh_Fir_reg_na_rm1_;
  SEXP Rsh_Fir_reg_na_rm2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_x6_1;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_x9_1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_constant1_;
  SEXP Rsh_Fir_reg_constant2_;
  SEXP Rsh_Fir_reg_low1_;
  SEXP Rsh_Fir_reg_low2_;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_constant3_;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_high1_;
  SEXP Rsh_Fir_reg_high2_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_constant7_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_low3_;
  SEXP Rsh_Fir_reg_low4_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_constant12_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_high3_;
  SEXP Rsh_Fir_reg_high4_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_constant16_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_constant19_;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_high5_;
  SEXP Rsh_Fir_reg_high6_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_sort1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r29_1;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_constant21_;
  SEXP Rsh_Fir_reg_r31_1;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_constant23_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_constant24_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_median1_;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r38_1;
  SEXP Rsh_Fir_reg_r39_;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_center = PARAMS[1];
  Rsh_Fir_reg_constant = PARAMS[2];
  Rsh_Fir_reg_na_rm = PARAMS[3];
  Rsh_Fir_reg_low = PARAMS[4];
  Rsh_Fir_reg_high = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // center_isMissing = missing.0(center)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_center;
  Rsh_Fir_reg_center_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args34);
  // if center_isMissing then L0() else L1(center)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_center_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(center)
    Rsh_Fir_reg_center_orDefault = Rsh_Fir_reg_center;
    goto L1_;
  }

L0_:;
  // p1 = prom<V +>{
  //   median = ldf median;
  //   p = prom<V +>{
  //     x1 = ld x;
  //     x2 = force? x1;
  //     checkMissing(x2);
  //     return x2;
  //   };
  //   r1 = dyn median(p);
  //   return r1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner833810193_, 0, NULL, CCP, RHO);
  // goto L1(p1)
  // L1(p1)
  Rsh_Fir_reg_center_orDefault = Rsh_Fir_reg_p1_1;
  goto L1_;

L1_:;
  // st center = center_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_center_orDefault, RHO);
  (void)(Rsh_Fir_reg_center_orDefault);
  // constant_isMissing = missing.0(constant)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_constant;
  Rsh_Fir_reg_constant_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args37);
  // if constant_isMissing then L2(1.4826) else L2(constant)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_constant_isMissing)) {
  // L2(1.4826)
    Rsh_Fir_reg_constant_orDefault = Rsh_const(CCP, 27);
    goto L2_;
  } else {
  // L2(constant)
    Rsh_Fir_reg_constant_orDefault = Rsh_Fir_reg_constant;
    goto L2_;
  }

L2_:;
  // st constant = constant_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_constant_orDefault, RHO);
  (void)(Rsh_Fir_reg_constant_orDefault);
  // na_rm_isMissing = missing.0(na_rm)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_na_rm;
  Rsh_Fir_reg_na_rm_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args38);
  // if na_rm_isMissing then L3(FALSE) else L3(na_rm)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_rm_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_const(CCP, 28);
    goto L3_;
  } else {
  // L3(na_rm)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_Fir_reg_na_rm;
    goto L3_;
  }

L3_:;
  // st `na.rm` = na_rm_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_na_rm_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_rm_orDefault);
  // low_isMissing = missing.0(low)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_low;
  Rsh_Fir_reg_low_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args39);
  // if low_isMissing then L4(FALSE) else L4(low)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_low_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_low_orDefault = Rsh_const(CCP, 28);
    goto L4_;
  } else {
  // L4(low)
    Rsh_Fir_reg_low_orDefault = Rsh_Fir_reg_low;
    goto L4_;
  }

L4_:;
  // st low = low_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_low_orDefault, RHO);
  (void)(Rsh_Fir_reg_low_orDefault);
  // high_isMissing = missing.0(high)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_high;
  Rsh_Fir_reg_high_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args40);
  // if high_isMissing then L5(FALSE) else L5(high)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_high_isMissing)) {
  // L5(FALSE)
    Rsh_Fir_reg_high_orDefault = Rsh_const(CCP, 28);
    goto L5_;
  } else {
  // L5(high)
    Rsh_Fir_reg_high_orDefault = Rsh_Fir_reg_high;
    goto L5_;
  }

L5_:;
  // st high = high_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_high_orDefault, RHO);
  (void)(Rsh_Fir_reg_high_orDefault);
  // na_rm1 = ld `na.rm`
  Rsh_Fir_reg_na_rm1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

D0_:;
  // deopt 0 [na_rm1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_na_rm1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L20_:;
  // na_rm2 = force? na_rm1
  Rsh_Fir_reg_na_rm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm1_);
  // checkMissing(na_rm2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_na_rm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(na_rm2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_na_rm2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c then L21() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L21()
    goto L21_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard1 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L21_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

D1_:;
  // deopt 2 [x3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L10_:;
  // st n = r9
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // constant1 = ld constant
  Rsh_Fir_reg_constant1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

L22_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(x4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x4_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args45);
  // if c1 then L23() else L24(x4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L23()
    goto L23_;
  } else {
  // L24(x4)
    Rsh_Fir_reg_x6_1 = Rsh_Fir_reg_x4_1;
    goto L24_;
  }

L31_:;
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L33() else D4()
  // L33()
  goto L33_;

L32_:;
  // r8 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L10(r8)
  // L10(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_1;
  goto L10_;

D4_:;
  // deopt 17 [x12]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 22 [constant1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_constant1_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L7_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L9()
  // L9()
  goto L9_;

L23_:;
  // dr = tryDispatchBuiltin.1("[", x4)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_x4_1;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc then L25() else L24(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L25()
    goto L25_;
  } else {
  // L24(dr)
    Rsh_Fir_reg_x6_1 = Rsh_Fir_reg_dr;
    goto L24_;
  }

L24_:;
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L33_:;
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r10 = dyn length(x13)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L34() else D5()
  // L34()
  goto L34_;

L35_:;
  // constant2 = force? constant1
  Rsh_Fir_reg_constant2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_constant1_);
  // checkMissing(constant2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_constant2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // low1 = ld low
  Rsh_Fir_reg_low1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

D5_:;
  // deopt 20 [r10]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 23 [constant2, low1]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_constant2_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_low1_;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L8_:;
  // r6 = `!`(r4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args53);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r7 = dyn __(x9, r6)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_x9_1;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L7(r7)
  // L7(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_1;
  goto L7_;

L25_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L7(dx)
  // L7(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L7_;

L26_:;
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L28() else D2()
  // L28()
  goto L28_;

L27_:;
  // r3 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L8(x6, r3)
  // L8(x6, r3)
  Rsh_Fir_reg_x9_1 = Rsh_Fir_reg_x6_1;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_1;
  goto L8_;

L34_:;
  // goto L10(r10)
  // L10(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_1;
  goto L10_;

L36_:;
  // low2 = force? low1
  Rsh_Fir_reg_low2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_low1_);
  // checkMissing(low2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_low2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // c2 = `as.logical`(low2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_low2_;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args58);
  // if c2 then L11(constant2, c2) else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L11(constant2, c2)
    Rsh_Fir_reg_constant3_ = Rsh_Fir_reg_constant2_;
    Rsh_Fir_reg_c3_1 = Rsh_Fir_reg_c2_1;
    goto L11_;
  } else {
  // L37()
    goto L37_;
  }

D2_:;
  // deopt 6 [x6, x10]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x6_1;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L11_:;
  // c8 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_c3_1;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args59);
  // if c8 then L40() else L12(constant3, c8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L40()
    goto L40_;
  } else {
  // L12(constant3, c8)
    Rsh_Fir_reg_constant7_ = Rsh_Fir_reg_constant3_;
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c8_;
    goto L12_;
  }

L28_:;
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r5 = dyn is_na(x11)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L29() else D3()
  // L29()
  goto L29_;

L37_:;
  // high1 = ld high
  Rsh_Fir_reg_high1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L38() else D8()
  // L38()
  goto L38_;

D3_:;
  // deopt 9 [x6, r5]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_x6_1;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 25 [constant2, c2, high1]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_constant2_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_high1_;
  Rsh_Fir_deopt(25, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L12_:;
  // c14 = `as.logical`(c10)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args62);
  // if c14 then L44() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L44()
    goto L44_;
  } else {
  // L13()
    goto L13_;
  }

L29_:;
  // goto L8(x6, r5)
  // L8(x6, r5)
  Rsh_Fir_reg_x9_1 = Rsh_Fir_reg_x6_1;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_1;
  goto L8_;

L38_:;
  // high2 = force? high1
  Rsh_Fir_reg_high2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_high1_);
  // checkMissing(high2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_high2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(high2)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_high2_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args64);
  // c6 = `||`(c2, c5)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args65);
  // goto L11(constant2, c6)
  // L11(constant2, c6)
  Rsh_Fir_reg_constant3_ = Rsh_Fir_reg_constant2_;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_reg_c6_;
  goto L11_;

L40_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L41() else D9()
  // L41()
  goto L41_;

D9_:;
  // deopt 29 [constant3, c8, n]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_constant3_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(29, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L13_:;
  // median1 = ldf median
  Rsh_Fir_reg_median1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L66() else D22()
  // L66()
  goto L66_;

L19_:;
  // r39 = `*`(constant24, dx5)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_constant24_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args66);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r39
  return Rsh_Fir_reg_r39_;

L41_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // __1 = ldf `%%` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r11 = dyn __1(n1, 2.0)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L42() else D10()
  // L42()
  goto L42_;

L44_:;
  // low3 = ld low
  Rsh_Fir_reg_low3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L45() else D11()
  // L45()
  goto L45_;

D10_:;
  // deopt 33 [constant3, c8, r11]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_constant3_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(33, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 37 [constant7, low3]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_constant7_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_low3_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 71 [constant7]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_constant7_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L42_:;
  // r12 = `==`(r11, 0.0)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args69);
  // c11 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args70);
  // c12 = `&&`(c8, c11)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args71);
  // goto L12(constant3, c12)
  // L12(constant3, c12)
  Rsh_Fir_reg_constant7_ = Rsh_Fir_reg_constant3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c12_;
  goto L12_;

L45_:;
  // low4 = force? low3
  Rsh_Fir_reg_low4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_low3_);
  // checkMissing(low4)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_low4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c15 = `as.logical`(low4)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_low4_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args73);
  // if c15 then L46() else L14(constant7, c15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L46()
    goto L46_;
  } else {
  // L14(constant7, c15)
    Rsh_Fir_reg_constant12_ = Rsh_Fir_reg_constant7_;
    Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c15_;
    goto L14_;
  }

L66_:;
  // p4 = prom<V +>{
  //   sym4 = ldf abs;
  //   base4 = ldf abs in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r34):
  //   return r34;
  // L1():
  //   x16 = ld x;
  //   x17 = force? x16;
  //   checkMissing(x17);
  //   center3 = ld center;
  //   center4 = force? center3;
  //   checkMissing(center4);
  //   r35 = `-`(x17, center4);
  //   abs1 = ldf abs in base;
  //   r36 = dyn abs1(r35);
  //   goto L0(r36);
  // L2():
  //   r33 = dyn base4(<lang `-`(x, center)>);
  //   goto L0(r33);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner833810193_2, 0, NULL, CCP, RHO);
  // r38 = dyn median1(p4)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_median1_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L67() else D23()
  // L67()
  goto L67_;

D23_:;
  // deopt 73 [constant7, r38]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_constant7_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r38_1;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L14_:;
  // c21 = `as.logical`(c17)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args81);
  // if c21 then L49() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L49()
    goto L49_;
  } else {
  // L15()
    goto L15_;
  }

L46_:;
  // high3 = ld high
  Rsh_Fir_reg_high3_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L47() else D12()
  // L47()
  goto L47_;

L67_:;
  // goto L19(constant7, r38)
  // L19(constant7, r38)
  Rsh_Fir_reg_constant24_ = Rsh_Fir_reg_constant7_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r38_1;
  goto L19_;

D12_:;
  // deopt 39 [constant7, c15, high3]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_constant7_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_high3_;
  Rsh_Fir_deopt(39, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L16(constant12)
  // L16(constant12)
  Rsh_Fir_reg_constant16_ = Rsh_Fir_reg_constant12_;
  goto L16_;

L16_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L53() else D15()
  // L53()
  goto L53_;

L47_:;
  // high4 = force? high3
  Rsh_Fir_reg_high4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_high3_);
  // checkMissing(high4)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_high4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c18 = `as.logical`(high4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_high4_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args83);
  // c19 = `&&`(c15, c18)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args84);
  // goto L14(constant7, c19)
  // L14(constant7, c19)
  Rsh_Fir_reg_constant12_ = Rsh_Fir_reg_constant7_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c19_;
  goto L14_;

L49_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L50() else D13()
  // L50()
  goto L50_;

D13_:;
  // deopt 43 [constant12]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_constant12_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 49 [constant16, n2]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_constant16_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(49, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L50_:;
  // r13 = dyn stop("'low' and 'high' cannot be both TRUE")
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L51() else D14()
  // L51()
  goto L51_;

L53_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // ___ = ldf `%/%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r15 = dyn ___(n3, 2.0)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L54() else D16()
  // L54()
  goto L54_;

D14_:;
  // deopt 45 [constant12, r13]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_constant12_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 53 [constant16, r15]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_constant16_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L16(constant12)
  // L16(constant12)
  Rsh_Fir_reg_constant16_ = Rsh_Fir_reg_constant12_;
  goto L16_;

L54_:;
  // sym2 = ldf `as.integer`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base2 = ldf `as.integer` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard2 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L17_:;
  // r22 = `+`(r19, r20)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args89);
  // st n2 = r22
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r22_1, RHO);
  (void)(Rsh_Fir_reg_r22_1);
  // sort = ldf sort
  Rsh_Fir_reg_sort1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L59() else D19()
  // L59()
  goto L59_;

L55_:;
  // high5 = ld high
  Rsh_Fir_reg_high5_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L57() else D17()
  // L57()
  goto L57_;

L56_:;
  // r18 = dyn base2(<sym high>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L17(constant16, r15, r18)
  // L17(constant16, r15, r18)
  Rsh_Fir_reg_constant19_ = Rsh_Fir_reg_constant16_;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r15_1;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_reg_r18_;
  goto L17_;

D17_:;
  // deopt 55 [constant16, r15, high5]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_constant16_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_high5_;
  Rsh_Fir_deopt(55, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 62 [constant19]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_constant19_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L57_:;
  // high6 = force? high5
  Rsh_Fir_reg_high6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_high5_);
  // checkMissing(high6)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_high6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r21 = dyn as_integer(high6)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_high6_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L58() else D18()
  // L58()
  goto L58_;

L59_:;
  // p2 = prom<V +>{
  //   sym3 = ldf abs;
  //   base3 = ldf abs in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r24):
  //   return r24;
  // L1():
  //   x14 = ld x;
  //   x15 = force? x14;
  //   checkMissing(x15);
  //   center1 = ld center;
  //   center2 = force? center1;
  //   checkMissing(center2);
  //   r25 = `-`(x15, center2);
  //   abs = ldf abs in base;
  //   r26 = dyn abs(r25);
  //   goto L0(r26);
  // L2():
  //   r23 = dyn base3(<lang `-`(x, center)>);
  //   goto L0(r23);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner833810193_3, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   n4 = ld n2;
  //   n5 = force? n4;
  //   checkMissing(n5);
  //   return n5;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner833810193_4, 0, NULL, CCP, RHO);
  // r29 = dyn sort[, partial](p2, p3)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r29_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort1, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L60() else D20()
  // L60()
  goto L60_;

D18_:;
  // deopt 58 [constant16, r15, r21]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_constant16_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_deopt(58, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 66 [constant19, r29]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_constant19_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r29_1;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L17(constant16, r15, r21)
  // L17(constant16, r15, r21)
  Rsh_Fir_reg_constant19_ = Rsh_Fir_reg_constant16_;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r15_1;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_reg_r21_1;
  goto L17_;

L60_:;
  // c22 = `is.object`(r29)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_r29_1;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args101);
  // if c22 then L61() else L62(constant19, r29)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L61()
    goto L61_;
  } else {
  // L62(constant19, r29)
    Rsh_Fir_reg_constant21_ = Rsh_Fir_reg_constant19_;
    Rsh_Fir_reg_r31_1 = Rsh_Fir_reg_r29_1;
    goto L62_;
  }

L18_:;
  // goto L19(constant23, dx4)
  // L19(constant23, dx4)
  Rsh_Fir_reg_constant24_ = Rsh_Fir_reg_constant23_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L19_;

L61_:;
  // dr2 = tryDispatchBuiltin.1("[", r29)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_r29_1;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args102);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if dc1 then L63() else L62(constant19, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L63()
    goto L63_;
  } else {
  // L62(constant19, dr2)
    Rsh_Fir_reg_constant21_ = Rsh_Fir_reg_constant19_;
    Rsh_Fir_reg_r31_1 = Rsh_Fir_reg_dr2_;
    goto L62_;
  }

L62_:;
  // n6 = ld n2
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L64() else D21()
  // L64()
  goto L64_;

D21_:;
  // deopt 67 [constant21, r31, n6]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_constant21_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r31_1;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(67, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L63_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // goto L18(constant19, dx3)
  // L18(constant19, dx3)
  Rsh_Fir_reg_constant23_ = Rsh_Fir_reg_constant19_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L18_;

L64_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r32 = dyn __2(r31, n7)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_r31_1;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L18(constant21, r32)
  // L18(constant21, r32)
  Rsh_Fir_reg_constant23_ = Rsh_Fir_reg_constant21_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r32_;
  goto L18_;
}
SEXP Rsh_Fir_user_promise_inner833810193_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_median1;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner833810193/0: expected 0, got %d", NCAPTURES);

  // median = ldf median
  Rsh_Fir_reg_median1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner833810193_1, 0, NULL, CCP, RHO);
  // r1 = dyn median(p)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_median1, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names21, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_user_promise_inner833810193_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner833810193/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_1;
}
SEXP Rsh_Fir_user_promise_inner833810193_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r33_1;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_center3_;
  SEXP Rsh_Fir_reg_center4_;
  SEXP Rsh_Fir_reg_r35_1;
  SEXP Rsh_Fir_reg_abs1_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner833810193/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf abs
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base4 = ldf abs in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r34
  return Rsh_Fir_reg_r34_;

L1_:;
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // center3 = ld center
  Rsh_Fir_reg_center3_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // center4 = force? center3
  Rsh_Fir_reg_center4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center3_);
  // checkMissing(center4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_center4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // r35 = `-`(x17, center4)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_center4_;
  Rsh_Fir_reg_r35_1 = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args77);
  // abs1 = ldf abs in base
  Rsh_Fir_reg_abs1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r36 = dyn abs1(r35)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r35_1;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs1_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r36_;
  goto L0_;

L2_:;
  // r33 = dyn base4(<lang `-`(x, center)>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r33_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner833810193_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r23_1;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_center1_;
  SEXP Rsh_Fir_reg_center2_;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_abs1;
  SEXP Rsh_Fir_reg_r26_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner833810193/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf abs
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base3 = ldf abs in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args93);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r24
  return Rsh_Fir_reg_r24_;

L1_:;
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // center1 = ld center
  Rsh_Fir_reg_center1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // center2 = force? center1
  Rsh_Fir_reg_center2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center1_);
  // checkMissing(center2)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_center2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // r25 = `-`(x15, center2)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_center2_;
  Rsh_Fir_reg_r25_1 = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args96);
  // abs = ldf abs in base
  Rsh_Fir_reg_abs1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r26 = dyn abs(r25)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs1, 1, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r26_1;
  goto L0_;

L2_:;
  // r23 = dyn base3(<lang `-`(x, center)>)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner833810193_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner833810193/0: expected 0, got %d", NCAPTURES);

  // n4 = ld n2
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // return n5
  return Rsh_Fir_reg_n5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
