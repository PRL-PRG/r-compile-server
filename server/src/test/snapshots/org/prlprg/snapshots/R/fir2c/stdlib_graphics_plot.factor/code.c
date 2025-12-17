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
SEXP Rsh_Fir_user_function_inner3906365631_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3906365631_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3906365631_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3906365631_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3906365631_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3906365631_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3906365631_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3906365631_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3906365631_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3906365631_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3906365631_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3906365631_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3906365631_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_plot1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_plot2_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_plot3_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r25_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3906365631
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3906365631_, RHO, CCP);
  // st `plot.factor` = r
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
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L1_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r1 = dyn base(<sym grDevices>)
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

L3_:;
  // p = prom<V +>{
  //   grDevices = ld grDevices;
  //   grDevices1 = force? grDevices;
  //   checkMissing(grDevices1);
  //   return grDevices1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn require(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

L5_:;
  // p1 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r5 = dyn __(<sym weight>, <sym group>);
  //   return r5;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   PlantGrowth = ld PlantGrowth;
  //   PlantGrowth1 = force? PlantGrowth;
  //   checkMissing(PlantGrowth1);
  //   return PlantGrowth1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r8 = dyn plot[, data](p1, p2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 13 [r8]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0()
  // L0()
  goto L0_;

L6_:;
  // plot1 = ldf plot
  Rsh_Fir_reg_plot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p3 = prom<V +>{
  //   __1 = ldf `~` in base;
  //   r9 = dyn __1(<lang cut(weight, 2.0)>, <sym group>);
  //   return r9;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   PlantGrowth2 = ld PlantGrowth;
  //   PlantGrowth3 = force? PlantGrowth2;
  //   checkMissing(PlantGrowth3);
  //   return PlantGrowth3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r12 = dyn plot1[, data](p3, p4)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot1_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 19 [r12]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // plot2 = ldf plot
  Rsh_Fir_reg_plot2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p5 = prom<V +>{
  //   __2 = ldf `~` in base;
  //   r13 = dyn __2(<lang cut(weight, 3.0)>, <sym group>);
  //   return r13;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   PlantGrowth4 = ld PlantGrowth;
  //   PlantGrowth5 = force? PlantGrowth4;
  //   checkMissing(PlantGrowth5);
  //   return PlantGrowth5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   hcl = ldf hcl;
  //   p7 = prom<V +>{
  //     sym1 = ldf c;
  //     base1 = ldf c in base;
  //     guard1 = `==`.4(sym1, base1);
  //     if guard1 then L1() else L2();
  //   L0(r17):
  //     return r17;
  //   L1():
  //     c = ldf c in base;
  //     r18 = dyn c(0.0, 120.0, 240.0);
  //     goto L0(r18);
  //   L2():
  //     r16 = dyn base1(0.0, 120.0, 240.0);
  //     goto L0(r16);
  //   };
  //   r20 = dyn hcl(p7, 50.0, 70.0);
  //   return r20;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r22 = dyn plot2[, data, col](p5, p6, p8)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot2_, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 27 [r22]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // plot3 = ldf plot
  Rsh_Fir_reg_plot3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p9 = prom<V +>{
  //   PlantGrowth6 = ld PlantGrowth;
  //   PlantGrowth7 = force? PlantGrowth6;
  //   checkMissing(PlantGrowth7);
  //   c1 = `is.object`(PlantGrowth7);
  //   if c1 then L1() else L2(PlantGrowth7);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", PlantGrowth7);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(PlantGrowth9):
  //   r23 = `$`(PlantGrowth9, <sym group>);
  //   goto L0(r23);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r25 = dyn plot3[, axes, main](p9, FALSE, "no axes")
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot3_, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 35 [r25]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_grDevices;
  SEXP Rsh_Fir_reg_grDevices1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // grDevices = ld grDevices
  Rsh_Fir_reg_grDevices = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // grDevices1 = force? grDevices
  Rsh_Fir_reg_grDevices1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_grDevices);
  // checkMissing(grDevices1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_grDevices1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return grDevices1
  return Rsh_Fir_reg_grDevices1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r5 = dyn __(<sym weight>, <sym group>)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_PlantGrowth;
  SEXP Rsh_Fir_reg_PlantGrowth1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // PlantGrowth = ld PlantGrowth
  Rsh_Fir_reg_PlantGrowth = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // PlantGrowth1 = force? PlantGrowth
  Rsh_Fir_reg_PlantGrowth1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_PlantGrowth);
  // checkMissing(PlantGrowth1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_PlantGrowth1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return PlantGrowth1
  return Rsh_Fir_reg_PlantGrowth1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __1 = ldf `~` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r9 = dyn __1(<lang cut(weight, 2.0)>, <sym group>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_PlantGrowth2_;
  SEXP Rsh_Fir_reg_PlantGrowth3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // PlantGrowth2 = ld PlantGrowth
  Rsh_Fir_reg_PlantGrowth2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // PlantGrowth3 = force? PlantGrowth2
  Rsh_Fir_reg_PlantGrowth3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_PlantGrowth2_);
  // checkMissing(PlantGrowth3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_PlantGrowth3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return PlantGrowth3
  return Rsh_Fir_reg_PlantGrowth3_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __2 = ldf `~` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r13 = dyn __2(<lang cut(weight, 3.0)>, <sym group>)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_PlantGrowth4_;
  SEXP Rsh_Fir_reg_PlantGrowth5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // PlantGrowth4 = ld PlantGrowth
  Rsh_Fir_reg_PlantGrowth4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // PlantGrowth5 = force? PlantGrowth4
  Rsh_Fir_reg_PlantGrowth5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_PlantGrowth4_);
  // checkMissing(PlantGrowth5)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_PlantGrowth5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return PlantGrowth5
  return Rsh_Fir_reg_PlantGrowth5_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_hcl;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // hcl = ldf hcl
  Rsh_Fir_reg_hcl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // p7 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r17):
  //   return r17;
  // L1():
  //   c = ldf c in base;
  //   r18 = dyn c(0.0, 120.0, 240.0);
  //   goto L0(r18);
  // L2():
  //   r16 = dyn base1(0.0, 120.0, 240.0);
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r20 = dyn hcl(p7, 50.0, 70.0)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_hcl, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r20
  return Rsh_Fir_reg_r20_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r17
  return Rsh_Fir_reg_r17_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r18 = dyn c(0.0, 120.0, 240.0)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // r16 = dyn base1(0.0, 120.0, 240.0)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_PlantGrowth6_;
  SEXP Rsh_Fir_reg_PlantGrowth7_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_PlantGrowth9_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // PlantGrowth6 = ld PlantGrowth
  Rsh_Fir_reg_PlantGrowth6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // PlantGrowth7 = force? PlantGrowth6
  Rsh_Fir_reg_PlantGrowth7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_PlantGrowth6_);
  // checkMissing(PlantGrowth7)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_PlantGrowth7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(PlantGrowth7)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_PlantGrowth7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args18);
  // if c1 then L1() else L2(PlantGrowth7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(PlantGrowth7)
    Rsh_Fir_reg_PlantGrowth9_ = Rsh_Fir_reg_PlantGrowth7_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", PlantGrowth7)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_PlantGrowth7_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_PlantGrowth9_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r23 = `$`(PlantGrowth9, <sym group>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_PlantGrowth9_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args21);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r23_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner3906365631_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3906365631 dynamic dispatch ([x, y, `legend.text`, `...`])

  return Rsh_Fir_user_version_inner3906365631_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3906365631_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3906365631 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3906365631/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_legend_text;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_legend_text_isMissing;
  SEXP Rsh_Fir_reg_legend_text_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_is_factor;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_barplot;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_is_factor1_;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_legend_text1_;
  SEXP Rsh_Fir_reg_legend_text2_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_spineplot;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_reg_ddd3_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_y7_;
  SEXP Rsh_Fir_reg_y8_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_list2_;
  SEXP Rsh_Fir_reg_ddd4_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_legend_text3_;
  SEXP Rsh_Fir_reg_legend_text4_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_legend_text6_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_do_call;
  SEXP Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_y9_;
  SEXP Rsh_Fir_reg_y10_;
  SEXP Rsh_Fir_reg_is_numeric;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_boxplot;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_ddd5_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_NextMethod;
  SEXP Rsh_Fir_reg_r52_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_legend_text = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // legend_text_isMissing = missing.0(legend_text)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_legend_text;
  Rsh_Fir_reg_legend_text_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args24);
  // if legend_text_isMissing then L0(NULL) else L0(legend_text)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_legend_text_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_legend_text_orDefault = Rsh_const(CCP, 26);
    goto L0_;
  } else {
  // L0(legend_text)
    Rsh_Fir_reg_legend_text_orDefault = Rsh_Fir_reg_legend_text;
    goto L0_;
  }

