#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner4222064650_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4222064650_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4222064650_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4222064650_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4222064650_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4222064650_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4222064650_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4222064650_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4222064650_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4222064650_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4222064650_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4222064650_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4222064650_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_biplot;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r8_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4222064650
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4222064650_, RHO, CCP);
  // st `biplot.princomp` = r
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
  // biplot = ldf biplot
  Rsh_Fir_reg_biplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
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
  // p2 = prom<V +>{
  //   princomp = ldf princomp;
  //   p1 = prom<V +>{
  //     USArrests = ld USArrests;
  //     USArrests1 = force? USArrests;
  //     checkMissing(USArrests1);
  //     return USArrests1;
  //   };
  //   r6 = dyn princomp(p1);
  //   return r6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r8 = dyn biplot(p2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_biplot, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
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
  // deopt 11 [r8]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0()
  // L0()
  goto L0_;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;
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
  SEXP Rsh_Fir_reg_princomp;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // princomp = ldf princomp
  Rsh_Fir_reg_princomp = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // p1 = prom<V +>{
  //   USArrests = ld USArrests;
  //   USArrests1 = force? USArrests;
  //   checkMissing(USArrests1);
  //   return USArrests1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r6 = dyn princomp(p1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_princomp, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_USArrests;
  SEXP Rsh_Fir_reg_USArrests1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // USArrests = ld USArrests
  Rsh_Fir_reg_USArrests = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // USArrests1 = force? USArrests
  Rsh_Fir_reg_USArrests1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_USArrests);
  // checkMissing(USArrests1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_USArrests1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return USArrests1
  return Rsh_Fir_reg_USArrests1_;
}
SEXP Rsh_Fir_user_function_inner4222064650_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4222064650 dynamic dispatch ([x, choices, scale, `pc.biplot`, `...`])

  return Rsh_Fir_user_version_inner4222064650_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4222064650_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4222064650 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner4222064650/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_choices;
  SEXP Rsh_Fir_reg_scale;
  SEXP Rsh_Fir_reg_pc_biplot;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_choices_isMissing;
  SEXP Rsh_Fir_reg_choices_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_scale_isMissing;
  SEXP Rsh_Fir_reg_scale_orDefault;
  SEXP Rsh_Fir_reg_pc_biplot_isMissing;
  SEXP Rsh_Fir_reg_pc_biplot_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_choices1_;
  SEXP Rsh_Fir_reg_choices2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_choices3_;
  SEXP Rsh_Fir_reg_choices4_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_lam;
  SEXP Rsh_Fir_reg_lam1_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_lam4_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_scale1_;
  SEXP Rsh_Fir_reg_scale2_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_scale3_;
  SEXP Rsh_Fir_reg_scale4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_scale5_;
  SEXP Rsh_Fir_reg_scale6_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_lam5_;
  SEXP Rsh_Fir_reg_lam6_;
  SEXP Rsh_Fir_reg_scale7_;
  SEXP Rsh_Fir_reg_scale8_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_pc_biplot1_;
  SEXP Rsh_Fir_reg_pc_biplot2_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_lam7_;
  SEXP Rsh_Fir_reg_lam8_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_lam11_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_biplot_default;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r61_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_choices = PARAMS[1];
  Rsh_Fir_reg_scale = PARAMS[2];
  Rsh_Fir_reg_pc_biplot = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // choices_isMissing = missing.0(choices)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_choices;
  Rsh_Fir_reg_choices_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if choices_isMissing then L0() else L1(choices)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_choices_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(choices)
    Rsh_Fir_reg_choices_orDefault = Rsh_Fir_reg_choices;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   return <int 1, 2>;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4222064650_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_choices_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st choices = choices_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_choices_orDefault, RHO);
  (void)(Rsh_Fir_reg_choices_orDefault);
  // scale_isMissing = missing.0(scale)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_scale;
  Rsh_Fir_reg_scale_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if scale_isMissing then L2(1.0) else L2(scale)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_scale_isMissing)) {
  // L2(1.0)
    Rsh_Fir_reg_scale_orDefault = Rsh_const(CCP, 9);
    goto L2_;
  } else {
  // L2(scale)
    Rsh_Fir_reg_scale_orDefault = Rsh_Fir_reg_scale;
    goto L2_;
  }

