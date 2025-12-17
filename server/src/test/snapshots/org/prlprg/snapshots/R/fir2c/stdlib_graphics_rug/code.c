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
SEXP Rsh_Fir_user_function_inner489004360_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner489004360_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner489004360_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner489004360_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner489004360_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner489004360_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner489004360_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner489004360_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner489004360_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner489004360_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r19_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner489004360
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner489004360_, RHO, CCP);
  // st rug = r
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
  // r1 = dyn base(<sym stats>)
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
  //   stats = ld stats;
  //   stats1 = force? stats;
  //   checkMissing(stats1);
  //   return stats1;
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
  // r5 = dyn base1(<sym faithful>, <lang {
  //   plot(density(eruptions, bw=0.15));
  //   rug(eruptions);
  //   rug(jitter(eruptions, amount=0.01), side=3.0, col="light blue")
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
  //   faithful = ld faithful;
  //   faithful1 = force? faithful;
  //   checkMissing(faithful1);
  //   return faithful1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   plot = ldf plot;
  //   p3 = prom<V +>{
  //     density = ldf density;
  //     p2 = prom<V +>{
  //       eruptions = ld eruptions;
  //       eruptions1 = force? eruptions;
  //       checkMissing(eruptions1);
  //       return eruptions1;
  //     };
  //     r9 = dyn density[, bw](p2, 0.15);
  //     return r9;
  //   };
  //   dyn plot(p3);
  //   rug = ldf rug;
  //   p4 = prom<V +>{
  //     eruptions2 = ld eruptions;
  //     eruptions3 = force? eruptions2;
  //     checkMissing(eruptions3);
  //     return eruptions3;
  //   };
  //   dyn rug(p4);
  //   rug1 = ldf rug;
  //   p6 = prom<V +>{
  //     jitter = ldf jitter;
  //     p5 = prom<V +>{
  //       eruptions4 = ld eruptions;
  //       eruptions5 = force? eruptions4;
  //       checkMissing(eruptions5);
  //       return eruptions5;
  //     };
  //     r15 = dyn jitter[, amount](p5, 0.01);
  //     return r15;
  //   };
  //   r17 = dyn rug1[, side, col](p6, 3.0, "light blue");
  //   return r17;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r19 = dyn with(p1, p7)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_with, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 13 [r19]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L1(r19)
  // L1(r19)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r19_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stats;
  SEXP Rsh_Fir_reg_stats1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // stats = ld stats
  Rsh_Fir_reg_stats = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // stats1 = force? stats
  Rsh_Fir_reg_stats1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stats);
  // checkMissing(stats1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_stats1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return stats1
  return Rsh_Fir_reg_stats1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_faithful;
  SEXP Rsh_Fir_reg_faithful1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // faithful = ld faithful
  Rsh_Fir_reg_faithful = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // faithful1 = force? faithful
  Rsh_Fir_reg_faithful1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_faithful);
  // checkMissing(faithful1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_faithful1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return faithful1
  return Rsh_Fir_reg_faithful1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_rug;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_rug1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // p3 = prom<V +>{
  //   density = ldf density;
  //   p2 = prom<V +>{
  //     eruptions = ld eruptions;
  //     eruptions1 = force? eruptions;
  //     checkMissing(eruptions1);
  //     return eruptions1;
  //   };
  //   r9 = dyn density[, bw](p2, 0.15);
  //   return r9;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // dyn plot(p3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  (void)(Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO));
  // rug = ldf rug
  Rsh_Fir_reg_rug = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p4 = prom<V +>{
  //   eruptions2 = ld eruptions;
  //   eruptions3 = force? eruptions2;
  //   checkMissing(eruptions3);
  //   return eruptions3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // dyn rug(p4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  (void)(Rsh_Fir_call_dynamic(Rsh_Fir_reg_rug, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO));
  // rug1 = ldf rug
  Rsh_Fir_reg_rug1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p6 = prom<V +>{
  //   jitter = ldf jitter;
  //   p5 = prom<V +>{
  //     eruptions4 = ld eruptions;
  //     eruptions5 = force? eruptions4;
  //     checkMissing(eruptions5);
  //     return eruptions5;
  //   };
  //   r15 = dyn jitter[, amount](p5, 0.01);
  //   return r15;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r17 = dyn rug1[, side, col](p6, 3.0, "light blue")
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rug1_, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_density;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // density = ldf density
  Rsh_Fir_reg_density = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // p2 = prom<V +>{
  //   eruptions = ld eruptions;
  //   eruptions1 = force? eruptions;
  //   checkMissing(eruptions1);
  //   return eruptions1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r9 = dyn density[, bw](p2, 0.15)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_density, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_eruptions;
  SEXP Rsh_Fir_reg_eruptions1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // eruptions = ld eruptions
  Rsh_Fir_reg_eruptions = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // eruptions1 = force? eruptions
  Rsh_Fir_reg_eruptions1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eruptions);
  // checkMissing(eruptions1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_eruptions1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return eruptions1
  return Rsh_Fir_reg_eruptions1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_eruptions2_;
  SEXP Rsh_Fir_reg_eruptions3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // eruptions2 = ld eruptions
  Rsh_Fir_reg_eruptions2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // eruptions3 = force? eruptions2
  Rsh_Fir_reg_eruptions3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eruptions2_);
  // checkMissing(eruptions3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_eruptions3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return eruptions3
  return Rsh_Fir_reg_eruptions3_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_jitter;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // jitter = ldf jitter
  Rsh_Fir_reg_jitter = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // p5 = prom<V +>{
  //   eruptions4 = ld eruptions;
  //   eruptions5 = force? eruptions4;
  //   checkMissing(eruptions5);
  //   return eruptions5;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r15 = dyn jitter[, amount](p5, 0.01)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_jitter, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_eruptions4_;
  SEXP Rsh_Fir_reg_eruptions5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // eruptions4 = ld eruptions
  Rsh_Fir_reg_eruptions4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // eruptions5 = force? eruptions4
  Rsh_Fir_reg_eruptions5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eruptions4_);
  // checkMissing(eruptions5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_eruptions5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return eruptions5
  return Rsh_Fir_reg_eruptions5_;
}
SEXP Rsh_Fir_user_function_inner489004360_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner489004360 dynamic dispatch ([x, ticksize, side, lwd, col, quiet, `...`])

  return Rsh_Fir_user_version_inner489004360_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner489004360_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner489004360 version 0 (*, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner489004360/0: expected 7, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_ticksize;
  SEXP Rsh_Fir_reg_side;
  SEXP Rsh_Fir_reg_lwd;
  SEXP Rsh_Fir_reg_col;
  SEXP Rsh_Fir_reg_quiet;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_ticksize_isMissing;
  SEXP Rsh_Fir_reg_ticksize_orDefault;
  SEXP Rsh_Fir_reg_side_isMissing;
  SEXP Rsh_Fir_reg_side_orDefault;
  SEXP Rsh_Fir_reg_lwd_isMissing;
  SEXP Rsh_Fir_reg_lwd_orDefault;
  SEXP Rsh_Fir_reg_col_isMissing;
  SEXP Rsh_Fir_reg_col_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_quiet_isMissing;
  SEXP Rsh_Fir_reg_quiet_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_as_vector;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_is_finite;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_ok;
  SEXP Rsh_Fir_reg_ok1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_quiet1_;
  SEXP Rsh_Fir_reg_quiet2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_par1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_side1_;
  SEXP Rsh_Fir_reg_side2_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_par2_;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_u;
  SEXP Rsh_Fir_reg_u1_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_u3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_u4_;
  SEXP Rsh_Fir_reg_u5_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_u7_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_par3_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_u8_;
  SEXP Rsh_Fir_reg_u9_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_u11_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_u12_;
  SEXP Rsh_Fir_reg_u13_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_u15_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_u16_;
  SEXP Rsh_Fir_reg_u17_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_u19_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_u20_;
  SEXP Rsh_Fir_reg_u21_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_u23_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_Axis;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r53_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ticksize = PARAMS[1];
  Rsh_Fir_reg_side = PARAMS[2];
  Rsh_Fir_reg_lwd = PARAMS[3];
  Rsh_Fir_reg_col = PARAMS[4];
  Rsh_Fir_reg_quiet = PARAMS[5];
  Rsh_Fir_reg_ddd = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // ticksize_isMissing = missing.0(ticksize)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ticksize;
  Rsh_Fir_reg_ticksize_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args16);
  // if ticksize_isMissing then L0(0.03) else L0(ticksize)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ticksize_isMissing)) {
  // L0(0.03)
    Rsh_Fir_reg_ticksize_orDefault = Rsh_const(CCP, 19);
    goto L0_;
  } else {
  // L0(ticksize)
    Rsh_Fir_reg_ticksize_orDefault = Rsh_Fir_reg_ticksize;
    goto L0_;
  }

