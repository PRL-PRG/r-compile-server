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
SEXP Rsh_Fir_user_function_inner1282345132_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1282345132_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1282345132_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1282345132_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1282345132_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1282345132_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1282345132_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1282345132_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_lines;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_lines1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_legend;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r25_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1282345132
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1282345132_, RHO, CCP);
  // st lowess = r
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

L3_:;
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
  // check L4() else D1()
  // L4()
  goto L4_;

L5_:;
  // p1 = prom<V +>{
  //   cars = ld cars;
  //   cars1 = force? cars;
  //   checkMissing(cars1);
  //   return cars1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r6 = dyn plot[, main](p1, "lowess(cars)")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
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
  // deopt 13 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0()
  // L0()
  goto L0_;

L6_:;
  // lines = ldf lines
  Rsh_Fir_reg_lines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p3 = prom<V +>{
  //   lowess = ldf lowess;
  //   p2 = prom<V +>{
  //     cars2 = ld cars;
  //     cars3 = force? cars2;
  //     checkMissing(cars3);
  //     return cars3;
  //   };
  //   r8 = dyn lowess(p2);
  //   return r8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r10 = dyn lines[, col](p3, 2.0)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lines, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 19 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // lines1 = ldf lines
  Rsh_Fir_reg_lines1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p5 = prom<V +>{
  //   lowess1 = ldf lowess;
  //   p4 = prom<V +>{
  //     cars4 = ld cars;
  //     cars5 = force? cars4;
  //     checkMissing(cars5);
  //     return cars5;
  //   };
  //   r12 = dyn lowess1[, f](p4, 0.2);
  //   return r12;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r14 = dyn lines1[, col](p5, 3.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lines1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 25 [r14]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // legend = ldf legend
  Rsh_Fir_reg_legend = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p7 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r16):
  //   return r16;
  // L1():
  //   paste = ldf paste;
  //   p6 = prom<V +>{
  //     sym2 = ldf c;
  //     base2 = ldf c in base;
  //     guard2 = `==`.4(sym2, base2);
  //     if guard2 then L1() else L2();
  //   L0(r18):
  //     return r18;
  //   L1():
  //     c = ldf c in base;
  //     r19 = dyn c("2/3", ".2");
  //     goto L0(r19);
  //   L2():
  //     r17 = dyn base2("2/3", ".2");
  //     goto L0(r17);
  //   };
  //   r21 = dyn paste("f = ", p6);
  //   c1 = ldf c in base;
  //   r22 = dyn c1(r21);
  //   goto L0(r22);
  // L2():
  //   r15 = dyn base1(<lang paste("f = ", c("2/3", ".2"))>);
  //   goto L0(r15);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   return <int 2, 3>;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r25 = dyn legend[, , , lty, col](5.0, 120.0, p7, 1.0, p8)
  SEXP Rsh_Fir_array_args19[5];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args19[4] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names12[5];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names12[4] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_legend, 5, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names12, CCP, RHO);
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
  SEXP Rsh_Fir_reg_lowess;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lowess = ldf lowess
  Rsh_Fir_reg_lowess = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p2 = prom<V +>{
  //   cars2 = ld cars;
  //   cars3 = force? cars2;
  //   checkMissing(cars3);
  //   return cars3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r8 = dyn lowess(p2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lowess, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
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
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lowess1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lowess1 = ldf lowess
  Rsh_Fir_reg_lowess1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p4 = prom<V +>{
  //   cars4 = ld cars;
  //   cars5 = force? cars4;
  //   checkMissing(cars5);
  //   return cars5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r12 = dyn lowess1[, f](p4, 0.2)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lowess1_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cars4_;
  SEXP Rsh_Fir_reg_cars5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cars4 = ld cars
  Rsh_Fir_reg_cars4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // cars5 = force? cars4
  Rsh_Fir_reg_cars5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cars4_);
  // checkMissing(cars5)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_cars5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return cars5
  return Rsh_Fir_reg_cars5_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
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
  // return r16
  return Rsh_Fir_reg_r16_;

L1_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // p6 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r18):
  //   return r18;
  // L1():
  //   c = ldf c in base;
  //   r19 = dyn c("2/3", ".2");
  //   goto L0(r19);
  // L2():
  //   r17 = dyn base2("2/3", ".2");
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r21 = dyn paste("f = ", p6)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r22 = dyn c1(r21)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // r15 = dyn base1(<lang paste("f = ", c("2/3", ".2"))>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r18
  return Rsh_Fir_reg_r18_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r19 = dyn c("2/3", ".2")
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r17 = dyn base2("2/3", ".2")
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 2, 3>
  return Rsh_const(CCP, 20);
}
SEXP Rsh_Fir_user_function_inner1282345132_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1282345132 dynamic dispatch ([x, y, f, iter, delta])

  return Rsh_Fir_user_version_inner1282345132_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1282345132_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1282345132 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1282345132/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_iter;
  SEXP Rsh_Fir_reg_delta;
  SEXP Rsh_Fir_reg_y_isMissing;
  SEXP Rsh_Fir_reg_y_orDefault;
  SEXP Rsh_Fir_reg_f_isMissing;
  SEXP Rsh_Fir_reg_f_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_iter_isMissing;
  SEXP Rsh_Fir_reg_iter_orDefault;
  SEXP Rsh_Fir_reg_delta_isMissing;
  SEXP Rsh_Fir_reg_delta_orDefault;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_xy_coords;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_order;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_xy4_;
  SEXP Rsh_Fir_reg_xy5_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_xy7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_o;
  SEXP Rsh_Fir_reg_o1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_as_double;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_C_lowess;
  SEXP Rsh_Fir_reg_C_lowess1_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_C_lowess4_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_xy8_;
  SEXP Rsh_Fir_reg_xy9_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_C_lowess6_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_xy11_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_C_lowess8_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_C_lowess10_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_C_lowess12_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_o2_;
  SEXP Rsh_Fir_reg_o3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_as_double1_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_reg_iter1_;
  SEXP Rsh_Fir_reg_iter2_;
  SEXP Rsh_Fir_reg_delta1_;
  SEXP Rsh_Fir_reg_delta2_;
  SEXP Rsh_Fir_reg_vargs;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r29_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_f = PARAMS[2];
  Rsh_Fir_reg_iter = PARAMS[3];
  Rsh_Fir_reg_delta = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // y_isMissing = missing.0(y)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_y;
  Rsh_Fir_reg_y_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args20);
  // if y_isMissing then L0(NULL) else L0(y)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_y_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_y_orDefault = Rsh_const(CCP, 26);
    goto L0_;
  } else {
  // L0(y)
    Rsh_Fir_reg_y_orDefault = Rsh_Fir_reg_y;
    goto L0_;
  }

