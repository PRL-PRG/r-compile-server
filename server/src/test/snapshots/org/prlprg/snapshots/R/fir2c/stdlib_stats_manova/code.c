#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner1246119658_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1246119658_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1246119658_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r
  SEXP Rsh_Fir_reg_options;  // options
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_within;  // within
  SEXP Rsh_Fir_reg_npk;  // npk
  SEXP Rsh_Fir_reg_npk1_;  // npk1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_rnorm;  // rnorm
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_manova;  // manova
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_npk2_;  // npk2
  SEXP Rsh_Fir_reg_npk3_;  // npk3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_summary;  // summary
  SEXP Rsh_Fir_reg_npk2_aov;  // npk2_aov
  SEXP Rsh_Fir_reg_npk2_aov1_;  // npk2_aov1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_manova1_;  // manova1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_npk4_;  // npk4
  SEXP Rsh_Fir_reg_npk5_;  // npk5
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_summary1_;  // summary1
  SEXP Rsh_Fir_reg_npk2_aovE;  // npk2_aovE
  SEXP Rsh_Fir_reg_npk2_aovE1_;  // npk2_aovE1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r21_;  // r21

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1246119658
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1246119658_, RHO, CCP);
  // st manova = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c("contr.helmert", "contr.poly");
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base("contr.helmert", "contr.poly");
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, CCP, RHO);
  // r5 = dyn options[contrasts](p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st op = r5
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // within = ldf within
  Rsh_Fir_reg_within = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   npk = ld npk;
  //   npk1 = force? npk;
  //   checkMissing(npk1);
  //   return npk1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, CCP, RHO);
  // p2 = prom<V +>{
  //   rnorm = ldf rnorm;
  //   r7 = dyn rnorm(24.0);
  //   st foo = r7;
  //   invisible.0();
  //   return r7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, CCP, RHO);
  // r9 = dyn within(p1, p2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_within, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 13 [r9]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // st npk2 = r9
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // manova = ldf manova
  Rsh_Fir_reg_manova = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p3 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r10 = dyn __(<lang cbind(yield, foo)>, <lang `+`(block, `*`(`*`(N, P), K))>);
  //   return r10;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, CCP, RHO);
  // p4 = prom<V +>{
  //   npk2 = ld npk2;
  //   npk3 = force? npk2;
  //   checkMissing(npk3);
  //   return npk3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, CCP, RHO);
  // r13 = dyn manova(p3, p4)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_manova, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 19 [r13]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // st `npk2.aov` = r13
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // summary = ldf summary
  Rsh_Fir_reg_summary = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p5 = prom<V +>{
  //   npk2_aov = ld `npk2.aov`;
  //   npk2_aov1 = force? npk2_aov;
  //   checkMissing(npk2_aov1);
  //   return npk2_aov1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, CCP, RHO);
  // r15 = dyn summary(p5)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 24 [r15]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // manova1 = ldf manova
  Rsh_Fir_reg_manova1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p6 = prom<V +>{
  //   __1 = ldf `~` in base;
  //   r16 = dyn __1(<lang cbind(yield, foo)>, <lang `+`(`*`(`*`(N, P), K), Error(block))>);
  //   return r16;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, CCP, RHO);
  // p7 = prom<V +>{
  //   npk4 = ld npk2;
  //   npk5 = force? npk4;
  //   checkMissing(npk5);
  //   return npk5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, CCP, RHO);
  // r19 = dyn manova1(p6, p7)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_manova1_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 29 [r19]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // st `npk2.aovE` = r19
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // summary1 = ldf summary
  Rsh_Fir_reg_summary1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p8 = prom<V +>{
  //   npk2_aovE = ld `npk2.aovE`;
  //   npk2_aovE1 = force? npk2_aovE;
  //   checkMissing(npk2_aovE1);
  //   return npk2_aovE1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, CCP, RHO);
  // r21 = dyn summary1(p8)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 34 [r21]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r3 = dyn c("contr.helmert", "contr.poly")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base("contr.helmert", "contr.poly")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO) {
  // npk = ld npk
  Rsh_Fir_reg_npk = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // npk1 = force? npk
  Rsh_Fir_reg_npk1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npk);
  // checkMissing(npk1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_npk1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return npk1
  return Rsh_Fir_reg_npk1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO) {
  // rnorm = ldf rnorm
  Rsh_Fir_reg_rnorm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // r7 = dyn rnorm(24.0)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rnorm, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // st foo = r7
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO) {
  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r10 = dyn __(<lang cbind(yield, foo)>, <lang `+`(block, `*`(`*`(N, P), K))>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO) {
  // npk2 = ld npk2
  Rsh_Fir_reg_npk2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // npk3 = force? npk2
  Rsh_Fir_reg_npk3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npk2_);
  // checkMissing(npk3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_npk3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return npk3
  return Rsh_Fir_reg_npk3_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO) {
  // npk2_aov = ld `npk2.aov`
  Rsh_Fir_reg_npk2_aov = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // npk2_aov1 = force? npk2_aov
  Rsh_Fir_reg_npk2_aov1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npk2_aov);
  // checkMissing(npk2_aov1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_npk2_aov1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return npk2_aov1
  return Rsh_Fir_reg_npk2_aov1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO) {
  // __1 = ldf `~` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r16 = dyn __1(<lang cbind(yield, foo)>, <lang `+`(`*`(`*`(N, P), K), Error(block))>)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names8, CCP, RHO);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO) {
  // npk4 = ld npk2
  Rsh_Fir_reg_npk4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // npk5 = force? npk4
  Rsh_Fir_reg_npk5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npk4_);
  // checkMissing(npk5)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_npk5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return npk5
  return Rsh_Fir_reg_npk5_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO) {
  // npk2_aovE = ld `npk2.aovE`
  Rsh_Fir_reg_npk2_aovE = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // npk2_aovE1 = force? npk2_aovE
  Rsh_Fir_reg_npk2_aovE1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npk2_aovE);
  // checkMissing(npk2_aovE1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_npk2_aovE1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return npk2_aovE1
  return Rsh_Fir_reg_npk2_aovE1_;
}
SEXP Rsh_Fir_user_function_inner1246119658_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1246119658 dynamic dispatch ([`...`])

  return Rsh_Fir_user_version_inner1246119658_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1246119658_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1246119658 version 0 (dots -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1246119658/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_match_call;  // match_call
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_fcall;  // fcall
  SEXP Rsh_Fir_reg_fcall1_;  // fcall1
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r13_1;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_result;  // result
  SEXP Rsh_Fir_reg_result1_;  // result1
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r15_1;  // r15
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r16_1;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_result2_;  // result2
  SEXP Rsh_Fir_reg_result3_;  // result3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r19_1;  // r19
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_result4_;  // result4
  SEXP Rsh_Fir_reg_result5_;  // result5
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_result7_;  // result7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r21_1;  // r21
  SEXP Rsh_Fir_reg_inherits1_;  // inherits1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_result8_;  // result8
  SEXP Rsh_Fir_reg_result9_;  // result9
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_result11_;  // result11
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg___1_1;  // __1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_oldClass;  // oldClass
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_i36_;  // i36
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i38_;  // i38
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_i39_;  // i39
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_Call;  // Call
  SEXP Rsh_Fir_reg_Call1_;  // Call1
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_result12_;  // result12
  SEXP Rsh_Fir_reg_result13_;  // result13
  SEXP Rsh_Fir_reg_inherits2_;  // inherits2
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_result14_;  // result14
  SEXP Rsh_Fir_reg_result15_;  // result15
  SEXP Rsh_Fir_reg_oldClass1_;  // oldClass1
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_class__1_;  // class__1
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_Call3_;  // Call3
  SEXP Rsh_Fir_reg_Call4_;  // Call4
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_Call6_;  // Call6
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_Call8_;  // Call8
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_result16_;  // result16
  SEXP Rsh_Fir_reg_result17_;  // result17

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L22() else D0()
  // L22()
  goto L22_;

L0_:;
  // l = ld fcall
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c = `is.object`(l)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c then L26() else L27(r2, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L26()
    goto L26_;
  } else {
  // L27(r2, l)
    Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r2_1;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L27_;
  }

L1_:;
  // st fcall = dx1
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L29() else D2()
  // L29()
  goto L29_;

L2_:;
  // c1 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c1 then L35() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L35()
    goto L35_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // sym6 = ldf inherits
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base6 = ldf inherits in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard6 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L4_:;
  // s = toForSeq(r17)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // l3 = length(s)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l3_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 25);
  // goto L5(i)
  // L5(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L5_;

L5_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // c2 = `<`.1(l3, i2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if c2 then L39() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L39()
    goto L39_;
  } else {
  // L15()
    goto L15_;
  }