L0_:;
  // st ticksize = ticksize_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_ticksize_orDefault, RHO);
  (void)(Rsh_Fir_reg_ticksize_orDefault);
  // side_isMissing = missing.0(side)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_side;
  Rsh_Fir_reg_side_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args17);
  // if side_isMissing then L1(1.0) else L1(side)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_side_isMissing)) {
  // L1(1.0)
    Rsh_Fir_reg_side_orDefault = Rsh_const(CCP, 21);
    goto L1_;
  } else {
  // L1(side)
    Rsh_Fir_reg_side_orDefault = Rsh_Fir_reg_side;
    goto L1_;
  }

L1_:;
  // st side = side_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_side_orDefault, RHO);
  (void)(Rsh_Fir_reg_side_orDefault);
  // lwd_isMissing = missing.0(lwd)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_lwd;
  Rsh_Fir_reg_lwd_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args18);
  // if lwd_isMissing then L2(0.5) else L2(lwd)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lwd_isMissing)) {
  // L2(0.5)
    Rsh_Fir_reg_lwd_orDefault = Rsh_const(CCP, 22);
    goto L2_;
  } else {
  // L2(lwd)
    Rsh_Fir_reg_lwd_orDefault = Rsh_Fir_reg_lwd;
    goto L2_;
  }