L2_:;
  // st scale = scale_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_scale_orDefault, RHO);
  (void)(Rsh_Fir_reg_scale_orDefault);
  // pc_biplot_isMissing = missing.0(pc_biplot)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_pc_biplot;
  Rsh_Fir_reg_pc_biplot_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if pc_biplot_isMissing then L3(FALSE) else L3(pc_biplot)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pc_biplot_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_pc_biplot_orDefault = Rsh_const(CCP, 11);
    goto L3_;
  } else {
  // L3(pc_biplot)
    Rsh_Fir_reg_pc_biplot_orDefault = Rsh_Fir_reg_pc_biplot;
    goto L3_;
  }

L3_:;
  // st `pc.biplot` = pc_biplot_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_pc_biplot_orDefault, RHO);
  (void)(Rsh_Fir_reg_pc_biplot_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L4_:;
  // r4 = `!=`(r2, 2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args11);
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c then L25() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L25()
    goto L25_;
  } else {
  // L5()
    goto L5_;
  }

L21_:;
  // choices1 = ld choices
  Rsh_Fir_reg_choices1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L22_:;
  // r1 = dyn base(<sym choices>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L4(r1)
  // L4(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_1;
  goto L4_;

D0_:;
  // deopt 2 [choices1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_choices1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L23_:;
  // choices2 = force? choices1
  Rsh_Fir_reg_choices2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_choices1_);
  // checkMissing(choices2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_choices2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r3 = dyn length(choices2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_choices2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

L25_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L26() else D2()
  // L26()
  goto L26_;

D1_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // r11 = `!`(r8)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args17);
  // c2 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // if c2 then L37() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L37()
    goto L37_;
  } else {
  // L8()
    goto L8_;
  }

L24_:;
  // goto L4(r3)
  // L4(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L4_;

L26_:;
  // r5 = dyn stop("length of choices must be 2")
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

L29_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L31() else D4()
  // L31()
  goto L31_;

L30_:;
  // r7 = dyn base1(<lang `<-`(scores, `$`(x, scores))>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L7(r7)
  // L7(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_;
  goto L7_;

D3_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 16 [x1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L41() else D8()
  // L41()
  goto L41_;

L27_:;
  // goto L6()
  // L6()
  goto L6_;

L31_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(x2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args22);
  // if c1 then L33() else L34(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L33()
    goto L33_;
  } else {
  // L34(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L34_;
  }

L37_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 31 [x5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L32_:;
  // st scores = dx1
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r10 = dyn length1(dx1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L36() else D5()
  // L36()
  goto L36_;

L33_:;
  // dr = tryDispatchBuiltin.1("$", x2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc then L35() else L34(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L35()
    goto L35_;
  } else {
  // L34(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L34_;
  }

L34_:;
  // r9 = `$`(x4, <sym scores>)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args26);
  // goto L32(r9)
  // L32(r9)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_;
  goto L32_;

L38_:;
  // p3 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   p2 = prom<V +>{
  //     deparse1 = ldf deparse1;
  //     p1 = prom<V +>{
  //       sym2 = ldf substitute;
  //       base2 = ldf substitute in base;
  //       guard2 = `==`.4(sym2, base2);
  //       if guard2 then L1() else L2();
  //     L0(r13):
  //       return r13;
  //     L1():
  //       substitute = ldf substitute in base;
  //       r14 = dyn substitute(<sym x>);
  //       goto L0(r14);
  //     L2():
  //       r12 = dyn base2(<sym x>);
  //       goto L0(r12);
  //     };
  //     r16 = dyn deparse1(p1);
  //     return r16;
  //   };
  //   r18 = dyn gettextf("object '%s' has no scores", p2);
  //   return r18;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4222064650_1, 0, NULL, CCP, RHO);
  // r20 = dyn stop1[, domain](p3, NA_LGL)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

L41_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(x6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args34);
  // if c3 then L43() else L44(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L43()
    goto L43_;
  } else {
  // L44(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L44_;
  }