L0_:;
  // st `legend.text` = legend_text_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_legend_text_orDefault, RHO);
  (void)(Rsh_Fir_reg_legend_text_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args26);
  // if c then L2(c) else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L2(c)
    Rsh_Fir_reg_c1_1 = Rsh_Fir_reg_c1;
    goto L2_;
  } else {
  // L18()
    goto L18_;
  }

L16_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r2 = dyn missing(<sym y>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L1_;

L17_:;
  // r = dyn base(<sym y>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

L2_:;
  // c6 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args29);
  // if c6 then L22() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L22()
    goto L22_;
  } else {
  // L3()
    goto L3_;
  }

L18_:;
  // is_factor = ldf `is.factor`
  Rsh_Fir_reg_is_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L19() else D0()
  // L19()
  goto L19_;

D0_:;
  // deopt 4 [c]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L3_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym3 = ldf missing
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base3 = ldf missing in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard3 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L19_:;
  // p = prom<V +>{
  //   y1 = ld y;
  //   y2 = force? y1;
  //   checkMissing(y2);
  //   return y2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3906365631_, 0, NULL, CCP, RHO);
  // r4 = dyn is_factor(p)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_factor, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L20() else D1()
  // L20()
  goto L20_;

L22_:;
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard1 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

D1_:;
  // deopt 6 [c, r4]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L4_:;
  // st dargs = r6
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // ____ = ldf `%||%`
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L27() else D4()
  // L27()
  goto L27_;