L6_:;
  // r23 = `!`(r20)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c4 then L48() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L48()
    goto L48_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // inherits1 = ldf inherits in base
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r22 = dyn inherits1(dx3, "maov", FALSE)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits1_, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L47() else D9()
  // L47()
  goto L47_;

L8_:;
  // goto L9(i7)
  // L9(i7)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i7_;
  goto L9_;

L9_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard4 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L10_:;
  // l4 = ld result
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // c7 = `is.object`(l4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c7 then L63() else L64(i19, r27, l4, r27, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L63()
    goto L63_;
  } else {
  // L64(i19, r27, l4, r27, l4)
    Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r27_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l4_;
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r27_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l4_;
    goto L64_;
  }

L11_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r32 = dyn c6("manova", r29)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L62() else D15()
  // L62()
  goto L62_;

L12_:;
  // oldClass = ldf oldClass in base
  Rsh_Fir_reg_oldClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r31 = dyn oldClass(dx5)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L61() else D14()
  // L61()
  goto L61_;

L13_:;
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L67() else D17()
  // L67()
  goto L67_;

L14_:;
  // st result = dx9
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L5(i38)
  // L5(i38)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i38_;
  goto L5_;

L15_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args31[4];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args31[3] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym3 = ldf inherits
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base3 = ldf inherits in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard3 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L16_:;
  // result16 = ld result
  Rsh_Fir_reg_result16_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L99() else D33()
  // L99()
  goto L99_;