L0_:;
  // st y = y_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_y_orDefault, RHO);
  (void)(Rsh_Fir_reg_y_orDefault);
  // f_isMissing = missing.0(f)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_f;
  Rsh_Fir_reg_f_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args21);
  // if f_isMissing then L1() else L2(f)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_f_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(f)
    Rsh_Fir_reg_f_orDefault = Rsh_Fir_reg_f;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   return 0.6666666666666666;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1282345132_, 0, NULL, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_f_orDefault = Rsh_Fir_reg_p1;
  goto L2_;

L2_:;
  // st f = f_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_f_orDefault, RHO);
  (void)(Rsh_Fir_reg_f_orDefault);
  // iter_isMissing = missing.0(iter)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_iter;
  Rsh_Fir_reg_iter_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args22);
  // if iter_isMissing then L3(3) else L3(iter)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_iter_isMissing)) {
  // L3(3)
    Rsh_Fir_reg_iter_orDefault = Rsh_const(CCP, 29);
    goto L3_;
  } else {
  // L3(iter)
    Rsh_Fir_reg_iter_orDefault = Rsh_Fir_reg_iter;
    goto L3_;
  }

L3_:;
  // st iter = iter_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_iter_orDefault, RHO);
  (void)(Rsh_Fir_reg_iter_orDefault);
  // delta_isMissing = missing.0(delta)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_delta;
  Rsh_Fir_reg_delta_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args23);
  // if delta_isMissing then L4() else L5(delta)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_delta_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(delta)
    Rsh_Fir_reg_delta_orDefault = Rsh_Fir_reg_delta;
    goto L5_;
  }

