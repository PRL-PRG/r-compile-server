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
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_subset;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_subset1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_subset2_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_with;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_rownames;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg__in_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_subset4_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_subset5_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_r46_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st subset = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // subset = ldf subset
  Rsh_Fir_reg_subset = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   airquality = ld airquality;
  //   airquality1 = force? airquality;
  //   checkMissing(airquality1);
  //   return airquality1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   Temp = ld Temp;
  //   Temp1 = force? Temp;
  //   checkMissing(Temp1);
  //   r2 = `>`(Temp1, 80.0);
  //   return r2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   Ozone = ld Ozone;
  //   Ozone1 = force? Ozone;
  //   checkMissing(Ozone1);
  //   Temp2 = ld Temp;
  //   Temp3 = force? Temp2;
  //   checkMissing(Temp3);
  //   c = ldf c in base;
  //   r6 = dyn c(Ozone1, Temp3);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base(<sym Ozone>, <sym Temp>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r8 = dyn subset[, , select](p, p1, p2)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_subset, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 9 [r8]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // subset1 = ldf subset
  Rsh_Fir_reg_subset1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p3 = prom<V +>{
  //   airquality2 = ld airquality;
  //   airquality3 = force? airquality2;
  //   checkMissing(airquality3);
  //   return airquality3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   Day = ld Day;
  //   Day1 = force? Day;
  //   checkMissing(Day1);
  //   r10 = `==`(Day1, 1.0);
  //   return r10;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   Temp4 = ld Temp;
  //   Temp5 = force? Temp4;
  //   checkMissing(Temp5);
  //   r12 = `-`(<missing>, Temp5);
  //   return r12;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r14 = dyn subset1[, , select](p3, p4, p5)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args14[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_subset1_, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 16 [r14]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // subset2 = ldf subset
  Rsh_Fir_reg_subset2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p6 = prom<V +>{
  //   airquality4 = ld airquality;
  //   airquality5 = force? airquality4;
  //   checkMissing(airquality5);
  //   return airquality5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   Ozone2 = ld Ozone;
  //   Ozone3 = force? Ozone2;
  //   checkMissing(Ozone3);
  //   Wind = ld Wind;
  //   Wind1 = force? Wind;
  //   checkMissing(Wind1);
  //   r16 = `:`(Ozone3, Wind1);
  //   return r16;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r18 = dyn subset2[, select](p6, p7)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_subset2_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L6() else D5()
  // L6()
  goto L6_;

D5_:;
  // deopt 22 [r18]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // sym1 = ldf with
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf with in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L0_:;
  // rownames = ldf rownames
  Rsh_Fir_reg_rownames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

L7_:;
  // with = ldf with
  Rsh_Fir_reg_with = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

L8_:;
  // r19 = dyn base1(<sym airquality>, <lang subset(Ozone, `>`(Temp, 80.0))>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p8 = prom<V +>{
  //   airquality6 = ld airquality;
  //   airquality7 = force? airquality6;
  //   checkMissing(airquality7);
  //   return airquality7;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   subset3 = ldf subset;
  //   p9 = prom<V +>{
  //     Ozone4 = ld Ozone;
  //     Ozone5 = force? Ozone4;
  //     checkMissing(Ozone5);
  //     return Ozone5;
  //   };
  //   p10 = prom<V +>{
  //     Temp6 = ld Temp;
  //     Temp7 = force? Temp6;
  //     checkMissing(Temp7);
  //     r23 = `>`(Temp7, 80.0);
  //     return r23;
  //   };
  //   r25 = dyn subset3(p9, p10);
  //   return r25;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r27 = dyn with(p8, p11)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_with, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

L11_:;
  // p12 = prom<V +>{
  //   state_x77 = ld `state.x77`;
  //   state_x78 = force? state_x77;
  //   checkMissing(state_x78);
  //   return state_x78;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r29 = dyn rownames(p12)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rownames, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D7_:;
  // deopt 28 [r27]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 32 [r29]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L0()
  // L0()
  goto L0_;

L12_:;
  // st nm = r29
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p13 = prom<V +>{
  //   nm = ld nm;
  //   nm1 = force? nm;
  //   checkMissing(nm1);
  //   return nm1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   grep = ldf grep;
  //   p14 = prom<V +>{
  //     nm2 = ld nm;
  //     nm3 = force? nm2;
  //     checkMissing(nm3);
  //     return nm3;
  //   };
  //   r32 = dyn grep[, , value]("^M", p14, TRUE);
  //   return r32;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r34 = dyn _in_(p13, p15)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 38 [r34]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // st start_with_M = r34
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // subset4 = ldf subset
  Rsh_Fir_reg_subset4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p16 = prom<V +>{
  //   state_x79 = ld `state.x77`;
  //   state_x80 = force? state_x79;
  //   checkMissing(state_x80);
  //   return state_x80;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // p17 = prom<V +>{
  //   start_with_M = ld start_with_M;
  //   start_with_M1 = force? start_with_M;
  //   checkMissing(start_with_M1);
  //   return start_with_M1;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // p18 = prom<V +>{
  //   Illiteracy = ld Illiteracy;
  //   Illiteracy1 = force? Illiteracy;
  //   checkMissing(Illiteracy1);
  //   Murder = ld Murder;
  //   Murder1 = force? Murder;
  //   checkMissing(Murder1);
  //   r37 = `:`(Illiteracy1, Murder1);
  //   return r37;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main18, 0, NULL, CCP, RHO);
  // r39 = dyn subset4(p16, p17, p18)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_subset4_, 3, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 45 [r39]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // subset5 = ldf subset
  Rsh_Fir_reg_subset5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p19 = prom<V +>{
  //   state_x81 = ld `state.x77`;
  //   state_x82 = force? state_x81;
  //   checkMissing(state_x82);
  //   return state_x82;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main19, 0, NULL, CCP, RHO);
  // p21 = prom<V +>{
  //   grepl = ldf grepl;
  //   p20 = prom<V +>{
  //     nm4 = ld nm;
  //     nm5 = force? nm4;
  //     checkMissing(nm5);
  //     return nm5;
  //   };
  //   r42 = dyn grepl("^M", p20);
  //   return r42;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main20, 0, NULL, CCP, RHO);
  // p22 = prom<V +>{
  //   Illiteracy2 = ld Illiteracy;
  //   Illiteracy3 = force? Illiteracy2;
  //   checkMissing(Illiteracy3);
  //   Murder2 = ld Murder;
  //   Murder3 = force? Murder2;
  //   checkMissing(Murder3);
  //   r44 = `:`(Illiteracy3, Murder3);
  //   return r44;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main22, 0, NULL, CCP, RHO);
  // r46 = dyn subset5(p19, p21, p22)
  SEXP Rsh_Fir_array_args46[3];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args46[2] = Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_subset5_, 3, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 51 [r46]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r46
  return Rsh_Fir_reg_r46_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_airquality;
  SEXP Rsh_Fir_reg_airquality1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // airquality = ld airquality
  Rsh_Fir_reg_airquality = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // airquality1 = force? airquality
  Rsh_Fir_reg_airquality1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_airquality);
  // checkMissing(airquality1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_airquality1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return airquality1
  return Rsh_Fir_reg_airquality1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Temp;
  SEXP Rsh_Fir_reg_Temp1_;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Temp = ld Temp
  Rsh_Fir_reg_Temp = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // Temp1 = force? Temp
  Rsh_Fir_reg_Temp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Temp);
  // checkMissing(Temp1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_Temp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // r2 = `>`(Temp1, 80.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_Temp1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args2);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_Ozone;
  SEXP Rsh_Fir_reg_Ozone1_;
  SEXP Rsh_Fir_reg_Temp2_;
  SEXP Rsh_Fir_reg_Temp3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_;

L1_:;
  // Ozone = ld Ozone
  Rsh_Fir_reg_Ozone = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // Ozone1 = force? Ozone
  Rsh_Fir_reg_Ozone1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Ozone);
  // checkMissing(Ozone1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_Ozone1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // Temp2 = ld Temp
  Rsh_Fir_reg_Temp2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // Temp3 = force? Temp2
  Rsh_Fir_reg_Temp3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Temp2_);
  // checkMissing(Temp3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_Temp3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r6 = dyn c(Ozone1, Temp3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_Ozone1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_Temp3_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base(<sym Ozone>, <sym Temp>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_airquality2_;
  SEXP Rsh_Fir_reg_airquality3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // airquality2 = ld airquality
  Rsh_Fir_reg_airquality2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // airquality3 = force? airquality2
  Rsh_Fir_reg_airquality3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_airquality2_);
  // checkMissing(airquality3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_airquality3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return airquality3
  return Rsh_Fir_reg_airquality3_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Day;
  SEXP Rsh_Fir_reg_Day1_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Day = ld Day
  Rsh_Fir_reg_Day = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // Day1 = force? Day
  Rsh_Fir_reg_Day1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Day);
  // checkMissing(Day1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_Day1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // r10 = `==`(Day1, 1.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_Day1_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args11);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Temp4_;
  SEXP Rsh_Fir_reg_Temp5_;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Temp4 = ld Temp
  Rsh_Fir_reg_Temp4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // Temp5 = force? Temp4
  Rsh_Fir_reg_Temp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Temp4_);
  // checkMissing(Temp5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_Temp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // r12 = `-`(<missing>, Temp5)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_Temp5_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args13);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_airquality4_;
  SEXP Rsh_Fir_reg_airquality5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // airquality4 = ld airquality
  Rsh_Fir_reg_airquality4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // airquality5 = force? airquality4
  Rsh_Fir_reg_airquality5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_airquality4_);
  // checkMissing(airquality5)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_airquality5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return airquality5
  return Rsh_Fir_reg_airquality5_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Ozone2_;
  SEXP Rsh_Fir_reg_Ozone3_;
  SEXP Rsh_Fir_reg_Wind;
  SEXP Rsh_Fir_reg_Wind1_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Ozone2 = ld Ozone
  Rsh_Fir_reg_Ozone2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // Ozone3 = force? Ozone2
  Rsh_Fir_reg_Ozone3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Ozone2_);
  // checkMissing(Ozone3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_Ozone3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // Wind = ld Wind
  Rsh_Fir_reg_Wind = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // Wind1 = force? Wind
  Rsh_Fir_reg_Wind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Wind);
  // checkMissing(Wind1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_Wind1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // r16 = `:`(Ozone3, Wind1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_Ozone3_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_Wind1_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args18);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_airquality6_;
  SEXP Rsh_Fir_reg_airquality7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // airquality6 = ld airquality
  Rsh_Fir_reg_airquality6_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // airquality7 = force? airquality6
  Rsh_Fir_reg_airquality7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_airquality6_);
  // checkMissing(airquality7)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_airquality7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return airquality7
  return Rsh_Fir_reg_airquality7_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_subset3_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // subset3 = ldf subset
  Rsh_Fir_reg_subset3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p9 = prom<V +>{
  //   Ozone4 = ld Ozone;
  //   Ozone5 = force? Ozone4;
  //   checkMissing(Ozone5);
  //   return Ozone5;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   Temp6 = ld Temp;
  //   Temp7 = force? Temp6;
  //   checkMissing(Temp7);
  //   r23 = `>`(Temp7, 80.0);
  //   return r23;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r25 = dyn subset3(p9, p10)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_subset3_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Ozone4_;
  SEXP Rsh_Fir_reg_Ozone5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Ozone4 = ld Ozone
  Rsh_Fir_reg_Ozone4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // Ozone5 = force? Ozone4
  Rsh_Fir_reg_Ozone5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Ozone4_);
  // checkMissing(Ozone5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_Ozone5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return Ozone5
  return Rsh_Fir_reg_Ozone5_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Temp6_;
  SEXP Rsh_Fir_reg_Temp7_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Temp6 = ld Temp
  Rsh_Fir_reg_Temp6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // Temp7 = force? Temp6
  Rsh_Fir_reg_Temp7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Temp6_);
  // checkMissing(Temp7)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_Temp7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r23 = `>`(Temp7, 80.0)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_Temp7_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args25);
  // return r23
  return Rsh_Fir_reg_r23_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_state_x77_;
  SEXP Rsh_Fir_reg_state_x78_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // state_x77 = ld `state.x77`
  Rsh_Fir_reg_state_x77_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // state_x78 = force? state_x77
  Rsh_Fir_reg_state_x78_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_state_x77_);
  // checkMissing(state_x78)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_state_x78_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return state_x78
  return Rsh_Fir_reg_state_x78_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nm;
  SEXP Rsh_Fir_reg_nm1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nm = ld nm
  Rsh_Fir_reg_nm = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // nm1 = force? nm
  Rsh_Fir_reg_nm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm);
  // checkMissing(nm1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_nm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return nm1
  return Rsh_Fir_reg_nm1_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_grep;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // p14 = prom<V +>{
  //   nm2 = ld nm;
  //   nm3 = force? nm2;
  //   checkMissing(nm3);
  //   return nm3;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r32 = dyn grep[, , value]("^M", p14, TRUE)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nm2_;
  SEXP Rsh_Fir_reg_nm3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nm2 = ld nm
  Rsh_Fir_reg_nm2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // nm3 = force? nm2
  Rsh_Fir_reg_nm3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm2_);
  // checkMissing(nm3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_nm3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return nm3
  return Rsh_Fir_reg_nm3_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_state_x79_;
  SEXP Rsh_Fir_reg_state_x80_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // state_x79 = ld `state.x77`
  Rsh_Fir_reg_state_x79_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // state_x80 = force? state_x79
  Rsh_Fir_reg_state_x80_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_state_x79_);
  // checkMissing(state_x80)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_state_x80_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return state_x80
  return Rsh_Fir_reg_state_x80_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_start_with_M;
  SEXP Rsh_Fir_reg_start_with_M1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // start_with_M = ld start_with_M
  Rsh_Fir_reg_start_with_M = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // start_with_M1 = force? start_with_M
  Rsh_Fir_reg_start_with_M1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start_with_M);
  // checkMissing(start_with_M1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_start_with_M1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return start_with_M1
  return Rsh_Fir_reg_start_with_M1_;
}
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Illiteracy;
  SEXP Rsh_Fir_reg_Illiteracy1_;
  SEXP Rsh_Fir_reg_Murder;
  SEXP Rsh_Fir_reg_Murder1_;
  SEXP Rsh_Fir_reg_r37_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Illiteracy = ld Illiteracy
  Rsh_Fir_reg_Illiteracy = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // Illiteracy1 = force? Illiteracy
  Rsh_Fir_reg_Illiteracy1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Illiteracy);
  // checkMissing(Illiteracy1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_Illiteracy1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // Murder = ld Murder
  Rsh_Fir_reg_Murder = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // Murder1 = force? Murder
  Rsh_Fir_reg_Murder1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Murder);
  // checkMissing(Murder1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_Murder1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r37 = `:`(Illiteracy1, Murder1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_Illiteracy1_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_Murder1_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args38);
  // return r37
  return Rsh_Fir_reg_r37_;
}
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_state_x81_;
  SEXP Rsh_Fir_reg_state_x82_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // state_x81 = ld `state.x77`
  Rsh_Fir_reg_state_x81_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // state_x82 = force? state_x81
  Rsh_Fir_reg_state_x82_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_state_x81_);
  // checkMissing(state_x82)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_state_x82_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return state_x82
  return Rsh_Fir_reg_state_x82_;
}
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_grepl;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r42_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // p20 = prom<V +>{
  //   nm4 = ld nm;
  //   nm5 = force? nm4;
  //   checkMissing(nm5);
  //   return nm5;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main21, 0, NULL, CCP, RHO);
  // r42 = dyn grepl("^M", p20)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r42
  return Rsh_Fir_reg_r42_;
}
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nm4_;
  SEXP Rsh_Fir_reg_nm5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nm4 = ld nm
  Rsh_Fir_reg_nm4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // nm5 = force? nm4
  Rsh_Fir_reg_nm5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm4_);
  // checkMissing(nm5)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_nm5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return nm5
  return Rsh_Fir_reg_nm5_;
}
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Illiteracy2_;
  SEXP Rsh_Fir_reg_Illiteracy3_;
  SEXP Rsh_Fir_reg_Murder2_;
  SEXP Rsh_Fir_reg_Murder3_;
  SEXP Rsh_Fir_reg_r44_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Illiteracy2 = ld Illiteracy
  Rsh_Fir_reg_Illiteracy2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // Illiteracy3 = force? Illiteracy2
  Rsh_Fir_reg_Illiteracy3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Illiteracy2_);
  // checkMissing(Illiteracy3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_Illiteracy3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // Murder2 = ld Murder
  Rsh_Fir_reg_Murder2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // Murder3 = force? Murder2
  Rsh_Fir_reg_Murder3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Murder2_);
  // checkMissing(Murder3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_Murder3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // r44 = `:`(Illiteracy3, Murder3)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_Illiteracy3_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_Murder3_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args45);
  // return r44
  return Rsh_Fir_reg_r44_;
}
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2044426018 dynamic dispatch ([x, `...`])

  return Rsh_Fir_user_version_inner2044426018_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2044426018 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2044426018/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r2 = dyn UseMethod("subset")
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("subset")
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
