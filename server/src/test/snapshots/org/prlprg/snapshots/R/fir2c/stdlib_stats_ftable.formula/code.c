#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner4130229875_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4130229875_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4130229875_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_25(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4130229875_26(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_Titanic;
  SEXP Rsh_Fir_reg_Titanic1_;
  SEXP Rsh_Fir_reg_ftable;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_ftable1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r8_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4130229875
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4130229875_, RHO, CCP);
  // st `ftable.formula` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // Titanic = ld Titanic
  Rsh_Fir_reg_Titanic = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 3 [Titanic]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_Titanic;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L0_:;
  // Titanic1 = force? Titanic
  Rsh_Fir_reg_Titanic1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Titanic);
  // checkMissing(Titanic1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_Titanic1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // ftable = ldf ftable
  Rsh_Fir_reg_ftable = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   __ = ldf `~` in base;
  //   r1 = dyn __(<sym Survived>, <sym .>);
  //   return r1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   Titanic2 = ld Titanic;
  //   Titanic3 = force? Titanic2;
  //   checkMissing(Titanic3);
  //   return Titanic3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r4 = dyn ftable[, data](p, p1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ftable, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // st x = r4
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 12 [x]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L3_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // ftable1 = ldf ftable
  Rsh_Fir_reg_ftable1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   __1 = ldf `~` in base;
  //   r5 = dyn __1(<sym Sex>, <lang `+`(Class, Age)>);
  //   return r5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r8 = dyn ftable1[, data](p2, p3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ftable1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r1 = dyn __(<sym Survived>, <sym .>)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Titanic2_;
  SEXP Rsh_Fir_reg_Titanic3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Titanic2 = ld Titanic
  Rsh_Fir_reg_Titanic2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // Titanic3 = force? Titanic2
  Rsh_Fir_reg_Titanic3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Titanic2_);
  // checkMissing(Titanic3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_Titanic3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return Titanic3
  return Rsh_Fir_reg_Titanic3_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __1 = ldf `~` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r5 = dyn __1(<sym Sex>, <lang `+`(Class, Age)>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_function_inner4130229875_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4130229875 dynamic dispatch ([formula, data, subset, `na.action`, `...`])

  return Rsh_Fir_user_version_inner4130229875_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4130229875_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4130229875 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner4130229875/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_formula;
  SEXP Rsh_Fir_reg_data;
  SEXP Rsh_Fir_reg_subset;
  SEXP Rsh_Fir_reg_na_action;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_data_isMissing;
  SEXP Rsh_Fir_reg_data_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_formula1_;
  SEXP Rsh_Fir_reg_formula2_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_formula3_;
  SEXP Rsh_Fir_reg_formula4_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_is_data_frame;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_terms;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_terms1_;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_tt;
  SEXP Rsh_Fir_reg_tt1_;
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_terms2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_attr1_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_terms3_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_attr2_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_rvars;
  SEXP Rsh_Fir_reg_rvars1_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_any1_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_cvars;
  SEXP Rsh_Fir_reg_cvars1_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_any2_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_lhs_has_dot;
  SEXP Rsh_Fir_reg_lhs_has_dot1_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_rhs_has_dot;
  SEXP Rsh_Fir_reg_rhs_has_dot1_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_stop3_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_match_call;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_eval;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_edata;
  SEXP Rsh_Fir_reg_edata1_;
  SEXP Rsh_Fir_reg_inherits1_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_edata2_;
  SEXP Rsh_Fir_reg_edata3_;
  SEXP Rsh_Fir_reg_inherits2_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_edata4_;
  SEXP Rsh_Fir_reg_edata5_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_edata6_;
  SEXP Rsh_Fir_reg_edata7_;
  SEXP Rsh_Fir_reg_inherits3_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_as_table;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_data7_;
  SEXP Rsh_Fir_reg_data8_;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_rhs_has_dot2_;
  SEXP Rsh_Fir_reg_rhs_has_dot3_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_pmatch;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_stop4_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_reg_lhs_has_dot2_;
  SEXP Rsh_Fir_reg_lhs_has_dot3_;
  SEXP Rsh_Fir_reg_c48_;
  SEXP Rsh_Fir_reg_pmatch1_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_i4_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_anyNA1_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_c49_;
  SEXP Rsh_Fir_reg_stop5_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_ftable1;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_edata8_;
  SEXP Rsh_Fir_reg_edata9_;
  SEXP Rsh_Fir_reg_is_matrix;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_c50_;
  SEXP Rsh_Fir_reg_as_data_frame;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c51_;
  SEXP Rsh_Fir_reg_r113_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_reg_r120_;
  SEXP Rsh_Fir_reg_data13_;
  SEXP Rsh_Fir_reg_data14_;
  SEXP Rsh_Fir_reg_c52_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_c53_;
  SEXP Rsh_Fir_reg_c55_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r122_;
  SEXP Rsh_Fir_reg_c58_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg_data15_;
  SEXP Rsh_Fir_reg_data16_;
  SEXP Rsh_Fir_reg_is_environment;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg_c59_;
  SEXP Rsh_Fir_reg_c60_;
  SEXP Rsh_Fir_reg_c62_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_reg_r126_;
  SEXP Rsh_Fir_reg_data17_;
  SEXP Rsh_Fir_reg_data18_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r127_;
  SEXP Rsh_Fir_reg_rhs_has_dot4_;
  SEXP Rsh_Fir_reg_rhs_has_dot5_;
  SEXP Rsh_Fir_reg_c63_;
  SEXP Rsh_Fir_reg_sym22_;
  SEXP Rsh_Fir_reg_base22_;
  SEXP Rsh_Fir_reg_guard22_;
  SEXP Rsh_Fir_reg_r128_;
  SEXP Rsh_Fir_reg_r129_;
  SEXP Rsh_Fir_reg_varnames4_;
  SEXP Rsh_Fir_reg_varnames5_;
  SEXP Rsh_Fir_reg_r130_;
  SEXP Rsh_Fir_reg_c64_;
  SEXP Rsh_Fir_reg_r132_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_cvars6_;
  SEXP Rsh_Fir_reg_cvars7_;
  SEXP Rsh_Fir_reg_r133_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r134_;
  SEXP Rsh_Fir_reg_lhs_has_dot4_;
  SEXP Rsh_Fir_reg_lhs_has_dot5_;
  SEXP Rsh_Fir_reg_c65_;
  SEXP Rsh_Fir_reg_sym23_;
  SEXP Rsh_Fir_reg_base23_;
  SEXP Rsh_Fir_reg_guard23_;
  SEXP Rsh_Fir_reg_r135_;
  SEXP Rsh_Fir_reg_r136_;
  SEXP Rsh_Fir_reg_varnames6_;
  SEXP Rsh_Fir_reg_varnames7_;
  SEXP Rsh_Fir_reg_r137_;
  SEXP Rsh_Fir_reg_c66_;
  SEXP Rsh_Fir_reg_r139_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_rvars6_;
  SEXP Rsh_Fir_reg_rvars7_;
  SEXP Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_lhs_has_dot6_;
  SEXP Rsh_Fir_reg_lhs_has_dot7_;
  SEXP Rsh_Fir_reg_c67_;
  SEXP Rsh_Fir_reg_c68_;
  SEXP Rsh_Fir_reg_rhs_has_dot6_;
  SEXP Rsh_Fir_reg_rhs_has_dot7_;
  SEXP Rsh_Fir_reg_c70_;
  SEXP Rsh_Fir_reg_c71_;
  SEXP Rsh_Fir_reg_c73_;
  SEXP Rsh_Fir_reg_stop6_;
  SEXP Rsh_Fir_reg_r142_;
  SEXP Rsh_Fir_reg_as_formula;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_r154_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_c75_;
  SEXP Rsh_Fir_reg_r156_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_r159_;
  SEXP Rsh_Fir_reg_sym25_;
  SEXP Rsh_Fir_reg_base25_;
  SEXP Rsh_Fir_reg_guard25_;
  SEXP Rsh_Fir_reg_r160_;
  SEXP Rsh_Fir_reg_r161_;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_r162_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_c76_;
  SEXP Rsh_Fir_reg_r164_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r167_;
  SEXP Rsh_Fir_reg_eval1_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_r171_;
  SEXP Rsh_Fir_reg_ftable1_1;
  SEXP Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_reg_p25_;
  SEXP Rsh_Fir_reg_p26_;
  SEXP Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_reg_r175_;

  // Bind parameters
  Rsh_Fir_reg_formula = PARAMS[0];
  Rsh_Fir_reg_data = PARAMS[1];
  Rsh_Fir_reg_subset = PARAMS[2];
  Rsh_Fir_reg_na_action = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st formula = formula
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_formula, RHO);
  (void)(Rsh_Fir_reg_formula);
  // data_isMissing = missing.0(data)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_data;
  Rsh_Fir_reg_data_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if data_isMissing then L0(NULL) else L0(data)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_data_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_data_orDefault = Rsh_const(CCP, 11);
    goto L0_;
  } else {
  // L0(data)
    Rsh_Fir_reg_data_orDefault = Rsh_Fir_reg_data;
    goto L0_;
  }

L0_:;
  // st data = data_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_data_orDefault, RHO);
  (void)(Rsh_Fir_reg_data_orDefault);
  // st subset = subset
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_subset, RHO);
  (void)(Rsh_Fir_reg_subset);
  // st `na.action` = na_action
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_na_action, RHO);
  (void)(Rsh_Fir_reg_na_action);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c then L2(c) else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L2_;
  } else {
  // L67()
    goto L67_;
  }

L65_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r2 = dyn missing(<sym formula>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L1_;

L66_:;
  // r = dyn base(<sym formula>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

L2_:;
  // c9 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args13);
  // if c9 then L73() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L73()
    goto L73_;
  } else {
  // L4()
    goto L4_;
  }

L67_:;
  // sym1 = ldf inherits
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf inherits in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L3_:;
  // r6 = `!`(r4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args15);
  // c6 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // c7 = `||`(c5, c6)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args17);
  // goto L2(c7)
  // L2(c7)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c7_;
  goto L2_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard2 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L68_:;
  // formula1 = ld formula
  Rsh_Fir_reg_formula1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L70() else D0()
  // L70()
  goto L70_;

L69_:;
  // r3 = dyn base1(<sym formula>, "formula")
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(c, r3)
  // L3(c, r3)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_;
  goto L3_;

L73_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L74() else D2()
  // L74()
  goto L74_;

D0_:;
  // deopt 5 [c, formula1]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_formula1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r12 = `!=`(r10, 3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args20);
  // c10 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c10 then L81() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L81()
    goto L81_;
  } else {
  // L7()
    goto L7_;
  }

