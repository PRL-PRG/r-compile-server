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
SEXP Rsh_Fir_user_function_inner2605600262_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2605600262_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2605600262_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2605600262_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2605600262_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2605600262_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2605600262_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2605600262_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2605600262_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2605600262_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2605600262_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2605600262_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_with;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r22_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2605600262
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2605600262_, RHO, CCP);
  // st supsmu = r
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
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // sym1 = ldf with
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf with in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L2_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r1 = dyn base(<sym graphics>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;

L4_:;
  // p = prom<V +>{
  //   graphics = ld graphics;
  //   graphics1 = force? graphics;
  //   checkMissing(graphics1);
  //   return graphics1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn require(p)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

L6_:;
  // with = ldf with
  Rsh_Fir_reg_with = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L7_:;
  // r5 = dyn base1(<sym cars>, <lang {
  //   plot(speed, dist);
  //   lines(supsmu(speed, dist));
  //   lines(supsmu(speed, dist, bass=7.0), lty=2.0)
  // }>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L1_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L0()
  // L0()
  goto L0_;

L8_:;
  // p1 = prom<V +>{
  //   cars = ld cars;
  //   cars1 = force? cars;
  //   checkMissing(cars1);
  //   return cars1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   plot = ldf plot;
  //   p2 = prom<V +>{
  //     speed = ld speed;
  //     speed1 = force? speed;
  //     checkMissing(speed1);
  //     return speed1;
  //   };
  //   p3 = prom<V +>{
  //     dist = ld dist;
  //     dist1 = force? dist;
  //     checkMissing(dist1);
  //     return dist1;
  //   };
  //   dyn plot(p2, p3);
  //   lines = ldf lines;
  //   p6 = prom<V +>{
  //     supsmu = ldf supsmu;
  //     p4 = prom<V +>{
  //       speed2 = ld speed;
  //       speed3 = force? speed2;
  //       checkMissing(speed3);
  //       return speed3;
  //     };
  //     p5 = prom<V +>{
  //       dist2 = ld dist;
  //       dist3 = force? dist2;
  //       checkMissing(dist3);
  //       return dist3;
  //     };
  //     r13 = dyn supsmu(p4, p5);
  //     return r13;
  //   };
  //   dyn lines(p6);
  //   lines1 = ldf lines;
  //   p9 = prom<V +>{
  //     supsmu1 = ldf supsmu;
  //     p7 = prom<V +>{
  //       speed4 = ld speed;
  //       speed5 = force? speed4;
  //       checkMissing(speed5);
  //       return speed5;
  //     };
  //     p8 = prom<V +>{
  //       dist4 = ld dist;
  //       dist5 = force? dist4;
  //       checkMissing(dist5);
  //       return dist5;
  //     };
  //     r18 = dyn supsmu1[, , bass](p7, p8, 7.0);
  //     return r18;
  //   };
  //   r20 = dyn lines1[, lty](p9, 2.0);
  //   return r20;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r22 = dyn with(p1, p10)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_with, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 13 [r22]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L1(r22)
  // L1(r22)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r22_;
  goto L1_;
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
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_graphics1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
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
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_cars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return cars1
  return Rsh_Fir_reg_cars1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_lines;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_lines1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // p2 = prom<V +>{
  //   speed = ld speed;
  //   speed1 = force? speed;
  //   checkMissing(speed1);
  //   return speed1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   dist = ld dist;
  //   dist1 = force? dist;
  //   checkMissing(dist1);
  //   return dist1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // dyn plot(p2, p3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  (void)(Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO));
  // lines = ldf lines
  Rsh_Fir_reg_lines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // p6 = prom<V +>{
  //   supsmu = ldf supsmu;
  //   p4 = prom<V +>{
  //     speed2 = ld speed;
  //     speed3 = force? speed2;
  //     checkMissing(speed3);
  //     return speed3;
  //   };
  //   p5 = prom<V +>{
  //     dist2 = ld dist;
  //     dist3 = force? dist2;
  //     checkMissing(dist3);
  //     return dist3;
  //   };
  //   r13 = dyn supsmu(p4, p5);
  //   return r13;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // dyn lines(p6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  (void)(Rsh_Fir_call_dynamic(Rsh_Fir_reg_lines, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO));
  // lines1 = ldf lines
  Rsh_Fir_reg_lines1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // p9 = prom<V +>{
  //   supsmu1 = ldf supsmu;
  //   p7 = prom<V +>{
  //     speed4 = ld speed;
  //     speed5 = force? speed4;
  //     checkMissing(speed5);
  //     return speed5;
  //   };
  //   p8 = prom<V +>{
  //     dist4 = ld dist;
  //     dist5 = force? dist4;
  //     checkMissing(dist5);
  //     return dist5;
  //   };
  //   r18 = dyn supsmu1[, , bass](p7, p8, 7.0);
  //   return r18;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r20 = dyn lines1[, lty](p9, 2.0)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lines1_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r20
  return Rsh_Fir_reg_r20_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_speed;
  SEXP Rsh_Fir_reg_speed1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // speed = ld speed
  Rsh_Fir_reg_speed = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // speed1 = force? speed
  Rsh_Fir_reg_speed1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_speed);
  // checkMissing(speed1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_speed1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return speed1
  return Rsh_Fir_reg_speed1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dist;
  SEXP Rsh_Fir_reg_dist1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dist = ld dist
  Rsh_Fir_reg_dist = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // dist1 = force? dist
  Rsh_Fir_reg_dist1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dist);
  // checkMissing(dist1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dist1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return dist1
  return Rsh_Fir_reg_dist1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_supsmu;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // supsmu = ldf supsmu
  Rsh_Fir_reg_supsmu = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p4 = prom<V +>{
  //   speed2 = ld speed;
  //   speed3 = force? speed2;
  //   checkMissing(speed3);
  //   return speed3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   dist2 = ld dist;
  //   dist3 = force? dist2;
  //   checkMissing(dist3);
  //   return dist3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r13 = dyn supsmu(p4, p5)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_supsmu, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_speed2_;
  SEXP Rsh_Fir_reg_speed3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // speed2 = ld speed
  Rsh_Fir_reg_speed2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // speed3 = force? speed2
  Rsh_Fir_reg_speed3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_speed2_);
  // checkMissing(speed3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_speed3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return speed3
  return Rsh_Fir_reg_speed3_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dist2_;
  SEXP Rsh_Fir_reg_dist3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dist2 = ld dist
  Rsh_Fir_reg_dist2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // dist3 = force? dist2
  Rsh_Fir_reg_dist3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dist2_);
  // checkMissing(dist3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dist3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return dist3
  return Rsh_Fir_reg_dist3_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_supsmu1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // supsmu1 = ldf supsmu
  Rsh_Fir_reg_supsmu1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p7 = prom<V +>{
  //   speed4 = ld speed;
  //   speed5 = force? speed4;
  //   checkMissing(speed5);
  //   return speed5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   dist4 = ld dist;
  //   dist5 = force? dist4;
  //   checkMissing(dist5);
  //   return dist5;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r18 = dyn supsmu1[, , bass](p7, p8, 7.0)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_supsmu1_, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_speed4_;
  SEXP Rsh_Fir_reg_speed5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // speed4 = ld speed
  Rsh_Fir_reg_speed4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // speed5 = force? speed4
  Rsh_Fir_reg_speed5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_speed4_);
  // checkMissing(speed5)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_speed5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return speed5
  return Rsh_Fir_reg_speed5_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dist4_;
  SEXP Rsh_Fir_reg_dist5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dist4 = ld dist
  Rsh_Fir_reg_dist4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // dist5 = force? dist4
  Rsh_Fir_reg_dist5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dist4_);
  // checkMissing(dist5)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dist5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return dist5
  return Rsh_Fir_reg_dist5_;
}
SEXP Rsh_Fir_user_function_inner2605600262_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2605600262 dynamic dispatch ([x, y, wt, span, periodic, bass, trace])

  return Rsh_Fir_user_version_inner2605600262_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2605600262_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2605600262 version 0 (*, *, *, *, *, *, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner2605600262/0: expected 7, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_wt;
  SEXP Rsh_Fir_reg_span;
  SEXP Rsh_Fir_reg_periodic;
  SEXP Rsh_Fir_reg_bass;
  SEXP Rsh_Fir_reg_trace;
  SEXP Rsh_Fir_reg_wt_isMissing;
  SEXP Rsh_Fir_reg_wt_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_span_isMissing;
  SEXP Rsh_Fir_reg_span_orDefault;
  SEXP Rsh_Fir_reg_periodic_isMissing;
  SEXP Rsh_Fir_reg_periodic_orDefault;
  SEXP Rsh_Fir_reg_bass_isMissing;
  SEXP Rsh_Fir_reg_bass_orDefault;
  SEXP Rsh_Fir_reg_trace_isMissing;
  SEXP Rsh_Fir_reg_trace_orDefault;
  SEXP Rsh_Fir_reg_span1_;
  SEXP Rsh_Fir_reg_span2_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_span3_;
  SEXP Rsh_Fir_reg_span4_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_span5_;
  SEXP Rsh_Fir_reg_span6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_reg_is_numeric;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_wt1_;
  SEXP Rsh_Fir_reg_wt2_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_stop3_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_periodic1_;
  SEXP Rsh_Fir_reg_periodic2_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_range;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_xrange;
  SEXP Rsh_Fir_reg_xrange1_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_xrange3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_xrange4_;
  SEXP Rsh_Fir_reg_xrange5_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_xrange7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_stop4_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_y5_;
  SEXP Rsh_Fir_reg_y6_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_wt3_;
  SEXP Rsh_Fir_reg_wt4_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_is_finite;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_order;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_okay4_;
  SEXP Rsh_Fir_reg_okay5_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_cumsum;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_okay6_;
  SEXP Rsh_Fir_reg_okay7_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_ord;
  SEXP Rsh_Fir_reg_ord1_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_ord2_;
  SEXP Rsh_Fir_reg_ord3_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_ord4_;
  SEXP Rsh_Fir_reg_ord5_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_ord6_;
  SEXP Rsh_Fir_reg_ord7_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_leno;
  SEXP Rsh_Fir_reg_leno1_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_stop5_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg_leno2_;
  SEXP Rsh_Fir_reg_leno3_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_C_setsmu;
  SEXP Rsh_Fir_reg_C_setsmu1_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_trace1_;
  SEXP Rsh_Fir_reg_trace2_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg__Fortran;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_C_supsmu;
  SEXP Rsh_Fir_reg_C_supsmu1_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_leno4_;
  SEXP Rsh_Fir_reg_leno5_;
  SEXP Rsh_Fir_reg_as_integer1_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_xo;
  SEXP Rsh_Fir_reg_xo1_;
  SEXP Rsh_Fir_reg_as_double;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_y11_;
  SEXP Rsh_Fir_reg_y12_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_y14_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_ord8_;
  SEXP Rsh_Fir_reg_ord9_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_as_double1_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_wt5_;
  SEXP Rsh_Fir_reg_wt6_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_wt8_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_ord10_;
  SEXP Rsh_Fir_reg_ord11_;
  SEXP Rsh_Fir_reg___8_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_as_double2_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_iper;
  SEXP Rsh_Fir_reg_iper1_;
  SEXP Rsh_Fir_reg_as_integer2_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_span7_;
  SEXP Rsh_Fir_reg_span8_;
  SEXP Rsh_Fir_reg_as_double3_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_bass1_;
  SEXP Rsh_Fir_reg_bass2_;
  SEXP Rsh_Fir_reg_as_double4_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_double;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_double1_;
  SEXP Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_double2_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg__Fortran1_;
  SEXP Rsh_Fir_reg_r113_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_duplicated;
  SEXP Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_reg_r120_;
  SEXP Rsh_Fir_reg_xo4_;
  SEXP Rsh_Fir_reg_xo5_;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_xo7_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_dupx;
  SEXP Rsh_Fir_reg_dupx1_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg___9_;
  SEXP Rsh_Fir_reg_r122_;
  SEXP Rsh_Fir_reg_smo;
  SEXP Rsh_Fir_reg_smo1_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_smo3_;
  SEXP Rsh_Fir_reg_dr22_;
  SEXP Rsh_Fir_reg_dc11_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_dupx2_;
  SEXP Rsh_Fir_reg_dupx3_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg___10_;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r125_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_wt = PARAMS[2];
  Rsh_Fir_reg_span = PARAMS[3];
  Rsh_Fir_reg_periodic = PARAMS[4];
  Rsh_Fir_reg_bass = PARAMS[5];
  Rsh_Fir_reg_trace = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // wt_isMissing = missing.0(wt)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_wt;
  Rsh_Fir_reg_wt_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args19);
  // if wt_isMissing then L0() else L1(wt)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_wt_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(wt)
    Rsh_Fir_reg_wt_orDefault = Rsh_Fir_reg_wt;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf rep;
  //   base = ldf rep in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   rep = ldf rep in base;
  //   r2 = dyn rep(1.0, <sym n>);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(1.0, <sym n>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605600262_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_wt_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st wt = wt_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_wt_orDefault, RHO);
  (void)(Rsh_Fir_reg_wt_orDefault);
  // span_isMissing = missing.0(span)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_span;
  Rsh_Fir_reg_span_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args23);
  // if span_isMissing then L2("cv") else L2(span)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_span_isMissing)) {
  // L2("cv")
    Rsh_Fir_reg_span_orDefault = Rsh_const(CCP, 20);
    goto L2_;
  } else {
  // L2(span)
    Rsh_Fir_reg_span_orDefault = Rsh_Fir_reg_span;
    goto L2_;
  }