L17_:;
  // r52 = `!`(r50)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c9 then L81() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L81()
    goto L81_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard7 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L20_:;
  // l14 = ld result
  Rsh_Fir_reg_l14_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // class__1 = ldf `class<-`
  Rsh_Fir_reg_class__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L92() else D30()
  // L92()
  goto L92_;

L21_:;
  // c10 = ldf c in base
  Rsh_Fir_reg_c10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r60 = dyn c10("manova", r58)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c10_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L91() else D29()
  // L91()
  goto L91_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // r = dyn match_call()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 0, NULL, NULL, CCP, RHO);
  // check L23() else D1()
  // L23()
  goto L23_;

D1_:;
  // deopt 2 [r]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // st fcall = r
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // st Call = r
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // sym = ldf quote
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base = ldf quote in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r3 = dyn quote(<lang `::`(stats, aov)>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r3_1;
  goto L0_;

L25_:;
  // r1 = dyn base(<lang `::`(stats, aov)>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r1_1;
  goto L0_;

L26_:;
  // dr = tryDispatchBuiltin.0("[[<-", l, r2)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args40);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc then L28() else L27(r2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L28()
    goto L28_;
  } else {
  // L27(r2, dr)
    Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r2_1;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L27_;
  }

L27_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r8 = dyn ____(l2, r2, 1)
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_array_args42[2] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L1(r8)
  // L1(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L1_;

L28_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

D2_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p = prom<V +>{
  //   fcall = ld fcall;
  //   fcall1 = force? fcall;
  //   checkMissing(fcall1);
  //   return fcall1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_, CCP, RHO);
  // p1 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r10 = dyn parent_frame();
  //   return r10;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_1, CCP, RHO);
  // r12 = dyn eval(p, p1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L30() else D3()
  // L30()
  goto L30_;

D3_:;
  // deopt 17 [r12]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L30_:;
  // st result = r12
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym1 = ldf inherits
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base1 = ldf inherits in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard1 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L31_:;
  // result = ld result
  Rsh_Fir_reg_result = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L33() else D4()
  // L33()
  goto L33_;

L32_:;
  // r13 = dyn base1(<sym result>, "aovlist")
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L2(r13)
  // L2(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_1;
  goto L2_;

D4_:;
  // deopt 21 [result]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_result;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L33_:;
  // result1 = force? result
  Rsh_Fir_reg_result1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result);
  // checkMissing(result1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_result1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r15 = dyn inherits(result1, "aovlist", FALSE)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_result1_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L34() else D5()
  // L34()
  goto L34_;

D5_:;
  // deopt 26 [r15]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L2(r15)
  // L2(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_1;
  goto L2_;

L35_:;
  // sym2 = ldf seq_along
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base2 = ldf seq_along in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard2 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L36_:;
  // result2 = ld result
  Rsh_Fir_reg_result2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

L37_:;
  // r16 = dyn base2(<sym result>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_1;
  goto L4_;

D6_:;
  // deopt 28 [result2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_result2_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L38_:;
  // result3 = force? result2
  Rsh_Fir_reg_result3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result2_);
  // checkMissing(result3)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_result3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r18 = seq_along(result3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_result3_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L4(r18)
  // L4(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L4_;