L6_:;
  // c12 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args34);
  // if c12 then L32() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L32()
    goto L32_;
  } else {
  // L7()
    goto L7_;
  }

L20_:;
  // c3 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args35);
  // c4 = `||`(c, c3)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args36);
  // goto L2(c4)
  // L2(c4)
  Rsh_Fir_reg_c1_1 = Rsh_Fir_reg_c4_;
  goto L2_;

L23_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L25() else D2()
  // L25()
  goto L25_;

L24_:;
  // r5 = dyn base1(<sym ...>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L4(r5)
  // L4(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_1;
  goto L4_;

L30_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r21 = dyn missing1(<sym y>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L6(r21)
  // L6(r21)
  Rsh_Fir_reg_r20_1 = Rsh_Fir_reg_r21_;
  goto L6_;

L31_:;
  // r19 = dyn base3(<sym y>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_r20_1 = Rsh_Fir_reg_r19_;
  goto L6_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // is_factor1 = ldf `is.factor`
  Rsh_Fir_reg_is_factor1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L36() else D8()
  // L36()
  goto L36_;

L25_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // r7 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L26() else D3()
  // L26()
  goto L26_;

L27_:;
  // p1 = prom<V +>{
  //   dargs = ld dargs;
  //   dargs1 = force? dargs;
  //   checkMissing(dargs1);
  //   c7 = `is.object`(dargs1);
  //   if c7 then L1() else L2(dargs1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", dargs1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(dargs3):
  //   r8 = `$`(dargs3, <sym axes>);
  //   goto L0(r8);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3906365631_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym2 = ldf `is.null`;
  //   base2 = ldf `is.null` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r11):
  //   r13 = `!`(r11);
  //   c10 = `as.logical`(r13);
  //   if c10 then L8() else L1();
  // L2():
  //   dargs4 = ld dargs;
  //   dargs5 = force? dargs4;
  //   checkMissing(dargs5);
  //   c8 = `is.object`(dargs5);
  //   if c8 then L5() else L6(dargs5);
  // L3():
  //   r10 = dyn base2(<lang `$`(dargs, xaxt)>);
  //   goto L0(r10);
  // L1():
  //   return TRUE;
  // L4(dx3):
  //   c9 = `==`(dx3, NULL);
  //   goto L0(c9);
  // L5():
  //   dr2 = tryDispatchBuiltin.1("$", dargs5);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L7() else L6(dr2);
  // L6(dargs7):
  //   r12 = `$`(dargs7, <sym xaxt>);
  //   goto L4(r12);
  // L8():
  //   dargs8 = ld dargs;
  //   dargs9 = force? dargs8;
  //   checkMissing(dargs9);
  //   c11 = `is.object`(dargs9);
  //   if c11 then L10() else L11(dargs9);
  // L7():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L4(dx2);
  // L9(dx5):
  //   r15 = `!=`(dx5, "n");
  //   return r15;
  // L10():
  //   dr4 = tryDispatchBuiltin.1("$", dargs9);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L12() else L11(dr4);
  // L11(dargs11):
  //   r14 = `$`(dargs11, <sym xaxt>);
  //   goto L9(r14);
  // L12():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L9(dx4);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3906365631_2, 0, NULL, CCP, RHO);
  // r17 = dyn ____(p1, p2)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L32_:;
  // barplot = ldf barplot
  Rsh_Fir_reg_barplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L33() else D6()
  // L33()
  goto L33_;

D3_:;
  // deopt 12 [r7]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 18 [r17]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L4_;

L28_:;
  // st axisnames = r17
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_r17_1, RHO);
  (void)(Rsh_Fir_reg_r17_1);
  // goto L5()
  // L5()
  goto L5_;