D5_:;
  // deopt 21 [r10]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 28 [r20]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L35_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L32(dx)
  // L32(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L32_;

L36_:;
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r10_;
  goto L7_;

L39_:;
  // goto L9()
  // L9()
  goto L9_;

L42_:;
  // c4 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args36);
  // if c4 then L46() else L47(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L46()
    goto L46_;
  } else {
  // L47(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L47_;
  }

L43_:;
  // dr2 = tryDispatchBuiltin.1("$", x6)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args37);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if dc1 then L45() else L44(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L45()
    goto L45_;
  } else {
  // L44(dr2)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr2_;
    goto L44_;
  }

L44_:;
  // r22 = `$`(x8, <sym sdev>)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args39);
  // goto L42(r22)
  // L42(r22)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r22_;
  goto L42_;

L10_:;
  // st lam = dx7
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // ____ = ldf `%||%`
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L50() else D10()
  // L50()
  goto L50_;

L45_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L42(dx2)
  // L42(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L42_;

L46_:;
  // dr4 = tryDispatchBuiltin.1("[", dx3)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc2 then L48() else L47(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L48()
    goto L48_;
  } else {
  // L47(dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L47_;
  }

L47_:;
  // choices3 = ld choices
  Rsh_Fir_reg_choices3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L49() else D9()
  // L49()
  goto L49_;

D9_:;
  // deopt 34 [dx5, choices3]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_choices3_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L10(dx6)
  // L10(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L10_;

L49_:;
  // choices4 = force? choices3
  Rsh_Fir_reg_choices4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_choices3_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r23 = dyn __(dx5, choices4)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_choices4_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r23_;
  goto L10_;

L50_:;
  // p4 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   c5 = `is.object`(x10);
  //   if c5 then L1() else L2(x10);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("$", x10);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(x12):
  //   r24 = `$`(x12, <sym n.obs>);
  //   goto L0(r24);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4222064650_4, 0, NULL, CCP, RHO);
  // r26 = dyn ____(p4, 1.0)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L51() else D11()
  // L51()
  goto L51_;

D11_:;
  // deopt 42 [r26]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L51_:;
  // st n = r26
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // lam = ld lam
  Rsh_Fir_reg_lam = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L52() else D12()
  // L52()
  goto L52_;

D12_:;
  // deopt 44 [lam]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_lam;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L52_:;
  // lam1 = force? lam
  Rsh_Fir_reg_lam1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lam);
  // checkMissing(lam1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_lam1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // sym3 = ldf sqrt
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base3 = ldf sqrt in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard3 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L11_:;
  // r30 = `*`(lam4, r28)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_lam4_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args54);
  // st lam = r30
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // scale1 = ld scale
  Rsh_Fir_reg_scale1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L56() else D14()
  // L56()
  goto L56_;

L53_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L55() else D13()
  // L55()
  goto L55_;

L54_:;
  // r27 = dyn base3(<sym n>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L11(lam1, r27)
  // L11(lam1, r27)
  Rsh_Fir_reg_lam4_ = Rsh_Fir_reg_lam1_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L11_;

D13_:;
  // deopt 46 [lam1, n]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_lam1_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 51 [scale1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_scale1_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L55_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // r29 = sqrt(n1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args57);
  // goto L11(lam1, r29)
  // L11(lam1, r29)
  Rsh_Fir_reg_lam4_ = Rsh_Fir_reg_lam1_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L11_;

L56_:;
  // scale2 = force? scale1
  Rsh_Fir_reg_scale2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale1_);
  // checkMissing(scale2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_scale2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r31 = `<`(scale2, 0.0)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_scale2_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args59);
  // c6 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args60);
  // if c6 then L12(c6) else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L12(c6)
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c6_;
    goto L12_;
  } else {
  // L57()
    goto L57_;
  }