L39_:;
  // Call = ld Call
  Rsh_Fir_reg_Call = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L73() else D20()
  // L73()
  goto L73_;

L40_:;
  // result4 = ld result
  Rsh_Fir_reg_result4_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L42() else D7()
  // L42()
  goto L42_;

L41_:;
  // r19 = dyn base3(<lang `[[`(result, i)>, "maov")
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L6(i2, r19)
  // L6(i2, r19)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_1;
  goto L6_;

D7_:;
  // deopt 33 [i2, result4]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_result4_;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L42_:;
  // result5 = force? result4
  Rsh_Fir_reg_result5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result4_);
  // checkMissing(result5)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_result5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(result5)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_result5_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c3 then L43() else L44(i2, result5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L43()
    goto L43_;
  } else {
  // L44(i2, result5)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_result7_ = Rsh_Fir_reg_result5_;
    goto L44_;
  }

L43_:;
  // dr2 = tryDispatchBuiltin.1("[[", result5)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_result5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc1 then L45() else L44(i2, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L45()
    goto L45_;
  } else {
  // L44(i2, dr2)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_result7_ = Rsh_Fir_reg_dr2_;
    goto L44_;
  }

L44_:;
  // i12 = ld i
  Rsh_Fir_reg_i12_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L46() else D8()
  // L46()
  goto L46_;

L45_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L7(i2, dx2)
  // L7(i2, dx2)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

D8_:;
  // deopt 35 [i9, result7, i12]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_result7_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_i12_;
  Rsh_Fir_deopt(35, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L46_:;
  // i13 = force? i12
  Rsh_Fir_reg_i13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i12_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r21 = dyn __(result7, i13)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_result7_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L7(i9, r21)
  // L7(i9, r21)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r21_1;
  goto L7_;

D9_:;
  // deopt 41 [i11, r22]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L6(i11, r22)
  // L6(i11, r22)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r22_;
  goto L6_;

L48_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L49() else D10()
  // L49()
  goto L49_;

D10_:;
  // deopt 44 [i7]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L49_:;
  // r24 = dyn stop("need multiple responses")
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L50() else D11()
  // L50()
  goto L50_;

D11_:;
  // deopt 46 [i7, r24]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L9(i7)
  // L9(i7)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i7_;
  goto L9_;

L52_:;
  // sym5 = ldf oldClass
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base5 = ldf oldClass in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard5 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L53_:;
  // r26 = dyn base4("manova", <lang oldClass(`[[`(result, i))>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L10(i16, r26)
  // L10(i16, r26)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L10_;

L54_:;
  // result8 = ld result
  Rsh_Fir_reg_result8_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L56() else D12()
  // L56()
  goto L56_;

L55_:;
  // r28 = dyn base5(<lang `[[`(result, i)>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L11(i16, r28)
  // L11(i16, r28)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L11_;

D12_:;
  // deopt 54 [i16, result8]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_result8_;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L56_:;
  // result9 = force? result8
  Rsh_Fir_reg_result9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result8_);
  // checkMissing(result9)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_result9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(result9)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_result9_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c5 then L57() else L58(i16, result9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L57()
    goto L57_;
  } else {
  // L58(i16, result9)
    Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_result11_ = Rsh_Fir_reg_result9_;
    goto L58_;
  }

L57_:;
  // dr4 = tryDispatchBuiltin.1("[[", result9)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_result9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc2 then L59() else L58(i16, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L59()
    goto L59_;
  } else {
  // L58(i16, dr4)
    Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_result11_ = Rsh_Fir_reg_dr4_;
    goto L58_;
  }

L58_:;
  // i27 = ld i
  Rsh_Fir_reg_i27_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L60() else D13()
  // L60()
  goto L60_;

L59_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L12(i16, dx4)
  // L12(i16, dx4)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L12_;

D13_:;
  // deopt 56 [i24, result11, i27]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_result11_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_i27_;
  Rsh_Fir_deopt(56, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L60_:;
  // i28 = force? i27
  Rsh_Fir_reg_i28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i27_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r30 = dyn __1(result11, i28)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_result11_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_i28_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L12(i24, r30)
  // L12(i24, r30)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r30_;
  goto L12_;

D14_:;
  // deopt 60 [i26, r31]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L11(i26, r31)
  // L11(i26, r31)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i26_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r31_;
  goto L11_;

D15_:;
  // deopt 62 [i22, r32]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(62, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L10(i22, r32)
  // L10(i22, r32)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r32_;
  goto L10_;

L63_:;
  // dr6 = tryDispatchBuiltin.1("[[", l4)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args71);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc3 then L65() else L64(i19, r27, l4, r27, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L65()
    goto L65_;
  } else {
  // L64(i19, r27, l4, r27, dr6)
    Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r27_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l4_;
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r27_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr6_;
    goto L64_;
  }