L4_:;
  // p2 = prom<V +>{
  //   diff = ldf diff;
  //   p1 = prom<V +>{
  //     sym = ldf range;
  //     base = ldf range in base;
  //     guard = `==`.4(sym, base);
  //     if guard then L1() else L2();
  //   L0(r2):
  //     return r2;
  //   L1():
  //     x1 = ld x;
  //     x2 = force? x1;
  //     checkMissing(x2);
  //     range = ldf range in base;
  //     r3 = dyn range(x2);
  //     goto L0(r3);
  //   L2():
  //     r1 = dyn base(<sym x>);
  //     goto L0(r1);
  //   };
  //   r5 = dyn diff(p1);
  //   r6 = `*`(0.01, r5);
  //   return r6;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1282345132_1, 0, NULL, CCP, RHO);
  // goto L5(p2)
  // L5(p2)
  Rsh_Fir_reg_delta_orDefault = Rsh_Fir_reg_p2_1;
  goto L5_;

L5_:;
  // st delta = delta_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_delta_orDefault, RHO);
  (void)(Rsh_Fir_reg_delta_orDefault);
  // xy_coords = ldf `xy.coords`
  Rsh_Fir_reg_xy_coords = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p3 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1282345132_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   y1 = ld y;
  //   y2 = force? y1;
  //   checkMissing(y2);
  //   return y2;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1282345132_4, 0, NULL, CCP, RHO);
  // r10 = dyn xy_coords[, , setLab](p3, p4, FALSE)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_xy_coords, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

D1_:;
  // deopt 6 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // st xy = r10
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r10_1, RHO);
  (void)(Rsh_Fir_reg_r10_1);
  // order = ldf order
  Rsh_Fir_reg_order = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p5 = prom<V +>{
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
  //   r11 = `$`(xy3, <sym x>);
  //   goto L0(r11);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1282345132_5, 0, NULL, CCP, RHO);
  // r13 = dyn order(p5)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_order, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

D3_:;
  // deopt 11 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // st o = r13
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym1 = ldf `as.double`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base1 = ldf `as.double` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L6_:;
  // st x = r15
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r15_1, RHO);
  (void)(Rsh_Fir_reg_r15_1);
  // sym2 = ldf list
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard2 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L16_:;
  // xy4 = ld xy
  Rsh_Fir_reg_xy4_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

L17_:;
  // r14 = dyn base1(<lang `[`(`$`(xy, x), o)>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L6(r14)
  // L6(r14)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r14_1;
  goto L6_;

D4_:;
  // deopt 15 [xy4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_xy4_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r20
  return Rsh_Fir_reg_r20_;

L18_:;
  // xy5 = force? xy4
  Rsh_Fir_reg_xy5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy4_);
  // checkMissing(xy5)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_xy5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(xy5)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_xy5_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args44);
  // if c1 then L20() else L21(xy5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L20()
    goto L20_;
  } else {
  // L21(xy5)
    Rsh_Fir_reg_xy7_ = Rsh_Fir_reg_xy5_;
    goto L21_;
  }

L28_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

L29_:;
  // r19 = dyn base2[x, y](<sym x>, <lang .Call(C_lowess, x, as.double(`[`(`$`(xy, y), o)), f, iter, delta)>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L8(r19)
  // L8(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_1;
  goto L8_;

D7_:;
  // deopt 26 [x5]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // c2 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args46);
  // if c2 then L23() else L24(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L23()
    goto L23_;
  } else {
  // L24(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L24_;
  }

L20_:;
  // dr2 = tryDispatchBuiltin.1("$", xy5)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_xy5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc1 then L22() else L21(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L22()
    goto L22_;
  } else {
  // L21(dr2)
    Rsh_Fir_reg_xy7_ = Rsh_Fir_reg_dr2_;
    goto L21_;
  }