L2_:;
  // st span = span_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_span_orDefault, RHO);
  (void)(Rsh_Fir_reg_span_orDefault);
  // periodic_isMissing = missing.0(periodic)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_periodic;
  Rsh_Fir_reg_periodic_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args24);
  // if periodic_isMissing then L3(FALSE) else L3(periodic)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_periodic_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_periodic_orDefault = Rsh_const(CCP, 22);
    goto L3_;
  } else {
  // L3(periodic)
    Rsh_Fir_reg_periodic_orDefault = Rsh_Fir_reg_periodic;
    goto L3_;
  }

L3_:;
  // st periodic = periodic_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_periodic_orDefault, RHO);
  (void)(Rsh_Fir_reg_periodic_orDefault);
  // bass_isMissing = missing.0(bass)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_bass;
  Rsh_Fir_reg_bass_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args25);
  // if bass_isMissing then L4(0.0) else L4(bass)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_bass_isMissing)) {
  // L4(0.0)
    Rsh_Fir_reg_bass_orDefault = Rsh_const(CCP, 24);
    goto L4_;
  } else {
  // L4(bass)
    Rsh_Fir_reg_bass_orDefault = Rsh_Fir_reg_bass;
    goto L4_;
  }

L4_:;
  // st bass = bass_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_bass_orDefault, RHO);
  (void)(Rsh_Fir_reg_bass_orDefault);
  // trace_isMissing = missing.0(trace)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_trace;
  Rsh_Fir_reg_trace_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args26);
  // if trace_isMissing then L5(FALSE) else L5(trace)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_trace_isMissing)) {
  // L5(FALSE)
    Rsh_Fir_reg_trace_orDefault = Rsh_const(CCP, 22);
    goto L5_;
  } else {
  // L5(trace)
    Rsh_Fir_reg_trace_orDefault = Rsh_Fir_reg_trace;
    goto L5_;
  }

L5_:;
  // st trace = trace_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_trace_orDefault, RHO);
  (void)(Rsh_Fir_reg_trace_orDefault);
  // span1 = ld span
  Rsh_Fir_reg_span1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L54() else D0()
  // L54()
  goto L54_;

D0_:;
  // deopt 0 [span1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_span1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L54_:;
  // span2 = force? span1
  Rsh_Fir_reg_span2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_span1_);
  // checkMissing(span2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_span2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // r4 = `==`(span2, "cv")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_span2_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args28);
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args29);
  // if c then L55() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L55()
    goto L55_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // span3 = ld span
  Rsh_Fir_reg_span3_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L57() else D1()
  // L57()
  goto L57_;

L7_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard1 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L55_:;
  // st span = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_const(CCP, 24), RHO);
  (void)(Rsh_const(CCP, 24));
  // goto L7()
  // L7()
  goto L7_;

D1_:;
  // deopt 7 [span3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_span3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // st n = r10
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L69() else D7()
  // L69()
  goto L69_;

L57_:;
  // span4 = force? span3
  Rsh_Fir_reg_span4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_span3_);
  // checkMissing(span4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_span4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // r6 = `<`(span4, 0.0)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_span4_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args32);
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // if c1 then L8(c1) else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L8(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L8_;
  } else {
  // L58()
    goto L58_;
  }

L65_:;
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L67() else D5()
  // L67()
  goto L67_;

L66_:;
  // r9 = dyn base1(<sym y>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L10(r9)
  // L10(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L10_;

D5_:;
  // deopt 24 [y1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 29 [n]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L8_:;
  // c7 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args35);
  // if c7 then L61() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L61()
    goto L61_;
  } else {
  // L9()
    goto L9_;
  }

L58_:;
  // span5 = ld span
  Rsh_Fir_reg_span5_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L59() else D2()
  // L59()
  goto L59_;

L67_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r11 = dyn length(y2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L68() else D6()
  // L68()
  goto L68_;

L69_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // r12 = `!`(n1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args39);
  // c8 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // if c8 then L11(c8) else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L11(c8)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c8_;
    goto L11_;
  } else {
  // L70()
    goto L70_;
  }

D2_:;
  // deopt 11 [c1, span5]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_span5_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 27 [r11]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L7()
  // L7()
  goto L7_;

L11_:;
  // c17 = `as.logical`(c9)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args41);
  // if c17 then L76() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L76()
    goto L76_;
  } else {
  // L13()
    goto L13_;
  }