L70_:;
  // formula2 = force? formula1
  Rsh_Fir_reg_formula2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula1_);
  // checkMissing(formula2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_formula2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r5 = dyn inherits(formula2, "formula", FALSE)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_formula2_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L71() else D1()
  // L71()
  goto L71_;

L74_:;
  // r7 = dyn stop("'formula' missing or incorrect")
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L75() else D3()
  // L75()
  goto L75_;

L77_:;
  // formula3 = ld formula
  Rsh_Fir_reg_formula3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L79() else D4()
  // L79()
  goto L79_;

L78_:;
  // r9 = dyn base2(<sym formula>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(r9)
  // L6(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L6_;

D1_:;
  // deopt 10 [c, r5]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 21 [formula3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_formula3_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // is_data_frame = ldf `is.data.frame`
  Rsh_Fir_reg_is_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L85() else D8()
  // L85()
  goto L85_;

L71_:;
  // goto L3(c, r5)
  // L3(c, r5)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_1;
  goto L3_;

L75_:;
  // goto L5()
  // L5()
  goto L5_;

L79_:;
  // formula4 = force? formula3
  Rsh_Fir_reg_formula4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula3_);
  // checkMissing(formula4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_formula4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r11 = dyn length(formula4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_formula4_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L80() else D5()
  // L80()
  goto L80_;

L81_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L82() else D6()
  // L82()
  goto L82_;

D5_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L6_;

L82_:;
  // r13 = dyn stop1("'formula' must have both left and right hand sides")
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L83() else D7()
  // L83()
  goto L83_;

L85_:;
  // p = prom<V +>{
  //   data1 = ld data;
  //   data2 = force? data1;
  //   checkMissing(data2);
  //   return data2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_, 0, NULL, CCP, RHO);
  // r16 = dyn is_data_frame(p)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_data_frame, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L86() else D9()
  // L86()
  goto L86_;

D7_:;
  // deopt 30 [r13]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 36 [r16]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L8()
  // L8()
  goto L8_;

L86_:;
  // c11 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c11 then L87() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L87()
    goto L87_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // terms1 = ldf terms
  Rsh_Fir_reg_terms1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L91() else D12()
  // L91()
  goto L91_;

L10_:;
  // st tt = r20
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sym3 = ldf any
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base3 = ldf any in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard3 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L87_:;
  // terms = ldf terms
  Rsh_Fir_reg_terms = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L88() else D10()
  // L88()
  goto L88_;

D10_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // c12 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // if c12 then L100() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L100()
    goto L100_;
  } else {
  // L13()
    goto L13_;
  }

L88_:;
  // p1 = prom<V +>{
  //   formula5 = ld formula;
  //   formula6 = force? formula5;
  //   checkMissing(formula6);
  //   return formula6;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   data3 = ld data;
  //   data4 = force? data3;
  //   checkMissing(data4);
  //   return data4;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_2, 0, NULL, CCP, RHO);
  // r19 = dyn terms[, data](p1, p2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_terms, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L89() else D11()
  // L89()
  goto L89_;

L91_:;
  // p3 = prom<V +>{
  //   formula7 = ld formula;
  //   formula8 = force? formula7;
  //   checkMissing(formula8);
  //   return formula8;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_3, 0, NULL, CCP, RHO);
  // r22 = dyn terms1[, allowDotAsName](p3, TRUE)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_terms1_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L92() else D13()
  // L92()
  goto L92_;

L93_:;
  // sym4 = ldf attr
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base4 = ldf attr in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard4 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L94_:;
  // r23 = dyn base3(<lang `>`(attr(tt, "order"), 1.0)>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(r23)
  // L11(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L11_;

D11_:;
  // deopt 42 [r19]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 48 [r22]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L12_:;
  // r28 = `>`(r26, 1.0)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args41);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r29 = dyn any(r28)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L99() else D16()
  // L99()
  goto L99_;

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // sym5 = ldf attr
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base5 = ldf attr in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard5 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L89_:;
  // goto L10(r19)
  // L10(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L10_;

L92_:;
  // goto L10(r22)
  // L10(r22)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r22_;
  goto L10_;

L95_:;
  // tt = ld tt
  Rsh_Fir_reg_tt = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L97() else D14()
  // L97()
  goto L97_;

L96_:;
  // r25 = dyn base4(<sym tt>, "order")
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L12_;

L100_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L101() else D17()
  // L101()
  goto L101_;

D14_:;
  // deopt 54 [tt]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_tt;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 62 [r29]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // st rvars = r33
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // sym6 = ldf attr
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base6 = ldf attr in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard6 then L109() else L110()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L109()
    goto L109_;
  } else {
  // L110()
    goto L110_;
  }

L97_:;
  // tt1 = force? tt
  Rsh_Fir_reg_tt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt);
  // checkMissing(tt1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_tt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r27 = dyn attr(tt1, "order")
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_tt1_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L98() else D15()
  // L98()
  goto L98_;

L99_:;
  // goto L11(r29)
  // L11(r29)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r29_;
  goto L11_;

L101_:;
  // r30 = dyn stop2("interactions are not allowed")
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L102() else D18()
  // L102()
  goto L102_;

L104_:;
  // terms2 = ldf terms
  Rsh_Fir_reg_terms2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L106() else D19()
  // L106()
  goto L106_;

L105_:;
  // r32 = dyn base5(<lang terms(`[`(formula, `-`(2)), allowDotAsName=TRUE)>, "term.labels")
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L15(r32)
  // L15(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L15_;

D15_:;
  // deopt 58 [r27]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 66 [r30]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // st cvars = r39
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // sym7 = ldf any
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base7 = ldf any in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard7 then L114() else L115()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L114()
    goto L114_;
  } else {
  // L115()
    goto L115_;
  }

L98_:;
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L12_;

L102_:;
  // goto L14()
  // L14()
  goto L14_;

L106_:;
  // p4 = prom<V +>{
  //   formula9 = ld formula;
  //   formula10 = force? formula9;
  //   checkMissing(formula10);
  //   c13 = `is.object`(formula10);
  //   if c13 then L1() else L2(formula10);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", formula10);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(formula12):
  //   __ = ldf `[` in base;
  //   r34 = dyn __(formula12, -2);
  //   goto L0(r34);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_4, 0, NULL, CCP, RHO);
  // r36 = dyn terms2[, allowDotAsName](p4, TRUE)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_terms2_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L107() else D20()
  // L107()
  goto L107_;

L109_:;
  // terms3 = ldf terms
  Rsh_Fir_reg_terms3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L111() else D22()
  // L111()
  goto L111_;

L110_:;
  // r38 = dyn base6(<lang terms(`[`(formula, `-`(3)), allowDotAsName=TRUE)>, "term.labels")
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L16(r38)
  // L16(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L16_;

D20_:;
  // deopt 76 [r36]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // st `rhs.has.dot` = r45
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // sym8 = ldf any
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base8 = ldf any in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard8 then L118() else L119()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L118()
    goto L118_;
  } else {
  // L119()
    goto L119_;
  }

L107_:;
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r37 = dyn attr1(r36, "term.labels")
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L108() else D21()
  // L108()
  goto L108_;

L111_:;
  // p5 = prom<V +>{
  //   formula13 = ld formula;
  //   formula14 = force? formula13;
  //   checkMissing(formula14);
  //   c14 = `is.object`(formula14);
  //   if c14 then L1() else L2(formula14);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", formula14);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(formula16):
  //   __1 = ldf `[` in base;
  //   r40 = dyn __1(formula16, -3);
  //   goto L0(r40);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_5, 0, NULL, CCP, RHO);
  // r42 = dyn terms3[, allowDotAsName](p5, TRUE)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_terms3_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L112() else D23()
  // L112()
  goto L112_;

L114_:;
  // rvars = ld rvars
  Rsh_Fir_reg_rvars = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L116() else D25()
  // L116()
  goto L116_;

L115_:;
  // r44 = dyn base7(<lang `==`(rvars, ".")>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L17(r44)
  // L17(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L17_;

D21_:;
  // deopt 79 [r37]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 88 [r42]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 95 [rvars]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_rvars;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L18_:;
  // st `lhs.has.dot` = r49
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // lhs_has_dot = ld `lhs.has.dot`
  Rsh_Fir_reg_lhs_has_dot = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L122() else D29()
  // L122()
  goto L122_;

L108_:;
  // goto L15(r37)
  // L15(r37)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r37_;
  goto L15_;

L112_:;
  // attr2 = ldf attr in base
  Rsh_Fir_reg_attr2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r43 = dyn attr2(r42, "term.labels")
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr2_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L113() else D24()
  // L113()
  goto L113_;

L116_:;
  // rvars1 = force? rvars
  Rsh_Fir_reg_rvars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rvars);
  // checkMissing(rvars1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_rvars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // r46 = `==`(rvars1, ".")
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_rvars1_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args71);
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r47 = dyn any1(r46)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L117() else D26()
  // L117()
  goto L117_;

L118_:;
  // cvars = ld cvars
  Rsh_Fir_reg_cvars = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L120() else D27()
  // L120()
  goto L120_;

L119_:;
  // r48 = dyn base8(<lang `==`(cvars, ".")>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L18(r48)
  // L18(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L18_;

D24_:;
  // deopt 91 [r43]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 100 [r47]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 104 [cvars]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_cvars;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 111 [lhs_has_dot]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_lhs_has_dot;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L113_:;
  // goto L16(r43)
  // L16(r43)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r43_;
  goto L16_;

L117_:;
  // goto L17(r47)
  // L17(r47)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r47_;
  goto L17_;

L120_:;
  // cvars1 = force? cvars
  Rsh_Fir_reg_cvars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cvars);
  // checkMissing(cvars1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_cvars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r50 = `==`(cvars1, ".")
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_cvars1_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args75);
  // any2 = ldf any in base
  Rsh_Fir_reg_any2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r51 = dyn any2(r50)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any2_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L121() else D28()
  // L121()
  goto L121_;

L122_:;
  // lhs_has_dot1 = force? lhs_has_dot
  Rsh_Fir_reg_lhs_has_dot1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lhs_has_dot);
  // checkMissing(lhs_has_dot1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_lhs_has_dot1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c15 = `as.logical`(lhs_has_dot1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_lhs_has_dot1_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args78);
  // if c15 then L123() else L19(c15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L123()
    goto L123_;
  } else {
  // L19(c15)
    Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c15_;
    goto L19_;
  }

D28_:;
  // deopt 109 [r51]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L19_:;
  // c21 = `as.logical`(c17)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args79);
  // if c21 then L126() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L126()
    goto L126_;
  } else {
  // L20()
    goto L20_;
  }