L2_:;
  // st lwd = lwd_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_lwd_orDefault, RHO);
  (void)(Rsh_Fir_reg_lwd_orDefault);
  // col_isMissing = missing.0(col)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_col;
  Rsh_Fir_reg_col_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args19);
  // if col_isMissing then L3() else L4(col)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_col_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(col)
    Rsh_Fir_reg_col_orDefault = Rsh_Fir_reg_col;
    goto L4_;
  }

L3_:;
  // p = prom<V +>{
  //   par = ldf par;
  //   r = dyn par("fg");
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner489004360_, 0, NULL, CCP, RHO);
  // goto L4(p)
  // L4(p)
  Rsh_Fir_reg_col_orDefault = Rsh_Fir_reg_p1;
  goto L4_;

L4_:;
  // st col = col_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_col_orDefault, RHO);
  (void)(Rsh_Fir_reg_col_orDefault);
  // quiet_isMissing = missing.0(quiet)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_quiet;
  Rsh_Fir_reg_quiet_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args21);
  // if quiet_isMissing then L5() else L6(quiet)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_quiet_isMissing)) {
  // L5()
    goto L5_;
  } else {
  // L6(quiet)
    Rsh_Fir_reg_quiet_orDefault = Rsh_Fir_reg_quiet;
    goto L6_;
  }

L5_:;
  // p1 = prom<V +>{
  //   getOption = ldf getOption;
  //   r2 = dyn getOption("warn");
  //   r3 = `<`(r2, 0.0);
  //   return r3;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner489004360_1, 0, NULL, CCP, RHO);
  // goto L6(p1)
  // L6(p1)
  Rsh_Fir_reg_quiet_orDefault = Rsh_Fir_reg_p1_1;
  goto L6_;

L6_:;
  // st quiet = quiet_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_quiet_orDefault, RHO);
  (void)(Rsh_Fir_reg_quiet_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p2 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner489004360_2, 0, NULL, CCP, RHO);
  // r6 = dyn as_vector(p2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 3 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L24_:;
  // st x = r6
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r6_1, RHO);
  (void)(Rsh_Fir_reg_r6_1);
  // sym = ldf `is.finite`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base = ldf `is.finite` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L7_:;
  // st ok = r8
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

L25_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

L26_:;
  // r7 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L7(r7)
  // L7(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L7_;

D2_:;
  // deopt 7 [x3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 12 [x5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L27_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r9 = dyn is_finite(x4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

L29_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args31);
  // if c then L30() else L31(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L30()
    goto L30_;
  } else {
  // L31(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L31_;
  }

D3_:;
  // deopt 10 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L8_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // quiet1 = ld quiet
  Rsh_Fir_reg_quiet1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L34() else D6()
  // L34()
  goto L34_;