L33_:;
  // p4 = prom<V +>{
  //   table = ldf table;
  //   p3 = prom<V +>{
  //     x1 = ld x;
  //     x2 = force? x1;
  //     checkMissing(x2);
  //     return x2;
  //   };
  //   r23 = dyn table(p3);
  //   return r23;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3906365631_3, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   axisnames = ld axisnames;
  //   axisnames1 = force? axisnames;
  //   checkMissing(axisnames1);
  //   return axisnames1;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3906365631_5, 0, NULL, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // r26 = dyn barplot[, axisnames, `...`](p4, p5, ddd2)
  SEXP Rsh_Fir_array_args69[3];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args69[2] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_arg_names22[2] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_barplot, 3, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L34() else D7()
  // L34()
  goto L34_;

L36_:;
  // p6 = prom<V +>{
  //   y3 = ld y;
  //   y4 = force? y3;
  //   checkMissing(y4);
  //   return y4;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3906365631_6, 0, NULL, CCP, RHO);
  // r28 = dyn is_factor1(p6)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_factor1_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L37() else D9()
  // L37()
  goto L37_;

D7_:;
  // deopt 31 [r26]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 35 [r28]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L34_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r26
  return Rsh_Fir_reg_r26_;

L37_:;
  // c13 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args72);
  // if c13 then L38() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L38()
    goto L38_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // sym8 = ldf `is.numeric`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base8 = ldf `is.numeric` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard8 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L38_:;
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard4 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L9_:;
  // c15 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args75);
  // if c15 then L42() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L42()
    goto L42_;
  } else {
  // L10()
    goto L10_;
  }

L14_:;
  // c18 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args76);
  // if c18 then L70() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L70()
    goto L70_;
  } else {
  // L15()
    goto L15_;
  }

L39_:;
  // legend_text1 = ld `legend.text`
  Rsh_Fir_reg_legend_text1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L41() else D10()
  // L41()
  goto L41_;

L40_:;
  // r29 = dyn base4(<sym legend.text>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L9(r29)
  // L9(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L9_;

L66_:;
  // y9 = ld y
  Rsh_Fir_reg_y9_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L68() else D22()
  // L68()
  goto L68_;

L67_:;
  // r46 = dyn base8(<sym y>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L14(r46)
  // L14(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L14_;

D10_:;
  // deopt 37 [legend_text1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_legend_text1_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 78 [y9]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_y9_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L10_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard5 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L15_:;
  // NextMethod = ldf NextMethod
  Rsh_Fir_reg_NextMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L74() else D26()
  // L74()
  goto L74_;

L41_:;
  // legend_text2 = force? legend_text1
  Rsh_Fir_reg_legend_text2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_legend_text1_);
  // checkMissing(legend_text2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_legend_text2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // c14 = `==`(legend_text2, NULL)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_legend_text2_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args81);
  // goto L9(c14)
  // L9(c14)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_c14_;
  goto L9_;