L21_:;
  // r16 = `$`(xy7, <sym x>)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_xy7_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args49);
  // goto L19(r16)
  // L19(r16)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r16_1;
  goto L19_;

L30_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // sym3 = ldf `.Call`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base3 = ldf `.Call` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard3 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L7_:;
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r18 = dyn as_double(dx7)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L27() else D6()
  // L27()
  goto L27_;

L9_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r29 = dyn list(x6, r22)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L50() else D16()
  // L50()
  goto L50_;

L22_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L19(dx2)
  // L19(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L19_;

L23_:;
  // dr4 = tryDispatchBuiltin.1("[", dx3)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc2 then L25() else L24(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L25()
    goto L25_;
  } else {
  // L24(dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L24_;
  }

L24_:;
  // o = ld o
  Rsh_Fir_reg_o = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L31_:;
  // C_lowess = ld C_lowess
  Rsh_Fir_reg_C_lowess = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L33() else D8()
  // L33()
  goto L33_;

L32_:;
  // r21 = dyn base3(<sym C_lowess>, <sym x>, <lang as.double(`[`(`$`(xy, y), o))>, <sym f>, <sym iter>, <sym delta>)
  SEXP Rsh_Fir_array_args57[6];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args57[2] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args57[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args57[4] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args57[5] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names22[6];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_array_arg_names22[4] = R_MissingArg;
  Rsh_Fir_array_arg_names22[5] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 6, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L9(r21)
  // L9(r21)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r21_1;
  goto L9_;

D5_:;
  // deopt 18 [dx5, o]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_o;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 22 [r18]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 30 [C_lowess]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_C_lowess;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 48 [r29]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L25_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L7(dx6)
  // L7(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L7_;

L26_:;
  // o1 = force? o
  Rsh_Fir_reg_o1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_o);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r17 = dyn __(dx5, o1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_o1_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L7(r17)
  // L7(r17)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r17_1;
  goto L7_;

L27_:;
  // goto L6(r18)
  // L6(r18)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r18_1;
  goto L6_;

L33_:;
  // C_lowess1 = force? C_lowess
  Rsh_Fir_reg_C_lowess1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_lowess);
  // checkMissing(C_lowess1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_C_lowess1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L34() else D9()
  // L34()
  goto L34_;

L50_:;
  // goto L8(r29)
  // L8(r29)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r29_;
  goto L8_;

D9_:;
  // deopt 31 [C_lowess1, x7]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_C_lowess1_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L34_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // sym4 = ldf `as.double`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base4 = ldf `as.double` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard4 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L10_:;
  // f1 = ld f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L47() else D13()
  // L47()
  goto L47_;

L35_:;
  // xy8 = ld xy
  Rsh_Fir_reg_xy8_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

L36_:;
  // r23 = dyn base4(<lang `[`(`$`(xy, y), o)>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L10(C_lowess1, x8, r23)
  // L10(C_lowess1, x8, r23)
  Rsh_Fir_reg_C_lowess4_ = Rsh_Fir_reg_C_lowess1_;
  Rsh_Fir_reg_x11_ = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L10_;

D10_:;
  // deopt 34 [C_lowess1, x8, xy8]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_C_lowess1_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_xy8_;
  Rsh_Fir_deopt(34, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 41 [C_lowess4, x11, r24, f1]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_C_lowess4_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_x11_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_f1_;
  Rsh_Fir_deopt(41, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L37_:;
  // xy9 = force? xy8
  Rsh_Fir_reg_xy9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy8_);
  // checkMissing(xy9)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_xy9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(xy9)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_xy9_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args65);
  // if c3 then L39() else L40(C_lowess1, x8, xy9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L39()
    goto L39_;
  } else {
  // L40(C_lowess1, x8, xy9)
    Rsh_Fir_reg_C_lowess6_ = Rsh_Fir_reg_C_lowess1_;
    Rsh_Fir_reg_x13_ = Rsh_Fir_reg_x8_;
    Rsh_Fir_reg_xy11_ = Rsh_Fir_reg_xy9_;
    goto L40_;
  }