L121_:;
  // goto L18(r51)
  // L18(r51)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r51_;
  goto L18_;

L123_:;
  // rhs_has_dot = ld `rhs.has.dot`
  Rsh_Fir_reg_rhs_has_dot = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L124() else D30()
  // L124()
  goto L124_;

D30_:;
  // deopt 113 [c15, rhs_has_dot]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_rhs_has_dot;
  Rsh_Fir_deopt(113, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L130() else D33()
  // L130()
  goto L130_;

L124_:;
  // rhs_has_dot1 = force? rhs_has_dot
  Rsh_Fir_reg_rhs_has_dot1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rhs_has_dot);
  // checkMissing(rhs_has_dot1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_rhs_has_dot1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // c18 = `as.logical`(rhs_has_dot1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_rhs_has_dot1_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args81);
  // c19 = `&&`(c15, c18)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args82);
  // goto L19(c19)
  // L19(c19)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c19_;
  goto L19_;

L126_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L127() else D31()
  // L127()
  goto L127_;

D31_:;
  // deopt 117 []
  Rsh_Fir_deopt(117, 0, NULL, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 123 []
  Rsh_Fir_deopt(123, 0, NULL, CCP, RHO);
  return R_NilValue;

L127_:;
  // r52 = dyn stop3("'formula' has '.' in both left and right hand sides")
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L128() else D32()
  // L128()
  goto L128_;

L130_:;
  // r54 = dyn match_call[`expand.dots`](FALSE)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L131() else D34()
  // L131()
  goto L131_;

D32_:;
  // deopt 119 [r52]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 126 [r54]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L128_:;
  // goto L21()
  // L21()
  goto L21_;

L131_:;
  // st m = r54
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L132() else D35()
  // L132()
  goto L132_;

D35_:;
  // deopt 129 []
  Rsh_Fir_deopt(129, 0, NULL, CCP, RHO);
  return R_NilValue;

L132_:;
  // p6 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   c22 = `is.object`(m1);
  //   if c22 then L1() else L2(m1);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", m1);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(m3):
  //   r55 = `$`(m3, <sym data>);
  //   goto L0(r55);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r57 = dyn parent_frame();
  //   return r57;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_7, 0, NULL, CCP, RHO);
  // r59 = dyn eval(p6, p7)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L133() else D36()
  // L133()
  goto L133_;

D36_:;
  // deopt 132 [r59]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L133_:;
  // st edata = r59
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // sym9 = ldf inherits
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base9 = ldf inherits in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args92);
  // if guard9 then L134() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L134()
    goto L134_;
  } else {
  // L135()
    goto L135_;
  }

L22_:;
  // c23 = `as.logical`(r61)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args93);
  // if c23 then L23(c23) else L138()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L23(c23)
    Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c23_;
    goto L23_;
  } else {
  // L138()
    goto L138_;
  }

L134_:;
  // edata = ld edata
  Rsh_Fir_reg_edata = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L136() else D37()
  // L136()
  goto L136_;

L135_:;
  // r60 = dyn base9(<sym edata>, "ftable")
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L22(r60)
  // L22(r60)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L22_;

D37_:;
  // deopt 136 [edata]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_edata;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L23_:;
  // c32 = `as.logical`(c24)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args95);
  // if c32 then L25(c32) else L144()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L25(c32)
    Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c32_;
    goto L25_;
  } else {
  // L144()
    goto L144_;
  }

L136_:;
  // edata1 = force? edata
  Rsh_Fir_reg_edata1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_edata);
  // checkMissing(edata1)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_edata1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // inherits1 = ldf inherits in base
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r62 = dyn inherits1(edata1, "ftable", FALSE)
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_edata1_;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args97[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits1_, 3, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L137() else D38()
  // L137()
  goto L137_;

L138_:;
  // sym10 = ldf inherits
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base10 = ldf inherits in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard10 then L139() else L140()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L139()
    goto L139_;
  } else {
  // L140()
    goto L140_;
  }

D38_:;
  // deopt 141 [r62]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L24_:;
  // c29 = `as.logical`(r64)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args99);
  // c30 = `||`(c28, c29)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args100);
  // goto L23(c30)
  // L23(c30)
  Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c30_;
  goto L23_;

L25_:;
  // c44 = `as.logical`(c33)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args101);
  // if c44 then L153() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L153()
    goto L153_;
  } else {
  // L28()
    goto L28_;
  }

L137_:;
  // goto L22(r62)
  // L22(r62)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r62_;
  goto L22_;

L139_:;
  // edata2 = ld edata
  Rsh_Fir_reg_edata2_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L141() else D39()
  // L141()
  goto L141_;

L140_:;
  // r63 = dyn base10(<sym edata>, "table")
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L24(c23, r63)
  // L24(c23, r63)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L24_;

L144_:;
  // sym11 = ldf length
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base11 = ldf length in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args103);
  // if guard11 then L145() else L146()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L145()
    goto L145_;
  } else {
  // L146()
    goto L146_;
  }

D39_:;
  // deopt 144 [c23, edata2]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_edata2_;
  Rsh_Fir_deopt(144, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L26_:;
  // r72 = `>`(r67, 2)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_args104[1] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args104);
  // c41 = `as.logical`(r72)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args105);
  // c42 = `||`(c37, c41)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_c41_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args106);
  // goto L25(c42)
  // L25(c42)
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c42_;
  goto L25_;

L28_:;
  // sym18 = ldf `is.matrix`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base18 = ldf `is.matrix` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args107);
  // if guard18 then L200() else L201()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L200()
    goto L200_;
  } else {
  // L201()
    goto L201_;
  }

L141_:;
  // edata3 = force? edata2
  Rsh_Fir_reg_edata3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_edata2_);
  // checkMissing(edata3)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_edata3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // inherits2 = ldf inherits in base
  Rsh_Fir_reg_inherits2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r65 = dyn inherits2(edata3, "table", FALSE)
  SEXP Rsh_Fir_array_args109[3];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_edata3_;
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args109[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits2_, 3, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L142() else D40()
  // L142()
  goto L142_;

L145_:;
  // sym12 = ldf dim
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // base12 = ldf dim in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args110);
  // if guard12 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L146_:;
  // r66 = dyn base11(<lang dim(edata)>)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L26(c32, r66)
  // L26(c32, r66)
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L26_;

L153_:;
  // sym13 = ldf inherits
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base13 = ldf inherits in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args112);
  // if guard13 then L154() else L155()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L154()
    goto L154_;
  } else {
  // L155()
    goto L155_;
  }

D40_:;
  // deopt 149 [c23, r65]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(149, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L27_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r71 = dyn length1(r69)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L151() else D43()
  // L151()
  goto L151_;

L29_:;
  // c45 = `as.logical`(r74)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args114);
  // if c45 then L158() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L158()
    goto L158_;
  } else {
  // L30()
    goto L30_;
  }

L44_:;
  // c50 = `as.logical`(r108)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args115);
  // if c50 then L204() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L204()
    goto L204_;
  } else {
  // L45()
    goto L45_;
  }

L142_:;
  // goto L24(c23, r65)
  // L24(c23, r65)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r65_;
  goto L24_;

L147_:;
  // edata4 = ld edata
  Rsh_Fir_reg_edata4_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L149() else D41()
  // L149()
  goto L149_;

L148_:;
  // r68 = dyn base12(<sym edata>)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L27(c32, r68)
  // L27(c32, r68)
  Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L27_;

L154_:;
  // edata6 = ld edata
  Rsh_Fir_reg_edata6_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L156() else D44()
  // L156()
  goto L156_;

L155_:;
  // r73 = dyn base13(<sym edata>, "ftable")
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L29(r73)
  // L29(r73)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r73_;
  goto L29_;

L200_:;
  // edata8 = ld edata
  Rsh_Fir_reg_edata8_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L202() else D69()
  // L202()
  goto L202_;

L201_:;
  // r107 = dyn base18(<sym edata>)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L44(r107)
  // L44(r107)
  Rsh_Fir_reg_r108_ = Rsh_Fir_reg_r107_;
  goto L44_;

D41_:;
  // deopt 155 [c32, edata4]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_edata4_;
  Rsh_Fir_deopt(155, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 160 [c40, r71]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_c40_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(160, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 166 [edata6]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_edata6_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D69_:;
  // deopt 252 [edata8]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_edata8_;
  Rsh_Fir_deopt(252, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L31()
  // L31()
  goto L31_;

L31_:;
  // sym14 = ldf names
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base14 = ldf names in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args119);
  // if guard14 then L162() else L163()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L162()
    goto L162_;
  } else {
  // L163()
    goto L163_;
  }

L45_:;
  // goto L46()
  // L46()
  goto L46_;

L46_:;
  // l3 = ld m
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // ___ = ldf `$<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // check L212() else D73()
  // L212()
  goto L212_;

L149_:;
  // edata5 = force? edata4
  Rsh_Fir_reg_edata5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_edata4_);
  // checkMissing(edata5)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_edata5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r70 = dyn dim(edata5)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_edata5_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L150() else D42()
  // L150()
  goto L150_;

L151_:;
  // goto L26(c40, r71)
  // L26(c40, r71)
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r71_;
  goto L26_;

L156_:;
  // edata7 = force? edata6
  Rsh_Fir_reg_edata7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_edata6_);
  // checkMissing(edata7)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_edata7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // inherits3 = ldf inherits in base
  Rsh_Fir_reg_inherits3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r75 = dyn inherits3(edata7, "ftable", FALSE)
  SEXP Rsh_Fir_array_args123[3];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_edata7_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args123[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names45[3];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_array_arg_names45[2] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits3_, 3, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L157() else D45()
  // L157()
  goto L157_;

L158_:;
  // as_table = ldf `as.table`
  Rsh_Fir_reg_as_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L159() else D46()
  // L159()
  goto L159_;

L202_:;
  // edata9 = force? edata8
  Rsh_Fir_reg_edata9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_edata8_);
  // checkMissing(edata9)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_edata9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r109 = dyn is_matrix(edata9)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_edata9_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L203() else D70()
  // L203()
  goto L203_;

L204_:;
  // as_data_frame = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // check L205() else D71()
  // L205()
  goto L205_;

D42_:;
  // deopt 158 [c32, r70]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(158, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 171 [r75]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(171, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 173 []
  Rsh_Fir_deopt(173, 0, NULL, CCP, RHO);
  return R_NilValue;

D70_:;
  // deopt 255 [r109]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_deopt(255, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D71_:;
  // deopt 257 []
  Rsh_Fir_deopt(257, 0, NULL, CCP, RHO);
  return R_NilValue;