L59_:;
  // span6 = force? span5
  Rsh_Fir_reg_span6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_span5_);
  // checkMissing(span6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_span6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // r7 = `>`(span6, 1.0)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_span6_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args43);
  // c4 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args44);
  // c5 = `||`(c1, c4)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args45);
  // goto L8(c5)
  // L8(c5)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c5_;
  goto L8_;

L61_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L62() else D3()
  // L62()
  goto L62_;

L68_:;
  // goto L10(r11)
  // L10(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L10_;

L70_:;
  // sym2 = ldf `is.numeric`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base2 = ldf `is.numeric` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard2 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

D3_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // r16 = `!`(r14)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args47);
  // c14 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args48);
  // c15 = `||`(c13, c14)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args49);
  // goto L11(c15)
  // L11(c15)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c15_;
  goto L11_;

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard3 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L62_:;
  // r8 = dyn stop("'span' must be between 0 and 1.")
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L63() else D4()
  // L63()
  goto L63_;

L71_:;
  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L73() else D8()
  // L73()
  goto L73_;

L72_:;
  // r13 = dyn base2(<sym y>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L12(c8, r13)
  // L12(c8, r13)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_1;
  goto L12_;

L76_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L77() else D10()
  // L77()
  goto L77_;

D4_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 34 [c8, y3]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_y3_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L84() else D14()
  // L84()
  goto L84_;

L63_:;
  // goto L7()
  // L7()
  goto L7_;

L73_:;
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r15 = dyn is_numeric(y4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L74() else D9()
  // L74()
  goto L74_;

L77_:;
  // r17 = dyn stop1("'y' must be numeric vector")
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L78() else D11()
  // L78()
  goto L78_;

L80_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L82() else D12()
  // L82()
  goto L82_;

L81_:;
  // r19 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L15(r19)
  // L15(r19)
  Rsh_Fir_reg_r20_1 = Rsh_Fir_reg_r19_;
  goto L15_;

D9_:;
  // deopt 37 [c8, r15]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 43 [r17]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 48 [x1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 51 [r20, n2]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L12(c8, r15)
  // L12(c8, r15)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L12_;

L78_:;
  // goto L14()
  // L14()
  goto L14_;

L82_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r21 = dyn length1(x2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L83() else D13()
  // L83()
  goto L83_;

L84_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // r22 = `!=`(r20, n3)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args60);
  // c18 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r22_1;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args61);
  // if c18 then L85() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L85()
    goto L85_;
  } else {
  // L16()
    goto L16_;
  }

D13_:;
  // deopt 51 [r21]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard4 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L83_:;
  // goto L15(r21)
  // L15(r21)
  Rsh_Fir_reg_r20_1 = Rsh_Fir_reg_r21_;
  goto L15_;

L85_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L86() else D15()
  // L86()
  goto L86_;

D15_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L93() else D19()
  // L93()
  goto L93_;

L86_:;
  // r23 = dyn stop2("number of observations in 'x' and 'y' must match.")
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L87() else D16()
  // L87()
  goto L87_;

L89_:;
  // wt1 = ld wt
  Rsh_Fir_reg_wt1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L91() else D17()
  // L91()
  goto L91_;

L90_:;
  // r25 = dyn base4(<sym wt>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L18(r25)
  // L18(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L18_;

D16_:;
  // deopt 57 [r23]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 62 [wt1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_wt1_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 65 [r26, n4]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L17()
  // L17()
  goto L17_;

L91_:;
  // wt2 = force? wt1
  Rsh_Fir_reg_wt2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wt1_);
  // checkMissing(wt2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_wt2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r27 = dyn length2(wt2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_wt2_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L92() else D18()
  // L92()
  goto L92_;

L93_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r28 = `!=`(r26, n5)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_n5_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args68);
  // c19 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args69);
  // if c19 then L94() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L94()
    goto L94_;
  } else {
  // L19()
    goto L19_;
  }

D18_:;
  // deopt 65 [r27]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // periodic1 = ld periodic
  Rsh_Fir_reg_periodic1_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L98() else D22()
  // L98()
  goto L98_;

L92_:;
  // goto L18(r27)
  // L18(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L18_;

L94_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L95() else D20()
  // L95()
  goto L95_;

D20_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 74 [periodic1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_periodic1_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L95_:;
  // r29 = dyn stop3("number of weights must match number of observations.")
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L96() else D21()
  // L96()
  goto L96_;

L98_:;
  // periodic2 = force? periodic1
  Rsh_Fir_reg_periodic2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_periodic1_);
  // checkMissing(periodic2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_periodic2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c20 = `as.logical`(periodic2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_periodic2_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args72);
  // if c20 then L99() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L99()
    goto L99_;
  } else {
  // L21()
    goto L21_;
  }

D21_:;
  // deopt 71 [r29]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L21_:;
  // st iper = 1
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_const(CCP, 33), RHO);
  (void)(Rsh_const(CCP, 33));
  // goto L28()
  // L28()
  goto L28_;

L28_:;
  // sym6 = ldf `is.finite`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base6 = ldf `is.finite` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard6 then L119() else L120()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L119()
    goto L119_;
  } else {
  // L120()
    goto L120_;
  }

L96_:;
  // goto L20()
  // L20()
  goto L20_;

L99_:;
  // st iper = 2
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_const(CCP, 36), RHO);
  (void)(Rsh_const(CCP, 36));
  // sym5 = ldf range
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base5 = ldf range in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard5 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L22_:;
  // st xrange = r32
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // xrange = ld xrange
  Rsh_Fir_reg_xrange = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L104() else D25()
  // L104()
  goto L104_;

L29_:;
  // st okay = r42
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // order = ldf order
  Rsh_Fir_reg_order = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L125() else D33()
  // L125()
  goto L125_;

L100_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L102() else D23()
  // L102()
  goto L102_;

L101_:;
  // r31 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L22(r31)
  // L22(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L22_;

L119_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L121() else D29()
  // L121()
  goto L121_;

L120_:;
  // r41 = dyn base6(<lang `+`(`+`(x, y), wt)>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L29(r41)
  // L29(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L29_;

D23_:;
  // deopt 81 [x3]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 86 [xrange]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_xrange;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 112 [x5]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 122 []
  Rsh_Fir_deopt(122, 0, NULL, CCP, RHO);
  return R_NilValue;

L102_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // range = ldf range in base
  Rsh_Fir_reg_range = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r33 = dyn range(x4)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_range, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L103() else D24()
  // L103()
  goto L103_;

L104_:;
  // xrange1 = force? xrange
  Rsh_Fir_reg_xrange1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xrange);
  // checkMissing(xrange1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_xrange1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(xrange1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_xrange1_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args80);
  // if c21 then L105() else L106(xrange1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L105()
    goto L105_;
  } else {
  // L106(xrange1)
    Rsh_Fir_reg_xrange3_ = Rsh_Fir_reg_xrange1_;
    goto L106_;
  }

L121_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // y5 = ld y
  Rsh_Fir_reg_y5_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L122() else D30()
  // L122()
  goto L122_;

L125_:;
  // p1 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   c34 = `is.object`(x8);
  //   if c34 then L1() else L2(x8);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", x8);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(x10):
  //   okay = ld okay;
  //   okay1 = force? okay;
  //   __2 = ldf `[` in base;
  //   r46 = dyn __2(x10, okay1);
  //   goto L0(r46);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605600262_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   y7 = ld y;
  //   y8 = force? y7;
  //   checkMissing(y8);
  //   c35 = `is.object`(y8);
  //   if c35 then L1() else L2(y8);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", y8);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(y10):
  //   okay2 = ld okay;
  //   okay3 = force? okay2;
  //   __3 = ldf `[` in base;
  //   r48 = dyn __3(y10, okay3);
  //   goto L0(r48);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605600262_2, 0, NULL, CCP, RHO);
  // r50 = dyn order(p1, p2)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_order, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L126() else D34()
  // L126()
  goto L126_;

D24_:;
  // deopt 84 [r33]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 113 [x6, y5]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_y5_;
  Rsh_Fir_deopt(113, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 125 [r50]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L23_:;
  // r35 = `<`(dx1, 0.0)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args95);
  // c22 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args96);
  // if c22 then L24(c22) else L108()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L24(c22)
    Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c22_;
    goto L24_;
  } else {
  // L108()
    goto L108_;
  }

L103_:;
  // goto L22(r33)
  // L22(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L22_;

L105_:;
  // dr = tryDispatchBuiltin.1("[", xrange1)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_xrange1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args97);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if dc then L107() else L106(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L107()
    goto L107_;
  } else {
  // L106(dr)
    Rsh_Fir_reg_xrange3_ = Rsh_Fir_reg_dr;
    goto L106_;
  }

L106_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r34 = dyn __(xrange3, 1)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_xrange3_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L23(r34)
  // L23(r34)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r34_;
  goto L23_;

L122_:;
  // y6 = force? y5
  Rsh_Fir_reg_y6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y5_);
  // checkMissing(y6)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_y6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // r43 = `+`(x6, y6)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_y6_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args101);
  // wt3 = ld wt
  Rsh_Fir_reg_wt3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L123() else D31()
  // L123()
  goto L123_;