L47_:;
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // iter1 = ld iter
  Rsh_Fir_reg_iter1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L48() else D14()
  // L48()
  goto L48_;

D14_:;
  // deopt 42 [C_lowess4, x11, r24, f2, iter1]
  SEXP Rsh_Fir_array_deopt_stack16[5];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_C_lowess4_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_x11_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack16[3] = Rsh_Fir_reg_f2_;
  Rsh_Fir_array_deopt_stack16[4] = Rsh_Fir_reg_iter1_;
  Rsh_Fir_deopt(42, 5, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L38_:;
  // c4 = `is.object`(dx9)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args67);
  // if c4 then L42() else L43(C_lowess8, x15, dx9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L42()
    goto L42_;
  } else {
  // L43(C_lowess8, x15, dx9)
    Rsh_Fir_reg_C_lowess10_ = Rsh_Fir_reg_C_lowess8_;
    Rsh_Fir_reg_x17_ = Rsh_Fir_reg_x15_;
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    goto L43_;
  }

L39_:;
  // dr6 = tryDispatchBuiltin.1("$", xy9)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_xy9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args68);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if dc3 then L41() else L40(C_lowess1, x8, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L41()
    goto L41_;
  } else {
  // L40(C_lowess1, x8, dr6)
    Rsh_Fir_reg_C_lowess6_ = Rsh_Fir_reg_C_lowess1_;
    Rsh_Fir_reg_x13_ = Rsh_Fir_reg_x8_;
    Rsh_Fir_reg_xy11_ = Rsh_Fir_reg_dr6_;
    goto L40_;
  }

L40_:;
  // r25 = `$`(xy11, <sym y>)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_xy11_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r25_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args70);
  // goto L38(C_lowess6, x13, r25)
  // L38(C_lowess6, x13, r25)
  Rsh_Fir_reg_C_lowess8_ = Rsh_Fir_reg_C_lowess6_;
  Rsh_Fir_reg_x15_ = Rsh_Fir_reg_x13_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r25_1;
  goto L38_;

L48_:;
  // iter2 = force? iter1
  Rsh_Fir_reg_iter2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iter1_);
  // checkMissing(iter2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_iter2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // delta1 = ld delta
  Rsh_Fir_reg_delta1_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L49() else D15()
  // L49()
  goto L49_;

D15_:;
  // deopt 43 [C_lowess4, x11, r24, f2, iter2, delta1]
  SEXP Rsh_Fir_array_deopt_stack17[6];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_C_lowess4_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_x11_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_f2_;
  Rsh_Fir_array_deopt_stack17[4] = Rsh_Fir_reg_iter2_;
  Rsh_Fir_array_deopt_stack17[5] = Rsh_Fir_reg_delta1_;
  Rsh_Fir_deopt(43, 6, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L11_:;
  // as_double1 = ldf `as.double` in base
  Rsh_Fir_reg_as_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r27 = dyn as_double1(dx13)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double1_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L46() else D12()
  // L46()
  goto L46_;

L41_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L38(C_lowess1, x8, dx8)
  // L38(C_lowess1, x8, dx8)
  Rsh_Fir_reg_C_lowess8_ = Rsh_Fir_reg_C_lowess1_;
  Rsh_Fir_reg_x15_ = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L38_;

L42_:;
  // dr8 = tryDispatchBuiltin.1("[", dx9)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc4 then L44() else L43(C_lowess8, x15, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L44()
    goto L44_;
  } else {
  // L43(C_lowess8, x15, dr8)
    Rsh_Fir_reg_C_lowess10_ = Rsh_Fir_reg_C_lowess8_;
    Rsh_Fir_reg_x17_ = Rsh_Fir_reg_x15_;
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dr8_;
    goto L43_;
  }

L43_:;
  // o2 = ld o
  Rsh_Fir_reg_o2_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L45() else D11()
  // L45()
  goto L45_;