L28_:;
  // goto L7(r9)
  // L7(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_1;
  goto L7_;

L30_:;
  // dr = tryDispatchBuiltin.1("[", x6)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc then L32() else L31(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L32()
    goto L32_;
  } else {
  // L31(dr)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr;
    goto L31_;
  }

L31_:;
  // ok = ld ok
  Rsh_Fir_reg_ok = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L33() else D5()
  // L33()
  goto L33_;

D5_:;
  // deopt 14 [x8, ok]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_ok;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 18 [quiet1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_quiet1_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L32_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L8(dx)
  // L8(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

L33_:;
  // ok1 = force? ok
  Rsh_Fir_reg_ok1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r10 = dyn __(x8, ok1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_ok1_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L8(r10)
  // L8(r10)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L8_;

L34_:;
  // quiet2 = force? quiet1
  Rsh_Fir_reg_quiet2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quiet1_);
  // checkMissing(quiet2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_quiet2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // r11 = `!`(quiet2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_quiet2_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args37);
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // if c1 then L35() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L35()
    goto L35_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // Axis = ldf Axis
  Rsh_Fir_reg_Axis = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L84() else D26()
  // L84()
  goto L84_;

L35_:;
  // par1 = ldf par
  Rsh_Fir_reg_par1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

D7_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 94 []
  Rsh_Fir_deopt(94, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // r12 = dyn par1("usr")
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par1_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

L84_:;
  // p3 = prom<V +>{
  //   side3 = ld side;
  //   side4 = force? side3;
  //   checkMissing(side4);
  //   return side4;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner489004360_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   x21 = ld x;
  //   x22 = force? x21;
  //   checkMissing(x22);
  //   return x22;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner489004360_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   lwd1 = ld lwd;
  //   lwd2 = force? lwd1;
  //   checkMissing(lwd2);
  //   return lwd2;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner489004360_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   col1 = ld col;
  //   col2 = force? col1;
  //   checkMissing(col2);
  //   return col2;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner489004360_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   ticksize1 = ld ticksize;
  //   ticksize2 = force? ticksize1;
  //   checkMissing(ticksize2);
  //   return ticksize2;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner489004360_7, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // r53 = dyn Axis[side, at, labels, lwd, `lwd.ticks`, `col.ticks`, tck, `...`](p3, p4, FALSE, 0.0, p5, p6, p7, ddd1)
  SEXP Rsh_Fir_array_args45[8];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args45[3] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args45[4] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args45[5] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args45[6] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args45[7] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names16[8];
  Rsh_Fir_array_arg_names16[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 40);
  Rsh_Fir_array_arg_names16[3] = Rsh_const(CCP, 23);
  Rsh_Fir_array_arg_names16[4] = Rsh_const(CCP, 41);
  Rsh_Fir_array_arg_names16[5] = Rsh_const(CCP, 42);
  Rsh_Fir_array_arg_names16[6] = Rsh_const(CCP, 43);
  Rsh_Fir_array_arg_names16[7] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Axis, 8, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L85() else D27()
  // L85()
  goto L85_;

D8_:;
  // deopt 24 [r12]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 110 [r53]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L37_:;
  // st u = r12
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // side1 = ld side
  Rsh_Fir_reg_side1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

L85_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r53
  return Rsh_Fir_reg_r53_;

D9_:;
  // deopt 27 [side1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_side1_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L38_:;
  // side2 = force? side1
  Rsh_Fir_reg_side2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_side1_);
  // checkMissing(side2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_side2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // __1 = ldf `%%` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r13 = dyn __1(side2, 2.0)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_side2_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L39() else D10()
  // L39()
  goto L39_;

D10_:;
  // deopt 31 [r13]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L39_:;
  // r14 = `==`(r13, 1.0)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args48);
  // c2 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args49);
  // if c2 then L40() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L40()
    goto L40_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // par3 = ldf par
  Rsh_Fir_reg_par3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L54() else D15()
  // L54()
  goto L54_;

L14_:;
  // st u = r24
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // sym1 = ldf any
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base1 = ldf any in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard1 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L40_:;
  // par2 = ldf par
  Rsh_Fir_reg_par2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

D11_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // c11 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args51);
  // if c11 then L79() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L79()
    goto L79_;
  } else {
  // L20()
    goto L20_;
  }