L12_:;
  // c12 = `as.logical`(c7)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args61);
  // if c12 then L60() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L60()
    goto L60_;
  } else {
  // L13()
    goto L13_;
  }

L57_:;
  // scale3 = ld scale
  Rsh_Fir_reg_scale3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L58() else D15()
  // L58()
  goto L58_;

D15_:;
  // deopt 55 [c6, scale3]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_scale3_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // scale5 = ld scale
  Rsh_Fir_reg_scale5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L64() else D18()
  // L64()
  goto L64_;

L58_:;
  // scale4 = force? scale3
  Rsh_Fir_reg_scale4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale3_);
  // checkMissing(scale4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_scale4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // r32 = `>`(scale4, 1.0)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_scale4_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args63);
  // c9 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args64);
  // c10 = `||`(c6, c9)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args65);
  // goto L12(c10)
  // L12(c10)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c10_;
  goto L12_;

L60_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L61() else D16()
  // L61()
  goto L61_;

D16_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 66 [scale5]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_scale5_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L61_:;
  // r33 = dyn warning("'scale' is outside [0, 1]")
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L62() else D17()
  // L62()
  goto L62_;

L64_:;
  // scale6 = force? scale5
  Rsh_Fir_reg_scale6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale5_);
  // checkMissing(scale6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_scale6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r35 = `!=`(scale6, 0.0)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_scale6_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args68);
  // c13 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args69);
  // if c13 then L65() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L65()
    goto L65_;
  } else {
  // L15()
    goto L15_;
  }

D17_:;
  // deopt 63 [r33]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L15_:;
  // st lam = 1.0
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_const(CCP, 9), RHO);
  (void)(Rsh_const(CCP, 9));
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // pc_biplot1 = ld `pc.biplot`
  Rsh_Fir_reg_pc_biplot1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L69() else D21()
  // L69()
  goto L69_;

L62_:;
  // goto L14()
  // L14()
  goto L14_;

L65_:;
  // lam5 = ld lam
  Rsh_Fir_reg_lam5_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L66() else D19()
  // L66()
  goto L66_;

D19_:;
  // deopt 70 [lam5]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_lam5_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 78 [pc_biplot1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_pc_biplot1_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L66_:;
  // lam6 = force? lam5
  Rsh_Fir_reg_lam6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lam5_);
  // checkMissing(lam6)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_lam6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // scale7 = ld scale
  Rsh_Fir_reg_scale7_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L67() else D20()
  // L67()
  goto L67_;

L69_:;
  // pc_biplot2 = force? pc_biplot1
  Rsh_Fir_reg_pc_biplot2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pc_biplot1_);
  // checkMissing(pc_biplot2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_pc_biplot2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c14 = `as.logical`(pc_biplot2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_pc_biplot2_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args72);
  // if c14 then L70() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L70()
    goto L70_;
  } else {
  // L17()
    goto L17_;
  }

D20_:;
  // deopt 71 [lam6, scale7]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_lam6_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_scale7_;
  Rsh_Fir_deopt(71, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // biplot_default = ldf `biplot.default`
  Rsh_Fir_reg_biplot_default = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L76() else D24()
  // L76()
  goto L76_;

L67_:;
  // scale8 = force? scale7
  Rsh_Fir_reg_scale8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale7_);
  // checkMissing(scale8)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_scale8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // r36 = `^`(lam6, scale8)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_lam6_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_scale8_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args74);
  // st lam = r36
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // goto L16()
  // L16()
  goto L16_;

L70_:;
  // lam7 = ld lam
  Rsh_Fir_reg_lam7_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L71() else D22()
  // L71()
  goto L71_;

D22_:;
  // deopt 80 [lam7]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_lam7_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 90 []
  Rsh_Fir_deopt(90, 0, NULL, CCP, RHO);
  return R_NilValue;