L126_:;
  // st ord = r50
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // sym7 = ldf cumsum
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base7 = ldf cumsum in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard7 then L127() else L128()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L127()
    goto L127_;
  } else {
  // L128()
    goto L128_;
  }

D31_:;
  // deopt 115 [r43, wt3]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_wt3_;
  Rsh_Fir_deopt(115, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L24_:;
  // c33 = `as.logical`(c23)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args103);
  // if c33 then L114() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L114()
    goto L114_;
  } else {
  // L26()
    goto L26_;
  }

L30_:;
  // c36 = `is.object`(r52)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args104);
  // if c36 then L131() else L132(r52)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L131()
    goto L131_;
  } else {
  // L132(r52)
    Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r52_;
    goto L132_;
  }

L107_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // goto L23(dx)
  // L23(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L23_;

L108_:;
  // xrange4 = ld xrange
  Rsh_Fir_reg_xrange4_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L109() else D26()
  // L109()
  goto L109_;

L123_:;
  // wt4 = force? wt3
  Rsh_Fir_reg_wt4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wt3_);
  // checkMissing(wt4)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_wt4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // r44 = `+`(r43, wt4)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_wt4_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args107);
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r45 = dyn is_finite(r44)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L124() else D32()
  // L124()
  goto L124_;

L127_:;
  // okay4 = ld okay
  Rsh_Fir_reg_okay4_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L129() else D35()
  // L129()
  goto L129_;

L128_:;
  // r51 = dyn base7(<lang `!`(okay)>)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L30(r51)
  // L30(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L30_;

D26_:;
  // deopt 93 [c22, xrange4]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_c22_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_xrange4_;
  Rsh_Fir_deopt(93, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 119 [r45]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 129 [okay4]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_okay4_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L27(NULL)
  // L27(NULL)
  Rsh_Fir_reg_r39_ = Rsh_const(CCP, 47);
  goto L27_;

L27_:;
  // goto L28()
  // L28()
  goto L28_;

L31_:;
  // c37 = `is.object`(dx9)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args110);
  // if c37 then L135() else L136(dx9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L135()
    goto L135_;
  } else {
  // L136(dx9)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    goto L136_;
  }

L109_:;
  // xrange5 = force? xrange4
  Rsh_Fir_reg_xrange5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xrange4_);
  // checkMissing(xrange5)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_xrange5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(xrange5)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_xrange5_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args112);
  // if c25 then L110() else L111(c22, xrange5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L110()
    goto L110_;
  } else {
  // L111(c22, xrange5)
    Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c22_;
    Rsh_Fir_reg_xrange7_ = Rsh_Fir_reg_xrange5_;
    goto L111_;
  }

L114_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L115() else D27()
  // L115()
  goto L115_;

L124_:;
  // goto L29(r45)
  // L29(r45)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r45_;
  goto L29_;

L129_:;
  // okay5 = force? okay4
  Rsh_Fir_reg_okay5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay4_);
  // checkMissing(okay5)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_okay5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // r53 = `!`(okay5)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_okay5_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args114);
  // cumsum = ldf cumsum in base
  Rsh_Fir_reg_cumsum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r54 = dyn cumsum(r53)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cumsum, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L130() else D36()
  // L130()
  goto L130_;

L131_:;
  // dr8 = tryDispatchBuiltin.1("[", r52)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args116);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if dc4 then L133() else L132(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L133()
    goto L133_;
  } else {
  // L132(dr8)
    Rsh_Fir_reg_r56_ = Rsh_Fir_reg_dr8_;
    goto L132_;
  }

L132_:;
  // okay6 = ld okay
  Rsh_Fir_reg_okay6_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L134() else D37()
  // L134()
  goto L134_;

D27_:;
  // deopt 102 []
  Rsh_Fir_deopt(102, 0, NULL, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 133 [r54]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 134 [r56, okay6]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_okay6_;
  Rsh_Fir_deopt(134, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L25_:;
  // r37 = `>`(dx3, 1.0)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args118);
  // c30 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args119);
  // c31 = `||`(c29, c30)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_c29_;
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_c30_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args120);
  // goto L24(c31)
  // L24(c31)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c31_;
  goto L24_;

L32_:;
  // ord2 = ld ord
  Rsh_Fir_reg_ord2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L139() else D39()
  // L139()
  goto L139_;

L110_:;
  // dr2 = tryDispatchBuiltin.1("[", xrange5)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_xrange5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args121);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if dc1 then L112() else L111(c22, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L112()
    goto L112_;
  } else {
  // L111(c22, dr2)
    Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c22_;
    Rsh_Fir_reg_xrange7_ = Rsh_Fir_reg_dr2_;
    goto L111_;
  }

L111_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r36 = dyn __1(xrange7, 2)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_xrange7_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L25(c27, r36)
  // L25(c27, r36)
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r36_;
  goto L25_;

L115_:;
  // r38 = dyn stop4("'x' must be between 0 and 1 for periodic smooth")
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L116() else D28()
  // L116()
  goto L116_;

L130_:;
  // goto L30(r54)
  // L30(r54)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r54_;
  goto L30_;

L133_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // goto L31(dx8)
  // L31(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L31_;

L134_:;
  // okay7 = force? okay6
  Rsh_Fir_reg_okay7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay6_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r57 = dyn __4(r56, okay7)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_okay7_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L31(r57)
  // L31(r57)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r57_;
  goto L31_;

L135_:;
  // dr10 = tryDispatchBuiltin.1("[", dx9)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args127);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if dc5 then L137() else L136(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L137()
    goto L137_;
  } else {
  // L136(dr10)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dr10_;
    goto L136_;
  }

L136_:;
  // ord = ld ord
  Rsh_Fir_reg_ord = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L138() else D38()
  // L138()
  goto L138_;

D28_:;
  // deopt 104 [r38]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 137 [dx11, ord]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_ord;
  Rsh_Fir_deopt(137, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 139 [dx13, ord2]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_ord2_;
  Rsh_Fir_deopt(139, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L112_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L25(c22, dx2)
  // L25(c22, dx2)
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L25_;

L116_:;
  // goto L27(r38)
  // L27(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L27_;

L137_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // goto L32(dx12)
  // L32(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L32_;

L138_:;
  // ord1 = force? ord
  Rsh_Fir_reg_ord1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ord);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r58 = dyn __5(dx11, ord1)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_ord1_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L32(r58)
  // L32(r58)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r58_;
  goto L32_;

L139_:;
  // ord3 = force? ord2
  Rsh_Fir_reg_ord3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ord2_);
  // checkMissing(ord3)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_ord3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // r59 = `+`(dx13, ord3)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_ord3_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args133);
  // st ord = r59
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L140() else D40()
  // L140()
  goto L140_;

D40_:;
  // deopt 143 [x11]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L140_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // c38 = `is.object`(x12)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args135);
  // if c38 then L141() else L142(x12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L141()
    goto L141_;
  } else {
  // L142(x12)
    Rsh_Fir_reg_x14_ = Rsh_Fir_reg_x12_;
    goto L142_;
  }

L33_:;
  // st xo = dx15
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args136);
  // if guard8 then L145() else L146()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L145()
    goto L145_;
  } else {
  // L146()
    goto L146_;
  }

L141_:;
  // dr12 = tryDispatchBuiltin.1("[", x12)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_x12_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args137);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // if dc6 then L143() else L142(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L143()
    goto L143_;
  } else {
  // L142(dr12)
    Rsh_Fir_reg_x14_ = Rsh_Fir_reg_dr12_;
    goto L142_;
  }

L142_:;
  // ord4 = ld ord
  Rsh_Fir_reg_ord4_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L144() else D41()
  // L144()
  goto L144_;

D41_:;
  // deopt 145 [x14, ord4]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_ord4_;
  Rsh_Fir_deopt(145, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L34_:;
  // st leno = r62
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // leno = ld leno
  Rsh_Fir_reg_leno = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L149() else D44()
  // L149()
  goto L149_;

L143_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // goto L33(dx14)
  // L33(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L33_;

L144_:;
  // ord5 = force? ord4
  Rsh_Fir_reg_ord5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ord4_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r60 = dyn __6(x14, ord5)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_ord5_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L33(r60)
  // L33(r60)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r60_;
  goto L33_;

L145_:;
  // ord6 = ld ord
  Rsh_Fir_reg_ord6_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L147() else D42()
  // L147()
  goto L147_;

L146_:;
  // r61 = dyn base8(<sym ord>)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L34(r61)
  // L34(r61)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L34_;

D42_:;
  // deopt 151 [ord6]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_ord6_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 156 [leno]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_leno;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L147_:;
  // ord7 = force? ord6
  Rsh_Fir_reg_ord7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ord6_);
  // checkMissing(ord7)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_ord7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r63 = dyn length3(ord7)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_ord7_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L148() else D43()
  // L148()
  goto L148_;

