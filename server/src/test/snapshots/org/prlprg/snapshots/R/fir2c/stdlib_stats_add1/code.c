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
SEXP Rsh_Fir_user_function_inner2300758201_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2300758201_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_options;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_require;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_require1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_lm;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_add1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_drop1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_example;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_drop2_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_drop3_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_add2_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_options1_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r31_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2300758201
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2300758201_, RHO, CCP);
  // st add1 = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r1 = dyn options[digits](5.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // st od = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf require
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf require in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // sym1 = ldf require
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf require in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L4_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

L5_:;
  // r2 = dyn base(<sym graphics>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // lm = ldf lm
  Rsh_Fir_reg_lm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

L6_:;
  // p = prom<V +>{
  //   graphics = ld graphics;
  //   graphics1 = force? graphics;
  //   checkMissing(graphics1);
  //   return graphics1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn require(p)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

L8_:;
  // require1 = ldf require
  Rsh_Fir_reg_require1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

L9_:;
  // r6 = dyn base1(<sym utils>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D3_:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0()
  // L0()
  goto L0_;

L10_:;
  // p1 = prom<V +>{
  //   utils = ld utils;
  //   utils1 = force? utils;
  //   checkMissing(utils1);
  //   return utils1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r9 = dyn require1(p1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

L12_:;
  // p2 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r10 = dyn __(<sym Fertility>, <sym .>);
  //   return r10;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   swiss = ld swiss;
  //   swiss1 = force? swiss;
  //   checkMissing(swiss1);
  //   return swiss1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r13 = dyn lm[, data](p2, p3)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lm, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L13() else D7()
  // L13()
  goto L13_;

D5_:;
  // deopt 18 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 24 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L1()
  // L1()
  goto L1_;

L13_:;
  // st lm1 = r13
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // add1 = ldf add1
  Rsh_Fir_reg_add1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L14() else D8()
  // L14()
  goto L14_;