L49_:;
  // delta2 = force? delta1
  Rsh_Fir_reg_delta2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_delta1_);
  // checkMissing(delta2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_delta2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // vargs = dots[x11, r24, f2, iter2, delta2]
  SEXP Rsh_Fir_array_vector_values[5];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_f2_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_iter2_;
  Rsh_Fir_array_vector_values[4] = Rsh_Fir_reg_delta2_;
  SEXP Rsh_Fir_array_vector_names[5];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_array_vector_names[4] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 5, Rsh_Fir_array_vector_values, NULL);
  // r28 = `.Call`(C_lowess4, vargs, <missing>)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_C_lowess4_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args77[2] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(438, RHO, 3, Rsh_Fir_array_args77);
  // goto L9(r28)
  // L9(r28)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r28_;
  goto L9_;

D11_:;
  // deopt 37 [C_lowess10, x17, dx11, o2]
  SEXP Rsh_Fir_array_deopt_stack18[4];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_C_lowess10_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_x17_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_o2_;
  Rsh_Fir_deopt(37, 4, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 41 [C_lowess12, x19, r27]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_C_lowess12_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_x19_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L44_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L11(C_lowess8, x15, dx12)
  // L11(C_lowess8, x15, dx12)
  Rsh_Fir_reg_C_lowess12_ = Rsh_Fir_reg_C_lowess8_;
  Rsh_Fir_reg_x19_ = Rsh_Fir_reg_x15_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L11_;

L45_:;
  // o3 = force? o2
  Rsh_Fir_reg_o3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_o2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r26 = dyn __1(dx11, o3)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_o3_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L11(C_lowess10, x17, r26)
  // L11(C_lowess10, x17, r26)
  Rsh_Fir_reg_C_lowess12_ = Rsh_Fir_reg_C_lowess10_;
  Rsh_Fir_reg_x19_ = Rsh_Fir_reg_x17_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r26_;
  goto L11_;

L46_:;
  // goto L10(C_lowess12, x19, r27)
  // L10(C_lowess12, x19, r27)
  Rsh_Fir_reg_C_lowess4_ = Rsh_Fir_reg_C_lowess12_;
  Rsh_Fir_reg_x11_ = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r27_;
  goto L10_;
}
SEXP Rsh_Fir_user_promise_inner1282345132_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1282345132/0: expected 0, got %d", NCAPTURES);

  // return 0.6666666666666666
  return Rsh_const(CCP, 28);
}
SEXP Rsh_Fir_user_promise_inner1282345132_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_diff;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1282345132/0: expected 0, got %d", NCAPTURES);

  // diff = ldf diff
  Rsh_Fir_reg_diff = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // p1 = prom<V +>{
  //   sym = ldf range;
  //   base = ldf range in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   range = ldf range in base;
  //   r3 = dyn range(x2);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(<sym x>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1282345132_2, 0, NULL, CCP, RHO);
  // r5 = dyn diff(p1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diff, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names15, CCP, RHO);
  // r6 = `*`(0.01, r5)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args29);
  // return r6
  return Rsh_Fir_reg_r6_1;
}
SEXP Rsh_Fir_user_promise_inner1282345132_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_range;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1282345132/0: expected 0, got %d", NCAPTURES);

  // sym = ldf range
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base = ldf range in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
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
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // range = ldf range in base
  Rsh_Fir_reg_range = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r3 = dyn range(x2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_range, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1282345132_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1282345132/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner1282345132_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_y2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1282345132/0: expected 0, got %d", NCAPTURES);

  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return y2
  return Rsh_Fir_reg_y2_;
}
SEXP Rsh_Fir_user_promise_inner1282345132_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xy;
  SEXP Rsh_Fir_reg_xy1_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_xy3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1282345132/0: expected 0, got %d", NCAPTURES);

  // xy = ld xy
  Rsh_Fir_reg_xy = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // xy1 = force? xy
  Rsh_Fir_reg_xy1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy);
  // checkMissing(xy1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_xy1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c = `is.object`(xy1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_xy1_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args34);
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
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", xy1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_xy1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_xy3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r11 = `$`(xy3, <sym x>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_xy3_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args37);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