L149_:;
  // leno1 = force? leno
  Rsh_Fir_reg_leno1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_leno);
  // checkMissing(leno1)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_leno1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // r64 = `==`(leno1, 0)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_leno1_;
  Rsh_Fir_array_args145[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args145);
  // c39 = `as.logical`(r64)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args146);
  // if c39 then L150() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L150()
    goto L150_;
  } else {
  // L35()
    goto L35_;
  }

D43_:;
  // deopt 154 [r63]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L36()
  // L36()
  goto L36_;

L36_:;
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L154() else D47()
  // L154()
  goto L154_;

L148_:;
  // goto L34(r63)
  // L34(r63)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r63_;
  goto L34_;

L150_:;
  // stop5 = ldf stop
  Rsh_Fir_reg_stop5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L151() else D45()
  // L151()
  goto L151_;

D45_:;
  // deopt 161 []
  Rsh_Fir_deopt(161, 0, NULL, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 166 [n6]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L151_:;
  // r65 = dyn stop5("no finite observations")
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop5_, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L152() else D46()
  // L152()
  goto L152_;

L154_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // leno2 = ld leno
  Rsh_Fir_reg_leno2_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L155() else D48()
  // L155()
  goto L155_;

D46_:;
  // deopt 163 [r65]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(163, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 167 [n7, leno2]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_leno2_;
  Rsh_Fir_deopt(167, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L152_:;
  // goto L36()
  // L36()
  goto L36_;

L155_:;
  // leno3 = force? leno2
  Rsh_Fir_reg_leno3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_leno2_);
  // checkMissing(leno3)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_leno3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // r67 = `-`(n7, leno3)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_leno3_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args150);
  // st diff = r67
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // c40 = `as.logical`(r67)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args151);
  // if c40 then L156() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L156()
    goto L156_;
  } else {
  // L37()
    goto L37_;
  }

L37_:;
  // goto L38()
  // L38()
  goto L38_;

L38_:;
  // sym9 = ldf `.Fortran`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base9 = ldf `.Fortran` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args152);
  // if guard9 then L160() else L161()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L160()
    goto L160_;
  } else {
  // L161()
    goto L161_;
  }

L156_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L157() else D49()
  // L157()
  goto L157_;

D49_:;
  // deopt 172 []
  Rsh_Fir_deopt(172, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // sym11 = ldf `.Fortran`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base11 = ldf `.Fortran` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args153);
  // if guard11 then L168() else L169()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L168()
    goto L168_;
  } else {
  // L169()
    goto L169_;
  }

L157_:;
  // p6 = prom<V +>{
  //   sprintf = ldf sprintf;
  //   p4 = prom<V +>{
  //     ngettext = ldf ngettext;
  //     p3 = prom<V +>{
  //       diff = ld diff;
  //       diff1 = force? diff;
  //       checkMissing(diff1);
  //       return diff1;
  //     };
  //     r69 = dyn ngettext(p3, "%d observation with NA, NaN or Inf deleted", "%d observations with NAs, NaNs and/or Infs deleted");
  //     return r69;
  //   };
  //   p5 = prom<V +>{
  //     diff2 = ld diff;
  //     diff3 = force? diff2;
  //     checkMissing(diff3);
  //     return diff3;
  //   };
  //   r72 = dyn sprintf(p4, p5);
  //   return r72;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605600262_3, 0, NULL, CCP, RHO);
  // r74 = dyn warning[, domain](p6, NA_LGL)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args158[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 2, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L158() else D50()
  // L158()
  goto L158_;

L160_:;
  // C_setsmu = ld C_setsmu
  Rsh_Fir_reg_C_setsmu = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L162() else D51()
  // L162()
  goto L162_;

L161_:;
  // r76 = dyn base9(<sym C_setsmu>, <lang as.integer(trace)>)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args159[1] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L39()
  // L39()
  goto L39_;

D50_:;
  // deopt 176 [r74]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 181 [C_setsmu]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_C_setsmu;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L41_:;
  // c43 = `is.object`(r83)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args160);
  // if c43 then L215() else L216(r83)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L215()
    goto L215_;
  } else {
  // L216(r83)
    Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r83_;
    goto L216_;
  }

L158_:;
  // goto L38()
  // L38()
  goto L38_;

L162_:;
  // C_setsmu1 = force? C_setsmu
  Rsh_Fir_reg_C_setsmu1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_setsmu);
  // checkMissing(C_setsmu1)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_C_setsmu1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // sym10 = ldf `as.integer`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // base10 = ldf `as.integer` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args162);
  // if guard10 then L163() else L164()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L163()
    goto L163_;
  } else {
  // L164()
    goto L164_;
  }

L168_:;
  // C_supsmu = ld C_supsmu
  Rsh_Fir_reg_C_supsmu = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // check L170() else D55()
  // L170()
  goto L170_;

L169_:;
  // r82 = dyn base11[, , , , , , , , smo, , ](<sym C_supsmu>, <lang as.integer(leno)>, <lang as.double(xo)>, <lang as.double(`[`(y, ord))>, <lang as.double(`[`(wt, ord))>, <lang as.integer(iper)>, <lang as.double(span)>, <lang as.double(bass)>, <lang double(leno)>, <lang double(`*`(n, 7))>, <lang double(1)>)
  SEXP Rsh_Fir_array_args163[11];
  Rsh_Fir_array_args163[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args163[1] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args163[2] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args163[3] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args163[4] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args163[5] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args163[6] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args163[7] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args163[8] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args163[9] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args163[10] = Rsh_const(CCP, 75);
  SEXP Rsh_Fir_array_arg_names45[11];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_array_arg_names45[2] = R_MissingArg;
  Rsh_Fir_array_arg_names45[3] = R_MissingArg;
  Rsh_Fir_array_arg_names45[4] = R_MissingArg;
  Rsh_Fir_array_arg_names45[5] = R_MissingArg;
  Rsh_Fir_array_arg_names45[6] = R_MissingArg;
  Rsh_Fir_array_arg_names45[7] = R_MissingArg;
  Rsh_Fir_array_arg_names45[8] = Rsh_const(CCP, 76);
  Rsh_Fir_array_arg_names45[9] = R_MissingArg;
  Rsh_Fir_array_arg_names45[10] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 11, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L41(r82)
  // L41(r82)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r82_;
  goto L41_;

D55_:;
  // deopt 193 [C_supsmu]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_C_supsmu;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L40_:;
  // _Fortran = ldf `.Fortran` in base
  Rsh_Fir_reg__Fortran = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r81 = dyn _Fortran(C_setsmu1, r79)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_C_setsmu1_;
  Rsh_Fir_array_args164[1] = Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Fortran, 2, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L167() else D54()
  // L167()
  goto L167_;

L163_:;
  // trace1 = ld trace
  Rsh_Fir_reg_trace1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L165() else D52()
  // L165()
  goto L165_;

L164_:;
  // r78 = dyn base10(<sym trace>)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L40(r78)
  // L40(r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L40_;

L170_:;
  // C_supsmu1 = force? C_supsmu
  Rsh_Fir_reg_C_supsmu1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_supsmu);
  // checkMissing(C_supsmu1)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_C_supsmu1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // sym12 = ldf `as.integer`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // base12 = ldf `as.integer` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args167);
  // if guard12 then L171() else L172()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L171()
    goto L171_;
  } else {
  // L172()
    goto L172_;
  }

L214_:;
  // st smo = dx21
  Rsh_Fir_store(Rsh_const(CCP, 76), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // duplicated = ldf duplicated
  Rsh_Fir_reg_duplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 77), RHO);
  // check L218() else D79()
  // L218()
  goto L218_;

L215_:;
  // dr18 = tryDispatchBuiltin.1("$", r83)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args168);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // if dc9 then L217() else L216(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L217()
    goto L217_;
  } else {
  // L216(dr18)
    Rsh_Fir_reg_r115_ = Rsh_Fir_reg_dr18_;
    goto L216_;
  }

L216_:;
  // r116 = `$`(r115, <sym smo>)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_r115_;
  Rsh_Fir_array_args170[1] = Rsh_const(CCP, 76);
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args170);
  // goto L214(r116)
  // L214(r116)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r116_;
  goto L214_;

D52_:;
  // deopt 185 [trace1]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_trace1_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 190 [r81]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(190, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

D79_:;
  // deopt 261 []
  Rsh_Fir_deopt(261, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // sym13 = ldf `as.double`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // base13 = ldf `as.double` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args171);
  // if guard13 then L175() else L176()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L175()
    goto L175_;
  } else {
  // L176()
    goto L176_;
  }

L165_:;
  // trace2 = force? trace1
  Rsh_Fir_reg_trace2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trace1_);
  // checkMissing(trace2)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_trace2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r80 = dyn as_integer(trace2)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_trace2_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args173, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L166() else D53()
  // L166()
  goto L166_;

L167_:;
  // goto L39()
  // L39()
  goto L39_;

L171_:;
  // leno4 = ld leno
  Rsh_Fir_reg_leno4_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L173() else D56()
  // L173()
  goto L173_;

L172_:;
  // r84 = dyn base12(<sym leno>)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L42(r84)
  // L42(r84)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r84_;
  goto L42_;