L41_:;
  // r15 = dyn par2("xlog")
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par2_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L42() else D12()
  // L42()
  goto L42_;

L54_:;
  // r25 = dyn par3("ylog")
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par3_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L55() else D16()
  // L55()
  goto L55_;

L66_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L68() else D19()
  // L68()
  goto L68_;

L67_:;
  // r33 = dyn base1(<lang `|`(`<`(x, `[`(u, 1)), `>`(x, `[`(u, 2)))>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L17(r33)
  // L17(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L17_;

D12_:;
  // deopt 37 [r15]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 53 [r25]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 69 [x9]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L21(NULL)
  // L21(NULL)
  Rsh_Fir_reg_r46_ = Rsh_const(CCP, 51);
  goto L21_;

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L42_:;
  // c3 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args55);
  // if c3 then L43() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L43()
    goto L43_;
  } else {
  // L11()
    goto L11_;
  }

L55_:;
  // c6 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args56);
  // if c6 then L56() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L56()
    goto L56_;
  } else {
  // L15()
    goto L15_;
  }

L68_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // u16 = ld u
  Rsh_Fir_reg_u16_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L69() else D20()
  // L69()
  goto L69_;

L79_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L80() else D24()
  // L80()
  goto L80_;

D20_:;
  // deopt 70 [x10, u16]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_u16_;
  Rsh_Fir_deopt(70, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 86 []
  Rsh_Fir_deopt(86, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // u4 = ld u
  Rsh_Fir_reg_u4_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L49() else D14()
  // L49()
  goto L49_;

L13_:;
  // goto L14(r22)
  // L14(r22)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r22_;
  goto L14_;

L15_:;
  // u12 = ld u
  Rsh_Fir_reg_u12_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L62() else D18()
  // L62()
  goto L62_;

L43_:;
  // u = ld u
  Rsh_Fir_reg_u = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L44() else D13()
  // L44()
  goto L44_;

L56_:;
  // u8 = ld u
  Rsh_Fir_reg_u8_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L57() else D17()
  // L57()
  goto L57_;

L69_:;
  // u17 = force? u16
  Rsh_Fir_reg_u17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u16_);
  // checkMissing(u17)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_u17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(u17)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_u17_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args59);
  // if c9 then L70() else L71(x10, u17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L70()
    goto L70_;
  } else {
  // L71(x10, u17)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    Rsh_Fir_reg_u19_ = Rsh_Fir_reg_u17_;
    goto L71_;
  }

L80_:;
  // r45 = dyn warning("some values will be clipped")
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L81() else D25()
  // L81()
  goto L81_;

D13_:;
  // deopt 39 [10.0, u]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_u;
  Rsh_Fir_deopt(39, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 45 [u4]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_u4_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 55 [10.0, u8]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_u8_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 61 [u12]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_u12_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 88 [r45]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L18_:;
  // r36 = `<`(x14, dx9)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args61);
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L73() else D21()
  // L73()
  goto L73_;

L44_:;
  // u1 = force? u
  Rsh_Fir_reg_u1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u);
  // checkMissing(u1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_u1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(u1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_u1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args63);
  // if c4 then L45() else L46(10.0, u1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L45()
    goto L45_;
  } else {
  // L46(10.0, u1)
    Rsh_Fir_reg_r17_1 = Rsh_const(CCP, 54);
    Rsh_Fir_reg_u3_ = Rsh_Fir_reg_u1_;
    goto L46_;
  }

L49_:;
  // u5 = force? u4
  Rsh_Fir_reg_u5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u4_);
  // checkMissing(u5)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_u5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(u5)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_u5_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args65);
  // if c5 then L50() else L51(u5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L50()
    goto L50_;
  } else {
  // L51(u5)
    Rsh_Fir_reg_u7_ = Rsh_Fir_reg_u5_;
    goto L51_;
  }

L57_:;
  // u9 = force? u8
  Rsh_Fir_reg_u9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u8_);
  // checkMissing(u9)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_u9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(u9)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_u9_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args67);
  // if c7 then L58() else L59(10.0, u9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L58()
    goto L58_;
  } else {
  // L59(10.0, u9)
    Rsh_Fir_reg_r27_ = Rsh_const(CCP, 54);
    Rsh_Fir_reg_u11_ = Rsh_Fir_reg_u9_;
    goto L59_;
  }