D73_:;
  // deopt 268 [NULL, l3, NULL]
  SEXP Rsh_Fir_array_deopt_stack41[3];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_const(CCP, 11);
  Rsh_Fir_deopt(268, 3, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L32_:;
  // st varnames = r80
  Rsh_Fir_store(Rsh_const(CCP, 67), Rsh_Fir_reg_r80_, RHO);
  (void)(Rsh_Fir_reg_r80_);
  // rhs_has_dot2 = ld `rhs.has.dot`
  Rsh_Fir_reg_rhs_has_dot2_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L169() else D51()
  // L169()
  goto L169_;

L150_:;
  // goto L27(c32, r70)
  // L27(c32, r70)
  Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r70_;
  goto L27_;

L157_:;
  // goto L29(r75)
  // L29(r75)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r75_;
  goto L29_;

L159_:;
  // p8 = prom<V +>{
  //   data5 = ld data;
  //   data6 = force? data5;
  //   checkMissing(data6);
  //   return data6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_8, 0, NULL, CCP, RHO);
  // r77 = dyn as_table(p8)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_table, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L160() else D47()
  // L160()
  goto L160_;

L162_:;
  // sym15 = ldf dimnames
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // base15 = ldf dimnames in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 68), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args128);
  // if guard15 then L164() else L165()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L164()
    goto L164_;
  } else {
  // L165()
    goto L165_;
  }

L163_:;
  // r79 = dyn base14(<lang dimnames(data)>)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L32(r79)
  // L32(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L32_;

L203_:;
  // goto L44(r109)
  // L44(r109)
  Rsh_Fir_reg_r108_ = Rsh_Fir_reg_r109_;
  goto L44_;

L205_:;
  // p16 = prom<V +>{
  //   data11 = ld data;
  //   data12 = force? data11;
  //   checkMissing(data12);
  //   return data12;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_9, 0, NULL, CCP, RHO);
  // r111 = dyn as_data_frame(p16)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L206() else D72()
  // L206()
  goto L206_;

L212_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // r118 = dyn ___[, , `...`, ](l3, NULL, ddd1, NULL)
  SEXP Rsh_Fir_array_args132[4];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args132[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args132[2] = Rsh_Fir_reg_ddd1_;
  Rsh_Fir_array_args132[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names50[4];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_arg_names50[3] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L213() else D74()
  // L213()
  goto L213_;

D47_:;
  // deopt 175 [r77]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 190 [rhs_has_dot2]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_rhs_has_dot2_;
  Rsh_Fir_deopt(190, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

D72_:;
  // deopt 259 [r111]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(259, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D74_:;
  // deopt 271 [NULL, r118]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_r118_;
  Rsh_Fir_deopt(271, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L33_:;
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r84 = dyn names(r82)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L168() else D50()
  // L168()
  goto L168_;

L160_:;
  // st data = r77
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r77_, RHO);
  (void)(Rsh_Fir_reg_r77_);
  // goto L31()
  // L31()
  goto L31_;

L164_:;
  // data7 = ld data
  Rsh_Fir_reg_data7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L166() else D48()
  // L166()
  goto L166_;

L165_:;
  // r81 = dyn base15(<sym data>)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L33(r81)
  // L33(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L33_;

L169_:;
  // rhs_has_dot3 = force? rhs_has_dot2
  Rsh_Fir_reg_rhs_has_dot3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rhs_has_dot2_);
  // checkMissing(rhs_has_dot3)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_rhs_has_dot3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // c46 = `as.logical`(rhs_has_dot3)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_rhs_has_dot3_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args136);
  // if c46 then L170() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L170()
    goto L170_;
  } else {
  // L34()
    goto L34_;
  }

L206_:;
  // l = ld m
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // c51 = `is.object`(l)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args137);
  // if c51 then L208() else L209(r111, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L208()
    goto L208_;
  } else {
  // L209(r111, l)
    Rsh_Fir_reg_r113_ = Rsh_Fir_reg_r111_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L209_;
  }

L213_:;
  // st m = r118
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_r118_, RHO);
  (void)(Rsh_Fir_reg_r118_);
  // sym19 = ldf `is.null`
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // base19 = ldf `is.null` in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args138);
  // if guard19 then L214() else L215()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L214()
    goto L214_;
  } else {
  // L215()
    goto L215_;
  }

D48_:;
  // deopt 183 [data7]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_data7_;
  Rsh_Fir_deopt(183, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 188 [r84]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L34_:;
  // pmatch = ldf pmatch
  Rsh_Fir_reg_pmatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // check L172() else D52()
  // L172()
  goto L172_;

L35_:;
  // lhs_has_dot2 = ld `lhs.has.dot`
  Rsh_Fir_reg_lhs_has_dot2_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L183() else D59()
  // L183()
  goto L183_;

L47_:;
  // r121 = `!`(r120)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_r120_;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args139);
  // c53 = `as.logical`(r121)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args140);
  // if c53 then L217() else L48(c53)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L217()
    goto L217_;
  } else {
  // L48(c53)
    Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c53_;
    goto L48_;
  }

L166_:;
  // data8 = force? data7
  Rsh_Fir_reg_data8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data7_);
  // checkMissing(data8)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_data8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 68), RHO);
  // r83 = dyn dimnames(data8)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_data8_;
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L167() else D49()
  // L167()
  goto L167_;

L168_:;
  // goto L32(r84)
  // L32(r84)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r84_;
  goto L32_;

L170_:;
  // st rvars = NULL
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_const(CCP, 11), RHO);
  (void)(Rsh_const(CCP, 11));
  // goto L35()
  // L35()
  goto L35_;

L207_:;
  // st m = dx7
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L46()
  // L46()
  goto L46_;

L208_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l, r111)
  SEXP Rsh_Fir_array_args143[3];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args143[2] = Rsh_Fir_reg_r111_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args143);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // if dc3 then L210() else L209(r111, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L210()
    goto L210_;
  } else {
  // L209(r111, dr6)
    Rsh_Fir_reg_r113_ = Rsh_Fir_reg_r111_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr6_;
    goto L209_;
  }

L209_:;
  // r116 = `$<-`(l2, <sym data>, r111)
  SEXP Rsh_Fir_array_args145[3];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args145[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args145[2] = Rsh_Fir_reg_r111_;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args145);
  // goto L207(r113, r116)
  // L207(r113, r116)
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r113_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r116_;
  goto L207_;

L214_:;
  // data13 = ld data
  Rsh_Fir_reg_data13_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L216() else D75()
  // L216()
  goto L216_;

L215_:;
  // r119 = dyn base19(<sym data>)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L47(r119)
  // L47(r119)
  Rsh_Fir_reg_r120_ = Rsh_Fir_reg_r119_;
  goto L47_;

D49_:;
  // deopt 186 [r83]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(186, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 196 []
  Rsh_Fir_deopt(196, 0, NULL, CCP, RHO);
  return R_NilValue;

D59_:;
  // deopt 216 [lhs_has_dot2]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_lhs_has_dot2_;
  Rsh_Fir_deopt(216, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D75_:;
  // deopt 274 [data13]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_data13_;
  Rsh_Fir_deopt(274, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L48_:;
  // c62 = `as.logical`(c55)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_c55_;
  Rsh_Fir_reg_c62_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args147);
  // if c62 then L223() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c62_)) {
  // L223()
    goto L223_;
  } else {
  // L50()
    goto L50_;
  }

L167_:;
  // goto L33(r83)
  // L33(r83)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r83_;
  goto L33_;

L172_:;
  // p9 = prom<V +>{
  //   rvars2 = ld rvars;
  //   rvars3 = force? rvars2;
  //   checkMissing(rvars3);
  //   return rvars3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_10, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   varnames = ld varnames;
  //   varnames1 = force? varnames;
  //   checkMissing(varnames1);
  //   return varnames1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_11, 0, NULL, CCP, RHO);
  // r88 = dyn pmatch(p9, p10)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names55[2];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch, 2, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L173() else D53()
  // L173()
  goto L173_;

L183_:;
  // lhs_has_dot3 = force? lhs_has_dot2
  Rsh_Fir_reg_lhs_has_dot3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lhs_has_dot2_);
  // checkMissing(lhs_has_dot3)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_lhs_has_dot3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // c48 = `as.logical`(lhs_has_dot3)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_lhs_has_dot3_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args152);
  // if c48 then L184() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L184()
    goto L184_;
  } else {
  // L39()
    goto L39_;
  }

L210_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // goto L207(r111, dx6)
  // L207(r111, dx6)
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r111_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L207_;

L216_:;
  // data14 = force? data13
  Rsh_Fir_reg_data14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data13_);
  // checkMissing(data14)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_data14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // c52 = `==`(data14, NULL)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_data14_;
  Rsh_Fir_array_args155[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args155);
  // goto L47(c52)
  // L47(c52)
  Rsh_Fir_reg_r120_ = Rsh_Fir_reg_c52_;
  goto L47_;

L217_:;
  // sym20 = ldf `is.environment`
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // base20 = ldf `is.environment` in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args156);
  // if guard20 then L218() else L219()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L218()
    goto L218_;
  } else {
  // L219()
    goto L219_;
  }

D53_:;
  // deopt 199 [r88]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(199, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L39_:;
  // pmatch1 = ldf pmatch
  Rsh_Fir_reg_pmatch1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // check L186() else D60()
  // L186()
  goto L186_;

L40_:;
  // ftable = ldf ftable
  Rsh_Fir_reg_ftable1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L197() else D67()
  // L197()
  goto L197_;

L49_:;
  // c59 = `as.logical`(r123)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args157);
  // c60 = `&&`(c58, c59)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_c58_;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args158);
  // goto L48(c60)
  // L48(c60)
  Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c60_;
  goto L48_;

L50_:;
  // lhs_has_dot6 = ld `lhs.has.dot`
  Rsh_Fir_reg_lhs_has_dot6_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L249() else D86()
  // L249()
  goto L249_;

L60_:;
  // as_formula = ldf `as.formula`
  Rsh_Fir_reg_as_formula = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // check L257() else D90()
  // L257()
  goto L257_;

L173_:;
  // st i = r88
  Rsh_Fir_store(Rsh_const(CCP, 75), Rsh_Fir_reg_r88_, RHO);
  (void)(Rsh_Fir_reg_r88_);
  // sym16 = ldf anyNA
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 76), RHO);
  // base16 = ldf anyNA in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args159);
  // if guard16 then L174() else L175()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L174()
    goto L174_;
  } else {
  // L175()
    goto L175_;
  }

L184_:;
  // st cvars = NULL
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_const(CCP, 11), RHO);
  (void)(Rsh_const(CCP, 11));
  // goto L40()
  // L40()
  goto L40_;

