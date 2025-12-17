#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_b;  // b
  SEXP Rsh_Fir_reg_b1_;  // b1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg______;  // _____
  SEXP Rsh_Fir_reg_b2_;  // b2
  SEXP Rsh_Fir_reg_b3_;  // b3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg______1_;  // _____1
  SEXP Rsh_Fir_reg_b4_;  // b4
  SEXP Rsh_Fir_reg_b5_;  // b5
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r5_;  // r5

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = 1.0
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // sst y = 2.0
  Rsh_Fir_super_store(Rsh_const(CCP, 3), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // l = ld a
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // ____ = ldf `::<-`
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 9 [1.0, l, 1.0]
  SEXP Rsh_Fir_array_deopt_stack[3];
  Rsh_Fir_array_deopt_stack[0] = Rsh_const(CCP, 0);
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack[2] = Rsh_const(CCP, 0);
  Rsh_Fir_deopt(9, 3, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   b = ld b;
  //   b1 = force? b;
  //   checkMissing(b1);
  //   return b1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, CCP, RHO);
  // r1 = dyn ____(l, NULL, p, 1.0)
  SEXP Rsh_Fir_array_args1[4];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[2] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 0);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 4, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 12 [1.0, r1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_const(CCP, 0);
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L1_:;
  // st a = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // l1 = ld a
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // _____ = ldf `:::<-`
  Rsh_Fir_reg______ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 17 [3.0, l1, 3.0]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_const(CCP, 9);
  Rsh_Fir_deopt(17, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   b2 = ld b;
  //   b3 = force? b2;
  //   checkMissing(b3);
  //   return b3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, CCP, RHO);
  // r3 = dyn _____(l1, NULL, p1, 3.0)
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[2] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg______, 4, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 20 [3.0, r3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L3_:;
  // st a = r3
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // l2 = sld a
  Rsh_Fir_reg_l2_ = Rsh_Fir_super_load(Rsh_const(CCP, 4), RHO);
  // _____1 = ldf `:::<-`
  Rsh_Fir_reg______1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 25 [3.0, l2, 3.0]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_const(CCP, 9);
  Rsh_Fir_deopt(25, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   b4 = ld b;
  //   b5 = force? b4;
  //   checkMissing(b5);
  //   return b5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, CCP, RHO);
  // r5 = dyn _____1(l2, NULL, p2, 3.0)
  SEXP Rsh_Fir_array_args5[4];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg______1_, 4, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 28 [3.0, r5]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L5_:;
  // sst a = r5
  Rsh_Fir_super_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 3.0
  return Rsh_const(CCP, 9);
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO) {
  // b = ld b
  Rsh_Fir_reg_b = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // b1 = force? b
  Rsh_Fir_reg_b1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b);
  // checkMissing(b1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_b1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return b1
  return Rsh_Fir_reg_b1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO) {
  // b2 = ld b
  Rsh_Fir_reg_b2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // b3 = force? b2
  Rsh_Fir_reg_b3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b2_);
  // checkMissing(b3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_b3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return b3
  return Rsh_Fir_reg_b3_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO) {
  // b4 = ld b
  Rsh_Fir_reg_b4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // b5 = force? b4
  Rsh_Fir_reg_b5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b4_);
  // checkMissing(b5)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_b5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return b5
  return Rsh_Fir_reg_b5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