L217_:;
  // dx20 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // goto L214(dx20)
  // L214(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L214_;

L218_:;
  // p9 = prom<V +>{
  //   xo2 = ld xo;
  //   xo3 = force? xo2;
  //   checkMissing(xo3);
  //   return xo3;
  // }
  Rsh_Fir_reg_p9_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605600262_7, 0, NULL, CCP, RHO);
  // r118 = dyn duplicated(p9)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_duplicated, 1, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L219() else D80()
  // L219()
  goto L219_;

D53_:;
  // deopt 188 [r80]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 197 [leno4]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_leno4_;
  Rsh_Fir_deopt(197, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

D80_:;
  // deopt 263 [r118]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r118_;
  Rsh_Fir_deopt(263, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L43_:;
  // sym14 = ldf `as.double`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // base14 = ldf `as.double` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args178);
  // if guard14 then L179() else L180()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L179()
    goto L179_;
  } else {
  // L180()
    goto L180_;
  }

L166_:;
  // goto L40(r80)
  // L40(r80)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r80_;
  goto L40_;

L173_:;
  // leno5 = force? leno4
  Rsh_Fir_reg_leno5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_leno4_);
  // checkMissing(leno5)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_leno5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty()));
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r86 = dyn as_integer1(leno5)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_leno5_;
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L174() else D57()
  // L174()
  goto L174_;

L175_:;
  // xo = ld xo
  Rsh_Fir_reg_xo = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L177() else D58()
  // L177()
  goto L177_;

L176_:;
  // r87 = dyn base13(<sym xo>)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L43(r87)
  // L43(r87)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r87_;
  goto L43_;

L219_:;
  // st dupx = r118
  Rsh_Fir_store(Rsh_const(CCP, 80), Rsh_Fir_reg_r118_, RHO);
  (void)(Rsh_Fir_reg_r118_);
  // sym19 = ldf list
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 81), RHO);
  // base19 = ldf list in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 81), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args182);
  // if guard19 then L220() else L221()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L220()
    goto L220_;
  } else {
  // L221()
    goto L221_;
  }

D57_:;
  // deopt 200 [r86]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(200, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D58_:;
  // deopt 203 [xo]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_xo;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L44_:;
  // sym15 = ldf `as.double`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // base15 = ldf `as.double` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args183);
  // if guard15 then L187() else L188()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L187()
    goto L187_;
  } else {
  // L188()
    goto L188_;
  }

L51_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r120
  return Rsh_Fir_reg_r120_;

L174_:;
  // goto L42(r86)
  // L42(r86)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r86_;
  goto L42_;

L177_:;
  // xo1 = force? xo
  Rsh_Fir_reg_xo1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xo);
  // checkMissing(xo1)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_xo1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty()));
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r89 = dyn as_double(xo1)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_xo1_;
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L178() else D59()
  // L178()
  goto L178_;

L179_:;
  // y11 = ld y
  Rsh_Fir_reg_y11_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L181() else D60()
  // L181()
  goto L181_;

L180_:;
  // r90 = dyn base14(<lang `[`(y, ord)>)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_const(CCP, 82);
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args186, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L44(r90)
  // L44(r90)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r90_;
  goto L44_;

L220_:;
  // xo4 = ld xo
  Rsh_Fir_reg_xo4_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L222() else D81()
  // L222()
  goto L222_;

L221_:;
  // r119 = dyn base19[x, y](<lang `[`(xo, `!`(dupx))>, <lang `[`(smo, `!`(dupx))>)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_const(CCP, 83);
  Rsh_Fir_array_args187[1] = Rsh_const(CCP, 84);
  SEXP Rsh_Fir_array_arg_names55[2];
  Rsh_Fir_array_arg_names55[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_arg_names55[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 2, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L51(r119)
  // L51(r119)
  Rsh_Fir_reg_r120_ = Rsh_Fir_reg_r119_;
  goto L51_;

D59_:;
  // deopt 206 [r89]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

D60_:;
  // deopt 209 [y11]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_y11_;
  Rsh_Fir_deopt(209, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

D81_:;
  // deopt 267 [xo4]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_xo4_;
  Rsh_Fir_deopt(267, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L46_:;
  // sym16 = ldf `as.integer`
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // base16 = ldf `as.integer` in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args188[2];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args188);
  // if guard16 then L195() else L196()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L195()
    goto L195_;
  } else {
  // L196()
    goto L196_;
  }

L178_:;
  // goto L43(r89)
  // L43(r89)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r89_;
  goto L43_;

L181_:;
  // y12 = force? y11
  Rsh_Fir_reg_y12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y11_);
  // checkMissing(y12)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_y12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // c41 = `is.object`(y12)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_y12_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args190);
  // if c41 then L182() else L183(y12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L182()
    goto L182_;
  } else {
  // L183(y12)
    Rsh_Fir_reg_y14_ = Rsh_Fir_reg_y12_;
    goto L183_;
  }

L187_:;
  // wt5 = ld wt
  Rsh_Fir_reg_wt5_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L189() else D63()
  // L189()
  goto L189_;

L188_:;
  // r94 = dyn base15(<lang `[`(wt, ord)>)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L46(r94)
  // L46(r94)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r94_;
  goto L46_;

L222_:;
  // xo5 = force? xo4
  Rsh_Fir_reg_xo5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xo4_);
  // checkMissing(xo5)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_xo5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty()));
  // c44 = `is.object`(xo5)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_xo5_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args193);
  // if c44 then L223() else L224(xo5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L223()
    goto L223_;
  } else {
  // L224(xo5)
    Rsh_Fir_reg_xo7_ = Rsh_Fir_reg_xo5_;
    goto L224_;
  }

D63_:;
  // deopt 218 [wt5]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_wt5_;
  Rsh_Fir_deopt(218, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L45_:;
  // as_double1 = ldf `as.double` in base
  Rsh_Fir_reg_as_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r93 = dyn as_double1(dx17)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double1_, 1, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L186() else D62()
  // L186()
  goto L186_;

L48_:;
  // sym17 = ldf `as.double`
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // base17 = ldf `as.double` in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args195);
  // if guard17 then L199() else L200()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L199()
    goto L199_;
  } else {
  // L200()
    goto L200_;
  }

L52_:;
  // smo = ld smo
  Rsh_Fir_reg_smo = Rsh_Fir_load(Rsh_const(CCP, 76), RHO);
  // check L227() else D83()
  // L227()
  goto L227_;

L182_:;
  // dr14 = tryDispatchBuiltin.1("[", y12)
  SEXP Rsh_Fir_array_args196[2];
  Rsh_Fir_array_args196[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args196[1] = Rsh_Fir_reg_y12_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args196);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty());
  // if dc7 then L184() else L183(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L184()
    goto L184_;
  } else {
  // L183(dr14)
    Rsh_Fir_reg_y14_ = Rsh_Fir_reg_dr14_;
    goto L183_;
  }

L183_:;
  // ord8 = ld ord
  Rsh_Fir_reg_ord8_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L185() else D61()
  // L185()
  goto L185_;

L189_:;
  // wt6 = force? wt5
  Rsh_Fir_reg_wt6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wt5_);
  // checkMissing(wt6)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_wt6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty()));
  // c42 = `is.object`(wt6)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_wt6_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args199);
  // if c42 then L190() else L191(wt6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L190()
    goto L190_;
  } else {
  // L191(wt6)
    Rsh_Fir_reg_wt8_ = Rsh_Fir_reg_wt6_;
    goto L191_;
  }

L195_:;
  // iper = ld iper
  Rsh_Fir_reg_iper = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L197() else D66()
  // L197()
  goto L197_;

L196_:;
  // r98 = dyn base16(<sym iper>)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L48(r98)
  // L48(r98)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r98_;
  goto L48_;

L223_:;
  // dr20 = tryDispatchBuiltin.1("[", xo5)
  SEXP Rsh_Fir_array_args201[2];
  Rsh_Fir_array_args201[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args201[1] = Rsh_Fir_reg_xo5_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args201);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // if dc10 then L225() else L224(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L225()
    goto L225_;
  } else {
  // L224(dr20)
    Rsh_Fir_reg_xo7_ = Rsh_Fir_reg_dr20_;
    goto L224_;
  }

L224_:;
  // dupx = ld dupx
  Rsh_Fir_reg_dupx = Rsh_Fir_load(Rsh_const(CCP, 80), RHO);
  // check L226() else D82()
  // L226()
  goto L226_;