L62_:;
  // u13 = force? u12
  Rsh_Fir_reg_u13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u12_);
  // checkMissing(u13)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_u13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(u13)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_u13_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args69);
  // if c8 then L63() else L64(u13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L63()
    goto L63_;
  } else {
  // L64(u13)
    Rsh_Fir_reg_u15_ = Rsh_Fir_reg_u13_;
    goto L64_;
  }

L70_:;
  // dr10 = tryDispatchBuiltin.1("[", u17)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_u17_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc5 then L72() else L71(x10, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L72()
    goto L72_;
  } else {
  // L71(x10, dr10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    Rsh_Fir_reg_u19_ = Rsh_Fir_reg_dr10_;
    goto L71_;
  }

L71_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r35 = dyn __6(u19, 1)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_u19_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L18(x12, r35)
  // L18(x12, r35)
  Rsh_Fir_reg_x14_ = Rsh_Fir_reg_x12_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r35_;
  goto L18_;

L81_:;
  // goto L21(r45)
  // L21(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L21_;

D21_:;
  // deopt 75 [r36, x15]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L12_:;
  // r21 = `^`(r19, dx3)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args73);
  // goto L13(r21)
  // L13(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L13_;

L16_:;
  // r31 = `^`(r29, dx6)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args74);
  // goto L14(r31)
  // L14(r31)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r31_;
  goto L14_;

L45_:;
  // dr2 = tryDispatchBuiltin.1("[", u1)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_u1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args75);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if dc1 then L47() else L46(10.0, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L47()
    goto L47_;
  } else {
  // L46(10.0, dr2)
    Rsh_Fir_reg_r17_1 = Rsh_const(CCP, 54);
    Rsh_Fir_reg_u3_ = Rsh_Fir_reg_dr2_;
    goto L46_;
  }

L46_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r20 = dyn __2(u3, <int 1, 2>)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_u3_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L12(r17, r20)
  // L12(r17, r20)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r17_1;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r20_;
  goto L12_;

L50_:;
  // dr4 = tryDispatchBuiltin.1("[", u5)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_u5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args78);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc2 then L52() else L51(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L52()
    goto L52_;
  } else {
  // L51(dr4)
    Rsh_Fir_reg_u7_ = Rsh_Fir_reg_dr4_;
    goto L51_;
  }

L51_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r23 = dyn __3(u7, <int 1, 2>)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_u7_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L13(r23)
  // L13(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L13_;

L58_:;
  // dr6 = tryDispatchBuiltin.1("[", u9)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_u9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args81);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if dc3 then L60() else L59(10.0, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L60()
    goto L60_;
  } else {
  // L59(10.0, dr6)
    Rsh_Fir_reg_r27_ = Rsh_const(CCP, 54);
    Rsh_Fir_reg_u11_ = Rsh_Fir_reg_dr6_;
    goto L59_;
  }

L59_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r30 = dyn __4(u11, <int 3, 4>)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_u11_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L16(r27, r30)
  // L16(r27, r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r30_;
  goto L16_;

L63_:;
  // dr8 = tryDispatchBuiltin.1("[", u13)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_u13_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args84);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc4 then L65() else L64(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L65()
    goto L65_;
  } else {
  // L64(dr8)
    Rsh_Fir_reg_u15_ = Rsh_Fir_reg_dr8_;
    goto L64_;
  }

L64_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r32 = dyn __5(u15, <int 3, 4>)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_u15_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L14(r32)
  // L14(r32)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r32_;
  goto L14_;

L72_:;
  // dx8 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L18(x10, dx8)
  // L18(x10, dx8)
  Rsh_Fir_reg_x14_ = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L18_;

L73_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // u20 = ld u
  Rsh_Fir_reg_u20_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L74() else D22()
  // L74()
  goto L74_;