L218_:;
  // data15 = ld data
  Rsh_Fir_reg_data15_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L220() else D76()
  // L220()
  goto L220_;

L219_:;
  // r122 = dyn base20(<sym data>)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L49(c53, r122)
  // L49(c53, r122)
  Rsh_Fir_reg_c58_ = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r122_;
  goto L49_;

L223_:;
  // sym21 = ldf names
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base21 = ldf names in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args161);
  // if guard21 then L224() else L225()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L224()
    goto L224_;
  } else {
  // L225()
    goto L225_;
  }

D60_:;
  // deopt 222 []
  Rsh_Fir_deopt(222, 0, NULL, CCP, RHO);
  return R_NilValue;

D67_:;
  // deopt 243 []
  Rsh_Fir_deopt(243, 0, NULL, CCP, RHO);
  return R_NilValue;

D76_:;
  // deopt 280 [c53, data15]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_c53_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_data15_;
  Rsh_Fir_deopt(280, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D86_:;
  // deopt 318 [lhs_has_dot6]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_lhs_has_dot6_;
  Rsh_Fir_deopt(318, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

D90_:;
  // deopt 330 []
  Rsh_Fir_deopt(330, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // c47 = `as.logical`(r90)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args162);
  // if c47 then L178() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L178()
    goto L178_;
  } else {
  // L37()
    goto L37_;
  }

L51_:;
  // st varnames = r126
  Rsh_Fir_store(Rsh_const(CCP, 67), Rsh_Fir_reg_r126_, RHO);
  (void)(Rsh_Fir_reg_r126_);
  // rhs_has_dot4 = ld `rhs.has.dot`
  Rsh_Fir_reg_rhs_has_dot4_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L228() else D80()
  // L228()
  goto L228_;

L174_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // check L176() else D54()
  // L176()
  goto L176_;

L175_:;
  // r89 = dyn base16(<sym i>)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_const(CCP, 75);
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L36(r89)
  // L36(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L36_;

L186_:;
  // p11 = prom<V +>{
  //   cvars2 = ld cvars;
  //   cvars3 = force? cvars2;
  //   checkMissing(cvars3);
  //   return cvars3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_12, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   varnames2 = ld varnames;
  //   varnames3 = force? varnames2;
  //   checkMissing(varnames3);
  //   return varnames3;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_13, 0, NULL, CCP, RHO);
  // r97 = dyn pmatch1(p11, p12)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch1_, 2, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L187() else D61()
  // L187()
  goto L187_;

L197_:;
  // p13 = prom<V +>{
  //   data9 = ld data;
  //   data10 = force? data9;
  //   checkMissing(data10);
  //   return data10;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_14, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   rvars4 = ld rvars;
  //   rvars5 = force? rvars4;
  //   checkMissing(rvars5);
  //   return rvars5;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_15, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   cvars4 = ld cvars;
  //   cvars5 = force? cvars4;
  //   checkMissing(cvars5);
  //   return cvars5;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_16, 0, NULL, CCP, RHO);
  // r106 = dyn ftable[, `row.vars`, `col.vars`](p13, p14, p15)
  SEXP Rsh_Fir_array_args170[3];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args170[2] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names59[3];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = Rsh_const(CCP, 77);
  Rsh_Fir_array_arg_names59[2] = Rsh_const(CCP, 78);
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ftable1, 3, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L198() else D68()
  // L198()
  goto L198_;

L220_:;
  // data16 = force? data15
  Rsh_Fir_reg_data16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data15_);
  // checkMissing(data16)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_data16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // is_environment = ldf `is.environment` in base
  Rsh_Fir_reg_is_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // r124 = dyn is_environment(data16)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_data16_;
  SEXP Rsh_Fir_array_arg_names60[1];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_environment, 1, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L221() else D77()
  // L221()
  goto L221_;

L224_:;
  // data17 = ld data
  Rsh_Fir_reg_data17_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L226() else D78()
  // L226()
  goto L226_;

L225_:;
  // r125 = dyn base21(<sym data>)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args173, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L51(r125)
  // L51(r125)
  Rsh_Fir_reg_r126_ = Rsh_Fir_reg_r125_;
  goto L51_;

L249_:;
  // lhs_has_dot7 = force? lhs_has_dot6
  Rsh_Fir_reg_lhs_has_dot7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lhs_has_dot6_);
  // checkMissing(lhs_has_dot7)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_lhs_has_dot7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty()));
  // c67 = `as.logical`(lhs_has_dot7)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_lhs_has_dot7_;
  Rsh_Fir_reg_c67_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args175);
  // if c67 then L61(c67) else L250()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c67_)) {
  // L61(c67)
    Rsh_Fir_reg_c68_ = Rsh_Fir_reg_c67_;
    goto L61_;
  } else {
  // L250()
    goto L250_;
  }

L257_:;
  // p19 = prom<V +>{
  //   paste = ldf paste;
  //   p18 = prom<V +>{
  //     paste1 = ldf paste;
  //     p17 = prom<V +>{
  //       sym24 = ldf c;
  //       base24 = ldf c in base;
  //       guard24 = `==`.4(sym24, base24);
  //       if guard24 then L1() else L2();
  //     L0(r144):
  //       return r144;
  //     L1():
  //       rvars8 = ld rvars;
  //       rvars9 = force? rvars8;
  //       checkMissing(rvars9);
  //       cvars8 = ld cvars;
  //       cvars9 = force? cvars8;
  //       checkMissing(cvars9);
  //       c74 = ldf c in base;
  //       r145 = dyn c74(rvars9, cvars9);
  //       goto L0(r145);
  //     L2():
  //       r143 = dyn base24(<sym rvars>, <sym cvars>);
  //       goto L0(r143);
  //     };
  //     r147 = dyn paste1[, collapse](p17, "+");
  //     return r147;
  //   };
  //   r149 = dyn paste("~", p18);
  //   return r149;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_17, 0, NULL, CCP, RHO);
  // p21 = prom<V +>{
  //   environment = ldf environment;
  //   p20 = prom<V +>{
  //     formula17 = ld formula;
  //     formula18 = force? formula17;
  //     checkMissing(formula18);
  //     return formula18;
  //   };
  //   r152 = dyn environment(p20);
  //   return r152;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_20, 0, NULL, CCP, RHO);
  // r154 = dyn as_formula[, env](p19, p21)
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_array_arg_names67[2];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = Rsh_const(CCP, 85);
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_formula, 2, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names67, CCP, RHO);
  // check L258() else D91()
  // L258()
  goto L258_;

D54_:;
  // deopt 203 [i]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

D61_:;
  // deopt 225 [r97]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(225, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

D68_:;
  // deopt 249 [r106]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_deopt(249, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

D77_:;
  // deopt 283 [c53, r124]
  SEXP Rsh_Fir_array_deopt_stack57[2];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_c53_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_r124_;
  Rsh_Fir_deopt(283, 2, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

D78_:;
  // deopt 287 [data17]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_data17_;
  Rsh_Fir_deopt(287, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

D80_:;
  // deopt 292 [rhs_has_dot4]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_rhs_has_dot4_;
  Rsh_Fir_deopt(292, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

D91_:;
  // deopt 334 [r154]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r154_;
  Rsh_Fir_deopt(334, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L38()
  // L38()
  goto L38_;

L38_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // check L182() else D58()
  // L182()
  goto L182_;

L61_:;
  // c73 = `as.logical`(c68)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_c68_;
  Rsh_Fir_reg_c73_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args186);
  // if c73 then L253() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c73_)) {
  // L253()
    goto L253_;
  } else {
  // L62()
    goto L62_;
  }

L176_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // r91 = dyn anyNA(i1)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args188, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L177() else D55()
  // L177()
  goto L177_;

L178_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L179() else D56()
  // L179()
  goto L179_;

L187_:;
  // st i = r97
  Rsh_Fir_store(Rsh_const(CCP, 75), Rsh_Fir_reg_r97_, RHO);
  (void)(Rsh_Fir_reg_r97_);
  // sym17 = ldf anyNA
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 76), RHO);
  // base17 = ldf anyNA in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args189[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args189);
  // if guard17 then L188() else L189()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L188()
    goto L188_;
  } else {
  // L189()
    goto L189_;
  }

L198_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r106
  return Rsh_Fir_reg_r106_;

L221_:;
  // goto L49(c53, r124)
  // L49(c53, r124)
  Rsh_Fir_reg_c58_ = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r124_;
  goto L49_;

L226_:;
  // data18 = force? data17
  Rsh_Fir_reg_data18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data17_);
  // checkMissing(data18)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_data18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r127 = dyn names1(data18)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_data18_;
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names69, CCP, RHO);
  // check L227() else D79()
  // L227()
  goto L227_;

L228_:;
  // rhs_has_dot5 = force? rhs_has_dot4
  Rsh_Fir_reg_rhs_has_dot5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rhs_has_dot4_);
  // checkMissing(rhs_has_dot5)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_rhs_has_dot5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty()));
  // c63 = `as.logical`(rhs_has_dot5)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_rhs_has_dot5_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args193);
  // if c63 then L229() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c63_)) {
  // L229()
    goto L229_;
  } else {
  // L52()
    goto L52_;
  }

L250_:;
  // rhs_has_dot6 = ld `rhs.has.dot`
  Rsh_Fir_reg_rhs_has_dot6_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L251() else D87()
  // L251()
  goto L251_;

L258_:;
  // l4 = ld m
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // c75 = `is.object`(l4)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c75_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args194);
  // if c75 then L260() else L261(r154, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c75_)) {
  // L260()
    goto L260_;
  } else {
  // L261(r154, l4)
    Rsh_Fir_reg_r156_ = Rsh_Fir_reg_r154_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L261_;
  }

D55_:;
  // deopt 206 [r91]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 208 []
  Rsh_Fir_deopt(208, 0, NULL, CCP, RHO);
  return R_NilValue;

D58_:;
  // deopt 213 [i2]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(213, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

D79_:;
  // deopt 290 [r127]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r127_;
  Rsh_Fir_deopt(290, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

D87_:;
  // deopt 320 [c67, rhs_has_dot6]
  SEXP Rsh_Fir_array_deopt_stack64[2];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_c67_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_rhs_has_dot6_;
  Rsh_Fir_deopt(320, 2, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L41_:;
  // c49 = `as.logical`(r99)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args195);
  // if c49 then L192() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L192()
    goto L192_;
  } else {
  // L42()
    goto L42_;
  }

L52_:;
  // goto L55()
  // L55()
  goto L55_;

L55_:;
  // lhs_has_dot4 = ld `lhs.has.dot`
  Rsh_Fir_reg_lhs_has_dot4_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L238() else D83()
  // L238()
  goto L238_;

L62_:;
  // goto L60()
  // L60()
  goto L60_;

L177_:;
  // goto L36(r91)
  // L36(r91)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r91_;
  goto L36_;

L179_:;
  // r92 = dyn stop4("incorrect variable names in rhs of formula")
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names70[1];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args196, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L180() else D57()
  // L180()
  goto L180_;

L182_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // checkMissing(i3)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_i3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty()));
  // st rvars = i3
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_i3_, RHO);
  (void)(Rsh_Fir_reg_i3_);
  // goto L35()
  // L35()
  goto L35_;