D61_:;
  // deopt 211 [y14, ord8]
  SEXP Rsh_Fir_array_deopt_stack58[2];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_y14_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_ord8_;
  Rsh_Fir_deopt(211, 2, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

D62_:;
  // deopt 215 [r93]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(215, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

D66_:;
  // deopt 227 [iper]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_iper;
  Rsh_Fir_deopt(227, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

D82_:;
  // deopt 269 [xo7, dupx]
  SEXP Rsh_Fir_array_deopt_stack61[2];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_xo7_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_dupx;
  Rsh_Fir_deopt(269, 2, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

D83_:;
  // deopt 274 [smo]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_smo;
  Rsh_Fir_deopt(274, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L47_:;
  // as_double2 = ldf `as.double` in base
  Rsh_Fir_reg_as_double2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r97 = dyn as_double2(dx19)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double2_, 1, Rsh_Fir_array_args203, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L194() else D65()
  // L194()
  goto L194_;

L49_:;
  // sym18 = ldf `as.double`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // base18 = ldf `as.double` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args204[2];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args204[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args204);
  // if guard18 then L203() else L204()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L203()
    goto L203_;
  } else {
  // L204()
    goto L204_;
  }

L184_:;
  // dx16 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty());
  // goto L45(dx16)
  // L45(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L45_;

L185_:;
  // ord9 = force? ord8
  Rsh_Fir_reg_ord9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ord8_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r92 = dyn __7(y14, ord9)
  SEXP Rsh_Fir_array_args206[2];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_y14_;
  Rsh_Fir_array_args206[1] = Rsh_Fir_reg_ord9_;
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args206, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L45(r92)
  // L45(r92)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r92_;
  goto L45_;

L186_:;
  // goto L44(r93)
  // L44(r93)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r93_;
  goto L44_;

L190_:;
  // dr16 = tryDispatchBuiltin.1("[", wt6)
  SEXP Rsh_Fir_array_args207[2];
  Rsh_Fir_array_args207[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args207[1] = Rsh_Fir_reg_wt6_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args207);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty());
  // if dc8 then L192() else L191(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L192()
    goto L192_;
  } else {
  // L191(dr16)
    Rsh_Fir_reg_wt8_ = Rsh_Fir_reg_dr16_;
    goto L191_;
  }

L191_:;
  // ord10 = ld ord
  Rsh_Fir_reg_ord10_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L193() else D64()
  // L193()
  goto L193_;

L197_:;
  // iper1 = force? iper
  Rsh_Fir_reg_iper1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iper);
  // checkMissing(iper1)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_iper1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty()));
  // as_integer2 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r100 = dyn as_integer2(iper1)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_iper1_;
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer2_, 1, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L198() else D67()
  // L198()
  goto L198_;

L199_:;
  // span7 = ld span
  Rsh_Fir_reg_span7_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L201() else D68()
  // L201()
  goto L201_;

L200_:;
  // r101 = dyn base17(<sym span>)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args211, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L49(r101)
  // L49(r101)
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r101_;
  goto L49_;

L225_:;
  // dx22 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty());
  // goto L52(dx22)
  // L52(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L52_;

L226_:;
  // dupx1 = force? dupx
  Rsh_Fir_reg_dupx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dupx);
  // checkMissing(dupx1)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_dupx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty()));
  // r121 = `!`(dupx1)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_dupx1_;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args214);
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r122 = dyn __9(xo7, r121)
  SEXP Rsh_Fir_array_args215[2];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_xo7_;
  Rsh_Fir_array_args215[1] = Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args215, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L52(r122)
  // L52(r122)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r122_;
  goto L52_;

L227_:;
  // smo1 = force? smo
  Rsh_Fir_reg_smo1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_smo);
  // checkMissing(smo1)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_smo1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty()));
  // c45 = `is.object`(smo1)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_smo1_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args217);
  // if c45 then L228() else L229(smo1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L228()
    goto L228_;
  } else {
  // L229(smo1)
    Rsh_Fir_reg_smo3_ = Rsh_Fir_reg_smo1_;
    goto L229_;
  }

D64_:;
  // deopt 220 [wt8, ord10]
  SEXP Rsh_Fir_array_deopt_stack63[2];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_wt8_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_ord10_;
  Rsh_Fir_deopt(220, 2, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

D65_:;
  // deopt 224 [r97]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

D67_:;
  // deopt 230 [r100]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(230, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

D68_:;
  // deopt 233 [span7]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_span7_;
  Rsh_Fir_deopt(233, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L50_:;
  // double = ldf double
  Rsh_Fir_reg_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 86), RHO);
  // check L207() else D72()
  // L207()
  goto L207_;

L53_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 81), RHO);
  // r125 = dyn list(dx23, dx25)
  SEXP Rsh_Fir_array_args218[2];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_args218[1] = Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L232() else D85()
  // L232()
  goto L232_;

L192_:;
  // dx18 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty());
  // goto L47(dx18)
  // L47(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L47_;

L193_:;
  // ord11 = force? ord10
  Rsh_Fir_reg_ord11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ord10_);
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r96 = dyn __8(wt8, ord11)
  SEXP Rsh_Fir_array_args220[2];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_wt8_;
  Rsh_Fir_array_args220[1] = Rsh_Fir_reg_ord11_;
  SEXP Rsh_Fir_array_arg_names65[2];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args220, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L47(r96)
  // L47(r96)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r96_;
  goto L47_;

L194_:;
  // goto L46(r97)
  // L46(r97)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r97_;
  goto L46_;

L198_:;
  // goto L48(r100)
  // L48(r100)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r100_;
  goto L48_;

L201_:;
  // span8 = force? span7
  Rsh_Fir_reg_span8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_span7_);
  // checkMissing(span8)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_span8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty()));
  // as_double3 = ldf `as.double` in base
  Rsh_Fir_reg_as_double3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r103 = dyn as_double3(span8)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_span8_;
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double3_, 1, Rsh_Fir_array_args222, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L202() else D69()
  // L202()
  goto L202_;

L203_:;
  // bass1 = ld bass
  Rsh_Fir_reg_bass1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L205() else D70()
  // L205()
  goto L205_;

L204_:;
  // r104 = dyn base18(<sym bass>)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names67[1];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args223, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L50(r104)
  // L50(r104)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r104_;
  goto L50_;

L228_:;
  // dr22 = tryDispatchBuiltin.1("[", smo1)
  SEXP Rsh_Fir_array_args224[2];
  Rsh_Fir_array_args224[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_smo1_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args224);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // if dc11 then L230() else L229(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L230()
    goto L230_;
  } else {
  // L229(dr22)
    Rsh_Fir_reg_smo3_ = Rsh_Fir_reg_dr22_;
    goto L229_;
  }

L229_:;
  // dupx2 = ld dupx
  Rsh_Fir_reg_dupx2_ = Rsh_Fir_load(Rsh_const(CCP, 80), RHO);
  // check L231() else D84()
  // L231()
  goto L231_;

D69_:;
  // deopt 236 [r103]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_deopt(236, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

D70_:;
  // deopt 239 [bass1]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_bass1_;
  Rsh_Fir_deopt(239, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

D72_:;
  // deopt 244 []
  Rsh_Fir_deopt(244, 0, NULL, CCP, RHO);
  return R_NilValue;

D84_:;
  // deopt 276 [smo3, dupx2]
  SEXP Rsh_Fir_array_deopt_stack69[2];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_smo3_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_dupx2_;
  Rsh_Fir_deopt(276, 2, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

D85_:;
  // deopt 282 [r125]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_deopt(282, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L202_:;
  // goto L49(r103)
  // L49(r103)
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r103_;
  goto L49_;

L205_:;
  // bass2 = force? bass1
  Rsh_Fir_reg_bass2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bass1_);
  // checkMissing(bass2)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_bass2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty()));
  // as_double4 = ldf `as.double` in base
  Rsh_Fir_reg_as_double4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r106 = dyn as_double4(bass2)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_bass2_;
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double4_, 1, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L206() else D71()
  // L206()
  goto L206_;

L207_:;
  // p7 = prom<V +>{
  //   leno6 = ld leno;
  //   leno7 = force? leno6;
  //   checkMissing(leno7);
  //   return leno7;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605600262_8, 0, NULL, CCP, RHO);
  // r108 = dyn double(p7)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double, 1, Rsh_Fir_array_args229, Rsh_Fir_array_arg_names69, CCP, RHO);
  // check L208() else D73()
  // L208()
  goto L208_;

L230_:;
  // dx24 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty());
  // goto L53(dx24)
  // L53(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L53_;

L231_:;
  // dupx3 = force? dupx2
  Rsh_Fir_reg_dupx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dupx2_);
  // checkMissing(dupx3)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_dupx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty()));
  // r123 = `!`(dupx3)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_dupx3_;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args232);
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r124 = dyn __10(smo3, r123)
  SEXP Rsh_Fir_array_args233[2];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_smo3_;
  Rsh_Fir_array_args233[1] = Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_array_arg_names70[2];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args233, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L53(r124)
  // L53(r124)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r124_;
  goto L53_;

L232_:;
  // goto L51(r125)
  // L51(r125)
  Rsh_Fir_reg_r120_ = Rsh_Fir_reg_r125_;
  goto L51_;

D71_:;
  // deopt 242 [r106]
  SEXP Rsh_Fir_array_deopt_stack71[1];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_deopt(242, 1, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

D73_:;
  // deopt 246 [r108]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(246, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L206_:;
  // goto L50(r106)
  // L50(r106)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r106_;
  goto L50_;

L208_:;
  // double1 = ldf double
  Rsh_Fir_reg_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 86), RHO);
  // check L209() else D74()
  // L209()
  goto L209_;