L42_:;
  // spineplot = ldf spineplot
  Rsh_Fir_reg_spineplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L43() else D11()
  // L43()
  goto L43_;

L68_:;
  // y10 = force? y9
  Rsh_Fir_reg_y10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y9_);
  // checkMissing(y10)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_y10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r48 = dyn is_numeric(y10)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_y10_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L69() else D23()
  // L69()
  goto L69_;

L70_:;
  // boxplot = ldf boxplot
  Rsh_Fir_reg_boxplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L71() else D24()
  // L71()
  goto L71_;

D11_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 81 [r48]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 83 []
  Rsh_Fir_deopt(83, 0, NULL, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // st args = r35
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // legend_text3 = ld `legend.text`
  Rsh_Fir_reg_legend_text3_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L58() else D19()
  // L58()
  goto L58_;

L43_:;
  // p7 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3906365631_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   y5 = ld y;
  //   y6 = force? y5;
  //   checkMissing(y6);
  //   return y6;
  // }
  Rsh_Fir_reg_p8_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3906365631_8, 0, NULL, CCP, RHO);
  // ddd3 = ld `...`
  Rsh_Fir_reg_ddd3_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // r33 = dyn spineplot[, , `...`](p7, p8, ddd3)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_p8_1;
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_ddd3_;
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spineplot, 3, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L44() else D12()
  // L44()
  goto L44_;

L46_:;
  // sym6 = ldf list
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base6 = ldf list in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard6 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L47_:;
  // r34 = dyn base5(<lang list(x=x, y=y)>, <lang list(...)>)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L11(r34)
  // L11(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L11_;

L69_:;
  // goto L14(r48)
  // L14(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L14_;

L71_:;
  // p10 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r49 = dyn __(<sym y>, <sym x>);
  //   return r49;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3906365631_9, 0, NULL, CCP, RHO);
  // ddd5 = ld `...`
  Rsh_Fir_reg_ddd5_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // r51 = dyn boxplot[, `...`](p10, ddd5)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_ddd5_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_boxplot, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L72() else D25()
  // L72()
  goto L72_;

L74_:;
  // r52 = dyn NextMethod("plot")
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NextMethod, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L75() else D27()
  // L75()
  goto L75_;

D12_:;
  // deopt 45 [r33]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 66 [legend_text3]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_legend_text3_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 86 [r51]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 90 [r52]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L12_:;
  // sym7 = ldf list
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base7 = ldf list in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args92);
  // if guard7 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L44_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r33
  return Rsh_Fir_reg_r33_;

L48_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L50() else D13()
  // L50()
  goto L50_;

L49_:;
  // r36 = dyn base6[x, y](<sym x>, <sym y>)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names32[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L12(r36)
  // L12(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L12_;

L58_:;
  // legend_text4 = force? legend_text3
  Rsh_Fir_reg_legend_text4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_legend_text3_);
  // checkMissing(legend_text4)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_legend_text4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // l = ld args
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // c17 = `is.object`(l)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args95);
  // if c17 then L60() else L61(legend_text4, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L60()
    goto L60_;
  } else {
  // L61(legend_text4, l)
    Rsh_Fir_reg_legend_text6_ = Rsh_Fir_reg_legend_text4_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L61_;
  }

L72_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r51
  return Rsh_Fir_reg_r51_;

L75_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r52
  return Rsh_Fir_reg_r52_;

D13_:;
  // deopt 50 [x5]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L13_:;
  // c16 = ldf c in base
  Rsh_Fir_reg_c16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r42 = dyn c16(r37, r40)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c16_, 2, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L57() else D18()
  // L57()
  goto L57_;

L50_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // y7 = ld y
  Rsh_Fir_reg_y7_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L51() else D14()
  // L51()
  goto L51_;

L53_:;
  // list2 = ldf list
  Rsh_Fir_reg_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L55() else D16()
  // L55()
  goto L55_;

L54_:;
  // r39 = dyn base7(<sym ...>)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L13(r39)
  // L13(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L13_;

L59_:;
  // st args = dx7
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // do_call = ldf `do.call`
  Rsh_Fir_reg_do_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L63() else D20()
  // L63()
  goto L63_;