D22_:;
  // deopt 76 [r36, x16, u20]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_u20_;
  Rsh_Fir_deopt(76, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L47_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L12(10.0, dx2)
  // L12(10.0, dx2)
  Rsh_Fir_reg_r19_1 = Rsh_const(CCP, 54);
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L12_;

L52_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L13(dx4)
  // L13(dx4)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_dx4_;
  goto L13_;

L60_:;
  // dx5 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L16(10.0, dx5)
  // L16(10.0, dx5)
  Rsh_Fir_reg_r29_ = Rsh_const(CCP, 54);
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L16_;

L65_:;
  // dx7 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // goto L14(dx7)
  // L14(dx7)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_dx7_;
  goto L14_;

L74_:;
  // u21 = force? u20
  Rsh_Fir_reg_u21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u20_);
  // checkMissing(u21)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_u21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(u21)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_u21_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args94);
  // if c10 then L75() else L76(r36, x16, u21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L75()
    goto L75_;
  } else {
  // L76(r36, x16, u21)
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r36_;
    Rsh_Fir_reg_x18_ = Rsh_Fir_reg_x16_;
    Rsh_Fir_reg_u23_ = Rsh_Fir_reg_u21_;
    goto L76_;
  }

L19_:;
  // r42 = `>`(x20, dx11)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args95);
  // r43 = `||`(r40, r42)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args96);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r44 = dyn any(r43)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L78() else D23()
  // L78()
  goto L78_;

L75_:;
  // dr12 = tryDispatchBuiltin.1("[", u21)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_u21_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc6 then L77() else L76(r36, x16, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L77()
    goto L77_;
  } else {
  // L76(r36, x16, dr12)
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r36_;
    Rsh_Fir_reg_x18_ = Rsh_Fir_reg_x16_;
    Rsh_Fir_reg_u23_ = Rsh_Fir_reg_dr12_;
    goto L76_;
  }

L76_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r41 = dyn __7(u23, 2)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_u23_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L19(r38, x18, r41)
  // L19(r38, x18, r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r41_;
  goto L19_;

D23_:;
  // deopt 84 [r44]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L77_:;
  // dx10 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // goto L19(r36, x16, dx10)
  // L19(r36, x16, dx10)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x16_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L19_;

L78_:;
  // goto L17(r44)
  // L17(r44)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r44_;
  goto L17_;
}
SEXP Rsh_Fir_user_promise_inner489004360_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_par;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner489004360/0: expected 0, got %d", NCAPTURES);

  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // r = dyn par("fg")
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner489004360_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getOption;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner489004360/0: expected 0, got %d", NCAPTURES);

  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // r2 = dyn getOption("warn")
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // r3 = `<`(r2, 0.0)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args23);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_inner489004360_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner489004360/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner489004360_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_side3_;
  SEXP Rsh_Fir_reg_side4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner489004360/0: expected 0, got %d", NCAPTURES);

  // side3 = ld side
  Rsh_Fir_reg_side3_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // side4 = force? side3
  Rsh_Fir_reg_side4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_side3_);
  // checkMissing(side4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_side4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return side4
  return Rsh_Fir_reg_side4_;
}
SEXP Rsh_Fir_user_promise_inner489004360_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_x22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner489004360/0: expected 0, got %d", NCAPTURES);

  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return x22
  return Rsh_Fir_reg_x22_;
}
SEXP Rsh_Fir_user_promise_inner489004360_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lwd1_;
  SEXP Rsh_Fir_reg_lwd2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner489004360/0: expected 0, got %d", NCAPTURES);

  // lwd1 = ld lwd
  Rsh_Fir_reg_lwd1_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // lwd2 = force? lwd1
  Rsh_Fir_reg_lwd2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lwd1_);
  // checkMissing(lwd2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_lwd2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return lwd2
  return Rsh_Fir_reg_lwd2_;
}
SEXP Rsh_Fir_user_promise_inner489004360_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_col1_;
  SEXP Rsh_Fir_reg_col2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner489004360/0: expected 0, got %d", NCAPTURES);

  // col1 = ld col
  Rsh_Fir_reg_col1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // col2 = force? col1
  Rsh_Fir_reg_col2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col1_);
  // checkMissing(col2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_col2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return col2
  return Rsh_Fir_reg_col2_;
}
SEXP Rsh_Fir_user_promise_inner489004360_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ticksize1_;
  SEXP Rsh_Fir_reg_ticksize2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner489004360/0: expected 0, got %d", NCAPTURES);

  // ticksize1 = ld ticksize
  Rsh_Fir_reg_ticksize1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // ticksize2 = force? ticksize1
  Rsh_Fir_reg_ticksize2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ticksize1_);
  // checkMissing(ticksize2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_ticksize2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return ticksize2
  return Rsh_Fir_reg_ticksize2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