L188_:;
  // i4 = ld i
  Rsh_Fir_reg_i4_ = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // check L190() else D62()
  // L190()
  goto L190_;

L189_:;
  // r98 = dyn base17(<sym i>)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_const(CCP, 75);
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names71, CCP, RHO);
  // goto L41(r98)
  // L41(r98)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r98_;
  goto L41_;

L227_:;
  // goto L51(r127)
  // L51(r127)
  Rsh_Fir_reg_r126_ = Rsh_Fir_reg_r127_;
  goto L51_;

L229_:;
  // sym22 = ldf seq_along
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 87), RHO);
  // base22 = ldf seq_along in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 87), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args199);
  // if guard22 then L230() else L231()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L230()
    goto L230_;
  } else {
  // L231()
    goto L231_;
  }

L251_:;
  // rhs_has_dot7 = force? rhs_has_dot6
  Rsh_Fir_reg_rhs_has_dot7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rhs_has_dot6_);
  // checkMissing(rhs_has_dot7)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_rhs_has_dot7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty()));
  // c70 = `as.logical`(rhs_has_dot7)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_rhs_has_dot7_;
  Rsh_Fir_reg_c70_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args201);
  // c71 = `||`(c67, c70)
  SEXP Rsh_Fir_array_args202[2];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_c67_;
  Rsh_Fir_array_args202[1] = Rsh_Fir_reg_c70_;
  Rsh_Fir_reg_c71_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args202);
  // goto L61(c71)
  // L61(c71)
  Rsh_Fir_reg_c68_ = Rsh_Fir_reg_c71_;
  goto L61_;

L253_:;
  // stop6 = ldf stop
  Rsh_Fir_reg_stop6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L254() else D88()
  // L254()
  goto L254_;

L259_:;
  // st m = dx16
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_dx16_, RHO);
  (void)(Rsh_Fir_reg_dx16_);
  // sym25 = ldf quote
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 88), RHO);
  // base25 = ldf quote in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 88), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args203[2];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args203[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args203);
  // if guard25 then L263() else L264()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L263()
    goto L263_;
  } else {
  // L264()
    goto L264_;
  }

L260_:;
  // dr12 = tryDispatchBuiltin.0("$<-", l4, r154)
  SEXP Rsh_Fir_array_args204[3];
  Rsh_Fir_array_args204[0] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args204[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args204[2] = Rsh_Fir_reg_r154_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args204);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty());
  // if dc6 then L262() else L261(r154, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L262()
    goto L262_;
  } else {
  // L261(r154, dr12)
    Rsh_Fir_reg_r156_ = Rsh_Fir_reg_r154_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr12_;
    goto L261_;
  }

L261_:;
  // r159 = `$<-`(l6, <sym formula>, r154)
  SEXP Rsh_Fir_array_args206[3];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args206[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args206[2] = Rsh_Fir_reg_r154_;
  Rsh_Fir_reg_r159_ = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args206);
  // goto L259(r159)
  // L259(r159)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r159_;
  goto L259_;

D57_:;
  // deopt 210 [r92]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(210, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

D62_:;
  // deopt 229 [i4]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_i4_;
  Rsh_Fir_deopt(229, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

D83_:;
  // deopt 305 [lhs_has_dot4]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_lhs_has_dot4_;
  Rsh_Fir_deopt(305, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

D88_:;
  // deopt 324 []
  Rsh_Fir_deopt(324, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L43()
  // L43()
  goto L43_;

L43_:;
  // i6 = ld i
  Rsh_Fir_reg_i6_ = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // check L196() else D66()
  // L196()
  goto L196_;

L53_:;
  // c64 = `is.object`(r129)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_r129_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args207);
  // if c64 then L233() else L234(r129)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c64_)) {
  // L233()
    goto L233_;
  } else {
  // L234(r129)
    Rsh_Fir_reg_r132_ = Rsh_Fir_reg_r129_;
    goto L234_;
  }

L63_:;
  // l7 = ld m
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // c76 = `is.object`(l7)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c76_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args208);
  // if c76 then L265() else L266(r161, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c76_)) {
  // L265()
    goto L265_;
  } else {
  // L266(r161, l7)
    Rsh_Fir_reg_r164_ = Rsh_Fir_reg_r161_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L266_;
  }

L180_:;
  // goto L38()
  // L38()
  goto L38_;

L190_:;
  // i5 = force? i4
  Rsh_Fir_reg_i5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i4_);
  // checkMissing(i5)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_i5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty()));
  // anyNA1 = ldf anyNA in base
  Rsh_Fir_reg_anyNA1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // r100 = dyn anyNA1(i5)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_array_arg_names72[1];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA1_, 1, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names72, CCP, RHO);
  // check L191() else D63()
  // L191()
  goto L191_;

L192_:;
  // stop5 = ldf stop
  Rsh_Fir_reg_stop5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L193() else D64()
  // L193()
  goto L193_;

L230_:;
  // varnames4 = ld varnames
  Rsh_Fir_reg_varnames4_ = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // check L232() else D81()
  // L232()
  goto L232_;

L231_:;
  // r128 = dyn base22(<sym varnames>)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names73[1];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args211, Rsh_Fir_array_arg_names73, CCP, RHO);
  // goto L53(r128)
  // L53(r128)
  Rsh_Fir_reg_r129_ = Rsh_Fir_reg_r128_;
  goto L53_;

L238_:;
  // lhs_has_dot5 = force? lhs_has_dot4
  Rsh_Fir_reg_lhs_has_dot5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lhs_has_dot4_);
  // checkMissing(lhs_has_dot5)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_lhs_has_dot5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty()));
  // c65 = `as.logical`(lhs_has_dot5)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_lhs_has_dot5_;
  Rsh_Fir_reg_c65_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args213);
  // if c65 then L239() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c65_)) {
  // L239()
    goto L239_;
  } else {
  // L56()
    goto L56_;
  }

L254_:;
  // r142 = dyn stop6("cannot use dots in formula with given data")
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_const(CCP, 89);
  SEXP Rsh_Fir_array_arg_names74[1];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop6_, 1, Rsh_Fir_array_args214, Rsh_Fir_array_arg_names74, CCP, RHO);
  // check L255() else D89()
  // L255()
  goto L255_;

L262_:;
  // dx15 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // goto L259(dx15)
  // L259(dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L259_;

L263_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 88), RHO);
  // r162 = dyn quote(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_const(CCP, 90);
  SEXP Rsh_Fir_array_arg_names75[1];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args216, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L63(r162)
  // L63(r162)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r162_;
  goto L63_;

L264_:;
  // r160 = dyn base25(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_const(CCP, 90);
  SEXP Rsh_Fir_array_arg_names76[1];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 1, Rsh_Fir_array_args217, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L63(r160)
  // L63(r160)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r160_;
  goto L63_;

D63_:;
  // deopt 232 [r100]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(232, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

D64_:;
  // deopt 234 []
  Rsh_Fir_deopt(234, 0, NULL, CCP, RHO);
  return R_NilValue;

D66_:;
  // deopt 239 [i6]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_deopt(239, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

D81_:;
  // deopt 295 [varnames4]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_varnames4_;
  Rsh_Fir_deopt(295, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

D89_:;
  // deopt 326 [r142]
  SEXP Rsh_Fir_array_deopt_stack71[1];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_r142_;
  Rsh_Fir_deopt(326, 1, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L54_:;
  // st rvars = dx9
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L55()
  // L55()
  goto L55_;

L56_:;
  // goto L59(NULL)
  // L59(NULL)
  Rsh_Fir_reg_dx13_ = Rsh_const(CCP, 11);
  goto L59_;

L59_:;
  // goto L60()
  // L60()
  goto L60_;

L64_:;
  // st m = dx18
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_dx18_, RHO);
  (void)(Rsh_Fir_reg_dx18_);
  // eval1 = ldf eval
  Rsh_Fir_reg_eval1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L268() else D92()
  // L268()
  goto L268_;

L191_:;
  // goto L41(r100)
  // L41(r100)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r100_;
  goto L41_;

L193_:;
  // r101 = dyn stop5("incorrect variable names in lhs of formula")
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_const(CCP, 91);
  SEXP Rsh_Fir_array_arg_names77[1];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop5_, 1, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names77, CCP, RHO);
  // check L194() else D65()
  // L194()
  goto L194_;

L196_:;
  // i7 = force? i6
  Rsh_Fir_reg_i7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i6_);
  // checkMissing(i7)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_i7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty()));
  // st cvars = i7
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_i7_, RHO);
  (void)(Rsh_Fir_reg_i7_);
  // goto L40()
  // L40()
  goto L40_;

L232_:;
  // varnames5 = force? varnames4
  Rsh_Fir_reg_varnames5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varnames4_);
  // checkMissing(varnames5)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_varnames5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty()));
  // r130 = seq_along(varnames5)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_varnames5_;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args221);
  // goto L53(r130)
  // L53(r130)
  Rsh_Fir_reg_r129_ = Rsh_Fir_reg_r130_;
  goto L53_;

L233_:;
  // dr8 = tryDispatchBuiltin.1("[", r129)
  SEXP Rsh_Fir_array_args222[2];
  Rsh_Fir_array_args222[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args222[1] = Rsh_Fir_reg_r129_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args222);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty());
  // if dc4 then L235() else L234(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L235()
    goto L235_;
  } else {
  // L234(dr8)
    Rsh_Fir_reg_r132_ = Rsh_Fir_reg_dr8_;
    goto L234_;
  }

L234_:;
  // cvars6 = ld cvars
  Rsh_Fir_reg_cvars6_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L236() else D82()
  // L236()
  goto L236_;

L239_:;
  // sym23 = ldf seq_along
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 87), RHO);
  // base23 = ldf seq_along in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 87), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args224[2];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args224);
  // if guard23 then L240() else L241()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L240()
    goto L240_;
  } else {
  // L241()
    goto L241_;
  }

L255_:;
  // goto L60()
  // L60()
  goto L60_;