L64_:;
  // i33 = ld i
  Rsh_Fir_reg_i33_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L66() else D16()
  // L66()
  goto L66_;

L65_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L13(i19, r27, l4, r27, dx6)
  // L13(i19, r27, l4, r27, dx6)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L13_;

D16_:;
  // deopt 65 [i30, r35, l7, r36, l8, i33]
  SEXP Rsh_Fir_array_deopt_stack20[6];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i30_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack20[3] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack20[4] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack20[5] = Rsh_Fir_reg_i33_;
  Rsh_Fir_deopt(65, 6, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L66_:;
  // i34 = force? i33
  Rsh_Fir_reg_i34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i33_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r41 = dyn __2(l8, i34)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_i34_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L13(i30, r35, l7, r36, r41)
  // L13(i30, r35, l7, r36, r41)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i30_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r41_;
  goto L13_;

D17_:;
  // deopt 69 [i32, r39, l10, dx7, r40]
  SEXP Rsh_Fir_array_deopt_stack21[5];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack21[3] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack21[4] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(69, 5, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L67_:;
  // r42 = dyn class__(dx7, NULL, r40)
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args75[2] = Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L68() else D18()
  // L68()
  goto L68_;

D18_:;
  // deopt 71 [i32, r39, l10, r42]
  SEXP Rsh_Fir_array_deopt_stack22[4];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack22[3] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(71, 4, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L68_:;
  // c8 = `is.object`(l10)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c8 then L69() else L70(i32, r39, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L69()
    goto L69_;
  } else {
  // L70(i32, r39, l10)
    Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i32_;
    Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L70_;
  }

L69_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l10, r42)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args77);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc4 then L71() else L70(i32, r39, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L71()
    goto L71_;
  } else {
  // L70(i32, r39, dr8)
    Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i32_;
    Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr8_;
    goto L70_;
  }

L70_:;
  // i39 = ld i
  Rsh_Fir_reg_i39_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L72() else D19()
  // L72()
  goto L72_;

L71_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L14(i32, dx8)
  // L14(i32, dx8)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L14_;

D19_:;
  // deopt 72 [i36, r44, l12, r42, i39]
  SEXP Rsh_Fir_array_deopt_stack23[5];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i36_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_deopt_stack23[4] = Rsh_Fir_reg_i39_;
  Rsh_Fir_deopt(72, 5, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L72_:;
  // i40 = force? i39
  Rsh_Fir_reg_i40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i39_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r47 = dyn ____1(l12, r42, i40)
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args80[2] = Rsh_Fir_reg_i40_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L14(i36, r47)
  // L14(i36, r47)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i36_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r47_;
  goto L14_;

D20_:;
  // deopt 79 [Call]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_Call;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L73_:;
  // Call1 = force? Call
  Rsh_Fir_reg_Call1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Call);
  // checkMissing(Call1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_Call1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // l13 = ld result
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L74() else D21()
  // L74()
  goto L74_;