D74_:;
  // deopt 249 []
  Rsh_Fir_deopt(249, 0, NULL, CCP, RHO);
  return R_NilValue;

L209_:;
  // p8 = prom<V +>{
  //   n8 = ld n;
  //   n9 = force? n8;
  //   checkMissing(n9);
  //   r109 = `*`(n9, 7);
  //   return r109;
  // }
  Rsh_Fir_reg_p8_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605600262_9, 0, NULL, CCP, RHO);
  // r111 = dyn double1(p8)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double1_, 1, Rsh_Fir_array_args236, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L210() else D75()
  // L210()
  goto L210_;

D75_:;
  // deopt 251 [r111]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(251, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L210_:;
  // double2 = ldf double
  Rsh_Fir_reg_double2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 86), RHO);
  // check L211() else D76()
  // L211()
  goto L211_;

D76_:;
  // deopt 253 []
  Rsh_Fir_deopt(253, 0, NULL, CCP, RHO);
  return R_NilValue;

L211_:;
  // r112 = dyn double2(1)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names72[1];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double2_, 1, Rsh_Fir_array_args237, Rsh_Fir_array_arg_names72, CCP, RHO);
  // check L212() else D77()
  // L212()
  goto L212_;

D77_:;
  // deopt 255 [r112]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_r112_;
  Rsh_Fir_deopt(255, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L212_:;
  // _Fortran1 = ldf `.Fortran` in base
  Rsh_Fir_reg__Fortran1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r113 = dyn _Fortran1(C_supsmu1, r85, r88, r91, r95, r99, r102, r105, r108, r111, r112)
  SEXP Rsh_Fir_array_args238[11];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_C_supsmu1_;
  Rsh_Fir_array_args238[1] = Rsh_Fir_reg_r85_;
  Rsh_Fir_array_args238[2] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_args238[3] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_args238[4] = Rsh_Fir_reg_r95_;
  Rsh_Fir_array_args238[5] = Rsh_Fir_reg_r99_;
  Rsh_Fir_array_args238[6] = Rsh_Fir_reg_r102_;
  Rsh_Fir_array_args238[7] = Rsh_Fir_reg_r105_;
  Rsh_Fir_array_args238[8] = Rsh_Fir_reg_r108_;
  Rsh_Fir_array_args238[9] = Rsh_Fir_reg_r111_;
  Rsh_Fir_array_args238[10] = Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_array_arg_names73[11];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_array_arg_names73[2] = R_MissingArg;
  Rsh_Fir_array_arg_names73[3] = R_MissingArg;
  Rsh_Fir_array_arg_names73[4] = R_MissingArg;
  Rsh_Fir_array_arg_names73[5] = R_MissingArg;
  Rsh_Fir_array_arg_names73[6] = R_MissingArg;
  Rsh_Fir_array_arg_names73[7] = R_MissingArg;
  Rsh_Fir_array_arg_names73[8] = R_MissingArg;
  Rsh_Fir_array_arg_names73[9] = R_MissingArg;
  Rsh_Fir_array_arg_names73[10] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Fortran1_, 11, Rsh_Fir_array_args238, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L213() else D78()
  // L213()
  goto L213_;

D78_:;
  // deopt 257 [r113]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_r113_;
  Rsh_Fir_deopt(257, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L213_:;
  // goto L41(r113)
  // L41(r113)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r113_;
  goto L41_;
}
SEXP Rsh_Fir_user_promise_inner2605600262_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2605600262/0: expected 0, got %d", NCAPTURES);

  // sym = ldf rep
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base = ldf rep in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
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
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r2 = dyn rep(1.0, <sym n>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(1.0, <sym n>)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2605600262_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_okay;
  SEXP Rsh_Fir_reg_okay1_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r46_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2605600262/0: expected 0, got %d", NCAPTURES);

  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(x8)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args83);
  // if c34 then L1() else L2(x8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x8)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x8_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", x8)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args84);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // okay = ld okay
  Rsh_Fir_reg_okay = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // okay1 = force? okay
  Rsh_Fir_reg_okay1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r46 = dyn __2(x10, okay1)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_okay1_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r46_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2605600262_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y7_;
  SEXP Rsh_Fir_reg_y8_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_y10_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_okay2_;
  SEXP Rsh_Fir_reg_okay3_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2605600262/0: expected 0, got %d", NCAPTURES);

  // y7 = ld y
  Rsh_Fir_reg_y7_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // y8 = force? y7
  Rsh_Fir_reg_y8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y7_);
  // checkMissing(y8)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_y8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(y8)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_y8_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args89);
  // if c35 then L1() else L2(y8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L1()
    goto L1_;
  } else {
  // L2(y8)
    Rsh_Fir_reg_y10_ = Rsh_Fir_reg_y8_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", y8)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_y8_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args90);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_y10_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // okay2 = ld okay
  Rsh_Fir_reg_okay2_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // okay3 = force? okay2
  Rsh_Fir_reg_okay3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay2_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r48 = dyn __3(y10, okay3)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_y10_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_okay3_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r48_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2605600262_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sprintf;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r72_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2605600262/0: expected 0, got %d", NCAPTURES);

  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // p4 = prom<V +>{
  //   ngettext = ldf ngettext;
  //   p3 = prom<V +>{
  //     diff = ld diff;
  //     diff1 = force? diff;
  //     checkMissing(diff1);
  //     return diff1;
  //   };
  //   r69 = dyn ngettext(p3, "%d observation with NA, NaN or Inf deleted", "%d observations with NAs, NaNs and/or Infs deleted");
  //   return r69;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605600262_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   diff2 = ld diff;
  //   diff3 = force? diff2;
  //   checkMissing(diff3);
  //   return diff3;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605600262_6, 0, NULL, CCP, RHO);
  // r72 = dyn sprintf(p4, p5)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 2, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names42, CCP, RHO);
  // return r72
  return Rsh_Fir_reg_r72_;
}
SEXP Rsh_Fir_user_promise_inner2605600262_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ngettext;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r69_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2605600262/0: expected 0, got %d", NCAPTURES);

  // ngettext = ldf ngettext
  Rsh_Fir_reg_ngettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // p3 = prom<V +>{
  //   diff = ld diff;
  //   diff1 = force? diff;
  //   checkMissing(diff1);
  //   return diff1;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605600262_5, 0, NULL, CCP, RHO);
  // r69 = dyn ngettext(p3, "%d observation with NA, NaN or Inf deleted", "%d observations with NAs, NaNs and/or Infs deleted")
  SEXP Rsh_Fir_array_args155[3];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args155[1] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args155[2] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names41[3];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext, 3, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names41, CCP, RHO);
  // return r69
  return Rsh_Fir_reg_r69_;
}
SEXP Rsh_Fir_user_promise_inner2605600262_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_diff;
  SEXP Rsh_Fir_reg_diff1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2605600262/0: expected 0, got %d", NCAPTURES);

  // diff = ld diff
  Rsh_Fir_reg_diff = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // diff1 = force? diff
  Rsh_Fir_reg_diff1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_diff);
  // checkMissing(diff1)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_diff1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // return diff1
  return Rsh_Fir_reg_diff1_;
}
SEXP Rsh_Fir_user_promise_inner2605600262_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_diff2_;
  SEXP Rsh_Fir_reg_diff3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2605600262/0: expected 0, got %d", NCAPTURES);

  // diff2 = ld diff
  Rsh_Fir_reg_diff2_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // diff3 = force? diff2
  Rsh_Fir_reg_diff3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_diff2_);
  // checkMissing(diff3)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_diff3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // return diff3
  return Rsh_Fir_reg_diff3_;
}
SEXP Rsh_Fir_user_promise_inner2605600262_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xo2_;
  SEXP Rsh_Fir_reg_xo3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2605600262/0: expected 0, got %d", NCAPTURES);

  // xo2 = ld xo
  Rsh_Fir_reg_xo2_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // xo3 = force? xo2
  Rsh_Fir_reg_xo3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xo2_);
  // checkMissing(xo3)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_xo3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty()));
  // return xo3
  return Rsh_Fir_reg_xo3_;
}
SEXP Rsh_Fir_user_promise_inner2605600262_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_leno6_;
  SEXP Rsh_Fir_reg_leno7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2605600262/0: expected 0, got %d", NCAPTURES);

  // leno6 = ld leno
  Rsh_Fir_reg_leno6_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // leno7 = force? leno6
  Rsh_Fir_reg_leno7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_leno6_);
  // checkMissing(leno7)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_leno7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty()));
  // return leno7
  return Rsh_Fir_reg_leno7_;
}
SEXP Rsh_Fir_user_promise_inner2605600262_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_reg_r109_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2605600262/0: expected 0, got %d", NCAPTURES);

  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // checkMissing(n9)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_n9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty()));
  // r109 = `*`(n9, 7)
  SEXP Rsh_Fir_array_args235[2];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_array_args235[1] = Rsh_const(CCP, 87);
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args235);
  // return r109
  return Rsh_Fir_reg_r109_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