L60_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l, legend_text4)
  SEXP Rsh_Fir_array_args99[3];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args99[2] = Rsh_Fir_reg_legend_text4_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args99);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if dc3 then L62() else L61(legend_text4, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L62()
    goto L62_;
  } else {
  // L61(legend_text4, dr6)
    Rsh_Fir_reg_legend_text6_ = Rsh_Fir_reg_legend_text4_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr6_;
    goto L61_;
  }

L61_:;
  // r43 = `$<-`(l2, <sym yaxlabels>, legend_text4)
  SEXP Rsh_Fir_array_args101[3];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args101[2] = Rsh_Fir_reg_legend_text4_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args101);
  // goto L59(r43)
  // L59(r43)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r43_;
  goto L59_;

D14_:;
  // deopt 53 [y7]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_y7_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 64 [r42]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // y8 = force? y7
  Rsh_Fir_reg_y8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y7_);
  // checkMissing(y8)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_y8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r38 = dyn list1(x6, y8)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_y8_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L52() else D15()
  // L52()
  goto L52_;

L55_:;
  // ddd4 = ld `...`
  Rsh_Fir_reg_ddd4_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // r41 = dyn list2[`...`](ddd4)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_ddd4_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L56() else D17()
  // L56()
  goto L56_;

L57_:;
  // goto L11(r42)
  // L11(r42)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r42_;
  goto L11_;

L62_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // goto L59(dx6)
  // L59(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L59_;

L63_:;
  // p9 = prom<V +>{
  //   args = ld args;
  //   args1 = force? args;
  //   checkMissing(args1);
  //   return args1;
  // }
  Rsh_Fir_reg_p9_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3906365631_10, 0, NULL, CCP, RHO);
  // r45 = dyn do_call("spineplot", p9)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_call, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L64() else D21()
  // L64()
  goto L64_;

D15_:;
  // deopt 57 [r38]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 62 [r41]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 75 [r45]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L12(r38)
  // L12(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L12_;

L56_:;
  // goto L13(r41)
  // L13(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L13_;

L64_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r45
  return Rsh_Fir_reg_r45_;
}
SEXP Rsh_Fir_user_promise_inner3906365631_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_y2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3906365631/0: expected 0, got %d", NCAPTURES);

  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return y2
  return Rsh_Fir_reg_y2_;
}
SEXP Rsh_Fir_user_promise_inner3906365631_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dargs;
  SEXP Rsh_Fir_reg_dargs1_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_dargs3_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_r8_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3906365631/0: expected 0, got %d", NCAPTURES);

  // dargs = ld dargs
  Rsh_Fir_reg_dargs = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // dargs1 = force? dargs
  Rsh_Fir_reg_dargs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dargs);
  // checkMissing(dargs1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dargs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(dargs1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dargs1_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args42);
  // if c7 then L1() else L2(dargs1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L1()
    goto L1_;
  } else {
  // L2(dargs1)
    Rsh_Fir_reg_dargs3_ = Rsh_Fir_reg_dargs1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L1_:;
  // dr = tryDispatchBuiltin.1("$", dargs1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_dargs1_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_dargs3_ = Rsh_Fir_reg_dr1;
    goto L2_;
  }

L2_:;
  // r8 = `$`(dargs3, <sym axes>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dargs3_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args45);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r8_1;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3906365631_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_dargs4_;
  SEXP Rsh_Fir_reg_dargs5_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_dargs7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_dargs8_;
  SEXP Rsh_Fir_reg_dargs9_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_dargs11_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3906365631/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // r13 = `!`(r11)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args48);
  // c10 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args49);
  // if c10 then L8() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L8()
    goto L8_;
  } else {
  // L1()
    goto L1_;
  }

L2_:;
  // dargs4 = ld dargs
  Rsh_Fir_reg_dargs4_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // dargs5 = force? dargs4
  Rsh_Fir_reg_dargs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dargs4_);
  // checkMissing(dargs5)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dargs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(dargs5)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dargs5_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args51);
  // if c8 then L5() else L6(dargs5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dargs5)
    Rsh_Fir_reg_dargs7_ = Rsh_Fir_reg_dargs5_;
    goto L6_;
  }

L3_:;
  // r10 = dyn base2(<lang `$`(dargs, xaxt)>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L0_;