D21_:;
  // deopt 82 [Call1, l13, Call1]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_Call1_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_Call1_;
  Rsh_Fir_deopt(82, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L74_:;
  // r48 = dyn attr__(l13, NULL, "call", Call1)
  SEXP Rsh_Fir_array_args82[4];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args82[2] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args82[3] = Rsh_Fir_reg_Call1_;
  SEXP Rsh_Fir_array_arg_names31[4];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_array_arg_names31[3] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L75() else D22()
  // L75()
  goto L75_;

D22_:;
  // deopt 85 [Call1, r48]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_Call1_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L75_:;
  // st result = r48
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // goto L16()
  // L16()
  goto L16_;

L77_:;
  // result12 = ld result
  Rsh_Fir_reg_result12_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L79() else D23()
  // L79()
  goto L79_;

L78_:;
  // r49 = dyn base6(<sym result>, "maov")
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L17(r49)
  // L17(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L17_;

D23_:;
  // deopt 89 [result12]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_result12_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L79_:;
  // result13 = force? result12
  Rsh_Fir_reg_result13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result12_);
  // checkMissing(result13)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_result13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // inherits2 = ldf inherits in base
  Rsh_Fir_reg_inherits2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r51 = dyn inherits2(result13, "maov", FALSE)
  SEXP Rsh_Fir_array_args85[3];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_result13_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args85[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits2_, 3, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L80() else D24()
  // L80()
  goto L80_;

D24_:;
  // deopt 94 [r51]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L17(r51)
  // L17(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L17_;

L81_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L82() else D25()
  // L82()
  goto L82_;

D25_:;
  // deopt 97 []
  Rsh_Fir_deopt(97, 0, NULL, CCP, RHO);
  return R_NilValue;

L82_:;
  // r53 = dyn stop1("need multiple responses")
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L83() else D26()
  // L83()
  goto L83_;

D26_:;
  // deopt 99 [r53]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L19()
  // L19()
  goto L19_;

L85_:;
  // sym8 = ldf oldClass
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base8 = ldf oldClass in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard8 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L86_:;
  // r55 = dyn base7("manova", <lang oldClass(result)>)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L20(r55)
  // L20(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L20_;

L87_:;
  // result14 = ld result
  Rsh_Fir_reg_result14_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L89() else D27()
  // L89()
  goto L89_;

L88_:;
  // r57 = dyn base8(<sym result>)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L21(r57)
  // L21(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L21_;

D27_:;
  // deopt 107 [result14]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_result14_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L89_:;
  // result15 = force? result14
  Rsh_Fir_reg_result15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result14_);
  // checkMissing(result15)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_result15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // oldClass1 = ldf oldClass in base
  Rsh_Fir_reg_oldClass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r59 = dyn oldClass1(result15)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_result15_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass1_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L90() else D28()
  // L90()
  goto L90_;

D28_:;
  // deopt 110 [r59]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L21(r59)
  // L21(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L21_;

D29_:;
  // deopt 112 [r60]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L20(r60)
  // L20(r60)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r60_;
  goto L20_;

D30_:;
  // deopt 114 [r56, l14, r56]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(114, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L92_:;
  // r61 = dyn class__1(l14, NULL, r56)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args92[2] = Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__1_, 3, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L93() else D31()
  // L93()
  goto L93_;

D31_:;
  // deopt 116 [r56, r61]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(116, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L93_:;
  // st result = r61
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // Call3 = ld Call
  Rsh_Fir_reg_Call3_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L94() else D32()
  // L94()
  goto L94_;

D32_:;
  // deopt 118 [Call3]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_Call3_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L94_:;
  // Call4 = force? Call3
  Rsh_Fir_reg_Call4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Call3_);
  // checkMissing(Call4)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_Call4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // l15 = ld result
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // c11 = `is.object`(l15)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if c11 then L96() else L97(Call4, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L96()
    goto L96_;
  } else {
  // L97(Call4, l15)
    Rsh_Fir_reg_Call6_ = Rsh_Fir_reg_Call4_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L97_;
  }

L95_:;
  // st result = dx11
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // goto L16()
  // L16()
  goto L16_;

L96_:;
  // dr10 = tryDispatchBuiltin.0("$<-", l15, Call4)
  SEXP Rsh_Fir_array_args95[3];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args95[2] = Rsh_Fir_reg_Call4_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args95);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if dc5 then L98() else L97(Call4, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L98()
    goto L98_;
  } else {
  // L97(Call4, dr10)
    Rsh_Fir_reg_Call6_ = Rsh_Fir_reg_Call4_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr10_;
    goto L97_;
  }

L97_:;
  // r62 = `$<-`(l17, <sym call>, Call4)
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args97[2] = Rsh_Fir_reg_Call4_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L95(Call6, r62)
  // L95(Call6, r62)
  Rsh_Fir_reg_Call8_ = Rsh_Fir_reg_Call6_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r62_;
  goto L95_;

L98_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L95(Call4, dx10)
  // L95(Call4, dx10)
  Rsh_Fir_reg_Call8_ = Rsh_Fir_reg_Call4_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L95_;

D33_:;
  // deopt 123 [result16]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_result16_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L99_:;
  // result17 = force? result16
  Rsh_Fir_reg_result17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result16_);
  // checkMissing(result17)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_result17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return result17
  return Rsh_Fir_reg_result17_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_(SEXP CCP, SEXP RHO) {
  // fcall = ld fcall
  Rsh_Fir_reg_fcall = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // fcall1 = force? fcall
  Rsh_Fir_reg_fcall1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fcall);
  // checkMissing(fcall1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_fcall1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return fcall1
  return Rsh_Fir_reg_fcall1_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_1(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // r10 = dyn parent_frame()
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