L71_:;
  // lam8 = force? lam7
  Rsh_Fir_reg_lam8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lam7_);
  // checkMissing(lam8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_lam8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // sym4 = ldf sqrt
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base4 = ldf sqrt in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard4 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L76_:;
  // p7 = prom<V +>{
  //   t = ldf t;
  //   p6 = prom<V +>{
  //     t1 = ldf t;
  //     p5 = prom<V +>{
  //       scores = ld scores;
  //       scores1 = force? scores;
  //       checkMissing(scores1);
  //       c15 = `is.object`(scores1);
  //       if c15 then L1() else L2();
  //     L0(dx11):
  //       return dx11;
  //     L1():
  //       dr8 = tryDispatchBuiltin.1("[", scores1);
  //       dc4 = getTryDispatchBuiltinDispatched(dr8);
  //       if dc4 then L3() else L2();
  //     L2():
  //       choices5 = ld choices;
  //       choices6 = force? choices5;
  //       __1 = ldf `[` in base;
  //       r43 = dyn __1(scores1, <missing>, choices6);
  //       goto L0(r43);
  //     L3():
  //       dx10 = getTryDispatchBuiltinValue(dr8);
  //       goto L0(dx10);
  //     };
  //     r45 = dyn t1(p5);
  //     lam12 = ld lam;
  //     lam13 = force? lam12;
  //     checkMissing(lam13);
  //     r46 = `/`(r45, lam13);
  //     return r46;
  //   };
  //   r48 = dyn t(p6);
  //   return r48;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4222064650_5, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   t2 = ldf t;
  //   p9 = prom<V +>{
  //     t3 = ldf t;
  //     p8 = prom<V +>{
  //       x13 = ld x;
  //       x14 = force? x13;
  //       checkMissing(x14);
  //       c16 = `is.object`(x14);
  //       if c16 then L2() else L3(x14);
  //     L1(dx13):
  //       c17 = `is.object`(dx13);
  //       if c17 then L5() else L6();
  //     L2():
  //       dr10 = tryDispatchBuiltin.1("$", x14);
  //       dc5 = getTryDispatchBuiltinDispatched(dr10);
  //       if dc5 then L4() else L3(dr10);
  //     L3(x16):
  //       r50 = `$`(x16, <sym loadings>);
  //       goto L1(r50);
  //     L0(dx17):
  //       return dx17;
  //     L4():
  //       dx12 = getTryDispatchBuiltinValue(dr10);
  //       goto L1(dx12);
  //     L5():
  //       dr12 = tryDispatchBuiltin.1("[", dx13);
  //       dc6 = getTryDispatchBuiltinDispatched(dr12);
  //       if dc6 then L7() else L6();
  //     L6():
  //       choices7 = ld choices;
  //       choices8 = force? choices7;
  //       __2 = ldf `[` in base;
  //       r51 = dyn __2(dx13, <missing>, choices8);
  //       goto L0(r51);
  //     L7():
  //       dx16 = getTryDispatchBuiltinValue(dr12);
  //       goto L0(dx16);
  //     };
  //     r53 = dyn t3(p8);
  //     lam14 = ld lam;
  //     lam15 = force? lam14;
  //     checkMissing(lam15);
  //     r54 = `*`(r53, lam15);
  //     return r54;
  //   };
  //   r56 = dyn t2(p9);
  //   return r56;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4222064650_8, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // r58 = dyn biplot_default[, , `...`](p7, p10, ddd1)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_biplot_default, 3, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L77() else D25()
  // L77()
  goto L77_;

D25_:;
  // deopt 94 [r58]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L18_:;
  // r41 = `/`(lam11, r39)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_lam11_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args103);
  // st lam = r41
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // goto L19()
  // L19()
  goto L19_;

L72_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L74() else D23()
  // L74()
  goto L74_;

L73_:;
  // r38 = dyn base4(<sym n>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L18(lam8, r38)
  // L18(lam8, r38)
  Rsh_Fir_reg_lam11_ = Rsh_Fir_reg_lam8_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L18_;