L265_:;
  // dr14 = tryDispatchBuiltin.0("[[<-", l7, r161)
  SEXP Rsh_Fir_array_args225[3];
  Rsh_Fir_array_args225[0] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args225[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args225[2] = Rsh_Fir_reg_r161_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args225);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // if dc7 then L267() else L266(r161, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L267()
    goto L267_;
  } else {
  // L266(r161, dr14)
    Rsh_Fir_reg_r164_ = Rsh_Fir_reg_r161_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr14_;
    goto L266_;
  }

L266_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 93), RHO);
  // r167 = dyn ____(l9, r161, 1)
  SEXP Rsh_Fir_array_args227[3];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args227[1] = Rsh_Fir_reg_r161_;
  Rsh_Fir_array_args227[2] = Rsh_const(CCP, 94);
  SEXP Rsh_Fir_array_arg_names78[3];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_array_arg_names78[2] = R_MissingArg;
  Rsh_Fir_reg_r167_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L64(r167)
  // L64(r167)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r167_;
  goto L64_;

D65_:;
  // deopt 236 [r101]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_deopt(236, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

D82_:;
  // deopt 298 [r132, cvars6]
  SEXP Rsh_Fir_array_deopt_stack73[2];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_r132_;
  Rsh_Fir_array_deopt_stack73[1] = Rsh_Fir_reg_cvars6_;
  Rsh_Fir_deopt(298, 2, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

D92_:;
  // deopt 347 []
  Rsh_Fir_deopt(347, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // c66 = `is.object`(r136)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_r136_;
  Rsh_Fir_reg_c66_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args228);
  // if c66 then L243() else L244(r136)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c66_)) {
  // L243()
    goto L243_;
  } else {
  // L244(r136)
    Rsh_Fir_reg_r139_ = Rsh_Fir_reg_r136_;
    goto L244_;
  }

L194_:;
  // goto L43()
  // L43()
  goto L43_;

L235_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty());
  // goto L54(dx8)
  // L54(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L54_;

L236_:;
  // cvars7 = force? cvars6
  Rsh_Fir_reg_cvars7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cvars6_);
  // checkMissing(cvars7)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_cvars7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty()));
  // r133 = `-`(<missing>, cvars7)
  SEXP Rsh_Fir_array_args231[2];
  Rsh_Fir_array_args231[0] = Rsh_const(CCP, 95);
  Rsh_Fir_array_args231[1] = Rsh_Fir_reg_cvars7_;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args231);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r134 = dyn __2(r132, r133)
  SEXP Rsh_Fir_array_args232[2];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_r132_;
  Rsh_Fir_array_args232[1] = Rsh_Fir_reg_r133_;
  SEXP Rsh_Fir_array_arg_names79[2];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args232, Rsh_Fir_array_arg_names79, CCP, RHO);
  // goto L54(r134)
  // L54(r134)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r134_;
  goto L54_;

L240_:;
  // varnames6 = ld varnames
  Rsh_Fir_reg_varnames6_ = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // check L242() else D84()
  // L242()
  goto L242_;

L241_:;
  // r135 = dyn base23(<sym varnames>)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names80[1];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 1, Rsh_Fir_array_args233, Rsh_Fir_array_arg_names80, CCP, RHO);
  // goto L57(r135)
  // L57(r135)
  Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r135_;
  goto L57_;

L267_:;
  // dx17 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty());
  // goto L64(dx17)
  // L64(dx17)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L64_;

L268_:;
  // p22 = prom<V +>{
  //   m4 = ld m;
  //   m5 = force? m4;
  //   checkMissing(m5);
  //   return m5;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_22, 0, NULL, CCP, RHO);
  // p23 = prom<V +>{
  //   parent_frame1 = ldf `parent.frame`;
  //   r169 = dyn parent_frame1();
  //   return r169;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_23, 0, NULL, CCP, RHO);
  // r171 = dyn eval1(p22, p23)
  SEXP Rsh_Fir_array_args236[2];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args236[1] = Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_array_arg_names81[2];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_array_arg_names81[1] = R_MissingArg;
  Rsh_Fir_reg_r171_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval1_, 2, Rsh_Fir_array_args236, Rsh_Fir_array_arg_names81, CCP, RHO);
  // check L269() else D93()
  // L269()
  goto L269_;

D84_:;
  // deopt 308 [varnames6]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_varnames6_;
  Rsh_Fir_deopt(308, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

D93_:;
  // deopt 350 [r171]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_r171_;
  Rsh_Fir_deopt(350, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L58_:;
  // st cvars = dx12
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_dx12_, RHO);
  (void)(Rsh_Fir_reg_dx12_);
  // goto L59(dx12)
  // L59(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L59_;

L242_:;
  // varnames7 = force? varnames6
  Rsh_Fir_reg_varnames7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varnames6_);
  // checkMissing(varnames7)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_varnames7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty()));
  // r137 = seq_along(varnames7)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_varnames7_;
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args238);
  // goto L57(r137)
  // L57(r137)
  Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r137_;
  goto L57_;

L243_:;
  // dr10 = tryDispatchBuiltin.1("[", r136)
  SEXP Rsh_Fir_array_args239[2];
  Rsh_Fir_array_args239[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args239[1] = Rsh_Fir_reg_r136_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args239);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty());
  // if dc5 then L245() else L244(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L245()
    goto L245_;
  } else {
  // L244(dr10)
    Rsh_Fir_reg_r139_ = Rsh_Fir_reg_dr10_;
    goto L244_;
  }

L244_:;
  // rvars6 = ld rvars
  Rsh_Fir_reg_rvars6_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L246() else D85()
  // L246()
  goto L246_;

L269_:;
  // st mf = r171
  Rsh_Fir_store(Rsh_const(CCP, 96), Rsh_Fir_reg_r171_, RHO);
  (void)(Rsh_Fir_reg_r171_);
  // ftable1 = ldf ftable
  Rsh_Fir_reg_ftable1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L270() else D94()
  // L270()
  goto L270_;

D85_:;
  // deopt 311 [r139, rvars6]
  SEXP Rsh_Fir_array_deopt_stack76[2];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_r139_;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_Fir_reg_rvars6_;
  Rsh_Fir_deopt(311, 2, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

D94_:;
  // deopt 353 []
  Rsh_Fir_deopt(353, 0, NULL, CCP, RHO);
  return R_NilValue;

L245_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty());
  // goto L58(dx11)
  // L58(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L58_;

L246_:;
  // rvars7 = force? rvars6
  Rsh_Fir_reg_rvars7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rvars6_);
  // checkMissing(rvars7)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_rvars7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty()));
  // r140 = `-`(<missing>, rvars7)
  SEXP Rsh_Fir_array_args243[2];
  Rsh_Fir_array_args243[0] = Rsh_const(CCP, 95);
  Rsh_Fir_array_args243[1] = Rsh_Fir_reg_rvars7_;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args243);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r141 = dyn __3(r139, r140)
  SEXP Rsh_Fir_array_args244[2];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_r139_;
  Rsh_Fir_array_args244[1] = Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_array_arg_names82[2];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_array_arg_names82[1] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args244, Rsh_Fir_array_arg_names82, CCP, RHO);
  // goto L58(r141)
  // L58(r141)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r141_;
  goto L58_;

L270_:;
  // p24 = prom<V +>{
  //   mf = ld mf;
  //   mf1 = force? mf;
  //   checkMissing(mf1);
  //   return mf1;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_24, 0, NULL, CCP, RHO);
  // p25 = prom<V +>{
  //   rvars10 = ld rvars;
  //   rvars11 = force? rvars10;
  //   checkMissing(rvars11);
  //   return rvars11;
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_25, 0, NULL, CCP, RHO);
  // p26 = prom<V +>{
  //   cvars10 = ld cvars;
  //   cvars11 = force? cvars10;
  //   checkMissing(cvars11);
  //   return cvars11;
  // }
  Rsh_Fir_reg_p26_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_26, 0, NULL, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // r175 = dyn ftable1[, `row.vars`, `col.vars`, `...`](p24, p25, p26, ddd2)
  SEXP Rsh_Fir_array_args248[4];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_p24_;
  Rsh_Fir_array_args248[1] = Rsh_Fir_reg_p25_;
  Rsh_Fir_array_args248[2] = Rsh_Fir_reg_p26_;
  Rsh_Fir_array_args248[3] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names83[4];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_array_arg_names83[1] = Rsh_const(CCP, 77);
  Rsh_Fir_array_arg_names83[2] = Rsh_const(CCP, 78);
  Rsh_Fir_array_arg_names83[3] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r175_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ftable1_1, 4, Rsh_Fir_array_args248, Rsh_Fir_array_arg_names83, CCP, RHO);
  // check L271() else D95()
  // L271()
  goto L271_;