D8_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p4 = prom<V +>{
  //   lm1 = ld lm1;
  //   lm2 = force? lm1;
  //   checkMissing(lm2);
  //   return lm2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   __1 = ldf `~` in base;
  //   r15 = dyn __1(<lang `+`(I(`^`(Education, 2.0)), `^`(., 2.0))>);
  //   return r15;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r17 = dyn add1(p4, p5)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_add1_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L15() else D9()
  // L15()
  goto L15_;

D9_:;
  // deopt 30 [r17]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // drop1 = ldf drop1
  Rsh_Fir_reg_drop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L16() else D10()
  // L16()
  goto L16_;

D10_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p6 = prom<V +>{
  //   lm3 = ld lm1;
  //   lm4 = force? lm3;
  //   checkMissing(lm4);
  //   return lm4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r19 = dyn drop1[, test](p6, "F")
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_drop1_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L17() else D11()
  // L17()
  goto L17_;

D11_:;
  // deopt 36 [r19]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L17_:;
  // example = ldf example
  Rsh_Fir_reg_example = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L18() else D12()
  // L18()
  goto L18_;

D12_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p7 = prom<V +>{
  //   glm = ld glm;
  //   glm1 = force? glm;
  //   checkMissing(glm1);
  //   return glm1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r21 = dyn example[, echo](p7, FALSE)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_example, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L19() else D13()
  // L19()
  goto L19_;

D13_:;
  // deopt 42 [r21]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L19_:;
  // drop2 = ldf drop1
  Rsh_Fir_reg_drop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L20() else D14()
  // L20()
  goto L20_;

D14_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p8 = prom<V +>{
  //   glm_D93 = ld `glm.D93`;
  //   glm_D94 = force? glm_D93;
  //   checkMissing(glm_D94);
  //   return glm_D94;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r23 = dyn drop2[, test](p8, "Chisq")
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_drop2_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L21() else D15()
  // L21()
  goto L21_;

D15_:;
  // deopt 48 [r23]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L21_:;
  // drop3 = ldf drop1
  Rsh_Fir_reg_drop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L22() else D16()
  // L22()
  goto L22_;

D16_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p9 = prom<V +>{
  //   glm_D95 = ld `glm.D93`;
  //   glm_D96 = force? glm_D95;
  //   checkMissing(glm_D96);
  //   return glm_D96;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r25 = dyn drop3[, test](p9, "F")
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_drop3_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L23() else D17()
  // L23()
  goto L23_;

D17_:;
  // deopt 54 [r25]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L23_:;
  // add2 = ldf add1
  Rsh_Fir_reg_add2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L24() else D18()
  // L24()
  goto L24_;

D18_:;
  // deopt 56 []
  Rsh_Fir_deopt(56, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p10 = prom<V +>{
  //   glm_D97 = ld `glm.D93`;
  //   glm_D98 = force? glm_D97;
  //   checkMissing(glm_D98);
  //   return glm_D98;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   __2 = ldf `~` in base;
  //   r27 = dyn __2(<lang `*`(outcome, treatment)>);
  //   return r27;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r29 = dyn add2[, scope, test](p10, p11, "Rao")
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_add2_, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L25() else D19()
  // L25()
  goto L25_;

D19_:;
  // deopt 62 [r29]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L25_:;
  // options1 = ldf options
  Rsh_Fir_reg_options1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L26() else D20()
  // L26()
  goto L26_;

D20_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p12 = prom<V +>{
  //   od = ld od;
  //   od1 = force? od;
  //   checkMissing(od1);
  //   return od1;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r31 = dyn options1(p12)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L27() else D21()
  // L27()
  goto L27_;

D21_:;
  // deopt 66 [r31]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L27_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r31
  return Rsh_Fir_reg_r31_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_graphics;
  SEXP Rsh_Fir_reg_graphics1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // graphics = ld graphics
  Rsh_Fir_reg_graphics = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // graphics1 = force? graphics
  Rsh_Fir_reg_graphics1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_graphics);
  // checkMissing(graphics1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_graphics1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return graphics1
  return Rsh_Fir_reg_graphics1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_utils;
  SEXP Rsh_Fir_reg_utils1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // utils = ld utils
  Rsh_Fir_reg_utils = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // utils1 = force? utils
  Rsh_Fir_reg_utils1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_utils);
  // checkMissing(utils1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_utils1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return utils1
  return Rsh_Fir_reg_utils1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r10 = dyn __(<sym Fertility>, <sym .>)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_swiss;
  SEXP Rsh_Fir_reg_swiss1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // swiss = ld swiss
  Rsh_Fir_reg_swiss = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // swiss1 = force? swiss
  Rsh_Fir_reg_swiss1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_swiss);
  // checkMissing(swiss1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_swiss1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return swiss1
  return Rsh_Fir_reg_swiss1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lm1_;
  SEXP Rsh_Fir_reg_lm2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lm1 = ld lm1
  Rsh_Fir_reg_lm1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // lm2 = force? lm1
  Rsh_Fir_reg_lm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lm1_);
  // checkMissing(lm2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_lm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return lm2
  return Rsh_Fir_reg_lm2_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __1 = ldf `~` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r15 = dyn __1(<lang `+`(I(`^`(Education, 2.0)), `^`(., 2.0))>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lm3_;
  SEXP Rsh_Fir_reg_lm4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lm3 = ld lm1
  Rsh_Fir_reg_lm3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // lm4 = force? lm3
  Rsh_Fir_reg_lm4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lm3_);
  // checkMissing(lm4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_lm4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return lm4
  return Rsh_Fir_reg_lm4_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_glm;
  SEXP Rsh_Fir_reg_glm1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // glm = ld glm
  Rsh_Fir_reg_glm = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // glm1 = force? glm
  Rsh_Fir_reg_glm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_glm);
  // checkMissing(glm1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_glm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return glm1
  return Rsh_Fir_reg_glm1_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_glm_D93_;
  SEXP Rsh_Fir_reg_glm_D94_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // glm_D93 = ld `glm.D93`
  Rsh_Fir_reg_glm_D93_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // glm_D94 = force? glm_D93
  Rsh_Fir_reg_glm_D94_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_glm_D93_);
  // checkMissing(glm_D94)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_glm_D94_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return glm_D94
  return Rsh_Fir_reg_glm_D94_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_glm_D95_;
  SEXP Rsh_Fir_reg_glm_D96_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // glm_D95 = ld `glm.D93`
  Rsh_Fir_reg_glm_D95_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // glm_D96 = force? glm_D95
  Rsh_Fir_reg_glm_D96_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_glm_D95_);
  // checkMissing(glm_D96)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_glm_D96_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return glm_D96
  return Rsh_Fir_reg_glm_D96_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_glm_D97_;
  SEXP Rsh_Fir_reg_glm_D98_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // glm_D97 = ld `glm.D93`
  Rsh_Fir_reg_glm_D97_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // glm_D98 = force? glm_D97
  Rsh_Fir_reg_glm_D98_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_glm_D97_);
  // checkMissing(glm_D98)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_glm_D98_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return glm_D98
  return Rsh_Fir_reg_glm_D98_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __2 = ldf `~` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r27 = dyn __2(<lang `*`(outcome, treatment)>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r27
  return Rsh_Fir_reg_r27_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_od;
  SEXP Rsh_Fir_reg_od1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // od = ld od
  Rsh_Fir_reg_od = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // od1 = force? od
  Rsh_Fir_reg_od1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_od);
  // checkMissing(od1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_od1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return od1
  return Rsh_Fir_reg_od1_;
}
SEXP Rsh_Fir_user_function_inner2300758201_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2300758201 dynamic dispatch ([object, scope, `...`])

  return Rsh_Fir_user_version_inner2300758201_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2300758201_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2300758201 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2300758201/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_object;
  SEXP Rsh_Fir_reg_scope;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_scope = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st scope = scope
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_scope, RHO);
  (void)(Rsh_Fir_reg_scope);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
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
  return Rsh_Fir_reg_r1_1;

L1_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r2 = dyn UseMethod("add1")
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("add1")
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