L77_:;
  // sym5 = ldf invisible
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base5 = ldf invisible in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args105);
  // if guard5 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

D23_:;
  // deopt 82 [lam8, n2]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_lam8_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L20_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r60
  return Rsh_Fir_reg_r60_;

L74_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // r40 = sqrt(n3)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args107);
  // goto L18(lam8, r40)
  // L18(lam8, r40)
  Rsh_Fir_reg_lam11_ = Rsh_Fir_reg_lam8_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L18_;

L78_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r61 = dyn invisible()
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L80() else D26()
  // L80()
  goto L80_;

L79_:;
  // r59 = dyn base5()
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 0, NULL, NULL, CCP, RHO);
  // goto L20(r59)
  // L20(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L20_;

D26_:;
  // deopt 98 [r61]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L20(r61)
  // L20(r61)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L20_;
}
SEXP Rsh_Fir_user_promise_inner4222064650_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4222064650/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2>
  return Rsh_const(CCP, 7);
}
SEXP Rsh_Fir_user_promise_inner4222064650_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4222064650/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // p2 = prom<V +>{
  //   deparse1 = ldf deparse1;
  //   p1 = prom<V +>{
  //     sym2 = ldf substitute;
  //     base2 = ldf substitute in base;
  //     guard2 = `==`.4(sym2, base2);
  //     if guard2 then L1() else L2();
  //   L0(r13):
  //     return r13;
  //   L1():
  //     substitute = ldf substitute in base;
  //     r14 = dyn substitute(<sym x>);
  //     goto L0(r14);
  //   L2():
  //     r12 = dyn base2(<sym x>);
  //     goto L0(r12);
  //   };
  //   r16 = dyn deparse1(p1);
  //   return r16;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4222064650_2, 0, NULL, CCP, RHO);
  // r18 = dyn gettextf("object '%s' has no scores", p2)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_inner4222064650_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse1_;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4222064650/0: expected 0, got %d", NCAPTURES);

  // deparse1 = ldf deparse1
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // p1 = prom<V +>{
  //   sym2 = ldf substitute;
  //   base2 = ldf substitute in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r13):
  //   return r13;
  // L1():
  //   substitute = ldf substitute in base;
  //   r14 = dyn substitute(<sym x>);
  //   goto L0(r14);
  // L2():
  //   r12 = dyn base2(<sym x>);
  //   goto L0(r12);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4222064650_3, 0, NULL, CCP, RHO);
  // r16 = dyn deparse1(p1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names11, CCP, RHO);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_inner4222064650_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4222064650/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf substitute
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base2 = ldf substitute in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r13
  return Rsh_Fir_reg_r13_;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r14 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L2_:;
  // r12 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4222064650_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4222064650/0: expected 0, got %d", NCAPTURES);

  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(x10)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args46);
  // if c5 then L1() else L2(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("$", x10)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // r24 = `$`(x12, <sym n.obs>)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args49);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r24_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4222064650_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4222064650/0: expected 0, got %d", NCAPTURES);

  // t = ldf t
  Rsh_Fir_reg_t = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // p6 = prom<V +>{
  //   t1 = ldf t;
  //   p5 = prom<V +>{
  //     scores = ld scores;
  //     scores1 = force? scores;
  //     checkMissing(scores1);
  //     c15 = `is.object`(scores1);
  //     if c15 then L1() else L2();
  //   L0(dx11):
  //     return dx11;
  //   L1():
  //     dr8 = tryDispatchBuiltin.1("[", scores1);
  //     dc4 = getTryDispatchBuiltinDispatched(dr8);
  //     if dc4 then L3() else L2();
  //   L2():
  //     choices5 = ld choices;
  //     choices6 = force? choices5;
  //     __1 = ldf `[` in base;
  //     r43 = dyn __1(scores1, <missing>, choices6);
  //     goto L0(r43);
  //   L3():
  //     dx10 = getTryDispatchBuiltinValue(dr8);
  //     goto L0(dx10);
  //   };
  //   r45 = dyn t1(p5);
  //   lam12 = ld lam;
  //   lam13 = force? lam12;
  //   checkMissing(lam13);
  //   r46 = `/`(r45, lam13);
  //   return r46;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4222064650_6, 0, NULL, CCP, RHO);
  // r48 = dyn t(p6)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names20, CCP, RHO);
  // return r48
  return Rsh_Fir_reg_r48_;
}
SEXP Rsh_Fir_user_promise_inner4222064650_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_lam12_;
  SEXP Rsh_Fir_reg_lam13_;
  SEXP Rsh_Fir_reg_r46_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4222064650/0: expected 0, got %d", NCAPTURES);

  // t1 = ldf t
  Rsh_Fir_reg_t1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // p5 = prom<V +>{
  //   scores = ld scores;
  //   scores1 = force? scores;
  //   checkMissing(scores1);
  //   c15 = `is.object`(scores1);
  //   if c15 then L1() else L2();
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", scores1);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2();
  // L2():
  //   choices5 = ld choices;
  //   choices6 = force? choices5;
  //   __1 = ldf `[` in base;
  //   r43 = dyn __1(scores1, <missing>, choices6);
  //   goto L0(r43);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4222064650_7, 0, NULL, CCP, RHO);
  // r45 = dyn t1(p5)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t1_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names19, CCP, RHO);
  // lam12 = ld lam
  Rsh_Fir_reg_lam12_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // lam13 = force? lam12
  Rsh_Fir_reg_lam13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lam12_);
  // checkMissing(lam13)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_lam13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // r46 = `/`(r45, lam13)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_lam13_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args85);
  // return r46
  return Rsh_Fir_reg_r46_;
}
SEXP Rsh_Fir_user_promise_inner4222064650_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_scores;
  SEXP Rsh_Fir_reg_scores1_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_choices5_;
  SEXP Rsh_Fir_reg_choices6_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r43_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4222064650/0: expected 0, got %d", NCAPTURES);

  // scores = ld scores
  Rsh_Fir_reg_scores = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // scores1 = force? scores
  Rsh_Fir_reg_scores1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scores);
  // checkMissing(scores1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_scores1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(scores1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_scores1_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args78);
  // if c15 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", scores1)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_scores1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // choices5 = ld choices
  Rsh_Fir_reg_choices5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // choices6 = force? choices5
  Rsh_Fir_reg_choices6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_choices5_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r43 = dyn __1(scores1, <missing>, choices6)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_scores1_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_choices6_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r43_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4222064650_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t2_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r56_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4222064650/0: expected 0, got %d", NCAPTURES);

  // t2 = ldf t
  Rsh_Fir_reg_t2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // p9 = prom<V +>{
  //   t3 = ldf t;
  //   p8 = prom<V +>{
  //     x13 = ld x;
  //     x14 = force? x13;
  //     checkMissing(x14);
  //     c16 = `is.object`(x14);
  //     if c16 then L2() else L3(x14);
  //   L1(dx13):
  //     c17 = `is.object`(dx13);
  //     if c17 then L5() else L6();
  //   L2():
  //     dr10 = tryDispatchBuiltin.1("$", x14);
  //     dc5 = getTryDispatchBuiltinDispatched(dr10);
  //     if dc5 then L4() else L3(dr10);
  //   L3(x16):
  //     r50 = `$`(x16, <sym loadings>);
  //     goto L1(r50);
  //   L0(dx17):
  //     return dx17;
  //   L4():
  //     dx12 = getTryDispatchBuiltinValue(dr10);
  //     goto L1(dx12);
  //   L5():
  //     dr12 = tryDispatchBuiltin.1("[", dx13);
  //     dc6 = getTryDispatchBuiltinDispatched(dr12);
  //     if dc6 then L7() else L6();
  //   L6():
  //     choices7 = ld choices;
  //     choices8 = force? choices7;
  //     __2 = ldf `[` in base;
  //     r51 = dyn __2(dx13, <missing>, choices8);
  //     goto L0(r51);
  //   L7():
  //     dx16 = getTryDispatchBuiltinValue(dr12);
  //     goto L0(dx16);
  //   };
  //   r53 = dyn t3(p8);
  //   lam14 = ld lam;
  //   lam15 = force? lam14;
  //   checkMissing(lam15);
  //   r54 = `*`(r53, lam15);
  //   return r54;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4222064650_9, 0, NULL, CCP, RHO);
  // r56 = dyn t2(p9)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t2_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names23, CCP, RHO);
  // return r56
  return Rsh_Fir_reg_r56_;
}
SEXP Rsh_Fir_user_promise_inner4222064650_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t3_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_lam14_;
  SEXP Rsh_Fir_reg_lam15_;
  SEXP Rsh_Fir_reg_r54_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4222064650/0: expected 0, got %d", NCAPTURES);

  // t3 = ldf t
  Rsh_Fir_reg_t3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // p8 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   c16 = `is.object`(x14);
  //   if c16 then L2() else L3(x14);
  // L1(dx13):
  //   c17 = `is.object`(dx13);
  //   if c17 then L5() else L6();
  // L2():
  //   dr10 = tryDispatchBuiltin.1("$", x14);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L4() else L3(dr10);
  // L3(x16):
  //   r50 = `$`(x16, <sym loadings>);
  //   goto L1(r50);
  // L0(dx17):
  //   return dx17;
  // L4():
  //   dx12 = getTryDispatchBuiltinValue(dr10);
  //   goto L1(dx12);
  // L5():
  //   dr12 = tryDispatchBuiltin.1("[", dx13);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L7() else L6();
  // L6():
  //   choices7 = ld choices;
  //   choices8 = force? choices7;
  //   __2 = ldf `[` in base;
  //   r51 = dyn __2(dx13, <missing>, choices8);
  //   goto L0(r51);
  // L7():
  //   dx16 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx16);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4222064650_10, 0, NULL, CCP, RHO);
  // r53 = dyn t3(p8)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t3_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names22, CCP, RHO);
  // lam14 = ld lam
  Rsh_Fir_reg_lam14_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // lam15 = force? lam14
  Rsh_Fir_reg_lam15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lam14_);
  // checkMissing(lam15)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_lam15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // r54 = `*`(r53, lam15)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_lam15_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args100);
  // return r54
  return Rsh_Fir_reg_r54_;
}
SEXP Rsh_Fir_user_promise_inner4222064650_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_choices7_;
  SEXP Rsh_Fir_reg_choices8_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r51_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4222064650/0: expected 0, got %d", NCAPTURES);

  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(x14)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args88);
  // if c16 then L2() else L3(x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L2()
    goto L2_;
  } else {
  // L3(x14)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L3_;
  }

L1_:;
  // c17 = `is.object`(dx13)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args89);
  // if c17 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L2_:;
  // dr10 = tryDispatchBuiltin.1("$", x14)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args90);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if dc5 then L4() else L3(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr10)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr10_;
    goto L3_;
  }

L3_:;
  // r50 = `$`(x16, <sym loadings>)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args92);
  // goto L1(r50)
  // L1(r50)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r50_;
  goto L1_;

L0_:;
  // return dx17
  return Rsh_Fir_reg_dx17_;

L4_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L1(dx12)
  // L1(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L1_;

L5_:;
  // dr12 = tryDispatchBuiltin.1("[", dx13)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args94);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc6 then L7() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L7()
    goto L7_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // choices7 = ld choices
  Rsh_Fir_reg_choices7_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // choices8 = force? choices7
  Rsh_Fir_reg_choices8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_choices7_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r51 = dyn __2(dx13, <missing>, choices8)
  SEXP Rsh_Fir_array_args96[3];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args96[2] = Rsh_Fir_reg_choices8_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 3, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r51)
  // L0(r51)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r51_;
  goto L0_;

L7_:;
  // dx16 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L0(dx16)
  // L0(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