L1_:;
  // return TRUE
  return Rsh_const(CCP, 36);

L4_:;
  // c9 = `==`(dx3, NULL)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args53);
  // goto L0(c9)
  // L0(c9)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_c9_;
  goto L0_;

L5_:;
  // dr2 = tryDispatchBuiltin.1("$", dargs5)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_dargs5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args54);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc1 then L7() else L6(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr2)
    Rsh_Fir_reg_dargs7_ = Rsh_Fir_reg_dr2_;
    goto L6_;
  }

L6_:;
  // r12 = `$`(dargs7, <sym xaxt>)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dargs7_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args56);
  // goto L4(r12)
  // L4(r12)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r12_1;
  goto L4_;

L8_:;
  // dargs8 = ld dargs
  Rsh_Fir_reg_dargs8_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // dargs9 = force? dargs8
  Rsh_Fir_reg_dargs9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dargs8_);
  // checkMissing(dargs9)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dargs9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(dargs9)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dargs9_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args58);
  // if c11 then L10() else L11(dargs9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L10()
    goto L10_;
  } else {
  // L11(dargs9)
    Rsh_Fir_reg_dargs11_ = Rsh_Fir_reg_dargs9_;
    goto L11_;
  }

L7_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L4(dx2)
  // L4(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

L9_:;
  // r15 = `!=`(dx5, "n")
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args60);
  // return r15
  return Rsh_Fir_reg_r15_;

L10_:;
  // dr4 = tryDispatchBuiltin.1("$", dargs9)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_dargs9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc2 then L12() else L11(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr4)
    Rsh_Fir_reg_dargs11_ = Rsh_Fir_reg_dr4_;
    goto L11_;
  }

L11_:;
  // r14 = `$`(dargs11, <sym xaxt>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dargs11_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args63);
  // goto L9(r14)
  // L9(r14)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r14_;
  goto L9_;

L12_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L9(dx4)
  // L9(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L9_;
}
SEXP Rsh_Fir_user_promise_inner3906365631_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_table;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r23_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3906365631/0: expected 0, got %d", NCAPTURES);

  // table = ldf table
  Rsh_Fir_reg_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // p3 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3906365631_4, 0, NULL, CCP, RHO);
  // r23 = dyn table(p3)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_table, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names21, CCP, RHO);
  // return r23
  return Rsh_Fir_reg_r23_1;
}
SEXP Rsh_Fir_user_promise_inner3906365631_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3906365631/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner3906365631_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_axisnames;
  SEXP Rsh_Fir_reg_axisnames1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3906365631/0: expected 0, got %d", NCAPTURES);

  // axisnames = ld axisnames
  Rsh_Fir_reg_axisnames = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // axisnames1 = force? axisnames
  Rsh_Fir_reg_axisnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_axisnames);
  // checkMissing(axisnames1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_axisnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return axisnames1
  return Rsh_Fir_reg_axisnames1_;
}
SEXP Rsh_Fir_user_promise_inner3906365631_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_reg_y4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3906365631/0: expected 0, got %d", NCAPTURES);

  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return y4
  return Rsh_Fir_reg_y4_;
}
SEXP Rsh_Fir_user_promise_inner3906365631_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3906365631/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner3906365631_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y5_;
  SEXP Rsh_Fir_reg_y6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3906365631/0: expected 0, got %d", NCAPTURES);

  // y5 = ld y
  Rsh_Fir_reg_y5_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // y6 = force? y5
  Rsh_Fir_reg_y6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y5_);
  // checkMissing(y6)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_y6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return y6
  return Rsh_Fir_reg_y6_;
}
SEXP Rsh_Fir_user_promise_inner3906365631_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r49_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3906365631/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r49 = dyn __(<sym y>, <sym x>)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names29, CCP, RHO);
  // return r49
  return Rsh_Fir_reg_r49_;
}
SEXP Rsh_Fir_user_promise_inner3906365631_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_args;
  SEXP Rsh_Fir_reg_args1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3906365631/0: expected 0, got %d", NCAPTURES);

  // args = ld args
  Rsh_Fir_reg_args = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // args1 = force? args
  Rsh_Fir_reg_args1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args);
  // checkMissing(args1)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_args1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // return args1
  return Rsh_Fir_reg_args1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