D95_:;
  // deopt 360 [r175]
  SEXP Rsh_Fir_array_deopt_stack77[1];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_r175_;
  Rsh_Fir_deopt(360, 1, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L271_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r175
  return Rsh_Fir_reg_r175_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data1_;
  SEXP Rsh_Fir_reg_data2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return data2
  return Rsh_Fir_reg_data2_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_formula5_;
  SEXP Rsh_Fir_reg_formula6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // formula5 = ld formula
  Rsh_Fir_reg_formula5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // formula6 = force? formula5
  Rsh_Fir_reg_formula6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula5_);
  // checkMissing(formula6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_formula6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return formula6
  return Rsh_Fir_reg_formula6_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data3_;
  SEXP Rsh_Fir_reg_data4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // data3 = ld data
  Rsh_Fir_reg_data3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // data4 = force? data3
  Rsh_Fir_reg_data4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data3_);
  // checkMissing(data4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_data4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return data4
  return Rsh_Fir_reg_data4_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_formula7_;
  SEXP Rsh_Fir_reg_formula8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // formula7 = ld formula
  Rsh_Fir_reg_formula7_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // formula8 = force? formula7
  Rsh_Fir_reg_formula8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula7_);
  // checkMissing(formula8)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_formula8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return formula8
  return Rsh_Fir_reg_formula8_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_formula9_;
  SEXP Rsh_Fir_reg_formula10_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_formula12_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r34_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // formula9 = ld formula
  Rsh_Fir_reg_formula9_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // formula10 = force? formula9
  Rsh_Fir_reg_formula10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula9_);
  // checkMissing(formula10)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_formula10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(formula10)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_formula10_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args52);
  // if c13 then L1() else L2(formula10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L1()
    goto L1_;
  } else {
  // L2(formula10)
    Rsh_Fir_reg_formula12_ = Rsh_Fir_reg_formula10_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", formula10)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_formula10_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_formula12_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r34 = dyn __(formula12, -2)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_formula12_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r34_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_formula13_;
  SEXP Rsh_Fir_reg_formula14_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_formula16_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_1;
  SEXP Rsh_Fir_reg_r40_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // formula13 = ld formula
  Rsh_Fir_reg_formula13_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // formula14 = force? formula13
  Rsh_Fir_reg_formula14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula13_);
  // checkMissing(formula14)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_formula14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(formula14)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_formula14_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args62);
  // if c14 then L1() else L2(formula14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L1()
    goto L1_;
  } else {
  // L2(formula14)
    Rsh_Fir_reg_formula16_ = Rsh_Fir_reg_formula14_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", formula14)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_formula14_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args63);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_formula16_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r40 = dyn __1(formula16, -3)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_formula16_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r40_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r55_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(m1)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args86);
  // if c22 then L1() else L2(m1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L1()
    goto L1_;
  } else {
  // L2(m1)
    Rsh_Fir_reg_m3_ = Rsh_Fir_reg_m1_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", m1)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_m3_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r55 = `$`(m3, <sym data>)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args89);
  // goto L0(r55)
  // L0(r55)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r55_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r57_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // r57 = dyn parent_frame()
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r57
  return Rsh_Fir_reg_r57_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data5_;
  SEXP Rsh_Fir_reg_data6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // data5 = ld data
  Rsh_Fir_reg_data5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // data6 = force? data5
  Rsh_Fir_reg_data6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data5_);
  // checkMissing(data6)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_data6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // return data6
  return Rsh_Fir_reg_data6_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data11_;
  SEXP Rsh_Fir_reg_data12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // data11 = ld data
  Rsh_Fir_reg_data11_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // data12 = force? data11
  Rsh_Fir_reg_data12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data11_);
  // checkMissing(data12)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_data12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // return data12
  return Rsh_Fir_reg_data12_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rvars2_;
  SEXP Rsh_Fir_reg_rvars3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // rvars2 = ld rvars
  Rsh_Fir_reg_rvars2_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // rvars3 = force? rvars2
  Rsh_Fir_reg_rvars3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rvars2_);
  // checkMissing(rvars3)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_rvars3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // return rvars3
  return Rsh_Fir_reg_rvars3_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_varnames;
  SEXP Rsh_Fir_reg_varnames1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // varnames = ld varnames
  Rsh_Fir_reg_varnames = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // varnames1 = force? varnames
  Rsh_Fir_reg_varnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varnames);
  // checkMissing(varnames1)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_varnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // return varnames1
  return Rsh_Fir_reg_varnames1_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cvars2_;
  SEXP Rsh_Fir_reg_cvars3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // cvars2 = ld cvars
  Rsh_Fir_reg_cvars2_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // cvars3 = force? cvars2
  Rsh_Fir_reg_cvars3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cvars2_);
  // checkMissing(cvars3)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_cvars3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // return cvars3
  return Rsh_Fir_reg_cvars3_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_varnames2_;
  SEXP Rsh_Fir_reg_varnames3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // varnames2 = ld varnames
  Rsh_Fir_reg_varnames2_ = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // varnames3 = force? varnames2
  Rsh_Fir_reg_varnames3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varnames2_);
  // checkMissing(varnames3)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_varnames3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty()));
  // return varnames3
  return Rsh_Fir_reg_varnames3_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data9_;
  SEXP Rsh_Fir_reg_data10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // data9 = ld data
  Rsh_Fir_reg_data9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // data10 = force? data9
  Rsh_Fir_reg_data10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data9_);
  // checkMissing(data10)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_data10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty()));
  // return data10
  return Rsh_Fir_reg_data10_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rvars4_;
  SEXP Rsh_Fir_reg_rvars5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // rvars4 = ld rvars
  Rsh_Fir_reg_rvars4_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // rvars5 = force? rvars4
  Rsh_Fir_reg_rvars5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rvars4_);
  // checkMissing(rvars5)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_rvars5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // return rvars5
  return Rsh_Fir_reg_rvars5_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cvars4_;
  SEXP Rsh_Fir_reg_cvars5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // cvars4 = ld cvars
  Rsh_Fir_reg_cvars4_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // cvars5 = force? cvars4
  Rsh_Fir_reg_cvars5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cvars4_);
  // checkMissing(cvars5)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_cvars5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty()));
  // return cvars5
  return Rsh_Fir_reg_cvars5_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r149_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // p18 = prom<V +>{
  //   paste1 = ldf paste;
  //   p17 = prom<V +>{
  //     sym24 = ldf c;
  //     base24 = ldf c in base;
  //     guard24 = `==`.4(sym24, base24);
  //     if guard24 then L1() else L2();
  //   L0(r144):
  //     return r144;
  //   L1():
  //     rvars8 = ld rvars;
  //     rvars9 = force? rvars8;
  //     checkMissing(rvars9);
  //     cvars8 = ld cvars;
  //     cvars9 = force? cvars8;
  //     checkMissing(cvars9);
  //     c74 = ldf c in base;
  //     r145 = dyn c74(rvars9, cvars9);
  //     goto L0(r145);
  //   L2():
  //     r143 = dyn base24(<sym rvars>, <sym cvars>);
  //     goto L0(r143);
  //   };
  //   r147 = dyn paste1[, collapse](p17, "+");
  //   return r147;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_18, 0, NULL, CCP, RHO);
  // r149 = dyn paste("~", p18)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_const(CCP, 83);
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names65[2];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names65, CCP, RHO);
  // return r149
  return Rsh_Fir_reg_r149_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r147_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // p17 = prom<V +>{
  //   sym24 = ldf c;
  //   base24 = ldf c in base;
  //   guard24 = `==`.4(sym24, base24);
  //   if guard24 then L1() else L2();
  // L0(r144):
  //   return r144;
  // L1():
  //   rvars8 = ld rvars;
  //   rvars9 = force? rvars8;
  //   checkMissing(rvars9);
  //   cvars8 = ld cvars;
  //   cvars9 = force? cvars8;
  //   checkMissing(cvars9);
  //   c74 = ldf c in base;
  //   r145 = dyn c74(rvars9, cvars9);
  //   goto L0(r145);
  // L2():
  //   r143 = dyn base24(<sym rvars>, <sym cvars>);
  //   goto L0(r143);
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_19, 0, NULL, CCP, RHO);
  // r147 = dyn paste1[, collapse](p17, "+")
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args181[1] = Rsh_const(CCP, 81);
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = Rsh_const(CCP, 82);
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names64, CCP, RHO);
  // return r147
  return Rsh_Fir_reg_r147_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym24_;
  SEXP Rsh_Fir_reg_base24_;
  SEXP Rsh_Fir_reg_guard24_;
  SEXP Rsh_Fir_reg_r143_;
  SEXP Rsh_Fir_reg_r144_;
  SEXP Rsh_Fir_reg_rvars8_;
  SEXP Rsh_Fir_reg_rvars9_;
  SEXP Rsh_Fir_reg_cvars8_;
  SEXP Rsh_Fir_reg_cvars9_;
  SEXP Rsh_Fir_reg_c74_;
  SEXP Rsh_Fir_reg_r145_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // sym24 = ldf c
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // base24 = ldf c in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args176[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args176);
  // if guard24 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r144
  return Rsh_Fir_reg_r144_;

L1_:;
  // rvars8 = ld rvars
  Rsh_Fir_reg_rvars8_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // rvars9 = force? rvars8
  Rsh_Fir_reg_rvars9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rvars8_);
  // checkMissing(rvars9)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_rvars9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty()));
  // cvars8 = ld cvars
  Rsh_Fir_reg_cvars8_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // cvars9 = force? cvars8
  Rsh_Fir_reg_cvars9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cvars8_);
  // checkMissing(cvars9)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_cvars9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty()));
  // c74 = ldf c in base
  Rsh_Fir_reg_c74_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // r145 = dyn c74(rvars9, cvars9)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_rvars9_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_cvars9_;
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c74_, 2, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L0(r145)
  // L0(r145)
  Rsh_Fir_reg_r144_ = Rsh_Fir_reg_r145_;
  goto L0_;

L2_:;
  // r143 = dyn base24(<sym rvars>, <sym cvars>)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args180[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 2, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L0(r143)
  // L0(r143)
  Rsh_Fir_reg_r144_ = Rsh_Fir_reg_r143_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_environment;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r152_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 84), RHO);
  // p20 = prom<V +>{
  //   formula17 = ld formula;
  //   formula18 = force? formula17;
  //   checkMissing(formula18);
  //   return formula18;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_21, 0, NULL, CCP, RHO);
  // r152 = dyn environment(p20)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r152_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 1, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names66, CCP, RHO);
  // return r152
  return Rsh_Fir_reg_r152_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_formula17_;
  SEXP Rsh_Fir_reg_formula18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // formula17 = ld formula
  Rsh_Fir_reg_formula17_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // formula18 = force? formula17
  Rsh_Fir_reg_formula18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula17_);
  // checkMissing(formula18)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_formula18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty()));
  // return formula18
  return Rsh_Fir_reg_formula18_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m4_;
  SEXP Rsh_Fir_reg_m5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty()));
  // return m5
  return Rsh_Fir_reg_m5_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame1_;
  SEXP Rsh_Fir_reg_r169_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // parent_frame1 = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // r169 = dyn parent_frame1()
  Rsh_Fir_reg_r169_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame1_, 0, NULL, NULL, CCP, RHO);
  // return r169
  return Rsh_Fir_reg_r169_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mf;
  SEXP Rsh_Fir_reg_mf1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // mf = ld mf
  Rsh_Fir_reg_mf = Rsh_Fir_load(Rsh_const(CCP, 96), RHO);
  // mf1 = force? mf
  Rsh_Fir_reg_mf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf);
  // checkMissing(mf1)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_mf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty()));
  // return mf1
  return Rsh_Fir_reg_mf1_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_25(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rvars10_;
  SEXP Rsh_Fir_reg_rvars11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // rvars10 = ld rvars
  Rsh_Fir_reg_rvars10_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // rvars11 = force? rvars10
  Rsh_Fir_reg_rvars11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rvars10_);
  // checkMissing(rvars11)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_rvars11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty()));
  // return rvars11
  return Rsh_Fir_reg_rvars11_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_26(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cvars10_;
  SEXP Rsh_Fir_reg_cvars11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4130229875/0: expected 0, got %d", NCAPTURES);

  // cvars10 = ld cvars
  Rsh_Fir_reg_cvars10_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // cvars11 = force? cvars10
  Rsh_Fir_reg_cvars11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cvars10_);
  // checkMissing(cvars11)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_cvars11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty()));
  // return cvars11
  return Rsh_Fir_reg_cvars11_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
